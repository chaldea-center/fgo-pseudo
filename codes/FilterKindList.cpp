void __fastcall FilterKindList___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_T__o *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  _QWORD *v10; // x8
  int32_t *p_version; // x23
  struct System_Object_array *items; // x9
  __int64 size; // x10
  int32_t *p_size; // x24
  __int64 v15; // x10
  __int64 v16; // x10
  __int64 v17; // x10
  __int64 v18; // x10
  __int64 v19; // x10
  __int64 v20; // x10
  __int64 v21; // x10
  __int64 v22; // x10
  __int64 v23; // x10
  __int64 v24; // x10
  __int64 v25; // x10
  __int64 v26; // x10
  __int64 v27; // x10
  __int64 v28; // x10
  __int64 v29; // x10
  __int64 v30; // x10
  __int64 v31; // x10
  __int64 v32; // x10
  __int64 v33; // x10
  __int64 v34; // x10
  __int64 v35; // x10
  __int64 v36; // x10
  __int64 v37; // x10
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
  __int64 v68; // x10
  __int64 v69; // x10
  __int64 v70; // x10
  __int64 v71; // x10
  __int64 v72; // x10
  __int64 v73; // x10
  __int64 v74; // x10
  __int64 v75; // x10
  __int64 v76; // x10
  __int64 v77; // x10
  __int64 v78; // x10
  __int64 v79; // x10
  __int64 v80; // x10
  __int64 v81; // x10
  __int64 v82; // x10
  __int64 v83; // x10
  __int64 v84; // x10
  __int64 v85; // x10
  __int64 v86; // x10
  __int64 v87; // x10
  __int64 v88; // x10
  System_Collections_Generic_List_T__o *v89; // x19
  int32_t v90; // w2
  int32_t v91; // w3
  _QWORD *v92; // x8
  int32_t *v93; // x25
  struct System_Object_array *v94; // x9
  __int64 v95; // x10
  int32_t *v96; // x24
  __int64 v97; // x10
  __int64 v98; // x10
  __int64 v99; // x10
  __int64 v100; // x10
  __int64 v101; // x10
  __int64 v102; // x10
  __int64 v103; // x10
  __int64 v104; // x10
  __int64 v105; // x10
  __int64 v106; // x10
  __int64 v107; // x10
  __int64 v108; // x10
  __int64 v109; // x10
  __int64 v110; // x10
  struct FilterKindList_StaticFields *static_fields; // x0
  System_Collections_Generic_List_T__o *v112; // x19
  int32_t v113; // w2
  int32_t v114; // w3
  struct System_Object_array *v115; // x8
  _QWORD *v116; // x9
  __int64 v117; // x10
  __int64 v118; // x10
  __int64 v119; // x10
  struct FilterKindList_StaticFields *v120; // x0
  System_Collections_Generic_List_T__o *v121; // x19
  int32_t v122; // w2
  int32_t v123; // w3
  struct System_Object_array *v124; // x8
  _QWORD *v125; // x9
  __int64 v126; // x10
  __int64 v127; // x10
  __int64 v128; // x10
  __int64 v129; // x10
  struct FilterKindList_StaticFields *v130; // x0
  System_Collections_Generic_List_T__o *v131; // x19
  int32_t v132; // w2
  int32_t v133; // w3
  struct System_Object_array *v134; // x8
  _QWORD *v135; // x9
  __int64 v136; // x10
  __int64 v137; // x10
  __int64 v138; // x10
  struct FilterKindList_StaticFields *v139; // x0
  System_Collections_Generic_List_T__o *v140; // x19
  int32_t v141; // w2
  int32_t v142; // w3
  struct System_Object_array *v143; // x8
  _QWORD *v144; // x9
  __int64 v145; // x10
  __int64 v146; // x10
  __int64 v147; // x10
  __int64 v148; // x10
  struct FilterKindList_StaticFields *v149; // x0
  System_Collections_Generic_List_T__o *v150; // x19
  int32_t v151; // w2
  int32_t v152; // w3
  struct System_Object_array *v153; // x8
  _QWORD *v154; // x9
  __int64 v155; // x10
  __int64 v156; // x10
  __int64 v157; // x10
  __int64 v158; // x10
  struct FilterKindList_StaticFields *v159; // x0
  System_Collections_Generic_List_T__o *v160; // x19
  int32_t v161; // w2
  int32_t v162; // w3
  struct System_Object_array *v163; // x8
  _QWORD *v164; // x9
  __int64 v165; // x10
  __int64 v166; // x10
  __int64 v167; // x10
  __int64 v168; // x10
  struct FilterKindList_StaticFields *v169; // x0
  System_Collections_Generic_List_T__o *v170; // x19
  int32_t v171; // w2
  int32_t v172; // w3
  struct System_Object_array *v173; // x8
  _QWORD *v174; // x9
  __int64 v175; // x10
  __int64 v176; // x10
  struct FilterKindList_StaticFields *v177; // x0
  System_Collections_Generic_List_T__o *v178; // x19
  int32_t v179; // w2
  int32_t v180; // w3
  struct System_Object_array *v181; // x8
  _QWORD *v182; // x9
  __int64 v183; // x10
  __int64 v184; // x10
  __int64 v185; // x10
  struct FilterKindList_StaticFields *v186; // x0
  System_Collections_Generic_List_T__o *v187; // x19
  int32_t v188; // w2
  int32_t v189; // w3
  struct System_Object_array *v190; // x8
  _QWORD *v191; // x9
  __int64 v192; // x10
  __int64 v193; // x10
  __int64 v194; // x10
  struct FilterKindList_StaticFields *v195; // x0
  System_Collections_Generic_List_T__o *v196; // x19
  int32_t v197; // w2
  int32_t v198; // w3
  struct System_Object_array *v199; // x8
  _QWORD *v200; // x9
  __int64 v201; // x10
  __int64 v202; // x10
  __int64 v203; // x10
  struct FilterKindList_StaticFields *v204; // x0
  System_Collections_Generic_List_T__o *v205; // x19
  int32_t v206; // w2
  int32_t v207; // w3
  struct System_Object_array *v208; // x9
  _QWORD *v209; // x8
  __int64 v210; // x10
  __int64 v211; // x10
  __int64 v212; // x10
  __int64 v213; // x10
  __int64 v214; // x10
  __int64 v215; // x10
  __int64 v216; // x10
  struct FilterKindList_StaticFields *v217; // x0
  System_Collections_Generic_List_T__o *v218; // x19
  int32_t v219; // w2
  int32_t v220; // w3
  struct System_Object_array *v221; // x8
  _QWORD *v222; // x9
  __int64 v223; // x10
  __int64 v224; // x10
  struct FilterKindList_StaticFields *v225; // x0
  System_Collections_Generic_List_T__o *v226; // x19
  int32_t v227; // w2
  int32_t v228; // w3
  struct System_Object_array *v229; // x8
  _QWORD *v230; // x9
  __int64 v231; // x10
  __int64 v232; // x10
  __int64 v233; // x10
  struct FilterKindList_StaticFields *v234; // x0
  System_Collections_Generic_List_T__o *v235; // x19
  int32_t v236; // w2
  int32_t v237; // w3
  struct System_Object_array *v238; // x8
  _QWORD *v239; // x9
  __int64 v240; // x10
  __int64 v241; // x10
  struct FilterKindList_StaticFields *v242; // x0
  System_Collections_Generic_List_T__o *v243; // x19
  int32_t v244; // w2
  int32_t v245; // w3
  struct System_Object_array *v246; // x8
  _QWORD *v247; // x9
  __int64 v248; // x10
  __int64 v249; // x10
  struct FilterKindList_StaticFields *v250; // x0
  System_Collections_Generic_List_T__o *v251; // x19
  int32_t v252; // w2
  int32_t v253; // w3
  struct System_Object_array *v254; // x8
  _QWORD *v255; // x9
  __int64 v256; // x10
  __int64 v257; // x10
  struct FilterKindList_StaticFields *v258; // x0
  System_Collections_Generic_List_T__o *v259; // x19
  int32_t v260; // w2
  int32_t v261; // w3
  struct System_Object_array *v262; // x8
  _QWORD *v263; // x9
  __int64 v264; // x10
  __int64 v265; // x10
  __int64 v266; // x10
  struct FilterKindList_StaticFields *v267; // x0
  System_Collections_Generic_List_T__o *v268; // x19
  int32_t v269; // w2
  int32_t v270; // w3
  struct System_Object_array *v271; // x8
  _QWORD *v272; // x9
  __int64 v273; // x10
  __int64 v274; // x10
  __int64 v275; // x10
  __int64 v276; // x10
  __int64 v277; // x10
  struct FilterKindList_StaticFields *v278; // x0
  System_Collections_Generic_List_T__o *v279; // x19
  int32_t v280; // w2
  int32_t v281; // w3
  struct System_Object_array *v282; // x9
  _QWORD *v283; // x8
  __int64 v284; // x10
  __int64 v285; // x10
  __int64 v286; // x10
  __int64 v287; // x10
  __int64 v288; // x10
  __int64 v289; // x10
  __int64 v290; // x10
  __int64 v291; // x10
  struct FilterKindList_StaticFields *v292; // x0
  System_Collections_Generic_List_T__o *v293; // x19
  int32_t v294; // w2
  int32_t v295; // w3
  struct System_Object_array *v296; // x9
  _QWORD *v297; // x8
  __int64 v298; // x10
  __int64 v299; // x10
  __int64 v300; // x10
  __int64 v301; // x10
  __int64 v302; // x10
  __int64 v303; // x10
  __int64 v304; // x10
  ServantStatusBattleListViewItem_o *v305; // x0
  System_Collections_Generic_List_T__o *v306; // x19
  int32_t v307; // w2
  int32_t v308; // w3
  struct System_Object_array *v309; // x8
  _QWORD *v310; // x9
  __int64 v311; // x10
  __int64 v312; // x10
  __int64 v313; // x10
  __int64 v314; // x10
  struct FilterKindList_StaticFields *v315; // x0
  System_Collections_Generic_List_T__o *v316; // x19
  int32_t v317; // w2
  int32_t v318; // w3
  struct System_Object_array *v319; // x8
  _QWORD *v320; // x9
  __int64 v321; // x10
  __int64 v322; // x10
  struct FilterKindList_StaticFields *v323; // x0
  System_Collections_Generic_List_T__o *v324; // x19
  int32_t v325; // w2
  int32_t v326; // w3
  struct System_Object_array *v327; // x8
  _QWORD *v328; // x9
  __int64 v329; // x10
  __int64 v330; // x10
  struct FilterKindList_StaticFields *v331; // x0

  if ( (byte_48E631E & 1) == 0 )
  {
    sub_1B00CCC(&FilterKindList_TypeInfo, v1);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v2);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__, v3);
    sub_1B00CCC(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo, v4);
    byte_48E631E = 1;
  }
  v5 = (System_Collections_Generic_List_T__o *)sub_1B00F18(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v5,
    (const MethodInfo_33A6984 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v5 )
    goto LABEL_570;
  v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  p_version = &v5->fields._version;
  ++v5->fields._version;
  items = v5->fields._items;
  p_size = &v5->fields._size;
  size = v5->fields._size;
  if ( !items )
    goto LABEL_570;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      8,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = size + 1;
    *((_DWORD *)items->m_Items + size) = 8;
    ++*p_version;
  }
  v15 = *p_size;
  if ( (unsigned int)v15 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      9,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v15 + 1;
    *((_DWORD *)items->m_Items + v15) = 9;
    ++*p_version;
  }
  v16 = *p_size;
  if ( (unsigned int)v16 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      0,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v16 + 1;
    *((_DWORD *)items->m_Items + v16) = 0;
    ++*p_version;
  }
  v17 = *p_size;
  if ( (unsigned int)v17 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      1,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v17 + 1;
    *((_DWORD *)items->m_Items + v17) = 1;
    ++*p_version;
  }
  v18 = *p_size;
  if ( (unsigned int)v18 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      2,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v18 + 1;
    *((_DWORD *)items->m_Items + v18) = 2;
    ++*p_version;
  }
  v19 = *p_size;
  if ( (unsigned int)v19 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      3,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v19 + 1;
    *((_DWORD *)items->m_Items + v19) = 3;
    ++*p_version;
  }
  v20 = *p_size;
  if ( (unsigned int)v20 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      4,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v20 + 1;
    *((_DWORD *)items->m_Items + v20) = 4;
    ++*p_version;
  }
  v21 = *p_size;
  if ( (unsigned int)v21 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      5,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v21 + 1;
    *((_DWORD *)items->m_Items + v21) = 5;
    ++*p_version;
  }
  v22 = *p_size;
  if ( (unsigned int)v22 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      6,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v22 + 1;
    *((_DWORD *)items->m_Items + v22) = 6;
    ++*p_version;
  }
  v23 = *p_size;
  if ( (unsigned int)v23 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      7,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v23 + 1;
    *((_DWORD *)items->m_Items + v23) = 7;
    ++*p_version;
  }
  v24 = *p_size;
  if ( (unsigned int)v24 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      21,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v24 + 1;
    *((_DWORD *)items->m_Items + v24) = 21;
    ++*p_version;
  }
  v25 = *p_size;
  if ( (unsigned int)v25 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      22,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v25 + 1;
    *((_DWORD *)items->m_Items + v25) = 22;
    ++*p_version;
  }
  v26 = *p_size;
  if ( (unsigned int)v26 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      23,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v26 + 1;
    *((_DWORD *)items->m_Items + v26) = 23;
    ++*p_version;
  }
  v27 = *p_size;
  if ( (unsigned int)v27 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      24,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v27 + 1;
    *((_DWORD *)items->m_Items + v27) = 24;
    ++*p_version;
  }
  v28 = *p_size;
  if ( (unsigned int)v28 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      25,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v28 + 1;
    *((_DWORD *)items->m_Items + v28) = 25;
    ++*p_version;
  }
  v29 = *p_size;
  if ( (unsigned int)v29 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      26,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v29 + 1;
    *((_DWORD *)items->m_Items + v29) = 26;
    ++*p_version;
  }
  v30 = *p_size;
  if ( (unsigned int)v30 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      27,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v30 + 1;
    *((_DWORD *)items->m_Items + v30) = 27;
    ++*p_version;
  }
  v31 = *p_size;
  if ( (unsigned int)v31 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      28,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v31 + 1;
    *((_DWORD *)items->m_Items + v31) = 28;
    ++*p_version;
  }
  v32 = *p_size;
  if ( (unsigned int)v32 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      29,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v32 + 1;
    *((_DWORD *)items->m_Items + v32) = 29;
    ++*p_version;
  }
  v33 = *p_size;
  if ( (unsigned int)v33 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      30,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v33 + 1;
    *((_DWORD *)items->m_Items + v33) = 30;
    ++*p_version;
  }
  v34 = *p_size;
  if ( (unsigned int)v34 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      31,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v34 + 1;
    *((_DWORD *)items->m_Items + v34) = 31;
    ++*p_version;
  }
  v35 = *p_size;
  if ( (unsigned int)v35 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      34,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v35 + 1;
    *((_DWORD *)items->m_Items + v35) = 34;
    ++*p_version;
  }
  v36 = *p_size;
  if ( (unsigned int)v36 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      35,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v36 + 1;
    *((_DWORD *)items->m_Items + v36) = 35;
    ++*p_version;
  }
  v37 = *p_size;
  if ( (unsigned int)v37 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      36,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v37 + 1;
    *((_DWORD *)items->m_Items + v37) = 36;
    ++*p_version;
  }
  v38 = *p_size;
  if ( (unsigned int)v38 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      37,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v38 + 1;
    *((_DWORD *)items->m_Items + v38) = 37;
    ++*p_version;
  }
  v39 = *p_size;
  if ( (unsigned int)v39 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      38,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v39 + 1;
    *((_DWORD *)items->m_Items + v39) = 38;
    ++*p_version;
  }
  v40 = *p_size;
  if ( (unsigned int)v40 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      42,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v40 + 1;
    *((_DWORD *)items->m_Items + v40) = 42;
    ++*p_version;
  }
  v41 = *p_size;
  if ( (unsigned int)v41 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      43,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v41 + 1;
    *((_DWORD *)items->m_Items + v41) = 43;
    ++*p_version;
  }
  v42 = *p_size;
  if ( (unsigned int)v42 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      44,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v42 + 1;
    *((_DWORD *)items->m_Items + v42) = 44;
    ++*p_version;
  }
  v43 = *p_size;
  if ( (unsigned int)v43 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      45,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v43 + 1;
    *((_DWORD *)items->m_Items + v43) = 45;
    ++*p_version;
  }
  v44 = *p_size;
  if ( (unsigned int)v44 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      46,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v44 + 1;
    *((_DWORD *)items->m_Items + v44) = 46;
    ++*p_version;
  }
  v45 = *p_size;
  if ( (unsigned int)v45 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      47,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v45 + 1;
    *((_DWORD *)items->m_Items + v45) = 47;
    ++*p_version;
  }
  v46 = *p_size;
  if ( (unsigned int)v46 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      48,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v46 + 1;
    *((_DWORD *)items->m_Items + v46) = 48;
    ++*p_version;
  }
  v47 = *p_size;
  if ( (unsigned int)v47 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      39,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v47 + 1;
    *((_DWORD *)items->m_Items + v47) = 39;
    ++*p_version;
  }
  v48 = *p_size;
  if ( (unsigned int)v48 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      50,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v48 + 1;
    *((_DWORD *)items->m_Items + v48) = 50;
    ++*p_version;
  }
  v49 = *p_size;
  if ( (unsigned int)v49 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      51,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v49 + 1;
    *((_DWORD *)items->m_Items + v49) = 51;
    ++*p_version;
  }
  v50 = *p_size;
  if ( (unsigned int)v50 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      54,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v50 + 1;
    *((_DWORD *)items->m_Items + v50) = 54;
    ++*p_version;
  }
  v51 = *p_size;
  if ( (unsigned int)v51 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      55,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v51 + 1;
    *((_DWORD *)items->m_Items + v51) = 55;
    ++*p_version;
  }
  v52 = *p_size;
  if ( (unsigned int)v52 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      72,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v52 + 1;
    *((_DWORD *)items->m_Items + v52) = 72;
    ++*p_version;
  }
  v53 = *p_size;
  if ( (unsigned int)v53 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      73,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v53 + 1;
    *((_DWORD *)items->m_Items + v53) = 73;
    ++*p_version;
  }
  v54 = *p_size;
  if ( (unsigned int)v54 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      74,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v54 + 1;
    *((_DWORD *)items->m_Items + v54) = 74;
    ++*p_version;
  }
  v55 = *p_size;
  if ( (unsigned int)v55 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      75,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v55 + 1;
    *((_DWORD *)items->m_Items + v55) = 75;
    ++*p_version;
  }
  v56 = *p_size;
  if ( (unsigned int)v56 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      76,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v56 + 1;
    *((_DWORD *)items->m_Items + v56) = 76;
    ++*p_version;
  }
  v57 = *p_size;
  if ( (unsigned int)v57 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      56,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v57 + 1;
    *((_DWORD *)items->m_Items + v57) = 56;
    ++*p_version;
  }
  v58 = *p_size;
  if ( (unsigned int)v58 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      78,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v58 + 1;
    *((_DWORD *)items->m_Items + v58) = 78;
    ++*p_version;
  }
  v59 = *p_size;
  if ( (unsigned int)v59 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      79,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v59 + 1;
    *((_DWORD *)items->m_Items + v59) = 79;
    ++*p_version;
  }
  v60 = *p_size;
  if ( (unsigned int)v60 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      82,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v60 + 1;
    *((_DWORD *)items->m_Items + v60) = 82;
    ++*p_version;
  }
  v61 = *p_size;
  if ( (unsigned int)v61 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      77,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v61 + 1;
    *((_DWORD *)items->m_Items + v61) = 77;
    ++*p_version;
  }
  v62 = *p_size;
  if ( (unsigned int)v62 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      81,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v62 + 1;
    *((_DWORD *)items->m_Items + v62) = 81;
    ++*p_version;
  }
  v63 = *p_size;
  if ( (unsigned int)v63 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      80,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v63 + 1;
    *((_DWORD *)items->m_Items + v63) = 80;
    ++*p_version;
  }
  v64 = *p_size;
  if ( (unsigned int)v64 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      83,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v64 + 1;
    *((_DWORD *)items->m_Items + v64) = 83;
    ++*p_version;
  }
  v65 = *p_size;
  if ( (unsigned int)v65 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      84,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v65 + 1;
    *((_DWORD *)items->m_Items + v65) = 84;
    ++*p_version;
  }
  v66 = *p_size;
  if ( (unsigned int)v66 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      85,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v66 + 1;
    *((_DWORD *)items->m_Items + v66) = 85;
    ++*p_version;
  }
  v67 = *p_size;
  if ( (unsigned int)v67 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      86,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v67 + 1;
    *((_DWORD *)items->m_Items + v67) = 86;
    ++*p_version;
  }
  v68 = *p_size;
  if ( (unsigned int)v68 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      87,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v68 + 1;
    *((_DWORD *)items->m_Items + v68) = 87;
    ++*p_version;
  }
  v69 = *p_size;
  if ( (unsigned int)v69 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      57,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v69 + 1;
    *((_DWORD *)items->m_Items + v69) = 57;
    ++*p_version;
  }
  v70 = *p_size;
  if ( (unsigned int)v70 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      58,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v70 + 1;
    *((_DWORD *)items->m_Items + v70) = 58;
    ++*p_version;
  }
  v71 = *p_size;
  if ( (unsigned int)v71 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      59,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v71 + 1;
    *((_DWORD *)items->m_Items + v71) = 59;
    ++*p_version;
  }
  v72 = *p_size;
  if ( (unsigned int)v72 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      60,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v72 + 1;
    *((_DWORD *)items->m_Items + v72) = 60;
    ++*p_version;
  }
  v73 = *p_size;
  if ( (unsigned int)v73 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      61,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v73 + 1;
    *((_DWORD *)items->m_Items + v73) = 61;
    ++*p_version;
  }
  v74 = *p_size;
  if ( (unsigned int)v74 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      62,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v74 + 1;
    *((_DWORD *)items->m_Items + v74) = 62;
    ++*p_version;
  }
  v75 = *p_size;
  if ( (unsigned int)v75 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      63,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v75 + 1;
    *((_DWORD *)items->m_Items + v75) = 63;
    ++*p_version;
  }
  v76 = *p_size;
  if ( (unsigned int)v76 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      64,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v76 + 1;
    *((_DWORD *)items->m_Items + v76) = 64;
    ++*p_version;
  }
  v77 = *p_size;
  if ( (unsigned int)v77 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      10,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v77 + 1;
    *((_DWORD *)items->m_Items + v77) = 10;
    ++*p_version;
  }
  v78 = *p_size;
  if ( (unsigned int)v78 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      11,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v78 + 1;
    *((_DWORD *)items->m_Items + v78) = 11;
    ++*p_version;
  }
  v79 = *p_size;
  if ( (unsigned int)v79 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      12,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v79 + 1;
    *((_DWORD *)items->m_Items + v79) = 12;
    ++*p_version;
  }
  v80 = *p_size;
  if ( (unsigned int)v80 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      52,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v80 + 1;
    *((_DWORD *)items->m_Items + v80) = 52;
    ++*p_version;
  }
  v81 = *p_size;
  if ( (unsigned int)v81 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      53,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v81 + 1;
    *((_DWORD *)items->m_Items + v81) = 53;
    ++*p_version;
  }
  v82 = *p_size;
  if ( (unsigned int)v82 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      69,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v82 + 1;
    *((_DWORD *)items->m_Items + v82) = 69;
    ++*p_version;
  }
  v83 = *p_size;
  if ( (unsigned int)v83 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      70,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v83 + 1;
    *((_DWORD *)items->m_Items + v83) = 70;
    ++*p_version;
  }
  v84 = *p_size;
  if ( (unsigned int)v84 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      71,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v84 + 1;
    *((_DWORD *)items->m_Items + v84) = 71;
    ++*p_version;
  }
  v85 = *p_size;
  if ( (unsigned int)v85 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      65,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v85 + 1;
    *((_DWORD *)items->m_Items + v85) = 65;
    ++*p_version;
  }
  v86 = *p_size;
  if ( (unsigned int)v86 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      66,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v86 + 1;
    *((_DWORD *)items->m_Items + v86) = 66;
    ++*p_version;
  }
  v87 = *p_size;
  if ( (unsigned int)v87 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      67,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v87 + 1;
    *((_DWORD *)items->m_Items + v87) = 67;
    ++*p_version;
  }
  v88 = *p_size;
  if ( (unsigned int)v88 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      68,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    *p_size = v88 + 1;
    *((_DWORD *)items->m_Items + v88) = 68;
  }
  FilterKindList_TypeInfo->static_fields->AllFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v5;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)FilterKindList_TypeInfo->static_fields, (int32_t)v5, v8, v9);
  v89 = (System_Collections_Generic_List_T__o *)sub_1B00F18(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v89,
    (const MethodInfo_33A6984 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v89 )
    goto LABEL_570;
  v92 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  v93 = &v89->fields._version;
  ++v89->fields._version;
  v94 = v89->fields._items;
  v96 = &v89->fields._size;
  v95 = v89->fields._size;
  if ( !v94 )
    goto LABEL_570;
  if ( (unsigned int)v95 >= v94->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v89,
      0,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
    v94 = v89->fields._items;
    v92 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v89->fields._version;
    if ( !v94 )
      goto LABEL_570;
  }
  else
  {
    *v96 = v95 + 1;
    *((_DWORD *)v94->m_Items + v95) = 0;
    ++*v93;
  }
  v97 = *v96;
  if ( (unsigned int)v97 >= v94->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v89,
      1,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
    v94 = v89->fields._items;
    v92 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v89->fields._version;
    if ( !v94 )
      goto LABEL_570;
  }
  else
  {
    *v96 = v97 + 1;
    *((_DWORD *)v94->m_Items + v97) = 1;
    ++*v93;
  }
  v98 = *v96;
  if ( (unsigned int)v98 >= v94->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v89,
      2,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
    v94 = v89->fields._items;
    v92 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v89->fields._version;
    if ( !v94 )
      goto LABEL_570;
  }
  else
  {
    *v96 = v98 + 1;
    *((_DWORD *)v94->m_Items + v98) = 2;
    ++*v93;
  }
  v99 = *v96;
  if ( (unsigned int)v99 >= v94->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v89,
      3,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
    v94 = v89->fields._items;
    v92 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v89->fields._version;
    if ( !v94 )
      goto LABEL_570;
  }
  else
  {
    *v96 = v99 + 1;
    *((_DWORD *)v94->m_Items + v99) = 3;
    ++*v93;
  }
  v100 = *v96;
  if ( (unsigned int)v100 >= v94->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v89,
      4,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
    v94 = v89->fields._items;
    v92 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v89->fields._version;
    if ( !v94 )
      goto LABEL_570;
  }
  else
  {
    *v96 = v100 + 1;
    *((_DWORD *)v94->m_Items + v100) = 4;
    ++*v93;
  }
  v101 = *v96;
  if ( (unsigned int)v101 >= v94->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v89,
      5,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
    v94 = v89->fields._items;
    v92 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v89->fields._version;
    if ( !v94 )
      goto LABEL_570;
  }
  else
  {
    *v96 = v101 + 1;
    *((_DWORD *)v94->m_Items + v101) = 5;
    ++*v93;
  }
  v102 = *v96;
  if ( (unsigned int)v102 >= v94->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v89,
      6,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
    v94 = v89->fields._items;
    v92 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v89->fields._version;
    if ( !v94 )
      goto LABEL_570;
  }
  else
  {
    *v96 = v102 + 1;
    *((_DWORD *)v94->m_Items + v102) = 6;
    ++*v93;
  }
  v103 = *v96;
  if ( (unsigned int)v103 >= v94->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v89,
      57,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
    v94 = v89->fields._items;
    v92 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v89->fields._version;
    if ( !v94 )
      goto LABEL_570;
  }
  else
  {
    *v96 = v103 + 1;
    *((_DWORD *)v94->m_Items + v103) = 57;
    ++*v93;
  }
  v104 = *v96;
  if ( (unsigned int)v104 >= v94->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v89,
      58,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
    v94 = v89->fields._items;
    v92 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v89->fields._version;
    if ( !v94 )
      goto LABEL_570;
  }
  else
  {
    *v96 = v104 + 1;
    *((_DWORD *)v94->m_Items + v104) = 58;
    ++*v93;
  }
  v105 = *v96;
  if ( (unsigned int)v105 >= v94->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v89,
      59,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
    v94 = v89->fields._items;
    v92 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v89->fields._version;
    if ( !v94 )
      goto LABEL_570;
  }
  else
  {
    *v96 = v105 + 1;
    *((_DWORD *)v94->m_Items + v105) = 59;
    ++*v93;
  }
  v106 = *v96;
  if ( (unsigned int)v106 >= v94->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v89,
      60,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
    v94 = v89->fields._items;
    v92 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v89->fields._version;
    if ( !v94 )
      goto LABEL_570;
  }
  else
  {
    *v96 = v106 + 1;
    *((_DWORD *)v94->m_Items + v106) = 60;
    ++*v93;
  }
  v107 = *v96;
  if ( (unsigned int)v107 >= v94->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v89,
      61,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
    v94 = v89->fields._items;
    v92 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v89->fields._version;
    if ( !v94 )
      goto LABEL_570;
  }
  else
  {
    *v96 = v107 + 1;
    *((_DWORD *)v94->m_Items + v107) = 61;
    ++*v93;
  }
  v108 = *v96;
  if ( (unsigned int)v108 >= v94->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v89,
      62,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
    v94 = v89->fields._items;
    v92 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v89->fields._version;
    if ( !v94 )
      goto LABEL_570;
  }
  else
  {
    *v96 = v108 + 1;
    *((_DWORD *)v94->m_Items + v108) = 62;
    ++*v93;
  }
  v109 = *v96;
  if ( (unsigned int)v109 >= v94->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v89,
      63,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
    v94 = v89->fields._items;
    v92 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v89->fields._version;
    if ( !v94 )
      goto LABEL_570;
  }
  else
  {
    *v96 = v109 + 1;
    *((_DWORD *)v94->m_Items + v109) = 63;
    ++*v93;
  }
  v110 = *v96;
  if ( (unsigned int)v110 >= v94->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v89,
      64,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
  }
  else
  {
    *v96 = v110 + 1;
    *((_DWORD *)v94->m_Items + v110) = 64;
  }
  static_fields = FilterKindList_TypeInfo->static_fields;
  static_fields->ClassFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v89;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->ClassFilterKindList, (int32_t)v89, v90, v91);
  v112 = (System_Collections_Generic_List_T__o *)sub_1B00F18(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v112,
    (const MethodInfo_33A6984 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v112 )
    goto LABEL_570;
  v115 = v112->fields._items;
  v116 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v112->fields._version;
  if ( !v115 )
    goto LABEL_570;
  v117 = v112->fields._size;
  if ( (unsigned int)v117 >= v115->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v112,
      0,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v116[4] + 192LL) + 112LL));
    v115 = v112->fields._items;
    v116 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v112->fields._version;
    if ( !v115 )
      goto LABEL_570;
  }
  else
  {
    v112->fields._size = v117 + 1;
    *((_DWORD *)v115->m_Items + v117) = 0;
    ++v112->fields._version;
  }
  v118 = v112->fields._size;
  if ( (unsigned int)v118 >= v115->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v112,
      1,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v116[4] + 192LL) + 112LL));
    v115 = v112->fields._items;
    v116 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v112->fields._version;
    if ( !v115 )
      goto LABEL_570;
  }
  else
  {
    v112->fields._size = v118 + 1;
    *((_DWORD *)v115->m_Items + v118) = 1;
    ++v112->fields._version;
  }
  v119 = v112->fields._size;
  if ( (unsigned int)v119 >= v115->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v112,
      2,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v116[4] + 192LL) + 112LL));
  }
  else
  {
    v112->fields._size = v119 + 1;
    *((_DWORD *)v115->m_Items + v119) = 2;
  }
  v120 = FilterKindList_TypeInfo->static_fields;
  v120->ThreeKnightsFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v112;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v120->ThreeKnightsFilterKindList, (int32_t)v112, v113, v114);
  v121 = (System_Collections_Generic_List_T__o *)sub_1B00F18(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v121,
    (const MethodInfo_33A6984 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v121 )
    goto LABEL_570;
  v124 = v121->fields._items;
  v125 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v121->fields._version;
  if ( !v124 )
    goto LABEL_570;
  v126 = v121->fields._size;
  if ( (unsigned int)v126 >= v124->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v121,
      3,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v125[4] + 192LL) + 112LL));
    v124 = v121->fields._items;
    v125 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v121->fields._version;
    if ( !v124 )
      goto LABEL_570;
  }
  else
  {
    v121->fields._size = v126 + 1;
    *((_DWORD *)v124->m_Items + v126) = 3;
    ++v121->fields._version;
  }
  v127 = v121->fields._size;
  if ( (unsigned int)v127 >= v124->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v121,
      4,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v125[4] + 192LL) + 112LL));
    v124 = v121->fields._items;
    v125 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v121->fields._version;
    if ( !v124 )
      goto LABEL_570;
  }
  else
  {
    v121->fields._size = v127 + 1;
    *((_DWORD *)v124->m_Items + v127) = 4;
    ++v121->fields._version;
  }
  v128 = v121->fields._size;
  if ( (unsigned int)v128 >= v124->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v121,
      5,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v125[4] + 192LL) + 112LL));
    v124 = v121->fields._items;
    v125 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v121->fields._version;
    if ( !v124 )
      goto LABEL_570;
  }
  else
  {
    v121->fields._size = v128 + 1;
    *((_DWORD *)v124->m_Items + v128) = 5;
    ++v121->fields._version;
  }
  v129 = v121->fields._size;
  if ( (unsigned int)v129 >= v124->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v121,
      6,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v125[4] + 192LL) + 112LL));
  }
  else
  {
    v121->fields._size = v129 + 1;
    *((_DWORD *)v124->m_Items + v129) = 6;
  }
  v130 = FilterKindList_TypeInfo->static_fields;
  v130->FourCavalryFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v121;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v130->FourCavalryFilterKindList, (int32_t)v121, v122, v123);
  v131 = (System_Collections_Generic_List_T__o *)sub_1B00F18(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v131,
    (const MethodInfo_33A6984 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v131 )
    goto LABEL_570;
  v134 = v131->fields._items;
  v135 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v131->fields._version;
  if ( !v134 )
    goto LABEL_570;
  v136 = v131->fields._size;
  if ( (unsigned int)v136 >= v134->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v131,
      58,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v135[4] + 192LL) + 112LL));
    v134 = v131->fields._items;
    v135 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v131->fields._version;
    if ( !v134 )
      goto LABEL_570;
  }
  else
  {
    v131->fields._size = v136 + 1;
    *((_DWORD *)v134->m_Items + v136) = 58;
    ++v131->fields._version;
  }
  v137 = v131->fields._size;
  if ( (unsigned int)v137 >= v134->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v131,
      59,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v135[4] + 192LL) + 112LL));
    v134 = v131->fields._items;
    v135 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v131->fields._version;
    if ( !v134 )
      goto LABEL_570;
  }
  else
  {
    v131->fields._size = v137 + 1;
    *((_DWORD *)v134->m_Items + v137) = 59;
    ++v131->fields._version;
  }
  v138 = v131->fields._size;
  if ( (unsigned int)v138 >= v134->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v131,
      60,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v135[4] + 192LL) + 112LL));
  }
  else
  {
    v131->fields._size = v138 + 1;
    *((_DWORD *)v134->m_Items + v138) = 60;
  }
  v139 = FilterKindList_TypeInfo->static_fields;
  v139->ClassExtra1FilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v131;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v139->ClassExtra1FilterKindList, (int32_t)v131, v132, v133);
  v140 = (System_Collections_Generic_List_T__o *)sub_1B00F18(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v140,
    (const MethodInfo_33A6984 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v140 )
    goto LABEL_570;
  v143 = v140->fields._items;
  v144 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v140->fields._version;
  if ( !v143 )
    goto LABEL_570;
  v145 = v140->fields._size;
  if ( (unsigned int)v145 >= v143->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v140,
      57,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v144[4] + 192LL) + 112LL));
    v143 = v140->fields._items;
    v144 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v140->fields._version;
    if ( !v143 )
      goto LABEL_570;
  }
  else
  {
    v140->fields._size = v145 + 1;
    *((_DWORD *)v143->m_Items + v145) = 57;
    ++v140->fields._version;
  }
  v146 = v140->fields._size;
  if ( (unsigned int)v146 >= v143->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v140,
      58,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v144[4] + 192LL) + 112LL));
    v143 = v140->fields._items;
    v144 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v140->fields._version;
    if ( !v143 )
      goto LABEL_570;
  }
  else
  {
    v140->fields._size = v146 + 1;
    *((_DWORD *)v143->m_Items + v146) = 58;
    ++v140->fields._version;
  }
  v147 = v140->fields._size;
  if ( (unsigned int)v147 >= v143->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v140,
      59,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v144[4] + 192LL) + 112LL));
    v143 = v140->fields._items;
    v144 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v140->fields._version;
    if ( !v143 )
      goto LABEL_570;
  }
  else
  {
    v140->fields._size = v147 + 1;
    *((_DWORD *)v143->m_Items + v147) = 59;
    ++v140->fields._version;
  }
  v148 = v140->fields._size;
  if ( (unsigned int)v148 >= v143->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v140,
      60,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v144[4] + 192LL) + 112LL));
  }
  else
  {
    v140->fields._size = v148 + 1;
    *((_DWORD *)v143->m_Items + v148) = 60;
  }
  v149 = FilterKindList_TypeInfo->static_fields;
  v149->ClassExtra1InShielderFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v140;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&v149->ClassExtra1InShielderFilterKindList,
    (int32_t)v140,
    v141,
    v142);
  v150 = (System_Collections_Generic_List_T__o *)sub_1B00F18(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v150,
    (const MethodInfo_33A6984 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v150 )
    goto LABEL_570;
  v153 = v150->fields._items;
  v154 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v150->fields._version;
  if ( !v153 )
    goto LABEL_570;
  v155 = v150->fields._size;
  if ( (unsigned int)v155 >= v153->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v150,
      61,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v154[4] + 192LL) + 112LL));
    v153 = v150->fields._items;
    v154 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v150->fields._version;
    if ( !v153 )
      goto LABEL_570;
  }
  else
  {
    v150->fields._size = v155 + 1;
    *((_DWORD *)v153->m_Items + v155) = 61;
    ++v150->fields._version;
  }
  v156 = v150->fields._size;
  if ( (unsigned int)v156 >= v153->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v150,
      62,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v154[4] + 192LL) + 112LL));
    v153 = v150->fields._items;
    v154 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v150->fields._version;
    if ( !v153 )
      goto LABEL_570;
  }
  else
  {
    v150->fields._size = v156 + 1;
    *((_DWORD *)v153->m_Items + v156) = 62;
    ++v150->fields._version;
  }
  v157 = v150->fields._size;
  if ( (unsigned int)v157 >= v153->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v150,
      63,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v154[4] + 192LL) + 112LL));
    v153 = v150->fields._items;
    v154 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v150->fields._version;
    if ( !v153 )
      goto LABEL_570;
  }
  else
  {
    v150->fields._size = v157 + 1;
    *((_DWORD *)v153->m_Items + v157) = 63;
    ++v150->fields._version;
  }
  v158 = v150->fields._size;
  if ( (unsigned int)v158 >= v153->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v150,
      64,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v154[4] + 192LL) + 112LL));
  }
  else
  {
    v150->fields._size = v158 + 1;
    *((_DWORD *)v153->m_Items + v158) = 64;
  }
  v159 = FilterKindList_TypeInfo->static_fields;
  v159->ClassExtra2FilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v150;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v159->ClassExtra2FilterKindList, (int32_t)v150, v151, v152);
  v160 = (System_Collections_Generic_List_T__o *)sub_1B00F18(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v160,
    (const MethodInfo_33A6984 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v160 )
    goto LABEL_570;
  v163 = v160->fields._items;
  v164 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v160->fields._version;
  if ( !v163 )
    goto LABEL_570;
  v165 = v160->fields._size;
  if ( (unsigned int)v165 >= v163->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v160,
      65,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v164[4] + 192LL) + 112LL));
    v163 = v160->fields._items;
    v164 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v160->fields._version;
    if ( !v163 )
      goto LABEL_570;
  }
  else
  {
    v160->fields._size = v165 + 1;
    *((_DWORD *)v163->m_Items + v165) = 65;
    ++v160->fields._version;
  }
  v166 = v160->fields._size;
  if ( (unsigned int)v166 >= v163->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v160,
      66,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v164[4] + 192LL) + 112LL));
    v163 = v160->fields._items;
    v164 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v160->fields._version;
    if ( !v163 )
      goto LABEL_570;
  }
  else
  {
    v160->fields._size = v166 + 1;
    *((_DWORD *)v163->m_Items + v166) = 66;
    ++v160->fields._version;
  }
  v167 = v160->fields._size;
  if ( (unsigned int)v167 >= v163->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v160,
      67,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v164[4] + 192LL) + 112LL));
    v163 = v160->fields._items;
    v164 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v160->fields._version;
    if ( !v163 )
      goto LABEL_570;
  }
  else
  {
    v160->fields._size = v167 + 1;
    *((_DWORD *)v163->m_Items + v167) = 67;
    ++v160->fields._version;
  }
  v168 = v160->fields._size;
  if ( (unsigned int)v168 >= v163->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v160,
      68,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v164[4] + 192LL) + 112LL));
  }
  else
  {
    v160->fields._size = v168 + 1;
    *((_DWORD *)v163->m_Items + v168) = 68;
  }
  v169 = FilterKindList_TypeInfo->static_fields;
  v169->ClassGroupFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v160;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v169->ClassGroupFilterKindList, (int32_t)v160, v161, v162);
  v170 = (System_Collections_Generic_List_T__o *)sub_1B00F18(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v170,
    (const MethodInfo_33A6984 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v170 )
    goto LABEL_570;
  v173 = v170->fields._items;
  v174 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v170->fields._version;
  if ( !v173 )
    goto LABEL_570;
  v175 = v170->fields._size;
  if ( (unsigned int)v175 >= v173->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v170,
      67,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v174[4] + 192LL) + 112LL));
    v173 = v170->fields._items;
    v174 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v170->fields._version;
    if ( !v173 )
      goto LABEL_570;
  }
  else
  {
    v170->fields._size = v175 + 1;
    *((_DWORD *)v173->m_Items + v175) = 67;
    ++v170->fields._version;
  }
  v176 = v170->fields._size;
  if ( (unsigned int)v176 >= v173->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v170,
      68,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v174[4] + 192LL) + 112LL));
  }
  else
  {
    v170->fields._size = v176 + 1;
    *((_DWORD *)v173->m_Items + v176) = 68;
  }
  v177 = FilterKindList_TypeInfo->static_fields;
  v177->ClassGroupExtraFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v170;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v177->ClassGroupExtraFilterKindList, (int32_t)v170, v171, v172);
  v178 = (System_Collections_Generic_List_T__o *)sub_1B00F18(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v178,
    (const MethodInfo_33A6984 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v178 )
    goto LABEL_570;
  v181 = v178->fields._items;
  v182 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v178->fields._version;
  if ( !v181 )
    goto LABEL_570;
  v183 = v178->fields._size;
  if ( (unsigned int)v183 >= v181->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v178,
      44,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v182[4] + 192LL) + 112LL));
    v181 = v178->fields._items;
    v182 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v178->fields._version;
    if ( !v181 )
      goto LABEL_570;
  }
  else
  {
    v178->fields._size = v183 + 1;
    *((_DWORD *)v181->m_Items + v183) = 44;
    ++v178->fields._version;
  }
  v184 = v178->fields._size;
  if ( (unsigned int)v184 >= v181->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v178,
      43,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v182[4] + 192LL) + 112LL));
    v181 = v178->fields._items;
    v182 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v178->fields._version;
    if ( !v181 )
      goto LABEL_570;
  }
  else
  {
    v178->fields._size = v184 + 1;
    *((_DWORD *)v181->m_Items + v184) = 43;
    ++v178->fields._version;
  }
  v185 = v178->fields._size;
  if ( (unsigned int)v185 >= v181->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v178,
      42,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v182[4] + 192LL) + 112LL));
  }
  else
  {
    v178->fields._size = v185 + 1;
    *((_DWORD *)v181->m_Items + v185) = 42;
  }
  v186 = FilterKindList_TypeInfo->static_fields;
  v186->NpTypeFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v178;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v186->NpTypeFilterKindList, (int32_t)v178, v179, v180);
  v187 = (System_Collections_Generic_List_T__o *)sub_1B00F18(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v187,
    (const MethodInfo_33A6984 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v187 )
    goto LABEL_570;
  v190 = v187->fields._items;
  v191 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v187->fields._version;
  if ( !v190 )
    goto LABEL_570;
  v192 = v187->fields._size;
  if ( (unsigned int)v192 >= v190->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v187,
      46,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v191[4] + 192LL) + 112LL));
    v190 = v187->fields._items;
    v191 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v187->fields._version;
    if ( !v190 )
      goto LABEL_570;
  }
  else
  {
    v187->fields._size = v192 + 1;
    *((_DWORD *)v190->m_Items + v192) = 46;
    ++v187->fields._version;
  }
  v193 = v187->fields._size;
  if ( (unsigned int)v193 >= v190->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v187,
      45,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v191[4] + 192LL) + 112LL));
    v190 = v187->fields._items;
    v191 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v187->fields._version;
    if ( !v190 )
      goto LABEL_570;
  }
  else
  {
    v187->fields._size = v193 + 1;
    *((_DWORD *)v190->m_Items + v193) = 45;
    ++v187->fields._version;
  }
  v194 = v187->fields._size;
  if ( (unsigned int)v194 >= v190->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v187,
      47,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v191[4] + 192LL) + 112LL));
  }
  else
  {
    v187->fields._size = v194 + 1;
    *((_DWORD *)v190->m_Items + v194) = 47;
  }
  v195 = FilterKindList_TypeInfo->static_fields;
  v195->NpEffectFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v187;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v195->NpEffectFilterKindList, (int32_t)v187, v188, v189);
  v196 = (System_Collections_Generic_List_T__o *)sub_1B00F18(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v196,
    (const MethodInfo_33A6984 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v196 )
    goto LABEL_570;
  v199 = v196->fields._items;
  v200 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v196->fields._version;
  if ( !v199 )
    goto LABEL_570;
  v201 = v196->fields._size;
  if ( (unsigned int)v201 >= v199->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v196,
      48,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v200[4] + 192LL) + 112LL));
    v199 = v196->fields._items;
    v200 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v196->fields._version;
    if ( !v199 )
      goto LABEL_570;
  }
  else
  {
    v196->fields._size = v201 + 1;
    *((_DWORD *)v199->m_Items + v201) = 48;
    ++v196->fields._version;
  }
  v202 = v196->fields._size;
  if ( (unsigned int)v202 >= v199->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v196,
      8,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v200[4] + 192LL) + 112LL));
    v199 = v196->fields._items;
    v200 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v196->fields._version;
    if ( !v199 )
      goto LABEL_570;
  }
  else
  {
    v196->fields._size = v202 + 1;
    *((_DWORD *)v199->m_Items + v202) = 8;
    ++v196->fields._version;
  }
  v203 = v196->fields._size;
  if ( (unsigned int)v203 >= v199->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v196,
      9,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v200[4] + 192LL) + 112LL));
  }
  else
  {
    v196->fields._size = v203 + 1;
    *((_DWORD *)v199->m_Items + v203) = 9;
  }
  v204 = FilterKindList_TypeInfo->static_fields;
  v204->ServantTypeFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v196;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v204->ServantTypeFilterKindList, (int32_t)v196, v197, v198);
  v205 = (System_Collections_Generic_List_T__o *)sub_1B00F18(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v205,
    (const MethodInfo_33A6984 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v205 )
    goto LABEL_570;
  v208 = v205->fields._items;
  v209 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v205->fields._version;
  if ( !v208 )
    goto LABEL_570;
  v210 = v205->fields._size;
  if ( (unsigned int)v210 >= v208->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v205,
      21,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v209[4] + 192LL) + 112LL));
    v208 = v205->fields._items;
    v209 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v205->fields._version;
    if ( !v208 )
      goto LABEL_570;
  }
  else
  {
    v205->fields._size = v210 + 1;
    *((_DWORD *)v208->m_Items + v210) = 21;
    ++v205->fields._version;
  }
  v211 = v205->fields._size;
  if ( (unsigned int)v211 >= v208->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v205,
      22,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v209[4] + 192LL) + 112LL));
    v208 = v205->fields._items;
    v209 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v205->fields._version;
    if ( !v208 )
      goto LABEL_570;
  }
  else
  {
    v205->fields._size = v211 + 1;
    *((_DWORD *)v208->m_Items + v211) = 22;
    ++v205->fields._version;
  }
  v212 = v205->fields._size;
  if ( (unsigned int)v212 >= v208->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v205,
      23,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v209[4] + 192LL) + 112LL));
    v208 = v205->fields._items;
    v209 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v205->fields._version;
    if ( !v208 )
      goto LABEL_570;
  }
  else
  {
    v205->fields._size = v212 + 1;
    *((_DWORD *)v208->m_Items + v212) = 23;
    ++v205->fields._version;
  }
  v213 = v205->fields._size;
  if ( (unsigned int)v213 >= v208->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v205,
      24,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v209[4] + 192LL) + 112LL));
    v208 = v205->fields._items;
    v209 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v205->fields._version;
    if ( !v208 )
      goto LABEL_570;
  }
  else
  {
    v205->fields._size = v213 + 1;
    *((_DWORD *)v208->m_Items + v213) = 24;
    ++v205->fields._version;
  }
  v214 = v205->fields._size;
  if ( (unsigned int)v214 >= v208->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v205,
      25,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v209[4] + 192LL) + 112LL));
    v208 = v205->fields._items;
    v209 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v205->fields._version;
    if ( !v208 )
      goto LABEL_570;
  }
  else
  {
    v205->fields._size = v214 + 1;
    *((_DWORD *)v208->m_Items + v214) = 25;
    ++v205->fields._version;
  }
  v215 = v205->fields._size;
  if ( (unsigned int)v215 >= v208->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v205,
      26,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v209[4] + 192LL) + 112LL));
    v208 = v205->fields._items;
    v209 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v205->fields._version;
    if ( !v208 )
      goto LABEL_570;
  }
  else
  {
    v205->fields._size = v215 + 1;
    *((_DWORD *)v208->m_Items + v215) = 26;
    ++v205->fields._version;
  }
  v216 = v205->fields._size;
  if ( (unsigned int)v216 >= v208->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v205,
      27,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v209[4] + 192LL) + 112LL));
  }
  else
  {
    v205->fields._size = v216 + 1;
    *((_DWORD *)v208->m_Items + v216) = 27;
  }
  v217 = FilterKindList_TypeInfo->static_fields;
  v217->CombineBaseServantFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v205;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v217->CombineBaseServantFilterKindList, (int32_t)v205, v206, v207);
  v218 = (System_Collections_Generic_List_T__o *)sub_1B00F18(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v218,
    (const MethodInfo_33A6984 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v218 )
    goto LABEL_570;
  v221 = v218->fields._items;
  v222 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v218->fields._version;
  if ( !v221 )
    goto LABEL_570;
  v223 = v218->fields._size;
  if ( (unsigned int)v223 >= v221->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v218,
      28,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v222[4] + 192LL) + 112LL));
    v221 = v218->fields._items;
    v222 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v218->fields._version;
    if ( !v221 )
      goto LABEL_570;
  }
  else
  {
    v218->fields._size = v223 + 1;
    *((_DWORD *)v221->m_Items + v223) = 28;
    ++v218->fields._version;
  }
  v224 = v218->fields._size;
  if ( (unsigned int)v224 >= v221->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v218,
      29,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v222[4] + 192LL) + 112LL));
  }
  else
  {
    v218->fields._size = v224 + 1;
    *((_DWORD *)v221->m_Items + v224) = 29;
  }
  v225 = FilterKindList_TypeInfo->static_fields;
  v225->CombineMaterialFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v218;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v225->CombineMaterialFilterKindList, (int32_t)v218, v219, v220);
  v226 = (System_Collections_Generic_List_T__o *)sub_1B00F18(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v226,
    (const MethodInfo_33A6984 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v226 )
    goto LABEL_570;
  v229 = v226->fields._items;
  v230 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v226->fields._version;
  if ( !v229 )
    goto LABEL_570;
  v231 = v226->fields._size;
  if ( (unsigned int)v231 >= v229->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v226,
      10,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v230[4] + 192LL) + 112LL));
    v229 = v226->fields._items;
    v230 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v226->fields._version;
    if ( !v229 )
      goto LABEL_570;
  }
  else
  {
    v226->fields._size = v231 + 1;
    *((_DWORD *)v229->m_Items + v231) = 10;
    ++v226->fields._version;
  }
  v232 = v226->fields._size;
  if ( (unsigned int)v232 >= v229->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v226,
      11,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v230[4] + 192LL) + 112LL));
    v229 = v226->fields._items;
    v230 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v226->fields._version;
    if ( !v229 )
      goto LABEL_570;
  }
  else
  {
    v226->fields._size = v232 + 1;
    *((_DWORD *)v229->m_Items + v232) = 11;
    ++v226->fields._version;
  }
  v233 = v226->fields._size;
  if ( (unsigned int)v233 >= v229->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v226,
      12,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v230[4] + 192LL) + 112LL));
  }
  else
  {
    v226->fields._size = v233 + 1;
    *((_DWORD *)v229->m_Items + v233) = 12;
  }
  v234 = FilterKindList_TypeInfo->static_fields;
  v234->CollectionStateFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v226;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v234->CollectionStateFilterKindList, (int32_t)v226, v227, v228);
  v235 = (System_Collections_Generic_List_T__o *)sub_1B00F18(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v235,
    (const MethodInfo_33A6984 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v235 )
    goto LABEL_570;
  v238 = v235->fields._items;
  v239 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v235->fields._version;
  if ( !v238 )
    goto LABEL_570;
  v240 = v235->fields._size;
  if ( (unsigned int)v240 >= v238->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v235,
      11,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v239[4] + 192LL) + 112LL));
    v238 = v235->fields._items;
    v239 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v235->fields._version;
    if ( !v238 )
      goto LABEL_570;
  }
  else
  {
    v235->fields._size = v240 + 1;
    *((_DWORD *)v238->m_Items + v240) = 11;
    ++v235->fields._version;
  }
  v241 = v235->fields._size;
  if ( (unsigned int)v241 >= v238->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v235,
      12,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v239[4] + 192LL) + 112LL));
  }
  else
  {
    v235->fields._size = v241 + 1;
    *((_DWORD *)v238->m_Items + v241) = 12;
  }
  v242 = FilterKindList_TypeInfo->static_fields;
  v242->BonusSelectCollectionStateFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v235;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&v242->BonusSelectCollectionStateFilterKindList,
    (int32_t)v235,
    v236,
    v237);
  v243 = (System_Collections_Generic_List_T__o *)sub_1B00F18(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v243,
    (const MethodInfo_33A6984 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v243 )
    goto LABEL_570;
  v246 = v243->fields._items;
  v247 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v243->fields._version;
  if ( !v246 )
    goto LABEL_570;
  v248 = v243->fields._size;
  if ( (unsigned int)v248 >= v246->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v243,
      52,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v247[4] + 192LL) + 112LL));
    v246 = v243->fields._items;
    v247 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v243->fields._version;
    if ( !v246 )
      goto LABEL_570;
  }
  else
  {
    v243->fields._size = v248 + 1;
    *((_DWORD *)v246->m_Items + v248) = 52;
    ++v243->fields._version;
  }
  v249 = v243->fields._size;
  if ( (unsigned int)v249 >= v246->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v243,
      53,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v247[4] + 192LL) + 112LL));
  }
  else
  {
    v243->fields._size = v249 + 1;
    *((_DWORD *)v246->m_Items + v249) = 53;
  }
  v250 = FilterKindList_TypeInfo->static_fields;
  v250->ServantHaveFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v243;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v250->ServantHaveFilterKindList, (int32_t)v243, v244, v245);
  v251 = (System_Collections_Generic_List_T__o *)sub_1B00F18(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v251,
    (const MethodInfo_33A6984 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v251 )
    goto LABEL_570;
  v254 = v251->fields._items;
  v255 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v251->fields._version;
  if ( !v254 )
    goto LABEL_570;
  v256 = v251->fields._size;
  if ( (unsigned int)v256 >= v254->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v251,
      50,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v255[4] + 192LL) + 112LL));
    v254 = v251->fields._items;
    v255 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v251->fields._version;
    if ( !v254 )
      goto LABEL_570;
  }
  else
  {
    v251->fields._size = v256 + 1;
    *((_DWORD *)v254->m_Items + v256) = 50;
    ++v251->fields._version;
  }
  v257 = v251->fields._size;
  if ( (unsigned int)v257 >= v254->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v251,
      51,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v255[4] + 192LL) + 112LL));
  }
  else
  {
    v251->fields._size = v257 + 1;
    *((_DWORD *)v254->m_Items + v257) = 51;
  }
  v258 = FilterKindList_TypeInfo->static_fields;
  v258->ServantEffectApplySubjectFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v251;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&v258->ServantEffectApplySubjectFilterKindList,
    (int32_t)v251,
    v252,
    v253);
  v259 = (System_Collections_Generic_List_T__o *)sub_1B00F18(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v259,
    (const MethodInfo_33A6984 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v259 )
    goto LABEL_570;
  v262 = v259->fields._items;
  v263 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v259->fields._version;
  if ( !v262 )
    goto LABEL_570;
  v264 = v259->fields._size;
  if ( (unsigned int)v264 >= v262->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v259,
      69,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v263[4] + 192LL) + 112LL));
    v262 = v259->fields._items;
    v263 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v259->fields._version;
    if ( !v262 )
      goto LABEL_570;
  }
  else
  {
    v259->fields._size = v264 + 1;
    *((_DWORD *)v262->m_Items + v264) = 69;
    ++v259->fields._version;
  }
  v265 = v259->fields._size;
  if ( (unsigned int)v265 >= v262->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v259,
      70,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v263[4] + 192LL) + 112LL));
    v262 = v259->fields._items;
    v263 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v259->fields._version;
    if ( !v262 )
      goto LABEL_570;
  }
  else
  {
    v259->fields._size = v265 + 1;
    *((_DWORD *)v262->m_Items + v265) = 70;
    ++v259->fields._version;
  }
  v266 = v259->fields._size;
  if ( (unsigned int)v266 >= v262->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v259,
      71,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v263[4] + 192LL) + 112LL));
  }
  else
  {
    v259->fields._size = v266 + 1;
    *((_DWORD *)v262->m_Items + v266) = 71;
  }
  v267 = FilterKindList_TypeInfo->static_fields;
  v267->ServantSummonCategoryFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v259;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&v267->ServantSummonCategoryFilterKindList,
    (int32_t)v259,
    v260,
    v261);
  v268 = (System_Collections_Generic_List_T__o *)sub_1B00F18(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v268,
    (const MethodInfo_33A6984 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v268 )
    goto LABEL_570;
  v271 = v268->fields._items;
  v272 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v268->fields._version;
  if ( !v271 )
    goto LABEL_570;
  v273 = v268->fields._size;
  if ( (unsigned int)v273 >= v271->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v268,
      38,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v272[4] + 192LL) + 112LL));
    v271 = v268->fields._items;
    v272 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v268->fields._version;
    if ( !v271 )
      goto LABEL_570;
  }
  else
  {
    v268->fields._size = v273 + 1;
    *((_DWORD *)v271->m_Items + v273) = 38;
    ++v268->fields._version;
  }
  v274 = v268->fields._size;
  if ( (unsigned int)v274 >= v271->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v268,
      37,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v272[4] + 192LL) + 112LL));
    v271 = v268->fields._items;
    v272 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v268->fields._version;
    if ( !v271 )
      goto LABEL_570;
  }
  else
  {
    v268->fields._size = v274 + 1;
    *((_DWORD *)v271->m_Items + v274) = 37;
    ++v268->fields._version;
  }
  v275 = v268->fields._size;
  if ( (unsigned int)v275 >= v271->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v268,
      36,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v272[4] + 192LL) + 112LL));
    v271 = v268->fields._items;
    v272 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v268->fields._version;
    if ( !v271 )
      goto LABEL_570;
  }
  else
  {
    v268->fields._size = v275 + 1;
    *((_DWORD *)v271->m_Items + v275) = 36;
    ++v268->fields._version;
  }
  v276 = v268->fields._size;
  if ( (unsigned int)v276 >= v271->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v268,
      35,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v272[4] + 192LL) + 112LL));
    v271 = v268->fields._items;
    v272 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v268->fields._version;
    if ( !v271 )
      goto LABEL_570;
  }
  else
  {
    v268->fields._size = v276 + 1;
    *((_DWORD *)v271->m_Items + v276) = 35;
    ++v268->fields._version;
  }
  v277 = v268->fields._size;
  if ( (unsigned int)v277 >= v271->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v268,
      34,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v272[4] + 192LL) + 112LL));
  }
  else
  {
    v268->fields._size = v277 + 1;
    *((_DWORD *)v271->m_Items + v277) = 34;
  }
  v278 = FilterKindList_TypeInfo->static_fields;
  v278->RarityFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v268;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v278->RarityFilterKindList, (int32_t)v268, v269, v270);
  v279 = (System_Collections_Generic_List_T__o *)sub_1B00F18(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v279,
    (const MethodInfo_33A6984 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v279 )
    goto LABEL_570;
  v282 = v279->fields._items;
  v283 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v279->fields._version;
  if ( !v282 )
    goto LABEL_570;
  v284 = v279->fields._size;
  if ( (unsigned int)v284 >= v282->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v279,
      54,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v283[4] + 192LL) + 112LL));
    v282 = v279->fields._items;
    v283 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v279->fields._version;
    if ( !v282 )
      goto LABEL_570;
  }
  else
  {
    v279->fields._size = v284 + 1;
    *((_DWORD *)v282->m_Items + v284) = 54;
    ++v279->fields._version;
  }
  v285 = v279->fields._size;
  if ( (unsigned int)v285 >= v282->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v279,
      55,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v283[4] + 192LL) + 112LL));
    v282 = v279->fields._items;
    v283 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v279->fields._version;
    if ( !v282 )
      goto LABEL_570;
  }
  else
  {
    v279->fields._size = v285 + 1;
    *((_DWORD *)v282->m_Items + v285) = 55;
    ++v279->fields._version;
  }
  v286 = v279->fields._size;
  if ( (unsigned int)v286 >= v282->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v279,
      72,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v283[4] + 192LL) + 112LL));
    v282 = v279->fields._items;
    v283 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v279->fields._version;
    if ( !v282 )
      goto LABEL_570;
  }
  else
  {
    v279->fields._size = v286 + 1;
    *((_DWORD *)v282->m_Items + v286) = 72;
    ++v279->fields._version;
  }
  v287 = v279->fields._size;
  if ( (unsigned int)v287 >= v282->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v279,
      73,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v283[4] + 192LL) + 112LL));
    v282 = v279->fields._items;
    v283 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v279->fields._version;
    if ( !v282 )
      goto LABEL_570;
  }
  else
  {
    v279->fields._size = v287 + 1;
    *((_DWORD *)v282->m_Items + v287) = 73;
    ++v279->fields._version;
  }
  v288 = v279->fields._size;
  if ( (unsigned int)v288 >= v282->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v279,
      74,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v283[4] + 192LL) + 112LL));
    v282 = v279->fields._items;
    v283 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v279->fields._version;
    if ( !v282 )
      goto LABEL_570;
  }
  else
  {
    v279->fields._size = v288 + 1;
    *((_DWORD *)v282->m_Items + v288) = 74;
    ++v279->fields._version;
  }
  v289 = v279->fields._size;
  if ( (unsigned int)v289 >= v282->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v279,
      75,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v283[4] + 192LL) + 112LL));
    v282 = v279->fields._items;
    v283 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v279->fields._version;
    if ( !v282 )
      goto LABEL_570;
  }
  else
  {
    v279->fields._size = v289 + 1;
    *((_DWORD *)v282->m_Items + v289) = 75;
    ++v279->fields._version;
  }
  v290 = v279->fields._size;
  if ( (unsigned int)v290 >= v282->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v279,
      76,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v283[4] + 192LL) + 112LL));
    v282 = v279->fields._items;
    v283 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v279->fields._version;
    if ( !v282 )
      goto LABEL_570;
  }
  else
  {
    v279->fields._size = v290 + 1;
    *((_DWORD *)v282->m_Items + v290) = 76;
    ++v279->fields._version;
  }
  v291 = v279->fields._size;
  if ( (unsigned int)v291 >= v282->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v279,
      56,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v283[4] + 192LL) + 112LL));
  }
  else
  {
    v279->fields._size = v291 + 1;
    *((_DWORD *)v282->m_Items + v291) = 56;
  }
  v292 = FilterKindList_TypeInfo->static_fields;
  v292->ServantEquipTypeFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v279;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v292->ServantEquipTypeFilterKindList, (int32_t)v279, v280, v281);
  v293 = (System_Collections_Generic_List_T__o *)sub_1B00F18(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v293,
    (const MethodInfo_33A6984 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v293 )
    goto LABEL_570;
  v296 = v293->fields._items;
  v297 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v293->fields._version;
  if ( !v296 )
    goto LABEL_570;
  v298 = v293->fields._size;
  if ( (unsigned int)v298 >= v296->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v293,
      77,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v297[4] + 192LL) + 112LL));
    v296 = v293->fields._items;
    v297 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v293->fields._version;
    if ( !v296 )
      goto LABEL_570;
  }
  else
  {
    v293->fields._size = v298 + 1;
    *((_DWORD *)v296->m_Items + v298) = 77;
    ++v293->fields._version;
  }
  v299 = v293->fields._size;
  if ( (unsigned int)v299 >= v296->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v293,
      78,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v297[4] + 192LL) + 112LL));
    v296 = v293->fields._items;
    v297 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v293->fields._version;
    if ( !v296 )
      goto LABEL_570;
  }
  else
  {
    v293->fields._size = v299 + 1;
    *((_DWORD *)v296->m_Items + v299) = 78;
    ++v293->fields._version;
  }
  v300 = v293->fields._size;
  if ( (unsigned int)v300 >= v296->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v293,
      79,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v297[4] + 192LL) + 112LL));
    v296 = v293->fields._items;
    v297 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v293->fields._version;
    if ( !v296 )
      goto LABEL_570;
  }
  else
  {
    v293->fields._size = v300 + 1;
    *((_DWORD *)v296->m_Items + v300) = 79;
    ++v293->fields._version;
  }
  v301 = v293->fields._size;
  if ( (unsigned int)v301 >= v296->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v293,
      80,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v297[4] + 192LL) + 112LL));
    v296 = v293->fields._items;
    v297 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v293->fields._version;
    if ( !v296 )
      goto LABEL_570;
  }
  else
  {
    v293->fields._size = v301 + 1;
    *((_DWORD *)v296->m_Items + v301) = 80;
    ++v293->fields._version;
  }
  v302 = v293->fields._size;
  if ( (unsigned int)v302 >= v296->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v293,
      81,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v297[4] + 192LL) + 112LL));
    v296 = v293->fields._items;
    v297 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v293->fields._version;
    if ( !v296 )
      goto LABEL_570;
  }
  else
  {
    v293->fields._size = v302 + 1;
    *((_DWORD *)v296->m_Items + v302) = 81;
    ++v293->fields._version;
  }
  v303 = v293->fields._size;
  if ( (unsigned int)v303 >= v296->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v293,
      82,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v297[4] + 192LL) + 112LL));
    v296 = v293->fields._items;
    v297 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v293->fields._version;
    if ( !v296 )
      goto LABEL_570;
  }
  else
  {
    v293->fields._size = v303 + 1;
    *((_DWORD *)v296->m_Items + v303) = 82;
    ++v293->fields._version;
  }
  v304 = v293->fields._size;
  if ( (unsigned int)v304 >= v296->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v293,
      83,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v297[4] + 192LL) + 112LL));
  }
  else
  {
    v293->fields._size = v304 + 1;
    *((_DWORD *)v296->m_Items + v304) = 83;
  }
  v305 = (ServantStatusBattleListViewItem_o *)FilterKindList_TypeInfo->static_fields;
  v305[1].klass = (ServantStatusBattleListViewItem_c *)v293;
  sub_1B00C70(v305 + 1, (int32_t)v293, v294, v295);
  v306 = (System_Collections_Generic_List_T__o *)sub_1B00F18(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v306,
    (const MethodInfo_33A6984 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v306 )
    goto LABEL_570;
  v309 = v306->fields._items;
  v310 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v306->fields._version;
  if ( !v309 )
    goto LABEL_570;
  v311 = v306->fields._size;
  if ( (unsigned int)v311 >= v309->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v306,
      84,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v310[4] + 192LL) + 112LL));
    v309 = v306->fields._items;
    v310 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v306->fields._version;
    if ( !v309 )
      goto LABEL_570;
  }
  else
  {
    v306->fields._size = v311 + 1;
    *((_DWORD *)v309->m_Items + v311) = 84;
    ++v306->fields._version;
  }
  v312 = v306->fields._size;
  if ( (unsigned int)v312 >= v309->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v306,
      85,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v310[4] + 192LL) + 112LL));
    v309 = v306->fields._items;
    v310 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v306->fields._version;
    if ( !v309 )
      goto LABEL_570;
  }
  else
  {
    v306->fields._size = v312 + 1;
    *((_DWORD *)v309->m_Items + v312) = 85;
    ++v306->fields._version;
  }
  v313 = v306->fields._size;
  if ( (unsigned int)v313 >= v309->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v306,
      86,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v310[4] + 192LL) + 112LL));
    v309 = v306->fields._items;
    v310 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v306->fields._version;
    if ( !v309 )
      goto LABEL_570;
  }
  else
  {
    v306->fields._size = v313 + 1;
    *((_DWORD *)v309->m_Items + v313) = 86;
    ++v306->fields._version;
  }
  v314 = v306->fields._size;
  if ( (unsigned int)v314 >= v309->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v306,
      87,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v310[4] + 192LL) + 112LL));
  }
  else
  {
    v306->fields._size = v314 + 1;
    *((_DWORD *)v309->m_Items + v314) = 87;
  }
  v315 = FilterKindList_TypeInfo->static_fields;
  v315->ServantEquipHaveStatusFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v306;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&v315->ServantEquipHaveStatusFilterKindList,
    (int32_t)v306,
    v307,
    v308);
  v316 = (System_Collections_Generic_List_T__o *)sub_1B00F18(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v316,
    (const MethodInfo_33A6984 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v316 )
    goto LABEL_570;
  v319 = v316->fields._items;
  v320 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v316->fields._version;
  if ( !v319 )
    goto LABEL_570;
  v321 = v316->fields._size;
  if ( (unsigned int)v321 >= v319->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v316,
      30,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v320[4] + 192LL) + 112LL));
    v319 = v316->fields._items;
    v320 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v316->fields._version;
    if ( !v319 )
      goto LABEL_570;
  }
  else
  {
    v316->fields._size = v321 + 1;
    *((_DWORD *)v319->m_Items + v321) = 30;
    ++v316->fields._version;
  }
  v322 = v316->fields._size;
  if ( (unsigned int)v322 >= v319->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v316,
      31,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v320[4] + 192LL) + 112LL));
  }
  else
  {
    v316->fields._size = v322 + 1;
    *((_DWORD *)v319->m_Items + v322) = 31;
  }
  v323 = FilterKindList_TypeInfo->static_fields;
  v323->ServantCostumeFilterKind = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v316;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v323->ServantCostumeFilterKind, (int32_t)v316, v317, v318);
  v324 = (System_Collections_Generic_List_T__o *)sub_1B00F18(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v324,
    (const MethodInfo_33A6984 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v324 )
    goto LABEL_570;
  v327 = v324->fields._items;
  v328 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v324->fields._version;
  if ( !v327 )
    goto LABEL_570;
  v329 = v324->fields._size;
  if ( (unsigned int)v329 < v327->max_length )
  {
    v324->fields._size = v329 + 1;
    *((_DWORD *)v327->m_Items + v329) = 32;
    ++v324->fields._version;
    goto LABEL_566;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v324,
    32,
    *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v328[4] + 192LL) + 112LL));
  v327 = v324->fields._items;
  v328 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v324->fields._version;
  if ( !v327 )
LABEL_570:
    sub_1B00F28(v6, v7);
LABEL_566:
  v330 = v324->fields._size;
  if ( (unsigned int)v330 >= v327->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v324,
      33,
      *(const MethodInfo_33A71D8 **)(*(_QWORD *)(v328[4] + 192LL) + 112LL));
  }
  else
  {
    v324->fields._size = v330 + 1;
    *((_DWORD *)v327->m_Items + v330) = 33;
  }
  v331 = FilterKindList_TypeInfo->static_fields;
  v331->MaterialServantCostumeFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v324;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&v331->MaterialServantCostumeFilterKindList,
    (int32_t)v324,
    v325,
    v326);
}


void __fastcall FilterKindList___ctor(FilterKindList_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}