void __fastcall ServantStatusFlavorTextListViewItemDrawText___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B12A72 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusFlavorTextListViewItemDrawText_TypeInfo, v1, v2);
    byte_4B12A72 = 1;
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  int64_t v55; // x1
  int64_t v56; // x1
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int64_t v63; // x1
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  int64_t v70; // x1
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  int64_t v77; // x1
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  int64_t v84; // x1
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7
  int64_t v91; // x1
  int64_t v92; // x2
  int32_t v93; // w3
  System_String_o *v94; // x4
  BattleSetupInfo_o *v95; // x5
  FollowerInfo_o *v96; // x6
  PartyListViewItem_o *v97; // x7
  __int64 v98; // x1
  __int64 v99; // x2
  __int64 v100; // x3
  System_Collections_Generic_List_object__o *v101; // x20
  __int64 v102; // x0
  Il2CppObject *v103; // x1
  int64_t v104; // x2
  int32_t v105; // w3
  System_String_o *v106; // x4
  BattleSetupInfo_o *v107; // x5
  FollowerInfo_o *v108; // x6
  PartyListViewItem_o *v109; // x7
  struct System_Object_array *items; // x8
  _QWORD *v111; // x9
  __int64 size; // x10
  Il2CppClass **v113; // x0
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  struct System_Object_array *v120; // x8
  _QWORD *v121; // x9
  __int64 v122; // x10
  Il2CppClass **v123; // x0
  int64_t v124; // x2
  int32_t v125; // w3
  System_String_o *v126; // x4
  BattleSetupInfo_o *v127; // x5
  FollowerInfo_o *v128; // x6
  PartyListViewItem_o *v129; // x7
  struct System_Object_array *v130; // x8
  _QWORD *v131; // x9
  __int64 v132; // x10
  Il2CppClass **v133; // x0
  int64_t v134; // x2
  int32_t v135; // w3
  System_String_o *v136; // x4
  BattleSetupInfo_o *v137; // x5
  FollowerInfo_o *v138; // x6
  PartyListViewItem_o *v139; // x7
  struct System_Object_array *v140; // x8
  _QWORD *v141; // x9
  __int64 v142; // x10
  Il2CppClass **v143; // x0
  int64_t v144; // x2
  int32_t v145; // w3
  System_String_o *v146; // x4
  BattleSetupInfo_o *v147; // x5
  FollowerInfo_o *v148; // x6
  PartyListViewItem_o *v149; // x7
  struct System_Object_array *v150; // x8
  _QWORD *v151; // x9
  __int64 v152; // x10
  Il2CppClass **v153; // x0
  int64_t v154; // x2
  int32_t v155; // w3
  System_String_o *v156; // x4
  BattleSetupInfo_o *v157; // x5
  FollowerInfo_o *v158; // x6
  PartyListViewItem_o *v159; // x7
  __int64 v160; // x1
  __int64 v161; // x2
  __int64 v162; // x3
  System_Collections_Generic_List_object__o *v163; // x20
  int64_t v164; // x2
  int32_t v165; // w3
  System_String_o *v166; // x4
  BattleSetupInfo_o *v167; // x5
  FollowerInfo_o *v168; // x6
  PartyListViewItem_o *v169; // x7
  _QWORD *v170; // x9
  struct System_Object_array *v171; // x8
  __int64 v172; // x10
  Il2CppClass **v173; // x0
  int64_t v174; // x2
  int32_t v175; // w3
  System_String_o *v176; // x4
  BattleSetupInfo_o *v177; // x5
  FollowerInfo_o *v178; // x6
  PartyListViewItem_o *v179; // x7
  struct System_Object_array *v180; // x8
  _QWORD *v181; // x9
  __int64 v182; // x10
  Il2CppClass **v183; // x0
  int64_t v184; // x2
  int32_t v185; // w3
  System_String_o *v186; // x4
  BattleSetupInfo_o *v187; // x5
  FollowerInfo_o *v188; // x6
  PartyListViewItem_o *v189; // x7
  struct System_Object_array *v190; // x8
  _QWORD *v191; // x9
  __int64 v192; // x10
  Il2CppClass **v193; // x0
  int64_t v194; // x2
  int32_t v195; // w3
  System_String_o *v196; // x4
  BattleSetupInfo_o *v197; // x5
  FollowerInfo_o *v198; // x6
  PartyListViewItem_o *v199; // x7
  struct System_Object_array *v200; // x8
  _QWORD *v201; // x9
  __int64 v202; // x10
  Il2CppClass **v203; // x0
  int64_t v204; // x2
  int32_t v205; // w3
  System_String_o *v206; // x4
  BattleSetupInfo_o *v207; // x5
  FollowerInfo_o *v208; // x6
  PartyListViewItem_o *v209; // x7
  struct System_Object_array *v210; // x8
  _QWORD *v211; // x9
  __int64 v212; // x10
  Il2CppClass **v213; // x0
  int64_t v214; // x2
  int32_t v215; // w3
  System_String_o *v216; // x4
  BattleSetupInfo_o *v217; // x5
  FollowerInfo_o *v218; // x6
  PartyListViewItem_o *v219; // x7
  __int64 v220; // x1
  __int64 v221; // x2
  __int64 v222; // x3
  System_Collections_Generic_List_object__o *v223; // x20
  int64_t v224; // x2
  int32_t v225; // w3
  System_String_o *v226; // x4
  BattleSetupInfo_o *v227; // x5
  FollowerInfo_o *v228; // x6
  PartyListViewItem_o *v229; // x7
  _QWORD *v230; // x9
  struct System_Object_array *v231; // x8
  __int64 v232; // x10
  Il2CppClass **v233; // x0
  int64_t v234; // x2
  int32_t v235; // w3
  System_String_o *v236; // x4
  BattleSetupInfo_o *v237; // x5
  FollowerInfo_o *v238; // x6
  PartyListViewItem_o *v239; // x7
  struct System_Object_array *v240; // x8
  _QWORD *v241; // x9
  __int64 v242; // x10
  Il2CppClass **v243; // x0
  int64_t v244; // x2
  int32_t v245; // w3
  System_String_o *v246; // x4
  BattleSetupInfo_o *v247; // x5
  FollowerInfo_o *v248; // x6
  PartyListViewItem_o *v249; // x7
  struct System_Object_array *v250; // x8
  _QWORD *v251; // x9
  __int64 v252; // x10
  Il2CppClass **v253; // x0
  int64_t v254; // x2
  int32_t v255; // w3
  System_String_o *v256; // x4
  BattleSetupInfo_o *v257; // x5
  FollowerInfo_o *v258; // x6
  PartyListViewItem_o *v259; // x7
  struct System_Object_array *v260; // x8
  _QWORD *v261; // x9
  __int64 v262; // x10
  Il2CppClass **v263; // x0
  int64_t v264; // x2
  int32_t v265; // w3
  System_String_o *v266; // x4
  BattleSetupInfo_o *v267; // x5
  FollowerInfo_o *v268; // x6
  PartyListViewItem_o *v269; // x7

  if ( (byte_4B12A71 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v11, v12);
    sub_1BCA7E0(&StringLiteral_17338/*"bg(Clone)/bg10500"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_13234/*"SummonBgRoot"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_13394/*"SystemUICamera"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_3292/*"Bg/10500"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_6189/*"EquipGraphListMenuPrefab(Clone)"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_12804/*"ServantStatusDialogPrefab(Clone)"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_3372/*"BtnBg"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_14704/*"TouchCamera"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_4528/*"ChoiceButton"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_3294/*"BgCamera"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_4703/*"CommonUI"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_6976/*"FrontCommonUICamera"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_17337/*"bg"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_4712/*"CommonUICamera"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_13251/*"SupportServantEquipListMenuPrefab(Clone)"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_8592/*"LockButton"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_12788/*"ServantEquipStatusDialogPrefab(Clone)"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_13145/*"StatusButton"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_11335/*"RecommendSupportEquipSelectListMenuPrefab(Clone)"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_20545/*"img_index_02"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_7204/*"Ground/Field/bg(Clone)"*/, v53, v54);
    byte_4B12A71 = 1;
  }
  v55 = StringLiteral_20545/*"img_index_02"*/;
  this->fields.TITLE_SPRITE_NAME = (struct System_String_o *)StringLiteral_20545/*"img_index_02"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.TITLE_SPRITE_NAME, v55, v2, v3, v4, v5, v6, v7);
  this->fields.MESSAGE_LABEL_ADD_POS_Y = -45.0;
  *(_QWORD *)&this->fields.BASE_SPRITE_ADD_POS_Y = 0xC25C0000C2080000LL;
  v56 = StringLiteral_4703/*"CommonUI"*/;
  this->fields.COMMON_UI = (struct System_String_o *)StringLiteral_4703/*"CommonUI"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.COMMON_UI, v56, v57, v58, v59, v60, v61, v62);
  v63 = StringLiteral_7204/*"Ground/Field/bg(Clone)"*/;
  this->fields.BATTLE_BG_OBJECT = (struct System_String_o *)StringLiteral_7204/*"Ground/Field/bg(Clone)"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.BATTLE_BG_OBJECT, v63, v64, v65, v66, v67, v68, v69);
  v70 = StringLiteral_17338/*"bg(Clone)/bg10500"*/;
  this->fields.SUMMON_BG_OBJECT = (struct System_String_o *)StringLiteral_17338/*"bg(Clone)/bg10500"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.SUMMON_BG_OBJECT, v70, v71, v72, v73, v74, v75, v76);
  v77 = StringLiteral_13234/*"SummonBgRoot"*/;
  this->fields.SUMMON_BG_ROOT = (struct System_String_o *)StringLiteral_13234/*"SummonBgRoot"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.SUMMON_BG_ROOT, v77, v78, v79, v80, v81, v82, v83);
  v84 = StringLiteral_3292/*"Bg/10500"*/;
  this->fields.SUMMON_BG_ASSET_NAME = (struct System_String_o *)StringLiteral_3292/*"Bg/10500"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.SUMMON_BG_ASSET_NAME, v84, v85, v86, v87, v88, v89, v90);
  v91 = StringLiteral_17337/*"bg"*/;
  this->fields.SUMMON_BG_OBJECT_NAME = (struct System_String_o *)StringLiteral_17337/*"bg"*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.SUMMON_BG_OBJECT_NAME, v91, v92, v93, v94, v95, v96, v97);
  v101 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_string__TypeInfo,
                                                        v98,
                                                        v99,
                                                        v100);
  System_Collections_Generic_List_object____ctor(
    v101,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v101 )
    goto LABEL_63;
  v103 = (Il2CppObject *)StringLiteral_12804/*"ServantStatusDialogPrefab(Clone)"*/;
  items = v101->fields._items;
  v111 = Method_System_Collections_Generic_List_string__Add__;
  ++v101->fields._version;
  if ( !items )
    goto LABEL_63;
  size = v101->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v101,
      v103,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v111[4] + 192LL) + 112LL));
  }
  else
  {
    v113 = &items->obj.klass + size;
    v101->fields._size = size + 1;
    v113[4] = (Il2CppClass *)v103;
    sub_1BCA784((PartyOrganizationUtility_o *)(v113 + 4), (int64_t)v103, v104, v105, v106, v107, v108, v109);
  }
  v103 = (Il2CppObject *)StringLiteral_12788/*"ServantEquipStatusDialogPrefab(Clone)"*/;
  v120 = v101->fields._items;
  v121 = Method_System_Collections_Generic_List_string__Add__;
  ++v101->fields._version;
  if ( !v120 )
    goto LABEL_63;
  v122 = v101->fields._size;
  if ( (unsigned int)v122 >= v120->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v101,
      v103,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v121[4] + 192LL) + 112LL));
  }
  else
  {
    v123 = &v120->obj.klass + v122;
    v101->fields._size = v122 + 1;
    v123[4] = (Il2CppClass *)v103;
    sub_1BCA784((PartyOrganizationUtility_o *)(v123 + 4), (int64_t)v103, v114, v115, v116, v117, v118, v119);
  }
  v103 = (Il2CppObject *)StringLiteral_6189/*"EquipGraphListMenuPrefab(Clone)"*/;
  v130 = v101->fields._items;
  v131 = Method_System_Collections_Generic_List_string__Add__;
  ++v101->fields._version;
  if ( !v130 )
    goto LABEL_63;
  v132 = v101->fields._size;
  if ( (unsigned int)v132 >= v130->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v101,
      v103,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v131[4] + 192LL) + 112LL));
  }
  else
  {
    v133 = &v130->obj.klass + v132;
    v101->fields._size = v132 + 1;
    v133[4] = (Il2CppClass *)v103;
    sub_1BCA784((PartyOrganizationUtility_o *)(v133 + 4), (int64_t)v103, v124, v125, v126, v127, v128, v129);
  }
  v103 = (Il2CppObject *)StringLiteral_13251/*"SupportServantEquipListMenuPrefab(Clone)"*/;
  v140 = v101->fields._items;
  v141 = Method_System_Collections_Generic_List_string__Add__;
  ++v101->fields._version;
  if ( !v140 )
    goto LABEL_63;
  v142 = v101->fields._size;
  if ( (unsigned int)v142 >= v140->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v101,
      v103,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v141[4] + 192LL) + 112LL));
  }
  else
  {
    v143 = &v140->obj.klass + v142;
    v101->fields._size = v142 + 1;
    v143[4] = (Il2CppClass *)v103;
    sub_1BCA784((PartyOrganizationUtility_o *)(v143 + 4), (int64_t)v103, v134, v135, v136, v137, v138, v139);
  }
  v103 = (Il2CppObject *)StringLiteral_11335/*"RecommendSupportEquipSelectListMenuPrefab(Clone)"*/;
  v150 = v101->fields._items;
  v151 = Method_System_Collections_Generic_List_string__Add__;
  ++v101->fields._version;
  if ( !v150 )
    goto LABEL_63;
  v152 = v101->fields._size;
  if ( (unsigned int)v152 >= v150->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v101,
      v103,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v151[4] + 192LL) + 112LL));
  }
  else
  {
    v153 = &v150->obj.klass + v152;
    v101->fields._size = v152 + 1;
    v153[4] = (Il2CppClass *)v103;
    sub_1BCA784((PartyOrganizationUtility_o *)(v153 + 4), (int64_t)v103, v144, v145, v146, v147, v148, v149);
  }
  this->fields.INACTIVE_PREFABS = (struct System_Collections_Generic_List_string__o *)v101;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.INACTIVE_PREFABS,
    (int64_t)v101,
    v154,
    v155,
    v156,
    v157,
    v158,
    v159);
  v163 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_string__TypeInfo,
                                                        v160,
                                                        v161,
                                                        v162);
  System_Collections_Generic_List_object____ctor(
    v163,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v163 )
    goto LABEL_63;
  v170 = Method_System_Collections_Generic_List_string__Add__;
  v103 = (Il2CppObject *)StringLiteral_3294/*"BgCamera"*/;
  v171 = v163->fields._items;
  ++v163->fields._version;
  if ( !v171 )
    goto LABEL_63;
  v172 = v163->fields._size;
  if ( (unsigned int)v172 >= v171->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v163,
      v103,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v170[4] + 192LL) + 112LL));
  }
  else
  {
    v173 = &v171->obj.klass + v172;
    v163->fields._size = v172 + 1;
    v173[4] = (Il2CppClass *)v103;
    sub_1BCA784((PartyOrganizationUtility_o *)(v173 + 4), (int64_t)v103, v164, v165, v166, v167, v168, v169);
  }
  v103 = (Il2CppObject *)StringLiteral_4712/*"CommonUICamera"*/;
  v180 = v163->fields._items;
  v181 = Method_System_Collections_Generic_List_string__Add__;
  ++v163->fields._version;
  if ( !v180 )
    goto LABEL_63;
  v182 = v163->fields._size;
  if ( (unsigned int)v182 >= v180->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v163,
      v103,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v181[4] + 192LL) + 112LL));
  }
  else
  {
    v183 = &v180->obj.klass + v182;
    v163->fields._size = v182 + 1;
    v183[4] = (Il2CppClass *)v103;
    sub_1BCA784((PartyOrganizationUtility_o *)(v183 + 4), (int64_t)v103, v174, v175, v176, v177, v178, v179);
  }
  v103 = (Il2CppObject *)StringLiteral_6976/*"FrontCommonUICamera"*/;
  v190 = v163->fields._items;
  v191 = Method_System_Collections_Generic_List_string__Add__;
  ++v163->fields._version;
  if ( !v190 )
    goto LABEL_63;
  v192 = v163->fields._size;
  if ( (unsigned int)v192 >= v190->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v163,
      v103,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v191[4] + 192LL) + 112LL));
  }
  else
  {
    v193 = &v190->obj.klass + v192;
    v163->fields._size = v192 + 1;
    v193[4] = (Il2CppClass *)v103;
    sub_1BCA784((PartyOrganizationUtility_o *)(v193 + 4), (int64_t)v103, v184, v185, v186, v187, v188, v189);
  }
  v103 = (Il2CppObject *)StringLiteral_13394/*"SystemUICamera"*/;
  v200 = v163->fields._items;
  v201 = Method_System_Collections_Generic_List_string__Add__;
  ++v163->fields._version;
  if ( !v200 )
    goto LABEL_63;
  v202 = v163->fields._size;
  if ( (unsigned int)v202 >= v200->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v163,
      v103,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v201[4] + 192LL) + 112LL));
  }
  else
  {
    v203 = &v200->obj.klass + v202;
    v163->fields._size = v202 + 1;
    v203[4] = (Il2CppClass *)v103;
    sub_1BCA784((PartyOrganizationUtility_o *)(v203 + 4), (int64_t)v103, v194, v195, v196, v197, v198, v199);
  }
  v103 = (Il2CppObject *)StringLiteral_14704/*"TouchCamera"*/;
  v210 = v163->fields._items;
  v211 = Method_System_Collections_Generic_List_string__Add__;
  ++v163->fields._version;
  if ( !v210 )
    goto LABEL_63;
  v212 = v163->fields._size;
  if ( (unsigned int)v212 >= v210->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v163,
      v103,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v211[4] + 192LL) + 112LL));
  }
  else
  {
    v213 = &v210->obj.klass + v212;
    v163->fields._size = v212 + 1;
    v213[4] = (Il2CppClass *)v103;
    sub_1BCA784((PartyOrganizationUtility_o *)(v213 + 4), (int64_t)v103, v204, v205, v206, v207, v208, v209);
  }
  this->fields.SCRIPT_CAMERAS = (struct System_Collections_Generic_List_string__o *)v163;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.SCRIPT_CAMERAS,
    (int64_t)v163,
    v214,
    v215,
    v216,
    v217,
    v218,
    v219);
  v223 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_string__TypeInfo,
                                                        v220,
                                                        v221,
                                                        v222);
  System_Collections_Generic_List_object____ctor(
    v223,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v223 )
    goto LABEL_63;
  v230 = Method_System_Collections_Generic_List_string__Add__;
  v103 = (Il2CppObject *)StringLiteral_3372/*"BtnBg"*/;
  v231 = v223->fields._items;
  ++v223->fields._version;
  if ( !v231 )
    goto LABEL_63;
  v232 = v223->fields._size;
  if ( (unsigned int)v232 >= v231->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v223,
      v103,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v230[4] + 192LL) + 112LL));
  }
  else
  {
    v233 = &v231->obj.klass + v232;
    v223->fields._size = v232 + 1;
    v233[4] = (Il2CppClass *)v103;
    sub_1BCA784((PartyOrganizationUtility_o *)(v233 + 4), (int64_t)v103, v224, v225, v226, v227, v228, v229);
  }
  v103 = (Il2CppObject *)StringLiteral_13145/*"StatusButton"*/;
  v240 = v223->fields._items;
  v241 = Method_System_Collections_Generic_List_string__Add__;
  ++v223->fields._version;
  if ( !v240 )
    goto LABEL_63;
  v242 = v223->fields._size;
  if ( (unsigned int)v242 >= v240->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v223,
      v103,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v241[4] + 192LL) + 112LL));
  }
  else
  {
    v243 = &v240->obj.klass + v242;
    v223->fields._size = v242 + 1;
    v243[4] = (Il2CppClass *)v103;
    sub_1BCA784((PartyOrganizationUtility_o *)(v243 + 4), (int64_t)v103, v234, v235, v236, v237, v238, v239);
  }
  v103 = (Il2CppObject *)StringLiteral_8592/*"LockButton"*/;
  v250 = v223->fields._items;
  v251 = Method_System_Collections_Generic_List_string__Add__;
  ++v223->fields._version;
  if ( !v250 )
    goto LABEL_63;
  v252 = v223->fields._size;
  if ( (unsigned int)v252 >= v250->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v223,
      v103,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v251[4] + 192LL) + 112LL));
  }
  else
  {
    v253 = &v250->obj.klass + v252;
    v223->fields._size = v252 + 1;
    v253[4] = (Il2CppClass *)v103;
    sub_1BCA784((PartyOrganizationUtility_o *)(v253 + 4), (int64_t)v103, v244, v245, v246, v247, v248, v249);
  }
  v103 = (Il2CppObject *)StringLiteral_4528/*"ChoiceButton"*/;
  v260 = v223->fields._items;
  v261 = Method_System_Collections_Generic_List_string__Add__;
  ++v223->fields._version;
  if ( !v260 )
LABEL_63:
    sub_1BCAA3C(v102, v103);
  v262 = v223->fields._size;
  if ( (unsigned int)v262 >= v260->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v223,
      v103,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v261[4] + 192LL) + 112LL));
  }
  else
  {
    v263 = &v260->obj.klass + v262;
    v223->fields._size = v262 + 1;
    v263[4] = (Il2CppClass *)v103;
    sub_1BCA784((PartyOrganizationUtility_o *)(v263 + 4), (int64_t)v103, v254, v255, v256, v257, v258, v259);
  }
  this->fields.TARGET_BUTTON_NAME = (struct System_Collections_Generic_List_string__o *)v223;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.TARGET_BUTTON_NAME,
    (int64_t)v223,
    v264,
    v265,
    v266,
    v267,
    v268,
    v269);
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x20
  System_Collections_Generic_List_object__o *INACTIVE_PREFABS; // x0
  __int64 v41; // x1
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  _QWORD *v48; // x0
  System_Reflection_MethodBase_o *v49; // x0
  unsigned int allCamerasCount; // w0
  UnityEngine_Camera_array *v51; // x22
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  System_Collections_Generic_List_object__o *v55; // x23
  System_Collections_Generic_List_GameObject__o **v56; // x21
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  __int64 v63; // x1
  UnityEngine_GameObject_o *v64; // x23
  const MethodInfo *v65; // x3
  __int64 v66; // x1
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  System_Collections_Generic_List_object__o *v73; // x0
  struct System_Object_array *items; // x8
  _QWORD *v75; // x9
  __int64 size; // x10
  Il2CppClass **v77; // x8
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x3
  System_Collections_Generic_List_object__o *v81; // x24
  System_Collections_Generic_List_Camera__o **v82; // x23
  int64_t v83; // x2
  int32_t v84; // w3
  System_String_o *v85; // x4
  BattleSetupInfo_o *v86; // x5
  FollowerInfo_o *v87; // x6
  PartyListViewItem_o *v88; // x7
  int max_length; // w8
  unsigned int v90; // w26
  Il2CppClass **v91; // x8
  UnityEngine_Behaviour_o *v92; // x24
  int64_t v93; // x2
  int32_t v94; // w3
  System_String_o *v95; // x4
  BattleSetupInfo_o *v96; // x5
  FollowerInfo_o *v97; // x6
  PartyListViewItem_o *v98; // x7
  struct System_Object_array *v99; // x8
  _QWORD *v100; // x9
  __int64 v101; // x10
  Il2CppClass **v102; // x8
  __int64 v103; // x1
  UnityEngine_GameObject_o *v104; // x22
  __int64 v105; // x1
  struct UnityEngine_GameObject_o *Deep; // x0
  int64_t v107; // x2
  int32_t v108; // w3
  System_String_o *v109; // x4
  BattleSetupInfo_o *v110; // x5
  FollowerInfo_o *v111; // x6
  PartyListViewItem_o *v112; // x7
  UnityEngine_Object_o *summonBgRoot; // x22
  struct UnityEngine_GameObject_o *v114; // x0
  int64_t v115; // x2
  int32_t v116; // w3
  System_String_o *v117; // x4
  BattleSetupInfo_o *v118; // x5
  FollowerInfo_o *v119; // x6
  PartyListViewItem_o *v120; // x7
  __int64 v121; // x1
  UnityEngine_Object_o *v122; // x22
  __int64 v123; // x1
  const MethodInfo *v124; // x3
  UnityEngine_Object_o *summonBg; // x22
  __int64 v126; // x1
  __int64 v127; // x2
  System_String_o *SUMMON_BG_ASSET_NAME; // x19
  AssetLoader_LoadEndDataHandler_o *v129; // x21
  __int64 v130; // x1
  System_Collections_Generic_List_Enumerator_object__o v131; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v132; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B12A6E & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_Camera___TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__Add__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Camera__Add__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Contains__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__GetEnumerator__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject___ctor__, v21, v22);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Camera___ctor__, v23, v24);
    sub_1BCA7E0(&System_Collections_Generic_List_GameObject__TypeInfo, v25, v26);
    sub_1BCA7E0(&System_Collections_Generic_List_Camera__TypeInfo, v27, v28);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v29, v30);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v31, v32);
    sub_1BCA7E0(&Method_ServantStatusFlavorTextListViewItemDrawText_OnClickPlayScript__, v33, v34);
    sub_1BCA7E0(
      &Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0__OnClickPlayScript_b__0__,
      v35,
      v36);
    sub_1BCA7E0(&ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_TypeInfo, v37, v38);
    byte_4B12A6E = 1;
  }
  memset(&v132, 0, sizeof(v132));
  v39 = sub_1BCAA2C(ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v39, 0LL);
  if ( !v39 )
    goto LABEL_53;
  *(_QWORD *)(v39 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 16), (int64_t)this, v42, v43, v44, v45, v46, v47);
  if ( this->fields.svtId && !this->fields.isScriptPlaying )
  {
    this->fields.isScriptPlaying = 1;
    v48 = Method_ServantStatusFlavorTextListViewItemDrawText_OnClickPlayScript__;
    if ( (*((_BYTE *)Method_ServantStatusFlavorTextListViewItemDrawText_OnClickPlayScript__ + 83) & 2) != 0 )
      v48 = (_QWORD *)sub_1BCA7F8(Method_ServantStatusFlavorTextListViewItemDrawText_OnClickPlayScript__);
    v49 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v48, v48[4]);
    OverwriteAssetSoundName__PlaySystemSe(v49, 8, 0LL);
    allCamerasCount = UnityEngine_Camera__get_allCamerasCount(0LL);
    v51 = (UnityEngine_Camera_array *)sub_1BCA888(UnityEngine_Camera___TypeInfo, allCamerasCount);
    UnityEngine_Camera__GetAllCameras(v51, 0LL);
    v55 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_GameObject__TypeInfo,
                                                         v52,
                                                         v53,
                                                         v54);
    System_Collections_Generic_List_object____ctor(
      v55,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    *(_QWORD *)(v39 + 32) = v55;
    v56 = (System_Collections_Generic_List_GameObject__o **)(v39 + 32);
    sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 32), (int64_t)v55, v57, v58, v59, v60, v61, v62);
    INACTIVE_PREFABS = (System_Collections_Generic_List_object__o *)this->fields.INACTIVE_PREFABS;
    if ( !INACTIVE_PREFABS )
      goto LABEL_53;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v131,
      INACTIVE_PREFABS,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v132 = v131;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v132,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      v64 = UnityEngine_GameObject__Find((System_String_o *)v132.fields._current, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v63);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v64, 0LL, 0LL) )
      {
        ServantStatusFlavorTextListViewItemDrawText__SetButtonEnable(this, v64, 0, v65);
        v73 = (System_Collections_Generic_List_object__o *)*v56;
        if ( !*v56 )
          sub_1BCAA3C(0LL, v66);
        items = v73->fields._items;
        v75 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v73->fields._version;
        if ( !items )
          sub_1BCAA3C(v73, v66);
        size = v73->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v73,
            (Il2CppObject *)v64,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
        }
        else
        {
          v77 = &items->obj.klass + size;
          v73->fields._size = size + 1;
          v77[4] = (Il2CppClass *)v64;
          sub_1BCA784((PartyOrganizationUtility_o *)(v77 + 4), (int64_t)v64, v67, v68, v69, v70, v71, v72);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v132,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    v81 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_Camera__TypeInfo,
                                                         v78,
                                                         v79,
                                                         v80);
    System_Collections_Generic_List_object____ctor(
      v81,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_Camera___ctor__);
    *(_QWORD *)(v39 + 24) = v81;
    v82 = (System_Collections_Generic_List_Camera__o **)(v39 + 24);
    sub_1BCA784((PartyOrganizationUtility_o *)(v39 + 24), (int64_t)v81, v83, v84, v85, v86, v87, v88);
    if ( !v51 )
      goto LABEL_53;
    max_length = v51->max_length;
    if ( max_length >= 1 )
    {
      v90 = 0;
      while ( 1 )
      {
        if ( v90 >= max_length )
          sub_1BCAA44(INACTIVE_PREFABS, v41);
        v91 = &v51->obj.klass + (int)v90;
        v92 = (UnityEngine_Behaviour_o *)v91[4];
        if ( !v92 )
          break;
        INACTIVE_PREFABS = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                          (UnityEngine_Component_o *)v91[4],
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
                                                                          (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_string__Contains__);
        if ( ((unsigned __int8)INACTIVE_PREFABS & 1) == 0 )
        {
          UnityEngine_Behaviour__set_enabled(v92, 0, 0LL);
          INACTIVE_PREFABS = (System_Collections_Generic_List_object__o *)*v82;
          if ( !*v82 )
            break;
          v99 = INACTIVE_PREFABS->fields._items;
          v100 = Method_System_Collections_Generic_List_Camera__Add__;
          ++INACTIVE_PREFABS->fields._version;
          if ( !v99 )
            break;
          v101 = INACTIVE_PREFABS->fields._size;
          if ( (unsigned int)v101 >= v99->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              INACTIVE_PREFABS,
              (Il2CppObject *)v92,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
          }
          else
          {
            v102 = &v99->obj.klass + v101;
            INACTIVE_PREFABS->fields._size = v101 + 1;
            v102[4] = (Il2CppClass *)v92;
            sub_1BCA784((PartyOrganizationUtility_o *)(v102 + 4), (int64_t)v92, v93, v94, v95, v96, v97, v98);
          }
        }
        max_length = v51->max_length;
        if ( (int)++v90 >= max_length )
          goto LABEL_33;
      }
LABEL_53:
      sub_1BCAA3C(INACTIVE_PREFABS, v41);
    }
LABEL_33:
    v104 = UnityEngine_GameObject__Find(this->fields.COMMON_UI, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v103);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v104, 0LL, 0LL) )
    {
      Deep = GameObjectExtensions__FindDeep(v104, this->fields.SUMMON_BG_ROOT, 1, 0LL);
      this->fields.summonBgRoot = Deep;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.summonBgRoot,
        (int64_t)Deep,
        v107,
        v108,
        v109,
        v110,
        v111,
        v112);
    }
    summonBgRoot = (UnityEngine_Object_o *)this->fields.summonBgRoot;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v105);
    if ( UnityEngine_Object__op_Inequality(summonBgRoot, 0LL, 0LL) )
    {
      INACTIVE_PREFABS = (System_Collections_Generic_List_object__o *)this->fields.summonBgRoot;
      if ( !INACTIVE_PREFABS )
        goto LABEL_53;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)INACTIVE_PREFABS, 1, 0LL);
    }
    v114 = UnityEngine_GameObject__Find(this->fields.BATTLE_BG_OBJECT, 0LL);
    this->fields.battleBg = v114;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.battleBg, (int64_t)v114, v115, v116, v117, v118, v119, v120);
    v122 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(this->fields.SUMMON_BG_OBJECT, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v121);
    if ( UnityEngine_Object__op_Inequality(v122, 0LL, 0LL) )
      goto LABEL_48;
    summonBg = (UnityEngine_Object_o *)this->fields.summonBg;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v123);
    if ( UnityEngine_Object__op_Inequality(summonBg, 0LL, 0LL) )
    {
LABEL_48:
      ServantStatusFlavorTextListViewItemDrawText__PlayScript(this, *v82, *v56, v124);
    }
    else
    {
      SUMMON_BG_ASSET_NAME = this->fields.SUMMON_BG_ASSET_NAME;
      v129 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v126, v127, v124);
      AssetLoader_LoadEndDataHandler___ctor(
        v129,
        (Il2CppObject *)v39,
        Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0__OnClickPlayScript_b__0__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v130);
      AssetManager__loadAssetStorage(SUMMON_BG_ASSET_NAME, v129, 1, 0LL);
    }
  }
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText__PlayScript(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        System_Collections_Generic_List_Camera__o *inactiveCameras,
        System_Collections_Generic_List_GameObject__o *inactivePrefabs,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x20
  __int64 v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  Il2CppObject *Instance; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  AvalonSceneManager_c *v40; // x8
  CommonUI_o *v41; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v43; // x21

  if ( (byte_4B12A6F & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, inactiveCameras, inactivePrefabs);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0__PlayScript_b__0__, v11, v12);
    sub_1BCA7E0(&ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0_TypeInfo, v13, v14);
    byte_4B12A6F = 1;
  }
  v15 = sub_1BCAA2C(
          ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0_TypeInfo,
          inactiveCameras,
          inactivePrefabs,
          method);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_8;
  *(_QWORD *)(v15 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 24) = inactivePrefabs;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 24), (int64_t)inactivePrefabs, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v15 + 32) = inactiveCameras;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 32), (int64_t)inactiveCameras, v30, v31, v32, v33, v34, v35);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v40 = AvalonSceneManager_TypeInfo;
  v41 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v37);
    v40 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v40->static_fields->DEFAULT_FADE_TIME;
  v43 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v37, v38, v39);
  System_Action___ctor(
    v43,
    (Il2CppObject *)v15,
    Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0__PlayScript_b__0__,
    0LL);
  if ( !v41 )
LABEL_8:
    sub_1BCAA3C(v16, v17);
  CommonUI__maskFadeout(v41, 1, DEFAULT_FADE_TIME, v43, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText__RefreshUI(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        System_Collections_Generic_List_Camera__o *inactiveCameras,
        System_Collections_Generic_List_GameObject__o *inactivePrefabs,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x20
  __int64 v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  Il2CppObject *Instance; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x3
  AvalonSceneManager_c *v40; // x8
  CommonUI_o *v41; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v43; // x21

  if ( (byte_4B12A70 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, inactiveCameras, inactivePrefabs);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    sub_1BCA7E0(&Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0__RefreshUI_b__0__, v11, v12);
    sub_1BCA7E0(&ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_TypeInfo, v13, v14);
    byte_4B12A70 = 1;
  }
  v15 = sub_1BCAA2C(
          ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_TypeInfo,
          inactiveCameras,
          inactivePrefabs,
          method);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_8;
  *(_QWORD *)(v15 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)this, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v15 + 24) = inactiveCameras;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 24), (int64_t)inactiveCameras, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v15 + 32) = inactivePrefabs;
  sub_1BCA784((PartyOrganizationUtility_o *)(v15 + 32), (int64_t)inactivePrefabs, v30, v31, v32, v33, v34, v35);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v40 = AvalonSceneManager_TypeInfo;
  v41 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v37);
    v40 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v40->static_fields->DEFAULT_FADE_TIME;
  v43 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v37, v38, v39);
  System_Action___ctor(
    v43,
    (Il2CppObject *)v15,
    Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0__RefreshUI_b__0__,
    0LL);
  if ( !v41 )
LABEL_8:
    sub_1BCAA3C(v16, v17);
  CommonUI__maskFadeout(v41, 1, DEFAULT_FADE_TIME, v43, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ServantStatusFlavorTextListViewItemDrawText__SetButtonEnable(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        UnityEngine_GameObject_o *gameObject,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  struct System_Collections_Generic_List_string__o *TARGET_BUTTON_NAME; // x0
  __int64 v20; // x1
  UnityEngine_Object_o *Deep; // x21
  _BOOL8 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x1
  Il2CppObject *Component_object; // x22
  _BOOL8 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x1
  Il2CppObject *v29; // x21
  _BOOL8 v30; // x0
  __int64 v31; // x1
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4B12A6D & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, gameObject, isEnable);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__GetEnumerator__, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    byte_4B12A6D = 1;
  }
  memset(&v33, 0, sizeof(v33));
  TARGET_BUTTON_NAME = this->fields.TARGET_BUTTON_NAME;
  if ( !TARGET_BUTTON_NAME )
    sub_1BCAA3C(0LL, gameObject);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    (System_Collections_Generic_List_object__o *)TARGET_BUTTON_NAME,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v33 = v32;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    Deep = (UnityEngine_Object_o *)GameObjectExtensions__FindDeep(
                                     gameObject,
                                     (System_String_o *)v33.fields._current,
                                     1,
                                     0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
    v22 = UnityEngine_Object__op_Equality(Deep, 0LL, 0LL);
    if ( !v22 )
    {
      if ( !Deep )
        sub_1BCAA3C(v22, v23);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Deep,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
      v26 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( v26 )
      {
        if ( !Component_object )
          sub_1BCAA3C(v26, v27);
        ((void (__fastcall *)(Il2CppObject *, bool, Il2CppMethodPointer))Component_object->klass->vtable[5].method)(
          Component_object,
          isEnable,
          Component_object->klass->vtable[6].methodPtr);
      }
      v29 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)Deep,
              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
      v30 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v29, 0LL, 0LL);
      if ( v30 )
      {
        if ( !v29 )
          sub_1BCAA3C(v30, v31);
        ((void (__fastcall *)(Il2CppObject *, bool, Il2CppMethodPointer))v29->klass->vtable[5].method)(
          v29,
          isEnable,
          v29->klass->vtable[6].methodPtr);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText__SetCondTitle(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        System_String_o *title,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  UnityEngine_GameObject_o *titleServantBase; // x0
  Il2CppObject *Component_object; // x21
  __int64 v15; // x1
  float v16; // s8
  UIWidget_o *titleName; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  float TITLE_NAME_LEFT_POS; // s0
  float v20; // s8
  float v21; // s8
  UILabel_o *v22; // x19

  if ( (byte_4B12A6C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, title, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    sub_1BCA7E0(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo, v7, v8);
    sub_1BCA7E0(&ServantStatusFlavorTextListViewItemDrawText_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v11, v12);
    byte_4B12A6C = 1;
  }
  titleServantBase = this->fields.titleServantBase;
  if ( !titleServantBase )
    goto LABEL_45;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       titleServantBase,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( System_String__IsNullOrEmpty(title, 0LL) )
  {
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    UILabel__set_text((UILabel_o *)titleServantBase, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    {
      titleServantBase = (UnityEngine_GameObject_o *)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
      if ( !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo, title);
      if ( Component_object )
      {
        UISprite__set_spriteName(
          (UISprite_o *)Component_object,
          ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->static_fields->TITLE_BASE_SPRITE_NAME,
          0LL);
        return;
      }
LABEL_45:
      sub_1BCAA3C(titleServantBase, title);
    }
  }
  else
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, title);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    {
      titleServantBase = (UnityEngine_GameObject_o *)ServantStatusFlavorTextListViewItemDrawText2_TypeInfo;
      if ( !ServantStatusFlavorTextListViewItemDrawText2_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText2_TypeInfo, title);
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
    LODWORD(v16) = COERCE_UNSIGNED_INT128(
                     ((long double (__fastcall *)(UnityEngine_GameObject_o *, Il2CppMethodPointer))*(_QWORD *)&titleServantBase->klass[1]._2.naturalAligment)(
                       titleServantBase,
                       titleServantBase->klass[1].vtable._0_Equals.methodPtr));
    if ( !ServantStatusFlavorTextListViewItemDrawText_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText_TypeInfo, title);
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    if ( v16 >= (float)ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH )
    {
      titleServantBase = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)titleServantBase,
                                                       0LL);
      if ( !titleServantBase )
        goto LABEL_45;
      LODWORD(v20) = (unsigned int)UnityEngine_Transform__get_localScale(
                                     (UnityEngine_Transform_o *)titleServantBase,
                                     0LL);
      if ( !ServantStatusFlavorTextListViewItemDrawText_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText_TypeInfo, title);
      titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
      if ( !titleServantBase )
        goto LABEL_45;
      v21 = (float)(1.0 - v20)
          * (float)ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleServantBase, 0LL);
      TITLE_NAME_LEFT_POS = v21
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
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText_TypeInfo, title);
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
    v22 = this->fields.titleName;
    if ( !ServantStatusFlavorTextListViewItemDrawText_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText_TypeInfo, title);
    if ( !v22 )
      goto LABEL_45;
    UILabel__SetCondensedScale(
      v22,
      ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH,
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
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  void *messageLabel; // x0
  int v23; // w28
  UILabel_o *v24; // x25
  UnityEngine_GameObject_o *mainPrefab; // x26
  UnityEngine_GameObject_o *rubyPrefab; // x27
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  RubyLabelHelper_o *v30; // x24
  UnityEngine_Vector2_o v31; // x1
  UnityEngine_Vector2_o Size; // kr00_8
  int32_t y; // w21
  Il2CppObject *Master_object; // x24
  const MethodInfo *v35; // x1
  int32_t SvtId; // w0
  ServantVoiceEntity_o *SvtEquipVoiceEntity; // x0
  __int64 v38; // x1
  ServantVoiceEntity_o *v39; // x24
  _BOOL4 v40; // w26
  UnityEngine_Object_o *baseCollider; // x24
  int v42; // w27
  int v43; // s0
  float v44; // s1
  float v46; // s1
  UnityEngine_Object_o *baseSprite; // x24
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  _BOOL4 v49; // w27
  _BOOL4 v50; // w24
  float v51; // s0
  float v52; // s2
  float v53; // s9
  float v54; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  float v56; // s1
  float v57; // s8
  UnityEngine_GameObject_o *v58; // x0
  UnityEngine_GameObject_o *v59; // x0
  __int64 v60; // x1
  float v61; // s0
  float v62; // s2
  float v63; // s8
  float v64; // s9
  UnityEngine_Object_o *newIcon; // x21
  __int64 v66; // x1
  Il2CppObject *Component_object; // x23
  float v68; // s0
  float v69; // s3
  float v70; // s1
  float v71; // s2
  UnityEngine_Vector3_o v72; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v73; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B12A6B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_ServantVoiceMaster___, item, isOpen);
    sub_1BCA7E0(&DataManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v16, v17);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v18, v19);
    sub_1BCA7E0(&RubyLabelHelper_TypeInfo, v20, v21);
    byte_4B12A6B = 1;
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
  v23 = *((_DWORD *)messageLabel + 43);
  UIWidget__set_height((UIWidget_o *)messageLabel, *((_DWORD *)messageLabel + 106) * text->fields._stringLength, 0LL);
  v24 = this->fields.messageLabel;
  rubyPrefab = this->fields.rubyPrefab;
  mainPrefab = this->fields.mainPrefab;
  v30 = (RubyLabelHelper_o *)sub_1BCAA2C(RubyLabelHelper_TypeInfo, v27, v28, v29);
  RubyLabelHelper___ctor(v30, v24, mainPrefab, rubyPrefab, 0LL);
  if ( !v30 )
    goto LABEL_86;
  RubyLabelHelper__SetText(v30, text, 0LL);
  Size = RubyLabelHelper__get_Size(v30, 0LL);
  if ( Size.fields.y == INFINITY )
    y = 0x80000000;
  else
    y = (int)Size.fields.y;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    ((void (__fastcall *)(_QWORD, _QWORD))j_il2cpp_runtime_class_init_0)(DataManager_TypeInfo, v31);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_ServantVoiceMaster___);
  SvtId = ServantStatusListViewItem__get_SvtId(item, v35);
  messageLabel = (void *)ServantVoiceMaster__getSvtVoiceId(SvtId, 0LL);
  this->fields.svtId = (int)messageLabel;
  if ( !Master_object )
    goto LABEL_86;
  SvtEquipVoiceEntity = ServantVoiceMaster__GetSvtEquipVoiceEntity(
                          (ServantVoiceMaster_o *)Master_object,
                          (int32_t)messageLabel,
                          0LL);
  v40 = item->fields.svtEntity
     && (v39 = SvtEquipVoiceEntity, ServantEntity__get_IsServantEquip(item->fields.svtEntity, 0LL))
     && v39 != 0LL;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
  v42 = y - v23;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
  {
    messageLabel = this->fields.baseCollider;
    if ( !messageLabel )
      goto LABEL_86;
    *(UnityEngine_Vector3_o *)&v43 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)messageLabel, 0LL);
    messageLabel = this->fields.baseCollider;
    if ( !messageLabel )
      goto LABEL_86;
    v46 = v44 + (float)v42;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)messageLabel, *(UnityEngine_Vector3_o *)&v43, 0LL);
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, item);
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    messageLabel = this->fields.baseSprite;
    if ( !messageLabel )
      goto LABEL_86;
    UIWidget__set_height((UIWidget_o *)messageLabel, *((_DWORD *)messageLabel + 43) + v42, 0LL);
  }
  commandCodeEntity = item->fields.commandCodeEntity;
  if ( commandCodeEntity )
    v49 = 0;
  else
    v49 = v40;
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
      ? (v50 = v49)
      : (v50 = 0),
        !this->fields.titleServantBase) )
  {
LABEL_86:
    sub_1BCAA3C(messageLabel, item);
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
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v66);
  messageLabel = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  v40 = v49;
  if ( ((unsigned __int8)messageLabel & 1) == 0 )
    goto LABEL_47;
  v68 = 0.5;
  if ( isOpen )
    v68 = 1.0;
  if ( !Component_object )
    goto LABEL_86;
  v69 = 1.0;
  v70 = v68;
  v71 = v68;
  UIWidget__set_color((UIWidget_o *)Component_object, *(UnityEngine_Color_o *)&v68, 0LL);
  v40 = v50;
LABEL_47:
  messageLabel = this->fields.titleBase;
  if ( !messageLabel )
    goto LABEL_86;
  messageLabel = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)messageLabel, 0LL);
  if ( !messageLabel )
    goto LABEL_86;
  *(UnityEngine_Vector3_o *)&v51 = UnityEngine_Transform__get_localPosition(
                                     (UnityEngine_Transform_o *)messageLabel,
                                     0LL);
  messageLabel = this->fields.titleBase;
  if ( !messageLabel )
    goto LABEL_86;
  v53 = v51;
  v54 = v52;
  messageLabel = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)messageLabel, 0LL);
  if ( !messageLabel )
    goto LABEL_86;
  v72.fields.x = v53;
  v72.fields.y = (float)(Size.fields.y * 0.5) + 20.0;
  v72.fields.z = v54;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)messageLabel, v72, 0LL);
  if ( v40 )
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
    *(UnityEngine_Vector3_o *)(&v56 - 1) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)messageLabel,
                                             0LL);
    messageLabel = this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_86;
    v57 = v56;
    v58 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0LL);
    GameObjectExtensions__SetLocalPositionY(v58, v57 + this->fields.MESSAGE_LABEL_ADD_POS_Y, 0LL);
    messageLabel = this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_86;
    UIWidget__set_height((UIWidget_o *)messageLabel, y, 0LL);
    messageLabel = this->fields.baseSprite;
    if ( !messageLabel )
      goto LABEL_86;
    v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0LL);
    GameObjectExtensions__SetLocalPositionY(v59, this->fields.BASE_SPRITE_ADD_POS_Y, 0LL);
    messageLabel = this->fields.baseSprite;
    if ( !messageLabel )
      goto LABEL_86;
    UIWidget__set_height((UIWidget_o *)messageLabel, *((_DWORD *)messageLabel + 43) + 64, 0LL);
    messageLabel = this->fields.titleEquipBase;
    if ( !messageLabel )
      goto LABEL_86;
    messageLabel = UnityEngine_GameObject__GetComponent_object_(
                     (UnityEngine_GameObject_o *)messageLabel,
                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
    *(UnityEngine_Vector3_o *)&v61 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)messageLabel,
                                       0LL);
    messageLabel = this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_86;
    v63 = v61;
    v64 = v62;
    UIWidget__set_height((UIWidget_o *)messageLabel, y, 0LL);
    messageLabel = this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_86;
    messageLabel = UnityEngine_Component__get_transform((UnityEngine_Component_o *)messageLabel, 0LL);
    if ( !messageLabel )
      goto LABEL_86;
    v73.fields.y = (float)(Size.fields.y * 0.5) + -14.0;
    v73.fields.x = v63;
    v73.fields.z = v64;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)messageLabel, v73, 0LL);
  }
  newIcon = (UnityEngine_Object_o *)this->fields.newIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v60);
  if ( UnityEngine_Object__op_Inequality(newIcon, 0LL, 0LL) )
  {
    messageLabel = this->fields.newIcon;
    if ( !messageLabel )
      goto LABEL_86;
    ShiningIconComponent__Set_38945552((ShiningIconComponent_o *)messageLabel, isNew, 0LL);
  }
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B12A73 & 1) == 0 )
  {
    sub_1BCA7E0(&ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo, v1, v2);
    byte_4B12A73 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->static_fields->__9 = (struct ServantStatusFlavorTextListViewItemDrawText___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  struct ServantStatusFlavorTextListViewItemDrawText_o *_4__this; // x20
  __int64 v10; // x1
  Il2CppObject *Object_object__49237568; // x21
  Il2CppObject *v12; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  struct ServantStatusFlavorTextListViewItemDrawText_o *v19; // x8
  struct ServantStatusFlavorTextListViewItemDrawText_o *v20; // x8
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *v21; // x20
  struct ServantStatusFlavorTextListViewItemDrawText_o *v22; // x8
  __int64 v23; // x2
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *v24; // x20
  struct ServantStatusFlavorTextListViewItemDrawText_o *v25; // x8
  __int64 v26; // x2
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *v27; // x20
  const MethodInfo *v28; // x3

  v4 = this;
  if ( (byte_4B12A74 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, data, method);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v5, v6);
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)sub_1BCA7E0(
                                                                                    &UnityEngine_Object_TypeInfo,
                                                                                    v7,
                                                                                    v8);
    byte_4B12A74 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this || !data )
    goto LABEL_24;
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              data,
                              _4__this->fields.SUMMON_BG_OBJECT_NAME,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  v12 = UnityEngine_Object__Instantiate_object_(
          Object_object__49237568,
          (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
  _4__this->fields.summonBg = (struct UnityEngine_GameObject_o *)v12;
  sub_1BCA784((PartyOrganizationUtility_o *)&_4__this->fields.summonBg, (int64_t)v12, v13, v14, v15, v16, v17, v18);
  v19 = v4->fields.__4__this;
  if ( !v19 )
    goto LABEL_24;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)v19->fields.summonBg;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)UnityEngine_GameObject__get_transform(
                                                                                  (UnityEngine_GameObject_o *)this,
                                                                                  0LL);
  v20 = v4->fields.__4__this;
  if ( !v20 )
    goto LABEL_24;
  v21 = this;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)v20->fields.summonBgRoot;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)UnityEngine_GameObject__get_transform(
                                                                                  (UnityEngine_GameObject_o *)this,
                                                                                  0LL);
  if ( !v21 )
    goto LABEL_24;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v21, (UnityEngine_Transform_o *)this, 0LL);
  v22 = v4->fields.__4__this;
  if ( !v22 )
    goto LABEL_24;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)v22->fields.summonBg;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)UnityEngine_GameObject__get_transform(
                                                                                  (UnityEngine_GameObject_o *)this,
                                                                                  0LL);
  v24 = this;
  if ( !byte_4B109C1 )
  {
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)sub_1BCA7E0(
                                                                                    &UnityEngine_Vector3_TypeInfo,
                                                                                    data,
                                                                                    v23);
    byte_4B109C1 = 1;
  }
  if ( !v24 )
    goto LABEL_24;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v24,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  v25 = v4->fields.__4__this;
  if ( !v25 )
    goto LABEL_24;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)v25->fields.summonBg;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)UnityEngine_GameObject__get_transform(
                                                                                  (UnityEngine_GameObject_o *)this,
                                                                                  0LL);
  v27 = this;
  if ( !byte_4B109C6 )
  {
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)sub_1BCA7E0(
                                                                                    &UnityEngine_Vector3_TypeInfo,
                                                                                    data,
                                                                                    v26);
    byte_4B109C6 = 1;
  }
  if ( !v27
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v27,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        (this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)v4->fields.__4__this) == 0LL) )
  {
LABEL_24:
    sub_1BCAA3C(this, data);
  }
  ServantStatusFlavorTextListViewItemDrawText__PlayScript(
    (ServantStatusFlavorTextListViewItemDrawText_o *)this,
    v4->fields.inactiveCameras,
    v4->fields.inactivePrefabs,
    v28);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  struct ServantStatusFlavorTextListViewItemDrawText_o *_4__this; // x20
  void *inactivePrefabs; // x0
  __int64 v28; // x1
  float v29; // s0
  float v30; // s1
  float v31; // s2
  float v32; // s3
  struct ServantStatusFlavorTextListViewItemDrawText_o *v33; // x8
  UnityEngine_Object_o *battleBg; // x20
  struct ServantStatusFlavorTextListViewItemDrawText_o *v35; // x8
  __int64 v36; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v38; // x1
  Il2CppObject *Instance; // x0
  __int64 v40; // x2
  __int64 v41; // x3
  AvalonSceneManager_c *v42; // x8
  CommonUI_o *v43; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v45; // x21
  Il2CppObject *v46; // x22
  struct ServantStatusFlavorTextListViewItemDrawText___c_StaticFields *static_fields; // x0
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  __int64 v54; // x2
  __int64 v55; // x3
  struct ServantStatusFlavorTextListViewItemDrawText_o *v56; // x8
  int32_t svtId; // w20
  System_Action_o *_9__2; // x21
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  System_Collections_Generic_List_Enumerator_object__o v65; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v66; // [xsp+20h] [xbp-70h] BYREF
  UnityEngine_Color_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4B12A75 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v12, v13);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v14, v15);
    sub_1BCA7E0(&ScriptManager_TypeInfo, v16, v17);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18, v19);
    sub_1BCA7E0(&Method_ServantStatusFlavorTextListViewItemDrawText___c__PlayScript_b__41_1__, v20, v21);
    sub_1BCA7E0(&Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0__PlayScript_b__2__, v22, v23);
    sub_1BCA7E0(&ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo, v24, v25);
    byte_4B12A75 = 1;
  }
  memset(&v66, 0, sizeof(v66));
  _4__this = this->fields.__4__this;
  *(UnityEngine_Color_o *)&v29 = UnityEngine_RenderSettings__get_ambientLight(0LL);
  if ( !_4__this )
    goto LABEL_34;
  _4__this->fields.ambientLight.fields.r = v29;
  _4__this->fields.ambientLight.fields.g = v30;
  _4__this->fields.ambientLight.fields.b = v31;
  _4__this->fields.ambientLight.fields.a = v32;
  v67.fields.r = 1.0;
  v67.fields.g = 1.0;
  v67.fields.b = 1.0;
  v67.fields.a = 1.0;
  UnityEngine_RenderSettings__set_ambientLight(v67, 0LL);
  v33 = this->fields.__4__this;
  if ( !v33 )
    goto LABEL_34;
  battleBg = (UnityEngine_Object_o *)v33->fields.battleBg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
  inactivePrefabs = (void *)UnityEngine_Object__op_Inequality(battleBg, 0LL, 0LL);
  if ( ((unsigned __int8)inactivePrefabs & 1) != 0 )
  {
    v35 = this->fields.__4__this;
    if ( !v35 )
      goto LABEL_34;
    inactivePrefabs = v35->fields.battleBg;
    if ( !inactivePrefabs )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)inactivePrefabs, 0, 0LL);
  }
  inactivePrefabs = this->fields.inactivePrefabs;
  if ( !inactivePrefabs )
    goto LABEL_34;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v65,
    (System_Collections_Generic_List_object__o *)inactivePrefabs,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v66 = v65;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v66,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v66.fields._current )
      sub_1BCAA3C(0LL, v36);
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v66.fields._current, 0LL);
    if ( !gameObject )
      sub_1BCAA3C(0LL, v38);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v66,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v42 = AvalonSceneManager_TypeInfo;
  v43 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v28);
    v42 = AvalonSceneManager_TypeInfo;
  }
  inactivePrefabs = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
  DEFAULT_FADE_TIME = v42->static_fields->DEFAULT_FADE_TIME;
  if ( !ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo, v28);
    inactivePrefabs = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
  }
  v45 = *(System_Action_o **)(*((_QWORD *)inactivePrefabs + 23) + 8LL);
  if ( !v45 )
  {
    if ( !*((_DWORD *)inactivePrefabs + 56) )
    {
      j_il2cpp_runtime_class_init_0(inactivePrefabs, v28);
      inactivePrefabs = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
    }
    v46 = (Il2CppObject *)**((_QWORD **)inactivePrefabs + 23);
    v45 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v28, v40, v41);
    System_Action___ctor(v45, v46, Method_ServantStatusFlavorTextListViewItemDrawText___c__PlayScript_b__41_1__, 0LL);
    static_fields = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->static_fields;
    static_fields->__9__41_1 = v45;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__41_1, (int64_t)v45, v48, v49, v50, v51, v52, v53);
  }
  if ( !v43
    || (inactivePrefabs = (void *)CommonUI__maskFadein(v43, DEFAULT_FADE_TIME, v45, 0LL),
        (v56 = this->fields.__4__this) == 0LL) )
  {
LABEL_34:
    sub_1BCAA3C(inactivePrefabs, v28);
  }
  svtId = v56->fields.svtId;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v28, v54, v55);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0__PlayScript_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v59, v60, v61, v62, v63, v64);
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v28);
  ScriptManager__PlayGacha(svtId, 0, 0, _9__2, 0, -1, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0___PlayScript_b__2(
        ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( !this->fields.__4__this )
    sub_1BCAA3C(this, method);
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
  __int64 v2; // x2
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o **v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v32; // x8
  UnityEngine_Object_o *monitor; // x20
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v34; // x8
  UnityEngine_Object_o *v35; // x20
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v42; // x8
  System_String_o *_4__this; // x20
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v44; // x8
  UnityEngine_Object_o *v45; // x20
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v46; // x8
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  UnityEngine_Color_o *v53; // x8
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v54; // x8
  UnityEngine_Object_o *klass; // x20
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v56; // x8
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  __int64 v63; // x1
  __int64 v64; // x1
  const MethodInfo *v65; // x3
  ServantStatusFlavorTextListViewItemDrawText_o *v66; // x0
  Il2CppObject *current; // x20
  __int64 v68; // x0
  __int64 v69; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v71; // x1
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v72; // x8
  Il2CppObject *Instance; // x0
  __int64 v74; // x2
  __int64 v75; // x3
  AvalonSceneManager_c *v76; // x8
  CommonUI_o *v77; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *items; // x20
  Il2CppObject *v80; // x21
  struct ServantStatusFlavorTextListViewItemDrawText___c_StaticFields *static_fields; // x0
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  System_Collections_Generic_List_Enumerator_object__o v88; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v89; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+40h] [xbp-80h] BYREF

  v3 = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o **)this;
  if ( (byte_4B12A76 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AssetManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Camera__Dispose__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Camera__MoveNext__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Camera__get_Current__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Camera__GetEnumerator__, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v22, v23);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v24, v25);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v26, v27);
    sub_1BCA7E0(&Method_ServantStatusFlavorTextListViewItemDrawText___c__RefreshUI_b__42_1__, v28, v29);
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)sub_1BCA7E0(
                                                                                    &ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo,
                                                                                    v30,
                                                                                    v31);
    byte_4B12A76 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v89, 0, sizeof(v89));
  v32 = v3[2];
  if ( !v32 )
    goto LABEL_59;
  monitor = (UnityEngine_Object_o *)v32[2].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)UnityEngine_Object__op_Inequality(
                                                                                  monitor,
                                                                                  0LL,
                                                                                  0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v34 = v3[2];
    if ( !v34 )
      goto LABEL_59;
    v35 = (UnityEngine_Object_o *)v34[2].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    UnityEngine_Object__Destroy_70154244(v35, 0LL);
    this = v3[2];
    if ( !this )
      goto LABEL_59;
    this[2].monitor = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this[2].monitor, 0LL, v36, v37, v38, v39, v40, v41);
  }
  v42 = v3[2];
  if ( !v42 )
    goto LABEL_59;
  _4__this = (System_String_o *)v42[3].fields.__4__this;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
  AssetManager__releaseAssetStorage(_4__this, 0LL);
  v44 = v3[2];
  if ( !v44 )
    goto LABEL_59;
  v45 = (UnityEngine_Object_o *)v44[2].fields.__4__this;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)UnityEngine_Object__op_Inequality(
                                                                                  v45,
                                                                                  0LL,
                                                                                  0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v46 = v3[2];
    if ( !v46 )
      goto LABEL_59;
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)v46[2].fields.__4__this;
    if ( !this )
      goto LABEL_59;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = v3[2];
    if ( !this )
      goto LABEL_59;
    this[2].fields.__4__this = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this[2].fields, 0LL, v47, v48, v49, v50, v51, v52);
  }
  v53 = (UnityEngine_Color_o *)v3[2];
  if ( !v53 )
    goto LABEL_59;
  UnityEngine_RenderSettings__set_ambientLight(v53[4], 0LL);
  v54 = v3[2];
  if ( !v54 )
    goto LABEL_59;
  klass = (UnityEngine_Object_o *)v54[2].klass;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)UnityEngine_Object__op_Inequality(
                                                                                  klass,
                                                                                  0LL,
                                                                                  0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v56 = v3[2];
    if ( !v56 )
      goto LABEL_59;
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)v56[2].klass;
    if ( !this )
      goto LABEL_59;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = v3[2];
    if ( !this )
      goto LABEL_59;
    this[2].klass = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this[2], 0LL, v57, v58, v59, v60, v61, v62);
  }
  this = v3[3];
  if ( !this )
    goto LABEL_59;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v88,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_Camera__GetEnumerator__);
  for ( i = v88;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_Camera__MoveNext__);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)i.fields._current, 1, 0LL) )
  {
    if ( !i.fields._current )
      sub_1BCAA3C(0LL, v63);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_Camera__Dispose__);
  this = v3[4];
  if ( !this )
    goto LABEL_59;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v88,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v89 = v88;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v89,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    v66 = (ServantStatusFlavorTextListViewItemDrawText_o *)v3[2];
    if ( !v66 )
      sub_1BCAA3C(0LL, v64);
    current = v89.fields._current;
    ServantStatusFlavorTextListViewItemDrawText__SetButtonEnable(
      v66,
      (UnityEngine_GameObject_o *)v89.fields._current,
      1,
      v65);
    if ( !current )
      sub_1BCAA3C(v68, v69);
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)current, 0LL);
    if ( !gameObject )
      sub_1BCAA3C(0LL, v71);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v89,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v72 = v3[2];
  if ( !v72 )
    goto LABEL_59;
  BYTE4(v72[1].fields.__4__this) = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v76 = AvalonSceneManager_TypeInfo;
  v77 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, method);
    v76 = AvalonSceneManager_TypeInfo;
  }
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
  DEFAULT_FADE_TIME = v76->static_fields->DEFAULT_FADE_TIME;
  if ( !ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo, method);
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
  }
  items = (System_Action_o *)this[4].fields.inactiveCameras->fields._items;
  if ( !items )
  {
    if ( !LODWORD(this[5].fields.inactiveCameras) )
    {
      j_il2cpp_runtime_class_init_0(this, method);
      this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
    }
    v80 = (Il2CppObject *)this[4].fields.inactiveCameras->klass;
    items = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v74, v75);
    System_Action___ctor(items, v80, Method_ServantStatusFlavorTextListViewItemDrawText___c__RefreshUI_b__42_1__, 0LL);
    static_fields = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->static_fields;
    static_fields->__9__42_1 = items;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__42_1, (int64_t)items, v82, v83, v84, v85, v86, v87);
  }
  if ( !v77 )
LABEL_59:
    sub_1BCAA3C(this, method);
  CommonUI__maskFadein(v77, DEFAULT_FADE_TIME, items, 0LL);
}