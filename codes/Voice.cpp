void __fastcall Voice___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
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
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
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
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
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
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7

  if ( (byte_4BDB550 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string___ctor__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_Voice_BATTLE__string__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Voice_BATTLE__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Voice_BATTLE___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_Voice_BATTLE__TypeInfo);
    sub_1C21E38(&Voice_TypeInfo);
    sub_1C21E38(&StringLiteral_2757/*"B2820"*/);
    sub_1C21E38(&StringLiteral_2685/*"B060"*/);
    sub_1C21E38(&StringLiteral_2680/*"B051"*/);
    sub_1C21E38(&StringLiteral_2810/*"B550"*/);
    sub_1C21E38(&StringLiteral_2790/*"B4042"*/);
    sub_1C21E38(&StringLiteral_2811/*"B560"*/);
    sub_1C21E38(&StringLiteral_2776/*"B342"*/);
    sub_1C21E38(&StringLiteral_2824/*"B880"*/);
    sub_1C21E38(&StringLiteral_2755/*"B270"*/);
    sub_1C21E38(&StringLiteral_2687/*"B062"*/);
    sub_1C21E38(&StringLiteral_2719/*"B190"*/);
    sub_1C21E38(&StringLiteral_2716/*"B1620"*/);
    sub_1C21E38(&StringLiteral_2711/*"B1420"*/);
    sub_1C21E38(&StringLiteral_2758/*"B2830"*/);
    sub_1C21E38(&StringLiteral_2682/*"B053"*/);
    sub_1C21E38(&StringLiteral_2724/*"B2080"*/);
    sub_1C21E38(&StringLiteral_2714/*"B1600"*/);
    sub_1C21E38(&StringLiteral_2828/*"B930"*/);
    sub_1C21E38(&StringLiteral_2804/*"B5230"*/);
    sub_1C21E38(&StringLiteral_2675/*"B040"*/);
    sub_1C21E38(&StringLiteral_2809/*"B540"*/);
    sub_1C21E38(&StringLiteral_2784/*"B400"*/);
    sub_1C21E38(&StringLiteral_2672/*"B010"*/);
    sub_1C21E38(&StringLiteral_2713/*"B160"*/);
    sub_1C21E38(&StringLiteral_2770/*"B320"*/);
    sub_1C21E38(&StringLiteral_2752/*"B2560"*/);
    sub_1C21E38(&StringLiteral_2788/*"B4040"*/);
    sub_1C21E38(&StringLiteral_2726/*"B210"*/);
    sub_1C21E38(&StringLiteral_2819/*"B840"*/);
    sub_1C21E38(&StringLiteral_2707/*"B130"*/);
    sub_1C21E38(&StringLiteral_2773/*"B340"*/);
    sub_1C21E38(&StringLiteral_2806/*"B5260"*/);
    sub_1C21E38(&StringLiteral_2692/*"B071"*/);
    sub_1C21E38(&StringLiteral_2734/*"B2170"*/);
    sub_1C21E38(&StringLiteral_2749/*"B2530"*/);
    sub_1C21E38(&StringLiteral_2787/*"B4030"*/);
    sub_1C21E38(&StringLiteral_2823/*"B8510"*/);
    sub_1C21E38(&StringLiteral_2706/*"B1220"*/);
    sub_1C21E38(&StringLiteral_2748/*"B2520"*/);
    sub_1C21E38(&StringLiteral_2732/*"B2150"*/);
    sub_1C21E38(&StringLiteral_2807/*"B5270"*/);
    sub_1C21E38(&StringLiteral_2762/*"B300"*/);
    sub_1C21E38(&StringLiteral_2764/*"B3020"*/);
    sub_1C21E38(&StringLiteral_2676/*"B041"*/);
    sub_1C21E38(&StringLiteral_2756/*"B2810"*/);
    sub_1C21E38(&StringLiteral_2775/*"B3410"*/);
    sub_1C21E38(&StringLiteral_2763/*"B3010"*/);
    sub_1C21E38(&StringLiteral_2721/*"B2010"*/);
    sub_1C21E38(&StringLiteral_2698/*"B100"*/);
    sub_1C21E38(&StringLiteral_2728/*"B2110"*/);
    sub_1C21E38(&StringLiteral_2792/*"B420"*/);
    sub_1C21E38(&StringLiteral_2800/*"B510"*/);
    sub_1C21E38(&StringLiteral_2688/*"B063"*/);
    sub_1C21E38(&StringLiteral_2777/*"B3420"*/);
    sub_1C21E38(&StringLiteral_2825/*"B890"*/);
    sub_1C21E38(&StringLiteral_2767/*"B3060"*/);
    sub_1C21E38(&StringLiteral_2725/*"B2090"*/);
    sub_1C21E38(&StringLiteral_2709/*"B1400"*/);
    sub_1C21E38(&StringLiteral_2693/*"B072"*/);
    sub_1C21E38(&StringLiteral_2766/*"B3050"*/);
    sub_1C21E38(&StringLiteral_2710/*"B1410"*/);
    sub_1C21E38(&StringLiteral_2772/*"B331"*/);
    sub_1C21E38(&StringLiteral_2720/*"B200"*/);
    sub_1C21E38(&StringLiteral_2697/*"B090"*/);
    sub_1C21E38(&StringLiteral_2744/*"B2480"*/);
    sub_1C21E38(&StringLiteral_2789/*"B4041"*/);
    sub_1C21E38(&StringLiteral_2750/*"B2540"*/);
    sub_1C21E38(&StringLiteral_2759/*"B2840"*/);
    sub_1C21E38(&StringLiteral_2753/*"B2570"*/);
    sub_1C21E38(&StringLiteral_2822/*"B8500"*/);
    sub_1C21E38(&StringLiteral_2827/*"B920"*/);
    sub_1C21E38(&StringLiteral_2681/*"B052"*/);
    sub_1C21E38(&StringLiteral_2735/*"B220"*/);
    sub_1C21E38(&StringLiteral_2702/*"B110"*/);
    sub_1C21E38(&StringLiteral_2737/*"B240"*/);
    sub_1C21E38(&StringLiteral_2780/*"B3810"*/);
    sub_1C21E38(&StringLiteral_2765/*"B3030"*/);
    sub_1C21E38(&StringLiteral_2743/*"B2442"*/);
    sub_1C21E38(&StringLiteral_2694/*"B073"*/);
    sub_1C21E38(&StringLiteral_2768/*"B3070"*/);
    sub_1C21E38(&StringLiteral_2793/*"B430"*/);
    sub_1C21E38(&StringLiteral_2674/*"B030"*/);
    sub_1C21E38(&StringLiteral_2740/*"B2430"*/);
    sub_1C21E38(&StringLiteral_2808/*"B530"*/);
    sub_1C21E38(&StringLiteral_2730/*"B2130"*/);
    sub_1C21E38(&StringLiteral_2729/*"B2120"*/);
    sub_1C21E38(&StringLiteral_2795/*"B441"*/);
    sub_1C21E38(&StringLiteral_2769/*"B310"*/);
    sub_1C21E38(&StringLiteral_2700/*"B1010"*/);
    sub_1C21E38(&StringLiteral_2708/*"B140"*/);
    sub_1C21E38(&StringLiteral_2751/*"B2550"*/);
    sub_1C21E38(&StringLiteral_2691/*"B070"*/);
    sub_1C21E38(&StringLiteral_2715/*"B1610"*/);
    sub_1C21E38(&StringLiteral_2686/*"B061"*/);
    sub_1C21E38(&StringLiteral_2798/*"B490"*/);
    sub_1C21E38(&StringLiteral_2779/*"B380"*/);
    sub_1C21E38(&StringLiteral_2736/*"B230"*/);
    sub_1C21E38(&StringLiteral_2731/*"B2140"*/);
    sub_1C21E38(&StringLiteral_2718/*"B180"*/);
    sub_1C21E38(&StringLiteral_2816/*"B810"*/);
    sub_1C21E38(&StringLiteral_2673/*"B020"*/);
    sub_1C21E38(&StringLiteral_2781/*"B3820"*/);
    sub_1C21E38(&StringLiteral_2791/*"B410"*/);
    sub_1C21E38(&StringLiteral_2783/*"B390"*/);
    sub_1C21E38(&StringLiteral_2782/*"B3830"*/);
    sub_1C21E38(&StringLiteral_2742/*"B2441"*/);
    sub_1C21E38(&StringLiteral_2741/*"B2440"*/);
    sub_1C21E38(&StringLiteral_2786/*"B4020"*/);
    sub_1C21E38(&StringLiteral_2704/*"B1200"*/);
    sub_1C21E38(&StringLiteral_2796/*"B442"*/);
    sub_1C21E38(&StringLiteral_2801/*"B520"*/);
    sub_1C21E38(&StringLiteral_2799/*"B500"*/);
    sub_1C21E38(&StringLiteral_2695/*"B074"*/);
    sub_1C21E38(&StringLiteral_2689/*"B064"*/);
    sub_1C21E38(&StringLiteral_2771/*"B330"*/);
    sub_1C21E38(&StringLiteral_2699/*"B1000"*/);
    sub_1C21E38(&StringLiteral_2774/*"B341"*/);
    sub_1C21E38(&StringLiteral_2797/*"B480"*/);
    sub_1C21E38(&StringLiteral_2723/*"B2030"*/);
    sub_1C21E38(&StringLiteral_2794/*"B440"*/);
    sub_1C21E38(&StringLiteral_2761/*"B2842"*/);
    sub_1C21E38(&StringLiteral_2679/*"B050"*/);
    sub_1C21E38(&StringLiteral_2803/*"B5220"*/);
    sub_1C21E38(&StringLiteral_2717/*"B170"*/);
    sub_1C21E38(&StringLiteral_2747/*"B2510"*/);
    sub_1C21E38(&StringLiteral_2745/*"B250"*/);
    sub_1C21E38(&StringLiteral_2703/*"B120"*/);
    sub_1C21E38(&StringLiteral_2814/*"B800"*/);
    sub_1C21E38(&StringLiteral_2696/*"B080"*/);
    sub_1C21E38(&StringLiteral_2712/*"B150"*/);
    sub_1C21E38(&StringLiteral_2818/*"B820"*/);
    sub_1C21E38(&StringLiteral_2738/*"B2410"*/);
    sub_1C21E38(&StringLiteral_2760/*"B2841"*/);
    sub_1C21E38(&StringLiteral_2677/*"B042"*/);
    sub_1C21E38(&StringLiteral_2727/*"B2100"*/);
    sub_1C21E38(&StringLiteral_2785/*"B4010"*/);
    sub_1C21E38(&StringLiteral_2746/*"B2500"*/);
    sub_1C21E38(&StringLiteral_2701/*"B1020"*/);
    sub_1C21E38(&StringLiteral_2722/*"B2020"*/);
    sub_1C21E38(&StringLiteral_2821/*"B842"*/);
    sub_1C21E38(&StringLiteral_2820/*"B841"*/);
    sub_1C21E38(&StringLiteral_2683/*"B054"*/);
    sub_1C21E38(&StringLiteral_2778/*"B3430"*/);
    sub_1C21E38(&StringLiteral_2739/*"B2420"*/);
    sub_1C21E38(&StringLiteral_2754/*"B260"*/);
    sub_1C21E38(&StringLiteral_2812/*"B570"*/);
    sub_1C21E38(&StringLiteral_2802/*"B5210"*/);
    sub_1C21E38(&StringLiteral_2826/*"B910"*/);
    sub_1C21E38(&StringLiteral_2705/*"B1210"*/);
    sub_1C21E38(&StringLiteral_2805/*"B5250"*/);
    sub_1C21E38(&StringLiteral_2733/*"B2160"*/);
    byte_4BDB550 = 1;
  }
  v1 = (System_Collections_Generic_List_T__o *)sub_1C22084(System_Collections_Generic_List_Voice_BATTLE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v1,
    (const MethodInfo_3634068 *)Method_System_Collections_Generic_List_Voice_BATTLE___ctor__);
  if ( !v1 )
    goto LABEL_116;
  items = v1->fields._items;
  v11 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
  ++v1->fields._version;
  if ( !items )
    goto LABEL_116;
  size = v1->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      81,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v13 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      82,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v14 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      230,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v15 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      231,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v16 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      285,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v17 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      286,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v18 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      287,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v19 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      288,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v1->fields._size = v19 + 1;
    *((_DWORD *)items->m_Items + v19) = 288;
  }
  Voice_TypeInfo->static_fields->deadVoiceList = (struct System_Collections_Generic_List_Voice_BATTLE__o *)v1;
  sub_1C21DDC((PartyOrganizationUtility_o *)Voice_TypeInfo->static_fields, (int64_t)v1, v4, v5, v6, v7, v8, v9);
  v20 = (System_Collections_Generic_List_T__o *)sub_1C22084(System_Collections_Generic_List_Voice_BATTLE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v20,
    (const MethodInfo_3634068 *)Method_System_Collections_Generic_List_Voice_BATTLE___ctor__);
  if ( !v20 )
    goto LABEL_116;
  v27 = v20->fields._items;
  v28 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
  ++v20->fields._version;
  if ( !v27 )
    goto LABEL_116;
  v29 = v20->fields._size;
  if ( (unsigned int)v29 >= v27->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v20,
      31,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v30 >= v27->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v20,
      32,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v31 >= v27->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v20,
      223,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v32 >= v27->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v20,
      224,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v33 >= v27->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v20,
      243,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v34 >= v27->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v20,
      244,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v35 >= v27->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v20,
      254,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v36 >= v27->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v20,
      255,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v37 >= v27->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v20,
      256,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
  }
  else
  {
    v20->fields._size = v37 + 1;
    *((_DWORD *)v27->m_Items + v37) = 256;
  }
  static_fields = Voice_TypeInfo->static_fields;
  static_fields->skillVoiceList = (struct System_Collections_Generic_List_Voice_BATTLE__o *)v20;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->skillVoiceList, (int64_t)v20, v21, v22, v23, v24, v25, v26);
  v39 = (System_Collections_Generic_List_T__o *)sub_1C22084(System_Collections_Generic_List_Voice_BATTLE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v39,
    (const MethodInfo_3634068 *)Method_System_Collections_Generic_List_Voice_BATTLE___ctor__);
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
  if ( (unsigned int)v49 >= v48->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      111,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v51 >= v48->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      121,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v52 >= v48->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      131,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v53 >= v48->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      141,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v54 >= v48->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      151,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v55 >= v48->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      161,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v56 >= v48->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      171,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v57 >= v48->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      181,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v58 >= v48->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      191,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v59 >= v48->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      1001,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v60 >= v48->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      1011,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v61 >= v48->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      1021,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v62 >= v48->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      1031,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v63 >= v48->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      1041,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v64 >= v48->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      1051,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v65 >= v48->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      1061,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v66 >= v48->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      1071,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
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
  if ( (unsigned int)v67 >= v48->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v39,
      1081,
      *(const MethodInfo_36348BC **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
  }
  else
  {
    *p_size = v67 + 1;
    *((_DWORD *)v48->m_Items + v67) = 1081;
  }
  v68 = Voice_TypeInfo->static_fields;
  v68->firstNpVoiceList = (struct System_Collections_Generic_List_Voice_BATTLE__o *)v39;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v68->firstNpVoiceList, (int64_t)v39, v40, v41, v42, v43, v44, v45);
  v69 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C22084(System_Collections_Generic_Dictionary_Voice_BATTLE__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v69,
    (const MethodInfo_32E58A4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string___ctor__);
  if ( !v69 )
LABEL_116:
    sub_1C22094(v2, v3);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    0,
    0LL,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    10,
    (Il2CppObject *)StringLiteral_2672/*"B010"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    11,
    (Il2CppObject *)StringLiteral_2673/*"B020"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    12,
    (Il2CppObject *)StringLiteral_2674/*"B030"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    20,
    (Il2CppObject *)StringLiteral_2675/*"B040"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    21,
    (Il2CppObject *)StringLiteral_2676/*"B041"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    22,
    (Il2CppObject *)StringLiteral_2677/*"B042"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    111,
    (Il2CppObject *)StringLiteral_2679/*"B050"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    112,
    (Il2CppObject *)StringLiteral_2680/*"B051"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    113,
    (Il2CppObject *)StringLiteral_2681/*"B052"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    114,
    (Il2CppObject *)StringLiteral_2682/*"B053"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    115,
    (Il2CppObject *)StringLiteral_2683/*"B054"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    121,
    (Il2CppObject *)StringLiteral_2685/*"B060"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    122,
    (Il2CppObject *)StringLiteral_2686/*"B061"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    123,
    (Il2CppObject *)StringLiteral_2687/*"B062"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    124,
    (Il2CppObject *)StringLiteral_2688/*"B063"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    125,
    (Il2CppObject *)StringLiteral_2689/*"B064"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    131,
    (Il2CppObject *)StringLiteral_2691/*"B070"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    132,
    (Il2CppObject *)StringLiteral_2692/*"B071"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    133,
    (Il2CppObject *)StringLiteral_2693/*"B072"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    134,
    (Il2CppObject *)StringLiteral_2694/*"B073"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    135,
    (Il2CppObject *)StringLiteral_2695/*"B074"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    141,
    (Il2CppObject *)StringLiteral_2814/*"B800"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    151,
    (Il2CppObject *)StringLiteral_2816/*"B810"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    161,
    (Il2CppObject *)StringLiteral_2818/*"B820"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    171,
    (Il2CppObject *)StringLiteral_2714/*"B1600"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    181,
    (Il2CppObject *)StringLiteral_2715/*"B1610"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    191,
    (Il2CppObject *)StringLiteral_2716/*"B1620"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    1001,
    (Il2CppObject *)StringLiteral_2699/*"B1000"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    31,
    (Il2CppObject *)StringLiteral_2696/*"B080"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    32,
    (Il2CppObject *)StringLiteral_2697/*"B090"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    41,
    (Il2CppObject *)StringLiteral_2698/*"B100"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    42,
    (Il2CppObject *)StringLiteral_2702/*"B110"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    51,
    (Il2CppObject *)StringLiteral_2703/*"B120"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    52,
    (Il2CppObject *)StringLiteral_2707/*"B130"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    61,
    (Il2CppObject *)StringLiteral_2708/*"B140"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    71,
    (Il2CppObject *)StringLiteral_2712/*"B150"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    81,
    (Il2CppObject *)StringLiteral_2713/*"B160"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    82,
    (Il2CppObject *)StringLiteral_2717/*"B170"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    201,
    (Il2CppObject *)StringLiteral_2718/*"B180"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    202,
    (Il2CppObject *)StringLiteral_2719/*"B190"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    203,
    (Il2CppObject *)StringLiteral_2720/*"B200"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    211,
    (Il2CppObject *)StringLiteral_2726/*"B210"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    212,
    (Il2CppObject *)StringLiteral_2735/*"B220"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    213,
    (Il2CppObject *)StringLiteral_2736/*"B230"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    214,
    (Il2CppObject *)StringLiteral_2762/*"B300"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    215,
    (Il2CppObject *)StringLiteral_2762/*"B300"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    216,
    (Il2CppObject *)StringLiteral_2745/*"B250"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    217,
    (Il2CppObject *)StringLiteral_2791/*"B410"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    218,
    (Il2CppObject *)StringLiteral_2792/*"B420"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    219,
    (Il2CppObject *)StringLiteral_2793/*"B430"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    220,
    (Il2CppObject *)StringLiteral_2794/*"B440"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    221,
    (Il2CppObject *)StringLiteral_2795/*"B441"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    222,
    (Il2CppObject *)StringLiteral_2796/*"B442"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    223,
    (Il2CppObject *)StringLiteral_2797/*"B480"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    224,
    (Il2CppObject *)StringLiteral_2798/*"B490"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    225,
    (Il2CppObject *)StringLiteral_2799/*"B500"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    226,
    (Il2CppObject *)StringLiteral_2800/*"B510"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    227,
    (Il2CppObject *)StringLiteral_2801/*"B520"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    228,
    (Il2CppObject *)StringLiteral_2808/*"B530"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    229,
    (Il2CppObject *)StringLiteral_2809/*"B540"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    230,
    (Il2CppObject *)StringLiteral_2811/*"B560"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    231,
    (Il2CppObject *)StringLiteral_2812/*"B570"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    232,
    (Il2CppObject *)StringLiteral_2769/*"B310"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    233,
    (Il2CppObject *)StringLiteral_2770/*"B320"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    234,
    (Il2CppObject *)StringLiteral_2771/*"B330"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    235,
    (Il2CppObject *)StringLiteral_2772/*"B331"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    236,
    (Il2CppObject *)StringLiteral_2773/*"B340"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    237,
    (Il2CppObject *)StringLiteral_2774/*"B341"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    238,
    (Il2CppObject *)StringLiteral_2776/*"B342"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    239,
    (Il2CppObject *)StringLiteral_2810/*"B550"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    240,
    (Il2CppObject *)StringLiteral_2826/*"B910"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    241,
    (Il2CppObject *)StringLiteral_2827/*"B920"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    242,
    (Il2CppObject *)StringLiteral_2828/*"B930"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    243,
    (Il2CppObject *)StringLiteral_2824/*"B880"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    244,
    (Il2CppObject *)StringLiteral_2825/*"B890"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    245,
    (Il2CppObject *)StringLiteral_2779/*"B380"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    246,
    (Il2CppObject *)StringLiteral_2783/*"B390"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    247,
    (Il2CppObject *)StringLiteral_2784/*"B400"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    248,
    (Il2CppObject *)StringLiteral_2819/*"B840"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    249,
    (Il2CppObject *)StringLiteral_2820/*"B841"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    250,
    (Il2CppObject *)StringLiteral_2821/*"B842"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    251,
    (Il2CppObject *)StringLiteral_2754/*"B260"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    252,
    (Il2CppObject *)StringLiteral_2737/*"B240"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    253,
    (Il2CppObject *)StringLiteral_2755/*"B270"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    254,
    (Il2CppObject *)StringLiteral_2724/*"B2080"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    255,
    (Il2CppObject *)StringLiteral_2725/*"B2090"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    256,
    (Il2CppObject *)StringLiteral_2744/*"B2480"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    257,
    (Il2CppObject *)StringLiteral_2741/*"B2440"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    258,
    (Il2CppObject *)StringLiteral_2742/*"B2441"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    259,
    (Il2CppObject *)StringLiteral_2743/*"B2442"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    260,
    (Il2CppObject *)StringLiteral_2759/*"B2840"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    261,
    (Il2CppObject *)StringLiteral_2760/*"B2841"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    262,
    (Il2CppObject *)StringLiteral_2761/*"B2842"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    263,
    (Il2CppObject *)StringLiteral_2788/*"B4040"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    264,
    (Il2CppObject *)StringLiteral_2789/*"B4041"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    265,
    (Il2CppObject *)StringLiteral_2790/*"B4042"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    266,
    (Il2CppObject *)StringLiteral_2721/*"B2010"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    267,
    (Il2CppObject *)StringLiteral_2722/*"B2020"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    268,
    (Il2CppObject *)StringLiteral_2723/*"B2030"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    269,
    (Il2CppObject *)StringLiteral_2738/*"B2410"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    270,
    (Il2CppObject *)StringLiteral_2739/*"B2420"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    271,
    (Il2CppObject *)StringLiteral_2740/*"B2430"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    272,
    (Il2CppObject *)StringLiteral_2756/*"B2810"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    273,
    (Il2CppObject *)StringLiteral_2757/*"B2820"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    274,
    (Il2CppObject *)StringLiteral_2758/*"B2830"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    275,
    (Il2CppObject *)StringLiteral_2727/*"B2100"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    276,
    (Il2CppObject *)StringLiteral_2728/*"B2110"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    277,
    (Il2CppObject *)StringLiteral_2746/*"B2500"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    278,
    (Il2CppObject *)StringLiteral_2747/*"B2510"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    279,
    (Il2CppObject *)StringLiteral_2763/*"B3010"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    280,
    (Il2CppObject *)StringLiteral_2764/*"B3020"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    281,
    (Il2CppObject *)StringLiteral_2765/*"B3030"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    282,
    (Il2CppObject *)StringLiteral_2775/*"B3410"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    283,
    (Il2CppObject *)StringLiteral_2777/*"B3420"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    284,
    (Il2CppObject *)StringLiteral_2778/*"B3430"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    285,
    (Il2CppObject *)StringLiteral_2733/*"B2160"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    286,
    (Il2CppObject *)StringLiteral_2734/*"B2170"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    287,
    (Il2CppObject *)StringLiteral_2752/*"B2560"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    288,
    (Il2CppObject *)StringLiteral_2753/*"B2570"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    289,
    (Il2CppObject *)StringLiteral_2729/*"B2120"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    290,
    (Il2CppObject *)StringLiteral_2730/*"B2130"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    291,
    (Il2CppObject *)StringLiteral_2748/*"B2520"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    292,
    (Il2CppObject *)StringLiteral_2749/*"B2530"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    293,
    (Il2CppObject *)StringLiteral_2731/*"B2140"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    294,
    (Il2CppObject *)StringLiteral_2750/*"B2540"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    295,
    (Il2CppObject *)StringLiteral_2732/*"B2150"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    296,
    (Il2CppObject *)StringLiteral_2751/*"B2550"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    297,
    (Il2CppObject *)StringLiteral_2766/*"B3050"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    298,
    (Il2CppObject *)StringLiteral_2767/*"B3060"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    299,
    (Il2CppObject *)StringLiteral_2768/*"B3070"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    300,
    (Il2CppObject *)StringLiteral_2802/*"B5210"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    301,
    (Il2CppObject *)StringLiteral_2803/*"B5220"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    302,
    (Il2CppObject *)StringLiteral_2804/*"B5230"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    303,
    (Il2CppObject *)StringLiteral_2805/*"B5250"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    304,
    (Il2CppObject *)StringLiteral_2806/*"B5260"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    305,
    (Il2CppObject *)StringLiteral_2807/*"B5270"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    306,
    (Il2CppObject *)StringLiteral_2822/*"B8500"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    307,
    (Il2CppObject *)StringLiteral_2823/*"B8510"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    308,
    (Il2CppObject *)StringLiteral_2780/*"B3810"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    309,
    (Il2CppObject *)StringLiteral_2781/*"B3820"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    310,
    (Il2CppObject *)StringLiteral_2782/*"B3830"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    311,
    (Il2CppObject *)StringLiteral_2785/*"B4010"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    312,
    (Il2CppObject *)StringLiteral_2786/*"B4020"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    313,
    (Il2CppObject *)StringLiteral_2787/*"B4030"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    1011,
    (Il2CppObject *)StringLiteral_2700/*"B1010"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    1021,
    (Il2CppObject *)StringLiteral_2701/*"B1020"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    1031,
    (Il2CppObject *)StringLiteral_2704/*"B1200"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    1041,
    (Il2CppObject *)StringLiteral_2705/*"B1210"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    1051,
    (Il2CppObject *)StringLiteral_2706/*"B1220"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    1061,
    (Il2CppObject *)StringLiteral_2709/*"B1400"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    1071,
    (Il2CppObject *)StringLiteral_2710/*"B1410"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v69,
    1081,
    (Il2CppObject *)StringLiteral_2711/*"B1420"*/,
    (const MethodInfo_32E6278 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  v70 = Voice_TypeInfo->static_fields;
  v70->filelist = (struct System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v69;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v70->filelist, (int64_t)v69, v71, v72, v73, v74, v75, v76);
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
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  Voice_c *v12; // x0
  System_Collections_Generic_IEnumerable_TSource__o *filelist; // x19
  System_Func_T__TResult__o *v14; // x21

  if ( (byte_4BDB54E & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_Voice_BATTLE__string____);
    sub_1C21E38(&System_Func_KeyValuePair_Voice_BATTLE__string___bool__TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_Voice_BATTLE__string__get_Key__);
    sub_1C21E38(&Method_Voice___c__DisplayClass6_0__GetTypeByFileName_b__0__);
    sub_1C21E38(&Voice___c__DisplayClass6_0_TypeInfo);
    sub_1C21E38(&Voice_TypeInfo);
    byte_4BDB54E = 1;
  }
  v3 = sub_1C22084(Voice___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    sub_1C22094(v4, v5);
  *(_QWORD *)(v3 + 16) = fileName;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 16), (int64_t)fileName, v6, v7, v8, v9, v10, v11);
  v12 = Voice_TypeInfo;
  if ( !Voice_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
    v12 = Voice_TypeInfo;
  }
  filelist = (System_Collections_Generic_IEnumerable_TSource__o *)v12->static_fields->filelist;
  v14 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_KeyValuePair_Voice_BATTLE__string___bool__TypeInfo);
  System_Func_KeyValuePair_Int32Enum__object___bool____ctor(
    v14,
    (Il2CppObject *)v3,
    Method_Voice___c__DisplayClass6_0__GetTypeByFileName_b__0__,
    0LL);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_Int32Enum__object__(
           filelist,
           (System_Func_TSource__bool__o *)v14,
           (const MethodInfo_2FD338C *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_Voice_BATTLE__string____).fields.key;
}


bool __fastcall Voice__IsDeadVoice(int32_t voiceBattleType, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  Voice_c *v6; // x0
  System_Collections_Generic_List_T__o *deadVoiceList; // x19
  System_Func_T__TResult__o *v8; // x21

  if ( (byte_4BDB54F & 1) == 0 )
  {
    sub_1C21E38(&Method_BasicHelper_Any_Voice_BATTLE___);
    sub_1C21E38(&System_Func_Voice_BATTLE__bool__TypeInfo);
    sub_1C21E38(&Method_Voice___c__DisplayClass7_0__IsDeadVoice_b__0__);
    sub_1C21E38(&Voice___c__DisplayClass7_0_TypeInfo);
    sub_1C21E38(&Voice_TypeInfo);
    byte_4BDB54F = 1;
  }
  v3 = sub_1C22084(Voice___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    sub_1C22094(v4, v5);
  *(_DWORD *)(v3 + 16) = voiceBattleType;
  v6 = Voice_TypeInfo;
  if ( !Voice_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
    v6 = Voice_TypeInfo;
  }
  deadVoiceList = (System_Collections_Generic_List_T__o *)v6->static_fields->deadVoiceList;
  v8 = (System_Func_T__TResult__o *)sub_1C22084(System_Func_Voice_BATTLE__bool__TypeInfo);
  System_Func_Int32Enum__bool____ctor(
    v8,
    (Il2CppObject *)v3,
    Method_Voice___c__DisplayClass7_0__IsDeadVoice_b__0__,
    0LL);
  return BasicHelper__Any_Int32Enum_(
           deadVoiceList,
           (System_Func_T__bool__o *)v8,
           (const MethodInfo_2F9AB8C *)Method_BasicHelper_Any_Voice_BATTLE___);
}


System_String_o *__fastcall Voice__getFileName(int32_t type, const MethodInfo *method)
{
  Voice_c *v3; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *filelist; // x0
  Voice_c *v5; // x0

  if ( (byte_4BDB54D & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__get_Item__);
    sub_1C21E38(&Voice_TypeInfo);
    byte_4BDB54D = 1;
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
         (const MethodInfo_32E646C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__ContainsKey__) )
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
                                  (const MethodInfo_32E61D8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__get_Item__);
LABEL_12:
    sub_1C22094(filelist, method);
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
  if ( (byte_4BDB551 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_KeyValuePair_Voice_BATTLE__string__get_Value__);
    byte_4BDB551 = 1;
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