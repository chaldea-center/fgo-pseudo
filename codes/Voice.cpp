void __fastcall Voice___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_VoiceCondType_Type__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  System_Collections_Generic_List_VoiceCondType_Type__o *v11; // x19
  struct Voice_StaticFields *v12; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Collections_Generic_List_VoiceCondType_Type__o *v19; // x19
  struct Voice_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *v27; // x19
  struct Voice_StaticFields *v28; // x0
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_4391294 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string___ctor__);
    sub_B775C4(&System_Collections_Generic_Dictionary_Voice_BATTLE__string__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_Voice_BATTLE__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_Voice_BATTLE___ctor__);
    sub_B775C4(&System_Collections_Generic_List_Voice_BATTLE__TypeInfo);
    sub_B775C4(&Voice_TypeInfo);
    sub_B775C4(&StringLiteral_2375/*"B2820"*/);
    sub_B775C4(&StringLiteral_2311/*"B060"*/);
    sub_B775C4(&StringLiteral_2306/*"B051"*/);
    sub_B775C4(&StringLiteral_2422/*"B550"*/);
    sub_B775C4(&StringLiteral_2402/*"B4042"*/);
    sub_B775C4(&StringLiteral_2423/*"B560"*/);
    sub_B775C4(&StringLiteral_2394/*"B342"*/);
    sub_B775C4(&StringLiteral_2436/*"B880"*/);
    sub_B775C4(&StringLiteral_2373/*"B270"*/);
    sub_B775C4(&StringLiteral_2313/*"B062"*/);
    sub_B775C4(&StringLiteral_2337/*"B190"*/);
    sub_B775C4(&StringLiteral_2334/*"B1620"*/);
    sub_B775C4(&StringLiteral_2376/*"B2830"*/);
    sub_B775C4(&StringLiteral_2308/*"B053"*/);
    sub_B775C4(&StringLiteral_2342/*"B2080"*/);
    sub_B775C4(&StringLiteral_2332/*"B1600"*/);
    sub_B775C4(&StringLiteral_2440/*"B930"*/);
    sub_B775C4(&StringLiteral_2416/*"B5230"*/);
    sub_B775C4(&StringLiteral_2301/*"B040"*/);
    sub_B775C4(&StringLiteral_2421/*"B540"*/);
    sub_B775C4(&StringLiteral_2399/*"B400"*/);
    sub_B775C4(&StringLiteral_2298/*"B010"*/);
    sub_B775C4(&StringLiteral_2331/*"B160"*/);
    sub_B775C4(&StringLiteral_2388/*"B320"*/);
    sub_B775C4(&StringLiteral_2370/*"B2560"*/);
    sub_B775C4(&StringLiteral_2400/*"B4040"*/);
    sub_B775C4(&StringLiteral_2344/*"B210"*/);
    sub_B775C4(&StringLiteral_2431/*"B840"*/);
    sub_B775C4(&StringLiteral_2328/*"B130"*/);
    sub_B775C4(&StringLiteral_2391/*"B340"*/);
    sub_B775C4(&StringLiteral_2418/*"B5260"*/);
    sub_B775C4(&StringLiteral_2318/*"B071"*/);
    sub_B775C4(&StringLiteral_2352/*"B2170"*/);
    sub_B775C4(&StringLiteral_2367/*"B2530"*/);
    sub_B775C4(&StringLiteral_2435/*"B8510"*/);
    sub_B775C4(&StringLiteral_2366/*"B2520"*/);
    sub_B775C4(&StringLiteral_2350/*"B2150"*/);
    sub_B775C4(&StringLiteral_2419/*"B5270"*/);
    sub_B775C4(&StringLiteral_2380/*"B300"*/);
    sub_B775C4(&StringLiteral_2382/*"B3020"*/);
    sub_B775C4(&StringLiteral_2302/*"B041"*/);
    sub_B775C4(&StringLiteral_2374/*"B2810"*/);
    sub_B775C4(&StringLiteral_2393/*"B3410"*/);
    sub_B775C4(&StringLiteral_2381/*"B3010"*/);
    sub_B775C4(&StringLiteral_2339/*"B2010"*/);
    sub_B775C4(&StringLiteral_2324/*"B100"*/);
    sub_B775C4(&StringLiteral_2346/*"B2110"*/);
    sub_B775C4(&StringLiteral_2404/*"B420"*/);
    sub_B775C4(&StringLiteral_2412/*"B510"*/);
    sub_B775C4(&StringLiteral_2314/*"B063"*/);
    sub_B775C4(&StringLiteral_2395/*"B3420"*/);
    sub_B775C4(&StringLiteral_2437/*"B890"*/);
    sub_B775C4(&StringLiteral_2385/*"B3060"*/);
    sub_B775C4(&StringLiteral_2343/*"B2090"*/);
    sub_B775C4(&StringLiteral_2319/*"B072"*/);
    sub_B775C4(&StringLiteral_2384/*"B3050"*/);
    sub_B775C4(&StringLiteral_2390/*"B331"*/);
    sub_B775C4(&StringLiteral_2338/*"B200"*/);
    sub_B775C4(&StringLiteral_2323/*"B090"*/);
    sub_B775C4(&StringLiteral_2362/*"B2480"*/);
    sub_B775C4(&StringLiteral_2401/*"B4041"*/);
    sub_B775C4(&StringLiteral_2368/*"B2540"*/);
    sub_B775C4(&StringLiteral_2377/*"B2840"*/);
    sub_B775C4(&StringLiteral_2371/*"B2570"*/);
    sub_B775C4(&StringLiteral_2434/*"B8500"*/);
    sub_B775C4(&StringLiteral_2439/*"B920"*/);
    sub_B775C4(&StringLiteral_2307/*"B052"*/);
    sub_B775C4(&StringLiteral_2353/*"B220"*/);
    sub_B775C4(&StringLiteral_2326/*"B110"*/);
    sub_B775C4(&StringLiteral_2355/*"B240"*/);
    sub_B775C4(&StringLiteral_2383/*"B3030"*/);
    sub_B775C4(&StringLiteral_2361/*"B2442"*/);
    sub_B775C4(&StringLiteral_2320/*"B073"*/);
    sub_B775C4(&StringLiteral_2386/*"B3070"*/);
    sub_B775C4(&StringLiteral_2405/*"B430"*/);
    sub_B775C4(&StringLiteral_2300/*"B030"*/);
    sub_B775C4(&StringLiteral_2358/*"B2430"*/);
    sub_B775C4(&StringLiteral_2420/*"B530"*/);
    sub_B775C4(&StringLiteral_2348/*"B2130"*/);
    sub_B775C4(&StringLiteral_2347/*"B2120"*/);
    sub_B775C4(&StringLiteral_2407/*"B441"*/);
    sub_B775C4(&StringLiteral_2387/*"B310"*/);
    sub_B775C4(&StringLiteral_2329/*"B140"*/);
    sub_B775C4(&StringLiteral_2369/*"B2550"*/);
    sub_B775C4(&StringLiteral_2317/*"B070"*/);
    sub_B775C4(&StringLiteral_2333/*"B1610"*/);
    sub_B775C4(&StringLiteral_2312/*"B061"*/);
    sub_B775C4(&StringLiteral_2410/*"B490"*/);
    sub_B775C4(&StringLiteral_2397/*"B380"*/);
    sub_B775C4(&StringLiteral_2354/*"B230"*/);
    sub_B775C4(&StringLiteral_2349/*"B2140"*/);
    sub_B775C4(&StringLiteral_2336/*"B180"*/);
    sub_B775C4(&StringLiteral_2428/*"B810"*/);
    sub_B775C4(&StringLiteral_2299/*"B020"*/);
    sub_B775C4(&StringLiteral_2403/*"B410"*/);
    sub_B775C4(&StringLiteral_2398/*"B390"*/);
    sub_B775C4(&StringLiteral_2360/*"B2441"*/);
    sub_B775C4(&StringLiteral_2359/*"B2440"*/);
    sub_B775C4(&StringLiteral_2408/*"B442"*/);
    sub_B775C4(&StringLiteral_2413/*"B520"*/);
    sub_B775C4(&StringLiteral_2411/*"B500"*/);
    sub_B775C4(&StringLiteral_2321/*"B074"*/);
    sub_B775C4(&StringLiteral_2315/*"B064"*/);
    sub_B775C4(&StringLiteral_2389/*"B330"*/);
    sub_B775C4(&StringLiteral_2325/*"B1000"*/);
    sub_B775C4(&StringLiteral_2392/*"B341"*/);
    sub_B775C4(&StringLiteral_2409/*"B480"*/);
    sub_B775C4(&StringLiteral_2341/*"B2030"*/);
    sub_B775C4(&StringLiteral_2406/*"B440"*/);
    sub_B775C4(&StringLiteral_2379/*"B2842"*/);
    sub_B775C4(&StringLiteral_2305/*"B050"*/);
    sub_B775C4(&StringLiteral_2415/*"B5220"*/);
    sub_B775C4(&StringLiteral_2335/*"B170"*/);
    sub_B775C4(&StringLiteral_2365/*"B2510"*/);
    sub_B775C4(&StringLiteral_2363/*"B250"*/);
    sub_B775C4(&StringLiteral_2327/*"B120"*/);
    sub_B775C4(&StringLiteral_2426/*"B800"*/);
    sub_B775C4(&StringLiteral_2322/*"B080"*/);
    sub_B775C4(&StringLiteral_2330/*"B150"*/);
    sub_B775C4(&StringLiteral_2430/*"B820"*/);
    sub_B775C4(&StringLiteral_2356/*"B2410"*/);
    sub_B775C4(&StringLiteral_2378/*"B2841"*/);
    sub_B775C4(&StringLiteral_2303/*"B042"*/);
    sub_B775C4(&StringLiteral_2345/*"B2100"*/);
    sub_B775C4(&StringLiteral_2364/*"B2500"*/);
    sub_B775C4(&StringLiteral_2340/*"B2020"*/);
    sub_B775C4(&StringLiteral_2433/*"B842"*/);
    sub_B775C4(&StringLiteral_2432/*"B841"*/);
    sub_B775C4(&StringLiteral_2309/*"B054"*/);
    sub_B775C4(&StringLiteral_2396/*"B3430"*/);
    sub_B775C4(&StringLiteral_2357/*"B2420"*/);
    sub_B775C4(&StringLiteral_2372/*"B260"*/);
    sub_B775C4(&StringLiteral_2424/*"B570"*/);
    sub_B775C4(&StringLiteral_2414/*"B5210"*/);
    sub_B775C4(&StringLiteral_2438/*"B910"*/);
    sub_B775C4(&StringLiteral_2417/*"B5250"*/);
    sub_B775C4(&StringLiteral_2351/*"B2160"*/);
    byte_4391294 = 1;
  }
  v1 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B77694(System_Collections_Generic_List_Voice_BATTLE__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v1,
    (const MethodInfo_30E8064 *)Method_System_Collections_Generic_List_Voice_BATTLE___ctor__);
  if ( !v1 )
    goto LABEL_8;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v1,
    81,
    (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_Voice_BATTLE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v1,
    82,
    (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_Voice_BATTLE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v1,
    230,
    (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_Voice_BATTLE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v1,
    231,
    (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_Voice_BATTLE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v1,
    285,
    (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_Voice_BATTLE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v1,
    286,
    (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_Voice_BATTLE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v1,
    287,
    (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_Voice_BATTLE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v1,
    288,
    (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_Voice_BATTLE__Add__);
  static_fields = (BattleServantConfConponent_o *)Voice_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B77560(static_fields, (System_Int32_array **)v1, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B77694(System_Collections_Generic_List_Voice_BATTLE__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v11,
    (const MethodInfo_30E8064 *)Method_System_Collections_Generic_List_Voice_BATTLE___ctor__);
  if ( !v11 )
    goto LABEL_8;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v11,
    31,
    (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_Voice_BATTLE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v11,
    32,
    (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_Voice_BATTLE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v11,
    223,
    (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_Voice_BATTLE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v11,
    224,
    (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_Voice_BATTLE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v11,
    243,
    (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_Voice_BATTLE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v11,
    244,
    (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_Voice_BATTLE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v11,
    254,
    (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_Voice_BATTLE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v11,
    255,
    (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_Voice_BATTLE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v11,
    256,
    (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_Voice_BATTLE__Add__);
  v12 = Voice_TypeInfo->static_fields;
  v12->skillVoiceList = (struct System_Collections_Generic_List_Voice_BATTLE__o *)v11;
  sub_B77560(
    (BattleServantConfConponent_o *)&v12->skillVoiceList,
    (System_Int32_array **)v11,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (System_Collections_Generic_List_VoiceCondType_Type__o *)sub_B77694(System_Collections_Generic_List_Voice_BATTLE__TypeInfo);
  System_Collections_Generic_List_VoiceCondType_Type____ctor(
    v19,
    (const MethodInfo_30E8064 *)Method_System_Collections_Generic_List_Voice_BATTLE___ctor__);
  if ( !v19 )
    goto LABEL_8;
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    111,
    (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_Voice_BATTLE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    121,
    (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_Voice_BATTLE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    131,
    (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_Voice_BATTLE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    141,
    (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_Voice_BATTLE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    151,
    (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_Voice_BATTLE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    161,
    (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_Voice_BATTLE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    171,
    (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_Voice_BATTLE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    181,
    (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_Voice_BATTLE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    191,
    (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_Voice_BATTLE__Add__);
  System_Collections_Generic_List_VoiceCondType_Type___Add(
    v19,
    1001,
    (const MethodInfo_30E8DC0 *)Method_System_Collections_Generic_List_Voice_BATTLE__Add__);
  v20 = Voice_TypeInfo->static_fields;
  v20->firstNpVoiceList = (struct System_Collections_Generic_List_Voice_BATTLE__o *)v19;
  sub_B77560(
    (BattleServantConfConponent_o *)&v20->firstNpVoiceList,
    (System_Int32_array **)v19,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  v27 = (System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)sub_B77694(System_Collections_Generic_Dictionary_Voice_BATTLE__string__TypeInfo);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string____ctor(
    v27,
    (const MethodInfo_2F9F080 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string___ctor__);
  if ( !v27 )
LABEL_8:
    sub_B7769C(v2, v3);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    0,
    0LL,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    10,
    (System_String_o *)StringLiteral_2298/*"B010"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    11,
    (System_String_o *)StringLiteral_2299/*"B020"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    12,
    (System_String_o *)StringLiteral_2300/*"B030"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    20,
    (System_String_o *)StringLiteral_2301/*"B040"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    21,
    (System_String_o *)StringLiteral_2302/*"B041"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    22,
    (System_String_o *)StringLiteral_2303/*"B042"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    111,
    (System_String_o *)StringLiteral_2305/*"B050"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    112,
    (System_String_o *)StringLiteral_2306/*"B051"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    113,
    (System_String_o *)StringLiteral_2307/*"B052"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    114,
    (System_String_o *)StringLiteral_2308/*"B053"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    115,
    (System_String_o *)StringLiteral_2309/*"B054"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    121,
    (System_String_o *)StringLiteral_2311/*"B060"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    122,
    (System_String_o *)StringLiteral_2312/*"B061"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    123,
    (System_String_o *)StringLiteral_2313/*"B062"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    124,
    (System_String_o *)StringLiteral_2314/*"B063"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    125,
    (System_String_o *)StringLiteral_2315/*"B064"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    131,
    (System_String_o *)StringLiteral_2317/*"B070"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    132,
    (System_String_o *)StringLiteral_2318/*"B071"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    133,
    (System_String_o *)StringLiteral_2319/*"B072"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    134,
    (System_String_o *)StringLiteral_2320/*"B073"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    135,
    (System_String_o *)StringLiteral_2321/*"B074"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    141,
    (System_String_o *)StringLiteral_2426/*"B800"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    151,
    (System_String_o *)StringLiteral_2428/*"B810"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    161,
    (System_String_o *)StringLiteral_2430/*"B820"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    171,
    (System_String_o *)StringLiteral_2332/*"B1600"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    181,
    (System_String_o *)StringLiteral_2333/*"B1610"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    191,
    (System_String_o *)StringLiteral_2334/*"B1620"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    1001,
    (System_String_o *)StringLiteral_2325/*"B1000"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    31,
    (System_String_o *)StringLiteral_2322/*"B080"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    32,
    (System_String_o *)StringLiteral_2323/*"B090"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    41,
    (System_String_o *)StringLiteral_2324/*"B100"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    42,
    (System_String_o *)StringLiteral_2326/*"B110"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    51,
    (System_String_o *)StringLiteral_2327/*"B120"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    52,
    (System_String_o *)StringLiteral_2328/*"B130"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    61,
    (System_String_o *)StringLiteral_2329/*"B140"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    71,
    (System_String_o *)StringLiteral_2330/*"B150"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    81,
    (System_String_o *)StringLiteral_2331/*"B160"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    82,
    (System_String_o *)StringLiteral_2335/*"B170"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    201,
    (System_String_o *)StringLiteral_2336/*"B180"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    202,
    (System_String_o *)StringLiteral_2337/*"B190"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    203,
    (System_String_o *)StringLiteral_2338/*"B200"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    211,
    (System_String_o *)StringLiteral_2344/*"B210"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    212,
    (System_String_o *)StringLiteral_2353/*"B220"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    213,
    (System_String_o *)StringLiteral_2354/*"B230"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    214,
    (System_String_o *)StringLiteral_2380/*"B300"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    215,
    (System_String_o *)StringLiteral_2380/*"B300"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    216,
    (System_String_o *)StringLiteral_2363/*"B250"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    217,
    (System_String_o *)StringLiteral_2403/*"B410"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    218,
    (System_String_o *)StringLiteral_2404/*"B420"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    219,
    (System_String_o *)StringLiteral_2405/*"B430"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    220,
    (System_String_o *)StringLiteral_2406/*"B440"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    221,
    (System_String_o *)StringLiteral_2407/*"B441"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    222,
    (System_String_o *)StringLiteral_2408/*"B442"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    223,
    (System_String_o *)StringLiteral_2409/*"B480"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    224,
    (System_String_o *)StringLiteral_2410/*"B490"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    225,
    (System_String_o *)StringLiteral_2411/*"B500"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    226,
    (System_String_o *)StringLiteral_2412/*"B510"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    227,
    (System_String_o *)StringLiteral_2413/*"B520"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    228,
    (System_String_o *)StringLiteral_2420/*"B530"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    229,
    (System_String_o *)StringLiteral_2421/*"B540"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    230,
    (System_String_o *)StringLiteral_2423/*"B560"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    231,
    (System_String_o *)StringLiteral_2424/*"B570"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    232,
    (System_String_o *)StringLiteral_2387/*"B310"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    233,
    (System_String_o *)StringLiteral_2388/*"B320"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    234,
    (System_String_o *)StringLiteral_2389/*"B330"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    235,
    (System_String_o *)StringLiteral_2390/*"B331"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    236,
    (System_String_o *)StringLiteral_2391/*"B340"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    237,
    (System_String_o *)StringLiteral_2392/*"B341"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    238,
    (System_String_o *)StringLiteral_2394/*"B342"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    239,
    (System_String_o *)StringLiteral_2422/*"B550"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    240,
    (System_String_o *)StringLiteral_2438/*"B910"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    241,
    (System_String_o *)StringLiteral_2439/*"B920"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    242,
    (System_String_o *)StringLiteral_2440/*"B930"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    243,
    (System_String_o *)StringLiteral_2436/*"B880"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    244,
    (System_String_o *)StringLiteral_2437/*"B890"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    245,
    (System_String_o *)StringLiteral_2397/*"B380"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    246,
    (System_String_o *)StringLiteral_2398/*"B390"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    247,
    (System_String_o *)StringLiteral_2399/*"B400"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    248,
    (System_String_o *)StringLiteral_2431/*"B840"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    249,
    (System_String_o *)StringLiteral_2432/*"B841"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    250,
    (System_String_o *)StringLiteral_2433/*"B842"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    251,
    (System_String_o *)StringLiteral_2372/*"B260"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    252,
    (System_String_o *)StringLiteral_2355/*"B240"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    253,
    (System_String_o *)StringLiteral_2373/*"B270"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    254,
    (System_String_o *)StringLiteral_2342/*"B2080"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    255,
    (System_String_o *)StringLiteral_2343/*"B2090"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    256,
    (System_String_o *)StringLiteral_2362/*"B2480"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    257,
    (System_String_o *)StringLiteral_2359/*"B2440"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    258,
    (System_String_o *)StringLiteral_2360/*"B2441"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    259,
    (System_String_o *)StringLiteral_2361/*"B2442"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    260,
    (System_String_o *)StringLiteral_2377/*"B2840"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    261,
    (System_String_o *)StringLiteral_2378/*"B2841"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    262,
    (System_String_o *)StringLiteral_2379/*"B2842"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    263,
    (System_String_o *)StringLiteral_2400/*"B4040"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    264,
    (System_String_o *)StringLiteral_2401/*"B4041"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    265,
    (System_String_o *)StringLiteral_2402/*"B4042"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    266,
    (System_String_o *)StringLiteral_2339/*"B2010"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    267,
    (System_String_o *)StringLiteral_2340/*"B2020"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    268,
    (System_String_o *)StringLiteral_2341/*"B2030"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    269,
    (System_String_o *)StringLiteral_2356/*"B2410"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    270,
    (System_String_o *)StringLiteral_2357/*"B2420"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    271,
    (System_String_o *)StringLiteral_2358/*"B2430"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    272,
    (System_String_o *)StringLiteral_2374/*"B2810"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    273,
    (System_String_o *)StringLiteral_2375/*"B2820"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    274,
    (System_String_o *)StringLiteral_2376/*"B2830"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    275,
    (System_String_o *)StringLiteral_2345/*"B2100"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    276,
    (System_String_o *)StringLiteral_2346/*"B2110"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    277,
    (System_String_o *)StringLiteral_2364/*"B2500"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    278,
    (System_String_o *)StringLiteral_2365/*"B2510"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    279,
    (System_String_o *)StringLiteral_2381/*"B3010"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    280,
    (System_String_o *)StringLiteral_2382/*"B3020"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    281,
    (System_String_o *)StringLiteral_2383/*"B3030"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    282,
    (System_String_o *)StringLiteral_2393/*"B3410"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    283,
    (System_String_o *)StringLiteral_2395/*"B3420"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    284,
    (System_String_o *)StringLiteral_2396/*"B3430"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    285,
    (System_String_o *)StringLiteral_2351/*"B2160"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    286,
    (System_String_o *)StringLiteral_2352/*"B2170"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    287,
    (System_String_o *)StringLiteral_2370/*"B2560"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    288,
    (System_String_o *)StringLiteral_2371/*"B2570"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    289,
    (System_String_o *)StringLiteral_2347/*"B2120"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    290,
    (System_String_o *)StringLiteral_2348/*"B2130"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    291,
    (System_String_o *)StringLiteral_2366/*"B2520"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    292,
    (System_String_o *)StringLiteral_2367/*"B2530"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    293,
    (System_String_o *)StringLiteral_2349/*"B2140"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    294,
    (System_String_o *)StringLiteral_2368/*"B2540"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    295,
    (System_String_o *)StringLiteral_2350/*"B2150"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    296,
    (System_String_o *)StringLiteral_2369/*"B2550"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    297,
    (System_String_o *)StringLiteral_2384/*"B3050"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    298,
    (System_String_o *)StringLiteral_2385/*"B3060"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    299,
    (System_String_o *)StringLiteral_2386/*"B3070"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    300,
    (System_String_o *)StringLiteral_2414/*"B5210"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    301,
    (System_String_o *)StringLiteral_2415/*"B5220"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    302,
    (System_String_o *)StringLiteral_2416/*"B5230"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    303,
    (System_String_o *)StringLiteral_2417/*"B5250"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    304,
    (System_String_o *)StringLiteral_2418/*"B5260"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    305,
    (System_String_o *)StringLiteral_2419/*"B5270"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    306,
    (System_String_o *)StringLiteral_2434/*"B8500"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Voice_BATTLE__string___Add(
    v27,
    307,
    (System_String_o *)StringLiteral_2435/*"B8510"*/,
    (const MethodInfo_2F9FC34 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  v28 = Voice_TypeInfo->static_fields;
  v28->filelist = v27;
  sub_B77560((BattleServantConfConponent_o *)&v28->filelist, (System_Int32_array **)v27, v29, v30, v31, v32, v33, v34);
}


void __fastcall Voice___ctor(Voice_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall Voice__GetTypeByFileName(System_String_o *fileName, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  Voice_c *v12; // x0
  System_Collections_Generic_IEnumerable_TSource__o *filelist; // x19
  System_Func_KeyValuePair_Voice_BATTLE__string___bool__o *v14; // x21

  if ( (byte_4391292 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_Voice_BATTLE__string____);
    sub_B775C4(&Method_System_Func_KeyValuePair_Voice_BATTLE__string___bool___ctor__);
    sub_B775C4(&System_Func_KeyValuePair_Voice_BATTLE__string___bool__TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_Voice_BATTLE__string__get_Key__);
    sub_B775C4(&Method_Voice___c__DisplayClass6_0__GetTypeByFileName_b__0__);
    sub_B775C4(&Voice___c__DisplayClass6_0_TypeInfo);
    sub_B775C4(&Voice_TypeInfo);
    byte_4391292 = 1;
  }
  v3 = sub_B77694(Voice___c__DisplayClass6_0_TypeInfo);
  Voice___c__DisplayClass6_0___ctor((Voice___c__DisplayClass6_0_o *)v3, 0LL);
  if ( !v3 )
    sub_B7769C(v4, v5);
  *(_QWORD *)(v3 + 16) = fileName;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 16), (System_Int32_array **)fileName, v6, v7, v8, v9, v10, v11);
  v12 = Voice_TypeInfo;
  if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
    v12 = Voice_TypeInfo;
  }
  filelist = (System_Collections_Generic_IEnumerable_TSource__o *)v12->static_fields->filelist;
  v14 = (System_Func_KeyValuePair_Voice_BATTLE__string___bool__o *)sub_B77694(System_Func_KeyValuePair_Voice_BATTLE__string___bool__TypeInfo);
  System_Func_KeyValuePair_Voice_BATTLE__string___bool____ctor(
    v14,
    (Il2CppObject *)v3,
    Method_Voice___c__DisplayClass6_0__GetTypeByFileName_b__0__,
    (const MethodInfo_29D8098 *)Method_System_Func_KeyValuePair_Voice_BATTLE__string___bool___ctor__);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_Voice_BATTLE__string__(
           filelist,
           (System_Func_TSource__bool__o *)v14,
           (const MethodInfo_1D31C88 *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_Voice_BATTLE__string____).fields.key;
}


bool __fastcall Voice__IsDeadVoice(int32_t voiceBattleType, const MethodInfo *method)
{
  Voice___c__DisplayClass7_0_o *v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  Voice_c *v6; // x0
  System_Collections_Generic_List_T__o *deadVoiceList; // x19
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *v8; // x21

  if ( (byte_4391293 & 1) == 0 )
  {
    sub_B775C4(&Method_BasicHelper_Any_Voice_BATTLE___);
    sub_B775C4(&Method_System_Func_Voice_BATTLE__bool___ctor__);
    sub_B775C4(&System_Func_Voice_BATTLE__bool__TypeInfo);
    sub_B775C4(&Method_Voice___c__DisplayClass7_0__IsDeadVoice_b__0__);
    sub_B775C4(&Voice___c__DisplayClass7_0_TypeInfo);
    sub_B775C4(&Voice_TypeInfo);
    byte_4391293 = 1;
  }
  v3 = (Voice___c__DisplayClass7_0_o *)sub_B77694(Voice___c__DisplayClass7_0_TypeInfo);
  Voice___c__DisplayClass7_0___ctor(v3, 0LL);
  if ( !v3 )
    sub_B7769C(v4, v5);
  v3->fields.voiceBattleType = voiceBattleType;
  v6 = Voice_TypeInfo;
  if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
    v6 = Voice_TypeInfo;
  }
  deadVoiceList = (System_Collections_Generic_List_T__o *)v6->static_fields->deadVoiceList;
  v8 = (System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool__o *)sub_B77694(System_Func_Voice_BATTLE__bool__TypeInfo);
  System_Func_WarBoardActionTrendConditionEntity_ConditionType__bool____ctor(
    v8,
    (Il2CppObject *)v3,
    Method_Voice___c__DisplayClass7_0__IsDeadVoice_b__0__,
    (const MethodInfo_29E4E2C *)Method_System_Func_Voice_BATTLE__bool___ctor__);
  return BasicHelper__Any_Voice_BATTLE_(
           deadVoiceList,
           (System_Func_T__bool__o *)v8,
           (const MethodInfo_1C65F50 *)Method_BasicHelper_Any_Voice_BATTLE___);
}


System_String_o *__fastcall Voice__getFileName(int32_t type, const MethodInfo *method)
{
  Voice_c *v3; // x0
  System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *filelist; // x0
  Voice_c *v5; // x0

  if ( (byte_4391291 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__get_Item__);
    sub_B775C4(&Voice_TypeInfo);
    byte_4391291 = 1;
  }
  v3 = Voice_TypeInfo;
  if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
    v3 = Voice_TypeInfo;
  }
  filelist = v3->static_fields->filelist;
  if ( !filelist )
    goto LABEL_14;
  if ( System_Collections_Generic_Dictionary_Voice_BATTLE__string___ContainsKey(
         filelist,
         type,
         (const MethodInfo_2F9FEA8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__ContainsKey__) )
  {
    v5 = Voice_TypeInfo;
    if ( (BYTE3(Voice_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !Voice_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
      v5 = Voice_TypeInfo;
    }
    filelist = v5->static_fields->filelist;
    if ( filelist )
      return System_Collections_Generic_Dictionary_Voice_BATTLE__string___get_Item(
               filelist,
               type,
               (const MethodInfo_2F9FB70 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__get_Item__);
LABEL_14:
    sub_B7769C(filelist, method);
  }
  return 0LL;
}


void __fastcall Voice___c__DisplayClass6_0___ctor(Voice___c__DisplayClass6_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall Voice___c__DisplayClass6_0___GetTypeByFileName_b__0(
        Voice___c__DisplayClass6_0_o *this,
        System_Collections_Generic_KeyValuePair_Voice_BATTLE__string__o x,
        const MethodInfo *method)
{
  System_String_o *value; // x19

  value = x.fields.value;
  if ( (byte_438891F & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_KeyValuePair_Voice_BATTLE__string__get_Value__);
    byte_438891F = 1;
  }
  return System_String__op_Equality(value, this->fields.fileName, 0LL);
}


void __fastcall Voice___c__DisplayClass7_0___ctor(Voice___c__DisplayClass7_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall Voice___c__DisplayClass7_0___IsDeadVoice_b__0(
        Voice___c__DisplayClass7_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.voiceBattleType == x;
}