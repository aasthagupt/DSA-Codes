print("***WELCOME TO THE WORD GUSSING GAME***")
name = input("enter your name ?")
print("Hello" + name +
      ",\n you have to guess all the 10 games to Win the game\n Let's start")
movies = [{"actualName": "The Mummy", "partialName": "_he M_mm_"},
          {"actualName": "Hercules", "partialName": "H_rc_l_s"},
          {"actualName": "Spiderman", "partialName": "Sp_d_r_a_"},
          {"actualName": "Avengers", "partialName": "_v_nge_s"},
          {"actualName": "Bellbottom", "partialName": "B_ll_o_tom"},
          {"actualName": "Mortal Kombat", "partialName": "M_r_al K_m_a_"},
          {"actualName": "The Shawshank Redemption",
              "partialName": "T_e S_a_sha_k R_de_pti_n"},
          {"actualName": "The Godfather", "partialName": "_h_ G_d_ath_r"},
          {"actualName": "The Dark Knight", "partialName": "T_e D__k K_i__t"},
          {"actualName": "Pulp Fiction", "partialName": "P__p F_c_i_n"}
          ]

lives = 8
movieIndex = 0

while (lives > 0 and movieIndex < len(movies)):
    print("Guess the movie name : ", movies[movieIndex]["partialName"])
    guess = input("Type the movie")
    if(guess == movies[movieIndex]["actualName"]):
        movieIndex = movieIndex + 1
        print("*You Got it write  (CORRECT)*")
    else:
        print("Wrong guess")
        lives = lives - 1

if(movieIndex == len(movies)):
    print("hurreyy******YOU WON :) ******* !!!!")
else:
    print("Try next time.")
