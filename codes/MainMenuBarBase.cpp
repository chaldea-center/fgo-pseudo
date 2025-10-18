void MainMenuBarBase___cctor(const MethodInfo *method)
{
  struct MainMenuBarBase_StaticFields *static_fields; // x8
  MainMenuBarBase_c *v2; // x8
  struct MainMenuBarBase_StaticFields *v3; // x9

  if ( (byte_4C4272E & 1) == 0 )
  {
    sub_1C37058(&MainMenuBarBase_TypeInfo);
    byte_4C4272E = 1;
  }
  static_fields = MainMenuBarBase_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->NOTICE_NUMBER_POS_MENU_BTN.fields.x = 0x41F0000042500000LL;
  static_fields->NOTICE_NUMBER_POS_MENU_BTN.fields.z = 0.0;
  v2 = MainMenuBarBase_TypeInfo;
  v3 = MainMenuBarBase_TypeInfo->static_fields;
  *(_QWORD *)&v3->NOTICE_NUMBER_POS_DISP_BTN.fields.x = 0x42180000422C0000LL;
  v3->NOTICE_NUMBER_POS_DISP_BTN.fields.z = 0.0;
  v2->static_fields->FOLDER_WAR_ID = 10000;
}


void MainMenuBarBase___ctor(MainMenuBarBase_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  System_Collections_Hashtable_o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_Action_array *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_Dictionary_object__int__o *v15; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4C4272D & 1) == 0 )
  {
    sub_1C37058(&System_Action___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_GameObject__int___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_GameObject__int__TypeInfo);
    sub_1C37058(&System_Collections_Hashtable_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_MainMenuBarButton___ctor__);
    sub_1C37058(&System_Collections_Generic_List_MainMenuBarButton__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_GameObject__TypeInfo);
    byte_4C4272D = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_MainMenuBarButton__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_MainMenuBarButton___ctor__);
  this->fields.mDispBtnList = (struct System_Collections_Generic_List_MainMenuBarButton__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mDispBtnList, (int32_t)v3, v4, v5);
  this->fields.selectedType = -1;
  this->fields.fadeType = 1;
  v6 = (System_Collections_Hashtable_o *)sub_1C372A4(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_64925884(v6, 0);
  this->fields.table = v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.table, (int32_t)v6, v7, v8);
  v9 = (struct System_Action_array *)sub_1C37100(System_Action___TypeInfo, 8);
  this->fields.mDispBtnActList = v9;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mDispBtnActList, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GameObject__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
  this->fields.summonCampaignObjects = (struct System_Collections_Generic_List_GameObject__o *)v12;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.summonCampaignObjects, (int32_t)v12, v13, v14);
  v15 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C372A4(System_Collections_Generic_Dictionary_GameObject__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v15,
    (const MethodInfo_3459F4C *)Method_System_Collections_Generic_Dictionary_GameObject__int___ctor__);
  this->fields.campaignNoticeMap = (struct System_Collections_Generic_Dictionary_GameObject__int__o *)v15;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.campaignNoticeMap, (int32_t)v15, v16, v17);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MainMenuBarBase__Awake(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x3
  float LocalPositionY; // s0
  void *mDispBtnList; // x0
  int32_t v7; // w2
  int v8; // w8
  Il2CppObject *terminalBtn; // x1
  __int64 v10; // x8
  _QWORD *v11; // x9
  __int64 v12; // x10
  __int64 v13; // x8
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  Il2CppObject *partyBtn; // x1
  __int64 v17; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  __int64 v20; // x8
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  Il2CppObject *summonBtn; // x1
  __int64 v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // x10
  __int64 v27; // x8
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  Il2CppObject *combineBtn; // x1
  __int64 v31; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  __int64 v34; // x8
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  Il2CppObject *shopBtn; // x1
  __int64 v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  __int64 v41; // x8
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  Il2CppObject *friendBtn; // x1
  __int64 v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  __int64 v48; // x8
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  Il2CppObject *myroomBtn; // x1
  __int64 v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  __int64 v55; // x8
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  Il2CppObject *latestScenarioBtn; // x1
  __int64 v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  __int64 v62; // x8
  UnityEngine_Object_o *mMenuNoticeNumber; // x20
  Il2CppObject *mNoticeNumberPrefab; // x20
  UnityEngine_GameObject_o *v65; // x20
  UnityEngine_GameObject_o *v66; // x0
  MainMenuBarBase_c *v67; // x0
  Il2CppObject *Component_object; // x0
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  UnityEngine_Object_o *mSummonNoticeNumber; // x20
  Il2CppObject *v72; // x20
  UnityEngine_GameObject_o *v73; // x20
  UnityEngine_GameObject_o *v74; // x0
  MainMenuBarBase_c *v75; // x0
  Il2CppObject *v76; // x0
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  UnityEngine_Object_o *mFriendNoticeNumber; // x20
  Il2CppObject *v80; // x20
  UnityEngine_GameObject_o *v81; // x20
  UnityEngine_GameObject_o *v82; // x0
  MainMenuBarBase_c *v83; // x0
  Il2CppObject *v84; // x0
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  struct ShopNotice_o *ShopNotice; // x0
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  UnityEngine_Object_o *mExchangeServantItemDefaultAtlas; // x20
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  struct UISprite_o *mExchangeServantItemSp; // x8
  struct UIAtlas_o *mAtlas; // x1
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  struct UISprite_o *v97; // x8
  struct System_String_o *mSpriteName; // x1
  const MethodInfo *v99; // x1

  if ( (byte_4C42708 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    sub_1C37058(&Method_System_Collections_Generic_List_MainMenuBarButton__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_MainMenuBarButton__Clear__);
    sub_1C37058(&MainMenuBarBase_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&ShopTopListViewManager_TypeInfo);
    byte_4C42708 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  LocalPositionY = GameObjectExtensions__GetLocalPositionY(gameObject, 0);
  mDispBtnList = this->fields.mDispBtnList;
  this->fields.mFrameInPosY = LocalPositionY;
  if ( !mDispBtnList )
    goto LABEL_110;
  v7 = *((_DWORD *)mDispBtnList + 6);
  v8 = *((_DWORD *)mDispBtnList + 7) + 1;
  *((_DWORD *)mDispBtnList + 6) = 0;
  *((_DWORD *)mDispBtnList + 7) = v8;
  if ( v7 >= 1 )
  {
    System_Array__Clear(*((System_Array_o **)mDispBtnList + 2), 0, v7, 0);
    mDispBtnList = this->fields.mDispBtnList;
    if ( !mDispBtnList )
      goto LABEL_110;
  }
  terminalBtn = (Il2CppObject *)this->fields.terminalBtn;
  v10 = *((_QWORD *)mDispBtnList + 2);
  v11 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v10 )
    goto LABEL_110;
  v12 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v12 >= *(_DWORD *)(v10 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = v10 + 8 * v12;
    *((_DWORD *)mDispBtnList + 6) = v12 + 1;
    *(_QWORD *)(v13 + 32) = terminalBtn;
    sub_1C36FFC((CGThumbnailListItem_o *)(v13 + 32), (int32_t)terminalBtn, v7, v4);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_110;
  partyBtn = (Il2CppObject *)this->fields.partyBtn;
  v17 = *((_QWORD *)mDispBtnList + 2);
  v18 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v17 )
    goto LABEL_110;
  v19 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v19 >= *(_DWORD *)(v17 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      partyBtn,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = v17 + 8 * v19;
    *((_DWORD *)mDispBtnList + 6) = v19 + 1;
    *(_QWORD *)(v20 + 32) = partyBtn;
    sub_1C36FFC((CGThumbnailListItem_o *)(v20 + 32), (int32_t)partyBtn, v14, v15);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_110;
  summonBtn = (Il2CppObject *)this->fields.summonBtn;
  v24 = *((_QWORD *)mDispBtnList + 2);
  v25 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v24 )
    goto LABEL_110;
  v26 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v26 >= *(_DWORD *)(v24 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      summonBtn,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
  }
  else
  {
    v27 = v24 + 8 * v26;
    *((_DWORD *)mDispBtnList + 6) = v26 + 1;
    *(_QWORD *)(v27 + 32) = summonBtn;
    sub_1C36FFC((CGThumbnailListItem_o *)(v27 + 32), (int32_t)summonBtn, v21, v22);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_110;
  combineBtn = (Il2CppObject *)this->fields.combineBtn;
  v31 = *((_QWORD *)mDispBtnList + 2);
  v32 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v31 )
    goto LABEL_110;
  v33 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v33 >= *(_DWORD *)(v31 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      combineBtn,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
  }
  else
  {
    v34 = v31 + 8 * v33;
    *((_DWORD *)mDispBtnList + 6) = v33 + 1;
    *(_QWORD *)(v34 + 32) = combineBtn;
    sub_1C36FFC((CGThumbnailListItem_o *)(v34 + 32), (int32_t)combineBtn, v28, v29);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_110;
  shopBtn = (Il2CppObject *)this->fields.shopBtn;
  v38 = *((_QWORD *)mDispBtnList + 2);
  v39 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v38 )
    goto LABEL_110;
  v40 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v40 >= *(_DWORD *)(v38 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      shopBtn,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
  }
  else
  {
    v41 = v38 + 8 * v40;
    *((_DWORD *)mDispBtnList + 6) = v40 + 1;
    *(_QWORD *)(v41 + 32) = shopBtn;
    sub_1C36FFC((CGThumbnailListItem_o *)(v41 + 32), (int32_t)shopBtn, v35, v36);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_110;
  friendBtn = (Il2CppObject *)this->fields.friendBtn;
  v45 = *((_QWORD *)mDispBtnList + 2);
  v46 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v45 )
    goto LABEL_110;
  v47 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v47 >= *(_DWORD *)(v45 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      friendBtn,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
  }
  else
  {
    v48 = v45 + 8 * v47;
    *((_DWORD *)mDispBtnList + 6) = v47 + 1;
    *(_QWORD *)(v48 + 32) = friendBtn;
    sub_1C36FFC((CGThumbnailListItem_o *)(v48 + 32), (int32_t)friendBtn, v42, v43);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_110;
  myroomBtn = (Il2CppObject *)this->fields.myroomBtn;
  v52 = *((_QWORD *)mDispBtnList + 2);
  v53 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v52 )
    goto LABEL_110;
  v54 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v54 >= *(_DWORD *)(v52 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      myroomBtn,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
  }
  else
  {
    v55 = v52 + 8 * v54;
    *((_DWORD *)mDispBtnList + 6) = v54 + 1;
    *(_QWORD *)(v55 + 32) = myroomBtn;
    sub_1C36FFC((CGThumbnailListItem_o *)(v55 + 32), (int32_t)myroomBtn, v49, v50);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_110;
  latestScenarioBtn = (Il2CppObject *)this->fields.latestScenarioBtn;
  v59 = *((_QWORD *)mDispBtnList + 2);
  v60 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v59 )
    goto LABEL_110;
  v61 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v61 >= *(_DWORD *)(v59 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      latestScenarioBtn,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
  }
  else
  {
    v62 = v59 + 8 * v61;
    *((_DWORD *)mDispBtnList + 6) = v61 + 1;
    *(_QWORD *)(v62 + 32) = latestScenarioBtn;
    sub_1C36FFC((CGThumbnailListItem_o *)(v62 + 32), (int32_t)latestScenarioBtn, v56, v57);
  }
  mMenuNoticeNumber = (UnityEngine_Object_o *)this->fields.mMenuNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mMenuNoticeNumber, 0, 0) )
  {
    mNoticeNumberPrefab = (Il2CppObject *)this->fields.mNoticeNumberPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mDispBtnList = UnityEngine_Object__Instantiate_object_(
                     mNoticeNumberPrefab,
                     (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this->fields.menuStateBtn )
      goto LABEL_110;
    v65 = (UnityEngine_GameObject_o *)mDispBtnList;
    v66 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.menuStateBtn, 0);
    GameObjectExtensions__SafeSetParent_36138184(v65, v66, 0);
    v67 = MainMenuBarBase_TypeInfo;
    if ( !MainMenuBarBase_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo);
      v67 = MainMenuBarBase_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v65, v67->static_fields->NOTICE_NUMBER_POS_MENU_BTN, 0);
    if ( !v65 )
      goto LABEL_110;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v65,
                         (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    this->fields.mMenuNoticeNumber = (struct NoticeNumberComponent_o *)Component_object;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mMenuNoticeNumber, (int32_t)Component_object, v69, v70);
    mDispBtnList = this->fields.mMenuNoticeNumber;
    if ( !mDispBtnList )
      goto LABEL_110;
    NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)mDispBtnList, 0, 0);
  }
  mSummonNoticeNumber = (UnityEngine_Object_o *)this->fields.mSummonNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mSummonNoticeNumber, 0, 0) )
  {
    v72 = (Il2CppObject *)this->fields.mNoticeNumberPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mDispBtnList = UnityEngine_Object__Instantiate_object_(
                     v72,
                     (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this->fields.summonBtn )
      goto LABEL_110;
    v73 = (UnityEngine_GameObject_o *)mDispBtnList;
    v74 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.summonBtn, 0);
    GameObjectExtensions__SafeSetParent_36138184(v73, v74, 0);
    v75 = MainMenuBarBase_TypeInfo;
    if ( !MainMenuBarBase_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo);
      v75 = MainMenuBarBase_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v73, v75->static_fields->NOTICE_NUMBER_POS_DISP_BTN, 0);
    if ( !v73 )
      goto LABEL_110;
    v76 = UnityEngine_GameObject__GetComponent_object_(
            v73,
            (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    this->fields.mSummonNoticeNumber = (struct NoticeNumberComponent_o *)v76;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mSummonNoticeNumber, (int32_t)v76, v77, v78);
    mDispBtnList = this->fields.mSummonNoticeNumber;
    if ( !mDispBtnList )
      goto LABEL_110;
    NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)mDispBtnList, 0, 0);
  }
  mFriendNoticeNumber = (UnityEngine_Object_o *)this->fields.mFriendNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mFriendNoticeNumber, 0, 0) )
  {
    v80 = (Il2CppObject *)this->fields.mNoticeNumberPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mDispBtnList = UnityEngine_Object__Instantiate_object_(
                     v80,
                     (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this->fields.friendBtn )
      goto LABEL_110;
    v81 = (UnityEngine_GameObject_o *)mDispBtnList;
    v82 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.friendBtn, 0);
    GameObjectExtensions__SafeSetParent_36138184(v81, v82, 0);
    v83 = MainMenuBarBase_TypeInfo;
    if ( !MainMenuBarBase_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo);
      v83 = MainMenuBarBase_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v81, v83->static_fields->NOTICE_NUMBER_POS_DISP_BTN, 0);
    if ( !v81 )
      goto LABEL_110;
    v84 = UnityEngine_GameObject__GetComponent_object_(
            v81,
            (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    this->fields.mFriendNoticeNumber = (struct NoticeNumberComponent_o *)v84;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mFriendNoticeNumber, (int32_t)v84, v85, v86);
    mDispBtnList = this->fields.mFriendNoticeNumber;
    if ( !mDispBtnList )
      goto LABEL_110;
    NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)mDispBtnList, 0, 0);
  }
  if ( !ShopTopListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopTopListViewManager_TypeInfo);
  ShopNotice = ShopTopListViewManager__GetShopNotice(0);
  this->fields.shopNotice = ShopNotice;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.shopNotice, (int32_t)ShopNotice, v88, v89);
  mDispBtnList = this->fields.mNewItemSp;
  if ( !mDispBtnList )
    goto LABEL_110;
  mDispBtnList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mDispBtnList, 0);
  if ( !mDispBtnList )
    goto LABEL_110;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0);
  mDispBtnList = this->fields.mLimitedItemIconRoot;
  if ( !mDispBtnList )
    goto LABEL_110;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0);
  mDispBtnList = this->fields.mPeriodLimitedItemSp;
  if ( !mDispBtnList )
    goto LABEL_110;
  mDispBtnList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mDispBtnList, 0);
  if ( !mDispBtnList )
    goto LABEL_110;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0);
  mDispBtnList = this->fields.mMonthlyLimitedItemSp;
  if ( !mDispBtnList )
    goto LABEL_110;
  mDispBtnList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mDispBtnList, 0);
  if ( !mDispBtnList )
    goto LABEL_110;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0);
  mDispBtnList = this->fields.mExchangeServantItemSp;
  if ( !mDispBtnList )
    goto LABEL_110;
  mDispBtnList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mDispBtnList, 0);
  if ( !mDispBtnList )
    goto LABEL_110;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0);
  mDispBtnList = this->fields.StartUpSummonSp;
  if ( !mDispBtnList )
    goto LABEL_110;
  mDispBtnList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mDispBtnList, 0);
  if ( !mDispBtnList )
    goto LABEL_110;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0);
  mDispBtnList = this->fields.mPeriodLimitedTimeLb;
  if ( !mDispBtnList )
    goto LABEL_110;
  mDispBtnList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mDispBtnList, 0);
  if ( !mDispBtnList )
    goto LABEL_110;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0);
  mDispBtnList = this->fields.mMonthlyLimitedTimeLb;
  if ( !mDispBtnList )
    goto LABEL_110;
  mDispBtnList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mDispBtnList, 0);
  if ( !mDispBtnList )
    goto LABEL_110;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0);
  mDispBtnList = this->fields.mExchangeServantItemLb;
  if ( !mDispBtnList )
    goto LABEL_110;
  mDispBtnList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mDispBtnList, 0);
  if ( !mDispBtnList )
    goto LABEL_110;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0);
  mDispBtnList = this->fields.mExchangeServantTimeRoot;
  if ( !mDispBtnList )
    goto LABEL_110;
  mDispBtnList = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)mDispBtnList, 0);
  if ( !mDispBtnList )
    goto LABEL_110;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0);
  mDispBtnList = this->fields.StartUpSummonLb;
  if ( !mDispBtnList )
    goto LABEL_110;
  mDispBtnList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mDispBtnList, 0);
  if ( !mDispBtnList )
    goto LABEL_110;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0);
  mExchangeServantItemDefaultAtlas = (UnityEngine_Object_o *)this->fields.mExchangeServantItemDefaultAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mDispBtnList = (void *)UnityEngine_Object__op_Equality(mExchangeServantItemDefaultAtlas, 0, 0);
  if ( ((unsigned __int8)mDispBtnList & 1) != 0 )
  {
    mExchangeServantItemSp = this->fields.mExchangeServantItemSp;
    if ( mExchangeServantItemSp )
    {
      mAtlas = mExchangeServantItemSp->fields.mAtlas;
      this->fields.mExchangeServantItemDefaultAtlas = mAtlas;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mExchangeServantItemDefaultAtlas, (int32_t)mAtlas, v91, v92);
      v97 = this->fields.mExchangeServantItemSp;
      if ( v97 )
      {
        mSpriteName = v97->fields.mSpriteName;
        this->fields.mExchangeServantItemDefaultSpriteName = mSpriteName;
        sub_1C36FFC(
          (CGThumbnailListItem_o *)&this->fields.mExchangeServantItemDefaultSpriteName,
          (int32_t)mSpriteName,
          v95,
          v96);
        goto LABEL_107;
      }
    }
LABEL_110:
    sub_1C372B4(mDispBtnList);
  }
LABEL_107:
  mDispBtnList = this->fields.summonCampainObject;
  if ( !mDispBtnList )
    goto LABEL_110;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0);
  mDispBtnList = this->fields.summonOneTimeFreeObject;
  if ( !mDispBtnList )
    goto LABEL_110;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0);
  MainMenuBarBase__UpdateNoticeNumber(this, v99);
}


// local variable allocation has failed, the output may be wrong!
void MainMenuBarBase__BackActive(MainMenuBarBase_o *this, bool isOpen, const MethodInfo *method)
{
  UnityEngine_Component_o *backCloseSprite; // x0
  float v6; // s1 OVERLAPPED
  int v7; // s2
  int v8; // s0

  backCloseSprite = (UnityEngine_Component_o *)this->fields.backCloseSprite;
  if ( !backCloseSprite )
    goto LABEL_12;
  backCloseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backCloseSprite, 0);
  if ( !backCloseSprite )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backCloseSprite, !isOpen, 0);
  backCloseSprite = (UnityEngine_Component_o *)this->fields.backOpenSprite;
  if ( !backCloseSprite )
    goto LABEL_12;
  backCloseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backCloseSprite, 0);
  if ( !backCloseSprite
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backCloseSprite, isOpen, 0),
        (backCloseSprite = (UnityEngine_Component_o *)this->fields.backOpenSprite) == 0)
    || (UIWidget__SetDirty((UIWidget_o *)backCloseSprite, 0),
        (backCloseSprite = (UnityEngine_Component_o *)this->fields.backCloseSprite) == 0)
    || (UIWidget__SetDirty((UIWidget_o *)backCloseSprite, 0),
        (backCloseSprite = (UnityEngine_Component_o *)this->fields.menuGrid) == 0)
    || (backCloseSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)backCloseSprite,
                                                       0)) == 0 )
  {
LABEL_12:
    sub_1C372B4(backCloseSprite);
  }
  v6 = -33.0;
  if ( isOpen )
    v6 = -6.0;
  v7 = 0;
  v8 = -1010237440;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)backCloseSprite,
    *(UnityEngine_Vector3_o *)(&v6 - 1),
    0);
}


void MainMenuBarBase__CheckLatestScenarioButtonEnable(MainMenuBarBase_o *this, const MethodInfo *method)
{
  void *Instance; // x0
  UnityEngine_Object_o *v4; // x20
  __int64 naturalAligment; // x10
  UnityEngine_Object_o *m_CachedPtr; // x20
  MyRoomStateMaterial_o *monitor; // x20
  MainMenuBarBase_o *State; // x0
  const MethodInfo *v9; // x3
  int32_t mOldState; // w8
  System_Collections_Generic_List_object__o *mSelectInfos; // x20
  int32_t v12; // w1
  int32_t questId[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C42711 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
    sub_1C37058(&MyRoomRootComponent_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C42711 = 1;
  }
  *(_QWORD *)questId = 0;
  if ( this->fields.kind != 8 )
    goto LABEL_27;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  v4 = (UnityEngine_Object_o *)*((_QWORD *)Instance + 4);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v4, 0, 0) )
    goto LABEL_27;
  if ( !v4 )
    goto LABEL_27;
  naturalAligment = MyRoomRootComponent_TypeInfo->_2.naturalAligment;
  if ( v4->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (MyRoomRootComponent_c *)v4->klass->_2.typeHierarchy[naturalAligment - 1] != MyRoomRootComponent_TypeInfo )
  {
    goto LABEL_27;
  }
  m_CachedPtr = (UnityEngine_Object_o *)v4[2].fields.m_CachedPtr;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (void *)UnityEngine_Object__op_Equality(m_CachedPtr, 0, 0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    goto LABEL_27;
  if ( !m_CachedPtr )
    goto LABEL_30;
  if ( MyRoomControl__GetState((MyRoomControl_o *)m_CachedPtr, 0) == 1 )
    goto LABEL_27;
  monitor = (MyRoomStateMaterial_o *)m_CachedPtr[38].monitor;
  if ( !monitor )
    goto LABEL_27;
  State = (MainMenuBarBase_o *)MyRoomStateMaterial__GetState(monitor, 0);
  if ( (_DWORD)State != 7 )
  {
    State = (MainMenuBarBase_o *)MyRoomStateMaterial__GetState(monitor, 0);
    if ( (_DWORD)State != 10 )
      goto LABEL_27;
  }
  mOldState = monitor->fields.mOldState;
  if ( mOldState != 2 && mOldState != 9 )
    goto LABEL_27;
  mSelectInfos = (System_Collections_Generic_List_object__o *)monitor->fields.mSelectInfos;
  if ( !mSelectInfos || !MainMenuBarBase__GetJumpSceneInfo(State, &questId[1], questId, v9) )
    goto LABEL_27;
  Instance = System_Collections_Generic_List_object___get_Item(
               mSelectInfos,
               0,
               (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
  if ( !Instance )
    goto LABEL_30;
  if ( *((_DWORD *)Instance + 10) != questId[1] )
  {
LABEL_27:
    Instance = this->fields.latestScenarioBtn;
    if ( Instance )
    {
      v12 = 2;
      goto LABEL_29;
    }
LABEL_30:
    sub_1C372B4(Instance);
  }
  Instance = this->fields.latestScenarioBtn;
  if ( !Instance )
    goto LABEL_30;
  v12 = 3;
LABEL_29:
  MainMenuBarButton__SetMode((MainMenuBarButton_o *)Instance, v12, 0);
}


void MainMenuBarBase__CheckTerminalButtonEnable(MainMenuBarBase_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x8
  MainMenuBarButton_o *terminalBtn; // x0
  int32_t v5; // w1

  if ( (byte_4C42710 & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C42710 = 1;
  }
  if ( this->fields.kind != 1 )
  {
    terminalBtn = this->fields.terminalBtn;
    if ( terminalBtn )
      goto LABEL_14;
LABEL_16:
    sub_1C372B4(terminalBtn);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3FA9A )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3FA9A = 1;
  }
  v3 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v3 = TerminalPramsManager_TypeInfo;
  }
  terminalBtn = this->fields.terminalBtn;
  if ( !terminalBtn )
    goto LABEL_16;
  if ( v3->static_fields->_DispState_k__BackingField != 1 )
  {
LABEL_14:
    v5 = 2;
    goto LABEL_15;
  }
  v5 = 3;
LABEL_15:
  MainMenuBarButton__SetMode(terminalBtn, v5, 0);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  float mFrameInPosY; // s14
  float v12; // s8
  Il2CppObject *Component_object; // x0
  MoveObject_o **v14; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  float v17; // s9
  float IntpTime_AutoResume; // s9
  float x; // s10
  float z; // s11
  MoveObject_o *v21; // x21
  float v22; // s12
  float v23; // s13
  System_Action_o *v24; // x22
  System_Action_o *v25; // x23
  float v26; // s3 OVERLAPPED
  float v27; // s0 OVERLAPPED
  float v28; // s5
  float v29; // s2
  float v30; // s4
  float v31; // s1
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C4272C & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&Method_MainMenuBarBase___c__DisplayClass142_0__FrameInOut_b__0__);
    sub_1C37058(&Method_MainMenuBarBase___c__DisplayClass142_0__FrameInOut_b__1__);
    sub_1C37058(&MainMenuBarBase___c__DisplayClass142_0_TypeInfo);
    byte_4C4272C = 1;
  }
  v7 = sub_1C372A4(MainMenuBarBase___c__DisplayClass142_0_TypeInfo);
  MainMenuBarBase___c__DisplayClass142_0___ctor((MainMenuBarBase___c__DisplayClass142_0_o *)v7, 0);
  gameObject = (MoveObject_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !v7 )
    goto LABEL_29;
  *(_QWORD *)(v7 + 16) = gameObject;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)gameObject, v9, v10);
  mFrameInPosY = this->fields.mFrameInPosY;
  if ( is_framein )
    v12 = this->fields.mFrameInPosY;
  else
    v12 = -90.0;
  *(float *)(v7 + 32) = v12;
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       *(UnityEngine_GameObject_o **)(v7 + 16),
                       (const MethodInfo_3140CC0 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  *(_QWORD *)(v7 + 24) = Component_object;
  v14 = (MoveObject_o **)(v7 + 24);
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)Component_object, v15, v16);
  if ( is_force
    || (v17 = *(float *)(v7 + 32),
        v17 == GameObjectExtensions__GetLocalPositionY(*(UnityEngine_GameObject_o **)(v7 + 16), 0)) )
  {
    gameObject = *v14;
    if ( *v14 )
    {
      MoveObject__Stop(gameObject, 0);
      GameObjectExtensions__SetLocalPositionY(*(UnityEngine_GameObject_o **)(v7 + 16), *(float *)(v7 + 32), 0);
      return;
    }
LABEL_29:
    sub_1C372B4(gameObject);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v7 + 16), 0);
  x = LocalPosition.fields.x;
  z = LocalPosition.fields.z;
  v33 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v7 + 16), 0);
  v21 = *(MoveObject_o **)(v7 + 24);
  v22 = v33.fields.x;
  v23 = v33.fields.z;
  v24 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v24, (Il2CppObject *)v7, Method_MainMenuBarBase___c__DisplayClass142_0__FrameInOut_b__0__, 0);
  v25 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v25, (Il2CppObject *)v7, Method_MainMenuBarBase___c__DisplayClass142_0__FrameInOut_b__1__, 0);
  if ( !v21 )
    goto LABEL_29;
  if ( is_framein )
    v26 = x;
  else
    v26 = v22;
  if ( is_framein )
    v27 = v22;
  else
    v27 = x;
  if ( is_framein )
    v28 = z;
  else
    v28 = v23;
  if ( is_framein )
    v29 = v23;
  else
    v29 = z;
  v30 = v12;
  v31 = -90.0;
  if ( !is_framein )
    v31 = mFrameInPosY;
  MoveObject__Play(
    v21,
    *(UnityEngine_Vector3_o *)&v27,
    *(UnityEngine_Vector3_o *)&v26,
    IntpTime_AutoResume,
    v24,
    v25,
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
  Il2CppObject *MasterData_object; // x0
  UserQuestMaster_o *v8; // x21
  System_Collections_Generic_List_int__o *MovedEventScriptList_42563580; // x22
  bool IsClearAllMainScenario; // w23
  int64_t v11; // x1
  QuestEntity_o *LatestMainScenarioLastQuest; // x0
  QuestScriptEntity_o *EntityFromQuestId; // x0
  int parentWarId; // w21
  QuestScriptEntity_o *v15; // x20
  MainMenuBarBase_c *v16; // x0

  if ( (byte_4C42727 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_QuestScriptMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1C37058(&MainMenuBarBase_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4C42727 = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  *warId = -1;
  *questId = -1;
  v8 = (UserQuestMaster_o *)MasterData_object;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestScriptMaster___);
  if ( !Instance )
    goto LABEL_30;
  MovedEventScriptList_42563580 = QuestScriptMaster__GetMovedEventScriptList_42563580(
                                    (QuestScriptMaster_o *)Instance,
                                    0);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !Instance )
    goto LABEL_30;
  IsClearAllMainScenario = WarMaster__IsClearAllMainScenario((WarMaster_o *)Instance, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
  }
  Instance = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Instance = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !v8 )
    goto LABEL_30;
  v11 = *(_QWORD *)(*(_QWORD *)&Instance[1].fields._DispLog + 64LL);
  if ( IsClearAllMainScenario )
  {
    LatestMainScenarioLastQuest = UserQuestMaster__GetLatestMainScenarioLastQuest(
                                    v8,
                                    v11,
                                    MovedEventScriptList_42563580,
                                    0);
    if ( !LatestMainScenarioLastQuest )
      return (char)LatestMainScenarioLastQuest;
  }
  else
  {
    LatestMainScenarioLastQuest = UserQuestMaster__GetMainScenarioLatestClear(v8, v11, MovedEventScriptList_42563580, 0);
    if ( !LatestMainScenarioLastQuest )
      return (char)LatestMainScenarioLastQuest;
  }
  *questId = LatestMainScenarioLastQuest->fields.id;
  Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance
    || (*warId = QuestTree__GetWarID_ByQuestID((QuestTree_o *)Instance, *questId, 0),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestScriptMaster___)) == 0 )
  {
LABEL_30:
    sub_1C372B4(Instance);
  }
  EntityFromQuestId = QuestScriptMaster__GetEntityFromQuestId((QuestScriptMaster_o *)Instance, *questId, 0);
  if ( EntityFromQuestId )
  {
    parentWarId = EntityFromQuestId->fields.parentWarId;
    v15 = EntityFromQuestId;
    if ( parentWarId >= 1 )
    {
      v16 = MainMenuBarBase_TypeInfo;
      if ( !MainMenuBarBase_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo);
        v16 = MainMenuBarBase_TypeInfo;
      }
      if ( parentWarId < v16->static_fields->FOLDER_WAR_ID )
        *warId = v15->fields.parentWarId;
    }
  }
  LOBYTE(LatestMainScenarioLastQuest) = 1;
  return (char)LatestMainScenarioLastQuest;
}


bool MainMenuBarBase__IsSpotSelectWait(MainMenuBarBase_o *this, const MethodInfo *method)
{
  ScrTerminalListTop_o *MyFsmP; // x0
  QuestRewardItemAction_c *klass; // x8
  QuestRewardItemAction_c *v4; // x8
  __int64 v5; // x8

  if ( (byte_4C4271C & 1) == 0 )
  {
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    sub_1C37058(&StringLiteral_12276/*"SPOT SELECT WAIT"*/);
    byte_4C4271C = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C3CF06 )
  {
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C3CF06 = 1;
  }
  MyFsmP = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    MyFsmP = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = MyFsmP->fields.friendPointBoostItemAction->klass;
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
  if ( System_String__IndexOf_63620032((System_String_o *)MyFsmP, (System_String_o *)StringLiteral_12276/*"SPOT SELECT WAIT"*/, 0) < 0 )
    return 0;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C3CF06 )
  {
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C3CF06 = 1;
  }
  MyFsmP = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    MyFsmP = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  v4 = MyFsmP->fields.friendPointBoostItemAction->klass;
  if ( !v4 || (v5 = *(_QWORD *)&v4->_2.static_fields_size) == 0 || (MyFsmP = *(ScrTerminalListTop_o **)(v5 + 544)) == 0 )
LABEL_26:
    sub_1C372B4(MyFsmP);
  return !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)MyFsmP, 0);
}


void MainMenuBarBase__OnClickCombine(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *combineBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_4C4271F & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_8522/*"MAIN_MENU_BAR_SELECT_COMBINE"*/);
    byte_4C4271F = 1;
  }
  combineBtn = this->fields.combineBtn;
  if ( !combineBtn )
    sub_1C372B4(0);
  IsEnabled = MainMenuBarButton__IsEnabled(combineBtn, 0);
  MainMenuBarBase__OnClickCommon(this, 3, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 32, (System_String_o *)StringLiteral_8522/*"MAIN_MENU_BAR_SELECT_COMBINE"*/, 0, v6);
}


void MainMenuBarBase__OnClickCommon(MainMenuBarBase_o *this, int32_t kind, bool isEnabled, const MethodInfo *method)
{
  MainMenuBarBase_o *v6; // x19
  struct System_Action_array *mDispBtnActList; // x8
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Action_array *v10; // x8
  Il2CppClass **v11; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  _QWORD *v14; // x0
  int32_t v15; // w19
  System_Reflection_MethodBase_o *v16; // x0

  v6 = this;
  if ( (byte_4C42719 & 1) == 0 )
  {
    this = (MainMenuBarBase_o *)sub_1C37058(&Method_MainMenuBarBase_OnClickCommon__);
    byte_4C42719 = 1;
  }
  if ( isEnabled )
  {
    mDispBtnActList = v6->fields.mDispBtnActList;
    if ( mDispBtnActList )
    {
      if ( LODWORD(mDispBtnActList->max_length) <= kind )
        goto LABEL_16;
      ActionExtensions__Call(mDispBtnActList->m_Items[kind], 0);
      v10 = v6->fields.mDispBtnActList;
      if ( v10 )
      {
        if ( LODWORD(v10->max_length) > kind )
        {
          v11 = &v10->obj.klass + kind;
          v11[4] = 0;
          sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 4), 0, v8, v9);
          ActionExtensions__Call(v6->fields.mAllBtnAct, 0);
          v6->fields.mAllBtnAct = 0;
          sub_1C36FFC((CGThumbnailListItem_o *)&v6->fields.mAllBtnAct, 0, v12, v13);
          v14 = Method_MainMenuBarBase_OnClickCommon__;
          if ( (*((_BYTE *)Method_MainMenuBarBase_OnClickCommon__ + 83) & 2) != 0 )
            v14 = (_QWORD *)sub_1C37070(Method_MainMenuBarBase_OnClickCommon__);
          v15 = 0;
          goto LABEL_14;
        }
LABEL_16:
        sub_1C372BC(this);
      }
    }
    sub_1C372B4(this);
  }
  v14 = Method_MainMenuBarBase_OnClickCommon__;
  if ( (*((_BYTE *)Method_MainMenuBarBase_OnClickCommon__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1C37070(Method_MainMenuBarBase_OnClickCommon__);
  v15 = 2;
LABEL_14:
  v16 = (System_Reflection_MethodBase_o *)sub_1C3703C(v14, v14[4]);
  OverwriteAssetSoundName__PlaySystemSe(v16, v15, 0, 0);
}


void MainMenuBarBase__OnClickFormation(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *partyBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_4C4271D & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_8526/*"MAIN_MENU_BAR_SELECT_PARTY"*/);
    byte_4C4271D = 1;
  }
  partyBtn = this->fields.partyBtn;
  if ( !partyBtn )
    sub_1C372B4(0);
  IsEnabled = MainMenuBarButton__IsEnabled(partyBtn, 0);
  MainMenuBarBase__OnClickCommon(this, 1, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 39, (System_String_o *)StringLiteral_8526/*"MAIN_MENU_BAR_SELECT_PARTY"*/, 0, v6);
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

  if ( (byte_4C42724 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_GameObject__int__TryGetValue__);
    byte_4C42724 = 1;
  }
  value = 0;
  campaignNoticeMap = this->fields.campaignNoticeMap;
  if ( !campaignNoticeMap )
    sub_1C372B4(0);
  if ( System_Collections_Generic_Dictionary_object__int___TryGetValue(
         (System_Collections_Generic_Dictionary_object__int__o *)campaignNoticeMap,
         (Il2CppObject *)campaignObject,
         &value,
         (const MethodInfo_345C0BC *)Method_System_Collections_Generic_Dictionary_GameObject__int__TryGetValue__) )
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

  if ( (byte_4C42721 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_8523/*"MAIN_MENU_BAR_SELECT_FRIEND"*/);
    byte_4C42721 = 1;
  }
  friendBtn = this->fields.friendBtn;
  if ( !friendBtn )
    sub_1C372B4(0);
  IsEnabled = MainMenuBarButton__IsEnabled(friendBtn, 0);
  MainMenuBarBase__OnClickCommon(this, 5, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 23, (System_String_o *)StringLiteral_8523/*"MAIN_MENU_BAR_SELECT_FRIEND"*/, 0, v6);
}


void MainMenuBarBase__OnClickLatestScenario(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *latestScenarioBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  MainMenuBarBase_o *v6; // x0
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x4
  MyRoomRootComponent_c *v9; // x0
  int32_t v10; // w21
  int32_t v11; // w22
  System_String_o *MYROOM_STATE_NEW_MATERIAL; // x23
  SceneJumpInfo_o *v13; // x20
  int32_t questId[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C42723 & 1) == 0 )
  {
    sub_1C37058(&MyRoomRootComponent_TypeInfo);
    sub_1C37058(&SceneJumpInfo_TypeInfo);
    sub_1C37058(&StringLiteral_8524/*"MAIN_MENU_BAR_SELECT_MYROOM"*/);
    byte_4C42723 = 1;
  }
  *(_QWORD *)questId = 0;
  latestScenarioBtn = this->fields.latestScenarioBtn;
  if ( !latestScenarioBtn )
    sub_1C372B4(0);
  IsEnabled = MainMenuBarButton__IsEnabled(latestScenarioBtn, 0);
  MainMenuBarBase__OnClickCommon(this, 7, IsEnabled, v5);
  if ( IsEnabled )
  {
    if ( MainMenuBarBase__GetJumpSceneInfo(v6, &questId[1], questId, v7) )
    {
      v9 = MyRoomRootComponent_TypeInfo;
      if ( !MyRoomRootComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomRootComponent_TypeInfo);
        v9 = MyRoomRootComponent_TypeInfo;
      }
      v11 = questId[0];
      v10 = questId[1];
      MYROOM_STATE_NEW_MATERIAL = v9->static_fields->MYROOM_STATE_NEW_MATERIAL;
      v13 = (SceneJumpInfo_o *)sub_1C372A4(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41479180(v13, MYROOM_STATE_NEW_MATERIAL, v10, v11, 0);
    }
    else
    {
      v13 = 0;
    }
    MainMenuBarBase__SendSelectSignal(this, 30, (System_String_o *)StringLiteral_8524/*"MAIN_MENU_BAR_SELECT_MYROOM"*/, (Il2CppObject *)v13, v8);
  }
}


void MainMenuBarBase__OnClickMyroom(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *myroomBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_4C42722 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_8524/*"MAIN_MENU_BAR_SELECT_MYROOM"*/);
    byte_4C42722 = 1;
  }
  myroomBtn = this->fields.myroomBtn;
  if ( !myroomBtn )
    sub_1C372B4(0);
  IsEnabled = MainMenuBarButton__IsEnabled(myroomBtn, 0);
  MainMenuBarBase__OnClickCommon(this, 6, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 30, (System_String_o *)StringLiteral_8524/*"MAIN_MENU_BAR_SELECT_MYROOM"*/, 0, v6);
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

  if ( (byte_4C42720 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_8527/*"MAIN_MENU_BAR_SELECT_SHOP"*/);
    byte_4C42720 = 1;
  }
  shopBtn = this->fields.shopBtn;
  if ( !shopBtn )
    sub_1C372B4(0);
  IsEnabled = MainMenuBarButton__IsEnabled(shopBtn, 0);
  MainMenuBarBase__OnClickCommon(this, 4, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 22, (System_String_o *)StringLiteral_8527/*"MAIN_MENU_BAR_SELECT_SHOP"*/, 0, v6);
}


void MainMenuBarBase__OnClickSummon(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *summonBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4
  TerminalPramsManager_c *v7; // x0

  if ( (byte_4C4271E & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_8528/*"MAIN_MENU_BAR_SELECT_SUMMON"*/);
    byte_4C4271E = 1;
  }
  summonBtn = this->fields.summonBtn;
  if ( !summonBtn )
    sub_1C372B4(0);
  IsEnabled = MainMenuBarButton__IsEnabled(summonBtn, 0);
  MainMenuBarBase__OnClickCommon(this, 2, IsEnabled, v5);
  if ( IsEnabled )
  {
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3F526 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3F526 = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
    }
    v7->static_fields->_SummonId_k__BackingField = 0;
    MainMenuBarBase__SendSelectSignal(this, 20, (System_String_o *)StringLiteral_8528/*"MAIN_MENU_BAR_SELECT_SUMMON"*/, 0, v6);
  }
}


void MainMenuBarBase__OnClickSummonCampaign(MainMenuBarBase_o *this, int32_t gachaId, const MethodInfo *method)
{
  AvalonSceneManager_o *Instance; // x0
  System_String_o *v6; // x21
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0
  TerminalPramsManager_c *v9; // x0
  const MethodInfo *v10; // x4
  int klass; // w20
  int v12; // w20
  System_String_o *SceneName; // x0
  const MethodInfo *v14; // x3
  bool v15; // w2
  MainMenuBarBase_o *v16; // x0
  UnityEngine_Object_o *activeScene; // x21
  const MethodInfo *v18; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C42725 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_1C37058(&Method_MainMenuBarBase_OnClickSummonCampaign__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&SceneList_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&StringLiteral_8528/*"MAIN_MENU_BAR_SELECT_SUMMON"*/);
    byte_4C42725 = 1;
  }
  entity = 0;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_46;
  Instance = (AvalonSceneManager_o *)AvalonSceneManager__getNowSceneName(Instance, 0);
  if ( !this->fields.summonBtn )
    goto LABEL_46;
  v6 = (System_String_o *)Instance;
  if ( MainMenuBarButton__IsEnabled(this->fields.summonBtn, 0) )
  {
    v7 = Method_MainMenuBarBase_OnClickSummonCampaign__;
    if ( (*((_BYTE *)Method_MainMenuBarBase_OnClickSummonCampaign__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C37070(Method_MainMenuBarBase_OnClickSummonCampaign__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C3703C(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3F524 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3F524 = 1;
    }
    v9 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
    }
    v9->static_fields->_SummonType_k__BackingField = 1;
    if ( !byte_4C3F526 )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      v9 = TerminalPramsManager_TypeInfo;
      byte_4C3F526 = 1;
    }
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = TerminalPramsManager_TypeInfo;
    }
    v9->static_fields->_SummonId_k__BackingField = gachaId;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Instance = (AvalonSceneManager_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_GachaMaster___);
    if ( Instance )
    {
      Instance = (AvalonSceneManager_o *)DataMasterBase_object__object__int___TryGetEntity(
                                           (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                           &entity,
                                           gachaId,
                                           (const MethodInfo_33A10EC *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)Instance & 1) == 0 )
      {
LABEL_35:
        MainMenuBarBase__SendSelectSignal(this, 20, (System_String_o *)StringLiteral_8528/*"MAIN_MENU_BAR_SELECT_SUMMON"*/, 0, v10);
        return;
      }
      if ( entity )
      {
        klass = (int)entity[1].klass;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C3F526 )
        {
          sub_1C37058(&TerminalPramsManager_TypeInfo);
          byte_4C3F526 = 1;
        }
        Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
        }
        HIDWORD(Instance[1].fields.sendData->monitor) = klass;
        if ( entity )
        {
          v12 = (int)entity[3].klass;
          if ( !byte_4C3F524 )
          {
            sub_1C37058(&TerminalPramsManager_TypeInfo);
            Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
            byte_4C3F524 = 1;
          }
          if ( !LODWORD(Instance[2].klass) )
          {
            j_il2cpp_runtime_class_init_0(Instance);
            Instance = (AvalonSceneManager_o *)TerminalPramsManager_TypeInfo;
          }
          LODWORD(Instance[1].fields.sendData->monitor) = v12;
          goto LABEL_35;
        }
      }
    }
LABEL_46:
    sub_1C372B4(Instance);
  }
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneName = SceneList__getSceneName(20, 0);
  if ( System_String__op_Inequality(v6, SceneName, 0) )
  {
    v15 = 1;
    v16 = this;
LABEL_44:
    MainMenuBarBase__SwitchMenu(v16, 0, v15, v14);
    return;
  }
  activeScene = (UnityEngine_Object_o *)this->fields.activeScene;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(activeScene, 0, 0) )
  {
    v16 = this;
    v15 = 0;
    goto LABEL_44;
  }
  MainMenuBarBase__OnClickSummonCampaignInSummonScene(this, gachaId, v18);
}


void MainMenuBarBase__OnClickSummonCampaignInSummonScene(
        MainMenuBarBase_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  struct SceneRootComponent_o *activeScene; // x0
  Il2CppObject *Component_object; // x21
  const MethodInfo *v7; // x3
  SummonControl_o *SummonControl; // x21
  int32_t MiniBannerIndex; // w0
  unsigned int v10; // w20
  struct System_Action_int__bool__o *OnClickBalloonAction; // x8

  if ( (byte_4C42726 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_SummonRootComponent___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C42726 = 1;
  }
  activeScene = this->fields.activeScene;
  if ( !activeScene )
    goto LABEL_17;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)activeScene,
                       (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_SummonRootComponent___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  activeScene = (struct SceneRootComponent_o *)UnityEngine_Object__op_Equality(
                                                 (UnityEngine_Object_o *)Component_object,
                                                 0,
                                                 0);
  if ( ((unsigned __int8)activeScene & 1) != 0 )
    goto LABEL_13;
  if ( !Component_object )
    goto LABEL_17;
  SummonControl = SummonRootComponent__GetSummonControl((SummonRootComponent_o *)Component_object, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  activeScene = (struct SceneRootComponent_o *)UnityEngine_Object__op_Equality(
                                                 (UnityEngine_Object_o *)SummonControl,
                                                 0,
                                                 0);
  if ( ((unsigned __int8)activeScene & 1) != 0 )
    goto LABEL_13;
  if ( !SummonControl )
LABEL_17:
    sub_1C372B4(activeScene);
  MiniBannerIndex = SummonControl__GetMiniBannerIndex(SummonControl, gachaId, 0);
  if ( SummonControl->fields.currentMoveIdx == MiniBannerIndex )
  {
LABEL_13:
    MainMenuBarBase__SwitchMenu(this, 0, 1, v7);
    return;
  }
  v10 = MiniBannerIndex;
  MainMenuBarBase__SwitchMenu(this, 0, 0, v7);
  OnClickBalloonAction = this->fields.OnClickBalloonAction;
  if ( OnClickBalloonAction )
    ((void (__fastcall *)(intptr_t, _QWORD, __int64, intptr_t))OnClickBalloonAction->fields.invoke_impl)(
      OnClickBalloonAction->fields.method_code,
      v10,
      1,
      OnClickBalloonAction->fields.method);
}


void MainMenuBarBase__OnClickTerminal(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *terminalBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  TerminalSceneComponent_c *v6; // x0
  UnityEngine_Object_o *mInstance; // x20
  const MethodInfo *v8; // x4
  System_Threading_CancellationTokenSource_c *klass; // x8
  UnityEngine_Object_o *v10; // x20
  TerminalPramsManager_c *v11; // x0
  System_Threading_CancellationTokenSource_c *v12; // x8
  System_String_o *v13; // x20
  System_Threading_CancellationTokenSource_c *v14; // x8
  TerminalPramsManager_c *v15; // x0
  System_Threading_CancellationTokenSource_c *v16; // x8
  TerminalSceneComponent_c *v17; // x0
  TerminalPramsManager_c *v18; // x0
  const MethodInfo *v19; // x2
  MainMenuBarBase___c_c *v20; // x0
  System_Action_o *_9__119_0; // x20
  Il2CppObject *v22; // x21
  struct MainMenuBarBase___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_IEnumerator_o *v26; // x1
  System_Threading_CancellationTokenSource_c *v27; // x8
  const MethodInfo *v28; // x3
  TerminalPramsManager_c *v29; // x0
  System_Threading_CancellationTokenSource_c *v30; // x8

  if ( (byte_4C4271A & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    sub_1C37058(&Method_MainMenuBarBase___c__OnClickTerminal_b__119_0__);
    sub_1C37058(&MainMenuBarBase___c_TypeInfo);
    sub_1C37058(&StringLiteral_8529/*"MAIN_MENU_BAR_SELECT_TERMINAL"*/);
    sub_1C37058(&StringLiteral_12276/*"SPOT SELECT WAIT"*/);
    sub_1C37058(&StringLiteral_3293/*"CAPTER WAIT"*/);
    byte_4C4271A = 1;
  }
  terminalBtn = this->fields.terminalBtn;
  if ( !terminalBtn )
    goto LABEL_123;
  IsEnabled = MainMenuBarButton__IsEnabled(terminalBtn, 0);
  MainMenuBarBase__OnClickCommon(this, 0, IsEnabled, v5);
  if ( IsEnabled )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C3CF06 )
    {
      sub_1C37058(&TerminalSceneComponent_TypeInfo);
      byte_4C3CF06 = 1;
    }
    v6 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v6 = TerminalSceneComponent_TypeInfo;
    }
    mInstance = (UnityEngine_Object_o *)v6->static_fields->mInstance;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(mInstance, 0, 0) )
      goto LABEL_126;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C3CF06 )
    {
      sub_1C37058(&TerminalSceneComponent_TypeInfo);
      byte_4C3CF06 = 1;
    }
    terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    }
    klass = terminalBtn[4].fields.m_CancellationTokenSource->klass;
    if ( !klass )
      goto LABEL_123;
    v10 = *(UnityEngine_Object_o **)&klass->_2.element_size;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v10, 0, 0) )
    {
LABEL_126:
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C3FFA6 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3FFA6 = 1;
      }
      v18 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v18 = TerminalPramsManager_TypeInfo;
      }
      v18->static_fields->_IsMapReturnFolder_k__BackingField = 0;
      if ( !byte_4C3D786 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        v18 = TerminalPramsManager_TypeInfo;
        byte_4C3D786 = 1;
      }
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = TerminalPramsManager_TypeInfo;
      }
      v18->static_fields->_IsAutoResume_k__BackingField = 0;
      if ( !byte_4C3FCAD )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        v18 = TerminalPramsManager_TypeInfo;
        byte_4C3FCAD = 1;
      }
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = TerminalPramsManager_TypeInfo;
      }
      v18->static_fields->_IsTopLastIdxNextBoardRequest_k__BackingField = 1;
      goto LABEL_93;
    }
    if ( this->fields.kind != 1 )
      goto LABEL_127;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C3FA9A )
    {
      sub_1C37058(&TerminalPramsManager_TypeInfo);
      byte_4C3FA9A = 1;
    }
    v11 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v11 = TerminalPramsManager_TypeInfo;
    }
    if ( v11->static_fields->_DispState_k__BackingField != 2 )
      goto LABEL_127;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C3CF06 )
    {
      sub_1C37058(&TerminalSceneComponent_TypeInfo);
      byte_4C3CF06 = 1;
    }
    terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    }
    v12 = terminalBtn[4].fields.m_CancellationTokenSource->klass;
    if ( !v12 )
      goto LABEL_123;
    terminalBtn = *(MainMenuBarButton_o **)&v12->_2.element_size;
    if ( !terminalBtn )
      goto LABEL_123;
    terminalBtn = (MainMenuBarButton_o *)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)terminalBtn, 0);
    if ( !terminalBtn )
      goto LABEL_123;
    terminalBtn = (MainMenuBarButton_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)terminalBtn, 0);
    if ( !terminalBtn )
      goto LABEL_123;
    v13 = (System_String_o *)terminalBtn;
    if ( System_String__IndexOf_63620032((System_String_o *)terminalBtn, (System_String_o *)StringLiteral_12276/*"SPOT SELECT WAIT"*/, 0) < 0
      && System_String__IndexOf_63620032(v13, (System_String_o *)StringLiteral_3293/*"CAPTER WAIT"*/, 0) < 0 )
    {
      goto LABEL_127;
    }
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4C3CF06 )
    {
      sub_1C37058(&TerminalSceneComponent_TypeInfo);
      byte_4C3CF06 = 1;
    }
    terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
    }
    v14 = terminalBtn[4].fields.m_CancellationTokenSource->klass;
    if ( !v14 )
      goto LABEL_123;
    terminalBtn = *(MainMenuBarButton_o **)&v14->_2.element_size;
    if ( !terminalBtn )
      goto LABEL_123;
    if ( ScrTerminalListTop__GetPrioredParentId((ScrTerminalListTop_o *)terminalBtn, 0) )
    {
LABEL_127:
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C3FFA6 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C3FFA6 = 1;
      }
      v15 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v15 = TerminalPramsManager_TypeInfo;
      }
      v15->static_fields->_IsMapReturnFolder_k__BackingField = 0;
      if ( !byte_4C3D786 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        v15 = TerminalPramsManager_TypeInfo;
        byte_4C3D786 = 1;
      }
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = TerminalPramsManager_TypeInfo;
      }
      v15->static_fields->_IsAutoResume_k__BackingField = 0;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4C3CF06 )
      {
        sub_1C37058(&TerminalSceneComponent_TypeInfo);
        byte_4C3CF06 = 1;
      }
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      }
      v16 = terminalBtn[4].fields.m_CancellationTokenSource->klass;
      if ( v16 )
      {
        terminalBtn = *(MainMenuBarButton_o **)&v16->_2.element_size;
        if ( terminalBtn )
        {
          ScrTerminalListTop__SetTopLastIndexNextBoard((ScrTerminalListTop_o *)terminalBtn, 0);
          if ( !byte_4C3CF06 )
          {
            sub_1C37058(&TerminalSceneComponent_TypeInfo);
            byte_4C3CF06 = 1;
          }
          v17 = TerminalSceneComponent_TypeInfo;
          if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
            v17 = TerminalSceneComponent_TypeInfo;
          }
          terminalBtn = (MainMenuBarButton_o *)v17->static_fields->mInstance;
          if ( terminalBtn )
          {
            TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)terminalBtn, 0);
LABEL_93:
            MainMenuBarBase__SendSelectSignal(this, 34, (System_String_o *)StringLiteral_8529/*"MAIN_MENU_BAR_SELECT_TERMINAL"*/, 0, v8);
            return;
          }
        }
      }
LABEL_123:
      sub_1C372B4(terminalBtn);
    }
    if ( System_String__IndexOf_63620032(v13, (System_String_o *)StringLiteral_3293/*"CAPTER WAIT"*/, 0) < 0 )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4C3CF06 )
      {
        sub_1C37058(&TerminalSceneComponent_TypeInfo);
        byte_4C3CF06 = 1;
      }
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      }
      v27 = terminalBtn[4].fields.m_CancellationTokenSource->klass;
      if ( !v27 )
        goto LABEL_123;
      terminalBtn = *(MainMenuBarButton_o **)&v27->_2.element_size;
      if ( !terminalBtn )
        goto LABEL_123;
      ScrTerminalListTop__SetTopLastIndexNextBoard((ScrTerminalListTop_o *)terminalBtn, 0);
      MainMenuBarBase__SwitchMenu(this, 0, 0, v28);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4C403D8 )
      {
        sub_1C37058(&TerminalPramsManager_TypeInfo);
        byte_4C403D8 = 1;
      }
      v29 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v29 = TerminalPramsManager_TypeInfo;
      }
      v29->static_fields->_IsAutoNoSe_k__BackingField = 1;
      if ( !byte_4C3CF06 )
      {
        sub_1C37058(&TerminalSceneComponent_TypeInfo);
        byte_4C3CF06 = 1;
      }
      terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
        terminalBtn = (MainMenuBarButton_o *)TerminalSceneComponent_TypeInfo;
      }
      v30 = terminalBtn[4].fields.m_CancellationTokenSource->klass;
      if ( !v30 )
        goto LABEL_123;
      terminalBtn = *(MainMenuBarButton_o **)&v30->_2.element_size;
      if ( !terminalBtn )
        goto LABEL_123;
      ScrTerminalListTop__cbfTitleInfoBtnBack_Click((ScrTerminalListTop_o *)terminalBtn, 0, 0);
    }
    else
    {
      v20 = MainMenuBarBase___c_TypeInfo;
      if ( !MainMenuBarBase___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MainMenuBarBase___c_TypeInfo);
        v20 = MainMenuBarBase___c_TypeInfo;
      }
      _9__119_0 = v20->static_fields->__9__119_0;
      if ( !_9__119_0 )
      {
        if ( !v20->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v20);
          v20 = MainMenuBarBase___c_TypeInfo;
        }
        v22 = (Il2CppObject *)v20->static_fields->__9;
        _9__119_0 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(_9__119_0, v22, Method_MainMenuBarBase___c__OnClickTerminal_b__119_0__, 0);
        static_fields = MainMenuBarBase___c_TypeInfo->static_fields;
        static_fields->__9__119_0 = _9__119_0;
        sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__119_0, (int32_t)_9__119_0, v24, v25);
      }
      v26 = MainMenuBarBase__SetTerminalQuestListClose(this, _9__119_0, v19);
      UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v26, 0);
    }
  }
}


void MainMenuBarBase__OnClickUnivMenu(MainMenuBarBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  MainMenuBarBase__SwitchMenu(this, !this->fields.isOpen, 1, v2);
  ActionExtensions__Call(this->fields.mMenuBtnAct, 0);
  this->fields.mMenuBtnAct = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mMenuBtnAct, 0, v4, v5);
}


void MainMenuBarBase__RequestSelectedSceneChange(MainMenuBarBase_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C4270C & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C4270C = 1;
  }
  if ( this->fields.selectedType != -1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_1C372B4(0);
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

  if ( (byte_4C4270D & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_8525/*"MAIN_MENU_BAR_SELECT_NONE"*/);
    byte_4C4270D = 1;
  }
  activeSceneFSM = (UnityEngine_Object_o *)this->fields.activeSceneFSM;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(activeSceneFSM, 0, 0) )
  {
    selectedKind = this->fields.selectedKind;
    v5 = this->fields.activeSceneFSM;
    if ( selectedKind )
    {
      if ( !v5 )
LABEL_12:
        sub_1C372B4(v5);
    }
    else
    {
      if ( !v5 )
        goto LABEL_12;
      selectedKind = (System_String_o *)StringLiteral_8525/*"MAIN_MENU_BAR_SELECT_NONE"*/;
    }
    PlayMakerFSM__SendEvent(v5, selectedKind, 0);
  }
}


void MainMenuBarBase__RequestTerminalSceneChange(MainMenuBarBase_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  Il2CppObject *Instance; // x0

  if ( (byte_4C4270B & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C4270B = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3D786 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3D786 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0, 0);
}


void MainMenuBarBase__ResetShopNotice(MainMenuBarBase_o *this, const MethodInfo *method)
{
  struct ShopNotice_o *ShopNotice; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x1

  if ( (byte_4C42713 & 1) == 0 )
  {
    sub_1C37058(&ShopTopListViewManager_TypeInfo);
    byte_4C42713 = 1;
  }
  if ( !ShopTopListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopTopListViewManager_TypeInfo);
  ShopNotice = ShopTopListViewManager__GetShopNotice(0);
  this->fields.shopNotice = ShopNotice;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.shopNotice, (int32_t)ShopNotice, v4, v5);
  MainMenuBarBase__ResetShopNoticeDraw(this, v6);
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
  struct ShopNotice_o *v11; // x8
  struct ShopNotice_o *v12; // x8
  struct ShopNotice_o *v13; // x8
  struct ShopNotice_o *v14; // x8
  struct ShopNotice_o *v15; // x8
  struct ShopNotice_o *v16; // x8
  struct ShopNotice_o *v17; // x8
  unsigned int LimitedType_k__BackingField; // w8
  struct ShopNoticeTween_o **p_shopNoticeTween; // x20
  ShopNoticeTween_o *v20; // x21
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct ShopNotice_o *v23; // x8
  int32_t v24; // w23
  System_Collections_Generic_List_object__o *v25; // x21
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  UnityEngine_Component_o *v31; // x1
  Il2CppClass **v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct System_Object_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  UnityEngine_Component_o *v38; // x1
  Il2CppClass **v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  UnityEngine_Component_o *v45; // x1
  Il2CppClass **v46; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  struct System_Object_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  UnityEngine_Component_o *v52; // x1
  Il2CppClass **v53; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  struct System_Object_array *v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  UnityEngine_Component_o *v59; // x1
  Il2CppClass **v60; // x0
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  struct System_Object_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  UnityEngine_Component_o *v66; // x1
  Il2CppClass **v67; // x0
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  struct System_Object_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  UnityEngine_Component_o *v73; // x1
  Il2CppClass **v74; // x0
  int32_t v75; // w2
  const MethodInfo *v76; // x3
  struct System_Object_array *v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  UnityEngine_Component_o *v80; // x1
  Il2CppClass **v81; // x0
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  struct System_Object_array *v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  UnityEngine_Component_o *v87; // x1
  Il2CppClass **v88; // x0
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  struct System_Object_array *v91; // x8
  _QWORD *v92; // x9
  __int64 v93; // x10
  UnityEngine_Component_o *v94; // x1
  Il2CppClass **v95; // x0
  int32_t v96; // w2
  const MethodInfo *v97; // x3
  struct System_Object_array *v98; // x8
  _QWORD *v99; // x9
  __int64 v100; // x10
  UnityEngine_Component_o *v101; // x1
  Il2CppClass **v102; // x0
  int32_t v103; // w2
  const MethodInfo *v104; // x3
  struct System_Object_array *v105; // x8
  _QWORD *v106; // x9
  __int64 v107; // x10
  UnityEngine_Component_o *v108; // x1
  Il2CppClass **v109; // x0
  System_Collections_Generic_List_object__o *v110; // x22
  int32_t v111; // w2
  const MethodInfo *v112; // x3
  struct System_Object_array *v113; // x8
  _QWORD *v114; // x9
  __int64 v115; // x10
  UnityEngine_Component_o *v116; // x1
  Il2CppClass **v117; // x0
  int32_t v118; // w2
  const MethodInfo *v119; // x3
  struct System_Object_array *v120; // x8
  _QWORD *v121; // x9
  __int64 v122; // x10
  UnityEngine_Component_o *v123; // x1
  Il2CppClass **v124; // x0
  int32_t v125; // w2
  const MethodInfo *v126; // x3
  struct System_Object_array *v127; // x8
  _QWORD *v128; // x9
  __int64 v129; // x10
  UnityEngine_Component_o *v130; // x1
  Il2CppClass **v131; // x0
  int32_t v132; // w2
  const MethodInfo *v133; // x3
  struct System_Object_array *v134; // x8
  _QWORD *v135; // x9
  __int64 v136; // x10
  UnityEngine_Component_o *v137; // x1
  Il2CppClass **v138; // x0
  int32_t v139; // w2
  const MethodInfo *v140; // x3
  struct System_Object_array *v141; // x8
  _QWORD *v142; // x9
  __int64 v143; // x10
  UnityEngine_Component_o *v144; // x1
  Il2CppClass **v145; // x0
  int32_t v146; // w2
  const MethodInfo *v147; // x3
  struct System_Object_array *v148; // x8
  _QWORD *v149; // x9
  __int64 v150; // x10
  UnityEngine_Component_o *v151; // x1
  Il2CppClass **v152; // x0
  int32_t v153; // w2
  const MethodInfo *v154; // x3
  struct System_Object_array *v155; // x8
  _QWORD *v156; // x9
  __int64 v157; // x10
  UnityEngine_Component_o *v158; // x1
  Il2CppClass **v159; // x0
  int32_t v160; // w2
  const MethodInfo *v161; // x3
  struct System_Object_array *v162; // x8
  _QWORD *v163; // x9
  __int64 v164; // x10
  UnityEngine_Component_o *v165; // x1
  Il2CppClass **v166; // x0
  int32_t v167; // w2
  const MethodInfo *v168; // x3
  struct System_Object_array *v169; // x8
  _QWORD *v170; // x9
  __int64 v171; // x10
  UnityEngine_Component_o *v172; // x1
  Il2CppClass **v173; // x0
  int32_t v174; // w2
  const MethodInfo *v175; // x3
  struct System_Object_array *v176; // x8
  _QWORD *v177; // x9
  __int64 v178; // x10
  UnityEngine_Component_o *v179; // x1
  Il2CppClass **v180; // x0
  int32_t v181; // w2
  const MethodInfo *v182; // x3
  struct System_Object_array *v183; // x8
  _QWORD *v184; // x9
  int32_t v185; // w2
  const MethodInfo *v186; // x3
  struct System_Object_array *v187; // x8
  _QWORD *v188; // x9
  __int64 v189; // x10
  UnityEngine_Component_o *v190; // x1
  Il2CppClass **v191; // x0
  int32_t v192; // w2
  const MethodInfo *v193; // x3
  struct System_Object_array *v194; // x8
  _QWORD *v195; // x9
  int32_t v196; // w2
  const MethodInfo *v197; // x3
  struct System_Object_array *v198; // x8
  _QWORD *v199; // x9
  __int64 v200; // x10
  UnityEngine_Component_o *v201; // x1
  Il2CppClass **v202; // x0
  int32_t v203; // w2
  const MethodInfo *v204; // x3
  struct System_Object_array *v205; // x8
  _QWORD *v206; // x9
  __int64 v207; // x10
  UnityEngine_Component_o *v208; // x1
  Il2CppClass **v209; // x0
  int32_t v210; // w2
  const MethodInfo *v211; // x3
  struct System_Object_array *v212; // x8
  _QWORD *v213; // x9
  __int64 v214; // x10
  UnityEngine_Component_o *v215; // x1
  Il2CppClass **v216; // x0
  int32_t v217; // w2
  const MethodInfo *v218; // x3
  struct System_Object_array *v219; // x8
  _QWORD *v220; // x9
  __int64 v221; // x10
  UnityEngine_Component_o *v222; // x1
  Il2CppClass **v223; // x0
  int32_t v224; // w2
  const MethodInfo *v225; // x3
  struct System_Object_array *v226; // x8
  _QWORD *v227; // x9
  __int64 v228; // x10
  UnityEngine_Component_o *v229; // x1
  Il2CppClass **v230; // x0
  int32_t v231; // w2
  const MethodInfo *v232; // x3
  struct System_Object_array *v233; // x8
  _QWORD *v234; // x9
  __int64 v235; // x10
  UnityEngine_Component_o *v236; // x1
  Il2CppClass **v237; // x0
  int32_t v238; // w2
  const MethodInfo *v239; // x3
  struct System_Object_array *v240; // x8
  _QWORD *v241; // x9
  __int64 v242; // x10
  UnityEngine_Component_o *v243; // x1
  Il2CppClass **v244; // x0
  __int64 v245; // x10
  UnityEngine_Component_o *v246; // x1
  Il2CppClass **v247; // x0
  int32_t v248; // w2
  const MethodInfo *v249; // x3
  Il2CppObject *mExchangeServantTimeRoot; // x1
  struct System_Object_array *v251; // x8
  _QWORD *v252; // x9
  __int64 v253; // x10
  unsigned int max_length; // w11
  Il2CppObject *v255; // x1
  Il2CppClass **v256; // x0
  __int64 v257; // x10
  Il2CppClass **v258; // x0
  struct ShopNotice_o *v259; // x8
  ShopNoticeRemainTime_o *v260; // x21
  int32_t v261; // w2
  const MethodInfo *v262; // x3
  const MethodInfo *v263; // x2
  struct ShopNotice_o *v264; // x8
  UILabel_o *mPeriodLimitedTimeLb; // x20
  int64_t PeriodTimeLimit_k__BackingField; // x21
  const MethodInfo *v267; // x2
  struct ShopNotice_o *v268; // x8
  UILabel_o *mMonthlyLimitedTimeLb; // x20
  const MethodInfo *v270; // x2
  struct ShopNotice_o *v271; // x8
  UILabel_o *mExchangeServantItemLb; // x20
  struct ShopNoticeRemainTimeLabel_o **p_periodShopNoticeRemainTimeLabel; // x22
  UILabel_o *v274; // x20
  ShopNoticeRemainTimeLabel_o *v275; // x21
  int32_t v276; // w2
  const MethodInfo *v277; // x3
  struct ShopNoticeRemainTimeLabel_o **p_monthlyShopNoticeRemainTimeLabel; // x21
  UILabel_o *v279; // x20
  ShopNoticeRemainTimeLabel_o *v280; // x23
  int32_t v281; // w2
  const MethodInfo *v282; // x3
  struct ShopNoticeRemainTimeLabel_o **p_exchangeServantShopNoticeRemainTimeLabel; // x20
  UILabel_o *v284; // x23
  ShopNoticeRemainTimeLabel_o *v285; // x24
  int32_t v286; // w2
  const MethodInfo *v287; // x3
  struct ShopNotice_o *v288; // x8
  struct ShopNotice_o *v289; // x8
  struct ShopNotice_o *v290; // x8
  int32_t v291; // w2
  const MethodInfo *v292; // x3
  struct System_Object_array *v293; // x8
  _QWORD *v294; // x9
  __int64 v295; // x10
  UnityEngine_Component_o *v296; // x1
  Il2CppClass **v297; // x0
  int32_t v298; // w2
  const MethodInfo *v299; // x3
  struct System_Object_array *v300; // x8
  _QWORD *v301; // x9
  __int64 v302; // x10
  UnityEngine_Component_o *v303; // x1
  Il2CppClass **v304; // x0
  int32_t v305; // w2
  const MethodInfo *v306; // x3
  struct System_Object_array *v307; // x8
  _QWORD *v308; // x9
  __int64 v309; // x10
  UnityEngine_Component_o *v310; // x1
  Il2CppClass **v311; // x0
  int32_t v312; // w2
  const MethodInfo *v313; // x3
  struct System_Object_array *v314; // x8
  _QWORD *v315; // x9
  __int64 v316; // x10
  UnityEngine_Component_o *v317; // x1
  Il2CppClass **v318; // x0
  int32_t v319; // w2
  const MethodInfo *v320; // x3
  struct System_Object_array *v321; // x8
  _QWORD *v322; // x9
  __int64 v323; // x10
  UnityEngine_Component_o *v324; // x1
  Il2CppClass **v325; // x0
  int32_t v326; // w2
  const MethodInfo *v327; // x3
  Il2CppObject *v328; // x1
  struct System_Object_array *v329; // x8
  _QWORD *v330; // x9
  __int64 v331; // x10
  Il2CppClass **v332; // x0

  if ( (byte_4C42712 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C37058(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_MainMenuBarBase__ResetShopNoticeDraw_b__110_0__);
    sub_1C37058(&ShopNoticeRemainTimeLabel_TypeInfo);
    sub_1C37058(&ShopNoticeRemainTime_TypeInfo);
    sub_1C37058(&ShopNoticeTween_TypeInfo);
    byte_4C42712 = 1;
  }
  if ( this->fields.isOpen )
  {
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mNewItemSp;
    if ( !mNewItemSp )
      goto LABEL_327;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
    shopNotice = this->fields.shopNotice;
    if ( !shopNotice )
      goto LABEL_327;
    if ( !mNewItemSp )
      goto LABEL_327;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      shopNotice->fields._IsShowNew_k__BackingField,
      0);
    v5 = this->fields.shopNotice;
    if ( !v5 )
      goto LABEL_327;
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mLimitedItemIconRoot;
    if ( !mNewItemSp )
      goto LABEL_327;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v5->fields._LimitedType_k__BackingField != 0,
      0);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
    if ( !mNewItemSp )
      goto LABEL_327;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
    v6 = this->fields.shopNotice;
    if ( !v6 )
      goto LABEL_327;
    if ( !mNewItemSp )
      goto LABEL_327;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v6->fields._LimitedType_k__BackingField == 1,
      0);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
    if ( !mNewItemSp )
      goto LABEL_327;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
    v7 = this->fields.shopNotice;
    if ( !v7 )
      goto LABEL_327;
    if ( !mNewItemSp )
      goto LABEL_327;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v7->fields._LimitedType_k__BackingField == 2,
      0);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
    if ( !mNewItemSp )
      goto LABEL_327;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
    v8 = this->fields.shopNotice;
    if ( !v8 )
      goto LABEL_327;
    if ( !mNewItemSp )
      goto LABEL_327;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v8->fields._LimitedType_k__BackingField == 3,
      0);
    v9 = this->fields.shopNotice;
    if ( !v9 )
      goto LABEL_327;
    if ( v9->fields._ExchangeServantEventId_k__BackingField >= 1 )
    {
      v10 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_MainMenuBarBase__ResetShopNoticeDraw_b__110_0__, 0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadEventUI(v10, 1, 0);
    }
    mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
    if ( !mNewItemSp )
      goto LABEL_327;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
    v11 = this->fields.shopNotice;
    if ( !v11 )
      goto LABEL_327;
    if ( !mNewItemSp )
      goto LABEL_327;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v11->fields._LimitedType_k__BackingField == 4,
      0);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
    if ( !mNewItemSp )
      goto LABEL_327;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
    v12 = this->fields.shopNotice;
    if ( !v12 )
      goto LABEL_327;
    if ( !mNewItemSp )
      goto LABEL_327;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v12->fields._LimitedType_k__BackingField == 1,
      0);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
    if ( !mNewItemSp )
      goto LABEL_327;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
    v13 = this->fields.shopNotice;
    if ( !v13 )
      goto LABEL_327;
    if ( !mNewItemSp )
      goto LABEL_327;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v13->fields._LimitedType_k__BackingField == 2,
      0);
    v14 = this->fields.shopNotice;
    if ( !v14 )
      goto LABEL_327;
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantTimeRoot;
    if ( !mNewItemSp )
      goto LABEL_327;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v14->fields._LimitedType_k__BackingField == 3,
      0);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemLb;
    if ( !mNewItemSp )
      goto LABEL_327;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
    v15 = this->fields.shopNotice;
    if ( !v15 )
      goto LABEL_327;
    if ( !mNewItemSp )
      goto LABEL_327;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      !v15->fields._IsIndefiniteExchangeServant_k__BackingField,
      0);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonLb;
    if ( !mNewItemSp )
      goto LABEL_327;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
    v16 = this->fields.shopNotice;
    if ( !v16 )
      goto LABEL_327;
    if ( !mNewItemSp )
      goto LABEL_327;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v16->fields._LimitedType_k__BackingField == 4,
      0);
    v17 = this->fields.shopNotice;
    if ( !v17 )
      goto LABEL_327;
    LimitedType_k__BackingField = v17->fields._LimitedType_k__BackingField;
    if ( LimitedType_k__BackingField <= 0x1E && ((1 << LimitedType_k__BackingField) & 0x55545440) != 0 )
    {
      mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeTween;
      p_shopNoticeTween = &this->fields.shopNoticeTween;
      if ( !mNewItemSp )
      {
        v20 = (ShopNoticeTween_o *)sub_1C372A4(ShopNoticeTween_TypeInfo);
        ShopNoticeTween___ctor(v20, (UnityEngine_MonoBehaviour_o *)this, 0);
        this->fields.shopNoticeTween = v20;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.shopNoticeTween, (int32_t)v20, v21, v22);
        mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeTween;
        if ( !mNewItemSp )
          goto LABEL_327;
      }
      ShopNoticeTween__Stop((ShopNoticeTween_o *)mNewItemSp, 0);
      v23 = this->fields.shopNotice;
      if ( !v23 )
        goto LABEL_327;
      v24 = v23->fields._LimitedType_k__BackingField;
      switch ( v24 )
      {
        case 6:
          v25 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v25,
            (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          if ( !v25 )
            goto LABEL_327;
          items = v25->fields._items;
          v29 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v25->fields._version;
          if ( !items )
            goto LABEL_327;
          size = v25->fields._size;
          v31 = mNewItemSp;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = &items->obj.klass + size;
            v25->fields._size = size + 1;
            v32[4] = (Il2CppClass *)v31;
            sub_1C36FFC((CGThumbnailListItem_o *)(v32 + 4), (int32_t)v31, v26, v27);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          v105 = v25->fields._items;
          v106 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v25->fields._version;
          if ( !v105 )
            goto LABEL_327;
          v107 = v25->fields._size;
          v108 = mNewItemSp;
          if ( (unsigned int)v107 >= LODWORD(v105->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
          }
          else
          {
            v109 = &v105->obj.klass + v107;
            v25->fields._size = v107 + 1;
            v109[4] = (Il2CppClass *)v108;
            sub_1C36FFC((CGThumbnailListItem_o *)(v109 + 4), (int32_t)v108, v103, v104);
          }
          v110 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v110,
            (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          if ( !v110 )
            goto LABEL_327;
          v176 = v110->fields._items;
          v177 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v110->fields._version;
          if ( !v176 )
            goto LABEL_327;
          v178 = v110->fields._size;
          v179 = mNewItemSp;
          if ( (unsigned int)v178 >= LODWORD(v176->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v110,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v177[4] + 192LL) + 112LL));
          }
          else
          {
            v180 = &v176->obj.klass + v178;
            v110->fields._size = v178 + 1;
            v180[4] = (Il2CppClass *)v179;
            sub_1C36FFC((CGThumbnailListItem_o *)(v180 + 4), (int32_t)v179, v174, v175);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_327;
          goto LABEL_256;
        case 10:
          v25 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v25,
            (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          if ( !v25 )
            goto LABEL_327;
          v42 = v25->fields._items;
          v43 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v25->fields._version;
          if ( !v42 )
            goto LABEL_327;
          v44 = v25->fields._size;
          v45 = mNewItemSp;
          if ( (unsigned int)v44 >= LODWORD(v42->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
          }
          else
          {
            v46 = &v42->obj.klass + v44;
            v25->fields._size = v44 + 1;
            v46[4] = (Il2CppClass *)v45;
            sub_1C36FFC((CGThumbnailListItem_o *)(v46 + 4), (int32_t)v45, v40, v41);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          v113 = v25->fields._items;
          v114 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v25->fields._version;
          if ( !v113 )
            goto LABEL_327;
          v115 = v25->fields._size;
          v116 = mNewItemSp;
          if ( (unsigned int)v115 >= LODWORD(v113->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v114[4] + 192LL) + 112LL));
          }
          else
          {
            v117 = &v113->obj.klass + v115;
            v25->fields._size = v115 + 1;
            v117[4] = (Il2CppClass *)v116;
            sub_1C36FFC((CGThumbnailListItem_o *)(v117 + 4), (int32_t)v116, v111, v112);
          }
          v110 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v110,
            (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          if ( !v110 )
            goto LABEL_327;
          v183 = v110->fields._items;
          v184 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v110->fields._version;
          if ( !v183 )
            goto LABEL_327;
          goto LABEL_237;
        case 12:
          v25 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v25,
            (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          if ( !v25 )
            goto LABEL_327;
          v49 = v25->fields._items;
          v50 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v25->fields._version;
          if ( !v49 )
            goto LABEL_327;
          v51 = v25->fields._size;
          v52 = mNewItemSp;
          if ( (unsigned int)v51 >= LODWORD(v49->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
          }
          else
          {
            v53 = &v49->obj.klass + v51;
            v25->fields._size = v51 + 1;
            v53[4] = (Il2CppClass *)v52;
            sub_1C36FFC((CGThumbnailListItem_o *)(v53 + 4), (int32_t)v52, v47, v48);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          v120 = v25->fields._items;
          v121 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v25->fields._version;
          if ( !v120 )
            goto LABEL_327;
          v122 = v25->fields._size;
          v123 = mNewItemSp;
          if ( (unsigned int)v122 >= LODWORD(v120->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v121[4] + 192LL) + 112LL));
          }
          else
          {
            v124 = &v120->obj.klass + v122;
            v25->fields._size = v122 + 1;
            v124[4] = (Il2CppClass *)v123;
            sub_1C36FFC((CGThumbnailListItem_o *)(v124 + 4), (int32_t)v123, v118, v119);
          }
          v110 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v110,
            (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          if ( !v110 )
            goto LABEL_327;
          v183 = v110->fields._items;
          v184 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v110->fields._version;
          if ( !v183 )
            goto LABEL_327;
          goto LABEL_237;
        case 14:
          v25 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v25,
            (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          if ( !v25 )
            goto LABEL_327;
          v56 = v25->fields._items;
          v57 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v25->fields._version;
          if ( !v56 )
            goto LABEL_327;
          v58 = v25->fields._size;
          v59 = mNewItemSp;
          if ( (unsigned int)v58 >= LODWORD(v56->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
          }
          else
          {
            v60 = &v56->obj.klass + v58;
            v25->fields._size = v58 + 1;
            v60[4] = (Il2CppClass *)v59;
            sub_1C36FFC((CGThumbnailListItem_o *)(v60 + 4), (int32_t)v59, v54, v55);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          v127 = v25->fields._items;
          v128 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v25->fields._version;
          if ( !v127 )
            goto LABEL_327;
          v129 = v25->fields._size;
          v130 = mNewItemSp;
          if ( (unsigned int)v129 >= LODWORD(v127->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v128[4] + 192LL) + 112LL));
          }
          else
          {
            v131 = &v127->obj.klass + v129;
            v25->fields._size = v129 + 1;
            v131[4] = (Il2CppClass *)v130;
            sub_1C36FFC((CGThumbnailListItem_o *)(v131 + 4), (int32_t)v130, v125, v126);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          v187 = v25->fields._items;
          v188 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v25->fields._version;
          if ( !v187 )
            goto LABEL_327;
          v189 = v25->fields._size;
          v190 = mNewItemSp;
          if ( (unsigned int)v189 >= LODWORD(v187->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v188[4] + 192LL) + 112LL));
          }
          else
          {
            v191 = &v187->obj.klass + v189;
            v25->fields._size = v189 + 1;
            v191[4] = (Il2CppClass *)v190;
            sub_1C36FFC((CGThumbnailListItem_o *)(v191 + 4), (int32_t)v190, v185, v186);
          }
          v110 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v110,
            (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          if ( !v110 )
            goto LABEL_327;
          v219 = v110->fields._items;
          v220 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v110->fields._version;
          if ( !v219 )
            goto LABEL_327;
          v221 = v110->fields._size;
          v222 = mNewItemSp;
          if ( (unsigned int)v221 >= LODWORD(v219->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v110,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v220[4] + 192LL) + 112LL));
          }
          else
          {
            v223 = &v219->obj.klass + v221;
            v110->fields._size = v221 + 1;
            v223[4] = (Il2CppClass *)v222;
            sub_1C36FFC((CGThumbnailListItem_o *)(v223 + 4), (int32_t)v222, v217, v218);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          v183 = v110->fields._items;
          v184 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v110->fields._version;
          if ( !v183 )
            goto LABEL_327;
LABEL_237:
          v245 = v110->fields._size;
          v246 = mNewItemSp;
          if ( (unsigned int)v245 >= LODWORD(v183->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v110,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v184[4] + 192LL) + 112LL));
          }
          else
          {
            v247 = &v183->obj.klass + v245;
            v110->fields._size = v245 + 1;
            v247[4] = (Il2CppClass *)v246;
            sub_1C36FFC((CGThumbnailListItem_o *)(v247 + 4), (int32_t)v246, v181, v182);
          }
          mExchangeServantTimeRoot = (Il2CppObject *)this->fields.mExchangeServantTimeRoot;
          v251 = v110->fields._items;
          v252 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v110->fields._version;
          if ( !v251 )
            goto LABEL_327;
          goto LABEL_258;
        case 18:
          v25 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v25,
            (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          if ( !v25 )
            goto LABEL_327;
          v63 = v25->fields._items;
          v64 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v25->fields._version;
          if ( !v63 )
            goto LABEL_327;
          v65 = v25->fields._size;
          v66 = mNewItemSp;
          if ( (unsigned int)v65 >= LODWORD(v63->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
          }
          else
          {
            v67 = &v63->obj.klass + v65;
            v25->fields._size = v65 + 1;
            v67[4] = (Il2CppClass *)v66;
            sub_1C36FFC((CGThumbnailListItem_o *)(v67 + 4), (int32_t)v66, v61, v62);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          v134 = v25->fields._items;
          v135 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v25->fields._version;
          if ( !v134 )
            goto LABEL_327;
          v136 = v25->fields._size;
          v137 = mNewItemSp;
          if ( (unsigned int)v136 >= LODWORD(v134->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v135[4] + 192LL) + 112LL));
          }
          else
          {
            v138 = &v134->obj.klass + v136;
            v25->fields._size = v136 + 1;
            v138[4] = (Il2CppClass *)v137;
            sub_1C36FFC((CGThumbnailListItem_o *)(v138 + 4), (int32_t)v137, v132, v133);
          }
          v110 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v110,
            (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          if ( !v110 )
            goto LABEL_327;
          v194 = v110->fields._items;
          v195 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v110->fields._version;
          if ( !v194 )
            goto LABEL_327;
          goto LABEL_245;
        case 20:
          v25 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v25,
            (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          if ( !v25 )
            goto LABEL_327;
          v70 = v25->fields._items;
          v71 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v25->fields._version;
          if ( !v70 )
            goto LABEL_327;
          v72 = v25->fields._size;
          v73 = mNewItemSp;
          if ( (unsigned int)v72 >= LODWORD(v70->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
          }
          else
          {
            v74 = &v70->obj.klass + v72;
            v25->fields._size = v72 + 1;
            v74[4] = (Il2CppClass *)v73;
            sub_1C36FFC((CGThumbnailListItem_o *)(v74 + 4), (int32_t)v73, v68, v69);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          v141 = v25->fields._items;
          v142 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v25->fields._version;
          if ( !v141 )
            goto LABEL_327;
          v143 = v25->fields._size;
          v144 = mNewItemSp;
          if ( (unsigned int)v143 >= LODWORD(v141->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v142[4] + 192LL) + 112LL));
          }
          else
          {
            v145 = &v141->obj.klass + v143;
            v25->fields._size = v143 + 1;
            v145[4] = (Il2CppClass *)v144;
            sub_1C36FFC((CGThumbnailListItem_o *)(v145 + 4), (int32_t)v144, v139, v140);
          }
          v110 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v110,
            (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          if ( !v110 )
            goto LABEL_327;
          v194 = v110->fields._items;
          v195 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v110->fields._version;
          if ( !v194 )
            goto LABEL_327;
          goto LABEL_245;
        case 22:
          v25 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v25,
            (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( mNewItemSp )
          {
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
            if ( v25 )
            {
              v77 = v25->fields._items;
              v78 = Method_System_Collections_Generic_List_GameObject__Add__;
              ++v25->fields._version;
              if ( v77 )
              {
                v79 = v25->fields._size;
                v80 = mNewItemSp;
                if ( (unsigned int)v79 >= LODWORD(v77->max_length) )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v25,
                    (Il2CppObject *)mNewItemSp,
                    *(const MethodInfo_37A3024 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
                }
                else
                {
                  v81 = &v77->obj.klass + v79;
                  v25->fields._size = v79 + 1;
                  v81[4] = (Il2CppClass *)v80;
                  sub_1C36FFC((CGThumbnailListItem_o *)(v81 + 4), (int32_t)v80, v75, v76);
                }
                mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
                if ( mNewItemSp )
                {
                  mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
                  v148 = v25->fields._items;
                  v149 = Method_System_Collections_Generic_List_GameObject__Add__;
                  ++v25->fields._version;
                  if ( v148 )
                  {
                    v150 = v25->fields._size;
                    v151 = mNewItemSp;
                    if ( (unsigned int)v150 >= LODWORD(v148->max_length) )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v25,
                        (Il2CppObject *)mNewItemSp,
                        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v149[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v152 = &v148->obj.klass + v150;
                      v25->fields._size = v150 + 1;
                      v152[4] = (Il2CppClass *)v151;
                      sub_1C36FFC((CGThumbnailListItem_o *)(v152 + 4), (int32_t)v151, v146, v147);
                    }
                    mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
                    if ( mNewItemSp )
                    {
                      mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
                      v198 = v25->fields._items;
                      v199 = Method_System_Collections_Generic_List_GameObject__Add__;
                      ++v25->fields._version;
                      if ( v198 )
                      {
                        v200 = v25->fields._size;
                        v201 = mNewItemSp;
                        if ( (unsigned int)v200 >= LODWORD(v198->max_length) )
                        {
                          System_Collections_Generic_List_object___AddWithResize(
                            v25,
                            (Il2CppObject *)mNewItemSp,
                            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v199[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v202 = &v198->obj.klass + v200;
                          v25->fields._size = v200 + 1;
                          v202[4] = (Il2CppClass *)v201;
                          sub_1C36FFC((CGThumbnailListItem_o *)(v202 + 4), (int32_t)v201, v196, v197);
                        }
                        v110 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GameObject__TypeInfo);
                        System_Collections_Generic_List_object____ctor(
                          v110,
                          (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
                        mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
                        if ( mNewItemSp )
                        {
                          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
                          if ( v110 )
                          {
                            v226 = v110->fields._items;
                            v227 = Method_System_Collections_Generic_List_GameObject__Add__;
                            ++v110->fields._version;
                            if ( v226 )
                            {
                              v228 = v110->fields._size;
                              v229 = mNewItemSp;
                              if ( (unsigned int)v228 >= LODWORD(v226->max_length) )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  v110,
                                  (Il2CppObject *)mNewItemSp,
                                  *(const MethodInfo_37A3024 **)(*(_QWORD *)(v227[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v230 = &v226->obj.klass + v228;
                                v110->fields._size = v228 + 1;
                                v230[4] = (Il2CppClass *)v229;
                                sub_1C36FFC((CGThumbnailListItem_o *)(v230 + 4), (int32_t)v229, v224, v225);
                              }
                              mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
                              if ( mNewItemSp )
                              {
                                mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                          mNewItemSp,
                                                                          0);
                                v194 = v110->fields._items;
                                v195 = Method_System_Collections_Generic_List_GameObject__Add__;
                                ++v110->fields._version;
                                if ( v194 )
                                  goto LABEL_245;
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
          goto LABEL_327;
        case 24:
          v25 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v25,
            (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          if ( !v25 )
            goto LABEL_327;
          v84 = v25->fields._items;
          v85 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v25->fields._version;
          if ( !v84 )
            goto LABEL_327;
          v86 = v25->fields._size;
          v87 = mNewItemSp;
          if ( (unsigned int)v86 >= LODWORD(v84->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
          }
          else
          {
            v88 = &v84->obj.klass + v86;
            v25->fields._size = v86 + 1;
            v88[4] = (Il2CppClass *)v87;
            sub_1C36FFC((CGThumbnailListItem_o *)(v88 + 4), (int32_t)v87, v82, v83);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          v155 = v25->fields._items;
          v156 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v25->fields._version;
          if ( !v155 )
            goto LABEL_327;
          v157 = v25->fields._size;
          v158 = mNewItemSp;
          if ( (unsigned int)v157 >= LODWORD(v155->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v156[4] + 192LL) + 112LL));
          }
          else
          {
            v159 = &v155->obj.klass + v157;
            v25->fields._size = v157 + 1;
            v159[4] = (Il2CppClass *)v158;
            sub_1C36FFC((CGThumbnailListItem_o *)(v159 + 4), (int32_t)v158, v153, v154);
          }
          v110 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v110,
            (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantTimeRoot;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                    (UnityEngine_GameObject_o *)mNewItemSp,
                                                    0);
          if ( !v110 )
            goto LABEL_327;
          v194 = v110->fields._items;
          v195 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v110->fields._version;
          if ( !v194 )
            goto LABEL_327;
LABEL_245:
          v253 = v110->fields._size;
          max_length = v194->max_length;
          v255 = (Il2CppObject *)mNewItemSp;
          goto LABEL_252;
        case 26:
          v25 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v25,
            (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          if ( !v25 )
            goto LABEL_327;
          v91 = v25->fields._items;
          v92 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v25->fields._version;
          if ( !v91 )
            goto LABEL_327;
          v93 = v25->fields._size;
          v94 = mNewItemSp;
          if ( (unsigned int)v93 >= LODWORD(v91->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
          }
          else
          {
            v95 = &v91->obj.klass + v93;
            v25->fields._size = v93 + 1;
            v95[4] = (Il2CppClass *)v94;
            sub_1C36FFC((CGThumbnailListItem_o *)(v95 + 4), (int32_t)v94, v89, v90);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          v162 = v25->fields._items;
          v163 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v25->fields._version;
          if ( !v162 )
            goto LABEL_327;
          v164 = v25->fields._size;
          v165 = mNewItemSp;
          if ( (unsigned int)v164 >= LODWORD(v162->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v163[4] + 192LL) + 112LL));
          }
          else
          {
            v166 = &v162->obj.klass + v164;
            v25->fields._size = v164 + 1;
            v166[4] = (Il2CppClass *)v165;
            sub_1C36FFC((CGThumbnailListItem_o *)(v166 + 4), (int32_t)v165, v160, v161);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          v205 = v25->fields._items;
          v206 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v25->fields._version;
          if ( !v205 )
            goto LABEL_327;
          v207 = v25->fields._size;
          v208 = mNewItemSp;
          if ( (unsigned int)v207 >= LODWORD(v205->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v206[4] + 192LL) + 112LL));
          }
          else
          {
            v209 = &v205->obj.klass + v207;
            v25->fields._size = v207 + 1;
            v209[4] = (Il2CppClass *)v208;
            sub_1C36FFC((CGThumbnailListItem_o *)(v209 + 4), (int32_t)v208, v203, v204);
          }
          v110 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v110,
            (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          if ( !v110 )
            goto LABEL_327;
          v233 = v110->fields._items;
          v234 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v110->fields._version;
          if ( !v233 )
            goto LABEL_327;
          v235 = v110->fields._size;
          v236 = mNewItemSp;
          if ( (unsigned int)v235 >= LODWORD(v233->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v110,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v234[4] + 192LL) + 112LL));
          }
          else
          {
            v237 = &v233->obj.klass + v235;
            v110->fields._size = v235 + 1;
            v237[4] = (Il2CppClass *)v236;
            sub_1C36FFC((CGThumbnailListItem_o *)(v237 + 4), (int32_t)v236, v231, v232);
          }
          v255 = (Il2CppObject *)this->fields.mExchangeServantTimeRoot;
          v194 = v110->fields._items;
          v195 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v110->fields._version;
          if ( !v194 )
            goto LABEL_327;
          goto LABEL_251;
        case 28:
          v25 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v25,
            (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          if ( !v25 )
            goto LABEL_327;
          v98 = v25->fields._items;
          v99 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v25->fields._version;
          if ( !v98 )
            goto LABEL_327;
          v100 = v25->fields._size;
          v101 = mNewItemSp;
          if ( (unsigned int)v100 >= LODWORD(v98->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
          }
          else
          {
            v102 = &v98->obj.klass + v100;
            v25->fields._size = v100 + 1;
            v102[4] = (Il2CppClass *)v101;
            sub_1C36FFC((CGThumbnailListItem_o *)(v102 + 4), (int32_t)v101, v96, v97);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          v169 = v25->fields._items;
          v170 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v25->fields._version;
          if ( !v169 )
            goto LABEL_327;
          v171 = v25->fields._size;
          v172 = mNewItemSp;
          if ( (unsigned int)v171 >= LODWORD(v169->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v170[4] + 192LL) + 112LL));
          }
          else
          {
            v173 = &v169->obj.klass + v171;
            v25->fields._size = v171 + 1;
            v173[4] = (Il2CppClass *)v172;
            sub_1C36FFC((CGThumbnailListItem_o *)(v173 + 4), (int32_t)v172, v167, v168);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          v212 = v25->fields._items;
          v213 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v25->fields._version;
          if ( !v212 )
            goto LABEL_327;
          v214 = v25->fields._size;
          v215 = mNewItemSp;
          if ( (unsigned int)v214 >= LODWORD(v212->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v213[4] + 192LL) + 112LL));
          }
          else
          {
            v216 = &v212->obj.klass + v214;
            v25->fields._size = v214 + 1;
            v216[4] = (Il2CppClass *)v215;
            sub_1C36FFC((CGThumbnailListItem_o *)(v216 + 4), (int32_t)v215, v210, v211);
          }
          v110 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v110,
            (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_327;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
          if ( !v110 )
            goto LABEL_327;
          v240 = v110->fields._items;
          v241 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v110->fields._version;
          if ( !v240 )
            goto LABEL_327;
          v242 = v110->fields._size;
          v243 = mNewItemSp;
          if ( (unsigned int)v242 >= LODWORD(v240->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v110,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v241[4] + 192LL) + 112LL));
          }
          else
          {
            v244 = &v240->obj.klass + v242;
            v110->fields._size = v242 + 1;
            v244[4] = (Il2CppClass *)v243;
            sub_1C36FFC((CGThumbnailListItem_o *)(v244 + 4), (int32_t)v243, v238, v239);
          }
          v255 = (Il2CppObject *)this->fields.mExchangeServantTimeRoot;
          v194 = v110->fields._items;
          v195 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v110->fields._version;
          if ( !v194 )
            goto LABEL_327;
LABEL_251:
          v253 = v110->fields._size;
          max_length = v194->max_length;
LABEL_252:
          if ( (unsigned int)v253 >= max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v110,
              v255,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v195[4] + 192LL) + 112LL));
          }
          else
          {
            v256 = &v194->obj.klass + v253;
            v110->fields._size = v253 + 1;
            v256[4] = (Il2CppClass *)v255;
            sub_1C36FFC((CGThumbnailListItem_o *)(v256 + 4), (int32_t)v255, v192, v193);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonLb;
          if ( mNewItemSp )
            goto LABEL_256;
          goto LABEL_327;
        default:
          v25 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v25,
            (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          if ( v24 == 30 )
          {
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
            if ( !mNewItemSp )
              goto LABEL_327;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
            if ( !v25 )
              goto LABEL_327;
            v35 = v25->fields._items;
            v36 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v25->fields._version;
            if ( !v35 )
              goto LABEL_327;
            v37 = v25->fields._size;
            v38 = mNewItemSp;
            if ( (unsigned int)v37 >= LODWORD(v35->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v25,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
            }
            else
            {
              v39 = &v35->obj.klass + v37;
              v25->fields._size = v37 + 1;
              v39[4] = (Il2CppClass *)v38;
              sub_1C36FFC((CGThumbnailListItem_o *)(v39 + 4), (int32_t)v38, v33, v34);
            }
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
            if ( !mNewItemSp )
              goto LABEL_327;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
            v293 = v25->fields._items;
            v294 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v25->fields._version;
            if ( !v293 )
              goto LABEL_327;
            v295 = v25->fields._size;
            v296 = mNewItemSp;
            if ( (unsigned int)v295 >= LODWORD(v293->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v25,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v294[4] + 192LL) + 112LL));
            }
            else
            {
              v297 = &v293->obj.klass + v295;
              v25->fields._size = v295 + 1;
              v297[4] = (Il2CppClass *)v296;
              sub_1C36FFC((CGThumbnailListItem_o *)(v297 + 4), (int32_t)v296, v291, v292);
            }
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
            if ( !mNewItemSp )
              goto LABEL_327;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
            v300 = v25->fields._items;
            v301 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v25->fields._version;
            if ( !v300 )
              goto LABEL_327;
            v302 = v25->fields._size;
            v303 = mNewItemSp;
            if ( (unsigned int)v302 >= LODWORD(v300->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v25,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v301[4] + 192LL) + 112LL));
            }
            else
            {
              v304 = &v300->obj.klass + v302;
              v25->fields._size = v302 + 1;
              v304[4] = (Il2CppClass *)v303;
              sub_1C36FFC((CGThumbnailListItem_o *)(v304 + 4), (int32_t)v303, v298, v299);
            }
            mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
            if ( !mNewItemSp )
              goto LABEL_327;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
            v307 = v25->fields._items;
            v308 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v25->fields._version;
            if ( !v307 )
              goto LABEL_327;
            v309 = v25->fields._size;
            v310 = mNewItemSp;
            if ( (unsigned int)v309 >= LODWORD(v307->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v25,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v308[4] + 192LL) + 112LL));
            }
            else
            {
              v311 = &v307->obj.klass + v309;
              v25->fields._size = v309 + 1;
              v311[4] = (Il2CppClass *)v310;
              sub_1C36FFC((CGThumbnailListItem_o *)(v311 + 4), (int32_t)v310, v305, v306);
            }
            v110 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GameObject__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v110,
              (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
            if ( !mNewItemSp )
              goto LABEL_327;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
            if ( !v110 )
              goto LABEL_327;
            v314 = v110->fields._items;
            v315 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v110->fields._version;
            if ( !v314 )
              goto LABEL_327;
            v316 = v110->fields._size;
            v317 = mNewItemSp;
            if ( (unsigned int)v316 >= LODWORD(v314->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v110,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v315[4] + 192LL) + 112LL));
            }
            else
            {
              v318 = &v314->obj.klass + v316;
              v110->fields._size = v316 + 1;
              v318[4] = (Il2CppClass *)v317;
              sub_1C36FFC((CGThumbnailListItem_o *)(v318 + 4), (int32_t)v317, v312, v313);
            }
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
            if ( !mNewItemSp )
              goto LABEL_327;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
            v321 = v110->fields._items;
            v322 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v110->fields._version;
            if ( !v321 )
              goto LABEL_327;
            v323 = v110->fields._size;
            v324 = mNewItemSp;
            if ( (unsigned int)v323 >= LODWORD(v321->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v110,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v322[4] + 192LL) + 112LL));
            }
            else
            {
              v325 = &v321->obj.klass + v323;
              v110->fields._size = v323 + 1;
              v325[4] = (Il2CppClass *)v324;
              sub_1C36FFC((CGThumbnailListItem_o *)(v325 + 4), (int32_t)v324, v319, v320);
            }
            v328 = (Il2CppObject *)this->fields.mExchangeServantTimeRoot;
            v329 = v110->fields._items;
            v330 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v110->fields._version;
            if ( !v329 )
              goto LABEL_327;
            v331 = v110->fields._size;
            if ( (unsigned int)v331 >= LODWORD(v329->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v110,
                v328,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v330[4] + 192LL) + 112LL));
            }
            else
            {
              v332 = &v329->obj.klass + v331;
              v110->fields._size = v331 + 1;
              v332[4] = (Il2CppClass *)v328;
              sub_1C36FFC((CGThumbnailListItem_o *)(v332 + 4), (int32_t)v328, v326, v327);
            }
            mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonLb;
            if ( !mNewItemSp )
              goto LABEL_327;
LABEL_256:
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
            v251 = v110->fields._items;
            v252 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v110->fields._version;
            if ( !v251 )
              goto LABEL_327;
            mExchangeServantTimeRoot = (Il2CppObject *)mNewItemSp;
LABEL_258:
            v257 = v110->fields._size;
            if ( (unsigned int)v257 >= LODWORD(v251->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v110,
                mExchangeServantTimeRoot,
                *(const MethodInfo_37A3024 **)(*(_QWORD *)(v252[4] + 192LL) + 112LL));
            }
            else
            {
              v258 = &v251->obj.klass + v257;
              v110->fields._size = v257 + 1;
              v258[4] = (Il2CppClass *)mExchangeServantTimeRoot;
              sub_1C36FFC((CGThumbnailListItem_o *)(v258 + 4), (int32_t)mExchangeServantTimeRoot, v248, v249);
            }
          }
          else
          {
            v110 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GameObject__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v110,
              (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          }
          mNewItemSp = (UnityEngine_Component_o *)*p_shopNoticeTween;
          if ( !*p_shopNoticeTween )
            goto LABEL_327;
          ShopNoticeTween__AddTargets(
            (ShopNoticeTween_o *)mNewItemSp,
            this->fields.mLimitedItemIconRoot,
            (System_Collections_Generic_List_GameObject__o *)v25,
            (System_Collections_Generic_List_GameObject__o *)v110,
            0);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeTween;
          if ( !mNewItemSp )
            goto LABEL_327;
          ShopNoticeTween__SetActiveSwitchingTargets((ShopNoticeTween_o *)mNewItemSp, 0, 0);
          mNewItemSp = (UnityEngine_Component_o *)*p_shopNoticeTween;
          if ( !*p_shopNoticeTween )
            goto LABEL_327;
          ShopNoticeTween__Start((ShopNoticeTween_o *)mNewItemSp, 0);
          break;
      }
    }
    else
    {
      mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeTween;
      if ( mNewItemSp )
        ShopNoticeTween__Stop((ShopNoticeTween_o *)mNewItemSp, 0);
    }
    v259 = this->fields.shopNotice;
    if ( !v259 )
      goto LABEL_327;
    if ( v259->fields._LimitedType_k__BackingField )
    {
      mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeRemainTime;
      if ( mNewItemSp
        || (v260 = (ShopNoticeRemainTime_o *)sub_1C372A4(ShopNoticeRemainTime_TypeInfo),
            ShopNoticeRemainTime___ctor(v260, (UnityEngine_MonoBehaviour_o *)this, 0),
            this->fields.shopNoticeRemainTime = v260,
            sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.shopNoticeRemainTime, (int32_t)v260, v261, v262),
            (mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeRemainTime) != 0) )
      {
        ShopNoticeRemainTime__SetShopNotice((ShopNoticeRemainTime_o *)mNewItemSp, this->fields.shopNotice, 0);
        mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeRemainTime;
        if ( mNewItemSp )
        {
          ShopNoticeRemainTime__Start((ShopNoticeRemainTime_o *)mNewItemSp, 0);
          v264 = this->fields.shopNotice;
          if ( v264 )
          {
            mPeriodLimitedTimeLb = this->fields.mPeriodLimitedTimeLb;
            PeriodTimeLimit_k__BackingField = v264->fields._PeriodTimeLimit_k__BackingField;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            mNewItemSp = (UnityEngine_Component_o *)LocalizationManager__GetRestTime5(
                                                      PeriodTimeLimit_k__BackingField,
                                                      -1,
                                                      v263);
            if ( mPeriodLimitedTimeLb )
            {
              UILabel__set_text(mPeriodLimitedTimeLb, (System_String_o *)mNewItemSp, 0);
              v268 = this->fields.shopNotice;
              if ( v268 )
              {
                mMonthlyLimitedTimeLb = this->fields.mMonthlyLimitedTimeLb;
                mNewItemSp = (UnityEngine_Component_o *)LocalizationManager__GetRestTime5(
                                                          v268->fields._MonthlyTimeLimit_k__BackingField,
                                                          -1,
                                                          v267);
                if ( mMonthlyLimitedTimeLb )
                {
                  UILabel__set_text(mMonthlyLimitedTimeLb, (System_String_o *)mNewItemSp, 0);
                  v271 = this->fields.shopNotice;
                  if ( v271 )
                  {
                    mExchangeServantItemLb = this->fields.mExchangeServantItemLb;
                    mNewItemSp = (UnityEngine_Component_o *)LocalizationManager__GetRestTime5(
                                                              v271->fields._ExchangeServantTimeLimit_k__BackingField,
                                                              -1,
                                                              v270);
                    if ( mExchangeServantItemLb )
                    {
                      UILabel__set_text(mExchangeServantItemLb, (System_String_o *)mNewItemSp, 0);
                      p_periodShopNoticeRemainTimeLabel = &this->fields.periodShopNoticeRemainTimeLabel;
                      if ( !this->fields.periodShopNoticeRemainTimeLabel )
                      {
                        v274 = this->fields.mPeriodLimitedTimeLb;
                        v275 = (ShopNoticeRemainTimeLabel_o *)sub_1C372A4(ShopNoticeRemainTimeLabel_TypeInfo);
                        ShopNoticeRemainTimeLabel___ctor(v275, v274, (UnityEngine_MonoBehaviour_o *)this, 0);
                        this->fields.periodShopNoticeRemainTimeLabel = v275;
                        sub_1C36FFC(
                          (CGThumbnailListItem_o *)&this->fields.periodShopNoticeRemainTimeLabel,
                          (int32_t)v275,
                          v276,
                          v277);
                      }
                      p_monthlyShopNoticeRemainTimeLabel = &this->fields.monthlyShopNoticeRemainTimeLabel;
                      if ( !this->fields.monthlyShopNoticeRemainTimeLabel )
                      {
                        v279 = this->fields.mMonthlyLimitedTimeLb;
                        v280 = (ShopNoticeRemainTimeLabel_o *)sub_1C372A4(ShopNoticeRemainTimeLabel_TypeInfo);
                        ShopNoticeRemainTimeLabel___ctor(v280, v279, (UnityEngine_MonoBehaviour_o *)this, 0);
                        this->fields.monthlyShopNoticeRemainTimeLabel = v280;
                        sub_1C36FFC(
                          (CGThumbnailListItem_o *)&this->fields.monthlyShopNoticeRemainTimeLabel,
                          (int32_t)v280,
                          v281,
                          v282);
                      }
                      p_exchangeServantShopNoticeRemainTimeLabel = &this->fields.exchangeServantShopNoticeRemainTimeLabel;
                      if ( !this->fields.exchangeServantShopNoticeRemainTimeLabel )
                      {
                        v284 = this->fields.mExchangeServantItemLb;
                        v285 = (ShopNoticeRemainTimeLabel_o *)sub_1C372A4(ShopNoticeRemainTimeLabel_TypeInfo);
                        ShopNoticeRemainTimeLabel___ctor(v285, v284, (UnityEngine_MonoBehaviour_o *)this, 0);
                        this->fields.exchangeServantShopNoticeRemainTimeLabel = v285;
                        sub_1C36FFC(
                          (CGThumbnailListItem_o *)&this->fields.exchangeServantShopNoticeRemainTimeLabel,
                          (int32_t)v285,
                          v286,
                          v287);
                      }
                      v288 = this->fields.shopNotice;
                      if ( v288 )
                      {
                        mNewItemSp = (UnityEngine_Component_o *)this->fields.periodShopNoticeRemainTimeLabel;
                        if ( mNewItemSp )
                        {
                          ShopNoticeRemainTimeLabel__SetTimeLimit(
                            (ShopNoticeRemainTimeLabel_o *)mNewItemSp,
                            v288->fields._PeriodTimeLimit_k__BackingField,
                            1,
                            0);
                          mNewItemSp = (UnityEngine_Component_o *)*p_periodShopNoticeRemainTimeLabel;
                          if ( *p_periodShopNoticeRemainTimeLabel )
                          {
                            ShopNoticeRemainTimeLabel__Start((ShopNoticeRemainTimeLabel_o *)mNewItemSp, 0);
                            v289 = this->fields.shopNotice;
                            if ( v289 )
                            {
                              mNewItemSp = (UnityEngine_Component_o *)this->fields.monthlyShopNoticeRemainTimeLabel;
                              if ( mNewItemSp )
                              {
                                ShopNoticeRemainTimeLabel__SetTimeLimit(
                                  (ShopNoticeRemainTimeLabel_o *)mNewItemSp,
                                  v289->fields._MonthlyTimeLimit_k__BackingField,
                                  1,
                                  0);
                                mNewItemSp = (UnityEngine_Component_o *)*p_monthlyShopNoticeRemainTimeLabel;
                                if ( *p_monthlyShopNoticeRemainTimeLabel )
                                {
                                  ShopNoticeRemainTimeLabel__Start((ShopNoticeRemainTimeLabel_o *)mNewItemSp, 0);
                                  v290 = this->fields.shopNotice;
                                  if ( v290 )
                                  {
                                    mNewItemSp = (UnityEngine_Component_o *)this->fields.exchangeServantShopNoticeRemainTimeLabel;
                                    if ( mNewItemSp )
                                    {
                                      ShopNoticeRemainTimeLabel__SetTimeLimit(
                                        (ShopNoticeRemainTimeLabel_o *)mNewItemSp,
                                        v290->fields._ExchangeServantTimeLimit_k__BackingField,
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
      }
LABEL_327:
      sub_1C372B4(mNewItemSp);
    }
  }
}


void MainMenuBarBase__ResetSummonNoticeDraw(MainMenuBarBase_o *this, const MethodInfo *method)
{
  GachaMaster_o *Master_object; // x0
  System_Collections_Generic_List_object__o *ValidGachaEntityList; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v5; // x20
  _BOOL8 v6; // x0
  Il2CppObject *current; // x27
  int32_t klass; // w21
  struct System_Collections_Generic_Dictionary_GameObject__int__o *campaignNoticeMap; // x0
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v13; // x5
  __int64 v14; // x6
  __int64 v15; // x7
  Il2CppObject *v16; // x1
  System_String_o *v17; // x21
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  __int64 v21; // x5
  __int64 v22; // x6
  __int64 v23; // x7
  Il2CppObject *v24; // x1
  UnityEngine_GameObject_o *summonCampaignRootObject; // x0
  Il2CppObject *campaignNoticePrefab; // x22
  UnityEngine_Transform_o *transform; // x23
  Il2CppObject *v28; // x0
  CampaignNoticeObject_o *v29; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v31; // w23
  System_Action_int__o *v32; // x24
  UISprite_o *campaignSprite; // x23
  System_Collections_Generic_List_object__o *summonCampaignObjects; // x21
  Il2CppObject *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  Il2CppObject *v38; // x1
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  int32_t v43; // w21
  struct System_Collections_Generic_Dictionary_GameObject__int__o *v44; // x0
  const MethodInfo *v45; // x1
  UILabel_o *summonCampainLabel1; // x20
  UILabel_o *summonCampainLabel2; // x20
  const MethodInfo *v48; // x1
  UILabel_o *summonCampainNumLabel; // x20
  int v50; // w23
  int v51; // w22
  UISprite_o *oneTimeFreeSprite; // x20
  struct ShopNoticeTween_o **p_summonNoticeTween; // x20
  ShopNoticeTween_o *v54; // x21
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  struct System_Collections_Generic_List_GameObject__o *v57; // x8
  System_Collections_Generic_List_object__o *v58; // x21
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  Il2CppObject *summonCampainObject; // x1
  struct System_Object_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  Il2CppClass **v65; // x0
  struct System_Collections_Generic_List_GameObject__o *v66; // x1
  Il2CppObject *summonOneTimeFreeObject; // x1
  struct System_Object_array *v68; // x8
  _QWORD *v69; // x9
  __int64 v70; // x10
  Il2CppClass **v71; // x0
  __int64 v72; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_object__o v73; // [xsp+8h] [xbp-B8h] BYREF
  int32_t maxNum; // [xsp+24h] [xbp-9Ch] BYREF
  int64_t endedAt; // [xsp+28h] [xbp-98h] BYREF
  Il2CppObject *entity; // [xsp+30h] [xbp-90h] BYREF
  int32_t remainNum; // [xsp+3Ch] [xbp-84h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v78; // [xsp+40h] [xbp-80h] BYREF
  int v79; // [xsp+5Ch] [xbp-64h] BYREF

  if ( (byte_4C42714 & 1) == 0 )
  {
    sub_1C37058(&System_Action_int__TypeInfo);
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_GachaDetailMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_GameObject__int__set_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GachaEntity__get_Current__);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_GachaEntity__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__get_Count__);
    sub_1C37058(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_MainMenuBarBase_OnClickSummonCampaign__);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_CampaignNoticeObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&ShopNoticeTween_TypeInfo);
    sub_1C37058(&UserGachaMaster_TypeInfo);
    sub_1C37058(&StringLiteral_6553/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG1"*/);
    sub_1C37058(&StringLiteral_20242/*"icon_summoncampaign_80557"*/);
    sub_1C37058(&StringLiteral_20243/*"icon_summoncampaign_{0}"*/);
    sub_1C37058(&StringLiteral_6554/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG2"*/);
    byte_4C42714 = 1;
  }
  memset(&v78, 0, sizeof(v78));
  remainNum = 0;
  endedAt = 0;
  entity = 0;
  maxNum = 0;
  if ( this->fields.isOpen )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (GachaMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_GachaMaster___);
    if ( !Master_object )
      goto LABEL_91;
    ValidGachaEntityList = (System_Collections_Generic_List_object__o *)GachaMaster__GetValidGachaEntityList(
                                                                          Master_object,
                                                                          0);
    Master_object = (GachaMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_GachaDetailMaster___);
    v79 = 0;
    if ( !ValidGachaEntityList )
      goto LABEL_91;
    v5 = (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v73,
      ValidGachaEntityList,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GachaEntity__GetEnumerator__);
    v72 = 0;
    v78 = v73;
    while ( 1 )
    {
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v78,
             (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GachaEntity__MoveNext__);
      if ( !v6 )
        break;
      current = v78.fields._current;
      if ( !v78.fields._current )
        sub_1C372B4(v6);
      if ( LODWORD(v78.fields._current[3].klass) == 3 )
      {
        klass = (int32_t)v78.fields._current[1].klass;
        if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
        v6 = UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(klass, &remainNum, &maxNum, 0);
        if ( v6 )
        {
          v79 += remainNum;
          campaignNoticeMap = this->fields.campaignNoticeMap;
          if ( !campaignNoticeMap )
            sub_1C372B4(0);
          System_Collections_Generic_Dictionary_object__int___set_Item(
            (System_Collections_Generic_Dictionary_object__int__o *)campaignNoticeMap,
            (Il2CppObject *)this->fields.summonCampainObject,
            (int32_t)current[1].klass,
            (const MethodInfo_345A8EC *)Method_System_Collections_Generic_Dictionary_GameObject__int__set_Item__);
          BYTE4(v72) = 1;
        }
      }
      if ( !v5 )
        sub_1C372B4(v6);
      if ( DataMasterBase_object__object__int___TryGetEntity(
             v5,
             &entity,
             (int32_t)current[1].klass,
             (const MethodInfo_33A10EC *)Method_DataMasterBase_GachaDetailMaster__GachaDetailEntity__int__TryGetEntity__) )
      {
        if ( !entity )
          sub_1C372B4(0);
        if ( GachaDetailEntity__IsPrivilegeSummon((GachaDetailEntity_o *)entity, &endedAt, 0) )
        {
          LODWORD(v73.fields._list) = current[1].klass;
          v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v73, v10, v11, v12, v13, v14, v15);
          v17 = System_String__Format((System_String_o *)StringLiteral_20243/*"icon_summoncampaign_{0}"*/, v16, 0);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          if ( !AtlasManager__IsExistBanner(v17, 0) )
          {
            LODWORD(v73.fields._list) = 501;
            v24 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v73, v18, v19, v20, v21, v22, v23);
            v17 = System_String__Format((System_String_o *)StringLiteral_20243/*"icon_summoncampaign_{0}"*/, v24, 0);
          }
          summonCampaignRootObject = this->fields.summonCampaignRootObject;
          if ( !summonCampaignRootObject )
            sub_1C372B4(0);
          campaignNoticePrefab = (Il2CppObject *)this->fields.campaignNoticePrefab;
          transform = UnityEngine_GameObject__get_transform(summonCampaignRootObject, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v28 = UnityEngine_Object__Instantiate_object__51855596(
                  campaignNoticePrefab,
                  transform,
                  (const MethodInfo_31740EC *)Method_UnityEngine_Object_Instantiate_CampaignNoticeObject___);
          v29 = (CampaignNoticeObject_o *)v28;
          if ( !v28 )
            sub_1C372B4(0);
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v28, 0);
          if ( !gameObject )
            sub_1C372B4(0);
          UnityEngine_GameObject__SetActive(gameObject, 1, 0);
          v31 = (int32_t)current[1].klass;
          v32 = (System_Action_int__o *)sub_1C372A4(System_Action_int__TypeInfo);
          System_Action_int____ctor(
            v32,
            (Il2CppObject *)this,
            (intptr_t)Method_MainMenuBarBase_OnClickSummonCampaign__,
            0);
          CampaignNoticeObject__Initialize(v29, v31, v32, 0);
          CampaignNoticeObject__StartUpdateLimitTime(v29, endedAt, (UnityEngine_MonoBehaviour_o *)this, 0);
          campaignSprite = v29->fields.campaignSprite;
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__SetBanner(campaignSprite, v17, 0);
          summonCampaignObjects = (System_Collections_Generic_List_object__o *)this->fields.summonCampaignObjects;
          v35 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v29, 0);
          v38 = v35;
          if ( !summonCampaignObjects )
            sub_1C372B4(v35);
          items = summonCampaignObjects->fields._items;
          v40 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++summonCampaignObjects->fields._version;
          if ( !items )
            sub_1C372B4(v35);
          size = summonCampaignObjects->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              summonCampaignObjects,
              v35,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
          }
          else
          {
            v42 = &items->obj.klass + size;
            summonCampaignObjects->fields._size = size + 1;
            v42[4] = (Il2CppClass *)v38;
            sub_1C36FFC((CGThumbnailListItem_o *)(v42 + 4), (int32_t)v38, v36, v37);
          }
        }
      }
      v43 = (int32_t)current[1].klass;
      if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
      if ( UserGachaMaster__IsOneTimeFreeCampaignActive(v43, 0) )
      {
        v44 = this->fields.campaignNoticeMap;
        if ( !v44 )
          sub_1C372B4(0);
        LOBYTE(v72) = 1;
        System_Collections_Generic_Dictionary_object__int___set_Item(
          (System_Collections_Generic_Dictionary_object__int__o *)v44,
          (Il2CppObject *)this->fields.summonOneTimeFreeObject,
          (int32_t)current[1].klass,
          (const MethodInfo_345A8EC *)Method_System_Collections_Generic_Dictionary_GameObject__int__set_Item__);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v78,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GachaEntity__Dispose__);
    if ( (v72 & 0x100000000LL) != 0 )
    {
      Master_object = (GachaMaster_o *)this->fields.summonCampainObject;
      if ( !Master_object )
        goto LABEL_91;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
      summonCampainLabel1 = this->fields.summonCampainLabel1;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      Master_object = (GachaMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6553/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG1"*/, v45);
      if ( !summonCampainLabel1 )
        goto LABEL_91;
      UILabel__set_text(summonCampainLabel1, (System_String_o *)Master_object, 0);
      summonCampainLabel2 = this->fields.summonCampainLabel2;
      Master_object = (GachaMaster_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6554/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG2"*/, v48);
      if ( !summonCampainLabel2 )
        goto LABEL_91;
      UILabel__set_text(summonCampainLabel2, (System_String_o *)Master_object, 0);
      summonCampainNumLabel = this->fields.summonCampainNumLabel;
      Master_object = (GachaMaster_o *)System_Int32__ToString((int32_t)&v79, 0);
      if ( !summonCampainNumLabel )
        goto LABEL_91;
      UILabel__set_text(summonCampainNumLabel, (System_String_o *)Master_object, 0);
      v50 = 1;
      if ( (v72 & 1) == 0 )
      {
        v51 = 0;
        goto LABEL_66;
      }
    }
    else
    {
      v50 = 0;
      v51 = 0;
      if ( (v72 & 1) == 0 )
        goto LABEL_66;
    }
    Master_object = (GachaMaster_o *)this->fields.summonOneTimeFreeObject;
    if ( !Master_object )
      goto LABEL_91;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
    oneTimeFreeSprite = this->fields.oneTimeFreeSprite;
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__SetBanner(oneTimeFreeSprite, (System_String_o *)StringLiteral_20242/*"icon_summoncampaign_80557"*/, 0);
    v51 = 1;
LABEL_66:
    Master_object = (GachaMaster_o *)this->fields.summonNoticeTween;
    p_summonNoticeTween = &this->fields.summonNoticeTween;
    if ( Master_object
      || (v54 = (ShopNoticeTween_o *)sub_1C372A4(ShopNoticeTween_TypeInfo),
          ShopNoticeTween___ctor(v54, (UnityEngine_MonoBehaviour_o *)this, 0),
          this->fields.summonNoticeTween = v54,
          sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.summonNoticeTween, (int32_t)v54, v55, v56),
          (Master_object = (GachaMaster_o *)this->fields.summonNoticeTween) != 0) )
    {
      ShopNoticeTween__Stop((ShopNoticeTween_o *)Master_object, 0);
      v57 = this->fields.summonCampaignObjects;
      if ( v57 )
      {
        if ( v51 + v50 + v57->fields._size < 2 )
          return;
        v58 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_GameObject__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v58,
          (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_GameObject___ctor__);
        if ( v50 )
        {
          if ( !v58 )
            goto LABEL_91;
          summonCampainObject = (Il2CppObject *)this->fields.summonCampainObject;
          v62 = v58->fields._items;
          v63 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v58->fields._version;
          if ( !v62 )
            goto LABEL_91;
          v64 = v58->fields._size;
          if ( (unsigned int)v64 >= LODWORD(v62->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v58,
              summonCampainObject,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
          }
          else
          {
            v65 = &v62->obj.klass + v64;
            v58->fields._size = v64 + 1;
            v65[4] = (Il2CppClass *)summonCampainObject;
            sub_1C36FFC((CGThumbnailListItem_o *)(v65 + 4), (int32_t)summonCampainObject, v59, v60);
          }
        }
        v66 = this->fields.summonCampaignObjects;
        if ( !v66 )
          goto LABEL_91;
        if ( v66->fields._size >= 1 )
        {
          if ( !v58 )
            goto LABEL_91;
          System_Collections_Generic_List_object___AddRange(
            v58,
            (System_Collections_Generic_IEnumerable_T__o *)v66,
            (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_GameObject__AddRange__);
        }
        if ( v51 )
        {
          if ( !v58 )
            goto LABEL_91;
          summonOneTimeFreeObject = (Il2CppObject *)this->fields.summonOneTimeFreeObject;
          v68 = v58->fields._items;
          v69 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v58->fields._version;
          if ( !v68 )
            goto LABEL_91;
          v70 = v58->fields._size;
          if ( (unsigned int)v70 >= LODWORD(v68->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v58,
              summonOneTimeFreeObject,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v69[4] + 192LL) + 112LL));
          }
          else
          {
            v71 = &v68->obj.klass + v70;
            v58->fields._size = v70 + 1;
            v71[4] = (Il2CppClass *)summonOneTimeFreeObject;
            sub_1C36FFC((CGThumbnailListItem_o *)(v71 + 4), (int32_t)summonOneTimeFreeObject, v59, v60);
          }
        }
        Master_object = (GachaMaster_o *)*p_summonNoticeTween;
        if ( *p_summonNoticeTween )
        {
          ShopNoticeTween__AddTargets(
            (ShopNoticeTween_o *)Master_object,
            this->fields.summonCampaignRootObject,
            (System_Collections_Generic_List_GameObject__o *)v58,
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
LABEL_91:
    sub_1C372B4(Master_object);
  }
}


void MainMenuBarBase__SendSelectSignal(
        MainMenuBarBase_o *this,
        int32_t type,
        System_String_o *message,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  UnityEngine_Object_o *activeSceneFSM; // x23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  PlayMakerFSM_o *v14; // x0

  if ( (byte_4C4270E & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_8521/*"MAIN_MENU_BAR_SELECT"*/);
    byte_4C4270E = 1;
  }
  activeSceneFSM = (UnityEngine_Object_o *)this->fields.activeSceneFSM;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(activeSceneFSM, 0, 0) && !System_String__IsNullOrEmpty(message, 0) )
  {
    this->fields.selectedType = type;
    this->fields.selectedKind = message;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.selectedKind, (int32_t)message, v10, v11);
    this->fields.selectedObject = obj;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.selectedObject, (int32_t)obj, v12, v13);
    v14 = this->fields.activeSceneFSM;
    if ( !v14 )
      sub_1C372B4(0);
    PlayMakerFSM__SendEvent(v14, (System_String_o *)StringLiteral_8521/*"MAIN_MENU_BAR_SELECT"*/, 0);
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
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *ComponentInChildren_object__51242636; // x0
  UnityEngine_Component_o *v13; // x23
  UnityEngine_Transform_o *v14; // x24
  UnityEngine_GameObject_o *v15; // x24
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct PlayMakerFSM_o *myFSM; // x1
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x3

  if ( (byte_4C4270A & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Component_GetComponentInChildren_UICamera___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UICamera___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4270A = 1;
  }
  this->fields.activeScene = scene;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.activeScene,
    (int32_t)scene,
    kind,
    *(const MethodInfo **)&panelDepth);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !scene )
      goto LABEL_27;
    ComponentInChildren_object__51242636 = UnityEngine_Component__GetComponentInChildren_object__51242636(
                                             (UnityEngine_Component_o *)scene,
                                             (const MethodInfo_30DE68C *)Method_UnityEngine_Component_GetComponentInChildren_UICamera___);
  }
  else
  {
    if ( !cam )
      goto LABEL_27;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cam, 0);
    if ( !gameObject )
      goto LABEL_27;
    ComponentInChildren_object__51242636 = UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UICamera___);
  }
  v13 = (UnityEngine_Component_o *)ComponentInChildren_object__51242636;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0, 0) )
  {
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
    if ( !v13 )
      goto LABEL_27;
    v14 = (UnityEngine_Transform_o *)gameObject;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v13, 0);
    if ( !v14 )
      goto LABEL_27;
    UnityEngine_Transform__set_parent(v14, (UnityEngine_Transform_o *)gameObject, 0);
    v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    gameObject = UnityEngine_Component__get_gameObject(v13, 0);
    if ( !gameObject )
      goto LABEL_27;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0);
    if ( !v15 )
      goto LABEL_27;
    UnityEngine_GameObject__set_layer(v15, (int32_t)gameObject, 0);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)scene, 0, 0);
  myFSM = 0;
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !scene )
      goto LABEL_27;
    myFSM = scene->fields.myFSM;
  }
  this->fields.activeSceneFSM = myFSM;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.activeSceneFSM, (int32_t)myFSM, v16, v17);
  gameObject = (UnityEngine_GameObject_o *)this->fields.rootPanel;
  if ( !gameObject
    || (UIPanel__set_depth((UIPanel_o *)gameObject, panelDepth, 0),
        this->fields.kind = kind,
        MainMenuBarBase__SetButtonActive(this, kind, 0, v19),
        MainMenuBarBase__SwitchMenu(this, 0, 0, v20),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.mOutSide) == 0) )
  {
LABEL_27:
    sub_1C372B4(gameObject);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0);
}


void MainMenuBarBase__SetAllBtnAct(MainMenuBarBase_o *this, System_Action_o *act, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.mAllBtnAct = act;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mAllBtnAct, (int32_t)act, (int32_t)method, v3);
}


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
  const MethodInfo *v16; // x1
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w1
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  partyBtn = this->fields.partyBtn;
  if ( isActive )
    v6 = 2;
  else
    v6 = 1;
  if ( !partyBtn )
    goto LABEL_41;
  v9 = kind == 3 ? 3 : v6;
  MainMenuBarButton__SetMode(partyBtn, v9, 0);
  partyBtn = this->fields.summonBtn;
  if ( !partyBtn )
    goto LABEL_41;
  v10 = kind == 4 ? 3 : v6;
  MainMenuBarButton__SetMode(partyBtn, v10, 0);
  partyBtn = this->fields.combineBtn;
  if ( !partyBtn )
    goto LABEL_41;
  v11 = kind == 5 ? 3 : v6;
  MainMenuBarButton__SetMode(partyBtn, v11, 0);
  partyBtn = this->fields.shopBtn;
  if ( !partyBtn )
    goto LABEL_41;
  v12 = kind == 6 ? 3 : v6;
  MainMenuBarButton__SetMode(partyBtn, v12, 0);
  partyBtn = this->fields.friendBtn;
  if ( !partyBtn )
    goto LABEL_41;
  v13 = kind == 7 ? 3 : v6;
  MainMenuBarButton__SetMode(partyBtn, v13, 0);
  partyBtn = this->fields.myroomBtn;
  if ( !partyBtn )
    goto LABEL_41;
  v14 = kind == 8 ? 3 : v6;
  MainMenuBarButton__SetMode(partyBtn, v14, 0);
  partyBtn = this->fields.terminalBtn;
  if ( !partyBtn )
    goto LABEL_41;
  if ( kind == 1 )
    v15 = 3;
  else
    v15 = v6;
  MainMenuBarButton__SetMode(partyBtn, v15, 0);
  if ( kind == 8 && isActive )
  {
    MainMenuBarBase__CheckLatestScenarioButtonEnable(this, v16);
    goto LABEL_40;
  }
  partyBtn = this->fields.latestScenarioBtn;
  if ( !partyBtn )
LABEL_41:
    sub_1C372B4(partyBtn);
  if ( kind == 9 )
    v19 = 3;
  else
    v19 = v6;
  MainMenuBarButton__SetMode(partyBtn, v19, 0);
LABEL_40:
  this->fields.selectedType = -1;
  this->fields.selectedKind = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.selectedKind, 0, v17, v18);
  this->fields.selectedObject = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.selectedObject, 0, v20, v21);
  this->fields.fadeType = 1;
}


void MainMenuBarBase__SetButtonKind(MainMenuBarBase_o *this, int32_t kind, const MethodInfo *method)
{
  this->fields.kind = kind;
}


void MainMenuBarBase__SetDispBtnAct(
        MainMenuBarBase_o *this,
        int32_t kind,
        System_Action_o *act,
        const MethodInfo *method)
{
  struct System_Action_array *mDispBtnActList; // x8
  Il2CppClass **v5; // x0

  mDispBtnActList = this->fields.mDispBtnActList;
  if ( !mDispBtnActList )
    sub_1C372B4(this);
  if ( LODWORD(mDispBtnActList->max_length) <= kind )
    sub_1C372BC(this);
  v5 = &mDispBtnActList->obj.klass + kind;
  v5[4] = (Il2CppClass *)act;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 4), (int32_t)act, (int32_t)act, method);
}


void MainMenuBarBase__SetDispBtnColliderEnable(
        MainMenuBarBase_o *this,
        bool is_enable,
        int32_t kind,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *mDispBtnList; // x0
  int32_t v8; // w22
  UnityEngine_Object_o *v9; // x23
  UnityEngine_Collider_o *v10; // x24
  UnityEngine_Object_o *summonBtn; // x25
  bool enabled; // w0
  const MethodInfo *v13; // x2

  if ( (byte_4C42729 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C37058(&Method_System_Collections_Generic_List_MainMenuBarButton__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_MainMenuBarButton__get_Item__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C42729 = 1;
  }
  mDispBtnList = (System_Collections_Generic_List_object__o *)this->fields.mDispBtnList;
  if ( !mDispBtnList )
LABEL_14:
    sub_1C372B4(mDispBtnList);
  v8 = 0;
  while ( v8 < mDispBtnList->fields._size )
  {
    mDispBtnList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  mDispBtnList,
                                                                  v8,
                                                                  (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_MainMenuBarButton__get_Item__);
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
                                                                      (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
        if ( mDispBtnList )
        {
          v10 = (UnityEngine_Collider_o *)mDispBtnList;
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)mDispBtnList, kind == v8 && is_enable, 0);
          summonBtn = (UnityEngine_Object_o *)this->fields.summonBtn;
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          if ( UnityEngine_Object__op_Equality(v9, summonBtn, 0) )
          {
            enabled = UnityEngine_Collider__get_enabled(v10, 0);
            MainMenuBarBase__SetSummonBalloonIcon(this, enabled, v13);
          }
          mDispBtnList = (System_Collections_Generic_List_object__o *)this->fields.mDispBtnList;
          ++v8;
          if ( mDispBtnList )
            continue;
        }
      }
    }
    goto LABEL_14;
  }
}


void MainMenuBarBase__SetMenuActive(MainMenuBarBase_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C372B4(0);
  UnityEngine_GameObject__SetActive(gameObject, isActive, 0);
}


void MainMenuBarBase__SetMenuBtnAct(MainMenuBarBase_o *this, System_Action_o *act, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.mMenuBtnAct = act;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mMenuBtnAct, (int32_t)act, (int32_t)method, v3);
}


void MainMenuBarBase__SetMenuBtnColliderEnable(
        MainMenuBarBase_o *this,
        bool isEnable,
        bool isGray,
        const MethodInfo *method)
{
  UnityEngine_Component_o *menuStateBtn; // x0
  __int64 v8; // x1

  if ( (byte_4C42728 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    byte_4C42728 = 1;
  }
  menuStateBtn = (UnityEngine_Component_o *)this->fields.menuStateBtn;
  if ( !menuStateBtn )
    goto LABEL_18;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(menuStateBtn, 0);
  if ( !menuStateBtn )
    goto LABEL_18;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)menuStateBtn,
                                              (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !menuStateBtn )
    goto LABEL_18;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)menuStateBtn, isEnable, 0);
  menuStateBtn = (UnityEngine_Component_o *)this->fields.backCloseSprite;
  if ( !menuStateBtn )
    goto LABEL_18;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(menuStateBtn, 0);
  if ( !menuStateBtn )
    goto LABEL_18;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)menuStateBtn,
                                              (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !menuStateBtn )
    goto LABEL_18;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)menuStateBtn, isEnable, 0);
  if ( !isEnable )
  {
    menuStateBtn = (UnityEngine_Component_o *)this->fields.mOutSide;
    if ( !menuStateBtn )
      goto LABEL_18;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)menuStateBtn, 0, 0);
  }
  menuStateBtn = (UnityEngine_Component_o *)this->fields.menuStateBtn;
  if ( !menuStateBtn
    || (!isGray ? (v8 = 0) : (v8 = 3),
        ((void (__fastcall *)(UnityEngine_Component_o *, __int64, __int64, Il2CppClass **))menuStateBtn->klass[1]._1.nestedTypes)(
          menuStateBtn,
          v8,
          1,
          menuStateBtn->klass[1]._1.implementedInterfaces),
        (menuStateBtn = (UnityEngine_Component_o *)this->fields.menuFrameBnt) == 0) )
  {
LABEL_18:
    sub_1C372B4(menuStateBtn);
  }
  UIButtonColor__set_state((UIButtonColor_o *)menuStateBtn, 0, 0);
}


void MainMenuBarBase__SetOutSideColliderEnable(MainMenuBarBase_o *this, bool is_enable, const MethodInfo *method)
{
  UnityEngine_Component_o *menuStateBtn; // x0

  if ( (byte_4C42718 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    byte_4C42718 = 1;
  }
  menuStateBtn = (UnityEngine_Component_o *)this->fields.menuStateBtn;
  if ( !menuStateBtn )
    goto LABEL_10;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(menuStateBtn, 0);
  if ( !menuStateBtn )
    goto LABEL_10;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)menuStateBtn,
                                              (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
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
    sub_1C372B4(menuStateBtn);
  }
}


void MainMenuBarBase__SetSceneChangeFadeType(MainMenuBarBase_o *this, int32_t fadeType, const MethodInfo *method)
{
  this->fields.fadeType = fadeType;
}


void MainMenuBarBase__SetSummonBalloonIcon(MainMenuBarBase_o *this, bool isEnable, const MethodInfo *method)
{
  UnityEngine_GameObject_o *summonCampainObject; // x0
  Il2CppObject *Component_object; // x0
  const MethodInfo *v7; // x3
  Il2CppObject *v8; // x0
  const MethodInfo *v9; // x3
  Il2CppObject *ComponentInChildren_object; // x0
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C4272A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentInChildren_BoxCollider___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    byte_4C4272A = 1;
  }
  memset(&v12, 0, sizeof(v12));
  summonCampainObject = this->fields.summonCampainObject;
  if ( !summonCampainObject )
    goto LABEL_14;
  summonCampainObject = UnityEngine_GameObject__get_gameObject(summonCampainObject, 0);
  if ( !summonCampainObject
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             summonCampainObject,
                             (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        MainMenuBarBase__TrySetColliderEnabled(
          (MainMenuBarBase_o *)Component_object,
          (UnityEngine_Collider_o *)Component_object,
          isEnable,
          v7),
        (summonCampainObject = (UnityEngine_GameObject_o *)this->fields.oneTimeFreeSprite) == 0)
    || (summonCampainObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)summonCampainObject, 0)) == 0
    || (v8 = UnityEngine_GameObject__GetComponent_object_(
               summonCampainObject,
               (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___),
        MainMenuBarBase__TrySetColliderEnabled((MainMenuBarBase_o *)v8, (UnityEngine_Collider_o *)v8, isEnable, v9),
        (summonCampainObject = (UnityEngine_GameObject_o *)this->fields.summonCampaignObjects) == 0) )
  {
LABEL_14:
    sub_1C372B4(summonCampainObject);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v12,
    (System_Collections_Generic_List_object__o *)summonCampainObject,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v12,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
  {
    if ( !v12.fields._current )
      sub_1C372B4(0);
    ComponentInChildren_object = UnityEngine_GameObject__GetComponentInChildren_object_(
                                   (UnityEngine_GameObject_o *)v12.fields._current,
                                   (const MethodInfo_313F43C *)Method_UnityEngine_GameObject_GetComponentInChildren_BoxCollider___);
    MainMenuBarBase__TrySetColliderEnabled(
      (MainMenuBarBase_o *)ComponentInChildren_object,
      (UnityEngine_Collider_o *)ComponentInChildren_object,
      isEnable,
      v11);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v12,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
}


System_Collections_IEnumerator_o *MainMenuBarBase__SetTerminalQuestListClose(
        MainMenuBarBase_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C4271B & 1) == 0 )
  {
    sub_1C37058(&MainMenuBarBase__SetTerminalQuestListClose_d__120_TypeInfo);
    byte_4C4271B = 1;
  }
  v5 = sub_1C372A4(MainMenuBarBase__SetTerminalQuestListClose_d__120_TypeInfo);
  MainMenuBarBase__SetTerminalQuestListClose_d__120___ctor(
    (MainMenuBarBase__SetTerminalQuestListClose_d__120_o *)v5,
    0,
    0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 40), (int32_t)callback, v9, v10);
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
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  __int64 v16; // x5
  __int64 v17; // x6
  __int64 v18; // x7
  struct System_Collections_Hashtable_o *v19; // x23
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x5
  __int64 v24; // x6
  __int64 v25; // x7
  struct System_Collections_Hashtable_o *v26; // x23
  struct System_Collections_Hashtable_o *v27; // x23
  struct System_Collections_Hashtable_o *v28; // x23
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  __int64 v32; // x5
  __int64 v33; // x6
  __int64 v34; // x7
  System_Collections_Hashtable_o *v35; // x23
  const MethodInfo *v36; // x1
  const MethodInfo *v37; // x1
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x1
  float v40; // s10
  struct System_Collections_Hashtable_o *v41; // x23
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  __int64 v45; // x5
  __int64 v46; // x6
  __int64 v47; // x7
  struct System_Collections_Hashtable_o *v48; // x23
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  __int64 v52; // x5
  __int64 v53; // x6
  __int64 v54; // x7
  struct System_Collections_Hashtable_o *v55; // x23
  struct System_Collections_Hashtable_o *v56; // x23
  struct System_Collections_Hashtable_o *v57; // x23
  __int64 v58; // x2
  __int64 v59; // x3
  __int64 v60; // x4
  __int64 v61; // x5
  __int64 v62; // x6
  __int64 v63; // x7
  System_Collections_Hashtable_o *v64; // x21
  _QWORD *v65; // x0
  System_Reflection_MethodBase_o *v66; // x0
  int32_t v67; // w1
  float v68; // [xsp+0h] [xbp-60h] BYREF
  int v69; // [xsp+4h] [xbp-5Ch]
  float v70; // [xsp+8h] [xbp-58h]
  int v71; // [xsp+18h] [xbp-48h] BYREF
  _BYTE v72[4]; // [xsp+1Ch] [xbp-44h] BYREF
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C4270F & 1) == 0 )
  {
    sub_1C37058(&bool_TypeInfo);
    sub_1C37058(&Method_MainMenuBarBase_SwitchMenu__);
    sub_1C37058(&float_TypeInfo);
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    sub_1C37058(&StringLiteral_18754/*"easetype"*/);
    sub_1C37058(&StringLiteral_22417/*"onMoveComplete"*/);
    sub_1C37058(&StringLiteral_18021/*"closeMenuStateImg"*/);
    sub_1C37058(&StringLiteral_18739/*"easeInQuad"*/);
    sub_1C37058(&StringLiteral_24071/*"time"*/);
    sub_1C37058(&StringLiteral_22432/*"oncompletetarget"*/);
    sub_1C37058(&StringLiteral_22437/*"onstarttarget"*/);
    sub_1C37058(&StringLiteral_22740/*"position"*/);
    sub_1C37058(&StringLiteral_20930/*"isLocal"*/);
    sub_1C37058(&StringLiteral_22435/*"onstart"*/);
    sub_1C37058(&StringLiteral_22430/*"oncomplete"*/);
    sub_1C37058(&StringLiteral_22475/*"openMenuStateImg"*/);
    sub_1C37058(&iTween_TypeInfo);
    byte_4C4270F = 1;
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
        v72[0] = 1;
        menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v72, v13, v14, v15, v16, v17, v18);
        if ( table )
        {
          ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))table->klass->vtable._22_Add.methodPtr)(
            table,
            StringLiteral_20930/*"isLocal"*/,
            menuComp,
            table->klass->vtable._22_Add.method);
          v19 = this->fields.table;
          v68 = x;
          v70 = z;
          v69 = -1019674624;
          menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(
                                                   UnityEngine_Vector3_TypeInfo,
                                                   &v68,
                                                   v20,
                                                   v21,
                                                   v22,
                                                   v23,
                                                   v24,
                                                   v25);
          if ( v19 )
          {
            ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v19->klass->vtable._22_Add.methodPtr)(
              v19,
              StringLiteral_22740/*"position"*/,
              menuComp,
              v19->klass->vtable._22_Add.method);
            menuComp = (UnityEngine_GameObject_o *)this->fields.table;
            if ( menuComp )
            {
              (*(void (__fastcall **)(UnityEngine_GameObject_o *, __int64, __int64, _QWORD))&menuComp->klass[1]._2.field_count)(
                menuComp,
                StringLiteral_22435/*"onstart"*/,
                StringLiteral_22475/*"openMenuStateImg"*/,
                *(_QWORD *)&menuComp->klass[1]._2.interfaces_count);
              v26 = this->fields.table;
              menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
              if ( v26 )
              {
                ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v26->klass->vtable._22_Add.methodPtr)(
                  v26,
                  StringLiteral_22437/*"onstarttarget"*/,
                  menuComp,
                  v26->klass->vtable._22_Add.method);
                menuComp = (UnityEngine_GameObject_o *)this->fields.table;
                if ( menuComp )
                {
                  (*(void (__fastcall **)(UnityEngine_GameObject_o *, __int64, __int64, _QWORD))&menuComp->klass[1]._2.field_count)(
                    menuComp,
                    StringLiteral_22430/*"oncomplete"*/,
                    StringLiteral_22417/*"onMoveComplete"*/,
                    *(_QWORD *)&menuComp->klass[1]._2.interfaces_count);
                  v27 = this->fields.table;
                  menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                  if ( v27 )
                  {
                    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v27->klass->vtable._22_Add.methodPtr)(
                      v27,
                      StringLiteral_22432/*"oncompletetarget"*/,
                      menuComp,
                      v27->klass->vtable._22_Add.method);
                    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
                    if ( menuComp )
                    {
                      (*(void (__fastcall **)(UnityEngine_GameObject_o *, __int64, __int64, _QWORD))&menuComp->klass[1]._2.field_count)(
                        menuComp,
                        StringLiteral_18754/*"easetype"*/,
                        StringLiteral_18739/*"easeInQuad"*/,
                        *(_QWORD *)&menuComp->klass[1]._2.interfaces_count);
                      v28 = this->fields.table;
                      v71 = 1024148374;
                      menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(
                                                               float_TypeInfo,
                                                               &v71,
                                                               v29,
                                                               v30,
                                                               v31,
                                                               v32,
                                                               v33,
                                                               v34);
                      if ( v28 )
                      {
                        ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v28->klass->vtable._22_Add.methodPtr)(
                          v28,
                          StringLiteral_24071/*"time"*/,
                          menuComp,
                          v28->klass->vtable._22_Add.method);
                        v35 = this->fields.table;
                        if ( !iTween_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
                        iTween__MoveTo_63199220(gameObject, v35, 0);
                        MainMenuBarBase__ResetShopNotice(this, v36);
                        MainMenuBarBase__ResetSummonNoticeDraw(this, v37);
                        MainMenuBarBase__CheckTerminalButtonEnable(this, v38);
                        MainMenuBarBase__CheckLatestScenarioButtonEnable(this, v39);
                        if ( !is_play_se )
                          return;
LABEL_40:
                        v65 = Method_MainMenuBarBase_SwitchMenu__;
                        if ( (*((_BYTE *)Method_MainMenuBarBase_SwitchMenu__ + 83) & 2) != 0 )
                          v65 = (_QWORD *)sub_1C37070(Method_MainMenuBarBase_SwitchMenu__);
                        v66 = (System_Reflection_MethodBase_o *)sub_1C3703C(v65, v65[4]);
                        if ( is_open )
                          v67 = 9;
                        else
                          v67 = 10;
                        OverwriteAssetSoundName__PlaySystemSe(v66, v67, 0, 0);
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
      sub_1C372B4(menuComp);
    }
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( this->fields.mIsCloseHideMode )
      v40 = -420.0;
    else
      v40 = -328.0;
    if ( !menuComp )
      goto LABEL_47;
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, Il2CppMethodPointer))&menuComp->klass[1]._2.naturalAligment)(
      menuComp,
      menuComp->klass[1].vtable._0_Equals.methodPtr);
    v41 = this->fields.table;
    v72[0] = 1;
    menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v72, v42, v43, v44, v45, v46, v47);
    if ( !v41 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v41->klass->vtable._22_Add.methodPtr)(
      v41,
      StringLiteral_20930/*"isLocal"*/,
      menuComp,
      v41->klass->vtable._22_Add.method);
    v48 = this->fields.table;
    v68 = x;
    v69 = LODWORD(v40);
    v70 = z;
    menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(
                                             UnityEngine_Vector3_TypeInfo,
                                             &v68,
                                             v49,
                                             v50,
                                             v51,
                                             v52,
                                             v53,
                                             v54);
    if ( !v48 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v48->klass->vtable._22_Add.methodPtr)(
      v48,
      StringLiteral_22740/*"position"*/,
      menuComp,
      v48->klass->vtable._22_Add.method);
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( !menuComp )
      goto LABEL_47;
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, __int64, __int64, _QWORD))&menuComp->klass[1]._2.field_count)(
      menuComp,
      StringLiteral_22435/*"onstart"*/,
      StringLiteral_18021/*"closeMenuStateImg"*/,
      *(_QWORD *)&menuComp->klass[1]._2.interfaces_count);
    v55 = this->fields.table;
    menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !v55 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v55->klass->vtable._22_Add.methodPtr)(
      v55,
      StringLiteral_22437/*"onstarttarget"*/,
      menuComp,
      v55->klass->vtable._22_Add.method);
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( !menuComp )
      goto LABEL_47;
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, __int64, __int64, _QWORD))&menuComp->klass[1]._2.field_count)(
      menuComp,
      StringLiteral_22430/*"oncomplete"*/,
      StringLiteral_22417/*"onMoveComplete"*/,
      *(_QWORD *)&menuComp->klass[1]._2.interfaces_count);
    v56 = this->fields.table;
    menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !v56 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v56->klass->vtable._22_Add.methodPtr)(
      v56,
      StringLiteral_22432/*"oncompletetarget"*/,
      menuComp,
      v56->klass->vtable._22_Add.method);
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( !menuComp )
      goto LABEL_47;
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, __int64, __int64, _QWORD))&menuComp->klass[1]._2.field_count)(
      menuComp,
      StringLiteral_18754/*"easetype"*/,
      StringLiteral_18739/*"easeInQuad"*/,
      *(_QWORD *)&menuComp->klass[1]._2.interfaces_count);
    v57 = this->fields.table;
    v71 = 1024148374;
    menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v71, v58, v59, v60, v61, v62, v63);
    if ( !v57 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, const MethodInfo *))v57->klass->vtable._22_Add.methodPtr)(
      v57,
      StringLiteral_24071/*"time"*/,
      menuComp,
      v57->klass->vtable._22_Add.method);
    v64 = this->fields.table;
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__MoveTo_63199220(gameObject, v64, 0);
    if ( is_play_se )
      goto LABEL_40;
  }
}


void MainMenuBarBase__TrySetColliderEnabled(
        MainMenuBarBase_o *this,
        UnityEngine_Collider_o *collider,
        bool isEnabled,
        const MethodInfo *method)
{
  _BOOL8 v6; // x0

  if ( (byte_4C4272B & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C4272B = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)collider, 0, 0);
  if ( v6 )
  {
    if ( !collider )
      sub_1C372B4(v6);
    UnityEngine_Collider__set_enabled(collider, isEnabled, 0);
  }
}


void MainMenuBarBase__UpdateNoticeNumber(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mSummonNoticeNumber; // x20
  long double v4; // q0
  __int64 v5; // x0
  __int64 v6; // x0
  DataManager_o *UserData; // x0
  Il2CppObject *MasterData_object; // x20
  long double v9; // q0
  int m_CancellationTokenSource; // w20
  __int64 v11; // x0
  __int64 v12; // x0
  UnityEngine_Object_o *mFriendNoticeNumber; // x20
  UnityEngine_Object_o *mMenuNoticeNumber; // x20

  if ( (byte_4C42709 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_TblUserMaster___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C42709 = 1;
  }
  mSummonNoticeNumber = (UnityEngine_Object_o *)this->fields.mSummonNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mSummonNoticeNumber, 0, 0) )
  {
    v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
      v5 = sub_1C8776C(v4);
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
    if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
      v6 = sub_1C8776C(v4);
    UserData = **(DataManager_o ***)(v6 + 184);
    if ( !UserData )
      goto LABEL_41;
    MasterData_object = DataManager__GetMasterData_object_(
                          UserData,
                          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_TblUserMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C3CD62 )
    {
      sub_1C37058(&NetworkManager_TypeInfo);
      byte_4C3CD62 = 1;
    }
    UserData = (DataManager_o *)NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
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
    v11 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1C8776C(v9);
    v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1C8776C(v9);
    UserData = **(DataManager_o ***)(v12 + 184);
    if ( !UserData )
      goto LABEL_41;
    UserData = (DataManager_o *)DataManager__GetMasterData_object_(
                                  UserData,
                                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_GachaMaster___);
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
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mFriendNoticeNumber, 0, 0) )
  {
    UserData = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !UserData )
      goto LABEL_41;
    UserData = (DataManager_o *)DataManager__GetMasterData_object_(
                                  UserData,
                                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_TblFriendMaster___);
    if ( !UserData )
      goto LABEL_41;
    UserData = (DataManager_o *)TblFriendMaster__GetSum((TblFriendMaster_o *)UserData, 2, 0);
    if ( !this->fields.mFriendNoticeNumber )
      goto LABEL_41;
    NoticeNumberComponent__SetNumber(this->fields.mFriendNoticeNumber, (int32_t)UserData, 0);
  }
  mMenuNoticeNumber = (UnityEngine_Object_o *)this->fields.mMenuNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mMenuNoticeNumber, 0, 0) )
  {
    UserData = (DataManager_o *)this->fields.mMenuNoticeNumber;
    if ( UserData )
    {
      NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)UserData, 0, 0);
      return;
    }
LABEL_41:
    sub_1C372B4(UserData);
  }
}


void MainMenuBarBase___ResetShopNoticeDraw_b__110_0(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  MainMenuBarBase_o *v8; // x19
  struct ShopNotice_o *shopNotice; // x8
  UISprite_o *mExchangeServantItemSp; // x20
  Il2CppObject *v11; // x0
  System_String_o *v12; // x21
  int32_t ExchangeServantEventId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  v8 = this;
  if ( (byte_4C4272F & 1) == 0 )
  {
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&int_TypeInfo);
    this = (MainMenuBarBase_o *)sub_1C37058(&StringLiteral_20229/*"icon_servant_exchange_available_{0}"*/);
    byte_4C4272F = 1;
  }
  shopNotice = v8->fields.shopNotice;
  if ( !shopNotice )
    goto LABEL_11;
  mExchangeServantItemSp = v8->fields.mExchangeServantItemSp;
  ExchangeServantEventId_k__BackingField = shopNotice->fields._ExchangeServantEventId_k__BackingField;
  v11 = (Il2CppObject *)j_il2cpp_value_box_0(
                          int_TypeInfo,
                          &ExchangeServantEventId_k__BackingField,
                          v2,
                          v3,
                          v4,
                          v5,
                          v6,
                          v7);
  v12 = System_String__Format((System_String_o *)StringLiteral_20229/*"icon_servant_exchange_available_{0}"*/, v11, 0);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetEventUI(mExchangeServantItemSp, v12, 0) )
  {
    this = (MainMenuBarBase_o *)v8->fields.mExchangeServantItemSp;
    if ( this )
    {
      UISprite__set_atlas((UISprite_o *)this, v8->fields.mExchangeServantItemDefaultAtlas, 0);
      this = (MainMenuBarBase_o *)v8->fields.mExchangeServantItemSp;
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, v8->fields.mExchangeServantItemDefaultSpriteName, 0);
        return;
      }
    }
LABEL_11:
    sub_1C372B4(this);
  }
}


void MainMenuBarBase__closeMenuStateImg(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UIButton_o *menuStateBtn; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4C42716 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_20458/*"img_menu_menu"*/);
    byte_4C42716 = 1;
  }
  menuStateBtn = this->fields.menuStateBtn;
  if ( !menuStateBtn
    || (UIButton__set_normalSprite(menuStateBtn, (System_String_o *)StringLiteral_20458/*"img_menu_menu"*/, 0),
        (menuStateBtn = (UIButton_o *)this->fields.menuStateImg) == 0)
    || ((*(void (__fastcall **)(UIButton_o *, _QWORD))&menuStateBtn->klass[1]._2.thread_static_fields_offset)(
          menuStateBtn,
          *(_QWORD *)&menuStateBtn->klass[1]._2.token),
        (menuStateBtn = this->fields.menuStateBtn) == 0) )
  {
    sub_1C372B4(menuStateBtn);
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
    sub_1C372B4(0);
  return UnityEngine_Collider__get_enabled(mOutSide, 0);
}


bool MainMenuBarBase__get_IsMenuBarActive(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C372B4(0);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0);
}


void MainMenuBarBase__onMoveComplete(MainMenuBarBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  bool isOpen; // w1
  UnityEngine_Component_o *mNewItemSp; // x0
  Il2CppObject *current; // x20
  struct System_Collections_Generic_List_GameObject__o *summonCampaignObjects; // x8
  const MethodInfo *size; // x2
  int v9; // w9
  ShopNoticeTween_o *summonNoticeTween; // x0
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4C42717 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_GameObject__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C42717 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  isOpen = this->fields.isOpen;
  this->fields.isSwitchMenuMoving = 0;
  MainMenuBarBase__SetOutSideColliderEnable(this, isOpen, v2);
  if ( !this->fields.isOpen )
  {
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mNewItemSp;
    if ( !mNewItemSp )
      goto LABEL_24;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0);
    if ( !mNewItemSp )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mNewItemSp, 0, 0);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mLimitedItemIconRoot;
    if ( !mNewItemSp )
      goto LABEL_24;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                              (UnityEngine_GameObject_o *)mNewItemSp,
                                              0);
    if ( !mNewItemSp )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mNewItemSp, 0, 0);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.summonCampainObject;
    if ( !mNewItemSp )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mNewItemSp, 0, 0);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.summonOneTimeFreeObject;
    if ( !mNewItemSp )
      goto LABEL_24;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mNewItemSp, 0, 0);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.summonCampaignObjects;
    if ( !mNewItemSp )
      goto LABEL_24;
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      (System_Collections_Generic_List_object__o *)mNewItemSp,
      (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_GameObject__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_GameObject__MoveNext__) )
    {
      current = v11.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71266752((UnityEngine_Object_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_GameObject__Dispose__);
    summonCampaignObjects = this->fields.summonCampaignObjects;
    if ( !summonCampaignObjects )
LABEL_24:
      sub_1C372B4(mNewItemSp);
    size = (const MethodInfo *)(unsigned int)summonCampaignObjects->fields._size;
    v9 = summonCampaignObjects->fields._version + 1;
    summonCampaignObjects->fields._size = 0;
    summonCampaignObjects->fields._version = v9;
    if ( (int)size >= 1 )
      System_Array__Clear((System_Array_o *)summonCampaignObjects->fields._items, 0, (int32_t)size, 0);
    summonNoticeTween = this->fields.summonNoticeTween;
    if ( summonNoticeTween )
      ShopNoticeTween__Stop(summonNoticeTween, 0);
    if ( !this->fields.isOpen )
      MainMenuBarBase__BackActive(this, 0, size);
  }
}


void MainMenuBarBase__openMenuStateImg(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UIButton_o *menuStateBtn; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4C42715 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_20457/*"img_menu_close"*/);
    byte_4C42715 = 1;
  }
  menuStateBtn = this->fields.menuStateBtn;
  if ( !menuStateBtn
    || (UIButton__set_normalSprite(menuStateBtn, (System_String_o *)StringLiteral_20457/*"img_menu_close"*/, 0),
        (menuStateBtn = (UIButton_o *)this->fields.menuStateImg) == 0)
    || ((*(void (__fastcall **)(UIButton_o *, _QWORD))&menuStateBtn->klass[1]._2.thread_static_fields_offset)(
          menuStateBtn,
          *(_QWORD *)&menuStateBtn->klass[1]._2.token),
        (menuStateBtn = this->fields.menuStateBtn) == 0) )
  {
    sub_1C372B4(menuStateBtn);
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


void MainMenuBarBase__SetTerminalQuestListClose_d__120___ctor(
        MainMenuBarBase__SetTerminalQuestListClose_d__120_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool MainMenuBarBase__SetTerminalQuestListClose_d__120__MoveNext(
        MainMenuBarBase__SetTerminalQuestListClose_d__120_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  MainMenuBarBase_o *_4__this; // x20
  TerminalPramsManager_c *v5; // x0
  TitleInfoControl_o *genericContainerHandle; // x0
  UISprite_c *klass; // x8
  UISprite_c *v8; // x8
  System_Func_bool__o *v9; // x21
  UnityEngine_WaitUntil_o *v10; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  bool result; // w0
  System_Action_o *callback; // x0

  if ( (byte_4C4273B & 1) == 0 )
  {
    sub_1C37058(&System_Func_bool__TypeInfo);
    sub_1C37058(&Method_MainMenuBarBase__SetTerminalQuestListClose_b__120_0__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    sub_1C37058(&UnityEngine_WaitUntil_TypeInfo);
    byte_4C4273B = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = this->fields.callback;
    this->fields.__1__state = -1;
    ActionExtensions__Call(callback, 0);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  _4__this = this->fields.__4__this;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C403D8 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403D8 = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v5 = TerminalPramsManager_TypeInfo;
  }
  v5->static_fields->_IsAutoNoSe_k__BackingField = 1;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C3CF06 )
  {
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C3CF06 = 1;
  }
  genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = genericContainerHandle->fields.mEventBgSp->klass;
  if ( !klass )
    goto LABEL_29;
  genericContainerHandle = (TitleInfoControl_o *)klass->_2.genericContainerHandle;
  if ( !genericContainerHandle )
    goto LABEL_29;
  TitleInfoControl__SetTouchEnable(genericContainerHandle, 0, 0);
  if ( !byte_4C3CF06 )
  {
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C3CF06 = 1;
  }
  genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    genericContainerHandle = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  v8 = genericContainerHandle->fields.mEventBgSp->klass;
  if ( !v8
    || (genericContainerHandle = *(TitleInfoControl_o **)&v8->_2.element_size) == 0
    || (ScrTerminalListTop__cbfTitleInfoBtnBack_Click((ScrTerminalListTop_o *)genericContainerHandle, 0, 0), !_4__this) )
  {
LABEL_29:
    sub_1C372B4(genericContainerHandle);
  }
  MainMenuBarBase__CloseMenu(_4__this, 0, 0);
  v9 = (System_Func_bool__o *)sub_1C372A4(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v9,
    (Il2CppObject *)_4__this,
    Method_MainMenuBarBase__SetTerminalQuestListClose_b__120_0__,
    0);
  v10 = (UnityEngine_WaitUntil_o *)sub_1C372A4(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v10, v9, 0);
  this->fields.__2__current = (Il2CppObject *)v10;
  p__2__current = &this->fields.__2__current;
  sub_1C36FFC((CGThumbnailListItem_o *)p__2__current, (int32_t)v10, v12, v13);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *MainMenuBarBase__SetTerminalQuestListClose_d__120__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MainMenuBarBase__SetTerminalQuestListClose_d__120_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn MainMenuBarBase__SetTerminalQuestListClose_d__120__System_Collections_IEnumerator_Reset(
        MainMenuBarBase__SetTerminalQuestListClose_d__120_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_MainMenuBarBase__SetTerminalQuestListClose_d__120_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *MainMenuBarBase__SetTerminalQuestListClose_d__120__System_Collections_IEnumerator_get_Current(
        MainMenuBarBase__SetTerminalQuestListClose_d__120_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void MainMenuBarBase__SetTerminalQuestListClose_d__120__System_IDisposable_Dispose(
        MainMenuBarBase__SetTerminalQuestListClose_d__120_o *this,
        const MethodInfo *method)
{
  ;
}


void MainMenuBarBase___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C42739 & 1) == 0 )
  {
    sub_1C37058(&MainMenuBarBase___c_TypeInfo);
    byte_4C42739 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(MainMenuBarBase___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MainMenuBarBase___c_TypeInfo->static_fields->__9 = (struct MainMenuBarBase___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)MainMenuBarBase___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void MainMenuBarBase___c___ctor(MainMenuBarBase___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MainMenuBarBase___c___OnClickTerminal_b__119_0(MainMenuBarBase___c_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  ScrTerminalListTop_o *v3; // x0
  QuestRewardItemAction_c *klass; // x8
  QuestRewardItemAction_c *v5; // x8

  if ( (byte_4C4273A & 1) == 0 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C4273A = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C403D8 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C403D8 = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_IsAutoNoSe_k__BackingField = 1;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C3CF06 )
  {
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C3CF06 = 1;
  }
  v3 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v3 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v3->fields.friendPointBoostItemAction->klass;
  if ( !klass )
    goto LABEL_24;
  v3 = *(ScrTerminalListTop_o **)&klass->_2.element_size;
  if ( !v3 )
    goto LABEL_24;
  ScrTerminalListTop__SetTopLastIndexNextBoard(v3, 0);
  if ( !byte_4C3CF06 )
  {
    sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C3CF06 = 1;
  }
  v3 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v3 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  v5 = v3->fields.friendPointBoostItemAction->klass;
  if ( !v5 || (v3 = *(ScrTerminalListTop_o **)&v5->_2.element_size) == 0 )
LABEL_24:
    sub_1C372B4(v3);
  ScrTerminalListTop__cbfTitleInfoBtnBack_Click(v3, 0, 0);
}


void MainMenuBarBase___c__DisplayClass142_0___ctor(
        MainMenuBarBase___c__DisplayClass142_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MainMenuBarBase___c__DisplayClass142_0___FrameInOut_b__0(
        MainMenuBarBase___c__DisplayClass142_0_o *this,
        const MethodInfo *method)
{
  struct MoveObject_o *mo; // x8

  mo = this->fields.mo;
  if ( !mo )
    sub_1C372B4(this);
  GameObjectExtensions__SetLocalPositionY(this->fields.tgt_obj, mo->fields.mNow.fields.y, 0);
}


void MainMenuBarBase___c__DisplayClass142_0___FrameInOut_b__1(
        MainMenuBarBase___c__DisplayClass142_0_o *this,
        const MethodInfo *method)
{
  GameObjectExtensions__SetLocalPositionY(this->fields.tgt_obj, this->fields.tgt_y, 0);
}