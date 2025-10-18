void Voice___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v1; // x19
  __int64 v2; // x0
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  struct System_Object_array *items; // x9
  _QWORD *v6; // x8
  __int64 size; // x10
  __int64 v8; // x10
  __int64 v9; // x10
  __int64 v10; // x10
  __int64 v11; // x10
  __int64 v12; // x10
  __int64 v13; // x10
  __int64 v14; // x10
  System_Collections_Generic_List_T__o *v15; // x19
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct System_Object_array *v18; // x9
  _QWORD *v19; // x8
  __int64 v20; // x10
  __int64 v21; // x10
  __int64 v22; // x10
  __int64 v23; // x10
  __int64 v24; // x10
  __int64 v25; // x10
  __int64 v26; // x10
  __int64 v27; // x10
  __int64 v28; // x10
  struct Voice_StaticFields *static_fields; // x0
  System_Collections_Generic_List_T__o *v30; // x19
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  _QWORD *v33; // x8
  int32_t *p_version; // x21
  struct System_Object_array *v35; // x9
  __int64 v36; // x10
  int32_t *p_size; // x20
  __int64 v38; // x10
  __int64 v39; // x10
  __int64 v40; // x10
  __int64 v41; // x10
  __int64 v42; // x10
  __int64 v43; // x10
  __int64 v44; // x10
  __int64 v45; // x10
  __int64 v46; // x10
  __int64 v47; // x10
  __int64 v48; // x10
  __int64 v49; // x10
  __int64 v50; // x10
  __int64 v51; // x10
  __int64 v52; // x10
  __int64 v53; // x10
  __int64 v54; // x10
  struct Voice_StaticFields *v55; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v56; // x19
  struct Voice_StaticFields *v57; // x0
  int32_t v58; // w2
  const MethodInfo *v59; // x3

  if ( (byte_4C41EFA & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_Voice_BATTLE__string__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Voice_BATTLE__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_Voice_BATTLE___ctor__);
    sub_1C37058(&System_Collections_Generic_List_Voice_BATTLE__TypeInfo);
    sub_1C37058(&Voice_TypeInfo);
    sub_1C37058(&StringLiteral_2596/*"B2820"*/);
    sub_1C37058(&StringLiteral_2524/*"B060"*/);
    sub_1C37058(&StringLiteral_2519/*"B051"*/);
    sub_1C37058(&StringLiteral_2652/*"B550"*/);
    sub_1C37058(&StringLiteral_2632/*"B4042"*/);
    sub_1C37058(&StringLiteral_2653/*"B560"*/);
    sub_1C37058(&StringLiteral_2615/*"B342"*/);
    sub_1C37058(&StringLiteral_2666/*"B880"*/);
    sub_1C37058(&StringLiteral_2594/*"B270"*/);
    sub_1C37058(&StringLiteral_2526/*"B062"*/);
    sub_1C37058(&StringLiteral_2558/*"B190"*/);
    sub_1C37058(&StringLiteral_2555/*"B1620"*/);
    sub_1C37058(&StringLiteral_2550/*"B1420"*/);
    sub_1C37058(&StringLiteral_2597/*"B2830"*/);
    sub_1C37058(&StringLiteral_2521/*"B053"*/);
    sub_1C37058(&StringLiteral_2563/*"B2080"*/);
    sub_1C37058(&StringLiteral_2553/*"B1600"*/);
    sub_1C37058(&StringLiteral_2670/*"B930"*/);
    sub_1C37058(&StringLiteral_2646/*"B5230"*/);
    sub_1C37058(&StringLiteral_2514/*"B040"*/);
    sub_1C37058(&StringLiteral_2651/*"B540"*/);
    sub_1C37058(&StringLiteral_2619/*"B360"*/);
    sub_1C37058(&StringLiteral_2626/*"B400"*/);
    sub_1C37058(&StringLiteral_2511/*"B010"*/);
    sub_1C37058(&StringLiteral_2552/*"B160"*/);
    sub_1C37058(&StringLiteral_2609/*"B320"*/);
    sub_1C37058(&StringLiteral_2591/*"B2560"*/);
    sub_1C37058(&StringLiteral_2630/*"B4040"*/);
    sub_1C37058(&StringLiteral_2565/*"B210"*/);
    sub_1C37058(&StringLiteral_2661/*"B840"*/);
    sub_1C37058(&StringLiteral_2546/*"B130"*/);
    sub_1C37058(&StringLiteral_2612/*"B340"*/);
    sub_1C37058(&StringLiteral_2648/*"B5260"*/);
    sub_1C37058(&StringLiteral_2531/*"B071"*/);
    sub_1C37058(&StringLiteral_2573/*"B2170"*/);
    sub_1C37058(&StringLiteral_2588/*"B2530"*/);
    sub_1C37058(&StringLiteral_2629/*"B4030"*/);
    sub_1C37058(&StringLiteral_2665/*"B8510"*/);
    sub_1C37058(&StringLiteral_2545/*"B1220"*/);
    sub_1C37058(&StringLiteral_2587/*"B2520"*/);
    sub_1C37058(&StringLiteral_2571/*"B2150"*/);
    sub_1C37058(&StringLiteral_2649/*"B5270"*/);
    sub_1C37058(&StringLiteral_2601/*"B300"*/);
    sub_1C37058(&StringLiteral_2603/*"B3020"*/);
    sub_1C37058(&StringLiteral_2515/*"B041"*/);
    sub_1C37058(&StringLiteral_2595/*"B2810"*/);
    sub_1C37058(&StringLiteral_2614/*"B3410"*/);
    sub_1C37058(&StringLiteral_2602/*"B3010"*/);
    sub_1C37058(&StringLiteral_2560/*"B2010"*/);
    sub_1C37058(&StringLiteral_2537/*"B100"*/);
    sub_1C37058(&StringLiteral_2567/*"B2110"*/);
    sub_1C37058(&StringLiteral_2634/*"B420"*/);
    sub_1C37058(&StringLiteral_2642/*"B510"*/);
    sub_1C37058(&StringLiteral_2527/*"B063"*/);
    sub_1C37058(&StringLiteral_2616/*"B3420"*/);
    sub_1C37058(&StringLiteral_2667/*"B890"*/);
    sub_1C37058(&StringLiteral_2606/*"B3060"*/);
    sub_1C37058(&StringLiteral_2564/*"B2090"*/);
    sub_1C37058(&StringLiteral_2548/*"B1400"*/);
    sub_1C37058(&StringLiteral_2532/*"B072"*/);
    sub_1C37058(&StringLiteral_2605/*"B3050"*/);
    sub_1C37058(&StringLiteral_2549/*"B1410"*/);
    sub_1C37058(&StringLiteral_2611/*"B331"*/);
    sub_1C37058(&StringLiteral_2559/*"B200"*/);
    sub_1C37058(&StringLiteral_2536/*"B090"*/);
    sub_1C37058(&StringLiteral_2583/*"B2480"*/);
    sub_1C37058(&StringLiteral_2631/*"B4041"*/);
    sub_1C37058(&StringLiteral_2589/*"B2540"*/);
    sub_1C37058(&StringLiteral_2598/*"B2840"*/);
    sub_1C37058(&StringLiteral_2592/*"B2570"*/);
    sub_1C37058(&StringLiteral_2664/*"B8500"*/);
    sub_1C37058(&StringLiteral_2669/*"B920"*/);
    sub_1C37058(&StringLiteral_2520/*"B052"*/);
    sub_1C37058(&StringLiteral_2574/*"B220"*/);
    sub_1C37058(&StringLiteral_2541/*"B110"*/);
    sub_1C37058(&StringLiteral_2576/*"B240"*/);
    sub_1C37058(&StringLiteral_2622/*"B3810"*/);
    sub_1C37058(&StringLiteral_2604/*"B3030"*/);
    sub_1C37058(&StringLiteral_2582/*"B2442"*/);
    sub_1C37058(&StringLiteral_2533/*"B073"*/);
    sub_1C37058(&StringLiteral_2607/*"B3070"*/);
    sub_1C37058(&StringLiteral_2620/*"B370"*/);
    sub_1C37058(&StringLiteral_2635/*"B430"*/);
    sub_1C37058(&StringLiteral_2513/*"B030"*/);
    sub_1C37058(&StringLiteral_2579/*"B2430"*/);
    sub_1C37058(&StringLiteral_2650/*"B530"*/);
    sub_1C37058(&StringLiteral_2569/*"B2130"*/);
    sub_1C37058(&StringLiteral_2568/*"B2120"*/);
    sub_1C37058(&StringLiteral_2637/*"B441"*/);
    sub_1C37058(&StringLiteral_2608/*"B310"*/);
    sub_1C37058(&StringLiteral_2539/*"B1010"*/);
    sub_1C37058(&StringLiteral_2547/*"B140"*/);
    sub_1C37058(&StringLiteral_2590/*"B2550"*/);
    sub_1C37058(&StringLiteral_2530/*"B070"*/);
    sub_1C37058(&StringLiteral_2554/*"B1610"*/);
    sub_1C37058(&StringLiteral_2525/*"B061"*/);
    sub_1C37058(&StringLiteral_2640/*"B490"*/);
    sub_1C37058(&StringLiteral_2621/*"B380"*/);
    sub_1C37058(&StringLiteral_2575/*"B230"*/);
    sub_1C37058(&StringLiteral_2570/*"B2140"*/);
    sub_1C37058(&StringLiteral_2557/*"B180"*/);
    sub_1C37058(&StringLiteral_2658/*"B810"*/);
    sub_1C37058(&StringLiteral_2512/*"B020"*/);
    sub_1C37058(&StringLiteral_2623/*"B3820"*/);
    sub_1C37058(&StringLiteral_2633/*"B410"*/);
    sub_1C37058(&StringLiteral_2625/*"B390"*/);
    sub_1C37058(&StringLiteral_2624/*"B3830"*/);
    sub_1C37058(&StringLiteral_2581/*"B2441"*/);
    sub_1C37058(&StringLiteral_2580/*"B2440"*/);
    sub_1C37058(&StringLiteral_2628/*"B4020"*/);
    sub_1C37058(&StringLiteral_2543/*"B1200"*/);
    sub_1C37058(&StringLiteral_2638/*"B442"*/);
    sub_1C37058(&StringLiteral_2643/*"B520"*/);
    sub_1C37058(&StringLiteral_2641/*"B500"*/);
    sub_1C37058(&StringLiteral_2534/*"B074"*/);
    sub_1C37058(&StringLiteral_2528/*"B064"*/);
    sub_1C37058(&StringLiteral_2610/*"B330"*/);
    sub_1C37058(&StringLiteral_2538/*"B1000"*/);
    sub_1C37058(&StringLiteral_2613/*"B341"*/);
    sub_1C37058(&StringLiteral_2639/*"B480"*/);
    sub_1C37058(&StringLiteral_2562/*"B2030"*/);
    sub_1C37058(&StringLiteral_2636/*"B440"*/);
    sub_1C37058(&StringLiteral_2600/*"B2842"*/);
    sub_1C37058(&StringLiteral_2518/*"B050"*/);
    sub_1C37058(&StringLiteral_2645/*"B5220"*/);
    sub_1C37058(&StringLiteral_2556/*"B170"*/);
    sub_1C37058(&StringLiteral_2586/*"B2510"*/);
    sub_1C37058(&StringLiteral_2584/*"B250"*/);
    sub_1C37058(&StringLiteral_2542/*"B120"*/);
    sub_1C37058(&StringLiteral_2656/*"B800"*/);
    sub_1C37058(&StringLiteral_2535/*"B080"*/);
    sub_1C37058(&StringLiteral_2551/*"B150"*/);
    sub_1C37058(&StringLiteral_2660/*"B820"*/);
    sub_1C37058(&StringLiteral_2577/*"B2410"*/);
    sub_1C37058(&StringLiteral_2599/*"B2841"*/);
    sub_1C37058(&StringLiteral_2516/*"B042"*/);
    sub_1C37058(&StringLiteral_2566/*"B2100"*/);
    sub_1C37058(&StringLiteral_2627/*"B4010"*/);
    sub_1C37058(&StringLiteral_2585/*"B2500"*/);
    sub_1C37058(&StringLiteral_2540/*"B1020"*/);
    sub_1C37058(&StringLiteral_2561/*"B2020"*/);
    sub_1C37058(&StringLiteral_2663/*"B842"*/);
    sub_1C37058(&StringLiteral_2662/*"B841"*/);
    sub_1C37058(&StringLiteral_2522/*"B054"*/);
    sub_1C37058(&StringLiteral_2617/*"B3430"*/);
    sub_1C37058(&StringLiteral_2578/*"B2420"*/);
    sub_1C37058(&StringLiteral_2593/*"B260"*/);
    sub_1C37058(&StringLiteral_2618/*"B350"*/);
    sub_1C37058(&StringLiteral_2654/*"B570"*/);
    sub_1C37058(&StringLiteral_2644/*"B5210"*/);
    sub_1C37058(&StringLiteral_2668/*"B910"*/);
    sub_1C37058(&StringLiteral_2544/*"B1210"*/);
    sub_1C37058(&StringLiteral_2647/*"B5250"*/);
    sub_1C37058(&StringLiteral_2572/*"B2160"*/);
    byte_4C41EFA = 1;
  }
  v1 = (System_Collections_Generic_List_T__o *)sub_1C372A4(System_Collections_Generic_List_Voice_BATTLE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v1,
    (const MethodInfo_3787FD8 *)Method_System_Collections_Generic_List_Voice_BATTLE___ctor__);
  if ( !v1 )
    goto LABEL_116;
  items = v1->fields._items;
  v6 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
  ++v1->fields._version;
  if ( !items )
    goto LABEL_116;
  size = v1->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      81,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v6[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v6 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v1->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 81;
    ++v1->fields._version;
  }
  v8 = v1->fields._size;
  if ( (unsigned int)v8 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      82,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v6[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v6 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v1->fields._size = v8 + 1;
    *((_DWORD *)items->m_Items + v8) = 82;
    ++v1->fields._version;
  }
  v9 = v1->fields._size;
  if ( (unsigned int)v9 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      230,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v6[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v6 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v1->fields._size = v9 + 1;
    *((_DWORD *)items->m_Items + v9) = 230;
    ++v1->fields._version;
  }
  v10 = v1->fields._size;
  if ( (unsigned int)v10 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      231,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v6[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v6 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v1->fields._size = v10 + 1;
    *((_DWORD *)items->m_Items + v10) = 231;
    ++v1->fields._version;
  }
  v11 = v1->fields._size;
  if ( (unsigned int)v11 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      285,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v6[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v6 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v1->fields._size = v11 + 1;
    *((_DWORD *)items->m_Items + v11) = 285;
    ++v1->fields._version;
  }
  v12 = v1->fields._size;
  if ( (unsigned int)v12 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      286,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v6[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v6 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v1->fields._size = v12 + 1;
    *((_DWORD *)items->m_Items + v12) = 286;
    ++v1->fields._version;
  }
  v13 = v1->fields._size;
  if ( (unsigned int)v13 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      287,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v6[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v6 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v1->fields._size = v13 + 1;
    *((_DWORD *)items->m_Items + v13) = 287;
    ++v1->fields._version;
  }
  v14 = v1->fields._size;
  if ( (unsigned int)v14 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      288,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v6[4] + 192LL) + 112LL));
  }
  else
  {
    v1->fields._size = v14 + 1;
    *((_DWORD *)items->m_Items + v14) = 288;
  }
  Voice_TypeInfo->static_fields->deadVoiceList = (struct System_Collections_Generic_List_Voice_BATTLE__o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)Voice_TypeInfo->static_fields, (int32_t)v1, v3, v4);
  v15 = (System_Collections_Generic_List_T__o *)sub_1C372A4(System_Collections_Generic_List_Voice_BATTLE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v15,
    (const MethodInfo_3787FD8 *)Method_System_Collections_Generic_List_Voice_BATTLE___ctor__);
  if ( !v15 )
    goto LABEL_116;
  v18 = v15->fields._items;
  v19 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
  ++v15->fields._version;
  if ( !v18 )
    goto LABEL_116;
  v20 = v15->fields._size;
  if ( (unsigned int)v20 >= LODWORD(v18->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v15,
      31,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    v18 = v15->fields._items;
    v19 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v15->fields._version;
    if ( !v18 )
      goto LABEL_116;
  }
  else
  {
    v15->fields._size = v20 + 1;
    *((_DWORD *)v18->m_Items + v20) = 31;
    ++v15->fields._version;
  }
  v21 = v15->fields._size;
  if ( (unsigned int)v21 >= LODWORD(v18->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v15,
      32,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    v18 = v15->fields._items;
    v19 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v15->fields._version;
    if ( !v18 )
      goto LABEL_116;
  }
  else
  {
    v15->fields._size = v21 + 1;
    *((_DWORD *)v18->m_Items + v21) = 32;
    ++v15->fields._version;
  }
  v22 = v15->fields._size;
  if ( (unsigned int)v22 >= LODWORD(v18->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v15,
      223,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    v18 = v15->fields._items;
    v19 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v15->fields._version;
    if ( !v18 )
      goto LABEL_116;
  }
  else
  {
    v15->fields._size = v22 + 1;
    *((_DWORD *)v18->m_Items + v22) = 223;
    ++v15->fields._version;
  }
  v23 = v15->fields._size;
  if ( (unsigned int)v23 >= LODWORD(v18->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v15,
      224,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    v18 = v15->fields._items;
    v19 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v15->fields._version;
    if ( !v18 )
      goto LABEL_116;
  }
  else
  {
    v15->fields._size = v23 + 1;
    *((_DWORD *)v18->m_Items + v23) = 224;
    ++v15->fields._version;
  }
  v24 = v15->fields._size;
  if ( (unsigned int)v24 >= LODWORD(v18->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v15,
      243,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    v18 = v15->fields._items;
    v19 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v15->fields._version;
    if ( !v18 )
      goto LABEL_116;
  }
  else
  {
    v15->fields._size = v24 + 1;
    *((_DWORD *)v18->m_Items + v24) = 243;
    ++v15->fields._version;
  }
  v25 = v15->fields._size;
  if ( (unsigned int)v25 >= LODWORD(v18->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v15,
      244,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    v18 = v15->fields._items;
    v19 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v15->fields._version;
    if ( !v18 )
      goto LABEL_116;
  }
  else
  {
    v15->fields._size = v25 + 1;
    *((_DWORD *)v18->m_Items + v25) = 244;
    ++v15->fields._version;
  }
  v26 = v15->fields._size;
  if ( (unsigned int)v26 >= LODWORD(v18->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v15,
      254,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    v18 = v15->fields._items;
    v19 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v15->fields._version;
    if ( !v18 )
      goto LABEL_116;
  }
  else
  {
    v15->fields._size = v26 + 1;
    *((_DWORD *)v18->m_Items + v26) = 254;
    ++v15->fields._version;
  }
  v27 = v15->fields._size;
  if ( (unsigned int)v27 >= LODWORD(v18->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v15,
      255,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    v18 = v15->fields._items;
    v19 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v15->fields._version;
    if ( !v18 )
      goto LABEL_116;
  }
  else
  {
    v15->fields._size = v27 + 1;
    *((_DWORD *)v18->m_Items + v27) = 255;
    ++v15->fields._version;
  }
  v28 = v15->fields._size;
  if ( (unsigned int)v28 >= LODWORD(v18->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v15,
      256,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
  }
  else
  {
    v15->fields._size = v28 + 1;
    *((_DWORD *)v18->m_Items + v28) = 256;
  }
  static_fields = Voice_TypeInfo->static_fields;
  static_fields->skillVoiceList = (struct System_Collections_Generic_List_Voice_BATTLE__o *)v15;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->skillVoiceList, (int32_t)v15, v16, v17);
  v30 = (System_Collections_Generic_List_T__o *)sub_1C372A4(System_Collections_Generic_List_Voice_BATTLE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v30,
    (const MethodInfo_3787FD8 *)Method_System_Collections_Generic_List_Voice_BATTLE___ctor__);
  if ( !v30 )
    goto LABEL_116;
  v33 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
  p_version = &v30->fields._version;
  ++v30->fields._version;
  v35 = v30->fields._items;
  p_size = &v30->fields._size;
  v36 = v30->fields._size;
  if ( !v35 )
    goto LABEL_116;
  if ( (unsigned int)v36 >= LODWORD(v35->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v30,
      111,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    v35 = v30->fields._items;
    v33 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v30->fields._version;
    if ( !v35 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v36 + 1;
    *((_DWORD *)v35->m_Items + v36) = 111;
    ++*p_version;
  }
  v38 = *p_size;
  if ( (unsigned int)v38 >= LODWORD(v35->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v30,
      121,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    v35 = v30->fields._items;
    v33 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v30->fields._version;
    if ( !v35 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v38 + 1;
    *((_DWORD *)v35->m_Items + v38) = 121;
    ++*p_version;
  }
  v39 = *p_size;
  if ( (unsigned int)v39 >= LODWORD(v35->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v30,
      131,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    v35 = v30->fields._items;
    v33 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v30->fields._version;
    if ( !v35 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v39 + 1;
    *((_DWORD *)v35->m_Items + v39) = 131;
    ++*p_version;
  }
  v40 = *p_size;
  if ( (unsigned int)v40 >= LODWORD(v35->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v30,
      141,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    v35 = v30->fields._items;
    v33 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v30->fields._version;
    if ( !v35 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v40 + 1;
    *((_DWORD *)v35->m_Items + v40) = 141;
    ++*p_version;
  }
  v41 = *p_size;
  if ( (unsigned int)v41 >= LODWORD(v35->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v30,
      151,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    v35 = v30->fields._items;
    v33 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v30->fields._version;
    if ( !v35 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v41 + 1;
    *((_DWORD *)v35->m_Items + v41) = 151;
    ++*p_version;
  }
  v42 = *p_size;
  if ( (unsigned int)v42 >= LODWORD(v35->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v30,
      161,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    v35 = v30->fields._items;
    v33 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v30->fields._version;
    if ( !v35 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v42 + 1;
    *((_DWORD *)v35->m_Items + v42) = 161;
    ++*p_version;
  }
  v43 = *p_size;
  if ( (unsigned int)v43 >= LODWORD(v35->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v30,
      171,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    v35 = v30->fields._items;
    v33 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v30->fields._version;
    if ( !v35 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v43 + 1;
    *((_DWORD *)v35->m_Items + v43) = 171;
    ++*p_version;
  }
  v44 = *p_size;
  if ( (unsigned int)v44 >= LODWORD(v35->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v30,
      181,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    v35 = v30->fields._items;
    v33 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v30->fields._version;
    if ( !v35 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v44 + 1;
    *((_DWORD *)v35->m_Items + v44) = 181;
    ++*p_version;
  }
  v45 = *p_size;
  if ( (unsigned int)v45 >= LODWORD(v35->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v30,
      191,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    v35 = v30->fields._items;
    v33 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v30->fields._version;
    if ( !v35 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v45 + 1;
    *((_DWORD *)v35->m_Items + v45) = 191;
    ++*p_version;
  }
  v46 = *p_size;
  if ( (unsigned int)v46 >= LODWORD(v35->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v30,
      1001,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    v35 = v30->fields._items;
    v33 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v30->fields._version;
    if ( !v35 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v46 + 1;
    *((_DWORD *)v35->m_Items + v46) = 1001;
    ++*p_version;
  }
  v47 = *p_size;
  if ( (unsigned int)v47 >= LODWORD(v35->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v30,
      1011,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    v35 = v30->fields._items;
    v33 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v30->fields._version;
    if ( !v35 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v47 + 1;
    *((_DWORD *)v35->m_Items + v47) = 1011;
    ++*p_version;
  }
  v48 = *p_size;
  if ( (unsigned int)v48 >= LODWORD(v35->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v30,
      1021,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    v35 = v30->fields._items;
    v33 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v30->fields._version;
    if ( !v35 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v48 + 1;
    *((_DWORD *)v35->m_Items + v48) = 1021;
    ++*p_version;
  }
  v49 = *p_size;
  if ( (unsigned int)v49 >= LODWORD(v35->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v30,
      1031,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    v35 = v30->fields._items;
    v33 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v30->fields._version;
    if ( !v35 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v49 + 1;
    *((_DWORD *)v35->m_Items + v49) = 1031;
    ++*p_version;
  }
  v50 = *p_size;
  if ( (unsigned int)v50 >= LODWORD(v35->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v30,
      1041,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    v35 = v30->fields._items;
    v33 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v30->fields._version;
    if ( !v35 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v50 + 1;
    *((_DWORD *)v35->m_Items + v50) = 1041;
    ++*p_version;
  }
  v51 = *p_size;
  if ( (unsigned int)v51 >= LODWORD(v35->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v30,
      1051,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    v35 = v30->fields._items;
    v33 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v30->fields._version;
    if ( !v35 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v51 + 1;
    *((_DWORD *)v35->m_Items + v51) = 1051;
    ++*p_version;
  }
  v52 = *p_size;
  if ( (unsigned int)v52 >= LODWORD(v35->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v30,
      1061,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    v35 = v30->fields._items;
    v33 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v30->fields._version;
    if ( !v35 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v52 + 1;
    *((_DWORD *)v35->m_Items + v52) = 1061;
    ++*p_version;
  }
  v53 = *p_size;
  if ( (unsigned int)v53 >= LODWORD(v35->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v30,
      1071,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
    v35 = v30->fields._items;
    v33 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v30->fields._version;
    if ( !v35 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v53 + 1;
    *((_DWORD *)v35->m_Items + v53) = 1071;
    ++*p_version;
  }
  v54 = *p_size;
  if ( (unsigned int)v54 >= LODWORD(v35->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v30,
      1081,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
  }
  else
  {
    *p_size = v54 + 1;
    *((_DWORD *)v35->m_Items + v54) = 1081;
  }
  v55 = Voice_TypeInfo->static_fields;
  v55->firstNpVoiceList = (struct System_Collections_Generic_List_Voice_BATTLE__o *)v30;
  sub_1C36FFC((CGThumbnailListItem_o *)&v55->firstNpVoiceList, (int32_t)v30, v31, v32);
  v56 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C372A4(System_Collections_Generic_Dictionary_Voice_BATTLE__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v56,
    (const MethodInfo_342CC4C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string___ctor__);
  if ( !v56 )
LABEL_116:
    sub_1C372B4(v2);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    0,
    0,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    10,
    (Il2CppObject *)StringLiteral_2511/*"B010"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    11,
    (Il2CppObject *)StringLiteral_2512/*"B020"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    12,
    (Il2CppObject *)StringLiteral_2513/*"B030"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    20,
    (Il2CppObject *)StringLiteral_2514/*"B040"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    21,
    (Il2CppObject *)StringLiteral_2515/*"B041"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    22,
    (Il2CppObject *)StringLiteral_2516/*"B042"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    111,
    (Il2CppObject *)StringLiteral_2518/*"B050"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    112,
    (Il2CppObject *)StringLiteral_2519/*"B051"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    113,
    (Il2CppObject *)StringLiteral_2520/*"B052"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    114,
    (Il2CppObject *)StringLiteral_2521/*"B053"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    115,
    (Il2CppObject *)StringLiteral_2522/*"B054"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    121,
    (Il2CppObject *)StringLiteral_2524/*"B060"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    122,
    (Il2CppObject *)StringLiteral_2525/*"B061"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    123,
    (Il2CppObject *)StringLiteral_2526/*"B062"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    124,
    (Il2CppObject *)StringLiteral_2527/*"B063"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    125,
    (Il2CppObject *)StringLiteral_2528/*"B064"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    131,
    (Il2CppObject *)StringLiteral_2530/*"B070"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    132,
    (Il2CppObject *)StringLiteral_2531/*"B071"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    133,
    (Il2CppObject *)StringLiteral_2532/*"B072"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    134,
    (Il2CppObject *)StringLiteral_2533/*"B073"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    135,
    (Il2CppObject *)StringLiteral_2534/*"B074"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    141,
    (Il2CppObject *)StringLiteral_2656/*"B800"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    151,
    (Il2CppObject *)StringLiteral_2658/*"B810"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    161,
    (Il2CppObject *)StringLiteral_2660/*"B820"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    171,
    (Il2CppObject *)StringLiteral_2553/*"B1600"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    181,
    (Il2CppObject *)StringLiteral_2554/*"B1610"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    191,
    (Il2CppObject *)StringLiteral_2555/*"B1620"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    1001,
    (Il2CppObject *)StringLiteral_2538/*"B1000"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    31,
    (Il2CppObject *)StringLiteral_2535/*"B080"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    32,
    (Il2CppObject *)StringLiteral_2536/*"B090"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    41,
    (Il2CppObject *)StringLiteral_2537/*"B100"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    42,
    (Il2CppObject *)StringLiteral_2541/*"B110"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    51,
    (Il2CppObject *)StringLiteral_2542/*"B120"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    52,
    (Il2CppObject *)StringLiteral_2546/*"B130"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    61,
    (Il2CppObject *)StringLiteral_2547/*"B140"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    71,
    (Il2CppObject *)StringLiteral_2551/*"B150"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    81,
    (Il2CppObject *)StringLiteral_2552/*"B160"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    82,
    (Il2CppObject *)StringLiteral_2556/*"B170"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    201,
    (Il2CppObject *)StringLiteral_2557/*"B180"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    202,
    (Il2CppObject *)StringLiteral_2558/*"B190"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    203,
    (Il2CppObject *)StringLiteral_2559/*"B200"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    211,
    (Il2CppObject *)StringLiteral_2565/*"B210"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    212,
    (Il2CppObject *)StringLiteral_2574/*"B220"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    213,
    (Il2CppObject *)StringLiteral_2575/*"B230"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    214,
    (Il2CppObject *)StringLiteral_2601/*"B300"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    215,
    (Il2CppObject *)StringLiteral_2601/*"B300"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    216,
    (Il2CppObject *)StringLiteral_2584/*"B250"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    217,
    (Il2CppObject *)StringLiteral_2633/*"B410"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    218,
    (Il2CppObject *)StringLiteral_2634/*"B420"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    219,
    (Il2CppObject *)StringLiteral_2635/*"B430"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    220,
    (Il2CppObject *)StringLiteral_2636/*"B440"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    221,
    (Il2CppObject *)StringLiteral_2637/*"B441"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    222,
    (Il2CppObject *)StringLiteral_2638/*"B442"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    223,
    (Il2CppObject *)StringLiteral_2639/*"B480"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    224,
    (Il2CppObject *)StringLiteral_2640/*"B490"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    225,
    (Il2CppObject *)StringLiteral_2641/*"B500"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    226,
    (Il2CppObject *)StringLiteral_2642/*"B510"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    227,
    (Il2CppObject *)StringLiteral_2643/*"B520"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    228,
    (Il2CppObject *)StringLiteral_2650/*"B530"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    229,
    (Il2CppObject *)StringLiteral_2651/*"B540"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    230,
    (Il2CppObject *)StringLiteral_2653/*"B560"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    231,
    (Il2CppObject *)StringLiteral_2654/*"B570"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    232,
    (Il2CppObject *)StringLiteral_2608/*"B310"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    233,
    (Il2CppObject *)StringLiteral_2609/*"B320"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    234,
    (Il2CppObject *)StringLiteral_2610/*"B330"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    235,
    (Il2CppObject *)StringLiteral_2611/*"B331"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    236,
    (Il2CppObject *)StringLiteral_2612/*"B340"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    237,
    (Il2CppObject *)StringLiteral_2613/*"B341"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    238,
    (Il2CppObject *)StringLiteral_2615/*"B342"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    239,
    (Il2CppObject *)StringLiteral_2652/*"B550"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    240,
    (Il2CppObject *)StringLiteral_2668/*"B910"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    241,
    (Il2CppObject *)StringLiteral_2669/*"B920"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    242,
    (Il2CppObject *)StringLiteral_2670/*"B930"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    243,
    (Il2CppObject *)StringLiteral_2666/*"B880"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    244,
    (Il2CppObject *)StringLiteral_2667/*"B890"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    245,
    (Il2CppObject *)StringLiteral_2621/*"B380"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    246,
    (Il2CppObject *)StringLiteral_2625/*"B390"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    247,
    (Il2CppObject *)StringLiteral_2626/*"B400"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    248,
    (Il2CppObject *)StringLiteral_2661/*"B840"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    249,
    (Il2CppObject *)StringLiteral_2662/*"B841"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    250,
    (Il2CppObject *)StringLiteral_2663/*"B842"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    251,
    (Il2CppObject *)StringLiteral_2593/*"B260"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    252,
    (Il2CppObject *)StringLiteral_2576/*"B240"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    253,
    (Il2CppObject *)StringLiteral_2594/*"B270"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    254,
    (Il2CppObject *)StringLiteral_2563/*"B2080"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    255,
    (Il2CppObject *)StringLiteral_2564/*"B2090"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    256,
    (Il2CppObject *)StringLiteral_2583/*"B2480"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    257,
    (Il2CppObject *)StringLiteral_2580/*"B2440"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    258,
    (Il2CppObject *)StringLiteral_2581/*"B2441"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    259,
    (Il2CppObject *)StringLiteral_2582/*"B2442"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    260,
    (Il2CppObject *)StringLiteral_2598/*"B2840"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    261,
    (Il2CppObject *)StringLiteral_2599/*"B2841"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    262,
    (Il2CppObject *)StringLiteral_2600/*"B2842"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    263,
    (Il2CppObject *)StringLiteral_2630/*"B4040"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    264,
    (Il2CppObject *)StringLiteral_2631/*"B4041"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    265,
    (Il2CppObject *)StringLiteral_2632/*"B4042"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    266,
    (Il2CppObject *)StringLiteral_2560/*"B2010"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    267,
    (Il2CppObject *)StringLiteral_2561/*"B2020"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    268,
    (Il2CppObject *)StringLiteral_2562/*"B2030"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    269,
    (Il2CppObject *)StringLiteral_2577/*"B2410"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    270,
    (Il2CppObject *)StringLiteral_2578/*"B2420"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    271,
    (Il2CppObject *)StringLiteral_2579/*"B2430"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    272,
    (Il2CppObject *)StringLiteral_2595/*"B2810"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    273,
    (Il2CppObject *)StringLiteral_2596/*"B2820"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    274,
    (Il2CppObject *)StringLiteral_2597/*"B2830"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    275,
    (Il2CppObject *)StringLiteral_2566/*"B2100"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    276,
    (Il2CppObject *)StringLiteral_2567/*"B2110"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    277,
    (Il2CppObject *)StringLiteral_2585/*"B2500"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    278,
    (Il2CppObject *)StringLiteral_2586/*"B2510"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    279,
    (Il2CppObject *)StringLiteral_2602/*"B3010"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    280,
    (Il2CppObject *)StringLiteral_2603/*"B3020"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    281,
    (Il2CppObject *)StringLiteral_2604/*"B3030"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    282,
    (Il2CppObject *)StringLiteral_2614/*"B3410"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    283,
    (Il2CppObject *)StringLiteral_2616/*"B3420"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    284,
    (Il2CppObject *)StringLiteral_2617/*"B3430"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    285,
    (Il2CppObject *)StringLiteral_2572/*"B2160"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    286,
    (Il2CppObject *)StringLiteral_2573/*"B2170"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    287,
    (Il2CppObject *)StringLiteral_2591/*"B2560"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    288,
    (Il2CppObject *)StringLiteral_2592/*"B2570"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    289,
    (Il2CppObject *)StringLiteral_2568/*"B2120"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    290,
    (Il2CppObject *)StringLiteral_2569/*"B2130"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    291,
    (Il2CppObject *)StringLiteral_2587/*"B2520"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    292,
    (Il2CppObject *)StringLiteral_2588/*"B2530"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    293,
    (Il2CppObject *)StringLiteral_2570/*"B2140"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    294,
    (Il2CppObject *)StringLiteral_2589/*"B2540"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    295,
    (Il2CppObject *)StringLiteral_2571/*"B2150"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    296,
    (Il2CppObject *)StringLiteral_2590/*"B2550"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    297,
    (Il2CppObject *)StringLiteral_2605/*"B3050"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    298,
    (Il2CppObject *)StringLiteral_2606/*"B3060"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    299,
    (Il2CppObject *)StringLiteral_2607/*"B3070"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    300,
    (Il2CppObject *)StringLiteral_2644/*"B5210"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    301,
    (Il2CppObject *)StringLiteral_2645/*"B5220"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    302,
    (Il2CppObject *)StringLiteral_2646/*"B5230"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    303,
    (Il2CppObject *)StringLiteral_2647/*"B5250"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    304,
    (Il2CppObject *)StringLiteral_2648/*"B5260"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    305,
    (Il2CppObject *)StringLiteral_2649/*"B5270"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    306,
    (Il2CppObject *)StringLiteral_2664/*"B8500"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    307,
    (Il2CppObject *)StringLiteral_2665/*"B8510"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    308,
    (Il2CppObject *)StringLiteral_2622/*"B3810"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    309,
    (Il2CppObject *)StringLiteral_2623/*"B3820"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    310,
    (Il2CppObject *)StringLiteral_2624/*"B3830"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    311,
    (Il2CppObject *)StringLiteral_2627/*"B4010"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    312,
    (Il2CppObject *)StringLiteral_2628/*"B4020"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    313,
    (Il2CppObject *)StringLiteral_2629/*"B4030"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    314,
    (Il2CppObject *)StringLiteral_2618/*"B350"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    315,
    (Il2CppObject *)StringLiteral_2619/*"B360"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    316,
    (Il2CppObject *)StringLiteral_2620/*"B370"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    1011,
    (Il2CppObject *)StringLiteral_2539/*"B1010"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    1021,
    (Il2CppObject *)StringLiteral_2540/*"B1020"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    1031,
    (Il2CppObject *)StringLiteral_2543/*"B1200"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    1041,
    (Il2CppObject *)StringLiteral_2544/*"B1210"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    1051,
    (Il2CppObject *)StringLiteral_2545/*"B1220"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    1061,
    (Il2CppObject *)StringLiteral_2548/*"B1400"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    1071,
    (Il2CppObject *)StringLiteral_2549/*"B1410"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v56,
    1081,
    (Il2CppObject *)StringLiteral_2550/*"B1420"*/,
    (const MethodInfo_342D620 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  v57 = Voice_TypeInfo->static_fields;
  v57->filelist = (struct System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v56;
  sub_1C36FFC((CGThumbnailListItem_o *)&v57->filelist, (int32_t)v56, v58, v59);
}


void Voice___ctor(Voice_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t Voice__GetTypeByFileName(System_String_o *fileName, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  Voice_c *v7; // x0
  System_Collections_Generic_IEnumerable_TSource__o *filelist; // x19
  System_Func_T__TResult__o *v9; // x21

  if ( (byte_4C41EF8 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_Voice_BATTLE__string____);
    sub_1C37058(&System_Func_KeyValuePair_Voice_BATTLE__string___bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_Voice_BATTLE__string__get_Key__);
    sub_1C37058(&Method_Voice___c__DisplayClass6_0__GetTypeByFileName_b__0__);
    sub_1C37058(&Voice___c__DisplayClass6_0_TypeInfo);
    sub_1C37058(&Voice_TypeInfo);
    byte_4C41EF8 = 1;
  }
  v3 = sub_1C372A4(Voice___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_1C372B4(v4);
  *(_QWORD *)(v3 + 16) = fileName;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)fileName, v5, v6);
  v7 = Voice_TypeInfo;
  if ( !Voice_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
    v7 = Voice_TypeInfo;
  }
  filelist = (System_Collections_Generic_IEnumerable_TSource__o *)v7->static_fields->filelist;
  v9 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_KeyValuePair_Voice_BATTLE__string___bool__TypeInfo);
  System_Func_KeyValuePair_Int32Enum__object___bool____ctor(
    v9,
    (Il2CppObject *)v3,
    Method_Voice___c__DisplayClass6_0__GetTypeByFileName_b__0__,
    0);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_Int32Enum__object__(
           filelist,
           (System_Func_TSource__bool__o *)v9,
           (const MethodInfo_3111038 *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_Voice_BATTLE__string____).fields.key;
}


bool Voice__IsDeadVoice(int32_t voiceBattleType, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  Voice_c *v5; // x0
  System_Collections_Generic_List_T__o *deadVoiceList; // x19
  System_Func_T__TResult__o *v7; // x21

  if ( (byte_4C41EF9 & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_Voice_BATTLE___);
    sub_1C37058(&System_Func_Voice_BATTLE__bool__TypeInfo);
    sub_1C37058(&Method_Voice___c__DisplayClass7_0__IsDeadVoice_b__0__);
    sub_1C37058(&Voice___c__DisplayClass7_0_TypeInfo);
    sub_1C37058(&Voice_TypeInfo);
    byte_4C41EF9 = 1;
  }
  v3 = sub_1C372A4(Voice___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_1C372B4(v4);
  *(_DWORD *)(v3 + 16) = voiceBattleType;
  v5 = Voice_TypeInfo;
  if ( !Voice_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
    v5 = Voice_TypeInfo;
  }
  deadVoiceList = (System_Collections_Generic_List_T__o *)v5->static_fields->deadVoiceList;
  v7 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_Voice_BATTLE__bool__TypeInfo);
  System_Func_Int32Enum__bool____ctor(v7, (Il2CppObject *)v3, Method_Voice___c__DisplayClass7_0__IsDeadVoice_b__0__, 0);
  return BasicHelper__Any_Int32Enum_(
           deadVoiceList,
           (System_Func_T__bool__o *)v7,
           (const MethodInfo_30D0E14 *)Method_BasicHelper_Any_Voice_BATTLE___);
}


System_String_o *Voice__getFileName(int32_t type, const MethodInfo *method)
{
  Voice_c *v3; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *filelist; // x0
  Voice_c *v5; // x0

  if ( (byte_4C41EF7 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__ContainsKey__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__get_Item__);
    sub_1C37058(&Voice_TypeInfo);
    byte_4C41EF7 = 1;
  }
  v3 = Voice_TypeInfo;
  if ( !Voice_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
    v3 = Voice_TypeInfo;
  }
  filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v3->static_fields->filelist;
  if ( !filelist )
    goto LABEL_12;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         filelist,
         type,
         (const MethodInfo_342D814 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__ContainsKey__) )
  {
    v5 = Voice_TypeInfo;
    if ( !Voice_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
      v5 = Voice_TypeInfo;
    }
    filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v5->static_fields->filelist;
    if ( filelist )
      return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                  filelist,
                                  type,
                                  (const MethodInfo_342D580 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__get_Item__);
LABEL_12:
    sub_1C372B4(filelist);
  }
  return 0;
}


void Voice___c__DisplayClass6_0___ctor(Voice___c__DisplayClass6_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool Voice___c__DisplayClass6_0___GetTypeByFileName_b__0(
        Voice___c__DisplayClass6_0_o *this,
        System_Collections_Generic_KeyValuePair_Voice_BATTLE__string__o x,
        const MethodInfo *method)
{
  System_String_o *value; // x19

  value = x.fields.value;
  if ( (byte_4C41EFB & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_Voice_BATTLE__string__get_Value__);
    byte_4C41EFB = 1;
  }
  return System_String__op_Equality(value, this->fields.fileName, 0);
}


void Voice___c__DisplayClass7_0___ctor(Voice___c__DisplayClass7_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool Voice___c__DisplayClass7_0___IsDeadVoice_b__0(
        Voice___c__DisplayClass7_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return this->fields.voiceBattleType == x;
}