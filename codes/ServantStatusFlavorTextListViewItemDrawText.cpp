void __fastcall ServantStatusFlavorTextListViewItemDrawText___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4BB0ED2 & 1) == 0 )
  {
    sub_1C13D24(&ServantStatusFlavorTextListViewItemDrawText_TypeInfo, v1);
    byte_4BB0ED2 = 1;
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
  int64_t v32; // x1
  int64_t v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int64_t v40; // x1
  int64_t v41; // x2
  int32_t v42; // w3
  System_String_o *v43; // x4
  BattleSetupInfo_o *v44; // x5
  FollowerInfo_o *v45; // x6
  PartyListViewItem_o *v46; // x7
  int64_t v47; // x1
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  int64_t v54; // x1
  int64_t v55; // x2
  int32_t v56; // w3
  System_String_o *v57; // x4
  BattleSetupInfo_o *v58; // x5
  FollowerInfo_o *v59; // x6
  PartyListViewItem_o *v60; // x7
  int64_t v61; // x1
  int64_t v62; // x2
  int32_t v63; // w3
  System_String_o *v64; // x4
  BattleSetupInfo_o *v65; // x5
  FollowerInfo_o *v66; // x6
  PartyListViewItem_o *v67; // x7
  int64_t v68; // x1
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  System_Collections_Generic_List_object__o *v75; // x20
  __int64 v76; // x0
  Il2CppObject *v77; // x1
  int64_t v78; // x2
  int32_t v79; // w3
  System_String_o *v80; // x4
  BattleSetupInfo_o *v81; // x5
  FollowerInfo_o *v82; // x6
  PartyListViewItem_o *v83; // x7
  struct System_Object_array *items; // x8
  _QWORD *v85; // x9
  __int64 size; // x10
  Il2CppClass **v87; // x0
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  struct System_Object_array *v94; // x8
  _QWORD *v95; // x9
  __int64 v96; // x10
  Il2CppClass **v97; // x0
  int64_t v98; // x2
  int32_t v99; // w3
  System_String_o *v100; // x4
  BattleSetupInfo_o *v101; // x5
  FollowerInfo_o *v102; // x6
  PartyListViewItem_o *v103; // x7
  struct System_Object_array *v104; // x8
  _QWORD *v105; // x9
  __int64 v106; // x10
  Il2CppClass **v107; // x0
  int64_t v108; // x2
  int32_t v109; // w3
  System_String_o *v110; // x4
  BattleSetupInfo_o *v111; // x5
  FollowerInfo_o *v112; // x6
  PartyListViewItem_o *v113; // x7
  struct System_Object_array *v114; // x8
  _QWORD *v115; // x9
  __int64 v116; // x10
  Il2CppClass **v117; // x0
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  struct System_Object_array *v124; // x8
  _QWORD *v125; // x9
  __int64 v126; // x10
  Il2CppClass **v127; // x0
  int64_t v128; // x2
  int32_t v129; // w3
  System_String_o *v130; // x4
  BattleSetupInfo_o *v131; // x5
  FollowerInfo_o *v132; // x6
  PartyListViewItem_o *v133; // x7
  System_Collections_Generic_List_object__o *v134; // x20
  int64_t v135; // x2
  int32_t v136; // w3
  System_String_o *v137; // x4
  BattleSetupInfo_o *v138; // x5
  FollowerInfo_o *v139; // x6
  PartyListViewItem_o *v140; // x7
  _QWORD *v141; // x9
  struct System_Object_array *v142; // x8
  __int64 v143; // x10
  Il2CppClass **v144; // x0
  int64_t v145; // x2
  int32_t v146; // w3
  System_String_o *v147; // x4
  BattleSetupInfo_o *v148; // x5
  FollowerInfo_o *v149; // x6
  PartyListViewItem_o *v150; // x7
  struct System_Object_array *v151; // x8
  _QWORD *v152; // x9
  __int64 v153; // x10
  Il2CppClass **v154; // x0
  int64_t v155; // x2
  int32_t v156; // w3
  System_String_o *v157; // x4
  BattleSetupInfo_o *v158; // x5
  FollowerInfo_o *v159; // x6
  PartyListViewItem_o *v160; // x7
  struct System_Object_array *v161; // x8
  _QWORD *v162; // x9
  __int64 v163; // x10
  Il2CppClass **v164; // x0
  int64_t v165; // x2
  int32_t v166; // w3
  System_String_o *v167; // x4
  BattleSetupInfo_o *v168; // x5
  FollowerInfo_o *v169; // x6
  PartyListViewItem_o *v170; // x7
  struct System_Object_array *v171; // x8
  _QWORD *v172; // x9
  __int64 v173; // x10
  Il2CppClass **v174; // x0
  int64_t v175; // x2
  int32_t v176; // w3
  System_String_o *v177; // x4
  BattleSetupInfo_o *v178; // x5
  FollowerInfo_o *v179; // x6
  PartyListViewItem_o *v180; // x7
  struct System_Object_array *v181; // x8
  _QWORD *v182; // x9
  __int64 v183; // x10
  Il2CppClass **v184; // x0
  int64_t v185; // x2
  int32_t v186; // w3
  System_String_o *v187; // x4
  BattleSetupInfo_o *v188; // x5
  FollowerInfo_o *v189; // x6
  PartyListViewItem_o *v190; // x7
  System_Collections_Generic_List_object__o *v191; // x20
  int64_t v192; // x2
  int32_t v193; // w3
  System_String_o *v194; // x4
  BattleSetupInfo_o *v195; // x5
  FollowerInfo_o *v196; // x6
  PartyListViewItem_o *v197; // x7
  _QWORD *v198; // x9
  struct System_Object_array *v199; // x8
  __int64 v200; // x10
  Il2CppClass **v201; // x0
  int64_t v202; // x2
  int32_t v203; // w3
  System_String_o *v204; // x4
  BattleSetupInfo_o *v205; // x5
  FollowerInfo_o *v206; // x6
  PartyListViewItem_o *v207; // x7
  struct System_Object_array *v208; // x8
  _QWORD *v209; // x9
  __int64 v210; // x10
  Il2CppClass **v211; // x0
  int64_t v212; // x2
  int32_t v213; // w3
  System_String_o *v214; // x4
  BattleSetupInfo_o *v215; // x5
  FollowerInfo_o *v216; // x6
  PartyListViewItem_o *v217; // x7
  struct System_Object_array *v218; // x8
  _QWORD *v219; // x9
  __int64 v220; // x10
  Il2CppClass **v221; // x0
  int64_t v222; // x2
  int32_t v223; // w3
  System_String_o *v224; // x4
  BattleSetupInfo_o *v225; // x5
  FollowerInfo_o *v226; // x6
  PartyListViewItem_o *v227; // x7
  struct System_Object_array *v228; // x8
  _QWORD *v229; // x9
  __int64 v230; // x10
  Il2CppClass **v231; // x0
  int64_t v232; // x2
  int32_t v233; // w3
  System_String_o *v234; // x4
  BattleSetupInfo_o *v235; // x5
  FollowerInfo_o *v236; // x6
  PartyListViewItem_o *v237; // x7

  if ( (byte_4BB0ED1 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_string__Add__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_string___ctor__, v9);
    sub_1C13D24(&System_Collections_Generic_List_string__TypeInfo, v10);
    sub_1C13D24(&StringLiteral_17428/*"beforeActionSetup"*/, v11);
    sub_1C13D24(&StringLiteral_13304/*"SubmarineSelectScannerDialog"*/, v12);
    sub_1C13D24(&StringLiteral_13464/*"System.String"*/, v13);
    sub_1C13D24(&StringLiteral_3303/*"BetweenAnd"*/, v14);
    sub_1C13D24(&StringLiteral_6222/*"Equip"*/, v15);
    sub_1C13D24(&StringLiteral_12871/*"ServantId"*/, v16);
    sub_1C13D24(&StringLiteral_3383/*"BrightTurnTransitionRoadOn"*/, v17);
    sub_1C13D24(&StringLiteral_14777/*"Too many symbolic links encountered"*/, v18);
    sub_1C13D24(&StringLiteral_4542/*"Chocolate"*/, v19);
    sub_1C13D24(&StringLiteral_3305/*"Bg/"*/, v20);
    sub_1C13D24(&StringLiteral_4717/*"CommonTreasureGet"*/, v21);
    sub_1C13D24(&StringLiteral_7016/*"Frisian (Netherlands)"*/, v22);
    sub_1C13D24(&StringLiteral_17427/*"before"*/, v23);
    sub_1C13D24(&StringLiteral_4726/*"CommonUI/Prefabs"*/, v24);
    sub_1C13D24(&StringLiteral_13321/*"SummonEffectScene"*/, v25);
    sub_1C13D24(&StringLiteral_8632/*"LocationInfoAgreement"*/, v26);
    sub_1C13D24(&StringLiteral_12855/*"SerializedPropertyCopyName"*/, v27);
    sub_1C13D24(&StringLiteral_13215/*"State"*/, v28);
    sub_1C13D24(&StringLiteral_11392/*"ReasmTimeout"*/, v29);
    sub_1C13D24(&StringLiteral_20661/*"img_frames_mask11"*/, v30);
    sub_1C13D24(&StringLiteral_7243/*"Greenlandic (Greenland)"*/, v31);
    byte_4BB0ED1 = 1;
  }
  v32 = StringLiteral_20661/*"img_frames_mask11"*/;
  this->fields.TITLE_SPRITE_NAME = (struct System_String_o *)StringLiteral_20661/*"img_frames_mask11"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.TITLE_SPRITE_NAME, v32, v2, v3, v4, v5, v6, v7);
  this->fields.MESSAGE_LABEL_ADD_POS_Y = -45.0;
  *(_QWORD *)&this->fields.BASE_SPRITE_ADD_POS_Y = 0xC25C0000C2080000LL;
  v33 = StringLiteral_4717/*"CommonTreasureGet"*/;
  this->fields.COMMON_UI = (struct System_String_o *)StringLiteral_4717/*"CommonTreasureGet"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.COMMON_UI, v33, v34, v35, v36, v37, v38, v39);
  v40 = StringLiteral_7243/*"Greenlandic (Greenland)"*/;
  this->fields.BATTLE_BG_OBJECT = (struct System_String_o *)StringLiteral_7243/*"Greenlandic (Greenland)"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.BATTLE_BG_OBJECT, v40, v41, v42, v43, v44, v45, v46);
  v47 = StringLiteral_17428/*"beforeActionSetup"*/;
  this->fields.SUMMON_BG_OBJECT = (struct System_String_o *)StringLiteral_17428/*"beforeActionSetup"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.SUMMON_BG_OBJECT, v47, v48, v49, v50, v51, v52, v53);
  v54 = StringLiteral_13304/*"SubmarineSelectScannerDialog"*/;
  this->fields.SUMMON_BG_ROOT = (struct System_String_o *)StringLiteral_13304/*"SubmarineSelectScannerDialog"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.SUMMON_BG_ROOT, v54, v55, v56, v57, v58, v59, v60);
  v61 = StringLiteral_3303/*"BetweenAnd"*/;
  this->fields.SUMMON_BG_ASSET_NAME = (struct System_String_o *)StringLiteral_3303/*"BetweenAnd"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.SUMMON_BG_ASSET_NAME, v61, v62, v63, v64, v65, v66, v67);
  v68 = StringLiteral_17427/*"before"*/;
  this->fields.SUMMON_BG_OBJECT_NAME = (struct System_String_o *)StringLiteral_17427/*"before"*/;
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.SUMMON_BG_OBJECT_NAME, v68, v69, v70, v71, v72, v73, v74);
  v75 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v75,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v75 )
    goto LABEL_63;
  v77 = (Il2CppObject *)StringLiteral_12871/*"ServantId"*/;
  items = v75->fields._items;
  v85 = Method_System_Collections_Generic_List_string__Add__;
  ++v75->fields._version;
  if ( !items )
    goto LABEL_63;
  size = v75->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v77,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
  }
  else
  {
    v87 = &items->obj.klass + size;
    v75->fields._size = size + 1;
    v87[4] = (Il2CppClass *)v77;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v87 + 4), (int64_t)v77, v78, v79, v80, v81, v82, v83);
  }
  v77 = (Il2CppObject *)StringLiteral_12855/*"SerializedPropertyCopyName"*/;
  v94 = v75->fields._items;
  v95 = Method_System_Collections_Generic_List_string__Add__;
  ++v75->fields._version;
  if ( !v94 )
    goto LABEL_63;
  v96 = v75->fields._size;
  if ( (unsigned int)v96 >= v94->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v77,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v95[4] + 192LL) + 112LL));
  }
  else
  {
    v97 = &v94->obj.klass + v96;
    v75->fields._size = v96 + 1;
    v97[4] = (Il2CppClass *)v77;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v97 + 4), (int64_t)v77, v88, v89, v90, v91, v92, v93);
  }
  v77 = (Il2CppObject *)StringLiteral_6222/*"Equip"*/;
  v104 = v75->fields._items;
  v105 = Method_System_Collections_Generic_List_string__Add__;
  ++v75->fields._version;
  if ( !v104 )
    goto LABEL_63;
  v106 = v75->fields._size;
  if ( (unsigned int)v106 >= v104->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v77,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
  }
  else
  {
    v107 = &v104->obj.klass + v106;
    v75->fields._size = v106 + 1;
    v107[4] = (Il2CppClass *)v77;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v107 + 4), (int64_t)v77, v98, v99, v100, v101, v102, v103);
  }
  v77 = (Il2CppObject *)StringLiteral_13321/*"SummonEffectScene"*/;
  v114 = v75->fields._items;
  v115 = Method_System_Collections_Generic_List_string__Add__;
  ++v75->fields._version;
  if ( !v114 )
    goto LABEL_63;
  v116 = v75->fields._size;
  if ( (unsigned int)v116 >= v114->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v77,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
  }
  else
  {
    v117 = &v114->obj.klass + v116;
    v75->fields._size = v116 + 1;
    v117[4] = (Il2CppClass *)v77;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v117 + 4), (int64_t)v77, v108, v109, v110, v111, v112, v113);
  }
  v77 = (Il2CppObject *)StringLiteral_11392/*"ReasmTimeout"*/;
  v124 = v75->fields._items;
  v125 = Method_System_Collections_Generic_List_string__Add__;
  ++v75->fields._version;
  if ( !v124 )
    goto LABEL_63;
  v126 = v75->fields._size;
  if ( (unsigned int)v126 >= v124->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v75,
      v77,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v125[4] + 192LL) + 112LL));
  }
  else
  {
    v127 = &v124->obj.klass + v126;
    v75->fields._size = v126 + 1;
    v127[4] = (Il2CppClass *)v77;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v127 + 4), (int64_t)v77, v118, v119, v120, v121, v122, v123);
  }
  this->fields.INACTIVE_PREFABS = (struct System_Collections_Generic_List_string__o *)v75;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.INACTIVE_PREFABS,
    (int64_t)v75,
    v128,
    v129,
    v130,
    v131,
    v132,
    v133);
  v134 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v134,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v134 )
    goto LABEL_63;
  v141 = Method_System_Collections_Generic_List_string__Add__;
  v77 = (Il2CppObject *)StringLiteral_3305/*"Bg/"*/;
  v142 = v134->fields._items;
  ++v134->fields._version;
  if ( !v142 )
    goto LABEL_63;
  v143 = v134->fields._size;
  if ( (unsigned int)v143 >= v142->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v134,
      v77,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v141[4] + 192LL) + 112LL));
  }
  else
  {
    v144 = &v142->obj.klass + v143;
    v134->fields._size = v143 + 1;
    v144[4] = (Il2CppClass *)v77;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v144 + 4), (int64_t)v77, v135, v136, v137, v138, v139, v140);
  }
  v77 = (Il2CppObject *)StringLiteral_4726/*"CommonUI/Prefabs"*/;
  v151 = v134->fields._items;
  v152 = Method_System_Collections_Generic_List_string__Add__;
  ++v134->fields._version;
  if ( !v151 )
    goto LABEL_63;
  v153 = v134->fields._size;
  if ( (unsigned int)v153 >= v151->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v134,
      v77,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v152[4] + 192LL) + 112LL));
  }
  else
  {
    v154 = &v151->obj.klass + v153;
    v134->fields._size = v153 + 1;
    v154[4] = (Il2CppClass *)v77;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v154 + 4), (int64_t)v77, v145, v146, v147, v148, v149, v150);
  }
  v77 = (Il2CppObject *)StringLiteral_7016/*"Frisian (Netherlands)"*/;
  v161 = v134->fields._items;
  v162 = Method_System_Collections_Generic_List_string__Add__;
  ++v134->fields._version;
  if ( !v161 )
    goto LABEL_63;
  v163 = v134->fields._size;
  if ( (unsigned int)v163 >= v161->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v134,
      v77,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v162[4] + 192LL) + 112LL));
  }
  else
  {
    v164 = &v161->obj.klass + v163;
    v134->fields._size = v163 + 1;
    v164[4] = (Il2CppClass *)v77;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v164 + 4), (int64_t)v77, v155, v156, v157, v158, v159, v160);
  }
  v77 = (Il2CppObject *)StringLiteral_13464/*"System.String"*/;
  v171 = v134->fields._items;
  v172 = Method_System_Collections_Generic_List_string__Add__;
  ++v134->fields._version;
  if ( !v171 )
    goto LABEL_63;
  v173 = v134->fields._size;
  if ( (unsigned int)v173 >= v171->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v134,
      v77,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v172[4] + 192LL) + 112LL));
  }
  else
  {
    v174 = &v171->obj.klass + v173;
    v134->fields._size = v173 + 1;
    v174[4] = (Il2CppClass *)v77;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v174 + 4), (int64_t)v77, v165, v166, v167, v168, v169, v170);
  }
  v77 = (Il2CppObject *)StringLiteral_14777/*"Too many symbolic links encountered"*/;
  v181 = v134->fields._items;
  v182 = Method_System_Collections_Generic_List_string__Add__;
  ++v134->fields._version;
  if ( !v181 )
    goto LABEL_63;
  v183 = v134->fields._size;
  if ( (unsigned int)v183 >= v181->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v134,
      v77,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v182[4] + 192LL) + 112LL));
  }
  else
  {
    v184 = &v181->obj.klass + v183;
    v134->fields._size = v183 + 1;
    v184[4] = (Il2CppClass *)v77;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v184 + 4), (int64_t)v77, v175, v176, v177, v178, v179, v180);
  }
  this->fields.SCRIPT_CAMERAS = (struct System_Collections_Generic_List_string__o *)v134;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.SCRIPT_CAMERAS,
    (int64_t)v134,
    v185,
    v186,
    v187,
    v188,
    v189,
    v190);
  v191 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v191,
    (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !v191 )
    goto LABEL_63;
  v198 = Method_System_Collections_Generic_List_string__Add__;
  v77 = (Il2CppObject *)StringLiteral_3383/*"BrightTurnTransitionRoadOn"*/;
  v199 = v191->fields._items;
  ++v191->fields._version;
  if ( !v199 )
    goto LABEL_63;
  v200 = v191->fields._size;
  if ( (unsigned int)v200 >= v199->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v191,
      v77,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v198[4] + 192LL) + 112LL));
  }
  else
  {
    v201 = &v199->obj.klass + v200;
    v191->fields._size = v200 + 1;
    v201[4] = (Il2CppClass *)v77;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v201 + 4), (int64_t)v77, v192, v193, v194, v195, v196, v197);
  }
  v77 = (Il2CppObject *)StringLiteral_13215/*"State"*/;
  v208 = v191->fields._items;
  v209 = Method_System_Collections_Generic_List_string__Add__;
  ++v191->fields._version;
  if ( !v208 )
    goto LABEL_63;
  v210 = v191->fields._size;
  if ( (unsigned int)v210 >= v208->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v191,
      v77,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v209[4] + 192LL) + 112LL));
  }
  else
  {
    v211 = &v208->obj.klass + v210;
    v191->fields._size = v210 + 1;
    v211[4] = (Il2CppClass *)v77;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v211 + 4), (int64_t)v77, v202, v203, v204, v205, v206, v207);
  }
  v77 = (Il2CppObject *)StringLiteral_8632/*"LocationInfoAgreement"*/;
  v218 = v191->fields._items;
  v219 = Method_System_Collections_Generic_List_string__Add__;
  ++v191->fields._version;
  if ( !v218 )
    goto LABEL_63;
  v220 = v191->fields._size;
  if ( (unsigned int)v220 >= v218->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v191,
      v77,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v219[4] + 192LL) + 112LL));
  }
  else
  {
    v221 = &v218->obj.klass + v220;
    v191->fields._size = v220 + 1;
    v221[4] = (Il2CppClass *)v77;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v221 + 4), (int64_t)v77, v212, v213, v214, v215, v216, v217);
  }
  v77 = (Il2CppObject *)StringLiteral_4542/*"Chocolate"*/;
  v228 = v191->fields._items;
  v229 = Method_System_Collections_Generic_List_string__Add__;
  ++v191->fields._version;
  if ( !v228 )
LABEL_63:
    sub_1C13F80(v76, v77);
  v230 = v191->fields._size;
  if ( (unsigned int)v230 >= v228->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      v191,
      v77,
      *(const MethodInfo_362D1CC **)(*(_QWORD *)(v229[4] + 192LL) + 112LL));
  }
  else
  {
    v231 = &v228->obj.klass + v230;
    v191->fields._size = v230 + 1;
    v231[4] = (Il2CppClass *)v77;
    sub_1C13CC8((PartyOrganizationUtility_o *)(v231 + 4), (int64_t)v77, v222, v223, v224, v225, v226, v227);
  }
  this->fields.TARGET_BUTTON_NAME = (struct System_Collections_Generic_List_string__o *)v191;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.TARGET_BUTTON_NAME,
    (int64_t)v191,
    v232,
    v233,
    v234,
    v235,
    v236,
    v237);
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
  __int64 v20; // x20
  System_Collections_Generic_List_object__o *INACTIVE_PREFABS; // x0
  __int64 v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0
  unsigned int allCamerasCount; // w0
  UnityEngine_Camera_array *v32; // x22
  System_Collections_Generic_List_object__o *v33; // x23
  System_Collections_Generic_List_GameObject__o **v34; // x21
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  UnityEngine_GameObject_o *v41; // x23
  const MethodInfo *v42; // x3
  __int64 v43; // x1
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  System_Collections_Generic_List_object__o *v50; // x0
  struct System_Object_array *items; // x8
  _QWORD *v52; // x9
  __int64 size; // x10
  Il2CppClass **v54; // x8
  System_Collections_Generic_List_object__o *v55; // x24
  System_Collections_Generic_List_Camera__o **v56; // x23
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  int max_length; // w8
  unsigned int v64; // w26
  Il2CppClass **v65; // x8
  UnityEngine_Behaviour_o *v66; // x24
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  struct System_Object_array *v73; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10
  Il2CppClass **v76; // x8
  UnityEngine_GameObject_o *v77; // x22
  struct UnityEngine_GameObject_o *Deep; // x0
  int64_t v79; // x2
  int32_t v80; // w3
  System_String_o *v81; // x4
  BattleSetupInfo_o *v82; // x5
  FollowerInfo_o *v83; // x6
  PartyListViewItem_o *v84; // x7
  UnityEngine_Object_o *summonBgRoot; // x22
  struct UnityEngine_GameObject_o *v86; // x0
  int64_t v87; // x2
  int32_t v88; // w3
  System_String_o *v89; // x4
  BattleSetupInfo_o *v90; // x5
  FollowerInfo_o *v91; // x6
  PartyListViewItem_o *v92; // x7
  UnityEngine_Object_o *v93; // x22
  const MethodInfo *v94; // x3
  UnityEngine_Object_o *summonBg; // x22
  System_String_o *SUMMON_BG_ASSET_NAME; // x19
  AssetLoader_LoadEndDataHandler_o *v97; // x21
  System_Collections_Generic_List_Enumerator_object__o v98; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v99; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4BB0ECE & 1) == 0 )
  {
    sub_1C13D24(&AssetManager_TypeInfo, method);
    sub_1C13D24(&UnityEngine_Camera___TypeInfo, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__Add__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_Camera__Add__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_string__Contains__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_string__GetEnumerator__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject___ctor__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_Camera___ctor__, v12);
    sub_1C13D24(&System_Collections_Generic_List_GameObject__TypeInfo, v13);
    sub_1C13D24(&System_Collections_Generic_List_Camera__TypeInfo, v14);
    sub_1C13D24(&AssetLoader_LoadEndDataHandler_TypeInfo, v15);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v16);
    sub_1C13D24(&Method_ServantStatusFlavorTextListViewItemDrawText_OnClickPlayScript__, v17);
    sub_1C13D24(
      &Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0__OnClickPlayScript_b__0__,
      v18);
    sub_1C13D24(&ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_TypeInfo, v19);
    byte_4BB0ECE = 1;
  }
  memset(&v99, 0, sizeof(v99));
  v20 = sub_1C13F70(ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0LL);
  if ( !v20 )
    goto LABEL_53;
  *(_QWORD *)(v20 + 16) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v20 + 16), (int64_t)this, v23, v24, v25, v26, v27, v28);
  if ( this->fields.svtId && !this->fields.isScriptPlaying )
  {
    this->fields.isScriptPlaying = 1;
    v29 = Method_ServantStatusFlavorTextListViewItemDrawText_OnClickPlayScript__;
    if ( (*((_BYTE *)Method_ServantStatusFlavorTextListViewItemDrawText_OnClickPlayScript__ + 83) & 2) != 0 )
      v29 = (_QWORD *)sub_1C13D3C(Method_ServantStatusFlavorTextListViewItemDrawText_OnClickPlayScript__);
    v30 = (System_Reflection_MethodBase_o *)sub_1C13D08(v29, v29[4]);
    OverwriteAssetSoundName__PlaySystemSe(v30, 8, 0, 0LL);
    allCamerasCount = UnityEngine_Camera__get_allCamerasCount(0LL);
    v32 = (UnityEngine_Camera_array *)sub_1C13DCC(UnityEngine_Camera___TypeInfo, allCamerasCount);
    UnityEngine_Camera__GetAllCameras(v32, 0LL);
    v33 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v33,
      (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    *(_QWORD *)(v20 + 32) = v33;
    v34 = (System_Collections_Generic_List_GameObject__o **)(v20 + 32);
    sub_1C13CC8((PartyOrganizationUtility_o *)(v20 + 32), (int64_t)v33, v35, v36, v37, v38, v39, v40);
    INACTIVE_PREFABS = (System_Collections_Generic_List_object__o *)this->fields.INACTIVE_PREFABS;
    if ( !INACTIVE_PREFABS )
      goto LABEL_53;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v98,
      INACTIVE_PREFABS,
      (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    v99 = v98;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v99,
              (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      v41 = UnityEngine_GameObject__Find((System_String_o *)v99.fields._current, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v41, 0LL, 0LL) )
      {
        ServantStatusFlavorTextListViewItemDrawText__SetButtonEnable(this, v41, 0, v42);
        v50 = (System_Collections_Generic_List_object__o *)*v34;
        if ( !*v34 )
          sub_1C13F80(0LL, v43);
        items = v50->fields._items;
        v52 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v50->fields._version;
        if ( !items )
          sub_1C13F80(v50, v43);
        size = v50->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v50,
            (Il2CppObject *)v41,
            *(const MethodInfo_362D1CC **)(*(_QWORD *)(v52[4] + 192LL) + 112LL));
        }
        else
        {
          v54 = &items->obj.klass + size;
          v50->fields._size = size + 1;
          v54[4] = (Il2CppClass *)v41;
          sub_1C13CC8((PartyOrganizationUtility_o *)(v54 + 4), (int64_t)v41, v44, v45, v46, v47, v48, v49);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v99,
      (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    v55 = (System_Collections_Generic_List_object__o *)sub_1C13F70(System_Collections_Generic_List_Camera__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v55,
      (const MethodInfo_362C998 *)Method_System_Collections_Generic_List_Camera___ctor__);
    *(_QWORD *)(v20 + 24) = v55;
    v56 = (System_Collections_Generic_List_Camera__o **)(v20 + 24);
    sub_1C13CC8((PartyOrganizationUtility_o *)(v20 + 24), (int64_t)v55, v57, v58, v59, v60, v61, v62);
    if ( !v32 )
      goto LABEL_53;
    max_length = v32->max_length;
    if ( max_length >= 1 )
    {
      v64 = 0;
      while ( 1 )
      {
        if ( v64 >= max_length )
          sub_1C13F88(INACTIVE_PREFABS, v22);
        v65 = &v32->obj.klass + (int)v64;
        v66 = (UnityEngine_Behaviour_o *)v65[4];
        if ( !v66 )
          break;
        INACTIVE_PREFABS = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                          (UnityEngine_Component_o *)v65[4],
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
                                                                          (const MethodInfo_362D55C *)Method_System_Collections_Generic_List_string__Contains__);
        if ( ((unsigned __int8)INACTIVE_PREFABS & 1) == 0 )
        {
          UnityEngine_Behaviour__set_enabled(v66, 0, 0LL);
          INACTIVE_PREFABS = (System_Collections_Generic_List_object__o *)*v56;
          if ( !*v56 )
            break;
          v73 = INACTIVE_PREFABS->fields._items;
          v74 = Method_System_Collections_Generic_List_Camera__Add__;
          ++INACTIVE_PREFABS->fields._version;
          if ( !v73 )
            break;
          v75 = INACTIVE_PREFABS->fields._size;
          if ( (unsigned int)v75 >= v73->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              INACTIVE_PREFABS,
              (Il2CppObject *)v66,
              *(const MethodInfo_362D1CC **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
          }
          else
          {
            v76 = &v73->obj.klass + v75;
            INACTIVE_PREFABS->fields._size = v75 + 1;
            v76[4] = (Il2CppClass *)v66;
            sub_1C13CC8((PartyOrganizationUtility_o *)(v76 + 4), (int64_t)v66, v67, v68, v69, v70, v71, v72);
          }
        }
        max_length = v32->max_length;
        if ( (int)++v64 >= max_length )
          goto LABEL_33;
      }
LABEL_53:
      sub_1C13F80(INACTIVE_PREFABS, v22);
    }
LABEL_33:
    v77 = UnityEngine_GameObject__Find(this->fields.COMMON_UI, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v77, 0LL, 0LL) )
    {
      Deep = GameObjectExtensions__FindDeep(v77, this->fields.SUMMON_BG_ROOT, 1, 0LL);
      this->fields.summonBgRoot = Deep;
      sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.summonBgRoot, (int64_t)Deep, v79, v80, v81, v82, v83, v84);
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
    v86 = UnityEngine_GameObject__Find(this->fields.BATTLE_BG_OBJECT, 0LL);
    this->fields.battleBg = v86;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.battleBg, (int64_t)v86, v87, v88, v89, v90, v91, v92);
    v93 = (UnityEngine_Object_o *)UnityEngine_GameObject__Find(this->fields.SUMMON_BG_OBJECT, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v93, 0LL, 0LL) )
      goto LABEL_48;
    summonBg = (UnityEngine_Object_o *)this->fields.summonBg;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(summonBg, 0LL, 0LL) )
    {
LABEL_48:
      ServantStatusFlavorTextListViewItemDrawText__PlayScript(this, *v56, *v34, v94);
    }
    else
    {
      SUMMON_BG_ASSET_NAME = this->fields.SUMMON_BG_ASSET_NAME;
      v97 = (AssetLoader_LoadEndDataHandler_o *)sub_1C13F70(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v97,
        (Il2CppObject *)v20,
        Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0__OnClickPlayScript_b__0__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__loadAssetStorage(SUMMON_BG_ASSET_NAME, v97, 1, 0LL);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v33; // x8
  CommonUI_o *v34; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v36; // x21

  if ( (byte_4BB0ECF & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, inactiveCameras);
    sub_1C13D24(&AvalonSceneManager_TypeInfo, v7);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1C13D24(&Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0__PlayScript_b__0__, v9);
    sub_1C13D24(&ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0_TypeInfo, v10);
    byte_4BB0ECF = 1;
  }
  v11 = sub_1C13F70(ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_QWORD *)(v11 + 16) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = inactivePrefabs;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 24), (int64_t)inactivePrefabs, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v11 + 32) = inactiveCameras;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 32), (int64_t)inactiveCameras, v26, v27, v28, v29, v30, v31);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v33 = AvalonSceneManager_TypeInfo;
  v34 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v33 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v33->static_fields->DEFAULT_FADE_TIME;
  v36 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v11,
    Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0__PlayScript_b__0__,
    0LL);
  if ( !v34 )
LABEL_8:
    sub_1C13F80(v12, v13);
  CommonUI__maskFadeout(v34, 1, DEFAULT_FADE_TIME, v36, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText__RefreshUI(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        System_Collections_Generic_List_Camera__o *inactiveCameras,
        System_Collections_Generic_List_GameObject__o *inactivePrefabs,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v33; // x8
  CommonUI_o *v34; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v36; // x21

  if ( (byte_4BB0ED0 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, inactiveCameras);
    sub_1C13D24(&AvalonSceneManager_TypeInfo, v7);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1C13D24(&Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0__RefreshUI_b__0__, v9);
    sub_1C13D24(&ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_TypeInfo, v10);
    byte_4BB0ED0 = 1;
  }
  v11 = sub_1C13F70(ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    goto LABEL_8;
  *(_QWORD *)(v11 + 16) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v11 + 24) = inactiveCameras;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 24), (int64_t)inactiveCameras, v20, v21, v22, v23, v24, v25);
  *(_QWORD *)(v11 + 32) = inactivePrefabs;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 32), (int64_t)inactivePrefabs, v26, v27, v28, v29, v30, v31);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v33 = AvalonSceneManager_TypeInfo;
  v34 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v33 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v33->static_fields->DEFAULT_FADE_TIME;
  v36 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
  System_Action___ctor(
    v36,
    (Il2CppObject *)v11,
    Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0__RefreshUI_b__0__,
    0LL);
  if ( !v34 )
LABEL_8:
    sub_1C13F80(v12, v13);
  CommonUI__maskFadeout(v34, 1, DEFAULT_FADE_TIME, v36, 0LL);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText__SetButtonEnable(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        UnityEngine_GameObject_o *gameObject,
        bool isEnable,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_Collections_Generic_List_string__o *TARGET_BUTTON_NAME; // x0
  UnityEngine_Object_o *Deep; // x21
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppObject *Component_object; // x22
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppObject *v20; // x21
  _BOOL8 v21; // x0
  __int64 v22; // x1
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4BB0ECD & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__, gameObject);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__, v8);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_UIButton___, v9);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_UICommonButton___, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_string__GetEnumerator__, v11);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v12);
    byte_4BB0ECD = 1;
  }
  memset(&v24, 0, sizeof(v24));
  TARGET_BUTTON_NAME = this->fields.TARGET_BUTTON_NAME;
  if ( !TARGET_BUTTON_NAME )
    sub_1C13F80(0LL, gameObject);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)TARGET_BUTTON_NAME,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v24 = v23;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    Deep = (UnityEngine_Object_o *)GameObjectExtensions__FindDeep(
                                     gameObject,
                                     (System_String_o *)v24.fields._current,
                                     1,
                                     0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Equality(Deep, 0LL, 0LL);
    if ( !v15 )
    {
      if ( !Deep )
        sub_1C13F80(v15, v16);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)Deep,
                           (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_UIButton___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v18 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( v18 )
      {
        if ( !Component_object )
          sub_1C13F80(v18, v19);
        ((void (__fastcall *)(Il2CppObject *, bool, Il2CppMethodPointer))Component_object->klass->vtable[5].method)(
          Component_object,
          isEnable,
          Component_object->klass->vtable[6].methodPtr);
      }
      v20 = UnityEngine_GameObject__GetComponent_object_(
              (UnityEngine_GameObject_o *)Deep,
              (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_UICommonButton___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v21 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0LL, 0LL);
      if ( v21 )
      {
        if ( !v20 )
          sub_1C13F80(v21, v22);
        ((void (__fastcall *)(Il2CppObject *, bool, Il2CppMethodPointer))v20->klass->vtable[5].method)(
          v20,
          isEnable,
          v20->klass->vtable[6].methodPtr);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText__SetCondTitle(
        ServantStatusFlavorTextListViewItemDrawText_o *this,
        System_String_o *title,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  UnityEngine_GameObject_o *titleServantBase; // x0
  Il2CppObject *Component_object; // x21
  float v11; // s8
  UIWidget_o *titleName; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  float TITLE_NAME_LEFT_POS; // s0
  float v15; // s8
  float v16; // s8
  UILabel_o *v17; // x19

  if ( (byte_4BB0ECC & 1) == 0 )
  {
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_UISprite___, title);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v5);
    sub_1C13D24(&ServantStatusFlavorTextListViewItemDrawText2_TypeInfo, v6);
    sub_1C13D24(&ServantStatusFlavorTextListViewItemDrawText_TypeInfo, v7);
    sub_1C13D24(&StringLiteral_1/*""*/, v8);
    byte_4BB0ECC = 1;
  }
  titleServantBase = this->fields.titleServantBase;
  if ( !titleServantBase )
    goto LABEL_45;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       titleServantBase,
                       (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
      sub_1C13F80(titleServantBase, title);
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
    LODWORD(v11) = COERCE_UNSIGNED_INT128(
                     ((long double (__fastcall *)(UnityEngine_GameObject_o *, Il2CppMethodPointer))*(_QWORD *)&titleServantBase->klass[1]._2.naturalAligment)(
                       titleServantBase,
                       titleServantBase->klass[1].vtable._0_Equals.methodPtr));
    if ( !ServantStatusFlavorTextListViewItemDrawText_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText_TypeInfo);
    titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
    if ( !titleServantBase )
      goto LABEL_45;
    if ( v11 >= (float)ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_CONDENSED_WIDTH )
    {
      titleServantBase = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)titleServantBase,
                                                       0LL);
      if ( !titleServantBase )
        goto LABEL_45;
      LODWORD(v15) = (unsigned int)UnityEngine_Transform__get_localScale(
                                     (UnityEngine_Transform_o *)titleServantBase,
                                     0LL);
      if ( !ServantStatusFlavorTextListViewItemDrawText_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText_TypeInfo);
      titleServantBase = (UnityEngine_GameObject_o *)this->fields.titleName;
      if ( !titleServantBase )
        goto LABEL_45;
      v16 = (float)(1.0 - v15)
          * (float)ServantStatusFlavorTextListViewItemDrawText_TypeInfo->static_fields->TITLE_NAME_LEFT_POS;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleServantBase, 0LL);
      TITLE_NAME_LEFT_POS = v16
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
    v17 = this->fields.titleName;
    if ( !ServantStatusFlavorTextListViewItemDrawText_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText_TypeInfo);
    if ( !v17 )
      goto LABEL_45;
    UILabel__SetCondensedScale(
      v17,
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  void *messageLabel; // x0
  int v19; // w28
  UILabel_o *v20; // x25
  UnityEngine_GameObject_o *mainPrefab; // x26
  UnityEngine_GameObject_o *rubyPrefab; // x27
  RubyLabelHelper_o *v23; // x24
  UnityEngine_Vector2_o Size; // kr00_8
  int32_t y; // w21
  Il2CppObject *Master_object; // x24
  const MethodInfo *v27; // x1
  int32_t SvtId; // w0
  ServantVoiceEntity_o *SvtEquipVoiceEntity; // x0
  ServantVoiceEntity_o *v30; // x24
  _BOOL4 v31; // w26
  UnityEngine_Object_o *baseCollider; // x24
  int v33; // w27
  int v34; // s0
  float v35; // s1
  float v37; // s1
  UnityEngine_Object_o *baseSprite; // x24
  struct CommandCodeEntity_o *commandCodeEntity; // x8
  _BOOL4 v40; // w27
  _BOOL4 v41; // w24
  float v42; // s0
  float v43; // s2
  float v44; // s9
  float v45; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  float v47; // s1
  float v48; // s8
  UnityEngine_GameObject_o *v49; // x0
  UnityEngine_GameObject_o *v50; // x0
  float v51; // s0
  float v52; // s2
  float v53; // s8
  float v54; // s9
  UnityEngine_Object_o *newIcon; // x21
  Il2CppObject *Component_object; // x23
  float v57; // s0
  float v58; // s3
  float v59; // s1
  float v60; // s2
  UnityEngine_Vector3_o v61; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BB0ECB & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_ServantVoiceMaster___, item);
    sub_1C13D24(&DataManager_TypeInfo, v14);
    sub_1C13D24(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v15);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v16);
    sub_1C13D24(&RubyLabelHelper_TypeInfo, v17);
    byte_4BB0ECB = 1;
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
  v19 = *((_DWORD *)messageLabel + 43);
  UIWidget__set_height((UIWidget_o *)messageLabel, *((_DWORD *)messageLabel + 106) * text->fields._stringLength, 0LL);
  v20 = this->fields.messageLabel;
  rubyPrefab = this->fields.rubyPrefab;
  mainPrefab = this->fields.mainPrefab;
  v23 = (RubyLabelHelper_o *)sub_1C13F70(RubyLabelHelper_TypeInfo);
  RubyLabelHelper___ctor(v23, v20, mainPrefab, rubyPrefab, 0LL);
  if ( !v23 )
    goto LABEL_86;
  RubyLabelHelper__SetText(v23, text, 0LL);
  Size = RubyLabelHelper__get_Size(v23, 0LL);
  if ( Size.fields.y == INFINITY )
    y = 0x80000000;
  else
    y = (int)Size.fields.y;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_ServantVoiceMaster___);
  SvtId = ServantStatusListViewItem__get_SvtId(item, v27);
  messageLabel = (void *)ServantVoiceMaster__getSvtVoiceId(SvtId, 0LL);
  this->fields.svtId = (int)messageLabel;
  if ( !Master_object )
    goto LABEL_86;
  SvtEquipVoiceEntity = ServantVoiceMaster__GetSvtEquipVoiceEntity(
                          (ServantVoiceMaster_o *)Master_object,
                          (int32_t)messageLabel,
                          0LL);
  v31 = item->fields.svtEntity
     && (v30 = SvtEquipVoiceEntity, ServantEntity__get_IsServantEquip(item->fields.svtEntity, 0LL))
     && v30 != 0LL;
  baseCollider = (UnityEngine_Object_o *)this->fields.baseCollider;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v33 = y - v19;
  if ( UnityEngine_Object__op_Inequality(baseCollider, 0LL, 0LL) )
  {
    messageLabel = this->fields.baseCollider;
    if ( !messageLabel )
      goto LABEL_86;
    *(UnityEngine_Vector3_o *)&v34 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)messageLabel, 0LL);
    messageLabel = this->fields.baseCollider;
    if ( !messageLabel )
      goto LABEL_86;
    v37 = v35 + (float)v33;
    UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)messageLabel, *(UnityEngine_Vector3_o *)&v34, 0LL);
  }
  baseSprite = (UnityEngine_Object_o *)this->fields.baseSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(baseSprite, 0LL, 0LL) )
  {
    messageLabel = this->fields.baseSprite;
    if ( !messageLabel )
      goto LABEL_86;
    UIWidget__set_height((UIWidget_o *)messageLabel, *((_DWORD *)messageLabel + 43) + v33, 0LL);
  }
  commandCodeEntity = item->fields.commandCodeEntity;
  if ( commandCodeEntity )
    v40 = 0;
  else
    v40 = v31;
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
      ? (v41 = v40)
      : (v41 = 0),
        !this->fields.titleServantBase) )
  {
LABEL_86:
    sub_1C13F80(messageLabel, item);
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
                       (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  messageLabel = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  v31 = v40;
  if ( ((unsigned __int8)messageLabel & 1) == 0 )
    goto LABEL_47;
  v57 = 0.5;
  if ( isOpen )
    v57 = 1.0;
  if ( !Component_object )
    goto LABEL_86;
  v58 = 1.0;
  v59 = v57;
  v60 = v57;
  UIWidget__set_color((UIWidget_o *)Component_object, *(UnityEngine_Color_o *)&v57, 0LL);
  v31 = v41;
LABEL_47:
  messageLabel = this->fields.titleBase;
  if ( !messageLabel )
    goto LABEL_86;
  messageLabel = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)messageLabel, 0LL);
  if ( !messageLabel )
    goto LABEL_86;
  *(UnityEngine_Vector3_o *)&v42 = UnityEngine_Transform__get_localPosition(
                                     (UnityEngine_Transform_o *)messageLabel,
                                     0LL);
  messageLabel = this->fields.titleBase;
  if ( !messageLabel )
    goto LABEL_86;
  v44 = v42;
  v45 = v43;
  messageLabel = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)messageLabel, 0LL);
  if ( !messageLabel )
    goto LABEL_86;
  v61.fields.x = v44;
  v61.fields.y = (float)(Size.fields.y * 0.5) + 20.0;
  v61.fields.z = v45;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)messageLabel, v61, 0LL);
  if ( v31 )
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
    *(UnityEngine_Vector3_o *)(&v47 - 1) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)messageLabel,
                                             0LL);
    messageLabel = this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_86;
    v48 = v47;
    v49 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0LL);
    GameObjectExtensions__SetLocalPositionY(v49, v48 + this->fields.MESSAGE_LABEL_ADD_POS_Y, 0LL);
    messageLabel = this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_86;
    UIWidget__set_height((UIWidget_o *)messageLabel, y, 0LL);
    messageLabel = this->fields.baseSprite;
    if ( !messageLabel )
      goto LABEL_86;
    v50 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0LL);
    GameObjectExtensions__SetLocalPositionY(v50, this->fields.BASE_SPRITE_ADD_POS_Y, 0LL);
    messageLabel = this->fields.baseSprite;
    if ( !messageLabel )
      goto LABEL_86;
    UIWidget__set_height((UIWidget_o *)messageLabel, *((_DWORD *)messageLabel + 43) + 64, 0LL);
    messageLabel = this->fields.titleEquipBase;
    if ( !messageLabel )
      goto LABEL_86;
    messageLabel = UnityEngine_GameObject__GetComponent_object_(
                     (UnityEngine_GameObject_o *)messageLabel,
                     (const MethodInfo_2FDF9FC *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
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
    *(UnityEngine_Vector3_o *)&v51 = UnityEngine_Transform__get_localPosition(
                                       (UnityEngine_Transform_o *)messageLabel,
                                       0LL);
    messageLabel = this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_86;
    v53 = v51;
    v54 = v52;
    UIWidget__set_height((UIWidget_o *)messageLabel, y, 0LL);
    messageLabel = this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_86;
    messageLabel = UnityEngine_Component__get_transform((UnityEngine_Component_o *)messageLabel, 0LL);
    if ( !messageLabel )
      goto LABEL_86;
    v62.fields.y = (float)(Size.fields.y * 0.5) + -14.0;
    v62.fields.x = v53;
    v62.fields.z = v54;
    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)messageLabel, v62, 0LL);
  }
  newIcon = (UnityEngine_Object_o *)this->fields.newIcon;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(newIcon, 0LL, 0LL) )
  {
    messageLabel = this->fields.newIcon;
    if ( !messageLabel )
      goto LABEL_86;
    ShiningIconComponent__Set_39378588((ShiningIconComponent_o *)messageLabel, isNew, 0LL);
  }
}


void __fastcall ServantStatusFlavorTextListViewItemDrawText___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB0ED3 & 1) == 0 )
  {
    sub_1C13D24(&ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo, v1);
    byte_4BB0ED3 = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->static_fields->__9 = (struct ServantStatusFlavorTextListViewItemDrawText___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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
  __int64 v6; // x1
  struct ServantStatusFlavorTextListViewItemDrawText_o *_4__this; // x20
  Il2CppObject *Object_object__49747248; // x21
  Il2CppObject *v9; // x0
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct ServantStatusFlavorTextListViewItemDrawText_o *v16; // x8
  struct ServantStatusFlavorTextListViewItemDrawText_o *v17; // x8
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *v18; // x20
  struct ServantStatusFlavorTextListViewItemDrawText_o *v19; // x8
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *v20; // x20
  struct ServantStatusFlavorTextListViewItemDrawText_o *v21; // x8
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *v22; // x20
  const MethodInfo *v23; // x3

  v4 = this;
  if ( (byte_4BB0ED4 & 1) == 0 )
  {
    sub_1C13D24(&Method_AssetData_GetObject_GameObject____77466800, data);
    sub_1C13D24(&Method_UnityEngine_Object_Instantiate_GameObject___, v5);
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)sub_1C13D24(
                                                                                    &UnityEngine_Object_TypeInfo,
                                                                                    v6);
    byte_4BB0ED4 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this || !data )
    goto LABEL_24;
  Object_object__49747248 = AssetData__GetObject_object__49747248(
                              data,
                              _4__this->fields.SUMMON_BG_OBJECT_NAME,
                              (const MethodInfo_2F71530 *)Method_AssetData_GetObject_GameObject____77466800);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v9 = UnityEngine_Object__Instantiate_object_(
         Object_object__49747248,
         (const MethodInfo_3014D84 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  _4__this->fields.summonBg = (struct UnityEngine_GameObject_o *)v9;
  sub_1C13CC8((PartyOrganizationUtility_o *)&_4__this->fields.summonBg, (int64_t)v9, v10, v11, v12, v13, v14, v15);
  v16 = v4->fields.__4__this;
  if ( !v16 )
    goto LABEL_24;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)v16->fields.summonBg;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)UnityEngine_GameObject__get_transform(
                                                                                  (UnityEngine_GameObject_o *)this,
                                                                                  0LL);
  v17 = v4->fields.__4__this;
  if ( !v17 )
    goto LABEL_24;
  v18 = this;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)v17->fields.summonBgRoot;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)UnityEngine_GameObject__get_transform(
                                                                                  (UnityEngine_GameObject_o *)this,
                                                                                  0LL);
  if ( !v18 )
    goto LABEL_24;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)v18, (UnityEngine_Transform_o *)this, 0LL);
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
  if ( !byte_4BAEDA1 )
  {
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)sub_1C13D24(
                                                                                    &UnityEngine_Vector3_TypeInfo,
                                                                                    data);
    byte_4BAEDA1 = 1;
  }
  if ( !v20 )
    goto LABEL_24;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)v20,
    UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
    0LL);
  v21 = v4->fields.__4__this;
  if ( !v21 )
    goto LABEL_24;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)v21->fields.summonBg;
  if ( !this )
    goto LABEL_24;
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)UnityEngine_GameObject__get_transform(
                                                                                  (UnityEngine_GameObject_o *)this,
                                                                                  0LL);
  v22 = this;
  if ( !byte_4BAEDA6 )
  {
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)sub_1C13D24(
                                                                                    &UnityEngine_Vector3_TypeInfo,
                                                                                    data);
    byte_4BAEDA6 = 1;
  }
  if ( !v22
    || (UnityEngine_Transform__set_localScale(
          (UnityEngine_Transform_o *)v22,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL),
        (this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass40_0_o *)v4->fields.__4__this) == 0LL) )
  {
LABEL_24:
    sub_1C13F80(this, data);
  }
  ServantStatusFlavorTextListViewItemDrawText__PlayScript(
    (ServantStatusFlavorTextListViewItemDrawText_o *)this,
    v4->fields.inactiveCameras,
    v4->fields.inactivePrefabs,
    v23);
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
  struct ServantStatusFlavorTextListViewItemDrawText_o *_4__this; // x20
  void *inactivePrefabs; // x0
  __int64 v16; // x1
  float v17; // s0
  float v18; // s1
  float v19; // s2
  float v20; // s3
  struct ServantStatusFlavorTextListViewItemDrawText_o *v21; // x8
  UnityEngine_Object_o *battleBg; // x20
  struct ServantStatusFlavorTextListViewItemDrawText_o *v23; // x8
  __int64 v24; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v26; // x1
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v28; // x8
  CommonUI_o *v29; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v31; // x21
  Il2CppObject *v32; // x22
  struct ServantStatusFlavorTextListViewItemDrawText___c_StaticFields *static_fields; // x0
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct ServantStatusFlavorTextListViewItemDrawText_o *v40; // x8
  int32_t svtId; // w20
  System_Action_o *_9__2; // x21
  int64_t v43; // x2
  int32_t v44; // w3
  System_String_o *v45; // x4
  BattleSetupInfo_o *v46; // x5
  FollowerInfo_o *v47; // x6
  PartyListViewItem_o *v48; // x7
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+20h] [xbp-70h] BYREF
  UnityEngine_Color_o v51; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4BB0ED5 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&AvalonSceneManager_TypeInfo, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v7);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v8);
    sub_1C13D24(&ScriptManager_TypeInfo, v9);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1C13D24(&Method_ServantStatusFlavorTextListViewItemDrawText___c__PlayScript_b__41_1__, v11);
    sub_1C13D24(&Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0__PlayScript_b__2__, v12);
    sub_1C13D24(&ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo, v13);
    byte_4BB0ED5 = 1;
  }
  memset(&v50, 0, sizeof(v50));
  _4__this = this->fields.__4__this;
  *(UnityEngine_Color_o *)&v17 = UnityEngine_RenderSettings__get_ambientLight(0LL);
  if ( !_4__this )
    goto LABEL_34;
  _4__this->fields.ambientLight.fields.r = v17;
  _4__this->fields.ambientLight.fields.g = v18;
  _4__this->fields.ambientLight.fields.b = v19;
  _4__this->fields.ambientLight.fields.a = v20;
  v51.fields.r = 1.0;
  v51.fields.g = 1.0;
  v51.fields.b = 1.0;
  v51.fields.a = 1.0;
  UnityEngine_RenderSettings__set_ambientLight(v51, 0LL);
  v21 = this->fields.__4__this;
  if ( !v21 )
    goto LABEL_34;
  battleBg = (UnityEngine_Object_o *)v21->fields.battleBg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  inactivePrefabs = (void *)UnityEngine_Object__op_Inequality(battleBg, 0LL, 0LL);
  if ( ((unsigned __int8)inactivePrefabs & 1) != 0 )
  {
    v23 = this->fields.__4__this;
    if ( !v23 )
      goto LABEL_34;
    inactivePrefabs = v23->fields.battleBg;
    if ( !inactivePrefabs )
      goto LABEL_34;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)inactivePrefabs, 0, 0LL);
  }
  inactivePrefabs = this->fields.inactivePrefabs;
  if ( !inactivePrefabs )
    goto LABEL_34;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v49,
    (System_Collections_Generic_List_object__o *)inactivePrefabs,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v50 = v49;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v50,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v50.fields._current )
      sub_1C13F80(0LL, v24);
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v50.fields._current, 0LL);
    if ( !gameObject )
      sub_1C13F80(0LL, v26);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v50,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v28 = AvalonSceneManager_TypeInfo;
  v29 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v28 = AvalonSceneManager_TypeInfo;
  }
  inactivePrefabs = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
  DEFAULT_FADE_TIME = v28->static_fields->DEFAULT_FADE_TIME;
  if ( !ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo);
    inactivePrefabs = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
  }
  v31 = *(System_Action_o **)(*((_QWORD *)inactivePrefabs + 23) + 8LL);
  if ( !v31 )
  {
    if ( !*((_DWORD *)inactivePrefabs + 56) )
    {
      j_il2cpp_runtime_class_init_0(inactivePrefabs);
      inactivePrefabs = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
    }
    v32 = (Il2CppObject *)**((_QWORD **)inactivePrefabs + 23);
    v31 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(v31, v32, Method_ServantStatusFlavorTextListViewItemDrawText___c__PlayScript_b__41_1__, 0LL);
    static_fields = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->static_fields;
    static_fields->__9__41_1 = v31;
    sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->__9__41_1, (int64_t)v31, v34, v35, v36, v37, v38, v39);
  }
  if ( !v29
    || (inactivePrefabs = (void *)CommonUI__maskFadein(v29, DEFAULT_FADE_TIME, v31, 0LL),
        (v40 = this->fields.__4__this) == 0LL) )
  {
LABEL_34:
    sub_1C13F80(inactivePrefabs, v16);
  }
  svtId = v40->fields.svtId;
  _9__2 = this->fields.__9__2;
  if ( !_9__2 )
  {
    _9__2 = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(
      _9__2,
      (Il2CppObject *)this,
      Method_ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass41_0__PlayScript_b__2__,
      0LL);
    this->fields.__9__2 = _9__2;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.__9__2, (int64_t)_9__2, v43, v44, v45, v46, v47, v48);
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
    sub_1C13F80(this, method);
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
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v17; // x8
  UnityEngine_Object_o *monitor; // x20
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v19; // x8
  UnityEngine_Object_o *v20; // x20
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v27; // x8
  System_String_o *_4__this; // x20
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v29; // x8
  UnityEngine_Object_o *v30; // x20
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v31; // x8
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  UnityEngine_Color_o *v38; // x8
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v39; // x8
  UnityEngine_Object_o *klass; // x20
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v41; // x8
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  __int64 v48; // x1
  __int64 v49; // x1
  const MethodInfo *v50; // x3
  ServantStatusFlavorTextListViewItemDrawText_o *v51; // x0
  Il2CppObject *current; // x20
  __int64 v53; // x0
  __int64 v54; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v56; // x1
  ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *v57; // x8
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v59; // x8
  CommonUI_o *v60; // x19
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *items; // x20
  Il2CppObject *v63; // x21
  struct ServantStatusFlavorTextListViewItemDrawText___c_StaticFields *static_fields; // x0
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v72; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+40h] [xbp-80h] BYREF

  v2 = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o **)this;
  if ( (byte_4BB0ED6 & 1) == 0 )
  {
    sub_1C13D24(&System_Action_TypeInfo, method);
    sub_1C13D24(&AssetManager_TypeInfo, v3);
    sub_1C13D24(&AvalonSceneManager_TypeInfo, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_Camera__Dispose__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_Camera__MoveNext__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_Camera__get_Current__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_Camera__GetEnumerator__, v11);
    sub_1C13D24(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__, v12);
    sub_1C13D24(&UnityEngine_Object_TypeInfo, v13);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_1C13D24(&Method_ServantStatusFlavorTextListViewItemDrawText___c__RefreshUI_b__42_1__, v15);
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)sub_1C13D24(
                                                                                    &ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo,
                                                                                    v16);
    byte_4BB0ED6 = 1;
  }
  memset(&i, 0, sizeof(i));
  memset(&v72, 0, sizeof(v72));
  v17 = v2[2];
  if ( !v17 )
    goto LABEL_59;
  monitor = (UnityEngine_Object_o *)v17[2].monitor;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)UnityEngine_Object__op_Inequality(
                                                                                  monitor,
                                                                                  0LL,
                                                                                  0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v19 = v2[2];
    if ( !v19 )
      goto LABEL_59;
    v20 = (UnityEngine_Object_o *)v19[2].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_70721988(v20, 0LL);
    this = v2[2];
    if ( !this )
      goto LABEL_59;
    this[2].monitor = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this[2].monitor, 0LL, v21, v22, v23, v24, v25, v26);
  }
  v27 = v2[2];
  if ( !v27 )
    goto LABEL_59;
  _4__this = (System_String_o *)v27[3].fields.__4__this;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAssetStorage(_4__this, 0LL);
  v29 = v2[2];
  if ( !v29 )
    goto LABEL_59;
  v30 = (UnityEngine_Object_o *)v29[2].fields.__4__this;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)UnityEngine_Object__op_Inequality(
                                                                                  v30,
                                                                                  0LL,
                                                                                  0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v31 = v2[2];
    if ( !v31 )
      goto LABEL_59;
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)v31[2].fields.__4__this;
    if ( !this )
      goto LABEL_59;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
    this = v2[2];
    if ( !this )
      goto LABEL_59;
    this[2].fields.__4__this = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this[2].fields, 0LL, v32, v33, v34, v35, v36, v37);
  }
  v38 = (UnityEngine_Color_o *)v2[2];
  if ( !v38 )
    goto LABEL_59;
  UnityEngine_RenderSettings__set_ambientLight(v38[4], 0LL);
  v39 = v2[2];
  if ( !v39 )
    goto LABEL_59;
  klass = (UnityEngine_Object_o *)v39[2].klass;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)UnityEngine_Object__op_Inequality(
                                                                                  klass,
                                                                                  0LL,
                                                                                  0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v41 = v2[2];
    if ( !v41 )
      goto LABEL_59;
    this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)v41[2].klass;
    if ( !this )
      goto LABEL_59;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
    this = v2[2];
    if ( !this )
      goto LABEL_59;
    this[2].klass = 0LL;
    sub_1C13CC8((PartyOrganizationUtility_o *)&this[2], 0LL, v42, v43, v44, v45, v46, v47);
  }
  this = v2[3];
  if ( !this )
    goto LABEL_59;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v71,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_Camera__GetEnumerator__);
  for ( i = v71;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_Camera__MoveNext__);
        UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)i.fields._current, 1, 0LL) )
  {
    if ( !i.fields._current )
      sub_1C13F80(0LL, v48);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_Camera__Dispose__);
  this = v2[4];
  if ( !this )
    goto LABEL_59;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v71,
    (System_Collections_Generic_List_object__o *)this,
    (const MethodInfo_362DCC4 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v72 = v71;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v72,
            (const MethodInfo_33BEBE8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    v51 = (ServantStatusFlavorTextListViewItemDrawText_o *)v2[2];
    if ( !v51 )
      sub_1C13F80(0LL, v49);
    current = v72.fields._current;
    ServantStatusFlavorTextListViewItemDrawText__SetButtonEnable(
      v51,
      (UnityEngine_GameObject_o *)v72.fields._current,
      1,
      v50);
    if ( !current )
      sub_1C13F80(v53, v54);
    gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)current, 0LL);
    if ( !gameObject )
      sub_1C13F80(0LL, v56);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v72,
    (const MethodInfo_33BEBE4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  v57 = v2[2];
  if ( !v57 )
    goto LABEL_59;
  BYTE4(v57[1].fields.__4__this) = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v59 = AvalonSceneManager_TypeInfo;
  v60 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v59 = AvalonSceneManager_TypeInfo;
  }
  this = (ServantStatusFlavorTextListViewItemDrawText___c__DisplayClass42_0_o *)ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo;
  DEFAULT_FADE_TIME = v59->static_fields->DEFAULT_FADE_TIME;
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
    v63 = (Il2CppObject *)this[4].fields.inactiveCameras->klass;
    items = (System_Action_o *)sub_1C13F70(System_Action_TypeInfo);
    System_Action___ctor(items, v63, Method_ServantStatusFlavorTextListViewItemDrawText___c__RefreshUI_b__42_1__, 0LL);
    static_fields = ServantStatusFlavorTextListViewItemDrawText___c_TypeInfo->static_fields;
    static_fields->__9__42_1 = items;
    sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->__9__42_1, (int64_t)items, v65, v66, v67, v68, v69, v70);
  }
  if ( !v60 )
LABEL_59:
    sub_1C13F80(this, method);
  CommonUI__maskFadein(v60, DEFAULT_FADE_TIME, items, 0LL);
}