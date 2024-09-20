void __fastcall MainMenuBarBase___cctor(const MethodInfo *method)
{
  struct MainMenuBarBase_StaticFields *static_fields; // x8
  MainMenuBarBase_c *v2; // x8
  struct MainMenuBarBase_StaticFields *v3; // x9

  if ( (byte_4A5A8D1 & 1) == 0 )
  {
    sub_1B885B0(&MainMenuBarBase_TypeInfo);
    byte_4A5A8D1 = 1;
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


void __fastcall MainMenuBarBase___ctor(MainMenuBarBase_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Hashtable_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  struct System_Action_array *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5A8D0 & 1) == 0 )
  {
    sub_1B885B0(&System_Action___TypeInfo);
    sub_1B885B0(&System_Collections_Hashtable_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_MainMenuBarButton___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_MainMenuBarButton__TypeInfo);
    byte_4A5A8D0 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_MainMenuBarButton__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_MainMenuBarButton___ctor__);
  this->fields.mDispBtnList = (struct System_Collections_Generic_List_MainMenuBarButton__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mDispBtnList, (int32_t)v3, v4, v5);
  this->fields.selectedType = -1;
  this->fields.fadeType = 1;
  v6 = (System_Collections_Hashtable_o *)sub_1B887FC(System_Collections_Hashtable_TypeInfo);
  System_Collections_Hashtable___ctor_62286464(v6, 0LL);
  this->fields.table = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.table, (int32_t)v6, v7, v8);
  v9 = (struct System_Action_array *)sub_1B88658(System_Action___TypeInfo, 8LL);
  this->fields.mDispBtnActList = v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mDispBtnActList, (int32_t)v9, v10, v11);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MainMenuBarBase__Awake(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *terminalBtn; // x1
  int32_t v5; // w3
  float LocalPositionY; // s0
  void *mDispBtnList; // x0
  int32_t v8; // w2
  int v9; // w8
  __int64 v10; // x8
  _QWORD *v11; // x9
  __int64 v12; // x10
  __int64 v13; // x8
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x8
  _QWORD *v17; // x9
  __int64 v18; // x10
  __int64 v19; // x8
  int32_t v20; // w2
  int32_t v21; // w3
  __int64 v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  __int64 v25; // x8
  int32_t v26; // w2
  int32_t v27; // w3
  __int64 v28; // x8
  _QWORD *v29; // x9
  __int64 v30; // x10
  __int64 v31; // x8
  int32_t v32; // w2
  int32_t v33; // w3
  __int64 v34; // x8
  _QWORD *v35; // x9
  __int64 v36; // x10
  __int64 v37; // x8
  int32_t v38; // w2
  int32_t v39; // w3
  __int64 v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  __int64 v43; // x8
  int32_t v44; // w2
  int32_t v45; // w3
  __int64 v46; // x8
  _QWORD *v47; // x9
  __int64 v48; // x10
  __int64 v49; // x8
  int32_t v50; // w2
  int32_t v51; // w3
  __int64 v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  __int64 v55; // x8
  UnityEngine_Object_o *mMenuNoticeNumber; // x20
  Il2CppObject *mNoticeNumberPrefab; // x20
  UnityEngine_GameObject_o *v58; // x20
  UnityEngine_GameObject_o *v59; // x0
  MainMenuBarBase_c *v60; // x0
  Il2CppObject *Component_object; // x0
  int32_t v62; // w2
  int32_t v63; // w3
  UnityEngine_Object_o *mSummonNoticeNumber; // x20
  Il2CppObject *v65; // x20
  UnityEngine_GameObject_o *v66; // x20
  UnityEngine_GameObject_o *v67; // x0
  MainMenuBarBase_c *v68; // x0
  Il2CppObject *v69; // x0
  int32_t v70; // w2
  int32_t v71; // w3
  UnityEngine_Object_o *mFriendNoticeNumber; // x20
  Il2CppObject *v73; // x20
  UnityEngine_GameObject_o *v74; // x20
  UnityEngine_GameObject_o *v75; // x0
  MainMenuBarBase_c *v76; // x0
  Il2CppObject *v77; // x0
  int32_t v78; // w2
  int32_t v79; // w3
  struct ShopNotice_o *ShopNotice; // x0
  int32_t v81; // w2
  int32_t v82; // w3
  UnityEngine_Object_o *mExchangeServantItemDefaultAtlas; // x20
  int32_t v84; // w2
  int32_t v85; // w3
  struct UISprite_o *mExchangeServantItemSp; // x8
  struct UIAtlas_o *mAtlas; // x1
  int32_t v88; // w2
  int32_t v89; // w3
  struct UISprite_o *v90; // x8
  struct System_String_o *mSpriteName; // x1
  const MethodInfo *v92; // x1

  if ( (byte_4A5A8B1 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    sub_1B885B0(&Method_System_Collections_Generic_List_MainMenuBarButton__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MainMenuBarButton__Clear__);
    sub_1B885B0(&MainMenuBarBase_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&ShopTopListViewManager_TypeInfo);
    byte_4A5A8B1 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  LocalPositionY = GameObjectExtensions__GetLocalPositionY(gameObject, 0LL);
  mDispBtnList = this->fields.mDispBtnList;
  this->fields.mFrameInPosY = LocalPositionY;
  if ( !mDispBtnList )
    goto LABEL_109;
  v8 = *((_DWORD *)mDispBtnList + 6);
  v9 = *((_DWORD *)mDispBtnList + 7) + 1;
  *((_DWORD *)mDispBtnList + 6) = 0;
  *((_DWORD *)mDispBtnList + 7) = v9;
  if ( v8 >= 1 )
  {
    System_Array__Clear(*((System_Array_o **)mDispBtnList + 2), 0, v8, 0LL);
    mDispBtnList = this->fields.mDispBtnList;
    if ( !mDispBtnList )
      goto LABEL_109;
  }
  terminalBtn = (Il2CppObject *)this->fields.terminalBtn;
  v10 = *((_QWORD *)mDispBtnList + 2);
  v11 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v10 )
    goto LABEL_109;
  v12 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v12 >= *(_DWORD *)(v10 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
  }
  else
  {
    v13 = v10 + 8 * v12;
    *((_DWORD *)mDispBtnList + 6) = v12 + 1;
    *(_QWORD *)(v13 + 32) = terminalBtn;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 32), (int32_t)terminalBtn, v8, v5);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_109;
  terminalBtn = (Il2CppObject *)this->fields.partyBtn;
  v16 = *((_QWORD *)mDispBtnList + 2);
  v17 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v16 )
    goto LABEL_109;
  v18 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v18 >= *(_DWORD *)(v16 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
  }
  else
  {
    v19 = v16 + 8 * v18;
    *((_DWORD *)mDispBtnList + 6) = v18 + 1;
    *(_QWORD *)(v19 + 32) = terminalBtn;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 32), (int32_t)terminalBtn, v14, v15);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_109;
  terminalBtn = (Il2CppObject *)this->fields.summonBtn;
  v22 = *((_QWORD *)mDispBtnList + 2);
  v23 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v22 )
    goto LABEL_109;
  v24 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v24 >= *(_DWORD *)(v22 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    v25 = v22 + 8 * v24;
    *((_DWORD *)mDispBtnList + 6) = v24 + 1;
    *(_QWORD *)(v25 + 32) = terminalBtn;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v25 + 32), (int32_t)terminalBtn, v20, v21);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_109;
  terminalBtn = (Il2CppObject *)this->fields.combineBtn;
  v28 = *((_QWORD *)mDispBtnList + 2);
  v29 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v28 )
    goto LABEL_109;
  v30 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v30 >= *(_DWORD *)(v28 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
  }
  else
  {
    v31 = v28 + 8 * v30;
    *((_DWORD *)mDispBtnList + 6) = v30 + 1;
    *(_QWORD *)(v31 + 32) = terminalBtn;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v31 + 32), (int32_t)terminalBtn, v26, v27);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_109;
  terminalBtn = (Il2CppObject *)this->fields.shopBtn;
  v34 = *((_QWORD *)mDispBtnList + 2);
  v35 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v34 )
    goto LABEL_109;
  v36 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v36 >= *(_DWORD *)(v34 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
  }
  else
  {
    v37 = v34 + 8 * v36;
    *((_DWORD *)mDispBtnList + 6) = v36 + 1;
    *(_QWORD *)(v37 + 32) = terminalBtn;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v37 + 32), (int32_t)terminalBtn, v32, v33);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_109;
  terminalBtn = (Il2CppObject *)this->fields.friendBtn;
  v40 = *((_QWORD *)mDispBtnList + 2);
  v41 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v40 )
    goto LABEL_109;
  v42 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v42 >= *(_DWORD *)(v40 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
  }
  else
  {
    v43 = v40 + 8 * v42;
    *((_DWORD *)mDispBtnList + 6) = v42 + 1;
    *(_QWORD *)(v43 + 32) = terminalBtn;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v43 + 32), (int32_t)terminalBtn, v38, v39);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_109;
  terminalBtn = (Il2CppObject *)this->fields.myroomBtn;
  v46 = *((_QWORD *)mDispBtnList + 2);
  v47 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v46 )
    goto LABEL_109;
  v48 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v48 >= *(_DWORD *)(v46 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v47[4] + 192LL) + 112LL));
  }
  else
  {
    v49 = v46 + 8 * v48;
    *((_DWORD *)mDispBtnList + 6) = v48 + 1;
    *(_QWORD *)(v49 + 32) = terminalBtn;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v49 + 32), (int32_t)terminalBtn, v44, v45);
  }
  mDispBtnList = this->fields.mDispBtnList;
  if ( !mDispBtnList )
    goto LABEL_109;
  terminalBtn = (Il2CppObject *)this->fields.latestScenarioBtn;
  v52 = *((_QWORD *)mDispBtnList + 2);
  v53 = Method_System_Collections_Generic_List_MainMenuBarButton__Add__;
  ++*((_DWORD *)mDispBtnList + 7);
  if ( !v52 )
    goto LABEL_109;
  v54 = *((int *)mDispBtnList + 6);
  if ( (unsigned int)v54 >= *(_DWORD *)(v52 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)mDispBtnList,
      terminalBtn,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
  }
  else
  {
    v55 = v52 + 8 * v54;
    *((_DWORD *)mDispBtnList + 6) = v54 + 1;
    *(_QWORD *)(v55 + 32) = terminalBtn;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v55 + 32), (int32_t)terminalBtn, v50, v51);
  }
  mMenuNoticeNumber = (UnityEngine_Object_o *)this->fields.mMenuNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mMenuNoticeNumber, 0LL, 0LL) )
  {
    mNoticeNumberPrefab = (Il2CppObject *)this->fields.mNoticeNumberPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mDispBtnList = UnityEngine_Object__Instantiate_object_(
                     mNoticeNumberPrefab,
                     (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this->fields.menuStateBtn )
      goto LABEL_109;
    v58 = (UnityEngine_GameObject_o *)mDispBtnList;
    v59 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.menuStateBtn, 0LL);
    GameObjectExtensions__SafeSetParent_33730068(v58, v59, 0LL);
    v60 = MainMenuBarBase_TypeInfo;
    if ( !MainMenuBarBase_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo);
      v60 = MainMenuBarBase_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v58, v60->static_fields->NOTICE_NUMBER_POS_MENU_BTN, 0LL);
    if ( !v58 )
      goto LABEL_109;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         v58,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    this->fields.mMenuNoticeNumber = (struct NoticeNumberComponent_o *)Component_object;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.mMenuNoticeNumber,
      (int32_t)Component_object,
      v62,
      v63);
    mDispBtnList = this->fields.mMenuNoticeNumber;
    if ( !mDispBtnList )
      goto LABEL_109;
    NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)mDispBtnList, 0, 0LL);
  }
  mSummonNoticeNumber = (UnityEngine_Object_o *)this->fields.mSummonNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mSummonNoticeNumber, 0LL, 0LL) )
  {
    v65 = (Il2CppObject *)this->fields.mNoticeNumberPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mDispBtnList = UnityEngine_Object__Instantiate_object_(
                     v65,
                     (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this->fields.summonBtn )
      goto LABEL_109;
    v66 = (UnityEngine_GameObject_o *)mDispBtnList;
    v67 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.summonBtn, 0LL);
    GameObjectExtensions__SafeSetParent_33730068(v66, v67, 0LL);
    v68 = MainMenuBarBase_TypeInfo;
    if ( !MainMenuBarBase_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo);
      v68 = MainMenuBarBase_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v66, v68->static_fields->NOTICE_NUMBER_POS_DISP_BTN, 0LL);
    if ( !v66 )
      goto LABEL_109;
    v69 = UnityEngine_GameObject__GetComponent_object_(
            v66,
            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    this->fields.mSummonNoticeNumber = (struct NoticeNumberComponent_o *)v69;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mSummonNoticeNumber, (int32_t)v69, v70, v71);
    mDispBtnList = this->fields.mSummonNoticeNumber;
    if ( !mDispBtnList )
      goto LABEL_109;
    NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)mDispBtnList, 0, 0LL);
  }
  mFriendNoticeNumber = (UnityEngine_Object_o *)this->fields.mFriendNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(mFriendNoticeNumber, 0LL, 0LL) )
  {
    v73 = (Il2CppObject *)this->fields.mNoticeNumberPrefab;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mDispBtnList = UnityEngine_Object__Instantiate_object_(
                     v73,
                     (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
    if ( !this->fields.friendBtn )
      goto LABEL_109;
    v74 = (UnityEngine_GameObject_o *)mDispBtnList;
    v75 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this->fields.friendBtn, 0LL);
    GameObjectExtensions__SafeSetParent_33730068(v74, v75, 0LL);
    v76 = MainMenuBarBase_TypeInfo;
    if ( !MainMenuBarBase_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MainMenuBarBase_TypeInfo);
      v76 = MainMenuBarBase_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v74, v76->static_fields->NOTICE_NUMBER_POS_DISP_BTN, 0LL);
    if ( !v74 )
      goto LABEL_109;
    v77 = UnityEngine_GameObject__GetComponent_object_(
            v74,
            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_NoticeNumberComponent___);
    this->fields.mFriendNoticeNumber = (struct NoticeNumberComponent_o *)v77;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mFriendNoticeNumber, (int32_t)v77, v78, v79);
    mDispBtnList = this->fields.mFriendNoticeNumber;
    if ( !mDispBtnList )
      goto LABEL_109;
    NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)mDispBtnList, 0, 0LL);
  }
  if ( !ShopTopListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopTopListViewManager_TypeInfo);
  ShopNotice = ShopTopListViewManager__GetShopNotice(0LL);
  this->fields.shopNotice = ShopNotice;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.shopNotice, (int32_t)ShopNotice, v81, v82);
  mDispBtnList = this->fields.mNewItemSp;
  if ( !mDispBtnList )
    goto LABEL_109;
  mDispBtnList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mDispBtnList, 0LL);
  if ( !mDispBtnList )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0LL);
  mDispBtnList = this->fields.mLimitedItemIconRoot;
  if ( !mDispBtnList )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0LL);
  mDispBtnList = this->fields.mPeriodLimitedItemSp;
  if ( !mDispBtnList )
    goto LABEL_109;
  mDispBtnList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mDispBtnList, 0LL);
  if ( !mDispBtnList )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0LL);
  mDispBtnList = this->fields.mMonthlyLimitedItemSp;
  if ( !mDispBtnList )
    goto LABEL_109;
  mDispBtnList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mDispBtnList, 0LL);
  if ( !mDispBtnList )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0LL);
  mDispBtnList = this->fields.mExchangeServantItemSp;
  if ( !mDispBtnList )
    goto LABEL_109;
  mDispBtnList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mDispBtnList, 0LL);
  if ( !mDispBtnList )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0LL);
  mDispBtnList = this->fields.StartUpSummonSp;
  if ( !mDispBtnList )
    goto LABEL_109;
  mDispBtnList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mDispBtnList, 0LL);
  if ( !mDispBtnList )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0LL);
  mDispBtnList = this->fields.mPeriodLimitedTimeLb;
  if ( !mDispBtnList )
    goto LABEL_109;
  mDispBtnList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mDispBtnList, 0LL);
  if ( !mDispBtnList )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0LL);
  mDispBtnList = this->fields.mMonthlyLimitedTimeLb;
  if ( !mDispBtnList )
    goto LABEL_109;
  mDispBtnList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mDispBtnList, 0LL);
  if ( !mDispBtnList )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0LL);
  mDispBtnList = this->fields.mExchangeServantItemLb;
  if ( !mDispBtnList )
    goto LABEL_109;
  mDispBtnList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mDispBtnList, 0LL);
  if ( !mDispBtnList )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0LL);
  mDispBtnList = this->fields.mExchangeServantTimeRoot;
  if ( !mDispBtnList )
    goto LABEL_109;
  mDispBtnList = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)mDispBtnList, 0LL);
  if ( !mDispBtnList )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0LL);
  mDispBtnList = this->fields.StartUpSummonLb;
  if ( !mDispBtnList )
    goto LABEL_109;
  mDispBtnList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mDispBtnList, 0LL);
  if ( !mDispBtnList )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0LL);
  mExchangeServantItemDefaultAtlas = (UnityEngine_Object_o *)this->fields.mExchangeServantItemDefaultAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mDispBtnList = (void *)UnityEngine_Object__op_Equality(mExchangeServantItemDefaultAtlas, 0LL, 0LL);
  if ( ((unsigned __int8)mDispBtnList & 1) != 0 )
  {
    mExchangeServantItemSp = this->fields.mExchangeServantItemSp;
    if ( mExchangeServantItemSp )
    {
      mAtlas = mExchangeServantItemSp->fields.mAtlas;
      this->fields.mExchangeServantItemDefaultAtlas = mAtlas;
      sub_1B88554(
        (ServantStatusBattleListViewItem_o *)&this->fields.mExchangeServantItemDefaultAtlas,
        (int32_t)mAtlas,
        v84,
        v85);
      v90 = this->fields.mExchangeServantItemSp;
      if ( v90 )
      {
        mSpriteName = v90->fields.mSpriteName;
        this->fields.mExchangeServantItemDefaultSpriteName = mSpriteName;
        sub_1B88554(
          (ServantStatusBattleListViewItem_o *)&this->fields.mExchangeServantItemDefaultSpriteName,
          (int32_t)mSpriteName,
          v88,
          v89);
        goto LABEL_107;
      }
    }
LABEL_109:
    sub_1B8880C(mDispBtnList, terminalBtn);
  }
LABEL_107:
  mDispBtnList = this->fields.summonCampainObject;
  if ( !mDispBtnList )
    goto LABEL_109;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mDispBtnList, 0, 0LL);
  MainMenuBarBase__UpdateNoticeNumber(this, v92);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBarBase__BackActive(MainMenuBarBase_o *this, bool isOpen, const MethodInfo *method)
{
  UnityEngine_Component_o *backCloseSprite; // x0
  float v6; // s1
  int v7; // s2
  int v8; // s0

  backCloseSprite = (UnityEngine_Component_o *)this->fields.backCloseSprite;
  if ( !backCloseSprite )
    goto LABEL_12;
  backCloseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backCloseSprite, 0LL);
  if ( !backCloseSprite )
    goto LABEL_12;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backCloseSprite, !isOpen, 0LL);
  backCloseSprite = (UnityEngine_Component_o *)this->fields.backOpenSprite;
  if ( !backCloseSprite )
    goto LABEL_12;
  backCloseSprite = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(backCloseSprite, 0LL);
  if ( !backCloseSprite
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)backCloseSprite, isOpen, 0LL),
        (backCloseSprite = (UnityEngine_Component_o *)this->fields.backOpenSprite) == 0LL)
    || (UIWidget__SetDirty((UIWidget_o *)backCloseSprite, 0LL),
        (backCloseSprite = (UnityEngine_Component_o *)this->fields.backCloseSprite) == 0LL)
    || (UIWidget__SetDirty((UIWidget_o *)backCloseSprite, 0LL),
        (backCloseSprite = (UnityEngine_Component_o *)this->fields.menuGrid) == 0LL)
    || (backCloseSprite = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)backCloseSprite,
                                                       0LL)) == 0LL )
  {
LABEL_12:
    sub_1B8880C(backCloseSprite, isOpen);
  }
  v6 = -33.0;
  if ( isOpen )
    v6 = -6.0;
  v7 = 0;
  v8 = -1010237440;
  UnityEngine_Transform__set_localPosition(
    (UnityEngine_Transform_o *)backCloseSprite,
    *(UnityEngine_Vector3_o *)(&v6 - 1),
    0LL);
}


void __fastcall MainMenuBarBase__CheckLatestScenarioButtonEnable(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *Instance; // x0
  __int64 v4; // x20
  __int64 methodPtr_low; // x10
  __int64 v6; // x20
  MyRoomStateMaterial_o *v7; // x20
  MainMenuBarBase_o *State; // x0
  const MethodInfo *v9; // x3
  int32_t mOldState; // w8
  System_Collections_Generic_List_object__o *mSelectInfos; // x20
  int32_t v12; // w1
  int32_t questId[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5A8BA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
    sub_1B885B0(&MyRoomRootComponent_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A5A8BA = 1;
  }
  *(_QWORD *)questId = 0LL;
  if ( this->fields.kind != 8 )
    goto LABEL_27;
  Instance = (MainMenuBarButton_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_30;
  v4 = *(_QWORD *)&Instance->fields.mode;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v4, 0LL, 0LL) )
    goto LABEL_27;
  if ( !v4 )
    goto LABEL_27;
  methodPtr_low = LOBYTE(MyRoomRootComponent_TypeInfo->vtable._0_Equals.methodPtr);
  if ( *(unsigned __int8 *)(*(_QWORD *)v4 + 304LL) < (unsigned int)methodPtr_low
    || *(MyRoomRootComponent_c **)(*(_QWORD *)(*(_QWORD *)v4 + 200LL) + 8 * methodPtr_low - 8) != MyRoomRootComponent_TypeInfo )
  {
    goto LABEL_27;
  }
  v6 = *(_QWORD *)(v4 + 64);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  Instance = (MainMenuBarButton_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v6, 0LL, 0LL);
  if ( ((unsigned __int8)Instance & 1) != 0 )
    goto LABEL_27;
  if ( !v6 )
    goto LABEL_30;
  if ( MyRoomControl__GetState((MyRoomControl_o *)v6, 0LL) == 1 )
    goto LABEL_27;
  v7 = *(MyRoomStateMaterial_o **)(v6 + 880);
  if ( !v7 )
    goto LABEL_27;
  State = (MainMenuBarBase_o *)MyRoomStateMaterial__GetState(v7, 0LL);
  if ( (_DWORD)State != 7 )
  {
    State = (MainMenuBarBase_o *)MyRoomStateMaterial__GetState(v7, 0LL);
    if ( (_DWORD)State != 10 )
      goto LABEL_27;
  }
  mOldState = v7->fields.mOldState;
  if ( mOldState != 2 && mOldState != 9 )
    goto LABEL_27;
  mSelectInfos = (System_Collections_Generic_List_object__o *)v7->fields.mSelectInfos;
  if ( !mSelectInfos || !MainMenuBarBase__GetJumpSceneInfo(State, &questId[1], questId, v9) )
    goto LABEL_27;
  Instance = (MainMenuBarButton_o *)System_Collections_Generic_List_object___get_Item(
                                      mSelectInfos,
                                      0,
                                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_MaterialEventLogListViewItem_Info__get_Item__);
  if ( !Instance )
    goto LABEL_30;
  if ( LODWORD(Instance[1].klass) != questId[1] )
  {
LABEL_27:
    Instance = this->fields.latestScenarioBtn;
    if ( Instance )
    {
      v12 = 2;
      goto LABEL_29;
    }
LABEL_30:
    sub_1B8880C(Instance, method);
  }
  Instance = this->fields.latestScenarioBtn;
  if ( !Instance )
    goto LABEL_30;
  v12 = 3;
LABEL_29:
  MainMenuBarButton__SetMode(Instance, v12, 0LL);
}


void __fastcall MainMenuBarBase__CheckTerminalButtonEnable(MainMenuBarBase_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v3; // x8
  MainMenuBarButton_o *terminalBtn; // x0
  int32_t v5; // w1

  if ( (byte_4A5A8B9 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5A8B9 = 1;
  }
  if ( this->fields.kind != 1 )
  {
    terminalBtn = this->fields.terminalBtn;
    if ( terminalBtn )
      goto LABEL_14;
LABEL_16:
    sub_1B8880C(terminalBtn, method);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A57FF0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A57FF0 = 1;
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
  MainMenuBarButton__SetMode(terminalBtn, v5, 0LL);
}


void __fastcall MainMenuBarBase__CloseMenu(MainMenuBarBase_o *this, bool is_play_se, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  MainMenuBarBase__SwitchMenu(this, 0, is_play_se, v3);
}


void __fastcall MainMenuBarBase__FrameIn(MainMenuBarBase_o *this, bool is_force, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  MainMenuBarBase__FrameInOut(this, 1, is_force, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBarBase__FrameInOut(
        MainMenuBarBase_o *this,
        bool is_framein,
        bool is_force,
        const MethodInfo *method)
{
  __int64 v7; // x20
  MoveObject_o *gameObject; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  float mFrameInPosY; // s14
  float v13; // s8
  Il2CppObject *Component_object; // x0
  MoveObject_o **v15; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  float v18; // s9
  float IntpTime_AutoResume; // s9
  float x; // s10
  float z; // s11
  MoveObject_o *v22; // x21
  float v23; // s12
  float v24; // s13
  System_Action_o *v25; // x22
  System_Action_o *v26; // x23
  float v27; // s3
  float v28; // s0
  float v29; // s5
  float v30; // s2
  float v31; // s4
  float v32; // s1
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5A8CF & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&Method_MainMenuBarBase___c__DisplayClass125_0__FrameInOut_b__0__);
    sub_1B885B0(&Method_MainMenuBarBase___c__DisplayClass125_0__FrameInOut_b__1__);
    sub_1B885B0(&MainMenuBarBase___c__DisplayClass125_0_TypeInfo);
    byte_4A5A8CF = 1;
  }
  v7 = sub_1B887FC(MainMenuBarBase___c__DisplayClass125_0_TypeInfo);
  MainMenuBarBase___c__DisplayClass125_0___ctor((MainMenuBarBase___c__DisplayClass125_0_o *)v7, 0LL);
  gameObject = (MoveObject_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v7 )
    goto LABEL_29;
  *(_QWORD *)(v7 + 16) = gameObject;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)gameObject, v10, v11);
  mFrameInPosY = this->fields.mFrameInPosY;
  if ( is_framein )
    v13 = this->fields.mFrameInPosY;
  else
    v13 = -90.0;
  *(float *)(v7 + 32) = v13;
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       *(UnityEngine_GameObject_o **)(v7 + 16),
                       (const MethodInfo_2ED09A0 *)Method_GameObjectExtensions_SafeGetComponent_MoveObject___);
  *(_QWORD *)(v7 + 24) = Component_object;
  v15 = (MoveObject_o **)(v7 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)Component_object, v16, v17);
  if ( is_force
    || (v18 = *(float *)(v7 + 32),
        v18 == GameObjectExtensions__GetLocalPositionY(*(UnityEngine_GameObject_o **)(v7 + 16), 0LL)) )
  {
    gameObject = *v15;
    if ( *v15 )
    {
      MoveObject__Stop(gameObject, 0LL);
      GameObjectExtensions__SetLocalPositionY(*(UnityEngine_GameObject_o **)(v7 + 16), *(float *)(v7 + 32), 0LL);
      return;
    }
LABEL_29:
    sub_1B8880C(gameObject, v9);
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  IntpTime_AutoResume = TerminalPramsManager__GetIntpTime_AutoResume(0.25, 0LL);
  LocalPosition = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v7 + 16), 0LL);
  x = LocalPosition.fields.x;
  z = LocalPosition.fields.z;
  v34 = GameObjectExtensions__GetLocalPosition((UnityEngine_GameObject_o *)*(_QWORD *)(v7 + 16), 0LL);
  v22 = *(MoveObject_o **)(v7 + 24);
  v23 = v34.fields.x;
  v24 = v34.fields.z;
  v25 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v25, (Il2CppObject *)v7, Method_MainMenuBarBase___c__DisplayClass125_0__FrameInOut_b__0__, 0LL);
  v26 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v26, (Il2CppObject *)v7, Method_MainMenuBarBase___c__DisplayClass125_0__FrameInOut_b__1__, 0LL);
  if ( !v22 )
    goto LABEL_29;
  if ( is_framein )
    v27 = x;
  else
    v27 = v23;
  if ( is_framein )
    v28 = v23;
  else
    v28 = x;
  if ( is_framein )
    v29 = z;
  else
    v29 = v24;
  if ( is_framein )
    v30 = v24;
  else
    v30 = z;
  v31 = v13;
  v32 = -90.0;
  if ( !is_framein )
    v32 = mFrameInPosY;
  MoveObject__Play(
    v22,
    *(UnityEngine_Vector3_o *)&v28,
    *(UnityEngine_Vector3_o *)&v27,
    IntpTime_AutoResume,
    v25,
    v26,
    0.0,
    17,
    0LL);
}


void __fastcall MainMenuBarBase__FrameOut(MainMenuBarBase_o *this, bool is_force, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  MainMenuBarBase__FrameInOut(this, 0, is_force, v3);
}


bool __fastcall MainMenuBarBase__GetJumpSceneInfo(
        MainMenuBarBase_o *this,
        int32_t *warId,
        int32_t *questId,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  UserQuestMaster_o *v9; // x21
  System_Collections_Generic_List_int__o *MovedEventScriptList_39557116; // x22
  bool IsClearAllMainScenario; // w23
  QuestEntity_o *LatestMainScenarioLastQuest; // x0
  QuestScriptEntity_o *EntityFromQuestId; // x0
  int parentWarId; // w21
  QuestScriptEntity_o *v15; // x20
  MainMenuBarBase_c *v16; // x0

  if ( (byte_4A5A8CC & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_QuestScriptMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserQuestMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_WarMaster___);
    sub_1B885B0(&MainMenuBarBase_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_SingletonTemplate_QuestTree__get_Instance__);
    byte_4A5A8CC = 1;
  }
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserQuestMaster___);
  *warId = -1;
  *questId = -1;
  v9 = (UserQuestMaster_o *)MasterData_object;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestScriptMaster___);
  if ( !Instance )
    goto LABEL_26;
  MovedEventScriptList_39557116 = QuestScriptMaster__GetMovedEventScriptList_39557116(
                                    (QuestScriptMaster_o *)Instance,
                                    0LL);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_26;
  Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_WarMaster___);
  if ( !Instance )
    goto LABEL_26;
  IsClearAllMainScenario = WarMaster__IsClearAllMainScenario((WarMaster_o *)Instance, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Instance = (DataManager_o *)NetworkManager__get_UserId(0LL);
  if ( !v9 )
    goto LABEL_26;
  if ( IsClearAllMainScenario )
  {
    LatestMainScenarioLastQuest = UserQuestMaster__GetLatestMainScenarioLastQuest(
                                    v9,
                                    (int64_t)Instance,
                                    MovedEventScriptList_39557116,
                                    0LL);
    if ( !LatestMainScenarioLastQuest )
      return (char)LatestMainScenarioLastQuest;
  }
  else
  {
    LatestMainScenarioLastQuest = UserQuestMaster__GetMainScenarioLatestClear(
                                    v9,
                                    (int64_t)Instance,
                                    MovedEventScriptList_39557116,
                                    0LL);
    if ( !LatestMainScenarioLastQuest )
      return (char)LatestMainScenarioLastQuest;
  }
  *questId = LatestMainScenarioLastQuest->fields.id;
  Instance = (DataManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3739B38 *)Method_SingletonTemplate_QuestTree__get_Instance__);
  if ( !Instance
    || (*warId = QuestTree__GetWarID_ByQuestID((QuestTree_o *)Instance, *questId, 0LL),
        (Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_QuestScriptMaster___)) == 0LL )
  {
LABEL_26:
    sub_1B8880C(Instance, v7);
  }
  EntityFromQuestId = QuestScriptMaster__GetEntityFromQuestId((QuestScriptMaster_o *)Instance, *questId, 0LL);
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


bool __fastcall MainMenuBarBase__IsSpotSelectWait(MainMenuBarBase_o *this, const MethodInfo *method)
{
  ScrTerminalListTop_o *MyFsmP; // x0
  QuestRewardTokenAction_c *klass; // x8
  QuestRewardTokenAction_c *v4; // x8
  __int64 v5; // x8

  if ( (byte_4A5A8C4 & 1) == 0 )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&StringLiteral_12195/*"SPOT SELECT WAIT"*/);
    byte_4A5A8C4 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
  }
  MyFsmP = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    MyFsmP = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = MyFsmP->fields.boardGameTokenAction->klass;
  if ( !klass )
    goto LABEL_26;
  MyFsmP = *(ScrTerminalListTop_o **)&klass->_2.static_fields_size;
  if ( !MyFsmP )
    goto LABEL_26;
  MyFsmP = (ScrTerminalListTop_o *)ScrTerminalListTop__mfGetMyFsmP(MyFsmP, 0LL);
  if ( !MyFsmP )
    goto LABEL_26;
  MyFsmP = (ScrTerminalListTop_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)MyFsmP, 0LL);
  if ( !MyFsmP )
    goto LABEL_26;
  if ( (System_String__IndexOf_61738608((System_String_o *)MyFsmP, (System_String_o *)StringLiteral_12195/*"SPOT SELECT WAIT"*/, 0LL) & 0x80000000) != 0 )
    return 0;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
  }
  MyFsmP = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    MyFsmP = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  v4 = MyFsmP->fields.boardGameTokenAction->klass;
  if ( !v4
    || (v5 = *(_QWORD *)&v4->_2.thread_static_fields_offset) == 0
    || (MyFsmP = *(ScrTerminalListTop_o **)(v5 + 528)) == 0LL )
  {
LABEL_26:
    sub_1B8880C(MyFsmP, method);
  }
  return !UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)MyFsmP, 0LL);
}


void __fastcall MainMenuBarBase__OnClickCombine(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *combineBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_4A5A8C7 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_8494/*"MAIN_MENU_BAR_SELECT_COMBINE"*/);
    byte_4A5A8C7 = 1;
  }
  combineBtn = this->fields.combineBtn;
  if ( !combineBtn )
    sub_1B8880C(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(combineBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 3, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 32, (System_String_o *)StringLiteral_8494/*"MAIN_MENU_BAR_SELECT_COMBINE"*/, 0LL, v6);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBarBase__OnClickCommon(
        MainMenuBarBase_o *this,
        int32_t kind,
        bool isEnabled,
        const MethodInfo *method)
{
  MainMenuBarBase_o *v6; // x19
  struct System_Action_array *mDispBtnActList; // x8
  int32_t v8; // w2
  int32_t v9; // w3
  struct System_Action_array *v10; // x8
  Il2CppClass **v11; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  _QWORD *v14; // x0
  int32_t v15; // w19
  System_Reflection_MethodBase_o *v16; // x0

  v6 = this;
  if ( (byte_4A5A8C1 & 1) == 0 )
  {
    this = (MainMenuBarBase_o *)sub_1B885B0(&Method_MainMenuBarBase_OnClickCommon__);
    byte_4A5A8C1 = 1;
  }
  if ( isEnabled )
  {
    mDispBtnActList = v6->fields.mDispBtnActList;
    if ( mDispBtnActList )
    {
      if ( mDispBtnActList->max_length <= kind )
        goto LABEL_16;
      ActionExtensions__Call(mDispBtnActList->m_Items[kind], 0LL);
      v10 = v6->fields.mDispBtnActList;
      if ( v10 )
      {
        if ( v10->max_length > kind )
        {
          v11 = &v10->obj.klass + kind;
          v11[4] = 0LL;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 4), 0, v8, v9);
          ActionExtensions__Call(v6->fields.mAllBtnAct, 0LL);
          v6->fields.mAllBtnAct = 0LL;
          sub_1B88554((ServantStatusBattleListViewItem_o *)&v6->fields.mAllBtnAct, 0, v12, v13);
          v14 = Method_MainMenuBarBase_OnClickCommon__;
          if ( (*((_BYTE *)Method_MainMenuBarBase_OnClickCommon__ + 83) & 2) != 0 )
            v14 = (_QWORD *)sub_1B885C8(Method_MainMenuBarBase_OnClickCommon__);
          v15 = 0;
          goto LABEL_14;
        }
LABEL_16:
        sub_1B88814(this, *(_QWORD *)&kind);
      }
    }
    sub_1B8880C(this, *(_QWORD *)&kind);
  }
  v14 = Method_MainMenuBarBase_OnClickCommon__;
  if ( (*((_BYTE *)Method_MainMenuBarBase_OnClickCommon__ + 83) & 2) != 0 )
    v14 = (_QWORD *)sub_1B885C8(Method_MainMenuBarBase_OnClickCommon__);
  v15 = 2;
LABEL_14:
  v16 = (System_Reflection_MethodBase_o *)sub_1B88594(v14, v14[4]);
  OverwriteAssetSoundName__PlaySystemSe(v16, v15, 0LL);
}


void __fastcall MainMenuBarBase__OnClickFormation(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *partyBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_4A5A8C5 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_8498/*"MAIN_MENU_BAR_SELECT_PARTY"*/);
    byte_4A5A8C5 = 1;
  }
  partyBtn = this->fields.partyBtn;
  if ( !partyBtn )
    sub_1B8880C(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(partyBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 1, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 39, (System_String_o *)StringLiteral_8498/*"MAIN_MENU_BAR_SELECT_PARTY"*/, 0LL, v6);
}


void __fastcall MainMenuBarBase__OnClickFriend(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *friendBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_4A5A8C9 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_8495/*"MAIN_MENU_BAR_SELECT_FRIEND"*/);
    byte_4A5A8C9 = 1;
  }
  friendBtn = this->fields.friendBtn;
  if ( !friendBtn )
    sub_1B8880C(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(friendBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 5, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 23, (System_String_o *)StringLiteral_8495/*"MAIN_MENU_BAR_SELECT_FRIEND"*/, 0LL, v6);
}


void __fastcall MainMenuBarBase__OnClickLatestScenario(MainMenuBarBase_o *this, const MethodInfo *method)
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

  if ( (byte_4A5A8CB & 1) == 0 )
  {
    sub_1B885B0(&MyRoomRootComponent_TypeInfo);
    sub_1B885B0(&SceneJumpInfo_TypeInfo);
    sub_1B885B0(&StringLiteral_8496/*"MAIN_MENU_BAR_SELECT_MYROOM"*/);
    byte_4A5A8CB = 1;
  }
  *(_QWORD *)questId = 0LL;
  latestScenarioBtn = this->fields.latestScenarioBtn;
  if ( !latestScenarioBtn )
    sub_1B8880C(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(latestScenarioBtn, 0LL);
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
      v13 = (SceneJumpInfo_o *)sub_1B887FC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_38664492(v13, MYROOM_STATE_NEW_MATERIAL, v10, v11, 0LL);
    }
    else
    {
      v13 = 0LL;
    }
    MainMenuBarBase__SendSelectSignal(this, 30, (System_String_o *)StringLiteral_8496/*"MAIN_MENU_BAR_SELECT_MYROOM"*/, (Il2CppObject *)v13, v8);
  }
}


void __fastcall MainMenuBarBase__OnClickMyroom(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *myroomBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_4A5A8CA & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_8496/*"MAIN_MENU_BAR_SELECT_MYROOM"*/);
    byte_4A5A8CA = 1;
  }
  myroomBtn = this->fields.myroomBtn;
  if ( !myroomBtn )
    sub_1B8880C(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(myroomBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 6, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 30, (System_String_o *)StringLiteral_8496/*"MAIN_MENU_BAR_SELECT_MYROOM"*/, 0LL, v6);
}


void __fastcall MainMenuBarBase__OnClickOutSide(MainMenuBarBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  MainMenuBarBase__SwitchMenu(this, 0, 1, v2);
}


void __fastcall MainMenuBarBase__OnClickShop(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *shopBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_4A5A8C8 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_8499/*"MAIN_MENU_BAR_SELECT_SHOP"*/);
    byte_4A5A8C8 = 1;
  }
  shopBtn = this->fields.shopBtn;
  if ( !shopBtn )
    sub_1B8880C(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(shopBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 4, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 22, (System_String_o *)StringLiteral_8499/*"MAIN_MENU_BAR_SELECT_SHOP"*/, 0LL, v6);
}


void __fastcall MainMenuBarBase__OnClickSummon(MainMenuBarBase_o *this, const MethodInfo *method)
{
  MainMenuBarButton_o *summonBtn; // x0
  bool IsEnabled; // w20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x4

  if ( (byte_4A5A8C6 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_8500/*"MAIN_MENU_BAR_SELECT_SUMMON"*/);
    byte_4A5A8C6 = 1;
  }
  summonBtn = this->fields.summonBtn;
  if ( !summonBtn )
    sub_1B8880C(0LL, method);
  IsEnabled = MainMenuBarButton__IsEnabled(summonBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 2, IsEnabled, v5);
  if ( IsEnabled )
    MainMenuBarBase__SendSelectSignal(this, 20, (System_String_o *)StringLiteral_8500/*"MAIN_MENU_BAR_SELECT_SUMMON"*/, 0LL, v6);
}


void __fastcall MainMenuBarBase__OnClickTerminal(MainMenuBarBase_o *this, const MethodInfo *method)
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
  System_Action_o *_9__107_0; // x20
  Il2CppObject *v22; // x21
  struct MainMenuBarBase___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_Collections_IEnumerator_o *v26; // x1
  System_Threading_CancellationTokenSource_c *v27; // x8
  const MethodInfo *v28; // x3
  TerminalPramsManager_c *v29; // x0
  System_Threading_CancellationTokenSource_c *v30; // x8

  if ( (byte_4A5A8C2 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&Method_MainMenuBarBase___c__OnClickTerminal_b__107_0__);
    sub_1B885B0(&MainMenuBarBase___c_TypeInfo);
    sub_1B885B0(&StringLiteral_8501/*"MAIN_MENU_BAR_SELECT_TERMINAL"*/);
    sub_1B885B0(&StringLiteral_12195/*"SPOT SELECT WAIT"*/);
    sub_1B885B0(&StringLiteral_3407/*"CAPTER WAIT"*/);
    byte_4A5A8C2 = 1;
  }
  terminalBtn = this->fields.terminalBtn;
  if ( !terminalBtn )
    goto LABEL_123;
  IsEnabled = MainMenuBarButton__IsEnabled(terminalBtn, 0LL);
  MainMenuBarBase__OnClickCommon(this, 0, IsEnabled, v5);
  if ( IsEnabled )
  {
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4A5629D )
    {
      sub_1B885B0(&TerminalSceneComponent_TypeInfo);
      byte_4A5629D = 1;
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
    if ( !UnityEngine_Object__op_Inequality(mInstance, 0LL, 0LL) )
      goto LABEL_126;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4A5629D )
    {
      sub_1B885B0(&TerminalSceneComponent_TypeInfo);
      byte_4A5629D = 1;
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
    v10 = *(UnityEngine_Object_o **)&klass->_2.static_fields_size;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality(v10, 0LL, 0LL) )
    {
LABEL_126:
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A58358 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A58358 = 1;
      }
      v18 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v18 = TerminalPramsManager_TypeInfo;
      }
      v18->static_fields->_IsMapReturnFolder_k__BackingField = 0;
      if ( !byte_4A5644B )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        v18 = TerminalPramsManager_TypeInfo;
        byte_4A5644B = 1;
      }
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = TerminalPramsManager_TypeInfo;
      }
      v18->static_fields->_IsAutoResume_k__BackingField = 0;
      if ( !byte_4A5837D )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        v18 = TerminalPramsManager_TypeInfo;
        byte_4A5837D = 1;
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
    if ( !byte_4A57FF0 )
    {
      sub_1B885B0(&TerminalPramsManager_TypeInfo);
      byte_4A57FF0 = 1;
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
    if ( !byte_4A5629D )
    {
      sub_1B885B0(&TerminalSceneComponent_TypeInfo);
      byte_4A5629D = 1;
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
    terminalBtn = *(MainMenuBarButton_o **)&v12->_2.static_fields_size;
    if ( !terminalBtn )
      goto LABEL_123;
    terminalBtn = (MainMenuBarButton_o *)ScrTerminalListTop__mfGetMyFsmP((ScrTerminalListTop_o *)terminalBtn, 0LL);
    if ( !terminalBtn )
      goto LABEL_123;
    terminalBtn = (MainMenuBarButton_o *)PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)terminalBtn, 0LL);
    if ( !terminalBtn )
      goto LABEL_123;
    v13 = (System_String_o *)terminalBtn;
    if ( (System_String__IndexOf_61738608((System_String_o *)terminalBtn, (System_String_o *)StringLiteral_12195/*"SPOT SELECT WAIT"*/, 0LL) & 0x80000000) != 0
      && (System_String__IndexOf_61738608(v13, (System_String_o *)StringLiteral_3407/*"CAPTER WAIT"*/, 0LL) & 0x80000000) != 0 )
    {
      goto LABEL_127;
    }
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    if ( !byte_4A5629D )
    {
      sub_1B885B0(&TerminalSceneComponent_TypeInfo);
      byte_4A5629D = 1;
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
    terminalBtn = *(MainMenuBarButton_o **)&v14->_2.static_fields_size;
    if ( !terminalBtn )
      goto LABEL_123;
    if ( ScrTerminalListTop__GetPrioredParentId((ScrTerminalListTop_o *)terminalBtn, 0LL) )
    {
LABEL_127:
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A58358 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A58358 = 1;
      }
      v15 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v15 = TerminalPramsManager_TypeInfo;
      }
      v15->static_fields->_IsMapReturnFolder_k__BackingField = 0;
      if ( !byte_4A5644B )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        v15 = TerminalPramsManager_TypeInfo;
        byte_4A5644B = 1;
      }
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = TerminalPramsManager_TypeInfo;
      }
      v15->static_fields->_IsAutoResume_k__BackingField = 0;
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4A5629D )
      {
        sub_1B885B0(&TerminalSceneComponent_TypeInfo);
        byte_4A5629D = 1;
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
        terminalBtn = *(MainMenuBarButton_o **)&v16->_2.static_fields_size;
        if ( terminalBtn )
        {
          ScrTerminalListTop__SetTopLastIndexNextBoard((ScrTerminalListTop_o *)terminalBtn, 0LL);
          if ( !byte_4A5629D )
          {
            sub_1B885B0(&TerminalSceneComponent_TypeInfo);
            byte_4A5629D = 1;
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
            TerminalSceneComponent__CallQuestInformationClose((TerminalSceneComponent_o *)terminalBtn, 0LL);
LABEL_93:
            MainMenuBarBase__SendSelectSignal(this, 34, (System_String_o *)StringLiteral_8501/*"MAIN_MENU_BAR_SELECT_TERMINAL"*/, 0LL, v8);
            return;
          }
        }
      }
LABEL_123:
      sub_1B8880C(terminalBtn, method);
    }
    if ( (System_String__IndexOf_61738608(v13, (System_String_o *)StringLiteral_3407/*"CAPTER WAIT"*/, 0LL) & 0x80000000) != 0 )
    {
      if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      if ( !byte_4A5629D )
      {
        sub_1B885B0(&TerminalSceneComponent_TypeInfo);
        byte_4A5629D = 1;
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
      terminalBtn = *(MainMenuBarButton_o **)&v27->_2.static_fields_size;
      if ( !terminalBtn )
        goto LABEL_123;
      ScrTerminalListTop__SetTopLastIndexNextBoard((ScrTerminalListTop_o *)terminalBtn, 0LL);
      MainMenuBarBase__SwitchMenu(this, 0, 0, v28);
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      if ( !byte_4A588C5 )
      {
        sub_1B885B0(&TerminalPramsManager_TypeInfo);
        byte_4A588C5 = 1;
      }
      v29 = TerminalPramsManager_TypeInfo;
      if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        v29 = TerminalPramsManager_TypeInfo;
      }
      v29->static_fields->_IsAutoNoSe_k__BackingField = 1;
      if ( !byte_4A5629D )
      {
        sub_1B885B0(&TerminalSceneComponent_TypeInfo);
        byte_4A5629D = 1;
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
      terminalBtn = *(MainMenuBarButton_o **)&v30->_2.static_fields_size;
      if ( !terminalBtn )
        goto LABEL_123;
      ScrTerminalListTop__cbfTitleInfoBtnBack_Click((ScrTerminalListTop_o *)terminalBtn, 0, 0LL);
    }
    else
    {
      v20 = MainMenuBarBase___c_TypeInfo;
      if ( !MainMenuBarBase___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MainMenuBarBase___c_TypeInfo);
        v20 = MainMenuBarBase___c_TypeInfo;
      }
      _9__107_0 = v20->static_fields->__9__107_0;
      if ( !_9__107_0 )
      {
        if ( !v20->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v20);
          v20 = MainMenuBarBase___c_TypeInfo;
        }
        v22 = (Il2CppObject *)v20->static_fields->__9;
        _9__107_0 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
        System_Action___ctor(_9__107_0, v22, Method_MainMenuBarBase___c__OnClickTerminal_b__107_0__, 0LL);
        static_fields = MainMenuBarBase___c_TypeInfo->static_fields;
        static_fields->__9__107_0 = _9__107_0;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__107_0, (int32_t)_9__107_0, v24, v25);
      }
      v26 = MainMenuBarBase__SetTerminalQuestListClose(this, _9__107_0, v19);
      UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, v26, 0LL);
    }
  }
}


void __fastcall MainMenuBarBase__OnClickUnivMenu(MainMenuBarBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t v4; // w2
  int32_t v5; // w3

  MainMenuBarBase__SwitchMenu(this, !this->fields.isOpen, 1, v2);
  ActionExtensions__Call(this->fields.mMenuBtnAct, 0LL);
  this->fields.mMenuBtnAct = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mMenuBtnAct, 0, v4, v5);
}


void __fastcall MainMenuBarBase__RequestSelectedSceneChange(MainMenuBarBase_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5A8B5 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4A5A8B5 = 1;
  }
  if ( this->fields.selectedType != -1 )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    if ( !Instance )
      sub_1B8880C(0LL, v4);
    AvalonSceneManager__transitionScene(
      (AvalonSceneManager_o *)Instance,
      this->fields.selectedType,
      this->fields.fadeType,
      this->fields.selectedObject,
      0LL);
  }
}


void __fastcall MainMenuBarBase__RequestSelectedSignal(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *activeSceneFSM; // x20
  System_String_o *selectedKind; // x1
  PlayMakerFSM_o *v5; // x0

  if ( (byte_4A5A8B6 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_8497/*"MAIN_MENU_BAR_SELECT_NONE"*/);
    byte_4A5A8B6 = 1;
  }
  activeSceneFSM = (UnityEngine_Object_o *)this->fields.activeSceneFSM;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(activeSceneFSM, 0LL, 0LL) )
  {
    selectedKind = this->fields.selectedKind;
    v5 = this->fields.activeSceneFSM;
    if ( selectedKind )
    {
      if ( !v5 )
LABEL_12:
        sub_1B8880C(v5, selectedKind);
    }
    else
    {
      if ( !v5 )
        goto LABEL_12;
      selectedKind = (System_String_o *)StringLiteral_8497/*"MAIN_MENU_BAR_SELECT_NONE"*/;
    }
    PlayMakerFSM__SendEvent(v5, selectedKind, 0LL);
  }
}


void __fastcall MainMenuBarBase__RequestTerminalSceneChange(MainMenuBarBase_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A5A8B4 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5A8B4 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A5644B )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A5644B = 1;
  }
  v2 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v2 = TerminalPramsManager_TypeInfo;
  }
  v2->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B8880C(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0LL);
}


void __fastcall MainMenuBarBase__ResetShopNotice(MainMenuBarBase_o *this, const MethodInfo *method)
{
  struct ShopNotice_o *ShopNotice; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  const MethodInfo *v6; // x1

  if ( (byte_4A5A8BC & 1) == 0 )
  {
    sub_1B885B0(&ShopTopListViewManager_TypeInfo);
    byte_4A5A8BC = 1;
  }
  if ( !ShopTopListViewManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ShopTopListViewManager_TypeInfo);
  ShopNotice = ShopTopListViewManager__GetShopNotice(0LL);
  this->fields.shopNotice = ShopNotice;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.shopNotice, (int32_t)ShopNotice, v4, v5);
  MainMenuBarBase__ResetShopNoticeDraw(this, v6);
}


void __fastcall MainMenuBarBase__ResetShopNoticeDraw(MainMenuBarBase_o *this, const MethodInfo *method)
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
  int32_t v22; // w3
  struct ShopNotice_o *v23; // x8
  int32_t v24; // w23
  System_Collections_Generic_List_object__o *v25; // x21
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  UnityEngine_Component_o *v31; // x1
  Il2CppClass **v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3
  struct System_Object_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  UnityEngine_Component_o *v38; // x1
  Il2CppClass **v39; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  UnityEngine_Component_o *v45; // x1
  Il2CppClass **v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  struct System_Object_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  UnityEngine_Component_o *v52; // x1
  Il2CppClass **v53; // x0
  int32_t v54; // w2
  int32_t v55; // w3
  struct System_Object_array *v56; // x8
  _QWORD *v57; // x9
  __int64 v58; // x10
  UnityEngine_Component_o *v59; // x1
  Il2CppClass **v60; // x0
  int32_t v61; // w2
  int32_t v62; // w3
  struct System_Object_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  UnityEngine_Component_o *v66; // x1
  Il2CppClass **v67; // x0
  int32_t v68; // w2
  int32_t v69; // w3
  struct System_Object_array *v70; // x8
  _QWORD *v71; // x9
  __int64 v72; // x10
  UnityEngine_Component_o *v73; // x1
  Il2CppClass **v74; // x0
  int32_t v75; // w2
  int32_t v76; // w3
  struct System_Object_array *v77; // x8
  _QWORD *v78; // x9
  __int64 v79; // x10
  UnityEngine_Component_o *v80; // x1
  Il2CppClass **v81; // x0
  int32_t v82; // w2
  int32_t v83; // w3
  struct System_Object_array *v84; // x8
  _QWORD *v85; // x9
  __int64 v86; // x10
  UnityEngine_Component_o *v87; // x1
  Il2CppClass **v88; // x0
  int32_t v89; // w2
  int32_t v90; // w3
  struct System_Object_array *v91; // x8
  _QWORD *v92; // x9
  __int64 v93; // x10
  UnityEngine_Component_o *v94; // x1
  Il2CppClass **v95; // x0
  int32_t v96; // w2
  int32_t v97; // w3
  struct System_Object_array *v98; // x8
  _QWORD *v99; // x9
  __int64 v100; // x10
  UnityEngine_Component_o *v101; // x1
  Il2CppClass **v102; // x0
  int32_t v103; // w2
  int32_t v104; // w3
  struct System_Object_array *v105; // x8
  _QWORD *v106; // x9
  __int64 v107; // x10
  UnityEngine_Component_o *v108; // x1
  Il2CppClass **v109; // x0
  System_Collections_Generic_List_object__o *v110; // x22
  int32_t v111; // w2
  int32_t v112; // w3
  struct System_Object_array *v113; // x8
  _QWORD *v114; // x9
  __int64 v115; // x10
  UnityEngine_Component_o *v116; // x1
  Il2CppClass **v117; // x0
  int32_t v118; // w2
  int32_t v119; // w3
  struct System_Object_array *v120; // x8
  _QWORD *v121; // x9
  __int64 v122; // x10
  UnityEngine_Component_o *v123; // x1
  Il2CppClass **v124; // x0
  int32_t v125; // w2
  int32_t v126; // w3
  struct System_Object_array *v127; // x8
  _QWORD *v128; // x9
  __int64 v129; // x10
  UnityEngine_Component_o *v130; // x1
  Il2CppClass **v131; // x0
  int32_t v132; // w2
  int32_t v133; // w3
  struct System_Object_array *v134; // x8
  _QWORD *v135; // x9
  __int64 v136; // x10
  UnityEngine_Component_o *v137; // x1
  Il2CppClass **v138; // x0
  int32_t v139; // w2
  int32_t v140; // w3
  struct System_Object_array *v141; // x8
  _QWORD *v142; // x9
  __int64 v143; // x10
  UnityEngine_Component_o *v144; // x1
  Il2CppClass **v145; // x0
  int32_t v146; // w2
  int32_t v147; // w3
  struct System_Object_array *v148; // x8
  _QWORD *v149; // x9
  __int64 v150; // x10
  UnityEngine_Component_o *v151; // x1
  Il2CppClass **v152; // x0
  int32_t v153; // w2
  int32_t v154; // w3
  struct System_Object_array *v155; // x8
  _QWORD *v156; // x9
  __int64 v157; // x10
  UnityEngine_Component_o *v158; // x1
  Il2CppClass **v159; // x0
  int32_t v160; // w2
  int32_t v161; // w3
  struct System_Object_array *v162; // x8
  _QWORD *v163; // x9
  __int64 v164; // x10
  UnityEngine_Component_o *v165; // x1
  Il2CppClass **v166; // x0
  int32_t v167; // w2
  int32_t v168; // w3
  struct System_Object_array *v169; // x8
  _QWORD *v170; // x9
  __int64 v171; // x10
  UnityEngine_Component_o *v172; // x1
  Il2CppClass **v173; // x0
  int32_t v174; // w2
  int32_t v175; // w3
  struct System_Object_array *v176; // x8
  _QWORD *v177; // x9
  __int64 v178; // x10
  UnityEngine_Component_o *v179; // x1
  Il2CppClass **v180; // x0
  int32_t v181; // w2
  int32_t v182; // w3
  struct System_Object_array *v183; // x8
  _QWORD *v184; // x9
  int32_t v185; // w2
  int32_t v186; // w3
  struct System_Object_array *v187; // x8
  _QWORD *v188; // x9
  __int64 v189; // x10
  UnityEngine_Component_o *v190; // x1
  Il2CppClass **v191; // x0
  int32_t v192; // w2
  int32_t v193; // w3
  struct System_Object_array *v194; // x8
  _QWORD *v195; // x9
  int32_t v196; // w2
  int32_t v197; // w3
  struct System_Object_array *v198; // x8
  _QWORD *v199; // x9
  __int64 v200; // x10
  UnityEngine_Component_o *v201; // x1
  Il2CppClass **v202; // x0
  int32_t v203; // w2
  int32_t v204; // w3
  struct System_Object_array *v205; // x8
  _QWORD *v206; // x9
  __int64 v207; // x10
  UnityEngine_Component_o *v208; // x1
  Il2CppClass **v209; // x0
  int32_t v210; // w2
  int32_t v211; // w3
  struct System_Object_array *v212; // x8
  _QWORD *v213; // x9
  __int64 v214; // x10
  UnityEngine_Component_o *v215; // x1
  Il2CppClass **v216; // x0
  int32_t v217; // w2
  int32_t v218; // w3
  struct System_Object_array *v219; // x8
  _QWORD *v220; // x9
  __int64 v221; // x10
  UnityEngine_Component_o *v222; // x1
  Il2CppClass **v223; // x0
  int32_t v224; // w2
  int32_t v225; // w3
  struct System_Object_array *v226; // x8
  _QWORD *v227; // x9
  __int64 v228; // x10
  UnityEngine_Component_o *v229; // x1
  Il2CppClass **v230; // x0
  int32_t v231; // w2
  int32_t v232; // w3
  struct System_Object_array *v233; // x8
  _QWORD *v234; // x9
  __int64 v235; // x10
  UnityEngine_Component_o *v236; // x1
  Il2CppClass **v237; // x0
  int32_t v238; // w2
  int32_t v239; // w3
  struct System_Object_array *v240; // x8
  _QWORD *v241; // x9
  __int64 v242; // x10
  UnityEngine_Component_o *v243; // x1
  Il2CppClass **v244; // x0
  __int64 v245; // x10
  UnityEngine_Component_o *v246; // x1
  Il2CppClass **v247; // x0
  int32_t v248; // w2
  int32_t v249; // w3
  struct System_Object_array *v250; // x8
  _QWORD *v251; // x9
  __int64 v252; // x10
  unsigned int max_length; // w11
  Il2CppClass **v254; // x0
  __int64 v255; // x10
  Il2CppClass **v256; // x0
  struct ShopNotice_o *v257; // x8
  ShopNoticeRemainTime_o *v258; // x21
  int32_t v259; // w2
  int32_t v260; // w3
  const MethodInfo *v261; // x2
  struct ShopNotice_o *v262; // x8
  UILabel_o *mPeriodLimitedTimeLb; // x20
  int64_t PeriodTimeLimit_k__BackingField; // x21
  const MethodInfo *v265; // x2
  struct ShopNotice_o *v266; // x8
  UILabel_o *mMonthlyLimitedTimeLb; // x20
  const MethodInfo *v268; // x2
  struct ShopNotice_o *v269; // x8
  UILabel_o *mExchangeServantItemLb; // x20
  UILabel_o *v271; // x20
  ShopNoticeRemainTimeLabel_o *v272; // x22
  int32_t v273; // w2
  int32_t v274; // w3
  UILabel_o *v275; // x20
  ShopNoticeRemainTimeLabel_o *v276; // x22
  int32_t v277; // w2
  int32_t v278; // w3
  UILabel_o *v279; // x20
  ShopNoticeRemainTimeLabel_o *v280; // x22
  int32_t v281; // w2
  int32_t v282; // w3
  struct ShopNotice_o *v283; // x8
  struct ShopNotice_o *v284; // x8
  struct ShopNotice_o *v285; // x8
  int32_t v286; // w2
  int32_t v287; // w3
  struct System_Object_array *v288; // x8
  _QWORD *v289; // x9
  __int64 v290; // x10
  UnityEngine_Component_o *v291; // x1
  Il2CppClass **v292; // x0
  int32_t v293; // w2
  int32_t v294; // w3
  struct System_Object_array *v295; // x8
  _QWORD *v296; // x9
  __int64 v297; // x10
  UnityEngine_Component_o *v298; // x1
  Il2CppClass **v299; // x0
  int32_t v300; // w2
  int32_t v301; // w3
  struct System_Object_array *v302; // x8
  _QWORD *v303; // x9
  __int64 v304; // x10
  UnityEngine_Component_o *v305; // x1
  Il2CppClass **v306; // x0
  int32_t v307; // w2
  int32_t v308; // w3
  struct System_Object_array *v309; // x8
  _QWORD *v310; // x9
  __int64 v311; // x10
  UnityEngine_Component_o *v312; // x1
  Il2CppClass **v313; // x0
  int32_t v314; // w2
  int32_t v315; // w3
  struct System_Object_array *v316; // x8
  _QWORD *v317; // x9
  __int64 v318; // x10
  UnityEngine_Component_o *v319; // x1
  Il2CppClass **v320; // x0
  int32_t v321; // w2
  int32_t v322; // w3
  struct System_Object_array *v323; // x8
  _QWORD *v324; // x9
  __int64 v325; // x10
  Il2CppClass **v326; // x0

  if ( (byte_4A5A8BB & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_GameObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_GameObject__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_MainMenuBarBase__ResetShopNoticeDraw_b__98_0__);
    sub_1B885B0(&ShopNoticeRemainTimeLabel_TypeInfo);
    sub_1B885B0(&ShopNoticeRemainTime_TypeInfo);
    sub_1B885B0(&ShopNoticeTween_TypeInfo);
    byte_4A5A8BB = 1;
  }
  if ( this->fields.isOpen )
  {
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mNewItemSp;
    if ( !mNewItemSp )
      goto LABEL_324;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    shopNotice = this->fields.shopNotice;
    if ( !shopNotice )
      goto LABEL_324;
    if ( !mNewItemSp )
      goto LABEL_324;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      shopNotice->fields._IsShowNew_k__BackingField,
      0LL);
    v5 = this->fields.shopNotice;
    if ( !v5 )
      goto LABEL_324;
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mLimitedItemIconRoot;
    if ( !mNewItemSp )
      goto LABEL_324;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v5->fields._LimitedType_k__BackingField != 0,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
    if ( !mNewItemSp )
      goto LABEL_324;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v6 = this->fields.shopNotice;
    if ( !v6 )
      goto LABEL_324;
    if ( !mNewItemSp )
      goto LABEL_324;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v6->fields._LimitedType_k__BackingField == 1,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
    if ( !mNewItemSp )
      goto LABEL_324;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v7 = this->fields.shopNotice;
    if ( !v7 )
      goto LABEL_324;
    if ( !mNewItemSp )
      goto LABEL_324;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v7->fields._LimitedType_k__BackingField == 2,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
    if ( !mNewItemSp )
      goto LABEL_324;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v8 = this->fields.shopNotice;
    if ( !v8 )
      goto LABEL_324;
    if ( !mNewItemSp )
      goto LABEL_324;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v8->fields._LimitedType_k__BackingField == 3,
      0LL);
    v9 = this->fields.shopNotice;
    if ( !v9 )
      goto LABEL_324;
    if ( v9->fields._ExchangeServantEventId_k__BackingField >= 1 )
    {
      v10 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_MainMenuBarBase__ResetShopNoticeDraw_b__98_0__, 0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadEventUI(v10, 1, 0LL);
    }
    mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
    if ( !mNewItemSp )
      goto LABEL_324;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v11 = this->fields.shopNotice;
    if ( !v11 )
      goto LABEL_324;
    if ( !mNewItemSp )
      goto LABEL_324;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v11->fields._LimitedType_k__BackingField == 4,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
    if ( !mNewItemSp )
      goto LABEL_324;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v12 = this->fields.shopNotice;
    if ( !v12 )
      goto LABEL_324;
    if ( !mNewItemSp )
      goto LABEL_324;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v12->fields._LimitedType_k__BackingField == 1,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
    if ( !mNewItemSp )
      goto LABEL_324;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v13 = this->fields.shopNotice;
    if ( !v13 )
      goto LABEL_324;
    if ( !mNewItemSp )
      goto LABEL_324;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v13->fields._LimitedType_k__BackingField == 2,
      0LL);
    v14 = this->fields.shopNotice;
    if ( !v14 )
      goto LABEL_324;
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantTimeRoot;
    if ( !mNewItemSp )
      goto LABEL_324;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v14->fields._LimitedType_k__BackingField == 3,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemLb;
    if ( !mNewItemSp )
      goto LABEL_324;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v15 = this->fields.shopNotice;
    if ( !v15 )
      goto LABEL_324;
    if ( !mNewItemSp )
      goto LABEL_324;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      !v15->fields._IsIndefiniteExchangeServant_k__BackingField,
      0LL);
    mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonLb;
    if ( !mNewItemSp )
      goto LABEL_324;
    mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
    v16 = this->fields.shopNotice;
    if ( !v16 )
      goto LABEL_324;
    if ( !mNewItemSp )
      goto LABEL_324;
    UnityEngine_GameObject__SetActive(
      (UnityEngine_GameObject_o *)mNewItemSp,
      v16->fields._LimitedType_k__BackingField == 4,
      0LL);
    v17 = this->fields.shopNotice;
    if ( !v17 )
      goto LABEL_324;
    LimitedType_k__BackingField = v17->fields._LimitedType_k__BackingField;
    if ( LimitedType_k__BackingField <= 0x1E && ((1 << LimitedType_k__BackingField) & 0x55545440) != 0 )
    {
      mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeTween;
      p_shopNoticeTween = &this->fields.shopNoticeTween;
      if ( !mNewItemSp )
      {
        v20 = (ShopNoticeTween_o *)sub_1B887FC(ShopNoticeTween_TypeInfo);
        ShopNoticeTween___ctor(v20, (UnityEngine_MonoBehaviour_o *)this, 0LL);
        this->fields.shopNoticeTween = v20;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.shopNoticeTween, (int32_t)v20, v21, v22);
        mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeTween;
        if ( !mNewItemSp )
          goto LABEL_324;
      }
      ShopNoticeTween__Stop((ShopNoticeTween_o *)mNewItemSp, 0LL);
      v23 = this->fields.shopNotice;
      if ( !v23 )
        goto LABEL_324;
      v24 = v23->fields._LimitedType_k__BackingField;
      switch ( v24 )
      {
        case 6:
          v25 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v25,
            (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v25 )
            goto LABEL_324;
          items = v25->fields._items;
          v29 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v25->fields._version;
          if ( !items )
            goto LABEL_324;
          size = v25->fields._size;
          v31 = mNewItemSp;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          }
          else
          {
            v32 = &items->obj.klass + size;
            v25->fields._size = size + 1;
            v32[4] = (Il2CppClass *)v31;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v32 + 4), (int32_t)v31, v26, v27);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v105 = v25->fields._items;
          v106 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v25->fields._version;
          if ( !v105 )
            goto LABEL_324;
          v107 = v25->fields._size;
          v108 = mNewItemSp;
          if ( (unsigned int)v107 >= v105->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v106[4] + 192LL) + 112LL));
          }
          else
          {
            v109 = &v105->obj.klass + v107;
            v25->fields._size = v107 + 1;
            v109[4] = (Il2CppClass *)v108;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v109 + 4), (int32_t)v108, v103, v104);
          }
          v110 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v110,
            (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v110 )
            goto LABEL_324;
          v176 = v110->fields._items;
          v177 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v110->fields._version;
          if ( !v176 )
            goto LABEL_324;
          v178 = v110->fields._size;
          v179 = mNewItemSp;
          if ( (unsigned int)v178 >= v176->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v110,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v177[4] + 192LL) + 112LL));
          }
          else
          {
            v180 = &v176->obj.klass + v178;
            v110->fields._size = v178 + 1;
            v180[4] = (Il2CppClass *)v179;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v180 + 4), (int32_t)v179, v174, v175);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          goto LABEL_256;
        case 10:
          v25 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v25,
            (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v25 )
            goto LABEL_324;
          v42 = v25->fields._items;
          v43 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v25->fields._version;
          if ( !v42 )
            goto LABEL_324;
          v44 = v25->fields._size;
          v45 = mNewItemSp;
          if ( (unsigned int)v44 >= v42->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
          }
          else
          {
            v46 = &v42->obj.klass + v44;
            v25->fields._size = v44 + 1;
            v46[4] = (Il2CppClass *)v45;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v46 + 4), (int32_t)v45, v40, v41);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v113 = v25->fields._items;
          v114 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v25->fields._version;
          if ( !v113 )
            goto LABEL_324;
          v115 = v25->fields._size;
          v116 = mNewItemSp;
          if ( (unsigned int)v115 >= v113->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v114[4] + 192LL) + 112LL));
          }
          else
          {
            v117 = &v113->obj.klass + v115;
            v25->fields._size = v115 + 1;
            v117[4] = (Il2CppClass *)v116;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v117 + 4), (int32_t)v116, v111, v112);
          }
          v110 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v110,
            (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v110 )
            goto LABEL_324;
          v183 = v110->fields._items;
          v184 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v110->fields._version;
          if ( !v183 )
            goto LABEL_324;
          goto LABEL_237;
        case 12:
          v25 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v25,
            (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v25 )
            goto LABEL_324;
          v49 = v25->fields._items;
          v50 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v25->fields._version;
          if ( !v49 )
            goto LABEL_324;
          v51 = v25->fields._size;
          v52 = mNewItemSp;
          if ( (unsigned int)v51 >= v49->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
          }
          else
          {
            v53 = &v49->obj.klass + v51;
            v25->fields._size = v51 + 1;
            v53[4] = (Il2CppClass *)v52;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v53 + 4), (int32_t)v52, v47, v48);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v120 = v25->fields._items;
          v121 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v25->fields._version;
          if ( !v120 )
            goto LABEL_324;
          v122 = v25->fields._size;
          v123 = mNewItemSp;
          if ( (unsigned int)v122 >= v120->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v121[4] + 192LL) + 112LL));
          }
          else
          {
            v124 = &v120->obj.klass + v122;
            v25->fields._size = v122 + 1;
            v124[4] = (Il2CppClass *)v123;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v124 + 4), (int32_t)v123, v118, v119);
          }
          v110 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v110,
            (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v110 )
            goto LABEL_324;
          v183 = v110->fields._items;
          v184 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v110->fields._version;
          if ( !v183 )
            goto LABEL_324;
          goto LABEL_237;
        case 14:
          v25 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v25,
            (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v25 )
            goto LABEL_324;
          v56 = v25->fields._items;
          v57 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v25->fields._version;
          if ( !v56 )
            goto LABEL_324;
          v58 = v25->fields._size;
          v59 = mNewItemSp;
          if ( (unsigned int)v58 >= v56->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v57[4] + 192LL) + 112LL));
          }
          else
          {
            v60 = &v56->obj.klass + v58;
            v25->fields._size = v58 + 1;
            v60[4] = (Il2CppClass *)v59;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v60 + 4), (int32_t)v59, v54, v55);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v127 = v25->fields._items;
          v128 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v25->fields._version;
          if ( !v127 )
            goto LABEL_324;
          v129 = v25->fields._size;
          v130 = mNewItemSp;
          if ( (unsigned int)v129 >= v127->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v128[4] + 192LL) + 112LL));
          }
          else
          {
            v131 = &v127->obj.klass + v129;
            v25->fields._size = v129 + 1;
            v131[4] = (Il2CppClass *)v130;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v131 + 4), (int32_t)v130, v125, v126);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v187 = v25->fields._items;
          v188 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v25->fields._version;
          if ( !v187 )
            goto LABEL_324;
          v189 = v25->fields._size;
          v190 = mNewItemSp;
          if ( (unsigned int)v189 >= v187->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v188[4] + 192LL) + 112LL));
          }
          else
          {
            v191 = &v187->obj.klass + v189;
            v25->fields._size = v189 + 1;
            v191[4] = (Il2CppClass *)v190;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v191 + 4), (int32_t)v190, v185, v186);
          }
          v110 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v110,
            (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v110 )
            goto LABEL_324;
          v219 = v110->fields._items;
          v220 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v110->fields._version;
          if ( !v219 )
            goto LABEL_324;
          v221 = v110->fields._size;
          v222 = mNewItemSp;
          if ( (unsigned int)v221 >= v219->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v110,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v220[4] + 192LL) + 112LL));
          }
          else
          {
            v223 = &v219->obj.klass + v221;
            v110->fields._size = v221 + 1;
            v223[4] = (Il2CppClass *)v222;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v223 + 4), (int32_t)v222, v217, v218);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v183 = v110->fields._items;
          v184 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v110->fields._version;
          if ( !v183 )
            goto LABEL_324;
LABEL_237:
          v245 = v110->fields._size;
          v246 = mNewItemSp;
          if ( (unsigned int)v245 >= v183->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v110,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v184[4] + 192LL) + 112LL));
          }
          else
          {
            v247 = &v183->obj.klass + v245;
            v110->fields._size = v245 + 1;
            v247[4] = (Il2CppClass *)v246;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v247 + 4), (int32_t)v246, v181, v182);
          }
          method = (const MethodInfo *)this->fields.mExchangeServantTimeRoot;
          v250 = v110->fields._items;
          v251 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v110->fields._version;
          if ( !v250 )
            goto LABEL_324;
          goto LABEL_258;
        case 18:
          v25 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v25,
            (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v25 )
            goto LABEL_324;
          v63 = v25->fields._items;
          v64 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v25->fields._version;
          if ( !v63 )
            goto LABEL_324;
          v65 = v25->fields._size;
          v66 = mNewItemSp;
          if ( (unsigned int)v65 >= v63->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
          }
          else
          {
            v67 = &v63->obj.klass + v65;
            v25->fields._size = v65 + 1;
            v67[4] = (Il2CppClass *)v66;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v67 + 4), (int32_t)v66, v61, v62);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v134 = v25->fields._items;
          v135 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v25->fields._version;
          if ( !v134 )
            goto LABEL_324;
          v136 = v25->fields._size;
          v137 = mNewItemSp;
          if ( (unsigned int)v136 >= v134->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v135[4] + 192LL) + 112LL));
          }
          else
          {
            v138 = &v134->obj.klass + v136;
            v25->fields._size = v136 + 1;
            v138[4] = (Il2CppClass *)v137;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v138 + 4), (int32_t)v137, v132, v133);
          }
          v110 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v110,
            (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v110 )
            goto LABEL_324;
          v194 = v110->fields._items;
          v195 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v110->fields._version;
          if ( !v194 )
            goto LABEL_324;
          goto LABEL_245;
        case 20:
          v25 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v25,
            (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v25 )
            goto LABEL_324;
          v70 = v25->fields._items;
          v71 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v25->fields._version;
          if ( !v70 )
            goto LABEL_324;
          v72 = v25->fields._size;
          v73 = mNewItemSp;
          if ( (unsigned int)v72 >= v70->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v71[4] + 192LL) + 112LL));
          }
          else
          {
            v74 = &v70->obj.klass + v72;
            v25->fields._size = v72 + 1;
            v74[4] = (Il2CppClass *)v73;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v74 + 4), (int32_t)v73, v68, v69);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v141 = v25->fields._items;
          v142 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v25->fields._version;
          if ( !v141 )
            goto LABEL_324;
          v143 = v25->fields._size;
          v144 = mNewItemSp;
          if ( (unsigned int)v143 >= v141->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v142[4] + 192LL) + 112LL));
          }
          else
          {
            v145 = &v141->obj.klass + v143;
            v25->fields._size = v143 + 1;
            v145[4] = (Il2CppClass *)v144;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v145 + 4), (int32_t)v144, v139, v140);
          }
          v110 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v110,
            (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v110 )
            goto LABEL_324;
          v194 = v110->fields._items;
          v195 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v110->fields._version;
          if ( !v194 )
            goto LABEL_324;
          goto LABEL_245;
        case 22:
          v25 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v25,
            (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( mNewItemSp )
          {
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            if ( v25 )
            {
              v77 = v25->fields._items;
              v78 = Method_System_Collections_Generic_List_GameObject__Add__;
              ++v25->fields._version;
              if ( v77 )
              {
                v79 = v25->fields._size;
                v80 = mNewItemSp;
                if ( (unsigned int)v79 >= v77->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v25,
                    (Il2CppObject *)mNewItemSp,
                    *(const MethodInfo_34FD834 **)(*(_QWORD *)(v78[4] + 192LL) + 112LL));
                }
                else
                {
                  v81 = &v77->obj.klass + v79;
                  v25->fields._size = v79 + 1;
                  v81[4] = (Il2CppClass *)v80;
                  sub_1B88554((ServantStatusBattleListViewItem_o *)(v81 + 4), (int32_t)v80, v75, v76);
                }
                mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
                if ( mNewItemSp )
                {
                  mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
                  v148 = v25->fields._items;
                  v149 = Method_System_Collections_Generic_List_GameObject__Add__;
                  ++v25->fields._version;
                  if ( v148 )
                  {
                    v150 = v25->fields._size;
                    v151 = mNewItemSp;
                    if ( (unsigned int)v150 >= v148->max_length )
                    {
                      System_Collections_Generic_List_object___AddWithResize(
                        v25,
                        (Il2CppObject *)mNewItemSp,
                        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v149[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v152 = &v148->obj.klass + v150;
                      v25->fields._size = v150 + 1;
                      v152[4] = (Il2CppClass *)v151;
                      sub_1B88554((ServantStatusBattleListViewItem_o *)(v152 + 4), (int32_t)v151, v146, v147);
                    }
                    mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
                    if ( mNewItemSp )
                    {
                      mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
                      v198 = v25->fields._items;
                      v199 = Method_System_Collections_Generic_List_GameObject__Add__;
                      ++v25->fields._version;
                      if ( v198 )
                      {
                        v200 = v25->fields._size;
                        v201 = mNewItemSp;
                        if ( (unsigned int)v200 >= v198->max_length )
                        {
                          System_Collections_Generic_List_object___AddWithResize(
                            v25,
                            (Il2CppObject *)mNewItemSp,
                            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v199[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v202 = &v198->obj.klass + v200;
                          v25->fields._size = v200 + 1;
                          v202[4] = (Il2CppClass *)v201;
                          sub_1B88554((ServantStatusBattleListViewItem_o *)(v202 + 4), (int32_t)v201, v196, v197);
                        }
                        v110 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
                        System_Collections_Generic_List_object____ctor(
                          v110,
                          (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
                        mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
                        if ( mNewItemSp )
                        {
                          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
                          if ( v110 )
                          {
                            v226 = v110->fields._items;
                            v227 = Method_System_Collections_Generic_List_GameObject__Add__;
                            ++v110->fields._version;
                            if ( v226 )
                            {
                              v228 = v110->fields._size;
                              v229 = mNewItemSp;
                              if ( (unsigned int)v228 >= v226->max_length )
                              {
                                System_Collections_Generic_List_object___AddWithResize(
                                  v110,
                                  (Il2CppObject *)mNewItemSp,
                                  *(const MethodInfo_34FD834 **)(*(_QWORD *)(v227[4] + 192LL) + 112LL));
                              }
                              else
                              {
                                v230 = &v226->obj.klass + v228;
                                v110->fields._size = v228 + 1;
                                v230[4] = (Il2CppClass *)v229;
                                sub_1B88554((ServantStatusBattleListViewItem_o *)(v230 + 4), (int32_t)v229, v224, v225);
                              }
                              mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
                              if ( mNewItemSp )
                              {
                                mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(
                                                                          mNewItemSp,
                                                                          0LL);
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
          goto LABEL_324;
        case 24:
          v25 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v25,
            (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v25 )
            goto LABEL_324;
          v84 = v25->fields._items;
          v85 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v25->fields._version;
          if ( !v84 )
            goto LABEL_324;
          v86 = v25->fields._size;
          v87 = mNewItemSp;
          if ( (unsigned int)v86 >= v84->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v85[4] + 192LL) + 112LL));
          }
          else
          {
            v88 = &v84->obj.klass + v86;
            v25->fields._size = v86 + 1;
            v88[4] = (Il2CppClass *)v87;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v88 + 4), (int32_t)v87, v82, v83);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v155 = v25->fields._items;
          v156 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v25->fields._version;
          if ( !v155 )
            goto LABEL_324;
          v157 = v25->fields._size;
          v158 = mNewItemSp;
          if ( (unsigned int)v157 >= v155->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v156[4] + 192LL) + 112LL));
          }
          else
          {
            v159 = &v155->obj.klass + v157;
            v25->fields._size = v157 + 1;
            v159[4] = (Il2CppClass *)v158;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v159 + 4), (int32_t)v158, v153, v154);
          }
          v110 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v110,
            (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantTimeRoot;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                    (UnityEngine_GameObject_o *)mNewItemSp,
                                                    0LL);
          if ( !v110 )
            goto LABEL_324;
          v194 = v110->fields._items;
          v195 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v110->fields._version;
          if ( !v194 )
            goto LABEL_324;
LABEL_245:
          v252 = v110->fields._size;
          max_length = v194->max_length;
          method = (const MethodInfo *)mNewItemSp;
          goto LABEL_252;
        case 26:
          v25 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v25,
            (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v25 )
            goto LABEL_324;
          v91 = v25->fields._items;
          v92 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v25->fields._version;
          if ( !v91 )
            goto LABEL_324;
          v93 = v25->fields._size;
          v94 = mNewItemSp;
          if ( (unsigned int)v93 >= v91->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
          }
          else
          {
            v95 = &v91->obj.klass + v93;
            v25->fields._size = v93 + 1;
            v95[4] = (Il2CppClass *)v94;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v95 + 4), (int32_t)v94, v89, v90);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v162 = v25->fields._items;
          v163 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v25->fields._version;
          if ( !v162 )
            goto LABEL_324;
          v164 = v25->fields._size;
          v165 = mNewItemSp;
          if ( (unsigned int)v164 >= v162->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v163[4] + 192LL) + 112LL));
          }
          else
          {
            v166 = &v162->obj.klass + v164;
            v25->fields._size = v164 + 1;
            v166[4] = (Il2CppClass *)v165;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v166 + 4), (int32_t)v165, v160, v161);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v205 = v25->fields._items;
          v206 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v25->fields._version;
          if ( !v205 )
            goto LABEL_324;
          v207 = v25->fields._size;
          v208 = mNewItemSp;
          if ( (unsigned int)v207 >= v205->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v206[4] + 192LL) + 112LL));
          }
          else
          {
            v209 = &v205->obj.klass + v207;
            v25->fields._size = v207 + 1;
            v209[4] = (Il2CppClass *)v208;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v209 + 4), (int32_t)v208, v203, v204);
          }
          v110 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v110,
            (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v110 )
            goto LABEL_324;
          v233 = v110->fields._items;
          v234 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v110->fields._version;
          if ( !v233 )
            goto LABEL_324;
          v235 = v110->fields._size;
          v236 = mNewItemSp;
          if ( (unsigned int)v235 >= v233->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v110,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v234[4] + 192LL) + 112LL));
          }
          else
          {
            v237 = &v233->obj.klass + v235;
            v110->fields._size = v235 + 1;
            v237[4] = (Il2CppClass *)v236;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v237 + 4), (int32_t)v236, v231, v232);
          }
          method = (const MethodInfo *)this->fields.mExchangeServantTimeRoot;
          v194 = v110->fields._items;
          v195 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v110->fields._version;
          if ( !v194 )
            goto LABEL_324;
          goto LABEL_251;
        case 28:
          v25 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v25,
            (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v25 )
            goto LABEL_324;
          v98 = v25->fields._items;
          v99 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v25->fields._version;
          if ( !v98 )
            goto LABEL_324;
          v100 = v25->fields._size;
          v101 = mNewItemSp;
          if ( (unsigned int)v100 >= v98->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v99[4] + 192LL) + 112LL));
          }
          else
          {
            v102 = &v98->obj.klass + v100;
            v25->fields._size = v100 + 1;
            v102[4] = (Il2CppClass *)v101;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v102 + 4), (int32_t)v101, v96, v97);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v169 = v25->fields._items;
          v170 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v25->fields._version;
          if ( !v169 )
            goto LABEL_324;
          v171 = v25->fields._size;
          v172 = mNewItemSp;
          if ( (unsigned int)v171 >= v169->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v170[4] + 192LL) + 112LL));
          }
          else
          {
            v173 = &v169->obj.klass + v171;
            v25->fields._size = v171 + 1;
            v173[4] = (Il2CppClass *)v172;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v173 + 4), (int32_t)v172, v167, v168);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          v212 = v25->fields._items;
          v213 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v25->fields._version;
          if ( !v212 )
            goto LABEL_324;
          v214 = v25->fields._size;
          v215 = mNewItemSp;
          if ( (unsigned int)v214 >= v212->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v25,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v213[4] + 192LL) + 112LL));
          }
          else
          {
            v216 = &v212->obj.klass + v214;
            v25->fields._size = v214 + 1;
            v216[4] = (Il2CppClass *)v215;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v216 + 4), (int32_t)v215, v210, v211);
          }
          v110 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v110,
            (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
          if ( !mNewItemSp )
            goto LABEL_324;
          mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
          if ( !v110 )
            goto LABEL_324;
          v240 = v110->fields._items;
          v241 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v110->fields._version;
          if ( !v240 )
            goto LABEL_324;
          v242 = v110->fields._size;
          v243 = mNewItemSp;
          if ( (unsigned int)v242 >= v240->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v110,
              (Il2CppObject *)mNewItemSp,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v241[4] + 192LL) + 112LL));
          }
          else
          {
            v244 = &v240->obj.klass + v242;
            v110->fields._size = v242 + 1;
            v244[4] = (Il2CppClass *)v243;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v244 + 4), (int32_t)v243, v238, v239);
          }
          method = (const MethodInfo *)this->fields.mExchangeServantTimeRoot;
          v194 = v110->fields._items;
          v195 = Method_System_Collections_Generic_List_GameObject__Add__;
          ++v110->fields._version;
          if ( !v194 )
            goto LABEL_324;
LABEL_251:
          v252 = v110->fields._size;
          max_length = v194->max_length;
LABEL_252:
          if ( (unsigned int)v252 >= max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v110,
              (Il2CppObject *)method,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v195[4] + 192LL) + 112LL));
          }
          else
          {
            v254 = &v194->obj.klass + v252;
            v110->fields._size = v252 + 1;
            v254[4] = (Il2CppClass *)method;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v254 + 4), (int32_t)method, v192, v193);
          }
          mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonLb;
          if ( mNewItemSp )
            goto LABEL_256;
          goto LABEL_324;
        default:
          v25 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
          System_Collections_Generic_List_object____ctor(
            v25,
            (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          if ( v24 == 30 )
          {
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedItemSp;
            if ( !mNewItemSp )
              goto LABEL_324;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            if ( !v25 )
              goto LABEL_324;
            v35 = v25->fields._items;
            v36 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v25->fields._version;
            if ( !v35 )
              goto LABEL_324;
            v37 = v25->fields._size;
            v38 = mNewItemSp;
            if ( (unsigned int)v37 >= v35->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v25,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
            }
            else
            {
              v39 = &v35->obj.klass + v37;
              v25->fields._size = v37 + 1;
              v39[4] = (Il2CppClass *)v38;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v39 + 4), (int32_t)v38, v33, v34);
            }
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedItemSp;
            if ( !mNewItemSp )
              goto LABEL_324;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            v288 = v25->fields._items;
            v289 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v25->fields._version;
            if ( !v288 )
              goto LABEL_324;
            v290 = v25->fields._size;
            v291 = mNewItemSp;
            if ( (unsigned int)v290 >= v288->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v25,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v289[4] + 192LL) + 112LL));
            }
            else
            {
              v292 = &v288->obj.klass + v290;
              v25->fields._size = v290 + 1;
              v292[4] = (Il2CppClass *)v291;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v292 + 4), (int32_t)v291, v286, v287);
            }
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mExchangeServantItemSp;
            if ( !mNewItemSp )
              goto LABEL_324;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            v295 = v25->fields._items;
            v296 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v25->fields._version;
            if ( !v295 )
              goto LABEL_324;
            v297 = v25->fields._size;
            v298 = mNewItemSp;
            if ( (unsigned int)v297 >= v295->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v25,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v296[4] + 192LL) + 112LL));
            }
            else
            {
              v299 = &v295->obj.klass + v297;
              v25->fields._size = v297 + 1;
              v299[4] = (Il2CppClass *)v298;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v299 + 4), (int32_t)v298, v293, v294);
            }
            mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonSp;
            if ( !mNewItemSp )
              goto LABEL_324;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            v302 = v25->fields._items;
            v303 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v25->fields._version;
            if ( !v302 )
              goto LABEL_324;
            v304 = v25->fields._size;
            v305 = mNewItemSp;
            if ( (unsigned int)v304 >= v302->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v25,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v303[4] + 192LL) + 112LL));
            }
            else
            {
              v306 = &v302->obj.klass + v304;
              v25->fields._size = v304 + 1;
              v306[4] = (Il2CppClass *)v305;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v306 + 4), (int32_t)v305, v300, v301);
            }
            v110 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v110,
              (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mPeriodLimitedTimeLb;
            if ( !mNewItemSp )
              goto LABEL_324;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            if ( !v110 )
              goto LABEL_324;
            v309 = v110->fields._items;
            v310 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v110->fields._version;
            if ( !v309 )
              goto LABEL_324;
            v311 = v110->fields._size;
            v312 = mNewItemSp;
            if ( (unsigned int)v311 >= v309->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v110,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v310[4] + 192LL) + 112LL));
            }
            else
            {
              v313 = &v309->obj.klass + v311;
              v110->fields._size = v311 + 1;
              v313[4] = (Il2CppClass *)v312;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v313 + 4), (int32_t)v312, v307, v308);
            }
            mNewItemSp = (UnityEngine_Component_o *)this->fields.mMonthlyLimitedTimeLb;
            if ( !mNewItemSp )
              goto LABEL_324;
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            v316 = v110->fields._items;
            v317 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v110->fields._version;
            if ( !v316 )
              goto LABEL_324;
            v318 = v110->fields._size;
            v319 = mNewItemSp;
            if ( (unsigned int)v318 >= v316->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v110,
                (Il2CppObject *)mNewItemSp,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v317[4] + 192LL) + 112LL));
            }
            else
            {
              v320 = &v316->obj.klass + v318;
              v110->fields._size = v318 + 1;
              v320[4] = (Il2CppClass *)v319;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v320 + 4), (int32_t)v319, v314, v315);
            }
            method = (const MethodInfo *)this->fields.mExchangeServantTimeRoot;
            v323 = v110->fields._items;
            v324 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v110->fields._version;
            if ( !v323 )
              goto LABEL_324;
            v325 = v110->fields._size;
            if ( (unsigned int)v325 >= v323->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v110,
                (Il2CppObject *)method,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v324[4] + 192LL) + 112LL));
            }
            else
            {
              v326 = &v323->obj.klass + v325;
              v110->fields._size = v325 + 1;
              v326[4] = (Il2CppClass *)method;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v326 + 4), (int32_t)method, v321, v322);
            }
            mNewItemSp = (UnityEngine_Component_o *)this->fields.StartUpSummonLb;
            if ( !mNewItemSp )
              goto LABEL_324;
LABEL_256:
            mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL);
            v250 = v110->fields._items;
            v251 = Method_System_Collections_Generic_List_GameObject__Add__;
            ++v110->fields._version;
            if ( !v250 )
              goto LABEL_324;
            method = (const MethodInfo *)mNewItemSp;
LABEL_258:
            v255 = v110->fields._size;
            if ( (unsigned int)v255 >= v250->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v110,
                (Il2CppObject *)method,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v251[4] + 192LL) + 112LL));
            }
            else
            {
              v256 = &v250->obj.klass + v255;
              v110->fields._size = v255 + 1;
              v256[4] = (Il2CppClass *)method;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v256 + 4), (int32_t)method, v248, v249);
            }
          }
          else
          {
            v110 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_GameObject__TypeInfo);
            System_Collections_Generic_List_object____ctor(
              v110,
              (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_GameObject___ctor__);
          }
          mNewItemSp = (UnityEngine_Component_o *)*p_shopNoticeTween;
          if ( !*p_shopNoticeTween )
            goto LABEL_324;
          ShopNoticeTween__AddTargets(
            (ShopNoticeTween_o *)mNewItemSp,
            this->fields.mLimitedItemIconRoot,
            (System_Collections_Generic_List_GameObject__o *)v25,
            (System_Collections_Generic_List_GameObject__o *)v110,
            0LL);
          mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeTween;
          if ( !mNewItemSp )
            goto LABEL_324;
          ShopNoticeTween__SetActiveSwitchingTargets((ShopNoticeTween_o *)mNewItemSp, 0, 0LL);
          mNewItemSp = (UnityEngine_Component_o *)*p_shopNoticeTween;
          if ( !*p_shopNoticeTween )
            goto LABEL_324;
          ShopNoticeTween__Start((ShopNoticeTween_o *)mNewItemSp, 0LL);
          break;
      }
    }
    else
    {
      mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeTween;
      if ( mNewItemSp )
        ShopNoticeTween__Stop((ShopNoticeTween_o *)mNewItemSp, 0LL);
    }
    v257 = this->fields.shopNotice;
    if ( !v257 )
      goto LABEL_324;
    if ( v257->fields._LimitedType_k__BackingField )
    {
      mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeRemainTime;
      if ( mNewItemSp
        || (v258 = (ShopNoticeRemainTime_o *)sub_1B887FC(ShopNoticeRemainTime_TypeInfo),
            ShopNoticeRemainTime___ctor(v258, (UnityEngine_MonoBehaviour_o *)this, 0LL),
            this->fields.shopNoticeRemainTime = v258,
            sub_1B88554(
              (ServantStatusBattleListViewItem_o *)&this->fields.shopNoticeRemainTime,
              (int32_t)v258,
              v259,
              v260),
            (mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeRemainTime) != 0LL) )
      {
        ShopNoticeRemainTime__SetShopNotice((ShopNoticeRemainTime_o *)mNewItemSp, this->fields.shopNotice, 0LL);
        mNewItemSp = (UnityEngine_Component_o *)this->fields.shopNoticeRemainTime;
        if ( mNewItemSp )
        {
          ShopNoticeRemainTime__Start((ShopNoticeRemainTime_o *)mNewItemSp, 0LL);
          v262 = this->fields.shopNotice;
          if ( v262 )
          {
            mPeriodLimitedTimeLb = this->fields.mPeriodLimitedTimeLb;
            PeriodTimeLimit_k__BackingField = v262->fields._PeriodTimeLimit_k__BackingField;
            if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            mNewItemSp = (UnityEngine_Component_o *)LocalizationManager__GetRestTime5(
                                                      PeriodTimeLimit_k__BackingField,
                                                      -1LL,
                                                      v261);
            if ( mPeriodLimitedTimeLb )
            {
              UILabel__set_text(mPeriodLimitedTimeLb, (System_String_o *)mNewItemSp, 0LL);
              v266 = this->fields.shopNotice;
              if ( v266 )
              {
                mMonthlyLimitedTimeLb = this->fields.mMonthlyLimitedTimeLb;
                mNewItemSp = (UnityEngine_Component_o *)LocalizationManager__GetRestTime5(
                                                          v266->fields._MonthlyTimeLimit_k__BackingField,
                                                          -1LL,
                                                          v265);
                if ( mMonthlyLimitedTimeLb )
                {
                  UILabel__set_text(mMonthlyLimitedTimeLb, (System_String_o *)mNewItemSp, 0LL);
                  v269 = this->fields.shopNotice;
                  if ( v269 )
                  {
                    mExchangeServantItemLb = this->fields.mExchangeServantItemLb;
                    mNewItemSp = (UnityEngine_Component_o *)LocalizationManager__GetRestTime5(
                                                              v269->fields._ExchangeServantTimeLimit_k__BackingField,
                                                              -1LL,
                                                              v268);
                    if ( mExchangeServantItemLb )
                    {
                      UILabel__set_text(mExchangeServantItemLb, (System_String_o *)mNewItemSp, 0LL);
                      if ( !this->fields.periodShopNoticeRemainTimeLabel )
                      {
                        v271 = this->fields.mPeriodLimitedTimeLb;
                        v272 = (ShopNoticeRemainTimeLabel_o *)sub_1B887FC(ShopNoticeRemainTimeLabel_TypeInfo);
                        ShopNoticeRemainTimeLabel___ctor(v272, v271, (UnityEngine_MonoBehaviour_o *)this, 0LL);
                        this->fields.periodShopNoticeRemainTimeLabel = v272;
                        sub_1B88554(
                          (ServantStatusBattleListViewItem_o *)&this->fields.periodShopNoticeRemainTimeLabel,
                          (int32_t)v272,
                          v273,
                          v274);
                      }
                      if ( !this->fields.monthlyShopNoticeRemainTimeLabel )
                      {
                        v275 = this->fields.mMonthlyLimitedTimeLb;
                        v276 = (ShopNoticeRemainTimeLabel_o *)sub_1B887FC(ShopNoticeRemainTimeLabel_TypeInfo);
                        ShopNoticeRemainTimeLabel___ctor(v276, v275, (UnityEngine_MonoBehaviour_o *)this, 0LL);
                        this->fields.monthlyShopNoticeRemainTimeLabel = v276;
                        sub_1B88554(
                          (ServantStatusBattleListViewItem_o *)&this->fields.monthlyShopNoticeRemainTimeLabel,
                          (int32_t)v276,
                          v277,
                          v278);
                      }
                      if ( !this->fields.exchangeServantShopNoticeRemainTimeLabel )
                      {
                        v279 = this->fields.mExchangeServantItemLb;
                        v280 = (ShopNoticeRemainTimeLabel_o *)sub_1B887FC(ShopNoticeRemainTimeLabel_TypeInfo);
                        ShopNoticeRemainTimeLabel___ctor(v280, v279, (UnityEngine_MonoBehaviour_o *)this, 0LL);
                        this->fields.exchangeServantShopNoticeRemainTimeLabel = v280;
                        sub_1B88554(
                          (ServantStatusBattleListViewItem_o *)&this->fields.exchangeServantShopNoticeRemainTimeLabel,
                          (int32_t)v280,
                          v281,
                          v282);
                      }
                      v283 = this->fields.shopNotice;
                      if ( v283 )
                      {
                        mNewItemSp = (UnityEngine_Component_o *)this->fields.periodShopNoticeRemainTimeLabel;
                        if ( mNewItemSp )
                        {
                          mNewItemSp[1].monitor = (void *)v283->fields._PeriodTimeLimit_k__BackingField;
                          ShopNoticeRemainTimeLabel__Start((ShopNoticeRemainTimeLabel_o *)mNewItemSp, 0LL);
                          v284 = this->fields.shopNotice;
                          if ( v284 )
                          {
                            mNewItemSp = (UnityEngine_Component_o *)this->fields.monthlyShopNoticeRemainTimeLabel;
                            if ( mNewItemSp )
                            {
                              mNewItemSp[1].monitor = (void *)v284->fields._MonthlyTimeLimit_k__BackingField;
                              ShopNoticeRemainTimeLabel__Start((ShopNoticeRemainTimeLabel_o *)mNewItemSp, 0LL);
                              v285 = this->fields.shopNotice;
                              if ( v285 )
                              {
                                mNewItemSp = (UnityEngine_Component_o *)this->fields.exchangeServantShopNoticeRemainTimeLabel;
                                if ( mNewItemSp )
                                {
                                  mNewItemSp[1].monitor = (void *)v285->fields._ExchangeServantTimeLimit_k__BackingField;
                                  ShopNoticeRemainTimeLabel__Start((ShopNoticeRemainTimeLabel_o *)mNewItemSp, 0LL);
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
LABEL_324:
      sub_1B8880C(mNewItemSp, method);
    }
  }
}


void __fastcall MainMenuBarBase__ResetSummonNoticeDraw(MainMenuBarBase_o *this, const MethodInfo *method)
{
  SummonControl_c *v3; // x0
  int32_t FRIEND_POINT_SUMMON_ID; // w20
  __int64 v5; // x1
  UnityEngine_GameObject_o *summonCampainObject; // x0
  const MethodInfo *v7; // x1
  UILabel_o *summonCampainLabel1; // x20
  UILabel_o *summonCampainLabel2; // x20
  const MethodInfo *v10; // x1
  UILabel_o *summonCampainNumLabel; // x19
  int32_t maxNum[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5A8BD & 1) == 0 )
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&SummonControl_TypeInfo);
    sub_1B885B0(&UserGachaMaster_TypeInfo);
    sub_1B885B0(&StringLiteral_6521/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG1"*/);
    sub_1B885B0(&StringLiteral_6522/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG2"*/);
    byte_4A5A8BD = 1;
  }
  *(_QWORD *)maxNum = 0LL;
  if ( this->fields.isOpen )
  {
    v3 = SummonControl_TypeInfo;
    if ( !SummonControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SummonControl_TypeInfo);
      v3 = SummonControl_TypeInfo;
    }
    FRIEND_POINT_SUMMON_ID = v3->static_fields->FRIEND_POINT_SUMMON_ID;
    if ( !UserGachaMaster_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UserGachaMaster_TypeInfo);
    if ( UserGachaMaster__CheckFriendPointMultipleFreeCampaignAvailable(FRIEND_POINT_SUMMON_ID, &maxNum[1], maxNum, 0LL) )
    {
      summonCampainObject = this->fields.summonCampainObject;
      if ( !summonCampainObject )
        goto LABEL_17;
      UnityEngine_GameObject__SetActive(summonCampainObject, 1, 0LL);
      summonCampainLabel1 = this->fields.summonCampainLabel1;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      summonCampainObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                          (System_String_o *)StringLiteral_6521/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG1"*/,
                                                          v7);
      if ( !summonCampainLabel1
        || (UILabel__set_text(summonCampainLabel1, (System_String_o *)summonCampainObject, 0LL),
            summonCampainLabel2 = this->fields.summonCampainLabel2,
            summonCampainObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                (System_String_o *)StringLiteral_6522/*"FRIEND_POINT_SUMMON_MULTIPLE_FREE_CAMPAIGN_MENU_MSG2"*/,
                                                                v10),
            !summonCampainLabel2)
        || (UILabel__set_text(summonCampainLabel2, (System_String_o *)summonCampainObject, 0LL),
            summonCampainNumLabel = this->fields.summonCampainNumLabel,
            summonCampainObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&maxNum[1], 0LL),
            !summonCampainNumLabel) )
      {
LABEL_17:
        sub_1B8880C(summonCampainObject, v5);
      }
      UILabel__set_text(summonCampainNumLabel, (System_String_o *)summonCampainObject, 0LL);
    }
  }
}


void __fastcall MainMenuBarBase__SendSelectSignal(
        MainMenuBarBase_o *this,
        int32_t type,
        System_String_o *message,
        Il2CppObject *obj,
        const MethodInfo *method)
{
  UnityEngine_Object_o *activeSceneFSM; // x23
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x1
  PlayMakerFSM_o *v15; // x0

  if ( (byte_4A5A8B7 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_8493/*"MAIN_MENU_BAR_SELECT"*/);
    byte_4A5A8B7 = 1;
  }
  activeSceneFSM = (UnityEngine_Object_o *)this->fields.activeSceneFSM;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(activeSceneFSM, 0LL, 0LL) && !System_String__IsNullOrEmpty(message, 0LL) )
  {
    this->fields.selectedType = type;
    this->fields.selectedKind = message;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.selectedKind, (int32_t)message, v10, v11);
    this->fields.selectedObject = obj;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.selectedObject, (int32_t)obj, v12, v13);
    v15 = this->fields.activeSceneFSM;
    if ( !v15 )
      sub_1B8880C(0LL, v14);
    PlayMakerFSM__SendEvent(v15, (System_String_o *)StringLiteral_8493/*"MAIN_MENU_BAR_SELECT"*/, 0LL);
  }
}


void __fastcall MainMenuBarBase__SetActiveScene(
        MainMenuBarBase_o *this,
        SceneRootComponent_o *scene,
        int32_t kind,
        int32_t panelDepth,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  struct PlayMakerFSM_o *myFSM; // x1
  Il2CppObject *ComponentInChildren_object__48719376; // x0
  UnityEngine_Component_o *v14; // x23
  UnityEngine_Transform_o *v15; // x24
  UnityEngine_GameObject_o *v16; // x24
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x3

  if ( (byte_4A5A8B3 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentInChildren_UICamera___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UICamera___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A8B3 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !scene )
      goto LABEL_28;
    ComponentInChildren_object__48719376 = UnityEngine_Component__GetComponentInChildren_object__48719376(
                                             (UnityEngine_Component_o *)scene,
                                             (const MethodInfo_2E76610 *)Method_UnityEngine_Component_GetComponentInChildren_UICamera___);
  }
  else
  {
    if ( !cam )
      goto LABEL_28;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)cam, 0LL);
    if ( !gameObject )
      goto LABEL_28;
    ComponentInChildren_object__48719376 = UnityEngine_GameObject__GetComponent_object_(
                                             gameObject,
                                             (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UICamera___);
  }
  v14 = (UnityEngine_Component_o *)ComponentInChildren_object__48719376;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0LL, 0LL) )
  {
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
    if ( !v14 )
      goto LABEL_28;
    v15 = (UnityEngine_Transform_o *)gameObject;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(v14, 0LL);
    if ( !v15 )
      goto LABEL_28;
    UnityEngine_Transform__set_parent(v15, (UnityEngine_Transform_o *)gameObject, 0LL);
    v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    gameObject = UnityEngine_Component__get_gameObject(v14, 0LL);
    if ( !gameObject )
      goto LABEL_28;
    gameObject = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_layer(gameObject, 0LL);
    if ( !v16 )
      goto LABEL_28;
    UnityEngine_GameObject__set_layer(v16, (int32_t)gameObject, 0LL);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)scene, 0LL, 0LL);
  myFSM = 0LL;
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !scene )
      goto LABEL_28;
    myFSM = scene->fields.myFSM;
  }
  if ( !this )
    goto LABEL_28;
  this->fields.activeSceneFSM = myFSM;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.activeSceneFSM, (int32_t)myFSM, v17, v18);
  gameObject = (UnityEngine_GameObject_o *)this->fields.rootPanel;
  if ( !gameObject
    || (UIPanel__set_depth((UIPanel_o *)gameObject, panelDepth, 0LL),
        this->fields.kind = kind,
        MainMenuBarBase__SetButtonActive(this, kind, 0, v19),
        MainMenuBarBase__SwitchMenu(this, 0, 0, v20),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.mOutSide) == 0LL) )
  {
LABEL_28:
    sub_1B8880C(gameObject, myFSM);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
}


void __fastcall MainMenuBarBase__SetAllBtnAct(MainMenuBarBase_o *this, System_Action_o *act, const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.mAllBtnAct = act;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mAllBtnAct, (int32_t)act, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBarBase__SetButtonActive(
        MainMenuBarBase_o *this,
        int32_t kind,
        bool isActive,
        const MethodInfo *method)
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
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w1
  int32_t v19; // w2
  int32_t v20; // w3

  partyBtn = this->fields.partyBtn;
  if ( isActive )
    v6 = 2;
  else
    v6 = 1;
  if ( !partyBtn )
    goto LABEL_41;
  v9 = kind == 3 ? 3 : v6;
  MainMenuBarButton__SetMode(partyBtn, v9, 0LL);
  partyBtn = this->fields.summonBtn;
  if ( !partyBtn )
    goto LABEL_41;
  v10 = kind == 4 ? 3 : v6;
  MainMenuBarButton__SetMode(partyBtn, v10, 0LL);
  partyBtn = this->fields.combineBtn;
  if ( !partyBtn )
    goto LABEL_41;
  v11 = kind == 5 ? 3 : v6;
  MainMenuBarButton__SetMode(partyBtn, v11, 0LL);
  partyBtn = this->fields.shopBtn;
  if ( !partyBtn )
    goto LABEL_41;
  v12 = kind == 6 ? 3 : v6;
  MainMenuBarButton__SetMode(partyBtn, v12, 0LL);
  partyBtn = this->fields.friendBtn;
  if ( !partyBtn )
    goto LABEL_41;
  v13 = kind == 7 ? 3 : v6;
  MainMenuBarButton__SetMode(partyBtn, v13, 0LL);
  partyBtn = this->fields.myroomBtn;
  if ( !partyBtn )
    goto LABEL_41;
  v14 = kind == 8 ? 3 : v6;
  MainMenuBarButton__SetMode(partyBtn, v14, 0LL);
  partyBtn = this->fields.terminalBtn;
  if ( !partyBtn )
    goto LABEL_41;
  if ( kind == 1 )
    v15 = 3;
  else
    v15 = v6;
  MainMenuBarButton__SetMode(partyBtn, v15, 0LL);
  if ( kind == 8 && isActive )
  {
    MainMenuBarBase__CheckLatestScenarioButtonEnable(this, *(const MethodInfo **)&kind);
    goto LABEL_40;
  }
  partyBtn = this->fields.latestScenarioBtn;
  if ( !partyBtn )
LABEL_41:
    sub_1B8880C(partyBtn, *(_QWORD *)&kind);
  if ( kind == 9 )
    v18 = 3;
  else
    v18 = v6;
  MainMenuBarButton__SetMode(partyBtn, v18, 0LL);
LABEL_40:
  this->fields.selectedType = -1;
  this->fields.selectedKind = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.selectedKind, 0, v16, v17);
  this->fields.selectedObject = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.selectedObject, 0, v19, v20);
  this->fields.fadeType = 1;
}


void __fastcall MainMenuBarBase__SetButtonKind(MainMenuBarBase_o *this, int32_t kind, const MethodInfo *method)
{
  this->fields.kind = kind;
}


void __fastcall MainMenuBarBase__SetDispBtnAct(
        MainMenuBarBase_o *this,
        int32_t kind,
        System_Action_o *act,
        const MethodInfo *method)
{
  struct System_Action_array *mDispBtnActList; // x8
  Il2CppClass **v5; // x0

  mDispBtnActList = this->fields.mDispBtnActList;
  if ( !mDispBtnActList )
    sub_1B8880C(this, kind);
  if ( mDispBtnActList->max_length <= kind )
    sub_1B88814(this, kind);
  v5 = &mDispBtnActList->obj.klass + kind;
  v5[4] = (Il2CppClass *)act;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 4), (int32_t)act, (int32_t)act, (int32_t)method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBarBase__SetDispBtnColliderEnable(
        MainMenuBarBase_o *this,
        bool is_enable,
        int32_t kind,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *mDispBtnList; // x0
  int32_t v8; // w22

  if ( (byte_4A5A8CE & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1B885B0(&Method_System_Collections_Generic_List_MainMenuBarButton__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MainMenuBarButton__get_Item__);
    byte_4A5A8CE = 1;
  }
  mDispBtnList = (System_Collections_Generic_List_object__o *)this->fields.mDispBtnList;
  if ( !mDispBtnList )
LABEL_10:
    sub_1B8880C(mDispBtnList, is_enable);
  v8 = 0;
  while ( v8 < mDispBtnList->fields._size )
  {
    mDispBtnList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  mDispBtnList,
                                                                  v8,
                                                                  (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_MainMenuBarButton__get_Item__);
    if ( mDispBtnList )
    {
      mDispBtnList = (System_Collections_Generic_List_object__o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)mDispBtnList,
                                                                    0LL);
      if ( mDispBtnList )
      {
        mDispBtnList = (System_Collections_Generic_List_object__o *)UnityEngine_GameObject__GetComponent_object_(
                                                                      (UnityEngine_GameObject_o *)mDispBtnList,
                                                                      (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
        if ( mDispBtnList )
        {
          UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)mDispBtnList, kind == v8 && is_enable, 0LL);
          mDispBtnList = (System_Collections_Generic_List_object__o *)this->fields.mDispBtnList;
          ++v8;
          if ( mDispBtnList )
            continue;
        }
      }
    }
    goto LABEL_10;
  }
}


void __fastcall MainMenuBarBase__SetMenuActive(MainMenuBarBase_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v5);
  UnityEngine_GameObject__SetActive(gameObject, isActive, 0LL);
}


void __fastcall MainMenuBarBase__SetMenuBtnAct(MainMenuBarBase_o *this, System_Action_o *act, const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.mMenuBtnAct = act;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mMenuBtnAct, (int32_t)act, (int32_t)method, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBarBase__SetMenuBtnColliderEnable(
        MainMenuBarBase_o *this,
        bool isEnable,
        bool isGray,
        const MethodInfo *method)
{
  UnityEngine_Component_o *menuStateBtn; // x0
  __int64 v8; // x1

  if ( (byte_4A5A8CD & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    byte_4A5A8CD = 1;
  }
  menuStateBtn = (UnityEngine_Component_o *)this->fields.menuStateBtn;
  if ( !menuStateBtn )
    goto LABEL_18;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(menuStateBtn, 0LL);
  if ( !menuStateBtn )
    goto LABEL_18;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)menuStateBtn,
                                              (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !menuStateBtn )
    goto LABEL_18;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)menuStateBtn, isEnable, 0LL);
  menuStateBtn = (UnityEngine_Component_o *)this->fields.backCloseSprite;
  if ( !menuStateBtn )
    goto LABEL_18;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(menuStateBtn, 0LL);
  if ( !menuStateBtn )
    goto LABEL_18;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)menuStateBtn,
                                              (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !menuStateBtn )
    goto LABEL_18;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)menuStateBtn, isEnable, 0LL);
  if ( !isEnable )
  {
    menuStateBtn = (UnityEngine_Component_o *)this->fields.mOutSide;
    if ( !menuStateBtn )
      goto LABEL_18;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)menuStateBtn, 0, 0LL);
  }
  menuStateBtn = (UnityEngine_Component_o *)this->fields.menuStateBtn;
  if ( !menuStateBtn
    || (!isGray ? (v8 = 0LL) : (v8 = 3LL),
        ((void (__fastcall *)(UnityEngine_Component_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))menuStateBtn->klass[1]._1.implementedInterfaces)(
          menuStateBtn,
          v8,
          1LL,
          menuStateBtn->klass[1]._1.interfaceOffsets),
        (menuStateBtn = (UnityEngine_Component_o *)this->fields.menuFrameBnt) == 0LL) )
  {
LABEL_18:
    sub_1B8880C(menuStateBtn, isEnable);
  }
  UIButtonColor__set_state((UIButtonColor_o *)menuStateBtn, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBarBase__SetOutSideColliderEnable(
        MainMenuBarBase_o *this,
        bool is_enable,
        const MethodInfo *method)
{
  UnityEngine_Component_o *menuStateBtn; // x0

  if ( (byte_4A5A8C0 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    byte_4A5A8C0 = 1;
  }
  menuStateBtn = (UnityEngine_Component_o *)this->fields.menuStateBtn;
  if ( !menuStateBtn )
    goto LABEL_10;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(menuStateBtn, 0LL);
  if ( !menuStateBtn )
    goto LABEL_10;
  menuStateBtn = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)menuStateBtn,
                                              (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !menuStateBtn )
    goto LABEL_10;
  if ( UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)menuStateBtn, 0LL) )
  {
    menuStateBtn = (UnityEngine_Component_o *)this->fields.mOutSide;
    if ( menuStateBtn )
    {
      UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)menuStateBtn, is_enable, 0LL);
      return;
    }
LABEL_10:
    sub_1B8880C(menuStateBtn, is_enable);
  }
}


void __fastcall MainMenuBarBase__SetSceneChangeFadeType(
        MainMenuBarBase_o *this,
        int32_t fadeType,
        const MethodInfo *method)
{
  this->fields.fadeType = fadeType;
}


System_Collections_IEnumerator_o *__fastcall MainMenuBarBase__SetTerminalQuestListClose(
        MainMenuBarBase_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5A8C3 & 1) == 0 )
  {
    sub_1B885B0(&MainMenuBarBase__SetTerminalQuestListClose_d__108_TypeInfo);
    byte_4A5A8C3 = 1;
  }
  v5 = sub_1B887FC(MainMenuBarBase__SetTerminalQuestListClose_d__108_TypeInfo);
  MainMenuBarBase__SetTerminalQuestListClose_d__108___ctor(
    (MainMenuBarBase__SetTerminalQuestListClose_d__108_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 40) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)callback, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall MainMenuBarBase__Start(MainMenuBarBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MainMenuBarBase__BackActive(this, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MainMenuBarBase__SwitchMenu(
        MainMenuBarBase_o *this,
        bool is_open,
        bool is_play_se,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *menuComp; // x0
  int v8; // s0
  int v9; // s2
  int v10; // s9
  int v11; // s8
  UnityEngine_GameObject_o *gameObject; // x22
  const MethodInfo *v13; // x2
  struct System_Collections_Hashtable_o *table; // x23
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  struct System_Collections_Hashtable_o *v18; // x23
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x4
  struct System_Collections_Hashtable_o *v22; // x23
  struct System_Collections_Hashtable_o *v23; // x23
  struct System_Collections_Hashtable_o *v24; // x23
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x4
  System_Collections_Hashtable_o *v28; // x23
  const MethodInfo *v29; // x1
  const MethodInfo *v30; // x1
  const MethodInfo *v31; // x1
  const MethodInfo *v32; // x1
  float v33; // s10
  struct System_Collections_Hashtable_o *v34; // x23
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  struct System_Collections_Hashtable_o *v38; // x23
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  struct System_Collections_Hashtable_o *v42; // x23
  struct System_Collections_Hashtable_o *v43; // x23
  struct System_Collections_Hashtable_o *v44; // x23
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  System_Collections_Hashtable_o *v48; // x21
  _QWORD *v49; // x0
  System_Reflection_MethodBase_o *v50; // x0
  int32_t v51; // w1
  int v52; // [xsp+0h] [xbp-60h] BYREF
  int v53; // [xsp+4h] [xbp-5Ch]
  int v54; // [xsp+8h] [xbp-58h]
  int v55; // [xsp+18h] [xbp-48h] BYREF
  char v56[4]; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4A5A8B8 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    sub_1B885B0(&Method_MainMenuBarBase_SwitchMenu__);
    sub_1B885B0(&float_TypeInfo);
    sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    sub_1B885B0(&StringLiteral_18755/*"easetype"*/);
    sub_1B885B0(&StringLiteral_22260/*"onMoveComplete"*/);
    sub_1B885B0(&StringLiteral_18022/*"closeMenuStateImg"*/);
    sub_1B885B0(&StringLiteral_18740/*"easeInQuad"*/);
    sub_1B885B0(&StringLiteral_23929/*"time"*/);
    sub_1B885B0(&StringLiteral_22275/*"oncompletetarget"*/);
    sub_1B885B0(&StringLiteral_22280/*"onstarttarget"*/);
    sub_1B885B0(&StringLiteral_22573/*"position"*/);
    sub_1B885B0(&StringLiteral_20798/*"isLocal"*/);
    sub_1B885B0(&StringLiteral_22278/*"onstart"*/);
    sub_1B885B0(&StringLiteral_22273/*"oncomplete"*/);
    sub_1B885B0(&StringLiteral_22318/*"openMenuStateImg"*/);
    sub_1B885B0(&iTween_TypeInfo);
    byte_4A5A8B8 = 1;
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
    menuComp = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(menuComp, 0LL);
    if ( !menuComp )
      goto LABEL_47;
    *(UnityEngine_Vector3_o *)&v8 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)menuComp, 0LL);
    menuComp = this->fields.menuComp;
    if ( !menuComp )
      goto LABEL_47;
    v10 = v8;
    v11 = v9;
    gameObject = UnityEngine_GameObject__get_gameObject(menuComp, 0LL);
    MainMenuBarBase__SetOutSideColliderEnable(this, 1, v13);
    menuComp = (UnityEngine_GameObject_o *)this->fields.mMenuNoticeNumber;
    if ( !menuComp )
      goto LABEL_47;
    NoticeNumberComponent__SetDisp((NoticeNumberComponent_o *)menuComp, !is_open, 0LL);
    if ( is_open )
    {
      menuComp = (UnityEngine_GameObject_o *)this->fields.table;
      if ( menuComp )
      {
        ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppMethodPointer))menuComp->klass[1].vtable._1_Finalize.method)(
          menuComp,
          menuComp->klass[1].vtable._2_GetHashCode.methodPtr);
        table = this->fields.table;
        v56[0] = 1;
        menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v56, v15, v16, v17);
        if ( table )
        {
          ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))table->klass->vtable._23_Add.method)(
            table,
            StringLiteral_20798/*"isLocal"*/,
            menuComp,
            table->klass->vtable._24_Clear.methodPtr);
          v18 = this->fields.table;
          v52 = v10;
          v54 = v11;
          v53 = -1019674624;
          menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v52, v19, v20, v21);
          if ( v18 )
          {
            ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v18->klass->vtable._23_Add.method)(
              v18,
              StringLiteral_22573/*"position"*/,
              menuComp,
              v18->klass->vtable._24_Clear.methodPtr);
            menuComp = (UnityEngine_GameObject_o *)this->fields.table;
            if ( menuComp )
            {
              ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
                menuComp,
                StringLiteral_22278/*"onstart"*/,
                StringLiteral_22318/*"openMenuStateImg"*/,
                menuComp->klass[1].vtable._1_Finalize.methodPtr);
              v22 = this->fields.table;
              menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
              if ( v22 )
              {
                ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v22->klass->vtable._23_Add.method)(
                  v22,
                  StringLiteral_22280/*"onstarttarget"*/,
                  menuComp,
                  v22->klass->vtable._24_Clear.methodPtr);
                menuComp = (UnityEngine_GameObject_o *)this->fields.table;
                if ( menuComp )
                {
                  ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
                    menuComp,
                    StringLiteral_22273/*"oncomplete"*/,
                    StringLiteral_22260/*"onMoveComplete"*/,
                    menuComp->klass[1].vtable._1_Finalize.methodPtr);
                  v23 = this->fields.table;
                  menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                  if ( v23 )
                  {
                    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v23->klass->vtable._23_Add.method)(
                      v23,
                      StringLiteral_22275/*"oncompletetarget"*/,
                      menuComp,
                      v23->klass->vtable._24_Clear.methodPtr);
                    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
                    if ( menuComp )
                    {
                      ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
                        menuComp,
                        StringLiteral_18755/*"easetype"*/,
                        StringLiteral_18740/*"easeInQuad"*/,
                        menuComp->klass[1].vtable._1_Finalize.methodPtr);
                      v24 = this->fields.table;
                      v55 = 1024148374;
                      menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v55, v25, v26, v27);
                      if ( v24 )
                      {
                        ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v24->klass->vtable._23_Add.method)(
                          v24,
                          StringLiteral_23929/*"time"*/,
                          menuComp,
                          v24->klass->vtable._24_Clear.methodPtr);
                        v28 = this->fields.table;
                        if ( !iTween_TypeInfo->_2.cctor_finished )
                          j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
                        iTween__MoveTo_60245364(gameObject, v28, 0LL);
                        MainMenuBarBase__ResetShopNotice(this, v29);
                        MainMenuBarBase__ResetSummonNoticeDraw(this, v30);
                        MainMenuBarBase__CheckTerminalButtonEnable(this, v31);
                        MainMenuBarBase__CheckLatestScenarioButtonEnable(this, v32);
                        if ( !is_play_se )
                          return;
LABEL_40:
                        v49 = Method_MainMenuBarBase_SwitchMenu__;
                        if ( (*((_BYTE *)Method_MainMenuBarBase_SwitchMenu__ + 83) & 2) != 0 )
                          v49 = (_QWORD *)sub_1B885C8(Method_MainMenuBarBase_SwitchMenu__);
                        v50 = (System_Reflection_MethodBase_o *)sub_1B88594(v49, v49[4]);
                        if ( is_open )
                          v51 = 9;
                        else
                          v51 = 10;
                        OverwriteAssetSoundName__PlaySystemSe(v50, v51, 0LL);
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
      sub_1B8880C(menuComp, is_open);
    }
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( this->fields.mIsCloseHideMode )
      v33 = -420.0;
    else
      v33 = -328.0;
    if ( !menuComp )
      goto LABEL_47;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppMethodPointer))menuComp->klass[1].vtable._1_Finalize.method)(
      menuComp,
      menuComp->klass[1].vtable._2_GetHashCode.methodPtr);
    v34 = this->fields.table;
    v56[0] = 1;
    menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(bool_TypeInfo, v56, v35, v36, v37);
    if ( !v34 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v34->klass->vtable._23_Add.method)(
      v34,
      StringLiteral_20798/*"isLocal"*/,
      menuComp,
      v34->klass->vtable._24_Clear.methodPtr);
    v38 = this->fields.table;
    v52 = v10;
    v53 = LODWORD(v33);
    v54 = v11;
    menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(UnityEngine_Vector3_TypeInfo, &v52, v39, v40, v41);
    if ( !v38 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v38->klass->vtable._23_Add.method)(
      v38,
      StringLiteral_22573/*"position"*/,
      menuComp,
      v38->klass->vtable._24_Clear.methodPtr);
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( !menuComp )
      goto LABEL_47;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
      menuComp,
      StringLiteral_22278/*"onstart"*/,
      StringLiteral_18022/*"closeMenuStateImg"*/,
      menuComp->klass[1].vtable._1_Finalize.methodPtr);
    v42 = this->fields.table;
    menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v42 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v42->klass->vtable._23_Add.method)(
      v42,
      StringLiteral_22280/*"onstarttarget"*/,
      menuComp,
      v42->klass->vtable._24_Clear.methodPtr);
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( !menuComp )
      goto LABEL_47;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
      menuComp,
      StringLiteral_22273/*"oncomplete"*/,
      StringLiteral_22260/*"onMoveComplete"*/,
      menuComp->klass[1].vtable._1_Finalize.methodPtr);
    v43 = this->fields.table;
    menuComp = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !v43 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v43->klass->vtable._23_Add.method)(
      v43,
      StringLiteral_22275/*"oncompletetarget"*/,
      menuComp,
      v43->klass->vtable._24_Clear.methodPtr);
    menuComp = (UnityEngine_GameObject_o *)this->fields.table;
    if ( !menuComp )
      goto LABEL_47;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppMethodPointer))menuComp->klass[1].vtable._0_Equals.method)(
      menuComp,
      StringLiteral_18755/*"easetype"*/,
      StringLiteral_18740/*"easeInQuad"*/,
      menuComp->klass[1].vtable._1_Finalize.methodPtr);
    v44 = this->fields.table;
    v55 = 1024148374;
    menuComp = (UnityEngine_GameObject_o *)j_il2cpp_value_box_0(float_TypeInfo, &v55, v45, v46, v47);
    if ( !v44 )
      goto LABEL_47;
    ((void (__fastcall *)(struct System_Collections_Hashtable_o *, __int64, UnityEngine_GameObject_o *, Il2CppMethodPointer))v44->klass->vtable._23_Add.method)(
      v44,
      StringLiteral_23929/*"time"*/,
      menuComp,
      v44->klass->vtable._24_Clear.methodPtr);
    v48 = this->fields.table;
    if ( !iTween_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(iTween_TypeInfo);
    iTween__MoveTo_60245364(gameObject, v48, 0LL);
    if ( is_play_se )
      goto LABEL_40;
  }
}


void __fastcall MainMenuBarBase__UpdateNoticeNumber(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *mSummonNoticeNumber; // x20
  __int64 v4; // x1
  __int64 v5; // x0
  __int64 v6; // x0
  int64_t UserId; // x0
  Il2CppObject *MasterData_object; // x20
  int v9; // w20
  __int64 v10; // x0
  __int64 v11; // x0
  UnityEngine_Object_o *mFriendNoticeNumber; // x20
  UnityEngine_Object_o *mMenuNoticeNumber; // x20

  if ( (byte_4A5A8B2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_GachaMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_TblFriendMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_TblUserMaster___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5A8B2 = 1;
  }
  mSummonNoticeNumber = (UnityEngine_Object_o *)this->fields.mSummonNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mSummonNoticeNumber, 0LL, 0LL) )
  {
    v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
      v5 = sub_1BDA48C(v5);
    v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
    if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
      v6 = sub_1BDA48C(v6);
    UserId = **(_QWORD **)(v6 + 184);
    if ( !UserId )
      goto LABEL_37;
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)UserId,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TblUserMaster___);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    UserId = NetworkManager__get_UserId(0LL);
    if ( !MasterData_object )
      goto LABEL_37;
    UserId = (int64_t)TblUserMaster__getUserData((TblUserMaster_o *)MasterData_object, UserId, 0LL);
    if ( !UserId )
      goto LABEL_37;
    v9 = *(_DWORD *)(UserId + 24);
    v10 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1BDA48C(v10);
    v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1BDA48C(v11);
    UserId = **(_QWORD **)(v11 + 184);
    if ( !UserId )
      goto LABEL_37;
    UserId = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)UserId,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_GachaMaster___);
    if ( !UserId )
      goto LABEL_37;
    UserId = (int64_t)GachaMaster__getFriendPointGachaEntity((GachaMaster_o *)UserId, 0LL);
    if ( !UserId )
      goto LABEL_37;
    UserId = GachaEntity__getPrice((GachaEntity_o *)UserId, 0LL);
    if ( !this->fields.mSummonNoticeNumber )
      goto LABEL_37;
    NoticeNumberComponent__SetNumber(this->fields.mSummonNoticeNumber, v9 / (int)UserId, 0LL);
  }
  mFriendNoticeNumber = (UnityEngine_Object_o *)this->fields.mFriendNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mFriendNoticeNumber, 0LL, 0LL) )
  {
    UserId = (int64_t)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !UserId )
      goto LABEL_37;
    UserId = (int64_t)DataManager__GetMasterData_object_(
                        (DataManager_o *)UserId,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_TblFriendMaster___);
    if ( !UserId )
      goto LABEL_37;
    UserId = TblFriendMaster__GetSum((TblFriendMaster_o *)UserId, 2, 0LL);
    if ( !this->fields.mFriendNoticeNumber )
      goto LABEL_37;
    NoticeNumberComponent__SetNumber(this->fields.mFriendNoticeNumber, UserId, 0LL);
  }
  mMenuNoticeNumber = (UnityEngine_Object_o *)this->fields.mMenuNoticeNumber;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(mMenuNoticeNumber, 0LL, 0LL) )
  {
    UserId = (int64_t)this->fields.mMenuNoticeNumber;
    if ( UserId )
    {
      NoticeNumberComponent__SetNumber((NoticeNumberComponent_o *)UserId, 0, 0LL);
      return;
    }
LABEL_37:
    sub_1B8880C(UserId, v4);
  }
}


void __fastcall MainMenuBarBase___ResetShopNoticeDraw_b__98_0(MainMenuBarBase_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  MainMenuBarBase_o *v5; // x19
  struct ShopNotice_o *shopNotice; // x8
  UISprite_o *mExchangeServantItemSp; // x20
  Il2CppObject *v8; // x0
  System_String_o *v9; // x21
  int32_t ExchangeServantEventId_k__BackingField; // [xsp+Ch] [xbp-24h] BYREF

  v5 = this;
  if ( (byte_4A5A8D2 & 1) == 0 )
  {
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&int_TypeInfo);
    this = (MainMenuBarBase_o *)sub_1B885B0(&StringLiteral_20177/*"icon_servant_exchange_available_{0}"*/);
    byte_4A5A8D2 = 1;
  }
  shopNotice = v5->fields.shopNotice;
  if ( !shopNotice )
    goto LABEL_11;
  mExchangeServantItemSp = v5->fields.mExchangeServantItemSp;
  ExchangeServantEventId_k__BackingField = shopNotice->fields._ExchangeServantEventId_k__BackingField;
  v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &ExchangeServantEventId_k__BackingField, v2, v3, v4);
  v9 = System_String__Format((System_String_o *)StringLiteral_20177/*"icon_servant_exchange_available_{0}"*/, v8, 0LL);
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  if ( !AtlasManager__SetEventUI(mExchangeServantItemSp, v9, 0LL) )
  {
    this = (MainMenuBarBase_o *)v5->fields.mExchangeServantItemSp;
    if ( this )
    {
      UISprite__set_atlas((UISprite_o *)this, v5->fields.mExchangeServantItemDefaultAtlas, 0LL);
      this = (MainMenuBarBase_o *)v5->fields.mExchangeServantItemSp;
      if ( this )
      {
        UISprite__set_spriteName((UISprite_o *)this, v5->fields.mExchangeServantItemDefaultSpriteName, 0LL);
        return;
      }
    }
LABEL_11:
    sub_1B8880C(this, method);
  }
}


void __fastcall MainMenuBarBase__closeMenuStateImg(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UIButton_o *menuStateBtn; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4A5A8BF & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20360/*"img_menu_menu"*/);
    byte_4A5A8BF = 1;
  }
  menuStateBtn = this->fields.menuStateBtn;
  if ( !menuStateBtn
    || (UIButton__set_normalSprite(menuStateBtn, (System_String_o *)StringLiteral_20360/*"img_menu_menu"*/, 0LL),
        (menuStateBtn = (UIButton_o *)this->fields.menuStateImg) == 0LL)
    || ((*(void (__fastcall **)(UIButton_o *, _QWORD))&menuStateBtn->klass[1]._2.field_count)(
          menuStateBtn,
          *(_QWORD *)&menuStateBtn->klass[1]._2.interfaces_count),
        (menuStateBtn = this->fields.menuStateBtn) == 0LL) )
  {
    sub_1B8880C(menuStateBtn, method);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)menuStateBtn, 0LL);
  AndroidBackKeyManager__RemoveBackBtn(gameObject, 0LL);
}


bool __fastcall MainMenuBarBase__get_IsCloseHideMode(MainMenuBarBase_o *this, const MethodInfo *method)
{
  return this->fields.mIsCloseHideMode;
}


bool __fastcall MainMenuBarBase__get_IsEnableOutSideCollider(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UnityEngine_Collider_o *mOutSide; // x0

  mOutSide = (UnityEngine_Collider_o *)this->fields.mOutSide;
  if ( !mOutSide )
    sub_1B8880C(0LL, method);
  return UnityEngine_Collider__get_enabled(mOutSide, 0LL);
}


bool __fastcall MainMenuBarBase__get_IsMenuBarActive(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v3; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B8880C(0LL, v3);
  return UnityEngine_GameObject__get_activeSelf(gameObject, 0LL);
}


void __fastcall MainMenuBarBase__onMoveComplete(MainMenuBarBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  bool isOpen; // w1
  __int64 v5; // x1
  UnityEngine_Component_o *mNewItemSp; // x0
  const MethodInfo *v7; // x2

  isOpen = this->fields.isOpen;
  this->fields.isSwitchMenuMoving = 0;
  MainMenuBarBase__SetOutSideColliderEnable(this, isOpen, v2);
  if ( !this->fields.isOpen )
  {
    mNewItemSp = (UnityEngine_Component_o *)this->fields.mNewItemSp;
    if ( !mNewItemSp
      || (mNewItemSp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mNewItemSp, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mNewItemSp, 0, 0LL),
          (mNewItemSp = (UnityEngine_Component_o *)this->fields.mLimitedItemIconRoot) == 0LL)
      || (mNewItemSp = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                                    (UnityEngine_GameObject_o *)mNewItemSp,
                                                    0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mNewItemSp, 0, 0LL),
          (mNewItemSp = (UnityEngine_Component_o *)this->fields.summonCampainObject) == 0LL) )
    {
      sub_1B8880C(mNewItemSp, v5);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mNewItemSp, 0, 0LL);
    if ( !this->fields.isOpen )
      MainMenuBarBase__BackActive(this, 0, v7);
  }
}


void __fastcall MainMenuBarBase__openMenuStateImg(MainMenuBarBase_o *this, const MethodInfo *method)
{
  UIButton_o *menuStateBtn; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4A5A8BE & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_20359/*"img_menu_close"*/);
    byte_4A5A8BE = 1;
  }
  menuStateBtn = this->fields.menuStateBtn;
  if ( !menuStateBtn
    || (UIButton__set_normalSprite(menuStateBtn, (System_String_o *)StringLiteral_20359/*"img_menu_close"*/, 0LL),
        (menuStateBtn = (UIButton_o *)this->fields.menuStateImg) == 0LL)
    || ((*(void (__fastcall **)(UIButton_o *, _QWORD))&menuStateBtn->klass[1]._2.field_count)(
          menuStateBtn,
          *(_QWORD *)&menuStateBtn->klass[1]._2.interfaces_count),
        (menuStateBtn = this->fields.menuStateBtn) == 0LL) )
  {
    sub_1B8880C(menuStateBtn, method);
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)menuStateBtn, 0LL);
  AndroidBackKeyManager__AddBackBtn(gameObject, 0LL);
}


void __fastcall MainMenuBarBase__set_IsCloseHideMode(MainMenuBarBase_o *this, bool value, const MethodInfo *method)
{
  this->fields.mIsCloseHideMode = value;
  if ( value )
    GameObjectExtensions__SetLocalPositionY(this->fields.menuComp, -420.0, 0LL);
}


void __fastcall MainMenuBarBase__SetTerminalQuestListClose_d__108___ctor(
        MainMenuBarBase__SetTerminalQuestListClose_d__108_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MainMenuBarBase__SetTerminalQuestListClose_d__108__MoveNext(
        MainMenuBarBase__SetTerminalQuestListClose_d__108_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  MainMenuBarBase_o *_4__this; // x20
  TerminalPramsManager_c *v5; // x0
  TitleInfoControl_o *v6; // x0
  ExUITexture_c *klass; // x8
  ExUITexture_c *v8; // x8
  System_Func_bool__o *v9; // x21
  UnityEngine_WaitUntil_o *v10; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v12; // w2
  int32_t v13; // w3
  bool result; // w0
  System_Action_o *callback; // x0

  if ( (byte_4A5A8D9 & 1) == 0 )
  {
    sub_1B885B0(&System_Func_bool__TypeInfo);
    sub_1B885B0(&Method_MainMenuBarBase__SetTerminalQuestListClose_b__108_0__);
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    sub_1B885B0(&UnityEngine_WaitUntil_TypeInfo);
    byte_4A5A8D9 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    callback = this->fields.callback;
    this->fields.__1__state = -1;
    ActionExtensions__Call(callback, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  _4__this = this->fields.__4__this;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A588C5 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588C5 = 1;
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
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
  }
  v6 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v6 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v6->fields.mEventBgTexture->klass;
  if ( !klass )
    goto LABEL_29;
  v6 = *(TitleInfoControl_o **)&klass->_2.instance_size;
  if ( !v6 )
    goto LABEL_29;
  TitleInfoControl__SetTouchEnable(v6, 0, 0LL);
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
  }
  v6 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v6 = (TitleInfoControl_o *)TerminalSceneComponent_TypeInfo;
  }
  v8 = v6->fields.mEventBgTexture->klass;
  if ( !v8
    || (v6 = *(TitleInfoControl_o **)&v8->_2.static_fields_size) == 0LL
    || (ScrTerminalListTop__cbfTitleInfoBtnBack_Click((ScrTerminalListTop_o *)v6, 0, 0LL), !_4__this) )
  {
LABEL_29:
    sub_1B8880C(v6, method);
  }
  MainMenuBarBase__CloseMenu(_4__this, 0, 0LL);
  v9 = (System_Func_bool__o *)sub_1B887FC(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(
    v9,
    (Il2CppObject *)_4__this,
    Method_MainMenuBarBase__SetTerminalQuestListClose_b__108_0__,
    0LL);
  v10 = (UnityEngine_WaitUntil_o *)sub_1B887FC(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v10, v9, 0LL);
  this->fields.__2__current = (Il2CppObject *)v10;
  p__2__current = &this->fields.__2__current;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)v10, v12, v13);
  result = 1;
  *((_DWORD *)p__2__current - 2) = 1;
  return result;
}


Il2CppObject *__fastcall MainMenuBarBase__SetTerminalQuestListClose_d__108__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MainMenuBarBase__SetTerminalQuestListClose_d__108_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MainMenuBarBase__SetTerminalQuestListClose_d__108__System_Collections_IEnumerator_Reset(
        MainMenuBarBase__SetTerminalQuestListClose_d__108_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_MainMenuBarBase__SetTerminalQuestListClose_d__108_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall MainMenuBarBase__SetTerminalQuestListClose_d__108__System_Collections_IEnumerator_get_Current(
        MainMenuBarBase__SetTerminalQuestListClose_d__108_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MainMenuBarBase__SetTerminalQuestListClose_d__108__System_IDisposable_Dispose(
        MainMenuBarBase__SetTerminalQuestListClose_d__108_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MainMenuBarBase___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5A8D7 & 1) == 0 )
  {
    sub_1B885B0(&MainMenuBarBase___c_TypeInfo);
    byte_4A5A8D7 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(MainMenuBarBase___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  MainMenuBarBase___c_TypeInfo->static_fields->__9 = (struct MainMenuBarBase___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)MainMenuBarBase___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void __fastcall MainMenuBarBase___c___ctor(MainMenuBarBase___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MainMenuBarBase___c___OnClickTerminal_b__107_0(MainMenuBarBase___c_o *this, const MethodInfo *method)
{
  TerminalPramsManager_c *v2; // x0
  ScrTerminalListTop_o *v3; // x0
  QuestRewardTokenAction_c *klass; // x8
  QuestRewardTokenAction_c *v5; // x8

  if ( (byte_4A5A8D8 & 1) == 0 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5A8D8 = 1;
  }
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4A588C5 )
  {
    sub_1B885B0(&TerminalPramsManager_TypeInfo);
    byte_4A588C5 = 1;
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
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
  }
  v3 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v3 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  klass = v3->fields.boardGameTokenAction->klass;
  if ( !klass )
    goto LABEL_24;
  v3 = *(ScrTerminalListTop_o **)&klass->_2.static_fields_size;
  if ( !v3 )
    goto LABEL_24;
  ScrTerminalListTop__SetTopLastIndexNextBoard(v3, 0LL);
  if ( !byte_4A5629D )
  {
    sub_1B885B0(&TerminalSceneComponent_TypeInfo);
    byte_4A5629D = 1;
  }
  v3 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    v3 = (ScrTerminalListTop_o *)TerminalSceneComponent_TypeInfo;
  }
  v5 = v3->fields.boardGameTokenAction->klass;
  if ( !v5 || (v3 = *(ScrTerminalListTop_o **)&v5->_2.static_fields_size) == 0LL )
LABEL_24:
    sub_1B8880C(v3, method);
  ScrTerminalListTop__cbfTitleInfoBtnBack_Click(v3, 0, 0LL);
}


void __fastcall MainMenuBarBase___c__DisplayClass125_0___ctor(
        MainMenuBarBase___c__DisplayClass125_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MainMenuBarBase___c__DisplayClass125_0___FrameInOut_b__0(
        MainMenuBarBase___c__DisplayClass125_0_o *this,
        const MethodInfo *method)
{
  struct MoveObject_o *mo; // x8

  mo = this->fields.mo;
  if ( !mo )
    sub_1B8880C(this, method);
  GameObjectExtensions__SetLocalPositionY(this->fields.tgt_obj, mo->fields.mNow.fields.y, 0LL);
}


void __fastcall MainMenuBarBase___c__DisplayClass125_0___FrameInOut_b__1(
        MainMenuBarBase___c__DisplayClass125_0_o *this,
        const MethodInfo *method)
{
  GameObjectExtensions__SetLocalPositionY(this->fields.tgt_obj, this->fields.tgt_y, 0LL);
}