import random

def input_number_of_chairman():
    return int(input("Enter number student chairman: "))

def generate_votes(number_of_chairman, total_students):
    votes = [random.randint(0, number_of_chairman) for _ in range(total_students)]
    return votes

def count_votes(votes):
    num_votes = len(votes)
    num_not_votes = votes.count(0)
    num_votes_cast = num_votes - num_not_votes
    vote_percent = (num_votes_cast / num_votes) * 100
    return num_votes_cast, num_not_votes, vote_percent

def print_election_results(votes):
    unique_votes = list(set(votes))
    unique_votes.sort()
    
    print("Result of election chairman")
    print("-" * 29)
    print("No. Votes Percent(%)")
    print("-" * 29)
    
    for i, vote in enumerate(unique_votes):
        if vote == 0:
            continue
        num_votes = votes.count(vote)
        vote_percent = (num_votes / len(votes)) * 100
        print(f"{i}.   {num_votes }   {vote_percent:.2f}")
    print("-" * 29)
    total_votes_cast = len(votes) - votes.count(0)
    print(f"Total {total_votes_cast} 100.00")

def main():
    num_chairman = input_number_of_chairman()
    total_students = 500
    
    votes = generate_votes(num_chairman, total_students)
    num_votes_cast, num_not_votes, vote_percent = count_votes(votes)
    
    print(f"Number of right student: {total_students}")
    print(f"Number of Votes : {num_votes_cast} =  {vote_percent:.2f}%")
    print(f"Number of not Votes: {num_not_votes} = {100 - vote_percent:.2f}%")
    
    print_election_results(votes)

if __name__ == "__main__":
    main()
