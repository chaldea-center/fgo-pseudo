void __fastcall FilterKindList___cctor(const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v1; // x19
  __int64 v2; // x0
  __int64 v3; // x1
  _QWORD *v4; // x8
  int32_t *p_version; // x23
  struct System_Object_array *items; // x9
  __int64 size; // x10
  int32_t *p_size; // x24
  __int64 v9; // x10
  __int64 v10; // x10
  __int64 v11; // x10
  __int64 v12; // x10
  __int64 v13; // x10
  __int64 v14; // x10
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
  System_Collections_Generic_List_T__o *v83; // x19
  _QWORD *v84; // x8
  int32_t *v85; // x25
  struct System_Object_array *v86; // x9
  __int64 v87; // x10
  int32_t *v88; // x24
  __int64 v89; // x10
  __int64 v90; // x10
  __int64 v91; // x10
  __int64 v92; // x10
  __int64 v93; // x10
  __int64 v94; // x10
  __int64 v95; // x10
  __int64 v96; // x10
  __int64 v97; // x10
  __int64 v98; // x10
  __int64 v99; // x10
  __int64 v100; // x10
  __int64 v101; // x10
  __int64 v102; // x10
  struct FilterKindList_StaticFields *static_fields; // x0
  System_Collections_Generic_List_T__o *v104; // x19
  struct System_Object_array *v105; // x8
  _QWORD *v106; // x9
  __int64 v107; // x10
  __int64 v108; // x10
  __int64 v109; // x10
  struct FilterKindList_StaticFields *v110; // x0
  System_Collections_Generic_List_T__o *v111; // x19
  struct System_Object_array *v112; // x8
  _QWORD *v113; // x9
  __int64 v114; // x10
  __int64 v115; // x10
  __int64 v116; // x10
  __int64 v117; // x10
  struct FilterKindList_StaticFields *v118; // x0
  System_Collections_Generic_List_T__o *v119; // x19
  struct System_Object_array *v120; // x8
  _QWORD *v121; // x9
  __int64 v122; // x10
  __int64 v123; // x10
  __int64 v124; // x10
  struct FilterKindList_StaticFields *v125; // x0
  System_Collections_Generic_List_T__o *v126; // x19
  struct System_Object_array *v127; // x8
  _QWORD *v128; // x9
  __int64 v129; // x10
  __int64 v130; // x10
  __int64 v131; // x10
  __int64 v132; // x10
  struct FilterKindList_StaticFields *v133; // x0
  System_Collections_Generic_List_T__o *v134; // x19
  struct System_Object_array *v135; // x8
  _QWORD *v136; // x9
  __int64 v137; // x10
  __int64 v138; // x10
  __int64 v139; // x10
  __int64 v140; // x10
  struct FilterKindList_StaticFields *v141; // x0
  System_Collections_Generic_List_T__o *v142; // x19
  struct System_Object_array *v143; // x8
  _QWORD *v144; // x9
  __int64 v145; // x10
  __int64 v146; // x10
  __int64 v147; // x10
  __int64 v148; // x10
  struct FilterKindList_StaticFields *v149; // x0
  System_Collections_Generic_List_T__o *v150; // x19
  struct System_Object_array *v151; // x8
  _QWORD *v152; // x9
  __int64 v153; // x10
  __int64 v154; // x10
  struct FilterKindList_StaticFields *v155; // x0
  System_Collections_Generic_List_T__o *v156; // x19
  struct System_Object_array *v157; // x8
  _QWORD *v158; // x9
  __int64 v159; // x10
  __int64 v160; // x10
  __int64 v161; // x10
  struct FilterKindList_StaticFields *v162; // x0
  System_Collections_Generic_List_T__o *v163; // x19
  struct System_Object_array *v164; // x8
  _QWORD *v165; // x9
  __int64 v166; // x10
  __int64 v167; // x10
  __int64 v168; // x10
  struct FilterKindList_StaticFields *v169; // x0
  System_Collections_Generic_List_T__o *v170; // x19
  struct System_Object_array *v171; // x8
  _QWORD *v172; // x9
  __int64 v173; // x10
  __int64 v174; // x10
  __int64 v175; // x10
  struct FilterKindList_StaticFields *v176; // x0
  System_Collections_Generic_List_T__o *v177; // x19
  struct System_Object_array *v178; // x9
  _QWORD *v179; // x8
  __int64 v180; // x10
  __int64 v181; // x10
  __int64 v182; // x10
  __int64 v183; // x10
  __int64 v184; // x10
  __int64 v185; // x10
  __int64 v186; // x10
  struct FilterKindList_StaticFields *v187; // x0
  System_Collections_Generic_List_T__o *v188; // x19
  struct System_Object_array *v189; // x8
  _QWORD *v190; // x9
  __int64 v191; // x10
  __int64 v192; // x10
  struct FilterKindList_StaticFields *v193; // x0
  System_Collections_Generic_List_T__o *v194; // x19
  struct System_Object_array *v195; // x8
  _QWORD *v196; // x9
  __int64 v197; // x10
  __int64 v198; // x10
  __int64 v199; // x10
  struct FilterKindList_StaticFields *v200; // x0
  System_Collections_Generic_List_T__o *v201; // x19
  struct System_Object_array *v202; // x8
  _QWORD *v203; // x9
  __int64 v204; // x10
  __int64 v205; // x10
  struct FilterKindList_StaticFields *v206; // x0
  System_Collections_Generic_List_T__o *v207; // x19
  struct System_Object_array *v208; // x8
  _QWORD *v209; // x9
  __int64 v210; // x10
  __int64 v211; // x10
  struct FilterKindList_StaticFields *v212; // x0
  System_Collections_Generic_List_T__o *v213; // x19
  struct System_Object_array *v214; // x8
  _QWORD *v215; // x9
  __int64 v216; // x10
  __int64 v217; // x10
  struct FilterKindList_StaticFields *v218; // x0
  System_Collections_Generic_List_T__o *v219; // x19
  struct System_Object_array *v220; // x8
  _QWORD *v221; // x9
  __int64 v222; // x10
  __int64 v223; // x10
  __int64 v224; // x10
  struct FilterKindList_StaticFields *v225; // x0
  System_Collections_Generic_List_T__o *v226; // x19
  struct System_Object_array *v227; // x8
  _QWORD *v228; // x9
  __int64 v229; // x10
  __int64 v230; // x10
  __int64 v231; // x10
  __int64 v232; // x10
  __int64 v233; // x10
  struct FilterKindList_StaticFields *v234; // x0
  System_Collections_Generic_List_T__o *v235; // x19
  struct System_Object_array *v236; // x9
  _QWORD *v237; // x8
  __int64 v238; // x10
  __int64 v239; // x10
  __int64 v240; // x10
  __int64 v241; // x10
  __int64 v242; // x10
  __int64 v243; // x10
  __int64 v244; // x10
  __int64 v245; // x10
  struct FilterKindList_StaticFields *v246; // x0
  System_Collections_Generic_List_T__o *v247; // x19
  struct System_Object_array *v248; // x9
  _QWORD *v249; // x8
  __int64 v250; // x10
  __int64 v251; // x10
  __int64 v252; // x10
  __int64 v253; // x10
  __int64 v254; // x10
  __int64 v255; // x10
  __int64 v256; // x10
  struct FilterKindList_StaticFields *v257; // x0
  System_Collections_Generic_List_T__o *v258; // x19
  struct System_Object_array *v259; // x8
  _QWORD *v260; // x9
  __int64 v261; // x10
  __int64 v262; // x10
  __int64 v263; // x10
  __int64 v264; // x10
  struct FilterKindList_StaticFields *v265; // x0
  System_Collections_Generic_List_T__o *v266; // x19
  struct System_Object_array *v267; // x8
  _QWORD *v268; // x9
  __int64 v269; // x10
  __int64 v270; // x10
  struct FilterKindList_StaticFields *v271; // x0
  System_Collections_Generic_List_T__o *v272; // x19
  struct System_Object_array *v273; // x8
  _QWORD *v274; // x9
  __int64 v275; // x10
  __int64 v276; // x10
  struct FilterKindList_StaticFields *v277; // x0

  if ( (byte_4A562E2 & 1) == 0 )
  {
    sub_1B885B0(&FilterKindList_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
    byte_4A562E2 = 1;
  }
  v1 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v1,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v1 )
    goto LABEL_570;
  v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  p_version = &v1->fields._version;
  ++v1->fields._version;
  items = v1->fields._items;
  p_size = &v1->fields._size;
  size = v1->fields._size;
  if ( !items )
    goto LABEL_570;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      8,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = size + 1;
    *((_DWORD *)items->m_Items + size) = 8;
    ++*p_version;
  }
  v9 = *p_size;
  if ( (unsigned int)v9 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      9,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v9 + 1;
    *((_DWORD *)items->m_Items + v9) = 9;
    ++*p_version;
  }
  v10 = *p_size;
  if ( (unsigned int)v10 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      0,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v10 + 1;
    *((_DWORD *)items->m_Items + v10) = 0;
    ++*p_version;
  }
  v11 = *p_size;
  if ( (unsigned int)v11 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      1,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v11 + 1;
    *((_DWORD *)items->m_Items + v11) = 1;
    ++*p_version;
  }
  v12 = *p_size;
  if ( (unsigned int)v12 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      2,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v12 + 1;
    *((_DWORD *)items->m_Items + v12) = 2;
    ++*p_version;
  }
  v13 = *p_size;
  if ( (unsigned int)v13 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      3,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v13 + 1;
    *((_DWORD *)items->m_Items + v13) = 3;
    ++*p_version;
  }
  v14 = *p_size;
  if ( (unsigned int)v14 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      4,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v14 + 1;
    *((_DWORD *)items->m_Items + v14) = 4;
    ++*p_version;
  }
  v15 = *p_size;
  if ( (unsigned int)v15 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      5,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v15 + 1;
    *((_DWORD *)items->m_Items + v15) = 5;
    ++*p_version;
  }
  v16 = *p_size;
  if ( (unsigned int)v16 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      6,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v16 + 1;
    *((_DWORD *)items->m_Items + v16) = 6;
    ++*p_version;
  }
  v17 = *p_size;
  if ( (unsigned int)v17 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      7,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v17 + 1;
    *((_DWORD *)items->m_Items + v17) = 7;
    ++*p_version;
  }
  v18 = *p_size;
  if ( (unsigned int)v18 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      21,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v18 + 1;
    *((_DWORD *)items->m_Items + v18) = 21;
    ++*p_version;
  }
  v19 = *p_size;
  if ( (unsigned int)v19 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      22,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v19 + 1;
    *((_DWORD *)items->m_Items + v19) = 22;
    ++*p_version;
  }
  v20 = *p_size;
  if ( (unsigned int)v20 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      23,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v20 + 1;
    *((_DWORD *)items->m_Items + v20) = 23;
    ++*p_version;
  }
  v21 = *p_size;
  if ( (unsigned int)v21 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      24,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v21 + 1;
    *((_DWORD *)items->m_Items + v21) = 24;
    ++*p_version;
  }
  v22 = *p_size;
  if ( (unsigned int)v22 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      25,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v22 + 1;
    *((_DWORD *)items->m_Items + v22) = 25;
    ++*p_version;
  }
  v23 = *p_size;
  if ( (unsigned int)v23 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      26,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v23 + 1;
    *((_DWORD *)items->m_Items + v23) = 26;
    ++*p_version;
  }
  v24 = *p_size;
  if ( (unsigned int)v24 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      27,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v24 + 1;
    *((_DWORD *)items->m_Items + v24) = 27;
    ++*p_version;
  }
  v25 = *p_size;
  if ( (unsigned int)v25 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      28,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v25 + 1;
    *((_DWORD *)items->m_Items + v25) = 28;
    ++*p_version;
  }
  v26 = *p_size;
  if ( (unsigned int)v26 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      29,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v26 + 1;
    *((_DWORD *)items->m_Items + v26) = 29;
    ++*p_version;
  }
  v27 = *p_size;
  if ( (unsigned int)v27 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      30,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v27 + 1;
    *((_DWORD *)items->m_Items + v27) = 30;
    ++*p_version;
  }
  v28 = *p_size;
  if ( (unsigned int)v28 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      31,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v28 + 1;
    *((_DWORD *)items->m_Items + v28) = 31;
    ++*p_version;
  }
  v29 = *p_size;
  if ( (unsigned int)v29 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      34,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v29 + 1;
    *((_DWORD *)items->m_Items + v29) = 34;
    ++*p_version;
  }
  v30 = *p_size;
  if ( (unsigned int)v30 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      35,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v30 + 1;
    *((_DWORD *)items->m_Items + v30) = 35;
    ++*p_version;
  }
  v31 = *p_size;
  if ( (unsigned int)v31 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      36,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v31 + 1;
    *((_DWORD *)items->m_Items + v31) = 36;
    ++*p_version;
  }
  v32 = *p_size;
  if ( (unsigned int)v32 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      37,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v32 + 1;
    *((_DWORD *)items->m_Items + v32) = 37;
    ++*p_version;
  }
  v33 = *p_size;
  if ( (unsigned int)v33 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      38,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v33 + 1;
    *((_DWORD *)items->m_Items + v33) = 38;
    ++*p_version;
  }
  v34 = *p_size;
  if ( (unsigned int)v34 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      42,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v34 + 1;
    *((_DWORD *)items->m_Items + v34) = 42;
    ++*p_version;
  }
  v35 = *p_size;
  if ( (unsigned int)v35 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      43,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v35 + 1;
    *((_DWORD *)items->m_Items + v35) = 43;
    ++*p_version;
  }
  v36 = *p_size;
  if ( (unsigned int)v36 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      44,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v36 + 1;
    *((_DWORD *)items->m_Items + v36) = 44;
    ++*p_version;
  }
  v37 = *p_size;
  if ( (unsigned int)v37 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      45,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v37 + 1;
    *((_DWORD *)items->m_Items + v37) = 45;
    ++*p_version;
  }
  v38 = *p_size;
  if ( (unsigned int)v38 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      46,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v38 + 1;
    *((_DWORD *)items->m_Items + v38) = 46;
    ++*p_version;
  }
  v39 = *p_size;
  if ( (unsigned int)v39 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      47,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v39 + 1;
    *((_DWORD *)items->m_Items + v39) = 47;
    ++*p_version;
  }
  v40 = *p_size;
  if ( (unsigned int)v40 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      48,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v40 + 1;
    *((_DWORD *)items->m_Items + v40) = 48;
    ++*p_version;
  }
  v41 = *p_size;
  if ( (unsigned int)v41 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      39,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v41 + 1;
    *((_DWORD *)items->m_Items + v41) = 39;
    ++*p_version;
  }
  v42 = *p_size;
  if ( (unsigned int)v42 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      50,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v42 + 1;
    *((_DWORD *)items->m_Items + v42) = 50;
    ++*p_version;
  }
  v43 = *p_size;
  if ( (unsigned int)v43 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      51,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v43 + 1;
    *((_DWORD *)items->m_Items + v43) = 51;
    ++*p_version;
  }
  v44 = *p_size;
  if ( (unsigned int)v44 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      54,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v44 + 1;
    *((_DWORD *)items->m_Items + v44) = 54;
    ++*p_version;
  }
  v45 = *p_size;
  if ( (unsigned int)v45 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      55,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v45 + 1;
    *((_DWORD *)items->m_Items + v45) = 55;
    ++*p_version;
  }
  v46 = *p_size;
  if ( (unsigned int)v46 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      72,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v46 + 1;
    *((_DWORD *)items->m_Items + v46) = 72;
    ++*p_version;
  }
  v47 = *p_size;
  if ( (unsigned int)v47 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      73,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v47 + 1;
    *((_DWORD *)items->m_Items + v47) = 73;
    ++*p_version;
  }
  v48 = *p_size;
  if ( (unsigned int)v48 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      74,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v48 + 1;
    *((_DWORD *)items->m_Items + v48) = 74;
    ++*p_version;
  }
  v49 = *p_size;
  if ( (unsigned int)v49 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      75,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v49 + 1;
    *((_DWORD *)items->m_Items + v49) = 75;
    ++*p_version;
  }
  v50 = *p_size;
  if ( (unsigned int)v50 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      76,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v50 + 1;
    *((_DWORD *)items->m_Items + v50) = 76;
    ++*p_version;
  }
  v51 = *p_size;
  if ( (unsigned int)v51 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      56,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v51 + 1;
    *((_DWORD *)items->m_Items + v51) = 56;
    ++*p_version;
  }
  v52 = *p_size;
  if ( (unsigned int)v52 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      78,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v52 + 1;
    *((_DWORD *)items->m_Items + v52) = 78;
    ++*p_version;
  }
  v53 = *p_size;
  if ( (unsigned int)v53 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      79,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v53 + 1;
    *((_DWORD *)items->m_Items + v53) = 79;
    ++*p_version;
  }
  v54 = *p_size;
  if ( (unsigned int)v54 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      82,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v54 + 1;
    *((_DWORD *)items->m_Items + v54) = 82;
    ++*p_version;
  }
  v55 = *p_size;
  if ( (unsigned int)v55 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      77,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v55 + 1;
    *((_DWORD *)items->m_Items + v55) = 77;
    ++*p_version;
  }
  v56 = *p_size;
  if ( (unsigned int)v56 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      81,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v56 + 1;
    *((_DWORD *)items->m_Items + v56) = 81;
    ++*p_version;
  }
  v57 = *p_size;
  if ( (unsigned int)v57 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      80,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v57 + 1;
    *((_DWORD *)items->m_Items + v57) = 80;
    ++*p_version;
  }
  v58 = *p_size;
  if ( (unsigned int)v58 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      83,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v58 + 1;
    *((_DWORD *)items->m_Items + v58) = 83;
    ++*p_version;
  }
  v59 = *p_size;
  if ( (unsigned int)v59 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      84,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v59 + 1;
    *((_DWORD *)items->m_Items + v59) = 84;
    ++*p_version;
  }
  v60 = *p_size;
  if ( (unsigned int)v60 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      85,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v60 + 1;
    *((_DWORD *)items->m_Items + v60) = 85;
    ++*p_version;
  }
  v61 = *p_size;
  if ( (unsigned int)v61 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      86,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v61 + 1;
    *((_DWORD *)items->m_Items + v61) = 86;
    ++*p_version;
  }
  v62 = *p_size;
  if ( (unsigned int)v62 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      87,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v62 + 1;
    *((_DWORD *)items->m_Items + v62) = 87;
    ++*p_version;
  }
  v63 = *p_size;
  if ( (unsigned int)v63 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      57,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v63 + 1;
    *((_DWORD *)items->m_Items + v63) = 57;
    ++*p_version;
  }
  v64 = *p_size;
  if ( (unsigned int)v64 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      58,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v64 + 1;
    *((_DWORD *)items->m_Items + v64) = 58;
    ++*p_version;
  }
  v65 = *p_size;
  if ( (unsigned int)v65 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      59,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v65 + 1;
    *((_DWORD *)items->m_Items + v65) = 59;
    ++*p_version;
  }
  v66 = *p_size;
  if ( (unsigned int)v66 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      60,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v66 + 1;
    *((_DWORD *)items->m_Items + v66) = 60;
    ++*p_version;
  }
  v67 = *p_size;
  if ( (unsigned int)v67 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      61,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v67 + 1;
    *((_DWORD *)items->m_Items + v67) = 61;
    ++*p_version;
  }
  v68 = *p_size;
  if ( (unsigned int)v68 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      62,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v68 + 1;
    *((_DWORD *)items->m_Items + v68) = 62;
    ++*p_version;
  }
  v69 = *p_size;
  if ( (unsigned int)v69 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      63,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v69 + 1;
    *((_DWORD *)items->m_Items + v69) = 63;
    ++*p_version;
  }
  v70 = *p_size;
  if ( (unsigned int)v70 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      64,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v70 + 1;
    *((_DWORD *)items->m_Items + v70) = 64;
    ++*p_version;
  }
  v71 = *p_size;
  if ( (unsigned int)v71 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      10,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v71 + 1;
    *((_DWORD *)items->m_Items + v71) = 10;
    ++*p_version;
  }
  v72 = *p_size;
  if ( (unsigned int)v72 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      11,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v72 + 1;
    *((_DWORD *)items->m_Items + v72) = 11;
    ++*p_version;
  }
  v73 = *p_size;
  if ( (unsigned int)v73 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      12,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v73 + 1;
    *((_DWORD *)items->m_Items + v73) = 12;
    ++*p_version;
  }
  v74 = *p_size;
  if ( (unsigned int)v74 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      52,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v74 + 1;
    *((_DWORD *)items->m_Items + v74) = 52;
    ++*p_version;
  }
  v75 = *p_size;
  if ( (unsigned int)v75 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      53,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v75 + 1;
    *((_DWORD *)items->m_Items + v75) = 53;
    ++*p_version;
  }
  v76 = *p_size;
  if ( (unsigned int)v76 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      69,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v76 + 1;
    *((_DWORD *)items->m_Items + v76) = 69;
    ++*p_version;
  }
  v77 = *p_size;
  if ( (unsigned int)v77 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      70,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v77 + 1;
    *((_DWORD *)items->m_Items + v77) = 70;
    ++*p_version;
  }
  v78 = *p_size;
  if ( (unsigned int)v78 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      71,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v78 + 1;
    *((_DWORD *)items->m_Items + v78) = 71;
    ++*p_version;
  }
  v79 = *p_size;
  if ( (unsigned int)v79 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      65,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v79 + 1;
    *((_DWORD *)items->m_Items + v79) = 65;
    ++*p_version;
  }
  v80 = *p_size;
  if ( (unsigned int)v80 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      66,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v80 + 1;
    *((_DWORD *)items->m_Items + v80) = 66;
    ++*p_version;
  }
  v81 = *p_size;
  if ( (unsigned int)v81 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      67,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
    items = v1->fields._items;
    v4 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v1->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v81 + 1;
    *((_DWORD *)items->m_Items + v81) = 67;
    ++*p_version;
  }
  v82 = *p_size;
  if ( (unsigned int)v82 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v1,
      68,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v4[4] + 192LL) + 112LL));
  }
  else
  {
    *p_size = v82 + 1;
    *((_DWORD *)items->m_Items + v82) = 68;
  }
  FilterKindList_TypeInfo->static_fields->AllFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v1;
  sub_1B88554(FilterKindList_TypeInfo->static_fields, v1);
  v83 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v83,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v83 )
    goto LABEL_570;
  v84 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  v85 = &v83->fields._version;
  ++v83->fields._version;
  v86 = v83->fields._items;
  v88 = &v83->fields._size;
  v87 = v83->fields._size;
  if ( !v86 )
    goto LABEL_570;
  if ( (unsigned int)v87 >= v86->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v83,
      0,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
    v86 = v83->fields._items;
    v84 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v83->fields._version;
    if ( !v86 )
      goto LABEL_570;
  }
  else
  {
    *v88 = v87 + 1;
    *((_DWORD *)v86->m_Items + v87) = 0;
    ++*v85;
  }
  v89 = *v88;
  if ( (unsigned int)v89 >= v86->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v83,
      1,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
    v86 = v83->fields._items;
    v84 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v83->fields._version;
    if ( !v86 )
      goto LABEL_570;
  }
  else
  {
    *v88 = v89 + 1;
    *((_DWORD *)v86->m_Items + v89) = 1;
    ++*v85;
  }
  v90 = *v88;
  if ( (unsigned int)v90 >= v86->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v83,
      2,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
    v86 = v83->fields._items;
    v84 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v83->fields._version;
    if ( !v86 )
      goto LABEL_570;
  }
  else
  {
    *v88 = v90 + 1;
    *((_DWORD *)v86->m_Items + v90) = 2;
    ++*v85;
  }
  v91 = *v88;
  if ( (unsigned int)v91 >= v86->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v83,
      3,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
    v86 = v83->fields._items;
    v84 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v83->fields._version;
    if ( !v86 )
      goto LABEL_570;
  }
  else
  {
    *v88 = v91 + 1;
    *((_DWORD *)v86->m_Items + v91) = 3;
    ++*v85;
  }
  v92 = *v88;
  if ( (unsigned int)v92 >= v86->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v83,
      4,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
    v86 = v83->fields._items;
    v84 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v83->fields._version;
    if ( !v86 )
      goto LABEL_570;
  }
  else
  {
    *v88 = v92 + 1;
    *((_DWORD *)v86->m_Items + v92) = 4;
    ++*v85;
  }
  v93 = *v88;
  if ( (unsigned int)v93 >= v86->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v83,
      5,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
    v86 = v83->fields._items;
    v84 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v83->fields._version;
    if ( !v86 )
      goto LABEL_570;
  }
  else
  {
    *v88 = v93 + 1;
    *((_DWORD *)v86->m_Items + v93) = 5;
    ++*v85;
  }
  v94 = *v88;
  if ( (unsigned int)v94 >= v86->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v83,
      6,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
    v86 = v83->fields._items;
    v84 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v83->fields._version;
    if ( !v86 )
      goto LABEL_570;
  }
  else
  {
    *v88 = v94 + 1;
    *((_DWORD *)v86->m_Items + v94) = 6;
    ++*v85;
  }
  v95 = *v88;
  if ( (unsigned int)v95 >= v86->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v83,
      57,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
    v86 = v83->fields._items;
    v84 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v83->fields._version;
    if ( !v86 )
      goto LABEL_570;
  }
  else
  {
    *v88 = v95 + 1;
    *((_DWORD *)v86->m_Items + v95) = 57;
    ++*v85;
  }
  v96 = *v88;
  if ( (unsigned int)v96 >= v86->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v83,
      58,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
    v86 = v83->fields._items;
    v84 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v83->fields._version;
    if ( !v86 )
      goto LABEL_570;
  }
  else
  {
    *v88 = v96 + 1;
    *((_DWORD *)v86->m_Items + v96) = 58;
    ++*v85;
  }
  v97 = *v88;
  if ( (unsigned int)v97 >= v86->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v83,
      59,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
    v86 = v83->fields._items;
    v84 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v83->fields._version;
    if ( !v86 )
      goto LABEL_570;
  }
  else
  {
    *v88 = v97 + 1;
    *((_DWORD *)v86->m_Items + v97) = 59;
    ++*v85;
  }
  v98 = *v88;
  if ( (unsigned int)v98 >= v86->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v83,
      60,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
    v86 = v83->fields._items;
    v84 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v83->fields._version;
    if ( !v86 )
      goto LABEL_570;
  }
  else
  {
    *v88 = v98 + 1;
    *((_DWORD *)v86->m_Items + v98) = 60;
    ++*v85;
  }
  v99 = *v88;
  if ( (unsigned int)v99 >= v86->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v83,
      61,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
    v86 = v83->fields._items;
    v84 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v83->fields._version;
    if ( !v86 )
      goto LABEL_570;
  }
  else
  {
    *v88 = v99 + 1;
    *((_DWORD *)v86->m_Items + v99) = 61;
    ++*v85;
  }
  v100 = *v88;
  if ( (unsigned int)v100 >= v86->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v83,
      62,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
    v86 = v83->fields._items;
    v84 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v83->fields._version;
    if ( !v86 )
      goto LABEL_570;
  }
  else
  {
    *v88 = v100 + 1;
    *((_DWORD *)v86->m_Items + v100) = 62;
    ++*v85;
  }
  v101 = *v88;
  if ( (unsigned int)v101 >= v86->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v83,
      63,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
    v86 = v83->fields._items;
    v84 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v83->fields._version;
    if ( !v86 )
      goto LABEL_570;
  }
  else
  {
    *v88 = v101 + 1;
    *((_DWORD *)v86->m_Items + v101) = 63;
    ++*v85;
  }
  v102 = *v88;
  if ( (unsigned int)v102 >= v86->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v83,
      64,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
  }
  else
  {
    *v88 = v102 + 1;
    *((_DWORD *)v86->m_Items + v102) = 64;
  }
  static_fields = FilterKindList_TypeInfo->static_fields;
  static_fields->ClassFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v83;
  sub_1B88554(&static_fields->ClassFilterKindList, v83);
  v104 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v104,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v104 )
    goto LABEL_570;
  v105 = v104->fields._items;
  v106 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v104->fields._version;
  if ( !v105 )
    goto LABEL_570;
  v107 = v104->fields._size;
  if ( (unsigned int)v107 >= v105->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v104,
      0,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
    v105 = v104->fields._items;
    v106 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v104->fields._version;
    if ( !v105 )
      goto LABEL_570;
  }
  else
  {
    v104->fields._size = v107 + 1;
    *((_DWORD *)v105->m_Items + v107) = 0;
    ++v104->fields._version;
  }
  v108 = v104->fields._size;
  if ( (unsigned int)v108 >= v105->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v104,
      1,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
    v105 = v104->fields._items;
    v106 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v104->fields._version;
    if ( !v105 )
      goto LABEL_570;
  }
  else
  {
    v104->fields._size = v108 + 1;
    *((_DWORD *)v105->m_Items + v108) = 1;
    ++v104->fields._version;
  }
  v109 = v104->fields._size;
  if ( (unsigned int)v109 >= v105->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v104,
      2,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
  }
  else
  {
    v104->fields._size = v109 + 1;
    *((_DWORD *)v105->m_Items + v109) = 2;
  }
  v110 = FilterKindList_TypeInfo->static_fields;
  v110->ThreeKnightsFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v104;
  sub_1B88554(&v110->ThreeKnightsFilterKindList, v104);
  v111 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v111,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v111 )
    goto LABEL_570;
  v112 = v111->fields._items;
  v113 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v111->fields._version;
  if ( !v112 )
    goto LABEL_570;
  v114 = v111->fields._size;
  if ( (unsigned int)v114 >= v112->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v111,
      3,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v113[4] + 192LL) + 112LL));
    v112 = v111->fields._items;
    v113 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v111->fields._version;
    if ( !v112 )
      goto LABEL_570;
  }
  else
  {
    v111->fields._size = v114 + 1;
    *((_DWORD *)v112->m_Items + v114) = 3;
    ++v111->fields._version;
  }
  v115 = v111->fields._size;
  if ( (unsigned int)v115 >= v112->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v111,
      4,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v113[4] + 192LL) + 112LL));
    v112 = v111->fields._items;
    v113 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v111->fields._version;
    if ( !v112 )
      goto LABEL_570;
  }
  else
  {
    v111->fields._size = v115 + 1;
    *((_DWORD *)v112->m_Items + v115) = 4;
    ++v111->fields._version;
  }
  v116 = v111->fields._size;
  if ( (unsigned int)v116 >= v112->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v111,
      5,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v113[4] + 192LL) + 112LL));
    v112 = v111->fields._items;
    v113 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v111->fields._version;
    if ( !v112 )
      goto LABEL_570;
  }
  else
  {
    v111->fields._size = v116 + 1;
    *((_DWORD *)v112->m_Items + v116) = 5;
    ++v111->fields._version;
  }
  v117 = v111->fields._size;
  if ( (unsigned int)v117 >= v112->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v111,
      6,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v113[4] + 192LL) + 112LL));
  }
  else
  {
    v111->fields._size = v117 + 1;
    *((_DWORD *)v112->m_Items + v117) = 6;
  }
  v118 = FilterKindList_TypeInfo->static_fields;
  v118->FourCavalryFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v111;
  sub_1B88554(&v118->FourCavalryFilterKindList, v111);
  v119 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v119,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v119 )
    goto LABEL_570;
  v120 = v119->fields._items;
  v121 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v119->fields._version;
  if ( !v120 )
    goto LABEL_570;
  v122 = v119->fields._size;
  if ( (unsigned int)v122 >= v120->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v119,
      58,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v121[4] + 192LL) + 112LL));
    v120 = v119->fields._items;
    v121 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v119->fields._version;
    if ( !v120 )
      goto LABEL_570;
  }
  else
  {
    v119->fields._size = v122 + 1;
    *((_DWORD *)v120->m_Items + v122) = 58;
    ++v119->fields._version;
  }
  v123 = v119->fields._size;
  if ( (unsigned int)v123 >= v120->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v119,
      59,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v121[4] + 192LL) + 112LL));
    v120 = v119->fields._items;
    v121 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v119->fields._version;
    if ( !v120 )
      goto LABEL_570;
  }
  else
  {
    v119->fields._size = v123 + 1;
    *((_DWORD *)v120->m_Items + v123) = 59;
    ++v119->fields._version;
  }
  v124 = v119->fields._size;
  if ( (unsigned int)v124 >= v120->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v119,
      60,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v121[4] + 192LL) + 112LL));
  }
  else
  {
    v119->fields._size = v124 + 1;
    *((_DWORD *)v120->m_Items + v124) = 60;
  }
  v125 = FilterKindList_TypeInfo->static_fields;
  v125->ClassExtra1FilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v119;
  sub_1B88554(&v125->ClassExtra1FilterKindList, v119);
  v126 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v126,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v126 )
    goto LABEL_570;
  v127 = v126->fields._items;
  v128 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v126->fields._version;
  if ( !v127 )
    goto LABEL_570;
  v129 = v126->fields._size;
  if ( (unsigned int)v129 >= v127->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v126,
      57,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v128[4] + 192LL) + 112LL));
    v127 = v126->fields._items;
    v128 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v126->fields._version;
    if ( !v127 )
      goto LABEL_570;
  }
  else
  {
    v126->fields._size = v129 + 1;
    *((_DWORD *)v127->m_Items + v129) = 57;
    ++v126->fields._version;
  }
  v130 = v126->fields._size;
  if ( (unsigned int)v130 >= v127->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v126,
      58,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v128[4] + 192LL) + 112LL));
    v127 = v126->fields._items;
    v128 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v126->fields._version;
    if ( !v127 )
      goto LABEL_570;
  }
  else
  {
    v126->fields._size = v130 + 1;
    *((_DWORD *)v127->m_Items + v130) = 58;
    ++v126->fields._version;
  }
  v131 = v126->fields._size;
  if ( (unsigned int)v131 >= v127->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v126,
      59,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v128[4] + 192LL) + 112LL));
    v127 = v126->fields._items;
    v128 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v126->fields._version;
    if ( !v127 )
      goto LABEL_570;
  }
  else
  {
    v126->fields._size = v131 + 1;
    *((_DWORD *)v127->m_Items + v131) = 59;
    ++v126->fields._version;
  }
  v132 = v126->fields._size;
  if ( (unsigned int)v132 >= v127->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v126,
      60,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v128[4] + 192LL) + 112LL));
  }
  else
  {
    v126->fields._size = v132 + 1;
    *((_DWORD *)v127->m_Items + v132) = 60;
  }
  v133 = FilterKindList_TypeInfo->static_fields;
  v133->ClassExtra1InShielderFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v126;
  sub_1B88554(&v133->ClassExtra1InShielderFilterKindList, v126);
  v134 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v134,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v134 )
    goto LABEL_570;
  v135 = v134->fields._items;
  v136 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v134->fields._version;
  if ( !v135 )
    goto LABEL_570;
  v137 = v134->fields._size;
  if ( (unsigned int)v137 >= v135->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v134,
      61,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v136[4] + 192LL) + 112LL));
    v135 = v134->fields._items;
    v136 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v134->fields._version;
    if ( !v135 )
      goto LABEL_570;
  }
  else
  {
    v134->fields._size = v137 + 1;
    *((_DWORD *)v135->m_Items + v137) = 61;
    ++v134->fields._version;
  }
  v138 = v134->fields._size;
  if ( (unsigned int)v138 >= v135->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v134,
      62,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v136[4] + 192LL) + 112LL));
    v135 = v134->fields._items;
    v136 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v134->fields._version;
    if ( !v135 )
      goto LABEL_570;
  }
  else
  {
    v134->fields._size = v138 + 1;
    *((_DWORD *)v135->m_Items + v138) = 62;
    ++v134->fields._version;
  }
  v139 = v134->fields._size;
  if ( (unsigned int)v139 >= v135->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v134,
      63,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v136[4] + 192LL) + 112LL));
    v135 = v134->fields._items;
    v136 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v134->fields._version;
    if ( !v135 )
      goto LABEL_570;
  }
  else
  {
    v134->fields._size = v139 + 1;
    *((_DWORD *)v135->m_Items + v139) = 63;
    ++v134->fields._version;
  }
  v140 = v134->fields._size;
  if ( (unsigned int)v140 >= v135->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v134,
      64,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v136[4] + 192LL) + 112LL));
  }
  else
  {
    v134->fields._size = v140 + 1;
    *((_DWORD *)v135->m_Items + v140) = 64;
  }
  v141 = FilterKindList_TypeInfo->static_fields;
  v141->ClassExtra2FilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v134;
  sub_1B88554(&v141->ClassExtra2FilterKindList, v134);
  v142 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v142,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v142 )
    goto LABEL_570;
  v143 = v142->fields._items;
  v144 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v142->fields._version;
  if ( !v143 )
    goto LABEL_570;
  v145 = v142->fields._size;
  if ( (unsigned int)v145 >= v143->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v142,
      65,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v144[4] + 192LL) + 112LL));
    v143 = v142->fields._items;
    v144 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v142->fields._version;
    if ( !v143 )
      goto LABEL_570;
  }
  else
  {
    v142->fields._size = v145 + 1;
    *((_DWORD *)v143->m_Items + v145) = 65;
    ++v142->fields._version;
  }
  v146 = v142->fields._size;
  if ( (unsigned int)v146 >= v143->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v142,
      66,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v144[4] + 192LL) + 112LL));
    v143 = v142->fields._items;
    v144 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v142->fields._version;
    if ( !v143 )
      goto LABEL_570;
  }
  else
  {
    v142->fields._size = v146 + 1;
    *((_DWORD *)v143->m_Items + v146) = 66;
    ++v142->fields._version;
  }
  v147 = v142->fields._size;
  if ( (unsigned int)v147 >= v143->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v142,
      67,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v144[4] + 192LL) + 112LL));
    v143 = v142->fields._items;
    v144 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v142->fields._version;
    if ( !v143 )
      goto LABEL_570;
  }
  else
  {
    v142->fields._size = v147 + 1;
    *((_DWORD *)v143->m_Items + v147) = 67;
    ++v142->fields._version;
  }
  v148 = v142->fields._size;
  if ( (unsigned int)v148 >= v143->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v142,
      68,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v144[4] + 192LL) + 112LL));
  }
  else
  {
    v142->fields._size = v148 + 1;
    *((_DWORD *)v143->m_Items + v148) = 68;
  }
  v149 = FilterKindList_TypeInfo->static_fields;
  v149->ClassGroupFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v142;
  sub_1B88554(&v149->ClassGroupFilterKindList, v142);
  v150 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v150,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v150 )
    goto LABEL_570;
  v151 = v150->fields._items;
  v152 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v150->fields._version;
  if ( !v151 )
    goto LABEL_570;
  v153 = v150->fields._size;
  if ( (unsigned int)v153 >= v151->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v150,
      67,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v152[4] + 192LL) + 112LL));
    v151 = v150->fields._items;
    v152 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v150->fields._version;
    if ( !v151 )
      goto LABEL_570;
  }
  else
  {
    v150->fields._size = v153 + 1;
    *((_DWORD *)v151->m_Items + v153) = 67;
    ++v150->fields._version;
  }
  v154 = v150->fields._size;
  if ( (unsigned int)v154 >= v151->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v150,
      68,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v152[4] + 192LL) + 112LL));
  }
  else
  {
    v150->fields._size = v154 + 1;
    *((_DWORD *)v151->m_Items + v154) = 68;
  }
  v155 = FilterKindList_TypeInfo->static_fields;
  v155->ClassGroupExtraFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v150;
  sub_1B88554(&v155->ClassGroupExtraFilterKindList, v150);
  v156 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v156,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v156 )
    goto LABEL_570;
  v157 = v156->fields._items;
  v158 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v156->fields._version;
  if ( !v157 )
    goto LABEL_570;
  v159 = v156->fields._size;
  if ( (unsigned int)v159 >= v157->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v156,
      44,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v158[4] + 192LL) + 112LL));
    v157 = v156->fields._items;
    v158 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v156->fields._version;
    if ( !v157 )
      goto LABEL_570;
  }
  else
  {
    v156->fields._size = v159 + 1;
    *((_DWORD *)v157->m_Items + v159) = 44;
    ++v156->fields._version;
  }
  v160 = v156->fields._size;
  if ( (unsigned int)v160 >= v157->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v156,
      43,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v158[4] + 192LL) + 112LL));
    v157 = v156->fields._items;
    v158 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v156->fields._version;
    if ( !v157 )
      goto LABEL_570;
  }
  else
  {
    v156->fields._size = v160 + 1;
    *((_DWORD *)v157->m_Items + v160) = 43;
    ++v156->fields._version;
  }
  v161 = v156->fields._size;
  if ( (unsigned int)v161 >= v157->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v156,
      42,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v158[4] + 192LL) + 112LL));
  }
  else
  {
    v156->fields._size = v161 + 1;
    *((_DWORD *)v157->m_Items + v161) = 42;
  }
  v162 = FilterKindList_TypeInfo->static_fields;
  v162->NpTypeFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v156;
  sub_1B88554(&v162->NpTypeFilterKindList, v156);
  v163 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v163,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v163 )
    goto LABEL_570;
  v164 = v163->fields._items;
  v165 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v163->fields._version;
  if ( !v164 )
    goto LABEL_570;
  v166 = v163->fields._size;
  if ( (unsigned int)v166 >= v164->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v163,
      46,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v165[4] + 192LL) + 112LL));
    v164 = v163->fields._items;
    v165 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v163->fields._version;
    if ( !v164 )
      goto LABEL_570;
  }
  else
  {
    v163->fields._size = v166 + 1;
    *((_DWORD *)v164->m_Items + v166) = 46;
    ++v163->fields._version;
  }
  v167 = v163->fields._size;
  if ( (unsigned int)v167 >= v164->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v163,
      45,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v165[4] + 192LL) + 112LL));
    v164 = v163->fields._items;
    v165 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v163->fields._version;
    if ( !v164 )
      goto LABEL_570;
  }
  else
  {
    v163->fields._size = v167 + 1;
    *((_DWORD *)v164->m_Items + v167) = 45;
    ++v163->fields._version;
  }
  v168 = v163->fields._size;
  if ( (unsigned int)v168 >= v164->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v163,
      47,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v165[4] + 192LL) + 112LL));
  }
  else
  {
    v163->fields._size = v168 + 1;
    *((_DWORD *)v164->m_Items + v168) = 47;
  }
  v169 = FilterKindList_TypeInfo->static_fields;
  v169->NpEffectFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v163;
  sub_1B88554(&v169->NpEffectFilterKindList, v163);
  v170 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v170,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v170 )
    goto LABEL_570;
  v171 = v170->fields._items;
  v172 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v170->fields._version;
  if ( !v171 )
    goto LABEL_570;
  v173 = v170->fields._size;
  if ( (unsigned int)v173 >= v171->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v170,
      48,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v172[4] + 192LL) + 112LL));
    v171 = v170->fields._items;
    v172 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v170->fields._version;
    if ( !v171 )
      goto LABEL_570;
  }
  else
  {
    v170->fields._size = v173 + 1;
    *((_DWORD *)v171->m_Items + v173) = 48;
    ++v170->fields._version;
  }
  v174 = v170->fields._size;
  if ( (unsigned int)v174 >= v171->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v170,
      8,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v172[4] + 192LL) + 112LL));
    v171 = v170->fields._items;
    v172 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v170->fields._version;
    if ( !v171 )
      goto LABEL_570;
  }
  else
  {
    v170->fields._size = v174 + 1;
    *((_DWORD *)v171->m_Items + v174) = 8;
    ++v170->fields._version;
  }
  v175 = v170->fields._size;
  if ( (unsigned int)v175 >= v171->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v170,
      9,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v172[4] + 192LL) + 112LL));
  }
  else
  {
    v170->fields._size = v175 + 1;
    *((_DWORD *)v171->m_Items + v175) = 9;
  }
  v176 = FilterKindList_TypeInfo->static_fields;
  v176->ServantTypeFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v170;
  sub_1B88554(&v176->ServantTypeFilterKindList, v170);
  v177 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v177,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v177 )
    goto LABEL_570;
  v178 = v177->fields._items;
  v179 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v177->fields._version;
  if ( !v178 )
    goto LABEL_570;
  v180 = v177->fields._size;
  if ( (unsigned int)v180 >= v178->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v177,
      21,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v179[4] + 192LL) + 112LL));
    v178 = v177->fields._items;
    v179 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v177->fields._version;
    if ( !v178 )
      goto LABEL_570;
  }
  else
  {
    v177->fields._size = v180 + 1;
    *((_DWORD *)v178->m_Items + v180) = 21;
    ++v177->fields._version;
  }
  v181 = v177->fields._size;
  if ( (unsigned int)v181 >= v178->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v177,
      22,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v179[4] + 192LL) + 112LL));
    v178 = v177->fields._items;
    v179 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v177->fields._version;
    if ( !v178 )
      goto LABEL_570;
  }
  else
  {
    v177->fields._size = v181 + 1;
    *((_DWORD *)v178->m_Items + v181) = 22;
    ++v177->fields._version;
  }
  v182 = v177->fields._size;
  if ( (unsigned int)v182 >= v178->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v177,
      23,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v179[4] + 192LL) + 112LL));
    v178 = v177->fields._items;
    v179 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v177->fields._version;
    if ( !v178 )
      goto LABEL_570;
  }
  else
  {
    v177->fields._size = v182 + 1;
    *((_DWORD *)v178->m_Items + v182) = 23;
    ++v177->fields._version;
  }
  v183 = v177->fields._size;
  if ( (unsigned int)v183 >= v178->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v177,
      24,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v179[4] + 192LL) + 112LL));
    v178 = v177->fields._items;
    v179 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v177->fields._version;
    if ( !v178 )
      goto LABEL_570;
  }
  else
  {
    v177->fields._size = v183 + 1;
    *((_DWORD *)v178->m_Items + v183) = 24;
    ++v177->fields._version;
  }
  v184 = v177->fields._size;
  if ( (unsigned int)v184 >= v178->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v177,
      25,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v179[4] + 192LL) + 112LL));
    v178 = v177->fields._items;
    v179 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v177->fields._version;
    if ( !v178 )
      goto LABEL_570;
  }
  else
  {
    v177->fields._size = v184 + 1;
    *((_DWORD *)v178->m_Items + v184) = 25;
    ++v177->fields._version;
  }
  v185 = v177->fields._size;
  if ( (unsigned int)v185 >= v178->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v177,
      26,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v179[4] + 192LL) + 112LL));
    v178 = v177->fields._items;
    v179 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v177->fields._version;
    if ( !v178 )
      goto LABEL_570;
  }
  else
  {
    v177->fields._size = v185 + 1;
    *((_DWORD *)v178->m_Items + v185) = 26;
    ++v177->fields._version;
  }
  v186 = v177->fields._size;
  if ( (unsigned int)v186 >= v178->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v177,
      27,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v179[4] + 192LL) + 112LL));
  }
  else
  {
    v177->fields._size = v186 + 1;
    *((_DWORD *)v178->m_Items + v186) = 27;
  }
  v187 = FilterKindList_TypeInfo->static_fields;
  v187->CombineBaseServantFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v177;
  sub_1B88554(&v187->CombineBaseServantFilterKindList, v177);
  v188 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v188,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v188 )
    goto LABEL_570;
  v189 = v188->fields._items;
  v190 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v188->fields._version;
  if ( !v189 )
    goto LABEL_570;
  v191 = v188->fields._size;
  if ( (unsigned int)v191 >= v189->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v188,
      28,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v190[4] + 192LL) + 112LL));
    v189 = v188->fields._items;
    v190 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v188->fields._version;
    if ( !v189 )
      goto LABEL_570;
  }
  else
  {
    v188->fields._size = v191 + 1;
    *((_DWORD *)v189->m_Items + v191) = 28;
    ++v188->fields._version;
  }
  v192 = v188->fields._size;
  if ( (unsigned int)v192 >= v189->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v188,
      29,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v190[4] + 192LL) + 112LL));
  }
  else
  {
    v188->fields._size = v192 + 1;
    *((_DWORD *)v189->m_Items + v192) = 29;
  }
  v193 = FilterKindList_TypeInfo->static_fields;
  v193->CombineMaterialFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v188;
  sub_1B88554(&v193->CombineMaterialFilterKindList, v188);
  v194 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v194,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v194 )
    goto LABEL_570;
  v195 = v194->fields._items;
  v196 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v194->fields._version;
  if ( !v195 )
    goto LABEL_570;
  v197 = v194->fields._size;
  if ( (unsigned int)v197 >= v195->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v194,
      10,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v196[4] + 192LL) + 112LL));
    v195 = v194->fields._items;
    v196 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v194->fields._version;
    if ( !v195 )
      goto LABEL_570;
  }
  else
  {
    v194->fields._size = v197 + 1;
    *((_DWORD *)v195->m_Items + v197) = 10;
    ++v194->fields._version;
  }
  v198 = v194->fields._size;
  if ( (unsigned int)v198 >= v195->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v194,
      11,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v196[4] + 192LL) + 112LL));
    v195 = v194->fields._items;
    v196 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v194->fields._version;
    if ( !v195 )
      goto LABEL_570;
  }
  else
  {
    v194->fields._size = v198 + 1;
    *((_DWORD *)v195->m_Items + v198) = 11;
    ++v194->fields._version;
  }
  v199 = v194->fields._size;
  if ( (unsigned int)v199 >= v195->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v194,
      12,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v196[4] + 192LL) + 112LL));
  }
  else
  {
    v194->fields._size = v199 + 1;
    *((_DWORD *)v195->m_Items + v199) = 12;
  }
  v200 = FilterKindList_TypeInfo->static_fields;
  v200->CollectionStateFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v194;
  sub_1B88554(&v200->CollectionStateFilterKindList, v194);
  v201 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v201,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v201 )
    goto LABEL_570;
  v202 = v201->fields._items;
  v203 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v201->fields._version;
  if ( !v202 )
    goto LABEL_570;
  v204 = v201->fields._size;
  if ( (unsigned int)v204 >= v202->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v201,
      11,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v203[4] + 192LL) + 112LL));
    v202 = v201->fields._items;
    v203 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v201->fields._version;
    if ( !v202 )
      goto LABEL_570;
  }
  else
  {
    v201->fields._size = v204 + 1;
    *((_DWORD *)v202->m_Items + v204) = 11;
    ++v201->fields._version;
  }
  v205 = v201->fields._size;
  if ( (unsigned int)v205 >= v202->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v201,
      12,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v203[4] + 192LL) + 112LL));
  }
  else
  {
    v201->fields._size = v205 + 1;
    *((_DWORD *)v202->m_Items + v205) = 12;
  }
  v206 = FilterKindList_TypeInfo->static_fields;
  v206->BonusSelectCollectionStateFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v201;
  sub_1B88554(&v206->BonusSelectCollectionStateFilterKindList, v201);
  v207 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v207,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v207 )
    goto LABEL_570;
  v208 = v207->fields._items;
  v209 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v207->fields._version;
  if ( !v208 )
    goto LABEL_570;
  v210 = v207->fields._size;
  if ( (unsigned int)v210 >= v208->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v207,
      52,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v209[4] + 192LL) + 112LL));
    v208 = v207->fields._items;
    v209 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v207->fields._version;
    if ( !v208 )
      goto LABEL_570;
  }
  else
  {
    v207->fields._size = v210 + 1;
    *((_DWORD *)v208->m_Items + v210) = 52;
    ++v207->fields._version;
  }
  v211 = v207->fields._size;
  if ( (unsigned int)v211 >= v208->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v207,
      53,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v209[4] + 192LL) + 112LL));
  }
  else
  {
    v207->fields._size = v211 + 1;
    *((_DWORD *)v208->m_Items + v211) = 53;
  }
  v212 = FilterKindList_TypeInfo->static_fields;
  v212->ServantHaveFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v207;
  sub_1B88554(&v212->ServantHaveFilterKindList, v207);
  v213 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v213,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v213 )
    goto LABEL_570;
  v214 = v213->fields._items;
  v215 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v213->fields._version;
  if ( !v214 )
    goto LABEL_570;
  v216 = v213->fields._size;
  if ( (unsigned int)v216 >= v214->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v213,
      50,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v215[4] + 192LL) + 112LL));
    v214 = v213->fields._items;
    v215 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v213->fields._version;
    if ( !v214 )
      goto LABEL_570;
  }
  else
  {
    v213->fields._size = v216 + 1;
    *((_DWORD *)v214->m_Items + v216) = 50;
    ++v213->fields._version;
  }
  v217 = v213->fields._size;
  if ( (unsigned int)v217 >= v214->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v213,
      51,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v215[4] + 192LL) + 112LL));
  }
  else
  {
    v213->fields._size = v217 + 1;
    *((_DWORD *)v214->m_Items + v217) = 51;
  }
  v218 = FilterKindList_TypeInfo->static_fields;
  v218->ServantEffectApplySubjectFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v213;
  sub_1B88554(&v218->ServantEffectApplySubjectFilterKindList, v213);
  v219 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v219,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v219 )
    goto LABEL_570;
  v220 = v219->fields._items;
  v221 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v219->fields._version;
  if ( !v220 )
    goto LABEL_570;
  v222 = v219->fields._size;
  if ( (unsigned int)v222 >= v220->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v219,
      69,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v221[4] + 192LL) + 112LL));
    v220 = v219->fields._items;
    v221 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v219->fields._version;
    if ( !v220 )
      goto LABEL_570;
  }
  else
  {
    v219->fields._size = v222 + 1;
    *((_DWORD *)v220->m_Items + v222) = 69;
    ++v219->fields._version;
  }
  v223 = v219->fields._size;
  if ( (unsigned int)v223 >= v220->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v219,
      70,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v221[4] + 192LL) + 112LL));
    v220 = v219->fields._items;
    v221 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v219->fields._version;
    if ( !v220 )
      goto LABEL_570;
  }
  else
  {
    v219->fields._size = v223 + 1;
    *((_DWORD *)v220->m_Items + v223) = 70;
    ++v219->fields._version;
  }
  v224 = v219->fields._size;
  if ( (unsigned int)v224 >= v220->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v219,
      71,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v221[4] + 192LL) + 112LL));
  }
  else
  {
    v219->fields._size = v224 + 1;
    *((_DWORD *)v220->m_Items + v224) = 71;
  }
  v225 = FilterKindList_TypeInfo->static_fields;
  v225->ServantSummonCategoryFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v219;
  sub_1B88554(&v225->ServantSummonCategoryFilterKindList, v219);
  v226 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v226,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v226 )
    goto LABEL_570;
  v227 = v226->fields._items;
  v228 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v226->fields._version;
  if ( !v227 )
    goto LABEL_570;
  v229 = v226->fields._size;
  if ( (unsigned int)v229 >= v227->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v226,
      38,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v228[4] + 192LL) + 112LL));
    v227 = v226->fields._items;
    v228 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v226->fields._version;
    if ( !v227 )
      goto LABEL_570;
  }
  else
  {
    v226->fields._size = v229 + 1;
    *((_DWORD *)v227->m_Items + v229) = 38;
    ++v226->fields._version;
  }
  v230 = v226->fields._size;
  if ( (unsigned int)v230 >= v227->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v226,
      37,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v228[4] + 192LL) + 112LL));
    v227 = v226->fields._items;
    v228 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v226->fields._version;
    if ( !v227 )
      goto LABEL_570;
  }
  else
  {
    v226->fields._size = v230 + 1;
    *((_DWORD *)v227->m_Items + v230) = 37;
    ++v226->fields._version;
  }
  v231 = v226->fields._size;
  if ( (unsigned int)v231 >= v227->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v226,
      36,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v228[4] + 192LL) + 112LL));
    v227 = v226->fields._items;
    v228 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v226->fields._version;
    if ( !v227 )
      goto LABEL_570;
  }
  else
  {
    v226->fields._size = v231 + 1;
    *((_DWORD *)v227->m_Items + v231) = 36;
    ++v226->fields._version;
  }
  v232 = v226->fields._size;
  if ( (unsigned int)v232 >= v227->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v226,
      35,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v228[4] + 192LL) + 112LL));
    v227 = v226->fields._items;
    v228 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v226->fields._version;
    if ( !v227 )
      goto LABEL_570;
  }
  else
  {
    v226->fields._size = v232 + 1;
    *((_DWORD *)v227->m_Items + v232) = 35;
    ++v226->fields._version;
  }
  v233 = v226->fields._size;
  if ( (unsigned int)v233 >= v227->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v226,
      34,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v228[4] + 192LL) + 112LL));
  }
  else
  {
    v226->fields._size = v233 + 1;
    *((_DWORD *)v227->m_Items + v233) = 34;
  }
  v234 = FilterKindList_TypeInfo->static_fields;
  v234->RarityFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v226;
  sub_1B88554(&v234->RarityFilterKindList, v226);
  v235 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v235,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v235 )
    goto LABEL_570;
  v236 = v235->fields._items;
  v237 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v235->fields._version;
  if ( !v236 )
    goto LABEL_570;
  v238 = v235->fields._size;
  if ( (unsigned int)v238 >= v236->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v235,
      54,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v237[4] + 192LL) + 112LL));
    v236 = v235->fields._items;
    v237 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v235->fields._version;
    if ( !v236 )
      goto LABEL_570;
  }
  else
  {
    v235->fields._size = v238 + 1;
    *((_DWORD *)v236->m_Items + v238) = 54;
    ++v235->fields._version;
  }
  v239 = v235->fields._size;
  if ( (unsigned int)v239 >= v236->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v235,
      55,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v237[4] + 192LL) + 112LL));
    v236 = v235->fields._items;
    v237 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v235->fields._version;
    if ( !v236 )
      goto LABEL_570;
  }
  else
  {
    v235->fields._size = v239 + 1;
    *((_DWORD *)v236->m_Items + v239) = 55;
    ++v235->fields._version;
  }
  v240 = v235->fields._size;
  if ( (unsigned int)v240 >= v236->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v235,
      72,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v237[4] + 192LL) + 112LL));
    v236 = v235->fields._items;
    v237 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v235->fields._version;
    if ( !v236 )
      goto LABEL_570;
  }
  else
  {
    v235->fields._size = v240 + 1;
    *((_DWORD *)v236->m_Items + v240) = 72;
    ++v235->fields._version;
  }
  v241 = v235->fields._size;
  if ( (unsigned int)v241 >= v236->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v235,
      73,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v237[4] + 192LL) + 112LL));
    v236 = v235->fields._items;
    v237 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v235->fields._version;
    if ( !v236 )
      goto LABEL_570;
  }
  else
  {
    v235->fields._size = v241 + 1;
    *((_DWORD *)v236->m_Items + v241) = 73;
    ++v235->fields._version;
  }
  v242 = v235->fields._size;
  if ( (unsigned int)v242 >= v236->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v235,
      74,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v237[4] + 192LL) + 112LL));
    v236 = v235->fields._items;
    v237 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v235->fields._version;
    if ( !v236 )
      goto LABEL_570;
  }
  else
  {
    v235->fields._size = v242 + 1;
    *((_DWORD *)v236->m_Items + v242) = 74;
    ++v235->fields._version;
  }
  v243 = v235->fields._size;
  if ( (unsigned int)v243 >= v236->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v235,
      75,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v237[4] + 192LL) + 112LL));
    v236 = v235->fields._items;
    v237 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v235->fields._version;
    if ( !v236 )
      goto LABEL_570;
  }
  else
  {
    v235->fields._size = v243 + 1;
    *((_DWORD *)v236->m_Items + v243) = 75;
    ++v235->fields._version;
  }
  v244 = v235->fields._size;
  if ( (unsigned int)v244 >= v236->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v235,
      76,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v237[4] + 192LL) + 112LL));
    v236 = v235->fields._items;
    v237 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v235->fields._version;
    if ( !v236 )
      goto LABEL_570;
  }
  else
  {
    v235->fields._size = v244 + 1;
    *((_DWORD *)v236->m_Items + v244) = 76;
    ++v235->fields._version;
  }
  v245 = v235->fields._size;
  if ( (unsigned int)v245 >= v236->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v235,
      56,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v237[4] + 192LL) + 112LL));
  }
  else
  {
    v235->fields._size = v245 + 1;
    *((_DWORD *)v236->m_Items + v245) = 56;
  }
  v246 = FilterKindList_TypeInfo->static_fields;
  v246->ServantEquipTypeFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v235;
  sub_1B88554(&v246->ServantEquipTypeFilterKindList, v235);
  v247 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v247,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v247 )
    goto LABEL_570;
  v248 = v247->fields._items;
  v249 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v247->fields._version;
  if ( !v248 )
    goto LABEL_570;
  v250 = v247->fields._size;
  if ( (unsigned int)v250 >= v248->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v247,
      77,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v249[4] + 192LL) + 112LL));
    v248 = v247->fields._items;
    v249 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v247->fields._version;
    if ( !v248 )
      goto LABEL_570;
  }
  else
  {
    v247->fields._size = v250 + 1;
    *((_DWORD *)v248->m_Items + v250) = 77;
    ++v247->fields._version;
  }
  v251 = v247->fields._size;
  if ( (unsigned int)v251 >= v248->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v247,
      78,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v249[4] + 192LL) + 112LL));
    v248 = v247->fields._items;
    v249 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v247->fields._version;
    if ( !v248 )
      goto LABEL_570;
  }
  else
  {
    v247->fields._size = v251 + 1;
    *((_DWORD *)v248->m_Items + v251) = 78;
    ++v247->fields._version;
  }
  v252 = v247->fields._size;
  if ( (unsigned int)v252 >= v248->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v247,
      79,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v249[4] + 192LL) + 112LL));
    v248 = v247->fields._items;
    v249 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v247->fields._version;
    if ( !v248 )
      goto LABEL_570;
  }
  else
  {
    v247->fields._size = v252 + 1;
    *((_DWORD *)v248->m_Items + v252) = 79;
    ++v247->fields._version;
  }
  v253 = v247->fields._size;
  if ( (unsigned int)v253 >= v248->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v247,
      80,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v249[4] + 192LL) + 112LL));
    v248 = v247->fields._items;
    v249 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v247->fields._version;
    if ( !v248 )
      goto LABEL_570;
  }
  else
  {
    v247->fields._size = v253 + 1;
    *((_DWORD *)v248->m_Items + v253) = 80;
    ++v247->fields._version;
  }
  v254 = v247->fields._size;
  if ( (unsigned int)v254 >= v248->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v247,
      81,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v249[4] + 192LL) + 112LL));
    v248 = v247->fields._items;
    v249 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v247->fields._version;
    if ( !v248 )
      goto LABEL_570;
  }
  else
  {
    v247->fields._size = v254 + 1;
    *((_DWORD *)v248->m_Items + v254) = 81;
    ++v247->fields._version;
  }
  v255 = v247->fields._size;
  if ( (unsigned int)v255 >= v248->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v247,
      82,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v249[4] + 192LL) + 112LL));
    v248 = v247->fields._items;
    v249 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v247->fields._version;
    if ( !v248 )
      goto LABEL_570;
  }
  else
  {
    v247->fields._size = v255 + 1;
    *((_DWORD *)v248->m_Items + v255) = 82;
    ++v247->fields._version;
  }
  v256 = v247->fields._size;
  if ( (unsigned int)v256 >= v248->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v247,
      83,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v249[4] + 192LL) + 112LL));
  }
  else
  {
    v247->fields._size = v256 + 1;
    *((_DWORD *)v248->m_Items + v256) = 83;
  }
  v257 = FilterKindList_TypeInfo->static_fields;
  v257->ServantEquipCombineStatusFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v247;
  sub_1B88554(&v257->ServantEquipCombineStatusFilterKindList, v247);
  v258 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v258,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v258 )
    goto LABEL_570;
  v259 = v258->fields._items;
  v260 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v258->fields._version;
  if ( !v259 )
    goto LABEL_570;
  v261 = v258->fields._size;
  if ( (unsigned int)v261 >= v259->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v258,
      84,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v260[4] + 192LL) + 112LL));
    v259 = v258->fields._items;
    v260 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v258->fields._version;
    if ( !v259 )
      goto LABEL_570;
  }
  else
  {
    v258->fields._size = v261 + 1;
    *((_DWORD *)v259->m_Items + v261) = 84;
    ++v258->fields._version;
  }
  v262 = v258->fields._size;
  if ( (unsigned int)v262 >= v259->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v258,
      85,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v260[4] + 192LL) + 112LL));
    v259 = v258->fields._items;
    v260 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v258->fields._version;
    if ( !v259 )
      goto LABEL_570;
  }
  else
  {
    v258->fields._size = v262 + 1;
    *((_DWORD *)v259->m_Items + v262) = 85;
    ++v258->fields._version;
  }
  v263 = v258->fields._size;
  if ( (unsigned int)v263 >= v259->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v258,
      86,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v260[4] + 192LL) + 112LL));
    v259 = v258->fields._items;
    v260 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v258->fields._version;
    if ( !v259 )
      goto LABEL_570;
  }
  else
  {
    v258->fields._size = v263 + 1;
    *((_DWORD *)v259->m_Items + v263) = 86;
    ++v258->fields._version;
  }
  v264 = v258->fields._size;
  if ( (unsigned int)v264 >= v259->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v258,
      87,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v260[4] + 192LL) + 112LL));
  }
  else
  {
    v258->fields._size = v264 + 1;
    *((_DWORD *)v259->m_Items + v264) = 87;
  }
  v265 = FilterKindList_TypeInfo->static_fields;
  v265->ServantEquipHaveStatusFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v258;
  sub_1B88554(&v265->ServantEquipHaveStatusFilterKindList, v258);
  v266 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v266,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v266 )
    goto LABEL_570;
  v267 = v266->fields._items;
  v268 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v266->fields._version;
  if ( !v267 )
    goto LABEL_570;
  v269 = v266->fields._size;
  if ( (unsigned int)v269 >= v267->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v266,
      30,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v268[4] + 192LL) + 112LL));
    v267 = v266->fields._items;
    v268 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v266->fields._version;
    if ( !v267 )
      goto LABEL_570;
  }
  else
  {
    v266->fields._size = v269 + 1;
    *((_DWORD *)v267->m_Items + v269) = 30;
    ++v266->fields._version;
  }
  v270 = v266->fields._size;
  if ( (unsigned int)v270 >= v267->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v266,
      31,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v268[4] + 192LL) + 112LL));
  }
  else
  {
    v266->fields._size = v270 + 1;
    *((_DWORD *)v267->m_Items + v270) = 31;
  }
  v271 = FilterKindList_TypeInfo->static_fields;
  v271->ServantCostumeFilterKind = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v266;
  sub_1B88554(&v271->ServantCostumeFilterKind, v266);
  v272 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v272,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v272 )
    goto LABEL_570;
  v273 = v272->fields._items;
  v274 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v272->fields._version;
  if ( !v273 )
    goto LABEL_570;
  v275 = v272->fields._size;
  if ( (unsigned int)v275 < v273->max_length )
  {
    v272->fields._size = v275 + 1;
    *((_DWORD *)v273->m_Items + v275) = 32;
    ++v272->fields._version;
    goto LABEL_566;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v272,
    32,
    *(const MethodInfo_34E303C **)(*(_QWORD *)(v274[4] + 192LL) + 112LL));
  v273 = v272->fields._items;
  v274 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v272->fields._version;
  if ( !v273 )
LABEL_570:
    sub_1B8880C(v2, v3);
LABEL_566:
  v276 = v272->fields._size;
  if ( (unsigned int)v276 >= v273->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v272,
      33,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v274[4] + 192LL) + 112LL));
  }
  else
  {
    v272->fields._size = v276 + 1;
    *((_DWORD *)v273->m_Items + v276) = 33;
  }
  v277 = FilterKindList_TypeInfo->static_fields;
  v277->MaterialServantCostumeFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v272;
  sub_1B88554(&v277->MaterialServantCostumeFilterKindList, v272);
}


void __fastcall FilterKindList___ctor(FilterKindList_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}