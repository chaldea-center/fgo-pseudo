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
  int32_t v162; // w2
  int32_t v163; // w3
  struct System_Object_array *items; // x9
  _QWORD *v165; // x8
  __int64 size; // x10
  __int64 v167; // x10
  __int64 v168; // x10
  __int64 v169; // x10
  __int64 v170; // x10
  __int64 v171; // x10
  __int64 v172; // x10
  __int64 v173; // x10
  System_Collections_Generic_List_T__o *v174; // x19
  int32_t v175; // w2
  int32_t v176; // w3
  struct System_Object_array *v177; // x9
  _QWORD *v178; // x8
  __int64 v179; // x10
  __int64 v180; // x10
  __int64 v181; // x10
  __int64 v182; // x10
  __int64 v183; // x10
  __int64 v184; // x10
  __int64 v185; // x10
  __int64 v186; // x10
  __int64 v187; // x10
  struct Voice_StaticFields *static_fields; // x0
  System_Collections_Generic_List_T__o *v189; // x19
  int32_t v190; // w2
  int32_t v191; // w3
  _QWORD *v192; // x8
  int32_t *p_version; // x21
  struct System_Object_array *v194; // x9
  __int64 v195; // x10
  int32_t *p_size; // x20
  __int64 v197; // x10
  __int64 v198; // x10
  __int64 v199; // x10
  __int64 v200; // x10
  __int64 v201; // x10
  __int64 v202; // x10
  __int64 v203; // x10
  __int64 v204; // x10
  __int64 v205; // x10
  __int64 v206; // x10
  __int64 v207; // x10
  __int64 v208; // x10
  __int64 v209; // x10
  __int64 v210; // x10
  __int64 v211; // x10
  __int64 v212; // x10
  __int64 v213; // x10
  struct Voice_StaticFields *v214; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v215; // x19
  struct Voice_StaticFields *v216; // x0
  int32_t v217; // w2
  int32_t v218; // w3

  if ( (byte_4A6EEBA & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__, v1);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string___ctor__, v2);
    sub_1B90010(&System_Collections_Generic_Dictionary_Voice_BATTLE__string__TypeInfo, v3);
    sub_1B90010(&Method_System_Collections_Generic_List_Voice_BATTLE__Add__, v4);
    sub_1B90010(&Method_System_Collections_Generic_List_Voice_BATTLE___ctor__, v5);
    sub_1B90010(&System_Collections_Generic_List_Voice_BATTLE__TypeInfo, v6);
    sub_1B90010(&Voice_TypeInfo, v7);
    sub_1B90010(&StringLiteral_2718/*"B2820"*/, v8);
    sub_1B90010(&StringLiteral_2646/*"B060"*/, v9);
    sub_1B90010(&StringLiteral_2641/*"B051"*/, v10);
    sub_1B90010(&StringLiteral_2771/*"B550"*/, v11);
    sub_1B90010(&StringLiteral_2751/*"B4042"*/, v12);
    sub_1B90010(&StringLiteral_2772/*"B560"*/, v13);
    sub_1B90010(&StringLiteral_2737/*"B342"*/, v14);
    sub_1B90010(&StringLiteral_2785/*"B880"*/, v15);
    sub_1B90010(&StringLiteral_2716/*"B270"*/, v16);
    sub_1B90010(&StringLiteral_2648/*"B062"*/, v17);
    sub_1B90010(&StringLiteral_2680/*"B190"*/, v18);
    sub_1B90010(&StringLiteral_2677/*"B1620"*/, v19);
    sub_1B90010(&StringLiteral_2672/*"B1420"*/, v20);
    sub_1B90010(&StringLiteral_2719/*"B2830"*/, v21);
    sub_1B90010(&StringLiteral_2643/*"B053"*/, v22);
    sub_1B90010(&StringLiteral_2685/*"B2080"*/, v23);
    sub_1B90010(&StringLiteral_2675/*"B1600"*/, v24);
    sub_1B90010(&StringLiteral_2789/*"B930"*/, v25);
    sub_1B90010(&StringLiteral_2765/*"B5230"*/, v26);
    sub_1B90010(&StringLiteral_2636/*"B040"*/, v27);
    sub_1B90010(&StringLiteral_2770/*"B540"*/, v28);
    sub_1B90010(&StringLiteral_2745/*"B400"*/, v29);
    sub_1B90010(&StringLiteral_2633/*"B010"*/, v30);
    sub_1B90010(&StringLiteral_2674/*"B160"*/, v31);
    sub_1B90010(&StringLiteral_2731/*"B320"*/, v32);
    sub_1B90010(&StringLiteral_2713/*"B2560"*/, v33);
    sub_1B90010(&StringLiteral_2749/*"B4040"*/, v34);
    sub_1B90010(&StringLiteral_2687/*"B210"*/, v35);
    sub_1B90010(&StringLiteral_2780/*"B840"*/, v36);
    sub_1B90010(&StringLiteral_2668/*"B130"*/, v37);
    sub_1B90010(&StringLiteral_2734/*"B340"*/, v38);
    sub_1B90010(&StringLiteral_2767/*"B5260"*/, v39);
    sub_1B90010(&StringLiteral_2653/*"B071"*/, v40);
    sub_1B90010(&StringLiteral_2695/*"B2170"*/, v41);
    sub_1B90010(&StringLiteral_2710/*"B2530"*/, v42);
    sub_1B90010(&StringLiteral_2748/*"B4030"*/, v43);
    sub_1B90010(&StringLiteral_2784/*"B8510"*/, v44);
    sub_1B90010(&StringLiteral_2667/*"B1220"*/, v45);
    sub_1B90010(&StringLiteral_2709/*"B2520"*/, v46);
    sub_1B90010(&StringLiteral_2693/*"B2150"*/, v47);
    sub_1B90010(&StringLiteral_2768/*"B5270"*/, v48);
    sub_1B90010(&StringLiteral_2723/*"B300"*/, v49);
    sub_1B90010(&StringLiteral_2725/*"B3020"*/, v50);
    sub_1B90010(&StringLiteral_2637/*"B041"*/, v51);
    sub_1B90010(&StringLiteral_2717/*"B2810"*/, v52);
    sub_1B90010(&StringLiteral_2736/*"B3410"*/, v53);
    sub_1B90010(&StringLiteral_2724/*"B3010"*/, v54);
    sub_1B90010(&StringLiteral_2682/*"B2010"*/, v55);
    sub_1B90010(&StringLiteral_2659/*"B100"*/, v56);
    sub_1B90010(&StringLiteral_2689/*"B2110"*/, v57);
    sub_1B90010(&StringLiteral_2753/*"B420"*/, v58);
    sub_1B90010(&StringLiteral_2761/*"B510"*/, v59);
    sub_1B90010(&StringLiteral_2649/*"B063"*/, v60);
    sub_1B90010(&StringLiteral_2738/*"B3420"*/, v61);
    sub_1B90010(&StringLiteral_2786/*"B890"*/, v62);
    sub_1B90010(&StringLiteral_2728/*"B3060"*/, v63);
    sub_1B90010(&StringLiteral_2686/*"B2090"*/, v64);
    sub_1B90010(&StringLiteral_2670/*"B1400"*/, v65);
    sub_1B90010(&StringLiteral_2654/*"B072"*/, v66);
    sub_1B90010(&StringLiteral_2727/*"B3050"*/, v67);
    sub_1B90010(&StringLiteral_2671/*"B1410"*/, v68);
    sub_1B90010(&StringLiteral_2733/*"B331"*/, v69);
    sub_1B90010(&StringLiteral_2681/*"B200"*/, v70);
    sub_1B90010(&StringLiteral_2658/*"B090"*/, v71);
    sub_1B90010(&StringLiteral_2705/*"B2480"*/, v72);
    sub_1B90010(&StringLiteral_2750/*"B4041"*/, v73);
    sub_1B90010(&StringLiteral_2711/*"B2540"*/, v74);
    sub_1B90010(&StringLiteral_2720/*"B2840"*/, v75);
    sub_1B90010(&StringLiteral_2714/*"B2570"*/, v76);
    sub_1B90010(&StringLiteral_2783/*"B8500"*/, v77);
    sub_1B90010(&StringLiteral_2788/*"B920"*/, v78);
    sub_1B90010(&StringLiteral_2642/*"B052"*/, v79);
    sub_1B90010(&StringLiteral_2696/*"B220"*/, v80);
    sub_1B90010(&StringLiteral_2663/*"B110"*/, v81);
    sub_1B90010(&StringLiteral_2698/*"B240"*/, v82);
    sub_1B90010(&StringLiteral_2741/*"B3810"*/, v83);
    sub_1B90010(&StringLiteral_2726/*"B3030"*/, v84);
    sub_1B90010(&StringLiteral_2704/*"B2442"*/, v85);
    sub_1B90010(&StringLiteral_2655/*"B073"*/, v86);
    sub_1B90010(&StringLiteral_2729/*"B3070"*/, v87);
    sub_1B90010(&StringLiteral_2754/*"B430"*/, v88);
    sub_1B90010(&StringLiteral_2635/*"B030"*/, v89);
    sub_1B90010(&StringLiteral_2701/*"B2430"*/, v90);
    sub_1B90010(&StringLiteral_2769/*"B530"*/, v91);
    sub_1B90010(&StringLiteral_2691/*"B2130"*/, v92);
    sub_1B90010(&StringLiteral_2690/*"B2120"*/, v93);
    sub_1B90010(&StringLiteral_2756/*"B441"*/, v94);
    sub_1B90010(&StringLiteral_2730/*"B310"*/, v95);
    sub_1B90010(&StringLiteral_2661/*"B1010"*/, v96);
    sub_1B90010(&StringLiteral_2669/*"B140"*/, v97);
    sub_1B90010(&StringLiteral_2712/*"B2550"*/, v98);
    sub_1B90010(&StringLiteral_2652/*"B070"*/, v99);
    sub_1B90010(&StringLiteral_2676/*"B1610"*/, v100);
    sub_1B90010(&StringLiteral_2647/*"B061"*/, v101);
    sub_1B90010(&StringLiteral_2759/*"B490"*/, v102);
    sub_1B90010(&StringLiteral_2740/*"B380"*/, v103);
    sub_1B90010(&StringLiteral_2697/*"B230"*/, v104);
    sub_1B90010(&StringLiteral_2692/*"B2140"*/, v105);
    sub_1B90010(&StringLiteral_2679/*"B180"*/, v106);
    sub_1B90010(&StringLiteral_2777/*"B810"*/, v107);
    sub_1B90010(&StringLiteral_2634/*"B020"*/, v108);
    sub_1B90010(&StringLiteral_2742/*"B3820"*/, v109);
    sub_1B90010(&StringLiteral_2752/*"B410"*/, v110);
    sub_1B90010(&StringLiteral_2744/*"B390"*/, v111);
    sub_1B90010(&StringLiteral_2743/*"B3830"*/, v112);
    sub_1B90010(&StringLiteral_2703/*"B2441"*/, v113);
    sub_1B90010(&StringLiteral_2702/*"B2440"*/, v114);
    sub_1B90010(&StringLiteral_2747/*"B4020"*/, v115);
    sub_1B90010(&StringLiteral_2665/*"B1200"*/, v116);
    sub_1B90010(&StringLiteral_2757/*"B442"*/, v117);
    sub_1B90010(&StringLiteral_2762/*"B520"*/, v118);
    sub_1B90010(&StringLiteral_2760/*"B500"*/, v119);
    sub_1B90010(&StringLiteral_2656/*"B074"*/, v120);
    sub_1B90010(&StringLiteral_2650/*"B064"*/, v121);
    sub_1B90010(&StringLiteral_2732/*"B330"*/, v122);
    sub_1B90010(&StringLiteral_2660/*"B1000"*/, v123);
    sub_1B90010(&StringLiteral_2735/*"B341"*/, v124);
    sub_1B90010(&StringLiteral_2758/*"B480"*/, v125);
    sub_1B90010(&StringLiteral_2684/*"B2030"*/, v126);
    sub_1B90010(&StringLiteral_2755/*"B440"*/, v127);
    sub_1B90010(&StringLiteral_2722/*"B2842"*/, v128);
    sub_1B90010(&StringLiteral_2640/*"B050"*/, v129);
    sub_1B90010(&StringLiteral_2764/*"B5220"*/, v130);
    sub_1B90010(&StringLiteral_2678/*"B170"*/, v131);
    sub_1B90010(&StringLiteral_2708/*"B2510"*/, v132);
    sub_1B90010(&StringLiteral_2706/*"B250"*/, v133);
    sub_1B90010(&StringLiteral_2664/*"B120"*/, v134);
    sub_1B90010(&StringLiteral_2775/*"B800"*/, v135);
    sub_1B90010(&StringLiteral_2657/*"B080"*/, v136);
    sub_1B90010(&StringLiteral_2673/*"B150"*/, v137);
    sub_1B90010(&StringLiteral_2779/*"B820"*/, v138);
    sub_1B90010(&StringLiteral_2699/*"B2410"*/, v139);
    sub_1B90010(&StringLiteral_2721/*"B2841"*/, v140);
    sub_1B90010(&StringLiteral_2638/*"B042"*/, v141);
    sub_1B90010(&StringLiteral_2688/*"B2100"*/, v142);
    sub_1B90010(&StringLiteral_2746/*"B4010"*/, v143);
    sub_1B90010(&StringLiteral_2707/*"B2500"*/, v144);
    sub_1B90010(&StringLiteral_2662/*"B1020"*/, v145);
    sub_1B90010(&StringLiteral_2683/*"B2020"*/, v146);
    sub_1B90010(&StringLiteral_2782/*"B842"*/, v147);
    sub_1B90010(&StringLiteral_2781/*"B841"*/, v148);
    sub_1B90010(&StringLiteral_2644/*"B054"*/, v149);
    sub_1B90010(&StringLiteral_2739/*"B3430"*/, v150);
    sub_1B90010(&StringLiteral_2700/*"B2420"*/, v151);
    sub_1B90010(&StringLiteral_2715/*"B260"*/, v152);
    sub_1B90010(&StringLiteral_2773/*"B570"*/, v153);
    sub_1B90010(&StringLiteral_2763/*"B5210"*/, v154);
    sub_1B90010(&StringLiteral_2787/*"B910"*/, v155);
    sub_1B90010(&StringLiteral_2666/*"B1210"*/, v156);
    sub_1B90010(&StringLiteral_2766/*"B5250"*/, v157);
    sub_1B90010(&StringLiteral_2694/*"B2160"*/, v158);
    byte_4A6EEBA = 1;
  }
  v159 = (System_Collections_Generic_List_T__o *)sub_1B9025C(System_Collections_Generic_List_Voice_BATTLE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v159,
    (const MethodInfo_34F5974 *)Method_System_Collections_Generic_List_Voice_BATTLE___ctor__);
  if ( !v159 )
    goto LABEL_116;
  items = v159->fields._items;
  v165 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
  ++v159->fields._version;
  if ( !items )
    goto LABEL_116;
  size = v159->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v159,
      81,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v165[4] + 192LL) + 112LL));
    items = v159->fields._items;
    v165 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
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
  v167 = v159->fields._size;
  if ( (unsigned int)v167 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v159,
      82,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v165[4] + 192LL) + 112LL));
    items = v159->fields._items;
    v165 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v159->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v159->fields._size = v167 + 1;
    *((_DWORD *)items->m_Items + v167) = 82;
    ++v159->fields._version;
  }
  v168 = v159->fields._size;
  if ( (unsigned int)v168 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v159,
      230,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v165[4] + 192LL) + 112LL));
    items = v159->fields._items;
    v165 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v159->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v159->fields._size = v168 + 1;
    *((_DWORD *)items->m_Items + v168) = 230;
    ++v159->fields._version;
  }
  v169 = v159->fields._size;
  if ( (unsigned int)v169 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v159,
      231,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v165[4] + 192LL) + 112LL));
    items = v159->fields._items;
    v165 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v159->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v159->fields._size = v169 + 1;
    *((_DWORD *)items->m_Items + v169) = 231;
    ++v159->fields._version;
  }
  v170 = v159->fields._size;
  if ( (unsigned int)v170 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v159,
      285,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v165[4] + 192LL) + 112LL));
    items = v159->fields._items;
    v165 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v159->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v159->fields._size = v170 + 1;
    *((_DWORD *)items->m_Items + v170) = 285;
    ++v159->fields._version;
  }
  v171 = v159->fields._size;
  if ( (unsigned int)v171 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v159,
      286,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v165[4] + 192LL) + 112LL));
    items = v159->fields._items;
    v165 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v159->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v159->fields._size = v171 + 1;
    *((_DWORD *)items->m_Items + v171) = 286;
    ++v159->fields._version;
  }
  v172 = v159->fields._size;
  if ( (unsigned int)v172 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v159,
      287,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v165[4] + 192LL) + 112LL));
    items = v159->fields._items;
    v165 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v159->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v159->fields._size = v172 + 1;
    *((_DWORD *)items->m_Items + v172) = 287;
    ++v159->fields._version;
  }
  v173 = v159->fields._size;
  if ( (unsigned int)v173 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v159,
      288,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v165[4] + 192LL) + 112LL));
  }
  else
  {
    v159->fields._size = v173 + 1;
    *((_DWORD *)items->m_Items + v173) = 288;
  }
  Voice_TypeInfo->static_fields->deadVoiceList = (struct System_Collections_Generic_List_Voice_BATTLE__o *)v159;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)Voice_TypeInfo->static_fields, (int32_t)v159, v162, v163);
  v174 = (System_Collections_Generic_List_T__o *)sub_1B9025C(System_Collections_Generic_List_Voice_BATTLE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v174,
    (const MethodInfo_34F5974 *)Method_System_Collections_Generic_List_Voice_BATTLE___ctor__);
  if ( !v174 )
    goto LABEL_116;
  v177 = v174->fields._items;
  v178 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
  ++v174->fields._version;
  if ( !v177 )
    goto LABEL_116;
  v179 = v174->fields._size;
  if ( (unsigned int)v179 >= v177->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v174,
      31,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v178[4] + 192LL) + 112LL));
    v177 = v174->fields._items;
    v178 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v174->fields._version;
    if ( !v177 )
      goto LABEL_116;
  }
  else
  {
    v174->fields._size = v179 + 1;
    *((_DWORD *)v177->m_Items + v179) = 31;
    ++v174->fields._version;
  }
  v180 = v174->fields._size;
  if ( (unsigned int)v180 >= v177->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v174,
      32,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v178[4] + 192LL) + 112LL));
    v177 = v174->fields._items;
    v178 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v174->fields._version;
    if ( !v177 )
      goto LABEL_116;
  }
  else
  {
    v174->fields._size = v180 + 1;
    *((_DWORD *)v177->m_Items + v180) = 32;
    ++v174->fields._version;
  }
  v181 = v174->fields._size;
  if ( (unsigned int)v181 >= v177->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v174,
      223,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v178[4] + 192LL) + 112LL));
    v177 = v174->fields._items;
    v178 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v174->fields._version;
    if ( !v177 )
      goto LABEL_116;
  }
  else
  {
    v174->fields._size = v181 + 1;
    *((_DWORD *)v177->m_Items + v181) = 223;
    ++v174->fields._version;
  }
  v182 = v174->fields._size;
  if ( (unsigned int)v182 >= v177->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v174,
      224,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v178[4] + 192LL) + 112LL));
    v177 = v174->fields._items;
    v178 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v174->fields._version;
    if ( !v177 )
      goto LABEL_116;
  }
  else
  {
    v174->fields._size = v182 + 1;
    *((_DWORD *)v177->m_Items + v182) = 224;
    ++v174->fields._version;
  }
  v183 = v174->fields._size;
  if ( (unsigned int)v183 >= v177->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v174,
      243,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v178[4] + 192LL) + 112LL));
    v177 = v174->fields._items;
    v178 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v174->fields._version;
    if ( !v177 )
      goto LABEL_116;
  }
  else
  {
    v174->fields._size = v183 + 1;
    *((_DWORD *)v177->m_Items + v183) = 243;
    ++v174->fields._version;
  }
  v184 = v174->fields._size;
  if ( (unsigned int)v184 >= v177->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v174,
      244,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v178[4] + 192LL) + 112LL));
    v177 = v174->fields._items;
    v178 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v174->fields._version;
    if ( !v177 )
      goto LABEL_116;
  }
  else
  {
    v174->fields._size = v184 + 1;
    *((_DWORD *)v177->m_Items + v184) = 244;
    ++v174->fields._version;
  }
  v185 = v174->fields._size;
  if ( (unsigned int)v185 >= v177->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v174,
      254,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v178[4] + 192LL) + 112LL));
    v177 = v174->fields._items;
    v178 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v174->fields._version;
    if ( !v177 )
      goto LABEL_116;
  }
  else
  {
    v174->fields._size = v185 + 1;
    *((_DWORD *)v177->m_Items + v185) = 254;
    ++v174->fields._version;
  }
  v186 = v174->fields._size;
  if ( (unsigned int)v186 >= v177->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v174,
      255,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v178[4] + 192LL) + 112LL));
    v177 = v174->fields._items;
    v178 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v174->fields._version;
    if ( !v177 )
      goto LABEL_116;
  }
  else
  {
    v174->fields._size = v186 + 1;
    *((_DWORD *)v177->m_Items + v186) = 255;
    ++v174->fields._version;
  }
  v187 = v174->fields._size;
  if ( (unsigned int)v187 >= v177->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v174,
      256,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v178[4] + 192LL) + 112LL));
  }
  else
  {
    v174->fields._size = v187 + 1;
    *((_DWORD *)v177->m_Items + v187) = 256;
  }
  static_fields = Voice_TypeInfo->static_fields;
  static_fields->skillVoiceList = (struct System_Collections_Generic_List_Voice_BATTLE__o *)v174;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->skillVoiceList, (int32_t)v174, v175, v176);
  v189 = (System_Collections_Generic_List_T__o *)sub_1B9025C(System_Collections_Generic_List_Voice_BATTLE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v189,
    (const MethodInfo_34F5974 *)Method_System_Collections_Generic_List_Voice_BATTLE___ctor__);
  if ( !v189 )
    goto LABEL_116;
  v192 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
  p_version = &v189->fields._version;
  ++v189->fields._version;
  v194 = v189->fields._items;
  p_size = &v189->fields._size;
  v195 = v189->fields._size;
  if ( !v194 )
    goto LABEL_116;
  if ( (unsigned int)v195 >= v194->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v189,
      111,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v192[4] + 192LL) + 112LL));
    v194 = v189->fields._items;
    v192 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v189->fields._version;
    if ( !v194 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v195 + 1;
    *((_DWORD *)v194->m_Items + v195) = 111;
    ++*p_version;
  }
  v197 = *p_size;
  if ( (unsigned int)v197 >= v194->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v189,
      121,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v192[4] + 192LL) + 112LL));
    v194 = v189->fields._items;
    v192 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v189->fields._version;
    if ( !v194 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v197 + 1;
    *((_DWORD *)v194->m_Items + v197) = 121;
    ++*p_version;
  }
  v198 = *p_size;
  if ( (unsigned int)v198 >= v194->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v189,
      131,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v192[4] + 192LL) + 112LL));
    v194 = v189->fields._items;
    v192 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v189->fields._version;
    if ( !v194 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v198 + 1;
    *((_DWORD *)v194->m_Items + v198) = 131;
    ++*p_version;
  }
  v199 = *p_size;
  if ( (unsigned int)v199 >= v194->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v189,
      141,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v192[4] + 192LL) + 112LL));
    v194 = v189->fields._items;
    v192 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v189->fields._version;
    if ( !v194 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v199 + 1;
    *((_DWORD *)v194->m_Items + v199) = 141;
    ++*p_version;
  }
  v200 = *p_size;
  if ( (unsigned int)v200 >= v194->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v189,
      151,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v192[4] + 192LL) + 112LL));
    v194 = v189->fields._items;
    v192 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v189->fields._version;
    if ( !v194 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v200 + 1;
    *((_DWORD *)v194->m_Items + v200) = 151;
    ++*p_version;
  }
  v201 = *p_size;
  if ( (unsigned int)v201 >= v194->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v189,
      161,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v192[4] + 192LL) + 112LL));
    v194 = v189->fields._items;
    v192 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v189->fields._version;
    if ( !v194 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v201 + 1;
    *((_DWORD *)v194->m_Items + v201) = 161;
    ++*p_version;
  }
  v202 = *p_size;
  if ( (unsigned int)v202 >= v194->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v189,
      171,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v192[4] + 192LL) + 112LL));
    v194 = v189->fields._items;
    v192 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v189->fields._version;
    if ( !v194 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v202 + 1;
    *((_DWORD *)v194->m_Items + v202) = 171;
    ++*p_version;
  }
  v203 = *p_size;
  if ( (unsigned int)v203 >= v194->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v189,
      181,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v192[4] + 192LL) + 112LL));
    v194 = v189->fields._items;
    v192 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v189->fields._version;
    if ( !v194 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v203 + 1;
    *((_DWORD *)v194->m_Items + v203) = 181;
    ++*p_version;
  }
  v204 = *p_size;
  if ( (unsigned int)v204 >= v194->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v189,
      191,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v192[4] + 192LL) + 112LL));
    v194 = v189->fields._items;
    v192 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v189->fields._version;
    if ( !v194 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v204 + 1;
    *((_DWORD *)v194->m_Items + v204) = 191;
    ++*p_version;
  }
  v205 = *p_size;
  if ( (unsigned int)v205 >= v194->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v189,
      1001,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v192[4] + 192LL) + 112LL));
    v194 = v189->fields._items;
    v192 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v189->fields._version;
    if ( !v194 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v205 + 1;
    *((_DWORD *)v194->m_Items + v205) = 1001;
    ++*p_version;
  }
  v206 = *p_size;
  if ( (unsigned int)v206 >= v194->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v189,
      1011,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v192[4] + 192LL) + 112LL));
    v194 = v189->fields._items;
    v192 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v189->fields._version;
    if ( !v194 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v206 + 1;
    *((_DWORD *)v194->m_Items + v206) = 1011;
    ++*p_version;
  }
  v207 = *p_size;
  if ( (unsigned int)v207 >= v194->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v189,
      1021,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v192[4] + 192LL) + 112LL));
    v194 = v189->fields._items;
    v192 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v189->fields._version;
    if ( !v194 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v207 + 1;
    *((_DWORD *)v194->m_Items + v207) = 1021;
    ++*p_version;
  }
  v208 = *p_size;
  if ( (unsigned int)v208 >= v194->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v189,
      1031,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v192[4] + 192LL) + 112LL));
    v194 = v189->fields._items;
    v192 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v189->fields._version;
    if ( !v194 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v208 + 1;
    *((_DWORD *)v194->m_Items + v208) = 1031;
    ++*p_version;
  }
  v209 = *p_size;
  if ( (unsigned int)v209 >= v194->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v189,
      1041,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v192[4] + 192LL) + 112LL));
    v194 = v189->fields._items;
    v192 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v189->fields._version;
    if ( !v194 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v209 + 1;
    *((_DWORD *)v194->m_Items + v209) = 1041;
    ++*p_version;
  }
  v210 = *p_size;
  if ( (unsigned int)v210 >= v194->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v189,
      1051,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v192[4] + 192LL) + 112LL));
    v194 = v189->fields._items;
    v192 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v189->fields._version;
    if ( !v194 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v210 + 1;
    *((_DWORD *)v194->m_Items + v210) = 1051;
    ++*p_version;
  }
  v211 = *p_size;
  if ( (unsigned int)v211 >= v194->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v189,
      1061,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v192[4] + 192LL) + 112LL));
    v194 = v189->fields._items;
    v192 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v189->fields._version;
    if ( !v194 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v211 + 1;
    *((_DWORD *)v194->m_Items + v211) = 1061;
    ++*p_version;
  }
  v212 = *p_size;
  if ( (unsigned int)v212 >= v194->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v189,
      1071,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v192[4] + 192LL) + 112LL));
    v194 = v189->fields._items;
    v192 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v189->fields._version;
    if ( !v194 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v212 + 1;
    *((_DWORD *)v194->m_Items + v212) = 1071;
    ++*p_version;
  }
  v213 = *p_size;
  if ( (unsigned int)v213 >= v194->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v189,
      1081,
      *(const MethodInfo_34F61C8 **)(*(_QWORD *)(v192[4] + 192LL) + 112LL));
  }
  else
  {
    *p_size = v213 + 1;
    *((_DWORD *)v194->m_Items + v213) = 1081;
  }
  v214 = Voice_TypeInfo->static_fields;
  v214->firstNpVoiceList = (struct System_Collections_Generic_List_Voice_BATTLE__o *)v189;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v214->firstNpVoiceList, (int32_t)v189, v190, v191);
  v215 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B9025C(System_Collections_Generic_Dictionary_Voice_BATTLE__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v215,
    (const MethodInfo_31AB4E0 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string___ctor__);
  if ( !v215 )
LABEL_116:
    sub_1B9026C(v160, v161);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    0,
    0LL,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    10,
    (Il2CppObject *)StringLiteral_2633/*"B010"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    11,
    (Il2CppObject *)StringLiteral_2634/*"B020"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    12,
    (Il2CppObject *)StringLiteral_2635/*"B030"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    20,
    (Il2CppObject *)StringLiteral_2636/*"B040"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    21,
    (Il2CppObject *)StringLiteral_2637/*"B041"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    22,
    (Il2CppObject *)StringLiteral_2638/*"B042"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    111,
    (Il2CppObject *)StringLiteral_2640/*"B050"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    112,
    (Il2CppObject *)StringLiteral_2641/*"B051"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    113,
    (Il2CppObject *)StringLiteral_2642/*"B052"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    114,
    (Il2CppObject *)StringLiteral_2643/*"B053"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    115,
    (Il2CppObject *)StringLiteral_2644/*"B054"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    121,
    (Il2CppObject *)StringLiteral_2646/*"B060"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    122,
    (Il2CppObject *)StringLiteral_2647/*"B061"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    123,
    (Il2CppObject *)StringLiteral_2648/*"B062"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    124,
    (Il2CppObject *)StringLiteral_2649/*"B063"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    125,
    (Il2CppObject *)StringLiteral_2650/*"B064"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    131,
    (Il2CppObject *)StringLiteral_2652/*"B070"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    132,
    (Il2CppObject *)StringLiteral_2653/*"B071"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    133,
    (Il2CppObject *)StringLiteral_2654/*"B072"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    134,
    (Il2CppObject *)StringLiteral_2655/*"B073"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    135,
    (Il2CppObject *)StringLiteral_2656/*"B074"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    141,
    (Il2CppObject *)StringLiteral_2775/*"B800"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    151,
    (Il2CppObject *)StringLiteral_2777/*"B810"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    161,
    (Il2CppObject *)StringLiteral_2779/*"B820"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    171,
    (Il2CppObject *)StringLiteral_2675/*"B1600"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    181,
    (Il2CppObject *)StringLiteral_2676/*"B1610"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    191,
    (Il2CppObject *)StringLiteral_2677/*"B1620"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    1001,
    (Il2CppObject *)StringLiteral_2660/*"B1000"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    31,
    (Il2CppObject *)StringLiteral_2657/*"B080"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    32,
    (Il2CppObject *)StringLiteral_2658/*"B090"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    41,
    (Il2CppObject *)StringLiteral_2659/*"B100"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    42,
    (Il2CppObject *)StringLiteral_2663/*"B110"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    51,
    (Il2CppObject *)StringLiteral_2664/*"B120"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    52,
    (Il2CppObject *)StringLiteral_2668/*"B130"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    61,
    (Il2CppObject *)StringLiteral_2669/*"B140"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    71,
    (Il2CppObject *)StringLiteral_2673/*"B150"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    81,
    (Il2CppObject *)StringLiteral_2674/*"B160"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    82,
    (Il2CppObject *)StringLiteral_2678/*"B170"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    201,
    (Il2CppObject *)StringLiteral_2679/*"B180"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    202,
    (Il2CppObject *)StringLiteral_2680/*"B190"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    203,
    (Il2CppObject *)StringLiteral_2681/*"B200"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    211,
    (Il2CppObject *)StringLiteral_2687/*"B210"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    212,
    (Il2CppObject *)StringLiteral_2696/*"B220"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    213,
    (Il2CppObject *)StringLiteral_2697/*"B230"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    214,
    (Il2CppObject *)StringLiteral_2723/*"B300"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    215,
    (Il2CppObject *)StringLiteral_2723/*"B300"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    216,
    (Il2CppObject *)StringLiteral_2706/*"B250"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    217,
    (Il2CppObject *)StringLiteral_2752/*"B410"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    218,
    (Il2CppObject *)StringLiteral_2753/*"B420"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    219,
    (Il2CppObject *)StringLiteral_2754/*"B430"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    220,
    (Il2CppObject *)StringLiteral_2755/*"B440"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    221,
    (Il2CppObject *)StringLiteral_2756/*"B441"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    222,
    (Il2CppObject *)StringLiteral_2757/*"B442"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    223,
    (Il2CppObject *)StringLiteral_2758/*"B480"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    224,
    (Il2CppObject *)StringLiteral_2759/*"B490"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    225,
    (Il2CppObject *)StringLiteral_2760/*"B500"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    226,
    (Il2CppObject *)StringLiteral_2761/*"B510"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    227,
    (Il2CppObject *)StringLiteral_2762/*"B520"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    228,
    (Il2CppObject *)StringLiteral_2769/*"B530"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    229,
    (Il2CppObject *)StringLiteral_2770/*"B540"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    230,
    (Il2CppObject *)StringLiteral_2772/*"B560"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    231,
    (Il2CppObject *)StringLiteral_2773/*"B570"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    232,
    (Il2CppObject *)StringLiteral_2730/*"B310"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    233,
    (Il2CppObject *)StringLiteral_2731/*"B320"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    234,
    (Il2CppObject *)StringLiteral_2732/*"B330"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    235,
    (Il2CppObject *)StringLiteral_2733/*"B331"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    236,
    (Il2CppObject *)StringLiteral_2734/*"B340"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    237,
    (Il2CppObject *)StringLiteral_2735/*"B341"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    238,
    (Il2CppObject *)StringLiteral_2737/*"B342"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    239,
    (Il2CppObject *)StringLiteral_2771/*"B550"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    240,
    (Il2CppObject *)StringLiteral_2787/*"B910"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    241,
    (Il2CppObject *)StringLiteral_2788/*"B920"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    242,
    (Il2CppObject *)StringLiteral_2789/*"B930"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    243,
    (Il2CppObject *)StringLiteral_2785/*"B880"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    244,
    (Il2CppObject *)StringLiteral_2786/*"B890"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    245,
    (Il2CppObject *)StringLiteral_2740/*"B380"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    246,
    (Il2CppObject *)StringLiteral_2744/*"B390"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    247,
    (Il2CppObject *)StringLiteral_2745/*"B400"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    248,
    (Il2CppObject *)StringLiteral_2780/*"B840"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    249,
    (Il2CppObject *)StringLiteral_2781/*"B841"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    250,
    (Il2CppObject *)StringLiteral_2782/*"B842"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    251,
    (Il2CppObject *)StringLiteral_2715/*"B260"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    252,
    (Il2CppObject *)StringLiteral_2698/*"B240"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    253,
    (Il2CppObject *)StringLiteral_2716/*"B270"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    254,
    (Il2CppObject *)StringLiteral_2685/*"B2080"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    255,
    (Il2CppObject *)StringLiteral_2686/*"B2090"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    256,
    (Il2CppObject *)StringLiteral_2705/*"B2480"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    257,
    (Il2CppObject *)StringLiteral_2702/*"B2440"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    258,
    (Il2CppObject *)StringLiteral_2703/*"B2441"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    259,
    (Il2CppObject *)StringLiteral_2704/*"B2442"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    260,
    (Il2CppObject *)StringLiteral_2720/*"B2840"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    261,
    (Il2CppObject *)StringLiteral_2721/*"B2841"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    262,
    (Il2CppObject *)StringLiteral_2722/*"B2842"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    263,
    (Il2CppObject *)StringLiteral_2749/*"B4040"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    264,
    (Il2CppObject *)StringLiteral_2750/*"B4041"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    265,
    (Il2CppObject *)StringLiteral_2751/*"B4042"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    266,
    (Il2CppObject *)StringLiteral_2682/*"B2010"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    267,
    (Il2CppObject *)StringLiteral_2683/*"B2020"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    268,
    (Il2CppObject *)StringLiteral_2684/*"B2030"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    269,
    (Il2CppObject *)StringLiteral_2699/*"B2410"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    270,
    (Il2CppObject *)StringLiteral_2700/*"B2420"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    271,
    (Il2CppObject *)StringLiteral_2701/*"B2430"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    272,
    (Il2CppObject *)StringLiteral_2717/*"B2810"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    273,
    (Il2CppObject *)StringLiteral_2718/*"B2820"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    274,
    (Il2CppObject *)StringLiteral_2719/*"B2830"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    275,
    (Il2CppObject *)StringLiteral_2688/*"B2100"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    276,
    (Il2CppObject *)StringLiteral_2689/*"B2110"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    277,
    (Il2CppObject *)StringLiteral_2707/*"B2500"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    278,
    (Il2CppObject *)StringLiteral_2708/*"B2510"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    279,
    (Il2CppObject *)StringLiteral_2724/*"B3010"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    280,
    (Il2CppObject *)StringLiteral_2725/*"B3020"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    281,
    (Il2CppObject *)StringLiteral_2726/*"B3030"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    282,
    (Il2CppObject *)StringLiteral_2736/*"B3410"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    283,
    (Il2CppObject *)StringLiteral_2738/*"B3420"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    284,
    (Il2CppObject *)StringLiteral_2739/*"B3430"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    285,
    (Il2CppObject *)StringLiteral_2694/*"B2160"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    286,
    (Il2CppObject *)StringLiteral_2695/*"B2170"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    287,
    (Il2CppObject *)StringLiteral_2713/*"B2560"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    288,
    (Il2CppObject *)StringLiteral_2714/*"B2570"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    289,
    (Il2CppObject *)StringLiteral_2690/*"B2120"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    290,
    (Il2CppObject *)StringLiteral_2691/*"B2130"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    291,
    (Il2CppObject *)StringLiteral_2709/*"B2520"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    292,
    (Il2CppObject *)StringLiteral_2710/*"B2530"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    293,
    (Il2CppObject *)StringLiteral_2692/*"B2140"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    294,
    (Il2CppObject *)StringLiteral_2711/*"B2540"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    295,
    (Il2CppObject *)StringLiteral_2693/*"B2150"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    296,
    (Il2CppObject *)StringLiteral_2712/*"B2550"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    297,
    (Il2CppObject *)StringLiteral_2727/*"B3050"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    298,
    (Il2CppObject *)StringLiteral_2728/*"B3060"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    299,
    (Il2CppObject *)StringLiteral_2729/*"B3070"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    300,
    (Il2CppObject *)StringLiteral_2763/*"B5210"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    301,
    (Il2CppObject *)StringLiteral_2764/*"B5220"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    302,
    (Il2CppObject *)StringLiteral_2765/*"B5230"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    303,
    (Il2CppObject *)StringLiteral_2766/*"B5250"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    304,
    (Il2CppObject *)StringLiteral_2767/*"B5260"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    305,
    (Il2CppObject *)StringLiteral_2768/*"B5270"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    306,
    (Il2CppObject *)StringLiteral_2783/*"B8500"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    307,
    (Il2CppObject *)StringLiteral_2784/*"B8510"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    308,
    (Il2CppObject *)StringLiteral_2741/*"B3810"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    309,
    (Il2CppObject *)StringLiteral_2742/*"B3820"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    310,
    (Il2CppObject *)StringLiteral_2743/*"B3830"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    311,
    (Il2CppObject *)StringLiteral_2746/*"B4010"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    312,
    (Il2CppObject *)StringLiteral_2747/*"B4020"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    313,
    (Il2CppObject *)StringLiteral_2748/*"B4030"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    1011,
    (Il2CppObject *)StringLiteral_2661/*"B1010"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    1021,
    (Il2CppObject *)StringLiteral_2662/*"B1020"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    1031,
    (Il2CppObject *)StringLiteral_2665/*"B1200"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    1041,
    (Il2CppObject *)StringLiteral_2666/*"B1210"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    1051,
    (Il2CppObject *)StringLiteral_2667/*"B1220"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    1061,
    (Il2CppObject *)StringLiteral_2670/*"B1400"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    1071,
    (Il2CppObject *)StringLiteral_2671/*"B1410"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v215,
    1081,
    (Il2CppObject *)StringLiteral_2672/*"B1420"*/,
    (const MethodInfo_31ABEB4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  v216 = Voice_TypeInfo->static_fields;
  v216->filelist = (struct System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v215;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v216->filelist, (int32_t)v215, v217, v218);
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
  int32_t v11; // w2
  int32_t v12; // w3
  Voice_c *v13; // x0
  System_Collections_Generic_IEnumerable_TSource__o *filelist; // x19
  System_Func_T__TResult__o *v15; // x21

  if ( (byte_4A6EEB8 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_Voice_BATTLE__string____, method);
    sub_1B90010(&System_Func_KeyValuePair_Voice_BATTLE__string___bool__TypeInfo, v3);
    sub_1B90010(&Method_System_Collections_Generic_KeyValuePair_Voice_BATTLE__string__get_Key__, v4);
    sub_1B90010(&Method_Voice___c__DisplayClass6_0__GetTypeByFileName_b__0__, v5);
    sub_1B90010(&Voice___c__DisplayClass6_0_TypeInfo, v6);
    sub_1B90010(&Voice_TypeInfo, v7);
    byte_4A6EEB8 = 1;
  }
  v8 = sub_1B9025C(Voice___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1B9026C(v9, v10);
  *(_QWORD *)(v8 + 16) = fileName;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)fileName, v11, v12);
  v13 = Voice_TypeInfo;
  if ( !Voice_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
    v13 = Voice_TypeInfo;
  }
  filelist = (System_Collections_Generic_IEnumerable_TSource__o *)v13->static_fields->filelist;
  v15 = (System_Func_T__TResult__o *)sub_1B9025C(System_Func_KeyValuePair_Voice_BATTLE__string___bool__TypeInfo);
  System_Func_KeyValuePair_Int32Enum__object___bool____ctor(
    v15,
    (Il2CppObject *)v8,
    Method_Voice___c__DisplayClass6_0__GetTypeByFileName_b__0__,
    0LL);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_Int32Enum__object__(
           filelist,
           (System_Func_TSource__bool__o *)v15,
           (const MethodInfo_2EB2BF0 *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_Voice_BATTLE__string____).fields.key;
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

  if ( (byte_4A6EEB9 & 1) == 0 )
  {
    sub_1B90010(&Method_BasicHelper_Any_Voice_BATTLE___, method);
    sub_1B90010(&System_Func_Voice_BATTLE__bool__TypeInfo, v3);
    sub_1B90010(&Method_Voice___c__DisplayClass7_0__IsDeadVoice_b__0__, v4);
    sub_1B90010(&Voice___c__DisplayClass7_0_TypeInfo, v5);
    sub_1B90010(&Voice_TypeInfo, v6);
    byte_4A6EEB9 = 1;
  }
  v7 = sub_1B9025C(Voice___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1B9026C(v8, v9);
  *(_DWORD *)(v7 + 16) = voiceBattleType;
  v10 = Voice_TypeInfo;
  if ( !Voice_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
    v10 = Voice_TypeInfo;
  }
  deadVoiceList = (System_Collections_Generic_List_T__o *)v10->static_fields->deadVoiceList;
  v12 = (System_Func_T__TResult__o *)sub_1B9025C(System_Func_Voice_BATTLE__bool__TypeInfo);
  System_Func_Int32Enum__bool____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_Voice___c__DisplayClass7_0__IsDeadVoice_b__0__,
    0LL);
  return BasicHelper__Any_Int32Enum_(
           deadVoiceList,
           (System_Func_T__bool__o *)v12,
           (const MethodInfo_2E79400 *)Method_BasicHelper_Any_Voice_BATTLE___);
}


System_String_o *__fastcall Voice__getFileName(int32_t type, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Voice_c *v5; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *filelist; // x0
  Voice_c *v7; // x0

  if ( (byte_4A6EEB7 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__ContainsKey__, method);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__get_Item__, v3);
    sub_1B90010(&Voice_TypeInfo, v4);
    byte_4A6EEB7 = 1;
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
         (const MethodInfo_31AC0A8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__ContainsKey__) )
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
                                  (const MethodInfo_31ABE14 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__get_Item__);
LABEL_12:
    sub_1B9026C(filelist, method);
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
  if ( (byte_4A6EEBB & 1) == 0 )
  {
    sub_1B90010(
      &Method_System_Collections_Generic_KeyValuePair_Voice_BATTLE__string__get_Value__,
      *(_QWORD *)&x.fields.key);
    byte_4A6EEBB = 1;
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