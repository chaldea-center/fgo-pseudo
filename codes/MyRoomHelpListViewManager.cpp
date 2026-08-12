void MyRoomHelpListViewManager___cctor(const MethodInfo *method)
{
  struct MyRoomHelpListViewManager_MyRoomHelpItemInfo_array *v1; // x19
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v2; // x20
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  __int64 v11; // x1
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v12; // x20
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v19; // x20
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v26; // x20
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v33; // x20
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v40; // x20
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v47; // x20
  System_String_o *v48; // x2
  System_String_o *v49; // x3
  int32_t v50; // w4
  int32_t v51; // w5
  bool v52; // w6
  bool v53; // w7
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v54; // x20
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v61; // x20
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v68; // x20
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v75; // x20
  System_String_o *v76; // x2
  System_String_o *v77; // x3
  int32_t v78; // w4
  int32_t v79; // w5
  bool v80; // w6
  bool v81; // w7
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v82; // x20
  System_String_o *v83; // x2
  System_String_o *v84; // x3
  int32_t v85; // w4
  int32_t v86; // w5
  bool v87; // w6
  bool v88; // w7
  MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *v89; // x20
  System_String_o *v90; // x2
  System_String_o *v91; // x3
  int32_t v92; // w4
  int32_t v93; // w5
  bool v94; // w6
  bool v95; // w7
  System_String_o *v96; // x2
  System_String_o *v97; // x3
  int32_t v98; // w4
  int32_t v99; // w5
  bool v100; // w6
  bool v101; // w7
  System_Array_o *v102; // x19
  struct MyRoomHelpListViewManager_StaticFields *static_fields; // x0
  System_String_o *v104; // x2
  System_String_o *v105; // x3
  int32_t v106; // w4
  int32_t v107; // w5
  bool v108; // w6
  bool v109; // w7
  int32_t v110; // w1
  struct MyRoomHelpListViewManager_StaticFields *v111; // x0
  System_String_o *v112; // x2
  System_String_o *v113; // x3
  int32_t v114; // w4
  int32_t v115; // w5
  bool v116; // w6
  bool v117; // w7
  int32_t v118; // w1
  struct MyRoomHelpListViewManager_StaticFields *v119; // x0
  System_String_o *v120; // x2
  System_String_o *v121; // x3
  int32_t v122; // w4
  int32_t v123; // w5
  bool v124; // w6
  bool v125; // w7
  int32_t v126; // w1
  struct MyRoomHelpListViewManager_StaticFields *v127; // x0
  System_String_o *v128; // x2
  System_String_o *v129; // x3
  int32_t v130; // w4
  int32_t v131; // w5
  bool v132; // w6
  bool v133; // w7
  int32_t v134; // w1
  struct MyRoomHelpListViewManager_StaticFields *v135; // x0
  System_String_o *v136; // x2
  System_String_o *v137; // x3
  int32_t v138; // w4
  int32_t v139; // w5
  bool v140; // w6
  bool v141; // w7
  __int64 v142; // x0

  if ( (byte_596BD4F & 1) == 0 )
  {
    sub_2213A60(&MyRoomHelpListViewManager_ItemKind___TypeInfo);
    sub_2213A60(&MyRoomHelpListViewManager_MyRoomHelpItemInfo___TypeInfo);
    sub_2213A60(&MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
    sub_2213A60(&MyRoomHelpListViewManager_TypeInfo);
    sub_2213A60(&Field__PrivateImplementationDetails__00A19CA5190488C13513BA3EAB91F2A8A585C9EA317AD3D105973C6CB84E4595);
    sub_2213A60(&StringLiteral_9215/*"MYROOM_MENU_NAME_3"*/);
    sub_2213A60(&StringLiteral_9192/*"MYROOM_HELP_HELP_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_9190/*"MYROOM_HELP_ACCOUNT_LINKAGE_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_15219/*"Tutorial/tutorial_alpha"*/);
    sub_2213A60(&StringLiteral_9201/*"MYROOM_HELP_TAKE_OVER_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_9193/*"MYROOM_HELP_ITEM_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_9191/*"MYROOM_HELP_FAVORITE_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_9195/*"MYROOM_HELP_MATERIAL_SERVANT_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_9207/*"MYROOM_MENU_NAME_1"*/);
    sub_2213A60(&StringLiteral_9213/*"MYROOM_MENU_NAME_15"*/);
    sub_2213A60(&StringLiteral_9198/*"MYROOM_HELP_OPTION_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_9199/*"MYROOM_HELP_RETURN_TITLE_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_9216/*"MYROOM_MENU_NAME_4"*/);
    sub_2213A60(&StringLiteral_9194/*"MYROOM_HELP_MATERIAL_GALLERY_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_25548/*"tutorial_0006"*/);
    sub_2213A60(&StringLiteral_9200/*"MYROOM_HELP_SOUND_PLAYER_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_9221/*"MYROOM_MENU_NAME_9"*/);
    sub_2213A60(&StringLiteral_9209/*"MYROOM_MENU_NAME_11"*/);
    sub_2213A60(&StringLiteral_9214/*"MYROOM_MENU_NAME_2"*/);
    sub_2213A60(&StringLiteral_21447/*"img_menuboard_01"*/);
    sub_2213A60(&StringLiteral_9217/*"MYROOM_MENU_NAME_5"*/);
    sub_2213A60(&StringLiteral_9220/*"MYROOM_MENU_NAME_8"*/);
    sub_2213A60(&StringLiteral_9210/*"MYROOM_MENU_NAME_12"*/);
    sub_2213A60(&StringLiteral_21547/*"img_shop_0"*/);
    sub_2213A60(&StringLiteral_15218/*"Tutorial/tutorial_0006"*/);
    sub_2213A60(&StringLiteral_9218/*"MYROOM_MENU_NAME_6"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_9196/*"MYROOM_HELP_MATERIAL_STORY_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_25549/*"tutorial_alpha"*/);
    sub_2213A60(&StringLiteral_9197/*"MYROOM_HELP_MST_PROFILE_EXPLANATION"*/);
    sub_2213A60(&StringLiteral_9211/*"MYROOM_MENU_NAME_13"*/);
    byte_596BD4F = 1;
  }
  v1 = (struct MyRoomHelpListViewManager_MyRoomHelpItemInfo_array *)sub_2213B20(
                                                                      MyRoomHelpListViewManager_MyRoomHelpItemInfo___TypeInfo,
                                                                      13);
  v2 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_2213CCC(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v2,
    1,
    (System_String_o *)StringLiteral_9196/*"MYROOM_HELP_MATERIAL_STORY_EXPLANATION"*/,
    (System_String_o *)StringLiteral_21447/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_9209/*"MYROOM_MENU_NAME_11"*/,
    0);
  if ( !v1 )
    sub_2213CDC(v3, v4);
  if ( v2 )
  {
    v3 = sub_2213BB4(v2, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_45;
  }
  if ( !LODWORD(v1->max_length) )
    goto LABEL_44;
  v1->m_Items[0] = v2;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v1->m_Items, (int32_t)v2, v5, v6, v7, v8, v9, v10);
  v12 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_2213CCC(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v12,
    2,
    (System_String_o *)StringLiteral_9195/*"MYROOM_HELP_MATERIAL_SERVANT_EXPLANATION"*/,
    (System_String_o *)StringLiteral_21447/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_9210/*"MYROOM_MENU_NAME_12"*/,
    0);
  if ( v12 )
  {
    v3 = sub_2213BB4(v12, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_45;
  }
  if ( (v1->max_length & 0xFFFFFFFE) == 0 )
    goto LABEL_44;
  v1->m_Items[1] = v12;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v1->m_Items[1], (int32_t)v12, v13, v14, v15, v16, v17, v18);
  v19 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_2213CCC(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v19,
    3,
    (System_String_o *)StringLiteral_9194/*"MYROOM_HELP_MATERIAL_GALLERY_EXPLANATION"*/,
    (System_String_o *)StringLiteral_21447/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_9213/*"MYROOM_MENU_NAME_15"*/,
    0);
  if ( v19 )
  {
    v3 = sub_2213BB4(v19, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_45;
  }
  if ( LODWORD(v1->max_length) <= 2 )
    goto LABEL_44;
  v1->m_Items[2] = v19;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v1->m_Items[2], (int32_t)v19, v20, v21, v22, v23, v24, v25);
  v26 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_2213CCC(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v26,
    4,
    (System_String_o *)StringLiteral_9193/*"MYROOM_HELP_ITEM_EXPLANATION"*/,
    (System_String_o *)StringLiteral_21447/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_9207/*"MYROOM_MENU_NAME_1"*/,
    0);
  if ( v26 )
  {
    v3 = sub_2213BB4(v26, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_45;
  }
  if ( (v1->max_length & 0xFFFFFFFC) == 0 )
    goto LABEL_44;
  v1->m_Items[3] = v26;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v1->m_Items[3], (int32_t)v26, v27, v28, v29, v30, v31, v32);
  v33 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_2213CCC(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v33,
    6,
    (System_String_o *)StringLiteral_9200/*"MYROOM_HELP_SOUND_PLAYER_EXPLANATION"*/,
    (System_String_o *)StringLiteral_21447/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_9214/*"MYROOM_MENU_NAME_2"*/,
    0);
  if ( v33 )
  {
    v3 = sub_2213BB4(v33, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_45;
  }
  if ( LODWORD(v1->max_length) <= 4 )
    goto LABEL_44;
  v1->m_Items[4] = v33;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v1->m_Items[4], (int32_t)v33, v34, v35, v36, v37, v38, v39);
  v40 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_2213CCC(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v40,
    7,
    (System_String_o *)StringLiteral_9197/*"MYROOM_HELP_MST_PROFILE_EXPLANATION"*/,
    (System_String_o *)StringLiteral_21447/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_9215/*"MYROOM_MENU_NAME_3"*/,
    0);
  if ( v40 )
  {
    v3 = sub_2213BB4(v40, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_45;
  }
  if ( LODWORD(v1->max_length) <= 5 )
    goto LABEL_44;
  v1->m_Items[5] = v40;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v1->m_Items[5], (int32_t)v40, v41, v42, v43, v44, v45, v46);
  v47 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_2213CCC(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v47,
    8,
    (System_String_o *)StringLiteral_9191/*"MYROOM_HELP_FAVORITE_EXPLANATION"*/,
    (System_String_o *)StringLiteral_21447/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_9216/*"MYROOM_MENU_NAME_4"*/,
    0);
  if ( v47 )
  {
    v3 = sub_2213BB4(v47, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_45;
  }
  if ( LODWORD(v1->max_length) <= 6 )
    goto LABEL_44;
  v1->m_Items[6] = v47;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v1->m_Items[6], (int32_t)v47, v48, v49, v50, v51, v52, v53);
  v54 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_2213CCC(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v54,
    9,
    (System_String_o *)StringLiteral_9192/*"MYROOM_HELP_HELP_EXPLANATION"*/,
    (System_String_o *)StringLiteral_21447/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_9217/*"MYROOM_MENU_NAME_5"*/,
    0);
  if ( v54 )
  {
    v3 = sub_2213BB4(v54, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_45;
  }
  if ( (v1->max_length & 0xFFFFFFF8) == 0 )
    goto LABEL_44;
  v1->m_Items[7] = v54;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v1->m_Items[7], (int32_t)v54, v55, v56, v57, v58, v59, v60);
  v61 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_2213CCC(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v61,
    10,
    (System_String_o *)StringLiteral_9198/*"MYROOM_HELP_OPTION_EXPLANATION"*/,
    (System_String_o *)StringLiteral_21447/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_9218/*"MYROOM_MENU_NAME_6"*/,
    0);
  if ( v61 )
  {
    v3 = sub_2213BB4(v61, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_45;
  }
  if ( LODWORD(v1->max_length) <= 8 )
    goto LABEL_44;
  v1->m_Items[8] = v61;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v1->m_Items[8], (int32_t)v61, v62, v63, v64, v65, v66, v67);
  v68 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_2213CCC(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v68,
    11,
    (System_String_o *)StringLiteral_9201/*"MYROOM_HELP_TAKE_OVER_EXPLANATION"*/,
    (System_String_o *)StringLiteral_21447/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_9220/*"MYROOM_MENU_NAME_8"*/,
    0);
  if ( v68 )
  {
    v3 = sub_2213BB4(v68, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_45;
  }
  if ( LODWORD(v1->max_length) <= 9 )
    goto LABEL_44;
  v1->m_Items[9] = v68;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v1->m_Items[9], (int32_t)v68, v69, v70, v71, v72, v73, v74);
  v75 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_2213CCC(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v75,
    12,
    (System_String_o *)StringLiteral_9190/*"MYROOM_HELP_ACCOUNT_LINKAGE_EXPLANATION"*/,
    (System_String_o *)StringLiteral_21447/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_9211/*"MYROOM_MENU_NAME_13"*/,
    0);
  if ( v75 )
  {
    v3 = sub_2213BB4(v75, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_45;
  }
  if ( LODWORD(v1->max_length) <= 0xA )
    goto LABEL_44;
  v1->m_Items[10] = v75;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v1->m_Items[10], (int32_t)v75, v76, v77, v78, v79, v80, v81);
  v82 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_2213CCC(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v82,
    13,
    (System_String_o *)StringLiteral_9199/*"MYROOM_HELP_RETURN_TITLE_EXPLANATION"*/,
    (System_String_o *)StringLiteral_21447/*"img_menuboard_01"*/,
    (System_String_o *)StringLiteral_9221/*"MYROOM_MENU_NAME_9"*/,
    0);
  if ( v82 )
  {
    v3 = sub_2213BB4(v82, v1->obj.klass->_1.element_class);
    if ( !v3 )
      goto LABEL_45;
  }
  if ( LODWORD(v1->max_length) <= 0xB )
    goto LABEL_44;
  v1->m_Items[11] = v82;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v1->m_Items[11], (int32_t)v82, v83, v84, v85, v86, v87, v88);
  v89 = (MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *)sub_2213CCC(MyRoomHelpListViewManager_MyRoomHelpItemInfo_TypeInfo);
  MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
    v89,
    14,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_21547/*"img_shop_0"*/,
    (System_String_o *)StringLiteral_1/*""*/,
    0);
  if ( v89 )
  {
    v3 = sub_2213BB4(v89, v1->obj.klass->_1.element_class);
    if ( !v3 )
    {
LABEL_45:
      v142 = sub_2213D00(v3, v11);
      sub_2213BA0(v142, 0);
    }
  }
  if ( LODWORD(v1->max_length) <= 0xC )
LABEL_44:
    sub_2213CE4(v3);
  v1->m_Items[12] = v89;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v1->m_Items[12], (int32_t)v89, v90, v91, v92, v93, v94, v95);
  MyRoomHelpListViewManager_TypeInfo->static_fields->itemInfoList = v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)MyRoomHelpListViewManager_TypeInfo->static_fields,
    (int32_t)v1,
    v96,
    v97,
    v98,
    v99,
    v100,
    v101);
  v102 = (System_Array_o *)sub_2213B20(MyRoomHelpListViewManager_ItemKind___TypeInfo, 12);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_76340728(
    v102,
    (System_RuntimeFieldHandle_o)Field__PrivateImplementationDetails__00A19CA5190488C13513BA3EAB91F2A8A585C9EA317AD3D105973C6CB84E4595,
    0);
  static_fields = MyRoomHelpListViewManager_TypeInfo->static_fields;
  static_fields->KindList = (struct MyRoomHelpListViewManager_ItemKind_array *)v102;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->KindList,
    (int32_t)v102,
    v104,
    v105,
    v106,
    v107,
    v108,
    v109);
  v110 = StringLiteral_15218/*"Tutorial/tutorial_0006"*/;
  v111 = MyRoomHelpListViewManager_TypeInfo->static_fields;
  v111->HELP_BASE_SPRITE_PATH = (struct System_String_o *)StringLiteral_15218/*"Tutorial/tutorial_0006"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v111->HELP_BASE_SPRITE_PATH,
    v110,
    v112,
    v113,
    v114,
    v115,
    v116,
    v117);
  v118 = StringLiteral_25548/*"tutorial_0006"*/;
  v119 = MyRoomHelpListViewManager_TypeInfo->static_fields;
  v119->HELP_BASE_SPRITE_NAME = (struct System_String_o *)StringLiteral_25548/*"tutorial_0006"*/;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v119->HELP_BASE_SPRITE_NAME,
    v118,
    v120,
    v121,
    v122,
    v123,
    v124,
    v125);
  v126 = StringLiteral_15219/*"Tutorial/tutorial_alpha"*/;
  v127 = MyRoomHelpListViewManager_TypeInfo->static_fields;
  v127->HELP_BASE_ALPHA_PATH = (struct System_String_o *)StringLiteral_15219/*"Tutorial/tutorial_alpha"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v127->HELP_BASE_ALPHA_PATH, v126, v128, v129, v130, v131, v132, v133);
  v134 = StringLiteral_25549/*"tutorial_alpha"*/;
  v135 = MyRoomHelpListViewManager_TypeInfo->static_fields;
  v135->HELP_BASE_ALPHA_NAME = (struct System_String_o *)StringLiteral_25549/*"tutorial_alpha"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v135->HELP_BASE_ALPHA_NAME, v134, v136, v137, v138, v139, v140, v141);
}


void MyRoomHelpListViewManager___ctor(MyRoomHelpListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager___ctor((ListViewManager_o *)this, 0);
}


void MyRoomHelpListViewManager__Callback(MyRoomHelpListViewManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct MyRoomHelpListViewManager_CallbackFunc_o *callbackFunc; // x19

  callbackFunc = this->fields.callbackFunc;
  this->fields.callbackFunc = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc, 0, v2, v3, v4, v5, v6, v7);
  if ( callbackFunc )
    ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc->fields.invoke_impl)(
      callbackFunc->fields.method_code,
      callbackFunc->fields.method);
}


void MyRoomHelpListViewManager__CloseHelpDialog(
        MyRoomHelpListViewManager_o *this,
        MyRoomHelpListViewManager_CallbackFunc2_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MyRoomHelpMenu_o *baseDialog; // x20
  MyRoomHelpMenu_CallbackFunc_o *v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_596BD49 & 1) == 0 )
  {
    sub_2213A60(&MyRoomHelpMenu_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_MyRoomHelpListViewManager_WaitFadeOut__);
    byte_596BD49 = 1;
  }
  this->fields.callbackFunc2 = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  baseDialog = this->fields.baseDialog;
  v11 = (MyRoomHelpMenu_CallbackFunc_o *)sub_2213CCC(MyRoomHelpMenu_CallbackFunc_TypeInfo);
  MyRoomHelpMenu_CallbackFunc___ctor(v11, (Il2CppObject *)this, Method_MyRoomHelpListViewManager_WaitFadeOut__, 0);
  if ( !baseDialog )
    sub_2213CDC(v12, v13);
  MyRoomHelpMenu__Close(baseDialog, v11, 0);
}


void MyRoomHelpListViewManager__CreateList(MyRoomHelpListViewManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  __int64 v9; // x1
  MyRoomHelpMenu_o *baseDialog; // x0
  __int64 v11; // x2
  __int64 v12; // x25
  __int64 v13; // x8
  unsigned __int64 v14; // x26
  int v15; // w20
  __int64 v16; // x10
  __int64 v17; // x9
  __int64 v18; // x8
  __int64 v19; // x9
  __int64 *v20; // x10
  __int64 v21; // x22
  System_Collections_Generic_List_object__o *itemList; // x20
  int32_t size; // w23
  __int64 v24; // x21
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  struct System_Object_array *items; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass **v40; // x0

  if ( (byte_596BD48 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Count__);
    sub_2213A60(&MyRoomHelpListViewItem_TypeInfo);
    sub_2213A60(&MyRoomHelpListViewManager_TypeInfo);
    byte_596BD48 = 1;
  }
  this->fields.callbackFunc2 = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2, 0, v2, v3, v4, v5, v6, v7);
  baseDialog = this->fields.baseDialog;
  if ( !baseDialog )
    goto LABEL_28;
  MyRoomHelpMenu__Open(baseDialog, 0);
  ListViewManager__CreateList((ListViewManager_o *)this, 0, 0);
  baseDialog = (MyRoomHelpMenu_o *)MyRoomHelpListViewManager_TypeInfo;
  if ( !*(&MyRoomHelpListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomHelpListViewManager_TypeInfo, v9, v11);
    baseDialog = (MyRoomHelpMenu_o *)MyRoomHelpListViewManager_TypeInfo;
  }
  v12 = *(_QWORD *)(*(_QWORD *)&baseDialog[1].fields.refuseInit + 8LL);
  if ( !v12 )
    goto LABEL_28;
  v13 = *(_QWORD *)(v12 + 24);
  if ( (int)v13 >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)v13 )
LABEL_27:
        sub_2213CE4(baseDialog);
      baseDialog = (MyRoomHelpMenu_o *)MyRoomHelpListViewManager_TypeInfo;
      v15 = *(_DWORD *)(v12 + 4 * v14 + 32);
      if ( !*(&MyRoomHelpListViewManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(MyRoomHelpListViewManager_TypeInfo, v9, v11);
        baseDialog = (MyRoomHelpMenu_o *)MyRoomHelpListViewManager_TypeInfo;
      }
      v16 = **(_QWORD **)&baseDialog[1].fields.refuseInit;
      if ( !v16 )
        break;
      v17 = *(_QWORD *)(v16 + 24);
      if ( (int)v17 >= 1 )
      {
        v18 = (unsigned int)v17 & ~((int)v17 >> 31);
        v19 = (unsigned int)*(_QWORD *)(v16 + 24);
        v20 = (__int64 *)(v16 + 32);
        while ( 1 )
        {
          if ( !v19 )
            goto LABEL_27;
          v21 = *v20;
          if ( *v20 )
          {
            if ( *(_DWORD *)(v21 + 16) == v15 )
              break;
          }
          --v18;
          ++v20;
          --v19;
          if ( !v18 )
            goto LABEL_25;
        }
        itemList = (System_Collections_Generic_List_object__o *)this->fields.itemList;
        if ( !itemList )
          break;
        size = itemList->fields._size;
        v24 = sub_2213CCC(MyRoomHelpListViewItem_TypeInfo);
        ListViewItem___ctor_50819428((ListViewItem_o *)v24, size, 0);
        *(_QWORD *)(v24 + 120) = v21;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v24 + 120), v21, v25, v26, v27, v28, v29, v30);
        items = itemList->fields._items;
        v38 = Method_System_Collections_Generic_List_ListViewItem__Add__;
        ++itemList->fields._version;
        if ( !items )
          break;
        v39 = itemList->fields._size;
        if ( (unsigned int)v39 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            itemList,
            (Il2CppObject *)v24,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
        }
        else
        {
          v40 = &items->obj.klass + v39;
          itemList->fields._size = v39 + 1;
          v40[4] = (Il2CppClass *)v24;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v40 + 4), v24, v31, v32, v33, v34, v35, v36);
        }
      }
LABEL_25:
      LODWORD(v13) = *(_DWORD *)(v12 + 24);
      if ( (__int64)++v14 >= (int)v13 )
        goto LABEL_26;
    }
LABEL_28:
    sub_2213CDC(baseDialog, v9);
  }
LABEL_26:
  ListViewManager__SortItem((ListViewManager_o *)this, -1, 0, -1, 0);
}


void MyRoomHelpListViewManager__DestroyList(MyRoomHelpListViewManager_o *this, const MethodInfo *method)
{
  ListViewManager__DestroyList((ListViewManager_o *)this, 0);
}


MyRoomHelpListViewItem_o *MyRoomHelpListViewManager__GetItem(
        MyRoomHelpListViewManager_o *this,
        int32_t index,
        const MethodInfo *method)
{
  MyRoomHelpListViewItem_o *result; // x0
  __int64 naturalAligment; // x10

  if ( (byte_596BD4A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    sub_2213A60(&MyRoomHelpListViewItem_TypeInfo);
    byte_596BD4A = 1;
  }
  result = (MyRoomHelpListViewItem_o *)this->fields.itemList;
  if ( result )
  {
    result = (MyRoomHelpListViewItem_o *)System_Collections_Generic_List_object___get_Item(
                                           (System_Collections_Generic_List_object__o *)result,
                                           index,
                                           (const MethodInfo_4483994 *)Method_System_Collections_Generic_List_ListViewItem__get_Item__);
    if ( result )
    {
      naturalAligment = MyRoomHelpListViewItem_TypeInfo->_2.naturalAligment;
      if ( result->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
      {
        if ( (MyRoomHelpListViewItem_c *)result->klass->_2.typeHierarchy[naturalAligment - 1] != MyRoomHelpListViewItem_TypeInfo )
          return 0;
      }
      else
      {
        return 0;
      }
    }
  }
  return result;
}


void MyRoomHelpListViewManager__LoadBaseSprite(MyRoomHelpListViewManager_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  __int64 v18; // x21
  MyRoomHelpListViewManager_c *v19; // x8
  struct System_String_o *HELP_BASE_SPRITE_PATH; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  struct System_String_o *HELP_BASE_ALPHA_PATH; // x1
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_String_array *v34; // x21
  System_Action_o *v35; // x19
  __int64 v36; // x1
  __int64 v37; // x2

  if ( (byte_596BD46 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&MyRoomHelpListViewManager_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&Method_MyRoomHelpListViewManager___c__DisplayClass25_0__LoadBaseSprite_b__0__);
    sub_2213A60(&MyRoomHelpListViewManager___c__DisplayClass25_0_TypeInfo);
    byte_596BD46 = 1;
  }
  v3 = sub_2213CCC(MyRoomHelpListViewManager___c__DisplayClass25_0_TypeInfo);
  MyRoomHelpListViewManager___c__DisplayClass25_0___ctor((MyRoomHelpListViewManager___c__DisplayClass25_0_o *)v3, 0);
  if ( !v3 )
    goto LABEL_13;
  *(_QWORD *)(v3 + 16) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)this, v6, v7, v8, v9, v10, v11);
  if ( this->fields.initMode )
    return;
  v4 = sub_2213B20(string___TypeInfo, 2);
  v18 = v4;
  v19 = MyRoomHelpListViewManager_TypeInfo;
  if ( !*(&MyRoomHelpListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomHelpListViewManager_TypeInfo, v5, v12);
    v19 = MyRoomHelpListViewManager_TypeInfo;
  }
  if ( !v18 )
LABEL_13:
    sub_2213CDC(v4, v5);
  if ( !*(_DWORD *)(v18 + 24)
    || (HELP_BASE_SPRITE_PATH = v19->static_fields->HELP_BASE_SPRITE_PATH,
        *(_QWORD *)(v18 + 32) = HELP_BASE_SPRITE_PATH,
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)(v18 + 32),
          (int32_t)HELP_BASE_SPRITE_PATH,
          v12,
          v13,
          v14,
          v15,
          v16,
          v17),
        (*(_DWORD *)(v18 + 24) & 0xFFFFFFFE) == 0) )
  {
    sub_2213CE4(v4);
  }
  HELP_BASE_ALPHA_PATH = MyRoomHelpListViewManager_TypeInfo->static_fields->HELP_BASE_ALPHA_PATH;
  *(_QWORD *)(v18 + 40) = HELP_BASE_ALPHA_PATH;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)(v18 + 40),
    (int32_t)HELP_BASE_ALPHA_PATH,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  *(_QWORD *)(v3 + 24) = v18;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 24), v18, v28, v29, v30, v31, v32, v33);
  v34 = *(System_String_array **)(v3 + 24);
  this->fields.initMode = 1;
  v35 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v35,
    (Il2CppObject *)v3,
    Method_MyRoomHelpListViewManager___c__DisplayClass25_0__LoadBaseSprite_b__0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v36, v37);
  AssetManager__loadAssetStorage_47503780(v34, v35, 1, 0);
}


void MyRoomHelpListViewManager__OnMoveEnd(MyRoomHelpListViewManager_o *this, const MethodInfo *method)
{
  int32_t callbackCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *scrollBar; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Component_o *gameObject; // x0
  UnityEngine_Object_o *scrollView; // x20

  if ( (byte_596BD4E & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BD4E = 1;
  }
  callbackCount = this->fields.callbackCount;
  v4 = __OFSUB__(callbackCount, 1);
  v5 = callbackCount - 1;
  if ( v5 < 0 == v4 )
  {
    this->fields.callbackCount = v5;
    if ( !v5 )
    {
      ListViewManager__DragMaskEnd((ListViewManager_o *)this, 0);
      scrollBar = (UnityEngine_Object_o *)this->fields.scrollBar;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
      if ( UnityEngine_Object__op_Inequality(scrollBar, 0, 0) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.scrollBar;
        if ( !gameObject )
          goto LABEL_17;
        gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
        if ( !gameObject )
          goto LABEL_17;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
      }
      scrollView = (UnityEngine_Object_o *)this->fields.scrollView;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
      if ( UnityEngine_Object__op_Inequality(scrollView, 0, 0) )
      {
        gameObject = (UnityEngine_Component_o *)this->fields.scrollView;
        if ( gameObject )
        {
          ((void (__fastcall *)(UnityEngine_Component_o *, __int64, Il2CppClass *))gameObject->klass[1]._1.element_class)(
            gameObject,
            1,
            gameObject->klass[1]._1.castClass);
          return;
        }
LABEL_17:
        sub_2213CDC(gameObject, v9);
      }
    }
  }
}


void MyRoomHelpListViewManager__ReleaseBaseSprite(MyRoomHelpListViewManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomHelpListViewManager_c *v4; // x0
  System_String_o *HELP_BASE_SPRITE_PATH; // x20
  __int64 v6; // x1
  UnityEngine_GameObject_o *BaseWindow; // x0

  if ( (byte_596BD47 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_2213A60(&MyRoomHelpListViewManager_TypeInfo);
    byte_596BD47 = 1;
  }
  if ( this->fields.initMode == 2 )
  {
    v4 = MyRoomHelpListViewManager_TypeInfo;
    if ( !*(&MyRoomHelpListViewManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MyRoomHelpListViewManager_TypeInfo, method, v2);
      v4 = MyRoomHelpListViewManager_TypeInfo;
    }
    HELP_BASE_SPRITE_PATH = v4->static_fields->HELP_BASE_SPRITE_PATH;
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
    AssetManager__releaseAssetStorage(HELP_BASE_SPRITE_PATH, 0);
    AssetManager__releaseAssetStorage(MyRoomHelpListViewManager_TypeInfo->static_fields->HELP_BASE_ALPHA_PATH, 0);
    BaseWindow = this->fields.BaseWindow;
    if ( !BaseWindow
      || (BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(BaseWindow, 0)) == 0
      || (BaseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                     (UnityEngine_Component_o *)BaseWindow,
                                                     (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UITexture___)) == 0 )
    {
      sub_2213CDC(BaseWindow, v6);
    }
    ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *))BaseWindow->klass[1].vtable._3_ToString.method)(
      BaseWindow,
      0,
      BaseWindow->klass[2]._1.image);
  }
  this->fields.initMode = 0;
}


// local variable allocation has failed, the output may be wrong!
void MyRoomHelpListViewManager__RequestListObject(
        MyRoomHelpListViewManager_o *this,
        int32_t mode,
        float delay,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v8; // x1
  int32_t size; // w8
  const MethodInfo_448473C *v10; // x1
  Il2CppObject *current; // x21
  System_Action_o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596BD4C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_MyRoomHelpListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_MyRoomHelpListViewObject__get_Count__);
    sub_2213A60(&Method_MyRoomHelpListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596BD4C = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)MyRoomHelpListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v8);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      delay,
      0);
  }
  else
  {
    v10 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MyRoomHelpListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      v10);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v12 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_MyRoomHelpListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v13, v14);
      MyRoomHelpListViewObject__Init_40672404((MyRoomHelpListViewObject_o *)current, mode, v12, delay, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void MyRoomHelpListViewManager__RequestListObject_40666740(
        MyRoomHelpListViewManager_o *this,
        int32_t mode,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *ObjectList; // x0
  __int64 v6; // x1
  int32_t size; // w8
  const MethodInfo_448473C *v8; // x1
  Il2CppObject *current; // x21
  System_Action_o *v10; // x22
  __int64 v11; // x0
  __int64 v12; // x1
  __int64 v13; // [xsp+8h] [xbp-78h]
  System_Collections_Generic_List_Enumerator_object__o *v14; // [xsp+10h] [xbp-70h]
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_596BD4D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_MyRoomHelpListViewObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_MyRoomHelpListViewObject__get_Count__);
    sub_2213A60(&Method_MyRoomHelpListViewManager_OnMoveEnd__);
    sub_2213A60(&StringLiteral_10344/*"OnMoveEnd"*/);
    byte_596BD4D = 1;
  }
  memset(&v15, 0, sizeof(v15));
  ObjectList = (System_Collections_Generic_List_object__o *)MyRoomHelpListViewManager__get_ObjectList(
                                                              this,
                                                              *(const MethodInfo **)&mode);
  if ( !ObjectList )
    sub_2213CDC(0, v6);
  size = ObjectList->fields._size;
  if ( size < 1 )
  {
    this->fields.callbackCount = 1;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10344/*"OnMoveEnd"*/,
      0.0,
      0);
  }
  else
  {
    v8 = (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MyRoomHelpListViewObject__GetEnumerator__;
    this->fields.callbackCount = size;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      ObjectList,
      v8);
    v13 = 0;
    v14 = &v15;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__MoveNext__) )
    {
      current = v15.fields._current;
      v10 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_MyRoomHelpListViewManager_OnMoveEnd__, 0);
      if ( !current )
        sub_2213CDC(v11, v12);
      MyRoomHelpListViewObject__Init_40672488((MyRoomHelpListViewObject_o *)current, mode, v10, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MyRoomHelpListViewObject__Dispose__);
  }
}


void MyRoomHelpListViewManager__SetObjectItem(
        MyRoomHelpListViewManager_o *this,
        ListViewObject_o *obj,
        ListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 naturalAligment; // x10

  if ( (byte_596BD4B & 1) == 0 )
  {
    this = (MyRoomHelpListViewManager_o *)sub_2213A60(&MyRoomHelpListViewObject_TypeInfo);
    byte_596BD4B = 1;
  }
  if ( !obj
    || (naturalAligment = MyRoomHelpListViewObject_TypeInfo->_2.naturalAligment,
        obj->klass->_2.naturalAligment < (unsigned int)naturalAligment)
    || (MyRoomHelpListViewObject_c *)obj->klass->_2.typeHierarchy[naturalAligment - 1] != MyRoomHelpListViewObject_TypeInfo )
  {
    sub_2213CDC(this, obj);
  }
  MyRoomHelpListViewObject__Init_40671676((MyRoomHelpListViewObject_o *)obj, 2, 0);
}


void MyRoomHelpListViewManager__WaitFadeOut(MyRoomHelpListViewManager_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct MyRoomHelpListViewManager_CallbackFunc2_o *callbackFunc2; // x19

  callbackFunc2 = this->fields.callbackFunc2;
  this->fields.callbackFunc2 = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc2, 0, v2, v3, v4, v5, v6, v7);
  if ( callbackFunc2 )
    ((void (__fastcall *)(intptr_t, intptr_t))callbackFunc2->fields.invoke_impl)(
      callbackFunc2->fields.method_code,
      callbackFunc2->fields.method);
}


void MyRoomHelpListViewManager__add_callbackFunc(
        MyRoomHelpListViewManager_o *this,
        MyRoomHelpListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  MyRoomHelpListViewManager_o *v11; // x0
  MyRoomHelpListViewManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596BD40 & 1) == 0 )
  {
    sub_2213A60(&MyRoomHelpListViewManager_CallbackFunc_TypeInfo);
    byte_596BD40 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (MyRoomHelpListViewManager_CallbackFunc_c *)v6->klass != MyRoomHelpListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MyRoomHelpListViewManager_o *)sub_221405C(v6, MyRoomHelpListViewManager_CallbackFunc_TypeInfo, v7, v8);
  MyRoomHelpListViewManager__remove_callbackFunc(v11, v12, v13);
}


void MyRoomHelpListViewManager__add_callbackFunc2(
        MyRoomHelpListViewManager_o *this,
        MyRoomHelpListViewManager_CallbackFunc2_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  MyRoomHelpListViewManager_o *v11; // x0
  MyRoomHelpListViewManager_CallbackFunc2_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596BD42 & 1) == 0 )
  {
    sub_2213A60(&MyRoomHelpListViewManager_CallbackFunc2_TypeInfo);
    byte_596BD42 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (MyRoomHelpListViewManager_CallbackFunc2_c *)v6->klass != MyRoomHelpListViewManager_CallbackFunc2_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MyRoomHelpListViewManager_o *)sub_221405C(v6, MyRoomHelpListViewManager_CallbackFunc2_TypeInfo, v7, v8);
  MyRoomHelpListViewManager__remove_callbackFunc2(v11, v12, v13);
}


System_Collections_Generic_List_MyRoomHelpListViewObject__o *MyRoomHelpListViewManager__get_ClippingObjectList(
        MyRoomHelpListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  __int64 v12; // x1
  Il2CppObject *v13; // x21
  ListViewItem_o *Item; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  _BOOL8 v21; // x0
  __int64 v22; // x1
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_Collections_Generic_List_Enumerator_object__o v28; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_596BD45 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_MyRoomHelpListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_MyRoomHelpListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_MyRoomHelpListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_MyRoomHelpListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BD45 = 1;
  }
  memset(&v29, 0, sizeof(v29));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_MyRoomHelpListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_MyRoomHelpListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v28,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v29 = v28;
  v28.fields._list = 0;
  *(_QWORD *)&v28.fields._index = &v29;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v29,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v29.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_MyRoomHelpListViewObject___);
      v13 = Component_object;
      if ( !Component_object )
        sub_2213CDC(0, v12);
      Item = (ListViewItem_o *)MyRoomHelpListViewObject__GetItem((MyRoomHelpListViewObject_o *)Component_object, 0);
      if ( !Item )
        sub_2213CDC(0, 0);
      if ( Item->fields.isTermination )
      {
        v21 = ListViewManager__ClippingItem_50835204((ListViewManager_o *)this, Item, 0);
        if ( v21 )
        {
          if ( !v3
            || (items = v3->fields._items,
                v24 = Method_System_Collections_Generic_List_MyRoomHelpListViewObject__Add__,
                ++v3->fields._version,
                !items) )
          {
            sub_2213CDC(v21, v22);
          }
          size = v3->fields._size;
          if ( (unsigned int)size < LODWORD(items->max_length) )
            goto LABEL_17;
LABEL_21:
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            v13,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
      }
      else
      {
        if ( !v3
          || (items = v3->fields._items,
              v24 = Method_System_Collections_Generic_List_MyRoomHelpListViewObject__Add__,
              ++v3->fields._version,
              !items) )
        {
          sub_2213CDC(Item, Item);
        }
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
          goto LABEL_21;
LABEL_17:
        v26 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v26[4] = (Il2CppClass *)v13;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v26 + 4), (int32_t)v13, v15, v16, v17, v18, v19, v20);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v29,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MyRoomHelpListViewObject__o *)v3;
}


System_Collections_Generic_List_MyRoomHelpListViewObject__o *MyRoomHelpListViewManager__get_ObjectList(
        MyRoomHelpListViewManager_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  struct System_Collections_Generic_List_GameObject__o *objectList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  Il2CppObject *Component_object; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Il2CppObject *v18; // x1
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  Il2CppClass **v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_596BD44 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_MyRoomHelpListViewObject___);
    sub_2213A60(&Method_System_Collections_Generic_List_MyRoomHelpListViewObject__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_MyRoomHelpListViewObject___ctor__);
    sub_2213A60(&System_Collections_Generic_List_MyRoomHelpListViewObject__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596BD44 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_MyRoomHelpListViewObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_MyRoomHelpListViewObject___ctor__);
  objectList = this->fields.objectList;
  if ( !objectList )
    sub_2213CDC(0, v4);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)objectList,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  v25 = v24;
  v24.fields._list = 0;
  *(_QWORD *)&v24.fields._index = &v25;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v25,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    current = v25.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
    if ( v9 )
    {
      if ( !current )
        sub_2213CDC(v9, v10);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)current,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_MyRoomHelpListViewObject___);
      v18 = Component_object;
      if ( !v3
        || (items = v3->fields._items,
            v20 = Method_System_Collections_Generic_List_MyRoomHelpListViewObject__Add__,
            ++v3->fields._version,
            !items) )
      {
        sub_2213CDC(Component_object, Component_object);
      }
      size = v3->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          Component_object,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v3->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v18;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v18, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v25,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
  return (System_Collections_Generic_List_MyRoomHelpListViewObject__o *)v3;
}


void MyRoomHelpListViewManager__remove_callbackFunc(
        MyRoomHelpListViewManager_o *this,
        MyRoomHelpListViewManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  MyRoomHelpListViewManager_o *v11; // x0
  MyRoomHelpListViewManager_CallbackFunc2_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_596BD41 & 1) == 0 )
  {
    sub_2213A60(&MyRoomHelpListViewManager_CallbackFunc_TypeInfo);
    byte_596BD41 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (MyRoomHelpListViewManager_CallbackFunc_c *)v6->klass != MyRoomHelpListViewManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc, v6, callbackFunc);
    v10 = v9 == (_QWORD)callbackFunc;
    callbackFunc = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MyRoomHelpListViewManager_o *)sub_221405C(v6, MyRoomHelpListViewManager_CallbackFunc_TypeInfo, v7, v8);
  MyRoomHelpListViewManager__add_callbackFunc2(v11, v12, v13);
}


void MyRoomHelpListViewManager__remove_callbackFunc2(
        MyRoomHelpListViewManager_o *this,
        MyRoomHelpListViewManager_CallbackFunc2_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *callbackFunc2; // x21
  System_Delegate_o *v6; // x0
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x0
  bool v10; // zf
  MyRoomHelpListViewManager_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_596BD43 & 1) == 0 )
  {
    sub_2213A60(&MyRoomHelpListViewManager_CallbackFunc2_TypeInfo);
    byte_596BD43 = 1;
  }
  callbackFunc2 = (System_Delegate_o *)this->fields.callbackFunc2;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(callbackFunc2, (System_Delegate_o *)value, 0);
    if ( v6 )
    {
      if ( (MyRoomHelpListViewManager_CallbackFunc2_c *)v6->klass != MyRoomHelpListViewManager_CallbackFunc2_TypeInfo )
        break;
    }
    v9 = sub_224B48C(&this->fields.callbackFunc2, v6, callbackFunc2);
    v10 = v9 == (_QWORD)callbackFunc2;
    callbackFunc2 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (MyRoomHelpListViewManager_o *)sub_221405C(v6, MyRoomHelpListViewManager_CallbackFunc2_TypeInfo, v7, v8);
  MyRoomHelpListViewManager__get_ObjectList(v11, v12);
}


void MyRoomHelpListViewManager_CallbackFunc___ctor(
        MyRoomHelpListViewManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_20039B4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_2003974;
}


System_IAsyncResult_o *MyRoomHelpListViewManager_CallbackFunc__BeginInvoke(
        MyRoomHelpListViewManager_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  char v5; // [xsp+8h] [xbp-8h] BYREF

  return sub_2213A14(this, &v5, callback, object);
}


void MyRoomHelpListViewManager_CallbackFunc__EndInvoke(
        MyRoomHelpListViewManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void MyRoomHelpListViewManager_CallbackFunc__Invoke(
        MyRoomHelpListViewManager_CallbackFunc_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}


void MyRoomHelpListViewManager_CallbackFunc2___ctor(
        MyRoomHelpListViewManager_CallbackFunc2_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_2003A08;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_20039C8;
}


System_IAsyncResult_o *MyRoomHelpListViewManager_CallbackFunc2__BeginInvoke(
        MyRoomHelpListViewManager_CallbackFunc2_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  char v5; // [xsp+8h] [xbp-8h] BYREF

  return sub_2213A14(this, &v5, callback, object);
}


void MyRoomHelpListViewManager_CallbackFunc2__EndInvoke(
        MyRoomHelpListViewManager_CallbackFunc2_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void MyRoomHelpListViewManager_CallbackFunc2__Invoke(
        MyRoomHelpListViewManager_CallbackFunc2_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}


void MyRoomHelpListViewManager_MyRoomHelpItemInfo___ctor(
        MyRoomHelpListViewManager_MyRoomHelpItemInfo_o *this,
        int32_t kind,
        System_String_o *textCode,
        System_String_o *imageName,
        System_String_o *itemName,
        const MethodInfo *method)
{
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.kind = kind;
  this->fields.textCode = textCode;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.textCode,
    (int32_t)textCode,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  this->fields.imageName = imageName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.imageName,
    (int32_t)imageName,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.itemName = itemName;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.itemName,
    (int32_t)itemName,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
}


void MyRoomHelpListViewManager___c__DisplayClass25_0___ctor(
        MyRoomHelpListViewManager___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MyRoomHelpListViewManager___c__DisplayClass25_0___LoadBaseSprite_b__0(
        MyRoomHelpListViewManager___c__DisplayClass25_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  MyRoomHelpListViewManager___c__DisplayClass25_0_o *v3; // x19
  struct MyRoomHelpListViewManager_o *_4__this; // x8
  struct System_String_array *path; // x8
  System_String_o *v6; // x20
  __int64 v7; // x2
  AssetData_o *v8; // x20
  struct System_String_array *v9; // x8
  MyRoomHelpListViewManager___c__DisplayClass25_0_o *v10; // x20
  struct MyRoomHelpListViewManager_o *v11; // x8
  MyRoomHelpListViewManager___c__DisplayClass25_0_o *v12; // x21
  Il2CppObject *Component_object; // x23
  UnityEngine_Shader_o *v14; // x24
  UnityEngine_Material_o *v15; // x22
  struct MyRoomHelpListViewManager_o *v16; // x8
  MyRoomHelpListViewManager_c *v17; // x0
  System_String_o *HELP_BASE_SPRITE_PATH; // x19

  v3 = this;
  if ( (byte_596BD50 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_Texture2D____91708360);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_UnityEngine_Component_GetComponent_UITexture___);
    sub_2213A60(&UnityEngine_Material_TypeInfo);
    sub_2213A60(&MyRoomHelpListViewManager_TypeInfo);
    sub_2213A60(&StringLiteral_5128/*"Custom/SpriteWithMask"*/);
    this = (MyRoomHelpListViewManager___c__DisplayClass25_0_o *)sub_2213A60(&StringLiteral_16919/*"_MaskTex"*/);
    byte_596BD50 = 1;
  }
  _4__this = v3->fields.__4__this;
  if ( !_4__this )
    goto LABEL_27;
  if ( _4__this->fields.initMode == 1 )
  {
    path = v3->fields.path;
    if ( !path )
      goto LABEL_27;
    if ( !LODWORD(path->max_length) )
      goto LABEL_28;
    v6 = path->m_Items[0];
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
    this = (MyRoomHelpListViewManager___c__DisplayClass25_0_o *)AssetManager__getAssetStorage(v6, 0);
    v8 = (AssetData_o *)this;
    if ( !*(&MyRoomHelpListViewManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(MyRoomHelpListViewManager_TypeInfo, method, v7);
    if ( !v8 )
      goto LABEL_27;
    this = (MyRoomHelpListViewManager___c__DisplayClass25_0_o *)AssetData__GetObject_object__58532980(
                                                                  v8,
                                                                  MyRoomHelpListViewManager_TypeInfo->static_fields->HELP_BASE_SPRITE_NAME,
                                                                  (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
    v9 = v3->fields.path;
    if ( !v9 )
      goto LABEL_27;
    if ( (v9->max_length & 0xFFFFFFFE) == 0 )
LABEL_28:
      sub_2213CE4(this);
    v10 = this;
    this = (MyRoomHelpListViewManager___c__DisplayClass25_0_o *)AssetManager__getAssetStorage(v9->m_Items[1], 0);
    if ( this )
    {
      this = (MyRoomHelpListViewManager___c__DisplayClass25_0_o *)AssetData__GetObject_object__58532980(
                                                                    (AssetData_o *)this,
                                                                    MyRoomHelpListViewManager_TypeInfo->static_fields->HELP_BASE_ALPHA_NAME,
                                                                    (const MethodInfo_37D2474 *)Method_AssetData_GetObject_Texture2D____91708360);
      v11 = v3->fields.__4__this;
      if ( v11 )
      {
        v12 = this;
        this = (MyRoomHelpListViewManager___c__DisplayClass25_0_o *)v11->fields.BaseWindow;
        if ( this )
        {
          this = (MyRoomHelpListViewManager___c__DisplayClass25_0_o *)UnityEngine_GameObject__get_transform(
                                                                        (UnityEngine_GameObject_o *)this,
                                                                        0);
          if ( this )
          {
            Component_object = UnityEngine_Component__GetComponent_object_(
                                 (UnityEngine_Component_o *)this,
                                 (const MethodInfo_3820CA8 *)Method_UnityEngine_Component_GetComponent_UITexture___);
            v14 = UnityEngine_Shader__Find((System_String_o *)StringLiteral_5128/*"Custom/SpriteWithMask"*/, 0);
            v15 = (UnityEngine_Material_o *)sub_2213CCC(UnityEngine_Material_TypeInfo);
            UnityEngine_Material___ctor(v15, v14, 0);
            if ( Component_object )
            {
              this = (MyRoomHelpListViewManager___c__DisplayClass25_0_o *)((__int64 (__fastcall *)(Il2CppObject *, UnityEngine_Material_o *, const MethodInfo *))Component_object->klass->vtable[25].methodPtr)(
                                                                            Component_object,
                                                                            v15,
                                                                            Component_object->klass->vtable[25].method);
              if ( v15 )
              {
                UnityEngine_Material__set_mainTexture(v15, (UnityEngine_Texture_o *)v10, 0);
                UnityEngine_Material__SetTexture(
                  v15,
                  (System_String_o *)StringLiteral_16919/*"_MaskTex"*/,
                  (UnityEngine_Texture_o *)v12,
                  0);
                v16 = v3->fields.__4__this;
                if ( v16 )
                {
                  v16->fields.initMode = 2;
                  return;
                }
              }
            }
          }
        }
      }
    }
LABEL_27:
    sub_2213CDC(this, method);
  }
  v17 = MyRoomHelpListViewManager_TypeInfo;
  if ( !*(&MyRoomHelpListViewManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MyRoomHelpListViewManager_TypeInfo, method, v2);
    v17 = MyRoomHelpListViewManager_TypeInfo;
  }
  HELP_BASE_SPRITE_PATH = v17->static_fields->HELP_BASE_SPRITE_PATH;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
  AssetManager__releaseAssetStorage(HELP_BASE_SPRITE_PATH, 0);
  AssetManager__releaseAssetStorage(MyRoomHelpListViewManager_TypeInfo->static_fields->HELP_BASE_ALPHA_PATH, 0);
}