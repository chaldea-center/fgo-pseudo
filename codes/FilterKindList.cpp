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
  const MethodInfo *v9; // x3
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
  System_Collections_Generic_List_T__o *v101; // x19
  int32_t v102; // w2
  const MethodInfo *v103; // x3
  _QWORD *v104; // x8
  int32_t *v105; // x25
  struct System_Object_array *v106; // x9
  __int64 v107; // x10
  int32_t *v108; // x24
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
  __int64 v119; // x10
  __int64 v120; // x10
  __int64 v121; // x10
  __int64 v122; // x10
  struct FilterKindList_StaticFields *static_fields; // x0
  System_Collections_Generic_List_T__o *v124; // x19
  int32_t v125; // w2
  const MethodInfo *v126; // x3
  _QWORD *v127; // x8
  int32_t *v128; // x25
  struct System_Object_array *v129; // x9
  __int64 v130; // x10
  int32_t *v131; // x24
  __int64 v132; // x10
  __int64 v133; // x10
  __int64 v134; // x10
  __int64 v135; // x10
  __int64 v136; // x10
  __int64 v137; // x10
  __int64 v138; // x10
  __int64 v139; // x10
  __int64 v140; // x10
  __int64 v141; // x10
  __int64 v142; // x10
  __int64 v143; // x10
  __int64 v144; // x10
  struct FilterKindList_StaticFields *v145; // x0
  System_Collections_Generic_List_T__o *v146; // x19
  int32_t v147; // w2
  const MethodInfo *v148; // x3
  struct System_Object_array *v149; // x8
  _QWORD *v150; // x9
  __int64 v151; // x10
  __int64 v152; // x10
  __int64 v153; // x10
  struct FilterKindList_StaticFields *v154; // x0
  System_Collections_Generic_List_T__o *v155; // x19
  int32_t v156; // w2
  const MethodInfo *v157; // x3
  struct System_Object_array *v158; // x8
  _QWORD *v159; // x9
  __int64 v160; // x10
  __int64 v161; // x10
  __int64 v162; // x10
  __int64 v163; // x10
  struct FilterKindList_StaticFields *v164; // x0
  System_Collections_Generic_List_T__o *v165; // x19
  int32_t v166; // w2
  const MethodInfo *v167; // x3
  struct System_Object_array *v168; // x8
  _QWORD *v169; // x9
  __int64 v170; // x10
  __int64 v171; // x10
  __int64 v172; // x10
  struct FilterKindList_StaticFields *v173; // x0
  System_Collections_Generic_List_T__o *v174; // x19
  int32_t v175; // w2
  const MethodInfo *v176; // x3
  struct System_Object_array *v177; // x8
  _QWORD *v178; // x9
  __int64 v179; // x10
  __int64 v180; // x10
  __int64 v181; // x10
  __int64 v182; // x10
  struct FilterKindList_StaticFields *v183; // x0
  System_Collections_Generic_List_T__o *v184; // x19
  int32_t v185; // w2
  const MethodInfo *v186; // x3
  struct System_Object_array *v187; // x8
  _QWORD *v188; // x9
  __int64 v189; // x10
  __int64 v190; // x10
  __int64 v191; // x10
  __int64 v192; // x10
  struct FilterKindList_StaticFields *v193; // x0
  System_Collections_Generic_List_T__o *v194; // x19
  int32_t v195; // w2
  const MethodInfo *v196; // x3
  struct System_Object_array *v197; // x8
  _QWORD *v198; // x9
  __int64 v199; // x10
  __int64 v200; // x10
  __int64 v201; // x10
  __int64 v202; // x10
  struct FilterKindList_StaticFields *v203; // x0
  System_Collections_Generic_List_T__o *v204; // x19
  int32_t v205; // w2
  const MethodInfo *v206; // x3
  struct System_Object_array *v207; // x8
  _QWORD *v208; // x9
  __int64 v209; // x10
  __int64 v210; // x10
  struct FilterKindList_StaticFields *v211; // x0
  System_Collections_Generic_List_T__o *v212; // x19
  int32_t v213; // w2
  const MethodInfo *v214; // x3
  struct System_Object_array *v215; // x8
  _QWORD *v216; // x9
  __int64 v217; // x10
  __int64 v218; // x10
  __int64 v219; // x10
  struct FilterKindList_StaticFields *v220; // x0
  System_Collections_Generic_List_T__o *v221; // x19
  int32_t v222; // w2
  const MethodInfo *v223; // x3
  struct System_Object_array *v224; // x8
  _QWORD *v225; // x9
  __int64 v226; // x10
  __int64 v227; // x10
  __int64 v228; // x10
  struct FilterKindList_StaticFields *v229; // x0
  System_Collections_Generic_List_T__o *v230; // x19
  int32_t v231; // w2
  const MethodInfo *v232; // x3
  struct System_Object_array *v233; // x8
  _QWORD *v234; // x9
  __int64 v235; // x10
  __int64 v236; // x10
  __int64 v237; // x10
  struct FilterKindList_StaticFields *v238; // x0
  System_Collections_Generic_List_T__o *v239; // x19
  int32_t v240; // w2
  const MethodInfo *v241; // x3
  struct System_Object_array *v242; // x9
  _QWORD *v243; // x8
  __int64 v244; // x10
  __int64 v245; // x10
  __int64 v246; // x10
  __int64 v247; // x10
  __int64 v248; // x10
  __int64 v249; // x10
  __int64 v250; // x10
  struct FilterKindList_StaticFields *v251; // x0
  System_Collections_Generic_List_T__o *v252; // x19
  int32_t v253; // w2
  const MethodInfo *v254; // x3
  struct System_Object_array *v255; // x8
  _QWORD *v256; // x9
  __int64 v257; // x10
  __int64 v258; // x10
  struct FilterKindList_StaticFields *v259; // x0
  System_Collections_Generic_List_T__o *v260; // x19
  int32_t v261; // w2
  const MethodInfo *v262; // x3
  struct System_Object_array *v263; // x8
  _QWORD *v264; // x9
  __int64 v265; // x10
  __int64 v266; // x10
  __int64 v267; // x10
  struct FilterKindList_StaticFields *v268; // x0
  System_Collections_Generic_List_T__o *v269; // x19
  int32_t v270; // w2
  const MethodInfo *v271; // x3
  struct System_Object_array *v272; // x8
  _QWORD *v273; // x9
  __int64 v274; // x10
  __int64 v275; // x10
  struct FilterKindList_StaticFields *v276; // x0
  System_Collections_Generic_List_T__o *v277; // x19
  int32_t v278; // w2
  const MethodInfo *v279; // x3
  struct System_Object_array *v280; // x8
  _QWORD *v281; // x9
  __int64 v282; // x10
  __int64 v283; // x10
  CGThumbnailListItem_o *v284; // x0
  System_Collections_Generic_List_T__o *v285; // x19
  int32_t v286; // w2
  const MethodInfo *v287; // x3
  struct System_Object_array *v288; // x8
  _QWORD *v289; // x9
  __int64 v290; // x10
  __int64 v291; // x10
  struct FilterKindList_StaticFields *v292; // x0
  System_Collections_Generic_List_T__o *v293; // x19
  int32_t v294; // w2
  const MethodInfo *v295; // x3
  struct System_Object_array *v296; // x8
  _QWORD *v297; // x9
  __int64 v298; // x10
  __int64 v299; // x10
  __int64 v300; // x10
  struct FilterKindList_StaticFields *v301; // x0
  System_Collections_Generic_List_T__o *v302; // x19
  int32_t v303; // w2
  const MethodInfo *v304; // x3
  struct System_Object_array *v305; // x8
  _QWORD *v306; // x9
  __int64 v307; // x10
  __int64 v308; // x10
  __int64 v309; // x10
  struct FilterKindList_StaticFields *v310; // x0
  System_Collections_Generic_List_T__o *v311; // x19
  int32_t v312; // w2
  const MethodInfo *v313; // x3
  struct System_Object_array *v314; // x8
  _QWORD *v315; // x9
  __int64 v316; // x10
  __int64 v317; // x10
  __int64 v318; // x10
  __int64 v319; // x10
  struct FilterKindList_StaticFields *v320; // x0
  System_Collections_Generic_List_T__o *v321; // x19
  int32_t v322; // w2
  const MethodInfo *v323; // x3
  struct System_Object_array *v324; // x8
  _QWORD *v325; // x9
  __int64 v326; // x10
  __int64 v327; // x10
  __int64 v328; // x10
  __int64 v329; // x10
  __int64 v330; // x10
  struct FilterKindList_StaticFields *v331; // x0
  System_Collections_Generic_List_T__o *v332; // x19
  int32_t v333; // w2
  const MethodInfo *v334; // x3
  struct System_Object_array *v335; // x8
  _QWORD *v336; // x9
  __int64 v337; // x10
  __int64 v338; // x10
  __int64 v339; // x10
  __int64 v340; // x10
  __int64 v341; // x10
  struct FilterKindList_StaticFields *v342; // x0
  System_Collections_Generic_List_T__o *v343; // x19
  int32_t v344; // w2
  const MethodInfo *v345; // x3
  struct System_Object_array *v346; // x9
  _QWORD *v347; // x8
  __int64 v348; // x10
  __int64 v349; // x10
  __int64 v350; // x10
  __int64 v351; // x10
  __int64 v352; // x10
  __int64 v353; // x10
  __int64 v354; // x10
  __int64 v355; // x10
  struct FilterKindList_StaticFields *v356; // x0
  System_Collections_Generic_List_T__o *v357; // x19
  int32_t v358; // w2
  const MethodInfo *v359; // x3
  struct System_Object_array *v360; // x9
  _QWORD *v361; // x8
  __int64 v362; // x10
  __int64 v363; // x10
  __int64 v364; // x10
  __int64 v365; // x10
  __int64 v366; // x10
  __int64 v367; // x10
  __int64 v368; // x10
  struct FilterKindList_StaticFields *v369; // x0
  System_Collections_Generic_List_T__o *v370; // x19
  int32_t v371; // w2
  const MethodInfo *v372; // x3
  struct System_Object_array *v373; // x8
  _QWORD *v374; // x9
  __int64 v375; // x10
  __int64 v376; // x10
  __int64 v377; // x10
  __int64 v378; // x10
  struct FilterKindList_StaticFields *v379; // x0
  System_Collections_Generic_List_T__o *v380; // x19
  int32_t v381; // w2
  const MethodInfo *v382; // x3
  struct System_Object_array *v383; // x8
  _QWORD *v384; // x9
  __int64 v385; // x10
  __int64 v386; // x10
  struct FilterKindList_StaticFields *v387; // x0
  System_Collections_Generic_List_T__o *v388; // x19
  int32_t v389; // w2
  const MethodInfo *v390; // x3
  struct System_Object_array *v391; // x8
  _QWORD *v392; // x9
  __int64 v393; // x10
  __int64 v394; // x10
  struct FilterKindList_StaticFields *v395; // x0

  if ( (byte_4A4975B & 1) == 0 )
  {
    sub_1B863B8(&FilterKindList_TypeInfo, v1);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__, v2);
    sub_1B863B8(&Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__, v3);
    sub_1B863B8(&System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo, v4);
    byte_4A4975B = 1;
  }
  v5 = (System_Collections_Generic_List_T__o *)sub_1B86604(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v5,
    (const MethodInfo_35E190C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v5 )
    goto LABEL_692;
  v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
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
  v15 = *p_size;
  if ( (unsigned int)v15 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      9,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
  }
  else
  {
    *p_size = v88 + 1;
    *((_DWORD *)items->m_Items + v88) = 68;
    ++*p_version;
  }
  v89 = *p_size;
  if ( (unsigned int)v89 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      88,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
  }
  else
  {
    *p_size = v89 + 1;
    *((_DWORD *)items->m_Items + v89) = 88;
    ++*p_version;
  }
  v90 = *p_size;
  if ( (unsigned int)v90 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      89,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
  }
  else
  {
    *p_size = v90 + 1;
    *((_DWORD *)items->m_Items + v90) = 89;
    ++*p_version;
  }
  v91 = *p_size;
  if ( (unsigned int)v91 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      90,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
  }
  else
  {
    *p_size = v91 + 1;
    *((_DWORD *)items->m_Items + v91) = 90;
    ++*p_version;
  }
  v92 = *p_size;
  if ( (unsigned int)v92 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      91,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
  }
  else
  {
    *p_size = v92 + 1;
    *((_DWORD *)items->m_Items + v92) = 91;
    ++*p_version;
  }
  v93 = *p_size;
  if ( (unsigned int)v93 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      92,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
  }
  else
  {
    *p_size = v93 + 1;
    *((_DWORD *)items->m_Items + v93) = 92;
    ++*p_version;
  }
  v94 = *p_size;
  if ( (unsigned int)v94 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      93,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
  }
  else
  {
    *p_size = v94 + 1;
    *((_DWORD *)items->m_Items + v94) = 93;
    ++*p_version;
  }
  v95 = *p_size;
  if ( (unsigned int)v95 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      94,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
  }
  else
  {
    *p_size = v95 + 1;
    *((_DWORD *)items->m_Items + v95) = 94;
    ++*p_version;
  }
  v96 = *p_size;
  if ( (unsigned int)v96 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      95,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
  }
  else
  {
    *p_size = v96 + 1;
    *((_DWORD *)items->m_Items + v96) = 95;
    ++*p_version;
  }
  v97 = *p_size;
  if ( (unsigned int)v97 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      96,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
  }
  else
  {
    *p_size = v97 + 1;
    *((_DWORD *)items->m_Items + v97) = 96;
    ++*p_version;
  }
  v98 = *p_size;
  if ( (unsigned int)v98 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      97,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
  }
  else
  {
    *p_size = v98 + 1;
    *((_DWORD *)items->m_Items + v98) = 97;
    ++*p_version;
  }
  v99 = *p_size;
  if ( (unsigned int)v99 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      98,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v5->fields._items;
    v10 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v5->fields._version;
    if ( !items )
      goto LABEL_692;
  }
  else
  {
    *p_size = v99 + 1;
    *((_DWORD *)items->m_Items + v99) = 98;
    ++*p_version;
  }
  v100 = *p_size;
  if ( (unsigned int)v100 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v5,
      99,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    *p_size = v100 + 1;
    *((_DWORD *)items->m_Items + v100) = 99;
  }
  FilterKindList_TypeInfo->static_fields->AllFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v5;
  sub_1B8635C((CGThumbnailListItem_o *)FilterKindList_TypeInfo->static_fields, (int32_t)v5, v8, v9);
  v101 = (System_Collections_Generic_List_T__o *)sub_1B86604(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v101,
    (const MethodInfo_35E190C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v101 )
    goto LABEL_692;
  v104 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  v105 = &v101->fields._version;
  ++v101->fields._version;
  v106 = v101->fields._items;
  v108 = &v101->fields._size;
  v107 = v101->fields._size;
  if ( !v106 )
    goto LABEL_692;
  if ( (unsigned int)v107 >= v106->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v101,
      0,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
    v106 = v101->fields._items;
    v104 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v101->fields._version;
    if ( !v106 )
      goto LABEL_692;
  }
  else
  {
    *v108 = v107 + 1;
    *((_DWORD *)v106->m_Items + v107) = 0;
    ++*v105;
  }
  v109 = *v108;
  if ( (unsigned int)v109 >= v106->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v101,
      1,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
    v106 = v101->fields._items;
    v104 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v101->fields._version;
    if ( !v106 )
      goto LABEL_692;
  }
  else
  {
    *v108 = v109 + 1;
    *((_DWORD *)v106->m_Items + v109) = 1;
    ++*v105;
  }
  v110 = *v108;
  if ( (unsigned int)v110 >= v106->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v101,
      2,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
    v106 = v101->fields._items;
    v104 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v101->fields._version;
    if ( !v106 )
      goto LABEL_692;
  }
  else
  {
    *v108 = v110 + 1;
    *((_DWORD *)v106->m_Items + v110) = 2;
    ++*v105;
  }
  v111 = *v108;
  if ( (unsigned int)v111 >= v106->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v101,
      3,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
    v106 = v101->fields._items;
    v104 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v101->fields._version;
    if ( !v106 )
      goto LABEL_692;
  }
  else
  {
    *v108 = v111 + 1;
    *((_DWORD *)v106->m_Items + v111) = 3;
    ++*v105;
  }
  v112 = *v108;
  if ( (unsigned int)v112 >= v106->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v101,
      4,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
    v106 = v101->fields._items;
    v104 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v101->fields._version;
    if ( !v106 )
      goto LABEL_692;
  }
  else
  {
    *v108 = v112 + 1;
    *((_DWORD *)v106->m_Items + v112) = 4;
    ++*v105;
  }
  v113 = *v108;
  if ( (unsigned int)v113 >= v106->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v101,
      5,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
    v106 = v101->fields._items;
    v104 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v101->fields._version;
    if ( !v106 )
      goto LABEL_692;
  }
  else
  {
    *v108 = v113 + 1;
    *((_DWORD *)v106->m_Items + v113) = 5;
    ++*v105;
  }
  v114 = *v108;
  if ( (unsigned int)v114 >= v106->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v101,
      6,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
    v106 = v101->fields._items;
    v104 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v101->fields._version;
    if ( !v106 )
      goto LABEL_692;
  }
  else
  {
    *v108 = v114 + 1;
    *((_DWORD *)v106->m_Items + v114) = 6;
    ++*v105;
  }
  v115 = *v108;
  if ( (unsigned int)v115 >= v106->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v101,
      57,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
    v106 = v101->fields._items;
    v104 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v101->fields._version;
    if ( !v106 )
      goto LABEL_692;
  }
  else
  {
    *v108 = v115 + 1;
    *((_DWORD *)v106->m_Items + v115) = 57;
    ++*v105;
  }
  v116 = *v108;
  if ( (unsigned int)v116 >= v106->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v101,
      58,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
    v106 = v101->fields._items;
    v104 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v101->fields._version;
    if ( !v106 )
      goto LABEL_692;
  }
  else
  {
    *v108 = v116 + 1;
    *((_DWORD *)v106->m_Items + v116) = 58;
    ++*v105;
  }
  v117 = *v108;
  if ( (unsigned int)v117 >= v106->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v101,
      59,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
    v106 = v101->fields._items;
    v104 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v101->fields._version;
    if ( !v106 )
      goto LABEL_692;
  }
  else
  {
    *v108 = v117 + 1;
    *((_DWORD *)v106->m_Items + v117) = 59;
    ++*v105;
  }
  v118 = *v108;
  if ( (unsigned int)v118 >= v106->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v101,
      60,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
    v106 = v101->fields._items;
    v104 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v101->fields._version;
    if ( !v106 )
      goto LABEL_692;
  }
  else
  {
    *v108 = v118 + 1;
    *((_DWORD *)v106->m_Items + v118) = 60;
    ++*v105;
  }
  v119 = *v108;
  if ( (unsigned int)v119 >= v106->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v101,
      61,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
    v106 = v101->fields._items;
    v104 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v101->fields._version;
    if ( !v106 )
      goto LABEL_692;
  }
  else
  {
    *v108 = v119 + 1;
    *((_DWORD *)v106->m_Items + v119) = 61;
    ++*v105;
  }
  v120 = *v108;
  if ( (unsigned int)v120 >= v106->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v101,
      62,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
    v106 = v101->fields._items;
    v104 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v101->fields._version;
    if ( !v106 )
      goto LABEL_692;
  }
  else
  {
    *v108 = v120 + 1;
    *((_DWORD *)v106->m_Items + v120) = 62;
    ++*v105;
  }
  v121 = *v108;
  if ( (unsigned int)v121 >= v106->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v101,
      63,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
    v106 = v101->fields._items;
    v104 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v101->fields._version;
    if ( !v106 )
      goto LABEL_692;
  }
  else
  {
    *v108 = v121 + 1;
    *((_DWORD *)v106->m_Items + v121) = 63;
    ++*v105;
  }
  v122 = *v108;
  if ( (unsigned int)v122 >= v106->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v101,
      64,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v104[4] + 192LL) + 112LL));
  }
  else
  {
    *v108 = v122 + 1;
    *((_DWORD *)v106->m_Items + v122) = 64;
  }
  static_fields = FilterKindList_TypeInfo->static_fields;
  static_fields->ClassFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v101;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->ClassFilterKindList, (int32_t)v101, v102, v103);
  v124 = (System_Collections_Generic_List_T__o *)sub_1B86604(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v124,
    (const MethodInfo_35E190C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v124 )
    goto LABEL_692;
  v127 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  v128 = &v124->fields._version;
  ++v124->fields._version;
  v129 = v124->fields._items;
  v131 = &v124->fields._size;
  v130 = v124->fields._size;
  if ( !v129 )
    goto LABEL_692;
  if ( (unsigned int)v130 >= v129->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v124,
      0,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
    v129 = v124->fields._items;
    v127 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v124->fields._version;
    if ( !v129 )
      goto LABEL_692;
  }
  else
  {
    *v131 = v130 + 1;
    *((_DWORD *)v129->m_Items + v130) = 0;
    ++*v128;
  }
  v132 = *v131;
  if ( (unsigned int)v132 >= v129->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v124,
      1,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
    v129 = v124->fields._items;
    v127 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v124->fields._version;
    if ( !v129 )
      goto LABEL_692;
  }
  else
  {
    *v131 = v132 + 1;
    *((_DWORD *)v129->m_Items + v132) = 1;
    ++*v128;
  }
  v133 = *v131;
  if ( (unsigned int)v133 >= v129->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v124,
      2,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
    v129 = v124->fields._items;
    v127 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v124->fields._version;
    if ( !v129 )
      goto LABEL_692;
  }
  else
  {
    *v131 = v133 + 1;
    *((_DWORD *)v129->m_Items + v133) = 2;
    ++*v128;
  }
  v134 = *v131;
  if ( (unsigned int)v134 >= v129->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v124,
      3,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
    v129 = v124->fields._items;
    v127 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v124->fields._version;
    if ( !v129 )
      goto LABEL_692;
  }
  else
  {
    *v131 = v134 + 1;
    *((_DWORD *)v129->m_Items + v134) = 3;
    ++*v128;
  }
  v135 = *v131;
  if ( (unsigned int)v135 >= v129->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v124,
      4,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
    v129 = v124->fields._items;
    v127 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v124->fields._version;
    if ( !v129 )
      goto LABEL_692;
  }
  else
  {
    *v131 = v135 + 1;
    *((_DWORD *)v129->m_Items + v135) = 4;
    ++*v128;
  }
  v136 = *v131;
  if ( (unsigned int)v136 >= v129->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v124,
      5,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
    v129 = v124->fields._items;
    v127 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v124->fields._version;
    if ( !v129 )
      goto LABEL_692;
  }
  else
  {
    *v131 = v136 + 1;
    *((_DWORD *)v129->m_Items + v136) = 5;
    ++*v128;
  }
  v137 = *v131;
  if ( (unsigned int)v137 >= v129->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v124,
      6,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
    v129 = v124->fields._items;
    v127 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v124->fields._version;
    if ( !v129 )
      goto LABEL_692;
  }
  else
  {
    *v131 = v137 + 1;
    *((_DWORD *)v129->m_Items + v137) = 6;
    ++*v128;
  }
  v138 = *v131;
  if ( (unsigned int)v138 >= v129->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v124,
      58,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
    v129 = v124->fields._items;
    v127 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v124->fields._version;
    if ( !v129 )
      goto LABEL_692;
  }
  else
  {
    *v131 = v138 + 1;
    *((_DWORD *)v129->m_Items + v138) = 58;
    ++*v128;
  }
  v139 = *v131;
  if ( (unsigned int)v139 >= v129->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v124,
      59,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
    v129 = v124->fields._items;
    v127 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v124->fields._version;
    if ( !v129 )
      goto LABEL_692;
  }
  else
  {
    *v131 = v139 + 1;
    *((_DWORD *)v129->m_Items + v139) = 59;
    ++*v128;
  }
  v140 = *v131;
  if ( (unsigned int)v140 >= v129->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v124,
      60,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
    v129 = v124->fields._items;
    v127 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v124->fields._version;
    if ( !v129 )
      goto LABEL_692;
  }
  else
  {
    *v131 = v140 + 1;
    *((_DWORD *)v129->m_Items + v140) = 60;
    ++*v128;
  }
  v141 = *v131;
  if ( (unsigned int)v141 >= v129->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v124,
      61,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
    v129 = v124->fields._items;
    v127 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v124->fields._version;
    if ( !v129 )
      goto LABEL_692;
  }
  else
  {
    *v131 = v141 + 1;
    *((_DWORD *)v129->m_Items + v141) = 61;
    ++*v128;
  }
  v142 = *v131;
  if ( (unsigned int)v142 >= v129->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v124,
      62,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
    v129 = v124->fields._items;
    v127 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v124->fields._version;
    if ( !v129 )
      goto LABEL_692;
  }
  else
  {
    *v131 = v142 + 1;
    *((_DWORD *)v129->m_Items + v142) = 62;
    ++*v128;
  }
  v143 = *v131;
  if ( (unsigned int)v143 >= v129->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v124,
      63,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
    v129 = v124->fields._items;
    v127 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v124->fields._version;
    if ( !v129 )
      goto LABEL_692;
  }
  else
  {
    *v131 = v143 + 1;
    *((_DWORD *)v129->m_Items + v143) = 63;
    ++*v128;
  }
  v144 = *v131;
  if ( (unsigned int)v144 >= v129->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v124,
      64,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v127[4] + 192LL) + 112LL));
  }
  else
  {
    *v131 = v144 + 1;
    *((_DWORD *)v129->m_Items + v144) = 64;
  }
  v145 = FilterKindList_TypeInfo->static_fields;
  v145->ClassFilterKindListForExchangeSvtCoin = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v124;
  sub_1B8635C((CGThumbnailListItem_o *)&v145->ClassFilterKindListForExchangeSvtCoin, (int32_t)v124, v125, v126);
  v146 = (System_Collections_Generic_List_T__o *)sub_1B86604(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v146,
    (const MethodInfo_35E190C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v146 )
    goto LABEL_692;
  v149 = v146->fields._items;
  v150 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v146->fields._version;
  if ( !v149 )
    goto LABEL_692;
  v151 = v146->fields._size;
  if ( (unsigned int)v151 >= v149->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v146,
      0,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v150[4] + 192LL) + 112LL));
    v149 = v146->fields._items;
    v150 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v146->fields._version;
    if ( !v149 )
      goto LABEL_692;
  }
  else
  {
    v146->fields._size = v151 + 1;
    *((_DWORD *)v149->m_Items + v151) = 0;
    ++v146->fields._version;
  }
  v152 = v146->fields._size;
  if ( (unsigned int)v152 >= v149->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v146,
      1,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v150[4] + 192LL) + 112LL));
    v149 = v146->fields._items;
    v150 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v146->fields._version;
    if ( !v149 )
      goto LABEL_692;
  }
  else
  {
    v146->fields._size = v152 + 1;
    *((_DWORD *)v149->m_Items + v152) = 1;
    ++v146->fields._version;
  }
  v153 = v146->fields._size;
  if ( (unsigned int)v153 >= v149->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v146,
      2,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v150[4] + 192LL) + 112LL));
  }
  else
  {
    v146->fields._size = v153 + 1;
    *((_DWORD *)v149->m_Items + v153) = 2;
  }
  v154 = FilterKindList_TypeInfo->static_fields;
  v154->ThreeKnightsFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v146;
  sub_1B8635C((CGThumbnailListItem_o *)&v154->ThreeKnightsFilterKindList, (int32_t)v146, v147, v148);
  v155 = (System_Collections_Generic_List_T__o *)sub_1B86604(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v155,
    (const MethodInfo_35E190C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v155 )
    goto LABEL_692;
  v158 = v155->fields._items;
  v159 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v155->fields._version;
  if ( !v158 )
    goto LABEL_692;
  v160 = v155->fields._size;
  if ( (unsigned int)v160 >= v158->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v155,
      3,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v159[4] + 192LL) + 112LL));
    v158 = v155->fields._items;
    v159 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v155->fields._version;
    if ( !v158 )
      goto LABEL_692;
  }
  else
  {
    v155->fields._size = v160 + 1;
    *((_DWORD *)v158->m_Items + v160) = 3;
    ++v155->fields._version;
  }
  v161 = v155->fields._size;
  if ( (unsigned int)v161 >= v158->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v155,
      4,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v159[4] + 192LL) + 112LL));
    v158 = v155->fields._items;
    v159 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v155->fields._version;
    if ( !v158 )
      goto LABEL_692;
  }
  else
  {
    v155->fields._size = v161 + 1;
    *((_DWORD *)v158->m_Items + v161) = 4;
    ++v155->fields._version;
  }
  v162 = v155->fields._size;
  if ( (unsigned int)v162 >= v158->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v155,
      5,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v159[4] + 192LL) + 112LL));
    v158 = v155->fields._items;
    v159 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v155->fields._version;
    if ( !v158 )
      goto LABEL_692;
  }
  else
  {
    v155->fields._size = v162 + 1;
    *((_DWORD *)v158->m_Items + v162) = 5;
    ++v155->fields._version;
  }
  v163 = v155->fields._size;
  if ( (unsigned int)v163 >= v158->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v155,
      6,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v159[4] + 192LL) + 112LL));
  }
  else
  {
    v155->fields._size = v163 + 1;
    *((_DWORD *)v158->m_Items + v163) = 6;
  }
  v164 = FilterKindList_TypeInfo->static_fields;
  v164->FourCavalryFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v155;
  sub_1B8635C((CGThumbnailListItem_o *)&v164->FourCavalryFilterKindList, (int32_t)v155, v156, v157);
  v165 = (System_Collections_Generic_List_T__o *)sub_1B86604(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v165,
    (const MethodInfo_35E190C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v165 )
    goto LABEL_692;
  v168 = v165->fields._items;
  v169 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v165->fields._version;
  if ( !v168 )
    goto LABEL_692;
  v170 = v165->fields._size;
  if ( (unsigned int)v170 >= v168->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v165,
      58,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v169[4] + 192LL) + 112LL));
    v168 = v165->fields._items;
    v169 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v165->fields._version;
    if ( !v168 )
      goto LABEL_692;
  }
  else
  {
    v165->fields._size = v170 + 1;
    *((_DWORD *)v168->m_Items + v170) = 58;
    ++v165->fields._version;
  }
  v171 = v165->fields._size;
  if ( (unsigned int)v171 >= v168->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v165,
      59,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v169[4] + 192LL) + 112LL));
    v168 = v165->fields._items;
    v169 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v165->fields._version;
    if ( !v168 )
      goto LABEL_692;
  }
  else
  {
    v165->fields._size = v171 + 1;
    *((_DWORD *)v168->m_Items + v171) = 59;
    ++v165->fields._version;
  }
  v172 = v165->fields._size;
  if ( (unsigned int)v172 >= v168->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v165,
      60,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v169[4] + 192LL) + 112LL));
  }
  else
  {
    v165->fields._size = v172 + 1;
    *((_DWORD *)v168->m_Items + v172) = 60;
  }
  v173 = FilterKindList_TypeInfo->static_fields;
  v173->ClassExtra1FilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v165;
  sub_1B8635C((CGThumbnailListItem_o *)&v173->ClassExtra1FilterKindList, (int32_t)v165, v166, v167);
  v174 = (System_Collections_Generic_List_T__o *)sub_1B86604(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v174,
    (const MethodInfo_35E190C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v174 )
    goto LABEL_692;
  v177 = v174->fields._items;
  v178 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v174->fields._version;
  if ( !v177 )
    goto LABEL_692;
  v179 = v174->fields._size;
  if ( (unsigned int)v179 >= v177->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v174,
      57,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v178[4] + 192LL) + 112LL));
    v177 = v174->fields._items;
    v178 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v174->fields._version;
    if ( !v177 )
      goto LABEL_692;
  }
  else
  {
    v174->fields._size = v179 + 1;
    *((_DWORD *)v177->m_Items + v179) = 57;
    ++v174->fields._version;
  }
  v180 = v174->fields._size;
  if ( (unsigned int)v180 >= v177->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v174,
      58,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v178[4] + 192LL) + 112LL));
    v177 = v174->fields._items;
    v178 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v174->fields._version;
    if ( !v177 )
      goto LABEL_692;
  }
  else
  {
    v174->fields._size = v180 + 1;
    *((_DWORD *)v177->m_Items + v180) = 58;
    ++v174->fields._version;
  }
  v181 = v174->fields._size;
  if ( (unsigned int)v181 >= v177->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v174,
      59,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v178[4] + 192LL) + 112LL));
    v177 = v174->fields._items;
    v178 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v174->fields._version;
    if ( !v177 )
      goto LABEL_692;
  }
  else
  {
    v174->fields._size = v181 + 1;
    *((_DWORD *)v177->m_Items + v181) = 59;
    ++v174->fields._version;
  }
  v182 = v174->fields._size;
  if ( (unsigned int)v182 >= v177->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v174,
      60,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v178[4] + 192LL) + 112LL));
  }
  else
  {
    v174->fields._size = v182 + 1;
    *((_DWORD *)v177->m_Items + v182) = 60;
  }
  v183 = FilterKindList_TypeInfo->static_fields;
  v183->ClassExtra1InShielderFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v174;
  sub_1B8635C((CGThumbnailListItem_o *)&v183->ClassExtra1InShielderFilterKindList, (int32_t)v174, v175, v176);
  v184 = (System_Collections_Generic_List_T__o *)sub_1B86604(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v184,
    (const MethodInfo_35E190C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v184 )
    goto LABEL_692;
  v187 = v184->fields._items;
  v188 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v184->fields._version;
  if ( !v187 )
    goto LABEL_692;
  v189 = v184->fields._size;
  if ( (unsigned int)v189 >= v187->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v184,
      61,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v188[4] + 192LL) + 112LL));
    v187 = v184->fields._items;
    v188 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v184->fields._version;
    if ( !v187 )
      goto LABEL_692;
  }
  else
  {
    v184->fields._size = v189 + 1;
    *((_DWORD *)v187->m_Items + v189) = 61;
    ++v184->fields._version;
  }
  v190 = v184->fields._size;
  if ( (unsigned int)v190 >= v187->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v184,
      62,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v188[4] + 192LL) + 112LL));
    v187 = v184->fields._items;
    v188 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v184->fields._version;
    if ( !v187 )
      goto LABEL_692;
  }
  else
  {
    v184->fields._size = v190 + 1;
    *((_DWORD *)v187->m_Items + v190) = 62;
    ++v184->fields._version;
  }
  v191 = v184->fields._size;
  if ( (unsigned int)v191 >= v187->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v184,
      63,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v188[4] + 192LL) + 112LL));
    v187 = v184->fields._items;
    v188 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v184->fields._version;
    if ( !v187 )
      goto LABEL_692;
  }
  else
  {
    v184->fields._size = v191 + 1;
    *((_DWORD *)v187->m_Items + v191) = 63;
    ++v184->fields._version;
  }
  v192 = v184->fields._size;
  if ( (unsigned int)v192 >= v187->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v184,
      64,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v188[4] + 192LL) + 112LL));
  }
  else
  {
    v184->fields._size = v192 + 1;
    *((_DWORD *)v187->m_Items + v192) = 64;
  }
  v193 = FilterKindList_TypeInfo->static_fields;
  v193->ClassExtra2FilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v184;
  sub_1B8635C((CGThumbnailListItem_o *)&v193->ClassExtra2FilterKindList, (int32_t)v184, v185, v186);
  v194 = (System_Collections_Generic_List_T__o *)sub_1B86604(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v194,
    (const MethodInfo_35E190C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v194 )
    goto LABEL_692;
  v197 = v194->fields._items;
  v198 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v194->fields._version;
  if ( !v197 )
    goto LABEL_692;
  v199 = v194->fields._size;
  if ( (unsigned int)v199 >= v197->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v194,
      65,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v198[4] + 192LL) + 112LL));
    v197 = v194->fields._items;
    v198 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v194->fields._version;
    if ( !v197 )
      goto LABEL_692;
  }
  else
  {
    v194->fields._size = v199 + 1;
    *((_DWORD *)v197->m_Items + v199) = 65;
    ++v194->fields._version;
  }
  v200 = v194->fields._size;
  if ( (unsigned int)v200 >= v197->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v194,
      66,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v198[4] + 192LL) + 112LL));
    v197 = v194->fields._items;
    v198 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v194->fields._version;
    if ( !v197 )
      goto LABEL_692;
  }
  else
  {
    v194->fields._size = v200 + 1;
    *((_DWORD *)v197->m_Items + v200) = 66;
    ++v194->fields._version;
  }
  v201 = v194->fields._size;
  if ( (unsigned int)v201 >= v197->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v194,
      67,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v198[4] + 192LL) + 112LL));
    v197 = v194->fields._items;
    v198 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v194->fields._version;
    if ( !v197 )
      goto LABEL_692;
  }
  else
  {
    v194->fields._size = v201 + 1;
    *((_DWORD *)v197->m_Items + v201) = 67;
    ++v194->fields._version;
  }
  v202 = v194->fields._size;
  if ( (unsigned int)v202 >= v197->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v194,
      68,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v198[4] + 192LL) + 112LL));
  }
  else
  {
    v194->fields._size = v202 + 1;
    *((_DWORD *)v197->m_Items + v202) = 68;
  }
  v203 = FilterKindList_TypeInfo->static_fields;
  v203->ClassGroupFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v194;
  sub_1B8635C((CGThumbnailListItem_o *)&v203->ClassGroupFilterKindList, (int32_t)v194, v195, v196);
  v204 = (System_Collections_Generic_List_T__o *)sub_1B86604(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v204,
    (const MethodInfo_35E190C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v204 )
    goto LABEL_692;
  v207 = v204->fields._items;
  v208 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v204->fields._version;
  if ( !v207 )
    goto LABEL_692;
  v209 = v204->fields._size;
  if ( (unsigned int)v209 >= v207->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v204,
      67,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v208[4] + 192LL) + 112LL));
    v207 = v204->fields._items;
    v208 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v204->fields._version;
    if ( !v207 )
      goto LABEL_692;
  }
  else
  {
    v204->fields._size = v209 + 1;
    *((_DWORD *)v207->m_Items + v209) = 67;
    ++v204->fields._version;
  }
  v210 = v204->fields._size;
  if ( (unsigned int)v210 >= v207->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v204,
      68,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v208[4] + 192LL) + 112LL));
  }
  else
  {
    v204->fields._size = v210 + 1;
    *((_DWORD *)v207->m_Items + v210) = 68;
  }
  v211 = FilterKindList_TypeInfo->static_fields;
  v211->ClassGroupExtraFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v204;
  sub_1B8635C((CGThumbnailListItem_o *)&v211->ClassGroupExtraFilterKindList, (int32_t)v204, v205, v206);
  v212 = (System_Collections_Generic_List_T__o *)sub_1B86604(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v212,
    (const MethodInfo_35E190C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v212 )
    goto LABEL_692;
  v215 = v212->fields._items;
  v216 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v212->fields._version;
  if ( !v215 )
    goto LABEL_692;
  v217 = v212->fields._size;
  if ( (unsigned int)v217 >= v215->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v212,
      44,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v216[4] + 192LL) + 112LL));
    v215 = v212->fields._items;
    v216 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v212->fields._version;
    if ( !v215 )
      goto LABEL_692;
  }
  else
  {
    v212->fields._size = v217 + 1;
    *((_DWORD *)v215->m_Items + v217) = 44;
    ++v212->fields._version;
  }
  v218 = v212->fields._size;
  if ( (unsigned int)v218 >= v215->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v212,
      43,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v216[4] + 192LL) + 112LL));
    v215 = v212->fields._items;
    v216 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v212->fields._version;
    if ( !v215 )
      goto LABEL_692;
  }
  else
  {
    v212->fields._size = v218 + 1;
    *((_DWORD *)v215->m_Items + v218) = 43;
    ++v212->fields._version;
  }
  v219 = v212->fields._size;
  if ( (unsigned int)v219 >= v215->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v212,
      42,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v216[4] + 192LL) + 112LL));
  }
  else
  {
    v212->fields._size = v219 + 1;
    *((_DWORD *)v215->m_Items + v219) = 42;
  }
  v220 = FilterKindList_TypeInfo->static_fields;
  v220->NpTypeFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v212;
  sub_1B8635C((CGThumbnailListItem_o *)&v220->NpTypeFilterKindList, (int32_t)v212, v213, v214);
  v221 = (System_Collections_Generic_List_T__o *)sub_1B86604(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v221,
    (const MethodInfo_35E190C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v221 )
    goto LABEL_692;
  v224 = v221->fields._items;
  v225 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v221->fields._version;
  if ( !v224 )
    goto LABEL_692;
  v226 = v221->fields._size;
  if ( (unsigned int)v226 >= v224->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v221,
      46,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v225[4] + 192LL) + 112LL));
    v224 = v221->fields._items;
    v225 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v221->fields._version;
    if ( !v224 )
      goto LABEL_692;
  }
  else
  {
    v221->fields._size = v226 + 1;
    *((_DWORD *)v224->m_Items + v226) = 46;
    ++v221->fields._version;
  }
  v227 = v221->fields._size;
  if ( (unsigned int)v227 >= v224->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v221,
      45,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v225[4] + 192LL) + 112LL));
    v224 = v221->fields._items;
    v225 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v221->fields._version;
    if ( !v224 )
      goto LABEL_692;
  }
  else
  {
    v221->fields._size = v227 + 1;
    *((_DWORD *)v224->m_Items + v227) = 45;
    ++v221->fields._version;
  }
  v228 = v221->fields._size;
  if ( (unsigned int)v228 >= v224->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v221,
      47,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v225[4] + 192LL) + 112LL));
  }
  else
  {
    v221->fields._size = v228 + 1;
    *((_DWORD *)v224->m_Items + v228) = 47;
  }
  v229 = FilterKindList_TypeInfo->static_fields;
  v229->NpEffectFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v221;
  sub_1B8635C((CGThumbnailListItem_o *)&v229->NpEffectFilterKindList, (int32_t)v221, v222, v223);
  v230 = (System_Collections_Generic_List_T__o *)sub_1B86604(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v230,
    (const MethodInfo_35E190C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v230 )
    goto LABEL_692;
  v233 = v230->fields._items;
  v234 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v230->fields._version;
  if ( !v233 )
    goto LABEL_692;
  v235 = v230->fields._size;
  if ( (unsigned int)v235 >= v233->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v230,
      48,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v234[4] + 192LL) + 112LL));
    v233 = v230->fields._items;
    v234 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v230->fields._version;
    if ( !v233 )
      goto LABEL_692;
  }
  else
  {
    v230->fields._size = v235 + 1;
    *((_DWORD *)v233->m_Items + v235) = 48;
    ++v230->fields._version;
  }
  v236 = v230->fields._size;
  if ( (unsigned int)v236 >= v233->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v230,
      8,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v234[4] + 192LL) + 112LL));
    v233 = v230->fields._items;
    v234 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v230->fields._version;
    if ( !v233 )
      goto LABEL_692;
  }
  else
  {
    v230->fields._size = v236 + 1;
    *((_DWORD *)v233->m_Items + v236) = 8;
    ++v230->fields._version;
  }
  v237 = v230->fields._size;
  if ( (unsigned int)v237 >= v233->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v230,
      9,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v234[4] + 192LL) + 112LL));
  }
  else
  {
    v230->fields._size = v237 + 1;
    *((_DWORD *)v233->m_Items + v237) = 9;
  }
  v238 = FilterKindList_TypeInfo->static_fields;
  v238->ServantTypeFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v230;
  sub_1B8635C((CGThumbnailListItem_o *)&v238->ServantTypeFilterKindList, (int32_t)v230, v231, v232);
  v239 = (System_Collections_Generic_List_T__o *)sub_1B86604(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v239,
    (const MethodInfo_35E190C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v239 )
    goto LABEL_692;
  v242 = v239->fields._items;
  v243 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v239->fields._version;
  if ( !v242 )
    goto LABEL_692;
  v244 = v239->fields._size;
  if ( (unsigned int)v244 >= v242->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v239,
      21,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v243[4] + 192LL) + 112LL));
    v242 = v239->fields._items;
    v243 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v239->fields._version;
    if ( !v242 )
      goto LABEL_692;
  }
  else
  {
    v239->fields._size = v244 + 1;
    *((_DWORD *)v242->m_Items + v244) = 21;
    ++v239->fields._version;
  }
  v245 = v239->fields._size;
  if ( (unsigned int)v245 >= v242->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v239,
      22,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v243[4] + 192LL) + 112LL));
    v242 = v239->fields._items;
    v243 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v239->fields._version;
    if ( !v242 )
      goto LABEL_692;
  }
  else
  {
    v239->fields._size = v245 + 1;
    *((_DWORD *)v242->m_Items + v245) = 22;
    ++v239->fields._version;
  }
  v246 = v239->fields._size;
  if ( (unsigned int)v246 >= v242->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v239,
      23,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v243[4] + 192LL) + 112LL));
    v242 = v239->fields._items;
    v243 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v239->fields._version;
    if ( !v242 )
      goto LABEL_692;
  }
  else
  {
    v239->fields._size = v246 + 1;
    *((_DWORD *)v242->m_Items + v246) = 23;
    ++v239->fields._version;
  }
  v247 = v239->fields._size;
  if ( (unsigned int)v247 >= v242->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v239,
      24,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v243[4] + 192LL) + 112LL));
    v242 = v239->fields._items;
    v243 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v239->fields._version;
    if ( !v242 )
      goto LABEL_692;
  }
  else
  {
    v239->fields._size = v247 + 1;
    *((_DWORD *)v242->m_Items + v247) = 24;
    ++v239->fields._version;
  }
  v248 = v239->fields._size;
  if ( (unsigned int)v248 >= v242->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v239,
      25,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v243[4] + 192LL) + 112LL));
    v242 = v239->fields._items;
    v243 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v239->fields._version;
    if ( !v242 )
      goto LABEL_692;
  }
  else
  {
    v239->fields._size = v248 + 1;
    *((_DWORD *)v242->m_Items + v248) = 25;
    ++v239->fields._version;
  }
  v249 = v239->fields._size;
  if ( (unsigned int)v249 >= v242->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v239,
      26,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v243[4] + 192LL) + 112LL));
    v242 = v239->fields._items;
    v243 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v239->fields._version;
    if ( !v242 )
      goto LABEL_692;
  }
  else
  {
    v239->fields._size = v249 + 1;
    *((_DWORD *)v242->m_Items + v249) = 26;
    ++v239->fields._version;
  }
  v250 = v239->fields._size;
  if ( (unsigned int)v250 >= v242->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v239,
      27,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v243[4] + 192LL) + 112LL));
  }
  else
  {
    v239->fields._size = v250 + 1;
    *((_DWORD *)v242->m_Items + v250) = 27;
  }
  v251 = FilterKindList_TypeInfo->static_fields;
  v251->CombineBaseServantFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v239;
  sub_1B8635C((CGThumbnailListItem_o *)&v251->CombineBaseServantFilterKindList, (int32_t)v239, v240, v241);
  v252 = (System_Collections_Generic_List_T__o *)sub_1B86604(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v252,
    (const MethodInfo_35E190C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v252 )
    goto LABEL_692;
  v255 = v252->fields._items;
  v256 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v252->fields._version;
  if ( !v255 )
    goto LABEL_692;
  v257 = v252->fields._size;
  if ( (unsigned int)v257 >= v255->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v252,
      28,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v256[4] + 192LL) + 112LL));
    v255 = v252->fields._items;
    v256 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v252->fields._version;
    if ( !v255 )
      goto LABEL_692;
  }
  else
  {
    v252->fields._size = v257 + 1;
    *((_DWORD *)v255->m_Items + v257) = 28;
    ++v252->fields._version;
  }
  v258 = v252->fields._size;
  if ( (unsigned int)v258 >= v255->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v252,
      29,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v256[4] + 192LL) + 112LL));
  }
  else
  {
    v252->fields._size = v258 + 1;
    *((_DWORD *)v255->m_Items + v258) = 29;
  }
  v259 = FilterKindList_TypeInfo->static_fields;
  v259->CombineMaterialFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v252;
  sub_1B8635C((CGThumbnailListItem_o *)&v259->CombineMaterialFilterKindList, (int32_t)v252, v253, v254);
  v260 = (System_Collections_Generic_List_T__o *)sub_1B86604(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v260,
    (const MethodInfo_35E190C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v260 )
    goto LABEL_692;
  v263 = v260->fields._items;
  v264 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v260->fields._version;
  if ( !v263 )
    goto LABEL_692;
  v265 = v260->fields._size;
  if ( (unsigned int)v265 >= v263->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v260,
      10,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v264[4] + 192LL) + 112LL));
    v263 = v260->fields._items;
    v264 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v260->fields._version;
    if ( !v263 )
      goto LABEL_692;
  }
  else
  {
    v260->fields._size = v265 + 1;
    *((_DWORD *)v263->m_Items + v265) = 10;
    ++v260->fields._version;
  }
  v266 = v260->fields._size;
  if ( (unsigned int)v266 >= v263->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v260,
      11,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v264[4] + 192LL) + 112LL));
    v263 = v260->fields._items;
    v264 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v260->fields._version;
    if ( !v263 )
      goto LABEL_692;
  }
  else
  {
    v260->fields._size = v266 + 1;
    *((_DWORD *)v263->m_Items + v266) = 11;
    ++v260->fields._version;
  }
  v267 = v260->fields._size;
  if ( (unsigned int)v267 >= v263->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v260,
      12,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v264[4] + 192LL) + 112LL));
  }
  else
  {
    v260->fields._size = v267 + 1;
    *((_DWORD *)v263->m_Items + v267) = 12;
  }
  v268 = FilterKindList_TypeInfo->static_fields;
  v268->CollectionStateFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v260;
  sub_1B8635C((CGThumbnailListItem_o *)&v268->CollectionStateFilterKindList, (int32_t)v260, v261, v262);
  v269 = (System_Collections_Generic_List_T__o *)sub_1B86604(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v269,
    (const MethodInfo_35E190C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v269 )
    goto LABEL_692;
  v272 = v269->fields._items;
  v273 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v269->fields._version;
  if ( !v272 )
    goto LABEL_692;
  v274 = v269->fields._size;
  if ( (unsigned int)v274 >= v272->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v269,
      11,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v273[4] + 192LL) + 112LL));
    v272 = v269->fields._items;
    v273 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v269->fields._version;
    if ( !v272 )
      goto LABEL_692;
  }
  else
  {
    v269->fields._size = v274 + 1;
    *((_DWORD *)v272->m_Items + v274) = 11;
    ++v269->fields._version;
  }
  v275 = v269->fields._size;
  if ( (unsigned int)v275 >= v272->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v269,
      12,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v273[4] + 192LL) + 112LL));
  }
  else
  {
    v269->fields._size = v275 + 1;
    *((_DWORD *)v272->m_Items + v275) = 12;
  }
  v276 = FilterKindList_TypeInfo->static_fields;
  v276->BonusSelectCollectionStateFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v269;
  sub_1B8635C((CGThumbnailListItem_o *)&v276->BonusSelectCollectionStateFilterKindList, (int32_t)v269, v270, v271);
  v277 = (System_Collections_Generic_List_T__o *)sub_1B86604(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v277,
    (const MethodInfo_35E190C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v277 )
    goto LABEL_692;
  v280 = v277->fields._items;
  v281 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v277->fields._version;
  if ( !v280 )
    goto LABEL_692;
  v282 = v277->fields._size;
  if ( (unsigned int)v282 >= v280->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v277,
      52,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v281[4] + 192LL) + 112LL));
    v280 = v277->fields._items;
    v281 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v277->fields._version;
    if ( !v280 )
      goto LABEL_692;
  }
  else
  {
    v277->fields._size = v282 + 1;
    *((_DWORD *)v280->m_Items + v282) = 52;
    ++v277->fields._version;
  }
  v283 = v277->fields._size;
  if ( (unsigned int)v283 >= v280->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v277,
      53,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v281[4] + 192LL) + 112LL));
  }
  else
  {
    v277->fields._size = v283 + 1;
    *((_DWORD *)v280->m_Items + v283) = 53;
  }
  v284 = (CGThumbnailListItem_o *)FilterKindList_TypeInfo->static_fields;
  v284[1].klass = (CGThumbnailListItem_c *)v277;
  sub_1B8635C(v284 + 1, (int32_t)v277, v278, v279);
  v285 = (System_Collections_Generic_List_T__o *)sub_1B86604(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v285,
    (const MethodInfo_35E190C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v285 )
    goto LABEL_692;
  v288 = v285->fields._items;
  v289 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v285->fields._version;
  if ( !v288 )
    goto LABEL_692;
  v290 = v285->fields._size;
  if ( (unsigned int)v290 >= v288->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v285,
      50,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v289[4] + 192LL) + 112LL));
    v288 = v285->fields._items;
    v289 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v285->fields._version;
    if ( !v288 )
      goto LABEL_692;
  }
  else
  {
    v285->fields._size = v290 + 1;
    *((_DWORD *)v288->m_Items + v290) = 50;
    ++v285->fields._version;
  }
  v291 = v285->fields._size;
  if ( (unsigned int)v291 >= v288->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v285,
      51,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v289[4] + 192LL) + 112LL));
  }
  else
  {
    v285->fields._size = v291 + 1;
    *((_DWORD *)v288->m_Items + v291) = 51;
  }
  v292 = FilterKindList_TypeInfo->static_fields;
  v292->ServantEffectApplySubjectFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v285;
  sub_1B8635C((CGThumbnailListItem_o *)&v292->ServantEffectApplySubjectFilterKindList, (int32_t)v285, v286, v287);
  v293 = (System_Collections_Generic_List_T__o *)sub_1B86604(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v293,
    (const MethodInfo_35E190C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v293 )
    goto LABEL_692;
  v296 = v293->fields._items;
  v297 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v293->fields._version;
  if ( !v296 )
    goto LABEL_692;
  v298 = v293->fields._size;
  if ( (unsigned int)v298 >= v296->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v293,
      69,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v297[4] + 192LL) + 112LL));
    v296 = v293->fields._items;
    v297 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v293->fields._version;
    if ( !v296 )
      goto LABEL_692;
  }
  else
  {
    v293->fields._size = v298 + 1;
    *((_DWORD *)v296->m_Items + v298) = 69;
    ++v293->fields._version;
  }
  v299 = v293->fields._size;
  if ( (unsigned int)v299 >= v296->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v293,
      70,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v297[4] + 192LL) + 112LL));
    v296 = v293->fields._items;
    v297 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v293->fields._version;
    if ( !v296 )
      goto LABEL_692;
  }
  else
  {
    v293->fields._size = v299 + 1;
    *((_DWORD *)v296->m_Items + v299) = 70;
    ++v293->fields._version;
  }
  v300 = v293->fields._size;
  if ( (unsigned int)v300 >= v296->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v293,
      71,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v297[4] + 192LL) + 112LL));
  }
  else
  {
    v293->fields._size = v300 + 1;
    *((_DWORD *)v296->m_Items + v300) = 71;
  }
  v301 = FilterKindList_TypeInfo->static_fields;
  v301->ServantSummonCategoryFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v293;
  sub_1B8635C((CGThumbnailListItem_o *)&v301->ServantSummonCategoryFilterKindList, (int32_t)v293, v294, v295);
  v302 = (System_Collections_Generic_List_T__o *)sub_1B86604(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v302,
    (const MethodInfo_35E190C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v302 )
    goto LABEL_692;
  v305 = v302->fields._items;
  v306 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v302->fields._version;
  if ( !v305 )
    goto LABEL_692;
  v307 = v302->fields._size;
  if ( (unsigned int)v307 >= v305->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v302,
      88,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v306[4] + 192LL) + 112LL));
    v305 = v302->fields._items;
    v306 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v302->fields._version;
    if ( !v305 )
      goto LABEL_692;
  }
  else
  {
    v302->fields._size = v307 + 1;
    *((_DWORD *)v305->m_Items + v307) = 88;
    ++v302->fields._version;
  }
  v308 = v302->fields._size;
  if ( (unsigned int)v308 >= v305->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v302,
      89,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v306[4] + 192LL) + 112LL));
    v305 = v302->fields._items;
    v306 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v302->fields._version;
    if ( !v305 )
      goto LABEL_692;
  }
  else
  {
    v302->fields._size = v308 + 1;
    *((_DWORD *)v305->m_Items + v308) = 89;
    ++v302->fields._version;
  }
  v309 = v302->fields._size;
  if ( (unsigned int)v309 >= v305->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v302,
      90,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v306[4] + 192LL) + 112LL));
  }
  else
  {
    v302->fields._size = v309 + 1;
    *((_DWORD *)v305->m_Items + v309) = 90;
  }
  v310 = FilterKindList_TypeInfo->static_fields;
  v310->ServantAttriFirstFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v302;
  sub_1B8635C((CGThumbnailListItem_o *)&v310->ServantAttriFirstFilterKindList, (int32_t)v302, v303, v304);
  v311 = (System_Collections_Generic_List_T__o *)sub_1B86604(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v311,
    (const MethodInfo_35E190C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v311 )
    goto LABEL_692;
  v314 = v311->fields._items;
  v315 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v311->fields._version;
  if ( !v314 )
    goto LABEL_692;
  v316 = v311->fields._size;
  if ( (unsigned int)v316 >= v314->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v311,
      91,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v315[4] + 192LL) + 112LL));
    v314 = v311->fields._items;
    v315 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v311->fields._version;
    if ( !v314 )
      goto LABEL_692;
  }
  else
  {
    v311->fields._size = v316 + 1;
    *((_DWORD *)v314->m_Items + v316) = 91;
    ++v311->fields._version;
  }
  v317 = v311->fields._size;
  if ( (unsigned int)v317 >= v314->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v311,
      92,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v315[4] + 192LL) + 112LL));
    v314 = v311->fields._items;
    v315 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v311->fields._version;
    if ( !v314 )
      goto LABEL_692;
  }
  else
  {
    v311->fields._size = v317 + 1;
    *((_DWORD *)v314->m_Items + v317) = 92;
    ++v311->fields._version;
  }
  v318 = v311->fields._size;
  if ( (unsigned int)v318 >= v314->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v311,
      93,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v315[4] + 192LL) + 112LL));
    v314 = v311->fields._items;
    v315 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v311->fields._version;
    if ( !v314 )
      goto LABEL_692;
  }
  else
  {
    v311->fields._size = v318 + 1;
    *((_DWORD *)v314->m_Items + v318) = 93;
    ++v311->fields._version;
  }
  v319 = v311->fields._size;
  if ( (unsigned int)v319 >= v314->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v311,
      94,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v315[4] + 192LL) + 112LL));
  }
  else
  {
    v311->fields._size = v319 + 1;
    *((_DWORD *)v314->m_Items + v319) = 94;
  }
  v320 = FilterKindList_TypeInfo->static_fields;
  v320->ServantAttriSecondFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v311;
  sub_1B8635C((CGThumbnailListItem_o *)&v320->ServantAttriSecondFilterKindList, (int32_t)v311, v312, v313);
  v321 = (System_Collections_Generic_List_T__o *)sub_1B86604(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v321,
    (const MethodInfo_35E190C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v321 )
    goto LABEL_692;
  v324 = v321->fields._items;
  v325 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v321->fields._version;
  if ( !v324 )
    goto LABEL_692;
  v326 = v321->fields._size;
  if ( (unsigned int)v326 >= v324->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v321,
      95,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v325[4] + 192LL) + 112LL));
    v324 = v321->fields._items;
    v325 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v321->fields._version;
    if ( !v324 )
      goto LABEL_692;
  }
  else
  {
    v321->fields._size = v326 + 1;
    *((_DWORD *)v324->m_Items + v326) = 95;
    ++v321->fields._version;
  }
  v327 = v321->fields._size;
  if ( (unsigned int)v327 >= v324->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v321,
      96,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v325[4] + 192LL) + 112LL));
    v324 = v321->fields._items;
    v325 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v321->fields._version;
    if ( !v324 )
      goto LABEL_692;
  }
  else
  {
    v321->fields._size = v327 + 1;
    *((_DWORD *)v324->m_Items + v327) = 96;
    ++v321->fields._version;
  }
  v328 = v321->fields._size;
  if ( (unsigned int)v328 >= v324->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v321,
      97,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v325[4] + 192LL) + 112LL));
    v324 = v321->fields._items;
    v325 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v321->fields._version;
    if ( !v324 )
      goto LABEL_692;
  }
  else
  {
    v321->fields._size = v328 + 1;
    *((_DWORD *)v324->m_Items + v328) = 97;
    ++v321->fields._version;
  }
  v329 = v321->fields._size;
  if ( (unsigned int)v329 >= v324->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v321,
      98,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v325[4] + 192LL) + 112LL));
    v324 = v321->fields._items;
    v325 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v321->fields._version;
    if ( !v324 )
      goto LABEL_692;
  }
  else
  {
    v321->fields._size = v329 + 1;
    *((_DWORD *)v324->m_Items + v329) = 98;
    ++v321->fields._version;
  }
  v330 = v321->fields._size;
  if ( (unsigned int)v330 >= v324->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v321,
      99,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v325[4] + 192LL) + 112LL));
  }
  else
  {
    v321->fields._size = v330 + 1;
    *((_DWORD *)v324->m_Items + v330) = 99;
  }
  v331 = FilterKindList_TypeInfo->static_fields;
  v331->ServantSubAttriFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v321;
  sub_1B8635C((CGThumbnailListItem_o *)&v331->ServantSubAttriFilterKindList, (int32_t)v321, v322, v323);
  v332 = (System_Collections_Generic_List_T__o *)sub_1B86604(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v332,
    (const MethodInfo_35E190C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v332 )
    goto LABEL_692;
  v335 = v332->fields._items;
  v336 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v332->fields._version;
  if ( !v335 )
    goto LABEL_692;
  v337 = v332->fields._size;
  if ( (unsigned int)v337 >= v335->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v332,
      38,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v336[4] + 192LL) + 112LL));
    v335 = v332->fields._items;
    v336 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v332->fields._version;
    if ( !v335 )
      goto LABEL_692;
  }
  else
  {
    v332->fields._size = v337 + 1;
    *((_DWORD *)v335->m_Items + v337) = 38;
    ++v332->fields._version;
  }
  v338 = v332->fields._size;
  if ( (unsigned int)v338 >= v335->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v332,
      37,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v336[4] + 192LL) + 112LL));
    v335 = v332->fields._items;
    v336 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v332->fields._version;
    if ( !v335 )
      goto LABEL_692;
  }
  else
  {
    v332->fields._size = v338 + 1;
    *((_DWORD *)v335->m_Items + v338) = 37;
    ++v332->fields._version;
  }
  v339 = v332->fields._size;
  if ( (unsigned int)v339 >= v335->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v332,
      36,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v336[4] + 192LL) + 112LL));
    v335 = v332->fields._items;
    v336 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v332->fields._version;
    if ( !v335 )
      goto LABEL_692;
  }
  else
  {
    v332->fields._size = v339 + 1;
    *((_DWORD *)v335->m_Items + v339) = 36;
    ++v332->fields._version;
  }
  v340 = v332->fields._size;
  if ( (unsigned int)v340 >= v335->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v332,
      35,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v336[4] + 192LL) + 112LL));
    v335 = v332->fields._items;
    v336 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v332->fields._version;
    if ( !v335 )
      goto LABEL_692;
  }
  else
  {
    v332->fields._size = v340 + 1;
    *((_DWORD *)v335->m_Items + v340) = 35;
    ++v332->fields._version;
  }
  v341 = v332->fields._size;
  if ( (unsigned int)v341 >= v335->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v332,
      34,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v336[4] + 192LL) + 112LL));
  }
  else
  {
    v332->fields._size = v341 + 1;
    *((_DWORD *)v335->m_Items + v341) = 34;
  }
  v342 = FilterKindList_TypeInfo->static_fields;
  v342->RarityFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v332;
  sub_1B8635C((CGThumbnailListItem_o *)&v342->RarityFilterKindList, (int32_t)v332, v333, v334);
  v343 = (System_Collections_Generic_List_T__o *)sub_1B86604(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v343,
    (const MethodInfo_35E190C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v343 )
    goto LABEL_692;
  v346 = v343->fields._items;
  v347 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v343->fields._version;
  if ( !v346 )
    goto LABEL_692;
  v348 = v343->fields._size;
  if ( (unsigned int)v348 >= v346->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v343,
      54,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v347[4] + 192LL) + 112LL));
    v346 = v343->fields._items;
    v347 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v343->fields._version;
    if ( !v346 )
      goto LABEL_692;
  }
  else
  {
    v343->fields._size = v348 + 1;
    *((_DWORD *)v346->m_Items + v348) = 54;
    ++v343->fields._version;
  }
  v349 = v343->fields._size;
  if ( (unsigned int)v349 >= v346->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v343,
      55,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v347[4] + 192LL) + 112LL));
    v346 = v343->fields._items;
    v347 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v343->fields._version;
    if ( !v346 )
      goto LABEL_692;
  }
  else
  {
    v343->fields._size = v349 + 1;
    *((_DWORD *)v346->m_Items + v349) = 55;
    ++v343->fields._version;
  }
  v350 = v343->fields._size;
  if ( (unsigned int)v350 >= v346->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v343,
      72,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v347[4] + 192LL) + 112LL));
    v346 = v343->fields._items;
    v347 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v343->fields._version;
    if ( !v346 )
      goto LABEL_692;
  }
  else
  {
    v343->fields._size = v350 + 1;
    *((_DWORD *)v346->m_Items + v350) = 72;
    ++v343->fields._version;
  }
  v351 = v343->fields._size;
  if ( (unsigned int)v351 >= v346->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v343,
      73,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v347[4] + 192LL) + 112LL));
    v346 = v343->fields._items;
    v347 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v343->fields._version;
    if ( !v346 )
      goto LABEL_692;
  }
  else
  {
    v343->fields._size = v351 + 1;
    *((_DWORD *)v346->m_Items + v351) = 73;
    ++v343->fields._version;
  }
  v352 = v343->fields._size;
  if ( (unsigned int)v352 >= v346->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v343,
      74,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v347[4] + 192LL) + 112LL));
    v346 = v343->fields._items;
    v347 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v343->fields._version;
    if ( !v346 )
      goto LABEL_692;
  }
  else
  {
    v343->fields._size = v352 + 1;
    *((_DWORD *)v346->m_Items + v352) = 74;
    ++v343->fields._version;
  }
  v353 = v343->fields._size;
  if ( (unsigned int)v353 >= v346->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v343,
      75,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v347[4] + 192LL) + 112LL));
    v346 = v343->fields._items;
    v347 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v343->fields._version;
    if ( !v346 )
      goto LABEL_692;
  }
  else
  {
    v343->fields._size = v353 + 1;
    *((_DWORD *)v346->m_Items + v353) = 75;
    ++v343->fields._version;
  }
  v354 = v343->fields._size;
  if ( (unsigned int)v354 >= v346->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v343,
      76,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v347[4] + 192LL) + 112LL));
    v346 = v343->fields._items;
    v347 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v343->fields._version;
    if ( !v346 )
      goto LABEL_692;
  }
  else
  {
    v343->fields._size = v354 + 1;
    *((_DWORD *)v346->m_Items + v354) = 76;
    ++v343->fields._version;
  }
  v355 = v343->fields._size;
  if ( (unsigned int)v355 >= v346->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v343,
      56,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v347[4] + 192LL) + 112LL));
  }
  else
  {
    v343->fields._size = v355 + 1;
    *((_DWORD *)v346->m_Items + v355) = 56;
  }
  v356 = FilterKindList_TypeInfo->static_fields;
  v356->ServantEquipTypeFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v343;
  sub_1B8635C((CGThumbnailListItem_o *)&v356->ServantEquipTypeFilterKindList, (int32_t)v343, v344, v345);
  v357 = (System_Collections_Generic_List_T__o *)sub_1B86604(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v357,
    (const MethodInfo_35E190C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v357 )
    goto LABEL_692;
  v360 = v357->fields._items;
  v361 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v357->fields._version;
  if ( !v360 )
    goto LABEL_692;
  v362 = v357->fields._size;
  if ( (unsigned int)v362 >= v360->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v357,
      77,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v361[4] + 192LL) + 112LL));
    v360 = v357->fields._items;
    v361 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v357->fields._version;
    if ( !v360 )
      goto LABEL_692;
  }
  else
  {
    v357->fields._size = v362 + 1;
    *((_DWORD *)v360->m_Items + v362) = 77;
    ++v357->fields._version;
  }
  v363 = v357->fields._size;
  if ( (unsigned int)v363 >= v360->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v357,
      78,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v361[4] + 192LL) + 112LL));
    v360 = v357->fields._items;
    v361 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v357->fields._version;
    if ( !v360 )
      goto LABEL_692;
  }
  else
  {
    v357->fields._size = v363 + 1;
    *((_DWORD *)v360->m_Items + v363) = 78;
    ++v357->fields._version;
  }
  v364 = v357->fields._size;
  if ( (unsigned int)v364 >= v360->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v357,
      79,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v361[4] + 192LL) + 112LL));
    v360 = v357->fields._items;
    v361 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v357->fields._version;
    if ( !v360 )
      goto LABEL_692;
  }
  else
  {
    v357->fields._size = v364 + 1;
    *((_DWORD *)v360->m_Items + v364) = 79;
    ++v357->fields._version;
  }
  v365 = v357->fields._size;
  if ( (unsigned int)v365 >= v360->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v357,
      80,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v361[4] + 192LL) + 112LL));
    v360 = v357->fields._items;
    v361 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v357->fields._version;
    if ( !v360 )
      goto LABEL_692;
  }
  else
  {
    v357->fields._size = v365 + 1;
    *((_DWORD *)v360->m_Items + v365) = 80;
    ++v357->fields._version;
  }
  v366 = v357->fields._size;
  if ( (unsigned int)v366 >= v360->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v357,
      81,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v361[4] + 192LL) + 112LL));
    v360 = v357->fields._items;
    v361 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v357->fields._version;
    if ( !v360 )
      goto LABEL_692;
  }
  else
  {
    v357->fields._size = v366 + 1;
    *((_DWORD *)v360->m_Items + v366) = 81;
    ++v357->fields._version;
  }
  v367 = v357->fields._size;
  if ( (unsigned int)v367 >= v360->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v357,
      82,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v361[4] + 192LL) + 112LL));
    v360 = v357->fields._items;
    v361 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v357->fields._version;
    if ( !v360 )
      goto LABEL_692;
  }
  else
  {
    v357->fields._size = v367 + 1;
    *((_DWORD *)v360->m_Items + v367) = 82;
    ++v357->fields._version;
  }
  v368 = v357->fields._size;
  if ( (unsigned int)v368 >= v360->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v357,
      83,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v361[4] + 192LL) + 112LL));
  }
  else
  {
    v357->fields._size = v368 + 1;
    *((_DWORD *)v360->m_Items + v368) = 83;
  }
  v369 = FilterKindList_TypeInfo->static_fields;
  v369->ServantEquipCombineStatusFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v357;
  sub_1B8635C((CGThumbnailListItem_o *)&v369->ServantEquipCombineStatusFilterKindList, (int32_t)v357, v358, v359);
  v370 = (System_Collections_Generic_List_T__o *)sub_1B86604(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v370,
    (const MethodInfo_35E190C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v370 )
    goto LABEL_692;
  v373 = v370->fields._items;
  v374 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v370->fields._version;
  if ( !v373 )
    goto LABEL_692;
  v375 = v370->fields._size;
  if ( (unsigned int)v375 >= v373->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v370,
      84,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v374[4] + 192LL) + 112LL));
    v373 = v370->fields._items;
    v374 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v370->fields._version;
    if ( !v373 )
      goto LABEL_692;
  }
  else
  {
    v370->fields._size = v375 + 1;
    *((_DWORD *)v373->m_Items + v375) = 84;
    ++v370->fields._version;
  }
  v376 = v370->fields._size;
  if ( (unsigned int)v376 >= v373->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v370,
      85,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v374[4] + 192LL) + 112LL));
    v373 = v370->fields._items;
    v374 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v370->fields._version;
    if ( !v373 )
      goto LABEL_692;
  }
  else
  {
    v370->fields._size = v376 + 1;
    *((_DWORD *)v373->m_Items + v376) = 85;
    ++v370->fields._version;
  }
  v377 = v370->fields._size;
  if ( (unsigned int)v377 >= v373->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v370,
      86,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v374[4] + 192LL) + 112LL));
    v373 = v370->fields._items;
    v374 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v370->fields._version;
    if ( !v373 )
      goto LABEL_692;
  }
  else
  {
    v370->fields._size = v377 + 1;
    *((_DWORD *)v373->m_Items + v377) = 86;
    ++v370->fields._version;
  }
  v378 = v370->fields._size;
  if ( (unsigned int)v378 >= v373->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v370,
      87,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v374[4] + 192LL) + 112LL));
  }
  else
  {
    v370->fields._size = v378 + 1;
    *((_DWORD *)v373->m_Items + v378) = 87;
  }
  v379 = FilterKindList_TypeInfo->static_fields;
  v379->ServantEquipHaveStatusFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v370;
  sub_1B8635C((CGThumbnailListItem_o *)&v379->ServantEquipHaveStatusFilterKindList, (int32_t)v370, v371, v372);
  v380 = (System_Collections_Generic_List_T__o *)sub_1B86604(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v380,
    (const MethodInfo_35E190C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v380 )
    goto LABEL_692;
  v383 = v380->fields._items;
  v384 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v380->fields._version;
  if ( !v383 )
    goto LABEL_692;
  v385 = v380->fields._size;
  if ( (unsigned int)v385 >= v383->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v380,
      30,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v384[4] + 192LL) + 112LL));
    v383 = v380->fields._items;
    v384 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
    ++v380->fields._version;
    if ( !v383 )
      goto LABEL_692;
  }
  else
  {
    v380->fields._size = v385 + 1;
    *((_DWORD *)v383->m_Items + v385) = 30;
    ++v380->fields._version;
  }
  v386 = v380->fields._size;
  if ( (unsigned int)v386 >= v383->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v380,
      31,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v384[4] + 192LL) + 112LL));
  }
  else
  {
    v380->fields._size = v386 + 1;
    *((_DWORD *)v383->m_Items + v386) = 31;
  }
  v387 = FilterKindList_TypeInfo->static_fields;
  v387->ServantCostumeFilterKind = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v380;
  sub_1B8635C((CGThumbnailListItem_o *)&v387->ServantCostumeFilterKind, (int32_t)v380, v381, v382);
  v388 = (System_Collections_Generic_List_T__o *)sub_1B86604(System_Collections_Generic_List_ListViewSort_FilterKind__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v388,
    (const MethodInfo_35E190C *)Method_System_Collections_Generic_List_ListViewSort_FilterKind___ctor__);
  if ( !v388 )
    goto LABEL_692;
  v391 = v388->fields._items;
  v392 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v388->fields._version;
  if ( !v391 )
    goto LABEL_692;
  v393 = v388->fields._size;
  if ( (unsigned int)v393 < v391->max_length )
  {
    v388->fields._size = v393 + 1;
    *((_DWORD *)v391->m_Items + v393) = 32;
    ++v388->fields._version;
    goto LABEL_688;
  }
  System_Collections_Generic_List_Int32Enum___AddWithResize(
    v388,
    32,
    *(const MethodInfo_35E2160 **)(*(_QWORD *)(v392[4] + 192LL) + 112LL));
  v391 = v388->fields._items;
  v392 = Method_System_Collections_Generic_List_ListViewSort_FilterKind__Add__;
  ++v388->fields._version;
  if ( !v391 )
LABEL_692:
    sub_1B86614(v6, v7);
LABEL_688:
  v394 = v388->fields._size;
  if ( (unsigned int)v394 >= v391->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v388,
      33,
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v392[4] + 192LL) + 112LL));
  }
  else
  {
    v388->fields._size = v394 + 1;
    *((_DWORD *)v391->m_Items + v394) = 33;
  }
  v395 = FilterKindList_TypeInfo->static_fields;
  v395->MaterialServantCostumeFilterKindList = (struct System_Collections_Generic_List_ListViewSort_FilterKind__o *)v388;
  sub_1B8635C((CGThumbnailListItem_o *)&v395->MaterialServantCostumeFilterKindList, (int32_t)v388, v389, v390);
}


void __fastcall FilterKindList___ctor(FilterKindList_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}