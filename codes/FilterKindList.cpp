void __fastcall FilterKindList___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_T__o *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  _QWORD *v8; // x8
  int32_t *p_version; // x23
  struct System_Object_array *items; // x9
  __int64 size; // x10
  int32_t *p_size; // x24
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
  __int64 v83; // x10
  __int64 v84; // x10
  __int64 v85; // x10
  __int64 v86; // x10
  System_Collections_Generic_List_T__o *v87; // x19
  _QWORD *v88; // x8
  int32_t *v89; // x25
  struct System_Object_array *v90; // x9
  __int64 v91; // x10
  int32_t *v92; // x24
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
  __int64 v103; // x10
  __int64 v104; // x10
  __int64 v105; // x10
  __int64 v106; // x10
  struct FilterKindList_StaticFields *static_fields; // x0
  System_Collections_Generic_List_T__o *v108; // x19
  struct System_Object_array *v109; // x8
  _QWORD *v110; // x9
  __int64 v111; // x10
  __int64 v112; // x10
  __int64 v113; // x10
  struct FilterKindList_StaticFields *v114; // x0
  System_Collections_Generic_List_T__o *v115; // x19
  struct System_Object_array *v116; // x8
  _QWORD *v117; // x9
  __int64 v118; // x10
  __int64 v119; // x10
  __int64 v120; // x10
  __int64 v121; // x10
  struct FilterKindList_StaticFields *v122; // x0
  System_Collections_Generic_List_T__o *v123; // x19
  struct System_Object_array *v124; // x8
  _QWORD *v125; // x9
  __int64 v126; // x10
  __int64 v127; // x10
  __int64 v128; // x10
  struct FilterKindList_StaticFields *v129; // x0
  System_Collections_Generic_List_T__o *v130; // x19
  struct System_Object_array *v131; // x8
  _QWORD *v132; // x9
  __int64 v133; // x10
  __int64 v134; // x10
  __int64 v135; // x10
  __int64 v136; // x10
  struct FilterKindList_StaticFields *v137; // x0
  System_Collections_Generic_List_T__o *v138; // x19
  struct System_Object_array *v139; // x8
  _QWORD *v140; // x9
  __int64 v141; // x10
  __int64 v142; // x10
  __int64 v143; // x10
  __int64 v144; // x10
  struct FilterKindList_StaticFields *v145; // x0
  System_Collections_Generic_List_T__o *v146; // x19
  struct System_Object_array *v147; // x8
  _QWORD *v148; // x9
  __int64 v149; // x10
  __int64 v150; // x10
  __int64 v151; // x10
  __int64 v152; // x10
  struct FilterKindList_StaticFields *v153; // x0
  System_Collections_Generic_List_T__o *v154; // x19
  struct System_Object_array *v155; // x8
  _QWORD *v156; // x9
  __int64 v157; // x10
  __int64 v158; // x10
  struct FilterKindList_StaticFields *v159; // x0
  System_Collections_Generic_List_T__o *v160; // x19
  struct System_Object_array *v161; // x8
  _QWORD *v162; // x9
  __int64 v163; // x10
  __int64 v164; // x10
  __int64 v165; // x10
  struct FilterKindList_StaticFields *v166; // x0
  System_Collections_Generic_List_T__o *v167; // x19
  struct System_Object_array *v168; // x8
  _QWORD *v169; // x9
  __int64 v170; // x10
  __int64 v171; // x10
  __int64 v172; // x10
  struct FilterKindList_StaticFields *v173; // x0
  System_Collections_Generic_List_T__o *v174; // x19
  struct System_Object_array *v175; // x8
  _QWORD *v176; // x9
  __int64 v177; // x10
  __int64 v178; // x10
  __int64 v179; // x10
  struct FilterKindList_StaticFields *v180; // x0
  System_Collections_Generic_List_T__o *v181; // x19
  struct System_Object_array *v182; // x9
  _QWORD *v183; // x8
  __int64 v184; // x10
  __int64 v185; // x10
  __int64 v186; // x10
  __int64 v187; // x10
  __int64 v188; // x10
  __int64 v189; // x10
  __int64 v190; // x10
  struct FilterKindList_StaticFields *v191; // x0
  System_Collections_Generic_List_T__o *v192; // x19
  struct System_Object_array *v193; // x8
  _QWORD *v194; // x9
  __int64 v195; // x10
  __int64 v196; // x10
  struct FilterKindList_StaticFields *v197; // x0
  System_Collections_Generic_List_T__o *v198; // x19
  struct System_Object_array *v199; // x8
  _QWORD *v200; // x9
  __int64 v201; // x10
  __int64 v202; // x10
  __int64 v203; // x10
  struct FilterKindList_StaticFields *v204; // x0
  System_Collections_Generic_List_T__o *v205; // x19
  struct System_Object_array *v206; // x8
  _QWORD *v207; // x9
  __int64 v208; // x10
  __int64 v209; // x10
  struct FilterKindList_StaticFields *v210; // x0
  System_Collections_Generic_List_T__o *v211; // x19
  struct System_Object_array *v212; // x8
  _QWORD *v213; // x9
  __int64 v214; // x10
  __int64 v215; // x10
  struct FilterKindList_StaticFields *v216; // x0
  System_Collections_Generic_List_T__o *v217; // x19
  struct System_Object_array *v218; // x8
  _QWORD *v219; // x9
  __int64 v220; // x10
  __int64 v221; // x10
  struct FilterKindList_StaticFields *v222; // x0
  System_Collections_Generic_List_T__o *v223; // x19
  struct System_Object_array *v224; // x8
  _QWORD *v225; // x9
  __int64 v226; // x10
  __int64 v227; // x10
  __int64 v228; // x10
  struct FilterKindList_StaticFields *v229; // x0
  System_Collections_Generic_List_T__o *v230; // x19
  struct System_Object_array *v231; // x8
  _QWORD *v232; // x9
  __int64 v233; // x10
  __int64 v234; // x10
  __int64 v235; // x10
  __int64 v236; // x10
  __int64 v237; // x10
  struct FilterKindList_StaticFields *v238; // x0
  System_Collections_Generic_List_T__o *v239; // x19
  struct System_Object_array *v240; // x9
  _QWORD *v241; // x8
  __int64 v242; // x10
  __int64 v243; // x10
  __int64 v244; // x10
  __int64 v245; // x10
  __int64 v246; // x10
  __int64 v247; // x10
  __int64 v248; // x10
  __int64 v249; // x10
  struct FilterKindList_StaticFields *v250; // x0
  System_Collections_Generic_List_T__o *v251; // x19
  struct System_Object_array *v252; // x9
  _QWORD *v253; // x8
  __int64 v254; // x10
  __int64 v255; // x10
  __int64 v256; // x10
  __int64 v257; // x10
  __int64 v258; // x10
  __int64 v259; // x10
  __int64 v260; // x10
  struct FilterKindList_StaticFields *v261; // x0
  System_Collections_Generic_List_T__o *v262; // x19
  struct System_Object_array *v263; // x8
  _QWORD *v264; // x9
  __int64 v265; // x10
  __int64 v266; // x10
  __int64 v267; // x10
  __int64 v268; // x10
  struct FilterKindList_StaticFields *v269; // x0
  System_Collections_Generic_List_T__o *v270; // x19
  struct System_Object_array *v271; // x8
  _QWORD *v272; // x9
  __int64 v273; // x10
  __int64 v274; // x10
  struct FilterKindList_StaticFields *v275; // x0
  System_Collections_Generic_List_T__o *v276; // x19
  struct System_Object_array *v277; // x8
  _QWORD *v278; // x9
  __int64 v279; // x10
  __int64 v280; // x10
  struct FilterKindList_StaticFields *v281; // x0

  if ( (byte_4A29191 & 1) == 0 )
  {
    sub_1B761C0(&FilterKindList_TypeInfo, v1);
    sub_1B761C0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v2);
    sub_1B761C0(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__, v3);
    sub_1B761C0(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo, v4);
    byte_4A29191 = 1;
  }
  v5 = (System_Collections_Generic_List_T__o *)sub_1B7640C(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v5,
    (const MethodInfo_34BC588 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v5 )
    goto LABEL_570;
  v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
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
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
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
  v13 = *p_size;
  if ( (unsigned int)v13 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      9,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v13 + 1;
    *((_DWORD *)items->m_Items + v13) = 9;
    ++*p_version;
  }
  v14 = *p_size;
  if ( (unsigned int)v14 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      0,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v14 + 1;
    *((_DWORD *)items->m_Items + v14) = 0;
    ++*p_version;
  }
  v15 = *p_size;
  if ( (unsigned int)v15 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      1,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v15 + 1;
    *((_DWORD *)items->m_Items + v15) = 1;
    ++*p_version;
  }
  v16 = *p_size;
  if ( (unsigned int)v16 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      2,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v16 + 1;
    *((_DWORD *)items->m_Items + v16) = 2;
    ++*p_version;
  }
  v17 = *p_size;
  if ( (unsigned int)v17 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      3,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v17 + 1;
    *((_DWORD *)items->m_Items + v17) = 3;
    ++*p_version;
  }
  v18 = *p_size;
  if ( (unsigned int)v18 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      4,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v18 + 1;
    *((_DWORD *)items->m_Items + v18) = 4;
    ++*p_version;
  }
  v19 = *p_size;
  if ( (unsigned int)v19 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      5,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v19 + 1;
    *((_DWORD *)items->m_Items + v19) = 5;
    ++*p_version;
  }
  v20 = *p_size;
  if ( (unsigned int)v20 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      6,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v20 + 1;
    *((_DWORD *)items->m_Items + v20) = 6;
    ++*p_version;
  }
  v21 = *p_size;
  if ( (unsigned int)v21 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      7,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v21 + 1;
    *((_DWORD *)items->m_Items + v21) = 7;
    ++*p_version;
  }
  v22 = *p_size;
  if ( (unsigned int)v22 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      21,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v22 + 1;
    *((_DWORD *)items->m_Items + v22) = 21;
    ++*p_version;
  }
  v23 = *p_size;
  if ( (unsigned int)v23 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      22,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v23 + 1;
    *((_DWORD *)items->m_Items + v23) = 22;
    ++*p_version;
  }
  v24 = *p_size;
  if ( (unsigned int)v24 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      23,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v24 + 1;
    *((_DWORD *)items->m_Items + v24) = 23;
    ++*p_version;
  }
  v25 = *p_size;
  if ( (unsigned int)v25 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      24,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v25 + 1;
    *((_DWORD *)items->m_Items + v25) = 24;
    ++*p_version;
  }
  v26 = *p_size;
  if ( (unsigned int)v26 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      25,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v26 + 1;
    *((_DWORD *)items->m_Items + v26) = 25;
    ++*p_version;
  }
  v27 = *p_size;
  if ( (unsigned int)v27 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      26,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v27 + 1;
    *((_DWORD *)items->m_Items + v27) = 26;
    ++*p_version;
  }
  v28 = *p_size;
  if ( (unsigned int)v28 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      27,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v28 + 1;
    *((_DWORD *)items->m_Items + v28) = 27;
    ++*p_version;
  }
  v29 = *p_size;
  if ( (unsigned int)v29 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      28,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v29 + 1;
    *((_DWORD *)items->m_Items + v29) = 28;
    ++*p_version;
  }
  v30 = *p_size;
  if ( (unsigned int)v30 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      29,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v30 + 1;
    *((_DWORD *)items->m_Items + v30) = 29;
    ++*p_version;
  }
  v31 = *p_size;
  if ( (unsigned int)v31 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      30,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v31 + 1;
    *((_DWORD *)items->m_Items + v31) = 30;
    ++*p_version;
  }
  v32 = *p_size;
  if ( (unsigned int)v32 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      31,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v32 + 1;
    *((_DWORD *)items->m_Items + v32) = 31;
    ++*p_version;
  }
  v33 = *p_size;
  if ( (unsigned int)v33 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      34,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v33 + 1;
    *((_DWORD *)items->m_Items + v33) = 34;
    ++*p_version;
  }
  v34 = *p_size;
  if ( (unsigned int)v34 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      35,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v34 + 1;
    *((_DWORD *)items->m_Items + v34) = 35;
    ++*p_version;
  }
  v35 = *p_size;
  if ( (unsigned int)v35 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      36,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v35 + 1;
    *((_DWORD *)items->m_Items + v35) = 36;
    ++*p_version;
  }
  v36 = *p_size;
  if ( (unsigned int)v36 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      37,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v36 + 1;
    *((_DWORD *)items->m_Items + v36) = 37;
    ++*p_version;
  }
  v37 = *p_size;
  if ( (unsigned int)v37 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      38,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v37 + 1;
    *((_DWORD *)items->m_Items + v37) = 38;
    ++*p_version;
  }
  v38 = *p_size;
  if ( (unsigned int)v38 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      42,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v38 + 1;
    *((_DWORD *)items->m_Items + v38) = 42;
    ++*p_version;
  }
  v39 = *p_size;
  if ( (unsigned int)v39 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      43,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v39 + 1;
    *((_DWORD *)items->m_Items + v39) = 43;
    ++*p_version;
  }
  v40 = *p_size;
  if ( (unsigned int)v40 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      44,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v40 + 1;
    *((_DWORD *)items->m_Items + v40) = 44;
    ++*p_version;
  }
  v41 = *p_size;
  if ( (unsigned int)v41 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      45,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v41 + 1;
    *((_DWORD *)items->m_Items + v41) = 45;
    ++*p_version;
  }
  v42 = *p_size;
  if ( (unsigned int)v42 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      46,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v42 + 1;
    *((_DWORD *)items->m_Items + v42) = 46;
    ++*p_version;
  }
  v43 = *p_size;
  if ( (unsigned int)v43 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      47,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v43 + 1;
    *((_DWORD *)items->m_Items + v43) = 47;
    ++*p_version;
  }
  v44 = *p_size;
  if ( (unsigned int)v44 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      48,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v44 + 1;
    *((_DWORD *)items->m_Items + v44) = 48;
    ++*p_version;
  }
  v45 = *p_size;
  if ( (unsigned int)v45 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      39,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v45 + 1;
    *((_DWORD *)items->m_Items + v45) = 39;
    ++*p_version;
  }
  v46 = *p_size;
  if ( (unsigned int)v46 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      50,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v46 + 1;
    *((_DWORD *)items->m_Items + v46) = 50;
    ++*p_version;
  }
  v47 = *p_size;
  if ( (unsigned int)v47 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      51,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v47 + 1;
    *((_DWORD *)items->m_Items + v47) = 51;
    ++*p_version;
  }
  v48 = *p_size;
  if ( (unsigned int)v48 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      54,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v48 + 1;
    *((_DWORD *)items->m_Items + v48) = 54;
    ++*p_version;
  }
  v49 = *p_size;
  if ( (unsigned int)v49 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      55,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v49 + 1;
    *((_DWORD *)items->m_Items + v49) = 55;
    ++*p_version;
  }
  v50 = *p_size;
  if ( (unsigned int)v50 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      72,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v50 + 1;
    *((_DWORD *)items->m_Items + v50) = 72;
    ++*p_version;
  }
  v51 = *p_size;
  if ( (unsigned int)v51 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      73,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v51 + 1;
    *((_DWORD *)items->m_Items + v51) = 73;
    ++*p_version;
  }
  v52 = *p_size;
  if ( (unsigned int)v52 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      74,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v52 + 1;
    *((_DWORD *)items->m_Items + v52) = 74;
    ++*p_version;
  }
  v53 = *p_size;
  if ( (unsigned int)v53 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      75,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v53 + 1;
    *((_DWORD *)items->m_Items + v53) = 75;
    ++*p_version;
  }
  v54 = *p_size;
  if ( (unsigned int)v54 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      76,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v54 + 1;
    *((_DWORD *)items->m_Items + v54) = 76;
    ++*p_version;
  }
  v55 = *p_size;
  if ( (unsigned int)v55 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      56,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v55 + 1;
    *((_DWORD *)items->m_Items + v55) = 56;
    ++*p_version;
  }
  v56 = *p_size;
  if ( (unsigned int)v56 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      78,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v56 + 1;
    *((_DWORD *)items->m_Items + v56) = 78;
    ++*p_version;
  }
  v57 = *p_size;
  if ( (unsigned int)v57 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      79,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v57 + 1;
    *((_DWORD *)items->m_Items + v57) = 79;
    ++*p_version;
  }
  v58 = *p_size;
  if ( (unsigned int)v58 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      82,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v58 + 1;
    *((_DWORD *)items->m_Items + v58) = 82;
    ++*p_version;
  }
  v59 = *p_size;
  if ( (unsigned int)v59 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      77,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v59 + 1;
    *((_DWORD *)items->m_Items + v59) = 77;
    ++*p_version;
  }
  v60 = *p_size;
  if ( (unsigned int)v60 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      81,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v60 + 1;
    *((_DWORD *)items->m_Items + v60) = 81;
    ++*p_version;
  }
  v61 = *p_size;
  if ( (unsigned int)v61 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      80,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v61 + 1;
    *((_DWORD *)items->m_Items + v61) = 80;
    ++*p_version;
  }
  v62 = *p_size;
  if ( (unsigned int)v62 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      83,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v62 + 1;
    *((_DWORD *)items->m_Items + v62) = 83;
    ++*p_version;
  }
  v63 = *p_size;
  if ( (unsigned int)v63 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      84,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v63 + 1;
    *((_DWORD *)items->m_Items + v63) = 84;
    ++*p_version;
  }
  v64 = *p_size;
  if ( (unsigned int)v64 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      85,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v64 + 1;
    *((_DWORD *)items->m_Items + v64) = 85;
    ++*p_version;
  }
  v65 = *p_size;
  if ( (unsigned int)v65 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      86,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v65 + 1;
    *((_DWORD *)items->m_Items + v65) = 86;
    ++*p_version;
  }
  v66 = *p_size;
  if ( (unsigned int)v66 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      87,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v66 + 1;
    *((_DWORD *)items->m_Items + v66) = 87;
    ++*p_version;
  }
  v67 = *p_size;
  if ( (unsigned int)v67 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      57,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v67 + 1;
    *((_DWORD *)items->m_Items + v67) = 57;
    ++*p_version;
  }
  v68 = *p_size;
  if ( (unsigned int)v68 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      58,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v68 + 1;
    *((_DWORD *)items->m_Items + v68) = 58;
    ++*p_version;
  }
  v69 = *p_size;
  if ( (unsigned int)v69 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      59,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v69 + 1;
    *((_DWORD *)items->m_Items + v69) = 59;
    ++*p_version;
  }
  v70 = *p_size;
  if ( (unsigned int)v70 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      60,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v70 + 1;
    *((_DWORD *)items->m_Items + v70) = 60;
    ++*p_version;
  }
  v71 = *p_size;
  if ( (unsigned int)v71 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      61,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v71 + 1;
    *((_DWORD *)items->m_Items + v71) = 61;
    ++*p_version;
  }
  v72 = *p_size;
  if ( (unsigned int)v72 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      62,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v72 + 1;
    *((_DWORD *)items->m_Items + v72) = 62;
    ++*p_version;
  }
  v73 = *p_size;
  if ( (unsigned int)v73 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      63,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v73 + 1;
    *((_DWORD *)items->m_Items + v73) = 63;
    ++*p_version;
  }
  v74 = *p_size;
  if ( (unsigned int)v74 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      64,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v74 + 1;
    *((_DWORD *)items->m_Items + v74) = 64;
    ++*p_version;
  }
  v75 = *p_size;
  if ( (unsigned int)v75 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      10,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v75 + 1;
    *((_DWORD *)items->m_Items + v75) = 10;
    ++*p_version;
  }
  v76 = *p_size;
  if ( (unsigned int)v76 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      11,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v76 + 1;
    *((_DWORD *)items->m_Items + v76) = 11;
    ++*p_version;
  }
  v77 = *p_size;
  if ( (unsigned int)v77 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      12,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v77 + 1;
    *((_DWORD *)items->m_Items + v77) = 12;
    ++*p_version;
  }
  v78 = *p_size;
  if ( (unsigned int)v78 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      52,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v78 + 1;
    *((_DWORD *)items->m_Items + v78) = 52;
    ++*p_version;
  }
  v79 = *p_size;
  if ( (unsigned int)v79 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      53,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v79 + 1;
    *((_DWORD *)items->m_Items + v79) = 53;
    ++*p_version;
  }
  v80 = *p_size;
  if ( (unsigned int)v80 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      69,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v80 + 1;
    *((_DWORD *)items->m_Items + v80) = 69;
    ++*p_version;
  }
  v81 = *p_size;
  if ( (unsigned int)v81 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      70,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v81 + 1;
    *((_DWORD *)items->m_Items + v81) = 70;
    ++*p_version;
  }
  v82 = *p_size;
  if ( (unsigned int)v82 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      71,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v82 + 1;
    *((_DWORD *)items->m_Items + v82) = 71;
    ++*p_version;
  }
  v83 = *p_size;
  if ( (unsigned int)v83 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      65,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v83 + 1;
    *((_DWORD *)items->m_Items + v83) = 65;
    ++*p_version;
  }
  v84 = *p_size;
  if ( (unsigned int)v84 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      66,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v84 + 1;
    *((_DWORD *)items->m_Items + v84) = 66;
    ++*p_version;
  }
  v85 = *p_size;
  if ( (unsigned int)v85 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      67,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_570;
  }
  else
  {
    *p_size = v85 + 1;
    *((_DWORD *)items->m_Items + v85) = 67;
    ++*p_version;
  }
  v86 = *p_size;
  if ( (unsigned int)v86 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      68,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    *p_size = v86 + 1;
    *((_DWORD *)items->m_Items + v86) = 68;
  }
  FilterKindList_TypeInfo->static_fields->AllFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v5;
  sub_1B76164(FilterKindList_TypeInfo->static_fields);
  v87 = (System_Collections_Generic_List_T__o *)sub_1B7640C(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v87,
    (const MethodInfo_34BC588 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v87 )
    goto LABEL_570;
  v88 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  v89 = &v87->fields._version;
  ++v87->fields._version;
  v90 = v87->fields._items;
  v92 = &v87->fields._size;
  v91 = v87->fields._size;
  if ( !v90 )
    goto LABEL_570;
  if ( (unsigned int)v91 >= v90->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v87,
      0,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
    v90 = v87->fields._items;
    v88 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v87->fields._version;
    if ( !v90 )
      goto LABEL_570;
  }
  else
  {
    *v92 = v91 + 1;
    *((_DWORD *)v90->m_Items + v91) = 0;
    ++*v89;
  }
  v93 = *v92;
  if ( (unsigned int)v93 >= v90->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v87,
      1,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
    v90 = v87->fields._items;
    v88 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v87->fields._version;
    if ( !v90 )
      goto LABEL_570;
  }
  else
  {
    *v92 = v93 + 1;
    *((_DWORD *)v90->m_Items + v93) = 1;
    ++*v89;
  }
  v94 = *v92;
  if ( (unsigned int)v94 >= v90->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v87,
      2,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
    v90 = v87->fields._items;
    v88 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v87->fields._version;
    if ( !v90 )
      goto LABEL_570;
  }
  else
  {
    *v92 = v94 + 1;
    *((_DWORD *)v90->m_Items + v94) = 2;
    ++*v89;
  }
  v95 = *v92;
  if ( (unsigned int)v95 >= v90->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v87,
      3,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
    v90 = v87->fields._items;
    v88 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v87->fields._version;
    if ( !v90 )
      goto LABEL_570;
  }
  else
  {
    *v92 = v95 + 1;
    *((_DWORD *)v90->m_Items + v95) = 3;
    ++*v89;
  }
  v96 = *v92;
  if ( (unsigned int)v96 >= v90->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v87,
      4,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
    v90 = v87->fields._items;
    v88 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v87->fields._version;
    if ( !v90 )
      goto LABEL_570;
  }
  else
  {
    *v92 = v96 + 1;
    *((_DWORD *)v90->m_Items + v96) = 4;
    ++*v89;
  }
  v97 = *v92;
  if ( (unsigned int)v97 >= v90->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v87,
      5,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
    v90 = v87->fields._items;
    v88 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v87->fields._version;
    if ( !v90 )
      goto LABEL_570;
  }
  else
  {
    *v92 = v97 + 1;
    *((_DWORD *)v90->m_Items + v97) = 5;
    ++*v89;
  }
  v98 = *v92;
  if ( (unsigned int)v98 >= v90->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v87,
      6,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
    v90 = v87->fields._items;
    v88 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v87->fields._version;
    if ( !v90 )
      goto LABEL_570;
  }
  else
  {
    *v92 = v98 + 1;
    *((_DWORD *)v90->m_Items + v98) = 6;
    ++*v89;
  }
  v99 = *v92;
  if ( (unsigned int)v99 >= v90->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v87,
      57,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
    v90 = v87->fields._items;
    v88 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v87->fields._version;
    if ( !v90 )
      goto LABEL_570;
  }
  else
  {
    *v92 = v99 + 1;
    *((_DWORD *)v90->m_Items + v99) = 57;
    ++*v89;
  }
  v100 = *v92;
  if ( (unsigned int)v100 >= v90->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v87,
      58,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
    v90 = v87->fields._items;
    v88 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v87->fields._version;
    if ( !v90 )
      goto LABEL_570;
  }
  else
  {
    *v92 = v100 + 1;
    *((_DWORD *)v90->m_Items + v100) = 58;
    ++*v89;
  }
  v101 = *v92;
  if ( (unsigned int)v101 >= v90->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v87,
      59,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
    v90 = v87->fields._items;
    v88 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v87->fields._version;
    if ( !v90 )
      goto LABEL_570;
  }
  else
  {
    *v92 = v101 + 1;
    *((_DWORD *)v90->m_Items + v101) = 59;
    ++*v89;
  }
  v102 = *v92;
  if ( (unsigned int)v102 >= v90->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v87,
      60,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
    v90 = v87->fields._items;
    v88 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v87->fields._version;
    if ( !v90 )
      goto LABEL_570;
  }
  else
  {
    *v92 = v102 + 1;
    *((_DWORD *)v90->m_Items + v102) = 60;
    ++*v89;
  }
  v103 = *v92;
  if ( (unsigned int)v103 >= v90->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v87,
      61,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
    v90 = v87->fields._items;
    v88 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v87->fields._version;
    if ( !v90 )
      goto LABEL_570;
  }
  else
  {
    *v92 = v103 + 1;
    *((_DWORD *)v90->m_Items + v103) = 61;
    ++*v89;
  }
  v104 = *v92;
  if ( (unsigned int)v104 >= v90->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v87,
      62,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
    v90 = v87->fields._items;
    v88 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v87->fields._version;
    if ( !v90 )
      goto LABEL_570;
  }
  else
  {
    *v92 = v104 + 1;
    *((_DWORD *)v90->m_Items + v104) = 62;
    ++*v89;
  }
  v105 = *v92;
  if ( (unsigned int)v105 >= v90->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v87,
      63,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
    v90 = v87->fields._items;
    v88 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v87->fields._version;
    if ( !v90 )
      goto LABEL_570;
  }
  else
  {
    *v92 = v105 + 1;
    *((_DWORD *)v90->m_Items + v105) = 63;
    ++*v89;
  }
  v106 = *v92;
  if ( (unsigned int)v106 >= v90->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v87,
      64,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
  }
  else
  {
    *v92 = v106 + 1;
    *((_DWORD *)v90->m_Items + v106) = 64;
  }
  static_fields = FilterKindList_TypeInfo->static_fields;
  static_fields->ClassFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v87;
  sub_1B76164(&static_fields->ClassFilterKindList);
  v108 = (System_Collections_Generic_List_T__o *)sub_1B7640C(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v108,
    (const MethodInfo_34BC588 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v108 )
    goto LABEL_570;
  v109 = v108->fields._items;
  v110 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v108->fields._version;
  if ( !v109 )
    goto LABEL_570;
  v111 = v108->fields._size;
  if ( (unsigned int)v111 >= v109->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v108,
      0,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
    v109 = v108->fields._items;
    v110 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v108->fields._version;
    if ( !v109 )
      goto LABEL_570;
  }
  else
  {
    v108->fields._size = v111 + 1;
    *((_DWORD *)v109->m_Items + v111) = 0;
    ++v108->fields._version;
  }
  v112 = v108->fields._size;
  if ( (unsigned int)v112 >= v109->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v108,
      1,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
    v109 = v108->fields._items;
    v110 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v108->fields._version;
    if ( !v109 )
      goto LABEL_570;
  }
  else
  {
    v108->fields._size = v112 + 1;
    *((_DWORD *)v109->m_Items + v112) = 1;
    ++v108->fields._version;
  }
  v113 = v108->fields._size;
  if ( (unsigned int)v113 >= v109->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v108,
      2,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
  }
  else
  {
    v108->fields._size = v113 + 1;
    *((_DWORD *)v109->m_Items + v113) = 2;
  }
  v114 = FilterKindList_TypeInfo->static_fields;
  v114->ThreeKnightsFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v108;
  sub_1B76164(&v114->ThreeKnightsFilterKindList);
  v115 = (System_Collections_Generic_List_T__o *)sub_1B7640C(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v115,
    (const MethodInfo_34BC588 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v115 )
    goto LABEL_570;
  v116 = v115->fields._items;
  v117 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v115->fields._version;
  if ( !v116 )
    goto LABEL_570;
  v118 = v115->fields._size;
  if ( (unsigned int)v118 >= v116->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v115,
      3,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v117[4] + 192LL) + 112LL));
    v116 = v115->fields._items;
    v117 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v115->fields._version;
    if ( !v116 )
      goto LABEL_570;
  }
  else
  {
    v115->fields._size = v118 + 1;
    *((_DWORD *)v116->m_Items + v118) = 3;
    ++v115->fields._version;
  }
  v119 = v115->fields._size;
  if ( (unsigned int)v119 >= v116->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v115,
      4,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v117[4] + 192LL) + 112LL));
    v116 = v115->fields._items;
    v117 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v115->fields._version;
    if ( !v116 )
      goto LABEL_570;
  }
  else
  {
    v115->fields._size = v119 + 1;
    *((_DWORD *)v116->m_Items + v119) = 4;
    ++v115->fields._version;
  }
  v120 = v115->fields._size;
  if ( (unsigned int)v120 >= v116->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v115,
      5,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v117[4] + 192LL) + 112LL));
    v116 = v115->fields._items;
    v117 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v115->fields._version;
    if ( !v116 )
      goto LABEL_570;
  }
  else
  {
    v115->fields._size = v120 + 1;
    *((_DWORD *)v116->m_Items + v120) = 5;
    ++v115->fields._version;
  }
  v121 = v115->fields._size;
  if ( (unsigned int)v121 >= v116->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v115,
      6,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v117[4] + 192LL) + 112LL));
  }
  else
  {
    v115->fields._size = v121 + 1;
    *((_DWORD *)v116->m_Items + v121) = 6;
  }
  v122 = FilterKindList_TypeInfo->static_fields;
  v122->FourCavalryFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v115;
  sub_1B76164(&v122->FourCavalryFilterKindList);
  v123 = (System_Collections_Generic_List_T__o *)sub_1B7640C(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v123,
    (const MethodInfo_34BC588 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v123 )
    goto LABEL_570;
  v124 = v123->fields._items;
  v125 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v123->fields._version;
  if ( !v124 )
    goto LABEL_570;
  v126 = v123->fields._size;
  if ( (unsigned int)v126 >= v124->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v123,
      58,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v125[4] + 192LL) + 112LL));
    v124 = v123->fields._items;
    v125 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v123->fields._version;
    if ( !v124 )
      goto LABEL_570;
  }
  else
  {
    v123->fields._size = v126 + 1;
    *((_DWORD *)v124->m_Items + v126) = 58;
    ++v123->fields._version;
  }
  v127 = v123->fields._size;
  if ( (unsigned int)v127 >= v124->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v123,
      59,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v125[4] + 192LL) + 112LL));
    v124 = v123->fields._items;
    v125 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v123->fields._version;
    if ( !v124 )
      goto LABEL_570;
  }
  else
  {
    v123->fields._size = v127 + 1;
    *((_DWORD *)v124->m_Items + v127) = 59;
    ++v123->fields._version;
  }
  v128 = v123->fields._size;
  if ( (unsigned int)v128 >= v124->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v123,
      60,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v125[4] + 192LL) + 112LL));
  }
  else
  {
    v123->fields._size = v128 + 1;
    *((_DWORD *)v124->m_Items + v128) = 60;
  }
  v129 = FilterKindList_TypeInfo->static_fields;
  v129->ClassExtra1FilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v123;
  sub_1B76164(&v129->ClassExtra1FilterKindList);
  v130 = (System_Collections_Generic_List_T__o *)sub_1B7640C(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v130,
    (const MethodInfo_34BC588 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v130 )
    goto LABEL_570;
  v131 = v130->fields._items;
  v132 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v130->fields._version;
  if ( !v131 )
    goto LABEL_570;
  v133 = v130->fields._size;
  if ( (unsigned int)v133 >= v131->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v130,
      57,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v132[4] + 192LL) + 112LL));
    v131 = v130->fields._items;
    v132 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v130->fields._version;
    if ( !v131 )
      goto LABEL_570;
  }
  else
  {
    v130->fields._size = v133 + 1;
    *((_DWORD *)v131->m_Items + v133) = 57;
    ++v130->fields._version;
  }
  v134 = v130->fields._size;
  if ( (unsigned int)v134 >= v131->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v130,
      58,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v132[4] + 192LL) + 112LL));
    v131 = v130->fields._items;
    v132 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v130->fields._version;
    if ( !v131 )
      goto LABEL_570;
  }
  else
  {
    v130->fields._size = v134 + 1;
    *((_DWORD *)v131->m_Items + v134) = 58;
    ++v130->fields._version;
  }
  v135 = v130->fields._size;
  if ( (unsigned int)v135 >= v131->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v130,
      59,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v132[4] + 192LL) + 112LL));
    v131 = v130->fields._items;
    v132 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v130->fields._version;
    if ( !v131 )
      goto LABEL_570;
  }
  else
  {
    v130->fields._size = v135 + 1;
    *((_DWORD *)v131->m_Items + v135) = 59;
    ++v130->fields._version;
  }
  v136 = v130->fields._size;
  if ( (unsigned int)v136 >= v131->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v130,
      60,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v132[4] + 192LL) + 112LL));
  }
  else
  {
    v130->fields._size = v136 + 1;
    *((_DWORD *)v131->m_Items + v136) = 60;
  }
  v137 = FilterKindList_TypeInfo->static_fields;
  v137->ClassExtra1InShielderFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v130;
  sub_1B76164(&v137->ClassExtra1InShielderFilterKindList);
  v138 = (System_Collections_Generic_List_T__o *)sub_1B7640C(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v138,
    (const MethodInfo_34BC588 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v138 )
    goto LABEL_570;
  v139 = v138->fields._items;
  v140 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v138->fields._version;
  if ( !v139 )
    goto LABEL_570;
  v141 = v138->fields._size;
  if ( (unsigned int)v141 >= v139->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v138,
      61,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v140[4] + 192LL) + 112LL));
    v139 = v138->fields._items;
    v140 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v138->fields._version;
    if ( !v139 )
      goto LABEL_570;
  }
  else
  {
    v138->fields._size = v141 + 1;
    *((_DWORD *)v139->m_Items + v141) = 61;
    ++v138->fields._version;
  }
  v142 = v138->fields._size;
  if ( (unsigned int)v142 >= v139->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v138,
      62,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v140[4] + 192LL) + 112LL));
    v139 = v138->fields._items;
    v140 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v138->fields._version;
    if ( !v139 )
      goto LABEL_570;
  }
  else
  {
    v138->fields._size = v142 + 1;
    *((_DWORD *)v139->m_Items + v142) = 62;
    ++v138->fields._version;
  }
  v143 = v138->fields._size;
  if ( (unsigned int)v143 >= v139->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v138,
      63,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v140[4] + 192LL) + 112LL));
    v139 = v138->fields._items;
    v140 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v138->fields._version;
    if ( !v139 )
      goto LABEL_570;
  }
  else
  {
    v138->fields._size = v143 + 1;
    *((_DWORD *)v139->m_Items + v143) = 63;
    ++v138->fields._version;
  }
  v144 = v138->fields._size;
  if ( (unsigned int)v144 >= v139->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v138,
      64,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v140[4] + 192LL) + 112LL));
  }
  else
  {
    v138->fields._size = v144 + 1;
    *((_DWORD *)v139->m_Items + v144) = 64;
  }
  v145 = FilterKindList_TypeInfo->static_fields;
  v145->ClassExtra2FilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v138;
  sub_1B76164(&v145->ClassExtra2FilterKindList);
  v146 = (System_Collections_Generic_List_T__o *)sub_1B7640C(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v146,
    (const MethodInfo_34BC588 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v146 )
    goto LABEL_570;
  v147 = v146->fields._items;
  v148 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v146->fields._version;
  if ( !v147 )
    goto LABEL_570;
  v149 = v146->fields._size;
  if ( (unsigned int)v149 >= v147->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v146,
      65,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v148[4] + 192LL) + 112LL));
    v147 = v146->fields._items;
    v148 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v146->fields._version;
    if ( !v147 )
      goto LABEL_570;
  }
  else
  {
    v146->fields._size = v149 + 1;
    *((_DWORD *)v147->m_Items + v149) = 65;
    ++v146->fields._version;
  }
  v150 = v146->fields._size;
  if ( (unsigned int)v150 >= v147->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v146,
      66,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v148[4] + 192LL) + 112LL));
    v147 = v146->fields._items;
    v148 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v146->fields._version;
    if ( !v147 )
      goto LABEL_570;
  }
  else
  {
    v146->fields._size = v150 + 1;
    *((_DWORD *)v147->m_Items + v150) = 66;
    ++v146->fields._version;
  }
  v151 = v146->fields._size;
  if ( (unsigned int)v151 >= v147->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v146,
      67,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v148[4] + 192LL) + 112LL));
    v147 = v146->fields._items;
    v148 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v146->fields._version;
    if ( !v147 )
      goto LABEL_570;
  }
  else
  {
    v146->fields._size = v151 + 1;
    *((_DWORD *)v147->m_Items + v151) = 67;
    ++v146->fields._version;
  }
  v152 = v146->fields._size;
  if ( (unsigned int)v152 >= v147->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v146,
      68,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v148[4] + 192LL) + 112LL));
  }
  else
  {
    v146->fields._size = v152 + 1;
    *((_DWORD *)v147->m_Items + v152) = 68;
  }
  v153 = FilterKindList_TypeInfo->static_fields;
  v153->ClassGroupFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v146;
  sub_1B76164(&v153->ClassGroupFilterKindList);
  v154 = (System_Collections_Generic_List_T__o *)sub_1B7640C(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v154,
    (const MethodInfo_34BC588 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v154 )
    goto LABEL_570;
  v155 = v154->fields._items;
  v156 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v154->fields._version;
  if ( !v155 )
    goto LABEL_570;
  v157 = v154->fields._size;
  if ( (unsigned int)v157 >= v155->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v154,
      67,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v156[4] + 192LL) + 112LL));
    v155 = v154->fields._items;
    v156 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v154->fields._version;
    if ( !v155 )
      goto LABEL_570;
  }
  else
  {
    v154->fields._size = v157 + 1;
    *((_DWORD *)v155->m_Items + v157) = 67;
    ++v154->fields._version;
  }
  v158 = v154->fields._size;
  if ( (unsigned int)v158 >= v155->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v154,
      68,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v156[4] + 192LL) + 112LL));
  }
  else
  {
    v154->fields._size = v158 + 1;
    *((_DWORD *)v155->m_Items + v158) = 68;
  }
  v159 = FilterKindList_TypeInfo->static_fields;
  v159->ClassGroupExtraFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v154;
  sub_1B76164(&v159->ClassGroupExtraFilterKindList);
  v160 = (System_Collections_Generic_List_T__o *)sub_1B7640C(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v160,
    (const MethodInfo_34BC588 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v160 )
    goto LABEL_570;
  v161 = v160->fields._items;
  v162 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v160->fields._version;
  if ( !v161 )
    goto LABEL_570;
  v163 = v160->fields._size;
  if ( (unsigned int)v163 >= v161->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v160,
      44,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v162[4] + 192LL) + 112LL));
    v161 = v160->fields._items;
    v162 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v160->fields._version;
    if ( !v161 )
      goto LABEL_570;
  }
  else
  {
    v160->fields._size = v163 + 1;
    *((_DWORD *)v161->m_Items + v163) = 44;
    ++v160->fields._version;
  }
  v164 = v160->fields._size;
  if ( (unsigned int)v164 >= v161->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v160,
      43,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v162[4] + 192LL) + 112LL));
    v161 = v160->fields._items;
    v162 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v160->fields._version;
    if ( !v161 )
      goto LABEL_570;
  }
  else
  {
    v160->fields._size = v164 + 1;
    *((_DWORD *)v161->m_Items + v164) = 43;
    ++v160->fields._version;
  }
  v165 = v160->fields._size;
  if ( (unsigned int)v165 >= v161->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v160,
      42,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v162[4] + 192LL) + 112LL));
  }
  else
  {
    v160->fields._size = v165 + 1;
    *((_DWORD *)v161->m_Items + v165) = 42;
  }
  v166 = FilterKindList_TypeInfo->static_fields;
  v166->NpTypeFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v160;
  sub_1B76164(&v166->NpTypeFilterKindList);
  v167 = (System_Collections_Generic_List_T__o *)sub_1B7640C(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v167,
    (const MethodInfo_34BC588 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v167 )
    goto LABEL_570;
  v168 = v167->fields._items;
  v169 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v167->fields._version;
  if ( !v168 )
    goto LABEL_570;
  v170 = v167->fields._size;
  if ( (unsigned int)v170 >= v168->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v167,
      46,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v169[4] + 192LL) + 112LL));
    v168 = v167->fields._items;
    v169 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v167->fields._version;
    if ( !v168 )
      goto LABEL_570;
  }
  else
  {
    v167->fields._size = v170 + 1;
    *((_DWORD *)v168->m_Items + v170) = 46;
    ++v167->fields._version;
  }
  v171 = v167->fields._size;
  if ( (unsigned int)v171 >= v168->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v167,
      45,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v169[4] + 192LL) + 112LL));
    v168 = v167->fields._items;
    v169 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v167->fields._version;
    if ( !v168 )
      goto LABEL_570;
  }
  else
  {
    v167->fields._size = v171 + 1;
    *((_DWORD *)v168->m_Items + v171) = 45;
    ++v167->fields._version;
  }
  v172 = v167->fields._size;
  if ( (unsigned int)v172 >= v168->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v167,
      47,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v169[4] + 192LL) + 112LL));
  }
  else
  {
    v167->fields._size = v172 + 1;
    *((_DWORD *)v168->m_Items + v172) = 47;
  }
  v173 = FilterKindList_TypeInfo->static_fields;
  v173->NpEffectFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v167;
  sub_1B76164(&v173->NpEffectFilterKindList);
  v174 = (System_Collections_Generic_List_T__o *)sub_1B7640C(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v174,
    (const MethodInfo_34BC588 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v174 )
    goto LABEL_570;
  v175 = v174->fields._items;
  v176 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v174->fields._version;
  if ( !v175 )
    goto LABEL_570;
  v177 = v174->fields._size;
  if ( (unsigned int)v177 >= v175->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v174,
      48,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v176[4] + 192LL) + 112LL));
    v175 = v174->fields._items;
    v176 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v174->fields._version;
    if ( !v175 )
      goto LABEL_570;
  }
  else
  {
    v174->fields._size = v177 + 1;
    *((_DWORD *)v175->m_Items + v177) = 48;
    ++v174->fields._version;
  }
  v178 = v174->fields._size;
  if ( (unsigned int)v178 >= v175->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v174,
      8,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v176[4] + 192LL) + 112LL));
    v175 = v174->fields._items;
    v176 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v174->fields._version;
    if ( !v175 )
      goto LABEL_570;
  }
  else
  {
    v174->fields._size = v178 + 1;
    *((_DWORD *)v175->m_Items + v178) = 8;
    ++v174->fields._version;
  }
  v179 = v174->fields._size;
  if ( (unsigned int)v179 >= v175->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v174,
      9,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v176[4] + 192LL) + 112LL));
  }
  else
  {
    v174->fields._size = v179 + 1;
    *((_DWORD *)v175->m_Items + v179) = 9;
  }
  v180 = FilterKindList_TypeInfo->static_fields;
  v180->ServantTypeFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v174;
  sub_1B76164(&v180->ServantTypeFilterKindList);
  v181 = (System_Collections_Generic_List_T__o *)sub_1B7640C(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v181,
    (const MethodInfo_34BC588 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v181 )
    goto LABEL_570;
  v182 = v181->fields._items;
  v183 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v181->fields._version;
  if ( !v182 )
    goto LABEL_570;
  v184 = v181->fields._size;
  if ( (unsigned int)v184 >= v182->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v181,
      21,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v183[4] + 192LL) + 112LL));
    v182 = v181->fields._items;
    v183 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v181->fields._version;
    if ( !v182 )
      goto LABEL_570;
  }
  else
  {
    v181->fields._size = v184 + 1;
    *((_DWORD *)v182->m_Items + v184) = 21;
    ++v181->fields._version;
  }
  v185 = v181->fields._size;
  if ( (unsigned int)v185 >= v182->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v181,
      22,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v183[4] + 192LL) + 112LL));
    v182 = v181->fields._items;
    v183 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v181->fields._version;
    if ( !v182 )
      goto LABEL_570;
  }
  else
  {
    v181->fields._size = v185 + 1;
    *((_DWORD *)v182->m_Items + v185) = 22;
    ++v181->fields._version;
  }
  v186 = v181->fields._size;
  if ( (unsigned int)v186 >= v182->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v181,
      23,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v183[4] + 192LL) + 112LL));
    v182 = v181->fields._items;
    v183 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v181->fields._version;
    if ( !v182 )
      goto LABEL_570;
  }
  else
  {
    v181->fields._size = v186 + 1;
    *((_DWORD *)v182->m_Items + v186) = 23;
    ++v181->fields._version;
  }
  v187 = v181->fields._size;
  if ( (unsigned int)v187 >= v182->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v181,
      24,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v183[4] + 192LL) + 112LL));
    v182 = v181->fields._items;
    v183 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v181->fields._version;
    if ( !v182 )
      goto LABEL_570;
  }
  else
  {
    v181->fields._size = v187 + 1;
    *((_DWORD *)v182->m_Items + v187) = 24;
    ++v181->fields._version;
  }
  v188 = v181->fields._size;
  if ( (unsigned int)v188 >= v182->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v181,
      25,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v183[4] + 192LL) + 112LL));
    v182 = v181->fields._items;
    v183 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v181->fields._version;
    if ( !v182 )
      goto LABEL_570;
  }
  else
  {
    v181->fields._size = v188 + 1;
    *((_DWORD *)v182->m_Items + v188) = 25;
    ++v181->fields._version;
  }
  v189 = v181->fields._size;
  if ( (unsigned int)v189 >= v182->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v181,
      26,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v183[4] + 192LL) + 112LL));
    v182 = v181->fields._items;
    v183 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v181->fields._version;
    if ( !v182 )
      goto LABEL_570;
  }
  else
  {
    v181->fields._size = v189 + 1;
    *((_DWORD *)v182->m_Items + v189) = 26;
    ++v181->fields._version;
  }
  v190 = v181->fields._size;
  if ( (unsigned int)v190 >= v182->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v181,
      27,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v183[4] + 192LL) + 112LL));
  }
  else
  {
    v181->fields._size = v190 + 1;
    *((_DWORD *)v182->m_Items + v190) = 27;
  }
  v191 = FilterKindList_TypeInfo->static_fields;
  v191->CombineBaseServantFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v181;
  sub_1B76164(&v191->CombineBaseServantFilterKindList);
  v192 = (System_Collections_Generic_List_T__o *)sub_1B7640C(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v192,
    (const MethodInfo_34BC588 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v192 )
    goto LABEL_570;
  v193 = v192->fields._items;
  v194 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v192->fields._version;
  if ( !v193 )
    goto LABEL_570;
  v195 = v192->fields._size;
  if ( (unsigned int)v195 >= v193->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v192,
      28,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v194[4] + 192LL) + 112LL));
    v193 = v192->fields._items;
    v194 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v192->fields._version;
    if ( !v193 )
      goto LABEL_570;
  }
  else
  {
    v192->fields._size = v195 + 1;
    *((_DWORD *)v193->m_Items + v195) = 28;
    ++v192->fields._version;
  }
  v196 = v192->fields._size;
  if ( (unsigned int)v196 >= v193->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v192,
      29,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v194[4] + 192LL) + 112LL));
  }
  else
  {
    v192->fields._size = v196 + 1;
    *((_DWORD *)v193->m_Items + v196) = 29;
  }
  v197 = FilterKindList_TypeInfo->static_fields;
  v197->CombineMaterialFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v192;
  sub_1B76164(&v197->CombineMaterialFilterKindList);
  v198 = (System_Collections_Generic_List_T__o *)sub_1B7640C(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v198,
    (const MethodInfo_34BC588 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v198 )
    goto LABEL_570;
  v199 = v198->fields._items;
  v200 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v198->fields._version;
  if ( !v199 )
    goto LABEL_570;
  v201 = v198->fields._size;
  if ( (unsigned int)v201 >= v199->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v198,
      10,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v200[4] + 192LL) + 112LL));
    v199 = v198->fields._items;
    v200 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v198->fields._version;
    if ( !v199 )
      goto LABEL_570;
  }
  else
  {
    v198->fields._size = v201 + 1;
    *((_DWORD *)v199->m_Items + v201) = 10;
    ++v198->fields._version;
  }
  v202 = v198->fields._size;
  if ( (unsigned int)v202 >= v199->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v198,
      11,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v200[4] + 192LL) + 112LL));
    v199 = v198->fields._items;
    v200 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v198->fields._version;
    if ( !v199 )
      goto LABEL_570;
  }
  else
  {
    v198->fields._size = v202 + 1;
    *((_DWORD *)v199->m_Items + v202) = 11;
    ++v198->fields._version;
  }
  v203 = v198->fields._size;
  if ( (unsigned int)v203 >= v199->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v198,
      12,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v200[4] + 192LL) + 112LL));
  }
  else
  {
    v198->fields._size = v203 + 1;
    *((_DWORD *)v199->m_Items + v203) = 12;
  }
  v204 = FilterKindList_TypeInfo->static_fields;
  v204->CollectionStateFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v198;
  sub_1B76164(&v204->CollectionStateFilterKindList);
  v205 = (System_Collections_Generic_List_T__o *)sub_1B7640C(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v205,
    (const MethodInfo_34BC588 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v205 )
    goto LABEL_570;
  v206 = v205->fields._items;
  v207 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v205->fields._version;
  if ( !v206 )
    goto LABEL_570;
  v208 = v205->fields._size;
  if ( (unsigned int)v208 >= v206->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v205,
      11,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v207[4] + 192LL) + 112LL));
    v206 = v205->fields._items;
    v207 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v205->fields._version;
    if ( !v206 )
      goto LABEL_570;
  }
  else
  {
    v205->fields._size = v208 + 1;
    *((_DWORD *)v206->m_Items + v208) = 11;
    ++v205->fields._version;
  }
  v209 = v205->fields._size;
  if ( (unsigned int)v209 >= v206->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v205,
      12,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v207[4] + 192LL) + 112LL));
  }
  else
  {
    v205->fields._size = v209 + 1;
    *((_DWORD *)v206->m_Items + v209) = 12;
  }
  v210 = FilterKindList_TypeInfo->static_fields;
  v210->BonusSelectCollectionStateFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v205;
  sub_1B76164(&v210->BonusSelectCollectionStateFilterKindList);
  v211 = (System_Collections_Generic_List_T__o *)sub_1B7640C(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v211,
    (const MethodInfo_34BC588 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v211 )
    goto LABEL_570;
  v212 = v211->fields._items;
  v213 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v211->fields._version;
  if ( !v212 )
    goto LABEL_570;
  v214 = v211->fields._size;
  if ( (unsigned int)v214 >= v212->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v211,
      52,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v213[4] + 192LL) + 112LL));
    v212 = v211->fields._items;
    v213 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v211->fields._version;
    if ( !v212 )
      goto LABEL_570;
  }
  else
  {
    v211->fields._size = v214 + 1;
    *((_DWORD *)v212->m_Items + v214) = 52;
    ++v211->fields._version;
  }
  v215 = v211->fields._size;
  if ( (unsigned int)v215 >= v212->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v211,
      53,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v213[4] + 192LL) + 112LL));
  }
  else
  {
    v211->fields._size = v215 + 1;
    *((_DWORD *)v212->m_Items + v215) = 53;
  }
  v216 = FilterKindList_TypeInfo->static_fields;
  v216->ServantHaveFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v211;
  sub_1B76164(&v216->ServantHaveFilterKindList);
  v217 = (System_Collections_Generic_List_T__o *)sub_1B7640C(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v217,
    (const MethodInfo_34BC588 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v217 )
    goto LABEL_570;
  v218 = v217->fields._items;
  v219 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v217->fields._version;
  if ( !v218 )
    goto LABEL_570;
  v220 = v217->fields._size;
  if ( (unsigned int)v220 >= v218->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v217,
      50,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v219[4] + 192LL) + 112LL));
    v218 = v217->fields._items;
    v219 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v217->fields._version;
    if ( !v218 )
      goto LABEL_570;
  }
  else
  {
    v217->fields._size = v220 + 1;
    *((_DWORD *)v218->m_Items + v220) = 50;
    ++v217->fields._version;
  }
  v221 = v217->fields._size;
  if ( (unsigned int)v221 >= v218->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v217,
      51,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v219[4] + 192LL) + 112LL));
  }
  else
  {
    v217->fields._size = v221 + 1;
    *((_DWORD *)v218->m_Items + v221) = 51;
  }
  v222 = FilterKindList_TypeInfo->static_fields;
  v222->ServantEffectApplySubjectFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v217;
  sub_1B76164(&v222->ServantEffectApplySubjectFilterKindList);
  v223 = (System_Collections_Generic_List_T__o *)sub_1B7640C(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v223,
    (const MethodInfo_34BC588 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v223 )
    goto LABEL_570;
  v224 = v223->fields._items;
  v225 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v223->fields._version;
  if ( !v224 )
    goto LABEL_570;
  v226 = v223->fields._size;
  if ( (unsigned int)v226 >= v224->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v223,
      69,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v225[4] + 192LL) + 112LL));
    v224 = v223->fields._items;
    v225 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v223->fields._version;
    if ( !v224 )
      goto LABEL_570;
  }
  else
  {
    v223->fields._size = v226 + 1;
    *((_DWORD *)v224->m_Items + v226) = 69;
    ++v223->fields._version;
  }
  v227 = v223->fields._size;
  if ( (unsigned int)v227 >= v224->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v223,
      70,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v225[4] + 192LL) + 112LL));
    v224 = v223->fields._items;
    v225 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v223->fields._version;
    if ( !v224 )
      goto LABEL_570;
  }
  else
  {
    v223->fields._size = v227 + 1;
    *((_DWORD *)v224->m_Items + v227) = 70;
    ++v223->fields._version;
  }
  v228 = v223->fields._size;
  if ( (unsigned int)v228 >= v224->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v223,
      71,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v225[4] + 192LL) + 112LL));
  }
  else
  {
    v223->fields._size = v228 + 1;
    *((_DWORD *)v224->m_Items + v228) = 71;
  }
  v229 = FilterKindList_TypeInfo->static_fields;
  v229->ServantSummonCategoryFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v223;
  sub_1B76164(&v229->ServantSummonCategoryFilterKindList);
  v230 = (System_Collections_Generic_List_T__o *)sub_1B7640C(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v230,
    (const MethodInfo_34BC588 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v230 )
    goto LABEL_570;
  v231 = v230->fields._items;
  v232 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v230->fields._version;
  if ( !v231 )
    goto LABEL_570;
  v233 = v230->fields._size;
  if ( (unsigned int)v233 >= v231->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v230,
      38,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v232[4] + 192LL) + 112LL));
    v231 = v230->fields._items;
    v232 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v230->fields._version;
    if ( !v231 )
      goto LABEL_570;
  }
  else
  {
    v230->fields._size = v233 + 1;
    *((_DWORD *)v231->m_Items + v233) = 38;
    ++v230->fields._version;
  }
  v234 = v230->fields._size;
  if ( (unsigned int)v234 >= v231->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v230,
      37,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v232[4] + 192LL) + 112LL));
    v231 = v230->fields._items;
    v232 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v230->fields._version;
    if ( !v231 )
      goto LABEL_570;
  }
  else
  {
    v230->fields._size = v234 + 1;
    *((_DWORD *)v231->m_Items + v234) = 37;
    ++v230->fields._version;
  }
  v235 = v230->fields._size;
  if ( (unsigned int)v235 >= v231->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v230,
      36,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v232[4] + 192LL) + 112LL));
    v231 = v230->fields._items;
    v232 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v230->fields._version;
    if ( !v231 )
      goto LABEL_570;
  }
  else
  {
    v230->fields._size = v235 + 1;
    *((_DWORD *)v231->m_Items + v235) = 36;
    ++v230->fields._version;
  }
  v236 = v230->fields._size;
  if ( (unsigned int)v236 >= v231->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v230,
      35,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v232[4] + 192LL) + 112LL));
    v231 = v230->fields._items;
    v232 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v230->fields._version;
    if ( !v231 )
      goto LABEL_570;
  }
  else
  {
    v230->fields._size = v236 + 1;
    *((_DWORD *)v231->m_Items + v236) = 35;
    ++v230->fields._version;
  }
  v237 = v230->fields._size;
  if ( (unsigned int)v237 >= v231->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v230,
      34,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v232[4] + 192LL) + 112LL));
  }
  else
  {
    v230->fields._size = v237 + 1;
    *((_DWORD *)v231->m_Items + v237) = 34;
  }
  v238 = FilterKindList_TypeInfo->static_fields;
  v238->RarityFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v230;
  sub_1B76164(&v238->RarityFilterKindList);
  v239 = (System_Collections_Generic_List_T__o *)sub_1B7640C(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v239,
    (const MethodInfo_34BC588 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v239 )
    goto LABEL_570;
  v240 = v239->fields._items;
  v241 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v239->fields._version;
  if ( !v240 )
    goto LABEL_570;
  v242 = v239->fields._size;
  if ( (unsigned int)v242 >= v240->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v239,
      54,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v241[4] + 192LL) + 112LL));
    v240 = v239->fields._items;
    v241 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v239->fields._version;
    if ( !v240 )
      goto LABEL_570;
  }
  else
  {
    v239->fields._size = v242 + 1;
    *((_DWORD *)v240->m_Items + v242) = 54;
    ++v239->fields._version;
  }
  v243 = v239->fields._size;
  if ( (unsigned int)v243 >= v240->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v239,
      55,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v241[4] + 192LL) + 112LL));
    v240 = v239->fields._items;
    v241 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v239->fields._version;
    if ( !v240 )
      goto LABEL_570;
  }
  else
  {
    v239->fields._size = v243 + 1;
    *((_DWORD *)v240->m_Items + v243) = 55;
    ++v239->fields._version;
  }
  v244 = v239->fields._size;
  if ( (unsigned int)v244 >= v240->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v239,
      72,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v241[4] + 192LL) + 112LL));
    v240 = v239->fields._items;
    v241 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v239->fields._version;
    if ( !v240 )
      goto LABEL_570;
  }
  else
  {
    v239->fields._size = v244 + 1;
    *((_DWORD *)v240->m_Items + v244) = 72;
    ++v239->fields._version;
  }
  v245 = v239->fields._size;
  if ( (unsigned int)v245 >= v240->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v239,
      73,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v241[4] + 192LL) + 112LL));
    v240 = v239->fields._items;
    v241 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v239->fields._version;
    if ( !v240 )
      goto LABEL_570;
  }
  else
  {
    v239->fields._size = v245 + 1;
    *((_DWORD *)v240->m_Items + v245) = 73;
    ++v239->fields._version;
  }
  v246 = v239->fields._size;
  if ( (unsigned int)v246 >= v240->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v239,
      74,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v241[4] + 192LL) + 112LL));
    v240 = v239->fields._items;
    v241 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v239->fields._version;
    if ( !v240 )
      goto LABEL_570;
  }
  else
  {
    v239->fields._size = v246 + 1;
    *((_DWORD *)v240->m_Items + v246) = 74;
    ++v239->fields._version;
  }
  v247 = v239->fields._size;
  if ( (unsigned int)v247 >= v240->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v239,
      75,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v241[4] + 192LL) + 112LL));
    v240 = v239->fields._items;
    v241 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v239->fields._version;
    if ( !v240 )
      goto LABEL_570;
  }
  else
  {
    v239->fields._size = v247 + 1;
    *((_DWORD *)v240->m_Items + v247) = 75;
    ++v239->fields._version;
  }
  v248 = v239->fields._size;
  if ( (unsigned int)v248 >= v240->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v239,
      76,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v241[4] + 192LL) + 112LL));
    v240 = v239->fields._items;
    v241 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v239->fields._version;
    if ( !v240 )
      goto LABEL_570;
  }
  else
  {
    v239->fields._size = v248 + 1;
    *((_DWORD *)v240->m_Items + v248) = 76;
    ++v239->fields._version;
  }
  v249 = v239->fields._size;
  if ( (unsigned int)v249 >= v240->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v239,
      56,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v241[4] + 192LL) + 112LL));
  }
  else
  {
    v239->fields._size = v249 + 1;
    *((_DWORD *)v240->m_Items + v249) = 56;
  }
  v250 = FilterKindList_TypeInfo->static_fields;
  v250->ServantEquipTypeFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v239;
  sub_1B76164(&v250->ServantEquipTypeFilterKindList);
  v251 = (System_Collections_Generic_List_T__o *)sub_1B7640C(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v251,
    (const MethodInfo_34BC588 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v251 )
    goto LABEL_570;
  v252 = v251->fields._items;
  v253 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v251->fields._version;
  if ( !v252 )
    goto LABEL_570;
  v254 = v251->fields._size;
  if ( (unsigned int)v254 >= v252->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v251,
      77,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v253[4] + 192LL) + 112LL));
    v252 = v251->fields._items;
    v253 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v251->fields._version;
    if ( !v252 )
      goto LABEL_570;
  }
  else
  {
    v251->fields._size = v254 + 1;
    *((_DWORD *)v252->m_Items + v254) = 77;
    ++v251->fields._version;
  }
  v255 = v251->fields._size;
  if ( (unsigned int)v255 >= v252->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v251,
      78,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v253[4] + 192LL) + 112LL));
    v252 = v251->fields._items;
    v253 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v251->fields._version;
    if ( !v252 )
      goto LABEL_570;
  }
  else
  {
    v251->fields._size = v255 + 1;
    *((_DWORD *)v252->m_Items + v255) = 78;
    ++v251->fields._version;
  }
  v256 = v251->fields._size;
  if ( (unsigned int)v256 >= v252->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v251,
      79,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v253[4] + 192LL) + 112LL));
    v252 = v251->fields._items;
    v253 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v251->fields._version;
    if ( !v252 )
      goto LABEL_570;
  }
  else
  {
    v251->fields._size = v256 + 1;
    *((_DWORD *)v252->m_Items + v256) = 79;
    ++v251->fields._version;
  }
  v257 = v251->fields._size;
  if ( (unsigned int)v257 >= v252->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v251,
      80,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v253[4] + 192LL) + 112LL));
    v252 = v251->fields._items;
    v253 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v251->fields._version;
    if ( !v252 )
      goto LABEL_570;
  }
  else
  {
    v251->fields._size = v257 + 1;
    *((_DWORD *)v252->m_Items + v257) = 80;
    ++v251->fields._version;
  }
  v258 = v251->fields._size;
  if ( (unsigned int)v258 >= v252->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v251,
      81,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v253[4] + 192LL) + 112LL));
    v252 = v251->fields._items;
    v253 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v251->fields._version;
    if ( !v252 )
      goto LABEL_570;
  }
  else
  {
    v251->fields._size = v258 + 1;
    *((_DWORD *)v252->m_Items + v258) = 81;
    ++v251->fields._version;
  }
  v259 = v251->fields._size;
  if ( (unsigned int)v259 >= v252->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v251,
      82,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v253[4] + 192LL) + 112LL));
    v252 = v251->fields._items;
    v253 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v251->fields._version;
    if ( !v252 )
      goto LABEL_570;
  }
  else
  {
    v251->fields._size = v259 + 1;
    *((_DWORD *)v252->m_Items + v259) = 82;
    ++v251->fields._version;
  }
  v260 = v251->fields._size;
  if ( (unsigned int)v260 >= v252->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v251,
      83,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v253[4] + 192LL) + 112LL));
  }
  else
  {
    v251->fields._size = v260 + 1;
    *((_DWORD *)v252->m_Items + v260) = 83;
  }
  v261 = FilterKindList_TypeInfo->static_fields;
  v261->ServantEquipCombineStatusFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v251;
  sub_1B76164(&v261->ServantEquipCombineStatusFilterKindList);
  v262 = (System_Collections_Generic_List_T__o *)sub_1B7640C(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v262,
    (const MethodInfo_34BC588 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v262 )
    goto LABEL_570;
  v263 = v262->fields._items;
  v264 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v262->fields._version;
  if ( !v263 )
    goto LABEL_570;
  v265 = v262->fields._size;
  if ( (unsigned int)v265 >= v263->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v262,
      84,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v264[4] + 192LL) + 112LL));
    v263 = v262->fields._items;
    v264 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v262->fields._version;
    if ( !v263 )
      goto LABEL_570;
  }
  else
  {
    v262->fields._size = v265 + 1;
    *((_DWORD *)v263->m_Items + v265) = 84;
    ++v262->fields._version;
  }
  v266 = v262->fields._size;
  if ( (unsigned int)v266 >= v263->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v262,
      85,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v264[4] + 192LL) + 112LL));
    v263 = v262->fields._items;
    v264 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v262->fields._version;
    if ( !v263 )
      goto LABEL_570;
  }
  else
  {
    v262->fields._size = v266 + 1;
    *((_DWORD *)v263->m_Items + v266) = 85;
    ++v262->fields._version;
  }
  v267 = v262->fields._size;
  if ( (unsigned int)v267 >= v263->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v262,
      86,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v264[4] + 192LL) + 112LL));
    v263 = v262->fields._items;
    v264 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v262->fields._version;
    if ( !v263 )
      goto LABEL_570;
  }
  else
  {
    v262->fields._size = v267 + 1;
    *((_DWORD *)v263->m_Items + v267) = 86;
    ++v262->fields._version;
  }
  v268 = v262->fields._size;
  if ( (unsigned int)v268 >= v263->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v262,
      87,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v264[4] + 192LL) + 112LL));
  }
  else
  {
    v262->fields._size = v268 + 1;
    *((_DWORD *)v263->m_Items + v268) = 87;
  }
  v269 = FilterKindList_TypeInfo->static_fields;
  v269->ServantEquipHaveStatusFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v262;
  sub_1B76164(&v269->ServantEquipHaveStatusFilterKindList);
  v270 = (System_Collections_Generic_List_T__o *)sub_1B7640C(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v270,
    (const MethodInfo_34BC588 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v270 )
    goto LABEL_570;
  v271 = v270->fields._items;
  v272 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v270->fields._version;
  if ( !v271 )
    goto LABEL_570;
  v273 = v270->fields._size;
  if ( (unsigned int)v273 >= v271->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v270,
      30,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v272[4] + 192LL) + 112LL));
    v271 = v270->fields._items;
    v272 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v270->fields._version;
    if ( !v271 )
      goto LABEL_570;
  }
  else
  {
    v270->fields._size = v273 + 1;
    *((_DWORD *)v271->m_Items + v273) = 30;
    ++v270->fields._version;
  }
  v274 = v270->fields._size;
  if ( (unsigned int)v274 >= v271->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v270,
      31,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v272[4] + 192LL) + 112LL));
  }
  else
  {
    v270->fields._size = v274 + 1;
    *((_DWORD *)v271->m_Items + v274) = 31;
  }
  v275 = FilterKindList_TypeInfo->static_fields;
  v275->ServantCostumeFilterKind = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v270;
  sub_1B76164(&v275->ServantCostumeFilterKind);
  v276 = (System_Collections_Generic_List_T__o *)sub_1B7640C(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v276,
    (const MethodInfo_34BC588 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v276 )
    goto LABEL_570;
  v277 = v276->fields._items;
  v278 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v276->fields._version;
  if ( !v277 )
    goto LABEL_570;
  v279 = v276->fields._size;
  if ( (unsigned int)v279 < v277->max_length )
  {
    v276->fields._size = v279 + 1;
    *((_DWORD *)v277->m_Items + v279) = 32;
    ++v276->fields._version;
    goto LABEL_566;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v276,
    32,
    *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v278[4] + 192LL) + 112LL));
  v277 = v276->fields._items;
  v278 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v276->fields._version;
  if ( !v277 )
LABEL_570:
    sub_1B7641C(v6, v7);
LABEL_566:
  v280 = v276->fields._size;
  if ( (unsigned int)v280 >= v277->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v276,
      33,
      *(const MethodInfo_34BCDDC **)(*(_QWORD *)(v278[4] + 192LL) + 112LL));
  }
  else
  {
    v276->fields._size = v280 + 1;
    *((_DWORD *)v277->m_Items + v280) = 33;
  }
  v281 = FilterKindList_TypeInfo->static_fields;
  v281->MaterialServantCostumeFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v276;
  sub_1B76164(&v281->MaterialServantCostumeFilterKindList);
}


void __fastcall FilterKindList___ctor(FilterKindList_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}