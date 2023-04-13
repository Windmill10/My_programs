/*1. function to generate a 4 digit number (completed with func)
2. function to read a 4 digit number and return As and Bs
3. function to guess numbers
4. extend functions to work with more than four digits
5. conditions: do numbers start with 0? can numbers be repetitive */
#include "main.h"

std::list<int> sample = {9876,9875,9874,9873,9872,9871,9867,9865,9864,9863,9862,9861,9857,9856,9854,9853,9852,9851,9847,9846,9845,9843,9842,9841,9837,9836,9835,9834,9832,9831,9827,9826,9825,9824,9823,9821,9817,9816,9815,9814,9813,9812,9786,9785,9784,9783,9782,9781,9768,9765,9764,9763,9762,9761,9758,9756,9754,9753,9752,9751,9748,9746,9745,9743,9742,9741,9738,9736,9735,9734,9732,9731,9728,9726,9725,9724,9723,9721,9718,9716,9715,9714,9713,9712,9687,9685,9684,9683,9682,9681,9678,9675,9674,9673,9672,9671,9658,9657,9654,9653,9652,9651,9648,9647,9645,9643,9642,9641,9638,9637,9635,9634,9632,9631,9628,9627,9625,9624,9623,9621,9618,9617,9615,9614,9613,9612,9587,9586,9584,9583,9582,9581,9578,9576,9574,9573,9572,9571,9568,9567,9564,9563,9562,9561,9548,9547,9546,9543,9542,9541,9538,9537,9536,9534,9532,9531,9528,9527,9526,9524,9523,9521,9518,9517,9516,9514,9513,9512,9487,9486,9485,9483,9482,9481,9478,9476,9475,9473,9472,9471,9468,9467,9465,9463,9462,9461,9458,9457,9456,9453,9452,9451,9438,9437,9436,9435,9432,9431,9428,9427,9426,9425,9423,9421,9418,9417,9416,9415,9413,9412,9387,9386,9385,9384,9382,9381,9378,9376,9375,9374,9372,9371,9368,9367,9365,9364,9362,9361,9358,9357,9356,9354,9352,9351,9348,9347,9346,9345,9342,9341,9328,9327,9326,9325,9324,9321,9318,9317,9316,9315,9314,9312,9287,9286,9285,9284,9283,9281,9278,9276,9275,9274,9273,9271,9268,9267,9265,9264,9263,9261,9258,9257,9256,9254,9253,9251,9248,9247,9246,9245,9243,9241,9238,9237,9236,9235,9234,9231,9218,9217,9216,9215,9214,9213,9187,9186,9185,9184,9183,9182,9178,9176,9175,9174,9173,9172,9168,9167,9165,9164,9163,9162,9158,9157,9156,9154,9153,9152,9148,9147,9146,9145,9143,9142,9138,9137,9136,9135,9134,9132,9128,9127,9126,9125,9124,9123,8976,8975,8974,8973,8972,8971,8967,8965,8964,8963,8962,8961,8957,8956,8954,8953,8952,8951,8947,8946,8945,8943,8942,8941,8937,8936,8935,8934,8932,8931,8927,8926,8925,8924,8923,8921,8917,8916,8915,8914,8913,8912,8796,8795,8794,8793,8792,8791,8769,8765,8764,8763,8762,8761,8759,8756,8754,8753,8752,8751,8749,8746,8745,8743,8742,8741,8739,8736,8735,8734,8732,8731,8729,8726,8725,8724,8723,8721,8719,8716,8715,8714,8713,8712,8697,8695,8694,8693,8692,8691,8679,8675,8674,8673,8672,8671,8659,8657,8654,8653,8652,8651,8649,8647,8645,8643,8642,8641,8639,8637,8635,8634,8632,8631,8629,8627,8625,8624,8623,8621,8619,8617,8615,8614,8613,8612,8597,8596,8594,8593,8592,8591,8579,8576,8574,8573,8572,8571,8569,8567,8564,8563,8562,8561,8549,8547,8546,8543,8542,8541,8539,8537,8536,8534,8532,8531,8529,8527,8526,8524,8523,8521,8519,8517,8516,8514,8513,8512,8497,8496,8495,8493,8492,8491,8479,8476,8475,8473,8472,8471,8469,8467,8465,8463,8462,8461,8459,8457,8456,8453,8452,8451,8439,8437,8436,8435,8432,8431,8429,8427,8426,8425,8423,8421,8419,8417,8416,8415,8413,8412,8397,8396,8395,8394,8392,8391,8379,8376,8375,8374,8372,8371,8369,8367,8365,8364,8362,8361,8359,8357,8356,8354,8352,8351,8349,8347,8346,8345,8342,8341,8329,8327,8326,8325,8324,8321,8319,8317,8316,8315,8314,8312,8297,8296,8295,8294,8293,8291,8279,8276,8275,8274,8273,8271,8269,8267,8265,8264,8263,8261,8259,8257,8256,8254,8253,8251,8249,8247,8246,8245,8243,8241,8239,8237,8236,8235,8234,8231,8219,8217,8216,8215,8214,8213,8197,8196,8195,8194,8193,8192,8179,8176,8175,8174,8173,8172,8169,8167,8165,8164,8163,8162,8159,8157,8156,8154,8153,8152,8149,8147,8146,8145,8143,8142,8139,8137,8136,8135,8134,8132,8129,8127,8126,8125,8124,8123,7986,7985,7984,7983,7982,7981,7968,7965,7964,7963,7962,7961,7958,7956,7954,7953,7952,7951,7948,7946,7945,7943,7942,7941,7938,7936,7935,7934,7932,7931,7928,7926,7925,7924,7923,7921,7918,7916,7915,7914,7913,7912,7896,7895,7894,7893,7892,7891,7869,7865,7864,7863,7862,7861,7859,7856,7854,7853,7852,7851,7849,7846,7845,7843,7842,7841,7839,7836,7835,7834,7832,7831,7829,7826,7825,7824,7823,7821,7819,7816,7815,7814,7813,7812,7698,7695,7694,7693,7692,7691,7689,7685,7684,7683,7682,7681,7659,7658,7654,7653,7652,7651,7649,7648,7645,7643,7642,7641,7639,7638,7635,7634,7632,7631,7629,7628,7625,7624,7623,7621,7619,7618,7615,7614,7613,7612,7598,7596,7594,7593,7592,7591,7589,7586,7584,7583,7582,7581,7569,7568,7564,7563,7562,7561,7549,7548,7546,7543,7542,7541,7539,7538,7536,7534,7532,7531,7529,7528,7526,7524,7523,7521,7519,7518,7516,7514,7513,7512,7498,7496,7495,7493,7492,7491,7489,7486,7485,7483,7482,7481,7469,7468,7465,7463,7462,7461,7459,7458,7456,7453,7452,7451,7439,7438,7436,7435,7432,7431,7429,7428,7426,7425,7423,7421,7419,7418,7416,7415,7413,7412,7398,7396,7395,7394,7392,7391,7389,7386,7385,7384,7382,7381,7369,7368,7365,7364,7362,7361,7359,7358,7356,7354,7352,7351,7349,7348,7346,7345,7342,7341,7329,7328,7326,7325,7324,7321,7319,7318,7316,7315,7314,7312,7298,7296,7295,7294,7293,7291,7289,7286,7285,7284,7283,7281,7269,7268,7265,7264,7263,7261,7259,7258,7256,7254,7253,7251,7249,7248,7246,7245,7243,7241,7239,7238,7236,7235,7234,7231,7219,7218,7216,7215,7214,7213,7198,7196,7195,7194,7193,7192,7189,7186,7185,7184,7183,7182,7169,7168,7165,7164,7163,7162,7159,7158,7156,7154,7153,7152,7149,7148,7146,7145,7143,7142,7139,7138,7136,7135,7134,7132,7129,7128,7126,7125,7124,7123,6987,6985,6984,6983,6982,6981,6978,6975,6974,6973,6972,6971,6958,6957,6954,6953,6952,6951,6948,6947,6945,6943,6942,6941,6938,6937,6935,6934,6932,6931,6928,6927,6925,6924,6923,6921,6918,6917,6915,6914,6913,6912,6897,6895,6894,6893,6892,6891,6879,6875,6874,6873,6872,6871,6859,6857,6854,6853,6852,6851,6849,6847,6845,6843,6842,6841,6839,6837,6835,6834,6832,6831,6829,6827,6825,6824,6823,6821,6819,6817,6815,6814,6813,6812,6798,6795,6794,6793,6792,6791,6789,6785,6784,6783,6782,6781,6759,6758,6754,6753,6752,6751,6749,6748,6745,6743,6742,6741,6739,6738,6735,6734,6732,6731,6729,6728,6725,6724,6723,6721,6719,6718,6715,6714,6713,6712,6598,6597,6594,6593,6592,6591,6589,6587,6584,6583,6582,6581,6579,6578,6574,6573,6572,6571,6549,6548,6547,6543,6542,6541,6539,6538,6537,6534,6532,6531,6529,6528,6527,6524,6523,6521,6519,6518,6517,6514,6513,6512,6498,6497,6495,6493,6492,6491,6489,6487,6485,6483,6482,6481,6479,6478,6475,6473,6472,6471,6459,6458,6457,6453,6452,6451,6439,6438,6437,6435,6432,6431,6429,6428,6427,6425,6423,6421,6419,6418,6417,6415,6413,6412,6398,6397,6395,6394,6392,6391,6389,6387,6385,6384,6382,6381,6379,6378,6375,6374,6372,6371,6359,6358,6357,6354,6352,6351,6349,6348,6347,6345,6342,6341,6329,6328,6327,6325,6324,6321,6319,6318,6317,6315,6314,6312,6298,6297,6295,6294,6293,6291,6289,6287,6285,6284,6283,6281,6279,6278,6275,6274,6273,6271,6259,6258,6257,6254,6253,6251,6249,6248,6247,6245,6243,6241,6239,6238,6237,6235,6234,6231,6219,6218,6217,6215,6214,6213,6198,6197,6195,6194,6193,6192,6189,6187,6185,6184,6183,6182,6179,6178,6175,6174,6173,6172,6159,6158,6157,6154,6153,6152,6149,6148,6147,6145,6143,6142,6139,6138,6137,6135,6134,6132,6129,6128,6127,6125,6124,6123,5987,5986,5984,5983,5982,5981,5978,5976,5974,5973,5972,5971,5968,5967,5964,5963,5962,5961,5948,5947,5946,5943,5942,5941,5938,5937,5936,5934,5932,5931,5928,5927,5926,5924,5923,5921,5918,5917,5916,5914,5913,5912,5897,5896,5894,5893,5892,5891,5879,5876,5874,5873,5872,5871,5869,5867,5864,5863,5862,5861,5849,5847,5846,5843,5842,5841,5839,5837,5836,5834,5832,5831,5829,5827,5826,5824,5823,5821,5819,5817,5816,5814,5813,5812,5798,5796,5794,5793,5792,5791,5789,5786,5784,5783,5782,5781,5769,5768,5764,5763,5762,5761,5749,5748,5746,5743,5742,5741,5739,5738,5736,5734,5732,5731,5729,5728,5726,5724,5723,5721,5719,5718,5716,5714,5713,5712,5698,5697,5694,5693,5692,5691,5689,5687,5684,5683,5682,5681,5679,5678,5674,5673,5672,5671,5649,5648,5647,5643,5642,5641,5639,5638,5637,5634,5632,5631,5629,5628,5627,5624,5623,5621,5619,5618,5617,5614,5613,5612,5498,5497,5496,5493,5492,5491,5489,5487,5486,5483,5482,5481,5479,5478,5476,5473,5472,5471,5469,5468,5467,5463,5462,5461,5439,5438,5437,5436,5432,5431,5429,5428,5427,5426,5423,5421,5419,5418,5417,5416,5413,5412,5398,5397,5396,5394,5392,5391,5389,5387,5386,5384,5382,5381,5379,5378,5376,5374,5372,5371,5369,5368,5367,5364,5362,5361,5349,5348,5347,5346,5342,5341,5329,5328,5327,5326,5324,5321,5319,5318,5317,5316,5314,5312,5298,5297,5296,5294,5293,5291,5289,5287,5286,5284,5283,5281,5279,5278,5276,5274,5273,5271,5269,5268,5267,5264,5263,5261,5249,5248,5247,5246,5243,5241,5239,5238,5237,5236,5234,5231,5219,5218,5217,5216,5214,5213,5198,5197,5196,5194,5193,5192,5189,5187,5186,5184,5183,5182,5179,5178,5176,5174,5173,5172,5169,5168,5167,5164,5163,5162,5149,5148,5147,5146,5143,5142,5139,5138,5137,5136,5134,5132,5129,5128,5127,5126,5124,5123,4987,4986,4985,4983,4982,4981,4978,4976,4975,4973,4972,4971,4968,4967,4965,4963,4962,4961,4958,4957,4956,4953,4952,4951,4938,4937,4936,4935,4932,4931,4928,4927,4926,4925,4923,4921,4918,4917,4916,4915,4913,4912,4897,4896,4895,4893,4892,4891,4879,4876,4875,4873,4872,4871,4869,4867,4865,4863,4862,4861,4859,4857,4856,4853,4852,4851,4839,4837,4836,4835,4832,4831,4829,4827,4826,4825,4823,4821,4819,4817,4816,4815,4813,4812,4798,4796,4795,4793,4792,4791,4789,4786,4785,4783,4782,4781,4769,4768,4765,4763,4762,4761,4759,4758,4756,4753,4752,4751,4739,4738,4736,4735,4732,4731,4729,4728,4726,4725,4723,4721,4719,4718,4716,4715,4713,4712,4698,4697,4695,4693,4692,4691,4689,4687,4685,4683,4682,4681,4679,4678,4675,4673,4672,4671,4659,4658,4657,4653,4652,4651,4639,4638,4637,4635,4632,4631,4629,4628,4627,4625,4623,4621,4619,4618,4617,4615,4613,4612,4598,4597,4596,4593,4592,4591,4589,4587,4586,4583,4582,4581,4579,4578,4576,4573,4572,4571,4569,4568,4567,4563,4562,4561,4539,4538,4537,4536,4532,4531,4529,4528,4527,4526,4523,4521,4519,4518,4517,4516,4513,4512,4398,4397,4396,4395,4392,4391,4389,4387,4386,4385,4382,4381,4379,4378,4376,4375,4372,4371,4369,4368,4367,4365,4362,4361,4359,4358,4357,4356,4352,4351,4329,4328,4327,4326,4325,4321,4319,4318,4317,4316,4315,4312,4298,4297,4296,4295,4293,4291,4289,4287,4286,4285,4283,4281,4279,4278,4276,4275,4273,4271,4269,4268,4267,4265,4263,4261,4259,4258,4257,4256,4253,4251,4239,4238,4237,4236,4235,4231,4219,4218,4217,4216,4215,4213,4198,4197,4196,4195,4193,4192,4189,4187,4186,4185,4183,4182,4179,4178,4176,4175,4173,4172,4169,4168,4167,4165,4163,4162,4159,4158,4157,4156,4153,4152,4139,4138,4137,4136,4135,4132,4129,4128,4127,4126,4125,4123,3987,3986,3985,3984,3982,3981,3978,3976,3975,3974,3972,3971,3968,3967,3965,3964,3962,3961,3958,3957,3956,3954,3952,3951,3948,3947,3946,3945,3942,3941,3928,3927,3926,3925,3924,3921,3918,3917,3916,3915,3914,3912,3897,3896,3895,3894,3892,3891,3879,3876,3875,3874,3872,3871,3869,3867,3865,3864,3862,3861,3859,3857,3856,3854,3852,3851,3849,3847,3846,3845,3842,3841,3829,3827,3826,3825,3824,3821,3819,3817,3816,3815,3814,3812,3798,3796,3795,3794,3792,3791,3789,3786,3785,3784,3782,3781,3769,3768,3765,3764,3762,3761,3759,3758,3756,3754,3752,3751,3749,3748,3746,3745,3742,3741,3729,3728,3726,3725,3724,3721,3719,3718,3716,3715,3714,3712,3698,3697,3695,3694,3692,3691,3689,3687,3685,3684,3682,3681,3679,3678,3675,3674,3672,3671,3659,3658,3657,3654,3652,3651,3649,3648,3647,3645,3642,3641,3629,3628,3627,3625,3624,3621,3619,3618,3617,3615,3614,3612,3598,3597,3596,3594,3592,3591,3589,3587,3586,3584,3582,3581,3579,3578,3576,3574,3572,3571,3569,3568,3567,3564,3562,3561,3549,3548,3547,3546,3542,3541,3529,3528,3527,3526,3524,3521,3519,3518,3517,3516,3514,3512,3498,3497,3496,3495,3492,3491,3489,3487,3486,3485,3482,3481,3479,3478,3476,3475,3472,3471,3469,3468,3467,3465,3462,3461,3459,3458,3457,3456,3452,3451,3429,3428,3427,3426,3425,3421,3419,3418,3417,3416,3415,3412,3298,3297,3296,3295,3294,3291,3289,3287,3286,3285,3284,3281,3279,3278,3276,3275,3274,3271,3269,3268,3267,3265,3264,3261,3259,3258,3257,3256,3254,3251,3249,3248,3247,3246,3245,3241,3219,3218,3217,3216,3215,3214,3198,3197,3196,3195,3194,3192,3189,3187,3186,3185,3184,3182,3179,3178,3176,3175,3174,3172,3169,3168,3167,3165,3164,3162,3159,3158,3157,3156,3154,3152,3149,3148,3147,3146,3145,3142,3129,3128,3127,3126,3125,3124,2987,2986,2985,2984,2983,2981,2978,2976,2975,2974,2973,2971,2968,2967,2965,2964,2963,2961,2958,2957,2956,2954,2953,2951,2948,2947,2946,2945,2943,2941,2938,2937,2936,2935,2934,2931,2918,2917,2916,2915,2914,2913,2897,2896,2895,2894,2893,2891,2879,2876,2875,2874,2873,2871,2869,2867,2865,2864,2863,2861,2859,2857,2856,2854,2853,2851,2849,2847,2846,2845,2843,2841,2839,2837,2836,2835,2834,2831,2819,2817,2816,2815,2814,2813,2798,2796,2795,2794,2793,2791,2789,2786,2785,2784,2783,2781,2769,2768,2765,2764,2763,2761,2759,2758,2756,2754,2753,2751,2749,2748,2746,2745,2743,2741,2739,2738,2736,2735,2734,2731,2719,2718,2716,2715,2714,2713,2698,2697,2695,2694,2693,2691,2689,2687,2685,2684,2683,2681,2679,2678,2675,2674,2673,2671,2659,2658,2657,2654,2653,2651,2649,2648,2647,2645,2643,2641,2639,2638,2637,2635,2634,2631,2619,2618,2617,2615,2614,2613,2598,2597,2596,2594,2593,2591,2589,2587,2586,2584,2583,2581,2579,2578,2576,2574,2573,2571,2569,2568,2567,2564,2563,2561,2549,2548,2547,2546,2543,2541,2539,2538,2537,2536,2534,2531,2519,2518,2517,2516,2514,2513,2498,2497,2496,2495,2493,2491,2489,2487,2486,2485,2483,2481,2479,2478,2476,2475,2473,2471,2469,2468,2467,2465,2463,2461,2459,2458,2457,2456,2453,2451,2439,2438,2437,2436,2435,2431,2419,2418,2417,2416,2415,2413,2398,2397,2396,2395,2394,2391,2389,2387,2386,2385,2384,2381,2379,2378,2376,2375,2374,2371,2369,2368,2367,2365,2364,2361,2359,2358,2357,2356,2354,2351,2349,2348,2347,2346,2345,2341,2319,2318,2317,2316,2315,2314,2198,2197,2196,2195,2194,2193,2189,2187,2186,2185,2184,2183,2179,2178,2176,2175,2174,2173,2169,2168,2167,2165,2164,2163,2159,2158,2157,2156,2154,2153,2149,2148,2147,2146,2145,2143,2139,2138,2137,2136,2135,2134,1987,1986,1985,1984,1983,1982,1978,1976,1975,1974,1973,1972,1968,1967,1965,1964,1963,1962,1958,1957,1956,1954,1953,1952,1948,1947,1946,1945,1943,1942,1938,1937,1936,1935,1934,1932,1928,1927,1926,1925,1924,1923,1897,1896,1895,1894,1893,1892,1879,1876,1875,1874,1873,1872,1869,1867,1865,1864,1863,1862,1859,1857,1856,1854,1853,1852,1849,1847,1846,1845,1843,1842,1839,1837,1836,1835,1834,1832,1829,1827,1826,1825,1824,1823,1798,1796,1795,1794,1793,1792,1789,1786,1785,1784,1783,1782,1769,1768,1765,1764,1763,1762,1759,1758,1756,1754,1753,1752,1749,1748,1746,1745,1743,1742,1739,1738,1736,1735,1734,1732,1729,1728,1726,1725,1724,1723,1698,1697,1695,1694,1693,1692,1689,1687,1685,1684,1683,1682,1679,1678,1675,1674,1673,1672,1659,1658,1657,1654,1653,1652,1649,1648,1647,1645,1643,1642,1639,1638,1637,1635,1634,1632,1629,1628,1627,1625,1624,1623,1598,1597,1596,1594,1593,1592,1589,1587,1586,1584,1583,1582,1579,1578,1576,1574,1573,1572,1569,1568,1567,1564,1563,1562,1549,1548,1547,1546,1543,1542,1539,1538,1537,1536,1534,1532,1529,1528,1527,1526,1524,1523,1498,1497,1496,1495,1493,1492,1489,1487,1486,1485,1483,1482,1479,1478,1476,1475,1473,1472,1469,1468,1467,1465,1463,1462,1459,1458,1457,1456,1453,1452,1439,1438,1437,1436,1435,1432,1429,1428,1427,1426,1425,1423,1398,1397,1396,1395,1394,1392,1389,1387,1386,1385,1384,1382,1379,1378,1376,1375,1374,1372,1369,1368,1367,1365,1364,1362,1359,1358,1357,1356,1354,1352,1349,1348,1347,1346,1345,1342,1329,1328,1327,1326,1325,1324,1298,1297,1296,1295,1294,1293,1289,1287,1286,1285,1284,1283,1279,1278,1276,1275,1274,1273,1269,1268,1267,1265,1264,1263,1259,1258,1257,1256,1254,1253,1249,1248,1247,1246,1245,1243,1239,1238,1237,1236,1235,1234};

void parcel(int* arrptr, int number){
    for(int i = digits - 1; i >= 0; --i){
        *(arrptr + i) = number % 10;
        number/=10;
    }
}


string read_number(int user_guess){ //by default digits is 4
    int guess_arr[digits], computer_number_arr[digits], As = 0, Bs = 0;
     /*for(int i = digits - 1; i >= 0; --i){
        guess_arr[i] = user_guess % 10;
        computer_number_arr[i] =  computer_number % 10;
        computer_number/= 10;
        user_guess/= 10;
    } */
    parcel(guess_arr, user_guess);
    parcel(computer_number_arr, computer_number);
    for(int i = 0; i < digits; ++i){
        for(int j = 0; j < digits; ++j){
            if(i == j && guess_arr[i] == computer_number_arr[j]) As++;
            else if(i != j && guess_arr[i] == computer_number_arr[j]) Bs++;
        }
    }
    return std::to_string(As) + "A" + std::to_string(Bs) + "B";
}



int algorithm1(string response, int prev_guess){
    //sample includes all possibilities
    int guessarr[digits], samplearr[digits];
    parcel(guessarr, prev_guess);
    //int A = response[0] - '0', B = response[2] - '0';
    int A, B;
    response[0] == '0' ? A = 0 : A = response[0] - '0';
    response[2] == '0' ? B = 0 : B = response[2] - '0';
    if(response == " " && prev_guess == 0) return 1234;
    else if(B >= 0){
        B += A;
        for(auto ite = sample.begin(); ite != sample.end(); ite++){
            if(ite == sample.end()) cout << "out of bounds!" << endl;
            int countA = 0, countB = 0;
            parcel(samplearr, *ite);

            for(int i = 0; i < digits; i++){
                if(samplearr[i] == guessarr[i]) countA++; //count A as for digits that are at the identical position
                for(int j = 0; j < digits; j++){
                    if(samplearr[i] == guessarr[j]) countB++;    //count as for digits that repeat   
                }
                    
            }
            //cout << "for " << *ite << "countA is: " << countA << endl;
            if(countB < B || countA < A){
                sample.erase(ite);
                cout << *ite << " Number is erased! countA and B is " << countA << " " << countB << endl;
            }//else if(B == 0 && countB > 0 && A == 0) sample.erase(ite);
            //else if(countA != A) sample.erase(ite);
        }
    }
    

    auto new_guess = sample.begin();
    std::ranges::advance(new_guess, rand() % sample.size());
    sample.erase(new_guess);
    if(new_guess == sample.end()) cout << "new guess out of bounds!" << endl;
    return *new_guess;
}
/*for(auto ite = sample.begin(); ite != sample.end(); ite++){
        int count = 0;
        parcel(samplearr, *ite);
        for(int i = 0; i < digits; ++i){
            if(samplearr[i] ==  guessarr[i]) count++; //digits that are exactly at the same position
        }
        cout << count << endl;
        if(count == A){
            //sample.erase(ite);
            cout <<  *ite << endl;
        }
    } */
    //cout << "samples that remain(1): " <<  sample.size() << endl;

    //for(auto value : sample) cout << value << " ";
    //if(sample.size() ==  0) return -1;
