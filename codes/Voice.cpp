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
  __int64 v159; // x1
  __int64 v160; // x1
  __int64 v161; // x1
  System_Collections_Generic_List_T__o *v162; // x19
  __int64 v163; // x0
  __int64 v164; // x1
  int32_t v165; // w2
  const MethodInfo *v166; // x3
  struct System_Object_array *items; // x9
  _QWORD *v168; // x8
  __int64 size; // x10
  __int64 v170; // x10
  __int64 v171; // x10
  __int64 v172; // x10
  __int64 v173; // x10
  __int64 v174; // x10
  __int64 v175; // x10
  __int64 v176; // x10
  System_Collections_Generic_List_T__o *v177; // x19
  int32_t v178; // w2
  const MethodInfo *v179; // x3
  struct System_Object_array *v180; // x9
  _QWORD *v181; // x8
  __int64 v182; // x10
  __int64 v183; // x10
  __int64 v184; // x10
  __int64 v185; // x10
  __int64 v186; // x10
  __int64 v187; // x10
  __int64 v188; // x10
  __int64 v189; // x10
  __int64 v190; // x10
  struct Voice_StaticFields *static_fields; // x0
  System_Collections_Generic_List_T__o *v192; // x19
  int32_t v193; // w2
  const MethodInfo *v194; // x3
  _QWORD *v195; // x8
  int32_t *p_version; // x21
  struct System_Object_array *v197; // x9
  __int64 v198; // x10
  int32_t *p_size; // x20
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
  __int64 v214; // x10
  __int64 v215; // x10
  __int64 v216; // x10
  struct Voice_StaticFields *v217; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *v218; // x19
  struct Voice_StaticFields *v219; // x0
  int32_t v220; // w2
  const MethodInfo *v221; // x3

  if ( (byte_4B00FA7 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__, v1);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string___ctor__, v2);
    sub_1BC3008(&System_Collections_Generic_Dictionary_Voice_BATTLE__string__TypeInfo, v3);
    sub_1BC3008(&Method_System_Collections_Generic_List_Voice_BATTLE__Add__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_Voice_BATTLE___ctor__, v5);
    sub_1BC3008(&System_Collections_Generic_List_Voice_BATTLE__TypeInfo, v6);
    sub_1BC3008(&Voice_TypeInfo, v7);
    sub_1BC3008(&StringLiteral_2579/*"B2820"*/, v8);
    sub_1BC3008(&StringLiteral_2507/*"B060"*/, v9);
    sub_1BC3008(&StringLiteral_2502/*"B051"*/, v10);
    sub_1BC3008(&StringLiteral_2635/*"B550"*/, v11);
    sub_1BC3008(&StringLiteral_2615/*"B4042"*/, v12);
    sub_1BC3008(&StringLiteral_2636/*"B560"*/, v13);
    sub_1BC3008(&StringLiteral_2598/*"B342"*/, v14);
    sub_1BC3008(&StringLiteral_2649/*"B880"*/, v15);
    sub_1BC3008(&StringLiteral_2577/*"B270"*/, v16);
    sub_1BC3008(&StringLiteral_2509/*"B062"*/, v17);
    sub_1BC3008(&StringLiteral_2541/*"B190"*/, v18);
    sub_1BC3008(&StringLiteral_2538/*"B1620"*/, v19);
    sub_1BC3008(&StringLiteral_2533/*"B1420"*/, v20);
    sub_1BC3008(&StringLiteral_2580/*"B2830"*/, v21);
    sub_1BC3008(&StringLiteral_2504/*"B053"*/, v22);
    sub_1BC3008(&StringLiteral_2546/*"B2080"*/, v23);
    sub_1BC3008(&StringLiteral_2536/*"B1600"*/, v24);
    sub_1BC3008(&StringLiteral_2653/*"B930"*/, v25);
    sub_1BC3008(&StringLiteral_2629/*"B5230"*/, v26);
    sub_1BC3008(&StringLiteral_2497/*"B040"*/, v27);
    sub_1BC3008(&StringLiteral_2634/*"B540"*/, v28);
    sub_1BC3008(&StringLiteral_2602/*"B360"*/, v29);
    sub_1BC3008(&StringLiteral_2609/*"B400"*/, v30);
    sub_1BC3008(&StringLiteral_2494/*"B010"*/, v31);
    sub_1BC3008(&StringLiteral_2535/*"B160"*/, v32);
    sub_1BC3008(&StringLiteral_2592/*"B320"*/, v33);
    sub_1BC3008(&StringLiteral_2574/*"B2560"*/, v34);
    sub_1BC3008(&StringLiteral_2613/*"B4040"*/, v35);
    sub_1BC3008(&StringLiteral_2548/*"B210"*/, v36);
    sub_1BC3008(&StringLiteral_2644/*"B840"*/, v37);
    sub_1BC3008(&StringLiteral_2529/*"B130"*/, v38);
    sub_1BC3008(&StringLiteral_2595/*"B340"*/, v39);
    sub_1BC3008(&StringLiteral_2631/*"B5260"*/, v40);
    sub_1BC3008(&StringLiteral_2514/*"B071"*/, v41);
    sub_1BC3008(&StringLiteral_2556/*"B2170"*/, v42);
    sub_1BC3008(&StringLiteral_2571/*"B2530"*/, v43);
    sub_1BC3008(&StringLiteral_2612/*"B4030"*/, v44);
    sub_1BC3008(&StringLiteral_2648/*"B8510"*/, v45);
    sub_1BC3008(&StringLiteral_2528/*"B1220"*/, v46);
    sub_1BC3008(&StringLiteral_2570/*"B2520"*/, v47);
    sub_1BC3008(&StringLiteral_2554/*"B2150"*/, v48);
    sub_1BC3008(&StringLiteral_2632/*"B5270"*/, v49);
    sub_1BC3008(&StringLiteral_2584/*"B300"*/, v50);
    sub_1BC3008(&StringLiteral_2586/*"B3020"*/, v51);
    sub_1BC3008(&StringLiteral_2498/*"B041"*/, v52);
    sub_1BC3008(&StringLiteral_2578/*"B2810"*/, v53);
    sub_1BC3008(&StringLiteral_2597/*"B3410"*/, v54);
    sub_1BC3008(&StringLiteral_2585/*"B3010"*/, v55);
    sub_1BC3008(&StringLiteral_2543/*"B2010"*/, v56);
    sub_1BC3008(&StringLiteral_2520/*"B100"*/, v57);
    sub_1BC3008(&StringLiteral_2550/*"B2110"*/, v58);
    sub_1BC3008(&StringLiteral_2617/*"B420"*/, v59);
    sub_1BC3008(&StringLiteral_2625/*"B510"*/, v60);
    sub_1BC3008(&StringLiteral_2510/*"B063"*/, v61);
    sub_1BC3008(&StringLiteral_2599/*"B3420"*/, v62);
    sub_1BC3008(&StringLiteral_2650/*"B890"*/, v63);
    sub_1BC3008(&StringLiteral_2589/*"B3060"*/, v64);
    sub_1BC3008(&StringLiteral_2547/*"B2090"*/, v65);
    sub_1BC3008(&StringLiteral_2531/*"B1400"*/, v66);
    sub_1BC3008(&StringLiteral_2515/*"B072"*/, v67);
    sub_1BC3008(&StringLiteral_2588/*"B3050"*/, v68);
    sub_1BC3008(&StringLiteral_2532/*"B1410"*/, v69);
    sub_1BC3008(&StringLiteral_2594/*"B331"*/, v70);
    sub_1BC3008(&StringLiteral_2542/*"B200"*/, v71);
    sub_1BC3008(&StringLiteral_2519/*"B090"*/, v72);
    sub_1BC3008(&StringLiteral_2566/*"B2480"*/, v73);
    sub_1BC3008(&StringLiteral_2614/*"B4041"*/, v74);
    sub_1BC3008(&StringLiteral_2572/*"B2540"*/, v75);
    sub_1BC3008(&StringLiteral_2581/*"B2840"*/, v76);
    sub_1BC3008(&StringLiteral_2575/*"B2570"*/, v77);
    sub_1BC3008(&StringLiteral_2647/*"B8500"*/, v78);
    sub_1BC3008(&StringLiteral_2652/*"B920"*/, v79);
    sub_1BC3008(&StringLiteral_2503/*"B052"*/, v80);
    sub_1BC3008(&StringLiteral_2557/*"B220"*/, v81);
    sub_1BC3008(&StringLiteral_2524/*"B110"*/, v82);
    sub_1BC3008(&StringLiteral_2559/*"B240"*/, v83);
    sub_1BC3008(&StringLiteral_2605/*"B3810"*/, v84);
    sub_1BC3008(&StringLiteral_2587/*"B3030"*/, v85);
    sub_1BC3008(&StringLiteral_2565/*"B2442"*/, v86);
    sub_1BC3008(&StringLiteral_2516/*"B073"*/, v87);
    sub_1BC3008(&StringLiteral_2590/*"B3070"*/, v88);
    sub_1BC3008(&StringLiteral_2603/*"B370"*/, v89);
    sub_1BC3008(&StringLiteral_2618/*"B430"*/, v90);
    sub_1BC3008(&StringLiteral_2496/*"B030"*/, v91);
    sub_1BC3008(&StringLiteral_2562/*"B2430"*/, v92);
    sub_1BC3008(&StringLiteral_2633/*"B530"*/, v93);
    sub_1BC3008(&StringLiteral_2552/*"B2130"*/, v94);
    sub_1BC3008(&StringLiteral_2551/*"B2120"*/, v95);
    sub_1BC3008(&StringLiteral_2620/*"B441"*/, v96);
    sub_1BC3008(&StringLiteral_2591/*"B310"*/, v97);
    sub_1BC3008(&StringLiteral_2522/*"B1010"*/, v98);
    sub_1BC3008(&StringLiteral_2530/*"B140"*/, v99);
    sub_1BC3008(&StringLiteral_2573/*"B2550"*/, v100);
    sub_1BC3008(&StringLiteral_2513/*"B070"*/, v101);
    sub_1BC3008(&StringLiteral_2537/*"B1610"*/, v102);
    sub_1BC3008(&StringLiteral_2508/*"B061"*/, v103);
    sub_1BC3008(&StringLiteral_2623/*"B490"*/, v104);
    sub_1BC3008(&StringLiteral_2604/*"B380"*/, v105);
    sub_1BC3008(&StringLiteral_2558/*"B230"*/, v106);
    sub_1BC3008(&StringLiteral_2553/*"B2140"*/, v107);
    sub_1BC3008(&StringLiteral_2540/*"B180"*/, v108);
    sub_1BC3008(&StringLiteral_2641/*"B810"*/, v109);
    sub_1BC3008(&StringLiteral_2495/*"B020"*/, v110);
    sub_1BC3008(&StringLiteral_2606/*"B3820"*/, v111);
    sub_1BC3008(&StringLiteral_2616/*"B410"*/, v112);
    sub_1BC3008(&StringLiteral_2608/*"B390"*/, v113);
    sub_1BC3008(&StringLiteral_2607/*"B3830"*/, v114);
    sub_1BC3008(&StringLiteral_2564/*"B2441"*/, v115);
    sub_1BC3008(&StringLiteral_2563/*"B2440"*/, v116);
    sub_1BC3008(&StringLiteral_2611/*"B4020"*/, v117);
    sub_1BC3008(&StringLiteral_2526/*"B1200"*/, v118);
    sub_1BC3008(&StringLiteral_2621/*"B442"*/, v119);
    sub_1BC3008(&StringLiteral_2626/*"B520"*/, v120);
    sub_1BC3008(&StringLiteral_2624/*"B500"*/, v121);
    sub_1BC3008(&StringLiteral_2517/*"B074"*/, v122);
    sub_1BC3008(&StringLiteral_2511/*"B064"*/, v123);
    sub_1BC3008(&StringLiteral_2593/*"B330"*/, v124);
    sub_1BC3008(&StringLiteral_2521/*"B1000"*/, v125);
    sub_1BC3008(&StringLiteral_2596/*"B341"*/, v126);
    sub_1BC3008(&StringLiteral_2622/*"B480"*/, v127);
    sub_1BC3008(&StringLiteral_2545/*"B2030"*/, v128);
    sub_1BC3008(&StringLiteral_2619/*"B440"*/, v129);
    sub_1BC3008(&StringLiteral_2583/*"B2842"*/, v130);
    sub_1BC3008(&StringLiteral_2501/*"B050"*/, v131);
    sub_1BC3008(&StringLiteral_2628/*"B5220"*/, v132);
    sub_1BC3008(&StringLiteral_2539/*"B170"*/, v133);
    sub_1BC3008(&StringLiteral_2569/*"B2510"*/, v134);
    sub_1BC3008(&StringLiteral_2567/*"B250"*/, v135);
    sub_1BC3008(&StringLiteral_2525/*"B120"*/, v136);
    sub_1BC3008(&StringLiteral_2639/*"B800"*/, v137);
    sub_1BC3008(&StringLiteral_2518/*"B080"*/, v138);
    sub_1BC3008(&StringLiteral_2534/*"B150"*/, v139);
    sub_1BC3008(&StringLiteral_2643/*"B820"*/, v140);
    sub_1BC3008(&StringLiteral_2560/*"B2410"*/, v141);
    sub_1BC3008(&StringLiteral_2582/*"B2841"*/, v142);
    sub_1BC3008(&StringLiteral_2499/*"B042"*/, v143);
    sub_1BC3008(&StringLiteral_2549/*"B2100"*/, v144);
    sub_1BC3008(&StringLiteral_2610/*"B4010"*/, v145);
    sub_1BC3008(&StringLiteral_2568/*"B2500"*/, v146);
    sub_1BC3008(&StringLiteral_2523/*"B1020"*/, v147);
    sub_1BC3008(&StringLiteral_2544/*"B2020"*/, v148);
    sub_1BC3008(&StringLiteral_2646/*"B842"*/, v149);
    sub_1BC3008(&StringLiteral_2645/*"B841"*/, v150);
    sub_1BC3008(&StringLiteral_2505/*"B054"*/, v151);
    sub_1BC3008(&StringLiteral_2600/*"B3430"*/, v152);
    sub_1BC3008(&StringLiteral_2561/*"B2420"*/, v153);
    sub_1BC3008(&StringLiteral_2576/*"B260"*/, v154);
    sub_1BC3008(&StringLiteral_2601/*"B350"*/, v155);
    sub_1BC3008(&StringLiteral_2637/*"B570"*/, v156);
    sub_1BC3008(&StringLiteral_2627/*"B5210"*/, v157);
    sub_1BC3008(&StringLiteral_2651/*"B910"*/, v158);
    sub_1BC3008(&StringLiteral_2527/*"B1210"*/, v159);
    sub_1BC3008(&StringLiteral_2630/*"B5250"*/, v160);
    sub_1BC3008(&StringLiteral_2555/*"B2160"*/, v161);
    byte_4B00FA7 = 1;
  }
  v162 = (System_Collections_Generic_List_T__o *)sub_1BC3254(System_Collections_Generic_List_Voice_BATTLE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v162,
    (const MethodInfo_3685DF4 *)Method_System_Collections_Generic_List_Voice_BATTLE___ctor__);
  if ( !v162 )
    goto LABEL_116;
  items = v162->fields._items;
  v168 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
  ++v162->fields._version;
  if ( !items )
    goto LABEL_116;
  size = v162->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v162,
      81,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v168[4] + 192LL) + 112LL));
    items = v162->fields._items;
    v168 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v162->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v162->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 81;
    ++v162->fields._version;
  }
  v170 = v162->fields._size;
  if ( (unsigned int)v170 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v162,
      82,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v168[4] + 192LL) + 112LL));
    items = v162->fields._items;
    v168 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v162->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v162->fields._size = v170 + 1;
    *((_DWORD *)items->m_Items + v170) = 82;
    ++v162->fields._version;
  }
  v171 = v162->fields._size;
  if ( (unsigned int)v171 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v162,
      230,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v168[4] + 192LL) + 112LL));
    items = v162->fields._items;
    v168 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v162->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v162->fields._size = v171 + 1;
    *((_DWORD *)items->m_Items + v171) = 230;
    ++v162->fields._version;
  }
  v172 = v162->fields._size;
  if ( (unsigned int)v172 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v162,
      231,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v168[4] + 192LL) + 112LL));
    items = v162->fields._items;
    v168 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v162->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v162->fields._size = v172 + 1;
    *((_DWORD *)items->m_Items + v172) = 231;
    ++v162->fields._version;
  }
  v173 = v162->fields._size;
  if ( (unsigned int)v173 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v162,
      285,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v168[4] + 192LL) + 112LL));
    items = v162->fields._items;
    v168 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v162->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v162->fields._size = v173 + 1;
    *((_DWORD *)items->m_Items + v173) = 285;
    ++v162->fields._version;
  }
  v174 = v162->fields._size;
  if ( (unsigned int)v174 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v162,
      286,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v168[4] + 192LL) + 112LL));
    items = v162->fields._items;
    v168 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v162->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v162->fields._size = v174 + 1;
    *((_DWORD *)items->m_Items + v174) = 286;
    ++v162->fields._version;
  }
  v175 = v162->fields._size;
  if ( (unsigned int)v175 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v162,
      287,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v168[4] + 192LL) + 112LL));
    items = v162->fields._items;
    v168 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v162->fields._version;
    if ( !items )
      goto LABEL_116;
  }
  else
  {
    v162->fields._size = v175 + 1;
    *((_DWORD *)items->m_Items + v175) = 287;
    ++v162->fields._version;
  }
  v176 = v162->fields._size;
  if ( (unsigned int)v176 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v162,
      288,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v168[4] + 192LL) + 112LL));
  }
  else
  {
    v162->fields._size = v176 + 1;
    *((_DWORD *)items->m_Items + v176) = 288;
  }
  Voice_TypeInfo->static_fields->deadVoiceList = (struct System_Collections_Generic_List_Voice_BATTLE__o *)v162;
  sub_1BC2FAC((CGThumbnailListItem_o *)Voice_TypeInfo->static_fields, (int32_t)v162, v165, v166);
  v177 = (System_Collections_Generic_List_T__o *)sub_1BC3254(System_Collections_Generic_List_Voice_BATTLE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v177,
    (const MethodInfo_3685DF4 *)Method_System_Collections_Generic_List_Voice_BATTLE___ctor__);
  if ( !v177 )
    goto LABEL_116;
  v180 = v177->fields._items;
  v181 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
  ++v177->fields._version;
  if ( !v180 )
    goto LABEL_116;
  v182 = v177->fields._size;
  if ( (unsigned int)v182 >= v180->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v177,
      31,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v181[4] + 192LL) + 112LL));
    v180 = v177->fields._items;
    v181 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v177->fields._version;
    if ( !v180 )
      goto LABEL_116;
  }
  else
  {
    v177->fields._size = v182 + 1;
    *((_DWORD *)v180->m_Items + v182) = 31;
    ++v177->fields._version;
  }
  v183 = v177->fields._size;
  if ( (unsigned int)v183 >= v180->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v177,
      32,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v181[4] + 192LL) + 112LL));
    v180 = v177->fields._items;
    v181 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v177->fields._version;
    if ( !v180 )
      goto LABEL_116;
  }
  else
  {
    v177->fields._size = v183 + 1;
    *((_DWORD *)v180->m_Items + v183) = 32;
    ++v177->fields._version;
  }
  v184 = v177->fields._size;
  if ( (unsigned int)v184 >= v180->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v177,
      223,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v181[4] + 192LL) + 112LL));
    v180 = v177->fields._items;
    v181 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v177->fields._version;
    if ( !v180 )
      goto LABEL_116;
  }
  else
  {
    v177->fields._size = v184 + 1;
    *((_DWORD *)v180->m_Items + v184) = 223;
    ++v177->fields._version;
  }
  v185 = v177->fields._size;
  if ( (unsigned int)v185 >= v180->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v177,
      224,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v181[4] + 192LL) + 112LL));
    v180 = v177->fields._items;
    v181 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v177->fields._version;
    if ( !v180 )
      goto LABEL_116;
  }
  else
  {
    v177->fields._size = v185 + 1;
    *((_DWORD *)v180->m_Items + v185) = 224;
    ++v177->fields._version;
  }
  v186 = v177->fields._size;
  if ( (unsigned int)v186 >= v180->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v177,
      243,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v181[4] + 192LL) + 112LL));
    v180 = v177->fields._items;
    v181 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v177->fields._version;
    if ( !v180 )
      goto LABEL_116;
  }
  else
  {
    v177->fields._size = v186 + 1;
    *((_DWORD *)v180->m_Items + v186) = 243;
    ++v177->fields._version;
  }
  v187 = v177->fields._size;
  if ( (unsigned int)v187 >= v180->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v177,
      244,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v181[4] + 192LL) + 112LL));
    v180 = v177->fields._items;
    v181 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v177->fields._version;
    if ( !v180 )
      goto LABEL_116;
  }
  else
  {
    v177->fields._size = v187 + 1;
    *((_DWORD *)v180->m_Items + v187) = 244;
    ++v177->fields._version;
  }
  v188 = v177->fields._size;
  if ( (unsigned int)v188 >= v180->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v177,
      254,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v181[4] + 192LL) + 112LL));
    v180 = v177->fields._items;
    v181 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v177->fields._version;
    if ( !v180 )
      goto LABEL_116;
  }
  else
  {
    v177->fields._size = v188 + 1;
    *((_DWORD *)v180->m_Items + v188) = 254;
    ++v177->fields._version;
  }
  v189 = v177->fields._size;
  if ( (unsigned int)v189 >= v180->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v177,
      255,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v181[4] + 192LL) + 112LL));
    v180 = v177->fields._items;
    v181 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v177->fields._version;
    if ( !v180 )
      goto LABEL_116;
  }
  else
  {
    v177->fields._size = v189 + 1;
    *((_DWORD *)v180->m_Items + v189) = 255;
    ++v177->fields._version;
  }
  v190 = v177->fields._size;
  if ( (unsigned int)v190 >= v180->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v177,
      256,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v181[4] + 192LL) + 112LL));
  }
  else
  {
    v177->fields._size = v190 + 1;
    *((_DWORD *)v180->m_Items + v190) = 256;
  }
  static_fields = Voice_TypeInfo->static_fields;
  static_fields->skillVoiceList = (struct System_Collections_Generic_List_Voice_BATTLE__o *)v177;
  sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->skillVoiceList, (int32_t)v177, v178, v179);
  v192 = (System_Collections_Generic_List_T__o *)sub_1BC3254(System_Collections_Generic_List_Voice_BATTLE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v192,
    (const MethodInfo_3685DF4 *)Method_System_Collections_Generic_List_Voice_BATTLE___ctor__);
  if ( !v192 )
    goto LABEL_116;
  v195 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
  p_version = &v192->fields._version;
  ++v192->fields._version;
  v197 = v192->fields._items;
  p_size = &v192->fields._size;
  v198 = v192->fields._size;
  if ( !v197 )
    goto LABEL_116;
  if ( (unsigned int)v198 >= v197->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v192,
      111,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v195[4] + 192LL) + 112LL));
    v197 = v192->fields._items;
    v195 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v192->fields._version;
    if ( !v197 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v198 + 1;
    *((_DWORD *)v197->m_Items + v198) = 111;
    ++*p_version;
  }
  v200 = *p_size;
  if ( (unsigned int)v200 >= v197->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v192,
      121,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v195[4] + 192LL) + 112LL));
    v197 = v192->fields._items;
    v195 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v192->fields._version;
    if ( !v197 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v200 + 1;
    *((_DWORD *)v197->m_Items + v200) = 121;
    ++*p_version;
  }
  v201 = *p_size;
  if ( (unsigned int)v201 >= v197->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v192,
      131,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v195[4] + 192LL) + 112LL));
    v197 = v192->fields._items;
    v195 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v192->fields._version;
    if ( !v197 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v201 + 1;
    *((_DWORD *)v197->m_Items + v201) = 131;
    ++*p_version;
  }
  v202 = *p_size;
  if ( (unsigned int)v202 >= v197->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v192,
      141,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v195[4] + 192LL) + 112LL));
    v197 = v192->fields._items;
    v195 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v192->fields._version;
    if ( !v197 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v202 + 1;
    *((_DWORD *)v197->m_Items + v202) = 141;
    ++*p_version;
  }
  v203 = *p_size;
  if ( (unsigned int)v203 >= v197->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v192,
      151,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v195[4] + 192LL) + 112LL));
    v197 = v192->fields._items;
    v195 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v192->fields._version;
    if ( !v197 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v203 + 1;
    *((_DWORD *)v197->m_Items + v203) = 151;
    ++*p_version;
  }
  v204 = *p_size;
  if ( (unsigned int)v204 >= v197->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v192,
      161,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v195[4] + 192LL) + 112LL));
    v197 = v192->fields._items;
    v195 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v192->fields._version;
    if ( !v197 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v204 + 1;
    *((_DWORD *)v197->m_Items + v204) = 161;
    ++*p_version;
  }
  v205 = *p_size;
  if ( (unsigned int)v205 >= v197->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v192,
      171,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v195[4] + 192LL) + 112LL));
    v197 = v192->fields._items;
    v195 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v192->fields._version;
    if ( !v197 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v205 + 1;
    *((_DWORD *)v197->m_Items + v205) = 171;
    ++*p_version;
  }
  v206 = *p_size;
  if ( (unsigned int)v206 >= v197->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v192,
      181,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v195[4] + 192LL) + 112LL));
    v197 = v192->fields._items;
    v195 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v192->fields._version;
    if ( !v197 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v206 + 1;
    *((_DWORD *)v197->m_Items + v206) = 181;
    ++*p_version;
  }
  v207 = *p_size;
  if ( (unsigned int)v207 >= v197->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v192,
      191,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v195[4] + 192LL) + 112LL));
    v197 = v192->fields._items;
    v195 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v192->fields._version;
    if ( !v197 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v207 + 1;
    *((_DWORD *)v197->m_Items + v207) = 191;
    ++*p_version;
  }
  v208 = *p_size;
  if ( (unsigned int)v208 >= v197->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v192,
      1001,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v195[4] + 192LL) + 112LL));
    v197 = v192->fields._items;
    v195 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v192->fields._version;
    if ( !v197 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v208 + 1;
    *((_DWORD *)v197->m_Items + v208) = 1001;
    ++*p_version;
  }
  v209 = *p_size;
  if ( (unsigned int)v209 >= v197->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v192,
      1011,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v195[4] + 192LL) + 112LL));
    v197 = v192->fields._items;
    v195 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v192->fields._version;
    if ( !v197 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v209 + 1;
    *((_DWORD *)v197->m_Items + v209) = 1011;
    ++*p_version;
  }
  v210 = *p_size;
  if ( (unsigned int)v210 >= v197->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v192,
      1021,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v195[4] + 192LL) + 112LL));
    v197 = v192->fields._items;
    v195 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v192->fields._version;
    if ( !v197 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v210 + 1;
    *((_DWORD *)v197->m_Items + v210) = 1021;
    ++*p_version;
  }
  v211 = *p_size;
  if ( (unsigned int)v211 >= v197->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v192,
      1031,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v195[4] + 192LL) + 112LL));
    v197 = v192->fields._items;
    v195 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v192->fields._version;
    if ( !v197 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v211 + 1;
    *((_DWORD *)v197->m_Items + v211) = 1031;
    ++*p_version;
  }
  v212 = *p_size;
  if ( (unsigned int)v212 >= v197->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v192,
      1041,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v195[4] + 192LL) + 112LL));
    v197 = v192->fields._items;
    v195 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v192->fields._version;
    if ( !v197 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v212 + 1;
    *((_DWORD *)v197->m_Items + v212) = 1041;
    ++*p_version;
  }
  v213 = *p_size;
  if ( (unsigned int)v213 >= v197->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v192,
      1051,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v195[4] + 192LL) + 112LL));
    v197 = v192->fields._items;
    v195 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v192->fields._version;
    if ( !v197 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v213 + 1;
    *((_DWORD *)v197->m_Items + v213) = 1051;
    ++*p_version;
  }
  v214 = *p_size;
  if ( (unsigned int)v214 >= v197->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v192,
      1061,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v195[4] + 192LL) + 112LL));
    v197 = v192->fields._items;
    v195 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v192->fields._version;
    if ( !v197 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v214 + 1;
    *((_DWORD *)v197->m_Items + v214) = 1061;
    ++*p_version;
  }
  v215 = *p_size;
  if ( (unsigned int)v215 >= v197->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v192,
      1071,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v195[4] + 192LL) + 112LL));
    v197 = v192->fields._items;
    v195 = Method_System_Collections_Generic_List_Voice_BATTLE__Add__;
    ++v192->fields._version;
    if ( !v197 )
      goto LABEL_116;
  }
  else
  {
    *p_size = v215 + 1;
    *((_DWORD *)v197->m_Items + v215) = 1071;
    ++*p_version;
  }
  v216 = *p_size;
  if ( (unsigned int)v216 >= v197->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v192,
      1081,
      *(const MethodInfo_3686648 **)(*(_QWORD *)(v195[4] + 192LL) + 112LL));
  }
  else
  {
    *p_size = v216 + 1;
    *((_DWORD *)v197->m_Items + v216) = 1081;
  }
  v217 = Voice_TypeInfo->static_fields;
  v217->firstNpVoiceList = (struct System_Collections_Generic_List_Voice_BATTLE__o *)v192;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v217->firstNpVoiceList, (int32_t)v192, v193, v194);
  v218 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BC3254(System_Collections_Generic_Dictionary_Voice_BATTLE__string__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v218,
    (const MethodInfo_33393F4 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string___ctor__);
  if ( !v218 )
LABEL_116:
    sub_1BC3264(v163, v164);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    0,
    0LL,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    10,
    (Il2CppObject *)StringLiteral_2494/*"B010"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    11,
    (Il2CppObject *)StringLiteral_2495/*"B020"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    12,
    (Il2CppObject *)StringLiteral_2496/*"B030"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    20,
    (Il2CppObject *)StringLiteral_2497/*"B040"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    21,
    (Il2CppObject *)StringLiteral_2498/*"B041"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    22,
    (Il2CppObject *)StringLiteral_2499/*"B042"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    111,
    (Il2CppObject *)StringLiteral_2501/*"B050"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    112,
    (Il2CppObject *)StringLiteral_2502/*"B051"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    113,
    (Il2CppObject *)StringLiteral_2503/*"B052"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    114,
    (Il2CppObject *)StringLiteral_2504/*"B053"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    115,
    (Il2CppObject *)StringLiteral_2505/*"B054"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    121,
    (Il2CppObject *)StringLiteral_2507/*"B060"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    122,
    (Il2CppObject *)StringLiteral_2508/*"B061"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    123,
    (Il2CppObject *)StringLiteral_2509/*"B062"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    124,
    (Il2CppObject *)StringLiteral_2510/*"B063"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    125,
    (Il2CppObject *)StringLiteral_2511/*"B064"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    131,
    (Il2CppObject *)StringLiteral_2513/*"B070"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    132,
    (Il2CppObject *)StringLiteral_2514/*"B071"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    133,
    (Il2CppObject *)StringLiteral_2515/*"B072"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    134,
    (Il2CppObject *)StringLiteral_2516/*"B073"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    135,
    (Il2CppObject *)StringLiteral_2517/*"B074"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    141,
    (Il2CppObject *)StringLiteral_2639/*"B800"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    151,
    (Il2CppObject *)StringLiteral_2641/*"B810"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    161,
    (Il2CppObject *)StringLiteral_2643/*"B820"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    171,
    (Il2CppObject *)StringLiteral_2536/*"B1600"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    181,
    (Il2CppObject *)StringLiteral_2537/*"B1610"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    191,
    (Il2CppObject *)StringLiteral_2538/*"B1620"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    1001,
    (Il2CppObject *)StringLiteral_2521/*"B1000"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    31,
    (Il2CppObject *)StringLiteral_2518/*"B080"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    32,
    (Il2CppObject *)StringLiteral_2519/*"B090"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    41,
    (Il2CppObject *)StringLiteral_2520/*"B100"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    42,
    (Il2CppObject *)StringLiteral_2524/*"B110"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    51,
    (Il2CppObject *)StringLiteral_2525/*"B120"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    52,
    (Il2CppObject *)StringLiteral_2529/*"B130"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    61,
    (Il2CppObject *)StringLiteral_2530/*"B140"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    71,
    (Il2CppObject *)StringLiteral_2534/*"B150"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    81,
    (Il2CppObject *)StringLiteral_2535/*"B160"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    82,
    (Il2CppObject *)StringLiteral_2539/*"B170"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    201,
    (Il2CppObject *)StringLiteral_2540/*"B180"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    202,
    (Il2CppObject *)StringLiteral_2541/*"B190"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    203,
    (Il2CppObject *)StringLiteral_2542/*"B200"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    211,
    (Il2CppObject *)StringLiteral_2548/*"B210"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    212,
    (Il2CppObject *)StringLiteral_2557/*"B220"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    213,
    (Il2CppObject *)StringLiteral_2558/*"B230"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    214,
    (Il2CppObject *)StringLiteral_2584/*"B300"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    215,
    (Il2CppObject *)StringLiteral_2584/*"B300"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    216,
    (Il2CppObject *)StringLiteral_2567/*"B250"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    217,
    (Il2CppObject *)StringLiteral_2616/*"B410"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    218,
    (Il2CppObject *)StringLiteral_2617/*"B420"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    219,
    (Il2CppObject *)StringLiteral_2618/*"B430"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    220,
    (Il2CppObject *)StringLiteral_2619/*"B440"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    221,
    (Il2CppObject *)StringLiteral_2620/*"B441"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    222,
    (Il2CppObject *)StringLiteral_2621/*"B442"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    223,
    (Il2CppObject *)StringLiteral_2622/*"B480"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    224,
    (Il2CppObject *)StringLiteral_2623/*"B490"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    225,
    (Il2CppObject *)StringLiteral_2624/*"B500"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    226,
    (Il2CppObject *)StringLiteral_2625/*"B510"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    227,
    (Il2CppObject *)StringLiteral_2626/*"B520"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    228,
    (Il2CppObject *)StringLiteral_2633/*"B530"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    229,
    (Il2CppObject *)StringLiteral_2634/*"B540"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    230,
    (Il2CppObject *)StringLiteral_2636/*"B560"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    231,
    (Il2CppObject *)StringLiteral_2637/*"B570"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    232,
    (Il2CppObject *)StringLiteral_2591/*"B310"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    233,
    (Il2CppObject *)StringLiteral_2592/*"B320"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    234,
    (Il2CppObject *)StringLiteral_2593/*"B330"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    235,
    (Il2CppObject *)StringLiteral_2594/*"B331"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    236,
    (Il2CppObject *)StringLiteral_2595/*"B340"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    237,
    (Il2CppObject *)StringLiteral_2596/*"B341"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    238,
    (Il2CppObject *)StringLiteral_2598/*"B342"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    239,
    (Il2CppObject *)StringLiteral_2635/*"B550"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    240,
    (Il2CppObject *)StringLiteral_2651/*"B910"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    241,
    (Il2CppObject *)StringLiteral_2652/*"B920"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    242,
    (Il2CppObject *)StringLiteral_2653/*"B930"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    243,
    (Il2CppObject *)StringLiteral_2649/*"B880"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    244,
    (Il2CppObject *)StringLiteral_2650/*"B890"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    245,
    (Il2CppObject *)StringLiteral_2604/*"B380"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    246,
    (Il2CppObject *)StringLiteral_2608/*"B390"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    247,
    (Il2CppObject *)StringLiteral_2609/*"B400"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    248,
    (Il2CppObject *)StringLiteral_2644/*"B840"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    249,
    (Il2CppObject *)StringLiteral_2645/*"B841"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    250,
    (Il2CppObject *)StringLiteral_2646/*"B842"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    251,
    (Il2CppObject *)StringLiteral_2576/*"B260"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    252,
    (Il2CppObject *)StringLiteral_2559/*"B240"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    253,
    (Il2CppObject *)StringLiteral_2577/*"B270"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    254,
    (Il2CppObject *)StringLiteral_2546/*"B2080"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    255,
    (Il2CppObject *)StringLiteral_2547/*"B2090"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    256,
    (Il2CppObject *)StringLiteral_2566/*"B2480"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    257,
    (Il2CppObject *)StringLiteral_2563/*"B2440"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    258,
    (Il2CppObject *)StringLiteral_2564/*"B2441"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    259,
    (Il2CppObject *)StringLiteral_2565/*"B2442"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    260,
    (Il2CppObject *)StringLiteral_2581/*"B2840"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    261,
    (Il2CppObject *)StringLiteral_2582/*"B2841"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    262,
    (Il2CppObject *)StringLiteral_2583/*"B2842"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    263,
    (Il2CppObject *)StringLiteral_2613/*"B4040"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    264,
    (Il2CppObject *)StringLiteral_2614/*"B4041"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    265,
    (Il2CppObject *)StringLiteral_2615/*"B4042"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    266,
    (Il2CppObject *)StringLiteral_2543/*"B2010"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    267,
    (Il2CppObject *)StringLiteral_2544/*"B2020"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    268,
    (Il2CppObject *)StringLiteral_2545/*"B2030"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    269,
    (Il2CppObject *)StringLiteral_2560/*"B2410"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    270,
    (Il2CppObject *)StringLiteral_2561/*"B2420"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    271,
    (Il2CppObject *)StringLiteral_2562/*"B2430"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    272,
    (Il2CppObject *)StringLiteral_2578/*"B2810"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    273,
    (Il2CppObject *)StringLiteral_2579/*"B2820"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    274,
    (Il2CppObject *)StringLiteral_2580/*"B2830"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    275,
    (Il2CppObject *)StringLiteral_2549/*"B2100"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    276,
    (Il2CppObject *)StringLiteral_2550/*"B2110"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    277,
    (Il2CppObject *)StringLiteral_2568/*"B2500"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    278,
    (Il2CppObject *)StringLiteral_2569/*"B2510"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    279,
    (Il2CppObject *)StringLiteral_2585/*"B3010"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    280,
    (Il2CppObject *)StringLiteral_2586/*"B3020"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    281,
    (Il2CppObject *)StringLiteral_2587/*"B3030"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    282,
    (Il2CppObject *)StringLiteral_2597/*"B3410"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    283,
    (Il2CppObject *)StringLiteral_2599/*"B3420"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    284,
    (Il2CppObject *)StringLiteral_2600/*"B3430"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    285,
    (Il2CppObject *)StringLiteral_2555/*"B2160"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    286,
    (Il2CppObject *)StringLiteral_2556/*"B2170"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    287,
    (Il2CppObject *)StringLiteral_2574/*"B2560"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    288,
    (Il2CppObject *)StringLiteral_2575/*"B2570"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    289,
    (Il2CppObject *)StringLiteral_2551/*"B2120"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    290,
    (Il2CppObject *)StringLiteral_2552/*"B2130"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    291,
    (Il2CppObject *)StringLiteral_2570/*"B2520"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    292,
    (Il2CppObject *)StringLiteral_2571/*"B2530"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    293,
    (Il2CppObject *)StringLiteral_2553/*"B2140"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    294,
    (Il2CppObject *)StringLiteral_2572/*"B2540"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    295,
    (Il2CppObject *)StringLiteral_2554/*"B2150"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    296,
    (Il2CppObject *)StringLiteral_2573/*"B2550"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    297,
    (Il2CppObject *)StringLiteral_2588/*"B3050"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    298,
    (Il2CppObject *)StringLiteral_2589/*"B3060"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    299,
    (Il2CppObject *)StringLiteral_2590/*"B3070"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    300,
    (Il2CppObject *)StringLiteral_2627/*"B5210"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    301,
    (Il2CppObject *)StringLiteral_2628/*"B5220"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    302,
    (Il2CppObject *)StringLiteral_2629/*"B5230"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    303,
    (Il2CppObject *)StringLiteral_2630/*"B5250"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    304,
    (Il2CppObject *)StringLiteral_2631/*"B5260"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    305,
    (Il2CppObject *)StringLiteral_2632/*"B5270"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    306,
    (Il2CppObject *)StringLiteral_2647/*"B8500"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    307,
    (Il2CppObject *)StringLiteral_2648/*"B8510"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    308,
    (Il2CppObject *)StringLiteral_2605/*"B3810"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    309,
    (Il2CppObject *)StringLiteral_2606/*"B3820"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    310,
    (Il2CppObject *)StringLiteral_2607/*"B3830"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    311,
    (Il2CppObject *)StringLiteral_2610/*"B4010"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    312,
    (Il2CppObject *)StringLiteral_2611/*"B4020"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    313,
    (Il2CppObject *)StringLiteral_2612/*"B4030"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    314,
    (Il2CppObject *)StringLiteral_2601/*"B350"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    315,
    (Il2CppObject *)StringLiteral_2602/*"B360"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    316,
    (Il2CppObject *)StringLiteral_2603/*"B370"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    1011,
    (Il2CppObject *)StringLiteral_2522/*"B1010"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    1021,
    (Il2CppObject *)StringLiteral_2523/*"B1020"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    1031,
    (Il2CppObject *)StringLiteral_2526/*"B1200"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    1041,
    (Il2CppObject *)StringLiteral_2527/*"B1210"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    1051,
    (Il2CppObject *)StringLiteral_2528/*"B1220"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    1061,
    (Il2CppObject *)StringLiteral_2531/*"B1400"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    1071,
    (Il2CppObject *)StringLiteral_2532/*"B1410"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v218,
    1081,
    (Il2CppObject *)StringLiteral_2533/*"B1420"*/,
    (const MethodInfo_3339DC8 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__Add__);
  v219 = Voice_TypeInfo->static_fields;
  v219->filelist = (struct System_Collections_Generic_Dictionary_Voice_BATTLE__string__o *)v218;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v219->filelist, (int32_t)v218, v220, v221);
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
  const MethodInfo *v12; // x3
  Voice_c *v13; // x0
  System_Collections_Generic_IEnumerable_TSource__o *filelist; // x19
  System_Func_T__TResult__o *v15; // x21

  if ( (byte_4B00FA5 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_Voice_BATTLE__string____, method);
    sub_1BC3008(&System_Func_KeyValuePair_Voice_BATTLE__string___bool__TypeInfo, v3);
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_Voice_BATTLE__string__get_Key__, v4);
    sub_1BC3008(&Method_Voice___c__DisplayClass6_0__GetTypeByFileName_b__0__, v5);
    sub_1BC3008(&Voice___c__DisplayClass6_0_TypeInfo, v6);
    sub_1BC3008(&Voice_TypeInfo, v7);
    byte_4B00FA5 = 1;
  }
  v8 = sub_1BC3254(Voice___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1BC3264(v9, v10);
  *(_QWORD *)(v8 + 16) = fileName;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v8 + 16), (int32_t)fileName, v11, v12);
  v13 = Voice_TypeInfo;
  if ( !Voice_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
    v13 = Voice_TypeInfo;
  }
  filelist = (System_Collections_Generic_IEnumerable_TSource__o *)v13->static_fields->filelist;
  v15 = (System_Func_T__TResult__o *)sub_1BC3254(System_Func_KeyValuePair_Voice_BATTLE__string___bool__TypeInfo);
  System_Func_KeyValuePair_Int32Enum__object___bool____ctor(
    v15,
    (Il2CppObject *)v8,
    Method_Voice___c__DisplayClass6_0__GetTypeByFileName_b__0__,
    0LL);
  return System_Linq_Enumerable__FirstOrDefault_KeyValuePair_Int32Enum__object__(
           filelist,
           (System_Func_TSource__bool__o *)v15,
           (const MethodInfo_302726C *)Method_System_Linq_Enumerable_FirstOrDefault_KeyValuePair_Voice_BATTLE__string____).fields.key;
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

  if ( (byte_4B00FA6 & 1) == 0 )
  {
    sub_1BC3008(&Method_BasicHelper_Any_Voice_BATTLE___, method);
    sub_1BC3008(&System_Func_Voice_BATTLE__bool__TypeInfo, v3);
    sub_1BC3008(&Method_Voice___c__DisplayClass7_0__IsDeadVoice_b__0__, v4);
    sub_1BC3008(&Voice___c__DisplayClass7_0_TypeInfo, v5);
    sub_1BC3008(&Voice_TypeInfo, v6);
    byte_4B00FA6 = 1;
  }
  v7 = sub_1BC3254(Voice___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    sub_1BC3264(v8, v9);
  *(_DWORD *)(v7 + 16) = voiceBattleType;
  v10 = Voice_TypeInfo;
  if ( !Voice_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Voice_TypeInfo);
    v10 = Voice_TypeInfo;
  }
  deadVoiceList = (System_Collections_Generic_List_T__o *)v10->static_fields->deadVoiceList;
  v12 = (System_Func_T__TResult__o *)sub_1BC3254(System_Func_Voice_BATTLE__bool__TypeInfo);
  System_Func_Int32Enum__bool____ctor(
    v12,
    (Il2CppObject *)v7,
    Method_Voice___c__DisplayClass7_0__IsDeadVoice_b__0__,
    0LL);
  return BasicHelper__Any_Int32Enum_(
           deadVoiceList,
           (System_Func_T__bool__o *)v12,
           (const MethodInfo_2FEB0F8 *)Method_BasicHelper_Any_Voice_BATTLE___);
}


System_String_o *__fastcall Voice__getFileName(int32_t type, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Voice_c *v5; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__o *filelist; // x0
  Voice_c *v7; // x0

  if ( (byte_4B00FA4 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__ContainsKey__, method);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__get_Item__, v3);
    sub_1BC3008(&Voice_TypeInfo, v4);
    byte_4B00FA4 = 1;
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
         (const MethodInfo_3339FBC *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__ContainsKey__) )
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
                                  (const MethodInfo_3339D28 *)Method_System_Collections_Generic_Dictionary_Voice_BATTLE__string__get_Item__);
LABEL_12:
    sub_1BC3264(filelist, method);
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
  if ( (byte_4B00FA8 & 1) == 0 )
  {
    sub_1BC3008(
      &Method_System_Collections_Generic_KeyValuePair_Voice_BATTLE__string__get_Value__,
      *(_QWORD *)&x.fields.key);
    byte_4B00FA8 = 1;
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