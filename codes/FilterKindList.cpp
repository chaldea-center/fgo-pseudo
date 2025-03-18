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
  __int64 v87; // x10
  __int64 v88; // x10
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
  System_Collections_Generic_List_T__o *v99; // x19
  _QWORD *v100; // x8
  int32_t *v101; // x25
  struct System_Object_array *v102; // x9
  __int64 v103; // x10
  int32_t *v104; // x24
  __int64 v105; // x10
  __int64 v106; // x10
  __int64 v107; // x10
  __int64 v108; // x10
  __int64 v109; // x10
  __int64 v110; // x10
  __int64 v111; // x10
  __int64 v112; // x10
  __int64 v113; // x10
  __int64 v114; // x10
  __int64 v115; // x10
  __int64 v116; // x10
  __int64 v117; // x10
  __int64 v118; // x10
  struct FilterKindList_StaticFields *static_fields; // x0
  System_Collections_Generic_List_T__o *v120; // x19
  _QWORD *v121; // x8
  int32_t *v122; // x25
  struct System_Object_array *v123; // x9
  __int64 v124; // x10
  int32_t *v125; // x24
  __int64 v126; // x10
  __int64 v127; // x10
  __int64 v128; // x10
  __int64 v129; // x10
  __int64 v130; // x10
  __int64 v131; // x10
  __int64 v132; // x10
  __int64 v133; // x10
  __int64 v134; // x10
  __int64 v135; // x10
  __int64 v136; // x10
  __int64 v137; // x10
  __int64 v138; // x10
  struct FilterKindList_StaticFields *v139; // x0
  System_Collections_Generic_List_T__o *v140; // x19
  struct System_Object_array *v141; // x8
  _QWORD *v142; // x9
  __int64 v143; // x10
  __int64 v144; // x10
  __int64 v145; // x10
  struct FilterKindList_StaticFields *v146; // x0
  System_Collections_Generic_List_T__o *v147; // x19
  struct System_Object_array *v148; // x8
  _QWORD *v149; // x9
  __int64 v150; // x10
  __int64 v151; // x10
  __int64 v152; // x10
  __int64 v153; // x10
  struct FilterKindList_StaticFields *v154; // x0
  System_Collections_Generic_List_T__o *v155; // x19
  struct System_Object_array *v156; // x8
  _QWORD *v157; // x9
  __int64 v158; // x10
  __int64 v159; // x10
  __int64 v160; // x10
  struct FilterKindList_StaticFields *v161; // x0
  System_Collections_Generic_List_T__o *v162; // x19
  struct System_Object_array *v163; // x8
  _QWORD *v164; // x9
  __int64 v165; // x10
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
  __int64 v176; // x10
  struct FilterKindList_StaticFields *v177; // x0
  System_Collections_Generic_List_T__o *v178; // x19
  struct System_Object_array *v179; // x8
  _QWORD *v180; // x9
  __int64 v181; // x10
  __int64 v182; // x10
  __int64 v183; // x10
  __int64 v184; // x10
  struct FilterKindList_StaticFields *v185; // x0
  System_Collections_Generic_List_T__o *v186; // x19
  struct System_Object_array *v187; // x8
  _QWORD *v188; // x9
  __int64 v189; // x10
  __int64 v190; // x10
  struct FilterKindList_StaticFields *v191; // x0
  System_Collections_Generic_List_T__o *v192; // x19
  struct System_Object_array *v193; // x8
  _QWORD *v194; // x9
  __int64 v195; // x10
  __int64 v196; // x10
  __int64 v197; // x10
  struct FilterKindList_StaticFields *v198; // x0
  System_Collections_Generic_List_T__o *v199; // x19
  struct System_Object_array *v200; // x8
  _QWORD *v201; // x9
  __int64 v202; // x10
  __int64 v203; // x10
  __int64 v204; // x10
  struct FilterKindList_StaticFields *v205; // x0
  System_Collections_Generic_List_T__o *v206; // x19
  struct System_Object_array *v207; // x8
  _QWORD *v208; // x9
  __int64 v209; // x10
  __int64 v210; // x10
  __int64 v211; // x10
  struct FilterKindList_StaticFields *v212; // x0
  System_Collections_Generic_List_T__o *v213; // x19
  struct System_Object_array *v214; // x9
  _QWORD *v215; // x8
  __int64 v216; // x10
  __int64 v217; // x10
  __int64 v218; // x10
  __int64 v219; // x10
  __int64 v220; // x10
  __int64 v221; // x10
  __int64 v222; // x10
  struct FilterKindList_StaticFields *v223; // x0
  System_Collections_Generic_List_T__o *v224; // x19
  struct System_Object_array *v225; // x8
  _QWORD *v226; // x9
  __int64 v227; // x10
  __int64 v228; // x10
  struct FilterKindList_StaticFields *v229; // x0
  System_Collections_Generic_List_T__o *v230; // x19
  struct System_Object_array *v231; // x8
  _QWORD *v232; // x9
  __int64 v233; // x10
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
  struct FilterKindList_StaticFields *v248; // x0
  System_Collections_Generic_List_T__o *v249; // x19
  struct System_Object_array *v250; // x8
  _QWORD *v251; // x9
  __int64 v252; // x10
  __int64 v253; // x10
  struct FilterKindList_StaticFields *v254; // x0
  System_Collections_Generic_List_T__o *v255; // x19
  struct System_Object_array *v256; // x8
  _QWORD *v257; // x9
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
  struct FilterKindList_StaticFields *v268; // x0
  System_Collections_Generic_List_T__o *v269; // x19
  struct System_Object_array *v270; // x8
  _QWORD *v271; // x9
  __int64 v272; // x10
  __int64 v273; // x10
  __int64 v274; // x10
  __int64 v275; // x10
  struct FilterKindList_StaticFields *v276; // x0
  System_Collections_Generic_List_T__o *v277; // x19
  struct System_Object_array *v278; // x8
  _QWORD *v279; // x9
  __int64 v280; // x10
  __int64 v281; // x10
  __int64 v282; // x10
  __int64 v283; // x10
  __int64 v284; // x10
  struct FilterKindList_StaticFields *v285; // x0
  System_Collections_Generic_List_T__o *v286; // x19
  struct System_Object_array *v287; // x8
  _QWORD *v288; // x9
  __int64 v289; // x10
  __int64 v290; // x10
  __int64 v291; // x10
  __int64 v292; // x10
  __int64 v293; // x10
  struct FilterKindList_StaticFields *v294; // x0
  System_Collections_Generic_List_T__o *v295; // x19
  struct System_Object_array *v296; // x9
  _QWORD *v297; // x8
  __int64 v298; // x10
  __int64 v299; // x10
  __int64 v300; // x10
  __int64 v301; // x10
  __int64 v302; // x10
  __int64 v303; // x10
  __int64 v304; // x10
  __int64 v305; // x10
  struct FilterKindList_StaticFields *v306; // x0
  System_Collections_Generic_List_T__o *v307; // x19
  struct System_Object_array *v308; // x9
  _QWORD *v309; // x8
  __int64 v310; // x10
  __int64 v311; // x10
  __int64 v312; // x10
  __int64 v313; // x10
  __int64 v314; // x10
  __int64 v315; // x10
  __int64 v316; // x10
  struct FilterKindList_StaticFields *v317; // x0
  System_Collections_Generic_List_T__o *v318; // x19
  struct System_Object_array *v319; // x8
  _QWORD *v320; // x9
  __int64 v321; // x10
  __int64 v322; // x10
  __int64 v323; // x10
  __int64 v324; // x10
  struct FilterKindList_StaticFields *v325; // x0
  System_Collections_Generic_List_T__o *v326; // x19
  struct System_Object_array *v327; // x8
  _QWORD *v328; // x9
  __int64 v329; // x10
  __int64 v330; // x10
  struct FilterKindList_StaticFields *v331; // x0
  System_Collections_Generic_List_T__o *v332; // x19
  struct System_Object_array *v333; // x8
  _QWORD *v334; // x9
  __int64 v335; // x10
  __int64 v336; // x10
  struct FilterKindList_StaticFields *v337; // x0

  if ( (byte_4C1D542 & 1) == 0 )
  {
    sub_1C3B764(&FilterKindList_TypeInfo, v1);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v2);
    sub_1C3B764(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__, v3);
    sub_1C3B764(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo, v4);
    byte_4C1D542 = 1;
  }
  v5 = (System_Collections_Generic_List_T__o *)sub_1C3B9B0(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v5,
    (const MethodInfo_3670C20 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v5 )
    goto LABEL_692;
  v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  p_version = &v5->fields._version;
  ++v5->fields._version;
  items = v5->fields._items;
  p_size = &v5->fields._size;
  size = v5->fields._size;
  if ( !items )
    goto LABEL_692;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      8,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
  }
  else
  {
    *p_size = v86 + 1;
    *((_DWORD *)items->m_Items + v86) = 68;
    ++*p_version;
  }
  v87 = *p_size;
  if ( (unsigned int)v87 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      88,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
  }
  else
  {
    *p_size = v87 + 1;
    *((_DWORD *)items->m_Items + v87) = 88;
    ++*p_version;
  }
  v88 = *p_size;
  if ( (unsigned int)v88 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      89,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
  }
  else
  {
    *p_size = v88 + 1;
    *((_DWORD *)items->m_Items + v88) = 89;
    ++*p_version;
  }
  v89 = *p_size;
  if ( (unsigned int)v89 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      90,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
  }
  else
  {
    *p_size = v89 + 1;
    *((_DWORD *)items->m_Items + v89) = 90;
    ++*p_version;
  }
  v90 = *p_size;
  if ( (unsigned int)v90 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      91,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
  }
  else
  {
    *p_size = v90 + 1;
    *((_DWORD *)items->m_Items + v90) = 91;
    ++*p_version;
  }
  v91 = *p_size;
  if ( (unsigned int)v91 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      92,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
  }
  else
  {
    *p_size = v91 + 1;
    *((_DWORD *)items->m_Items + v91) = 92;
    ++*p_version;
  }
  v92 = *p_size;
  if ( (unsigned int)v92 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      93,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
  }
  else
  {
    *p_size = v92 + 1;
    *((_DWORD *)items->m_Items + v92) = 93;
    ++*p_version;
  }
  v93 = *p_size;
  if ( (unsigned int)v93 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      94,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
  }
  else
  {
    *p_size = v93 + 1;
    *((_DWORD *)items->m_Items + v93) = 94;
    ++*p_version;
  }
  v94 = *p_size;
  if ( (unsigned int)v94 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      95,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
  }
  else
  {
    *p_size = v94 + 1;
    *((_DWORD *)items->m_Items + v94) = 95;
    ++*p_version;
  }
  v95 = *p_size;
  if ( (unsigned int)v95 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      96,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
  }
  else
  {
    *p_size = v95 + 1;
    *((_DWORD *)items->m_Items + v95) = 96;
    ++*p_version;
  }
  v96 = *p_size;
  if ( (unsigned int)v96 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      97,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
  }
  else
  {
    *p_size = v96 + 1;
    *((_DWORD *)items->m_Items + v96) = 97;
    ++*p_version;
  }
  v97 = *p_size;
  if ( (unsigned int)v97 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      98,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v8 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
  }
  else
  {
    *p_size = v97 + 1;
    *((_DWORD *)items->m_Items + v97) = 98;
    ++*p_version;
  }
  v98 = *p_size;
  if ( (unsigned int)v98 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      99,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    *p_size = v98 + 1;
    *((_DWORD *)items->m_Items + v98) = 99;
  }
  FilterKindList_TypeInfo->static_fields->AllFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v5;
  sub_1C3B708(FilterKindList_TypeInfo->static_fields);
  v99 = (System_Collections_Generic_List_T__o *)sub_1C3B9B0(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v99,
    (const MethodInfo_3670C20 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v99 )
    goto LABEL_692;
  v100 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  v101 = &v99->fields._version;
  ++v99->fields._version;
  v102 = v99->fields._items;
  v104 = &v99->fields._size;
  v103 = v99->fields._size;
  if ( !v102 )
    goto LABEL_692;
  if ( (unsigned int)v103 >= v102->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v99,
      0,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
    v102 = v99->fields._items;
    v100 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v99->fields._version;
    if ( !v102 )
      goto LABEL_692;
  }
  else
  {
    *v104 = v103 + 1;
    *((_DWORD *)v102->m_Items + v103) = 0;
    ++*v101;
  }
  v105 = *v104;
  if ( (unsigned int)v105 >= v102->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v99,
      1,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
    v102 = v99->fields._items;
    v100 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v99->fields._version;
    if ( !v102 )
      goto LABEL_692;
  }
  else
  {
    *v104 = v105 + 1;
    *((_DWORD *)v102->m_Items + v105) = 1;
    ++*v101;
  }
  v106 = *v104;
  if ( (unsigned int)v106 >= v102->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v99,
      2,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
    v102 = v99->fields._items;
    v100 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v99->fields._version;
    if ( !v102 )
      goto LABEL_692;
  }
  else
  {
    *v104 = v106 + 1;
    *((_DWORD *)v102->m_Items + v106) = 2;
    ++*v101;
  }
  v107 = *v104;
  if ( (unsigned int)v107 >= v102->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v99,
      3,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
    v102 = v99->fields._items;
    v100 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v99->fields._version;
    if ( !v102 )
      goto LABEL_692;
  }
  else
  {
    *v104 = v107 + 1;
    *((_DWORD *)v102->m_Items + v107) = 3;
    ++*v101;
  }
  v108 = *v104;
  if ( (unsigned int)v108 >= v102->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v99,
      4,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
    v102 = v99->fields._items;
    v100 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v99->fields._version;
    if ( !v102 )
      goto LABEL_692;
  }
  else
  {
    *v104 = v108 + 1;
    *((_DWORD *)v102->m_Items + v108) = 4;
    ++*v101;
  }
  v109 = *v104;
  if ( (unsigned int)v109 >= v102->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v99,
      5,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
    v102 = v99->fields._items;
    v100 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v99->fields._version;
    if ( !v102 )
      goto LABEL_692;
  }
  else
  {
    *v104 = v109 + 1;
    *((_DWORD *)v102->m_Items + v109) = 5;
    ++*v101;
  }
  v110 = *v104;
  if ( (unsigned int)v110 >= v102->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v99,
      6,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
    v102 = v99->fields._items;
    v100 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v99->fields._version;
    if ( !v102 )
      goto LABEL_692;
  }
  else
  {
    *v104 = v110 + 1;
    *((_DWORD *)v102->m_Items + v110) = 6;
    ++*v101;
  }
  v111 = *v104;
  if ( (unsigned int)v111 >= v102->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v99,
      57,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
    v102 = v99->fields._items;
    v100 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v99->fields._version;
    if ( !v102 )
      goto LABEL_692;
  }
  else
  {
    *v104 = v111 + 1;
    *((_DWORD *)v102->m_Items + v111) = 57;
    ++*v101;
  }
  v112 = *v104;
  if ( (unsigned int)v112 >= v102->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v99,
      58,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
    v102 = v99->fields._items;
    v100 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v99->fields._version;
    if ( !v102 )
      goto LABEL_692;
  }
  else
  {
    *v104 = v112 + 1;
    *((_DWORD *)v102->m_Items + v112) = 58;
    ++*v101;
  }
  v113 = *v104;
  if ( (unsigned int)v113 >= v102->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v99,
      59,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
    v102 = v99->fields._items;
    v100 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v99->fields._version;
    if ( !v102 )
      goto LABEL_692;
  }
  else
  {
    *v104 = v113 + 1;
    *((_DWORD *)v102->m_Items + v113) = 59;
    ++*v101;
  }
  v114 = *v104;
  if ( (unsigned int)v114 >= v102->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v99,
      60,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
    v102 = v99->fields._items;
    v100 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v99->fields._version;
    if ( !v102 )
      goto LABEL_692;
  }
  else
  {
    *v104 = v114 + 1;
    *((_DWORD *)v102->m_Items + v114) = 60;
    ++*v101;
  }
  v115 = *v104;
  if ( (unsigned int)v115 >= v102->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v99,
      61,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
    v102 = v99->fields._items;
    v100 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v99->fields._version;
    if ( !v102 )
      goto LABEL_692;
  }
  else
  {
    *v104 = v115 + 1;
    *((_DWORD *)v102->m_Items + v115) = 61;
    ++*v101;
  }
  v116 = *v104;
  if ( (unsigned int)v116 >= v102->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v99,
      62,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
    v102 = v99->fields._items;
    v100 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v99->fields._version;
    if ( !v102 )
      goto LABEL_692;
  }
  else
  {
    *v104 = v116 + 1;
    *((_DWORD *)v102->m_Items + v116) = 62;
    ++*v101;
  }
  v117 = *v104;
  if ( (unsigned int)v117 >= v102->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v99,
      63,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
    v102 = v99->fields._items;
    v100 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v99->fields._version;
    if ( !v102 )
      goto LABEL_692;
  }
  else
  {
    *v104 = v117 + 1;
    *((_DWORD *)v102->m_Items + v117) = 63;
    ++*v101;
  }
  v118 = *v104;
  if ( (unsigned int)v118 >= v102->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v99,
      64,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
  }
  else
  {
    *v104 = v118 + 1;
    *((_DWORD *)v102->m_Items + v118) = 64;
  }
  static_fields = FilterKindList_TypeInfo->static_fields;
  static_fields->ClassFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v99;
  sub_1C3B708(&static_fields->ClassFilterKindList);
  v120 = (System_Collections_Generic_List_T__o *)sub_1C3B9B0(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v120,
    (const MethodInfo_3670C20 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v120 )
    goto LABEL_692;
  v121 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  v122 = &v120->fields._version;
  ++v120->fields._version;
  v123 = v120->fields._items;
  v125 = &v120->fields._size;
  v124 = v120->fields._size;
  if ( !v123 )
    goto LABEL_692;
  if ( (unsigned int)v124 >= v123->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v120,
      0,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v121[4] + 192LL) + 112LL));
    v123 = v120->fields._items;
    v121 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v120->fields._version;
    if ( !v123 )
      goto LABEL_692;
  }
  else
  {
    *v125 = v124 + 1;
    *((_DWORD *)v123->m_Items + v124) = 0;
    ++*v122;
  }
  v126 = *v125;
  if ( (unsigned int)v126 >= v123->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v120,
      1,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v121[4] + 192LL) + 112LL));
    v123 = v120->fields._items;
    v121 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v120->fields._version;
    if ( !v123 )
      goto LABEL_692;
  }
  else
  {
    *v125 = v126 + 1;
    *((_DWORD *)v123->m_Items + v126) = 1;
    ++*v122;
  }
  v127 = *v125;
  if ( (unsigned int)v127 >= v123->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v120,
      2,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v121[4] + 192LL) + 112LL));
    v123 = v120->fields._items;
    v121 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v120->fields._version;
    if ( !v123 )
      goto LABEL_692;
  }
  else
  {
    *v125 = v127 + 1;
    *((_DWORD *)v123->m_Items + v127) = 2;
    ++*v122;
  }
  v128 = *v125;
  if ( (unsigned int)v128 >= v123->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v120,
      3,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v121[4] + 192LL) + 112LL));
    v123 = v120->fields._items;
    v121 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v120->fields._version;
    if ( !v123 )
      goto LABEL_692;
  }
  else
  {
    *v125 = v128 + 1;
    *((_DWORD *)v123->m_Items + v128) = 3;
    ++*v122;
  }
  v129 = *v125;
  if ( (unsigned int)v129 >= v123->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v120,
      4,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v121[4] + 192LL) + 112LL));
    v123 = v120->fields._items;
    v121 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v120->fields._version;
    if ( !v123 )
      goto LABEL_692;
  }
  else
  {
    *v125 = v129 + 1;
    *((_DWORD *)v123->m_Items + v129) = 4;
    ++*v122;
  }
  v130 = *v125;
  if ( (unsigned int)v130 >= v123->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v120,
      5,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v121[4] + 192LL) + 112LL));
    v123 = v120->fields._items;
    v121 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v120->fields._version;
    if ( !v123 )
      goto LABEL_692;
  }
  else
  {
    *v125 = v130 + 1;
    *((_DWORD *)v123->m_Items + v130) = 5;
    ++*v122;
  }
  v131 = *v125;
  if ( (unsigned int)v131 >= v123->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v120,
      6,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v121[4] + 192LL) + 112LL));
    v123 = v120->fields._items;
    v121 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v120->fields._version;
    if ( !v123 )
      goto LABEL_692;
  }
  else
  {
    *v125 = v131 + 1;
    *((_DWORD *)v123->m_Items + v131) = 6;
    ++*v122;
  }
  v132 = *v125;
  if ( (unsigned int)v132 >= v123->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v120,
      58,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v121[4] + 192LL) + 112LL));
    v123 = v120->fields._items;
    v121 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v120->fields._version;
    if ( !v123 )
      goto LABEL_692;
  }
  else
  {
    *v125 = v132 + 1;
    *((_DWORD *)v123->m_Items + v132) = 58;
    ++*v122;
  }
  v133 = *v125;
  if ( (unsigned int)v133 >= v123->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v120,
      59,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v121[4] + 192LL) + 112LL));
    v123 = v120->fields._items;
    v121 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v120->fields._version;
    if ( !v123 )
      goto LABEL_692;
  }
  else
  {
    *v125 = v133 + 1;
    *((_DWORD *)v123->m_Items + v133) = 59;
    ++*v122;
  }
  v134 = *v125;
  if ( (unsigned int)v134 >= v123->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v120,
      60,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v121[4] + 192LL) + 112LL));
    v123 = v120->fields._items;
    v121 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v120->fields._version;
    if ( !v123 )
      goto LABEL_692;
  }
  else
  {
    *v125 = v134 + 1;
    *((_DWORD *)v123->m_Items + v134) = 60;
    ++*v122;
  }
  v135 = *v125;
  if ( (unsigned int)v135 >= v123->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v120,
      61,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v121[4] + 192LL) + 112LL));
    v123 = v120->fields._items;
    v121 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v120->fields._version;
    if ( !v123 )
      goto LABEL_692;
  }
  else
  {
    *v125 = v135 + 1;
    *((_DWORD *)v123->m_Items + v135) = 61;
    ++*v122;
  }
  v136 = *v125;
  if ( (unsigned int)v136 >= v123->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v120,
      62,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v121[4] + 192LL) + 112LL));
    v123 = v120->fields._items;
    v121 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v120->fields._version;
    if ( !v123 )
      goto LABEL_692;
  }
  else
  {
    *v125 = v136 + 1;
    *((_DWORD *)v123->m_Items + v136) = 62;
    ++*v122;
  }
  v137 = *v125;
  if ( (unsigned int)v137 >= v123->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v120,
      63,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v121[4] + 192LL) + 112LL));
    v123 = v120->fields._items;
    v121 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v120->fields._version;
    if ( !v123 )
      goto LABEL_692;
  }
  else
  {
    *v125 = v137 + 1;
    *((_DWORD *)v123->m_Items + v137) = 63;
    ++*v122;
  }
  v138 = *v125;
  if ( (unsigned int)v138 >= v123->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v120,
      64,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v121[4] + 192LL) + 112LL));
  }
  else
  {
    *v125 = v138 + 1;
    *((_DWORD *)v123->m_Items + v138) = 64;
  }
  v139 = FilterKindList_TypeInfo->static_fields;
  v139->ClassFilterKindListForExchangeSvtCoin = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v120;
  sub_1C3B708(&v139->ClassFilterKindListForExchangeSvtCoin);
  v140 = (System_Collections_Generic_List_T__o *)sub_1C3B9B0(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v140,
    (const MethodInfo_3670C20 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v140 )
    goto LABEL_692;
  v141 = v140->fields._items;
  v142 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v140->fields._version;
  if ( !v141 )
    goto LABEL_692;
  v143 = v140->fields._size;
  if ( (unsigned int)v143 >= v141->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v140,
      0,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v142[4] + 192LL) + 112LL));
    v141 = v140->fields._items;
    v142 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v140->fields._version;
    if ( !v141 )
      goto LABEL_692;
  }
  else
  {
    v140->fields._size = v143 + 1;
    *((_DWORD *)v141->m_Items + v143) = 0;
    ++v140->fields._version;
  }
  v144 = v140->fields._size;
  if ( (unsigned int)v144 >= v141->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v140,
      1,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v142[4] + 192LL) + 112LL));
    v141 = v140->fields._items;
    v142 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v140->fields._version;
    if ( !v141 )
      goto LABEL_692;
  }
  else
  {
    v140->fields._size = v144 + 1;
    *((_DWORD *)v141->m_Items + v144) = 1;
    ++v140->fields._version;
  }
  v145 = v140->fields._size;
  if ( (unsigned int)v145 >= v141->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v140,
      2,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v142[4] + 192LL) + 112LL));
  }
  else
  {
    v140->fields._size = v145 + 1;
    *((_DWORD *)v141->m_Items + v145) = 2;
  }
  v146 = FilterKindList_TypeInfo->static_fields;
  v146->ThreeKnightsFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v140;
  sub_1C3B708(&v146->ThreeKnightsFilterKindList);
  v147 = (System_Collections_Generic_List_T__o *)sub_1C3B9B0(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v147,
    (const MethodInfo_3670C20 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v147 )
    goto LABEL_692;
  v148 = v147->fields._items;
  v149 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v147->fields._version;
  if ( !v148 )
    goto LABEL_692;
  v150 = v147->fields._size;
  if ( (unsigned int)v150 >= v148->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v147,
      3,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v149[4] + 192LL) + 112LL));
    v148 = v147->fields._items;
    v149 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v147->fields._version;
    if ( !v148 )
      goto LABEL_692;
  }
  else
  {
    v147->fields._size = v150 + 1;
    *((_DWORD *)v148->m_Items + v150) = 3;
    ++v147->fields._version;
  }
  v151 = v147->fields._size;
  if ( (unsigned int)v151 >= v148->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v147,
      4,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v149[4] + 192LL) + 112LL));
    v148 = v147->fields._items;
    v149 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v147->fields._version;
    if ( !v148 )
      goto LABEL_692;
  }
  else
  {
    v147->fields._size = v151 + 1;
    *((_DWORD *)v148->m_Items + v151) = 4;
    ++v147->fields._version;
  }
  v152 = v147->fields._size;
  if ( (unsigned int)v152 >= v148->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v147,
      5,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v149[4] + 192LL) + 112LL));
    v148 = v147->fields._items;
    v149 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v147->fields._version;
    if ( !v148 )
      goto LABEL_692;
  }
  else
  {
    v147->fields._size = v152 + 1;
    *((_DWORD *)v148->m_Items + v152) = 5;
    ++v147->fields._version;
  }
  v153 = v147->fields._size;
  if ( (unsigned int)v153 >= v148->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v147,
      6,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v149[4] + 192LL) + 112LL));
  }
  else
  {
    v147->fields._size = v153 + 1;
    *((_DWORD *)v148->m_Items + v153) = 6;
  }
  v154 = FilterKindList_TypeInfo->static_fields;
  v154->FourCavalryFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v147;
  sub_1C3B708(&v154->FourCavalryFilterKindList);
  v155 = (System_Collections_Generic_List_T__o *)sub_1C3B9B0(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v155,
    (const MethodInfo_3670C20 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v155 )
    goto LABEL_692;
  v156 = v155->fields._items;
  v157 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v155->fields._version;
  if ( !v156 )
    goto LABEL_692;
  v158 = v155->fields._size;
  if ( (unsigned int)v158 >= v156->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v155,
      58,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v157[4] + 192LL) + 112LL));
    v156 = v155->fields._items;
    v157 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v155->fields._version;
    if ( !v156 )
      goto LABEL_692;
  }
  else
  {
    v155->fields._size = v158 + 1;
    *((_DWORD *)v156->m_Items + v158) = 58;
    ++v155->fields._version;
  }
  v159 = v155->fields._size;
  if ( (unsigned int)v159 >= v156->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v155,
      59,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v157[4] + 192LL) + 112LL));
    v156 = v155->fields._items;
    v157 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v155->fields._version;
    if ( !v156 )
      goto LABEL_692;
  }
  else
  {
    v155->fields._size = v159 + 1;
    *((_DWORD *)v156->m_Items + v159) = 59;
    ++v155->fields._version;
  }
  v160 = v155->fields._size;
  if ( (unsigned int)v160 >= v156->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v155,
      60,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v157[4] + 192LL) + 112LL));
  }
  else
  {
    v155->fields._size = v160 + 1;
    *((_DWORD *)v156->m_Items + v160) = 60;
  }
  v161 = FilterKindList_TypeInfo->static_fields;
  v161->ClassExtra1FilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v155;
  sub_1C3B708(&v161->ClassExtra1FilterKindList);
  v162 = (System_Collections_Generic_List_T__o *)sub_1C3B9B0(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v162,
    (const MethodInfo_3670C20 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v162 )
    goto LABEL_692;
  v163 = v162->fields._items;
  v164 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v162->fields._version;
  if ( !v163 )
    goto LABEL_692;
  v165 = v162->fields._size;
  if ( (unsigned int)v165 >= v163->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v162,
      57,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v164[4] + 192LL) + 112LL));
    v163 = v162->fields._items;
    v164 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v162->fields._version;
    if ( !v163 )
      goto LABEL_692;
  }
  else
  {
    v162->fields._size = v165 + 1;
    *((_DWORD *)v163->m_Items + v165) = 57;
    ++v162->fields._version;
  }
  v166 = v162->fields._size;
  if ( (unsigned int)v166 >= v163->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v162,
      58,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v164[4] + 192LL) + 112LL));
    v163 = v162->fields._items;
    v164 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v162->fields._version;
    if ( !v163 )
      goto LABEL_692;
  }
  else
  {
    v162->fields._size = v166 + 1;
    *((_DWORD *)v163->m_Items + v166) = 58;
    ++v162->fields._version;
  }
  v167 = v162->fields._size;
  if ( (unsigned int)v167 >= v163->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v162,
      59,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v164[4] + 192LL) + 112LL));
    v163 = v162->fields._items;
    v164 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v162->fields._version;
    if ( !v163 )
      goto LABEL_692;
  }
  else
  {
    v162->fields._size = v167 + 1;
    *((_DWORD *)v163->m_Items + v167) = 59;
    ++v162->fields._version;
  }
  v168 = v162->fields._size;
  if ( (unsigned int)v168 >= v163->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v162,
      60,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v164[4] + 192LL) + 112LL));
  }
  else
  {
    v162->fields._size = v168 + 1;
    *((_DWORD *)v163->m_Items + v168) = 60;
  }
  v169 = FilterKindList_TypeInfo->static_fields;
  v169->ClassExtra1InShielderFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v162;
  sub_1C3B708(&v169->ClassExtra1InShielderFilterKindList);
  v170 = (System_Collections_Generic_List_T__o *)sub_1C3B9B0(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v170,
    (const MethodInfo_3670C20 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v170 )
    goto LABEL_692;
  v171 = v170->fields._items;
  v172 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v170->fields._version;
  if ( !v171 )
    goto LABEL_692;
  v173 = v170->fields._size;
  if ( (unsigned int)v173 >= v171->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v170,
      61,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v172[4] + 192LL) + 112LL));
    v171 = v170->fields._items;
    v172 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v170->fields._version;
    if ( !v171 )
      goto LABEL_692;
  }
  else
  {
    v170->fields._size = v173 + 1;
    *((_DWORD *)v171->m_Items + v173) = 61;
    ++v170->fields._version;
  }
  v174 = v170->fields._size;
  if ( (unsigned int)v174 >= v171->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v170,
      62,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v172[4] + 192LL) + 112LL));
    v171 = v170->fields._items;
    v172 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v170->fields._version;
    if ( !v171 )
      goto LABEL_692;
  }
  else
  {
    v170->fields._size = v174 + 1;
    *((_DWORD *)v171->m_Items + v174) = 62;
    ++v170->fields._version;
  }
  v175 = v170->fields._size;
  if ( (unsigned int)v175 >= v171->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v170,
      63,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v172[4] + 192LL) + 112LL));
    v171 = v170->fields._items;
    v172 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v170->fields._version;
    if ( !v171 )
      goto LABEL_692;
  }
  else
  {
    v170->fields._size = v175 + 1;
    *((_DWORD *)v171->m_Items + v175) = 63;
    ++v170->fields._version;
  }
  v176 = v170->fields._size;
  if ( (unsigned int)v176 >= v171->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v170,
      64,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v172[4] + 192LL) + 112LL));
  }
  else
  {
    v170->fields._size = v176 + 1;
    *((_DWORD *)v171->m_Items + v176) = 64;
  }
  v177 = FilterKindList_TypeInfo->static_fields;
  v177->ClassExtra2FilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v170;
  sub_1C3B708(&v177->ClassExtra2FilterKindList);
  v178 = (System_Collections_Generic_List_T__o *)sub_1C3B9B0(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v178,
    (const MethodInfo_3670C20 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v178 )
    goto LABEL_692;
  v179 = v178->fields._items;
  v180 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v178->fields._version;
  if ( !v179 )
    goto LABEL_692;
  v181 = v178->fields._size;
  if ( (unsigned int)v181 >= v179->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v178,
      65,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v180[4] + 192LL) + 112LL));
    v179 = v178->fields._items;
    v180 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v178->fields._version;
    if ( !v179 )
      goto LABEL_692;
  }
  else
  {
    v178->fields._size = v181 + 1;
    *((_DWORD *)v179->m_Items + v181) = 65;
    ++v178->fields._version;
  }
  v182 = v178->fields._size;
  if ( (unsigned int)v182 >= v179->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v178,
      66,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v180[4] + 192LL) + 112LL));
    v179 = v178->fields._items;
    v180 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v178->fields._version;
    if ( !v179 )
      goto LABEL_692;
  }
  else
  {
    v178->fields._size = v182 + 1;
    *((_DWORD *)v179->m_Items + v182) = 66;
    ++v178->fields._version;
  }
  v183 = v178->fields._size;
  if ( (unsigned int)v183 >= v179->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v178,
      67,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v180[4] + 192LL) + 112LL));
    v179 = v178->fields._items;
    v180 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v178->fields._version;
    if ( !v179 )
      goto LABEL_692;
  }
  else
  {
    v178->fields._size = v183 + 1;
    *((_DWORD *)v179->m_Items + v183) = 67;
    ++v178->fields._version;
  }
  v184 = v178->fields._size;
  if ( (unsigned int)v184 >= v179->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v178,
      68,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v180[4] + 192LL) + 112LL));
  }
  else
  {
    v178->fields._size = v184 + 1;
    *((_DWORD *)v179->m_Items + v184) = 68;
  }
  v185 = FilterKindList_TypeInfo->static_fields;
  v185->ClassGroupFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v178;
  sub_1C3B708(&v185->ClassGroupFilterKindList);
  v186 = (System_Collections_Generic_List_T__o *)sub_1C3B9B0(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v186,
    (const MethodInfo_3670C20 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v186 )
    goto LABEL_692;
  v187 = v186->fields._items;
  v188 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v186->fields._version;
  if ( !v187 )
    goto LABEL_692;
  v189 = v186->fields._size;
  if ( (unsigned int)v189 >= v187->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v186,
      67,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v188[4] + 192LL) + 112LL));
    v187 = v186->fields._items;
    v188 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v186->fields._version;
    if ( !v187 )
      goto LABEL_692;
  }
  else
  {
    v186->fields._size = v189 + 1;
    *((_DWORD *)v187->m_Items + v189) = 67;
    ++v186->fields._version;
  }
  v190 = v186->fields._size;
  if ( (unsigned int)v190 >= v187->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v186,
      68,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v188[4] + 192LL) + 112LL));
  }
  else
  {
    v186->fields._size = v190 + 1;
    *((_DWORD *)v187->m_Items + v190) = 68;
  }
  v191 = FilterKindList_TypeInfo->static_fields;
  v191->ClassGroupExtraFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v186;
  sub_1C3B708(&v191->ClassGroupExtraFilterKindList);
  v192 = (System_Collections_Generic_List_T__o *)sub_1C3B9B0(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v192,
    (const MethodInfo_3670C20 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v192 )
    goto LABEL_692;
  v193 = v192->fields._items;
  v194 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v192->fields._version;
  if ( !v193 )
    goto LABEL_692;
  v195 = v192->fields._size;
  if ( (unsigned int)v195 >= v193->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v192,
      44,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v194[4] + 192LL) + 112LL));
    v193 = v192->fields._items;
    v194 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v192->fields._version;
    if ( !v193 )
      goto LABEL_692;
  }
  else
  {
    v192->fields._size = v195 + 1;
    *((_DWORD *)v193->m_Items + v195) = 44;
    ++v192->fields._version;
  }
  v196 = v192->fields._size;
  if ( (unsigned int)v196 >= v193->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v192,
      43,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v194[4] + 192LL) + 112LL));
    v193 = v192->fields._items;
    v194 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v192->fields._version;
    if ( !v193 )
      goto LABEL_692;
  }
  else
  {
    v192->fields._size = v196 + 1;
    *((_DWORD *)v193->m_Items + v196) = 43;
    ++v192->fields._version;
  }
  v197 = v192->fields._size;
  if ( (unsigned int)v197 >= v193->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v192,
      42,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v194[4] + 192LL) + 112LL));
  }
  else
  {
    v192->fields._size = v197 + 1;
    *((_DWORD *)v193->m_Items + v197) = 42;
  }
  v198 = FilterKindList_TypeInfo->static_fields;
  v198->NpTypeFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v192;
  sub_1C3B708(&v198->NpTypeFilterKindList);
  v199 = (System_Collections_Generic_List_T__o *)sub_1C3B9B0(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v199,
    (const MethodInfo_3670C20 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v199 )
    goto LABEL_692;
  v200 = v199->fields._items;
  v201 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v199->fields._version;
  if ( !v200 )
    goto LABEL_692;
  v202 = v199->fields._size;
  if ( (unsigned int)v202 >= v200->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v199,
      46,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v201[4] + 192LL) + 112LL));
    v200 = v199->fields._items;
    v201 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v199->fields._version;
    if ( !v200 )
      goto LABEL_692;
  }
  else
  {
    v199->fields._size = v202 + 1;
    *((_DWORD *)v200->m_Items + v202) = 46;
    ++v199->fields._version;
  }
  v203 = v199->fields._size;
  if ( (unsigned int)v203 >= v200->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v199,
      45,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v201[4] + 192LL) + 112LL));
    v200 = v199->fields._items;
    v201 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v199->fields._version;
    if ( !v200 )
      goto LABEL_692;
  }
  else
  {
    v199->fields._size = v203 + 1;
    *((_DWORD *)v200->m_Items + v203) = 45;
    ++v199->fields._version;
  }
  v204 = v199->fields._size;
  if ( (unsigned int)v204 >= v200->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v199,
      47,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v201[4] + 192LL) + 112LL));
  }
  else
  {
    v199->fields._size = v204 + 1;
    *((_DWORD *)v200->m_Items + v204) = 47;
  }
  v205 = FilterKindList_TypeInfo->static_fields;
  v205->NpEffectFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v199;
  sub_1C3B708(&v205->NpEffectFilterKindList);
  v206 = (System_Collections_Generic_List_T__o *)sub_1C3B9B0(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v206,
    (const MethodInfo_3670C20 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v206 )
    goto LABEL_692;
  v207 = v206->fields._items;
  v208 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v206->fields._version;
  if ( !v207 )
    goto LABEL_692;
  v209 = v206->fields._size;
  if ( (unsigned int)v209 >= v207->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v206,
      48,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v208[4] + 192LL) + 112LL));
    v207 = v206->fields._items;
    v208 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v206->fields._version;
    if ( !v207 )
      goto LABEL_692;
  }
  else
  {
    v206->fields._size = v209 + 1;
    *((_DWORD *)v207->m_Items + v209) = 48;
    ++v206->fields._version;
  }
  v210 = v206->fields._size;
  if ( (unsigned int)v210 >= v207->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v206,
      8,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v208[4] + 192LL) + 112LL));
    v207 = v206->fields._items;
    v208 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v206->fields._version;
    if ( !v207 )
      goto LABEL_692;
  }
  else
  {
    v206->fields._size = v210 + 1;
    *((_DWORD *)v207->m_Items + v210) = 8;
    ++v206->fields._version;
  }
  v211 = v206->fields._size;
  if ( (unsigned int)v211 >= v207->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v206,
      9,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v208[4] + 192LL) + 112LL));
  }
  else
  {
    v206->fields._size = v211 + 1;
    *((_DWORD *)v207->m_Items + v211) = 9;
  }
  v212 = FilterKindList_TypeInfo->static_fields;
  v212->ServantTypeFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v206;
  sub_1C3B708(&v212->ServantTypeFilterKindList);
  v213 = (System_Collections_Generic_List_T__o *)sub_1C3B9B0(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v213,
    (const MethodInfo_3670C20 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v213 )
    goto LABEL_692;
  v214 = v213->fields._items;
  v215 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v213->fields._version;
  if ( !v214 )
    goto LABEL_692;
  v216 = v213->fields._size;
  if ( (unsigned int)v216 >= v214->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v213,
      21,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v215[4] + 192LL) + 112LL));
    v214 = v213->fields._items;
    v215 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v213->fields._version;
    if ( !v214 )
      goto LABEL_692;
  }
  else
  {
    v213->fields._size = v216 + 1;
    *((_DWORD *)v214->m_Items + v216) = 21;
    ++v213->fields._version;
  }
  v217 = v213->fields._size;
  if ( (unsigned int)v217 >= v214->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v213,
      22,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v215[4] + 192LL) + 112LL));
    v214 = v213->fields._items;
    v215 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v213->fields._version;
    if ( !v214 )
      goto LABEL_692;
  }
  else
  {
    v213->fields._size = v217 + 1;
    *((_DWORD *)v214->m_Items + v217) = 22;
    ++v213->fields._version;
  }
  v218 = v213->fields._size;
  if ( (unsigned int)v218 >= v214->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v213,
      23,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v215[4] + 192LL) + 112LL));
    v214 = v213->fields._items;
    v215 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v213->fields._version;
    if ( !v214 )
      goto LABEL_692;
  }
  else
  {
    v213->fields._size = v218 + 1;
    *((_DWORD *)v214->m_Items + v218) = 23;
    ++v213->fields._version;
  }
  v219 = v213->fields._size;
  if ( (unsigned int)v219 >= v214->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v213,
      24,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v215[4] + 192LL) + 112LL));
    v214 = v213->fields._items;
    v215 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v213->fields._version;
    if ( !v214 )
      goto LABEL_692;
  }
  else
  {
    v213->fields._size = v219 + 1;
    *((_DWORD *)v214->m_Items + v219) = 24;
    ++v213->fields._version;
  }
  v220 = v213->fields._size;
  if ( (unsigned int)v220 >= v214->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v213,
      25,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v215[4] + 192LL) + 112LL));
    v214 = v213->fields._items;
    v215 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v213->fields._version;
    if ( !v214 )
      goto LABEL_692;
  }
  else
  {
    v213->fields._size = v220 + 1;
    *((_DWORD *)v214->m_Items + v220) = 25;
    ++v213->fields._version;
  }
  v221 = v213->fields._size;
  if ( (unsigned int)v221 >= v214->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v213,
      26,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v215[4] + 192LL) + 112LL));
    v214 = v213->fields._items;
    v215 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v213->fields._version;
    if ( !v214 )
      goto LABEL_692;
  }
  else
  {
    v213->fields._size = v221 + 1;
    *((_DWORD *)v214->m_Items + v221) = 26;
    ++v213->fields._version;
  }
  v222 = v213->fields._size;
  if ( (unsigned int)v222 >= v214->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v213,
      27,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v215[4] + 192LL) + 112LL));
  }
  else
  {
    v213->fields._size = v222 + 1;
    *((_DWORD *)v214->m_Items + v222) = 27;
  }
  v223 = FilterKindList_TypeInfo->static_fields;
  v223->CombineBaseServantFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v213;
  sub_1C3B708(&v223->CombineBaseServantFilterKindList);
  v224 = (System_Collections_Generic_List_T__o *)sub_1C3B9B0(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v224,
    (const MethodInfo_3670C20 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v224 )
    goto LABEL_692;
  v225 = v224->fields._items;
  v226 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v224->fields._version;
  if ( !v225 )
    goto LABEL_692;
  v227 = v224->fields._size;
  if ( (unsigned int)v227 >= v225->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v224,
      28,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v226[4] + 192LL) + 112LL));
    v225 = v224->fields._items;
    v226 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v224->fields._version;
    if ( !v225 )
      goto LABEL_692;
  }
  else
  {
    v224->fields._size = v227 + 1;
    *((_DWORD *)v225->m_Items + v227) = 28;
    ++v224->fields._version;
  }
  v228 = v224->fields._size;
  if ( (unsigned int)v228 >= v225->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v224,
      29,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v226[4] + 192LL) + 112LL));
  }
  else
  {
    v224->fields._size = v228 + 1;
    *((_DWORD *)v225->m_Items + v228) = 29;
  }
  v229 = FilterKindList_TypeInfo->static_fields;
  v229->CombineMaterialFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v224;
  sub_1C3B708(&v229->CombineMaterialFilterKindList);
  v230 = (System_Collections_Generic_List_T__o *)sub_1C3B9B0(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v230,
    (const MethodInfo_3670C20 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v230 )
    goto LABEL_692;
  v231 = v230->fields._items;
  v232 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v230->fields._version;
  if ( !v231 )
    goto LABEL_692;
  v233 = v230->fields._size;
  if ( (unsigned int)v233 >= v231->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v230,
      10,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v232[4] + 192LL) + 112LL));
    v231 = v230->fields._items;
    v232 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v230->fields._version;
    if ( !v231 )
      goto LABEL_692;
  }
  else
  {
    v230->fields._size = v233 + 1;
    *((_DWORD *)v231->m_Items + v233) = 10;
    ++v230->fields._version;
  }
  v234 = v230->fields._size;
  if ( (unsigned int)v234 >= v231->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v230,
      11,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v232[4] + 192LL) + 112LL));
    v231 = v230->fields._items;
    v232 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v230->fields._version;
    if ( !v231 )
      goto LABEL_692;
  }
  else
  {
    v230->fields._size = v234 + 1;
    *((_DWORD *)v231->m_Items + v234) = 11;
    ++v230->fields._version;
  }
  v235 = v230->fields._size;
  if ( (unsigned int)v235 >= v231->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v230,
      12,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v232[4] + 192LL) + 112LL));
  }
  else
  {
    v230->fields._size = v235 + 1;
    *((_DWORD *)v231->m_Items + v235) = 12;
  }
  v236 = FilterKindList_TypeInfo->static_fields;
  v236->CollectionStateFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v230;
  sub_1C3B708(&v236->CollectionStateFilterKindList);
  v237 = (System_Collections_Generic_List_T__o *)sub_1C3B9B0(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v237,
    (const MethodInfo_3670C20 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v237 )
    goto LABEL_692;
  v238 = v237->fields._items;
  v239 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v237->fields._version;
  if ( !v238 )
    goto LABEL_692;
  v240 = v237->fields._size;
  if ( (unsigned int)v240 >= v238->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v237,
      11,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v239[4] + 192LL) + 112LL));
    v238 = v237->fields._items;
    v239 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v237->fields._version;
    if ( !v238 )
      goto LABEL_692;
  }
  else
  {
    v237->fields._size = v240 + 1;
    *((_DWORD *)v238->m_Items + v240) = 11;
    ++v237->fields._version;
  }
  v241 = v237->fields._size;
  if ( (unsigned int)v241 >= v238->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v237,
      12,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v239[4] + 192LL) + 112LL));
  }
  else
  {
    v237->fields._size = v241 + 1;
    *((_DWORD *)v238->m_Items + v241) = 12;
  }
  v242 = FilterKindList_TypeInfo->static_fields;
  v242->BonusSelectCollectionStateFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v237;
  sub_1C3B708(&v242->BonusSelectCollectionStateFilterKindList);
  v243 = (System_Collections_Generic_List_T__o *)sub_1C3B9B0(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v243,
    (const MethodInfo_3670C20 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v243 )
    goto LABEL_692;
  v244 = v243->fields._items;
  v245 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v243->fields._version;
  if ( !v244 )
    goto LABEL_692;
  v246 = v243->fields._size;
  if ( (unsigned int)v246 >= v244->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v243,
      52,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v245[4] + 192LL) + 112LL));
    v244 = v243->fields._items;
    v245 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v243->fields._version;
    if ( !v244 )
      goto LABEL_692;
  }
  else
  {
    v243->fields._size = v246 + 1;
    *((_DWORD *)v244->m_Items + v246) = 52;
    ++v243->fields._version;
  }
  v247 = v243->fields._size;
  if ( (unsigned int)v247 >= v244->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v243,
      53,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v245[4] + 192LL) + 112LL));
  }
  else
  {
    v243->fields._size = v247 + 1;
    *((_DWORD *)v244->m_Items + v247) = 53;
  }
  v248 = FilterKindList_TypeInfo->static_fields;
  v248->ServantHaveFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v243;
  sub_1C3B708(&v248->ServantHaveFilterKindList);
  v249 = (System_Collections_Generic_List_T__o *)sub_1C3B9B0(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v249,
    (const MethodInfo_3670C20 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v249 )
    goto LABEL_692;
  v250 = v249->fields._items;
  v251 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v249->fields._version;
  if ( !v250 )
    goto LABEL_692;
  v252 = v249->fields._size;
  if ( (unsigned int)v252 >= v250->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v249,
      50,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v251[4] + 192LL) + 112LL));
    v250 = v249->fields._items;
    v251 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v249->fields._version;
    if ( !v250 )
      goto LABEL_692;
  }
  else
  {
    v249->fields._size = v252 + 1;
    *((_DWORD *)v250->m_Items + v252) = 50;
    ++v249->fields._version;
  }
  v253 = v249->fields._size;
  if ( (unsigned int)v253 >= v250->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v249,
      51,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v251[4] + 192LL) + 112LL));
  }
  else
  {
    v249->fields._size = v253 + 1;
    *((_DWORD *)v250->m_Items + v253) = 51;
  }
  v254 = FilterKindList_TypeInfo->static_fields;
  v254->ServantEffectApplySubjectFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v249;
  sub_1C3B708(&v254->ServantEffectApplySubjectFilterKindList);
  v255 = (System_Collections_Generic_List_T__o *)sub_1C3B9B0(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v255,
    (const MethodInfo_3670C20 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v255 )
    goto LABEL_692;
  v256 = v255->fields._items;
  v257 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v255->fields._version;
  if ( !v256 )
    goto LABEL_692;
  v258 = v255->fields._size;
  if ( (unsigned int)v258 >= v256->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v255,
      69,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v257[4] + 192LL) + 112LL));
    v256 = v255->fields._items;
    v257 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v255->fields._version;
    if ( !v256 )
      goto LABEL_692;
  }
  else
  {
    v255->fields._size = v258 + 1;
    *((_DWORD *)v256->m_Items + v258) = 69;
    ++v255->fields._version;
  }
  v259 = v255->fields._size;
  if ( (unsigned int)v259 >= v256->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v255,
      70,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v257[4] + 192LL) + 112LL));
    v256 = v255->fields._items;
    v257 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v255->fields._version;
    if ( !v256 )
      goto LABEL_692;
  }
  else
  {
    v255->fields._size = v259 + 1;
    *((_DWORD *)v256->m_Items + v259) = 70;
    ++v255->fields._version;
  }
  v260 = v255->fields._size;
  if ( (unsigned int)v260 >= v256->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v255,
      71,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v257[4] + 192LL) + 112LL));
  }
  else
  {
    v255->fields._size = v260 + 1;
    *((_DWORD *)v256->m_Items + v260) = 71;
  }
  v261 = FilterKindList_TypeInfo->static_fields;
  v261->ServantSummonCategoryFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v255;
  sub_1C3B708(&v261->ServantSummonCategoryFilterKindList);
  v262 = (System_Collections_Generic_List_T__o *)sub_1C3B9B0(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v262,
    (const MethodInfo_3670C20 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v262 )
    goto LABEL_692;
  v263 = v262->fields._items;
  v264 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v262->fields._version;
  if ( !v263 )
    goto LABEL_692;
  v265 = v262->fields._size;
  if ( (unsigned int)v265 >= v263->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v262,
      88,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v264[4] + 192LL) + 112LL));
    v263 = v262->fields._items;
    v264 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v262->fields._version;
    if ( !v263 )
      goto LABEL_692;
  }
  else
  {
    v262->fields._size = v265 + 1;
    *((_DWORD *)v263->m_Items + v265) = 88;
    ++v262->fields._version;
  }
  v266 = v262->fields._size;
  if ( (unsigned int)v266 >= v263->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v262,
      89,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v264[4] + 192LL) + 112LL));
    v263 = v262->fields._items;
    v264 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v262->fields._version;
    if ( !v263 )
      goto LABEL_692;
  }
  else
  {
    v262->fields._size = v266 + 1;
    *((_DWORD *)v263->m_Items + v266) = 89;
    ++v262->fields._version;
  }
  v267 = v262->fields._size;
  if ( (unsigned int)v267 >= v263->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v262,
      90,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v264[4] + 192LL) + 112LL));
  }
  else
  {
    v262->fields._size = v267 + 1;
    *((_DWORD *)v263->m_Items + v267) = 90;
  }
  v268 = FilterKindList_TypeInfo->static_fields;
  v268->ServantAttriFirstFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v262;
  sub_1C3B708(&v268->ServantAttriFirstFilterKindList);
  v269 = (System_Collections_Generic_List_T__o *)sub_1C3B9B0(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v269,
    (const MethodInfo_3670C20 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v269 )
    goto LABEL_692;
  v270 = v269->fields._items;
  v271 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v269->fields._version;
  if ( !v270 )
    goto LABEL_692;
  v272 = v269->fields._size;
  if ( (unsigned int)v272 >= v270->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v269,
      91,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v271[4] + 192LL) + 112LL));
    v270 = v269->fields._items;
    v271 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v269->fields._version;
    if ( !v270 )
      goto LABEL_692;
  }
  else
  {
    v269->fields._size = v272 + 1;
    *((_DWORD *)v270->m_Items + v272) = 91;
    ++v269->fields._version;
  }
  v273 = v269->fields._size;
  if ( (unsigned int)v273 >= v270->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v269,
      92,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v271[4] + 192LL) + 112LL));
    v270 = v269->fields._items;
    v271 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v269->fields._version;
    if ( !v270 )
      goto LABEL_692;
  }
  else
  {
    v269->fields._size = v273 + 1;
    *((_DWORD *)v270->m_Items + v273) = 92;
    ++v269->fields._version;
  }
  v274 = v269->fields._size;
  if ( (unsigned int)v274 >= v270->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v269,
      93,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v271[4] + 192LL) + 112LL));
    v270 = v269->fields._items;
    v271 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v269->fields._version;
    if ( !v270 )
      goto LABEL_692;
  }
  else
  {
    v269->fields._size = v274 + 1;
    *((_DWORD *)v270->m_Items + v274) = 93;
    ++v269->fields._version;
  }
  v275 = v269->fields._size;
  if ( (unsigned int)v275 >= v270->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v269,
      94,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v271[4] + 192LL) + 112LL));
  }
  else
  {
    v269->fields._size = v275 + 1;
    *((_DWORD *)v270->m_Items + v275) = 94;
  }
  v276 = FilterKindList_TypeInfo->static_fields;
  v276->ServantAttriSecondFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v269;
  sub_1C3B708(&v276->ServantAttriSecondFilterKindList);
  v277 = (System_Collections_Generic_List_T__o *)sub_1C3B9B0(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v277,
    (const MethodInfo_3670C20 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v277 )
    goto LABEL_692;
  v278 = v277->fields._items;
  v279 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v277->fields._version;
  if ( !v278 )
    goto LABEL_692;
  v280 = v277->fields._size;
  if ( (unsigned int)v280 >= v278->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v277,
      95,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v279[4] + 192LL) + 112LL));
    v278 = v277->fields._items;
    v279 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v277->fields._version;
    if ( !v278 )
      goto LABEL_692;
  }
  else
  {
    v277->fields._size = v280 + 1;
    *((_DWORD *)v278->m_Items + v280) = 95;
    ++v277->fields._version;
  }
  v281 = v277->fields._size;
  if ( (unsigned int)v281 >= v278->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v277,
      96,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v279[4] + 192LL) + 112LL));
    v278 = v277->fields._items;
    v279 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v277->fields._version;
    if ( !v278 )
      goto LABEL_692;
  }
  else
  {
    v277->fields._size = v281 + 1;
    *((_DWORD *)v278->m_Items + v281) = 96;
    ++v277->fields._version;
  }
  v282 = v277->fields._size;
  if ( (unsigned int)v282 >= v278->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v277,
      97,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v279[4] + 192LL) + 112LL));
    v278 = v277->fields._items;
    v279 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v277->fields._version;
    if ( !v278 )
      goto LABEL_692;
  }
  else
  {
    v277->fields._size = v282 + 1;
    *((_DWORD *)v278->m_Items + v282) = 97;
    ++v277->fields._version;
  }
  v283 = v277->fields._size;
  if ( (unsigned int)v283 >= v278->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v277,
      98,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v279[4] + 192LL) + 112LL));
    v278 = v277->fields._items;
    v279 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v277->fields._version;
    if ( !v278 )
      goto LABEL_692;
  }
  else
  {
    v277->fields._size = v283 + 1;
    *((_DWORD *)v278->m_Items + v283) = 98;
    ++v277->fields._version;
  }
  v284 = v277->fields._size;
  if ( (unsigned int)v284 >= v278->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v277,
      99,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v279[4] + 192LL) + 112LL));
  }
  else
  {
    v277->fields._size = v284 + 1;
    *((_DWORD *)v278->m_Items + v284) = 99;
  }
  v285 = FilterKindList_TypeInfo->static_fields;
  v285->ServantSubAttriFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v277;
  sub_1C3B708(&v285->ServantSubAttriFilterKindList);
  v286 = (System_Collections_Generic_List_T__o *)sub_1C3B9B0(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v286,
    (const MethodInfo_3670C20 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v286 )
    goto LABEL_692;
  v287 = v286->fields._items;
  v288 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v286->fields._version;
  if ( !v287 )
    goto LABEL_692;
  v289 = v286->fields._size;
  if ( (unsigned int)v289 >= v287->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v286,
      38,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v288[4] + 192LL) + 112LL));
    v287 = v286->fields._items;
    v288 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v286->fields._version;
    if ( !v287 )
      goto LABEL_692;
  }
  else
  {
    v286->fields._size = v289 + 1;
    *((_DWORD *)v287->m_Items + v289) = 38;
    ++v286->fields._version;
  }
  v290 = v286->fields._size;
  if ( (unsigned int)v290 >= v287->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v286,
      37,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v288[4] + 192LL) + 112LL));
    v287 = v286->fields._items;
    v288 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v286->fields._version;
    if ( !v287 )
      goto LABEL_692;
  }
  else
  {
    v286->fields._size = v290 + 1;
    *((_DWORD *)v287->m_Items + v290) = 37;
    ++v286->fields._version;
  }
  v291 = v286->fields._size;
  if ( (unsigned int)v291 >= v287->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v286,
      36,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v288[4] + 192LL) + 112LL));
    v287 = v286->fields._items;
    v288 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v286->fields._version;
    if ( !v287 )
      goto LABEL_692;
  }
  else
  {
    v286->fields._size = v291 + 1;
    *((_DWORD *)v287->m_Items + v291) = 36;
    ++v286->fields._version;
  }
  v292 = v286->fields._size;
  if ( (unsigned int)v292 >= v287->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v286,
      35,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v288[4] + 192LL) + 112LL));
    v287 = v286->fields._items;
    v288 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v286->fields._version;
    if ( !v287 )
      goto LABEL_692;
  }
  else
  {
    v286->fields._size = v292 + 1;
    *((_DWORD *)v287->m_Items + v292) = 35;
    ++v286->fields._version;
  }
  v293 = v286->fields._size;
  if ( (unsigned int)v293 >= v287->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v286,
      34,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v288[4] + 192LL) + 112LL));
  }
  else
  {
    v286->fields._size = v293 + 1;
    *((_DWORD *)v287->m_Items + v293) = 34;
  }
  v294 = FilterKindList_TypeInfo->static_fields;
  v294->RarityFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v286;
  sub_1C3B708(&v294->RarityFilterKindList);
  v295 = (System_Collections_Generic_List_T__o *)sub_1C3B9B0(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v295,
    (const MethodInfo_3670C20 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v295 )
    goto LABEL_692;
  v296 = v295->fields._items;
  v297 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v295->fields._version;
  if ( !v296 )
    goto LABEL_692;
  v298 = v295->fields._size;
  if ( (unsigned int)v298 >= v296->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v295,
      54,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v297[4] + 192LL) + 112LL));
    v296 = v295->fields._items;
    v297 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v295->fields._version;
    if ( !v296 )
      goto LABEL_692;
  }
  else
  {
    v295->fields._size = v298 + 1;
    *((_DWORD *)v296->m_Items + v298) = 54;
    ++v295->fields._version;
  }
  v299 = v295->fields._size;
  if ( (unsigned int)v299 >= v296->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v295,
      55,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v297[4] + 192LL) + 112LL));
    v296 = v295->fields._items;
    v297 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v295->fields._version;
    if ( !v296 )
      goto LABEL_692;
  }
  else
  {
    v295->fields._size = v299 + 1;
    *((_DWORD *)v296->m_Items + v299) = 55;
    ++v295->fields._version;
  }
  v300 = v295->fields._size;
  if ( (unsigned int)v300 >= v296->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v295,
      72,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v297[4] + 192LL) + 112LL));
    v296 = v295->fields._items;
    v297 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v295->fields._version;
    if ( !v296 )
      goto LABEL_692;
  }
  else
  {
    v295->fields._size = v300 + 1;
    *((_DWORD *)v296->m_Items + v300) = 72;
    ++v295->fields._version;
  }
  v301 = v295->fields._size;
  if ( (unsigned int)v301 >= v296->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v295,
      73,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v297[4] + 192LL) + 112LL));
    v296 = v295->fields._items;
    v297 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v295->fields._version;
    if ( !v296 )
      goto LABEL_692;
  }
  else
  {
    v295->fields._size = v301 + 1;
    *((_DWORD *)v296->m_Items + v301) = 73;
    ++v295->fields._version;
  }
  v302 = v295->fields._size;
  if ( (unsigned int)v302 >= v296->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v295,
      74,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v297[4] + 192LL) + 112LL));
    v296 = v295->fields._items;
    v297 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v295->fields._version;
    if ( !v296 )
      goto LABEL_692;
  }
  else
  {
    v295->fields._size = v302 + 1;
    *((_DWORD *)v296->m_Items + v302) = 74;
    ++v295->fields._version;
  }
  v303 = v295->fields._size;
  if ( (unsigned int)v303 >= v296->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v295,
      75,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v297[4] + 192LL) + 112LL));
    v296 = v295->fields._items;
    v297 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v295->fields._version;
    if ( !v296 )
      goto LABEL_692;
  }
  else
  {
    v295->fields._size = v303 + 1;
    *((_DWORD *)v296->m_Items + v303) = 75;
    ++v295->fields._version;
  }
  v304 = v295->fields._size;
  if ( (unsigned int)v304 >= v296->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v295,
      76,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v297[4] + 192LL) + 112LL));
    v296 = v295->fields._items;
    v297 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v295->fields._version;
    if ( !v296 )
      goto LABEL_692;
  }
  else
  {
    v295->fields._size = v304 + 1;
    *((_DWORD *)v296->m_Items + v304) = 76;
    ++v295->fields._version;
  }
  v305 = v295->fields._size;
  if ( (unsigned int)v305 >= v296->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v295,
      56,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v297[4] + 192LL) + 112LL));
  }
  else
  {
    v295->fields._size = v305 + 1;
    *((_DWORD *)v296->m_Items + v305) = 56;
  }
  v306 = FilterKindList_TypeInfo->static_fields;
  v306->ServantEquipTypeFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v295;
  sub_1C3B708(&v306->ServantEquipTypeFilterKindList);
  v307 = (System_Collections_Generic_List_T__o *)sub_1C3B9B0(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v307,
    (const MethodInfo_3670C20 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v307 )
    goto LABEL_692;
  v308 = v307->fields._items;
  v309 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v307->fields._version;
  if ( !v308 )
    goto LABEL_692;
  v310 = v307->fields._size;
  if ( (unsigned int)v310 >= v308->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v307,
      77,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v309[4] + 192LL) + 112LL));
    v308 = v307->fields._items;
    v309 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v307->fields._version;
    if ( !v308 )
      goto LABEL_692;
  }
  else
  {
    v307->fields._size = v310 + 1;
    *((_DWORD *)v308->m_Items + v310) = 77;
    ++v307->fields._version;
  }
  v311 = v307->fields._size;
  if ( (unsigned int)v311 >= v308->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v307,
      78,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v309[4] + 192LL) + 112LL));
    v308 = v307->fields._items;
    v309 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v307->fields._version;
    if ( !v308 )
      goto LABEL_692;
  }
  else
  {
    v307->fields._size = v311 + 1;
    *((_DWORD *)v308->m_Items + v311) = 78;
    ++v307->fields._version;
  }
  v312 = v307->fields._size;
  if ( (unsigned int)v312 >= v308->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v307,
      79,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v309[4] + 192LL) + 112LL));
    v308 = v307->fields._items;
    v309 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v307->fields._version;
    if ( !v308 )
      goto LABEL_692;
  }
  else
  {
    v307->fields._size = v312 + 1;
    *((_DWORD *)v308->m_Items + v312) = 79;
    ++v307->fields._version;
  }
  v313 = v307->fields._size;
  if ( (unsigned int)v313 >= v308->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v307,
      80,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v309[4] + 192LL) + 112LL));
    v308 = v307->fields._items;
    v309 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v307->fields._version;
    if ( !v308 )
      goto LABEL_692;
  }
  else
  {
    v307->fields._size = v313 + 1;
    *((_DWORD *)v308->m_Items + v313) = 80;
    ++v307->fields._version;
  }
  v314 = v307->fields._size;
  if ( (unsigned int)v314 >= v308->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v307,
      81,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v309[4] + 192LL) + 112LL));
    v308 = v307->fields._items;
    v309 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v307->fields._version;
    if ( !v308 )
      goto LABEL_692;
  }
  else
  {
    v307->fields._size = v314 + 1;
    *((_DWORD *)v308->m_Items + v314) = 81;
    ++v307->fields._version;
  }
  v315 = v307->fields._size;
  if ( (unsigned int)v315 >= v308->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v307,
      82,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v309[4] + 192LL) + 112LL));
    v308 = v307->fields._items;
    v309 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v307->fields._version;
    if ( !v308 )
      goto LABEL_692;
  }
  else
  {
    v307->fields._size = v315 + 1;
    *((_DWORD *)v308->m_Items + v315) = 82;
    ++v307->fields._version;
  }
  v316 = v307->fields._size;
  if ( (unsigned int)v316 >= v308->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v307,
      83,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v309[4] + 192LL) + 112LL));
  }
  else
  {
    v307->fields._size = v316 + 1;
    *((_DWORD *)v308->m_Items + v316) = 83;
  }
  v317 = FilterKindList_TypeInfo->static_fields;
  v317->ServantEquipCombineStatusFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v307;
  sub_1C3B708(&v317->ServantEquipCombineStatusFilterKindList);
  v318 = (System_Collections_Generic_List_T__o *)sub_1C3B9B0(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v318,
    (const MethodInfo_3670C20 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v318 )
    goto LABEL_692;
  v319 = v318->fields._items;
  v320 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v318->fields._version;
  if ( !v319 )
    goto LABEL_692;
  v321 = v318->fields._size;
  if ( (unsigned int)v321 >= v319->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v318,
      84,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v320[4] + 192LL) + 112LL));
    v319 = v318->fields._items;
    v320 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v318->fields._version;
    if ( !v319 )
      goto LABEL_692;
  }
  else
  {
    v318->fields._size = v321 + 1;
    *((_DWORD *)v319->m_Items + v321) = 84;
    ++v318->fields._version;
  }
  v322 = v318->fields._size;
  if ( (unsigned int)v322 >= v319->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v318,
      85,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v320[4] + 192LL) + 112LL));
    v319 = v318->fields._items;
    v320 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v318->fields._version;
    if ( !v319 )
      goto LABEL_692;
  }
  else
  {
    v318->fields._size = v322 + 1;
    *((_DWORD *)v319->m_Items + v322) = 85;
    ++v318->fields._version;
  }
  v323 = v318->fields._size;
  if ( (unsigned int)v323 >= v319->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v318,
      86,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v320[4] + 192LL) + 112LL));
    v319 = v318->fields._items;
    v320 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v318->fields._version;
    if ( !v319 )
      goto LABEL_692;
  }
  else
  {
    v318->fields._size = v323 + 1;
    *((_DWORD *)v319->m_Items + v323) = 86;
    ++v318->fields._version;
  }
  v324 = v318->fields._size;
  if ( (unsigned int)v324 >= v319->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v318,
      87,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v320[4] + 192LL) + 112LL));
  }
  else
  {
    v318->fields._size = v324 + 1;
    *((_DWORD *)v319->m_Items + v324) = 87;
  }
  v325 = FilterKindList_TypeInfo->static_fields;
  v325->ServantEquipHaveStatusFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v318;
  sub_1C3B708(&v325->ServantEquipHaveStatusFilterKindList);
  v326 = (System_Collections_Generic_List_T__o *)sub_1C3B9B0(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v326,
    (const MethodInfo_3670C20 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v326 )
    goto LABEL_692;
  v327 = v326->fields._items;
  v328 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v326->fields._version;
  if ( !v327 )
    goto LABEL_692;
  v329 = v326->fields._size;
  if ( (unsigned int)v329 >= v327->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v326,
      30,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v328[4] + 192LL) + 112LL));
    v327 = v326->fields._items;
    v328 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v326->fields._version;
    if ( !v327 )
      goto LABEL_692;
  }
  else
  {
    v326->fields._size = v329 + 1;
    *((_DWORD *)v327->m_Items + v329) = 30;
    ++v326->fields._version;
  }
  v330 = v326->fields._size;
  if ( (unsigned int)v330 >= v327->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v326,
      31,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v328[4] + 192LL) + 112LL));
  }
  else
  {
    v326->fields._size = v330 + 1;
    *((_DWORD *)v327->m_Items + v330) = 31;
  }
  v331 = FilterKindList_TypeInfo->static_fields;
  v331->ServantCostumeFilterKind = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v326;
  sub_1C3B708(&v331->ServantCostumeFilterKind);
  v332 = (System_Collections_Generic_List_T__o *)sub_1C3B9B0(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v332,
    (const MethodInfo_3670C20 *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v332 )
    goto LABEL_692;
  v333 = v332->fields._items;
  v334 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v332->fields._version;
  if ( !v333 )
    goto LABEL_692;
  v335 = v332->fields._size;
  if ( (unsigned int)v335 < v333->max_length )
  {
    v332->fields._size = v335 + 1;
    *((_DWORD *)v333->m_Items + v335) = 32;
    ++v332->fields._version;
    goto LABEL_688;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v332,
    32,
    *(const MethodInfo_3671474 **)(*(_QWORD *)(v334[4] + 192LL) + 112LL));
  v333 = v332->fields._items;
  v334 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v332->fields._version;
  if ( !v333 )
LABEL_692:
    sub_1C3B9C0(v6, v7);
LABEL_688:
  v336 = v332->fields._size;
  if ( (unsigned int)v336 >= v333->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v332,
      33,
      *(const MethodInfo_3671474 **)(*(_QWORD *)(v334[4] + 192LL) + 112LL));
  }
  else
  {
    v332->fields._size = v336 + 1;
    *((_DWORD *)v333->m_Items + v336) = 33;
  }
  v337 = FilterKindList_TypeInfo->static_fields;
  v337->MaterialServantCostumeFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v332;
  sub_1C3B708(&v337->MaterialServantCostumeFilterKindList);
}


void __fastcall FilterKindList___ctor(FilterKindList_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}