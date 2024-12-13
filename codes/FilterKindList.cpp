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
  _QWORD *v109; // x8
  int32_t *v110; // x25
  struct System_Object_array *v111; // x9
  __int64 v112; // x10
  int32_t *v113; // x24
  __int64 v114; // x10
  __int64 v115; // x10
  __int64 v116; // x10
  __int64 v117; // x10
  __int64 v118; // x10
  __int64 v119; // x10
  __int64 v120; // x10
  __int64 v121; // x10
  __int64 v122; // x10
  __int64 v123; // x10
  __int64 v124; // x10
  __int64 v125; // x10
  __int64 v126; // x10
  struct FilterKindList_StaticFields *v127; // x0
  System_Collections_Generic_List_T__o *v128; // x19
  struct System_Object_array *v129; // x8
  _QWORD *v130; // x9
  __int64 v131; // x10
  __int64 v132; // x10
  __int64 v133; // x10
  struct FilterKindList_StaticFields *v134; // x0
  System_Collections_Generic_List_T__o *v135; // x19
  struct System_Object_array *v136; // x8
  _QWORD *v137; // x9
  __int64 v138; // x10
  __int64 v139; // x10
  __int64 v140; // x10
  __int64 v141; // x10
  struct FilterKindList_StaticFields *v142; // x0
  System_Collections_Generic_List_T__o *v143; // x19
  struct System_Object_array *v144; // x8
  _QWORD *v145; // x9
  __int64 v146; // x10
  __int64 v147; // x10
  __int64 v148; // x10
  struct FilterKindList_StaticFields *v149; // x0
  System_Collections_Generic_List_T__o *v150; // x19
  struct System_Object_array *v151; // x8
  _QWORD *v152; // x9
  __int64 v153; // x10
  __int64 v154; // x10
  __int64 v155; // x10
  __int64 v156; // x10
  struct FilterKindList_StaticFields *v157; // x0
  System_Collections_Generic_List_T__o *v158; // x19
  struct System_Object_array *v159; // x8
  _QWORD *v160; // x9
  __int64 v161; // x10
  __int64 v162; // x10
  __int64 v163; // x10
  __int64 v164; // x10
  struct FilterKindList_StaticFields *v165; // x0
  System_Collections_Generic_List_T__o *v166; // x19
  struct System_Object_array *v167; // x8
  _QWORD *v168; // x9
  __int64 v169; // x10
  __int64 v170; // x10
  __int64 v171; // x10
  __int64 v172; // x10
  struct FilterKindList_StaticFields *v173; // x0
  System_Collections_Generic_List_T__o *v174; // x19
  struct System_Object_array *v175; // x8
  _QWORD *v176; // x9
  __int64 v177; // x10
  __int64 v178; // x10
  struct FilterKindList_StaticFields *v179; // x0
  System_Collections_Generic_List_T__o *v180; // x19
  struct System_Object_array *v181; // x8
  _QWORD *v182; // x9
  __int64 v183; // x10
  __int64 v184; // x10
  __int64 v185; // x10
  struct FilterKindList_StaticFields *v186; // x0
  System_Collections_Generic_List_T__o *v187; // x19
  struct System_Object_array *v188; // x8
  _QWORD *v189; // x9
  __int64 v190; // x10
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
  struct System_Object_array *v202; // x9
  _QWORD *v203; // x8
  __int64 v204; // x10
  __int64 v205; // x10
  __int64 v206; // x10
  __int64 v207; // x10
  __int64 v208; // x10
  __int64 v209; // x10
  __int64 v210; // x10
  struct FilterKindList_StaticFields *v211; // x0
  System_Collections_Generic_List_T__o *v212; // x19
  struct System_Object_array *v213; // x8
  _QWORD *v214; // x9
  __int64 v215; // x10
  __int64 v216; // x10
  struct FilterKindList_StaticFields *v217; // x0
  System_Collections_Generic_List_T__o *v218; // x19
  struct System_Object_array *v219; // x8
  _QWORD *v220; // x9
  __int64 v221; // x10
  __int64 v222; // x10
  __int64 v223; // x10
  struct FilterKindList_StaticFields *v224; // x0
  System_Collections_Generic_List_T__o *v225; // x19
  struct System_Object_array *v226; // x8
  _QWORD *v227; // x9
  __int64 v228; // x10
  __int64 v229; // x10
  struct FilterKindList_StaticFields *v230; // x0
  System_Collections_Generic_List_T__o *v231; // x19
  struct System_Object_array *v232; // x8
  _QWORD *v233; // x9
  __int64 v234; // x10
  __int64 v235; // x10
  struct FilterKindList_StaticFields *v236; // x0
  System_Collections_Generic_List_T__o *v237; // x19
  struct System_Object_array *v238; // x8
  _QWORD *v239; // x9
  __int64 v240; // x10
  __int64 v241; // x10
  struct FilterKindList_StaticFields *v242; // x0
  System_Collections_Generic_List_T__o *v243; // x19
  struct System_Object_array *v244; // x8
  _QWORD *v245; // x9
  __int64 v246; // x10
  __int64 v247; // x10
  __int64 v248; // x10
  struct FilterKindList_StaticFields *v249; // x0
  System_Collections_Generic_List_T__o *v250; // x19
  struct System_Object_array *v251; // x8
  _QWORD *v252; // x9
  __int64 v253; // x10
  __int64 v254; // x10
  __int64 v255; // x10
  __int64 v256; // x10
  __int64 v257; // x10
  struct FilterKindList_StaticFields *v258; // x0
  System_Collections_Generic_List_T__o *v259; // x19
  struct System_Object_array *v260; // x9
  _QWORD *v261; // x8
  __int64 v262; // x10
  __int64 v263; // x10
  __int64 v264; // x10
  __int64 v265; // x10
  __int64 v266; // x10
  __int64 v267; // x10
  __int64 v268; // x10
  __int64 v269; // x10
  struct FilterKindList_StaticFields *v270; // x0
  System_Collections_Generic_List_T__o *v271; // x19
  struct System_Object_array *v272; // x9
  _QWORD *v273; // x8
  __int64 v274; // x10
  __int64 v275; // x10
  __int64 v276; // x10
  __int64 v277; // x10
  __int64 v278; // x10
  __int64 v279; // x10
  __int64 v280; // x10
  struct FilterKindList_StaticFields *v281; // x0
  System_Collections_Generic_List_T__o *v282; // x19
  struct System_Object_array *v283; // x8
  _QWORD *v284; // x9
  __int64 v285; // x10
  __int64 v286; // x10
  __int64 v287; // x10
  __int64 v288; // x10
  struct FilterKindList_StaticFields *v289; // x0
  System_Collections_Generic_List_T__o *v290; // x19
  struct System_Object_array *v291; // x8
  _QWORD *v292; // x9
  __int64 v293; // x10
  __int64 v294; // x10
  struct FilterKindList_StaticFields *v295; // x0
  System_Collections_Generic_List_T__o *v296; // x19
  struct System_Object_array *v297; // x8
  _QWORD *v298; // x9
  __int64 v299; // x10
  __int64 v300; // x10
  struct FilterKindList_StaticFields *v301; // x0

  if ( (byte_4B31F98 & 1) == 0 )
  {
    sub_1BD3458(&FilterKindList_TypeInfo, v1);
    sub_1BD3458(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v2);
    sub_1BD3458(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__, v3);
    sub_1BD3458(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo, v4);
    byte_4B31F98 = 1;
  }
  v5 = (System_Collections_Generic_List_T__o *)sub_1BD36A4(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v5,
    (const MethodInfo_35A5D44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v5 )
    goto LABEL_614;
  v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  p_version = &v5->fields._version;
  ++v5->fields._version;
  items = v5->fields._items;
  p_size = &v5->fields._size;
  size = v5->fields._size;
  if ( !items )
    goto LABEL_614;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      8,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    *p_size = v86 + 1;
    *((_DWORD *)items->m_Items + v86) = 68;
  }
  FilterKindList_TypeInfo->static_fields->AllFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v5;
  sub_1BD33FC(FilterKindList_TypeInfo->static_fields);
  v87 = (System_Collections_Generic_List_T__o *)sub_1BD36A4(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v87,
    (const MethodInfo_35A5D44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v87 )
    goto LABEL_614;
  v88 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  v89 = &v87->fields._version;
  ++v87->fields._version;
  v90 = v87->fields._items;
  v92 = &v87->fields._size;
  v91 = v87->fields._size;
  if ( !v90 )
    goto LABEL_614;
  if ( (unsigned int)v91 >= v90->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v87,
      0,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
    v90 = v87->fields._items;
    v88 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v87->fields._version;
    if ( !v90 )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
    v90 = v87->fields._items;
    v88 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v87->fields._version;
    if ( !v90 )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
    v90 = v87->fields._items;
    v88 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v87->fields._version;
    if ( !v90 )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
    v90 = v87->fields._items;
    v88 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v87->fields._version;
    if ( !v90 )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
    v90 = v87->fields._items;
    v88 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v87->fields._version;
    if ( !v90 )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
    v90 = v87->fields._items;
    v88 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v87->fields._version;
    if ( !v90 )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
    v90 = v87->fields._items;
    v88 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v87->fields._version;
    if ( !v90 )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
    v90 = v87->fields._items;
    v88 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v87->fields._version;
    if ( !v90 )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
    v90 = v87->fields._items;
    v88 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v87->fields._version;
    if ( !v90 )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
    v90 = v87->fields._items;
    v88 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v87->fields._version;
    if ( !v90 )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
    v90 = v87->fields._items;
    v88 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v87->fields._version;
    if ( !v90 )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
    v90 = v87->fields._items;
    v88 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v87->fields._version;
    if ( !v90 )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
    v90 = v87->fields._items;
    v88 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v87->fields._version;
    if ( !v90 )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
    v90 = v87->fields._items;
    v88 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v87->fields._version;
    if ( !v90 )
      goto LABEL_614;
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
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
  }
  else
  {
    *v92 = v106 + 1;
    *((_DWORD *)v90->m_Items + v106) = 64;
  }
  static_fields = FilterKindList_TypeInfo->static_fields;
  static_fields->ClassFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v87;
  sub_1BD33FC(&static_fields->ClassFilterKindList);
  v108 = (System_Collections_Generic_List_T__o *)sub_1BD36A4(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v108,
    (const MethodInfo_35A5D44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v108 )
    goto LABEL_614;
  v109 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  v110 = &v108->fields._version;
  ++v108->fields._version;
  v111 = v108->fields._items;
  v113 = &v108->fields._size;
  v112 = v108->fields._size;
  if ( !v111 )
    goto LABEL_614;
  if ( (unsigned int)v112 >= v111->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v108,
      0,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
    v111 = v108->fields._items;
    v109 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v108->fields._version;
    if ( !v111 )
      goto LABEL_614;
  }
  else
  {
    *v113 = v112 + 1;
    *((_DWORD *)v111->m_Items + v112) = 0;
    ++*v110;
  }
  v114 = *v113;
  if ( (unsigned int)v114 >= v111->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v108,
      1,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
    v111 = v108->fields._items;
    v109 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v108->fields._version;
    if ( !v111 )
      goto LABEL_614;
  }
  else
  {
    *v113 = v114 + 1;
    *((_DWORD *)v111->m_Items + v114) = 1;
    ++*v110;
  }
  v115 = *v113;
  if ( (unsigned int)v115 >= v111->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v108,
      2,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
    v111 = v108->fields._items;
    v109 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v108->fields._version;
    if ( !v111 )
      goto LABEL_614;
  }
  else
  {
    *v113 = v115 + 1;
    *((_DWORD *)v111->m_Items + v115) = 2;
    ++*v110;
  }
  v116 = *v113;
  if ( (unsigned int)v116 >= v111->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v108,
      3,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
    v111 = v108->fields._items;
    v109 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v108->fields._version;
    if ( !v111 )
      goto LABEL_614;
  }
  else
  {
    *v113 = v116 + 1;
    *((_DWORD *)v111->m_Items + v116) = 3;
    ++*v110;
  }
  v117 = *v113;
  if ( (unsigned int)v117 >= v111->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v108,
      4,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
    v111 = v108->fields._items;
    v109 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v108->fields._version;
    if ( !v111 )
      goto LABEL_614;
  }
  else
  {
    *v113 = v117 + 1;
    *((_DWORD *)v111->m_Items + v117) = 4;
    ++*v110;
  }
  v118 = *v113;
  if ( (unsigned int)v118 >= v111->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v108,
      5,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
    v111 = v108->fields._items;
    v109 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v108->fields._version;
    if ( !v111 )
      goto LABEL_614;
  }
  else
  {
    *v113 = v118 + 1;
    *((_DWORD *)v111->m_Items + v118) = 5;
    ++*v110;
  }
  v119 = *v113;
  if ( (unsigned int)v119 >= v111->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v108,
      6,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
    v111 = v108->fields._items;
    v109 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v108->fields._version;
    if ( !v111 )
      goto LABEL_614;
  }
  else
  {
    *v113 = v119 + 1;
    *((_DWORD *)v111->m_Items + v119) = 6;
    ++*v110;
  }
  v120 = *v113;
  if ( (unsigned int)v120 >= v111->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v108,
      58,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
    v111 = v108->fields._items;
    v109 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v108->fields._version;
    if ( !v111 )
      goto LABEL_614;
  }
  else
  {
    *v113 = v120 + 1;
    *((_DWORD *)v111->m_Items + v120) = 58;
    ++*v110;
  }
  v121 = *v113;
  if ( (unsigned int)v121 >= v111->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v108,
      59,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
    v111 = v108->fields._items;
    v109 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v108->fields._version;
    if ( !v111 )
      goto LABEL_614;
  }
  else
  {
    *v113 = v121 + 1;
    *((_DWORD *)v111->m_Items + v121) = 59;
    ++*v110;
  }
  v122 = *v113;
  if ( (unsigned int)v122 >= v111->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v108,
      60,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
    v111 = v108->fields._items;
    v109 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v108->fields._version;
    if ( !v111 )
      goto LABEL_614;
  }
  else
  {
    *v113 = v122 + 1;
    *((_DWORD *)v111->m_Items + v122) = 60;
    ++*v110;
  }
  v123 = *v113;
  if ( (unsigned int)v123 >= v111->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v108,
      61,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
    v111 = v108->fields._items;
    v109 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v108->fields._version;
    if ( !v111 )
      goto LABEL_614;
  }
  else
  {
    *v113 = v123 + 1;
    *((_DWORD *)v111->m_Items + v123) = 61;
    ++*v110;
  }
  v124 = *v113;
  if ( (unsigned int)v124 >= v111->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v108,
      62,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
    v111 = v108->fields._items;
    v109 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v108->fields._version;
    if ( !v111 )
      goto LABEL_614;
  }
  else
  {
    *v113 = v124 + 1;
    *((_DWORD *)v111->m_Items + v124) = 62;
    ++*v110;
  }
  v125 = *v113;
  if ( (unsigned int)v125 >= v111->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v108,
      63,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
    v111 = v108->fields._items;
    v109 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v108->fields._version;
    if ( !v111 )
      goto LABEL_614;
  }
  else
  {
    *v113 = v125 + 1;
    *((_DWORD *)v111->m_Items + v125) = 63;
    ++*v110;
  }
  v126 = *v113;
  if ( (unsigned int)v126 >= v111->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v108,
      64,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v109[4] + 192LL) + 112LL));
  }
  else
  {
    *v113 = v126 + 1;
    *((_DWORD *)v111->m_Items + v126) = 64;
  }
  v127 = FilterKindList_TypeInfo->static_fields;
  v127->ClassFilterKindListForExchangeSvtCoin = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v108;
  sub_1BD33FC(&v127->ClassFilterKindListForExchangeSvtCoin);
  v128 = (System_Collections_Generic_List_T__o *)sub_1BD36A4(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v128,
    (const MethodInfo_35A5D44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v128 )
    goto LABEL_614;
  v129 = v128->fields._items;
  v130 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v128->fields._version;
  if ( !v129 )
    goto LABEL_614;
  v131 = v128->fields._size;
  if ( (unsigned int)v131 >= v129->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v128,
      0,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v130[4] + 192LL) + 112LL));
    v129 = v128->fields._items;
    v130 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v128->fields._version;
    if ( !v129 )
      goto LABEL_614;
  }
  else
  {
    v128->fields._size = v131 + 1;
    *((_DWORD *)v129->m_Items + v131) = 0;
    ++v128->fields._version;
  }
  v132 = v128->fields._size;
  if ( (unsigned int)v132 >= v129->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v128,
      1,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v130[4] + 192LL) + 112LL));
    v129 = v128->fields._items;
    v130 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v128->fields._version;
    if ( !v129 )
      goto LABEL_614;
  }
  else
  {
    v128->fields._size = v132 + 1;
    *((_DWORD *)v129->m_Items + v132) = 1;
    ++v128->fields._version;
  }
  v133 = v128->fields._size;
  if ( (unsigned int)v133 >= v129->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v128,
      2,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v130[4] + 192LL) + 112LL));
  }
  else
  {
    v128->fields._size = v133 + 1;
    *((_DWORD *)v129->m_Items + v133) = 2;
  }
  v134 = FilterKindList_TypeInfo->static_fields;
  v134->ThreeKnightsFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v128;
  sub_1BD33FC(&v134->ThreeKnightsFilterKindList);
  v135 = (System_Collections_Generic_List_T__o *)sub_1BD36A4(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v135,
    (const MethodInfo_35A5D44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v135 )
    goto LABEL_614;
  v136 = v135->fields._items;
  v137 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v135->fields._version;
  if ( !v136 )
    goto LABEL_614;
  v138 = v135->fields._size;
  if ( (unsigned int)v138 >= v136->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v135,
      3,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v137[4] + 192LL) + 112LL));
    v136 = v135->fields._items;
    v137 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v135->fields._version;
    if ( !v136 )
      goto LABEL_614;
  }
  else
  {
    v135->fields._size = v138 + 1;
    *((_DWORD *)v136->m_Items + v138) = 3;
    ++v135->fields._version;
  }
  v139 = v135->fields._size;
  if ( (unsigned int)v139 >= v136->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v135,
      4,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v137[4] + 192LL) + 112LL));
    v136 = v135->fields._items;
    v137 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v135->fields._version;
    if ( !v136 )
      goto LABEL_614;
  }
  else
  {
    v135->fields._size = v139 + 1;
    *((_DWORD *)v136->m_Items + v139) = 4;
    ++v135->fields._version;
  }
  v140 = v135->fields._size;
  if ( (unsigned int)v140 >= v136->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v135,
      5,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v137[4] + 192LL) + 112LL));
    v136 = v135->fields._items;
    v137 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v135->fields._version;
    if ( !v136 )
      goto LABEL_614;
  }
  else
  {
    v135->fields._size = v140 + 1;
    *((_DWORD *)v136->m_Items + v140) = 5;
    ++v135->fields._version;
  }
  v141 = v135->fields._size;
  if ( (unsigned int)v141 >= v136->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v135,
      6,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v137[4] + 192LL) + 112LL));
  }
  else
  {
    v135->fields._size = v141 + 1;
    *((_DWORD *)v136->m_Items + v141) = 6;
  }
  v142 = FilterKindList_TypeInfo->static_fields;
  v142->FourCavalryFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v135;
  sub_1BD33FC(&v142->FourCavalryFilterKindList);
  v143 = (System_Collections_Generic_List_T__o *)sub_1BD36A4(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v143,
    (const MethodInfo_35A5D44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v143 )
    goto LABEL_614;
  v144 = v143->fields._items;
  v145 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v143->fields._version;
  if ( !v144 )
    goto LABEL_614;
  v146 = v143->fields._size;
  if ( (unsigned int)v146 >= v144->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v143,
      58,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v145[4] + 192LL) + 112LL));
    v144 = v143->fields._items;
    v145 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v143->fields._version;
    if ( !v144 )
      goto LABEL_614;
  }
  else
  {
    v143->fields._size = v146 + 1;
    *((_DWORD *)v144->m_Items + v146) = 58;
    ++v143->fields._version;
  }
  v147 = v143->fields._size;
  if ( (unsigned int)v147 >= v144->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v143,
      59,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v145[4] + 192LL) + 112LL));
    v144 = v143->fields._items;
    v145 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v143->fields._version;
    if ( !v144 )
      goto LABEL_614;
  }
  else
  {
    v143->fields._size = v147 + 1;
    *((_DWORD *)v144->m_Items + v147) = 59;
    ++v143->fields._version;
  }
  v148 = v143->fields._size;
  if ( (unsigned int)v148 >= v144->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v143,
      60,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v145[4] + 192LL) + 112LL));
  }
  else
  {
    v143->fields._size = v148 + 1;
    *((_DWORD *)v144->m_Items + v148) = 60;
  }
  v149 = FilterKindList_TypeInfo->static_fields;
  v149->ClassExtra1FilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v143;
  sub_1BD33FC(&v149->ClassExtra1FilterKindList);
  v150 = (System_Collections_Generic_List_T__o *)sub_1BD36A4(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v150,
    (const MethodInfo_35A5D44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v150 )
    goto LABEL_614;
  v151 = v150->fields._items;
  v152 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v150->fields._version;
  if ( !v151 )
    goto LABEL_614;
  v153 = v150->fields._size;
  if ( (unsigned int)v153 >= v151->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v150,
      57,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v152[4] + 192LL) + 112LL));
    v151 = v150->fields._items;
    v152 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v150->fields._version;
    if ( !v151 )
      goto LABEL_614;
  }
  else
  {
    v150->fields._size = v153 + 1;
    *((_DWORD *)v151->m_Items + v153) = 57;
    ++v150->fields._version;
  }
  v154 = v150->fields._size;
  if ( (unsigned int)v154 >= v151->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v150,
      58,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v152[4] + 192LL) + 112LL));
    v151 = v150->fields._items;
    v152 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v150->fields._version;
    if ( !v151 )
      goto LABEL_614;
  }
  else
  {
    v150->fields._size = v154 + 1;
    *((_DWORD *)v151->m_Items + v154) = 58;
    ++v150->fields._version;
  }
  v155 = v150->fields._size;
  if ( (unsigned int)v155 >= v151->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v150,
      59,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v152[4] + 192LL) + 112LL));
    v151 = v150->fields._items;
    v152 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v150->fields._version;
    if ( !v151 )
      goto LABEL_614;
  }
  else
  {
    v150->fields._size = v155 + 1;
    *((_DWORD *)v151->m_Items + v155) = 59;
    ++v150->fields._version;
  }
  v156 = v150->fields._size;
  if ( (unsigned int)v156 >= v151->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v150,
      60,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v152[4] + 192LL) + 112LL));
  }
  else
  {
    v150->fields._size = v156 + 1;
    *((_DWORD *)v151->m_Items + v156) = 60;
  }
  v157 = FilterKindList_TypeInfo->static_fields;
  v157->ClassExtra1InShielderFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v150;
  sub_1BD33FC(&v157->ClassExtra1InShielderFilterKindList);
  v158 = (System_Collections_Generic_List_T__o *)sub_1BD36A4(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v158,
    (const MethodInfo_35A5D44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v158 )
    goto LABEL_614;
  v159 = v158->fields._items;
  v160 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v158->fields._version;
  if ( !v159 )
    goto LABEL_614;
  v161 = v158->fields._size;
  if ( (unsigned int)v161 >= v159->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v158,
      61,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v160[4] + 192LL) + 112LL));
    v159 = v158->fields._items;
    v160 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v158->fields._version;
    if ( !v159 )
      goto LABEL_614;
  }
  else
  {
    v158->fields._size = v161 + 1;
    *((_DWORD *)v159->m_Items + v161) = 61;
    ++v158->fields._version;
  }
  v162 = v158->fields._size;
  if ( (unsigned int)v162 >= v159->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v158,
      62,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v160[4] + 192LL) + 112LL));
    v159 = v158->fields._items;
    v160 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v158->fields._version;
    if ( !v159 )
      goto LABEL_614;
  }
  else
  {
    v158->fields._size = v162 + 1;
    *((_DWORD *)v159->m_Items + v162) = 62;
    ++v158->fields._version;
  }
  v163 = v158->fields._size;
  if ( (unsigned int)v163 >= v159->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v158,
      63,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v160[4] + 192LL) + 112LL));
    v159 = v158->fields._items;
    v160 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v158->fields._version;
    if ( !v159 )
      goto LABEL_614;
  }
  else
  {
    v158->fields._size = v163 + 1;
    *((_DWORD *)v159->m_Items + v163) = 63;
    ++v158->fields._version;
  }
  v164 = v158->fields._size;
  if ( (unsigned int)v164 >= v159->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v158,
      64,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v160[4] + 192LL) + 112LL));
  }
  else
  {
    v158->fields._size = v164 + 1;
    *((_DWORD *)v159->m_Items + v164) = 64;
  }
  v165 = FilterKindList_TypeInfo->static_fields;
  v165->ClassExtra2FilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v158;
  sub_1BD33FC(&v165->ClassExtra2FilterKindList);
  v166 = (System_Collections_Generic_List_T__o *)sub_1BD36A4(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v166,
    (const MethodInfo_35A5D44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v166 )
    goto LABEL_614;
  v167 = v166->fields._items;
  v168 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v166->fields._version;
  if ( !v167 )
    goto LABEL_614;
  v169 = v166->fields._size;
  if ( (unsigned int)v169 >= v167->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v166,
      65,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v168[4] + 192LL) + 112LL));
    v167 = v166->fields._items;
    v168 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v166->fields._version;
    if ( !v167 )
      goto LABEL_614;
  }
  else
  {
    v166->fields._size = v169 + 1;
    *((_DWORD *)v167->m_Items + v169) = 65;
    ++v166->fields._version;
  }
  v170 = v166->fields._size;
  if ( (unsigned int)v170 >= v167->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v166,
      66,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v168[4] + 192LL) + 112LL));
    v167 = v166->fields._items;
    v168 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v166->fields._version;
    if ( !v167 )
      goto LABEL_614;
  }
  else
  {
    v166->fields._size = v170 + 1;
    *((_DWORD *)v167->m_Items + v170) = 66;
    ++v166->fields._version;
  }
  v171 = v166->fields._size;
  if ( (unsigned int)v171 >= v167->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v166,
      67,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v168[4] + 192LL) + 112LL));
    v167 = v166->fields._items;
    v168 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v166->fields._version;
    if ( !v167 )
      goto LABEL_614;
  }
  else
  {
    v166->fields._size = v171 + 1;
    *((_DWORD *)v167->m_Items + v171) = 67;
    ++v166->fields._version;
  }
  v172 = v166->fields._size;
  if ( (unsigned int)v172 >= v167->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v166,
      68,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v168[4] + 192LL) + 112LL));
  }
  else
  {
    v166->fields._size = v172 + 1;
    *((_DWORD *)v167->m_Items + v172) = 68;
  }
  v173 = FilterKindList_TypeInfo->static_fields;
  v173->ClassGroupFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v166;
  sub_1BD33FC(&v173->ClassGroupFilterKindList);
  v174 = (System_Collections_Generic_List_T__o *)sub_1BD36A4(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v174,
    (const MethodInfo_35A5D44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v174 )
    goto LABEL_614;
  v175 = v174->fields._items;
  v176 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v174->fields._version;
  if ( !v175 )
    goto LABEL_614;
  v177 = v174->fields._size;
  if ( (unsigned int)v177 >= v175->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v174,
      67,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v176[4] + 192LL) + 112LL));
    v175 = v174->fields._items;
    v176 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v174->fields._version;
    if ( !v175 )
      goto LABEL_614;
  }
  else
  {
    v174->fields._size = v177 + 1;
    *((_DWORD *)v175->m_Items + v177) = 67;
    ++v174->fields._version;
  }
  v178 = v174->fields._size;
  if ( (unsigned int)v178 >= v175->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v174,
      68,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v176[4] + 192LL) + 112LL));
  }
  else
  {
    v174->fields._size = v178 + 1;
    *((_DWORD *)v175->m_Items + v178) = 68;
  }
  v179 = FilterKindList_TypeInfo->static_fields;
  v179->ClassGroupExtraFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v174;
  sub_1BD33FC(&v179->ClassGroupExtraFilterKindList);
  v180 = (System_Collections_Generic_List_T__o *)sub_1BD36A4(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v180,
    (const MethodInfo_35A5D44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v180 )
    goto LABEL_614;
  v181 = v180->fields._items;
  v182 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v180->fields._version;
  if ( !v181 )
    goto LABEL_614;
  v183 = v180->fields._size;
  if ( (unsigned int)v183 >= v181->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v180,
      44,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v182[4] + 192LL) + 112LL));
    v181 = v180->fields._items;
    v182 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v180->fields._version;
    if ( !v181 )
      goto LABEL_614;
  }
  else
  {
    v180->fields._size = v183 + 1;
    *((_DWORD *)v181->m_Items + v183) = 44;
    ++v180->fields._version;
  }
  v184 = v180->fields._size;
  if ( (unsigned int)v184 >= v181->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v180,
      43,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v182[4] + 192LL) + 112LL));
    v181 = v180->fields._items;
    v182 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v180->fields._version;
    if ( !v181 )
      goto LABEL_614;
  }
  else
  {
    v180->fields._size = v184 + 1;
    *((_DWORD *)v181->m_Items + v184) = 43;
    ++v180->fields._version;
  }
  v185 = v180->fields._size;
  if ( (unsigned int)v185 >= v181->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v180,
      42,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v182[4] + 192LL) + 112LL));
  }
  else
  {
    v180->fields._size = v185 + 1;
    *((_DWORD *)v181->m_Items + v185) = 42;
  }
  v186 = FilterKindList_TypeInfo->static_fields;
  v186->NpTypeFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v180;
  sub_1BD33FC(&v186->NpTypeFilterKindList);
  v187 = (System_Collections_Generic_List_T__o *)sub_1BD36A4(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v187,
    (const MethodInfo_35A5D44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v187 )
    goto LABEL_614;
  v188 = v187->fields._items;
  v189 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v187->fields._version;
  if ( !v188 )
    goto LABEL_614;
  v190 = v187->fields._size;
  if ( (unsigned int)v190 >= v188->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v187,
      46,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v189[4] + 192LL) + 112LL));
    v188 = v187->fields._items;
    v189 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v187->fields._version;
    if ( !v188 )
      goto LABEL_614;
  }
  else
  {
    v187->fields._size = v190 + 1;
    *((_DWORD *)v188->m_Items + v190) = 46;
    ++v187->fields._version;
  }
  v191 = v187->fields._size;
  if ( (unsigned int)v191 >= v188->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v187,
      45,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v189[4] + 192LL) + 112LL));
    v188 = v187->fields._items;
    v189 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v187->fields._version;
    if ( !v188 )
      goto LABEL_614;
  }
  else
  {
    v187->fields._size = v191 + 1;
    *((_DWORD *)v188->m_Items + v191) = 45;
    ++v187->fields._version;
  }
  v192 = v187->fields._size;
  if ( (unsigned int)v192 >= v188->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v187,
      47,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v189[4] + 192LL) + 112LL));
  }
  else
  {
    v187->fields._size = v192 + 1;
    *((_DWORD *)v188->m_Items + v192) = 47;
  }
  v193 = FilterKindList_TypeInfo->static_fields;
  v193->NpEffectFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v187;
  sub_1BD33FC(&v193->NpEffectFilterKindList);
  v194 = (System_Collections_Generic_List_T__o *)sub_1BD36A4(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v194,
    (const MethodInfo_35A5D44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v194 )
    goto LABEL_614;
  v195 = v194->fields._items;
  v196 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v194->fields._version;
  if ( !v195 )
    goto LABEL_614;
  v197 = v194->fields._size;
  if ( (unsigned int)v197 >= v195->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v194,
      48,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v196[4] + 192LL) + 112LL));
    v195 = v194->fields._items;
    v196 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v194->fields._version;
    if ( !v195 )
      goto LABEL_614;
  }
  else
  {
    v194->fields._size = v197 + 1;
    *((_DWORD *)v195->m_Items + v197) = 48;
    ++v194->fields._version;
  }
  v198 = v194->fields._size;
  if ( (unsigned int)v198 >= v195->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v194,
      8,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v196[4] + 192LL) + 112LL));
    v195 = v194->fields._items;
    v196 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v194->fields._version;
    if ( !v195 )
      goto LABEL_614;
  }
  else
  {
    v194->fields._size = v198 + 1;
    *((_DWORD *)v195->m_Items + v198) = 8;
    ++v194->fields._version;
  }
  v199 = v194->fields._size;
  if ( (unsigned int)v199 >= v195->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v194,
      9,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v196[4] + 192LL) + 112LL));
  }
  else
  {
    v194->fields._size = v199 + 1;
    *((_DWORD *)v195->m_Items + v199) = 9;
  }
  v200 = FilterKindList_TypeInfo->static_fields;
  v200->ServantTypeFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v194;
  sub_1BD33FC(&v200->ServantTypeFilterKindList);
  v201 = (System_Collections_Generic_List_T__o *)sub_1BD36A4(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v201,
    (const MethodInfo_35A5D44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v201 )
    goto LABEL_614;
  v202 = v201->fields._items;
  v203 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v201->fields._version;
  if ( !v202 )
    goto LABEL_614;
  v204 = v201->fields._size;
  if ( (unsigned int)v204 >= v202->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v201,
      21,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v203[4] + 192LL) + 112LL));
    v202 = v201->fields._items;
    v203 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v201->fields._version;
    if ( !v202 )
      goto LABEL_614;
  }
  else
  {
    v201->fields._size = v204 + 1;
    *((_DWORD *)v202->m_Items + v204) = 21;
    ++v201->fields._version;
  }
  v205 = v201->fields._size;
  if ( (unsigned int)v205 >= v202->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v201,
      22,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v203[4] + 192LL) + 112LL));
    v202 = v201->fields._items;
    v203 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v201->fields._version;
    if ( !v202 )
      goto LABEL_614;
  }
  else
  {
    v201->fields._size = v205 + 1;
    *((_DWORD *)v202->m_Items + v205) = 22;
    ++v201->fields._version;
  }
  v206 = v201->fields._size;
  if ( (unsigned int)v206 >= v202->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v201,
      23,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v203[4] + 192LL) + 112LL));
    v202 = v201->fields._items;
    v203 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v201->fields._version;
    if ( !v202 )
      goto LABEL_614;
  }
  else
  {
    v201->fields._size = v206 + 1;
    *((_DWORD *)v202->m_Items + v206) = 23;
    ++v201->fields._version;
  }
  v207 = v201->fields._size;
  if ( (unsigned int)v207 >= v202->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v201,
      24,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v203[4] + 192LL) + 112LL));
    v202 = v201->fields._items;
    v203 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v201->fields._version;
    if ( !v202 )
      goto LABEL_614;
  }
  else
  {
    v201->fields._size = v207 + 1;
    *((_DWORD *)v202->m_Items + v207) = 24;
    ++v201->fields._version;
  }
  v208 = v201->fields._size;
  if ( (unsigned int)v208 >= v202->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v201,
      25,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v203[4] + 192LL) + 112LL));
    v202 = v201->fields._items;
    v203 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v201->fields._version;
    if ( !v202 )
      goto LABEL_614;
  }
  else
  {
    v201->fields._size = v208 + 1;
    *((_DWORD *)v202->m_Items + v208) = 25;
    ++v201->fields._version;
  }
  v209 = v201->fields._size;
  if ( (unsigned int)v209 >= v202->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v201,
      26,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v203[4] + 192LL) + 112LL));
    v202 = v201->fields._items;
    v203 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v201->fields._version;
    if ( !v202 )
      goto LABEL_614;
  }
  else
  {
    v201->fields._size = v209 + 1;
    *((_DWORD *)v202->m_Items + v209) = 26;
    ++v201->fields._version;
  }
  v210 = v201->fields._size;
  if ( (unsigned int)v210 >= v202->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v201,
      27,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v203[4] + 192LL) + 112LL));
  }
  else
  {
    v201->fields._size = v210 + 1;
    *((_DWORD *)v202->m_Items + v210) = 27;
  }
  v211 = FilterKindList_TypeInfo->static_fields;
  v211->CombineBaseServantFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v201;
  sub_1BD33FC(&v211->CombineBaseServantFilterKindList);
  v212 = (System_Collections_Generic_List_T__o *)sub_1BD36A4(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v212,
    (const MethodInfo_35A5D44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v212 )
    goto LABEL_614;
  v213 = v212->fields._items;
  v214 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v212->fields._version;
  if ( !v213 )
    goto LABEL_614;
  v215 = v212->fields._size;
  if ( (unsigned int)v215 >= v213->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v212,
      28,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v214[4] + 192LL) + 112LL));
    v213 = v212->fields._items;
    v214 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v212->fields._version;
    if ( !v213 )
      goto LABEL_614;
  }
  else
  {
    v212->fields._size = v215 + 1;
    *((_DWORD *)v213->m_Items + v215) = 28;
    ++v212->fields._version;
  }
  v216 = v212->fields._size;
  if ( (unsigned int)v216 >= v213->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v212,
      29,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v214[4] + 192LL) + 112LL));
  }
  else
  {
    v212->fields._size = v216 + 1;
    *((_DWORD *)v213->m_Items + v216) = 29;
  }
  v217 = FilterKindList_TypeInfo->static_fields;
  v217->CombineMaterialFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v212;
  sub_1BD33FC(&v217->CombineMaterialFilterKindList);
  v218 = (System_Collections_Generic_List_T__o *)sub_1BD36A4(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v218,
    (const MethodInfo_35A5D44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v218 )
    goto LABEL_614;
  v219 = v218->fields._items;
  v220 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v218->fields._version;
  if ( !v219 )
    goto LABEL_614;
  v221 = v218->fields._size;
  if ( (unsigned int)v221 >= v219->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v218,
      10,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v220[4] + 192LL) + 112LL));
    v219 = v218->fields._items;
    v220 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v218->fields._version;
    if ( !v219 )
      goto LABEL_614;
  }
  else
  {
    v218->fields._size = v221 + 1;
    *((_DWORD *)v219->m_Items + v221) = 10;
    ++v218->fields._version;
  }
  v222 = v218->fields._size;
  if ( (unsigned int)v222 >= v219->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v218,
      11,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v220[4] + 192LL) + 112LL));
    v219 = v218->fields._items;
    v220 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v218->fields._version;
    if ( !v219 )
      goto LABEL_614;
  }
  else
  {
    v218->fields._size = v222 + 1;
    *((_DWORD *)v219->m_Items + v222) = 11;
    ++v218->fields._version;
  }
  v223 = v218->fields._size;
  if ( (unsigned int)v223 >= v219->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v218,
      12,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v220[4] + 192LL) + 112LL));
  }
  else
  {
    v218->fields._size = v223 + 1;
    *((_DWORD *)v219->m_Items + v223) = 12;
  }
  v224 = FilterKindList_TypeInfo->static_fields;
  v224->CollectionStateFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v218;
  sub_1BD33FC(&v224->CollectionStateFilterKindList);
  v225 = (System_Collections_Generic_List_T__o *)sub_1BD36A4(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v225,
    (const MethodInfo_35A5D44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v225 )
    goto LABEL_614;
  v226 = v225->fields._items;
  v227 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v225->fields._version;
  if ( !v226 )
    goto LABEL_614;
  v228 = v225->fields._size;
  if ( (unsigned int)v228 >= v226->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v225,
      11,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v227[4] + 192LL) + 112LL));
    v226 = v225->fields._items;
    v227 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v225->fields._version;
    if ( !v226 )
      goto LABEL_614;
  }
  else
  {
    v225->fields._size = v228 + 1;
    *((_DWORD *)v226->m_Items + v228) = 11;
    ++v225->fields._version;
  }
  v229 = v225->fields._size;
  if ( (unsigned int)v229 >= v226->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v225,
      12,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v227[4] + 192LL) + 112LL));
  }
  else
  {
    v225->fields._size = v229 + 1;
    *((_DWORD *)v226->m_Items + v229) = 12;
  }
  v230 = FilterKindList_TypeInfo->static_fields;
  v230->BonusSelectCollectionStateFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v225;
  sub_1BD33FC(&v230->BonusSelectCollectionStateFilterKindList);
  v231 = (System_Collections_Generic_List_T__o *)sub_1BD36A4(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v231,
    (const MethodInfo_35A5D44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v231 )
    goto LABEL_614;
  v232 = v231->fields._items;
  v233 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v231->fields._version;
  if ( !v232 )
    goto LABEL_614;
  v234 = v231->fields._size;
  if ( (unsigned int)v234 >= v232->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v231,
      52,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v233[4] + 192LL) + 112LL));
    v232 = v231->fields._items;
    v233 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v231->fields._version;
    if ( !v232 )
      goto LABEL_614;
  }
  else
  {
    v231->fields._size = v234 + 1;
    *((_DWORD *)v232->m_Items + v234) = 52;
    ++v231->fields._version;
  }
  v235 = v231->fields._size;
  if ( (unsigned int)v235 >= v232->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v231,
      53,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v233[4] + 192LL) + 112LL));
  }
  else
  {
    v231->fields._size = v235 + 1;
    *((_DWORD *)v232->m_Items + v235) = 53;
  }
  v236 = FilterKindList_TypeInfo->static_fields;
  v236->ServantHaveFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v231;
  sub_1BD33FC(&v236->ServantHaveFilterKindList);
  v237 = (System_Collections_Generic_List_T__o *)sub_1BD36A4(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v237,
    (const MethodInfo_35A5D44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v237 )
    goto LABEL_614;
  v238 = v237->fields._items;
  v239 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v237->fields._version;
  if ( !v238 )
    goto LABEL_614;
  v240 = v237->fields._size;
  if ( (unsigned int)v240 >= v238->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v237,
      50,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v239[4] + 192LL) + 112LL));
    v238 = v237->fields._items;
    v239 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v237->fields._version;
    if ( !v238 )
      goto LABEL_614;
  }
  else
  {
    v237->fields._size = v240 + 1;
    *((_DWORD *)v238->m_Items + v240) = 50;
    ++v237->fields._version;
  }
  v241 = v237->fields._size;
  if ( (unsigned int)v241 >= v238->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v237,
      51,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v239[4] + 192LL) + 112LL));
  }
  else
  {
    v237->fields._size = v241 + 1;
    *((_DWORD *)v238->m_Items + v241) = 51;
  }
  v242 = FilterKindList_TypeInfo->static_fields;
  v242->ServantEffectApplySubjectFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v237;
  sub_1BD33FC(&v242->ServantEffectApplySubjectFilterKindList);
  v243 = (System_Collections_Generic_List_T__o *)sub_1BD36A4(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v243,
    (const MethodInfo_35A5D44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v243 )
    goto LABEL_614;
  v244 = v243->fields._items;
  v245 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v243->fields._version;
  if ( !v244 )
    goto LABEL_614;
  v246 = v243->fields._size;
  if ( (unsigned int)v246 >= v244->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v243,
      69,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v245[4] + 192LL) + 112LL));
    v244 = v243->fields._items;
    v245 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v243->fields._version;
    if ( !v244 )
      goto LABEL_614;
  }
  else
  {
    v243->fields._size = v246 + 1;
    *((_DWORD *)v244->m_Items + v246) = 69;
    ++v243->fields._version;
  }
  v247 = v243->fields._size;
  if ( (unsigned int)v247 >= v244->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v243,
      70,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v245[4] + 192LL) + 112LL));
    v244 = v243->fields._items;
    v245 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v243->fields._version;
    if ( !v244 )
      goto LABEL_614;
  }
  else
  {
    v243->fields._size = v247 + 1;
    *((_DWORD *)v244->m_Items + v247) = 70;
    ++v243->fields._version;
  }
  v248 = v243->fields._size;
  if ( (unsigned int)v248 >= v244->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v243,
      71,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v245[4] + 192LL) + 112LL));
  }
  else
  {
    v243->fields._size = v248 + 1;
    *((_DWORD *)v244->m_Items + v248) = 71;
  }
  v249 = FilterKindList_TypeInfo->static_fields;
  v249->ServantSummonCategoryFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v243;
  sub_1BD33FC(&v249->ServantSummonCategoryFilterKindList);
  v250 = (System_Collections_Generic_List_T__o *)sub_1BD36A4(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v250,
    (const MethodInfo_35A5D44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v250 )
    goto LABEL_614;
  v251 = v250->fields._items;
  v252 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v250->fields._version;
  if ( !v251 )
    goto LABEL_614;
  v253 = v250->fields._size;
  if ( (unsigned int)v253 >= v251->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v250,
      38,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v252[4] + 192LL) + 112LL));
    v251 = v250->fields._items;
    v252 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v250->fields._version;
    if ( !v251 )
      goto LABEL_614;
  }
  else
  {
    v250->fields._size = v253 + 1;
    *((_DWORD *)v251->m_Items + v253) = 38;
    ++v250->fields._version;
  }
  v254 = v250->fields._size;
  if ( (unsigned int)v254 >= v251->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v250,
      37,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v252[4] + 192LL) + 112LL));
    v251 = v250->fields._items;
    v252 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v250->fields._version;
    if ( !v251 )
      goto LABEL_614;
  }
  else
  {
    v250->fields._size = v254 + 1;
    *((_DWORD *)v251->m_Items + v254) = 37;
    ++v250->fields._version;
  }
  v255 = v250->fields._size;
  if ( (unsigned int)v255 >= v251->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v250,
      36,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v252[4] + 192LL) + 112LL));
    v251 = v250->fields._items;
    v252 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v250->fields._version;
    if ( !v251 )
      goto LABEL_614;
  }
  else
  {
    v250->fields._size = v255 + 1;
    *((_DWORD *)v251->m_Items + v255) = 36;
    ++v250->fields._version;
  }
  v256 = v250->fields._size;
  if ( (unsigned int)v256 >= v251->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v250,
      35,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v252[4] + 192LL) + 112LL));
    v251 = v250->fields._items;
    v252 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v250->fields._version;
    if ( !v251 )
      goto LABEL_614;
  }
  else
  {
    v250->fields._size = v256 + 1;
    *((_DWORD *)v251->m_Items + v256) = 35;
    ++v250->fields._version;
  }
  v257 = v250->fields._size;
  if ( (unsigned int)v257 >= v251->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v250,
      34,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v252[4] + 192LL) + 112LL));
  }
  else
  {
    v250->fields._size = v257 + 1;
    *((_DWORD *)v251->m_Items + v257) = 34;
  }
  v258 = FilterKindList_TypeInfo->static_fields;
  v258->RarityFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v250;
  sub_1BD33FC(&v258->RarityFilterKindList);
  v259 = (System_Collections_Generic_List_T__o *)sub_1BD36A4(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v259,
    (const MethodInfo_35A5D44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v259 )
    goto LABEL_614;
  v260 = v259->fields._items;
  v261 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v259->fields._version;
  if ( !v260 )
    goto LABEL_614;
  v262 = v259->fields._size;
  if ( (unsigned int)v262 >= v260->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v259,
      54,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v261[4] + 192LL) + 112LL));
    v260 = v259->fields._items;
    v261 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v259->fields._version;
    if ( !v260 )
      goto LABEL_614;
  }
  else
  {
    v259->fields._size = v262 + 1;
    *((_DWORD *)v260->m_Items + v262) = 54;
    ++v259->fields._version;
  }
  v263 = v259->fields._size;
  if ( (unsigned int)v263 >= v260->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v259,
      55,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v261[4] + 192LL) + 112LL));
    v260 = v259->fields._items;
    v261 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v259->fields._version;
    if ( !v260 )
      goto LABEL_614;
  }
  else
  {
    v259->fields._size = v263 + 1;
    *((_DWORD *)v260->m_Items + v263) = 55;
    ++v259->fields._version;
  }
  v264 = v259->fields._size;
  if ( (unsigned int)v264 >= v260->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v259,
      72,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v261[4] + 192LL) + 112LL));
    v260 = v259->fields._items;
    v261 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v259->fields._version;
    if ( !v260 )
      goto LABEL_614;
  }
  else
  {
    v259->fields._size = v264 + 1;
    *((_DWORD *)v260->m_Items + v264) = 72;
    ++v259->fields._version;
  }
  v265 = v259->fields._size;
  if ( (unsigned int)v265 >= v260->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v259,
      73,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v261[4] + 192LL) + 112LL));
    v260 = v259->fields._items;
    v261 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v259->fields._version;
    if ( !v260 )
      goto LABEL_614;
  }
  else
  {
    v259->fields._size = v265 + 1;
    *((_DWORD *)v260->m_Items + v265) = 73;
    ++v259->fields._version;
  }
  v266 = v259->fields._size;
  if ( (unsigned int)v266 >= v260->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v259,
      74,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v261[4] + 192LL) + 112LL));
    v260 = v259->fields._items;
    v261 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v259->fields._version;
    if ( !v260 )
      goto LABEL_614;
  }
  else
  {
    v259->fields._size = v266 + 1;
    *((_DWORD *)v260->m_Items + v266) = 74;
    ++v259->fields._version;
  }
  v267 = v259->fields._size;
  if ( (unsigned int)v267 >= v260->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v259,
      75,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v261[4] + 192LL) + 112LL));
    v260 = v259->fields._items;
    v261 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v259->fields._version;
    if ( !v260 )
      goto LABEL_614;
  }
  else
  {
    v259->fields._size = v267 + 1;
    *((_DWORD *)v260->m_Items + v267) = 75;
    ++v259->fields._version;
  }
  v268 = v259->fields._size;
  if ( (unsigned int)v268 >= v260->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v259,
      76,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v261[4] + 192LL) + 112LL));
    v260 = v259->fields._items;
    v261 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v259->fields._version;
    if ( !v260 )
      goto LABEL_614;
  }
  else
  {
    v259->fields._size = v268 + 1;
    *((_DWORD *)v260->m_Items + v268) = 76;
    ++v259->fields._version;
  }
  v269 = v259->fields._size;
  if ( (unsigned int)v269 >= v260->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v259,
      56,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v261[4] + 192LL) + 112LL));
  }
  else
  {
    v259->fields._size = v269 + 1;
    *((_DWORD *)v260->m_Items + v269) = 56;
  }
  v270 = FilterKindList_TypeInfo->static_fields;
  v270->ServantEquipTypeFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v259;
  sub_1BD33FC(&v270->ServantEquipTypeFilterKindList);
  v271 = (System_Collections_Generic_List_T__o *)sub_1BD36A4(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v271,
    (const MethodInfo_35A5D44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v271 )
    goto LABEL_614;
  v272 = v271->fields._items;
  v273 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v271->fields._version;
  if ( !v272 )
    goto LABEL_614;
  v274 = v271->fields._size;
  if ( (unsigned int)v274 >= v272->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v271,
      77,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v273[4] + 192LL) + 112LL));
    v272 = v271->fields._items;
    v273 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v271->fields._version;
    if ( !v272 )
      goto LABEL_614;
  }
  else
  {
    v271->fields._size = v274 + 1;
    *((_DWORD *)v272->m_Items + v274) = 77;
    ++v271->fields._version;
  }
  v275 = v271->fields._size;
  if ( (unsigned int)v275 >= v272->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v271,
      78,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v273[4] + 192LL) + 112LL));
    v272 = v271->fields._items;
    v273 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v271->fields._version;
    if ( !v272 )
      goto LABEL_614;
  }
  else
  {
    v271->fields._size = v275 + 1;
    *((_DWORD *)v272->m_Items + v275) = 78;
    ++v271->fields._version;
  }
  v276 = v271->fields._size;
  if ( (unsigned int)v276 >= v272->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v271,
      79,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v273[4] + 192LL) + 112LL));
    v272 = v271->fields._items;
    v273 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v271->fields._version;
    if ( !v272 )
      goto LABEL_614;
  }
  else
  {
    v271->fields._size = v276 + 1;
    *((_DWORD *)v272->m_Items + v276) = 79;
    ++v271->fields._version;
  }
  v277 = v271->fields._size;
  if ( (unsigned int)v277 >= v272->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v271,
      80,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v273[4] + 192LL) + 112LL));
    v272 = v271->fields._items;
    v273 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v271->fields._version;
    if ( !v272 )
      goto LABEL_614;
  }
  else
  {
    v271->fields._size = v277 + 1;
    *((_DWORD *)v272->m_Items + v277) = 80;
    ++v271->fields._version;
  }
  v278 = v271->fields._size;
  if ( (unsigned int)v278 >= v272->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v271,
      81,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v273[4] + 192LL) + 112LL));
    v272 = v271->fields._items;
    v273 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v271->fields._version;
    if ( !v272 )
      goto LABEL_614;
  }
  else
  {
    v271->fields._size = v278 + 1;
    *((_DWORD *)v272->m_Items + v278) = 81;
    ++v271->fields._version;
  }
  v279 = v271->fields._size;
  if ( (unsigned int)v279 >= v272->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v271,
      82,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v273[4] + 192LL) + 112LL));
    v272 = v271->fields._items;
    v273 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v271->fields._version;
    if ( !v272 )
      goto LABEL_614;
  }
  else
  {
    v271->fields._size = v279 + 1;
    *((_DWORD *)v272->m_Items + v279) = 82;
    ++v271->fields._version;
  }
  v280 = v271->fields._size;
  if ( (unsigned int)v280 >= v272->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v271,
      83,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v273[4] + 192LL) + 112LL));
  }
  else
  {
    v271->fields._size = v280 + 1;
    *((_DWORD *)v272->m_Items + v280) = 83;
  }
  v281 = FilterKindList_TypeInfo->static_fields;
  v281->ServantEquipCombineStatusFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v271;
  sub_1BD33FC(&v281->ServantEquipCombineStatusFilterKindList);
  v282 = (System_Collections_Generic_List_T__o *)sub_1BD36A4(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v282,
    (const MethodInfo_35A5D44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v282 )
    goto LABEL_614;
  v283 = v282->fields._items;
  v284 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v282->fields._version;
  if ( !v283 )
    goto LABEL_614;
  v285 = v282->fields._size;
  if ( (unsigned int)v285 >= v283->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v282,
      84,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v284[4] + 192LL) + 112LL));
    v283 = v282->fields._items;
    v284 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v282->fields._version;
    if ( !v283 )
      goto LABEL_614;
  }
  else
  {
    v282->fields._size = v285 + 1;
    *((_DWORD *)v283->m_Items + v285) = 84;
    ++v282->fields._version;
  }
  v286 = v282->fields._size;
  if ( (unsigned int)v286 >= v283->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v282,
      85,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v284[4] + 192LL) + 112LL));
    v283 = v282->fields._items;
    v284 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v282->fields._version;
    if ( !v283 )
      goto LABEL_614;
  }
  else
  {
    v282->fields._size = v286 + 1;
    *((_DWORD *)v283->m_Items + v286) = 85;
    ++v282->fields._version;
  }
  v287 = v282->fields._size;
  if ( (unsigned int)v287 >= v283->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v282,
      86,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v284[4] + 192LL) + 112LL));
    v283 = v282->fields._items;
    v284 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v282->fields._version;
    if ( !v283 )
      goto LABEL_614;
  }
  else
  {
    v282->fields._size = v287 + 1;
    *((_DWORD *)v283->m_Items + v287) = 86;
    ++v282->fields._version;
  }
  v288 = v282->fields._size;
  if ( (unsigned int)v288 >= v283->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v282,
      87,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v284[4] + 192LL) + 112LL));
  }
  else
  {
    v282->fields._size = v288 + 1;
    *((_DWORD *)v283->m_Items + v288) = 87;
  }
  v289 = FilterKindList_TypeInfo->static_fields;
  v289->ServantEquipHaveStatusFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v282;
  sub_1BD33FC(&v289->ServantEquipHaveStatusFilterKindList);
  v290 = (System_Collections_Generic_List_T__o *)sub_1BD36A4(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v290,
    (const MethodInfo_35A5D44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v290 )
    goto LABEL_614;
  v291 = v290->fields._items;
  v292 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v290->fields._version;
  if ( !v291 )
    goto LABEL_614;
  v293 = v290->fields._size;
  if ( (unsigned int)v293 >= v291->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v290,
      30,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v292[4] + 192LL) + 112LL));
    v291 = v290->fields._items;
    v292 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v290->fields._version;
    if ( !v291 )
      goto LABEL_614;
  }
  else
  {
    v290->fields._size = v293 + 1;
    *((_DWORD *)v291->m_Items + v293) = 30;
    ++v290->fields._version;
  }
  v294 = v290->fields._size;
  if ( (unsigned int)v294 >= v291->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v290,
      31,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v292[4] + 192LL) + 112LL));
  }
  else
  {
    v290->fields._size = v294 + 1;
    *((_DWORD *)v291->m_Items + v294) = 31;
  }
  v295 = FilterKindList_TypeInfo->static_fields;
  v295->ServantCostumeFilterKind = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v290;
  sub_1BD33FC(&v295->ServantCostumeFilterKind);
  v296 = (System_Collections_Generic_List_T__o *)sub_1BD36A4(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v296,
    (const MethodInfo_35A5D44 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v296 )
    goto LABEL_614;
  v297 = v296->fields._items;
  v298 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v296->fields._version;
  if ( !v297 )
    goto LABEL_614;
  v299 = v296->fields._size;
  if ( (unsigned int)v299 < v297->max_length )
  {
    v296->fields._size = v299 + 1;
    *((_DWORD *)v297->m_Items + v299) = 32;
    ++v296->fields._version;
    goto LABEL_610;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v296,
    32,
    *(const MethodInfo_35A6598 **)(*(_QWORD *)(v298[4] + 192LL) + 112LL));
  v297 = v296->fields._items;
  v298 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v296->fields._version;
  if ( !v297 )
LABEL_614:
    sub_1BD36B4(v6, v7);
LABEL_610:
  v300 = v296->fields._size;
  if ( (unsigned int)v300 >= v297->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v296,
      33,
      *(const MethodInfo_35A6598 **)(*(_QWORD *)(v298[4] + 192LL) + 112LL));
  }
  else
  {
    v296->fields._size = v300 + 1;
    *((_DWORD *)v297->m_Items + v300) = 33;
  }
  v301 = FilterKindList_TypeInfo->static_fields;
  v301->MaterialServantCostumeFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v296;
  sub_1BD33FC(&v301->MaterialServantCostumeFilterKindList);
}


void __fastcall FilterKindList___ctor(FilterKindList_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}