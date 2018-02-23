import tweepy
Consumer_Key="M0VrRCQ9iKt0FDnYVokjWsPeL"
Consumer_Secret="sjxJmlqK9I4NoYpOsRdFhuxwoxjlLR6LtoalBE88LOKefYq7hU"
Access_Token="961406153124061184-8aJoi1B9qCdDAK7e0viKuSdqkAD77Pu"
Access_Token_Secret="yuHv2uckSehw3nYObdIlIW8O5apgRBtAbSS9Od5ekklGP"
auth=tweepy.OAuthHandler(Consumer_Key,Consumer_Secret)
auth.set_access_token(Access_Token,Access_Token_Secret)
api=tweepy.API(auth)
keyword='증권'
result=[]
for i in range(1,3):
    tweets=api.search(keyword)
    for tweet in tweets:
        result.append(tweet)
print(len(result))
print(type(result[0]))
