void Voice___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  struct System_Object_array *items; // x9
  _QWORD *v11; // x8
  __int64 size; // x10
  __int64 v13; // x10
  __int64 v14; // x10
  __int64 v15; // x10
  __int64 v16; // x10
  __int64 v17; // x10
  __int64 v18; // x10
  __int64 v19; // x10
  System_Collections_Generic_List_T__o *v20; // x19
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  struct System_Object_array *v27; // x9
  _QWORD *v28; // x8
  __int64 v29; // x10
  __int64 v30; // x10
  __int64 v31; // x10
  __int64 v32; // x10
  __int64 v33; // x10
  __int64 v34; // x10
  __int64 v35; // x10
  __int64 v36; // x10
  __int64 v37; // x10
  struct Voice_StaticFields *static_fields; // x0
  System_Collections_Generic_List_T__o *v39; // x19
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  _QWORD *v46; // x8
  int32_t *p_version; // x21
  struct System_Object_array *v48; // x9
  __int64 v49; // x10
  int32_t *p_size; // x20
  __int64 v51; // x10
  __int64 v52; // x10
  __int64 v53; // x10
  __int64 v54; // x10
  __int64 v55; // x10
  __int64 v56; // x10
  __int64 v57; // x10
  __int64 v58; // x10
  __int64 v59; // x10
  __int64 v60; // x10
  __int64 v61; // x10
  __int64 v62; // x10
  __int64 v63; // x10
  __int64 v64; // x10
  __int64 v65; // x10
  __int64 v66; // x10
  __int64 v67; // x10
  struct Voice_StaticFields *v68; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v69; // x19
  struct Voice_StaticFields *v70; // x0
  int32_t v71; // w2
  int32_t v72; // w3
  System_String_o *v73; // x4
  int32_t v74; // w5
  int64_t v75; // x6
  System_String_o *v76; // x7

  if ( (byte_4CED5D2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_Voice_BATTLE__string__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Voice_BATTLE__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Voice_BATTLE___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_Voice_BATTLE__TypeInfo);
    sub_1C7BAE8(&Voice_TypeInfo);
    sub_1C7BAE8(&StringLiteral_2593/*"B2820"*/);
    sub_1C7BAE8(&StringLiteral_2521/*"B060"*/);
    sub_1C7BAE8(&StringLiteral_2516/*"B051"*/);
    sub_1C7BAE8(&StringLiteral_2649/*"B550"*/);
    sub_1C7BAE8(&StringLiteral_2629/*"B4042"*/);
    sub_1C7BAE8(&StringLiteral_2650/*"B560"*/);
    sub_1C7BAE8(&StringLiteral_2612/*"B342"*/);
    sub_1C7BAE8(&StringLiteral_2663/*"B880"*/);
    sub_1C7BAE8(&StringLiteral_2591/*"B270"*/);
    sub_1C7BAE8(&StringLiteral_2523/*"B062"*/);
    sub_1C7BAE8(&StringLiteral_2555/*"B190"*/);
    sub_1C7BAE8(&StringLiteral_2552/*"B1620"*/);
    sub_1C7BAE8(&StringLiteral_2547/*"B1420"*/);
    sub_1C7BAE8(&StringLiteral_2594/*"B2830"*/);
    sub_1C7BAE8(&StringLiteral_2518/*"B053"*/);
    sub_1C7BAE8(&StringLiteral_2560/*"B2080"*/);
    sub_1C7BAE8(&StringLiteral_2550/*"B1600"*/);
    sub_1C7BAE8(&StringLiteral_2667/*"B930"*/);
    sub_1C7BAE8(&StringLiteral_2643/*"B5230"*/);
    sub_1C7BAE8(&StringLiteral_2511/*"B040"*/);
    sub_1C7BAE8(&StringLiteral_2648/*"B540"*/);
    sub_1C7BAE8(&StringLiteral_2616/*"B360"*/);
    sub_1C7BAE8(&StringLiteral_2623/*"B400"*/);
    sub_1C7BAE8(&StringLiteral_2508/*"B010"*/);
    sub_1C7BAE8(&StringLiteral_2549/*"B160"*/);
    sub_1C7BAE8(&StringLiteral_2606/*"B320"*/);
    sub_1C7BAE8(&StringLiteral_2588/*"B2560"*/);
    sub_1C7BAE8(&StringLiteral_2627/*"B4040"*/);
    sub_1C7BAE8(&StringLiteral_2562/*"B210"*/);
    sub_1C7BAE8(&StringLiteral_2658/*"B840"*/);
    sub_1C7BAE8(&StringLiteral_2543/*"B130"*/);
    sub_1C7BAE8(&StringLiteral_2609/*"B340"*/);
    sub_1C7BAE8(&StringLiteral_2645/*"B5260"*/);
    sub_1C7BAE8(&StringLiteral_2528/*"B071"*/);
    sub_1C7BAE8(&StringLiteral_2570/*"B2170"*/);
    sub_1C7BAE8(&StringLiteral_2585/*"B2530"*/);
    sub_1C7BAE8(&StringLiteral_2626/*"B4030"*/);
    sub_1C7BAE8(&StringLiteral_2662/*"B8510"*/);
    sub_1C7BAE8(&StringLiteral_2542/*"B1220"*/);
    sub_1C7BAE8(&StringLiteral_2584/*"B2520"*/);
    sub_1C7BAE8(&StringLiteral_2568/*"B2150"*/);
    sub_1C7BAE8(&StringLiteral_2646/*"B5270"*/);
    sub_1C7BAE8(&StringLiteral_2598/*"B300"*/);
    sub_1C7BAE8(&StringLiteral_2600/*"B3020"*/);
    sub_1C7BAE8(&StringLiteral_2512/*"B041"*/);
    sub_1C7BAE8(&StringLiteral_2592/*"B2810"*/);
    sub_1C7BAE8(&StringLiteral_2611/*"B3410"*/);
    sub_1C7BAE8(&StringLiteral_2599/*"B3010"*/);
    sub_1C7BAE8(&StringLiteral_2557/*"B2010"*/);
    sub_1C7BAE8(&StringLiteral_2534/*"B100"*/);
    sub_1C7BAE8(&StringLiteral_2564/*"B2110"*/);
    sub_1C7BAE8(&StringLiteral_2631/*"B420"*/);
    sub_1C7BAE8(&StringLiteral_2639/*"B510"*/);
    sub_1C7BAE8(&StringLiteral_2524/*"B063"*/);
    sub_1C7BAE8(&StringLiteral_2613/*"B3420"*/);
    sub_1C7BAE8(&StringLiteral_2664/*"B890"*/);
    sub_1C7BAE8(&StringLiteral_2603/*"B3060"*/);
    sub_1C7BAE8(&StringLiteral_2561/*"B2090"*/);
    sub_1C7BAE8(&StringLiteral_2545/*"B1400"*/);
    sub_1C7BAE8(&StringLiteral_2529/*"B072"*/);
    sub_1C7BAE8(&StringLiteral_2602/*"B3050"*/);
    sub_1C7BAE8(&StringLiteral_2546/*"B1410"*/);
    sub_1C7BAE8(&StringLiteral_2608/*"B331"*/);
    sub_1C7BAE8(&StringLiteral_2556/*"B200"*/);
    sub_1C7BAE8(&StringLiteral_2533/*"B090"*/);
    sub_1C7BAE8(&StringLiteral_2580/*"B2480"*/);
    sub_1C7BAE8(&StringLiteral_2628/*"B4041"*/);
    sub_1C7BAE8(&StringLiteral_2586/*"B2540"*/);
    sub_1C7BAE8(&StringLiteral_2595/*"B2840"*/);
    sub_1C7BAE8(&StringLiteral_2589/*"B2570"*/);
    sub_1C7BAE8(&StringLiteral_2661/*"B8500"*/);
    sub_1C7BAE8(&StringLiteral_2666/*"B920"*/);
    sub_1C7BAE8(&StringLiteral_2517/*"B052"*/);
    sub_1C7BAE8(&StringLiteral_2571/*"B220"*/);
    sub_1C7BAE8(&StringLiteral_2538/*"B110"*/);
    sub_1C7BAE8(&StringLiteral_2573/*"B240"*/);
    sub_1C7BAE8(&StringLiteral_2619/*"B3810"*/);
    sub_1C7BAE8(&StringLiteral_2601/*"B3030"*/);
    sub_1C7BAE8(&StringLiteral_2579/*"B2442"*/);
    sub_1C7BAE8(&StringLiteral_2530/*"B073"*/);
    sub_1C7BAE8(&StringLiteral_2604/*"B3070"*/);
    sub_1C7BAE8(&StringLiteral_2617/*"B370"*/);
    sub_1C7BAE8(&StringLiteral_2632/*"B430"*/);
    sub_1C7BAE8(&StringLiteral_2510/*"B030"*/);
    sub_1C7BAE8(&StringLiteral_2576/*"B2430"*/);
    sub_1C7BAE8(&StringLiteral_2647/*"B530"*/);
    sub_1C7BAE8(&StringLiteral_2566/*"B2130"*/);
    sub_1C7BAE8(&StringLiteral_2565/*"B2120"*/);
    sub_1C7BAE8(&StringLiteral_2634/*"B441"*/);
    sub_1C7BAE8(&StringLiteral_2605/*"B310"*/);
    sub_1C7BAE8(&StringLiteral_2536/*"B1010"*/);
    sub_1C7BAE8(&StringLiteral_2544/*"B140"*/);
    sub_1C7BAE8(&StringLiteral_2587/*"B2550"*/);
    sub_1C7BAE8(&StringLiteral_2527/*"B070"*/);
    sub_1C7BAE8(&StringLiteral_2551/*"B1610"*/);
    sub_1C7BAE8(&StringLiteral_2522/*"B061"*/);
    sub_1C7BAE8(&StringLiteral_2637/*"B490"*/);
    sub_1C7BAE8(&StringLiteral_2618/*"B380"*/);
    sub_1C7BAE8(&StringLiteral_2572/*"B230"*/);
    sub_1C7BAE8(&StringLiteral_2567/*"B2140"*/);
    sub_1C7BAE8(&StringLiteral_2554/*"B180"*/);
    sub_1C7BAE8(&StringLiteral_2655/*"B810"*/);
    sub_1C7BAE8(&StringLiteral_2509/*"B020"*/);
    sub_1C7BAE8(&StringLiteral_2620/*"B3820"*/);
    sub_1C7BAE8(&StringLiteral_2630/*"B410"*/);
    sub_1C7BAE8(&StringLiteral_2622/*"B390"*/);
    sub_1C7BAE8(&StringLiteral_2621/*"B3830"*/);
    sub_1C7BAE8(&StringLiteral_2578/*"B2441"*/);
    sub_1C7BAE8(&StringLiteral_2577/*"B2440"*/);
    sub_1C7BAE8(&StringLiteral_2625/*"B4020"*/);
    sub_1C7BAE8(&StringLiteral_2540/*"B1200"*/);
    sub_1C7BAE8(&StringLiteral_2635/*"B442"*/);
    sub_1C7BAE8(&StringLiteral_2640/*"B520"*/);
    sub_1C7BAE8(&StringLiteral_2638/*"B500"*/);
    sub_1C7BAE8(&StringLiteral_2531/*"B074"*/);
    sub_1C7BAE8(&StringLiteral_2525/*"B064"*/);
    sub_1C7BAE8(&StringLiteral_2607/*"B330"*/);
    sub_1C7BAE8(&StringLiteral_2535/*"B1000"*/);
    sub_1C7BAE8(&StringLiteral_2610/*"B341"*/);
    sub_1C7BAE8(&StringLiteral_2636/*"B480"*/);
    sub_1C7BAE8(&StringLiteral_2559/*"B2030"*/);
    sub_1C7BAE8(&StringLiteral_2633/*"B440"*/);
    sub_1C7BAE8(&StringLiteral_2597/*"B2842"*/);
    sub_1C7BAE8(&StringLiteral_2515/*"B050"*/);
    sub_1C7BAE8(&StringLiteral_2642/*"B5220"*/);
    sub_1C7BAE8(&StringLiteral_2553/*"B170"*/);
    sub_1C7BAE8(&StringLiteral_2583/*"B2510"*/);
    sub_1C7BAE8(&StringLiteral_2581/*"B250"*/);
    sub_1C7BAE8(&StringLiteral_2539/*"B120"*/);
    sub_1C7BAE8(&StringLiteral_2653/*"B800"*/);
    sub_1C7BAE8(&StringLiteral_2532/*"B080"*/);
    sub_1C7BAE8(&StringLiteral_2548/*"B150"*/);
    sub_1C7BAE8(&StringLiteral_2657/*"B820"*/);
    sub_1C7BAE8(&StringLiteral_2574/*"B2410"*/);
    sub_1C7BAE8(&StringLiteral_2596/*"B2841"*/);
    sub_1C7BAE8(&StringLiteral_2513/*"B042"*/);
    sub_1C7BAE8(&StringLiteral_2563/*"B2100"*/);
    sub_1C7BAE8(&StringLiteral_2624/*"B4010"*/);
    sub_1C7BAE8(&StringLiteral_2582/*"B2500"*/);
    sub_1C7BAE8(&StringLiteral_2537/*"B1020"*/);
    sub_1C7BAE8(&StringLiteral_2558/*"B2020"*/);
    sub_1C7BAE8(&StringLiteral_2660/*"B842"*/);
    sub_1C7BAE8(&StringLiteral_2659/*"B841"*/);
    sub_1C7BAE8(&StringLiteral_2519/*"B054"*/);
    sub_1C7BAE8(&StringLiteral_2614/*"B3430"*/);
    sub_1C7BAE8(&StringLiteral_2575/*"B2420"*/);
    sub_1C7BAE8(&StringLiteral_2590/*"B260"*/);
    sub_1C7BAE8(&StringLiteral_2615/*"B350"*/);
    sub_1C7BAE8(&StringLiteral_2651/*"B570"*/);
    sub_1C7BAE8(&StringLiteral_2641/*"B5210"*/);
    sub_1C7BAE8(&StringLiteral_2665/*"B910"*/);
    sub_1C7BAE8(&StringLiteral_2541/*"B1210"*/);
    sub_1C7BAE8(&StringLiteral_2644/*"B5250"*/);
    sub_1C7BAE8(&StringLiteral_2569/*"B2160"*/);
    byte_4CED5D2 = 1;
  }
  v1 = (System_Collections_Generic_List_T__o *)sub_1C7BD34(System_Collections_Generic_List_Voice_BATTLE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v1,
    (const MethodInfo_3823DB0 *)Method_System_Collections_Generic_List_Voice_BATTLE___ctor__);
  if ( !v1 )
    goto LABEL_116;
  items = v1->fields._items;
  v11 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
  ++v1->fields._version;
  if ( !items )
    goto LABEL_116;
  size = v1->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      81,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v11 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
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
  v13 = v1->fields._size;
  if ( (unsigned int)v13 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      82,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v11 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v1->fields._size = v13 + 1;
    *((_DWORD *)items->m_Items + v13) = 82;
    ++v1->fields._version;
  }
  v14 = v1->fields._size;
  if ( (unsigned int)v14 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      230,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v11 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v1->fields._size = v14 + 1;
    *((_DWORD *)items->m_Items + v14) = 230;
    ++v1->fields._version;
  }
  v15 = v1->fields._size;
  if ( (unsigned int)v15 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      231,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v11 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v1->fields._size = v15 + 1;
    *((_DWORD *)items->m_Items + v15) = 231;
    ++v1->fields._version;
  }
  v16 = v1->fields._size;
  if ( (unsigned int)v16 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      285,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v11 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v1->fields._size = v16 + 1;
    *((_DWORD *)items->m_Items + v16) = 285;
    ++v1->fields._version;
  }
  v17 = v1->fields._size;
  if ( (unsigned int)v17 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      286,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v11 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v1->fields._size = v17 + 1;
    *((_DWORD *)items->m_Items + v17) = 286;
    ++v1->fields._version;
  }
  v18 = v1->fields._size;
  if ( (unsigned int)v18 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      287,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v11 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v1->fields._size = v18 + 1;
    *((_DWORD *)items->m_Items + v18) = 287;
    ++v1->fields._version;
  }
  v19 = v1->fields._size;
  if ( (unsigned int)v19 >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      288,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v1->fields._size = v19 + 1;
    *((_DWORD *)items->m_Items + v19) = 288;
  }
  Voice_TypeInfo->static_fields->deadVoiceList = (struct System_Collections_Generic_List_Voice_BATTLE__o *)v1;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)Voice_TypeInfo->static_fields, (int32_t)v1, v4, v5, v6, v7, v8, v9);
  v20 = (System_Collections_Generic_List_T__o *)sub_1C7BD34(System_Collections_Generic_List_Voice_BATTLE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v20,
    (const MethodInfo_3823DB0 *)Method_System_Collections_Generic_List_Voice_BATTLE___ctor__);
  if ( !v20 )
    goto LABEL_116;
  v27 = v20->fields._items;
  v28 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
  ++v20->fields._version;
  if ( !v27 )
    goto LABEL_116;
  v29 = v20->fields._size;
  if ( (unsigned int)v29 >= LODWORD(v27->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v20,
      31,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    v27 = v20->fields._items;
    v28 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v20->fields._version;
    if ( !v27 )
      goto LABEL_116;
  }
  else
  {
    v20->fields._size = v29 + 1;
    *((_DWORD *)v27->m_Items + v29) = 31;
    ++v20->fields._version;
  }
  v30 = v20->fields._size;
  if ( (unsigned int)v30 >= LODWORD(v27->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v20,
      32,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    v27 = v20->fields._items;
    v28 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v20->fields._version;
    if ( !v27 )
      goto LABEL_116;
  }
  else
  {
    v20->fields._size = v30 + 1;
    *((_DWORD *)v27->m_Items + v30) = 32;
    ++v20->fields._version;
  }
  v31 = v20->fields._size;
  if ( (unsigned int)v31 >= LODWORD(v27->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v20,
      223,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    v27 = v20->fields._items;
    v28 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v20->fields._version;
    if ( !v27 )
      goto LABEL_116;
  }
  else
  {
    v20->fields._size = v31 + 1;
    *((_DWORD *)v27->m_Items + v31) = 223;
    ++v20->fields._version;
  }
  v32 = v20->fields._size;
  if ( (unsigned int)v32 >= LODWORD(v27->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v20,
      224,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    v27 = v20->fields._items;
    v28 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v20->fields._version;
    if ( !v27 )
      goto LABEL_116;
  }
  else
  {
    v20->fields._size = v32 + 1;
    *((_DWORD *)v27->m_Items + v32) = 224;
    ++v20->fields._version;
  }
  v33 = v20->fields._size;
  if ( (unsigned int)v33 >= LODWORD(v27->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v20,
      243,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    v27 = v20->fields._items;
    v28 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v20->fields._version;
    if ( !v27 )
      goto LABEL_116;
  }
  else
  {
    v20->fields._size = v33 + 1;
    *((_DWORD *)v27->m_Items + v33) = 243;
    ++v20->fields._version;
  }
  v34 = v20->fields._size;
  if ( (unsigned int)v34 >= LODWORD(v27->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v20,
      244,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    v27 = v20->fields._items;
    v28 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v20->fields._version;
    if ( !v27 )
      goto LABEL_116;
  }
  else
  {
    v20->fields._size = v34 + 1;
    *((_DWORD *)v27->m_Items + v34) = 244;
    ++v20->fields._version;
  }
  v35 = v20->fields._size;
  if ( (unsigned int)v35 >= LODWORD(v27->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v20,
      254,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    v27 = v20->fields._items;
    v28 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v20->fields._version;
    if ( !v27 )
      goto LABEL_116;
  }
  else
  {
    v20->fields._size = v35 + 1;
    *((_DWORD *)v27->m_Items + v35) = 254;
    ++v20->fields._version;
  }
  v36 = v20->fields._size;
  if ( (unsigned int)v36 >= LODWORD(v27->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v20,
      255,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    v27 = v20->fields._items;
    v28 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v20->fields._version;
    if ( !v27 )
      goto LABEL_116;
  }
  else
  {
    v20->fields._size = v36 + 1;
    *((_DWORD *)v27->m_Items + v36) = 255;
    ++v20->fields._version;
  }
  v37 = v20->fields._size;
  if ( (unsigned int)v37 >= LODWORD(v27->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v20,
      256,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v20->fields._size = v37 + 1;
    *((_DWORD *)v27->m_Items + v37) = 256;
  }
  static_fields = Voice_TypeInfo->static_fields;
  static_fields->skillVoiceList = (struct System_Collections_Generic_List_Voice_BATTLE__o *)v20;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->skillVoiceList, (int32_t)v20, v21, v22, v23, v24, v25, v26);
  v39 = (System_Collections_Generic_List_T__o *)sub_1C7BD34(System_Collections_Generic_List_Voice_BATTLE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v39,
    (const MethodInfo_3823DB0 *)Method_System_Collections_Generic_List_Voice_BATTLE___ctor__);
  if ( !v39 )
    goto LABEL_116;
  v46 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
  p_version = &v39->fields._version;
  ++v39->fields._version;
  v48 = v39->fields._items;
  p_size = &v39->fields._size;
  v49 = v39->fields._size;
  if ( !v48 )
    goto LABEL_116;
  if ( (unsigned int)v49 >= LODWORD(v48->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      111,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    v48 = v39->fields._items;
    v46 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v39->fields._version;
    if ( !v48 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v49 + 1;
    *((_DWORD *)v48->m_Items + v49) = 111;
    ++*p_version;
  }
  v51 = *p_size;
  if ( (unsigned int)v51 >= LODWORD(v48->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      121,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    v48 = v39->fields._items;
    v46 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v39->fields._version;
    if ( !v48 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v51 + 1;
    *((_DWORD *)v48->m_Items + v51) = 121;
    ++*p_version;
  }
  v52 = *p_size;
  if ( (unsigned int)v52 >= LODWORD(v48->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      131,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    v48 = v39->fields._items;
    v46 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v39->fields._version;
    if ( !v48 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v52 + 1;
    *((_DWORD *)v48->m_Items + v52) = 131;
    ++*p_version;
  }
  v53 = *p_size;
  if ( (unsigned int)v53 >= LODWORD(v48->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      141,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    v48 = v39->fields._items;
    v46 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v39->fields._version;
    if ( !v48 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v53 + 1;
    *((_DWORD *)v48->m_Items + v53) = 141;
    ++*p_version;
  }
  v54 = *p_size;
  if ( (unsigned int)v54 >= LODWORD(v48->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      151,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    v48 = v39->fields._items;
    v46 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v39->fields._version;
    if ( !v48 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v54 + 1;
    *((_DWORD *)v48->m_Items + v54) = 151;
    ++*p_version;
  }
  v55 = *p_size;
  if ( (unsigned int)v55 >= LODWORD(v48->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      161,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    v48 = v39->fields._items;
    v46 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v39->fields._version;
    if ( !v48 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v55 + 1;
    *((_DWORD *)v48->m_Items + v55) = 161;
    ++*p_version;
  }
  v56 = *p_size;
  if ( (unsigned int)v56 >= LODWORD(v48->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      171,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    v48 = v39->fields._items;
    v46 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v39->fields._version;
    if ( !v48 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v56 + 1;
    *((_DWORD *)v48->m_Items + v56) = 171;
    ++*p_version;
  }
  v57 = *p_size;
  if ( (unsigned int)v57 >= LODWORD(v48->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      181,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    v48 = v39->fields._items;
    v46 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v39->fields._version;
    if ( !v48 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v57 + 1;
    *((_DWORD *)v48->m_Items + v57) = 181;
    ++*p_version;
  }
  v58 = *p_size;
  if ( (unsigned int)v58 >= LODWORD(v48->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      191,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    v48 = v39->fields._items;
    v46 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v39->fields._version;
    if ( !v48 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v58 + 1;
    *((_DWORD *)v48->m_Items + v58) = 191;
    ++*p_version;
  }
  v59 = *p_size;
  if ( (unsigned int)v59 >= LODWORD(v48->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      1001,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    v48 = v39->fields._items;
    v46 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v39->fields._version;
    if ( !v48 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v59 + 1;
    *((_DWORD *)v48->m_Items + v59) = 1001;
    ++*p_version;
  }
  v60 = *p_size;
  if ( (unsigned int)v60 >= LODWORD(v48->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      1011,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    v48 = v39->fields._items;
    v46 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v39->fields._version;
    if ( !v48 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v60 + 1;
    *((_DWORD *)v48->m_Items + v60) = 1011;
    ++*p_version;
  }
  v61 = *p_size;
  if ( (unsigned int)v61 >= LODWORD(v48->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      1021,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    v48 = v39->fields._items;
    v46 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v39->fields._version;
    if ( !v48 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v61 + 1;
    *((_DWORD *)v48->m_Items + v61) = 1021;
    ++*p_version;
  }
  v62 = *p_size;
  if ( (unsigned int)v62 >= LODWORD(v48->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      1031,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    v48 = v39->fields._items;
    v46 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v39->fields._version;
    if ( !v48 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v62 + 1;
    *((_DWORD *)v48->m_Items + v62) = 1031;
    ++*p_version;
  }
  v63 = *p_size;
  if ( (unsigned int)v63 >= LODWORD(v48->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      1041,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    v48 = v39->fields._items;
    v46 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v39->fields._version;
    if ( !v48 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v63 + 1;
    *((_DWORD *)v48->m_Items + v63) = 1041;
    ++*p_version;
  }
  v64 = *p_size;
  if ( (unsigned int)v64 >= LODWORD(v48->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      1051,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    v48 = v39->fields._items;
    v46 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v39->fields._version;
    if ( !v48 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v64 + 1;
    *((_DWORD *)v48->m_Items + v64) = 1051;
    ++*p_version;
  }
  v65 = *p_size;
  if ( (unsigned int)v65 >= LODWORD(v48->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      1061,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    v48 = v39->fields._items;
    v46 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v39->fields._version;
    if ( !v48 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v65 + 1;
    *((_DWORD *)v48->m_Items + v65) = 1061;
    ++*p_version;
  }
  v66 = *p_size;
  if ( (unsigned int)v66 >= LODWORD(v48->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      1071,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
    v48 = v39->fields._items;
    v46 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v39->fields._version;
    if ( !v48 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v66 + 1;
    *((_DWORD *)v48->m_Items + v66) = 1071;
    ++*p_version;
  }
  v67 = *p_size;
  if ( (unsigned int)v67 >= LODWORD(v48->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      1081,
      *(const MethodInfo_3824604 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
  }
  else
  {
    *p_size = v67 + 1;
    *((_DWORD *)v48->m_Items + v67) = 1081;
  }
  v68 = Voice_TypeInfo->static_fields;
  v68->firstNpVoiceList = (struct System_Collections_Generic_List_Voice_BATTLE__o *)v39;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v68->firstNpVoiceList, (int32_t)v39, v40, v41, v42, v43, v44, v45);
  v69 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_Voice_BATTLE__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v69,
    (const MethodInfo_34BBB78 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string___ctor__);
  if ( !v69 )
LABEL_116:
    sub_1C7BD40(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    0,
    0,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    10,
    (Il2CppObject *)StringLiteral_2508/*"B010"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    11,
    (Il2CppObject *)StringLiteral_2509/*"B020"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    12,
    (Il2CppObject *)StringLiteral_2510/*"B030"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    20,
    (Il2CppObject *)StringLiteral_2511/*"B040"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    21,
    (Il2CppObject *)StringLiteral_2512/*"B041"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    22,
    (Il2CppObject *)StringLiteral_2513/*"B042"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    111,
    (Il2CppObject *)StringLiteral_2515/*"B050"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    112,
    (Il2CppObject *)StringLiteral_2516/*"B051"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    113,
    (Il2CppObject *)StringLiteral_2517/*"B052"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    114,
    (Il2CppObject *)StringLiteral_2518/*"B053"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    115,
    (Il2CppObject *)StringLiteral_2519/*"B054"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    121,
    (Il2CppObject *)StringLiteral_2521/*"B060"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    122,
    (Il2CppObject *)StringLiteral_2522/*"B061"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    123,
    (Il2CppObject *)StringLiteral_2523/*"B062"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    124,
    (Il2CppObject *)StringLiteral_2524/*"B063"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    125,
    (Il2CppObject *)StringLiteral_2525/*"B064"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    131,
    (Il2CppObject *)StringLiteral_2527/*"B070"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    132,
    (Il2CppObject *)StringLiteral_2528/*"B071"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    133,
    (Il2CppObject *)StringLiteral_2529/*"B072"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    134,
    (Il2CppObject *)StringLiteral_2530/*"B073"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    135,
    (Il2CppObject *)StringLiteral_2531/*"B074"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    141,
    (Il2CppObject *)StringLiteral_2653/*"B800"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    151,
    (Il2CppObject *)StringLiteral_2655/*"B810"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    161,
    (Il2CppObject *)StringLiteral_2657/*"B820"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    171,
    (Il2CppObject *)StringLiteral_2550/*"B1600"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    181,
    (Il2CppObject *)StringLiteral_2551/*"B1610"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    191,
    (Il2CppObject *)StringLiteral_2552/*"B1620"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    1001,
    (Il2CppObject *)StringLiteral_2535/*"B1000"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    31,
    (Il2CppObject *)StringLiteral_2532/*"B080"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    32,
    (Il2CppObject *)StringLiteral_2533/*"B090"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    41,
    (Il2CppObject *)StringLiteral_2534/*"B100"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    42,
    (Il2CppObject *)StringLiteral_2538/*"B110"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    51,
    (Il2CppObject *)StringLiteral_2539/*"B120"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    52,
    (Il2CppObject *)StringLiteral_2543/*"B130"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    61,
    (Il2CppObject *)StringLiteral_2544/*"B140"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    71,
    (Il2CppObject *)StringLiteral_2548/*"B150"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    81,
    (Il2CppObject *)StringLiteral_2549/*"B160"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    82,
    (Il2CppObject *)StringLiteral_2553/*"B170"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    201,
    (Il2CppObject *)StringLiteral_2554/*"B180"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    202,
    (Il2CppObject *)StringLiteral_2555/*"B190"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    203,
    (Il2CppObject *)StringLiteral_2556/*"B200"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    211,
    (Il2CppObject *)StringLiteral_2562/*"B210"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    212,
    (Il2CppObject *)StringLiteral_2571/*"B220"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    213,
    (Il2CppObject *)StringLiteral_2572/*"B230"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    214,
    (Il2CppObject *)StringLiteral_2598/*"B300"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    215,
    (Il2CppObject *)StringLiteral_2598/*"B300"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    216,
    (Il2CppObject *)StringLiteral_2581/*"B250"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    217,
    (Il2CppObject *)StringLiteral_2630/*"B410"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    218,
    (Il2CppObject *)StringLiteral_2631/*"B420"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    219,
    (Il2CppObject *)StringLiteral_2632/*"B430"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    220,
    (Il2CppObject *)StringLiteral_2633/*"B440"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    221,
    (Il2CppObject *)StringLiteral_2634/*"B441"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    222,
    (Il2CppObject *)StringLiteral_2635/*"B442"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    223,
    (Il2CppObject *)StringLiteral_2636/*"B480"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    224,
    (Il2CppObject *)StringLiteral_2637/*"B490"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    225,
    (Il2CppObject *)StringLiteral_2638/*"B500"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    226,
    (Il2CppObject *)StringLiteral_2639/*"B510"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    227,
    (Il2CppObject *)StringLiteral_2640/*"B520"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    228,
    (Il2CppObject *)StringLiteral_2647/*"B530"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    229,
    (Il2CppObject *)StringLiteral_2648/*"B540"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    230,
    (Il2CppObject *)StringLiteral_2650/*"B560"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    231,
    (Il2CppObject *)StringLiteral_2651/*"B570"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    232,
    (Il2CppObject *)StringLiteral_2605/*"B310"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    233,
    (Il2CppObject *)StringLiteral_2606/*"B320"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    234,
    (Il2CppObject *)StringLiteral_2607/*"B330"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    235,
    (Il2CppObject *)StringLiteral_2608/*"B331"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    236,
    (Il2CppObject *)StringLiteral_2609/*"B340"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    237,
    (Il2CppObject *)StringLiteral_2610/*"B341"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    238,
    (Il2CppObject *)StringLiteral_2612/*"B342"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    239,
    (Il2CppObject *)StringLiteral_2649/*"B550"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    240,
    (Il2CppObject *)StringLiteral_2665/*"B910"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    241,
    (Il2CppObject *)StringLiteral_2666/*"B920"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    242,
    (Il2CppObject *)StringLiteral_2667/*"B930"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    243,
    (Il2CppObject *)StringLiteral_2663/*"B880"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    244,
    (Il2CppObject *)StringLiteral_2664/*"B890"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    245,
    (Il2CppObject *)StringLiteral_2618/*"B380"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    246,
    (Il2CppObject *)StringLiteral_2622/*"B390"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    247,
    (Il2CppObject *)StringLiteral_2623/*"B400"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    248,
    (Il2CppObject *)StringLiteral_2658/*"B840"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    249,
    (Il2CppObject *)StringLiteral_2659/*"B841"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    250,
    (Il2CppObject *)StringLiteral_2660/*"B842"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    251,
    (Il2CppObject *)StringLiteral_2590/*"B260"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    252,
    (Il2CppObject *)StringLiteral_2573/*"B240"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    253,
    (Il2CppObject *)StringLiteral_2591/*"B270"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    254,
    (Il2CppObject *)StringLiteral_2560/*"B2080"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    255,
    (Il2CppObject *)StringLiteral_2561/*"B2090"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    256,
    (Il2CppObject *)StringLiteral_2580/*"B2480"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    257,
    (Il2CppObject *)StringLiteral_2577/*"B2440"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    258,
    (Il2CppObject *)StringLiteral_2578/*"B2441"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    259,
    (Il2CppObject *)StringLiteral_2579/*"B2442"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    260,
    (Il2CppObject *)StringLiteral_2595/*"B2840"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    261,
    (Il2CppObject *)StringLiteral_2596/*"B2841"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    262,
    (Il2CppObject *)StringLiteral_2597/*"B2842"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    263,
    (Il2CppObject *)StringLiteral_2627/*"B4040"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    264,
    (Il2CppObject *)StringLiteral_2628/*"B4041"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    265,
    (Il2CppObject *)StringLiteral_2629/*"B4042"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    266,
    (Il2CppObject *)StringLiteral_2557/*"B2010"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    267,
    (Il2CppObject *)StringLiteral_2558/*"B2020"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    268,
    (Il2CppObject *)StringLiteral_2559/*"B2030"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    269,
    (Il2CppObject *)StringLiteral_2574/*"B2410"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    270,
    (Il2CppObject *)StringLiteral_2575/*"B2420"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    271,
    (Il2CppObject *)StringLiteral_2576/*"B2430"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    272,
    (Il2CppObject *)StringLiteral_2592/*"B2810"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    273,
    (Il2CppObject *)StringLiteral_2593/*"B2820"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    274,
    (Il2CppObject *)StringLiteral_2594/*"B2830"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    275,
    (Il2CppObject *)StringLiteral_2563/*"B2100"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    276,
    (Il2CppObject *)StringLiteral_2564/*"B2110"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    277,
    (Il2CppObject *)StringLiteral_2582/*"B2500"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    278,
    (Il2CppObject *)StringLiteral_2583/*"B2510"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    279,
    (Il2CppObject *)StringLiteral_2599/*"B3010"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    280,
    (Il2CppObject *)StringLiteral_2600/*"B3020"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    281,
    (Il2CppObject *)StringLiteral_2601/*"B3030"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    282,
    (Il2CppObject *)StringLiteral_2611/*"B3410"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    283,
    (Il2CppObject *)StringLiteral_2613/*"B3420"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    284,
    (Il2CppObject *)StringLiteral_2614/*"B3430"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    285,
    (Il2CppObject *)StringLiteral_2569/*"B2160"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    286,
    (Il2CppObject *)StringLiteral_2570/*"B2170"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    287,
    (Il2CppObject *)StringLiteral_2588/*"B2560"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    288,
    (Il2CppObject *)StringLiteral_2589/*"B2570"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    289,
    (Il2CppObject *)StringLiteral_2565/*"B2120"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    290,
    (Il2CppObject *)StringLiteral_2566/*"B2130"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    291,
    (Il2CppObject *)StringLiteral_2584/*"B2520"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    292,
    (Il2CppObject *)StringLiteral_2585/*"B2530"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    293,
    (Il2CppObject *)StringLiteral_2567/*"B2140"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    294,
    (Il2CppObject *)StringLiteral_2586/*"B2540"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    295,
    (Il2CppObject *)StringLiteral_2568/*"B2150"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    296,
    (Il2CppObject *)StringLiteral_2587/*"B2550"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    297,
    (Il2CppObject *)StringLiteral_2602/*"B3050"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    298,
    (Il2CppObject *)StringLiteral_2603/*"B3060"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    299,
    (Il2CppObject *)StringLiteral_2604/*"B3070"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    300,
    (Il2CppObject *)StringLiteral_2641/*"B5210"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    301,
    (Il2CppObject *)StringLiteral_2642/*"B5220"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    302,
    (Il2CppObject *)StringLiteral_2643/*"B5230"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    303,
    (Il2CppObject *)StringLiteral_2644/*"B5250"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    304,
    (Il2CppObject *)StringLiteral_2645/*"B5260"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    305,
    (Il2CppObject *)StringLiteral_2646/*"B5270"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    306,
    (Il2CppObject *)StringLiteral_2661/*"B8500"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    307,
    (Il2CppObject *)StringLiteral_2662/*"B8510"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    308,
    (Il2CppObject *)StringLiteral_2619/*"B3810"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    309,
    (Il2CppObject *)StringLiteral_2620/*"B3820"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    310,
    (Il2CppObject *)StringLiteral_2621/*"B3830"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    311,
    (Il2CppObject *)StringLiteral_2624/*"B4010"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    312,
    (Il2CppObject *)StringLiteral_2625/*"B4020"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    313,
    (Il2CppObject *)StringLiteral_2626/*"B4030"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    314,
    (Il2CppObject *)StringLiteral_2615/*"B350"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    315,
    (Il2CppObject *)StringLiteral_2616/*"B360"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    316,
    (Il2CppObject *)StringLiteral_2617/*"B370"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    1011,
    (Il2CppObject *)StringLiteral_2536/*"B1010"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    1021,
    (Il2CppObject *)StringLiteral_2537/*"B1020"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    1031,
    (Il2CppObject *)StringLiteral_2540/*"B1200"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    1041,
    (Il2CppObject *)StringLiteral_2541/*"B1210"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    1051,
    (Il2CppObject *)StringLiteral_2542/*"B1220"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    1061,
    (Il2CppObject *)StringLiteral_2545/*"B1400"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    1071,
    (Il2CppObject *)StringLiteral_2546/*"B1410"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    1081,
    (Il2CppObject *)StringLiteral_2547/*"B1420"*/,
    (const MethodInfo_34BC54C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  v70 = Voice_TypeInfo->static_fields;
  v70->filelist = (struct System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v69;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v70->filelist, (int32_t)v69, v71, v72, v73, v74, v75, v76);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  Voice_c *v12; // x0
  System_Collections_Generic_IEnumerable_TSource__o *filelist; // x19
  System_Func_T__TResult__o *v14; // x21

  if ( (byte_4CED5D0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_Voice_BATTLE__string____);
    sub_1C7BAE8(&System_Func_KeyValuePair_Voice_BATTLE__string___bool__TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_Voice_BATTLE__string__get_Key__);
    sub_1C7BAE8(&Method_Voice___c__DisplayClass6_0__GetTypeByFileName_b__0__);
    sub_1C7BAE8(&Voice___c__DisplayClass6_0_TypeInfo);
    sub_1C7BAE8(&Voice_TypeInfo);
    byte_4CED5D0 = 1;
  }
  v3 = sub_1C7BD34(Voice___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_1C7BD40(v4, v5);
  *(_QWORD *)(v3 + 16) = fileName;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 16), (int32_t)fileName, v6, v7, v8, v9, v10, v11);
  v12 = Voice_TypeInfo;
  if ( !Voice_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
    v12 = Voice_TypeInfo;
  }
  filelist = (System_Collections_Generic_IEnumerable_TSource__o *)v12->static_fields->filelist;
  v14 = (System_Func_T__TResult__o *)sub_1C7BD34(System_Func_KeyValuePair_Voice_BATTLE__string___bool__TypeInfo);
  System_Func_KeyValuePair_Int32Enum__object___bool____ctor(
    v14,
    (Il2CppObject *)v3,
    Method_Voice___c__DisplayClass6_0__GetTypeByFileName_b__0__,
    0);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_Int32Enum__object__(
           filelist,
           (System_Func_TSource__bool__o *)v14,
           (const MethodInfo_31986DC *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_Voice_BATTLE__string____).fields.key;
}


bool Voice__IsDeadVoice(int32_t voiceBattleType, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  Voice_c *v6; // x0
  System_Collections_Generic_List_T__o *deadVoiceList; // x19
  System_Func_T__TResult__o *v8; // x21

  if ( (byte_4CED5D1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_BasicHelper_Any_Voice_BATTLE___);
    sub_1C7BAE8(&System_Func_Voice_BATTLE__bool__TypeInfo);
    sub_1C7BAE8(&Method_Voice___c__DisplayClass7_0__IsDeadVoice_b__0__);
    sub_1C7BAE8(&Voice___c__DisplayClass7_0_TypeInfo);
    sub_1C7BAE8(&Voice_TypeInfo);
    byte_4CED5D1 = 1;
  }
  v3 = sub_1C7BD34(Voice___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_1C7BD40(v4, v5);
  *(_DWORD *)(v3 + 16) = voiceBattleType;
  v6 = Voice_TypeInfo;
  if ( !Voice_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
    v6 = Voice_TypeInfo;
  }
  deadVoiceList = (System_Collections_Generic_List_T__o *)v6->static_fields->deadVoiceList;
  v8 = (System_Func_T__TResult__o *)sub_1C7BD34(System_Func_Voice_BATTLE__bool__TypeInfo);
  System_Func_Int32Enum__bool____ctor(v8, (Il2CppObject *)v3, Method_Voice___c__DisplayClass7_0__IsDeadVoice_b__0__, 0);
  return BasicHelper__Any_Int32Enum_(
           deadVoiceList,
           (System_Func_T__bool__o *)v8,
           (const MethodInfo_3159544 *)Method_BasicHelper_Any_Voice_BATTLE___);
}


System_String_o *Voice__getFileName(int32_t type, const MethodInfo *method)
{
  Voice_c *v3; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *filelist; // x0
  Voice_c *v5; // x0

  if ( (byte_4CED5CF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__get_Item__);
    sub_1C7BAE8(&Voice_TypeInfo);
    byte_4CED5CF = 1;
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
         (const MethodInfo_34BC740 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__ContainsKey__) )
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
                                  (const MethodInfo_34BC4AC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__get_Item__);
LABEL_12:
    sub_1C7BD40(filelist, method);
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
  if ( (byte_4CED5D3 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_KeyValuePair_Voice_BATTLE__string__get_Value__);
    byte_4CED5D3 = 1;
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