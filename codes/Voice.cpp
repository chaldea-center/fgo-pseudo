void __fastcall Voice___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  __int64 v56; // x1
  __int64 v57; // x1
  __int64 v58; // x1
  __int64 v59; // x1
  __int64 v60; // x1
  __int64 v61; // x1
  __int64 v62; // x1
  __int64 v63; // x1
  __int64 v64; // x1
  __int64 v65; // x1
  __int64 v66; // x1
  __int64 v67; // x1
  __int64 v68; // x1
  __int64 v69; // x1
  __int64 v70; // x1
  __int64 v71; // x1
  __int64 v72; // x1
  __int64 v73; // x1
  __int64 v74; // x1
  __int64 v75; // x1
  __int64 v76; // x1
  __int64 v77; // x1
  __int64 v78; // x1
  __int64 v79; // x1
  __int64 v80; // x1
  __int64 v81; // x1
  __int64 v82; // x1
  __int64 v83; // x1
  __int64 v84; // x1
  __int64 v85; // x1
  __int64 v86; // x1
  __int64 v87; // x1
  __int64 v88; // x1
  __int64 v89; // x1
  __int64 v90; // x1
  __int64 v91; // x1
  __int64 v92; // x1
  __int64 v93; // x1
  __int64 v94; // x1
  __int64 v95; // x1
  __int64 v96; // x1
  __int64 v97; // x1
  __int64 v98; // x1
  __int64 v99; // x1
  __int64 v100; // x1
  __int64 v101; // x1
  __int64 v102; // x1
  __int64 v103; // x1
  __int64 v104; // x1
  __int64 v105; // x1
  __int64 v106; // x1
  __int64 v107; // x1
  __int64 v108; // x1
  __int64 v109; // x1
  __int64 v110; // x1
  __int64 v111; // x1
  __int64 v112; // x1
  __int64 v113; // x1
  __int64 v114; // x1
  __int64 v115; // x1
  __int64 v116; // x1
  __int64 v117; // x1
  __int64 v118; // x1
  __int64 v119; // x1
  __int64 v120; // x1
  __int64 v121; // x1
  __int64 v122; // x1
  __int64 v123; // x1
  __int64 v124; // x1
  __int64 v125; // x1
  __int64 v126; // x1
  __int64 v127; // x1
  __int64 v128; // x1
  __int64 v129; // x1
  __int64 v130; // x1
  __int64 v131; // x1
  __int64 v132; // x1
  __int64 v133; // x1
  __int64 v134; // x1
  __int64 v135; // x1
  __int64 v136; // x1
  __int64 v137; // x1
  __int64 v138; // x1
  __int64 v139; // x1
  __int64 v140; // x1
  __int64 v141; // x1
  __int64 v142; // x1
  __int64 v143; // x1
  __int64 v144; // x1
  __int64 v145; // x1
  __int64 v146; // x1
  __int64 v147; // x1
  __int64 v148; // x1
  __int64 v149; // x1
  __int64 v150; // x1
  __int64 v151; // x1
  __int64 v152; // x1
  __int64 v153; // x1
  __int64 v154; // x1
  __int64 v155; // x1
  __int64 v156; // x1
  __int64 v157; // x1
  __int64 v158; // x1
  System_Collections_Generic_List_T__o *v159; // x19
  __int64 v160; // x0
  __int64 v161; // x1
  int64_t v162; // x2
  int32_t v163; // w3
  System_String_o *v164; // x4
  BattleSetupInfo_o *v165; // x5
  FollowerInfo_o *v166; // x6
  PartyListViewItem_o *v167; // x7
  struct System_Object_array *items; // x9
  _QWORD *v169; // x8
  __int64 size; // x10
  __int64 v171; // x10
  __int64 v172; // x10
  __int64 v173; // x10
  __int64 v174; // x10
  __int64 v175; // x10
  __int64 v176; // x10
  __int64 v177; // x10
  System_Collections_Generic_List_T__o *v178; // x19
  int64_t v179; // x2
  int32_t v180; // w3
  System_String_o *v181; // x4
  BattleSetupInfo_o *v182; // x5
  FollowerInfo_o *v183; // x6
  PartyListViewItem_o *v184; // x7
  struct System_Object_array *v185; // x9
  _QWORD *v186; // x8
  __int64 v187; // x10
  __int64 v188; // x10
  __int64 v189; // x10
  __int64 v190; // x10
  __int64 v191; // x10
  __int64 v192; // x10
  __int64 v193; // x10
  __int64 v194; // x10
  __int64 v195; // x10
  struct Voice_StaticFields *static_fields; // x0
  System_Collections_Generic_List_T__o *v197; // x19
  int64_t v198; // x2
  int32_t v199; // w3
  System_String_o *v200; // x4
  BattleSetupInfo_o *v201; // x5
  FollowerInfo_o *v202; // x6
  PartyListViewItem_o *v203; // x7
  _QWORD *v204; // x8
  int32_t *p_version; // x21
  struct System_Object_array *v206; // x9
  __int64 v207; // x10
  int32_t *p_size; // x20
  __int64 v209; // x10
  __int64 v210; // x10
  __int64 v211; // x10
  __int64 v212; // x10
  __int64 v213; // x10
  __int64 v214; // x10
  __int64 v215; // x10
  __int64 v216; // x10
  __int64 v217; // x10
  __int64 v218; // x10
  __int64 v219; // x10
  __int64 v220; // x10
  __int64 v221; // x10
  __int64 v222; // x10
  __int64 v223; // x10
  __int64 v224; // x10
  __int64 v225; // x10
  struct Voice_StaticFields *v226; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v227; // x19
  struct Voice_StaticFields *v228; // x0
  int64_t v229; // x2
  int32_t v230; // w3
  System_String_o *v231; // x4
  BattleSetupInfo_o *v232; // x5
  FollowerInfo_o *v233; // x6
  PartyListViewItem_o *v234; // x7

  if ( (byte_4B65BCB & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__, v1);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string___ctor__, v2);
    sub_1BE4ACC(&System_Collections_Generic_Dictionary_Voice_BATTLE__string__TypeInfo, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Voice_BATTLE__Add__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Voice_BATTLE___ctor__, v5);
    sub_1BE4ACC(&System_Collections_Generic_List_Voice_BATTLE__TypeInfo, v6);
    sub_1BE4ACC(&Voice_TypeInfo, v7);
    sub_1BE4ACC(&StringLiteral_2744/*"B2820"*/, v8);
    sub_1BE4ACC(&StringLiteral_2672/*"B060"*/, v9);
    sub_1BE4ACC(&StringLiteral_2667/*"B051"*/, v10);
    sub_1BE4ACC(&StringLiteral_2797/*"B550"*/, v11);
    sub_1BE4ACC(&StringLiteral_2777/*"B4042"*/, v12);
    sub_1BE4ACC(&StringLiteral_2798/*"B560"*/, v13);
    sub_1BE4ACC(&StringLiteral_2763/*"B342"*/, v14);
    sub_1BE4ACC(&StringLiteral_2811/*"B880"*/, v15);
    sub_1BE4ACC(&StringLiteral_2742/*"B270"*/, v16);
    sub_1BE4ACC(&StringLiteral_2674/*"B062"*/, v17);
    sub_1BE4ACC(&StringLiteral_2706/*"B190"*/, v18);
    sub_1BE4ACC(&StringLiteral_2703/*"B1620"*/, v19);
    sub_1BE4ACC(&StringLiteral_2698/*"B1420"*/, v20);
    sub_1BE4ACC(&StringLiteral_2745/*"B2830"*/, v21);
    sub_1BE4ACC(&StringLiteral_2669/*"B053"*/, v22);
    sub_1BE4ACC(&StringLiteral_2711/*"B2080"*/, v23);
    sub_1BE4ACC(&StringLiteral_2701/*"B1600"*/, v24);
    sub_1BE4ACC(&StringLiteral_2815/*"B930"*/, v25);
    sub_1BE4ACC(&StringLiteral_2791/*"B5230"*/, v26);
    sub_1BE4ACC(&StringLiteral_2662/*"B040"*/, v27);
    sub_1BE4ACC(&StringLiteral_2796/*"B540"*/, v28);
    sub_1BE4ACC(&StringLiteral_2771/*"B400"*/, v29);
    sub_1BE4ACC(&StringLiteral_2659/*"B010"*/, v30);
    sub_1BE4ACC(&StringLiteral_2700/*"B160"*/, v31);
    sub_1BE4ACC(&StringLiteral_2757/*"B320"*/, v32);
    sub_1BE4ACC(&StringLiteral_2739/*"B2560"*/, v33);
    sub_1BE4ACC(&StringLiteral_2775/*"B4040"*/, v34);
    sub_1BE4ACC(&StringLiteral_2713/*"B210"*/, v35);
    sub_1BE4ACC(&StringLiteral_2806/*"B840"*/, v36);
    sub_1BE4ACC(&StringLiteral_2694/*"B130"*/, v37);
    sub_1BE4ACC(&StringLiteral_2760/*"B340"*/, v38);
    sub_1BE4ACC(&StringLiteral_2793/*"B5260"*/, v39);
    sub_1BE4ACC(&StringLiteral_2679/*"B071"*/, v40);
    sub_1BE4ACC(&StringLiteral_2721/*"B2170"*/, v41);
    sub_1BE4ACC(&StringLiteral_2736/*"B2530"*/, v42);
    sub_1BE4ACC(&StringLiteral_2774/*"B4030"*/, v43);
    sub_1BE4ACC(&StringLiteral_2810/*"B8510"*/, v44);
    sub_1BE4ACC(&StringLiteral_2693/*"B1220"*/, v45);
    sub_1BE4ACC(&StringLiteral_2735/*"B2520"*/, v46);
    sub_1BE4ACC(&StringLiteral_2719/*"B2150"*/, v47);
    sub_1BE4ACC(&StringLiteral_2794/*"B5270"*/, v48);
    sub_1BE4ACC(&StringLiteral_2749/*"B300"*/, v49);
    sub_1BE4ACC(&StringLiteral_2751/*"B3020"*/, v50);
    sub_1BE4ACC(&StringLiteral_2663/*"B041"*/, v51);
    sub_1BE4ACC(&StringLiteral_2743/*"B2810"*/, v52);
    sub_1BE4ACC(&StringLiteral_2762/*"B3410"*/, v53);
    sub_1BE4ACC(&StringLiteral_2750/*"B3010"*/, v54);
    sub_1BE4ACC(&StringLiteral_2708/*"B2010"*/, v55);
    sub_1BE4ACC(&StringLiteral_2685/*"B100"*/, v56);
    sub_1BE4ACC(&StringLiteral_2715/*"B2110"*/, v57);
    sub_1BE4ACC(&StringLiteral_2779/*"B420"*/, v58);
    sub_1BE4ACC(&StringLiteral_2787/*"B510"*/, v59);
    sub_1BE4ACC(&StringLiteral_2675/*"B063"*/, v60);
    sub_1BE4ACC(&StringLiteral_2764/*"B3420"*/, v61);
    sub_1BE4ACC(&StringLiteral_2812/*"B890"*/, v62);
    sub_1BE4ACC(&StringLiteral_2754/*"B3060"*/, v63);
    sub_1BE4ACC(&StringLiteral_2712/*"B2090"*/, v64);
    sub_1BE4ACC(&StringLiteral_2696/*"B1400"*/, v65);
    sub_1BE4ACC(&StringLiteral_2680/*"B072"*/, v66);
    sub_1BE4ACC(&StringLiteral_2753/*"B3050"*/, v67);
    sub_1BE4ACC(&StringLiteral_2697/*"B1410"*/, v68);
    sub_1BE4ACC(&StringLiteral_2759/*"B331"*/, v69);
    sub_1BE4ACC(&StringLiteral_2707/*"B200"*/, v70);
    sub_1BE4ACC(&StringLiteral_2684/*"B090"*/, v71);
    sub_1BE4ACC(&StringLiteral_2731/*"B2480"*/, v72);
    sub_1BE4ACC(&StringLiteral_2776/*"B4041"*/, v73);
    sub_1BE4ACC(&StringLiteral_2737/*"B2540"*/, v74);
    sub_1BE4ACC(&StringLiteral_2746/*"B2840"*/, v75);
    sub_1BE4ACC(&StringLiteral_2740/*"B2570"*/, v76);
    sub_1BE4ACC(&StringLiteral_2809/*"B8500"*/, v77);
    sub_1BE4ACC(&StringLiteral_2814/*"B920"*/, v78);
    sub_1BE4ACC(&StringLiteral_2668/*"B052"*/, v79);
    sub_1BE4ACC(&StringLiteral_2722/*"B220"*/, v80);
    sub_1BE4ACC(&StringLiteral_2689/*"B110"*/, v81);
    sub_1BE4ACC(&StringLiteral_2724/*"B240"*/, v82);
    sub_1BE4ACC(&StringLiteral_2767/*"B3810"*/, v83);
    sub_1BE4ACC(&StringLiteral_2752/*"B3030"*/, v84);
    sub_1BE4ACC(&StringLiteral_2730/*"B2442"*/, v85);
    sub_1BE4ACC(&StringLiteral_2681/*"B073"*/, v86);
    sub_1BE4ACC(&StringLiteral_2755/*"B3070"*/, v87);
    sub_1BE4ACC(&StringLiteral_2780/*"B430"*/, v88);
    sub_1BE4ACC(&StringLiteral_2661/*"B030"*/, v89);
    sub_1BE4ACC(&StringLiteral_2727/*"B2430"*/, v90);
    sub_1BE4ACC(&StringLiteral_2795/*"B530"*/, v91);
    sub_1BE4ACC(&StringLiteral_2717/*"B2130"*/, v92);
    sub_1BE4ACC(&StringLiteral_2716/*"B2120"*/, v93);
    sub_1BE4ACC(&StringLiteral_2782/*"B441"*/, v94);
    sub_1BE4ACC(&StringLiteral_2756/*"B310"*/, v95);
    sub_1BE4ACC(&StringLiteral_2687/*"B1010"*/, v96);
    sub_1BE4ACC(&StringLiteral_2695/*"B140"*/, v97);
    sub_1BE4ACC(&StringLiteral_2738/*"B2550"*/, v98);
    sub_1BE4ACC(&StringLiteral_2678/*"B070"*/, v99);
    sub_1BE4ACC(&StringLiteral_2702/*"B1610"*/, v100);
    sub_1BE4ACC(&StringLiteral_2673/*"B061"*/, v101);
    sub_1BE4ACC(&StringLiteral_2785/*"B490"*/, v102);
    sub_1BE4ACC(&StringLiteral_2766/*"B380"*/, v103);
    sub_1BE4ACC(&StringLiteral_2723/*"B230"*/, v104);
    sub_1BE4ACC(&StringLiteral_2718/*"B2140"*/, v105);
    sub_1BE4ACC(&StringLiteral_2705/*"B180"*/, v106);
    sub_1BE4ACC(&StringLiteral_2803/*"B810"*/, v107);
    sub_1BE4ACC(&StringLiteral_2660/*"B020"*/, v108);
    sub_1BE4ACC(&StringLiteral_2768/*"B3820"*/, v109);
    sub_1BE4ACC(&StringLiteral_2778/*"B410"*/, v110);
    sub_1BE4ACC(&StringLiteral_2770/*"B390"*/, v111);
    sub_1BE4ACC(&StringLiteral_2769/*"B3830"*/, v112);
    sub_1BE4ACC(&StringLiteral_2729/*"B2441"*/, v113);
    sub_1BE4ACC(&StringLiteral_2728/*"B2440"*/, v114);
    sub_1BE4ACC(&StringLiteral_2773/*"B4020"*/, v115);
    sub_1BE4ACC(&StringLiteral_2691/*"B1200"*/, v116);
    sub_1BE4ACC(&StringLiteral_2783/*"B442"*/, v117);
    sub_1BE4ACC(&StringLiteral_2788/*"B520"*/, v118);
    sub_1BE4ACC(&StringLiteral_2786/*"B500"*/, v119);
    sub_1BE4ACC(&StringLiteral_2682/*"B074"*/, v120);
    sub_1BE4ACC(&StringLiteral_2676/*"B064"*/, v121);
    sub_1BE4ACC(&StringLiteral_2758/*"B330"*/, v122);
    sub_1BE4ACC(&StringLiteral_2686/*"B1000"*/, v123);
    sub_1BE4ACC(&StringLiteral_2761/*"B341"*/, v124);
    sub_1BE4ACC(&StringLiteral_2784/*"B480"*/, v125);
    sub_1BE4ACC(&StringLiteral_2710/*"B2030"*/, v126);
    sub_1BE4ACC(&StringLiteral_2781/*"B440"*/, v127);
    sub_1BE4ACC(&StringLiteral_2748/*"B2842"*/, v128);
    sub_1BE4ACC(&StringLiteral_2666/*"B050"*/, v129);
    sub_1BE4ACC(&StringLiteral_2790/*"B5220"*/, v130);
    sub_1BE4ACC(&StringLiteral_2704/*"B170"*/, v131);
    sub_1BE4ACC(&StringLiteral_2734/*"B2510"*/, v132);
    sub_1BE4ACC(&StringLiteral_2732/*"B250"*/, v133);
    sub_1BE4ACC(&StringLiteral_2690/*"B120"*/, v134);
    sub_1BE4ACC(&StringLiteral_2801/*"B800"*/, v135);
    sub_1BE4ACC(&StringLiteral_2683/*"B080"*/, v136);
    sub_1BE4ACC(&StringLiteral_2699/*"B150"*/, v137);
    sub_1BE4ACC(&StringLiteral_2805/*"B820"*/, v138);
    sub_1BE4ACC(&StringLiteral_2725/*"B2410"*/, v139);
    sub_1BE4ACC(&StringLiteral_2747/*"B2841"*/, v140);
    sub_1BE4ACC(&StringLiteral_2664/*"B042"*/, v141);
    sub_1BE4ACC(&StringLiteral_2714/*"B2100"*/, v142);
    sub_1BE4ACC(&StringLiteral_2772/*"B4010"*/, v143);
    sub_1BE4ACC(&StringLiteral_2733/*"B2500"*/, v144);
    sub_1BE4ACC(&StringLiteral_2688/*"B1020"*/, v145);
    sub_1BE4ACC(&StringLiteral_2709/*"B2020"*/, v146);
    sub_1BE4ACC(&StringLiteral_2808/*"B842"*/, v147);
    sub_1BE4ACC(&StringLiteral_2807/*"B841"*/, v148);
    sub_1BE4ACC(&StringLiteral_2670/*"B054"*/, v149);
    sub_1BE4ACC(&StringLiteral_2765/*"B3430"*/, v150);
    sub_1BE4ACC(&StringLiteral_2726/*"B2420"*/, v151);
    sub_1BE4ACC(&StringLiteral_2741/*"B260"*/, v152);
    sub_1BE4ACC(&StringLiteral_2799/*"B570"*/, v153);
    sub_1BE4ACC(&StringLiteral_2789/*"B5210"*/, v154);
    sub_1BE4ACC(&StringLiteral_2813/*"B910"*/, v155);
    sub_1BE4ACC(&StringLiteral_2692/*"B1210"*/, v156);
    sub_1BE4ACC(&StringLiteral_2792/*"B5250"*/, v157);
    sub_1BE4ACC(&StringLiteral_2720/*"B2160"*/, v158);
    byte_4B65BCB = 1;
  }
  v159 = (System_Collections_Generic_List_T__o *)sub_1BE4D18(System_Collections_Generic_List_Voice_BATTLE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v159,
    (const MethodInfo_35D11D8 *)Method_System_Collections_Generic_List_Voice_BATTLE___ctor__);
  if ( !v159 )
    goto LABEL_116;
  items = v159->fields._items;
  v169 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
  ++v159->fields._version;
  if ( !items )
    goto LABEL_116;
  size = v159->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v159,
      81,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v169[4] + 192LL) + 112LL));
    items = v159->fields._items;
    v169 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v159->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v159->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 81;
    ++v159->fields._version;
  }
  v171 = v159->fields._size;
  if ( (unsigned int)v171 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v159,
      82,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v169[4] + 192LL) + 112LL));
    items = v159->fields._items;
    v169 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v159->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v159->fields._size = v171 + 1;
    *((_DWORD *)items->m_Items + v171) = 82;
    ++v159->fields._version;
  }
  v172 = v159->fields._size;
  if ( (unsigned int)v172 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v159,
      230,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v169[4] + 192LL) + 112LL));
    items = v159->fields._items;
    v169 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v159->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v159->fields._size = v172 + 1;
    *((_DWORD *)items->m_Items + v172) = 230;
    ++v159->fields._version;
  }
  v173 = v159->fields._size;
  if ( (unsigned int)v173 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v159,
      231,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v169[4] + 192LL) + 112LL));
    items = v159->fields._items;
    v169 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v159->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v159->fields._size = v173 + 1;
    *((_DWORD *)items->m_Items + v173) = 231;
    ++v159->fields._version;
  }
  v174 = v159->fields._size;
  if ( (unsigned int)v174 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v159,
      285,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v169[4] + 192LL) + 112LL));
    items = v159->fields._items;
    v169 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v159->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v159->fields._size = v174 + 1;
    *((_DWORD *)items->m_Items + v174) = 285;
    ++v159->fields._version;
  }
  v175 = v159->fields._size;
  if ( (unsigned int)v175 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v159,
      286,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v169[4] + 192LL) + 112LL));
    items = v159->fields._items;
    v169 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v159->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v159->fields._size = v175 + 1;
    *((_DWORD *)items->m_Items + v175) = 286;
    ++v159->fields._version;
  }
  v176 = v159->fields._size;
  if ( (unsigned int)v176 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v159,
      287,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v169[4] + 192LL) + 112LL));
    items = v159->fields._items;
    v169 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v159->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v159->fields._size = v176 + 1;
    *((_DWORD *)items->m_Items + v176) = 287;
    ++v159->fields._version;
  }
  v177 = v159->fields._size;
  if ( (unsigned int)v177 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v159,
      288,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v169[4] + 192LL) + 112LL));
  }
  else
  {
    v159->fields._size = v177 + 1;
    *((_DWORD *)items->m_Items + v177) = 288;
  }
  Voice_TypeInfo->static_fields->deadVoiceList = (struct System_Collections_Generic_List_Voice_BATTLE__o *)v159;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)Voice_TypeInfo->static_fields,
    (int64_t)v159,
    v162,
    v163,
    v164,
    v165,
    v166,
    v167);
  v178 = (System_Collections_Generic_List_T__o *)sub_1BE4D18(System_Collections_Generic_List_Voice_BATTLE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v178,
    (const MethodInfo_35D11D8 *)Method_System_Collections_Generic_List_Voice_BATTLE___ctor__);
  if ( !v178 )
    goto LABEL_116;
  v185 = v178->fields._items;
  v186 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
  ++v178->fields._version;
  if ( !v185 )
    goto LABEL_116;
  v187 = v178->fields._size;
  if ( (unsigned int)v187 >= v185->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v178,
      31,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v186[4] + 192LL) + 112LL));
    v185 = v178->fields._items;
    v186 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v178->fields._version;
    if ( !v185 )
      goto LABEL_116;
  }
  else
  {
    v178->fields._size = v187 + 1;
    *((_DWORD *)v185->m_Items + v187) = 31;
    ++v178->fields._version;
  }
  v188 = v178->fields._size;
  if ( (unsigned int)v188 >= v185->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v178,
      32,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v186[4] + 192LL) + 112LL));
    v185 = v178->fields._items;
    v186 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v178->fields._version;
    if ( !v185 )
      goto LABEL_116;
  }
  else
  {
    v178->fields._size = v188 + 1;
    *((_DWORD *)v185->m_Items + v188) = 32;
    ++v178->fields._version;
  }
  v189 = v178->fields._size;
  if ( (unsigned int)v189 >= v185->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v178,
      223,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v186[4] + 192LL) + 112LL));
    v185 = v178->fields._items;
    v186 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v178->fields._version;
    if ( !v185 )
      goto LABEL_116;
  }
  else
  {
    v178->fields._size = v189 + 1;
    *((_DWORD *)v185->m_Items + v189) = 223;
    ++v178->fields._version;
  }
  v190 = v178->fields._size;
  if ( (unsigned int)v190 >= v185->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v178,
      224,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v186[4] + 192LL) + 112LL));
    v185 = v178->fields._items;
    v186 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v178->fields._version;
    if ( !v185 )
      goto LABEL_116;
  }
  else
  {
    v178->fields._size = v190 + 1;
    *((_DWORD *)v185->m_Items + v190) = 224;
    ++v178->fields._version;
  }
  v191 = v178->fields._size;
  if ( (unsigned int)v191 >= v185->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v178,
      243,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v186[4] + 192LL) + 112LL));
    v185 = v178->fields._items;
    v186 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v178->fields._version;
    if ( !v185 )
      goto LABEL_116;
  }
  else
  {
    v178->fields._size = v191 + 1;
    *((_DWORD *)v185->m_Items + v191) = 243;
    ++v178->fields._version;
  }
  v192 = v178->fields._size;
  if ( (unsigned int)v192 >= v185->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v178,
      244,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v186[4] + 192LL) + 112LL));
    v185 = v178->fields._items;
    v186 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v178->fields._version;
    if ( !v185 )
      goto LABEL_116;
  }
  else
  {
    v178->fields._size = v192 + 1;
    *((_DWORD *)v185->m_Items + v192) = 244;
    ++v178->fields._version;
  }
  v193 = v178->fields._size;
  if ( (unsigned int)v193 >= v185->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v178,
      254,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v186[4] + 192LL) + 112LL));
    v185 = v178->fields._items;
    v186 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v178->fields._version;
    if ( !v185 )
      goto LABEL_116;
  }
  else
  {
    v178->fields._size = v193 + 1;
    *((_DWORD *)v185->m_Items + v193) = 254;
    ++v178->fields._version;
  }
  v194 = v178->fields._size;
  if ( (unsigned int)v194 >= v185->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v178,
      255,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v186[4] + 192LL) + 112LL));
    v185 = v178->fields._items;
    v186 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v178->fields._version;
    if ( !v185 )
      goto LABEL_116;
  }
  else
  {
    v178->fields._size = v194 + 1;
    *((_DWORD *)v185->m_Items + v194) = 255;
    ++v178->fields._version;
  }
  v195 = v178->fields._size;
  if ( (unsigned int)v195 >= v185->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v178,
      256,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v186[4] + 192LL) + 112LL));
  }
  else
  {
    v178->fields._size = v195 + 1;
    *((_DWORD *)v185->m_Items + v195) = 256;
  }
  static_fields = Voice_TypeInfo->static_fields;
  static_fields->skillVoiceList = (struct System_Collections_Generic_List_Voice_BATTLE__o *)v178;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&static_fields->skillVoiceList,
    (int64_t)v178,
    v179,
    v180,
    v181,
    v182,
    v183,
    v184);
  v197 = (System_Collections_Generic_List_T__o *)sub_1BE4D18(System_Collections_Generic_List_Voice_BATTLE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v197,
    (const MethodInfo_35D11D8 *)Method_System_Collections_Generic_List_Voice_BATTLE___ctor__);
  if ( !v197 )
    goto LABEL_116;
  v204 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
  p_version = &v197->fields._version;
  ++v197->fields._version;
  v206 = v197->fields._items;
  p_size = &v197->fields._size;
  v207 = v197->fields._size;
  if ( !v206 )
    goto LABEL_116;
  if ( (unsigned int)v207 >= v206->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v197,
      111,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v204[4] + 192LL) + 112LL));
    v206 = v197->fields._items;
    v204 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v197->fields._version;
    if ( !v206 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v207 + 1;
    *((_DWORD *)v206->m_Items + v207) = 111;
    ++*p_version;
  }
  v209 = *p_size;
  if ( (unsigned int)v209 >= v206->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v197,
      121,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v204[4] + 192LL) + 112LL));
    v206 = v197->fields._items;
    v204 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v197->fields._version;
    if ( !v206 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v209 + 1;
    *((_DWORD *)v206->m_Items + v209) = 121;
    ++*p_version;
  }
  v210 = *p_size;
  if ( (unsigned int)v210 >= v206->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v197,
      131,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v204[4] + 192LL) + 112LL));
    v206 = v197->fields._items;
    v204 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v197->fields._version;
    if ( !v206 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v210 + 1;
    *((_DWORD *)v206->m_Items + v210) = 131;
    ++*p_version;
  }
  v211 = *p_size;
  if ( (unsigned int)v211 >= v206->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v197,
      141,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v204[4] + 192LL) + 112LL));
    v206 = v197->fields._items;
    v204 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v197->fields._version;
    if ( !v206 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v211 + 1;
    *((_DWORD *)v206->m_Items + v211) = 141;
    ++*p_version;
  }
  v212 = *p_size;
  if ( (unsigned int)v212 >= v206->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v197,
      151,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v204[4] + 192LL) + 112LL));
    v206 = v197->fields._items;
    v204 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v197->fields._version;
    if ( !v206 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v212 + 1;
    *((_DWORD *)v206->m_Items + v212) = 151;
    ++*p_version;
  }
  v213 = *p_size;
  if ( (unsigned int)v213 >= v206->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v197,
      161,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v204[4] + 192LL) + 112LL));
    v206 = v197->fields._items;
    v204 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v197->fields._version;
    if ( !v206 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v213 + 1;
    *((_DWORD *)v206->m_Items + v213) = 161;
    ++*p_version;
  }
  v214 = *p_size;
  if ( (unsigned int)v214 >= v206->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v197,
      171,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v204[4] + 192LL) + 112LL));
    v206 = v197->fields._items;
    v204 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v197->fields._version;
    if ( !v206 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v214 + 1;
    *((_DWORD *)v206->m_Items + v214) = 171;
    ++*p_version;
  }
  v215 = *p_size;
  if ( (unsigned int)v215 >= v206->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v197,
      181,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v204[4] + 192LL) + 112LL));
    v206 = v197->fields._items;
    v204 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v197->fields._version;
    if ( !v206 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v215 + 1;
    *((_DWORD *)v206->m_Items + v215) = 181;
    ++*p_version;
  }
  v216 = *p_size;
  if ( (unsigned int)v216 >= v206->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v197,
      191,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v204[4] + 192LL) + 112LL));
    v206 = v197->fields._items;
    v204 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v197->fields._version;
    if ( !v206 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v216 + 1;
    *((_DWORD *)v206->m_Items + v216) = 191;
    ++*p_version;
  }
  v217 = *p_size;
  if ( (unsigned int)v217 >= v206->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v197,
      1001,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v204[4] + 192LL) + 112LL));
    v206 = v197->fields._items;
    v204 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v197->fields._version;
    if ( !v206 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v217 + 1;
    *((_DWORD *)v206->m_Items + v217) = 1001;
    ++*p_version;
  }
  v218 = *p_size;
  if ( (unsigned int)v218 >= v206->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v197,
      1011,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v204[4] + 192LL) + 112LL));
    v206 = v197->fields._items;
    v204 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v197->fields._version;
    if ( !v206 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v218 + 1;
    *((_DWORD *)v206->m_Items + v218) = 1011;
    ++*p_version;
  }
  v219 = *p_size;
  if ( (unsigned int)v219 >= v206->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v197,
      1021,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v204[4] + 192LL) + 112LL));
    v206 = v197->fields._items;
    v204 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v197->fields._version;
    if ( !v206 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v219 + 1;
    *((_DWORD *)v206->m_Items + v219) = 1021;
    ++*p_version;
  }
  v220 = *p_size;
  if ( (unsigned int)v220 >= v206->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v197,
      1031,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v204[4] + 192LL) + 112LL));
    v206 = v197->fields._items;
    v204 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v197->fields._version;
    if ( !v206 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v220 + 1;
    *((_DWORD *)v206->m_Items + v220) = 1031;
    ++*p_version;
  }
  v221 = *p_size;
  if ( (unsigned int)v221 >= v206->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v197,
      1041,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v204[4] + 192LL) + 112LL));
    v206 = v197->fields._items;
    v204 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v197->fields._version;
    if ( !v206 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v221 + 1;
    *((_DWORD *)v206->m_Items + v221) = 1041;
    ++*p_version;
  }
  v222 = *p_size;
  if ( (unsigned int)v222 >= v206->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v197,
      1051,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v204[4] + 192LL) + 112LL));
    v206 = v197->fields._items;
    v204 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v197->fields._version;
    if ( !v206 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v222 + 1;
    *((_DWORD *)v206->m_Items + v222) = 1051;
    ++*p_version;
  }
  v223 = *p_size;
  if ( (unsigned int)v223 >= v206->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v197,
      1061,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v204[4] + 192LL) + 112LL));
    v206 = v197->fields._items;
    v204 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v197->fields._version;
    if ( !v206 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v223 + 1;
    *((_DWORD *)v206->m_Items + v223) = 1061;
    ++*p_version;
  }
  v224 = *p_size;
  if ( (unsigned int)v224 >= v206->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v197,
      1071,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v204[4] + 192LL) + 112LL));
    v206 = v197->fields._items;
    v204 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v197->fields._version;
    if ( !v206 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v224 + 1;
    *((_DWORD *)v206->m_Items + v224) = 1071;
    ++*p_version;
  }
  v225 = *p_size;
  if ( (unsigned int)v225 >= v206->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v197,
      1081,
      *(const MethodInfo_35D1A2C **)(*(_QWORD *)(v204[4] + 192LL) + 112LL));
  }
  else
  {
    *p_size = v225 + 1;
    *((_DWORD *)v206->m_Items + v225) = 1081;
  }
  v226 = Voice_TypeInfo->static_fields;
  v226->firstNpVoiceList = (struct System_Collections_Generic_List_Voice_BATTLE__o *)v197;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v226->firstNpVoiceList, (int64_t)v197, v198, v199, v200, v201, v202, v203);
  v227 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BE4D18(System_Collections_Generic_Dictionary_Voice_BATTLE__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v227,
    (const MethodInfo_327F5E8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string___ctor__);
  if ( !v227 )
LABEL_116:
    sub_1BE4D28(v160, v161);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    0,
    0LL,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    10,
    (Il2CppObject *)StringLiteral_2659/*"B010"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    11,
    (Il2CppObject *)StringLiteral_2660/*"B020"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    12,
    (Il2CppObject *)StringLiteral_2661/*"B030"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    20,
    (Il2CppObject *)StringLiteral_2662/*"B040"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    21,
    (Il2CppObject *)StringLiteral_2663/*"B041"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    22,
    (Il2CppObject *)StringLiteral_2664/*"B042"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    111,
    (Il2CppObject *)StringLiteral_2666/*"B050"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    112,
    (Il2CppObject *)StringLiteral_2667/*"B051"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    113,
    (Il2CppObject *)StringLiteral_2668/*"B052"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    114,
    (Il2CppObject *)StringLiteral_2669/*"B053"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    115,
    (Il2CppObject *)StringLiteral_2670/*"B054"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    121,
    (Il2CppObject *)StringLiteral_2672/*"B060"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    122,
    (Il2CppObject *)StringLiteral_2673/*"B061"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    123,
    (Il2CppObject *)StringLiteral_2674/*"B062"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    124,
    (Il2CppObject *)StringLiteral_2675/*"B063"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    125,
    (Il2CppObject *)StringLiteral_2676/*"B064"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    131,
    (Il2CppObject *)StringLiteral_2678/*"B070"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    132,
    (Il2CppObject *)StringLiteral_2679/*"B071"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    133,
    (Il2CppObject *)StringLiteral_2680/*"B072"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    134,
    (Il2CppObject *)StringLiteral_2681/*"B073"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    135,
    (Il2CppObject *)StringLiteral_2682/*"B074"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    141,
    (Il2CppObject *)StringLiteral_2801/*"B800"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    151,
    (Il2CppObject *)StringLiteral_2803/*"B810"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    161,
    (Il2CppObject *)StringLiteral_2805/*"B820"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    171,
    (Il2CppObject *)StringLiteral_2701/*"B1600"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    181,
    (Il2CppObject *)StringLiteral_2702/*"B1610"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    191,
    (Il2CppObject *)StringLiteral_2703/*"B1620"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    1001,
    (Il2CppObject *)StringLiteral_2686/*"B1000"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    31,
    (Il2CppObject *)StringLiteral_2683/*"B080"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    32,
    (Il2CppObject *)StringLiteral_2684/*"B090"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    41,
    (Il2CppObject *)StringLiteral_2685/*"B100"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    42,
    (Il2CppObject *)StringLiteral_2689/*"B110"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    51,
    (Il2CppObject *)StringLiteral_2690/*"B120"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    52,
    (Il2CppObject *)StringLiteral_2694/*"B130"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    61,
    (Il2CppObject *)StringLiteral_2695/*"B140"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    71,
    (Il2CppObject *)StringLiteral_2699/*"B150"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    81,
    (Il2CppObject *)StringLiteral_2700/*"B160"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    82,
    (Il2CppObject *)StringLiteral_2704/*"B170"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    201,
    (Il2CppObject *)StringLiteral_2705/*"B180"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    202,
    (Il2CppObject *)StringLiteral_2706/*"B190"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    203,
    (Il2CppObject *)StringLiteral_2707/*"B200"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    211,
    (Il2CppObject *)StringLiteral_2713/*"B210"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    212,
    (Il2CppObject *)StringLiteral_2722/*"B220"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    213,
    (Il2CppObject *)StringLiteral_2723/*"B230"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    214,
    (Il2CppObject *)StringLiteral_2749/*"B300"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    215,
    (Il2CppObject *)StringLiteral_2749/*"B300"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    216,
    (Il2CppObject *)StringLiteral_2732/*"B250"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    217,
    (Il2CppObject *)StringLiteral_2778/*"B410"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    218,
    (Il2CppObject *)StringLiteral_2779/*"B420"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    219,
    (Il2CppObject *)StringLiteral_2780/*"B430"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    220,
    (Il2CppObject *)StringLiteral_2781/*"B440"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    221,
    (Il2CppObject *)StringLiteral_2782/*"B441"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    222,
    (Il2CppObject *)StringLiteral_2783/*"B442"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    223,
    (Il2CppObject *)StringLiteral_2784/*"B480"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    224,
    (Il2CppObject *)StringLiteral_2785/*"B490"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    225,
    (Il2CppObject *)StringLiteral_2786/*"B500"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    226,
    (Il2CppObject *)StringLiteral_2787/*"B510"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    227,
    (Il2CppObject *)StringLiteral_2788/*"B520"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    228,
    (Il2CppObject *)StringLiteral_2795/*"B530"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    229,
    (Il2CppObject *)StringLiteral_2796/*"B540"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    230,
    (Il2CppObject *)StringLiteral_2798/*"B560"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    231,
    (Il2CppObject *)StringLiteral_2799/*"B570"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    232,
    (Il2CppObject *)StringLiteral_2756/*"B310"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    233,
    (Il2CppObject *)StringLiteral_2757/*"B320"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    234,
    (Il2CppObject *)StringLiteral_2758/*"B330"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    235,
    (Il2CppObject *)StringLiteral_2759/*"B331"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    236,
    (Il2CppObject *)StringLiteral_2760/*"B340"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    237,
    (Il2CppObject *)StringLiteral_2761/*"B341"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    238,
    (Il2CppObject *)StringLiteral_2763/*"B342"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    239,
    (Il2CppObject *)StringLiteral_2797/*"B550"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    240,
    (Il2CppObject *)StringLiteral_2813/*"B910"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    241,
    (Il2CppObject *)StringLiteral_2814/*"B920"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    242,
    (Il2CppObject *)StringLiteral_2815/*"B930"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    243,
    (Il2CppObject *)StringLiteral_2811/*"B880"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    244,
    (Il2CppObject *)StringLiteral_2812/*"B890"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    245,
    (Il2CppObject *)StringLiteral_2766/*"B380"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    246,
    (Il2CppObject *)StringLiteral_2770/*"B390"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    247,
    (Il2CppObject *)StringLiteral_2771/*"B400"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    248,
    (Il2CppObject *)StringLiteral_2806/*"B840"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    249,
    (Il2CppObject *)StringLiteral_2807/*"B841"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    250,
    (Il2CppObject *)StringLiteral_2808/*"B842"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    251,
    (Il2CppObject *)StringLiteral_2741/*"B260"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    252,
    (Il2CppObject *)StringLiteral_2724/*"B240"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    253,
    (Il2CppObject *)StringLiteral_2742/*"B270"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    254,
    (Il2CppObject *)StringLiteral_2711/*"B2080"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    255,
    (Il2CppObject *)StringLiteral_2712/*"B2090"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    256,
    (Il2CppObject *)StringLiteral_2731/*"B2480"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    257,
    (Il2CppObject *)StringLiteral_2728/*"B2440"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    258,
    (Il2CppObject *)StringLiteral_2729/*"B2441"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    259,
    (Il2CppObject *)StringLiteral_2730/*"B2442"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    260,
    (Il2CppObject *)StringLiteral_2746/*"B2840"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    261,
    (Il2CppObject *)StringLiteral_2747/*"B2841"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    262,
    (Il2CppObject *)StringLiteral_2748/*"B2842"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    263,
    (Il2CppObject *)StringLiteral_2775/*"B4040"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    264,
    (Il2CppObject *)StringLiteral_2776/*"B4041"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    265,
    (Il2CppObject *)StringLiteral_2777/*"B4042"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    266,
    (Il2CppObject *)StringLiteral_2708/*"B2010"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    267,
    (Il2CppObject *)StringLiteral_2709/*"B2020"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    268,
    (Il2CppObject *)StringLiteral_2710/*"B2030"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    269,
    (Il2CppObject *)StringLiteral_2725/*"B2410"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    270,
    (Il2CppObject *)StringLiteral_2726/*"B2420"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    271,
    (Il2CppObject *)StringLiteral_2727/*"B2430"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    272,
    (Il2CppObject *)StringLiteral_2743/*"B2810"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    273,
    (Il2CppObject *)StringLiteral_2744/*"B2820"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    274,
    (Il2CppObject *)StringLiteral_2745/*"B2830"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    275,
    (Il2CppObject *)StringLiteral_2714/*"B2100"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    276,
    (Il2CppObject *)StringLiteral_2715/*"B2110"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    277,
    (Il2CppObject *)StringLiteral_2733/*"B2500"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    278,
    (Il2CppObject *)StringLiteral_2734/*"B2510"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    279,
    (Il2CppObject *)StringLiteral_2750/*"B3010"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    280,
    (Il2CppObject *)StringLiteral_2751/*"B3020"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    281,
    (Il2CppObject *)StringLiteral_2752/*"B3030"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    282,
    (Il2CppObject *)StringLiteral_2762/*"B3410"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    283,
    (Il2CppObject *)StringLiteral_2764/*"B3420"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    284,
    (Il2CppObject *)StringLiteral_2765/*"B3430"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    285,
    (Il2CppObject *)StringLiteral_2720/*"B2160"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    286,
    (Il2CppObject *)StringLiteral_2721/*"B2170"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    287,
    (Il2CppObject *)StringLiteral_2739/*"B2560"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    288,
    (Il2CppObject *)StringLiteral_2740/*"B2570"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    289,
    (Il2CppObject *)StringLiteral_2716/*"B2120"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    290,
    (Il2CppObject *)StringLiteral_2717/*"B2130"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    291,
    (Il2CppObject *)StringLiteral_2735/*"B2520"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    292,
    (Il2CppObject *)StringLiteral_2736/*"B2530"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    293,
    (Il2CppObject *)StringLiteral_2718/*"B2140"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    294,
    (Il2CppObject *)StringLiteral_2737/*"B2540"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    295,
    (Il2CppObject *)StringLiteral_2719/*"B2150"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    296,
    (Il2CppObject *)StringLiteral_2738/*"B2550"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    297,
    (Il2CppObject *)StringLiteral_2753/*"B3050"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    298,
    (Il2CppObject *)StringLiteral_2754/*"B3060"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    299,
    (Il2CppObject *)StringLiteral_2755/*"B3070"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    300,
    (Il2CppObject *)StringLiteral_2789/*"B5210"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    301,
    (Il2CppObject *)StringLiteral_2790/*"B5220"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    302,
    (Il2CppObject *)StringLiteral_2791/*"B5230"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    303,
    (Il2CppObject *)StringLiteral_2792/*"B5250"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    304,
    (Il2CppObject *)StringLiteral_2793/*"B5260"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    305,
    (Il2CppObject *)StringLiteral_2794/*"B5270"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    306,
    (Il2CppObject *)StringLiteral_2809/*"B8500"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    307,
    (Il2CppObject *)StringLiteral_2810/*"B8510"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    308,
    (Il2CppObject *)StringLiteral_2767/*"B3810"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    309,
    (Il2CppObject *)StringLiteral_2768/*"B3820"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    310,
    (Il2CppObject *)StringLiteral_2769/*"B3830"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    311,
    (Il2CppObject *)StringLiteral_2772/*"B4010"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    312,
    (Il2CppObject *)StringLiteral_2773/*"B4020"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    313,
    (Il2CppObject *)StringLiteral_2774/*"B4030"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    1011,
    (Il2CppObject *)StringLiteral_2687/*"B1010"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    1021,
    (Il2CppObject *)StringLiteral_2688/*"B1020"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    1031,
    (Il2CppObject *)StringLiteral_2691/*"B1200"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    1041,
    (Il2CppObject *)StringLiteral_2692/*"B1210"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    1051,
    (Il2CppObject *)StringLiteral_2693/*"B1220"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    1061,
    (Il2CppObject *)StringLiteral_2696/*"B1400"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    1071,
    (Il2CppObject *)StringLiteral_2697/*"B1410"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v227,
    1081,
    (Il2CppObject *)StringLiteral_2698/*"B1420"*/,
    (const MethodInfo_327FFBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  v228 = Voice_TypeInfo->static_fields;
  v228->filelist = (struct System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v227;
  sub_1BE4A70((PartyOrganizationUtility_o *)&v228->filelist, (int64_t)v227, v229, v230, v231, v232, v233, v234);
}


void __fastcall Voice___ctor(Voice_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall Voice__GetTypeByFileName(System_String_o *fileName, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  Voice_c *v17; // x0
  System_Collections_Generic_IEnumerable_TSource__o *filelist; // x19
  System_Func_T__TResult__o *v19; // x21

  if ( (byte_4B65BC9 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_Voice_BATTLE__string____, method);
    sub_1BE4ACC(&System_Func_KeyValuePair_Voice_BATTLE__string___bool__TypeInfo, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_KeyValuePair_Voice_BATTLE__string__get_Key__, v4);
    sub_1BE4ACC(&Method_Voice___c__DisplayClass6_0__GetTypeByFileName_b__0__, v5);
    sub_1BE4ACC(&Voice___c__DisplayClass6_0_TypeInfo, v6);
    sub_1BE4ACC(&Voice_TypeInfo, v7);
    byte_4B65BC9 = 1;
  }
  v8 = sub_1BE4D18(Voice___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1BE4D28(v9, v10);
  *(_QWORD *)(v8 + 16) = fileName;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)fileName, v11, v12, v13, v14, v15, v16);
  v17 = Voice_TypeInfo;
  if ( !Voice_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
    v17 = Voice_TypeInfo;
  }
  filelist = (System_Collections_Generic_IEnumerable_TSource__o *)v17->static_fields->filelist;
  v19 = (System_Func_T__TResult__o *)sub_1BE4D18(System_Func_KeyValuePair_Voice_BATTLE__string___bool__TypeInfo);
  System_Func_KeyValuePair_Int32Enum__object___bool____ctor(
    v19,
    (Il2CppObject *)v8,
    Method_Voice___c__DisplayClass6_0__GetTypeByFileName_b__0__,
    0LL);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_Int32Enum__object__(
           filelist,
           (System_Func_TSource__bool__o *)v19,
           (const MethodInfo_2F7C67C *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_Voice_BATTLE__string____).fields.key;
}


bool __fastcall Voice__IsDeadVoice(int32_t voiceBattleType, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  Voice_c *v10; // x0
  System_Collections_Generic_List_T__o *deadVoiceList; // x19
  System_Func_T__TResult__o *v12; // x21

  if ( (byte_4B65BCA & 1) == 0 )
  {
    sub_1BE4ACC(&Method_BasicHelper_Any_Voice_BATTLE___, method);
    sub_1BE4ACC(&System_Func_Voice_BATTLE__bool__TypeInfo, v3);
    sub_1BE4ACC(&Method_Voice___c__DisplayClass7_0__IsDeadVoice_b__0__, v4);
    sub_1BE4ACC(&Voice___c__DisplayClass7_0_TypeInfo, v5);
    sub_1BE4ACC(&Voice_TypeInfo, v6);
    byte_4B65BCA = 1;
  }
  v7 = sub_1BE4D18(Voice___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1BE4D28(v8, v9);
  *(_DWORD *)(v7 + 16) = voiceBattleType;
  v10 = Voice_TypeInfo;
  if ( !Voice_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
    v10 = Voice_TypeInfo;
  }
  deadVoiceList = (System_Collections_Generic_List_T__o *)v10->static_fields->deadVoiceList;
  v12 = (System_Func_T__TResult__o *)sub_1BE4D18(System_Func_Voice_BATTLE__bool__TypeInfo);
  System_Func_Int32Enum__bool____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_Voice___c__DisplayClass7_0__IsDeadVoice_b__0__,
    0LL);
  return BasicHelper__Any_Int32Enum_(
           deadVoiceList,
           (System_Func_T__bool__o *)v12,
           (const MethodInfo_2F43E98 *)Method_BasicHelper_Any_Voice_BATTLE___);
}


System_String_o *__fastcall Voice__getFileName(int32_t type, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Voice_c *v5; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *filelist; // x0
  Voice_c *v7; // x0

  if ( (byte_4B65BC8 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__ContainsKey__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__get_Item__, v3);
    sub_1BE4ACC(&Voice_TypeInfo, v4);
    byte_4B65BC8 = 1;
  }
  v5 = Voice_TypeInfo;
  if ( !Voice_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
    v5 = Voice_TypeInfo;
  }
  filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v5->static_fields->filelist;
  if ( !filelist )
    goto LABEL_12;
  if ( System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
         filelist,
         type,
         (const MethodInfo_32801B0 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__ContainsKey__) )
  {
    v7 = Voice_TypeInfo;
    if ( !Voice_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
      v7 = Voice_TypeInfo;
    }
    filelist = (System_Collections_Generic_Dictionary_TKey__TValue__o *)v7->static_fields->filelist;
    if ( filelist )
      return (System_String_o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                  filelist,
                                  type,
                                  (const MethodInfo_327FF1C *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__get_Item__);
LABEL_12:
    sub_1BE4D28(filelist, method);
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
  if ( (byte_4B65BCC & 1) == 0 )
  {
    sub_1BE4ACC(
      &Method_System_Collections_Generic_KeyValuePair_Voice_BATTLE__string__get_Value__,
      *(_QWORD *)&x.fields.key);
    byte_4B65BCC = 1;
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