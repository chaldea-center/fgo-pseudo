void __fastcall ServantStatusFlavorTextListViewItemDrawText___cctor(const MethodInfo *method)
{
  if ( (byte_4BD8CE1 & 1) == 0 )
  {
    sub_1C21E38(&ServantStatusFlavorTextListViewItemDrawText_TypeInfo);
    byte_4BD8CE1 = 1;
  }
  *ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields = (struct ServantStatusFlavorTextListViewItemDrawText_StaticFields)0xFFFFFFAD0000009ALL;
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___ctor(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x1
  int64_t v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x1
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int64_t v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x1
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  System_Collections_Generic_List_object__o *v52; // x20
  __int64 v53; // x0
  Il2CppObject *v54; // x1
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  struct System_Object_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  Il2CppClass **v64; // x0
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  struct System_Object_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  Il2CppClass **v74; // x0
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  struct System_Object_array *v81; // x8
  _QWORD *v82; // x9
  __int64 v83; // x10
  Il2CppClass **v84; // x0
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  struct System_Object_array *v91; // x8
  _QWORD *v92; // x9
  __int64 v93; // x10
  Il2CppClass **v94; // x0
  int64_t v95; // x2
  int32_t v96; // w3
  System_String_o *v97; // x4
  BattleSetupInfo_o *v98; // x5
  FollowerInfo_o *v99; // x6
  PartyListViewItem_o *v100; // x7
  struct System_Object_array *v101; // x8
  _QWORD *v102; // x9
  __int64 v103; // x10
  Il2CppClass **v104; // x0
  int64_t v105; // x2
  int32_t v106; // w3
  System_String_o *v107; // x4
  BattleSetupInfo_o *v108; // x5
  FollowerInfo_o *v109; // x6
  PartyListViewItem_o *v110; // x7
  System_Collections_Generic_List_object__o *v111; // x20
  int64_t v112; // x2
  int32_t v113; // w3
  System_String_o *v114; // x4
  BattleSetupInfo_o *v115; // x5
  FollowerInfo_o *v116; // x6
  PartyListViewItem_o *v117; // x7
  _QWORD *v118; // x9
  struct System_Object_array *v119; // x8
  __int64 v120; // x10
  Il2CppClass **v121; // x0
  int64_t v122; // x2
  int32_t v123; // w3
  System_String_o *v124; // x4
  BattleSetupInfo_o *v125; // x5
  FollowerInfo_o *v126; // x6
  PartyListViewItem_o *v127; // x7
  struct System_Object_array *v128; // x8
  _QWORD *v129; // x9
  __int64 v130; // x10
  Il2CppClass **v131; // x0
  int64_t v132; // x2
  int32_t v133; // w3
  System_String_o *v134; // x4
  BattleSetupInfo_o *v135; // x5
  FollowerInfo_o *v136; // x6
  PartyListViewItem_o *v137; // x7
  struct System_Object_array *v138; // x8
  _QWORD *v139; // x9
  __int64 v140; // x10
  Il2CppClass **v141; // x0
  int64_t v142; // x2
  int32_t v143; // w3
  System_String_o *v144; // x4
  BattleSetupInfo_o *v145; // x5
  FollowerInfo_o *v146; // x6
  PartyListViewItem_o *v147; // x7
  struct System_Object_array *v148; // x8
  _QWORD *v149; // x9
  __int64 v150; // x10
  Il2CppClass **v151; // x0
  int64_t v152; // x2
  int32_t v153; // w3
  System_String_o *v154; // x4
  BattleSetupInfo_o *v155; // x5
  FollowerInfo_o *v156; // x6
  PartyListViewItem_o *v157; // x7
  struct System_Object_array *v158; // x8
  _QWORD *v159; // x9
  __int64 v160; // x10
  Il2CppClass **v161; // x0
  int64_t v162; // x2
  int32_t v163; // w3
  System_String_o *v164; // x4
  BattleSetupInfo_o *v165; // x5
  FollowerInfo_o *v166; // x6
  PartyListViewItem_o *v167; // x7
  System_Collections_Generic_List_object__o *v168; // x20
  int64_t v169; // x2
  int32_t v170; // w3
  System_String_o *v171; // x4
  BattleSetupInfo_o *v172; // x5
  FollowerInfo_o *v173; // x6
  PartyListViewItem_o *v174; // x7
  _QWORD *v175; // x9
  struct System_Object_array *v176; // x8
  __int64 v177; // x10
  Il2CppClass **v178; // x0
  int64_t v179; // x2
  int32_t v180; // w3
  System_String_o *v181; // x4
  BattleSetupInfo_o *v182; // x5
  FollowerInfo_o *v183; // x6
  PartyListViewItem_o *v184; // x7
  struct System_Object_array *v185; // x8
  _QWORD *v186; // x9
  __int64 v187; // x10
  Il2CppClass **v188; // x0
  int64_t v189; // x2
  int32_t v190; // w3
  System_String_o *v191; // x4
  BattleSetupInfo_o *v192; // x5
  FollowerInfo_o *v193; // x6
  PartyListViewItem_o *v194; // x7
  struct System_Object_array *v195; // x8
  _QWORD *v196; // x9
  __int64 v197; // x10
  Il2CppClass **v198; // x0
  int64_t v199; // x2
  int32_t v200; // w3
  System_String_o *v201; // x4
  BattleSetupInfo_o *v202; // x5
  FollowerInfo_o *v203; // x6
  PartyListViewItem_o *v204; // x7
  struct System_Object_array *v205; // x8
  _QWORD *v206; // x9
  __int64 v207; // x10
  Il2CppClass **v208; // x0
  int64_t v209; // x2
  int32_t v210; // w3
  System_String_o *v211; // x4
  BattleSetupInfo_o *v212; // x5
  FollowerInfo_o *v213; // x6
  PartyListViewItem_o *v214; // x7

  if ( (byte_4BD8CE0 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C21E38(&StringLiteral_17455/*"bg(Clone)/bg10500"*/);
    sub_1C21E38(&StringLiteral_13327/*"SummonBgRoot"*/);
    sub_1C21E38(&StringLiteral_13487/*"SystemUICamera"*/);
    sub_1C21E38(&StringLiteral_3315/*"Bg/10500"*/);
    sub_1C21E38(&StringLiteral_6236/*"EquipGraphListMenuPrefab(Clone)"*/);
    sub_1C21E38(&StringLiteral_12893/*"ServantStatusDialogPrefab(Clone)"*/);
    sub_1C21E38(&StringLiteral_3395/*"BtnBg"*/);
    sub_1C21E38(&StringLiteral_14800/*"TouchCamera"*/);
    sub_1C21E38(&StringLiteral_4554/*"ChoiceButton"*/);
    sub_1C21E38(&StringLiteral_3317/*"BgCamera"*/);
    sub_1C21E38(&StringLiteral_4730/*"CommonUI"*/);
    sub_1C21E38(&StringLiteral_7029/*"FrontCommonUICamera"*/);
    sub_1C21E38(&StringLiteral_17454/*"bg"*/);
    sub_1C21E38(&StringLiteral_4739/*"CommonUICamera"*/);
    sub_1C21E38(&StringLiteral_13344/*"SupportServantEquipListMenuPrefab(Clone)"*/);
    sub_1C21E38(&StringLiteral_8645/*"LockButton"*/);
    sub_1C21E38(&StringLiteral_12877/*"ServantEquipStatusDialogPrefab(Clone)"*/);
    sub_1C21E38(&StringLiteral_13237/*"StatusButton"*/);
    sub_1C21E38(&StringLiteral_11413/*"RecommendSupportEquipSelectListMenuPrefab(Clone)"*/);
    sub_1C21E38(&StringLiteral_20690/*"img_index_02"*/);
    sub_1C21E38(&StringLiteral_7256/*"Ground/Field/bg(Clone)"*/);
    byte_4BD8CE0 = 1;
  }
  v9 = StringLiteral_20690/*"img_index_02"*/;
  this->fields.TITLE_SPRITE_NAME = (struct System_String_o *)StringLiteral_20690/*"img_index_02"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.TITLE_SPRITE_NAME, v9, v2, v3, v4, v5, v6, v7);
  this->fields.MESSAGE_LABEL_ADD_POS_Y = -45.0;
  *(_QWORD *)&this->fields.BASE_SPRITE_ADD_POS_Y = 0xC25C0000C2080000LL;
  v10 = StringLiteral_4730/*"CommonUI"*/;
  this->fields.COMMON_UI = (struct System_String_o *)StringLiteral_4730/*"CommonUI"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.COMMON_UI, v10, v11, v12, v13, v14, v15, v16);
  v17 = StringLiteral_7256/*"Ground/Field/bg(Clone)"*/;
  this->fields.BATTLE_BG_OBJECT = (struct System_String_o *)StringLiteral_7256/*"Ground/Field/bg(Clone)"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.BATTLE_BG_OBJECT, v17, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_17455/*"bg(Clone)/bg10500"*/;
  this->fields.SUMMON_BG_OBJECT = (struct System_String_o *)StringLiteral_17455/*"bg(Clone)/bg10500"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.SUMMON_BG_OBJECT, v24, v25, v26, v27, v28, v29, v30);
  v31 = StringLiteral_13327/*"SummonBgRoot"*/;
  this->fields.SUMMON_BG_ROOT = (struct System_String_o *)StringLiteral_13327/*"SummonBgRoot"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.SUMMON_BG_ROOT, v31, v32, v33, v34, v35, v36, v37);
  v38 = StringLiteral_3315/*"Bg/10500"*/;
  this->fields.SUMMON_BG_ASSET_NAME = (struct System_String_o *)StringLiteral_3315/*"Bg/10500"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.SUMMON_BG_ASSET_NAME, v38, v39, v40, v41, v42, v43, v44);
  v45 = StringLiteral_17454/*"bg"*/;
  this->fields.SUMMON_BG_OBJECT_NAME = (struct System_String_o *)StringLiteral_17454/*"bg"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.SUMMON_BG_OBJECT_NAME, v45, v46, v47, v48, v49, v50, v51);
  v52 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v52,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v52 )
    goto LABEL_63;
  v54 = (Il2CppObject *)StringLiteral_12893/*"ServantStatusDialogPrefab(Clone)"*/;
  items = v52->fields._items;
  v62 = Method_System_Collections_Generic_List_string__Add__;
  ++v52->fields._version;
  if ( !items )
    goto LABEL_63;
  size = v52->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v52,
      v54,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
  }
  else
  {
    v64 = &items->obj.klass + size;
    v52->fields._size = size + 1;
    v64[4] = (Il2CppClass *)v54;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v64 + 4), (int64_t)v54, v55, v56, v57, v58, v59, v60);
  }
  v54 = (Il2CppObject *)StringLiteral_12877/*"ServantEquipStatusDialogPrefab(Clone)"*/;
  v71 = v52->fields._items;
  v72 = Method_System_Collections_Generic_List_string__Add__;
  ++v52->fields._version;
  if ( !v71 )
    goto LABEL_63;
  v73 = v52->fields._size;
  if ( (unsigned int)v73 >= v71->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v52,
      v54,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
  }
  else
  {
    v74 = &v71->obj.klass + v73;
    v52->fields._size = v73 + 1;
    v74[4] = (Il2CppClass *)v54;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v74 + 4), (int64_t)v54, v65, v66, v67, v68, v69, v70);
  }
  v54 = (Il2CppObject *)StringLiteral_6236/*"EquipGraphListMenuPrefab(Clone)"*/;
  v81 = v52->fields._items;
  v82 = Method_System_Collections_Generic_List_string__Add__;
  ++v52->fields._version;
  if ( !v81 )
    goto LABEL_63;
  v83 = v52->fields._size;
  if ( (unsigned int)v83 >= v81->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v52,
      v54,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v82[4] + 192LL) + 112LL));
  }
  else
  {
    v84 = &v81->obj.klass + v83;
    v52->fields._size = v83 + 1;
    v84[4] = (Il2CppClass *)v54;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v84 + 4), (int64_t)v54, v75, v76, v77, v78, v79, v80);
  }
  v54 = (Il2CppObject *)StringLiteral_13344/*"SupportServantEquipListMenuPrefab(Clone)"*/;
  v91 = v52->fields._items;
  v92 = Method_System_Collections_Generic_List_string__Add__;
  ++v52->fields._version;
  if ( !v91 )
    goto LABEL_63;
  v93 = v52->fields._size;
  if ( (unsigned int)v93 >= v91->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v52,
      v54,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
  }
  else
  {
    v94 = &v91->obj.klass + v93;
    v52->fields._size = v93 + 1;
    v94[4] = (Il2CppClass *)v54;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v94 + 4), (int64_t)v54, v85, v86, v87, v88, v89, v90);
  }
  v54 = (Il2CppObject *)StringLiteral_11413/*"RecommendSupportEquipSelectListMenuPrefab(Clone)"*/;
  v101 = v52->fields._items;
  v102 = Method_System_Collections_Generic_List_string__Add__;
  ++v52->fields._version;
  if ( !v101 )
    goto LABEL_63;
  v103 = v52->fields._size;
  if ( (unsigned int)v103 >= v101->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v52,
      v54,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
  }
  else
  {
    v104 = &v101->obj.klass + v103;
    v52->fields._size = v103 + 1;
    v104[4] = (Il2CppClass *)v54;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v104 + 4), (int64_t)v54, v95, v96, v97, v98, v99, v100);
  }
  this->fields.INACTIVE_PREFABS = (struct System_Collections_Generic_List_string__o *)v52;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.INACTIVE_PREFABS,
    (int64_t)v52,
    v105,
    v106,
    v107,
    v108,
    v109,
    v110);
  v111 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v111,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v111 )
    goto LABEL_63;
  v118 = Method_System_Collections_Generic_List_string__Add__;
  v54 = (Il2CppObject *)StringLiteral_3317/*"BgCamera"*/;
  v119 = v111->fields._items;
  ++v111->fields._version;
  if ( !v119 )
    goto LABEL_63;
  v120 = v111->fields._size;
  if ( (unsigned int)v120 >= v119->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v111,
      v54,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v118[4] + 192LL) + 112LL));
  }
  else
  {
    v121 = &v119->obj.klass + v120;
    v111->fields._size = v120 + 1;
    v121[4] = (Il2CppClass *)v54;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v121 + 4), (int64_t)v54, v112, v113, v114, v115, v116, v117);
  }
  v54 = (Il2CppObject *)StringLiteral_4739/*"CommonUICamera"*/;
  v128 = v111->fields._items;
  v129 = Method_System_Collections_Generic_List_string__Add__;
  ++v111->fields._version;
  if ( !v128 )
    goto LABEL_63;
  v130 = v111->fields._size;
  if ( (unsigned int)v130 >= v128->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v111,
      v54,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v129[4] + 192LL) + 112LL));
  }
  else
  {
    v131 = &v128->obj.klass + v130;
    v111->fields._size = v130 + 1;
    v131[4] = (Il2CppClass *)v54;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v131 + 4), (int64_t)v54, v122, v123, v124, v125, v126, v127);
  }
  v54 = (Il2CppObject *)StringLiteral_7029/*"FrontCommonUICamera"*/;
  v138 = v111->fields._items;
  v139 = Method_System_Collections_Generic_List_string__Add__;
  ++v111->fields._version;
  if ( !v138 )
    goto LABEL_63;
  v140 = v111->fields._size;
  if ( (unsigned int)v140 >= v138->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v111,
      v54,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v139[4] + 192LL) + 112LL));
  }
  else
  {
    v141 = &v138->obj.klass + v140;
    v111->fields._size = v140 + 1;
    v141[4] = (Il2CppClass *)v54;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v141 + 4), (int64_t)v54, v132, v133, v134, v135, v136, v137);
  }
  v54 = (Il2CppObject *)StringLiteral_13487/*"SystemUICamera"*/;
  v148 = v111->fields._items;
  v149 = Method_System_Collections_Generic_List_string__Add__;
  ++v111->fields._version;
  if ( !v148 )
    goto LABEL_63;
  v150 = v111->fields._size;
  if ( (unsigned int)v150 >= v148->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v111,
      v54,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v149[4] + 192LL) + 112LL));
  }
  else
  {
    v151 = &v148->obj.klass + v150;
    v111->fields._size = v150 + 1;
    v151[4] = (Il2CppClass *)v54;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v151 + 4), (int64_t)v54, v142, v143, v144, v145, v146, v147);
  }
  v54 = (Il2CppObject *)StringLiteral_14800/*"TouchCamera"*/;
  v158 = v111->fields._items;
  v159 = Method_System_Collections_Generic_List_string__Add__;
  ++v111->fields._version;
  if ( !v158 )
    goto LABEL_63;
  v160 = v111->fields._size;
  if ( (unsigned int)v160 >= v158->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v111,
      v54,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v159[4] + 192LL) + 112LL));
  }
  else
  {
    v161 = &v158->obj.klass + v160;
    v111->fields._size = v160 + 1;
    v161[4] = (Il2CppClass *)v54;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v161 + 4), (int64_t)v54, v152, v153, v154, v155, v156, v157);
  }
  this->fields.SCRIPT_CAMERAS = (struct System_Collections_Generic_List_string__o *)v111;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.SCRIPT_CAMERAS,
    (int64_t)v111,
    v162,
    v163,
    v164,
    v165,
    v166,
    v167);
  v168 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v168,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v168 )
    goto LABEL_63;
  v175 = Method_System_Collections_Generic_List_string__Add__;
  v54 = (Il2CppObject *)StringLiteral_3395/*"BtnBg"*/;
  v176 = v168->fields._items;
  ++v168->fields._version;
  if ( !v176 )
    goto LABEL_63;
  v177 = v168->fields._size;
  if ( (unsigned int)v177 >= v176->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v168,
      v54,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v175[4] + 192LL) + 112LL));
  }
  else
  {
    v178 = &v176->obj.klass + v177;
    v168->fields._size = v177 + 1;
    v178[4] = (Il2CppClass *)v54;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v178 + 4), (int64_t)v54, v169, v170, v171, v172, v173, v174);
  }
  v54 = (Il2CppObject *)StringLiteral_13237/*"StatusButton"*/;
  v185 = v168->fields._items;
  v186 = Method_System_Collections_Generic_List_string__Add__;
  ++v168->fields._version;
  if ( !v185 )
    goto LABEL_63;
  v187 = v168->fields._size;
  if ( (unsigned int)v187 >= v185->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v168,
      v54,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v186[4] + 192LL) + 112LL));
  }
  else
  {
    v188 = &v185->obj.klass + v187;
    v168->fields._size = v187 + 1;
    v188[4] = (Il2CppClass *)v54;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v188 + 4), (int64_t)v54, v179, v180, v181, v182, v183, v184);
  }
  v54 = (Il2CppObject *)StringLiteral_8645/*"LockButton"*/;
  v195 = v168->fields._items;
  v196 = Method_System_Collections_Generic_List_string__Add__;
  ++v168->fields._version;
  if ( !v195 )
    goto LABEL_63;
  v197 = v168->fields._size;
  if ( (unsigned int)v197 >= v195->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v168,
      v54,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v196[4] + 192LL) + 112LL));
  }
  else
  {
    v198 = &v195->obj.klass + v197;
    v168->fields._size = v197 + 1;
    v198[4] = (Il2CppClass *)v54;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v198 + 4), (int64_t)v54, v189, v190, v191, v192, v193, v194);
  }
  v54 = (Il2CppObject *)StringLiteral_4554/*"ChoiceButton"*/;
  v205 = v168->fields._items;
  v206 = Method_System_Collections_Generic_List_string__Add__;
  ++v168->fields._version;
  if ( !v205 )
LABEL_63:
    sub_1C22094(v53, v54);
  v207 = v168->fields._size;
  if ( (unsigned int)v207 >= v205->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v168,
      v54,
      *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v206[4] + 192LL) + 112LL));
  }
  else
  {
    v208 = &v205->obj.klass + v207;
    v168->fields._size = v207 + 1;
    v208[4] = (Il2CppClass *)v54;
    sub_1C21DDC((PartyOrganizationUtility_o *)(v208 + 4), (int64_t)v54, v199, v200, v201, v202, v203, v204);
  }
  this->fields.TARGET_BUTTON_NAME = (struct System_Collections_Generic_List_string__o *)v168;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.TARGET_BUTTON_NAME,
    (int64_t)v168,
    v209,
    v210,
    v211,
    v212,
    v213,
    v214);
  this->fields.isFirst = 1;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText__Awake(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        const MethodInfo *method)
{
  ;
}


int32_t __fastcall ServantStatusFlavorTextListViewItemDrawText__GetKind(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        const MethodInfo *method)
{
  return 1;
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText__OnClickPlayScript(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  System_Collections_Generic_List_object__o *INACTIVE_PREFABS; // x0
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  _QWORD *v12; // x0
  System_Reflection_MethodBase_o *v13; // x0
  unsigned int allCamerasCount; // w0
  UnityEngine_Camera_array *v15; // x22
  System_Collections_Generic_List_object__o *v16; // x23
  System_Collections_Generic_List_GameObject__o **v17; // x21
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  UnityEngine_GameObject_o *v24; // x23
  const MethodInfo *v25; // x3
  __int64 v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  System_Collections_Generic_List_object__o *v33; // x0
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x8
  System_Collections_Generic_List_object__o *v38; // x24
  System_Collections_Generic_List_Camera__o **v39; // x23
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int max_length; // w8
  unsigned int v47; // w26
  Il2CppClass **v48; // x8
  UnityEngine_Behaviour_o *v49; // x24
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  struct System_Object_array *v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  Il2CppClass **v59; // x8
  UnityEngine_GameObject_o *v60; // x22
  struct UnityEngine_GameObject_o *Deep; // x0
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  UnityEngine_Object_o *summonBgRoot; // x22
  struct UnityEngine_GameObject_o *v69; // x0
  int64_t v70; // x2
  int32_t v71; // w3
  System_String_o *v72; // x4
  BattleSetupInfo_o *v73; // x5
  FollowerInfo_o *v74; // x6
  PartyListViewItem_o *v75; // x7
  UnityEngine_Object_o *v76; // x22
  const MethodInfo *v77; // x3
  UnityEngine_Object_o *summonBg; // x22
  System_String_o *SUMMON_BG_ASSET_NAME; // x19
  AssetLoader_LoadEndDataHandler_o *v80; // x21
  System_Collections_Generic_List_Enumerator_object__o v81; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v82; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BD8CDD & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&UnityEngine_Camera___TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Camera__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Camera___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_Camera__TypeInfo);
    sub_1C21E38(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_ServantStatusFlavorTextListViewItemDrawText_OnClickPlayScript__);
    sub_1C21E38(&Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0__OnClickPlayScript_b__0__);
    sub_1C21E38(&ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_TypeInfo);
    byte_4BD8CDD = 1;
  }
  memset(&v82, 0, sizeof(v82));
  v3 = sub_1C22084(ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  if ( !v3 )
    goto LABEL_53;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 16), (int64_t)this, v6, v7, v8, v9, v10, v11);
  if ( this->fields.svtId && !this->fields.isScriptPlaying )
  {
    this->fields.isScriptPlaying = 1;
    v12 = Method_ServantStatusFlavorTextListViewItemDrawText_OnClickPlayScript__;
    if ( (*((_BYTE *)Method_ServantStatusFlavorTextListViewItemDrawText_OnClickPlayScript__ + 83) & 2) != 0 )
      v12 = (_QWORD *)sub_1C21E50(Method_ServantStatusFlavorTextListViewItemDrawText_OnClickPlayScript__);
    v13 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v12, v12[4]);
    OverwriteAssetSoundName__PlaySystemSe(v13, 8, 0, 0LL);
    allCamerasCount = UnityEngine_Camera__get_allCamerasCount(0LL);
    v15 = (UnityEngine_Camera_array *)sub_1C21EE0(UnityEngine_Camera___TypeInfo, allCamerasCount);
    UnityEngine_Camera__GetAllCameras(v15, 0LL);
    v16 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v16,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    *(_QWORD *)(v3 + 32) = v16;
    v17 = (System_Collections_Generic_List_GameObject__o **)(v3 + 32);
    sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)v16, v18, v19, v20, v21, v22, v23);
    INACTIVE_PREFABS = (System_Collections_Generic_List_object__o *)this->fields.INACTIVE_PREFABS;
    if ( !INACTIVE_PREFABS )
      goto LABEL_53;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v81,
      INACTIVE_PREFABS,
      (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v82 = v81;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v82,
              (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      v24 = UnityEngine_GameObject__Find((System_String_o *)v82.fields._current, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v24, 0LL, 0LL) )
      {
        ServantStatusFlavorTextListViewItemDrawText__SetButtonEnable(this, v24, 0, v25);
        v33 = (System_Collections_Generic_List_object__o *)*v17;
        if ( !*v17 )
          sub_1C22094(0LL, v26);
        items = v33->fields._items;
        v35 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v33->fields._version;
        if ( !items )
          sub_1C22094(v33, v26);
        size = v33->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v33,
            (Il2CppObject *)v24,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
        }
        else
        {
          v37 = &items->obj.klass + size;
          v33->fields._size = size + 1;
          v37[4] = (Il2CppClass *)v24;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v37 + 4), (int64_t)v24, v27, v28, v29, v30, v31, v32);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v82,
      (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    v38 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_Camera__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v38,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_Camera___ctor__);
    *(_QWORD *)(v3 + 24) = v38;
    v39 = (System_Collections_Generic_List_Camera__o **)(v3 + 24);
    sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 24), (int64_t)v38, v40, v41, v42, v43, v44, v45);
    if ( !v15 )
      goto LABEL_53;
    max_length = v15->max_length;
    if ( max_length >= 1 )
    {
      v47 = 0;
      while ( 1 )
      {
        if ( v47 >= max_length )
          sub_1C2209C(INACTIVE_PREFABS, v5);
        v48 = &v15->obj.klass + (int)v47;
        v49 = (UnityEngine_Behaviour_o *)v48[4];
        if ( !v49 )
          break;
        INACTIVE_PREFABS = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                          (UnityEngine_Component_o *)v48[4],
                                                                          0LL);
        if ( !INACTIVE_PREFABS )
          break;
        INACTIVE_PREFABS = (System_Collections_Generic_List_object__o *)UnityEngine_Object__get_name(
                                                                          (UnityEngine_Object_o *)INACTIVE_PREFABS,
                                                                          0LL);
        if ( !this->fields.SCRIPT_CAMERAS )
          break;
        INACTIVE_PREFABS = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Contains(
                                                                          (System_Collections_Generic_List_object__o *)this->fields.SCRIPT_CAMERAS,
                                                                          (Il2CppObject *)INACTIVE_PREFABS,
                                                                          (const MethodInfo_364F444 *)Method_System_Collections_Generic_List_string__Contains__);
        if ( ((unsigned __int8)INACTIVE_PREFABS & 1) == 0 )
        {
          UnityEngine_Behaviour__set_enabled(v49, 0, 0LL);
          INACTIVE_PREFABS = (System_Collections_Generic_List_object__o *)*v39;
          if ( !*v39 )
            break;
          v56 = INACTIVE_PREFABS->fields._items;
          v57 = Method_System_Collections_Generic_List_Camera__Add__;
          ++INACTIVE_PREFABS->fields._version;
          if ( !v56 )
            break;
          v58 = INACTIVE_PREFABS->fields._size;
          if ( (unsigned int)v58 >= v56->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              INACTIVE_PREFABS,
              (Il2CppObject *)v49,
              *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
          }
          else
          {
            v59 = &v56->obj.klass + v58;
            INACTIVE_PREFABS->fields._size = v58 + 1;
            v59[4] = (Il2CppClass *)v49;
            sub_1C21DDC((PartyOrganizationUtility_o *)(v59 + 4), (int64_t)v49, v50, v51, v52, v53, v54, v55);
          }
        }
        max_length = v15->max_length;
        if ( (int)++v47 >= max_length )
          goto LABEL_33;
      }
LABEL_53:
      sub_1C22094(INACTIVE_PREFABS, v5);
    }
LABEL_33:
    v60 = UnityEngine_GameObject__Find(this->fields.COMMON_UI, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v60, 0LL, 0LL) )
    {
      Deep = GameObjectExtensions__FindDeep(v60, this->fields.SUMMON_BG_ROOT, 1, 0LL);
      this->fields.summonBgRoot = Deep;
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.summonBgRoot, (int64_t)Deep, v62, v63, v64, v65, v66, v67);
    }
    summonBgRoot = (UnityEngine_Object_o *)this->fields.summonBgRoot;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(summonBgRoot, 0LL, 0LL) )
    {
      INACTIVE_PREFABS = (System_Collections_Generic_List_object__o *)this->fields.summonBgRoot;
      if ( !INACTIVE_PREFABS )
        goto LABEL_53;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)INACTIVE_PREFABS, 1, 0LL);
    }
    v69 = UnityEngine_GameObject__Find(this->fields.BATTLE_BG_OBJECT, 0LL);
    this->fields.battleBg = v69;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.battleBg, (int64_t)v69, v70, v71, v72, v73, v74, v75);
    v76 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(this->fields.SUMMON_BG_OBJECT, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v76, 0LL, 0LL) )
      goto LABEL_48;
    summonBg = (UnityEngine_Object_o *)this->fields.summonBg;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(summonBg, 0LL, 0LL) )
    {
LABEL_48:
      ServantStatusFlavorTextListViewItemDrawText__PlayScript(this, *v39, *v17, v77);
    }
    else
    {
      SUMMON_BG_ASSET_NAME = this->fields.SUMMON_BG_ASSET_NAME;
      v80 = (AssetLoader_LoadEndDataHandler_o *)sub_1C22084(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v80,
        (Il2CppObject *)v3,
        Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0__OnClickPlayScript_b__0__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(SUMMON_BG_ASSET_NAME, v80, 1, 0LL);
    }
  }
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText__PlayScript(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        System_Collections_Generic_List_Camera__o *inactiveCameras,
        System_Collections_Generic_List_GameObject__o *inactivePrefabs,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v29; // x8
  CommonUI_o *v30; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v32; // x21

  if ( (byte_4BD8CDE & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0__PlayScript_b__0__);
    sub_1C21E38(&ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0_TypeInfo);
    byte_4BD8CDE = 1;
  }
  v7 = sub_1C22084(ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_8;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = inactivePrefabs;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)inactivePrefabs, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 32) = inactiveCameras;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)inactiveCameras, v22, v23, v24, v25, v26, v27);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v29 = AvalonSceneManager_TypeInfo;
  v30 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v29 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v29->static_fields->DEFAULT_FADE_TIME;
  v32 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v7,
    Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0__PlayScript_b__0__,
    0LL);
  if ( !v30 )
LABEL_8:
    sub_1C22094(v8, v9);
  CommonUI__maskFadeout(v30, 1, DEFAULT_FADE_TIME, v32, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText__RefreshUI(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        System_Collections_Generic_List_Camera__o *inactiveCameras,
        System_Collections_Generic_List_GameObject__o *inactivePrefabs,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  __int64 v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v29; // x8
  CommonUI_o *v30; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v32; // x21

  if ( (byte_4BD8CDF & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0__RefreshUI_b__0__);
    sub_1C21E38(&ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_TypeInfo);
    byte_4BD8CDF = 1;
  }
  v7 = sub_1C22084(ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_8;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = inactiveCameras;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 24), (int64_t)inactiveCameras, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 32) = inactivePrefabs;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)inactivePrefabs, v22, v23, v24, v25, v26, v27);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v29 = AvalonSceneManager_TypeInfo;
  v30 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v29 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v29->static_fields->DEFAULT_FADE_TIME;
  v32 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v7,
    Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0__RefreshUI_b__0__,
    0LL);
  if ( !v30 )
LABEL_8:
    sub_1C22094(v8, v9);
  CommonUI__maskFadeout(v30, 1, DEFAULT_FADE_TIME, v32, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText__SetButtonEnable(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        UnityEngine_GameObject_o *gameObject,
        bool isEnable,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_string__o *TARGET_BUTTON_NAME; // x0
  UnityEngine_Object_o *Deep; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x22
  _BOOL8 v12; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4BD8CDC & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UIButton___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD8CDC = 1;
  }
  memset(&v18, 0, sizeof(v18));
  TARGET_BUTTON_NAME = this->fields.TARGET_BUTTON_NAME;
  if ( !TARGET_BUTTON_NAME )
    sub_1C22094(0LL, gameObject);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v17,
    (System_Collections_Generic_List_object__o *)TARGET_BUTTON_NAME,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v18 = v17;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v18,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    Deep = (UnityEngine_Object_o *)GameObjectExtensions__FindDeep(
                                     gameObject,
                                     (System_String_o *)v18.fields._current,
                                     1,
                                     0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__op_Equality(Deep, 0LL, 0LL);
    if ( !v9 )
    {
      if ( !Deep )
        sub_1C22094(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Deep,
                           (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v12 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( v12 )
      {
        if ( !Component_object )
          sub_1C22094(v12, v13);
        ((void (__fastcall *)(Il2CppObject *, bool, Il2CppMethodPointer))Component_object->klass->vtable[5].method)(
          Component_object,
          isEnable,
          Component_object->klass->vtable[6].methodPtr);
      }
      v14 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)Deep,
              (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v15 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL);
      if ( v15 )
      {
        if ( !v14 )
          sub_1C22094(v15, v16);
        ((void (__fastcall *)(Il2CppObject *, bool, Il2CppMethodPointer))v14->klass->vtable[5].method)(
          v14,
          isEnable,
          v14->klass->vtable[6].methodPtr);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v18,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText__SetCondTitle(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        System_String_o *title,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *titleServantBase; // x0
  Il2CppObject *Component_object; // x21
  float v7; // s8
  UIWidget_o *titleName; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  float TITLE_NAME_LEFT_POS; // s0
  float v11; // s8
  float v12; // s8
  UILabel_o *v13; // x19

  if ( (byte_4BD8CDB & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
    sub_1C21E38(&ServantStatusFlavorTextListViewItemDrawText_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BD8CDB = 1;
  }
  titleServantBase = this->fields.titleServantBase;
  if ( !titleServantBase )
    goto LABEL_45;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       titleServantBase,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( System_String__IsNullOrEmpty(title, 0LL) )
  {
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    UILabel__set_text((UILabel_o *)titleServantBase, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    {
      titleServantBase = (UnityEngine_GameObject_o *)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
      if ( !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
      if ( Component_object )
      {
        UISprite__set_spriteName(
          (UISprite_o *)Component_object,
          ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_BASE_SPRITE_NAME,
          0LL);
        return;
      }
LABEL_45:
      sub_1C22094(titleServantBase, title);
    }
  }
  else
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    {
      titleServantBase = (UnityEngine_GameObject_o *)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
      if ( !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo);
      if ( !Component_object )
        goto LABEL_45;
      UISprite__set_spriteName(
        (UISprite_o *)Component_object,
        ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_BASE_LONG_SPRITE_NAME,
        0LL);
    }
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    UILabel__set_overflowMethod((UILabel_o *)titleServantBase, 2, 0LL);
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    UILabel__set_alignment((UILabel_o *)titleServantBase, 2, 0LL);
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    UILabel__set_text((UILabel_o *)titleServantBase, title, 0LL);
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, void *))titleServantBase->klass[2]._1.typeMetadataHandle)(
      titleServantBase,
      titleServantBase->klass[2]._1.interopData);
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    LODWORD(v7) = COERCE_UNSIGNED_INT128(
                    ((long double (__fastcall *)(UnityEngine_GameObject_o *, Il2CppMethodPointer))*(_QWORD *)&titleServantBase->klass[1]._2.naturalAligment)(
                      titleServantBase,
                      titleServantBase->klass[1].vtable._0_Equals.methodPtr));
    if ( !ServantStatusFlavorTextListViewItemDrawText_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText_TypeInfo);
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    if ( v7 >= (float)ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH )
    {
      titleServantBase = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)titleServantBase,
                                                       0LL);
      if ( !titleServantBase )
        goto LABEL_45;
      LODWORD(v11) = (unsigned int)UnityEngine_Transform__get_localScale(
                                     (UnityEngine_Transform_o *)titleServantBase,
                                     0LL);
      if ( !ServantStatusFlavorTextListViewItemDrawText_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText_TypeInfo);
      titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
      if ( !titleServantBase )
        goto LABEL_45;
      v12 = (float)(1.0 - v11)
          * (float)ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleServantBase, 0LL);
      TITLE_NAME_LEFT_POS = v12
                          + (float)ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
    }
    else
    {
      UILabel__set_overflowMethod((UILabel_o *)titleServantBase, 0, 0LL);
      titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
      if ( !titleServantBase )
        goto LABEL_45;
      UILabel__set_alignment((UILabel_o *)titleServantBase, 1, 0LL);
      titleServantBase = (UnityEngine_GameObject_o *)ServantStatusFlavorTextListViewItemDrawText_TypeInfo;
      titleName = (UIWidget_o *)this->fields.titleName;
      if ( !ServantStatusFlavorTextListViewItemDrawText_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText_TypeInfo);
      if ( !titleName )
        goto LABEL_45;
      UIWidget__set_width(
        titleName,
        ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH,
        0LL);
      titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
      if ( !titleServantBase )
        goto LABEL_45;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleServantBase, 0LL);
      TITLE_NAME_LEFT_POS = (float)ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
    }
    GameObjectExtensions__SetLocalPositionX(gameObject, TITLE_NAME_LEFT_POS, 0LL);
    titleServantBase = (UnityEngine_GameObject_o *)ServantStatusFlavorTextListViewItemDrawText_TypeInfo;
    v13 = this->fields.titleName;
    if ( !ServantStatusFlavorTextListViewItemDrawText_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText_TypeInfo);
    if ( !v13 )
      goto LABEL_45;
    UILabel__SetCondensedScale(
      v13,
      ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH,
      0,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewItemDrawText__SetItem(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        ServantStatusListViewItem_o *item,
        bool isOpen,
        bool isNew,
        System_String_o *text,
        int32_t profileNum,
        int32_t mode,
        const MethodInfo *method)
{
  void *messageLabel; // x0
  int v15; // w28
  UILabel_o *v16; // x25
  UnityEngine_GameObject_o *mainPrefab; // x26
  UnityEngine_GameObject_o *rubyPrefab; // x27
  RubyLabelHelper_o *v19; // x24
  UnityEngine_Vector2_o Size; // kr00_8
  int32_t y; // w21
  Il2CppObject *Master_object; // x24
  const MethodInfo *v23; // x1
  int32_t SvtId; // w0
  ServantVoiceEntity_o *SvtEquipVoiceEntity; // x0
  ServantVoiceEntity_o *v26; // x24
  _BOOL4 v27; // w26
  UnityEngine_Object_o *baseCollider; // x24
  int v29; // w27
  int v30; // s0
  float v31; // s1
  float v33; // s1
  UnityEngine_Object_o *baseSprite; // x24
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  _BOOL4 v36; // w27
  _BOOL4 v37; // w24
  float v38; // s0
  float v39; // s2
  float v40; // s9
  float v41; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  float v43; // s1
  float v44; // s8
  UnityEngine_GameObject_o *v45; // x0
  UnityEngine_GameObject_o *v46; // x0
  float v47; // s0
  float v48; // s2
  float v49; // s8
  float v50; // s9
  UnityEngine_Object_o *newIcon; // x21
  Il2CppObject *Component_object; // x23
  float v53; // s0
  float v54; // s3
  float v55; // s1
  float v56; // s2
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BD8CDA & 1) == 0 )
  {
    sub_1C21E38(&Method_DataManager_GetMaster_ServantVoiceMaster___);
    sub_1C21E38(&DataManager_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&RubyLabelHelper_TypeInfo);
    byte_4BD8CDA = 1;
  }
  this->fields.dispMode = mode;
  if ( !item || !mode || !this->fields.isFirst )
    return;
  messageLabel = this->fields.messageLabel;
  this->fields.isFirst = 0;
  if ( !messageLabel )
    goto LABEL_86;
  if ( !text )
    goto LABEL_86;
  v15 = *((_DWORD *)messageLabel + 43);
  UIWidget__set_height((UIWidget_o *)messageLabel, *((_DWORD *)messageLabel + 106) * text->fields._stringLength, 0LL);
  v16 = this->fields.messageLabel;
  rubyPrefab = this->fields.rubyPrefab;
  mainPrefab = this->fields.mainPrefab;
  v19 = (RubyLabelHelper_o *)sub_1C22084(RubyLabelHelper_TypeInfo);
  RubyLabelHelper___ctor(v19, v16, mainPrefab, rubyPrefab, 0LL);
  if ( !v19 )
    goto LABEL_86;
  RubyLabelHelper__SetText(v19, text, 0LL);
  Size = RubyLabelHelper__get_Size(v19, 0LL);
  if ( Size.fields.y == INFINITY )
    y = 0x80000000;
  else
    y = (int)Size.fields.y;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2FAFDB0 *)Method_DataManager_GetMaster_ServantVoiceMaster___);
  SvtId = ServantStatusListViewItem__get_SvtId(item, v23);
  messageLabel = (void *)ServantVoiceMaster__getSvtVoiceId(SvtId, 0LL);
  this->fields.svtId = (int)messageLabel;
  if ( !Master_object )
    goto LABEL_86;
  SvtEquipVoiceEntity = ServantVoiceMaster__GetSvtEquipVoiceEntity(
                          (ServantVoiceMaster_o *)Master_object,
                          (int32_t)messageLabel,
                          0LL);
  v27 = item->fields.svtEntity
     && (v26 = SvtEquipVoiceEntity, ServantEntity__get_IsServantEquip(item->fields.svtEntity, 0LL))
     && v26 != 0LL;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v29 = y - v15;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
  {
    messageLabel = this->fields.baseCollider;
    if ( !messageLabel )
      goto LABEL_86;
    *(UnityEngine_Vector3_o *)&v30 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)messageLabel, 0LL);
    messageLabel = this->fields.baseCollider;
    if ( !messageLabel )
      goto LABEL_86;
    v33 = v31 + (float)v29;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)messageLabel, *(UnityEngine_Vector3_o *)&v30, 0LL);
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    messageLabel = this->fields.baseSprite;
    if ( !messageLabel )
      goto LABEL_86;
    UIWidget__set_height((UIWidget_o *)messageLabel, *((_DWORD *)messageLabel + 43) + v29, 0LL);
  }
  commandCodeEntity = item->fields.commandCodeEntity;
  if ( commandCodeEntity )
    v36 = 0;
  else
    v36 = v27;
  if ( commandCodeEntity )
  {
    messageLabel = this->fields.titleCommandCodeBase;
    if ( !messageLabel )
      goto LABEL_86;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 1, 0LL);
    messageLabel = this->fields.titleServantBase;
    if ( !messageLabel )
      goto LABEL_86;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0LL);
    messageLabel = this->fields.titleEquipBase;
    if ( !messageLabel )
      goto LABEL_86;
    goto LABEL_46;
  }
  messageLabel = item->fields.svtEntity;
  if ( !messageLabel
    || ((messageLabel = (void *)ServantEntity__get_IsServantEquip((ServantEntity_o *)messageLabel, 0LL),
         ((unsigned __int8)messageLabel & 1) == 0)
      ? (v37 = v36)
      : (v37 = 0),
        !this->fields.titleServantBase) )
  {
LABEL_86:
    sub_1C22094(messageLabel, item);
  }
  if ( ((unsigned __int8)messageLabel & 1) != 0 )
  {
    UnityEngine_GameObject__SetActive(this->fields.titleServantBase, 0, 0LL);
    messageLabel = this->fields.titleEquipBase;
    if ( messageLabel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 1, 0LL);
      messageLabel = this->fields.titleCommandCodeBase;
      if ( messageLabel )
      {
LABEL_46:
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0LL);
        goto LABEL_47;
      }
    }
    goto LABEL_86;
  }
  UnityEngine_GameObject__SetActive(this->fields.titleServantBase, 1, 0LL);
  messageLabel = this->fields.titleEquipBase;
  if ( !messageLabel )
    goto LABEL_86;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0LL);
  messageLabel = this->fields.titleCommandCodeBase;
  if ( !messageLabel )
    goto LABEL_86;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 0, 0LL);
  messageLabel = this->fields.titleServantBase;
  if ( !messageLabel )
    goto LABEL_86;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)messageLabel,
                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  messageLabel = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  v27 = v36;
  if ( ((unsigned __int8)messageLabel & 1) == 0 )
    goto LABEL_47;
  v53 = 0.5;
  if ( isOpen )
    v53 = 1.0;
  if ( !Component_object )
    goto LABEL_86;
  v54 = 1.0;
  v55 = v53;
  v56 = v53;
  UIWidget__set_color((UIWidget_o *)Component_object, *(UnityEngine_Color_o *)&v53, 0LL);
  v27 = v37;
LABEL_47:
  messageLabel = this->fields.titleBase;
  if ( !messageLabel )
    goto LABEL_86;
  messageLabel = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)messageLabel, 0LL);
  if ( !messageLabel )
    goto LABEL_86;
  *(UnityEngine_Vector3_o *)&v38 = UnityEngine_Transform__get_localPosition(
                                     (UnityEngine_Transform_o *)messageLabel,
                                     0LL);
  messageLabel = this->fields.titleBase;
  if ( !messageLabel )
    goto LABEL_86;
  v40 = v38;
  v41 = v39;
  messageLabel = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)messageLabel, 0LL);
  if ( !messageLabel )
    goto LABEL_86;
  v57.fields.x = v40;
  v57.fields.y = (float)(Size.fields.y * 0.5) + 20.0;
  v57.fields.z = v41;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)messageLabel, v57, 0LL);
  if ( v27 )
  {
    messageLabel = this->fields.playScriptButton;
    if ( !messageLabel )
      goto LABEL_86;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0LL);
    GameObjectExtensions__SetLocalPositionY(
      gameObject,
      (float)((float)(Size.fields.y * 0.5) + 20.0) + this->fields.SCRIPT_BUTTON_ADD_POS_Y,
      0LL);
    messageLabel = this->fields.playScriptButton;
    if ( !messageLabel )
      goto LABEL_86;
    messageLabel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0LL);
    if ( !messageLabel )
      goto LABEL_86;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)messageLabel, 1, 0LL);
    messageLabel = this->fields.playScriptButton;
    if ( !messageLabel )
      goto LABEL_86;
    messageLabel = UnityEngine_Component__get_transform((UnityEngine_Component_o *)messageLabel, 0LL);
    if ( !messageLabel )
      goto LABEL_86;
    *(UnityEngine_Vector3_o *)(&v43 - 1) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)messageLabel,
                                             0LL);
    messageLabel = this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_86;
    v44 = v43;
    v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0LL);
    GameObjectExtensions__SetLocalPositionY(v45, v44 + this->fields.MESSAGE_LABEL_ADD_POS_Y, 0LL);
    messageLabel = this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_86;
    UIWidget__set_height((UIWidget_o *)messageLabel, y, 0LL);
    messageLabel = this->fields.baseSprite;
    if ( !messageLabel )
      goto LABEL_86;
    v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0LL);
    GameObjectExtensions__SetLocalPositionY(v46, this->fields.BASE_SPRITE_ADD_POS_Y, 0LL);
    messageLabel = this->fields.baseSprite;
    if ( !messageLabel )
      goto LABEL_86;
    UIWidget__set_height((UIWidget_o *)messageLabel, *((_DWORD *)messageLabel + 43) + 64, 0LL);
    messageLabel = this->fields.titleEquipBase;
    if ( !messageLabel )
      goto LABEL_86;
    messageLabel = UnityEngine_GameObject__GetComponent_object_(
                     (UnityEngine_GameObject_o *)messageLabel,
                     (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !messageLabel )
      goto LABEL_86;
    UISprite__set_spriteName((UISprite_o *)messageLabel, this->fields.TITLE_SPRITE_NAME, 0LL);
  }
  else
  {
    messageLabel = this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_86;
    messageLabel = UnityEngine_Component__get_transform((UnityEngine_Component_o *)messageLabel, 0LL);
    if ( !messageLabel )
      goto LABEL_86;
    *(UnityEngine_Vector3_o *)&v47 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)messageLabel,
                                       0LL);
    messageLabel = this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_86;
    v49 = v47;
    v50 = v48;
    UIWidget__set_height((UIWidget_o *)messageLabel, y, 0LL);
    messageLabel = this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_86;
    messageLabel = UnityEngine_Component__get_transform((UnityEngine_Component_o *)messageLabel, 0LL);
    if ( !messageLabel )
      goto LABEL_86;
    v58.fields.y = (float)(Size.fields.y * 0.5) + -14.0;
    v58.fields.x = v49;
    v58.fields.z = v50;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)messageLabel, v58, 0LL);
  }
  newIcon = (UnityEngine_Object_o *)this->fields.newIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(newIcon, 0LL, 0LL) )
  {
    messageLabel = this->fields.newIcon;
    if ( !messageLabel )
      goto LABEL_86;
    ShiningIconComponent__Set_39478664((ShiningIconComponent_o *)messageLabel, isNew, 0LL);
  }
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  if ( (byte_4BD8CE2 & 1) == 0 )
  {
    sub_1C21E38(&ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo);
    byte_4BD8CE2 = 1;
  }
  v1 = (Il2CppObject *)sub_1C22084(ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->static_fields->__9 = (struct ServantStatusFlavorTextListViewItemDrawText___c_o *)v1;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->static_fields,
    (int64_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c___ctor(
        ServantStatusFlavorTextListViewItemDrawText___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c___PlayScript_b__41_1(
        ServantStatusFlavorTextListViewItemDrawText___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c___RefreshUI_b__42_1(
        ServantStatusFlavorTextListViewItemDrawText___c_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0___ctor(
        ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0___OnClickPlayScript_b__0(
        ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *v4; // x19
  struct ServantStatusFlavorTextListViewItemDrawText_o *_4__this; // x20
  Il2CppObject *Object_object__49880776; // x21
  Il2CppObject *v7; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct ServantStatusFlavorTextListViewItemDrawText_o *v14; // x8
  struct ServantStatusFlavorTextListViewItemDrawText_o *v15; // x8
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *v16; // x20
  struct ServantStatusFlavorTextListViewItemDrawText_o *v17; // x8
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *v18; // x20
  struct ServantStatusFlavorTextListViewItemDrawText_o *v19; // x8
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *v20; // x20
  const MethodInfo *v21; // x3

  v4 = this;
  if ( (byte_4BD8CE3 & 1) == 0 )
  {
    sub_1C21E38(&Method_AssetData_GetObject_GameObject____77626288);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BD8CE3 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this || !data )
    goto LABEL_24;
  Object_object__49880776 = AssetData__GetObject_object__49880776(
                              data,
                              _4__this->fields.SUMMON_BG_OBJECT_NAME,
                              (const MethodInfo_2F91EC8 *)Method_AssetData_GetObject_GameObject____77626288);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__Instantiate_object_(
         Object_object__49880776,
         (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
  _4__this->fields.summonBg = (struct UnityEngine_GameObject_o *)v7;
  sub_1C21DDC((PartyOrganizationUtility_o *)&_4__this->fields.summonBg, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  v14 = v4->fields.__4__this;
  if ( !v14 )
    goto LABEL_24;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)v14->fields.summonBg;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)UnityEngine_GameObject__get_transform(
                                                                                  (UnityEngine_GameObject_o *)this,
                                                                                  0LL);
  v15 = v4->fields.__4__this;
  if ( !v15 )
    goto LABEL_24;
  v16 = this;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)v15->fields.summonBgRoot;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)UnityEngine_GameObject__get_transform(
                                                                                  (UnityEngine_GameObject_o *)this,
                                                                                  0LL);
  if ( !v16 )
    goto LABEL_24;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v16, (UnityEngine_Transform_o *)this, 0LL);
  v17 = v4->fields.__4__this;
  if ( !v17 )
    goto LABEL_24;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)v17->fields.summonBg;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)UnityEngine_GameObject__get_transform(
                                                                                  (UnityEngine_GameObject_o *)this,
                                                                                  0LL);
  v18 = this;
  if ( !byte_4BD6BB1 )
  {
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB1 = 1;
  }
  if ( !v18 )
    goto LABEL_24;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v18,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  v19 = v4->fields.__4__this;
  if ( !v19 )
    goto LABEL_24;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)v19->fields.summonBg;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)UnityEngine_GameObject__get_transform(
                                                                                  (UnityEngine_GameObject_o *)this,
                                                                                  0LL);
  v20 = this;
  if ( !byte_4BD6BB6 )
  {
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
    byte_4BD6BB6 = 1;
  }
  if ( !v20
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v20,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        (this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)v4->fields.__4__this) == 0LL) )
  {
LABEL_24:
    sub_1C22094(this, data);
  }
  ServantStatusFlavorTextListViewItemDrawText__PlayScript(
    (ServantStatusFlavorTextListViewItemDrawText_o *)this,
    v4->fields.inactiveCameras,
    v4->fields.inactivePrefabs,
    v21);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0___ctor(
        ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0___PlayScript_b__0(
        ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  struct ServantStatusFlavorTextListViewItemDrawText_o *_4__this; // x20
  void *inactivePrefabs; // x0
  __int64 v5; // x1
  float v6; // s0
  float v7; // s1
  float v8; // s2
  float v9; // s3
  struct ServantStatusFlavorTextListViewItemDrawText_o *v10; // x8
  UnityEngine_Object_o *battleBg; // x20
  struct ServantStatusFlavorTextListViewItemDrawText_o *v12; // x8
  __int64 v13; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v17; // x8
  CommonUI_o *v18; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v20; // x21
  Il2CppObject *v21; // x22
  struct ServantStatusFlavorTextListViewItemDrawText___c_StaticFields *static_fields; // x0
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  struct ServantStatusFlavorTextListViewItemDrawText_o *v29; // x8
  int32_t svtId; // w20
  System_Action_o *_9__2; // x21
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+20h] [xbp-70h] BYREF
  UnityEngine_Color_o v40; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BD8CE4 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&ScriptManager_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_ServantStatusFlavorTextListViewItemDrawText___c__PlayScript_b__41_1__);
    sub_1C21E38(&Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0__PlayScript_b__2__);
    sub_1C21E38(&ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo);
    byte_4BD8CE4 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  _4__this = this->fields.__4__this;
  *(UnityEngine_Color_o *)&v6 = UnityEngine_RenderSettings__get_ambientLight(0LL);
  if ( !_4__this )
    goto LABEL_34;
  _4__this->fields.ambientLight.fields.r = v6;
  _4__this->fields.ambientLight.fields.g = v7;
  _4__this->fields.ambientLight.fields.b = v8;
  _4__this->fields.ambientLight.fields.a = v9;
  v40.fields.r = 1.0;
  v40.fields.g = 1.0;
  v40.fields.b = 1.0;
  v40.fields.a = 1.0;
  UnityEngine_RenderSettings__set_ambientLight(v40, 0LL);
  v10 = this->fields.__4__this;
  if ( !v10 )
    goto LABEL_34;
  battleBg = (UnityEngine_Object_o *)v10->fields.battleBg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  inactivePrefabs = (void *)UnityEngine_Object__op_Inequality(battleBg, 0LL, 0LL);
  if ( ((unsigned __int8)inactivePrefabs & 1) != 0 )
  {
    v12 = this->fields.__4__this;
    if ( !v12 )
      goto LABEL_34;
    inactivePrefabs = v12->fields.battleBg;
    if ( !inactivePrefabs )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)inactivePrefabs, 0, 0LL);
  }
  inactivePrefabs = this->fields.inactivePrefabs;
  if ( !inactivePrefabs )
    goto LABEL_34;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    (System_Collections_Generic_List_object__o *)inactivePrefabs,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v39 = v38;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v39,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v39.fields._current )
      sub_1C22094(0LL, v13);
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v39.fields._current, 0LL);
    if ( !gameObject )
      sub_1C22094(0LL, v15);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v39,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v17 = AvalonSceneManager_TypeInfo;
  v18 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v17 = AvalonSceneManager_TypeInfo;
  }
  inactivePrefabs = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
  DEFAULT_FADE_TIME = v17->static_fields->DEFAULT_FADE_TIME;
  if ( !ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo);
    inactivePrefabs = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
  }
  v20 = *(System_Action_o **)(*((_QWORD *)inactivePrefabs + 23) + 8LL);
  if ( !v20 )
  {
    if ( !*((_DWORD *)inactivePrefabs + 56) )
    {
      j_il2cpp_runtime_class_init_0(inactivePrefabs);
      inactivePrefabs = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
    }
    v21 = (Il2CppObject *)**((_QWORD **)inactivePrefabs + 23);
    v20 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v20, v21, Method_ServantStatusFlavorTextListViewItemDrawText___c__PlayScript_b__41_1__, 0LL);
    static_fields = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->static_fields;
    static_fields->__9__41_1 = v20;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__41_1, (int64_t)v20, v23, v24, v25, v26, v27, v28);
  }
  if ( !v18
    || (inactivePrefabs = (void *)CommonUI__maskFadein(v18, DEFAULT_FADE_TIME, v20, 0LL),
        (v29 = this->fields.__4__this) == 0LL) )
  {
LABEL_34:
    sub_1C22094(inactivePrefabs, v5);
  }
  svtId = v29->fields.svtId;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0__PlayScript_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v32, v33, v34, v35, v36, v37);
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__PlayGacha(svtId, 0, 0, _9__2, 0, -1, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0___PlayScript_b__2(
        ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.__4__this )
    sub_1C22094(this, method);
  ServantStatusFlavorTextListViewItemDrawText__RefreshUI(
    this->fields.__4__this,
    this->fields.inactiveCameras,
    this->fields.inactivePrefabs,
    v2);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0___ctor(
        ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0___RefreshUI_b__0(
        ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *this,
        const MethodInfo *method)
{
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o **v2; // x19
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v3; // x8
  UnityEngine_Object_o *monitor; // x20
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v5; // x8
  UnityEngine_Object_o *v6; // x20
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v13; // x8
  System_String_o *_4__this; // x20
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v15; // x8
  UnityEngine_Object_o *v16; // x20
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v17; // x8
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  UnityEngine_Color_o *v24; // x8
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v25; // x8
  UnityEngine_Object_o *klass; // x20
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v27; // x8
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  __int64 v34; // x1
  __int64 v35; // x1
  const MethodInfo *v36; // x3
  ServantStatusFlavorTextListViewItemDrawText_o *v37; // x0
  Il2CppObject *current; // x20
  __int64 v39; // x0
  __int64 v40; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v42; // x1
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v43; // x8
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v45; // x8
  CommonUI_o *v46; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *items; // x20
  Il2CppObject *v49; // x21
  struct ServantStatusFlavorTextListViewItemDrawText___c_StaticFields *static_fields; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+40h] [xbp-80h] BYREF

  v2 = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o **)this;
  if ( (byte_4BD8CE5 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&AvalonSceneManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_Camera__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_Camera__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_Camera__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Camera__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&Method_ServantStatusFlavorTextListViewItemDrawText___c__RefreshUI_b__42_1__);
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)sub_1C21E38(&ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo);
    byte_4BD8CE5 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v58, 0, sizeof(v58));
  v3 = v2[2];
  if ( !v3 )
    goto LABEL_59;
  monitor = (UnityEngine_Object_o *)v3[2].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)UnityEngine_Object__op_Inequality(
                                                                                  monitor,
                                                                                  0LL,
                                                                                  0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v5 = v2[2];
    if ( !v5 )
      goto LABEL_59;
    v6 = (UnityEngine_Object_o *)v5[2].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70869612(v6, 0LL);
    this = v2[2];
    if ( !this )
      goto LABEL_59;
    this[2].monitor = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this[2].monitor, 0LL, v7, v8, v9, v10, v11, v12);
  }
  v13 = v2[2];
  if ( !v13 )
    goto LABEL_59;
  _4__this = (System_String_o *)v13[3].fields.__4__this;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(_4__this, 0LL);
  v15 = v2[2];
  if ( !v15 )
    goto LABEL_59;
  v16 = (UnityEngine_Object_o *)v15[2].fields.__4__this;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)UnityEngine_Object__op_Inequality(
                                                                                  v16,
                                                                                  0LL,
                                                                                  0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v17 = v2[2];
    if ( !v17 )
      goto LABEL_59;
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)v17[2].fields.__4__this;
    if ( !this )
      goto LABEL_59;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = v2[2];
    if ( !this )
      goto LABEL_59;
    this[2].fields.__4__this = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this[2].fields, 0LL, v18, v19, v20, v21, v22, v23);
  }
  v24 = (UnityEngine_Color_o *)v2[2];
  if ( !v24 )
    goto LABEL_59;
  UnityEngine_RenderSettings__set_ambientLight(v24[4], 0LL);
  v25 = v2[2];
  if ( !v25 )
    goto LABEL_59;
  klass = (UnityEngine_Object_o *)v25[2].klass;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)UnityEngine_Object__op_Inequality(
                                                                                  klass,
                                                                                  0LL,
                                                                                  0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v27 = v2[2];
    if ( !v27 )
      goto LABEL_59;
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)v27[2].klass;
    if ( !this )
      goto LABEL_59;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = v2[2];
    if ( !this )
      goto LABEL_59;
    this[2].klass = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this[2], 0LL, v28, v29, v30, v31, v32, v33);
  }
  this = v2[3];
  if ( !this )
    goto LABEL_59;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v57,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_Camera__GetEnumerator__);
  for ( i = v57;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_Camera__MoveNext__);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)i.fields._current, 1, 0LL) )
  {
    if ( !i.fields._current )
      sub_1C22094(0LL, v34);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_Camera__Dispose__);
  this = v2[4];
  if ( !this )
    goto LABEL_59;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v57,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_364FBAC *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v58 = v57;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v58,
            (const MethodInfo_33E129C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    v37 = (ServantStatusFlavorTextListViewItemDrawText_o *)v2[2];
    if ( !v37 )
      sub_1C22094(0LL, v35);
    current = v58.fields._current;
    ServantStatusFlavorTextListViewItemDrawText__SetButtonEnable(
      v37,
      (UnityEngine_GameObject_o *)v58.fields._current,
      1,
      v36);
    if ( !current )
      sub_1C22094(v39, v40);
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)current, 0LL);
    if ( !gameObject )
      sub_1C22094(0LL, v42);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v58,
    (const MethodInfo_33E1298 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v43 = v2[2];
  if ( !v43 )
    goto LABEL_59;
  BYTE4(v43[1].fields.__4__this) = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v45 = AvalonSceneManager_TypeInfo;
  v46 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v45 = AvalonSceneManager_TypeInfo;
  }
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
  DEFAULT_FADE_TIME = v45->static_fields->DEFAULT_FADE_TIME;
  if ( !ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo);
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
  }
  items = (System_Action_o *)this[4].fields.inactiveCameras->fields._items;
  if ( !items )
  {
    if ( !LODWORD(this[5].fields.inactiveCameras) )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
    }
    v49 = (Il2CppObject *)this[4].fields.inactiveCameras->klass;
    items = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(items, v49, Method_ServantStatusFlavorTextListViewItemDrawText___c__RefreshUI_b__42_1__, 0LL);
    static_fields = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->static_fields;
    static_fields->__9__42_1 = items;
    sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->__9__42_1, (int64_t)items, v51, v52, v53, v54, v55, v56);
  }
  if ( !v46 )
LABEL_59:
    sub_1C22094(this, method);
  CommonUI__maskFadein(v46, DEFAULT_FADE_TIME, items, 0LL);
}