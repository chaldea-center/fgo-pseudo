void Voice___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  struct System_Object_array *items; // x9
  _QWORD *v7; // x8
  __int64 size; // x10
  __int64 v9; // x10
  __int64 v10; // x10
  __int64 v11; // x10
  __int64 v12; // x10
  __int64 v13; // x10
  __int64 v14; // x10
  __int64 v15; // x10
  System_Collections_Generic_List_T__o *v16; // x19
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct System_Object_array *v19; // x9
  _QWORD *v20; // x8
  __int64 v21; // x10
  __int64 v22; // x10
  __int64 v23; // x10
  __int64 v24; // x10
  __int64 v25; // x10
  __int64 v26; // x10
  __int64 v27; // x10
  __int64 v28; // x10
  __int64 v29; // x10
  struct Voice_StaticFields *static_fields; // x0
  System_Collections_Generic_List_T__o *v31; // x19
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  _QWORD *v34; // x8
  int32_t *p_version; // x21
  struct System_Object_array *v36; // x9
  __int64 v37; // x10
  int32_t *p_size; // x20
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
  __int64 v55; // x10
  struct Voice_StaticFields *v56; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v57; // x19
  struct Voice_StaticFields *v58; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3

  if ( (byte_4CB5201 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_Voice_BATTLE__string__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Voice_BATTLE__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Voice_BATTLE___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_Voice_BATTLE__TypeInfo);
    sub_1C6BA08(&Voice_TypeInfo);
    sub_1C6BA08(&StringLiteral_2588/*"B2820"*/);
    sub_1C6BA08(&StringLiteral_2516/*"B060"*/);
    sub_1C6BA08(&StringLiteral_2511/*"B051"*/);
    sub_1C6BA08(&StringLiteral_2644/*"B550"*/);
    sub_1C6BA08(&StringLiteral_2624/*"B4042"*/);
    sub_1C6BA08(&StringLiteral_2645/*"B560"*/);
    sub_1C6BA08(&StringLiteral_2607/*"B342"*/);
    sub_1C6BA08(&StringLiteral_2658/*"B880"*/);
    sub_1C6BA08(&StringLiteral_2586/*"B270"*/);
    sub_1C6BA08(&StringLiteral_2518/*"B062"*/);
    sub_1C6BA08(&StringLiteral_2550/*"B190"*/);
    sub_1C6BA08(&StringLiteral_2547/*"B1620"*/);
    sub_1C6BA08(&StringLiteral_2542/*"B1420"*/);
    sub_1C6BA08(&StringLiteral_2589/*"B2830"*/);
    sub_1C6BA08(&StringLiteral_2513/*"B053"*/);
    sub_1C6BA08(&StringLiteral_2555/*"B2080"*/);
    sub_1C6BA08(&StringLiteral_2545/*"B1600"*/);
    sub_1C6BA08(&StringLiteral_2662/*"B930"*/);
    sub_1C6BA08(&StringLiteral_2638/*"B5230"*/);
    sub_1C6BA08(&StringLiteral_2506/*"B040"*/);
    sub_1C6BA08(&StringLiteral_2643/*"B540"*/);
    sub_1C6BA08(&StringLiteral_2611/*"B360"*/);
    sub_1C6BA08(&StringLiteral_2618/*"B400"*/);
    sub_1C6BA08(&StringLiteral_2503/*"B010"*/);
    sub_1C6BA08(&StringLiteral_2544/*"B160"*/);
    sub_1C6BA08(&StringLiteral_2601/*"B320"*/);
    sub_1C6BA08(&StringLiteral_2583/*"B2560"*/);
    sub_1C6BA08(&StringLiteral_2622/*"B4040"*/);
    sub_1C6BA08(&StringLiteral_2557/*"B210"*/);
    sub_1C6BA08(&StringLiteral_2653/*"B840"*/);
    sub_1C6BA08(&StringLiteral_2538/*"B130"*/);
    sub_1C6BA08(&StringLiteral_2604/*"B340"*/);
    sub_1C6BA08(&StringLiteral_2640/*"B5260"*/);
    sub_1C6BA08(&StringLiteral_2523/*"B071"*/);
    sub_1C6BA08(&StringLiteral_2565/*"B2170"*/);
    sub_1C6BA08(&StringLiteral_2580/*"B2530"*/);
    sub_1C6BA08(&StringLiteral_2621/*"B4030"*/);
    sub_1C6BA08(&StringLiteral_2657/*"B8510"*/);
    sub_1C6BA08(&StringLiteral_2537/*"B1220"*/);
    sub_1C6BA08(&StringLiteral_2579/*"B2520"*/);
    sub_1C6BA08(&StringLiteral_2563/*"B2150"*/);
    sub_1C6BA08(&StringLiteral_2641/*"B5270"*/);
    sub_1C6BA08(&StringLiteral_2593/*"B300"*/);
    sub_1C6BA08(&StringLiteral_2595/*"B3020"*/);
    sub_1C6BA08(&StringLiteral_2507/*"B041"*/);
    sub_1C6BA08(&StringLiteral_2587/*"B2810"*/);
    sub_1C6BA08(&StringLiteral_2606/*"B3410"*/);
    sub_1C6BA08(&StringLiteral_2594/*"B3010"*/);
    sub_1C6BA08(&StringLiteral_2552/*"B2010"*/);
    sub_1C6BA08(&StringLiteral_2529/*"B100"*/);
    sub_1C6BA08(&StringLiteral_2559/*"B2110"*/);
    sub_1C6BA08(&StringLiteral_2626/*"B420"*/);
    sub_1C6BA08(&StringLiteral_2634/*"B510"*/);
    sub_1C6BA08(&StringLiteral_2519/*"B063"*/);
    sub_1C6BA08(&StringLiteral_2608/*"B3420"*/);
    sub_1C6BA08(&StringLiteral_2659/*"B890"*/);
    sub_1C6BA08(&StringLiteral_2598/*"B3060"*/);
    sub_1C6BA08(&StringLiteral_2556/*"B2090"*/);
    sub_1C6BA08(&StringLiteral_2540/*"B1400"*/);
    sub_1C6BA08(&StringLiteral_2524/*"B072"*/);
    sub_1C6BA08(&StringLiteral_2597/*"B3050"*/);
    sub_1C6BA08(&StringLiteral_2541/*"B1410"*/);
    sub_1C6BA08(&StringLiteral_2603/*"B331"*/);
    sub_1C6BA08(&StringLiteral_2551/*"B200"*/);
    sub_1C6BA08(&StringLiteral_2528/*"B090"*/);
    sub_1C6BA08(&StringLiteral_2575/*"B2480"*/);
    sub_1C6BA08(&StringLiteral_2623/*"B4041"*/);
    sub_1C6BA08(&StringLiteral_2581/*"B2540"*/);
    sub_1C6BA08(&StringLiteral_2590/*"B2840"*/);
    sub_1C6BA08(&StringLiteral_2584/*"B2570"*/);
    sub_1C6BA08(&StringLiteral_2656/*"B8500"*/);
    sub_1C6BA08(&StringLiteral_2661/*"B920"*/);
    sub_1C6BA08(&StringLiteral_2512/*"B052"*/);
    sub_1C6BA08(&StringLiteral_2566/*"B220"*/);
    sub_1C6BA08(&StringLiteral_2533/*"B110"*/);
    sub_1C6BA08(&StringLiteral_2568/*"B240"*/);
    sub_1C6BA08(&StringLiteral_2614/*"B3810"*/);
    sub_1C6BA08(&StringLiteral_2596/*"B3030"*/);
    sub_1C6BA08(&StringLiteral_2574/*"B2442"*/);
    sub_1C6BA08(&StringLiteral_2525/*"B073"*/);
    sub_1C6BA08(&StringLiteral_2599/*"B3070"*/);
    sub_1C6BA08(&StringLiteral_2612/*"B370"*/);
    sub_1C6BA08(&StringLiteral_2627/*"B430"*/);
    sub_1C6BA08(&StringLiteral_2505/*"B030"*/);
    sub_1C6BA08(&StringLiteral_2571/*"B2430"*/);
    sub_1C6BA08(&StringLiteral_2642/*"B530"*/);
    sub_1C6BA08(&StringLiteral_2561/*"B2130"*/);
    sub_1C6BA08(&StringLiteral_2560/*"B2120"*/);
    sub_1C6BA08(&StringLiteral_2629/*"B441"*/);
    sub_1C6BA08(&StringLiteral_2600/*"B310"*/);
    sub_1C6BA08(&StringLiteral_2531/*"B1010"*/);
    sub_1C6BA08(&StringLiteral_2539/*"B140"*/);
    sub_1C6BA08(&StringLiteral_2582/*"B2550"*/);
    sub_1C6BA08(&StringLiteral_2522/*"B070"*/);
    sub_1C6BA08(&StringLiteral_2546/*"B1610"*/);
    sub_1C6BA08(&StringLiteral_2517/*"B061"*/);
    sub_1C6BA08(&StringLiteral_2632/*"B490"*/);
    sub_1C6BA08(&StringLiteral_2613/*"B380"*/);
    sub_1C6BA08(&StringLiteral_2567/*"B230"*/);
    sub_1C6BA08(&StringLiteral_2562/*"B2140"*/);
    sub_1C6BA08(&StringLiteral_2549/*"B180"*/);
    sub_1C6BA08(&StringLiteral_2650/*"B810"*/);
    sub_1C6BA08(&StringLiteral_2504/*"B020"*/);
    sub_1C6BA08(&StringLiteral_2615/*"B3820"*/);
    sub_1C6BA08(&StringLiteral_2625/*"B410"*/);
    sub_1C6BA08(&StringLiteral_2617/*"B390"*/);
    sub_1C6BA08(&StringLiteral_2616/*"B3830"*/);
    sub_1C6BA08(&StringLiteral_2573/*"B2441"*/);
    sub_1C6BA08(&StringLiteral_2572/*"B2440"*/);
    sub_1C6BA08(&StringLiteral_2620/*"B4020"*/);
    sub_1C6BA08(&StringLiteral_2535/*"B1200"*/);
    sub_1C6BA08(&StringLiteral_2630/*"B442"*/);
    sub_1C6BA08(&StringLiteral_2635/*"B520"*/);
    sub_1C6BA08(&StringLiteral_2633/*"B500"*/);
    sub_1C6BA08(&StringLiteral_2526/*"B074"*/);
    sub_1C6BA08(&StringLiteral_2520/*"B064"*/);
    sub_1C6BA08(&StringLiteral_2602/*"B330"*/);
    sub_1C6BA08(&StringLiteral_2530/*"B1000"*/);
    sub_1C6BA08(&StringLiteral_2605/*"B341"*/);
    sub_1C6BA08(&StringLiteral_2631/*"B480"*/);
    sub_1C6BA08(&StringLiteral_2554/*"B2030"*/);
    sub_1C6BA08(&StringLiteral_2628/*"B440"*/);
    sub_1C6BA08(&StringLiteral_2592/*"B2842"*/);
    sub_1C6BA08(&StringLiteral_2510/*"B050"*/);
    sub_1C6BA08(&StringLiteral_2637/*"B5220"*/);
    sub_1C6BA08(&StringLiteral_2548/*"B170"*/);
    sub_1C6BA08(&StringLiteral_2578/*"B2510"*/);
    sub_1C6BA08(&StringLiteral_2576/*"B250"*/);
    sub_1C6BA08(&StringLiteral_2534/*"B120"*/);
    sub_1C6BA08(&StringLiteral_2648/*"B800"*/);
    sub_1C6BA08(&StringLiteral_2527/*"B080"*/);
    sub_1C6BA08(&StringLiteral_2543/*"B150"*/);
    sub_1C6BA08(&StringLiteral_2652/*"B820"*/);
    sub_1C6BA08(&StringLiteral_2569/*"B2410"*/);
    sub_1C6BA08(&StringLiteral_2591/*"B2841"*/);
    sub_1C6BA08(&StringLiteral_2508/*"B042"*/);
    sub_1C6BA08(&StringLiteral_2558/*"B2100"*/);
    sub_1C6BA08(&StringLiteral_2619/*"B4010"*/);
    sub_1C6BA08(&StringLiteral_2577/*"B2500"*/);
    sub_1C6BA08(&StringLiteral_2532/*"B1020"*/);
    sub_1C6BA08(&StringLiteral_2553/*"B2020"*/);
    sub_1C6BA08(&StringLiteral_2655/*"B842"*/);
    sub_1C6BA08(&StringLiteral_2654/*"B841"*/);
    sub_1C6BA08(&StringLiteral_2514/*"B054"*/);
    sub_1C6BA08(&StringLiteral_2609/*"B3430"*/);
    sub_1C6BA08(&StringLiteral_2570/*"B2420"*/);
    sub_1C6BA08(&StringLiteral_2585/*"B260"*/);
    sub_1C6BA08(&StringLiteral_2610/*"B350"*/);
    sub_1C6BA08(&StringLiteral_2646/*"B570"*/);
    sub_1C6BA08(&StringLiteral_2636/*"B5210"*/);
    sub_1C6BA08(&StringLiteral_2660/*"B910"*/);
    sub_1C6BA08(&StringLiteral_2536/*"B1210"*/);
    sub_1C6BA08(&StringLiteral_2639/*"B5250"*/);
    sub_1C6BA08(&StringLiteral_2564/*"B2160"*/);
    byte_4CB5201 = 1;
  }
  v1 = (System_Collections_Generic_List_T__o *)sub_1C6BC54(System_Collections_Generic_List_Voice_BATTLE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v1,
    (const MethodInfo_37E5928 *)Method_System_Collections_Generic_List_Voice_BATTLE___ctor__);
  if ( !v1 )
    goto LABEL_116;
  items = v1->fields._items;
  v7 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
  ++v1->fields._version;
  if ( !items )
    goto LABEL_116;
  size = v1->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      81,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v7 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
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
  v9 = v1->fields._size;
  if ( (unsigned int)v9 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      82,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v7 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v1->fields._size = v9 + 1;
    *((_DWORD *)items->m_Items + v9) = 82;
    ++v1->fields._version;
  }
  v10 = v1->fields._size;
  if ( (unsigned int)v10 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      230,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v7 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v1->fields._size = v10 + 1;
    *((_DWORD *)items->m_Items + v10) = 230;
    ++v1->fields._version;
  }
  v11 = v1->fields._size;
  if ( (unsigned int)v11 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      231,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v7 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v1->fields._size = v11 + 1;
    *((_DWORD *)items->m_Items + v11) = 231;
    ++v1->fields._version;
  }
  v12 = v1->fields._size;
  if ( (unsigned int)v12 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      285,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v7 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v1->fields._size = v12 + 1;
    *((_DWORD *)items->m_Items + v12) = 285;
    ++v1->fields._version;
  }
  v13 = v1->fields._size;
  if ( (unsigned int)v13 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      286,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v7 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v1->fields._size = v13 + 1;
    *((_DWORD *)items->m_Items + v13) = 286;
    ++v1->fields._version;
  }
  v14 = v1->fields._size;
  if ( (unsigned int)v14 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      287,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v7 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v1->fields._size = v14 + 1;
    *((_DWORD *)items->m_Items + v14) = 287;
    ++v1->fields._version;
  }
  v15 = v1->fields._size;
  if ( (unsigned int)v15 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      288,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v7[4] + 192LL) + 112LL));
  }
  else
  {
    v1->fields._size = v15 + 1;
    *((_DWORD *)items->m_Items + v15) = 288;
  }
  Voice_TypeInfo->static_fields->deadVoiceList = (struct System_Collections_Generic_List_Voice_BATTLE__o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)Voice_TypeInfo->static_fields, (int32_t)v1, v4, v5);
  v16 = (System_Collections_Generic_List_T__o *)sub_1C6BC54(System_Collections_Generic_List_Voice_BATTLE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v16,
    (const MethodInfo_37E5928 *)Method_System_Collections_Generic_List_Voice_BATTLE___ctor__);
  if ( !v16 )
    goto LABEL_116;
  v19 = v16->fields._items;
  v20 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
  ++v16->fields._version;
  if ( !v19 )
    goto LABEL_116;
  v21 = v16->fields._size;
  if ( (unsigned int)v21 >= LODWORD(v19->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v16,
      31,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    v19 = v16->fields._items;
    v20 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v16->fields._version;
    if ( !v19 )
      goto LABEL_116;
  }
  else
  {
    v16->fields._size = v21 + 1;
    *((_DWORD *)v19->m_Items + v21) = 31;
    ++v16->fields._version;
  }
  v22 = v16->fields._size;
  if ( (unsigned int)v22 >= LODWORD(v19->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v16,
      32,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    v19 = v16->fields._items;
    v20 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v16->fields._version;
    if ( !v19 )
      goto LABEL_116;
  }
  else
  {
    v16->fields._size = v22 + 1;
    *((_DWORD *)v19->m_Items + v22) = 32;
    ++v16->fields._version;
  }
  v23 = v16->fields._size;
  if ( (unsigned int)v23 >= LODWORD(v19->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v16,
      223,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    v19 = v16->fields._items;
    v20 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v16->fields._version;
    if ( !v19 )
      goto LABEL_116;
  }
  else
  {
    v16->fields._size = v23 + 1;
    *((_DWORD *)v19->m_Items + v23) = 223;
    ++v16->fields._version;
  }
  v24 = v16->fields._size;
  if ( (unsigned int)v24 >= LODWORD(v19->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v16,
      224,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    v19 = v16->fields._items;
    v20 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v16->fields._version;
    if ( !v19 )
      goto LABEL_116;
  }
  else
  {
    v16->fields._size = v24 + 1;
    *((_DWORD *)v19->m_Items + v24) = 224;
    ++v16->fields._version;
  }
  v25 = v16->fields._size;
  if ( (unsigned int)v25 >= LODWORD(v19->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v16,
      243,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    v19 = v16->fields._items;
    v20 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v16->fields._version;
    if ( !v19 )
      goto LABEL_116;
  }
  else
  {
    v16->fields._size = v25 + 1;
    *((_DWORD *)v19->m_Items + v25) = 243;
    ++v16->fields._version;
  }
  v26 = v16->fields._size;
  if ( (unsigned int)v26 >= LODWORD(v19->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v16,
      244,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    v19 = v16->fields._items;
    v20 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v16->fields._version;
    if ( !v19 )
      goto LABEL_116;
  }
  else
  {
    v16->fields._size = v26 + 1;
    *((_DWORD *)v19->m_Items + v26) = 244;
    ++v16->fields._version;
  }
  v27 = v16->fields._size;
  if ( (unsigned int)v27 >= LODWORD(v19->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v16,
      254,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    v19 = v16->fields._items;
    v20 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v16->fields._version;
    if ( !v19 )
      goto LABEL_116;
  }
  else
  {
    v16->fields._size = v27 + 1;
    *((_DWORD *)v19->m_Items + v27) = 254;
    ++v16->fields._version;
  }
  v28 = v16->fields._size;
  if ( (unsigned int)v28 >= LODWORD(v19->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v16,
      255,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    v19 = v16->fields._items;
    v20 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v16->fields._version;
    if ( !v19 )
      goto LABEL_116;
  }
  else
  {
    v16->fields._size = v28 + 1;
    *((_DWORD *)v19->m_Items + v28) = 255;
    ++v16->fields._version;
  }
  v29 = v16->fields._size;
  if ( (unsigned int)v29 >= LODWORD(v19->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v16,
      256,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
  }
  else
  {
    v16->fields._size = v29 + 1;
    *((_DWORD *)v19->m_Items + v29) = 256;
  }
  static_fields = Voice_TypeInfo->static_fields;
  static_fields->skillVoiceList = (struct System_Collections_Generic_List_Voice_BATTLE__o *)v16;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->skillVoiceList, (int32_t)v16, v17, v18);
  v31 = (System_Collections_Generic_List_T__o *)sub_1C6BC54(System_Collections_Generic_List_Voice_BATTLE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v31,
    (const MethodInfo_37E5928 *)Method_System_Collections_Generic_List_Voice_BATTLE___ctor__);
  if ( !v31 )
    goto LABEL_116;
  v34 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
  p_version = &v31->fields._version;
  ++v31->fields._version;
  v36 = v31->fields._items;
  p_size = &v31->fields._size;
  v37 = v31->fields._size;
  if ( !v36 )
    goto LABEL_116;
  if ( (unsigned int)v37 >= LODWORD(v36->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v31,
      111,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    v36 = v31->fields._items;
    v34 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v31->fields._version;
    if ( !v36 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v37 + 1;
    *((_DWORD *)v36->m_Items + v37) = 111;
    ++*p_version;
  }
  v39 = *p_size;
  if ( (unsigned int)v39 >= LODWORD(v36->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v31,
      121,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    v36 = v31->fields._items;
    v34 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v31->fields._version;
    if ( !v36 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v39 + 1;
    *((_DWORD *)v36->m_Items + v39) = 121;
    ++*p_version;
  }
  v40 = *p_size;
  if ( (unsigned int)v40 >= LODWORD(v36->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v31,
      131,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    v36 = v31->fields._items;
    v34 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v31->fields._version;
    if ( !v36 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v40 + 1;
    *((_DWORD *)v36->m_Items + v40) = 131;
    ++*p_version;
  }
  v41 = *p_size;
  if ( (unsigned int)v41 >= LODWORD(v36->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v31,
      141,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    v36 = v31->fields._items;
    v34 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v31->fields._version;
    if ( !v36 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v41 + 1;
    *((_DWORD *)v36->m_Items + v41) = 141;
    ++*p_version;
  }
  v42 = *p_size;
  if ( (unsigned int)v42 >= LODWORD(v36->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v31,
      151,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    v36 = v31->fields._items;
    v34 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v31->fields._version;
    if ( !v36 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v42 + 1;
    *((_DWORD *)v36->m_Items + v42) = 151;
    ++*p_version;
  }
  v43 = *p_size;
  if ( (unsigned int)v43 >= LODWORD(v36->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v31,
      161,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    v36 = v31->fields._items;
    v34 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v31->fields._version;
    if ( !v36 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v43 + 1;
    *((_DWORD *)v36->m_Items + v43) = 161;
    ++*p_version;
  }
  v44 = *p_size;
  if ( (unsigned int)v44 >= LODWORD(v36->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v31,
      171,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    v36 = v31->fields._items;
    v34 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v31->fields._version;
    if ( !v36 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v44 + 1;
    *((_DWORD *)v36->m_Items + v44) = 171;
    ++*p_version;
  }
  v45 = *p_size;
  if ( (unsigned int)v45 >= LODWORD(v36->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v31,
      181,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    v36 = v31->fields._items;
    v34 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v31->fields._version;
    if ( !v36 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v45 + 1;
    *((_DWORD *)v36->m_Items + v45) = 181;
    ++*p_version;
  }
  v46 = *p_size;
  if ( (unsigned int)v46 >= LODWORD(v36->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v31,
      191,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    v36 = v31->fields._items;
    v34 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v31->fields._version;
    if ( !v36 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v46 + 1;
    *((_DWORD *)v36->m_Items + v46) = 191;
    ++*p_version;
  }
  v47 = *p_size;
  if ( (unsigned int)v47 >= LODWORD(v36->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v31,
      1001,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    v36 = v31->fields._items;
    v34 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v31->fields._version;
    if ( !v36 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v47 + 1;
    *((_DWORD *)v36->m_Items + v47) = 1001;
    ++*p_version;
  }
  v48 = *p_size;
  if ( (unsigned int)v48 >= LODWORD(v36->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v31,
      1011,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    v36 = v31->fields._items;
    v34 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v31->fields._version;
    if ( !v36 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v48 + 1;
    *((_DWORD *)v36->m_Items + v48) = 1011;
    ++*p_version;
  }
  v49 = *p_size;
  if ( (unsigned int)v49 >= LODWORD(v36->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v31,
      1021,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    v36 = v31->fields._items;
    v34 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v31->fields._version;
    if ( !v36 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v49 + 1;
    *((_DWORD *)v36->m_Items + v49) = 1021;
    ++*p_version;
  }
  v50 = *p_size;
  if ( (unsigned int)v50 >= LODWORD(v36->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v31,
      1031,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    v36 = v31->fields._items;
    v34 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v31->fields._version;
    if ( !v36 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v50 + 1;
    *((_DWORD *)v36->m_Items + v50) = 1031;
    ++*p_version;
  }
  v51 = *p_size;
  if ( (unsigned int)v51 >= LODWORD(v36->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v31,
      1041,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    v36 = v31->fields._items;
    v34 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v31->fields._version;
    if ( !v36 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v51 + 1;
    *((_DWORD *)v36->m_Items + v51) = 1041;
    ++*p_version;
  }
  v52 = *p_size;
  if ( (unsigned int)v52 >= LODWORD(v36->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v31,
      1051,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    v36 = v31->fields._items;
    v34 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v31->fields._version;
    if ( !v36 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v52 + 1;
    *((_DWORD *)v36->m_Items + v52) = 1051;
    ++*p_version;
  }
  v53 = *p_size;
  if ( (unsigned int)v53 >= LODWORD(v36->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v31,
      1061,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    v36 = v31->fields._items;
    v34 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v31->fields._version;
    if ( !v36 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v53 + 1;
    *((_DWORD *)v36->m_Items + v53) = 1061;
    ++*p_version;
  }
  v54 = *p_size;
  if ( (unsigned int)v54 >= LODWORD(v36->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v31,
      1071,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
    v36 = v31->fields._items;
    v34 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v31->fields._version;
    if ( !v36 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v54 + 1;
    *((_DWORD *)v36->m_Items + v54) = 1071;
    ++*p_version;
  }
  v55 = *p_size;
  if ( (unsigned int)v55 >= LODWORD(v36->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v31,
      1081,
      *(const MethodInfo_37E617C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
  }
  else
  {
    *p_size = v55 + 1;
    *((_DWORD *)v36->m_Items + v55) = 1081;
  }
  v56 = Voice_TypeInfo->static_fields;
  v56->firstNpVoiceList = (struct System_Collections_Generic_List_Voice_BATTLE__o *)v31;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v56->firstNpVoiceList, (int32_t)v31, v32, v33);
  v57 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_Voice_BATTLE__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v57,
    (const MethodInfo_3484F58 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string___ctor__);
  if ( !v57 )
LABEL_116:
    sub_1C6BC60(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    0,
    0,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    10,
    (Il2CppObject *)StringLiteral_2503/*"B010"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    11,
    (Il2CppObject *)StringLiteral_2504/*"B020"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    12,
    (Il2CppObject *)StringLiteral_2505/*"B030"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    20,
    (Il2CppObject *)StringLiteral_2506/*"B040"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    21,
    (Il2CppObject *)StringLiteral_2507/*"B041"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    22,
    (Il2CppObject *)StringLiteral_2508/*"B042"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    111,
    (Il2CppObject *)StringLiteral_2510/*"B050"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    112,
    (Il2CppObject *)StringLiteral_2511/*"B051"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    113,
    (Il2CppObject *)StringLiteral_2512/*"B052"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    114,
    (Il2CppObject *)StringLiteral_2513/*"B053"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    115,
    (Il2CppObject *)StringLiteral_2514/*"B054"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    121,
    (Il2CppObject *)StringLiteral_2516/*"B060"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    122,
    (Il2CppObject *)StringLiteral_2517/*"B061"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    123,
    (Il2CppObject *)StringLiteral_2518/*"B062"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    124,
    (Il2CppObject *)StringLiteral_2519/*"B063"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    125,
    (Il2CppObject *)StringLiteral_2520/*"B064"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    131,
    (Il2CppObject *)StringLiteral_2522/*"B070"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    132,
    (Il2CppObject *)StringLiteral_2523/*"B071"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    133,
    (Il2CppObject *)StringLiteral_2524/*"B072"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    134,
    (Il2CppObject *)StringLiteral_2525/*"B073"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    135,
    (Il2CppObject *)StringLiteral_2526/*"B074"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    141,
    (Il2CppObject *)StringLiteral_2648/*"B800"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    151,
    (Il2CppObject *)StringLiteral_2650/*"B810"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    161,
    (Il2CppObject *)StringLiteral_2652/*"B820"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    171,
    (Il2CppObject *)StringLiteral_2545/*"B1600"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    181,
    (Il2CppObject *)StringLiteral_2546/*"B1610"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    191,
    (Il2CppObject *)StringLiteral_2547/*"B1620"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    1001,
    (Il2CppObject *)StringLiteral_2530/*"B1000"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    31,
    (Il2CppObject *)StringLiteral_2527/*"B080"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    32,
    (Il2CppObject *)StringLiteral_2528/*"B090"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    41,
    (Il2CppObject *)StringLiteral_2529/*"B100"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    42,
    (Il2CppObject *)StringLiteral_2533/*"B110"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    51,
    (Il2CppObject *)StringLiteral_2534/*"B120"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    52,
    (Il2CppObject *)StringLiteral_2538/*"B130"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    61,
    (Il2CppObject *)StringLiteral_2539/*"B140"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    71,
    (Il2CppObject *)StringLiteral_2543/*"B150"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    81,
    (Il2CppObject *)StringLiteral_2544/*"B160"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    82,
    (Il2CppObject *)StringLiteral_2548/*"B170"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    201,
    (Il2CppObject *)StringLiteral_2549/*"B180"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    202,
    (Il2CppObject *)StringLiteral_2550/*"B190"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    203,
    (Il2CppObject *)StringLiteral_2551/*"B200"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    211,
    (Il2CppObject *)StringLiteral_2557/*"B210"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    212,
    (Il2CppObject *)StringLiteral_2566/*"B220"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    213,
    (Il2CppObject *)StringLiteral_2567/*"B230"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    214,
    (Il2CppObject *)StringLiteral_2593/*"B300"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    215,
    (Il2CppObject *)StringLiteral_2593/*"B300"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    216,
    (Il2CppObject *)StringLiteral_2576/*"B250"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    217,
    (Il2CppObject *)StringLiteral_2625/*"B410"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    218,
    (Il2CppObject *)StringLiteral_2626/*"B420"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    219,
    (Il2CppObject *)StringLiteral_2627/*"B430"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    220,
    (Il2CppObject *)StringLiteral_2628/*"B440"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    221,
    (Il2CppObject *)StringLiteral_2629/*"B441"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    222,
    (Il2CppObject *)StringLiteral_2630/*"B442"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    223,
    (Il2CppObject *)StringLiteral_2631/*"B480"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    224,
    (Il2CppObject *)StringLiteral_2632/*"B490"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    225,
    (Il2CppObject *)StringLiteral_2633/*"B500"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    226,
    (Il2CppObject *)StringLiteral_2634/*"B510"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    227,
    (Il2CppObject *)StringLiteral_2635/*"B520"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    228,
    (Il2CppObject *)StringLiteral_2642/*"B530"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    229,
    (Il2CppObject *)StringLiteral_2643/*"B540"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    230,
    (Il2CppObject *)StringLiteral_2645/*"B560"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    231,
    (Il2CppObject *)StringLiteral_2646/*"B570"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    232,
    (Il2CppObject *)StringLiteral_2600/*"B310"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    233,
    (Il2CppObject *)StringLiteral_2601/*"B320"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    234,
    (Il2CppObject *)StringLiteral_2602/*"B330"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    235,
    (Il2CppObject *)StringLiteral_2603/*"B331"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    236,
    (Il2CppObject *)StringLiteral_2604/*"B340"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    237,
    (Il2CppObject *)StringLiteral_2605/*"B341"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    238,
    (Il2CppObject *)StringLiteral_2607/*"B342"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    239,
    (Il2CppObject *)StringLiteral_2644/*"B550"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    240,
    (Il2CppObject *)StringLiteral_2660/*"B910"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    241,
    (Il2CppObject *)StringLiteral_2661/*"B920"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    242,
    (Il2CppObject *)StringLiteral_2662/*"B930"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    243,
    (Il2CppObject *)StringLiteral_2658/*"B880"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    244,
    (Il2CppObject *)StringLiteral_2659/*"B890"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    245,
    (Il2CppObject *)StringLiteral_2613/*"B380"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    246,
    (Il2CppObject *)StringLiteral_2617/*"B390"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    247,
    (Il2CppObject *)StringLiteral_2618/*"B400"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    248,
    (Il2CppObject *)StringLiteral_2653/*"B840"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    249,
    (Il2CppObject *)StringLiteral_2654/*"B841"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    250,
    (Il2CppObject *)StringLiteral_2655/*"B842"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    251,
    (Il2CppObject *)StringLiteral_2585/*"B260"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    252,
    (Il2CppObject *)StringLiteral_2568/*"B240"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    253,
    (Il2CppObject *)StringLiteral_2586/*"B270"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    254,
    (Il2CppObject *)StringLiteral_2555/*"B2080"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    255,
    (Il2CppObject *)StringLiteral_2556/*"B2090"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    256,
    (Il2CppObject *)StringLiteral_2575/*"B2480"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    257,
    (Il2CppObject *)StringLiteral_2572/*"B2440"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    258,
    (Il2CppObject *)StringLiteral_2573/*"B2441"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    259,
    (Il2CppObject *)StringLiteral_2574/*"B2442"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    260,
    (Il2CppObject *)StringLiteral_2590/*"B2840"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    261,
    (Il2CppObject *)StringLiteral_2591/*"B2841"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    262,
    (Il2CppObject *)StringLiteral_2592/*"B2842"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    263,
    (Il2CppObject *)StringLiteral_2622/*"B4040"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    264,
    (Il2CppObject *)StringLiteral_2623/*"B4041"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    265,
    (Il2CppObject *)StringLiteral_2624/*"B4042"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    266,
    (Il2CppObject *)StringLiteral_2552/*"B2010"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    267,
    (Il2CppObject *)StringLiteral_2553/*"B2020"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    268,
    (Il2CppObject *)StringLiteral_2554/*"B2030"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    269,
    (Il2CppObject *)StringLiteral_2569/*"B2410"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    270,
    (Il2CppObject *)StringLiteral_2570/*"B2420"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    271,
    (Il2CppObject *)StringLiteral_2571/*"B2430"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    272,
    (Il2CppObject *)StringLiteral_2587/*"B2810"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    273,
    (Il2CppObject *)StringLiteral_2588/*"B2820"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    274,
    (Il2CppObject *)StringLiteral_2589/*"B2830"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    275,
    (Il2CppObject *)StringLiteral_2558/*"B2100"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    276,
    (Il2CppObject *)StringLiteral_2559/*"B2110"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    277,
    (Il2CppObject *)StringLiteral_2577/*"B2500"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    278,
    (Il2CppObject *)StringLiteral_2578/*"B2510"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    279,
    (Il2CppObject *)StringLiteral_2594/*"B3010"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    280,
    (Il2CppObject *)StringLiteral_2595/*"B3020"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    281,
    (Il2CppObject *)StringLiteral_2596/*"B3030"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    282,
    (Il2CppObject *)StringLiteral_2606/*"B3410"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    283,
    (Il2CppObject *)StringLiteral_2608/*"B3420"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    284,
    (Il2CppObject *)StringLiteral_2609/*"B3430"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    285,
    (Il2CppObject *)StringLiteral_2564/*"B2160"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    286,
    (Il2CppObject *)StringLiteral_2565/*"B2170"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    287,
    (Il2CppObject *)StringLiteral_2583/*"B2560"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    288,
    (Il2CppObject *)StringLiteral_2584/*"B2570"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    289,
    (Il2CppObject *)StringLiteral_2560/*"B2120"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    290,
    (Il2CppObject *)StringLiteral_2561/*"B2130"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    291,
    (Il2CppObject *)StringLiteral_2579/*"B2520"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    292,
    (Il2CppObject *)StringLiteral_2580/*"B2530"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    293,
    (Il2CppObject *)StringLiteral_2562/*"B2140"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    294,
    (Il2CppObject *)StringLiteral_2581/*"B2540"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    295,
    (Il2CppObject *)StringLiteral_2563/*"B2150"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    296,
    (Il2CppObject *)StringLiteral_2582/*"B2550"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    297,
    (Il2CppObject *)StringLiteral_2597/*"B3050"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    298,
    (Il2CppObject *)StringLiteral_2598/*"B3060"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    299,
    (Il2CppObject *)StringLiteral_2599/*"B3070"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    300,
    (Il2CppObject *)StringLiteral_2636/*"B5210"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    301,
    (Il2CppObject *)StringLiteral_2637/*"B5220"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    302,
    (Il2CppObject *)StringLiteral_2638/*"B5230"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    303,
    (Il2CppObject *)StringLiteral_2639/*"B5250"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    304,
    (Il2CppObject *)StringLiteral_2640/*"B5260"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    305,
    (Il2CppObject *)StringLiteral_2641/*"B5270"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    306,
    (Il2CppObject *)StringLiteral_2656/*"B8500"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    307,
    (Il2CppObject *)StringLiteral_2657/*"B8510"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    308,
    (Il2CppObject *)StringLiteral_2614/*"B3810"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    309,
    (Il2CppObject *)StringLiteral_2615/*"B3820"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    310,
    (Il2CppObject *)StringLiteral_2616/*"B3830"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    311,
    (Il2CppObject *)StringLiteral_2619/*"B4010"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    312,
    (Il2CppObject *)StringLiteral_2620/*"B4020"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    313,
    (Il2CppObject *)StringLiteral_2621/*"B4030"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    314,
    (Il2CppObject *)StringLiteral_2610/*"B350"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    315,
    (Il2CppObject *)StringLiteral_2611/*"B360"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    316,
    (Il2CppObject *)StringLiteral_2612/*"B370"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    1011,
    (Il2CppObject *)StringLiteral_2531/*"B1010"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    1021,
    (Il2CppObject *)StringLiteral_2532/*"B1020"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    1031,
    (Il2CppObject *)StringLiteral_2535/*"B1200"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    1041,
    (Il2CppObject *)StringLiteral_2536/*"B1210"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    1051,
    (Il2CppObject *)StringLiteral_2537/*"B1220"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    1061,
    (Il2CppObject *)StringLiteral_2540/*"B1400"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    1071,
    (Il2CppObject *)StringLiteral_2541/*"B1410"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v57,
    1081,
    (Il2CppObject *)StringLiteral_2542/*"B1420"*/,
    (const MethodInfo_348592C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  v58 = Voice_TypeInfo->static_fields;
  v58->filelist = (struct System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v57;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v58->filelist, (int32_t)v57, v59, v60);
}


void Voice___ctor(Voice_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t Voice__GetTypeByFileName(System_String_o *fileName, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  Voice_c *v8; // x0
  System_Collections_Generic_IEnumerable_TSource__o *filelist; // x19
  System_Func_T__TResult__o *v10; // x21

  if ( (byte_4CB51FF & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_Voice_BATTLE__string____);
    sub_1C6BA08(&System_Func_KeyValuePair_Voice_BATTLE__string___bool__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_Voice_BATTLE__string__get_Key__);
    sub_1C6BA08(&Method_Voice___c__DisplayClass6_0__GetTypeByFileName_b__0__);
    sub_1C6BA08(&Voice___c__DisplayClass6_0_TypeInfo);
    sub_1C6BA08(&Voice_TypeInfo);
    byte_4CB51FF = 1;
  }
  v3 = sub_1C6BC54(Voice___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_1C6BC60(v4, v5);
  *(_QWORD *)(v3 + 16) = fileName;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)fileName, v6, v7);
  v8 = Voice_TypeInfo;
  if ( !Voice_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
    v8 = Voice_TypeInfo;
  }
  filelist = (System_Collections_Generic_IEnumerable_TSource__o *)v8->static_fields->filelist;
  v10 = (System_Func_T__TResult__o *)sub_1C6BC54(System_Func_KeyValuePair_Voice_BATTLE__string___bool__TypeInfo);
  System_Func_KeyValuePair_Int32Enum__object___bool____ctor(
    v10,
    (Il2CppObject *)v3,
    Method_Voice___c__DisplayClass6_0__GetTypeByFileName_b__0__,
    0);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_Int32Enum__object__(
           filelist,
           (System_Func_TSource__bool__o *)v10,
           (const MethodInfo_3164824 *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_Voice_BATTLE__string____).fields.key;
}


bool Voice__IsDeadVoice(int32_t voiceBattleType, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  Voice_c *v6; // x0
  System_Collections_Generic_List_T__o *deadVoiceList; // x19
  System_Func_T__TResult__o *v8; // x21

  if ( (byte_4CB5200 & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_Any_Voice_BATTLE___);
    sub_1C6BA08(&System_Func_Voice_BATTLE__bool__TypeInfo);
    sub_1C6BA08(&Method_Voice___c__DisplayClass7_0__IsDeadVoice_b__0__);
    sub_1C6BA08(&Voice___c__DisplayClass7_0_TypeInfo);
    sub_1C6BA08(&Voice_TypeInfo);
    byte_4CB5200 = 1;
  }
  v3 = sub_1C6BC54(Voice___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_1C6BC60(v4, v5);
  *(_DWORD *)(v3 + 16) = voiceBattleType;
  v6 = Voice_TypeInfo;
  if ( !Voice_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
    v6 = Voice_TypeInfo;
  }
  deadVoiceList = (System_Collections_Generic_List_T__o *)v6->static_fields->deadVoiceList;
  v8 = (System_Func_T__TResult__o *)sub_1C6BC54(System_Func_Voice_BATTLE__bool__TypeInfo);
  System_Func_Int32Enum__bool____ctor(v8, (Il2CppObject *)v3, Method_Voice___c__DisplayClass7_0__IsDeadVoice_b__0__, 0);
  return BasicHelper__Any_Int32Enum_(
           deadVoiceList,
           (System_Func_T__bool__o *)v8,
           (const MethodInfo_312424C *)Method_BasicHelper_Any_Voice_BATTLE___);
}


System_String_o *Voice__getFileName(int32_t type, const MethodInfo *method)
{
  Voice_c *v3; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *filelist; // x0
  Voice_c *v5; // x0

  if ( (byte_4CB51FE & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__get_Item__);
    sub_1C6BA08(&Voice_TypeInfo);
    byte_4CB51FE = 1;
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
         (const MethodInfo_3485B20 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__ContainsKey__) )
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
                                  (const MethodInfo_348588C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__get_Item__);
LABEL_12:
    sub_1C6BC60(filelist, method);
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
  if ( (byte_4CB5202 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_Voice_BATTLE__string__get_Value__);
    byte_4CB5202 = 1;
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