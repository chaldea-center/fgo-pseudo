void MainMenuBarBase___cctor(const MethodInfo *method)
{
  struct MainMenuBarBase_StaticFields *static_fields; // x8
  MainMenuBarBase_c *v2; // x9
  struct MainMenuBarBase_StaticFields *v3; // x8
  struct MainMenuBarBase_StaticFields *v4; // x8
  struct MainMenuBarBase_StaticFields *v5; // x8
  struct MainMenuBarBase_StaticFields *v6; // x8

  if ( (byte_5937DDC & 1) == 0 )
  {
    sub_21FFC50(&MainMenuBarBase_TypeInfo);
    byte_5937DDC = 1;
  }
  static_fields = MainMenuBarBase_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->NOTICE_NUMBER_POS_MENU_BTN.fields.x = 0x41F0000042500000LL;
  v2 = MainMenuBarBase_TypeInfo;
  static_fields->NOTICE_NUMBER_POS_MENU_BTN.fields.z = 0.0;
  v3 = v2->static_fields;
  *(_QWORD *)&v3->MenuGridLocalPosition.fields.x = 0xC0C00000C3C90000LL;
  v3->MenuGridLocalPosition.fields.z = 0.0;
  v4 = v2->static_fields;
  *(_QWORD *)&v4->MenuGridLocalPositionWhenAddExRoom.fields.x = 0xC0C00000C3D30000LL;
  v4->MenuGridLocalPositionWhenAddExRoom.fields.z = 0.0;
  v5 = v2->static_fields;
  *(_QWORD *)&v5->NoticeNumberPosDispBtn.fields.x = 0x42180000422C0000LL;
  v5->NoticeNumberPosDispBtn.fields.z = 0.0;
  v6 = v2->static_fields;
  *(_QWORD *)&v6->NoticeNumberPosDispBtnWhenAddExRoom.fields.x = 0x420C000041F00000LL;
  v6->NoticeNumberPosDispBtnWhenAddExRoom.fields.z = 0.0;
  v2->static_fields->MenuButtonSpriteSize = (struct UnityEngine_Vector2Int_o)0x8C0000009CLL;
  v2->static_fields->MenuButtonSpriteSizeWhenAddExRoom = (struct UnityEngine_Vector2Int_o)0x7E0000008CLL;
  v2->static_fields->MenuButtonColliderSize = (struct UnityEngine_Vector2Int_o)0x8200000082LL;
  v2->static_fields->MenuButtonColliderSizeWhenAddExRoom = (struct UnityEngine_Vector2Int_o)0x7500000075LL;
  v2->static_fields->FOLDER_WAR_ID = 10000;
}


void MainMenuBarBase___ctor(MainMenuBarBase_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Hashtable_c *v10; // x0
  System_Collections_Hashtable_o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Action_array *v18; // x0
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_Collections_Generic_List_object__o *v25; // x20
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Collections_Generic_Dictionary_object__int__o *v32; // x20
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7

  if ( (byte_5937DDB & 1) == 0 )
  {
    sub_21FFC50(&System_Action___TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_GameObject__int___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_GameObject__int__TypeInfo);
    sub_21FFC50(&System_Collections_Hashtable_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MainMenuBarButton___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_MainMenuBarButton__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_5937DDB = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_MainMenuBarButton__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_MainMenuBarButton___ctor__);
  this->fields.mDispBtnList = (struct System_Collections_Generic_List_MainMenuBarButton__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mDispBtnList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = System_Collections_Hashtable_TypeInfo;
  this->fields.selectedType = -1;
  this->fields.fadeType = 1;
  v11 = (System_Collections_Hashtable_o *)sub_21FFEBC(v10);
  System_Collections_Hashtable___ctor_76632148(v11, 0);
  this->fields.table = v11;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.table, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  v18 = (struct System_Action_array *)sub_21FFD10(System_Action___TypeInfo, 9);
  this->fields.mDispBtnActList = v18;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mDispBtnActList,
    (int32_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.summonCampaignObjects = (struct System_Collections_Generic_List_GameObject__o *)v25;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.summonCampaignObjects,
    (int32_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (System_Collections_Generic_Dictionary_object__int__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_GameObject__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v32,
    (const MethodInfo_3FBFF60 *)Method_System_Collections_Generic_Dictionary_GameObject__int___ctor__);
  this->fields.campaignNoticeMap = (struct System_Collections_Generic_Dictionary_GameObject__int__o *)v32;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.campaignNoticeMap,
    (int32_t)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MainMenuBarBase__Awake(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 IsOpen; // x0
  Il2CppObject *latestScenarioBtn; // x1
  char v6; // w20
  Il2CppObject *Component_object; // x0
  __int64 v8; // x1
  MainMenuBarBase_c *v9; // x8
  UnityEngine_GameObject_o *menuGrid; // x22
  Il2CppObject *v11; // x29
  int v12; // w9
  struct MainMenuBarBase_StaticFields *static_fields; // x12
  float *p_x; // x8
  float *p_y; // x9
  float *p_z; // x10
  int32_t *p_MenuButtonSpriteSizeWhenAddExRoom; // x11
  struct UnityEngine_Vector2Int_o *p_MenuButtonColliderSizeWhenAddExRoom; // x12
  struct MainMenuBarBase_StaticFields *v19; // x12
  float v20; // s8
  float v21; // s9
  int32_t v22; // w22
  int32_t v23; // w23
  int m_Y; // w20
  int m_X; // w28
  float v26; // s10
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  struct MainMenuBarButton_o *terminalBtn; // x25
  __int64 v34; // x24
  __int64 v35; // x1
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  struct MainMenuBarButton_o *partyBtn; // x25
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  struct MainMenuBarButton_o *summonBtn; // x25
  System_String_o *v50; // x2
  System_String_o *v51; // x3
  int32_t v52; // w4
  int32_t v53; // w5
  bool v54; // w6
  bool v55; // w7
  struct MainMenuBarButton_o *exRoomBtn; // x25
  System_String_o *v57; // x2
  System_String_o *v58; // x3
  int32_t v59; // w4
  int32_t v60; // w5
  bool v61; // w6
  bool v62; // w7
  struct MainMenuBarButton_o *combineBtn; // x25
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  struct MainMenuBarButton_o *shopBtn; // x25
  System_String_o *v71; // x2
  System_String_o *v72; // x3
  int32_t v73; // w4
  int32_t v74; // w5
  bool v75; // w6
  bool v76; // w7
  struct MainMenuBarButton_o *friendBtn; // x25
  System_String_o *v78; // x2
  System_String_o *v79; // x3
  int32_t v80; // w4
  int32_t v81; // w5
  bool v82; // w6
  bool v83; // w7
  struct MainMenuBarButton_o *myroomBtn; // x25
  System_String_o *v85; // x3
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7
  int v90; // w8
  __int64 v91; // x21
  UnityEngine_Component_o *v92; // x25
  __int64 v93; // x1
  Il2CppObject *v94; // x26
  __int64 v95; // x1
  Il2CppObject *v96; // x25
  System_String_o *v97; // x2
  int v98; // w8
  __int64 v99; // x8
  _QWORD *v100; // x9
  __int64 v101; // x10
  __int64 v102; // x8
  System_String_o *v103; // x2
  System_String_o *v104; // x3
  int32_t v105; // w4
  int32_t v106; // w5
  bool v107; // w6
  bool v108; // w7
  __int64 v109; // x8
  _QWORD *v110; // x9
  __int64 v111; // x10
  __int64 v112; // x8
  System_String_o *v113; // x2
  System_String_o *v114; // x3
  int32_t v115; // w4
  int32_t v116; // w5
  bool v117; // w6
  bool v118; // w7
  __int64 v119; // x8
  _QWORD *v120; // x9
  __int64 v121; // x10
  __int64 v122; // x8
  System_String_o *v123; // x2
  System_String_o *v124; // x3
  int32_t v125; // w4
  int32_t v126; // w5
  bool v127; // w6
  bool v128; // w7
  __int64 v129; // x8
  _QWORD *v130; // x9
  __int64 v131; // x10
  __int64 v132; // x8
  System_String_o *v133; // x2
  System_String_o *v134; // x3
  int32_t v135; // w4
  int32_t v136; // w5
  bool v137; // w6
  bool v138; // w7
  __int64 v139; // x8
  _QWORD *v140; // x9
  __int64 v141; // x10
  __int64 v142; // x8
  System_String_o *v143; // x2
  System_String_o *v144; // x3
  int32_t v145; // w4
  int32_t v146; // w5
  bool v147; // w6
  bool v148; // w7
  __int64 v149; // x8
  _QWORD *v150; // x9
  __int64 v151; // x10
  __int64 v152; // x8
  System_String_o *v153; // x2
  System_String_o *v154; // x3
  int32_t v155; // w4
  int32_t v156; // w5
  bool v157; // w6
  bool v158; // w7
  __int64 v159; // x8
  _QWORD *v160; // x9
  __int64 v161; // x10
  __int64 v162; // x8
  System_String_o *v163; // x2
  System_String_o *v164; // x3
  int32_t v165; // w4
  int32_t v166; // w5
  bool v167; // w6
  bool v168; // w7
  __int64 v169; // x8
  _QWORD *v170; // x9
  __int64 v171; // x10
  __int64 v172; // x8
  System_String_o *v173; // x2
  System_String_o *v174; // x3
  int32_t v175; // w4
  int32_t v176; // w5
  bool v177; // w6
  bool v178; // w7
  __int64 v179; // x8
  _QWORD *v180; // x9
  __int64 v181; // x10
  __int64 v182; // x8
  __int64 v183; // x1
  UnityEngine_Object_o *mMenuNoticeNumber; // x21
  __int64 v185; // x1
  Il2CppObject *mNoticeNumberPrefab; // x21
  UnityEngine_GameObject_o *v187; // x21
  UnityEngine_GameObject_o *v188; // x0
  __int64 v189; // x1
  MainMenuBarBase_c *v190; // x0
  Il2CppObject *v191; // x0
  System_String_o *v192; // x2
  System_String_o *v193; // x3
  int32_t v194; // w4
  int32_t v195; // w5
  bool v196; // w6
  bool v197; // w7
  UnityEngine_Object_o *mSummonNoticeNumber; // x21
  __int64 v199; // x1
  Il2CppObject *v200; // x21
  UnityEngine_GameObject_o *v201; // x21
  UnityEngine_GameObject_o *v202; // x0
  Il2CppObject *v203; // x0
  System_String_o *v204; // x2
  System_String_o *v205; // x3
  int32_t v206; // w4
  int32_t v207; // w5
  bool v208; // w6
  bool v209; // w7
  UnityEngine_Object_o *mFriendNoticeNumber; // x21
  Il2CppObject *v211; // x21
  UnityEngine_GameObject_o *v212; // x21
  UnityEngine_GameObject_o *v213; // x0
  Il2CppObject *v214; // x0
  System_String_o *v215; // x2
  System_String_o *v216; // x3
  int32_t v217; // w4
  int32_t v218; // w5
  bool v219; // w6
  bool v220; // w7
  __int64 v221; // x1
  Il2CppObject *v222; // x20
  const MethodInfo *v223; // x1
  struct ShopNotice_o *ShopNotice; // x0
  System_String_o *v225; // x2
  System_String_o *v226; // x3
  int32_t v227; // w4
  int32_t v228; // w5
  bool v229; // w6
  bool v230; // w7
  __int64 v231; // x1
  UnityEngine_Object_o *mExchangeServantItemDefaultAtlas; // x20
  System_String_o *v233; // x2
  System_String_o *v234; // x3
  int32_t v235; // w4
  int32_t v236; // w5
  bool v237; // w6
  bool v238; // w7
  struct UISprite_o *mExchangeServantItemSp; // x8
  struct UIAtlas_o *mAtlas; // x1
  System_String_o *v241; // x2
  System_String_o *v242; // x3
  int32_t v243; // w4
  int32_t v244; // w5
  bool v245; // w6
  bool v246; // w7
  struct UISprite_o *v247; // x8
  struct System_String_o *mSpriteName; // x1
  const MethodInfo *v249; // x1
  __int64 v250; // x0
  char v251; // [xsp+Ch] [xbp-84h]
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v253; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v254; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5937DAF & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_BoxCollider___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UIGrid___);
    sub_21FFC50(&Method_System_Collections_Generic_List_MainMenuBarButton__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MainMenuBarButton__Clear__);
    sub_21FFC50(&MainMenuBarBase_TypeInfo);
    sub_21FFC50(&MainMenuBarButton___TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&ShopTopListViewManager_TypeInfo);
    sub_21FFC50(&StringLiteral_21405/*"img_menu_unknown"*/);
    byte_5937DAF = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  this->fields.mFrameInPosY = GameObjectExtensions__GetLocalPositionY(gameObject, 0);
  IsOpen = ExRoomRootComponent__IsOpen(0);
  if ( !this->fields.menuGrid )
    goto LABEL_167;
  v6 = IsOpen;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       this->fields.menuGrid,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UIGrid___);
  v9 = MainMenuBarBase_TypeInfo;
  menuGrid = this->fields.menuGrid;
  v11 = Component_object;
  v251 = v6;
  v12 = *(&MainMenuBarBase_TypeInfo->_2.cctor_finished + 1);
  if ( (v6 & 1) != 0 )
  {
    if ( !v12 )
    {
      j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo, v8);
      v9 = MainMenuBarBase_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(menuGrid, v9->static_fields->MenuGridLocalPositionWhenAddExRoom, 0);
    if ( !v11 )
      goto LABEL_167;
    static_fields = MainMenuBarBase_TypeInfo->static_fields;
    LODWORD(v11[3].klass) = 1123024896;
    p_x = &static_fields->NoticeNumberPosDispBtnWhenAddExRoom.fields.x;
    p_y = &static_fields->NoticeNumberPosDispBtnWhenAddExRoom.fields.y;
    p_z = &static_fields->NoticeNumberPosDispBtnWhenAddExRoom.fields.z;
    p_MenuButtonSpriteSizeWhenAddExRoom = (int32_t *)&static_fields->MenuButtonSpriteSizeWhenAddExRoom;
    p_MenuButtonColliderSizeWhenAddExRoom = &static_fields->MenuButtonColliderSizeWhenAddExRoom;
  }
  else
  {
    if ( !v12 )
    {
      j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo, v8);
      v9 = MainMenuBarBase_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(menuGrid, v9->static_fields->MenuGridLocalPosition, 0);
    if ( !v11 )
      goto LABEL_167;
    v19 = MainMenuBarBase_TypeInfo->static_fields;
    LODWORD(v11[3].klass) = 1124466688;
    p_x = &v19->NoticeNumberPosDispBtn.fields.x;
    p_y = &v19->NoticeNumberPosDispBtn.fields.y;
    p_z = &v19->NoticeNumberPosDispBtn.fields.z;
    p_MenuButtonSpriteSizeWhenAddExRoom = (int32_t *)&v19->MenuButtonSpriteSize;
    p_MenuButtonColliderSizeWhenAddExRoom = &v19->MenuButtonColliderSize;
  }
  v20 = *p_x;
  v21 = *p_y;
  v22 = *p_MenuButtonSpriteSizeWhenAddExRoom;
  v23 = p_MenuButtonSpriteSizeWhenAddExRoom[1];
  m_X = p_MenuButtonColliderSizeWhenAddExRoom->fields.m_X;
  m_Y = p_MenuButtonColliderSizeWhenAddExRoom->fields.m_Y;
  v26 = *p_z;
  IsOpen = sub_21FFD10(MainMenuBarButton___TypeInfo, 8);
  if ( !IsOpen )
    goto LABEL_167;
  terminalBtn = this->fields.terminalBtn;
  v34 = IsOpen;
  if ( terminalBtn )
  {
    IsOpen = sub_21FFDA4(this->fields.terminalBtn, *(_QWORD *)(*(_QWORD *)IsOpen + 64LL));
    if ( !IsOpen )
      goto LABEL_169;
  }
  if ( !*(_DWORD *)(v34 + 24) )
    goto LABEL_168;
  *(_QWORD *)(v34 + 32) = terminalBtn;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v34 + 32), (int32_t)terminalBtn, v27, v28, v29, v30, v31, v32);
  partyBtn = this->fields.partyBtn;
  if ( partyBtn )
  {
    IsOpen = sub_21FFDA4(this->fields.partyBtn, *(_QWORD *)(*(_QWORD *)v34 + 64LL));
    if ( !IsOpen )
      goto LABEL_169;
  }
  if ( (*(_DWORD *)(v34 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_168;
  *(_QWORD *)(v34 + 40) = partyBtn;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v34 + 40), (int32_t)partyBtn, v36, v37, v38, v39, v40, v41);
  summonBtn = this->fields.summonBtn;
  if ( summonBtn )
  {
    IsOpen = sub_21FFDA4(this->fields.summonBtn, *(_QWORD *)(*(_QWORD *)v34 + 64LL));
    if ( !IsOpen )
      goto LABEL_169;
  }
  if ( *(_DWORD *)(v34 + 24) <= 2u )
    goto LABEL_168;
  *(_QWORD *)(v34 + 48) = summonBtn;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v34 + 48), (int32_t)summonBtn, v43, v44, v45, v46, v47, v48);
  exRoomBtn = this->fields.exRoomBtn;
  if ( exRoomBtn )
  {
    IsOpen = sub_21FFDA4(this->fields.exRoomBtn, *(_QWORD *)(*(_QWORD *)v34 + 64LL));
    if ( !IsOpen )
      goto LABEL_169;
  }
  if ( (*(_DWORD *)(v34 + 24) & 0xFFFFFFFC) == 0 )
    goto LABEL_168;
  *(_QWORD *)(v34 + 56) = exRoomBtn;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v34 + 56), (int32_t)exRoomBtn, v50, v51, v52, v53, v54, v55);
  combineBtn = this->fields.combineBtn;
  if ( combineBtn )
  {
    IsOpen = sub_21FFDA4(this->fields.combineBtn, *(_QWORD *)(*(_QWORD *)v34 + 64LL));
    if ( !IsOpen )
      goto LABEL_169;
  }
  if ( *(_DWORD *)(v34 + 24) <= 4u )
    goto LABEL_168;
  *(_QWORD *)(v34 + 64) = combineBtn;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v34 + 64), (int32_t)combineBtn, v57, v58, v59, v60, v61, v62);
  shopBtn = this->fields.shopBtn;
  if ( shopBtn )
  {
    IsOpen = sub_21FFDA4(this->fields.shopBtn, *(_QWORD *)(*(_QWORD *)v34 + 64LL));
    if ( !IsOpen )
      goto LABEL_169;
  }
  if ( *(_DWORD *)(v34 + 24) <= 5u )
    goto LABEL_168;
  *(_QWORD *)(v34 + 72) = shopBtn;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v34 + 72), (int32_t)shopBtn, v64, v65, v66, v67, v68, v69);
  friendBtn = this->fields.friendBtn;
  if ( friendBtn )
  {
    IsOpen = sub_21FFDA4(this->fields.friendBtn, *(_QWORD *)(*(_QWORD *)v34 + 64LL));
    if ( !IsOpen )
      goto LABEL_169;
  }
  if ( *(_DWORD *)(v34 + 24) <= 6u )
    goto LABEL_168;
  *(_QWORD *)(v34 + 80) = friendBtn;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v34 + 80), (int32_t)friendBtn, v71, v72, v73, v74, v75, v76);
  myroomBtn = this->fields.myroomBtn;
  if ( myroomBtn )
  {
    IsOpen = sub_21FFDA4(this->fields.myroomBtn, *(_QWORD *)(*(_QWORD *)v34 + 64LL));
    if ( !IsOpen )
    {
LABEL_169:
      v250 = sub_21FFEF0(IsOpen, v35);
      sub_21FFD90(v250, 0);
    }
  }
  if ( (*(_DWORD *)(v34 + 24) & 0xFFFFFFF8) == 0 )
LABEL_168:
    sub_21FFED4(IsOpen);
  *(_QWORD *)(v34 + 88) = myroomBtn;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v34 + 88), (int32_t)myroomBtn, v78, v79, v80, v81, v82, v83);
  v90 = *(_DWORD *)(v34 + 24);
  if ( v90 >= 1 )
  {
    v91 = 0;
    while ( (unsigned int)v91 < v90 )
    {
      v92 = *(UnityEngine_Component_o **)(v34 + 32 + 8 * v91);
      if ( !v92 )
        goto LABEL_167;
      v94 = UnityEngine_Component__GetComponent_object_(
              *(UnityEngine_Component_o **)(v34 + 32 + 8 * v91),
              (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v93);
      IsOpen = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v94, 0, 0);
      if ( (IsOpen & 1) != 0 )
      {
        if ( !v94 )
          goto LABEL_167;
        UIWidget__SetDimensions((UIWidget_o *)v94, v22, v23, 0);
      }
      v96 = UnityEngine_Component__GetComponent_object_(
              v92,
              (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_BoxCollider___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v95);
      IsOpen = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v96, 0, 0);
      if ( (IsOpen & 1) != 0 )
      {
        if ( !v96 )
          goto LABEL_167;
        size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v96, 0);
        size.fields.x = (float)m_X;
        size.fields.y = (float)m_Y;
        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v96, size, 0);
      }
      v90 = *(_DWORD *)(v34 + 24);
      if ( (int)++v91 >= v90 )
        goto LABEL_53;
    }
    goto LABEL_168;
  }
LABEL_53:
  IsOpen = (__int64)this->fields.mDispBtnList;
  if ( !IsOpen )
    goto LABEL_167;
  v97 = (System_String_o *)*(unsigned int *)(IsOpen + 24);
  v98 = *(_DWORD *)(IsOpen + 28) + 1;
  *(_DWORD *)(IsOpen + 24) = 0;
  *(_DWORD *)(IsOpen + 28) = v98;
  if ( (int)v97 >= 1 )
  {
    System_Array__Clear(*(System_Array_o **)(IsOpen + 16), 0, (int32_t)v97, 0);
    IsOpen = (__int64)this->fields.mDispBtnList;
    if ( !IsOpen )
      goto LABEL_167;
  }
  v99 = *(_QWORD *)(IsOpen + 16);
  latestScenarioBtn = (Il2CppObject *)this->fields.terminalBtn;
  v100 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*(_DWORD *)(IsOpen + 28);
  if ( !v99 )
    goto LABEL_167;
  v101 = *(int *)(IsOpen + 24);
  if ( (unsigned int)v101 >= *(_DWORD *)(v99 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)IsOpen,
      latestScenarioBtn,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v100[4] + 192LL) + 112LL));
  }
  else
  {
    v102 = v99 + 8 * v101;
    *(_DWORD *)(IsOpen + 24) = v101 + 1;
    *(_QWORD *)(v102 + 32) = latestScenarioBtn;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)(v102 + 32),
      (int32_t)latestScenarioBtn,
      v97,
      v85,
      v86,
      v87,
      v88,
      v89);
  }
  IsOpen = (__int64)this->fields.mDispBtnList;
  if ( !IsOpen )
    goto LABEL_167;
  v109 = *(_QWORD *)(IsOpen + 16);
  latestScenarioBtn = (Il2CppObject *)this->fields.partyBtn;
  v110 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*(_DWORD *)(IsOpen + 28);
  if ( !v109 )
    goto LABEL_167;
  v111 = *(int *)(IsOpen + 24);
  if ( (unsigned int)v111 >= *(_DWORD *)(v109 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)IsOpen,
      latestScenarioBtn,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v110[4] + 192LL) + 112LL));
  }
  else
  {
    v112 = v109 + 8 * v111;
    *(_DWORD *)(IsOpen + 24) = v111 + 1;
    *(_QWORD *)(v112 + 32) = latestScenarioBtn;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)(v112 + 32),
      (int32_t)latestScenarioBtn,
      v103,
      v104,
      v105,
      v106,
      v107,
      v108);
  }
  IsOpen = (__int64)this->fields.mDispBtnList;
  if ( !IsOpen )
    goto LABEL_167;
  v119 = *(_QWORD *)(IsOpen + 16);
  latestScenarioBtn = (Il2CppObject *)this->fields.summonBtn;
  v120 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*(_DWORD *)(IsOpen + 28);
  if ( !v119 )
    goto LABEL_167;
  v121 = *(int *)(IsOpen + 24);
  if ( (unsigned int)v121 >= *(_DWORD *)(v119 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)IsOpen,
      latestScenarioBtn,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v120[4] + 192LL) + 112LL));
  }
  else
  {
    v122 = v119 + 8 * v121;
    *(_DWORD *)(IsOpen + 24) = v121 + 1;
    *(_QWORD *)(v122 + 32) = latestScenarioBtn;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)(v122 + 32),
      (int32_t)latestScenarioBtn,
      v113,
      v114,
      v115,
      v116,
      v117,
      v118);
  }
  IsOpen = (__int64)this->fields.exRoomRoot;
  if ( !IsOpen )
    goto LABEL_167;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsOpen, v251 & 1, 0);
  IsOpen = (__int64)this->fields.mDispBtnList;
  if ( !IsOpen )
    goto LABEL_167;
  v129 = *(_QWORD *)(IsOpen + 16);
  latestScenarioBtn = (Il2CppObject *)this->fields.exRoomBtn;
  v130 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*(_DWORD *)(IsOpen + 28);
  if ( !v129 )
    goto LABEL_167;
  v131 = *(int *)(IsOpen + 24);
  if ( (unsigned int)v131 >= *(_DWORD *)(v129 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)IsOpen,
      latestScenarioBtn,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v130[4] + 192LL) + 112LL));
  }
  else
  {
    v132 = v129 + 8 * v131;
    *(_DWORD *)(IsOpen + 24) = v131 + 1;
    *(_QWORD *)(v132 + 32) = latestScenarioBtn;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)(v132 + 32),
      (int32_t)latestScenarioBtn,
      v123,
      v124,
      v125,
      v126,
      v127,
      v128);
  }
  IsOpen = (__int64)this->fields.mDispBtnList;
  if ( !IsOpen )
    goto LABEL_167;
  v139 = *(_QWORD *)(IsOpen + 16);
  latestScenarioBtn = (Il2CppObject *)this->fields.combineBtn;
  v140 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*(_DWORD *)(IsOpen + 28);
  if ( !v139 )
    goto LABEL_167;
  v141 = *(int *)(IsOpen + 24);
  if ( (unsigned int)v141 >= *(_DWORD *)(v139 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)IsOpen,
      latestScenarioBtn,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v140[4] + 192LL) + 112LL));
  }
  else
  {
    v142 = v139 + 8 * v141;
    *(_DWORD *)(IsOpen + 24) = v141 + 1;
    *(_QWORD *)(v142 + 32) = latestScenarioBtn;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)(v142 + 32),
      (int32_t)latestScenarioBtn,
      v133,
      v134,
      v135,
      v136,
      v137,
      v138);
  }
  IsOpen = (__int64)this->fields.mDispBtnList;
  if ( !IsOpen )
    goto LABEL_167;
  v149 = *(_QWORD *)(IsOpen + 16);
  latestScenarioBtn = (Il2CppObject *)this->fields.shopBtn;
  v150 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*(_DWORD *)(IsOpen + 28);
  if ( !v149 )
    goto LABEL_167;
  v151 = *(int *)(IsOpen + 24);
  if ( (unsigned int)v151 >= *(_DWORD *)(v149 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)IsOpen,
      latestScenarioBtn,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v150[4] + 192LL) + 112LL));
  }
  else
  {
    v152 = v149 + 8 * v151;
    *(_DWORD *)(IsOpen + 24) = v151 + 1;
    *(_QWORD *)(v152 + 32) = latestScenarioBtn;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)(v152 + 32),
      (int32_t)latestScenarioBtn,
      v143,
      v144,
      v145,
      v146,
      v147,
      v148);
  }
  IsOpen = (__int64)this->fields.mDispBtnList;
  if ( !IsOpen )
    goto LABEL_167;
  v159 = *(_QWORD *)(IsOpen + 16);
  latestScenarioBtn = (Il2CppObject *)this->fields.friendBtn;
  v160 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*(_DWORD *)(IsOpen + 28);
  if ( !v159 )
    goto LABEL_167;
  v161 = *(int *)(IsOpen + 24);
  if ( (unsigned int)v161 >= *(_DWORD *)(v159 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)IsOpen,
      latestScenarioBtn,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v160[4] + 192LL) + 112LL));
  }
  else
  {
    v162 = v159 + 8 * v161;
    *(_DWORD *)(IsOpen + 24) = v161 + 1;
    *(_QWORD *)(v162 + 32) = latestScenarioBtn;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)(v162 + 32),
      (int32_t)latestScenarioBtn,
      v153,
      v154,
      v155,
      v156,
      v157,
      v158);
  }
  IsOpen = (__int64)this->fields.mDispBtnList;
  if ( !IsOpen )
    goto LABEL_167;
  v169 = *(_QWORD *)(IsOpen + 16);
  latestScenarioBtn = (Il2CppObject *)this->fields.myroomBtn;
  v170 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*(_DWORD *)(IsOpen + 28);
  if ( !v169 )
    goto LABEL_167;
  v171 = *(int *)(IsOpen + 24);
  if ( (unsigned int)v171 >= *(_DWORD *)(v169 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)IsOpen,
      latestScenarioBtn,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v170[4] + 192LL) + 112LL));
  }
  else
  {
    v172 = v169 + 8 * v171;
    *(_DWORD *)(IsOpen + 24) = v171 + 1;
    *(_QWORD *)(v172 + 32) = latestScenarioBtn;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)(v172 + 32),
      (int32_t)latestScenarioBtn,
      v163,
      v164,
      v165,
      v166,
      v167,
      v168);
  }
  IsOpen = (__int64)this->fields.mDispBtnList;
  if ( !IsOpen )
    goto LABEL_167;
  v179 = *(_QWORD *)(IsOpen + 16);
  latestScenarioBtn = (Il2CppObject *)this->fields.latestScenarioBtn;
  v180 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*(_DWORD *)(IsOpen + 28);
  if ( !v179 )
    goto LABEL_167;
  v181 = *(int *)(IsOpen + 24);
  if ( (unsigned int)v181 >= *(_DWORD *)(v179 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)IsOpen,
      latestScenarioBtn,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v180[4] + 192LL) + 112LL));
  }
  else
  {
    v182 = v179 + 8 * v181;
    *(_DWORD *)(IsOpen + 24) = v181 + 1;
    *(_QWORD *)(v182 + 32) = latestScenarioBtn;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)(v182 + 32),
      (int32_t)latestScenarioBtn,
      v173,
      v174,
      v175,
      v176,
      v177,
      v178);
  }
  ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))v11->klass->vtable[8].methodPtr)(
    v11,
    v11->klass->vtable[8].method);
  mMenuNoticeNumber = (UnityEngine_Object_o *)this->fields.mMenuNoticeNumber;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v183);
  if ( UnityEngine_Object__op_Equality(mMenuNoticeNumber, 0, 0) )
  {
    mNoticeNumberPrefab = (Il2CppObject *)this->fields.mNoticeNumberPrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v185);
    IsOpen = (__int64)UnityEngine_Object__Instantiate_object_(
                        mNoticeNumberPrefab,
                        (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this->fields.menuStateBtn )
      goto LABEL_167;
    v187 = (UnityEngine_GameObject_o *)IsOpen;
    v188 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.menuStateBtn, 0);
    GameObjectExtensions__SafeSetParent_42881912(v187, v188, 0);
    v190 = MainMenuBarBase_TypeInfo;
    if ( !*(&MainMenuBarBase_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo, v189);
      v190 = MainMenuBarBase_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v187, v190->static_fields->NOTICE_NUMBER_POS_MENU_BTN, 0);
    if ( !v187 )
      goto LABEL_167;
    v191 = UnityEngine_GameObject__GetComponent_object_(
             v187,
             (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    this->fields.mMenuNoticeNumber = (struct NoticeNumberComponent_o *)v191;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mMenuNoticeNumber,
      (int32_t)v191,
      v192,
      v193,
      v194,
      v195,
      v196,
      v197);
    IsOpen = (__int64)this->fields.mMenuNoticeNumber;
    if ( !IsOpen )
      goto LABEL_167;
    NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)IsOpen, 0, 0);
  }
  mSummonNoticeNumber = (UnityEngine_Object_o *)this->fields.mSummonNoticeNumber;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v185);
  if ( UnityEngine_Object__op_Equality(mSummonNoticeNumber, 0, 0) )
  {
    v200 = (Il2CppObject *)this->fields.mNoticeNumberPrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v199);
    IsOpen = (__int64)UnityEngine_Object__Instantiate_object_(
                        v200,
                        (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this->fields.summonBtn )
      goto LABEL_167;
    v201 = (UnityEngine_GameObject_o *)IsOpen;
    v202 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.summonBtn, 0);
    GameObjectExtensions__SafeSetParent_42881912(v201, v202, 0);
    v253.fields.x = v20;
    v253.fields.y = v21;
    v253.fields.z = v26;
    GameObjectExtensions__SetLocalPosition(v201, v253, 0);
    if ( !v201 )
      goto LABEL_167;
    v203 = UnityEngine_GameObject__GetComponent_object_(
             v201,
             (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    this->fields.mSummonNoticeNumber = (struct NoticeNumberComponent_o *)v203;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mSummonNoticeNumber,
      (int32_t)v203,
      v204,
      v205,
      v206,
      v207,
      v208,
      v209);
    IsOpen = (__int64)this->fields.mSummonNoticeNumber;
    if ( !IsOpen )
      goto LABEL_167;
    NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)IsOpen, 0, 0);
  }
  mFriendNoticeNumber = (UnityEngine_Object_o *)this->fields.mFriendNoticeNumber;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v199);
  if ( UnityEngine_Object__op_Equality(mFriendNoticeNumber, 0, 0) )
  {
    v211 = (Il2CppObject *)this->fields.mNoticeNumberPrefab;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, latestScenarioBtn);
    IsOpen = (__int64)UnityEngine_Object__Instantiate_object_(
                        v211,
                        (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this->fields.friendBtn )
      goto LABEL_167;
    v212 = (UnityEngine_GameObject_o *)IsOpen;
    v213 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.friendBtn, 0);
    GameObjectExtensions__SafeSetParent_42881912(v212, v213, 0);
    v254.fields.x = v20;
    v254.fields.y = v21;
    v254.fields.z = v26;
    GameObjectExtensions__SetLocalPosition(v212, v254, 0);
    if ( !v212 )
      goto LABEL_167;
    v214 = UnityEngine_GameObject__GetComponent_object_(
             v212,
             (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    this->fields.mFriendNoticeNumber = (struct NoticeNumberComponent_o *)v214;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.mFriendNoticeNumber,
      (int32_t)v214,
      v215,
      v216,
      v217,
      v218,
      v219,
      v220);
    IsOpen = (__int64)this->fields.mFriendNoticeNumber;
    if ( !IsOpen )
      goto LABEL_167;
    NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)IsOpen, 0, 0);
  }
  if ( (v251 & 1) != 0 )
  {
    IsOpen = (__int64)this->fields.exRoomBtn;
    if ( !IsOpen )
      goto LABEL_167;
    v222 = UnityEngine_Component__GetComponent_object_(
             (UnityEngine_Component_o *)IsOpen,
             (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v221);
    AtlasManager__SetDownloadCommonSprite((UISprite_o *)v222, (System_String_o *)StringLiteral_21405/*"img_menu_unknown"*/, 0);
    MainMenuBarBase__SetExRoomBalloonSprite(this, v223);
  }
  if ( !*(&ShopTopListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ShopTopListViewManager_TypeInfo, latestScenarioBtn);
  ShopNotice = ShopTopListViewManager__GetShopNotice(0);
  this->fields.shopNotice = ShopNotice;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.shopNotice,
    (int32_t)ShopNotice,
    v225,
    v226,
    v227,
    v228,
    v229,
    v230);
  IsOpen = (__int64)this->fields.mNewItemSp;
  if ( !IsOpen )
    goto LABEL_167;
  IsOpen = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsOpen, 0);
  if ( !IsOpen )
    goto LABEL_167;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsOpen, 0, 0);
  IsOpen = (__int64)this->fields.mLimitedItemIconRoot;
  if ( !IsOpen )
    goto LABEL_167;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsOpen, 0, 0);
  IsOpen = (__int64)this->fields.mPeriodLimitedItemSp;
  if ( !IsOpen )
    goto LABEL_167;
  IsOpen = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsOpen, 0);
  if ( !IsOpen )
    goto LABEL_167;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsOpen, 0, 0);
  IsOpen = (__int64)this->fields.mMonthlyLimitedItemSp;
  if ( !IsOpen )
    goto LABEL_167;
  IsOpen = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsOpen, 0);
  if ( !IsOpen )
    goto LABEL_167;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsOpen, 0, 0);
  IsOpen = (__int64)this->fields.mExchangeServantItemSp;
  if ( !IsOpen )
    goto LABEL_167;
  IsOpen = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsOpen, 0);
  if ( !IsOpen )
    goto LABEL_167;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsOpen, 0, 0);
  IsOpen = (__int64)this->fields.StartUpSummonSp;
  if ( !IsOpen )
    goto LABEL_167;
  IsOpen = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsOpen, 0);
  if ( !IsOpen )
    goto LABEL_167;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsOpen, 0, 0);
  IsOpen = (__int64)this->fields.mPeriodLimitedTimeLb;
  if ( !IsOpen )
    goto LABEL_167;
  IsOpen = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsOpen, 0);
  if ( !IsOpen )
    goto LABEL_167;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsOpen, 0, 0);
  IsOpen = (__int64)this->fields.mMonthlyLimitedTimeLb;
  if ( !IsOpen )
    goto LABEL_167;
  IsOpen = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsOpen, 0);
  if ( !IsOpen )
    goto LABEL_167;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsOpen, 0, 0);
  IsOpen = (__int64)this->fields.mExchangeServantItemLb;
  if ( !IsOpen
    || (IsOpen = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsOpen, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsOpen, 0, 0),
        (IsOpen = (__int64)this->fields.mExchangeServantTimeRoot) == 0)
    || (IsOpen = (__int64)UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)IsOpen, 0)) == 0
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsOpen, 0, 0),
        (IsOpen = (__int64)this->fields.StartUpSummonLb) == 0)
    || (IsOpen = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)IsOpen, 0)) == 0 )
  {
LABEL_167:
    sub_21FFECC(IsOpen, latestScenarioBtn);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsOpen, 0, 0);
  mExchangeServantItemDefaultAtlas = (UnityEngine_Object_o *)this->fields.mExchangeServantItemDefaultAtlas;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v231);
  IsOpen = UnityEngine_Object__op_Equality(mExchangeServantItemDefaultAtlas, 0, 0);
  if ( (IsOpen & 1) != 0 )
  {
    mExchangeServantItemSp = this->fields.mExchangeServantItemSp;
    if ( mExchangeServantItemSp )
    {
      mAtlas = mExchangeServantItemSp->fields.mAtlas;
      this->fields.mExchangeServantItemDefaultAtlas = mAtlas;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.mExchangeServantItemDefaultAtlas,
        (int32_t)mAtlas,
        v233,
        v234,
        v235,
        v236,
        v237,
        v238);
      v247 = this->fields.mExchangeServantItemSp;
      if ( v247 )
      {
        mSpriteName = v247->fields.mSpriteName;
        this->fields.mExchangeServantItemDefaultSpriteName = mSpriteName;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.mExchangeServantItemDefaultSpriteName,
          (int32_t)mSpriteName,
          v241,
          v242,
          v243,
          v244,
          v245,
          v246);
        goto LABEL_164;
      }
    }
    goto LABEL_167;
  }
LABEL_164:
  IsOpen = (__int64)this->fields.summonCampainObject;
  if ( !IsOpen )
    goto LABEL_167;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsOpen, 0, 0);
  IsOpen = (__int64)this->fields.summonOneTimeFreeObject;
  if ( !IsOpen )
    goto LABEL_167;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)IsOpen, 0, 0);
  MainMenuBarBase__UpdateNoticeNumber(this, v249);
}


// local variable allocation has failed, the output may be wrong!
void MainMenuBarBase__BackActive(MainMenuBarBase_o *this, bool isOpen, const MethodInfo *method)
{
  UnityEngine_Component_o *backCloseSprite; // x0
  float x; // s8
  float z; // s9
  float v8; // s1 OVERLAPPED
  float v9; // s2
  float v10; // s0
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  backCloseSprite = (UnityEngine_Component_o *)this->fields.backCloseSprite;
  if ( !backCloseSprite )
    goto LABEL_14;
  backCloseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backCloseSprite, 0);
  if ( !backCloseSprite )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backCloseSprite, !isOpen, 0);
  backCloseSprite = (UnityEngine_Component_o *)this->fields.backOpenSprite;
  if ( !backCloseSprite )
    goto LABEL_14;
  backCloseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backCloseSprite, 0);
  if ( !backCloseSprite )
    goto LABEL_14;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backCloseSprite, isOpen, 0);
  backCloseSprite = (UnityEngine_Component_o *)this->fields.backOpenSprite;
  if ( !backCloseSprite )
    goto LABEL_14;
  UIWidget__SetDirty((UIWidget_o *)backCloseSprite, 0);
  backCloseSprite = (UnityEngine_Component_o *)this->fields.backCloseSprite;
  if ( !backCloseSprite )
    goto LABEL_14;
  UIWidget__SetDirty((UIWidget_o *)backCloseSprite, 0);
  backCloseSprite = (UnityEngine_Component_o *)this->fields.menuGrid;
  if ( !backCloseSprite
    || (backCloseSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)backCloseSprite,
                                                       0)) == 0
    || (localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)backCloseSprite, 0),
        (backCloseSprite = (UnityEngine_Component_o *)this->fields.menuGrid) == 0)
    || (x = localPosition.fields.x,
        z = localPosition.fields.z,
        (backCloseSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                        (UnityEngine_GameObject_o *)backCloseSprite,
                                                        0)) == 0) )
  {
LABEL_14:
    sub_21FFECC(backCloseSprite, isOpen);
  }
  v8 = -33.0;
  v9 = z;
  if ( isOpen )
    v8 = -6.0;
  v10 = x;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)backCloseSprite,
    *(UnityEngine_Vector3_o *)(&v8 - 1),
    0);
}


void MainMenuBarBase__CheckLatestScenarioButtonEnable(MainMenuBarBase_o *this, const MethodInfo *method)
{
  int32_t kind; // w8
  void *Instance; // x0
  UnityEngine_Object_o *v5; // x20
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *m_CachedPtr; // x20
  MyRoomStateMaterial_o *klass; // x20
  MainMenuBarBase_o *State; // x0
  const MethodInfo *v10; // x3
  int32_t mOldState; // w8
  System_Collections_Generic_List_object__o *mSelectInfos; // x20
  int32_t v13; // w1
  int32_t questId[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5937DB8 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
    sub_21FFC50(&MyRoomRootComponent_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_5937DB8 = 1;
  }
  kind = this->fields.kind;
  *(_QWORD *)questId = 0;
  if ( kind != 9 )
    goto LABEL_27;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  v5 = (UnityEngine_Object_o *)*((_QWORD *)Instance + 4);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(v5, 0, 0) )
    goto LABEL_27;
  if ( !v5 )
    goto LABEL_27;
  naturalAligment = MyRoomRootComponent_TypeInfo->_2.naturalAligment;
  if ( v5->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (MyRoomRootComponent_c *)v5->klass->_2.typeHierarchy[naturalAligment - 1] != MyRoomRootComponent_TypeInfo )
  {
    goto LABEL_27;
  }
  m_CachedPtr = (UnityEngine_Object_o *)v5[2].fields.m_CachedPtr;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  Instance = (void *)UnityEngine_Object__op_Equality(m_CachedPtr, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    goto LABEL_27;
  if ( !m_CachedPtr )
    goto LABEL_30;
  if ( MyRoomControl__GetState((MyRoomControl_o *)m_CachedPtr, 0) == 1 )
    goto LABEL_27;
  klass = (MyRoomStateMaterial_o *)m_CachedPtr[39].klass;
  if ( !klass )
    goto LABEL_27;
  State = (MainMenuBarBase_o *)MyRoomStateMaterial__GetState(klass, 0);
  if ( (_DWORD)State != 7 )
  {
    State = (MainMenuBarBase_o *)MyRoomStateMaterial__GetState(klass, 0);
    if ( (_DWORD)State != 10 )
      goto LABEL_27;
  }
  mOldState = klass->fields.mOldState;
  if ( mOldState != 2 && mOldState != 9 )
    goto LABEL_27;
  mSelectInfos = (System_Collections_Generic_List_object__o *)klass->fields.mSelectInfos;
  if ( !mSelectInfos || !MainMenuBarBase__GetJumpSceneInfo(State, &questId[1], questId, v10) )
    goto LABEL_27;
  Instance = System_Collections_Generic_List_object___get_Item(
               mSelectInfos,
               0,
               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
  if ( !Instance )
    goto LABEL_30;
  if ( *((_DWORD *)Instance + 10) != questId[1] )
  {
LABEL_27:
    Instance = this->fields.latestScenarioBtn;
    if ( Instance )
    {
      v13 = 2;
      goto LABEL_29;
    }
LABEL_30:
    sub_21FFECC(Instance, method);
  }
  Instance = this->fields.latestScenarioBtn;
  if ( !Instance )
    goto LABEL_30;
  v13 = 3;
LABEL_29:
  MainMenuBarButton__SetMode((MainMenuBarButton_o *)Instance, v13, 0);
}


void MainMenuBarBase__CheckTerminalButtonEnable(MainMenuBarBase_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  MainMenuBarButton_o *terminalBtn; // x0
  int32_t v6; // w1

  if ( (byte_5937DB7 & 1) == 0 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5937DB7 = 1;
  }
  if ( this->fields.kind != 1 )
  {
    terminalBtn = this->fields.terminalBtn;
    if ( !terminalBtn )
      goto LABEL_17;
    goto LABEL_14;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_5934F89 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5934F89 = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v3 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v3->static_fields;
  terminalBtn = this->fields.terminalBtn;
  if ( static_fields->_DispState_k__BackingField != 1 )
  {
    if ( !terminalBtn )
LABEL_17:
      sub_21FFECC(terminalBtn, method);
LABEL_14:
    v6 = 2;
    goto LABEL_15;
  }
  if ( !terminalBtn )
    goto LABEL_17;
  v6 = 3;
LABEL_15:
  MainMenuBarButton__SetMode(terminalBtn, v6, 0);
}


void MainMenuBarBase__CloseMenu(MainMenuBarBase_o *this, bool is_play_se, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  MainMenuBarBase__SwitchMenu(this, 0, is_play_se, v3);
}


void MainMenuBarBase__FrameIn(MainMenuBarBase_o *this, bool is_force, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  MainMenuBarBase__FrameInOut(this, 1, is_force, v3);
}


// local variable allocation has failed, the output may be wrong!
void MainMenuBarBase__FrameInOut(MainMenuBarBase_o *this, bool is_framein, bool is_force, const MethodInfo *method)
{
  __int64 v7; // x20
  MoveObject_o *gameObject; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  float mFrameInPosY; // s14
  UnityEngine_GameObject_o *v17; // x0
  const MethodInfo_38852A8 *v18; // x1
  float v19; // s8
  Il2CppObject *Component_object; // x0
  MoveObject_o **v21; // x22
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  float v28; // s9
  float IntpTime_AutoResume; // s9
  float x; // s10
  float z; // s11
  float v32; // s12
  float v33; // s13
  MoveObject_o *v34; // x21
  System_Action_o *v35; // x22
  System_Action_o *v36; // x23
  float v37; // s1 OVERLAPPED
  float v38; // s0
  float v39; // s2
  float v40; // s3 OVERLAPPED
  float v41; // s5
  float v42; // s4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v44; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5937DD5 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&Method_MainMenuBarBase___c__DisplayClass179_0__FrameInOut_b__0__);
    sub_21FFC50(&Method_MainMenuBarBase___c__DisplayClass179_0__FrameInOut_b__1__);
    sub_21FFC50(&MainMenuBarBase___c__DisplayClass179_0_TypeInfo);
    byte_5937DD5 = 1;
  }
  v7 = sub_21FFEBC(MainMenuBarBase___c__DisplayClass179_0_TypeInfo);
  MainMenuBarBase___c__DisplayClass179_0___ctor((MainMenuBarBase___c__DisplayClass179_0_o *)v7, 0);
  gameObject = (MoveObject_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !v7 )
    goto LABEL_29;
  *(_QWORD *)(v7 + 16) = gameObject;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)gameObject, v10, v11, v12, v13, v14, v15);
  mFrameInPosY = this->fields.mFrameInPosY;
  v17 = *(UnityEngine_GameObject_o **)(v7 + 16);
  v18 = (const MethodInfo_38852A8 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___;
  if ( is_framein )
    v19 = this->fields.mFrameInPosY;
  else
    v19 = -90.0;
  *(float *)(v7 + 32) = v19;
  Component_object = GameObjectExtensions__SafeGetComponent_object_(v17, v18);
  *(_QWORD *)(v7 + 24) = Component_object;
  v21 = (MoveObject_o **)(v7 + 24);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)Component_object, v22, v23, v24, v25, v26, v27);
  if ( is_force
    || (v28 = *(float *)(v7 + 32),
        v28 == GameObjectExtensions__GetLocalPositionY(*(UnityEngine_GameObject_o **)(v7 + 16), 0)) )
  {
    gameObject = *v21;
    if ( *v21 )
    {
      MoveObject__Stop(gameObject, 0);
      GameObjectExtensions__SetLocalPositionY(*(UnityEngine_GameObject_o **)(v7 + 16), *(float *)(v7 + 32), 0);
      return;
    }
LABEL_29:
    sub_21FFECC(gameObject, v9);
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v9);
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v7 + 16), 0);
  x = LocalPosition.fields.x;
  z = LocalPosition.fields.z;
  v44 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v7 + 16), 0);
  v32 = v44.fields.x;
  v33 = v44.fields.z;
  v34 = *(MoveObject_o **)(v7 + 24);
  v35 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v35, (Il2CppObject *)v7, Method_MainMenuBarBase___c__DisplayClass179_0__FrameInOut_b__0__, 0);
  v36 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v36, (Il2CppObject *)v7, Method_MainMenuBarBase___c__DisplayClass179_0__FrameInOut_b__1__, 0);
  if ( !v34 )
    goto LABEL_29;
  v37 = -90.0;
  if ( is_framein )
    v38 = v32;
  else
    v38 = x;
  if ( is_framein )
    v39 = v33;
  else
    v39 = z;
  if ( is_framein )
    v40 = x;
  else
    v40 = v32;
  if ( is_framein )
    v41 = z;
  else
    v41 = v33;
  v42 = v19;
  if ( !is_framein )
    v37 = mFrameInPosY;
  MoveObject__Play(
    v34,
    *(UnityEngine_Vector3_o *)(&v37 - 1),
    *(UnityEngine_Vector3_o *)&v40,
    IntpTime_AutoResume,
    v35,
    v36,
    0.0,
    17,
    0);
}


void MainMenuBarBase__FrameOut(MainMenuBarBase_o *this, bool is_force, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  MainMenuBarBase__FrameInOut(this, 0, is_force, v3);
}


bool MainMenuBarBase__GetJumpSceneInfo(
        MainMenuBarBase_o *this,
        int32_t *warId,
        int32_t *questId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x21
  const MethodInfo_476E8C0 *v9; // x0
  System_Collections_Generic_List_int__o *MovedEventScriptList_49530400; // x22
  bool IsClearAllMainScenario; // w8
  int v12; // w9
  QuestEntity_o *LatestMainScenarioLastQuest; // x0
  QuestEntity_o *v14; // x21
  int32_t id; // w9
  const MethodInfo_476EDF8 *v16; // x0
  int32_t WarID_ByQuestID; // w0
  const MethodInfo_476E8C0 *v18; // x8
  QuestScriptEntity_o *EntityFromQuestId; // x0
  __int64 v20; // x1
  int parentWarId; // w22
  QuestScriptEntity_o *v22; // x20
  MainMenuBarBase_c *v23; // x0

  if ( (byte_5937DD0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestScriptMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_WarMaster___);
    sub_21FFC50(&MainMenuBarBase_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_5937DD0 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  v9 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__;
  *warId = -1;
  *questId = -1;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance(v9);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestScriptMaster___);
  if ( !Instance )
    goto LABEL_36;
  MovedEventScriptList_49530400 = QuestScriptMaster__GetMovedEventScriptList_49530400(
                                    (QuestScriptMaster_o *)Instance,
                                    0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_36;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !Instance )
    goto LABEL_36;
  IsClearAllMainScenario = WarMaster__IsClearAllMainScenario((WarMaster_o *)Instance, 0);
  v12 = *(&NetworkManager_TypeInfo->_2.cctor_finished + 1);
  if ( IsClearAllMainScenario )
  {
    if ( !v12 )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7);
    if ( !byte_5931D52 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5931D52 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      goto LABEL_36;
    LatestMainScenarioLastQuest = UserQuestMaster__GetLatestMainScenarioLastQuest(
                                    (UserQuestMaster_o *)MasterData_object,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    MovedEventScriptList_49530400,
                                    0);
  }
  else
  {
    if ( !v12 )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7);
    if ( !byte_5931D52 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5931D52 = 1;
    }
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7);
      Instance = (DataManager_o *)NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      goto LABEL_36;
    LatestMainScenarioLastQuest = UserQuestMaster__GetMainScenarioLatestClear(
                                    (UserQuestMaster_o *)MasterData_object,
                                    *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL),
                                    MovedEventScriptList_49530400,
                                    0);
  }
  v14 = LatestMainScenarioLastQuest;
  if ( !LatestMainScenarioLastQuest )
    return v14 != 0;
  id = LatestMainScenarioLastQuest->fields.id;
  v16 = (const MethodInfo_476EDF8 *)Method_SingletonTemplate_QuestTree__get_Instance__;
  *questId = id;
  Instance = (DataManager_o *)SingletonTemplate_object___get_Instance(v16);
  if ( !Instance
    || (WarID_ByQuestID = QuestTree__GetWarID_ByQuestID((QuestTree_o *)Instance, *questId, 0),
        v18 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__,
        *warId = WarID_ByQuestID,
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance(v18)) == 0)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestScriptMaster___)) == 0 )
  {
LABEL_36:
    sub_21FFECC(Instance, v7);
  }
  EntityFromQuestId = QuestScriptMaster__GetEntityFromQuestId((QuestScriptMaster_o *)Instance, *questId, 0);
  if ( EntityFromQuestId )
  {
    parentWarId = EntityFromQuestId->fields.parentWarId;
    v22 = EntityFromQuestId;
    if ( parentWarId >= 1 )
    {
      v23 = MainMenuBarBase_TypeInfo;
      if ( !*(&MainMenuBarBase_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo, v20);
        v23 = MainMenuBarBase_TypeInfo;
      }
      if ( parentWarId < v23->static_fields->FOLDER_WAR_ID )
        *warId = v22->fields.parentWarId;
    }
  }
  return v14 != 0;
}


void MainMenuBarBase__InitExRoomQuestInfo(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *NotClearQuestCloseTime; // x0
  __int64 v4; // x1
  UnityEngine_Component_o *exRoomQuestBalloonSprite; // x8

  NotClearQuestCloseTime = (UnityEngine_GameObject_o *)ExRoomTopQuestBoard__GetNotClearQuestCloseTime(0);
  exRoomQuestBalloonSprite = (UnityEngine_Component_o *)this->fields.exRoomQuestBalloonSprite;
  this->fields.exRoomQuestTargetTime = (int64_t)NotClearQuestCloseTime;
  if ( !exRoomQuestBalloonSprite
    || (NotClearQuestCloseTime = UnityEngine_Component__get_gameObject(exRoomQuestBalloonSprite, 0)) == 0 )
  {
    sub_21FFECC(NotClearQuestCloseTime, v4);
  }
  UnityEngine_GameObject__SetActive(NotClearQuestCloseTime, this->fields.exRoomQuestTargetTime > 0, 0);
}


void MainMenuBarBase__InvokeAndClearAllBtnAct(MainMenuBarBase_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7

  ActionExtensions__Call(this->fields.mAllBtnAct, 0);
  this->fields.mAllBtnAct = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mAllBtnAct, 0, v3, v4, v5, v6, v7, v8);
}


bool MainMenuBarBase__IsSpotSelectWait(MainMenuBarBase_o *this, const MethodInfo *method)
{
  ScrTerminalListTop_o *MyFsmP; // x0
  System_Collections_Generic_List_GameObject__c *klass; // x8
  System_Collections_Generic_List_GameObject__c *v4; // x8
  __int64 v5; // x8

  if ( (byte_5937DC3 & 1) == 0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    sub_21FFC50(&StringLiteral_12771/*"SPOT SELECT WAIT"*/);
    byte_5937DC3 = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
  }
  MyFsmP = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    MyFsmP = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = MyFsmP->fields.itemGetEffectInstances->klass;
  if ( !klass )
    goto LABEL_26;
  MyFsmP = *(ScrTerminalListTop_o **)&klass->_2.element_size;
  if ( !MyFsmP )
    goto LABEL_26;
  MyFsmP = (ScrTerminalListTop_o *)ScrTerminalListTop__mfGetMyFsmP(MyFsmP, 0);
  if ( !MyFsmP )
    goto LABEL_26;
  MyFsmP = (ScrTerminalListTop_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)MyFsmP, 0);
  if ( !MyFsmP )
    goto LABEL_26;
  if ( System_String__IndexOf_75501892((System_String_o *)MyFsmP, (System_String_o *)StringLiteral_12771/*"SPOT SELECT WAIT"*/, 0) < 0 )
    return 0;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
  }
  MyFsmP = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    MyFsmP = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  v4 = MyFsmP->fields.itemGetEffectInstances->klass;
  if ( !v4 || (v5 = *(_QWORD *)&v4->_2.static_fields_size) == 0 || (MyFsmP = *(ScrTerminalListTop_o **)(v5 + 544)) == 0 )
LABEL_26:
    sub_21FFECC(MyFsmP, method);
  return !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)MyFsmP, 0);
}


void MainMenuBarBase__OnClickCombine(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *combineBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_5937DC8 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_8870/*"MAIN_MENU_BAR_SELECT_COMBINE"*/);
    byte_5937DC8 = 1;
  }
  combineBtn = this->fields.combineBtn;
  if ( !combineBtn )
    sub_21FFECC(0, method);
  IsEnabled = MainMenuBarButton__IsEnabled(combineBtn, 0);
  MainMenuBarBase__OnClickCommon(this, 4, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 32, (System_String_o *)StringLiteral_8870/*"MAIN_MENU_BAR_SELECT_COMBINE"*/, 0, v6);
}


// local variable allocation has failed, the output may be wrong!
void MainMenuBarBase__OnClickCommon(MainMenuBarBase_o *this, int32_t kind, bool isEnabled, const MethodInfo *method)
{
  MainMenuBarBase_o *v6; // x19
  struct System_Action_array *mDispBtnActList; // x8
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  struct System_Action_array *v14; // x8
  Il2CppClass **v15; // x0
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x1
  _BYTE *v23; // x0
  int v24; // w20
  int32_t v25; // w19
  System_Reflection_MethodBase_o *v26; // x0

  v6 = this;
  if ( (byte_5937DC0 & 1) == 0 )
  {
    sub_21FFC50(&Method_MainMenuBarBase_OnClickCommon__);
    this = (MainMenuBarBase_o *)sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5937DC0 = 1;
  }
  if ( !isEnabled )
  {
    v23 = Method_MainMenuBarBase_OnClickCommon__;
    v24 = 2;
    v25 = 2;
    goto LABEL_12;
  }
  mDispBtnActList = v6->fields.mDispBtnActList;
  if ( !mDispBtnActList )
    goto LABEL_15;
  if ( LODWORD(mDispBtnActList->max_length) <= kind )
    goto LABEL_16;
  ActionExtensions__Call(mDispBtnActList->m_Items[kind], 0);
  v14 = v6->fields.mDispBtnActList;
  if ( !v14 )
LABEL_15:
    sub_21FFECC(this, *(_QWORD *)&kind);
  if ( LODWORD(v14->max_length) <= kind )
LABEL_16:
    sub_21FFED4(this);
  v15 = &v14->obj.klass + kind;
  v15[4] = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v15 + 4), 0, v8, v9, v10, v11, v12, v13);
  ActionExtensions__Call(v6->fields.mAllBtnAct, 0);
  v6->fields.mAllBtnAct = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v6->fields.mAllBtnAct, 0, v16, v17, v18, v19, v20, v21);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v22);
  TerminalPramsManager__ResetExRoomTransitionInfo(0);
  v23 = Method_MainMenuBarBase_OnClickCommon__;
  v24 = 0;
  v25 = 0;
LABEL_12:
  if ( (v23[83] & 2) != 0 )
  {
    v23 = (_BYTE *)sub_21FFC68(v23);
    v25 = v24;
  }
  v26 = (System_Reflection_MethodBase_o *)sub_21FFC34(v23, *((_QWORD *)v23 + 4));
  OverwriteAssetSoundName__PlaySystemSe(v26, v25, 0, 0);
}


void MainMenuBarBase__OnClickExRoom(MainMenuBarBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MainMenuBarBase__OnClickExRoomSequence(this, 1, v2);
}


void MainMenuBarBase__OnClickExRoomQuestBalloon(MainMenuBarBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  if ( !MainMenuBarBase__TryChangeStateInExRoom(this, 2, v2) )
    MainMenuBarBase__OnClickExRoomSequence(this, 2, v4);
}


// local variable allocation has failed, the output may be wrong!
void MainMenuBarBase__OnClickExRoomSequence(MainMenuBarBase_o *this, int32_t exRoomType, const MethodInfo *method)
{
  MainMenuBarButton_o *exRoomBtn; // x0
  bool IsEnabled; // w21
  const MethodInfo *v7; // x3
  __int64 v8; // x1
  TerminalPramsManager_c *v9; // x0
  int v10; // w9
  TerminalTransitionInfo_o *v11; // x21
  const MethodInfo *v12; // x4

  if ( (byte_5937DC7 & 1) == 0 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&TerminalTransitionInfo_TypeInfo);
    sub_21FFC50(&StringLiteral_8871/*"MAIN_MENU_BAR_SELECT_EXROOM"*/);
    byte_5937DC7 = 1;
  }
  exRoomBtn = this->fields.exRoomBtn;
  if ( !exRoomBtn )
    goto LABEL_18;
  IsEnabled = MainMenuBarButton__IsEnabled(exRoomBtn, 0);
  MainMenuBarBase__OnClickCommon(this, 3, IsEnabled, v7);
  if ( IsEnabled )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8);
    if ( !byte_5932E01 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5932E01 = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v8);
      v9 = TerminalPramsManager_TypeInfo;
    }
    v10 = (unsigned __int8)byte_5932DFB;
    v9->static_fields->_IsAutoOpenMasterMissionOnExRoomQuest_k__BackingField = 0;
    if ( !v10 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
      byte_5932DFB = 1;
    }
    if ( !*(&v9->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v9, v8);
      v9 = TerminalPramsManager_TypeInfo;
    }
    v9->static_fields->_IsAutoExRoom_k__BackingField = 1;
    TerminalPramsManager__Save_SaveData(0);
    v11 = (TerminalTransitionInfo_o *)sub_21FFEBC(TerminalTransitionInfo_TypeInfo);
    TerminalTransitionInfo___ctor(v11, 0);
    if ( v11 )
    {
      v11->fields.exRoomType = exRoomType;
      MainMenuBarBase__SendSelectSignal(this, 34, (System_String_o *)StringLiteral_8871/*"MAIN_MENU_BAR_SELECT_EXROOM"*/, (Il2CppObject *)v11, v12);
      return;
    }
LABEL_18:
    sub_21FFECC(exRoomBtn, *(_QWORD *)&exRoomType);
  }
}


void MainMenuBarBase__OnClickExRoomShopBalloon(MainMenuBarBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  const MethodInfo *v4; // x2

  if ( !MainMenuBarBase__TryChangeStateInExRoom(this, 3, v2) )
    MainMenuBarBase__OnClickExRoomSequence(this, 3, v4);
}


void MainMenuBarBase__OnClickFormation(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *partyBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_5937DC4 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_8875/*"MAIN_MENU_BAR_SELECT_PARTY"*/);
    byte_5937DC4 = 1;
  }
  partyBtn = this->fields.partyBtn;
  if ( !partyBtn )
    sub_21FFECC(0, method);
  IsEnabled = MainMenuBarButton__IsEnabled(partyBtn, 0);
  MainMenuBarBase__OnClickCommon(this, 1, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 39, (System_String_o *)StringLiteral_8875/*"MAIN_MENU_BAR_SELECT_PARTY"*/, 0, v6);
}


void MainMenuBarBase__OnClickFreeCampaignInfo(
        MainMenuBarBase_o *this,
        UnityEngine_GameObject_o *campaignObject,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_GameObject__int__o *campaignNoticeMap; // x0
  const MethodInfo *v6; // x2
  int32_t v7; // w1
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5937DCD & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_GameObject__int__TryGetValue__);
    byte_5937DCD = 1;
  }
  campaignNoticeMap = this->fields.campaignNoticeMap;
  value = 0;
  if ( !campaignNoticeMap )
    sub_21FFECC(0, campaignObject);
  if ( System_Collections_Generic_Dictionary_object__int___TryGetValue(
         (System_Collections_Generic_Dictionary_object__int__o *)campaignNoticeMap,
         (Il2CppObject *)campaignObject,
         &value,
         (const MethodInfo_3FC241C *)Method_System_Collections_Generic_Dictionary_GameObject__int__TryGetValue__) )
  {
    v7 = value;
  }
  else
  {
    v7 = 0;
    value = 0;
  }
  MainMenuBarBase__OnClickSummonCampaign(this, v7, v6);
}


void MainMenuBarBase__OnClickFriend(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *friendBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_5937DCA & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_8872/*"MAIN_MENU_BAR_SELECT_FRIEND"*/);
    byte_5937DCA = 1;
  }
  friendBtn = this->fields.friendBtn;
  if ( !friendBtn )
    sub_21FFECC(0, method);
  IsEnabled = MainMenuBarButton__IsEnabled(friendBtn, 0);
  MainMenuBarBase__OnClickCommon(this, 6, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 23, (System_String_o *)StringLiteral_8872/*"MAIN_MENU_BAR_SELECT_FRIEND"*/, 0, v6);
}


void MainMenuBarBase__OnClickLatestScenario(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *latestScenarioBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  MainMenuBarBase_o *v6; // x0
  const MethodInfo *v7; // x3
  __int64 v8; // x1
  const MethodInfo *v9; // x4
  MyRoomRootComponent_c *v10; // x0
  int32_t v11; // w22
  int32_t v12; // w23
  System_String_o *MYROOM_STATE_NEW_MATERIAL; // x21
  SceneJumpInfo_o *v14; // x20
  int32_t questId[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5937DCC & 1) == 0 )
  {
    sub_21FFC50(&MyRoomRootComponent_TypeInfo);
    sub_21FFC50(&SceneJumpInfo_TypeInfo);
    sub_21FFC50(&StringLiteral_8873/*"MAIN_MENU_BAR_SELECT_MYROOM"*/);
    byte_5937DCC = 1;
  }
  latestScenarioBtn = this->fields.latestScenarioBtn;
  *(_QWORD *)questId = 0;
  if ( !latestScenarioBtn )
    sub_21FFECC(0, method);
  IsEnabled = MainMenuBarButton__IsEnabled(latestScenarioBtn, 0);
  MainMenuBarBase__OnClickCommon(this, 8, IsEnabled, v5);
  if ( IsEnabled )
  {
    if ( MainMenuBarBase__GetJumpSceneInfo(v6, &questId[1], questId, v7) )
    {
      v10 = MyRoomRootComponent_TypeInfo;
      if ( !*(&MyRoomRootComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(MyRoomRootComponent_TypeInfo, v8);
        v10 = MyRoomRootComponent_TypeInfo;
      }
      v12 = questId[0];
      v11 = questId[1];
      MYROOM_STATE_NEW_MATERIAL = v10->static_fields->MYROOM_STATE_NEW_MATERIAL;
      v14 = (SceneJumpInfo_o *)sub_21FFEBC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_48427232(v14, MYROOM_STATE_NEW_MATERIAL, v11, v12, 0);
    }
    else
    {
      v14 = 0;
    }
    MainMenuBarBase__SendSelectSignal(this, 30, (System_String_o *)StringLiteral_8873/*"MAIN_MENU_BAR_SELECT_MYROOM"*/, (Il2CppObject *)v14, v9);
  }
}


void MainMenuBarBase__OnClickMyroom(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *myroomBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_5937DCB & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_8873/*"MAIN_MENU_BAR_SELECT_MYROOM"*/);
    byte_5937DCB = 1;
  }
  myroomBtn = this->fields.myroomBtn;
  if ( !myroomBtn )
    sub_21FFECC(0, method);
  IsEnabled = MainMenuBarButton__IsEnabled(myroomBtn, 0);
  MainMenuBarBase__OnClickCommon(this, 7, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 30, (System_String_o *)StringLiteral_8873/*"MAIN_MENU_BAR_SELECT_MYROOM"*/, 0, v6);
}


void MainMenuBarBase__OnClickOutSide(MainMenuBarBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  MainMenuBarBase__SwitchMenu(this, 0, 1, v2);
}


void MainMenuBarBase__OnClickShop(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *shopBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_5937DC9 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_8876/*"MAIN_MENU_BAR_SELECT_SHOP"*/);
    byte_5937DC9 = 1;
  }
  shopBtn = this->fields.shopBtn;
  if ( !shopBtn )
    sub_21FFECC(0, method);
  IsEnabled = MainMenuBarButton__IsEnabled(shopBtn, 0);
  MainMenuBarBase__OnClickCommon(this, 5, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 22, (System_String_o *)StringLiteral_8876/*"MAIN_MENU_BAR_SELECT_SHOP"*/, 0, v6);
}


void MainMenuBarBase__OnClickSummon(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *summonBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  __int64 v6; // x1
  const MethodInfo *v7; // x4
  TerminalPramsManager_c *v8; // x0
  System_String_o *v9; // x2

  if ( (byte_5937DC5 & 1) == 0 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&StringLiteral_8877/*"MAIN_MENU_BAR_SELECT_SUMMON"*/);
    byte_5937DC5 = 1;
  }
  summonBtn = this->fields.summonBtn;
  if ( !summonBtn )
    sub_21FFECC(0, method);
  IsEnabled = MainMenuBarButton__IsEnabled(summonBtn, 0);
  MainMenuBarBase__OnClickCommon(this, 2, IsEnabled, v5);
  if ( IsEnabled )
  {
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6);
    if ( !byte_5931FB9 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5931FB9 = 1;
    }
    v8 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6);
      v8 = TerminalPramsManager_TypeInfo;
    }
    v9 = (System_String_o *)StringLiteral_8877/*"MAIN_MENU_BAR_SELECT_SUMMON"*/;
    v8->static_fields->_SummonId_k__BackingField = 0;
    MainMenuBarBase__SendSelectSignal(this, 20, v9, 0, v7);
  }
}


void MainMenuBarBase__OnClickSummonCampaign(MainMenuBarBase_o *this, int32_t gachaId, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  __int64 v6; // x1
  System_String_o *v7; // x21
  __int64 v8; // x1
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  __int64 v11; // x1
  TerminalPramsManager_c *v12; // x0
  int v13; // w9
  DataManager_c *v14; // x8
  int klass; // w20
  Il2CppObject *v16; // x8
  int v17; // w20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  const MethodInfo *v24; // x4
  System_String_o *SceneName; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x3
  MainMenuBarBase_o *v28; // x0
  bool v29; // w2
  UnityEngine_Object_o *activeScene; // x21
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  const MethodInfo *v37; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5937DCE & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_GachaMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_MainMenuBarBase_OnClickSummonCampaign__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SceneList_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&StringLiteral_8877/*"MAIN_MENU_BAR_SELECT_SUMMON"*/);
    byte_5937DCE = 1;
  }
  entity = 0;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (AvalonSceneManager_o *)AvalonSceneManager__getNowSceneName(Instance, 0);
  if ( !this->fields.summonBtn )
    goto LABEL_46;
  v7 = (System_String_o *)Instance;
  if ( MainMenuBarButton__IsEnabled(this->fields.summonBtn, 0) )
  {
    v9 = Method_MainMenuBarBase_OnClickSummonCampaign__;
    if ( (*((_BYTE *)Method_MainMenuBarBase_OnClickSummonCampaign__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_21FFC68(Method_MainMenuBarBase_OnClickSummonCampaign__);
    v10 = (System_Reflection_MethodBase_o *)sub_21FFC34(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11);
    if ( !byte_5931FB8 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5931FB8 = 1;
    }
    v12 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v11);
      v12 = TerminalPramsManager_TypeInfo;
    }
    v13 = (unsigned __int8)byte_5931FB9;
    v12->static_fields->_SummonType_k__BackingField = 1;
    if ( !v13 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      v12 = TerminalPramsManager_TypeInfo;
      byte_5931FB9 = 1;
    }
    if ( !*(&v12->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v12, v11);
      v12 = TerminalPramsManager_TypeInfo;
    }
    v14 = DataManager_TypeInfo;
    v12->static_fields->_SummonId_k__BackingField = gachaId;
    if ( !*(&v14->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v14, v11);
    Instance = (AvalonSceneManager_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GachaMaster___);
    if ( Instance )
    {
      Instance = (AvalonSceneManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                           &entity,
                                           gachaId,
                                           (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
LABEL_35:
        ActionExtensions__Call(this->fields.mAllBtnAct, 0);
        this->fields.mAllBtnAct = 0;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mAllBtnAct, 0, v18, v19, v20, v21, v22, v23);
        MainMenuBarBase__SendSelectSignal(this, 20, (System_String_o *)StringLiteral_8877/*"MAIN_MENU_BAR_SELECT_SUMMON"*/, 0, v24);
        return;
      }
      if ( entity )
      {
        klass = (int)entity[1].klass;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6);
        if ( !byte_5931FB9 )
        {
          sub_21FFC50(&TerminalPramsManager_TypeInfo);
          byte_5931FB9 = 1;
        }
        Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
        if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v6);
          Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
        }
        v16 = entity;
        HIDWORD(Instance[1].fields.sendData->monitor) = klass;
        if ( v16 )
        {
          v17 = (int)v16[3].klass;
          if ( !byte_5931FB8 )
          {
            sub_21FFC50(&TerminalPramsManager_TypeInfo);
            Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
            byte_5931FB8 = 1;
          }
          if ( !HIDWORD(Instance[2].klass) )
          {
            j_il2cpp_runtime_class_init_0(Instance, v6);
            Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
          }
          LODWORD(Instance[1].fields.sendData->monitor) = v17;
          goto LABEL_35;
        }
      }
    }
LABEL_46:
    sub_21FFECC(Instance, v6);
  }
  if ( !*(&SceneList_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, v8);
  SceneName = SceneList__getSceneName(20, 0);
  if ( System_String__op_Inequality(v7, SceneName, 0) )
  {
    v28 = this;
    v29 = 1;
LABEL_44:
    MainMenuBarBase__SwitchMenu(v28, 0, v29, v27);
    return;
  }
  activeScene = (UnityEngine_Object_o *)this->fields.activeScene;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
  if ( UnityEngine_Object__op_Equality(activeScene, 0, 0) )
  {
    v28 = this;
    v29 = 0;
    goto LABEL_44;
  }
  ActionExtensions__Call(this->fields.mAllBtnAct, 0);
  this->fields.mAllBtnAct = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mAllBtnAct, 0, v31, v32, v33, v34, v35, v36);
  MainMenuBarBase__OnClickSummonCampaignInSummonScene(this, gachaId, v37);
}


// local variable allocation has failed, the output may be wrong!
void MainMenuBarBase__OnClickSummonCampaignInSummonScene(
        MainMenuBarBase_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  struct SceneRootComponent_o *activeScene; // x0
  __int64 v6; // x1
  Il2CppObject *Component_object; // x21
  const MethodInfo *v8; // x3
  __int64 v9; // x1
  SummonControl_o *SummonControl; // x21
  int32_t MiniBannerIndex; // w0
  unsigned int v12; // w20
  struct System_Action_int__bool__o *OnClickBalloonAction; // x8

  if ( (byte_5937DCF & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_SummonRootComponent___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937DCF = 1;
  }
  activeScene = this->fields.activeScene;
  if ( !activeScene )
    goto LABEL_17;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)activeScene,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_SummonRootComponent___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
  activeScene = (struct SceneRootComponent_o *)UnityEngine_Object__op_Equality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0,
                                                 0);
  if ( ((unsigned __int8)activeScene & 1) != 0 )
    goto LABEL_13;
  if ( !Component_object )
    goto LABEL_17;
  SummonControl = SummonRootComponent__GetSummonControl((SummonRootComponent_o *)Component_object, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9);
  activeScene = (struct SceneRootComponent_o *)UnityEngine_Object__op_Equality(
                                                 (UnityEngine_Object_o *)SummonControl,
                                                 0,
                                                 0);
  if ( ((unsigned __int8)activeScene & 1) != 0 )
    goto LABEL_13;
  if ( !SummonControl )
LABEL_17:
    sub_21FFECC(activeScene, *(_QWORD *)&gachaId);
  MiniBannerIndex = SummonControl__GetMiniBannerIndex(SummonControl, gachaId, 0);
  if ( SummonControl->fields.currentMoveIdx == MiniBannerIndex )
  {
LABEL_13:
    MainMenuBarBase__SwitchMenu(this, 0, 1, v8);
    return;
  }
  v12 = MiniBannerIndex;
  MainMenuBarBase__SwitchMenu(this, 0, 0, v8);
  OnClickBalloonAction = this->fields.OnClickBalloonAction;
  if ( OnClickBalloonAction )
    ((void (__fastcall *)(intptr_t, _QWORD, __int64, intptr_t))OnClickBalloonAction->fields.invoke_impl)(
      OnClickBalloonAction->fields.method_code,
      v12,
      1,
      OnClickBalloonAction->fields.method);
}


void MainMenuBarBase__OnClickTerminal(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *terminalBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  __int64 v6; // x1
  TerminalSceneComponent_c *v7; // x0
  UnityEngine_Object_o *mInstance; // x20
  const MethodInfo *v9; // x4
  System_Threading_CancellationTokenSource_c *klass; // x8
  UnityEngine_Object_o *v11; // x20
  TerminalPramsManager_c *v12; // x0
  System_Threading_CancellationTokenSource_c *v13; // x8
  System_String_o *v14; // x20
  System_Threading_CancellationTokenSource_c *v15; // x8
  TerminalPramsManager_c *v16; // x0
  int v17; // w9
  TerminalSceneComponent_c *v18; // x8
  int v19; // w10
  System_Threading_CancellationTokenSource_c *v20; // x8
  TerminalSceneComponent_c *v21; // x0
  TerminalPramsManager_c *v22; // x0
  int v23; // w9
  int v24; // w9
  __int64 v25; // x1
  const MethodInfo *v26; // x2
  long double v27; // q0
  MainMenuBarBase___c_c *v28; // x0
  struct MainMenuBarBase___c_StaticFields *static_fields; // x8
  System_Action_o *_9__151_0; // x20
  Il2CppObject *v31; // x21
  struct MainMenuBarBase___c_StaticFields *v32; // x0
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_Collections_IEnumerator_o *v39; // x1
  const MethodInfo *v40; // x3
  __int64 v41; // x1
  long double v42; // q0
  long double v43; // q0

  if ( (byte_5937DC1 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    sub_21FFC50(&Method_MainMenuBarBase___c__OnClickTerminal_b__151_0__);
    sub_21FFC50(&MainMenuBarBase___c_TypeInfo);
    sub_21FFC50(&StringLiteral_8878/*"MAIN_MENU_BAR_SELECT_TERMINAL"*/);
    sub_21FFC50(&StringLiteral_12771/*"SPOT SELECT WAIT"*/);
    sub_21FFC50(&StringLiteral_3425/*"CAPTER WAIT"*/);
    byte_5937DC1 = 1;
  }
  terminalBtn = this->fields.terminalBtn;
  if ( !terminalBtn )
    goto LABEL_111;
  IsEnabled = MainMenuBarButton__IsEnabled(terminalBtn, 0);
  MainMenuBarBase__OnClickCommon(this, 0, IsEnabled, v5);
  if ( IsEnabled )
  {
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6);
    if ( !byte_5931EF0 )
    {
      sub_21FFC50(&TerminalSceneComponent_TypeInfo);
      byte_5931EF0 = 1;
    }
    v7 = TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v6);
      v7 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = (UnityEngine_Object_o *)v7->static_fields->mInstance;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    if ( !UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
      goto LABEL_114;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    if ( !byte_5931EF0 )
    {
      sub_21FFC50(&TerminalSceneComponent_TypeInfo);
      byte_5931EF0 = 1;
    }
    terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = terminalBtn[4].fields.m_CancellationTokenSource->klass;
    if ( !klass )
      goto LABEL_111;
    v11 = *(UnityEngine_Object_o **)&klass->_2.element_size;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( !UnityEngine_Object__op_Inequality(v11, 0, 0) )
    {
LABEL_114:
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
      if ( !byte_59354A1 )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        byte_59354A1 = 1;
      }
      v22 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
        v22 = TerminalPramsManager_TypeInfo;
      }
      v23 = (unsigned __int8)byte_5932ADC;
      v22->static_fields->_IsMapReturnFolder_k__BackingField = 0;
      if ( !v23 )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        v22 = TerminalPramsManager_TypeInfo;
        byte_5932ADC = 1;
      }
      if ( !*(&v22->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v22, method);
        v22 = TerminalPramsManager_TypeInfo;
      }
      v24 = (unsigned __int8)byte_59354CD;
      v22->static_fields->_IsAutoResume_k__BackingField = 0;
      if ( !v24 )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        v22 = TerminalPramsManager_TypeInfo;
        byte_59354CD = 1;
      }
      if ( !*(&v22->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v22, method);
        v22 = TerminalPramsManager_TypeInfo;
      }
      v22->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 1;
      goto LABEL_93;
    }
    if ( this->fields.kind != 1 )
      goto LABEL_115;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    if ( !byte_5934F89 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_5934F89 = 1;
    }
    v12 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
      v12 = TerminalPramsManager_TypeInfo;
    }
    if ( v12->static_fields->_DispState_k__BackingField != 2 )
      goto LABEL_115;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    if ( !byte_5931EF0 )
    {
      sub_21FFC50(&TerminalSceneComponent_TypeInfo);
      byte_5931EF0 = 1;
    }
    terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    }
    v13 = terminalBtn[4].fields.m_CancellationTokenSource->klass;
    if ( !v13 )
      goto LABEL_111;
    terminalBtn = *(MainMenuBarButton_o **)&v13->_2.element_size;
    if ( !terminalBtn )
      goto LABEL_111;
    terminalBtn = (MainMenuBarButton_o *)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)terminalBtn, 0);
    if ( !terminalBtn )
      goto LABEL_111;
    terminalBtn = (MainMenuBarButton_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)terminalBtn, 0);
    if ( !terminalBtn )
      goto LABEL_111;
    v14 = (System_String_o *)terminalBtn;
    if ( System_String__IndexOf_75501892((System_String_o *)terminalBtn, (System_String_o *)StringLiteral_12771/*"SPOT SELECT WAIT"*/, 0) < 0
      && System_String__IndexOf_75501892(v14, (System_String_o *)StringLiteral_3425/*"CAPTER WAIT"*/, 0) < 0 )
    {
      goto LABEL_115;
    }
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    if ( !byte_5931EF0 )
    {
      sub_21FFC50(&TerminalSceneComponent_TypeInfo);
      byte_5931EF0 = 1;
    }
    terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    }
    v15 = terminalBtn[4].fields.m_CancellationTokenSource->klass;
    if ( !v15 )
      goto LABEL_111;
    terminalBtn = *(MainMenuBarButton_o **)&v15->_2.element_size;
    if ( !terminalBtn )
      goto LABEL_111;
    if ( ScrTerminalListTop__GetPrioredParentId((ScrTerminalListTop_o *)terminalBtn, 0) )
    {
LABEL_115:
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
      if ( !byte_59354A1 )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        byte_59354A1 = 1;
      }
      v16 = TerminalPramsManager_TypeInfo;
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
        v16 = TerminalPramsManager_TypeInfo;
      }
      v17 = (unsigned __int8)byte_5932ADC;
      v16->static_fields->_IsMapReturnFolder_k__BackingField = 0;
      if ( !v17 )
      {
        sub_21FFC50(&TerminalPramsManager_TypeInfo);
        v16 = TerminalPramsManager_TypeInfo;
        byte_5932ADC = 1;
      }
      if ( !*(&v16->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v16, method);
        v16 = TerminalPramsManager_TypeInfo;
      }
      v18 = TerminalSceneComponent_TypeInfo;
      v19 = *(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1);
      v16->static_fields->_IsAutoResume_k__BackingField = 0;
      if ( !v19 )
        j_il2cpp_runtime_class_init_0(v18, method);
      if ( !byte_5931EF0 )
      {
        sub_21FFC50(&TerminalSceneComponent_TypeInfo);
        byte_5931EF0 = 1;
      }
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
        terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      }
      v20 = terminalBtn[4].fields.m_CancellationTokenSource->klass;
      if ( v20 )
      {
        terminalBtn = *(MainMenuBarButton_o **)&v20->_2.element_size;
        if ( terminalBtn )
        {
          ScrTerminalListTop__SetTopLastIndexNextBoard((ScrTerminalListTop_o *)terminalBtn, 0);
          if ( !byte_5931EF0 )
          {
            sub_21FFC50(&TerminalSceneComponent_TypeInfo);
            byte_5931EF0 = 1;
          }
          v21 = TerminalSceneComponent_TypeInfo;
          if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
            v21 = TerminalSceneComponent_TypeInfo;
          }
          terminalBtn = (MainMenuBarButton_o *)v21->static_fields->mInstance;
          if ( terminalBtn )
          {
            TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)terminalBtn, 0);
LABEL_93:
            MainMenuBarBase__SendSelectSignal(this, 34, (System_String_o *)StringLiteral_8878/*"MAIN_MENU_BAR_SELECT_TERMINAL"*/, 0, v9);
            return;
          }
        }
      }
LABEL_111:
      sub_21FFECC(terminalBtn, method);
    }
    if ( System_String__IndexOf_75501892(v14, (System_String_o *)StringLiteral_3425/*"CAPTER WAIT"*/, 0) < 0 )
    {
      if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
        *(__n128 *)&v27 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v25);
      terminalBtn = (MainMenuBarButton_o *)sub_2918590(0, v27);
      if ( !terminalBtn )
        goto LABEL_111;
      terminalBtn = (MainMenuBarButton_o *)terminalBtn[6].fields.m_CachedPtr;
      if ( !terminalBtn )
        goto LABEL_111;
      ScrTerminalListTop__SetTopLastIndexNextBoard((ScrTerminalListTop_o *)terminalBtn, 0);
      MainMenuBarBase__SwitchMenu(this, 0, 0, v40);
      if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
        *(__n128 *)&v42 = j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v41);
      v43 = sub_2E05DEC(1, 0, v42);
      terminalBtn = (MainMenuBarButton_o *)sub_2918590(0, v43);
      if ( !terminalBtn )
        goto LABEL_111;
      terminalBtn = (MainMenuBarButton_o *)terminalBtn[6].fields.m_CachedPtr;
      if ( !terminalBtn )
        goto LABEL_111;
      ScrTerminalListTop__cbfTitleInfoBtnBack_Click((ScrTerminalListTop_o *)terminalBtn, 0, 0);
    }
    else
    {
      v28 = MainMenuBarBase___c_TypeInfo;
      if ( !*(&MainMenuBarBase___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(MainMenuBarBase___c_TypeInfo, v25);
        v28 = MainMenuBarBase___c_TypeInfo;
      }
      static_fields = v28->static_fields;
      _9__151_0 = static_fields->__9__151_0;
      if ( !_9__151_0 )
      {
        if ( !*(&v28->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v28, v25);
          static_fields = MainMenuBarBase___c_TypeInfo->static_fields;
        }
        v31 = (Il2CppObject *)static_fields->__9;
        _9__151_0 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        System_Action___ctor(_9__151_0, v31, Method_MainMenuBarBase___c__OnClickTerminal_b__151_0__, 0);
        v32 = MainMenuBarBase___c_TypeInfo->static_fields;
        v32->__9__151_0 = _9__151_0;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v32->__9__151_0,
          (int32_t)_9__151_0,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
      }
      v39 = MainMenuBarBase__SetTerminalQuestListClose(this, _9__151_0, v26);
      UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, v39, 0);
    }
  }
}


void MainMenuBarBase__OnClickUnivMenu(MainMenuBarBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  MainMenuBarBase__SwitchMenu(this, !this->fields.isOpen, 1, v2);
  ActionExtensions__Call(this->fields.mMenuBtnAct, 0);
  this->fields.mMenuBtnAct = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mMenuBtnAct, 0, v4, v5, v6, v7, v8, v9);
}


void MainMenuBarBase__RequestSelectedSceneChange(MainMenuBarBase_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_5937DB3 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_5937DB3 = 1;
  }
  if ( this->fields.selectedType != -1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_21FFECC(0, v4);
    AvalonSceneManager__transitionScene(
      (AvalonSceneManager_o *)Instance,
      this->fields.selectedType,
      this->fields.fadeType,
      this->fields.selectedObject,
      0);
  }
}


void MainMenuBarBase__RequestSelectedSignal(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *activeSceneFSM; // x20
  System_String_o *selectedKind; // x1
  PlayMakerFSM_o *v5; // x0

  if ( (byte_5937DB4 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_8874/*"MAIN_MENU_BAR_SELECT_NONE"*/);
    byte_5937DB4 = 1;
  }
  activeSceneFSM = (UnityEngine_Object_o *)this->fields.activeSceneFSM;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( !UnityEngine_Object__op_Equality(activeSceneFSM, 0, 0) )
  {
    selectedKind = this->fields.selectedKind;
    v5 = this->fields.activeSceneFSM;
    if ( selectedKind )
    {
      if ( !v5 )
LABEL_12:
        sub_21FFECC(v5, selectedKind);
    }
    else
    {
      if ( !v5 )
        goto LABEL_12;
      selectedKind = (System_String_o *)StringLiteral_8874/*"MAIN_MENU_BAR_SELECT_NONE"*/;
    }
    PlayMakerFSM__SendEvent(v5, selectedKind, 0);
  }
}


void MainMenuBarBase__RequestTerminalSceneChange(MainMenuBarBase_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  const MethodInfo_476E8C0 *v4; // x0
  Il2CppObject *Instance; // x0
  __int64 v6; // x1

  if ( (byte_5937DB2 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5937DB2 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_5932ADC )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932ADC = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v2 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v2->static_fields;
  v4 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
  static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance(v4);
  if ( !Instance )
    sub_21FFECC(0, v6);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0, 0);
}


void MainMenuBarBase__ResetExRoomIconAndNotice(MainMenuBarBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  UnityEngine_Component_o *exRoomBtn; // x0
  __int64 v5; // x1
  Il2CppObject *Component_object; // x20
  struct ShopNoticeTween_o **p_exRoomNoticeTween; // x20
  ShopNoticeTween_o *v8; // x21
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_List_object__o *v15; // x21
  const MethodInfo *v16; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  UnityEngine_Component_o *v26; // x1
  Il2CppClass **v27; // x0
  const MethodInfo *v28; // x1
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  struct System_Object_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  UnityEngine_Component_o *v38; // x1
  Il2CppClass **v39; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  struct System_Object_array *v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  UnityEngine_Component_o *v49; // x1
  Il2CppClass **v50; // x0

  if ( (byte_5937DD7 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UIButton___);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_UISprite___);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_21FFC50(&ShopNoticeTween_TypeInfo);
    sub_21FFC50(&StringLiteral_21402/*"img_menu_ExRoom"*/);
    byte_5937DD7 = 1;
  }
  if ( this->fields.isOpen && ExRoomRootComponent__IsFeatureOpen(1, 0) )
  {
    exRoomBtn = (UnityEngine_Component_o *)this->fields.exRoomBtn;
    if ( !exRoomBtn )
      goto LABEL_41;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         exRoomBtn,
                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UISprite___);
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v5);
    AtlasManager__SetDownloadCommonSprite((UISprite_o *)Component_object, (System_String_o *)StringLiteral_21402/*"img_menu_ExRoom"*/, 0);
    exRoomBtn = (UnityEngine_Component_o *)this->fields.exRoomBtn;
    if ( !exRoomBtn )
      goto LABEL_41;
    exRoomBtn = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                             exRoomBtn,
                                             (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_UIButton___);
    if ( !exRoomBtn )
      goto LABEL_41;
    UIButton__set_normalSprite((UIButton_o *)exRoomBtn, (System_String_o *)StringLiteral_21402/*"img_menu_ExRoom"*/, 0);
    exRoomBtn = (UnityEngine_Component_o *)this->fields.exRoomNoticeTween;
    p_exRoomNoticeTween = &this->fields.exRoomNoticeTween;
    if ( !exRoomBtn )
    {
      v8 = (ShopNoticeTween_o *)sub_21FFEBC(ShopNoticeTween_TypeInfo);
      ShopNoticeTween___ctor(v8, (UnityEngine_MonoBehaviour_o *)this, 0);
      this->fields.exRoomNoticeTween = v8;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.exRoomNoticeTween,
        (int32_t)v8,
        v9,
        v10,
        v11,
        v12,
        v13,
        v14);
      exRoomBtn = (UnityEngine_Component_o *)this->fields.exRoomNoticeTween;
      if ( !exRoomBtn )
        goto LABEL_41;
    }
    ShopNoticeTween__Stop((ShopNoticeTween_o *)exRoomBtn, 0);
    v15 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GameObject__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v15,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
    if ( MainMenuBarBase__TrySetExRoomShopBalloon(this, v16) )
    {
      exRoomBtn = (UnityEngine_Component_o *)this->fields.exRoomShopBalloonSprite;
      if ( !exRoomBtn )
        goto LABEL_41;
      exRoomBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(exRoomBtn, 0);
      if ( !v15 )
        goto LABEL_41;
      items = v15->fields._items;
      v24 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v15->fields._version;
      if ( !items )
        goto LABEL_41;
      size = v15->fields._size;
      v26 = exRoomBtn;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          (Il2CppObject *)exRoomBtn,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
      }
      else
      {
        v27 = &items->obj.klass + size;
        v15->fields._size = size + 1;
        v27[4] = (Il2CppClass *)v26;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v27 + 4), (int32_t)v26, v17, v18, v19, v20, v21, v22);
      }
    }
    MainMenuBarBase__InitExRoomQuestInfo(this, v3);
    MainMenuBarBase__UpdateExRoomQuestInfo(this, v28);
    if ( this->fields.exRoomQuestTargetTime >= 1 )
    {
      exRoomBtn = (UnityEngine_Component_o *)this->fields.exRoomQuestBalloonSprite;
      if ( !exRoomBtn )
        goto LABEL_41;
      exRoomBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(exRoomBtn, 0);
      if ( !v15 )
        goto LABEL_41;
      v35 = v15->fields._items;
      v36 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v15->fields._version;
      if ( !v35 )
        goto LABEL_41;
      v37 = v15->fields._size;
      v38 = exRoomBtn;
      if ( (unsigned int)v37 >= LODWORD(v35->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          (Il2CppObject *)exRoomBtn,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &v35->obj.klass + v37;
        v15->fields._size = v37 + 1;
        v39[4] = (Il2CppClass *)v38;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v39 + 4), (int32_t)v38, v29, v30, v31, v32, v33, v34);
      }
    }
    exRoomBtn = (UnityEngine_Component_o *)MainMenuBarBase__TrySetExRoomMissionBalloon(this, v3);
    if ( ((unsigned __int8)exRoomBtn & 1) != 0 )
    {
      exRoomBtn = (UnityEngine_Component_o *)this->fields.exRoomMissionBalloonSprite;
      if ( !exRoomBtn )
        goto LABEL_41;
      exRoomBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(exRoomBtn, 0);
      if ( !v15 )
        goto LABEL_41;
      v46 = v15->fields._items;
      v47 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v15->fields._version;
      if ( !v46 )
        goto LABEL_41;
      v48 = v15->fields._size;
      v49 = exRoomBtn;
      if ( (unsigned int)v48 >= LODWORD(v46->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v15,
          (Il2CppObject *)exRoomBtn,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
      }
      else
      {
        v50 = &v46->obj.klass + v48;
        v15->fields._size = v48 + 1;
        v50[4] = (Il2CppClass *)v49;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v50 + 4), (int32_t)v49, v40, v41, v42, v43, v44, v45);
      }
    }
    else if ( !v15 )
    {
      goto LABEL_41;
    }
    if ( v15->fields._size >= 2 )
    {
      exRoomBtn = (UnityEngine_Component_o *)*p_exRoomNoticeTween;
      if ( *p_exRoomNoticeTween )
      {
        ShopNoticeTween__AddTargets(
          (ShopNoticeTween_o *)exRoomBtn,
          this->fields.exRoomBalloonRoot,
          (System_Collections_Generic_List_GameObject__o *)v15,
          0,
          0);
        exRoomBtn = (UnityEngine_Component_o *)this->fields.exRoomNoticeTween;
        if ( exRoomBtn )
        {
          ShopNoticeTween__SetActiveSwitchingTargets((ShopNoticeTween_o *)exRoomBtn, 0, 0);
          exRoomBtn = (UnityEngine_Component_o *)*p_exRoomNoticeTween;
          if ( *p_exRoomNoticeTween )
          {
            ShopNoticeTween__Start((ShopNoticeTween_o *)exRoomBtn, 0);
            return;
          }
        }
      }
LABEL_41:
      sub_21FFECC(exRoomBtn, v3);
    }
  }
}


void MainMenuBarBase__ResetShopNotice(MainMenuBarBase_o *this, const MethodInfo *method)
{
  struct ShopNotice_o *ShopNotice; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  const MethodInfo *v10; // x1

  if ( (byte_5937DBA & 1) == 0 )
  {
    sub_21FFC50(&ShopTopListViewManager_TypeInfo);
    byte_5937DBA = 1;
  }
  if ( !*(&ShopTopListViewManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ShopTopListViewManager_TypeInfo, method);
  ShopNotice = ShopTopListViewManager__GetShopNotice(0);
  this->fields.shopNotice = ShopNotice;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.shopNotice, (int32_t)ShopNotice, v4, v5, v6, v7, v8, v9);
  MainMenuBarBase__ResetShopNoticeDraw(this, v10);
}


void MainMenuBarBase__ResetShopNoticeDraw(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *mNewItemSp; // x0
  struct ShopNotice_o *shopNotice; // x8
  struct ShopNotice_o *v5; // x8
  struct ShopNotice_o *v6; // x8
  struct ShopNotice_o *v7; // x8
  struct ShopNotice_o *v8; // x8
  struct ShopNotice_o *v9; // x8
  System_Action_o *v10; // x20
  __int64 v11; // x1
  struct ShopNotice_o *v12; // x8
  struct ShopNotice_o *v13; // x8
  struct ShopNotice_o *v14; // x8
  struct ShopNotice_o *v15; // x8
  struct ShopNotice_o *v16; // x8
  struct ShopNotice_o *v17; // x8
  struct ShopNotice_o *v18; // x8
  unsigned int LimitedType_k__BackingField; // w8
  struct ShopNoticeTween_o **p_shopNoticeTween; // x20
  ShopNoticeTween_o *v21; // x21
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct ShopNotice_o *v28; // x8
  int v29; // w24
  System_Collections_Generic_List_object__o *v30; // x21
  UnityEngine_GameObject_o *v31; // x0
  System_Collections_Generic_List_object__o *v32; // x22
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  struct System_Object_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  UnityEngine_Component_o *v42; // x1
  Il2CppClass **v43; // x0
  UnityEngine_GameObject_o *v44; // x0
  UnityEngine_GameObject_o *v45; // x0
  UnityEngine_GameObject_o *v46; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  struct System_Object_array *v53; // x8
  _QWORD *v54; // x9
  __int64 v55; // x10
  UnityEngine_Component_o *v56; // x1
  Il2CppClass **v57; // x0
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  struct System_Object_array *items; // x8
  _QWORD *v65; // x9
  __int64 size; // x10
  UnityEngine_Component_o *v67; // x1
  Il2CppClass **v68; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v70; // x0
  UnityEngine_GameObject_o *v71; // x0
  struct UnityEngine_GameObject_o *mExchangeServantTimeRoot; // x1
  void *v73; // x2
  UnityEngine_GameObject_o *v74; // x0
  UnityEngine_GameObject_o *v75; // x0
  UnityEngine_GameObject_o *v76; // x0
  void *v77; // x2
  struct UnityEngine_GameObject_o *v78; // x1
  UnityEngine_GameObject_o *v79; // x0
  UnityEngine_GameObject_o *v80; // x0
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  struct System_Object_array *v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  UnityEngine_Component_o *v90; // x1
  Il2CppClass **v91; // x0
  UnityEngine_GameObject_o *v92; // x0
  UnityEngine_GameObject_o *v93; // x0
  UnityEngine_GameObject_o *v94; // x0
  UnityEngine_GameObject_o *v95; // x0
  System_String_o *v96; // x2
  System_String_o *v97; // x3
  int32_t v98; // w4
  int32_t v99; // w5
  bool v100; // w6
  bool v101; // w7
  struct System_Object_array *v102; // x8
  _QWORD *v103; // x9
  __int64 v104; // x10
  UnityEngine_Component_o *v105; // x1
  Il2CppClass **v106; // x0
  System_String_o *v107; // x2
  System_String_o *v108; // x3
  int32_t v109; // w4
  int32_t v110; // w5
  bool v111; // w6
  bool v112; // w7
  struct System_Object_array *v113; // x8
  _QWORD *v114; // x9
  __int64 v115; // x10
  UnityEngine_Component_o *v116; // x1
  Il2CppClass **v117; // x0
  System_String_o *v118; // x2
  System_String_o *v119; // x3
  int32_t v120; // w4
  int32_t v121; // w5
  bool v122; // w6
  bool v123; // w7
  struct System_Object_array *v124; // x8
  _QWORD *v125; // x9
  __int64 v126; // x10
  UnityEngine_Component_o *v127; // x1
  Il2CppClass **v128; // x0
  System_String_o *v129; // x2
  System_String_o *v130; // x3
  int32_t v131; // w4
  int32_t v132; // w5
  bool v133; // w6
  bool v134; // w7
  struct System_Object_array *v135; // x8
  _QWORD *v136; // x9
  __int64 v137; // x10
  UnityEngine_Component_o *v138; // x1
  Il2CppClass **v139; // x0
  System_String_o *v140; // x2
  System_String_o *v141; // x3
  int32_t v142; // w4
  int32_t v143; // w5
  bool v144; // w6
  bool v145; // w7
  struct System_Object_array *v146; // x8
  _QWORD *v147; // x9
  __int64 v148; // x10
  UnityEngine_Component_o *v149; // x1
  Il2CppClass **v150; // x0
  System_String_o *v151; // x2
  System_String_o *v152; // x3
  int32_t v153; // w4
  int32_t v154; // w5
  bool v155; // w6
  bool v156; // w7
  struct System_Object_array *v157; // x8
  _QWORD *v158; // x9
  __int64 v159; // x10
  UnityEngine_Component_o *v160; // x1
  Il2CppClass **v161; // x0
  System_String_o *v162; // x2
  System_String_o *v163; // x3
  int32_t v164; // w4
  int32_t v165; // w5
  bool v166; // w6
  bool v167; // w7
  struct System_Object_array *v168; // x8
  _QWORD *v169; // x9
  __int64 v170; // x10
  UnityEngine_Component_o *v171; // x1
  Il2CppClass **v172; // x0
  System_String_o *v173; // x2
  System_String_o *v174; // x3
  int32_t v175; // w4
  int32_t v176; // w5
  bool v177; // w6
  bool v178; // w7
  struct System_Object_array *v179; // x8
  _QWORD *v180; // x9
  __int64 v181; // x10
  Il2CppClass **v182; // x0
  struct ShopNoticeRemainTime_o **p_shopNoticeRemainTime; // x20
  ShopNoticeRemainTime_o *v184; // x21
  System_String_o *v185; // x2
  System_String_o *v186; // x3
  int32_t v187; // w4
  int32_t v188; // w5
  bool v189; // w6
  bool v190; // w7
  const MethodInfo *v191; // x2
  struct ShopNotice_o *v192; // x8
  UILabel_o *mPeriodLimitedTimeLb; // x20
  int64_t PeriodTimeLimit_k__BackingField; // x21
  const MethodInfo *v195; // x2
  struct ShopNotice_o *v196; // x8
  UILabel_o *mMonthlyLimitedTimeLb; // x20
  const MethodInfo *v198; // x2
  struct ShopNotice_o *v199; // x8
  UILabel_o *mExchangeServantItemLb; // x20
  struct ShopNoticeRemainTimeLabel_o **p_periodShopNoticeRemainTimeLabel; // x20
  UILabel_o *v202; // x21
  ShopNoticeRemainTimeLabel_o *v203; // x22
  System_String_o *v204; // x2
  System_String_o *v205; // x3
  int32_t v206; // w4
  int32_t v207; // w5
  bool v208; // w6
  bool v209; // w7
  struct ShopNoticeRemainTimeLabel_o **p_monthlyShopNoticeRemainTimeLabel; // x21
  UILabel_o *v211; // x22
  ShopNoticeRemainTimeLabel_o *v212; // x23
  System_String_o *v213; // x2
  System_String_o *v214; // x3
  int32_t v215; // w4
  int32_t v216; // w5
  bool v217; // w6
  bool v218; // w7
  struct ShopNoticeRemainTimeLabel_o **p_exchangeServantShopNoticeRemainTimeLabel; // x22
  UILabel_o *v220; // x23
  ShopNoticeRemainTimeLabel_o *v221; // x24
  System_String_o *v222; // x2
  System_String_o *v223; // x3
  int32_t v224; // w4
  int32_t v225; // w5
  bool v226; // w6
  bool v227; // w7
  struct ShopNotice_o *v228; // x8
  struct ShopNotice_o *v229; // x8
  struct ShopNotice_o *v230; // x8

  if ( (byte_5937DB9 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_MainMenuBarBase__ResetShopNoticeDraw_b__142_0__);
    sub_21FFC50(&ShopNoticeRemainTimeLabel_TypeInfo);
    sub_21FFC50(&ShopNoticeRemainTime_TypeInfo);
    sub_21FFC50(&ShopNoticeTween_TypeInfo);
    byte_5937DB9 = 1;
  }
  if ( !this->fields.isOpen )
    return;
  mNewItemSp = (UnityEngine_Component_o *)this->fields.mNewItemSp;
  if ( !mNewItemSp )
    goto LABEL_226;
  mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
  shopNotice = this->fields.shopNotice;
  if ( !shopNotice )
    goto LABEL_226;
  if ( !mNewItemSp )
    goto LABEL_226;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)mNewItemSp,
    shopNotice->fields._IsShowNew_k__BackingField,
    0);
  v5 = this->fields.shopNotice;
  if ( !v5 )
    goto LABEL_226;
  mNewItemSp = (UnityEngine_Component_o *)this->fields.mLimitedItemIconRoot;
  if ( !mNewItemSp )
    goto LABEL_226;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)mNewItemSp,
    v5->fields._LimitedType_k__BackingField != 0,
    0);
  mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
  if ( !mNewItemSp )
    goto LABEL_226;
  mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
  v6 = this->fields.shopNotice;
  if ( !v6 )
    goto LABEL_226;
  if ( !mNewItemSp )
    goto LABEL_226;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)mNewItemSp,
    v6->fields._LimitedType_k__BackingField == 1,
    0);
  mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
  if ( !mNewItemSp )
    goto LABEL_226;
  mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
  v7 = this->fields.shopNotice;
  if ( !v7 )
    goto LABEL_226;
  if ( !mNewItemSp )
    goto LABEL_226;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)mNewItemSp,
    v7->fields._LimitedType_k__BackingField == 2,
    0);
  mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
  if ( !mNewItemSp )
    goto LABEL_226;
  mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
  v8 = this->fields.shopNotice;
  if ( !v8 )
    goto LABEL_226;
  if ( !mNewItemSp )
    goto LABEL_226;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)mNewItemSp,
    v8->fields._LimitedType_k__BackingField == 3,
    0);
  v9 = this->fields.shopNotice;
  if ( !v9 )
    goto LABEL_226;
  if ( v9->fields._ExchangeServantEventId_k__BackingField >= 1 )
  {
    v10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_MainMenuBarBase__ResetShopNoticeDraw_b__142_0__, 0);
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v11);
    AtlasManager__LoadEventUI(v10, 1, 0);
  }
  mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
  if ( !mNewItemSp )
    goto LABEL_226;
  mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
  v12 = this->fields.shopNotice;
  if ( !v12 )
    goto LABEL_226;
  if ( !mNewItemSp )
    goto LABEL_226;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)mNewItemSp,
    v12->fields._LimitedType_k__BackingField == 4,
    0);
  mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
  if ( !mNewItemSp )
    goto LABEL_226;
  mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
  v13 = this->fields.shopNotice;
  if ( !v13 )
    goto LABEL_226;
  if ( !mNewItemSp )
    goto LABEL_226;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)mNewItemSp,
    v13->fields._LimitedType_k__BackingField == 1,
    0);
  mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
  if ( !mNewItemSp )
    goto LABEL_226;
  mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
  v14 = this->fields.shopNotice;
  if ( !v14 )
    goto LABEL_226;
  if ( !mNewItemSp )
    goto LABEL_226;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)mNewItemSp,
    v14->fields._LimitedType_k__BackingField == 2,
    0);
  v15 = this->fields.shopNotice;
  if ( !v15 )
    goto LABEL_226;
  mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantTimeRoot;
  if ( !mNewItemSp )
    goto LABEL_226;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)mNewItemSp,
    v15->fields._LimitedType_k__BackingField == 3,
    0);
  mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemLb;
  if ( !mNewItemSp )
    goto LABEL_226;
  mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
  v16 = this->fields.shopNotice;
  if ( !v16 )
    goto LABEL_226;
  if ( !mNewItemSp )
    goto LABEL_226;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)mNewItemSp,
    !v16->fields._IsIndefiniteExchangeServant_k__BackingField,
    0);
  mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonLb;
  if ( !mNewItemSp )
    goto LABEL_226;
  mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
  v17 = this->fields.shopNotice;
  if ( !v17 )
    goto LABEL_226;
  if ( !mNewItemSp )
    goto LABEL_226;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)mNewItemSp,
    v17->fields._LimitedType_k__BackingField == 4,
    0);
  v18 = this->fields.shopNotice;
  if ( !v18 )
    goto LABEL_226;
  LimitedType_k__BackingField = v18->fields._LimitedType_k__BackingField;
  if ( LimitedType_k__BackingField > 0x1E || ((1 << LimitedType_k__BackingField) & 0x55545440) == 0 )
  {
    mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeTween;
    if ( mNewItemSp )
      ShopNoticeTween__Stop((ShopNoticeTween_o *)mNewItemSp, 0);
    goto LABEL_195;
  }
  mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeTween;
  p_shopNoticeTween = &this->fields.shopNoticeTween;
  if ( !mNewItemSp )
  {
    v21 = (ShopNoticeTween_o *)sub_21FFEBC(ShopNoticeTween_TypeInfo);
    ShopNoticeTween___ctor(v21, (UnityEngine_MonoBehaviour_o *)this, 0);
    this->fields.shopNoticeTween = v21;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.shopNoticeTween,
      (int32_t)v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeTween;
    if ( !mNewItemSp )
      goto LABEL_226;
  }
  ShopNoticeTween__Stop((ShopNoticeTween_o *)mNewItemSp, 0);
  v28 = this->fields.shopNotice;
  if ( !v28 )
    goto LABEL_226;
  v29 = v28->fields._LimitedType_k__BackingField;
  v30 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  if ( v29 <= 19 )
  {
    if ( v29 <= 11 )
    {
      if ( v29 == 6 )
      {
        mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
        if ( !mNewItemSp )
          goto LABEL_226;
        mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
        if ( !v30 )
          goto LABEL_226;
        items = v30->fields._items;
        v65 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v30->fields._version;
        if ( !items )
          goto LABEL_226;
        size = v30->fields._size;
        v67 = mNewItemSp;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v30,
            (Il2CppObject *)mNewItemSp,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v65[4] + 192LL) + 112LL));
        }
        else
        {
          v68 = &items->obj.klass + size;
          v30->fields._size = size + 1;
          v68[4] = (Il2CppClass *)v67;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v68 + 4), (int32_t)v67, v58, v59, v60, v61, v62, v63);
        }
        mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
        if ( !mNewItemSp )
          goto LABEL_226;
        mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
        v102 = v30->fields._items;
        v103 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v30->fields._version;
        if ( !v102 )
          goto LABEL_226;
        v104 = v30->fields._size;
        v105 = mNewItemSp;
        if ( (unsigned int)v104 >= LODWORD(v102->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v30,
            (Il2CppObject *)mNewItemSp,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v103[4] + 192LL) + 112LL));
        }
        else
        {
          v106 = &v102->obj.klass + v104;
          v30->fields._size = v104 + 1;
          v106[4] = (Il2CppClass *)v105;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v106 + 4), (int32_t)v105, v96, v97, v98, v99, v100, v101);
        }
        v32 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GameObject__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v32,
          (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
        mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
        if ( !mNewItemSp )
          goto LABEL_226;
        mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
        if ( !v32 )
          goto LABEL_226;
        v146 = v32->fields._items;
        v147 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v32->fields._version;
        if ( !v146 )
          goto LABEL_226;
        v148 = v32->fields._size;
        v149 = mNewItemSp;
        if ( (unsigned int)v148 >= LODWORD(v146->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v32,
            (Il2CppObject *)mNewItemSp,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v147[4] + 192LL) + 112LL));
        }
        else
        {
          v150 = &v146->obj.klass + v148;
          v32->fields._size = v148 + 1;
          v150[4] = (Il2CppClass *)v149;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v150 + 4), (int32_t)v149, v140, v141, v142, v143, v144, v145);
        }
        mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
        if ( !mNewItemSp )
          goto LABEL_226;
LABEL_186:
        mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
        v179 = v32->fields._items;
        v180 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v32->fields._version;
        if ( !v179 )
          goto LABEL_226;
        method = (const MethodInfo *)mNewItemSp;
LABEL_188:
        v181 = v32->fields._size;
        if ( (unsigned int)v181 >= LODWORD(v179->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v32,
            (Il2CppObject *)method,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v180[4] + 192LL) + 112LL));
        }
        else
        {
          v182 = &v179->obj.klass + v181;
          v32->fields._size = v181 + 1;
          v182[4] = (Il2CppClass *)method;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)(v182 + 4),
            (int32_t)method,
            v173,
            v174,
            v175,
            v176,
            v177,
            v178);
        }
        goto LABEL_191;
      }
      if ( v29 != 10 )
        goto LABEL_136;
      mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
      if ( !mNewItemSp )
        goto LABEL_226;
      mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
      if ( !v30 )
        goto LABEL_226;
      v53 = v30->fields._items;
      v54 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v30->fields._version;
      if ( !v53 )
        goto LABEL_226;
      v55 = v30->fields._size;
      v56 = mNewItemSp;
      if ( (unsigned int)v55 >= LODWORD(v53->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v30,
          (Il2CppObject *)mNewItemSp,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
      }
      else
      {
        v57 = &v53->obj.klass + v55;
        v30->fields._size = v55 + 1;
        v57[4] = (Il2CppClass *)v56;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v57 + 4), (int32_t)v56, v47, v48, v49, v50, v51, v52);
      }
      mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
      if ( !mNewItemSp )
        goto LABEL_226;
      mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
      v113 = v30->fields._items;
      v114 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v30->fields._version;
      if ( !v113 )
        goto LABEL_226;
      v115 = v30->fields._size;
      v116 = mNewItemSp;
      if ( (unsigned int)v115 >= LODWORD(v113->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v30,
          (Il2CppObject *)mNewItemSp,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v114[4] + 192LL) + 112LL));
      }
      else
      {
        v117 = &v113->obj.klass + v115;
        v30->fields._size = v115 + 1;
        v117[4] = (Il2CppClass *)v116;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v117 + 4), (int32_t)v116, v107, v108, v109, v110, v111, v112);
      }
      v32 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GameObject__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v32,
        (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
      mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
      if ( !mNewItemSp )
        goto LABEL_226;
    }
    else
    {
      if ( v29 != 12 )
      {
        if ( v29 == 14 )
        {
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_226;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          if ( !v30 )
            goto LABEL_226;
          sub_1FEBF38(v30, mNewItemSp, Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_226;
          gameObject = UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          sub_1FEBF38(v30, gameObject, Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_226;
          v70 = UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          sub_1FEBF38(v30, v70, Method_System_Collections_Generic_List_GameObject__Add__);
          v32 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v32,
            (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_226;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          if ( !v32 )
            goto LABEL_226;
          sub_1FEBF38(v32, mNewItemSp, Method_System_Collections_Generic_List_GameObject__Add__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_226;
          v71 = UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          sub_1FEBF38(v32, v71, Method_System_Collections_Generic_List_GameObject__Add__);
          mExchangeServantTimeRoot = this->fields.mExchangeServantTimeRoot;
          v73 = Method_System_Collections_Generic_List_GameObject__Add__;
          goto LABEL_135;
        }
        if ( v29 != 18 )
          goto LABEL_136;
        mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
        if ( !mNewItemSp )
          goto LABEL_226;
        mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
        if ( !v30 )
          goto LABEL_226;
        v39 = v30->fields._items;
        v40 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v30->fields._version;
        if ( !v39 )
          goto LABEL_226;
        v41 = v30->fields._size;
        v42 = mNewItemSp;
        if ( (unsigned int)v41 >= LODWORD(v39->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v30,
            (Il2CppObject *)mNewItemSp,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
        }
        else
        {
          v43 = &v39->obj.klass + v41;
          v30->fields._size = v41 + 1;
          v43[4] = (Il2CppClass *)v42;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v43 + 4), (int32_t)v42, v33, v34, v35, v36, v37, v38);
        }
        mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
        if ( !mNewItemSp )
          goto LABEL_226;
        mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
        v124 = v30->fields._items;
        v125 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v30->fields._version;
        if ( !v124 )
          goto LABEL_226;
        v126 = v30->fields._size;
        v127 = mNewItemSp;
        if ( (unsigned int)v126 >= LODWORD(v124->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v30,
            (Il2CppObject *)mNewItemSp,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v125[4] + 192LL) + 112LL));
        }
        else
        {
          v128 = &v124->obj.klass + v126;
          v30->fields._size = v126 + 1;
          v128[4] = (Il2CppClass *)v127;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v128 + 4), (int32_t)v127, v118, v119, v120, v121, v122, v123);
        }
        v32 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GameObject__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v32,
          (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
        mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
        if ( !mNewItemSp )
          goto LABEL_226;
        mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
        if ( !v32 )
          goto LABEL_226;
        v157 = v32->fields._items;
        v158 = Method_System_Collections_Generic_List_GameObject__Add__;
        ++v32->fields._version;
        if ( !v157 )
          goto LABEL_226;
        v159 = v32->fields._size;
        v160 = mNewItemSp;
        if ( (unsigned int)v159 >= LODWORD(v157->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v32,
            (Il2CppObject *)mNewItemSp,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v158[4] + 192LL) + 112LL));
        }
        else
        {
          v161 = &v157->obj.klass + v159;
          v32->fields._size = v159 + 1;
          v161[4] = (Il2CppClass *)v160;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v161 + 4), (int32_t)v160, v151, v152, v153, v154, v155, v156);
        }
        mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonLb;
        if ( !mNewItemSp )
          goto LABEL_226;
        goto LABEL_186;
      }
      mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
      if ( !mNewItemSp )
        goto LABEL_226;
      mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
      if ( !v30 )
        goto LABEL_226;
      v87 = v30->fields._items;
      v88 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v30->fields._version;
      if ( !v87 )
        goto LABEL_226;
      v89 = v30->fields._size;
      v90 = mNewItemSp;
      if ( (unsigned int)v89 >= LODWORD(v87->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v30,
          (Il2CppObject *)mNewItemSp,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
      }
      else
      {
        v91 = &v87->obj.klass + v89;
        v30->fields._size = v89 + 1;
        v91[4] = (Il2CppClass *)v90;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v91 + 4), (int32_t)v90, v81, v82, v83, v84, v85, v86);
      }
      mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
      if ( !mNewItemSp )
        goto LABEL_226;
      mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
      v135 = v30->fields._items;
      v136 = Method_System_Collections_Generic_List_GameObject__Add__;
      ++v30->fields._version;
      if ( !v135 )
        goto LABEL_226;
      v137 = v30->fields._size;
      v138 = mNewItemSp;
      if ( (unsigned int)v137 >= LODWORD(v135->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v30,
          (Il2CppObject *)mNewItemSp,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v136[4] + 192LL) + 112LL));
      }
      else
      {
        v139 = &v135->obj.klass + v137;
        v30->fields._size = v137 + 1;
        v139[4] = (Il2CppClass *)v138;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v139 + 4), (int32_t)v138, v129, v130, v131, v132, v133, v134);
      }
      v32 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GameObject__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v32,
        (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
      mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
      if ( !mNewItemSp )
        goto LABEL_226;
    }
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
    if ( !v32 )
      goto LABEL_226;
    v168 = v32->fields._items;
    v169 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++v32->fields._version;
    if ( !v168 )
      goto LABEL_226;
    v170 = v32->fields._size;
    v171 = mNewItemSp;
    if ( (unsigned int)v170 >= LODWORD(v168->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v32,
        (Il2CppObject *)mNewItemSp,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v169[4] + 192LL) + 112LL));
    }
    else
    {
      v172 = &v168->obj.klass + v170;
      v32->fields._size = v170 + 1;
      v172[4] = (Il2CppClass *)v171;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v172 + 4), (int32_t)v171, v162, v163, v164, v165, v166, v167);
    }
    v179 = v32->fields._items;
    method = (const MethodInfo *)this->fields.mExchangeServantTimeRoot;
    v180 = Method_System_Collections_Generic_List_GameObject__Add__;
    ++v32->fields._version;
    if ( !v179 )
      goto LABEL_226;
    goto LABEL_188;
  }
  if ( v29 > 25 )
  {
    switch ( v29 )
    {
      case 26:
        mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
        if ( !mNewItemSp )
          goto LABEL_226;
        mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
        if ( !v30 )
          goto LABEL_226;
        sub_1FEBF38(v30, mNewItemSp, Method_System_Collections_Generic_List_GameObject__Add__);
        mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
        if ( !mNewItemSp )
          goto LABEL_226;
        v93 = UnityEngine_Component__get_gameObject(mNewItemSp, 0);
        sub_1FEBF38(v30, v93, Method_System_Collections_Generic_List_GameObject__Add__);
        mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
        if ( !mNewItemSp )
          goto LABEL_226;
        v94 = UnityEngine_Component__get_gameObject(mNewItemSp, 0);
        sub_1FEBF38(v30, v94, Method_System_Collections_Generic_List_GameObject__Add__);
        v32 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GameObject__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v32,
          (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
        mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
        if ( !mNewItemSp )
          goto LABEL_226;
        break;
      case 28:
        mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
        if ( !mNewItemSp )
          goto LABEL_226;
        mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
        if ( !v30 )
          goto LABEL_226;
        sub_1FEBF38(v30, mNewItemSp, Method_System_Collections_Generic_List_GameObject__Add__);
        mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
        if ( !mNewItemSp )
          goto LABEL_226;
        v79 = UnityEngine_Component__get_gameObject(mNewItemSp, 0);
        sub_1FEBF38(v30, v79, Method_System_Collections_Generic_List_GameObject__Add__);
        mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
        if ( !mNewItemSp )
          goto LABEL_226;
        v80 = UnityEngine_Component__get_gameObject(mNewItemSp, 0);
        sub_1FEBF38(v30, v80, Method_System_Collections_Generic_List_GameObject__Add__);
        v32 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GameObject__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v32,
          (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
        mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
        if ( !mNewItemSp )
          goto LABEL_226;
        break;
      case 30:
        mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
        if ( !mNewItemSp )
          goto LABEL_226;
        mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
        if ( !v30 )
          goto LABEL_226;
        sub_1FEBF38(v30, mNewItemSp, Method_System_Collections_Generic_List_GameObject__Add__);
        mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
        if ( !mNewItemSp )
          goto LABEL_226;
        v44 = UnityEngine_Component__get_gameObject(mNewItemSp, 0);
        sub_1FEBF38(v30, v44, Method_System_Collections_Generic_List_GameObject__Add__);
        mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
        if ( !mNewItemSp )
          goto LABEL_226;
        v45 = UnityEngine_Component__get_gameObject(mNewItemSp, 0);
        sub_1FEBF38(v30, v45, Method_System_Collections_Generic_List_GameObject__Add__);
        mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
        if ( !mNewItemSp )
          goto LABEL_226;
        v46 = UnityEngine_Component__get_gameObject(mNewItemSp, 0);
        sub_1FEBF38(v30, v46, Method_System_Collections_Generic_List_GameObject__Add__);
        v32 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GameObject__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v32,
          (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
        mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
        if ( !mNewItemSp )
          goto LABEL_226;
        mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
        if ( !v32 )
          goto LABEL_226;
        sub_1FEBF38(v32, mNewItemSp, Method_System_Collections_Generic_List_GameObject__Add__);
        mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
        if ( !mNewItemSp )
          goto LABEL_226;
        mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
LABEL_131:
        sub_1FEBF38(v32, mNewItemSp, Method_System_Collections_Generic_List_GameObject__Add__);
        v78 = this->fields.mExchangeServantTimeRoot;
        goto LABEL_132;
      default:
        goto LABEL_136;
    }
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
    if ( !v32 )
      goto LABEL_226;
    goto LABEL_131;
  }
  switch ( v29 )
  {
    case 20:
      mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
      if ( !mNewItemSp )
        goto LABEL_226;
      mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
      if ( !v30 )
        goto LABEL_226;
      sub_1FEBF38(v30, mNewItemSp, Method_System_Collections_Generic_List_GameObject__Add__);
      mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
      if ( !mNewItemSp )
        goto LABEL_226;
      v92 = UnityEngine_Component__get_gameObject(mNewItemSp, 0);
      sub_1FEBF38(v30, v92, Method_System_Collections_Generic_List_GameObject__Add__);
      v32 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GameObject__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v32,
        (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
      mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
      if ( !mNewItemSp )
        goto LABEL_226;
      mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
      if ( !v32 )
        goto LABEL_226;
      goto LABEL_124;
    case 22:
      mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
      if ( !mNewItemSp )
        goto LABEL_226;
      mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
      if ( !v30 )
        goto LABEL_226;
      sub_1FEBF38(v30, mNewItemSp, Method_System_Collections_Generic_List_GameObject__Add__);
      mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
      if ( !mNewItemSp )
        goto LABEL_226;
      v74 = UnityEngine_Component__get_gameObject(mNewItemSp, 0);
      sub_1FEBF38(v30, v74, Method_System_Collections_Generic_List_GameObject__Add__);
      mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
      if ( !mNewItemSp )
        goto LABEL_226;
      v75 = UnityEngine_Component__get_gameObject(mNewItemSp, 0);
      sub_1FEBF38(v30, v75, Method_System_Collections_Generic_List_GameObject__Add__);
      v32 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GameObject__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v32,
        (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
      mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
      if ( !mNewItemSp )
        goto LABEL_226;
      mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
      if ( !v32 )
        goto LABEL_226;
      sub_1FEBF38(v32, mNewItemSp, Method_System_Collections_Generic_List_GameObject__Add__);
      mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
      if ( !mNewItemSp )
        goto LABEL_226;
      v76 = UnityEngine_Component__get_gameObject(mNewItemSp, 0);
      v77 = Method_System_Collections_Generic_List_GameObject__Add__;
      v78 = v76;
      goto LABEL_133;
    case 24:
      mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
      if ( !mNewItemSp )
        goto LABEL_226;
      mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
      if ( !v30 )
        goto LABEL_226;
      sub_1FEBF38(v30, mNewItemSp, Method_System_Collections_Generic_List_GameObject__Add__);
      mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
      if ( !mNewItemSp )
        goto LABEL_226;
      v31 = UnityEngine_Component__get_gameObject(mNewItemSp, 0);
      sub_1FEBF38(v30, v31, Method_System_Collections_Generic_List_GameObject__Add__);
      v32 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GameObject__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v32,
        (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
      mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantTimeRoot;
      if ( !mNewItemSp )
        goto LABEL_226;
      mNewItemSp = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                (UnityEngine_GameObject_o *)mNewItemSp,
                                                0);
      if ( !v32 )
        goto LABEL_226;
LABEL_124:
      v78 = (struct UnityEngine_GameObject_o *)mNewItemSp;
LABEL_132:
      v77 = Method_System_Collections_Generic_List_GameObject__Add__;
LABEL_133:
      sub_1FEBF38(v32, v78, v77);
      mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonLb;
      if ( !mNewItemSp )
        goto LABEL_226;
      v95 = UnityEngine_Component__get_gameObject(mNewItemSp, 0);
      v73 = Method_System_Collections_Generic_List_GameObject__Add__;
      mExchangeServantTimeRoot = v95;
LABEL_135:
      sub_1FEBF38(v32, mExchangeServantTimeRoot, v73);
      goto LABEL_191;
  }
LABEL_136:
  v32 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v32,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
LABEL_191:
  mNewItemSp = (UnityEngine_Component_o *)*p_shopNoticeTween;
  if ( !*p_shopNoticeTween )
    goto LABEL_226;
  ShopNoticeTween__AddTargets(
    (ShopNoticeTween_o *)mNewItemSp,
    this->fields.mLimitedItemIconRoot,
    (System_Collections_Generic_List_GameObject__o *)v30,
    (System_Collections_Generic_List_GameObject__o *)v32,
    0);
  mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeTween;
  if ( !mNewItemSp )
    goto LABEL_226;
  ShopNoticeTween__SetActiveSwitchingTargets((ShopNoticeTween_o *)mNewItemSp, 0, 0);
  mNewItemSp = (UnityEngine_Component_o *)*p_shopNoticeTween;
  if ( !*p_shopNoticeTween )
    goto LABEL_226;
  ShopNoticeTween__Start((ShopNoticeTween_o *)mNewItemSp, 0);
LABEL_195:
  method = (const MethodInfo *)this->fields.shopNotice;
  if ( !method )
    goto LABEL_226;
  if ( HIDWORD(method->invoker_method) )
  {
    mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeRemainTime;
    p_shopNoticeRemainTime = &this->fields.shopNoticeRemainTime;
    if ( !mNewItemSp )
    {
      v184 = (ShopNoticeRemainTime_o *)sub_21FFEBC(ShopNoticeRemainTime_TypeInfo);
      ShopNoticeRemainTime___ctor(v184, (UnityEngine_MonoBehaviour_o *)this, 0);
      this->fields.shopNoticeRemainTime = v184;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.shopNoticeRemainTime,
        (int32_t)v184,
        v185,
        v186,
        v187,
        v188,
        v189,
        v190);
      mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeRemainTime;
      if ( !mNewItemSp )
        goto LABEL_226;
      method = (const MethodInfo *)this->fields.shopNotice;
    }
    ShopNoticeRemainTime__SetShopNotice((ShopNoticeRemainTime_o *)mNewItemSp, (ShopNotice_o *)method, 0);
    mNewItemSp = (UnityEngine_Component_o *)*p_shopNoticeRemainTime;
    if ( *p_shopNoticeRemainTime )
    {
      ShopNoticeRemainTime__Start((ShopNoticeRemainTime_o *)mNewItemSp, 0);
      v192 = this->fields.shopNotice;
      if ( v192 )
      {
        mPeriodLimitedTimeLb = this->fields.mPeriodLimitedTimeLb;
        PeriodTimeLimit_k__BackingField = v192->fields._PeriodTimeLimit_k__BackingField;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
        mNewItemSp = (UnityEngine_Component_o *)LocalizationManager__GetRestTime5(
                                                  PeriodTimeLimit_k__BackingField,
                                                  -1,
                                                  v191);
        if ( mPeriodLimitedTimeLb )
        {
          UILabel__set_text(mPeriodLimitedTimeLb, (System_String_o *)mNewItemSp, 0);
          v196 = this->fields.shopNotice;
          if ( v196 )
          {
            mMonthlyLimitedTimeLb = this->fields.mMonthlyLimitedTimeLb;
            mNewItemSp = (UnityEngine_Component_o *)LocalizationManager__GetRestTime5(
                                                      v196->fields._MonthlyTimeLimit_k__BackingField,
                                                      -1,
                                                      v195);
            if ( mMonthlyLimitedTimeLb )
            {
              UILabel__set_text(mMonthlyLimitedTimeLb, (System_String_o *)mNewItemSp, 0);
              v199 = this->fields.shopNotice;
              if ( v199 )
              {
                mExchangeServantItemLb = this->fields.mExchangeServantItemLb;
                mNewItemSp = (UnityEngine_Component_o *)LocalizationManager__GetRestTime5(
                                                          v199->fields._ExchangeServantTimeLimit_k__BackingField,
                                                          -1,
                                                          v198);
                if ( mExchangeServantItemLb )
                {
                  UILabel__set_text(mExchangeServantItemLb, (System_String_o *)mNewItemSp, 0);
                  p_periodShopNoticeRemainTimeLabel = &this->fields.periodShopNoticeRemainTimeLabel;
                  if ( !this->fields.periodShopNoticeRemainTimeLabel )
                  {
                    v202 = this->fields.mPeriodLimitedTimeLb;
                    v203 = (ShopNoticeRemainTimeLabel_o *)sub_21FFEBC(ShopNoticeRemainTimeLabel_TypeInfo);
                    ShopNoticeRemainTimeLabel___ctor(v203, v202, (UnityEngine_MonoBehaviour_o *)this, 0);
                    this->fields.periodShopNoticeRemainTimeLabel = v203;
                    sub_21FFBF4(
                      (MissionNaviTransitionBoardItem_o *)&this->fields.periodShopNoticeRemainTimeLabel,
                      (int32_t)v203,
                      v204,
                      v205,
                      v206,
                      v207,
                      v208,
                      v209);
                  }
                  p_monthlyShopNoticeRemainTimeLabel = &this->fields.monthlyShopNoticeRemainTimeLabel;
                  if ( !this->fields.monthlyShopNoticeRemainTimeLabel )
                  {
                    v211 = this->fields.mMonthlyLimitedTimeLb;
                    v212 = (ShopNoticeRemainTimeLabel_o *)sub_21FFEBC(ShopNoticeRemainTimeLabel_TypeInfo);
                    ShopNoticeRemainTimeLabel___ctor(v212, v211, (UnityEngine_MonoBehaviour_o *)this, 0);
                    this->fields.monthlyShopNoticeRemainTimeLabel = v212;
                    sub_21FFBF4(
                      (MissionNaviTransitionBoardItem_o *)&this->fields.monthlyShopNoticeRemainTimeLabel,
                      (int32_t)v212,
                      v213,
                      v214,
                      v215,
                      v216,
                      v217,
                      v218);
                  }
                  p_exchangeServantShopNoticeRemainTimeLabel = &this->fields.exchangeServantShopNoticeRemainTimeLabel;
                  if ( !this->fields.exchangeServantShopNoticeRemainTimeLabel )
                  {
                    v220 = this->fields.mExchangeServantItemLb;
                    v221 = (ShopNoticeRemainTimeLabel_o *)sub_21FFEBC(ShopNoticeRemainTimeLabel_TypeInfo);
                    ShopNoticeRemainTimeLabel___ctor(v221, v220, (UnityEngine_MonoBehaviour_o *)this, 0);
                    this->fields.exchangeServantShopNoticeRemainTimeLabel = v221;
                    sub_21FFBF4(
                      (MissionNaviTransitionBoardItem_o *)&this->fields.exchangeServantShopNoticeRemainTimeLabel,
                      (int32_t)v221,
                      v222,
                      v223,
                      v224,
                      v225,
                      v226,
                      v227);
                  }
                  v228 = this->fields.shopNotice;
                  if ( v228 )
                  {
                    mNewItemSp = (UnityEngine_Component_o *)this->fields.periodShopNoticeRemainTimeLabel;
                    if ( mNewItemSp )
                    {
                      ShopNoticeRemainTimeLabel__SetTimeLimit(
                        (ShopNoticeRemainTimeLabel_o *)mNewItemSp,
                        v228->fields._PeriodTimeLimit_k__BackingField,
                        1,
                        0);
                      mNewItemSp = (UnityEngine_Component_o *)*p_periodShopNoticeRemainTimeLabel;
                      if ( *p_periodShopNoticeRemainTimeLabel )
                      {
                        ShopNoticeRemainTimeLabel__Start((ShopNoticeRemainTimeLabel_o *)mNewItemSp, 0);
                        v229 = this->fields.shopNotice;
                        if ( v229 )
                        {
                          mNewItemSp = (UnityEngine_Component_o *)this->fields.monthlyShopNoticeRemainTimeLabel;
                          if ( mNewItemSp )
                          {
                            ShopNoticeRemainTimeLabel__SetTimeLimit(
                              (ShopNoticeRemainTimeLabel_o *)mNewItemSp,
                              v229->fields._MonthlyTimeLimit_k__BackingField,
                              1,
                              0);
                            mNewItemSp = (UnityEngine_Component_o *)*p_monthlyShopNoticeRemainTimeLabel;
                            if ( *p_monthlyShopNoticeRemainTimeLabel )
                            {
                              ShopNoticeRemainTimeLabel__Start((ShopNoticeRemainTimeLabel_o *)mNewItemSp, 0);
                              v230 = this->fields.shopNotice;
                              if ( v230 )
                              {
                                mNewItemSp = (UnityEngine_Component_o *)this->fields.exchangeServantShopNoticeRemainTimeLabel;
                                if ( mNewItemSp )
                                {
                                  ShopNoticeRemainTimeLabel__SetTimeLimit(
                                    (ShopNoticeRemainTimeLabel_o *)mNewItemSp,
                                    v230->fields._ExchangeServantTimeLimit_k__BackingField,
                                    1,
                                    0);
                                  mNewItemSp = (UnityEngine_Component_o *)*p_exchangeServantShopNoticeRemainTimeLabel;
                                  if ( *p_exchangeServantShopNoticeRemainTimeLabel )
                                  {
                                    ShopNoticeRemainTimeLabel__Start((ShopNoticeRemainTimeLabel_o *)mNewItemSp, 0);
                                    return;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_226:
    sub_21FFECC(mNewItemSp, method);
  }
}


void MainMenuBarBase__ResetSummonNoticeDraw(MainMenuBarBase_o *this, const MethodInfo *method)
{
  _BOOL4 isOpen; // w8
  GachaMaster_o *Master_object; // x0
  Il2CppObject *summonCampainObject; // x1
  System_Collections_Generic_List_object__o *ValidGachaEntityList; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v7; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *current; // x27
  int32_t klass; // w21
  struct System_Collections_Generic_Dictionary_GameObject__int__o *campaignNoticeMap; // x0
  __int64 v13; // x1
  Il2CppObject *v14; // x1
  __int64 v15; // x1
  System_String_o *v16; // x21
  __int64 v17; // x1
  Il2CppObject *v18; // x1
  UnityEngine_GameObject_o *summonCampaignRootObject; // x0
  Il2CppObject *campaignNoticePrefab; // x22
  __int64 v21; // x1
  UnityEngine_Transform_o *transform; // x23
  Il2CppObject *v23; // x0
  __int64 v24; // x1
  CampaignNoticeObject_o *v25; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v27; // x1
  int32_t v28; // w23
  System_Action_int__o *v29; // x24
  __int64 v30; // x1
  UISprite_o *campaignSprite; // x23
  System_Collections_Generic_List_object__o *summonCampaignObjects; // x21
  Il2CppObject *v33; // x0
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  Il2CppObject *v40; // x1
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x0
  int32_t v45; // w21
  __int64 v46; // x1
  struct System_Collections_Generic_Dictionary_GameObject__int__o *v47; // x0
  const MethodInfo *v48; // x1
  UILabel_o *summonCampainLabel1; // x20
  UILabel_o *summonCampainLabel2; // x20
  const MethodInfo *v51; // x1
  UILabel_o *summonCampainNumLabel; // x20
  int v53; // w23
  int v54; // w22
  __int64 v55; // x1
  UISprite_o *oneTimeFreeSprite; // x20
  struct ShopNoticeTween_o **p_summonNoticeTween; // x20
  ShopNoticeTween_o *v58; // x21
  System_String_o *v59; // x2
  System_String_o *v60; // x3
  int32_t v61; // w4
  int32_t v62; // w5
  bool v63; // w6
  bool v64; // w7
  struct System_Collections_Generic_List_GameObject__o *v65; // x8
  System_Collections_Generic_List_object__o *v66; // x21
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  struct System_Object_array *v73; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10
  Il2CppClass **v76; // x0
  struct System_Object_array *v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  Il2CppClass **v80; // x0
  char v81; // [xsp+Ch] [xbp-C4h]
  char v82; // [xsp+10h] [xbp-C0h]
  int v83; // [xsp+14h] [xbp-BCh] BYREF
  System_Collections_Generic_List_Enumerator_object__o v84; // [xsp+18h] [xbp-B8h] BYREF
  int32_t maxNum; // [xsp+34h] [xbp-9Ch] BYREF
  int64_t endedAt; // [xsp+38h] [xbp-98h] BYREF
  Il2CppObject *entity; // [xsp+40h] [xbp-90h] BYREF
  int32_t remainNum; // [xsp+4Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v89; // [xsp+50h] [xbp-80h] BYREF
  int v90; // [xsp+6Ch] [xbp-64h] BYREF

  if ( (byte_5937DBB & 1) == 0 )
  {
    sub_21FFC50(&System_Action_int__TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_GachaDetailMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_GachaMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_GameObject__int__set_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GachaEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_MainMenuBarBase_OnClickSummonCampaign__);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_CampaignNoticeObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&ShopNoticeTween_TypeInfo);
    sub_21FFC50(&UserGachaMaster_TypeInfo);
    sub_21FFC50(&StringLiteral_6826/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG1"*/);
    sub_21FFC50(&StringLiteral_21179/*"icon_summoncampaign_80557"*/);
    sub_21FFC50(&StringLiteral_21180/*"icon_summoncampaign_{0}"*/);
    sub_21FFC50(&StringLiteral_6827/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG2"*/);
    byte_5937DBB = 1;
  }
  isOpen = this->fields.isOpen;
  v90 = 0;
  memset(&v89, 0, sizeof(v89));
  remainNum = 0;
  endedAt = 0;
  entity = 0;
  maxNum = 0;
  if ( isOpen )
  {
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    Master_object = (GachaMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GachaMaster___);
    if ( !Master_object )
      goto LABEL_90;
    ValidGachaEntityList = (System_Collections_Generic_List_object__o *)GachaMaster__GetValidGachaEntityList(
                                                                          Master_object,
                                                                          0);
    Master_object = (GachaMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_GachaDetailMaster___);
    v90 = 0;
    if ( !ValidGachaEntityList )
      goto LABEL_90;
    v7 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v84,
      ValidGachaEntityList,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GachaEntity__GetEnumerator__);
    v81 = 0;
    v82 = 0;
    v89 = v84;
    v84.fields._list = 0;
    *(_QWORD *)&v84.fields._index = &v89;
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v89,
             (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GachaEntity__MoveNext__);
      if ( !v8 )
        break;
      current = v89.fields._current;
      if ( !v89.fields._current )
        sub_21FFECC(v8, v9);
      if ( LODWORD(v89.fields._current[3].klass) == 3 )
      {
        klass = (int32_t)v89.fields._current[1].klass;
        if ( !*(&UserGachaMaster_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo, v9);
        v8 = UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(klass, &remainNum, &maxNum, 0);
        if ( v8 )
        {
          campaignNoticeMap = this->fields.campaignNoticeMap;
          v90 += remainNum;
          if ( !campaignNoticeMap )
            sub_21FFECC(0, v9);
          System_Collections_Generic_Dictionary_object__int___set_Item(
            (System_Collections_Generic_Dictionary_object__int__o *)campaignNoticeMap,
            (Il2CppObject *)this->fields.summonCampainObject,
            (int32_t)current[1].klass,
            (const MethodInfo_3FC08E0 *)Method_System_Collections_Generic_Dictionary_GameObject__int__set_Item__);
          v82 = 1;
        }
      }
      if ( !v7 )
        sub_21FFECC(v8, v9);
      if ( DataMasterBase_object__object__int___TryGetEntity(
             v7,
             &entity,
             (int32_t)current[1].klass,
             (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int__TryGetEntity__) )
      {
        if ( !entity )
          sub_21FFECC(0, v13);
        if ( GachaDetailEntity__IsPrivilegeSummon((GachaDetailEntity_o *)entity, &endedAt, 0) )
        {
          v83 = (int)current[1].klass;
          v14 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v83);
          v16 = System_String__Format((System_String_o *)StringLiteral_21180/*"icon_summoncampaign_{0}"*/, v14, 0);
          if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v15);
          if ( !AtlasManager__IsExistBanner(v16, 0) )
          {
            v83 = 501;
            v18 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v83);
            v16 = System_String__Format((System_String_o *)StringLiteral_21180/*"icon_summoncampaign_{0}"*/, v18, 0);
          }
          summonCampaignRootObject = this->fields.summonCampaignRootObject;
          if ( !summonCampaignRootObject )
            sub_21FFECC(0, v17);
          campaignNoticePrefab = (Il2CppObject *)this->fields.campaignNoticePrefab;
          transform = UnityEngine_GameObject__get_transform(summonCampaignRootObject, 0);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v21);
          v23 = UnityEngine_Object__Instantiate_object__59506996(
                  campaignNoticePrefab,
                  transform,
                  (const MethodInfo_38C0134 *)Method_UnityEngine_Object_Instantiate_CampaignNoticeObject___);
          v25 = (CampaignNoticeObject_o *)v23;
          if ( !v23 )
            sub_21FFECC(0, v24);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v23, 0);
          if ( !gameObject )
            sub_21FFECC(0, v27);
          UnityEngine_GameObject__SetActive(gameObject, 1, 0);
          v28 = (int32_t)current[1].klass;
          v29 = (System_Action_int__o *)sub_21FFEBC(System_Action_int__TypeInfo);
          System_Action_int____ctor(
            v29,
            (Il2CppObject *)this,
            (intptr_t)Method_MainMenuBarBase_OnClickSummonCampaign__,
            0);
          CampaignNoticeObject__Initialize(v25, v28, v29, 0);
          CampaignNoticeObject__StartUpdateLimitTime(v25, endedAt, (UnityEngine_MonoBehaviour_o *)this, 0);
          campaignSprite = v25->fields.campaignSprite;
          if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v30);
          AtlasManager__SetBanner(campaignSprite, v16, 0);
          summonCampaignObjects = (System_Collections_Generic_List_object__o *)this->fields.summonCampaignObjects;
          v33 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v25, 0);
          v40 = v33;
          if ( !summonCampaignObjects
            || (items = summonCampaignObjects->fields._items,
                v42 = Method_System_Collections_Generic_List_GameObject__Add__,
                ++summonCampaignObjects->fields._version,
                !items) )
          {
            sub_21FFECC(v33, v33);
          }
          size = summonCampaignObjects->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              summonCampaignObjects,
              v33,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
          }
          else
          {
            v44 = &items->obj.klass + size;
            summonCampaignObjects->fields._size = size + 1;
            v44[4] = (Il2CppClass *)v40;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v44 + 4), (int32_t)v40, v34, v35, v36, v37, v38, v39);
          }
        }
      }
      v45 = (int32_t)current[1].klass;
      if ( !*(&UserGachaMaster_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo, v13);
      if ( UserGachaMaster__IsOneTimeFreeCampaignActive(v45, 0) )
      {
        v47 = this->fields.campaignNoticeMap;
        if ( !v47 )
          sub_21FFECC(0, v46);
        v81 = 1;
        System_Collections_Generic_Dictionary_object__int___set_Item(
          (System_Collections_Generic_Dictionary_object__int__o *)v47,
          (Il2CppObject *)this->fields.summonOneTimeFreeObject,
          (int32_t)current[1].klass,
          (const MethodInfo_3FC08E0 *)Method_System_Collections_Generic_Dictionary_GameObject__int__set_Item__);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v89,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GachaEntity__Dispose__);
    if ( (v82 & 1) != 0 )
    {
      Master_object = (GachaMaster_o *)this->fields.summonCampainObject;
      if ( !Master_object )
        goto LABEL_90;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
      summonCampainLabel1 = this->fields.summonCampainLabel1;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v48);
      Master_object = (GachaMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6826/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG1"*/, v48);
      if ( !summonCampainLabel1 )
        goto LABEL_90;
      UILabel__set_text(summonCampainLabel1, (System_String_o *)Master_object, 0);
      summonCampainLabel2 = this->fields.summonCampainLabel2;
      Master_object = (GachaMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6827/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG2"*/, v51);
      if ( !summonCampainLabel2 )
        goto LABEL_90;
      UILabel__set_text(summonCampainLabel2, (System_String_o *)Master_object, 0);
      summonCampainNumLabel = this->fields.summonCampainNumLabel;
      Master_object = (GachaMaster_o *)System_Int32__ToString((int32_t)&v90, 0);
      if ( !summonCampainNumLabel )
        goto LABEL_90;
      UILabel__set_text(summonCampainNumLabel, (System_String_o *)Master_object, 0);
      v53 = 1;
      if ( (v81 & 1) == 0 )
      {
        v54 = 0;
        goto LABEL_65;
      }
    }
    else
    {
      v53 = 0;
      v54 = 0;
      if ( (v81 & 1) == 0 )
        goto LABEL_65;
    }
    Master_object = (GachaMaster_o *)this->fields.summonOneTimeFreeObject;
    if ( !Master_object )
      goto LABEL_90;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
    oneTimeFreeSprite = this->fields.oneTimeFreeSprite;
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v55);
    AtlasManager__SetBanner(oneTimeFreeSprite, (System_String_o *)StringLiteral_21179/*"icon_summoncampaign_80557"*/, 0);
    v54 = 1;
LABEL_65:
    Master_object = (GachaMaster_o *)this->fields.summonNoticeTween;
    p_summonNoticeTween = &this->fields.summonNoticeTween;
    if ( Master_object
      || (v58 = (ShopNoticeTween_o *)sub_21FFEBC(ShopNoticeTween_TypeInfo),
          ShopNoticeTween___ctor(v58, (UnityEngine_MonoBehaviour_o *)this, 0),
          this->fields.summonNoticeTween = v58,
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&this->fields.summonNoticeTween,
            (int32_t)v58,
            v59,
            v60,
            v61,
            v62,
            v63,
            v64),
          (Master_object = (GachaMaster_o *)this->fields.summonNoticeTween) != 0) )
    {
      ShopNoticeTween__Stop((ShopNoticeTween_o *)Master_object, 0);
      v65 = this->fields.summonCampaignObjects;
      if ( v65 )
      {
        if ( v53 + v54 + v65->fields._size < 2 )
          return;
        v66 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_GameObject__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v66,
          (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_GameObject___ctor__);
        if ( v53 )
        {
          if ( !v66 )
            goto LABEL_90;
          v73 = v66->fields._items;
          summonCampainObject = (Il2CppObject *)this->fields.summonCampainObject;
          v74 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v66->fields._version;
          if ( !v73 )
            goto LABEL_90;
          v75 = v66->fields._size;
          if ( (unsigned int)v75 >= LODWORD(v73->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v66,
              summonCampainObject,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
          }
          else
          {
            v76 = &v73->obj.klass + v75;
            v66->fields._size = v75 + 1;
            v76[4] = (Il2CppClass *)summonCampainObject;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)(v76 + 4),
              (int32_t)summonCampainObject,
              v67,
              v68,
              v69,
              v70,
              v71,
              v72);
          }
        }
        summonCampainObject = (Il2CppObject *)this->fields.summonCampaignObjects;
        if ( !summonCampainObject )
          goto LABEL_90;
        if ( SLODWORD(summonCampainObject[1].monitor) >= 1 )
        {
          if ( !v66 )
            goto LABEL_90;
          System_Collections_Generic_List_object___AddRange(
            v66,
            (System_Collections_Generic_IEnumerable_T__o *)summonCampainObject,
            (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_GameObject__AddRange__);
        }
        if ( v54 )
        {
          if ( !v66 )
            goto LABEL_90;
          v77 = v66->fields._items;
          summonCampainObject = (Il2CppObject *)this->fields.summonOneTimeFreeObject;
          v78 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v66->fields._version;
          if ( !v77 )
            goto LABEL_90;
          v79 = v66->fields._size;
          if ( (unsigned int)v79 >= LODWORD(v77->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v66,
              summonCampainObject,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
          }
          else
          {
            v80 = &v77->obj.klass + v79;
            v66->fields._size = v79 + 1;
            v80[4] = (Il2CppClass *)summonCampainObject;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)(v80 + 4),
              (int32_t)summonCampainObject,
              v67,
              v68,
              v69,
              v70,
              v71,
              v72);
          }
        }
        Master_object = (GachaMaster_o *)*p_summonNoticeTween;
        if ( *p_summonNoticeTween )
        {
          ShopNoticeTween__AddTargets(
            (ShopNoticeTween_o *)Master_object,
            this->fields.summonCampaignRootObject,
            (System_Collections_Generic_List_GameObject__o *)v66,
            0,
            0);
          Master_object = (GachaMaster_o *)this->fields.summonNoticeTween;
          if ( Master_object )
          {
            ShopNoticeTween__SetActiveSwitchingTargets((ShopNoticeTween_o *)Master_object, 0, 0);
            Master_object = (GachaMaster_o *)*p_summonNoticeTween;
            if ( *p_summonNoticeTween )
            {
              ShopNoticeTween__Start((ShopNoticeTween_o *)Master_object, 0);
              return;
            }
          }
        }
      }
    }
LABEL_90:
    sub_21FFECC(Master_object, summonCampainObject);
  }
}


// local variable allocation has failed, the output may be wrong!
void MainMenuBarBase__SendSelectSignal(
        MainMenuBarBase_o *this,
        int32_t type,
        System_String_o *message,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  UnityEngine_Object_o *activeSceneFSM; // x23
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x1
  PlayMakerFSM_o *v23; // x0

  if ( (byte_5937DB5 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_8869/*"MAIN_MENU_BAR_SELECT"*/);
    byte_5937DB5 = 1;
  }
  activeSceneFSM = (UnityEngine_Object_o *)this->fields.activeSceneFSM;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&type);
  if ( !UnityEngine_Object__op_Equality(activeSceneFSM, 0, 0) && !System_String__IsNullOrEmpty(message, 0) )
  {
    this->fields.selectedType = type;
    this->fields.selectedKind = message;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.selectedKind,
      (int32_t)message,
      v10,
      v11,
      v12,
      v13,
      v14,
      v15);
    this->fields.selectedObject = obj;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.selectedObject,
      (int32_t)obj,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
    v23 = this->fields.activeSceneFSM;
    if ( !v23 )
      sub_21FFECC(0, v22);
    PlayMakerFSM__SendEvent(v23, (System_String_o *)StringLiteral_8869/*"MAIN_MENU_BAR_SELECT"*/, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void MainMenuBarBase__SetActiveScene(
        MainMenuBarBase_o *this,
        SceneRootComponent_o *scene,
        int32_t kind,
        int32_t panelDepth,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  __int64 v13; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  struct PlayMakerFSM_o *myFSM; // x1
  Il2CppObject *ComponentInChildren_object__58644924; // x0
  __int64 v17; // x1
  UnityEngine_Component_o *v18; // x23
  __int64 v19; // x1
  UnityEngine_Transform_o *v20; // x24
  UnityEngine_GameObject_o *v21; // x24
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  const MethodInfo *v28; // x3
  const MethodInfo *v29; // x3

  if ( (byte_5937DB1 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponentInChildren_UICamera___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UICamera___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937DB1 = 1;
  }
  this->fields.activeScene = scene;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.activeScene,
    (int32_t)scene,
    *(System_String_o **)&kind,
    *(System_String_o **)&panelDepth,
    (int32_t)cam,
    (int32_t)method,
    v6,
    v7);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !scene )
      goto LABEL_27;
    ComponentInChildren_object__58644924 = UnityEngine_Component__GetComponentInChildren_object__58644924(
                                             (UnityEngine_Component_o *)scene,
                                             (const MethodInfo_37ED9BC *)Method_UnityEngine_Component_GetComponentInChildren_UICamera___);
  }
  else
  {
    if ( !cam )
      goto LABEL_27;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cam, 0);
    if ( !gameObject )
      goto LABEL_27;
    ComponentInChildren_object__58644924 = UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UICamera___);
  }
  v18 = (UnityEngine_Component_o *)ComponentInChildren_object__58644924;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v18, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !v18 )
      goto LABEL_27;
    v20 = (UnityEngine_Transform_o *)gameObject;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v18, 0);
    if ( !v20 )
      goto LABEL_27;
    UnityEngine_Transform__set_parent(v20, (UnityEngine_Transform_o *)gameObject, 0);
    v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    gameObject = UnityEngine_Component__get_gameObject(v18, 0);
    if ( !gameObject )
      goto LABEL_27;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0);
    if ( !v21 )
      goto LABEL_27;
    UnityEngine_GameObject__set_layer(v21, (int32_t)gameObject, 0);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)scene, 0, 0);
  myFSM = 0;
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !scene )
      goto LABEL_27;
    myFSM = scene->fields.myFSM;
  }
  this->fields.activeSceneFSM = myFSM;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.activeSceneFSM,
    (int32_t)myFSM,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  gameObject = (UnityEngine_GameObject_o *)this->fields.rootPanel;
  if ( !gameObject
    || (UIPanel__set_depth((UIPanel_o *)gameObject, panelDepth, 0),
        this->fields.kind = kind,
        MainMenuBarBase__SetButtonActive(this, kind, 0, v28),
        MainMenuBarBase__SwitchMenu(this, 0, 0, v29),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.mOutSide) == 0) )
  {
LABEL_27:
    sub_21FFECC(gameObject, myFSM);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0);
}


void MainMenuBarBase__SetAllBtnAct(MainMenuBarBase_o *this, System_Action_o *act, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.mAllBtnAct = act;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mAllBtnAct,
    (int32_t)act,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void MainMenuBarBase__SetButtonActive(MainMenuBarBase_o *this, int32_t kind, bool isActive, const MethodInfo *method)
{
  MainMenuBarButton_o *partyBtn; // x0
  int v6; // w22
  int32_t v9; // w1
  int32_t v10; // w1
  int32_t v11; // w1
  int32_t v12; // w1
  int32_t v13; // w1
  int32_t v14; // w1
  int32_t v15; // w1
  int32_t v16; // w1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  int32_t v23; // w1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7

  partyBtn = this->fields.partyBtn;
  if ( isActive )
    v6 = 2;
  else
    v6 = 1;
  if ( !partyBtn )
    goto LABEL_45;
  v9 = kind == 3 ? 3 : v6;
  MainMenuBarButton__SetMode(partyBtn, v9, 0);
  partyBtn = this->fields.summonBtn;
  if ( !partyBtn )
    goto LABEL_45;
  v10 = kind == 4 ? 3 : v6;
  MainMenuBarButton__SetMode(partyBtn, v10, 0);
  partyBtn = this->fields.exRoomBtn;
  if ( !partyBtn )
    goto LABEL_45;
  v11 = kind == 5 ? 3 : v6;
  MainMenuBarButton__SetMode(partyBtn, v11, 0);
  partyBtn = this->fields.combineBtn;
  if ( !partyBtn )
    goto LABEL_45;
  v12 = kind == 6 ? 3 : v6;
  MainMenuBarButton__SetMode(partyBtn, v12, 0);
  partyBtn = this->fields.shopBtn;
  if ( !partyBtn )
    goto LABEL_45;
  v13 = kind == 7 ? 3 : v6;
  MainMenuBarButton__SetMode(partyBtn, v13, 0);
  partyBtn = this->fields.friendBtn;
  if ( !partyBtn )
    goto LABEL_45;
  v14 = kind == 8 ? 3 : v6;
  MainMenuBarButton__SetMode(partyBtn, v14, 0);
  partyBtn = this->fields.myroomBtn;
  if ( !partyBtn )
    goto LABEL_45;
  v15 = kind == 9 ? 3 : v6;
  MainMenuBarButton__SetMode(partyBtn, v15, 0);
  partyBtn = this->fields.terminalBtn;
  if ( !partyBtn )
    goto LABEL_45;
  if ( kind == 1 )
    v16 = 3;
  else
    v16 = v6;
  MainMenuBarButton__SetMode(partyBtn, v16, 0);
  if ( kind == 9 && isActive )
  {
    MainMenuBarBase__CheckLatestScenarioButtonEnable(this, *(const MethodInfo **)&kind);
    goto LABEL_44;
  }
  partyBtn = this->fields.latestScenarioBtn;
  if ( !partyBtn )
LABEL_45:
    sub_21FFECC(partyBtn, *(_QWORD *)&kind);
  if ( kind == 10 )
    v23 = 3;
  else
    v23 = v6;
  MainMenuBarButton__SetMode(partyBtn, v23, 0);
LABEL_44:
  this->fields.selectedType = -1;
  this->fields.selectedKind = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.selectedKind, 0, v17, v18, v19, v20, v21, v22);
  this->fields.selectedObject = 0;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.selectedObject, 0, v24, v25, v26, v27, v28, v29);
  this->fields.fadeType = 1;
}


void MainMenuBarBase__SetButtonKind(MainMenuBarBase_o *this, int32_t kind, const MethodInfo *method)
{
  this->fields.kind = kind;
}


// local variable allocation has failed, the output may be wrong!
void MainMenuBarBase__SetDispBtnAct(
        MainMenuBarBase_o *this,
        int32_t kind,
        System_Action_o *act,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct System_Action_array *mDispBtnActList; // x8
  Il2CppClass **v9; // x0

  mDispBtnActList = this->fields.mDispBtnActList;
  if ( !mDispBtnActList )
    sub_21FFECC(this, *(_QWORD *)&kind);
  if ( LODWORD(mDispBtnActList->max_length) <= kind )
    sub_21FFED4(this);
  v9 = &mDispBtnActList->obj.klass + kind;
  v9[4] = (Il2CppClass *)act;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)(v9 + 4),
    (int32_t)act,
    (System_String_o *)act,
    (System_String_o *)method,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void MainMenuBarBase__SetDispBtnColliderEnable(
        MainMenuBarBase_o *this,
        bool is_enable,
        int32_t kind,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *mDispBtnList; // x0
  int32_t v8; // w22
  UnityEngine_Object_o *v9; // x24
  UnityEngine_Collider_o *v10; // x23
  __int64 v11; // x1
  UnityEngine_Object_o *summonBtn; // x25
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  bool enabled; // w0

  if ( (byte_5937DD2 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_21FFC50(&Method_System_Collections_Generic_List_MainMenuBarButton__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_MainMenuBarButton__get_Item__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&TutorialFlag_TypeInfo);
    byte_5937DD2 = 1;
  }
  mDispBtnList = (System_Collections_Generic_List_object__o *)this->fields.mDispBtnList;
  if ( !mDispBtnList )
LABEL_22:
    sub_21FFECC(mDispBtnList, is_enable);
  v8 = 0;
  while ( v8 < mDispBtnList->fields._size )
  {
    mDispBtnList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  mDispBtnList,
                                                                  v8,
                                                                  (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_MainMenuBarButton__get_Item__);
    if ( mDispBtnList )
    {
      v9 = (UnityEngine_Object_o *)mDispBtnList;
      mDispBtnList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)mDispBtnList,
                                                                    0);
      if ( mDispBtnList )
      {
        mDispBtnList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                      (UnityEngine_GameObject_o *)mDispBtnList,
                                                                      (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
        if ( mDispBtnList )
        {
          v10 = (UnityEngine_Collider_o *)mDispBtnList;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)mDispBtnList, kind == v8 && is_enable, 0);
          summonBtn = (UnityEngine_Object_o *)this->fields.summonBtn;
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v11);
          if ( UnityEngine_Object__op_Equality(v9, summonBtn, 0) )
          {
            if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, is_enable);
            if ( !TutorialFlag__IsProgressDone(1, 0) )
              goto LABEL_18;
            if ( !*(&TutorialFlag_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, v13);
            if ( !TutorialFlag__Get_47357952(101, 0) )
              enabled = UnityEngine_Collider__get_enabled(v10, 0);
            else
LABEL_18:
              enabled = 0;
            MainMenuBarBase__SetSummonBalloonIcon(this, enabled, v14);
          }
          mDispBtnList = (System_Collections_Generic_List_object__o *)this->fields.mDispBtnList;
          ++v8;
          if ( mDispBtnList )
            continue;
        }
      }
    }
    goto LABEL_22;
  }
}


void MainMenuBarBase__SetExRoomBalloonSprite(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *exRoomShopBalloonSprite; // x0
  __int64 v4; // x1
  UISprite_o *v5; // x20

  if ( (byte_5937DD6 & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&StringLiteral_21132/*"icon_exroom_mission"*/);
    sub_21FFC50(&StringLiteral_21133/*"icon_exroom_quest"*/);
    sub_21FFC50(&StringLiteral_21134/*"icon_exroom_shop"*/);
    sub_21FFC50(&StringLiteral_25510/*"txt_exroom_remaining"*/);
    byte_5937DD6 = 1;
  }
  exRoomShopBalloonSprite = (UnityEngine_Component_o *)this->fields.exRoomShopBalloonSprite;
  if ( !exRoomShopBalloonSprite )
    goto LABEL_16;
  exRoomShopBalloonSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(exRoomShopBalloonSprite, 0);
  if ( !exRoomShopBalloonSprite )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exRoomShopBalloonSprite, 0, 0);
  exRoomShopBalloonSprite = (UnityEngine_Component_o *)this->fields.exRoomQuestBalloonSprite;
  if ( !exRoomShopBalloonSprite )
    goto LABEL_16;
  exRoomShopBalloonSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(exRoomShopBalloonSprite, 0);
  if ( !exRoomShopBalloonSprite )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exRoomShopBalloonSprite, 0, 0);
  exRoomShopBalloonSprite = (UnityEngine_Component_o *)this->fields.exRoomMissionBalloonSprite;
  if ( !exRoomShopBalloonSprite )
    goto LABEL_16;
  exRoomShopBalloonSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(exRoomShopBalloonSprite, 0);
  if ( !exRoomShopBalloonSprite )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exRoomShopBalloonSprite, 0, 0);
  v5 = this->fields.exRoomShopBalloonSprite;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v4);
  AtlasManager__SetDownloadCommonSprite(v5, (System_String_o *)StringLiteral_21134/*"icon_exroom_shop"*/, 0);
  exRoomShopBalloonSprite = (UnityEngine_Component_o *)this->fields.exRoomShopBalloonSprite;
  if ( !exRoomShopBalloonSprite )
    goto LABEL_16;
  ((void (__fastcall *)(UnityEngine_Component_o *, void *))exRoomShopBalloonSprite->klass[2]._1.parent)(
    exRoomShopBalloonSprite,
    exRoomShopBalloonSprite->klass[2]._1.generic_class);
  AtlasManager__SetDownloadCommonSprite(
    this->fields.exRoomQuestBalloonSprite,
    (System_String_o *)StringLiteral_21133/*"icon_exroom_quest"*/,
    0);
  exRoomShopBalloonSprite = (UnityEngine_Component_o *)this->fields.exRoomQuestBalloonSprite;
  if ( !exRoomShopBalloonSprite
    || (((void (__fastcall *)(UnityEngine_Component_o *, void *))exRoomShopBalloonSprite->klass[2]._1.parent)(
          exRoomShopBalloonSprite,
          exRoomShopBalloonSprite->klass[2]._1.generic_class),
        AtlasManager__SetDownloadCommonSprite(
          this->fields.exRoomQuestBalloonRemainSprite,
          (System_String_o *)StringLiteral_25510/*"txt_exroom_remaining"*/,
          0),
        (exRoomShopBalloonSprite = (UnityEngine_Component_o *)this->fields.exRoomQuestBalloonRemainSprite) == 0)
    || (((void (__fastcall *)(UnityEngine_Component_o *, void *))exRoomShopBalloonSprite->klass[2]._1.parent)(
          exRoomShopBalloonSprite,
          exRoomShopBalloonSprite->klass[2]._1.generic_class),
        AtlasManager__SetDownloadCommonSprite(
          this->fields.exRoomMissionBalloonSprite,
          (System_String_o *)StringLiteral_21132/*"icon_exroom_mission"*/,
          0),
        (exRoomShopBalloonSprite = (UnityEngine_Component_o *)this->fields.exRoomMissionBalloonSprite) == 0) )
  {
LABEL_16:
    sub_21FFECC(exRoomShopBalloonSprite, method);
  }
  ((void (__fastcall *)(UnityEngine_Component_o *, void *))exRoomShopBalloonSprite->klass[2]._1.parent)(
    exRoomShopBalloonSprite,
    exRoomShopBalloonSprite->klass[2]._1.generic_class);
}


void MainMenuBarBase__SetMenuActive(MainMenuBarBase_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v5);
  UnityEngine_GameObject__SetActive(gameObject, isActive, 0);
}


void MainMenuBarBase__SetMenuBtnAct(MainMenuBarBase_o *this, System_Action_o *act, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.mMenuBtnAct = act;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mMenuBtnAct,
    (int32_t)act,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void MainMenuBarBase__SetMenuBtnColliderEnable(
        MainMenuBarBase_o *this,
        bool isEnable,
        bool isGray,
        const MethodInfo *method)
{
  UnityEngine_Component_o *menuStateBtn; // x0
  __int64 v8; // x1

  if ( (byte_5937DD1 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    byte_5937DD1 = 1;
  }
  menuStateBtn = (UnityEngine_Component_o *)this->fields.menuStateBtn;
  if ( !menuStateBtn )
    goto LABEL_19;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(menuStateBtn, 0);
  if ( !menuStateBtn )
    goto LABEL_19;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)menuStateBtn,
                                              (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !menuStateBtn )
    goto LABEL_19;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)menuStateBtn, isEnable, 0);
  menuStateBtn = (UnityEngine_Component_o *)this->fields.backCloseSprite;
  if ( !menuStateBtn )
    goto LABEL_19;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(menuStateBtn, 0);
  if ( !menuStateBtn )
    goto LABEL_19;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)menuStateBtn,
                                              (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !menuStateBtn )
    goto LABEL_19;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)menuStateBtn, isEnable, 0);
  if ( !isEnable )
  {
    menuStateBtn = (UnityEngine_Component_o *)this->fields.mOutSide;
    if ( !menuStateBtn )
      goto LABEL_19;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)menuStateBtn, 0, 0);
  }
  menuStateBtn = (UnityEngine_Component_o *)this->fields.menuStateBtn;
  if ( isGray )
  {
    if ( !menuStateBtn )
      goto LABEL_19;
    v8 = 3;
  }
  else
  {
    if ( !menuStateBtn )
      goto LABEL_19;
    v8 = 0;
  }
  ((void (__fastcall *)(UnityEngine_Component_o *, __int64, __int64, Il2CppClass **))menuStateBtn->klass[1]._1.nestedTypes)(
    menuStateBtn,
    v8,
    1,
    menuStateBtn->klass[1]._1.implementedInterfaces);
  menuStateBtn = (UnityEngine_Component_o *)this->fields.menuFrameBnt;
  if ( !menuStateBtn )
LABEL_19:
    sub_21FFECC(menuStateBtn, isEnable);
  UIButtonColor__set_state((UIButtonColor_o *)menuStateBtn, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void MainMenuBarBase__SetOutSideColliderEnable(MainMenuBarBase_o *this, bool is_enable, const MethodInfo *method)
{
  UnityEngine_Component_o *menuStateBtn; // x0

  if ( (byte_5937DBF & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    byte_5937DBF = 1;
  }
  menuStateBtn = (UnityEngine_Component_o *)this->fields.menuStateBtn;
  if ( !menuStateBtn )
    goto LABEL_10;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(menuStateBtn, 0);
  if ( !menuStateBtn )
    goto LABEL_10;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)menuStateBtn,
                                              (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !menuStateBtn )
    goto LABEL_10;
  if ( UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)menuStateBtn, 0) )
  {
    menuStateBtn = (UnityEngine_Component_o *)this->fields.mOutSide;
    if ( menuStateBtn )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)menuStateBtn, is_enable, 0);
      return;
    }
LABEL_10:
    sub_21FFECC(menuStateBtn, is_enable);
  }
}


void MainMenuBarBase__SetSceneChangeFadeType(MainMenuBarBase_o *this, int32_t fadeType, const MethodInfo *method)
{
  this->fields.fadeType = fadeType;
}


// local variable allocation has failed, the output may be wrong!
void MainMenuBarBase__SetSummonBalloonIcon(MainMenuBarBase_o *this, bool isEnable, const MethodInfo *method)
{
  UnityEngine_GameObject_o *summonCampainObject; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v7; // x3
  Il2CppObject *v8; // x0
  const MethodInfo *v9; // x3
  __int64 v10; // x1
  Il2CppObject *ComponentInChildren_object; // x0
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5937DD3 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponentInChildren_BoxCollider___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    byte_5937DD3 = 1;
  }
  summonCampainObject = this->fields.summonCampainObject;
  memset(&v13, 0, sizeof(v13));
  if ( !summonCampainObject )
    goto LABEL_14;
  summonCampainObject = UnityEngine_GameObject__get_gameObject(summonCampainObject, 0);
  if ( !summonCampainObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             summonCampainObject,
                             (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        MainMenuBarBase__TrySetColliderEnabled(
          (MainMenuBarBase_o *)Component_object,
          (UnityEngine_Collider_o *)Component_object,
          isEnable,
          v7),
        (summonCampainObject = (UnityEngine_GameObject_o *)this->fields.oneTimeFreeSprite) == 0)
    || (summonCampainObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)summonCampainObject, 0)) == 0
    || (v8 = UnityEngine_GameObject__GetComponent_object_(
               summonCampainObject,
               (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        MainMenuBarBase__TrySetColliderEnabled((MainMenuBarBase_o *)v8, (UnityEngine_Collider_o *)v8, isEnable, v9),
        (summonCampainObject = (UnityEngine_GameObject_o *)this->fields.summonCampaignObjects) == 0) )
  {
LABEL_14:
    sub_21FFECC(summonCampainObject, isEnable);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v13,
    (System_Collections_Generic_List_object__o *)summonCampainObject,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v13,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v13.fields._current )
      sub_21FFECC(0, v10);
    ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                   (UnityEngine_GameObject_o *)v13.fields._current,
                                   (const MethodInfo_3883C54 *)Method_UnityEngine_GameObject_GetComponentInChildren_BoxCollider___);
    MainMenuBarBase__TrySetColliderEnabled(
      (MainMenuBarBase_o *)ComponentInChildren_object,
      (UnityEngine_Collider_o *)ComponentInChildren_object,
      isEnable,
      v12);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v13,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


System_Collections_IEnumerator_o *MainMenuBarBase__SetTerminalQuestListClose(
        MainMenuBarBase_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_5937DC2 & 1) == 0 )
  {
    sub_21FFC50(&MainMenuBarBase__SetTerminalQuestListClose_d__152_TypeInfo);
    byte_5937DC2 = 1;
  }
  v5 = sub_21FFEBC(MainMenuBarBase__SetTerminalQuestListClose_d__152_TypeInfo);
  MainMenuBarBase__SetTerminalQuestListClose_d__152___ctor(
    (MainMenuBarBase__SetTerminalQuestListClose_d__152_o *)v5,
    0,
    0);
  if ( !v5 )
    sub_21FFECC(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 40) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


void MainMenuBarBase__Start(MainMenuBarBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MainMenuBarBase__BackActive(this, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
void MainMenuBarBase__SwitchMenu(MainMenuBarBase_o *this, bool is_open, bool is_play_se, const MethodInfo *method)
{
  UnityEngine_GameObject_o *menuComp; // x0
  float x; // s9
  float z; // s8
  UnityEngine_GameObject_o *gameObject; // x22
  const MethodInfo *v11; // x2
  struct System_Collections_Hashtable_o *table; // x23
  struct System_Collections_Hashtable_o *v13; // x23
  struct System_Collections_Hashtable_o *v14; // x23
  struct System_Collections_Hashtable_o *v15; // x23
  struct System_Collections_Hashtable_o *v16; // x23
  __int64 v17; // x1
  System_Collections_Hashtable_o *v18; // x23
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x1
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  float v24; // s10
  struct System_Collections_Hashtable_o *v25; // x23
  struct System_Collections_Hashtable_o *v26; // x23
  struct System_Collections_Hashtable_o *v27; // x23
  struct System_Collections_Hashtable_o *v28; // x23
  struct System_Collections_Hashtable_o *v29; // x23
  __int64 v30; // x1
  System_Collections_Hashtable_o *v31; // x21
  _QWORD *v32; // x0
  System_Reflection_MethodBase_o *v33; // x0
  int32_t v34; // w1
  int v35; // [xsp+Ch] [xbp-64h] BYREF
  float v36; // [xsp+10h] [xbp-60h] BYREF
  int v37; // [xsp+14h] [xbp-5Ch]
  float v38; // [xsp+18h] [xbp-58h]
  _BYTE v39[4]; // [xsp+1Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5937DB6 & 1) == 0 )
  {
    sub_21FFC50(&Method_MainMenuBarBase_SwitchMenu__);
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    sub_21FFC50(&StringLiteral_19567/*"easetype"*/);
    sub_21FFC50(&StringLiteral_23503/*"onMoveComplete"*/);
    sub_21FFC50(&StringLiteral_18777/*"closeMenuStateImg"*/);
    sub_21FFC50(&StringLiteral_19552/*"easeInQuad"*/);
    sub_21FFC50(&StringLiteral_25318/*"time"*/);
    sub_21FFC50(&StringLiteral_23520/*"oncompletetarget"*/);
    sub_21FFC50(&StringLiteral_23525/*"onstarttarget"*/);
    sub_21FFC50(&StringLiteral_23869/*"position"*/);
    sub_21FFC50(&StringLiteral_21904/*"isLocal"*/);
    sub_21FFC50(&StringLiteral_23523/*"onstart"*/);
    sub_21FFC50(&StringLiteral_23518/*"oncomplete"*/);
    sub_21FFC50(&StringLiteral_23563/*"openMenuStateImg"*/);
    sub_21FFC50(&iTween_TypeInfo);
    byte_5937DB6 = 1;
  }
  if ( !this->fields.isSwitchMenuMoving && this->fields.isOpen != is_open )
  {
    this->fields.isOpen = is_open;
    this->fields.isSwitchMenuMoving = 1;
    if ( is_open )
      MainMenuBarBase__BackActive(this, 1, (const MethodInfo *)is_play_se);
    menuComp = this->fields.menuComp;
    if ( !menuComp )
      goto LABEL_47;
    menuComp = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(menuComp, 0);
    if ( !menuComp )
      goto LABEL_47;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)menuComp, 0);
    menuComp = this->fields.menuComp;
    if ( !menuComp )
      goto LABEL_47;
    x = localPosition.fields.x;
    z = localPosition.fields.z;
    gameObject = UnityEngine_GameObject__get_gameObject(menuComp, 0);
    MainMenuBarBase__SetOutSideColliderEnable(this, 1, v11);
    menuComp = (UnityEngine_GameObject_o *)this->fields.mMenuNoticeNumber;
    if ( !menuComp )
      goto LABEL_47;
    NoticeNumberComponent__SetDisp((NoticeNumberComponent_o *)menuComp, !is_open, 0);
    if ( is_open )
    {
      menuComp = (UnityEngine_GameObject_o *)this->fields.table;
      if ( menuComp )
      {
        (*(void (__fastcall **)(UnityEngine_GameObject_o *, Il2CppMethodPointer))&menuComp->klass[1]._2.naturalAligment)(
          menuComp,
          menuComp->klass[1].vtable._0_Equals.methodPtr);
        table = this->fields.table;
        v39[0] = 1;
        menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(qword_594C050, v39);
        if ( table )
        {
          ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))table->klass->vtable._22_Add.methodPtr)(
            table,
            StringLiteral_21904/*"isLocal"*/,
            menuComp,
            table->klass->vtable._22_Add.method);
          v13 = this->fields.table;
          v36 = x;
          v37 = -1019674624;
          v38 = z;
          menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v36);
          if ( v13 )
          {
            ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v13->klass->vtable._22_Add.methodPtr)(
              v13,
              StringLiteral_23869/*"position"*/,
              menuComp,
              v13->klass->vtable._22_Add.method);
            menuComp = (UnityEngine_GameObject_o *)this->fields.table;
            if ( menuComp )
            {
              (*(void (__fastcall **)(UnityEngine_GameObject_o *, __int64, __int64, _QWORD))&menuComp->klass[1]._2.field_count)(
                menuComp,
                StringLiteral_23523/*"onstart"*/,
                StringLiteral_23563/*"openMenuStateImg"*/,
                *(_QWORD *)&menuComp->klass[1]._2.interfaces_count);
              v14 = this->fields.table;
              menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
              if ( v14 )
              {
                ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v14->klass->vtable._22_Add.methodPtr)(
                  v14,
                  StringLiteral_23525/*"onstarttarget"*/,
                  menuComp,
                  v14->klass->vtable._22_Add.method);
                menuComp = (UnityEngine_GameObject_o *)this->fields.table;
                if ( menuComp )
                {
                  (*(void (__fastcall **)(UnityEngine_GameObject_o *, __int64, __int64, _QWORD))&menuComp->klass[1]._2.field_count)(
                    menuComp,
                    StringLiteral_23518/*"oncomplete"*/,
                    StringLiteral_23503/*"onMoveComplete"*/,
                    *(_QWORD *)&menuComp->klass[1]._2.interfaces_count);
                  v15 = this->fields.table;
                  menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                  if ( v15 )
                  {
                    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v15->klass->vtable._22_Add.methodPtr)(
                      v15,
                      StringLiteral_23520/*"oncompletetarget"*/,
                      menuComp,
                      v15->klass->vtable._22_Add.method);
                    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
                    if ( menuComp )
                    {
                      (*(void (__fastcall **)(UnityEngine_GameObject_o *, __int64, __int64, _QWORD))&menuComp->klass[1]._2.field_count)(
                        menuComp,
                        StringLiteral_19567/*"easetype"*/,
                        StringLiteral_19552/*"easeInQuad"*/,
                        *(_QWORD *)&menuComp->klass[1]._2.interfaces_count);
                      v16 = this->fields.table;
                      v35 = 1024148374;
                      menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(qword_594C0A0, &v35);
                      if ( v16 )
                      {
                        ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v16->klass->vtable._22_Add.methodPtr)(
                          v16,
                          StringLiteral_25318/*"time"*/,
                          menuComp,
                          v16->klass->vtable._22_Add.method);
                        v18 = this->fields.table;
                        if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
                          j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v17);
                        iTween__MoveTo_75080224(gameObject, v18, 0);
                        MainMenuBarBase__ResetShopNotice(this, v19);
                        MainMenuBarBase__ResetSummonNoticeDraw(this, v20);
                        MainMenuBarBase__ResetExRoomIconAndNotice(this, v21);
                        MainMenuBarBase__CheckTerminalButtonEnable(this, v22);
                        MainMenuBarBase__CheckLatestScenarioButtonEnable(this, v23);
                        if ( !is_play_se )
                          return;
LABEL_40:
                        v32 = Method_MainMenuBarBase_SwitchMenu__;
                        if ( (*((_BYTE *)Method_MainMenuBarBase_SwitchMenu__ + 83) & 2) != 0 )
                          v32 = (_QWORD *)sub_21FFC68(Method_MainMenuBarBase_SwitchMenu__);
                        v33 = (System_Reflection_MethodBase_o *)sub_21FFC34(v32, v32[4]);
                        if ( is_open )
                          v34 = 9;
                        else
                          v34 = 10;
                        OverwriteAssetSoundName__PlaySystemSe(v33, v34, 0, 0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_47:
      sub_21FFECC(menuComp, is_open);
    }
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( this->fields.mIsCloseHideMode )
      v24 = -420.0;
    else
      v24 = -328.0;
    if ( !menuComp )
      goto LABEL_47;
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, Il2CppMethodPointer))&menuComp->klass[1]._2.naturalAligment)(
      menuComp,
      menuComp->klass[1].vtable._0_Equals.methodPtr);
    v25 = this->fields.table;
    v39[0] = 1;
    menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(qword_594C050, v39);
    if ( !v25 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v25->klass->vtable._22_Add.methodPtr)(
      v25,
      StringLiteral_21904/*"isLocal"*/,
      menuComp,
      v25->klass->vtable._22_Add.method);
    v26 = this->fields.table;
    v36 = x;
    v37 = LODWORD(v24);
    v38 = z;
    menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v36);
    if ( !v26 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v26->klass->vtable._22_Add.methodPtr)(
      v26,
      StringLiteral_23869/*"position"*/,
      menuComp,
      v26->klass->vtable._22_Add.method);
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( !menuComp )
      goto LABEL_47;
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, __int64, __int64, _QWORD))&menuComp->klass[1]._2.field_count)(
      menuComp,
      StringLiteral_23523/*"onstart"*/,
      StringLiteral_18777/*"closeMenuStateImg"*/,
      *(_QWORD *)&menuComp->klass[1]._2.interfaces_count);
    v27 = this->fields.table;
    menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !v27 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v27->klass->vtable._22_Add.methodPtr)(
      v27,
      StringLiteral_23525/*"onstarttarget"*/,
      menuComp,
      v27->klass->vtable._22_Add.method);
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( !menuComp )
      goto LABEL_47;
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, __int64, __int64, _QWORD))&menuComp->klass[1]._2.field_count)(
      menuComp,
      StringLiteral_23518/*"oncomplete"*/,
      StringLiteral_23503/*"onMoveComplete"*/,
      *(_QWORD *)&menuComp->klass[1]._2.interfaces_count);
    v28 = this->fields.table;
    menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !v28 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v28->klass->vtable._22_Add.methodPtr)(
      v28,
      StringLiteral_23520/*"oncompletetarget"*/,
      menuComp,
      v28->klass->vtable._22_Add.method);
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( !menuComp )
      goto LABEL_47;
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, __int64, __int64, _QWORD))&menuComp->klass[1]._2.field_count)(
      menuComp,
      StringLiteral_19567/*"easetype"*/,
      StringLiteral_19552/*"easeInQuad"*/,
      *(_QWORD *)&menuComp->klass[1]._2.interfaces_count);
    v29 = this->fields.table;
    v35 = 1024148374;
    menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(qword_594C0A0, &v35);
    if ( !v29 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v29->klass->vtable._22_Add.methodPtr)(
      v29,
      StringLiteral_25318/*"time"*/,
      menuComp,
      v29->klass->vtable._22_Add.method);
    v31 = this->fields.table;
    if ( !*(&iTween_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo, v30);
    iTween__MoveTo_75080224(gameObject, v31, 0);
    if ( is_play_se )
      goto LABEL_40;
  }
}


// local variable allocation has failed, the output may be wrong!
bool MainMenuBarBase__TryChangeStateInExRoom(MainMenuBarBase_o *this, int32_t exRoomType, const MethodInfo *method)
{
  TerminalSceneComponent_c *v5; // x0
  UnityEngine_Object_o *mInstance; // x21
  __int64 v7; // x1
  void *exRoomBtn; // x0
  __int64 v9; // x8
  UnityEngine_Object_o *v10; // x21
  __int64 v11; // x8
  UnityEngine_Object_o *v12; // x21
  __int64 v13; // x8
  __int64 v14; // x1
  long double v15; // q0
  ExRoomRootComponent_o *v16; // x21
  int32_t StateFromTransitionInfo; // w0
  const MethodInfo *v18; // x3
  MainMenuBarBase_o *v19; // x0
  bool v20; // w19
  int32_t v22; // w20
  System_Reflection_MethodBase_o *v23; // x0

  if ( (byte_5937DC6 & 1) == 0 )
  {
    sub_21FFC50(&Method_MainMenuBarBase_TryChangeStateInExRoom__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5937DC6 = 1;
  }
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, *(_QWORD *)&exRoomType);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
  }
  v5 = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, *(_QWORD *)&exRoomType);
    v5 = TerminalSceneComponent_TypeInfo;
  }
  mInstance = (UnityEngine_Object_o *)v5->static_fields->mInstance;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&exRoomType);
  if ( UnityEngine_Object__op_Equality(mInstance, 0, 0) )
    return 0;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
  }
  exRoomBtn = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7);
    exRoomBtn = TerminalSceneComponent_TypeInfo;
  }
  v9 = **((_QWORD **)exRoomBtn + 23);
  if ( !v9 )
    goto LABEL_52;
  v10 = *(UnityEngine_Object_o **)(v9 + 256);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Equality(v10, 0, 0) )
    return 0;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
  }
  exRoomBtn = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7);
    exRoomBtn = TerminalSceneComponent_TypeInfo;
  }
  v11 = **((_QWORD **)exRoomBtn + 23);
  if ( !v11 )
    goto LABEL_52;
  v12 = *(UnityEngine_Object_o **)(v11 + 376);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
  if ( UnityEngine_Object__op_Equality(v12, 0, 0) )
    return 0;
  exRoomBtn = this->fields.exRoomBtn;
  if ( !exRoomBtn )
    goto LABEL_52;
  if ( MainMenuBarButton__IsEnabled((MainMenuBarButton_o *)exRoomBtn, 0) )
    return 0;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
  }
  exRoomBtn = TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v7);
    exRoomBtn = TerminalSceneComponent_TypeInfo;
  }
  v13 = **((_QWORD **)exRoomBtn + 23);
  if ( !v13 || (exRoomBtn = *(void **)(v13 + 256)) == 0 )
LABEL_52:
    sub_21FFECC(exRoomBtn, v7);
  if ( !ScrTerminalListTop__IsExRoomActive((ScrTerminalListTop_o *)exRoomBtn, 0) )
    return 0;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    *(__n128 *)&v15 = j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, v14);
  exRoomBtn = (void *)sub_2918590(0, v15);
  if ( !exRoomBtn )
    goto LABEL_52;
  v16 = (ExRoomRootComponent_o *)*((_QWORD *)exRoomBtn + 47);
  if ( !v16 )
    goto LABEL_52;
  StateFromTransitionInfo = ExRoomRootComponent__GetStateFromTransitionInfoExRoomType(
                              *((ExRoomRootComponent_o **)exRoomBtn + 47),
                              exRoomType,
                              0);
  if ( v16->fields.currentState == StateFromTransitionInfo )
  {
    v19 = this;
    v20 = 1;
    MainMenuBarBase__SwitchMenu(v19, 0, 1, v18);
  }
  else
  {
    v22 = StateFromTransitionInfo;
    MainMenuBarBase__SwitchMenu(this, 0, 0, v18);
    v23 = (System_Reflection_MethodBase_o *)sub_1FEBA28(Method_MainMenuBarBase_TryChangeStateInExRoom__);
    OverwriteAssetSoundName__PlaySystemSe(v23, 0, 0, 0);
    ExRoomRootComponent__ChangeState(v16, v22, 0);
    return 1;
  }
  return v20;
}


void MainMenuBarBase__TrySetColliderEnabled(
        MainMenuBarBase_o *this,
        UnityEngine_Collider_o *collider,
        bool isEnabled,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0
  __int64 v7; // x1

  if ( (byte_5937DD4 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937DD4 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, collider);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)collider, 0, 0);
  if ( v6 )
  {
    if ( !collider )
      sub_21FFECC(v6, v7);
    UnityEngine_Collider__set_enabled(collider, isEnabled, 0);
  }
}


bool MainMenuBarBase__TrySetExRoomMissionBalloon(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  bool v4; // w20
  UnityEngine_Component_o *exRoomMissionBalloonSprite; // x0
  UILabel_o *exRoomMissionAchieveInfoBalloonLabel; // x21
  Il2CppObject *v7; // x22
  Il2CppObject *v8; // x0
  UILabel_o *exRoomMissionInfoBalloonLabel; // x19
  Il2CppObject *v10; // x0
  int32_t v12; // [xsp+0h] [xbp-50h] BYREF
  int32_t v13; // [xsp+4h] [xbp-4Ch] BYREF
  int32_t v14; // [xsp+8h] [xbp-48h] BYREF
  int32_t receivableCount; // [xsp+Ch] [xbp-44h] BYREF
  int32_t completedCount[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_5937DDA & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_26433/*"{0}"*/);
    sub_21FFC50(&StringLiteral_26497/*"{0}/{1}"*/);
    byte_5937DDA = 1;
  }
  *(_QWORD *)completedCount = 0;
  receivableCount = 0;
  ExRoomTopQuestBoard__GetExRoomMissionCounts(&completedCount[1], completedCount, &receivableCount, 0);
  v4 = receivableCount > 0 || completedCount[1] >= 1 && completedCount[0] < completedCount[1];
  exRoomMissionBalloonSprite = (UnityEngine_Component_o *)this->fields.exRoomMissionBalloonSprite;
  if ( !exRoomMissionBalloonSprite )
    goto LABEL_13;
  exRoomMissionBalloonSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                            exRoomMissionBalloonSprite,
                                                            0);
  if ( !exRoomMissionBalloonSprite )
    goto LABEL_13;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exRoomMissionBalloonSprite, v4, 0);
  exRoomMissionAchieveInfoBalloonLabel = this->fields.exRoomMissionAchieveInfoBalloonLabel;
  v14 = completedCount[0];
  v7 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v14);
  v13 = completedCount[1];
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v13);
  exRoomMissionBalloonSprite = (UnityEngine_Component_o *)System_String__Format_75484576(
                                                            (System_String_o *)StringLiteral_26497/*"{0}/{1}"*/,
                                                            v7,
                                                            v8,
                                                            0);
  if ( !exRoomMissionAchieveInfoBalloonLabel
    || (UILabel__set_text(exRoomMissionAchieveInfoBalloonLabel, (System_String_o *)exRoomMissionBalloonSprite, 0),
        exRoomMissionInfoBalloonLabel = this->fields.exRoomMissionInfoBalloonLabel,
        v12 = receivableCount,
        v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v12),
        exRoomMissionBalloonSprite = (UnityEngine_Component_o *)System_String__Format(
                                                                  (System_String_o *)StringLiteral_26433/*"{0}"*/,
                                                                  v10,
                                                                  0),
        !exRoomMissionInfoBalloonLabel) )
  {
LABEL_13:
    sub_21FFECC(exRoomMissionBalloonSprite, v3);
  }
  UILabel__set_text(exRoomMissionInfoBalloonLabel, (System_String_o *)exRoomMissionBalloonSprite, 0);
  return v4;
}


bool MainMenuBarBase__TrySetExRoomQuestBalloon(MainMenuBarBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  MainMenuBarBase__InitExRoomQuestInfo(this, method);
  MainMenuBarBase__UpdateExRoomQuestInfo(this, v3);
  return this->fields.exRoomQuestTargetTime > 0;
}


bool MainMenuBarBase__TrySetExRoomShopBalloon(MainMenuBarBase_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *TargetDailyShopEntities; // x21
  System_Collections_Generic_List_object__o *v4; // x20
  ItemIconComponent_o *exRoomShopBalloonSprite; // x0
  __int64 v6; // x1
  _BOOL8 v7; // x0
  __int64 v8; // x1
  Il2CppObject *current; // x21
  _BOOL8 IsSoldOut; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  int v22; // w24
  struct ItemIconComponent_array *exRoomShopBalloonItemIcons; // x8
  int32_t v24; // w21
  int32_t max_length; // w9
  struct ItemIconComponent_array *v26; // x8
  ItemIconComponent_o *v27; // x22
  System_Collections_Generic_List_Enumerator_object__o v29; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_5937DD8 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ShopEntity__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ShopEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ShopEntity__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ShopEntity__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_ShopEntity__TypeInfo);
    byte_5937DD8 = 1;
  }
  memset(&v30, 0, sizeof(v30));
  TargetDailyShopEntities = (System_Collections_Generic_List_object__o *)ExRoomShopComponent__GetTargetDailyShopEntities(0);
  v4 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ShopEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ShopEntity___ctor__);
  if ( !TargetDailyShopEntities )
    goto LABEL_36;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    TargetDailyShopEntities,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ShopEntity__GetEnumerator__);
  v30 = v29;
  v29.fields._list = 0;
  *(_QWORD *)&v29.fields._index = &v30;
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v30,
           (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ShopEntity__MoveNext__);
    if ( !v7 )
      break;
    current = v30.fields._current;
    if ( !v30.fields._current )
      sub_21FFECC(v7, v8);
    IsSoldOut = ShopEntity__IsSoldOut((ShopEntity_o *)v30.fields._current, 0);
    if ( !IsSoldOut )
    {
      if ( !v4
        || (items = v4->fields._items,
            v19 = Method_System_Collections_Generic_List_ShopEntity__Add__,
            ++v4->fields._version,
            !items) )
      {
        sub_21FFECC(IsSoldOut, v11);
      }
      size = v4->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v4,
          current,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v4->fields._size = size + 1;
        v21[4] = (Il2CppClass *)current;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)current, v12, v13, v14, v15, v16, v17);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v30,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ShopEntity__Dispose__);
  if ( !v4 )
    goto LABEL_36;
  exRoomShopBalloonSprite = (ItemIconComponent_o *)this->fields.exRoomShopBalloonSprite;
  if ( !exRoomShopBalloonSprite )
    goto LABEL_36;
  v22 = v4->fields._size;
  exRoomShopBalloonSprite = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)exRoomShopBalloonSprite,
                                                     0);
  if ( !exRoomShopBalloonSprite )
    goto LABEL_36;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exRoomShopBalloonSprite, v22 > 0, 0);
  if ( v22 < 1 )
    return v22 > 0;
  exRoomShopBalloonItemIcons = this->fields.exRoomShopBalloonItemIcons;
  if ( !exRoomShopBalloonItemIcons )
LABEL_36:
    sub_21FFECC(exRoomShopBalloonSprite, v6);
  v24 = 0;
  while ( 1 )
  {
    max_length = exRoomShopBalloonItemIcons->max_length;
    if ( v24 >= max_length )
      return v22 > 0;
    if ( v24 >= (unsigned int)max_length )
      goto LABEL_40;
    exRoomShopBalloonSprite = exRoomShopBalloonItemIcons->m_Items[v24];
    if ( !exRoomShopBalloonSprite )
      goto LABEL_36;
    exRoomShopBalloonSprite = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)exRoomShopBalloonSprite,
                                                       0);
    if ( !exRoomShopBalloonSprite )
      goto LABEL_36;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exRoomShopBalloonSprite, v24 < v22, 0);
    if ( v24 < v22 )
    {
      exRoomShopBalloonSprite = (ItemIconComponent_o *)System_Collections_Generic_List_object___get_Item(
                                                         v4,
                                                         v24,
                                                         (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_ShopEntity__get_Item__);
      if ( !exRoomShopBalloonSprite )
        goto LABEL_36;
      v26 = this->fields.exRoomShopBalloonItemIcons;
      if ( LODWORD(exRoomShopBalloonSprite->fields.frameSprite) == 1 )
      {
        if ( !v26 )
          goto LABEL_36;
        if ( (unsigned int)v24 >= LODWORD(v26->max_length) )
          goto LABEL_40;
        v27 = v26->m_Items[v24];
        exRoomShopBalloonSprite = (ItemIconComponent_o *)ShopEntity__get_TargetId(
                                                           (ShopEntity_o *)exRoomShopBalloonSprite,
                                                           0);
        if ( !v27 )
          goto LABEL_36;
        ItemIconComponent__SetItem(v27, (int32_t)exRoomShopBalloonSprite, -1, 1, 0);
      }
      else
      {
        if ( !v26 )
          goto LABEL_36;
        if ( (unsigned int)v24 >= LODWORD(v26->max_length) )
LABEL_40:
          sub_21FFED4(exRoomShopBalloonSprite);
        exRoomShopBalloonSprite = v26->m_Items[v24];
        if ( !exRoomShopBalloonSprite )
          goto LABEL_36;
        exRoomShopBalloonSprite = (ItemIconComponent_o *)UnityEngine_Component__get_gameObject(
                                                           (UnityEngine_Component_o *)exRoomShopBalloonSprite,
                                                           0);
        if ( !exRoomShopBalloonSprite )
          goto LABEL_36;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)exRoomShopBalloonSprite, 0, 0);
      }
    }
    exRoomShopBalloonItemIcons = this->fields.exRoomShopBalloonItemIcons;
    ++v24;
    if ( !exRoomShopBalloonItemIcons )
      goto LABEL_36;
  }
}


void MainMenuBarBase__Update(MainMenuBarBase_o *this, const MethodInfo *method)
{
  if ( this->fields.isOpen )
    MainMenuBarBase__UpdateExRoomQuestInfo(this, method);
}


void MainMenuBarBase__UpdateExRoomInfo(MainMenuBarBase_o *this, const MethodInfo *method)
{
  if ( this->fields.isOpen )
    MainMenuBarBase__UpdateExRoomQuestInfo(this, method);
}


void MainMenuBarBase__UpdateExRoomQuestInfo(MainMenuBarBase_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2
  int64_t exRoomQuestTargetTime; // x20
  int64_t v7; // x21
  __int64 v8; // x22
  System_String_o *RestTime2; // x0
  __int64 v10; // x1
  __int64 v11; // x8
  UILabel_o *v12; // x21
  System_String_o *v13; // x20
  UnityEngine_Component_o *exRoomQuestBalloonRemainSprite; // x0
  float v15; // s0
  UnityEngine_Component_o *exRoomQuestBalloonLabel; // x0

  if ( (byte_5937DD9 & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5937DD9 = 1;
  }
  if ( this->fields.exRoomQuestTargetTime >= 1 )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
    Time = NetworkManager__getTime(0);
    exRoomQuestTargetTime = this->fields.exRoomQuestTargetTime;
    v7 = Time;
    v8 = exRoomQuestTargetTime - Time;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4);
    RestTime2 = LocalizationManager__GetRestTime2(exRoomQuestTargetTime, v7, v5);
    v11 = 376;
    if ( v8 < 0 )
      v11 = 384;
    v12 = *(UILabel_o **)((char *)&this->klass + v11);
    if ( v12 )
    {
      v13 = RestTime2;
      if ( RestTime2 )
      {
        if ( System_String__Equals_75473208(RestTime2, v12->fields.mText, 0) )
          return;
        RestTime2 = (System_String_o *)this->fields.exRoomQuestBalloonRemainSprite;
        if ( v8 < 0 )
        {
          if ( RestTime2 )
          {
            RestTime2 = (System_String_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)RestTime2,
                                             0);
            if ( RestTime2 )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)RestTime2, 0, 0);
              RestTime2 = (System_String_o *)this->fields.exRoomQuestBalloonLabel;
              if ( RestTime2 )
              {
                RestTime2 = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)RestTime2,
                                                 0);
                if ( RestTime2 )
                {
                  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)RestTime2, 0, 0);
                  RestTime2 = (System_String_o *)this->fields.exRoomQuestBalloonLimitTimeLabel;
                  if ( RestTime2 )
                  {
                    RestTime2 = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)RestTime2,
                                                     0);
                    if ( RestTime2 )
                    {
                      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)RestTime2, 1, 0);
LABEL_32:
                      UILabel__set_text(v12, v13, 0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
        else if ( RestTime2 )
        {
          RestTime2 = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)RestTime2, 0);
          if ( RestTime2 )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)RestTime2, 1, 0);
            RestTime2 = (System_String_o *)this->fields.exRoomQuestBalloonLabel;
            if ( RestTime2 )
            {
              RestTime2 = (System_String_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)RestTime2,
                                               0);
              if ( RestTime2 )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)RestTime2, 1, 0);
                RestTime2 = (System_String_o *)this->fields.exRoomQuestBalloonLimitTimeLabel;
                if ( RestTime2 )
                {
                  RestTime2 = (System_String_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)RestTime2,
                                                   0);
                  if ( RestTime2 )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)RestTime2, 0, 0);
                    exRoomQuestBalloonRemainSprite = (UnityEngine_Component_o *)this->fields.exRoomQuestBalloonRemainSprite;
                    if ( (unsigned __int64)(v8 - 86400) >= 0xFFFFFFFFFFFEBC90LL )
                    {
                      ComponentHelper__SetLocalPositionX(exRoomQuestBalloonRemainSprite, -23.0, 0);
                      exRoomQuestBalloonLabel = (UnityEngine_Component_o *)this->fields.exRoomQuestBalloonLabel;
                      v15 = 34.0;
                    }
                    else
                    {
                      ComponentHelper__SetLocalPositionX(exRoomQuestBalloonRemainSprite, -17.0, 0);
                      v15 = 29.0;
                      exRoomQuestBalloonLabel = (UnityEngine_Component_o *)this->fields.exRoomQuestBalloonLabel;
                    }
                    ComponentHelper__SetLocalPositionX(exRoomQuestBalloonLabel, v15, 0);
                    goto LABEL_32;
                  }
                }
              }
            }
          }
        }
      }
    }
    sub_21FFECC(RestTime2, v10);
  }
}


void MainMenuBarBase__UpdateNoticeNumber(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mSummonNoticeNumber; // x20
  __int64 v4; // x1
  long double v5; // q0
  __int64 v6; // x0
  __int64 v7; // x0
  DataManager_o *UserData; // x0
  Il2CppObject *MasterData_object; // x20
  long double v10; // q0
  int m_CancellationTokenSource; // w20
  __int64 v12; // x0
  __int64 v13; // x0
  UnityEngine_Object_o *mFriendNoticeNumber; // x20
  __int64 v15; // x1
  UnityEngine_Object_o *mMenuNoticeNumber; // x20

  if ( (byte_5937DB0 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_TblUserMaster___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_5937DB0 = 1;
  }
  mSummonNoticeNumber = (UnityEngine_Object_o *)this->fields.mSummonNoticeNumber;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(mSummonNoticeNumber, 0, 0) )
  {
    v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_WORD *)(v6 + 309) & 1) == 0 )
      v6 = sub_2237AF8(v5);
    v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
    if ( (*(_WORD *)(v7 + 309) & 1) == 0 )
      v7 = sub_2237AF8(v5);
    UserData = **(DataManager_o ***)(v7 + 184);
    if ( !UserData )
      goto LABEL_41;
    MasterData_object = DataManager__GetMasterData_object_(
                          UserData,
                          (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_TblUserMaster___);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
    if ( !byte_5931D52 )
    {
      sub_21FFC50(&NetworkManager_TypeInfo);
      byte_5931D52 = 1;
    }
    UserData = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4);
      UserData = (DataManager_o *)NetworkManager_TypeInfo;
    }
    if ( !MasterData_object )
      goto LABEL_41;
    UserData = (DataManager_o *)TblUserMaster__getUserData(
                                  (TblUserMaster_o *)MasterData_object,
                                  *(_QWORD *)(*(_QWORD *)&UserData[1].fields._DispLog + 64LL),
                                  0);
    if ( !UserData )
      goto LABEL_41;
    m_CancellationTokenSource = (int)UserData->fields.m_CancellationTokenSource;
    v12 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_WORD *)(v12 + 309) & 1) == 0 )
      v12 = sub_2237AF8(v10);
    v13 = *(_QWORD *)(*(_QWORD *)(v12 + 192) + 16LL);
    if ( (*(_WORD *)(v13 + 309) & 1) == 0 )
      v13 = sub_2237AF8(v10);
    UserData = **(DataManager_o ***)(v13 + 184);
    if ( !UserData )
      goto LABEL_41;
    UserData = (DataManager_o *)DataManager__GetMasterData_object_(
                                  UserData,
                                  (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_GachaMaster___);
    if ( !UserData )
      goto LABEL_41;
    UserData = (DataManager_o *)GachaMaster__getFriendPointGachaEntity((GachaMaster_o *)UserData, 0);
    if ( !UserData )
      goto LABEL_41;
    UserData = (DataManager_o *)GachaEntity__getPrice((GachaEntity_o *)UserData, 0);
    if ( !this->fields.mSummonNoticeNumber )
      goto LABEL_41;
    NoticeNumberComponent__SetNumber(this->fields.mSummonNoticeNumber, m_CancellationTokenSource / (int)UserData, 0);
  }
  mFriendNoticeNumber = (UnityEngine_Object_o *)this->fields.mFriendNoticeNumber;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  if ( UnityEngine_Object__op_Inequality(mFriendNoticeNumber, 0, 0) )
  {
    UserData = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !UserData )
      goto LABEL_41;
    UserData = (DataManager_o *)DataManager__GetMasterData_object_(
                                  UserData,
                                  (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_TblFriendMaster___);
    if ( !UserData )
      goto LABEL_41;
    UserData = (DataManager_o *)TblFriendMaster__GetSum((TblFriendMaster_o *)UserData, 2, 0);
    if ( !this->fields.mFriendNoticeNumber )
      goto LABEL_41;
    NoticeNumberComponent__SetNumber(this->fields.mFriendNoticeNumber, (int32_t)UserData, 0);
  }
  mMenuNoticeNumber = (UnityEngine_Object_o *)this->fields.mMenuNoticeNumber;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
  if ( UnityEngine_Object__op_Inequality(mMenuNoticeNumber, 0, 0) )
  {
    UserData = (DataManager_o *)this->fields.mMenuNoticeNumber;
    if ( UserData )
    {
      NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)UserData, 0, 0);
      return;
    }
LABEL_41:
    sub_21FFECC(UserData, v4);
  }
}


void MainMenuBarBase___ResetShopNoticeDraw_b__142_0(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarBase_o *v2; // x19
  struct ShopNotice_o *shopNotice; // x8
  UISprite_o *mExchangeServantItemSp; // x20
  Il2CppObject *v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x21
  int32_t ExchangeServantEventId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  v2 = this;
  if ( (byte_5937DDD & 1) == 0 )
  {
    sub_21FFC50(&AtlasManager_TypeInfo);
    this = (MainMenuBarBase_o *)sub_21FFC50(&StringLiteral_21165/*"icon_servant_exchange_available_{0}"*/);
    byte_5937DDD = 1;
  }
  shopNotice = v2->fields.shopNotice;
  if ( !shopNotice )
    goto LABEL_11;
  mExchangeServantItemSp = v2->fields.mExchangeServantItemSp;
  ExchangeServantEventId_k__BackingField = shopNotice->fields._ExchangeServantEventId_k__BackingField;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &ExchangeServantEventId_k__BackingField);
  v7 = System_String__Format((System_String_o *)StringLiteral_21165/*"icon_servant_exchange_available_{0}"*/, v5, 0);
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v6);
  if ( !AtlasManager__SetEventUI(mExchangeServantItemSp, v7, 0) )
  {
    this = (MainMenuBarBase_o *)v2->fields.mExchangeServantItemSp;
    if ( this )
    {
      UISprite__set_atlas((UISprite_o *)this, v2->fields.mExchangeServantItemDefaultAtlas, 0);
      this = (MainMenuBarBase_o *)v2->fields.mExchangeServantItemSp;
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, v2->fields.mExchangeServantItemDefaultSpriteName, 0);
        return;
      }
    }
LABEL_11:
    sub_21FFECC(this, method);
  }
}


void MainMenuBarBase__closeMenuStateImg(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UIButton_o *menuStateBtn; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_5937DBD & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21404/*"img_menu_menu"*/);
    byte_5937DBD = 1;
  }
  menuStateBtn = this->fields.menuStateBtn;
  if ( !menuStateBtn
    || (UIButton__set_normalSprite(menuStateBtn, (System_String_o *)StringLiteral_21404/*"img_menu_menu"*/, 0),
        (menuStateBtn = (UIButton_o *)this->fields.menuStateImg) == 0)
    || ((*(void (__fastcall **)(UIButton_o *, _QWORD))&menuStateBtn->klass[1]._2.thread_static_fields_offset)(
          menuStateBtn,
          *(_QWORD *)&menuStateBtn->klass[1]._2.token),
        (menuStateBtn = this->fields.menuStateBtn) == 0) )
  {
    sub_21FFECC(menuStateBtn, method);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)menuStateBtn, 0);
  AndroidBackKeyManager__RemoveBackBtn(gameObject, 0);
}


bool MainMenuBarBase__get_IsCloseHideMode(MainMenuBarBase_o *this, const MethodInfo *method)
{
  return this->fields.mIsCloseHideMode;
}


bool MainMenuBarBase__get_IsEnableOutSideCollider(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UnityEngine_Collider_o *mOutSide; // x0

  mOutSide = (UnityEngine_Collider_o *)this->fields.mOutSide;
  if ( !mOutSide )
    sub_21FFECC(0, method);
  return UnityEngine_Collider__get_enabled(mOutSide, 0);
}


bool MainMenuBarBase__get_IsMenuBarActive(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v3);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0);
}


void MainMenuBarBase__onMoveComplete(MainMenuBarBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  bool isOpen; // w1
  __int64 v5; // x1
  UnityEngine_Component_o *mNewItemSp; // x0
  __int64 v7; // x1
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_GameObject__o *summonCampaignObjects; // x8
  int32_t size; // w2
  int v11; // w9
  ShopNoticeTween_o *summonNoticeTween; // x0
  const MethodInfo *v13; // x2
  ShopNoticeTween_o *exRoomNoticeTween; // x0
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_5937DBE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937DBE = 1;
  }
  isOpen = this->fields.isOpen;
  memset(&v16, 0, sizeof(v16));
  this->fields.isSwitchMenuMoving = 0;
  MainMenuBarBase__SetOutSideColliderEnable(this, isOpen, v2);
  if ( !this->fields.isOpen )
  {
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mNewItemSp;
    if ( !mNewItemSp )
      goto LABEL_32;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
    if ( !mNewItemSp )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mNewItemSp, 0, 0);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mLimitedItemIconRoot;
    if ( !mNewItemSp )
      goto LABEL_32;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                              (UnityEngine_GameObject_o *)mNewItemSp,
                                              0);
    if ( !mNewItemSp )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mNewItemSp, 0, 0);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.summonCampainObject;
    if ( !mNewItemSp )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mNewItemSp, 0, 0);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.summonOneTimeFreeObject;
    if ( !mNewItemSp )
      goto LABEL_32;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mNewItemSp, 0, 0);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.summonCampaignObjects;
    if ( !mNewItemSp )
      goto LABEL_32;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      (System_Collections_Generic_List_object__o *)mNewItemSp,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    v16 = v15;
    v15.fields._list = 0;
    *(_QWORD *)&v15.fields._index = &v16;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v16.fields._current;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7);
      UnityEngine_Object__Destroy_83246496((UnityEngine_Object_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    summonCampaignObjects = this->fields.summonCampaignObjects;
    if ( !summonCampaignObjects )
      goto LABEL_32;
    size = summonCampaignObjects->fields._size;
    v11 = summonCampaignObjects->fields._version + 1;
    summonCampaignObjects->fields._size = 0;
    summonCampaignObjects->fields._version = v11;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)summonCampaignObjects->fields._items, 0, size, 0);
    summonNoticeTween = this->fields.summonNoticeTween;
    if ( summonNoticeTween )
      ShopNoticeTween__Stop(summonNoticeTween, 0);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.exRoomShopBalloonSprite;
    if ( !mNewItemSp
      || (mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0)) == 0
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mNewItemSp, 0, 0),
          (mNewItemSp = (UnityEngine_Component_o *)this->fields.exRoomQuestBalloonSprite) == 0)
      || (mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0)) == 0
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mNewItemSp, 0, 0),
          (mNewItemSp = (UnityEngine_Component_o *)this->fields.exRoomMissionBalloonSprite) == 0)
      || (mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0)) == 0 )
    {
LABEL_32:
      sub_21FFECC(mNewItemSp, v5);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mNewItemSp, 0, 0);
    exRoomNoticeTween = this->fields.exRoomNoticeTween;
    if ( exRoomNoticeTween )
      ShopNoticeTween__Stop(exRoomNoticeTween, 0);
    if ( !this->fields.isOpen )
      MainMenuBarBase__BackActive(this, 0, v13);
  }
}


void MainMenuBarBase__openMenuStateImg(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UIButton_o *menuStateBtn; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_5937DBC & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_21403/*"img_menu_close"*/);
    byte_5937DBC = 1;
  }
  menuStateBtn = this->fields.menuStateBtn;
  if ( !menuStateBtn
    || (UIButton__set_normalSprite(menuStateBtn, (System_String_o *)StringLiteral_21403/*"img_menu_close"*/, 0),
        (menuStateBtn = (UIButton_o *)this->fields.menuStateImg) == 0)
    || ((*(void (__fastcall **)(UIButton_o *, _QWORD))&menuStateBtn->klass[1]._2.thread_static_fields_offset)(
          menuStateBtn,
          *(_QWORD *)&menuStateBtn->klass[1]._2.token),
        (menuStateBtn = this->fields.menuStateBtn) == 0) )
  {
    sub_21FFECC(menuStateBtn, method);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)menuStateBtn, 0);
  AndroidBackKeyManager__AddBackBtn(gameObject, 0);
}


void MainMenuBarBase__set_IsCloseHideMode(MainMenuBarBase_o *this, bool value, const MethodInfo *method)
{
  this->fields.mIsCloseHideMode = value;
  if ( value )
    GameObjectExtensions__SetLocalPositionY(this->fields.menuComp, -420.0, 0);
}


void MainMenuBarBase__SetTerminalQuestListClose_d__152___ctor(
        MainMenuBarBase__SetTerminalQuestListClose_d__152_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool MainMenuBarBase__SetTerminalQuestListClose_d__152__MoveNext(
        MainMenuBarBase__SetTerminalQuestListClose_d__152_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w22
  System_Action_o *callback; // x0
  MainMenuBarBase_o *_4__this; // x20
  TerminalPramsManager_c *v6; // x0
  TerminalSceneComponent_c *v7; // x8
  TitleInfoControl_o *genericContainerHandle; // x0
  System_String_c *klass; // x8
  System_String_c *v10; // x8
  System_Func_bool__o *v11; // x21
  UnityEngine_WaitUntil_o *v12; // x20
  Il2CppObject **p__2__current; // x19
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7

  if ( (byte_5937DE9 & 1) == 0 )
  {
    sub_21FFC50(&System_Func_bool__TypeInfo);
    sub_21FFC50(&Method_MainMenuBarBase__SetTerminalQuestListClose_b__152_0__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    sub_21FFC50(&UnityEngine_WaitUntil_TypeInfo);
    byte_5937DE9 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      callback = this->fields.callback;
      this->fields.__1__state = -1;
      ActionExtensions__Call(callback, 0);
    }
  }
  else
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    if ( !byte_59359F2 )
    {
      sub_21FFC50(&TerminalPramsManager_TypeInfo);
      byte_59359F2 = 1;
    }
    v6 = TerminalPramsManager_TypeInfo;
    if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
      v6 = TerminalPramsManager_TypeInfo;
    }
    v7 = TerminalSceneComponent_TypeInfo;
    v6->static_fields->_IsAutoNoSe_k__BackingField = 1;
    if ( !*(&v7->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v7, method);
    if ( !byte_5931EF0 )
    {
      sub_21FFC50(&TerminalSceneComponent_TypeInfo);
      byte_5931EF0 = 1;
    }
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
      genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = genericContainerHandle->fields.particleAssetName->klass;
    if ( !klass )
      goto LABEL_29;
    genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle;
    if ( !genericContainerHandle )
      goto LABEL_29;
    TitleInfoControl__SetTouchEnable(genericContainerHandle, 0, 0);
    if ( !byte_5931EF0 )
    {
      sub_21FFC50(&TerminalSceneComponent_TypeInfo);
      byte_5931EF0 = 1;
    }
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
      genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
    }
    v10 = genericContainerHandle->fields.particleAssetName->klass;
    if ( !v10
      || (genericContainerHandle = *(TitleInfoControl_o **)&v10->_2.element_size) == 0
      || (ScrTerminalListTop__cbfTitleInfoBtnBack_Click((ScrTerminalListTop_o *)genericContainerHandle, 0, 0), !_4__this) )
    {
LABEL_29:
      sub_21FFECC(genericContainerHandle, method);
    }
    MainMenuBarBase__CloseMenu(_4__this, 0, 0);
    v11 = (System_Func_bool__o *)sub_21FFEBC(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      v11,
      (Il2CppObject *)_4__this,
      Method_MainMenuBarBase__SetTerminalQuestListClose_b__152_0__,
      0);
    v12 = (UnityEngine_WaitUntil_o *)sub_21FFEBC(UnityEngine_WaitUntil_TypeInfo);
    UnityEngine_WaitUntil___ctor(v12, v11, 0);
    this->fields.__2__current = (Il2CppObject *)v12;
    p__2__current = &this->fields.__2__current;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v12, v14, v15, v16, v17, v18, v19);
    *((_DWORD *)p__2__current - 2) = 1;
  }
  return _1__state == 0;
}


Il2CppObject *MainMenuBarBase__SetTerminalQuestListClose_d__152__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MainMenuBarBase__SetTerminalQuestListClose_d__152_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn MainMenuBarBase__SetTerminalQuestListClose_d__152__System_Collections_IEnumerator_Reset(
        MainMenuBarBase__SetTerminalQuestListClose_d__152_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_MainMenuBarBase__SetTerminalQuestListClose_d__152_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *MainMenuBarBase__SetTerminalQuestListClose_d__152__System_Collections_IEnumerator_get_Current(
        MainMenuBarBase__SetTerminalQuestListClose_d__152_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void MainMenuBarBase__SetTerminalQuestListClose_d__152__System_IDisposable_Dispose(
        MainMenuBarBase__SetTerminalQuestListClose_d__152_o *this,
        const MethodInfo *method)
{
  ;
}


void MainMenuBarBase___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5937DE7 & 1) == 0 )
  {
    sub_21FFC50(&MainMenuBarBase___c_TypeInfo);
    byte_5937DE7 = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(MainMenuBarBase___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MainMenuBarBase___c_TypeInfo->static_fields->__9 = (struct MainMenuBarBase___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)MainMenuBarBase___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MainMenuBarBase___c___ctor(MainMenuBarBase___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MainMenuBarBase___c___OnClickTerminal_b__151_0(MainMenuBarBase___c_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  TerminalSceneComponent_c *v3; // x8
  int v4; // w10
  ScrTerminalListTop_o *v5; // x0
  System_Collections_Generic_List_GameObject__c *klass; // x8
  System_Collections_Generic_List_GameObject__c *v7; // x8

  if ( (byte_5937DE8 & 1) == 0 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5937DE8 = 1;
  }
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
  if ( !byte_59359F2 )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_59359F2 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, method);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v3 = TerminalSceneComponent_TypeInfo;
  v4 = *(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1);
  v2->static_fields->_IsAutoNoSe_k__BackingField = 1;
  if ( !v4 )
    j_il2cpp_runtime_class_init_0(v3, method);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
  }
  v5 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    v5 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v5->fields.itemGetEffectInstances->klass;
  if ( !klass )
    goto LABEL_24;
  v5 = *(ScrTerminalListTop_o **)&klass->_2.element_size;
  if ( !v5 )
    goto LABEL_24;
  ScrTerminalListTop__SetTopLastIndexNextBoard(v5, 0);
  if ( !byte_5931EF0 )
  {
    sub_21FFC50(&TerminalSceneComponent_TypeInfo);
    byte_5931EF0 = 1;
  }
  v5 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !*(&TerminalSceneComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    v5 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  v7 = v5->fields.itemGetEffectInstances->klass;
  if ( !v7 || (v5 = *(ScrTerminalListTop_o **)&v7->_2.element_size) == 0 )
LABEL_24:
    sub_21FFECC(v5, method);
  ScrTerminalListTop__cbfTitleInfoBtnBack_Click(v5, 0, 0);
}


void MainMenuBarBase___c__DisplayClass179_0___ctor(
        MainMenuBarBase___c__DisplayClass179_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MainMenuBarBase___c__DisplayClass179_0___FrameInOut_b__0(
        MainMenuBarBase___c__DisplayClass179_0_o *this,
        const MethodInfo *method)
{
  struct MoveObject_o *mo; // x8

  mo = this->fields.mo;
  if ( !mo )
    sub_21FFECC(this, method);
  GameObjectExtensions__SetLocalPositionY(this->fields.tgt_obj, mo->fields.mNow.fields.y, 0);
}


void MainMenuBarBase___c__DisplayClass179_0___FrameInOut_b__1(
        MainMenuBarBase___c__DisplayClass179_0_o *this,
        const MethodInfo *method)
{
  GameObjectExtensions__SetLocalPositionY(this->fields.tgt_obj, this->fields.tgt_y, 0);
}