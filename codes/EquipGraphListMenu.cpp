void __fastcall EquipGraphListMenu___ctor(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B159A1 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseMenu_TypeInfo, method, v2);
    byte_4B159A1 = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo, method);
  BaseMenu___ctor((BaseMenu_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu__Callback(
        EquipGraphListMenu_o *this,
        int32_t result,
        int32_t n,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x20
  struct EquipGraphListMenu_CallbackFunc_o *callbackFunc; // x22
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  EquipGraphListViewItem_o *Item; // x21

  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
  {
    if ( (n & 0x80000000) != 0 )
    {
      Item = 0LL;
    }
    else
    {
      servantEquipListViewManager = this->fields.servantEquipListViewManager;
      if ( !servantEquipListViewManager )
        sub_1BCAA3C(0LL, *(_QWORD *)&result);
      Item = EquipGraphListViewManager__GetItem(servantEquipListViewManager, n, *(const MethodInfo **)&n);
    }
    p_callbackFunc->klass = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL, *(int64_t *)&n, (int32_t)method, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, EquipGraphListViewItem_o *, _QWORD))callbackFunc->fields.m_target)(
      callbackFunc->fields.original_method_info,
      (unsigned int)result,
      Item,
      *(_QWORD *)&callbackFunc->fields.extra_arg);
  }
}


void __fastcall EquipGraphListMenu__Close(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EquipGraphListMenu__Close_39174872(this, 0LL, v2);
}


void __fastcall EquipGraphListMenu__Close_39174872(
        EquipGraphListMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t modeKind; // w1
  const MethodInfo *v13; // x3
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  System_Action_o *v17; // x20

  if ( (byte_4B15993 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_EquipGraphListMenu_EndClose__, v10, v11);
    byte_4B15993 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  modeKind = this->fields.modeKind;
  this->fields.state = 4;
  EquipGraphListMenu__SetTabKind(this, modeKind, 0, v13);
  v17 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v14, v15, v16);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_EquipGraphListMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v17, 0LL);
}


void __fastcall EquipGraphListMenu__Decide(EquipGraphListMenu_o *this, const MethodInfo *method)
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
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  __int64 selectNum; // x1
  const MethodInfo *v23; // x2
  __int64 v24; // x3
  ListViewManager_o *servantEquipListViewManager; // x0
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *dropList; // x21
  EventServantEntity_o *v27; // x20
  bool IsNoPeriod; // w0
  System_String_o *v29; // x21
  Il2CppObject *EndTimeStr; // x0
  System_String_o *v31; // x20
  Il2CppObject *Instance; // x21
  System_String_o *v33; // x22
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  System_Action_o *v37; // x23
  EquipGraphListMenu_RequestCallbackFunc_o *v38; // x20
  const MethodInfo *v39; // x3
  const MethodInfo *v40; // x2

  if ( (byte_4B15995 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EquipGraphListMenu_Decide__, v4, v5);
    sub_1BCA7E0(&Method_EquipGraphListMenu_EndCloseEventServantWarning__, v6, v7);
    sub_1BCA7E0(&Method_EquipGraphListMenu_EndRequestClickDecide__, v8, v9);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v10, v11);
    sub_1BCA7E0(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15);
    sub_1BCA7E0(&StringLiteral_5593/*"EQUIP_GRAPH_EVENT_SERVANT_WARNING_MESSAGE"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_5594/*"EQUIP_GRAPH_EVENT_SERVANT_WARNING_TITLE"*/, v18, v19);
    byte_4B15995 = 1;
  }
  v20 = Method_EquipGraphListMenu_Decide__;
  if ( (*((_BYTE *)Method_EquipGraphListMenu_Decide__ + 83) & 2) != 0 )
    v20 = (_QWORD *)sub_1BCA7F8(Method_EquipGraphListMenu_Decide__);
  v21 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v20, v20[4]);
  OverwriteAssetSoundName__PlaySystemSe(v21, 8, 0LL);
  servantEquipListViewManager = (ListViewManager_o *)this->fields.servantEquipListViewManager;
  this->fields.state = 3;
  if ( !servantEquipListViewManager )
    goto LABEL_23;
  selectNum = (unsigned int)this->fields.selectNum;
  if ( (selectNum & 0x80000000) != 0
    || (dropList = servantEquipListViewManager[1].fields.dropList,
        (servantEquipListViewManager = (ListViewManager_o *)EquipGraphListViewManager__GetItem(
                                                              (EquipGraphListViewManager_o *)servantEquipListViewManager,
                                                              selectNum,
                                                              v23)) == 0LL) )
  {
    if ( !this->fields.isSelectedSvt )
    {
      servantEquipListViewManager = (ListViewManager_o *)this->fields.servantEquipListViewManager;
      if ( !servantEquipListViewManager )
        goto LABEL_23;
      ListViewManager__SetScrollBarValue(servantEquipListViewManager, 0LL);
    }
  }
  else
  {
    if ( !dropList )
      goto LABEL_23;
    servantEquipListViewManager = *(ListViewManager_o **)&dropList->fields._size;
    if ( !servantEquipListViewManager )
      goto LABEL_23;
    servantEquipListViewManager = (ListViewManager_o *)UserServantEntity__getEventServant(
                                                         (UserServantEntity_o *)servantEquipListViewManager,
                                                         0LL);
    if ( !*(_QWORD *)&dropList->fields._size )
      goto LABEL_23;
    v27 = (EventServantEntity_o *)servantEquipListViewManager;
    if ( UserServantEntity__IsEventJoin(*(UserServantEntity_o **)&dropList->fields._size, 0LL) )
    {
      servantEquipListViewManager = *(ListViewManager_o **)&dropList->fields._size;
      if ( !servantEquipListViewManager )
        goto LABEL_23;
      IsNoPeriod = UserServantEntity__IsNoPeriod((UserServantEntity_o *)servantEquipListViewManager, 0LL);
      if ( v27 )
      {
        if ( !IsNoPeriod )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, selectNum);
          v29 = LocalizationManager__Get((System_String_o *)StringLiteral_5593/*"EQUIP_GRAPH_EVENT_SERVANT_WARNING_MESSAGE"*/, 0LL);
          EndTimeStr = (Il2CppObject *)EventServantEntity__getEndTimeStr(v27, 0LL);
          v31 = System_String__Format(v29, EndTimeStr, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v33 = LocalizationManager__Get((System_String_o *)StringLiteral_5594/*"EQUIP_GRAPH_EVENT_SERVANT_WARNING_TITLE"*/, 0LL);
          v37 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v34, v35, v36);
          System_Action___ctor(v37, (Il2CppObject *)this, Method_EquipGraphListMenu_EndCloseEventServantWarning__, 0LL);
          if ( Instance )
          {
            CommonUI__OpenNotificationDialog(
              (CommonUI_o *)Instance,
              v33,
              v31,
              v37,
              -1,
              0,
              0,
              0,
              1,
              0,
              0,
              0,
              0LL,
              0.0,
              0LL);
            return;
          }
LABEL_23:
          sub_1BCAA3C(servantEquipListViewManager, selectNum);
        }
      }
    }
  }
  v38 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                      EquipGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                      selectNum,
                                                      v23,
                                                      v24);
  EquipGraphListMenu_RequestCallbackFunc___ctor(
    v38,
    (Il2CppObject *)this,
    Method_EquipGraphListMenu_EndRequestClickDecide__,
    v39);
  EquipGraphListMenu__StatusRequest(this, v38, v40);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu__EndClickTabChoice(
        EquipGraphListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  const MethodInfo *v6; // x2

  if ( isRequest )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager
      || (EquipGraphListViewManager__ModifyList(servantEquipListViewManager, 0, method),
          (servantEquipListViewManager = this->fields.servantEquipListViewManager) == 0LL) )
    {
      sub_1BCAA3C(servantEquipListViewManager, isRequest);
    }
    EquipGraphListViewManager__SetMode_39175340(servantEquipListViewManager, 3, v6);
  }
  EquipGraphListMenu__SetTabKind(this, 2, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu__EndClickTabLock(
        EquipGraphListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  const MethodInfo *v6; // x2

  if ( isRequest )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager
      || (EquipGraphListViewManager__ModifyList(servantEquipListViewManager, 0, method),
          (servantEquipListViewManager = this->fields.servantEquipListViewManager) == 0LL) )
    {
      sub_1BCAA3C(servantEquipListViewManager, isRequest);
    }
    EquipGraphListViewManager__SetMode_39175340(servantEquipListViewManager, 3, v6);
  }
  EquipGraphListMenu__SetTabKind(this, 1, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu__EndClickTabStatus(
        EquipGraphListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  const MethodInfo *v6; // x2

  if ( isRequest )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager
      || (EquipGraphListViewManager__ModifyList(servantEquipListViewManager, 0, method),
          (servantEquipListViewManager = this->fields.servantEquipListViewManager) == 0LL) )
    {
      sub_1BCAA3C(servantEquipListViewManager, isRequest);
    }
    EquipGraphListViewManager__SetMode_39175340(servantEquipListViewManager, 3, v6);
  }
  EquipGraphListMenu__SetTabKind(this, 0, 0, v3);
}


void __fastcall EquipGraphListMenu__EndClose(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  PartyOrganizationUtility_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  EquipGraphListMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1BCA784(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v10->fields.m_target)(
      v10->fields.original_method_info,
      *(_QWORD *)&v10->fields.extra_arg);
  }
}


void __fastcall EquipGraphListMenu__EndCloseEventServantWarning(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  EquipGraphListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4B15996 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EquipGraphListMenu_EndRequestClickDecide__, method, v2);
    sub_1BCA7E0(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo, v5, v6);
    byte_4B15996 = 1;
  }
  v7 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                     EquipGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                     method,
                                                     v2,
                                                     v3);
  EquipGraphListMenu_RequestCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_EquipGraphListMenu_EndRequestClickDecide__,
    v8);
  EquipGraphListMenu__StatusRequest(this, v7, v9);
}


void __fastcall EquipGraphListMenu__EndCloseList(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall EquipGraphListMenu__EndCloseShowServantEquip(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  struct EquipGraphListViewManager_o *servantEquipListViewManager; // x20
  EquipGraphListViewManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  const MethodInfo *v18; // x2

  if ( (byte_4B1599F & 1) == 0 )
  {
    sub_1BCA7E0(&EquipGraphListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EquipGraphListMenu_OnSelectServantEquip__, v5, v6);
    byte_4B1599F = 1;
  }
  this->fields.state = 2;
  servantEquipListViewManager = this->fields.servantEquipListViewManager;
  v8 = (EquipGraphListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                     EquipGraphListViewManager_CallbackFunc_TypeInfo,
                                                     method,
                                                     v2,
                                                     v3);
  EquipGraphListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_EquipGraphListMenu_OnSelectServantEquip__,
    v9);
  if ( !servantEquipListViewManager )
    sub_1BCAA3C(v10, v11);
  servantEquipListViewManager->fields.callbackFunc = v8;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&servantEquipListViewManager->fields.callbackFunc,
    (int64_t)v8,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  EquipGraphListViewManager__SetMode_39175340(servantEquipListViewManager, 2, v18);
}


void __fastcall EquipGraphListMenu__EndOpen(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  const MethodInfo *v8; // x3
  Il2CppObject *Instance; // x20
  TutorialFlag_ImageId_array *v10; // x0
  TutorialFlag_ImageId_array *v11; // x1
  il2cpp_array_size_t max_length; // w8
  int32_t modeKind; // w1

  if ( (byte_4B15992 & 1) == 0 )
  {
    sub_1BCA7E0(&TutorialFlag_ImageId___TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4, v5);
    sub_1BCA7E0(&TutorialFlag_TypeInfo, v6, v7);
    byte_4B15992 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo, method);
  if ( !TutorialFlag__Get_38402052(110, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = (TutorialFlag_ImageId_array *)sub_1BCA888(TutorialFlag_ImageId___TypeInfo, 2LL);
    if ( !v10 )
      goto LABEL_13;
    max_length = v10->max_length;
    v11 = v10;
    if ( !max_length || (v10->m_Items[1] = 4, max_length == 1) )
      sub_1BCAA44(v10, v10);
    v10->m_Items[2] = 5;
    if ( !Instance )
LABEL_13:
      sub_1BCAA3C(v10, v11);
    CommonUI__OpenTutorialImageDialog((CommonUI_o *)Instance, v10, 110, 0LL, 0LL, 0LL, 0LL);
  }
  modeKind = this->fields.modeKind;
  this->fields.state = 2;
  EquipGraphListMenu__SetTabKind(this, modeKind, 0, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu__EndRequestClickCancel(
        EquipGraphListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  const MethodInfo *v6; // x2

  if ( isRequest )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager
      || (EquipGraphListViewManager__ModifyList(servantEquipListViewManager, 0, method),
          (servantEquipListViewManager = this->fields.servantEquipListViewManager) == 0LL) )
    {
      sub_1BCAA3C(servantEquipListViewManager, isRequest);
    }
    EquipGraphListViewManager__SetMode_39175340(servantEquipListViewManager, 3, v6);
  }
  EquipGraphListMenu__Callback(this, 0, -1, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu__EndRequestClickDecide(
        EquipGraphListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  const MethodInfo *v6; // x2

  if ( isRequest )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager
      || (EquipGraphListViewManager__ModifyList(servantEquipListViewManager, 0, method),
          (servantEquipListViewManager = this->fields.servantEquipListViewManager) == 0LL) )
    {
      sub_1BCAA3C(servantEquipListViewManager, isRequest);
    }
    EquipGraphListViewManager__SetMode_39175340(servantEquipListViewManager, 3, v6);
  }
  EquipGraphListMenu__Callback(this, 1, this->fields.selectNum, v3);
}


void __fastcall EquipGraphListMenu__EndSelectEquip(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  struct EquipGraphListViewManager_o *servantEquipListViewManager; // x20
  EquipGraphListViewManager_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  __int64 v10; // x0
  __int64 v11; // x1
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  const MethodInfo *v18; // x2

  if ( (byte_4B1599D & 1) == 0 )
  {
    sub_1BCA7E0(&EquipGraphListViewManager_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_EquipGraphListMenu_OnSelectServantEquip__, v5, v6);
    byte_4B1599D = 1;
  }
  this->fields.state = 2;
  servantEquipListViewManager = this->fields.servantEquipListViewManager;
  v8 = (EquipGraphListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                     EquipGraphListViewManager_CallbackFunc_TypeInfo,
                                                     method,
                                                     v2,
                                                     v3);
  EquipGraphListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_EquipGraphListMenu_OnSelectServantEquip__,
    v9);
  if ( !servantEquipListViewManager )
    sub_1BCAA3C(v10, v11);
  servantEquipListViewManager->fields.callbackFunc = v8;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&servantEquipListViewManager->fields.callbackFunc,
    (int64_t)v8,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  EquipGraphListViewManager__SetMode_39175340(servantEquipListViewManager, 2, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu__EndShowServantEquip(
        EquipGraphListMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  const MethodInfo *v10; // x2
  Il2CppObject *Instance; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x21

  if ( (byte_4B1599E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_EquipGraphListMenu_EndCloseShowServantEquip__, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7, v8);
    byte_4B1599E = 1;
  }
  if ( isDecide )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager
      || (EquipGraphListViewManager__ModifyList(servantEquipListViewManager, 0, method),
          (servantEquipListViewManager = this->fields.servantEquipListViewManager) == 0LL) )
    {
LABEL_9:
      sub_1BCAA3C(servantEquipListViewManager, isDecide);
    }
    EquipGraphListViewManager__SetMode_39175340(servantEquipListViewManager, 3, v10);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_EquipGraphListMenu_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v15, 0LL);
}


void __fastcall EquipGraphListMenu__EndStatusSync(
        EquipGraphListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_requedstCallback; // x0
  struct EquipGraphListMenu_RequestCallbackFunc_o *v9; // x19
  struct EquipGraphListMenu_RequestCallbackFunc_o *requedstCallback; // t1

  requedstCallback = this->fields.requedstCallback;
  p_requedstCallback = (PartyOrganizationUtility_o *)&this->fields.requedstCallback;
  v9 = requedstCallback;
  if ( requedstCallback )
  {
    p_requedstCallback->klass = 0LL;
    sub_1BCA784(p_requedstCallback, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      1LL,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


int32_t __fastcall EquipGraphListMenu__GetModeKind(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  return this->fields.modeKind;
}


void __fastcall EquipGraphListMenu__Init(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0

  servantEquipListViewManager = this->fields.servantEquipListViewManager;
  if ( !servantEquipListViewManager )
    sub_1BCAA3C(0LL, method);
  EquipGraphListViewManager__DestroyList(servantEquipListViewManager, method);
  this->fields.modeKind = 0;
  this->fields.state = 0;
  this->fields.isInitTab = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall EquipGraphListMenu__OnClickCancel(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  ListViewManager_o *servantEquipListViewManager; // x0
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  EquipGraphListMenu_RequestCallbackFunc_o *v14; // x20
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2

  if ( (byte_4B15997 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EquipGraphListMenu_EndRequestClickCancel__, method, v2);
    sub_1BCA7E0(&Method_EquipGraphListMenu_OnClickCancel__, v4, v5);
    sub_1BCA7E0(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B15997 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !this->fields.isSelectedSvt )
    {
      servantEquipListViewManager = (ListViewManager_o *)this->fields.servantEquipListViewManager;
      if ( !servantEquipListViewManager )
        sub_1BCAA3C(0LL, method);
      ListViewManager__SetScrollBarValue(servantEquipListViewManager, 0LL);
    }
    this->fields.state = 3;
    v9 = Method_EquipGraphListMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_EquipGraphListMenu_OnClickCancel__ + 83) & 2) != 0 )
      v9 = (_QWORD *)sub_1BCA7F8(Method_EquipGraphListMenu_OnClickCancel__);
    v10 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v9, v9[4]);
    OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0LL);
    v14 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                        EquipGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                        v11,
                                                        v12,
                                                        v13);
    EquipGraphListMenu_RequestCallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      Method_EquipGraphListMenu_EndRequestClickCancel__,
      v15);
    EquipGraphListMenu__StatusRequest(this, v14, v16);
  }
}


void __fastcall EquipGraphListMenu__OnClickDecide(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  EquipGraphListViewItem_o *SelectItem; // x0
  const MethodInfo *v5; // x1
  int32_t index; // w8

  if ( this->fields.state == 2 )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager )
      sub_1BCAA3C(0LL, method);
    SelectItem = EquipGraphListViewManager__GetSelectItem(servantEquipListViewManager, method);
    if ( SelectItem )
      index = SelectItem->fields.index;
    else
      index = -1;
    this->fields.selectNum = index;
    EquipGraphListMenu__Decide(this, v5);
  }
}


void __fastcall EquipGraphListMenu__OnClickScaleChange(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x1
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_4B159A0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EquipGraphListMenu_OnClickScaleChange__, method, v2);
    byte_4B159A0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_EquipGraphListMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_EquipGraphListMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_EquipGraphListMenu_OnClickScaleChange__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0LL);
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager
      || (EquipGraphListViewManager__ChangeIconScale(servantEquipListViewManager, v6),
          (servantEquipListViewManager = this->fields.servantEquipListViewManager) == 0LL)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          servantEquipListViewManager = (EquipGraphListViewManager_o *)EquipGraphListViewManager__GetScaleButtonSpriteName(
                                                                         servantEquipListViewManager,
                                                                         v6),
          !scaleChangeTabSprite) )
    {
      sub_1BCAA3C(servantEquipListViewManager, v6);
    }
    UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)servantEquipListViewManager, 0LL);
  }
}


void __fastcall EquipGraphListMenu__OnClickTabChoice(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x3
  int32_t modeKind; // w8
  EquipGraphListMenu_RequestCallbackFunc_o *v14; // x20
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  EquipGraphListMenu_RequestCallbackFunc_o *v17; // x20
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2

  if ( (byte_4B1599A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EquipGraphListMenu_EndClickTabChoice__, method, v2);
    sub_1BCA7E0(&Method_EquipGraphListMenu_OnClickTabChoice__, v4, v5);
    sub_1BCA7E0(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B1599A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_EquipGraphListMenu_OnClickTabChoice__;
    if ( (*((_BYTE *)Method_EquipGraphListMenu_OnClickTabChoice__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_EquipGraphListMenu_OnClickTabChoice__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 2 )
      {
        v14 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                            EquipGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                            v10,
                                                            v11,
                                                            v12);
        EquipGraphListMenu_RequestCallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          Method_EquipGraphListMenu_EndClickTabChoice__,
          v15);
        EquipGraphListMenu__StatusRequest(this, v14, v16);
        return;
      }
      v17 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                          EquipGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                          v10,
                                                          v11,
                                                          v12);
      EquipGraphListMenu_RequestCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_EquipGraphListMenu_EndClickTabChoice__,
        v18);
      EquipGraphListMenu__StatusRequest(this, v17, v19);
    }
    EquipGraphListMenu__SetTabKind(this, 2, 0, v12);
  }
}


void __fastcall EquipGraphListMenu__OnClickTabLock(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  const MethodInfo *v12; // x3
  int32_t modeKind; // w8
  EquipGraphListMenu_RequestCallbackFunc_o *v14; // x20
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x2
  EquipGraphListMenu_RequestCallbackFunc_o *v17; // x20
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x2

  if ( (byte_4B15999 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EquipGraphListMenu_EndClickTabLock__, method, v2);
    sub_1BCA7E0(&Method_EquipGraphListMenu_OnClickTabLock__, v4, v5);
    sub_1BCA7E0(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B15999 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_EquipGraphListMenu_OnClickTabLock__;
    if ( (*((_BYTE *)Method_EquipGraphListMenu_OnClickTabLock__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_EquipGraphListMenu_OnClickTabLock__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 1 )
      {
        v14 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                            EquipGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                            v10,
                                                            v11,
                                                            v12);
        EquipGraphListMenu_RequestCallbackFunc___ctor(
          v14,
          (Il2CppObject *)this,
          Method_EquipGraphListMenu_EndClickTabLock__,
          v15);
        EquipGraphListMenu__StatusRequest(this, v14, v16);
        return;
      }
      v17 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                          EquipGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                          v10,
                                                          v11,
                                                          v12);
      EquipGraphListMenu_RequestCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_EquipGraphListMenu_EndClickTabLock__,
        v18);
      EquipGraphListMenu__StatusRequest(this, v17, v19);
    }
    EquipGraphListMenu__SetTabKind(this, 1, 0, v12);
  }
}


void __fastcall EquipGraphListMenu__OnClickTabStatus(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  EquipGraphListMenu_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  if ( (byte_4B15998 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EquipGraphListMenu_EndClickTabStatus__, method, v2);
    sub_1BCA7E0(&Method_EquipGraphListMenu_OnClickTabStatus__, v4, v5);
    sub_1BCA7E0(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo, v6, v7);
    byte_4B15998 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v8 = Method_EquipGraphListMenu_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_EquipGraphListMenu_OnClickTabStatus__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BCA7F8(Method_EquipGraphListMenu_OnClickTabStatus__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v8, v8[4]);
    OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
    v13 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_1BCAA2C(
                                                        EquipGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                        v10,
                                                        v11,
                                                        v12);
    EquipGraphListMenu_RequestCallbackFunc___ctor(
      v13,
      (Il2CppObject *)this,
      Method_EquipGraphListMenu_EndClickTabStatus__,
      v14);
    EquipGraphListMenu__StatusRequest(this, v13, v15);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu__OnSelectServantEquip(
        EquipGraphListMenu_o *this,
        int32_t kind,
        int32_t n,
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
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  EquipGraphListViewItem_o *Item; // x20
  int32_t modeKind; // w8
  struct EquipGraphListViewManager_o *v22; // x20
  EquipGraphListViewManager_CallbackFunc_o *v23; // x0
  const MethodInfo *v24; // x3
  intptr_t v25; // w2
  int32_t v26; // w8
  EquipGraphListViewManager_o *v27; // x21
  System_Action_o *v28; // x22
  const MethodInfo *v29; // x3
  _QWORD *v30; // x0
  System_Reflection_MethodBase_o *v31; // x0
  const MethodInfo *v32; // x3
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  Il2CppObject *Instance; // x21
  bool v39; // w22
  _QWORD *v40; // x0
  System_Reflection_MethodBase_o *v41; // x0
  __int64 v42; // x2
  __int64 v43; // x3
  _QWORD *v44; // x0
  System_Reflection_MethodBase_o *v45; // x0
  EquipGraphListViewManager_CallbackFunc_c *v46; // x0
  int64_t v47; // x21
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  const MethodInfo *v54; // x2
  UserServantEntity_o *userSvtEntity; // x20
  ServantStatusDialog_EndDelegate_o *v56; // x23

  if ( (byte_4B1599C & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&n);
    sub_1BCA7E0(&EquipGraphListViewManager_CallbackFunc_TypeInfo, v7, v8);
    sub_1BCA7E0(&ServantStatusDialog_EndDelegate_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_EquipGraphListMenu_EndSelectEquip__, v11, v12);
    sub_1BCA7E0(&Method_EquipGraphListMenu_EndShowServantEquip__, v13, v14);
    sub_1BCA7E0(&Method_EquipGraphListMenu_OnSelectServantEquip__, v15, v16);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18);
    byte_4B1599C = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.selectNum = n;
    if ( (n & 0x80000000) != 0 )
    {
      Item = 0LL;
    }
    else
    {
      servantEquipListViewManager = this->fields.servantEquipListViewManager;
      if ( !servantEquipListViewManager )
        goto LABEL_45;
      Item = EquipGraphListViewManager__GetItem(servantEquipListViewManager, n, *(const MethodInfo **)&n);
    }
    if ( kind == 3 )
    {
      modeKind = this->fields.modeKind;
      if ( modeKind )
      {
        if ( (unsigned int)(modeKind - 1) >= 2 )
          return;
        this->fields.state = 2;
        v22 = this->fields.servantEquipListViewManager;
        v23 = (EquipGraphListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                            EquipGraphListViewManager_CallbackFunc_TypeInfo,
                                                            *(_QWORD *)&kind,
                                                            *(_QWORD *)&n,
                                                            method);
        v25 = (int)Method_EquipGraphListMenu_OnSelectServantEquip__;
        goto LABEL_40;
      }
      v33 = Method_EquipGraphListMenu_OnSelectServantEquip__;
      if ( (*((_BYTE *)Method_EquipGraphListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
        v33 = (_QWORD *)sub_1BCA7F8(Method_EquipGraphListMenu_OnSelectServantEquip__);
      v34 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v33, v33[4]);
      if ( Item )
      {
        OverwriteAssetSoundName__PlaySystemSe(v34, 0, 0LL);
        this->fields.state = 5;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v39 = (Item->fields.wearerMember & 0x80000000) == 0 || Item->fields.isBase;
        userSvtEntity = Item->fields.userSvtEntity;
        v56 = (ServantStatusDialog_EndDelegate_o *)sub_1BCAA2C(ServantStatusDialog_EndDelegate_TypeInfo, v35, v36, v37);
        ServantStatusDialog_EndDelegate___ctor(
          v56,
          (Il2CppObject *)this,
          Method_EquipGraphListMenu_EndShowServantEquip__,
          0LL);
        if ( Instance )
        {
          CommonUI__OpenServantEquipStatusDialog_30781580((CommonUI_o *)Instance, 0, userSvtEntity, v39, v56, 0LL, 0LL);
          return;
        }
        goto LABEL_45;
      }
      OverwriteAssetSoundName__PlaySystemSe(v34, 2, 0LL);
      this->fields.state = 2;
      v22 = this->fields.servantEquipListViewManager;
      v46 = EquipGraphListViewManager_CallbackFunc_TypeInfo;
    }
    else
    {
      if ( kind != 2 )
      {
        if ( kind == 1 )
        {
          EquipGraphListMenu__Decide(this, *(const MethodInfo **)&kind);
        }
        else
        {
          v30 = Method_EquipGraphListMenu_OnSelectServantEquip__;
          if ( (*((_BYTE *)Method_EquipGraphListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
            v30 = (_QWORD *)sub_1BCA7F8(Method_EquipGraphListMenu_OnSelectServantEquip__);
          v31 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v30, v30[4]);
          OverwriteAssetSoundName__PlaySystemSe(v31, 1, 0LL);
          this->fields.state = 3;
          EquipGraphListMenu__Callback(this, 0, -1, v32);
        }
        return;
      }
      v26 = this->fields.modeKind;
      if ( v26 == 2 )
      {
        v40 = Method_EquipGraphListMenu_OnSelectServantEquip__;
        if ( (*((_BYTE *)Method_EquipGraphListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
          v40 = (_QWORD *)sub_1BCA7F8(Method_EquipGraphListMenu_OnSelectServantEquip__);
        v41 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v40, v40[4]);
        OverwriteAssetSoundName__PlaySystemSe(v41, 0, 0LL);
        if ( !Item )
          goto LABEL_45;
        Item->fields.isSwapChoice ^= 1u;
      }
      else
      {
        if ( v26 != 1 )
        {
          if ( v26 )
            return;
          v27 = this->fields.servantEquipListViewManager;
          v28 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&n, method);
          System_Action___ctor(v28, (Il2CppObject *)this, Method_EquipGraphListMenu_EndSelectEquip__, 0LL);
          if ( v27 )
          {
            EquipGraphListViewManager__SelectEquip(v27, Item, v28, v29);
            return;
          }
LABEL_45:
          sub_1BCAA3C(servantEquipListViewManager, *(_QWORD *)&kind);
        }
        v44 = Method_EquipGraphListMenu_OnSelectServantEquip__;
        if ( (*((_BYTE *)Method_EquipGraphListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
          v44 = (_QWORD *)sub_1BCA7F8(Method_EquipGraphListMenu_OnSelectServantEquip__);
        v45 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v44, v44[4]);
        OverwriteAssetSoundName__PlaySystemSe(v45, 11, 0LL);
        if ( !Item )
          goto LABEL_45;
        Item->fields.isSwapLock ^= 1u;
      }
      this->fields.state = 2;
      v22 = this->fields.servantEquipListViewManager;
      v46 = EquipGraphListViewManager_CallbackFunc_TypeInfo;
    }
    v23 = (EquipGraphListViewManager_CallbackFunc_o *)sub_1BCAA2C(v46, *(_QWORD *)&kind, v42, v43);
    v25 = (int)Method_EquipGraphListMenu_OnSelectServantEquip__;
LABEL_40:
    v47 = (int64_t)v23;
    EquipGraphListViewManager_CallbackFunc___ctor(v23, (Il2CppObject *)this, v25, v24);
    if ( v22 )
    {
      v22->fields.callbackFunc = (struct EquipGraphListViewManager_CallbackFunc_o *)v47;
      sub_1BCA784((PartyOrganizationUtility_o *)&v22->fields.callbackFunc, v47, v48, v49, v50, v51, v52, v53);
      EquipGraphListViewManager__SetMode_39175340(v22, 2, v54);
      return;
    }
    goto LABEL_45;
  }
}


void __fastcall EquipGraphListMenu__Open(
        EquipGraphListMenu_o *this,
        PartyListViewItem_array *baseDeckItemList,
        PartyListViewItem_o *partyItem,
        int32_t member,
        EventUpValSetupInfo_o *setupInfo,
        EquipGraphListMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  PartyListViewItem_o *v7; // x7
  EquipGraphListMenu_o *v13; // x19
  __int64 v14; // x1
  __int64 v15; // x2
  int32_t state; // w8
  int32_t modeKind; // w1
  const MethodInfo *v18; // x3
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  const MethodInfo *v25; // x3
  __int64 v26; // x1
  const MethodInfo *v27; // x5
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  System_Action_o *v33; // x20

  v13 = this;
  if ( (byte_4B15990 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, baseDeckItemList, partyItem);
    this = (EquipGraphListMenu_o *)sub_1BCA7E0(&Method_EquipGraphListMenu_EndOpen__, v14, v15);
    byte_4B15990 = 1;
  }
  state = v13->fields.state;
  if ( (unsigned int)(state - 2) >= 2 )
  {
    if ( !state )
    {
      if ( !partyItem )
        goto LABEL_17;
      this = (EquipGraphListMenu_o *)PartyListViewItem__GetMember(partyItem, member, 0LL);
      if ( !this )
        goto LABEL_17;
      v13->fields.isSelectedSvt = PartyOrganizationListViewItem__get_EquipUserSvtId(
                                    (PartyOrganizationListViewItem_o *)this,
                                    0LL) > 0;
      v13->fields.callbackFunc = callback;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v13->fields.callbackFunc,
        (int64_t)callback,
        v19,
        v20,
        v21,
        v22,
        v23,
        v24);
      this = (EquipGraphListMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v13, 0LL);
      if ( !this )
        goto LABEL_17;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      EquipGraphListMenu__SetTabKind(v13, v13->fields.modeKind, 1, v25);
      this = (EquipGraphListMenu_o *)v13->fields.titleInfo;
      if ( !this )
        goto LABEL_17;
      TitleInfoControl__setTitleInfo((TitleInfoControl_o *)this, 0LL, 1, 0LL, 23, 0LL);
      this = (EquipGraphListMenu_o *)v13->fields.titleInfo;
      if ( !this )
        goto LABEL_17;
      TitleInfoControl__setBackBtnSprite_37887988((TitleInfoControl_o *)this, 1, 0, 0, 0LL);
      servantEquipListViewManager = v13->fields.servantEquipListViewManager;
      if ( !servantEquipListViewManager )
        sub_1BCAA3C(0LL, v26);
      EquipGraphListViewManager__CreateList(
        servantEquipListViewManager,
        baseDeckItemList,
        partyItem,
        member,
        setupInfo,
        v27);
      this = (EquipGraphListMenu_o *)v13->fields.servantEquipListViewManager;
      if ( !this
        || (scaleChangeTabSprite = v13->fields.scaleChangeTabSprite,
            this = (EquipGraphListMenu_o *)EquipGraphListViewManager__GetScaleButtonSpriteName(
                                             (EquipGraphListViewManager_o *)this,
                                             (const MethodInfo *)baseDeckItemList),
            !scaleChangeTabSprite) )
      {
LABEL_17:
        sub_1BCAA3C(this, baseDeckItemList);
      }
      UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)this, 0LL);
      v13->fields.state = 1;
      v33 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v30, v31, v32);
      System_Action___ctor(v33, (Il2CppObject *)v13, Method_EquipGraphListMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)v13, v33, 0LL);
    }
  }
  else
  {
    v13->fields.callbackFunc = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v13->fields.callbackFunc,
      (int64_t)callback,
      (int64_t)partyItem,
      member,
      (System_String_o *)setupInfo,
      (BattleSetupInfo_o *)callback,
      (FollowerInfo_o *)method,
      v7);
    modeKind = v13->fields.modeKind;
    v13->fields.state = 2;
    EquipGraphListMenu__SetTabKind(v13, modeKind, 0, v18);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu__Open_39172276(
        EquipGraphListMenu_o *this,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t member,
        EventUpValSetupInfo_o *setupInfo,
        EquipGraphListMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  EquipGraphListMenu_o *v12; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  int32_t state; // w8
  int32_t modeKind; // w1
  const MethodInfo *v17; // x3
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  const MethodInfo *v24; // x3
  __int64 v25; // x1
  const MethodInfo *v26; // x4
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  System_Action_o *v32; // x20

  v12 = this;
  if ( (byte_4B15991 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, partyItem, *(_QWORD *)&member);
    this = (EquipGraphListMenu_o *)sub_1BCA7E0(&Method_EquipGraphListMenu_EndOpen__, v13, v14);
    byte_4B15991 = 1;
  }
  state = v12->fields.state;
  if ( (unsigned int)(state - 2) >= 2 )
  {
    if ( !state )
    {
      if ( !partyItem )
        goto LABEL_17;
      this = (EquipGraphListMenu_o *)WarBoardPartyListViewItem__GetMemberItem(partyItem, member, 0LL);
      if ( !this )
        goto LABEL_17;
      v12->fields.isSelectedSvt = PartyOrganizationListViewItem__get_EquipUserSvtId(
                                    (PartyOrganizationListViewItem_o *)this,
                                    0LL) > 0;
      v12->fields.callbackFunc = callback;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&v12->fields.callbackFunc,
        (int64_t)callback,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
      this = (EquipGraphListMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0LL);
      if ( !this )
        goto LABEL_17;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      EquipGraphListMenu__SetTabKind(v12, v12->fields.modeKind, 1, v24);
      this = (EquipGraphListMenu_o *)v12->fields.titleInfo;
      if ( !this )
        goto LABEL_17;
      TitleInfoControl__setTitleInfo((TitleInfoControl_o *)this, 0LL, 1, 0LL, 23, 0LL);
      this = (EquipGraphListMenu_o *)v12->fields.titleInfo;
      if ( !this )
        goto LABEL_17;
      TitleInfoControl__setBackBtnSprite_37887988((TitleInfoControl_o *)this, 1, 0, 0, 0LL);
      servantEquipListViewManager = v12->fields.servantEquipListViewManager;
      if ( !servantEquipListViewManager )
        sub_1BCAA3C(0LL, v25);
      EquipGraphListViewManager__CreateList_39173196(servantEquipListViewManager, partyItem, member, setupInfo, v26);
      this = (EquipGraphListMenu_o *)v12->fields.servantEquipListViewManager;
      if ( !this
        || (scaleChangeTabSprite = v12->fields.scaleChangeTabSprite,
            this = (EquipGraphListMenu_o *)EquipGraphListViewManager__GetScaleButtonSpriteName(
                                             (EquipGraphListViewManager_o *)this,
                                             (const MethodInfo *)partyItem),
            !scaleChangeTabSprite) )
      {
LABEL_17:
        sub_1BCAA3C(this, partyItem);
      }
      UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)this, 0LL);
      v12->fields.state = 1;
      v32 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v29, v30, v31);
      System_Action___ctor(v32, (Il2CppObject *)v12, Method_EquipGraphListMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)v12, v32, 0LL);
    }
  }
  else
  {
    v12->fields.callbackFunc = callback;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&v12->fields.callbackFunc,
      (int64_t)callback,
      *(int64_t *)&member,
      (int32_t)setupInfo,
      (System_String_o *)callback,
      (BattleSetupInfo_o *)method,
      v6,
      v7);
    modeKind = v12->fields.modeKind;
    v12->fields.state = 2;
    EquipGraphListMenu__SetTabKind(v12, modeKind, 0, v17);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu__SetTabKind(
        EquipGraphListMenu_o *this,
        int32_t modeKind,
        bool isInit,
        const MethodInfo *method)
{
  EquipGraphListMenu_o *v6; // x19
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
  bool v29; // w21
  __int64 *v30; // x8
  bool v31; // w23
  unsigned int v32; // w21
  UICommonButton_o *statusTabButton; // x22
  bool enabled; // w0
  __int64 *v35; // x8
  UICommonButton_o *lockTabButton; // x22
  bool v37; // w0
  __int64 *v38; // x8
  UICommonButton_o *choiceTabButton; // x22
  bool v40; // w0
  UILabel_o *explanationLabel; // x21
  __int64 *v42; // x8
  int32_t state; // w8
  struct EquipGraphListViewManager_o *servantEquipListViewManager; // x21
  EquipGraphListViewManager_CallbackFunc_o *v45; // x20
  const MethodInfo *v46; // x3
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int32_t v53; // w1

  v6 = this;
  if ( (byte_4B15994 & 1) == 0 )
  {
    sub_1BCA7E0(&EquipGraphListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&modeKind, isInit);
    sub_1BCA7E0(&Method_EquipGraphListMenu_OnSelectServantEquip__, v7, v8);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_11729/*"SERVANT_EQUIP_OPERATION_EXPLANATION_CHOICE"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_17825/*"button_allchoice_reg"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_17828/*"button_alllock_unreg"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_11731/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_11730/*"SERVANT_EQUIP_OPERATION_EXPLANATION_LOCK"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_17841/*"button_select_reg"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_17842/*"button_select_unreg"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_17827/*"button_alllock_reg"*/, v25, v26);
    this = (EquipGraphListMenu_o *)sub_1BCA7E0(&StringLiteral_17826/*"button_allchoice_unreg"*/, v27, v28);
    byte_4B15994 = 1;
  }
  v29 = !v6->fields.isInitTab || isInit;
  if ( v29 || v6->fields.modeKind != modeKind )
  {
    this = (EquipGraphListMenu_o *)v6->fields.statusTabButton;
    if ( !this )
      goto LABEL_46;
    ((void (__fastcall *)(EquipGraphListMenu_o *, __int64, void *, const MethodInfo *))this->klass[1]._1.namespaze)(
      this,
      1LL,
      this->klass[1]._1.byval_arg.data,
      method);
    this = (EquipGraphListMenu_o *)v6->fields.statusTabButton;
    if ( !this )
      goto LABEL_46;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, modeKind != 0, 0LL);
    this = (EquipGraphListMenu_o *)v6->fields.statusTabSprite;
    if ( !this )
      goto LABEL_46;
    v30 = &StringLiteral_17841/*"button_select_reg"*/;
    if ( modeKind )
      v30 = &StringLiteral_17842/*"button_select_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v30, 0LL);
    this = (EquipGraphListMenu_o *)v6->fields.statusTabButton;
    if ( !this )
      goto LABEL_46;
    v31 = !v29;
    v32 = !v29;
    this = (EquipGraphListMenu_o *)((__int64 (__fastcall *)(EquipGraphListMenu_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                                     this,
                                     0LL,
                                     v32,
                                     this->klass[1]._1.interfaceOffsets);
    statusTabButton = v6->fields.statusTabButton;
    if ( !statusTabButton )
      goto LABEL_46;
    enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v6->fields.statusTabButton, 0LL);
    UICommonButton__SetColliderEnable(statusTabButton, enabled, v32, 0LL);
    this = (EquipGraphListMenu_o *)v6->fields.lockTabButton;
    if ( !this )
      goto LABEL_46;
    ((void (__fastcall *)(EquipGraphListMenu_o *, __int64, void *))this->klass[1]._1.namespaze)(
      this,
      1LL,
      this->klass[1]._1.byval_arg.data);
    this = (EquipGraphListMenu_o *)v6->fields.lockTabButton;
    if ( !this )
      goto LABEL_46;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, modeKind != 1, 0LL);
    this = (EquipGraphListMenu_o *)v6->fields.lockTabSprite;
    if ( !this )
      goto LABEL_46;
    v35 = &StringLiteral_17827/*"button_alllock_reg"*/;
    if ( modeKind != 1 )
      v35 = &StringLiteral_17828/*"button_alllock_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v35, 0LL);
    this = (EquipGraphListMenu_o *)v6->fields.lockTabButton;
    if ( !this )
      goto LABEL_46;
    this = (EquipGraphListMenu_o *)((__int64 (__fastcall *)(EquipGraphListMenu_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                                     this,
                                     0LL,
                                     v31,
                                     this->klass[1]._1.interfaceOffsets);
    lockTabButton = v6->fields.lockTabButton;
    if ( !lockTabButton )
      goto LABEL_46;
    v37 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v6->fields.lockTabButton, 0LL);
    UICommonButton__SetColliderEnable(lockTabButton, v37, v31, 0LL);
    this = (EquipGraphListMenu_o *)v6->fields.choiceTabButton;
    if ( !this )
      goto LABEL_46;
    ((void (__fastcall *)(EquipGraphListMenu_o *, __int64, void *))this->klass[1]._1.namespaze)(
      this,
      1LL,
      this->klass[1]._1.byval_arg.data);
    this = (EquipGraphListMenu_o *)v6->fields.choiceTabButton;
    if ( !this )
      goto LABEL_46;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, modeKind != 2, 0LL);
    this = (EquipGraphListMenu_o *)v6->fields.choiceTabSprite;
    if ( !this )
      goto LABEL_46;
    v38 = &StringLiteral_17825/*"button_allchoice_reg"*/;
    if ( modeKind != 2 )
      v38 = &StringLiteral_17826/*"button_allchoice_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v38, 0LL);
    this = (EquipGraphListMenu_o *)v6->fields.choiceTabButton;
    if ( !this )
      goto LABEL_46;
    this = (EquipGraphListMenu_o *)((__int64 (__fastcall *)(EquipGraphListMenu_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                                     this,
                                     0LL,
                                     v31,
                                     this->klass[1]._1.interfaceOffsets);
    choiceTabButton = v6->fields.choiceTabButton;
    if ( !choiceTabButton )
      goto LABEL_46;
    v40 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v6->fields.choiceTabButton, 0LL);
    UICommonButton__SetColliderEnable(choiceTabButton, v40, v31, 0LL);
    if ( modeKind == 2 )
    {
      explanationLabel = v6->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
      v42 = &StringLiteral_11729/*"SERVANT_EQUIP_OPERATION_EXPLANATION_CHOICE"*/;
    }
    else if ( modeKind == 1 )
    {
      explanationLabel = v6->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
      v42 = &StringLiteral_11730/*"SERVANT_EQUIP_OPERATION_EXPLANATION_LOCK"*/;
    }
    else
    {
      if ( modeKind )
        goto LABEL_40;
      explanationLabel = v6->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, *(_QWORD *)&modeKind);
      v42 = &StringLiteral_11731/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/;
    }
    this = (EquipGraphListMenu_o *)LocalizationManager__Get((System_String_o *)*v42, 0LL);
    if ( !explanationLabel )
      goto LABEL_46;
    UILabel__set_text(explanationLabel, (System_String_o *)this, 0LL);
  }
LABEL_40:
  state = v6->fields.state;
  servantEquipListViewManager = v6->fields.servantEquipListViewManager;
  v6->fields.isInitTab = 1;
  v6->fields.modeKind = modeKind;
  if ( state != 2 )
  {
    if ( servantEquipListViewManager )
    {
      v53 = 1;
      goto LABEL_45;
    }
LABEL_46:
    sub_1BCAA3C(this, *(_QWORD *)&modeKind);
  }
  v45 = (EquipGraphListViewManager_CallbackFunc_o *)sub_1BCAA2C(
                                                      EquipGraphListViewManager_CallbackFunc_TypeInfo,
                                                      *(_QWORD *)&modeKind,
                                                      isInit,
                                                      method);
  EquipGraphListViewManager_CallbackFunc___ctor(
    v45,
    (Il2CppObject *)v6,
    (intptr_t)Method_EquipGraphListMenu_OnSelectServantEquip__,
    v46);
  if ( !servantEquipListViewManager )
    goto LABEL_46;
  servantEquipListViewManager->fields.callbackFunc = v45;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&servantEquipListViewManager->fields.callbackFunc,
    (int64_t)v45,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  v53 = 2;
LABEL_45:
  EquipGraphListViewManager__SetMode_39175340(servantEquipListViewManager, v53, (const MethodInfo *)isInit);
}


void __fastcall EquipGraphListMenu__StatusRequest(
        EquipGraphListMenu_o *this,
        EquipGraphListMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t modeKind; // w8
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  NetworkManager_ResultCallbackFunc_o *v23; // x20
  __int64 v24; // x1
  System_Int64_array *v25; // x1
  System_Int64_array *v26; // x2
  bool v27; // w4
  bool v28; // w5
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  NetworkManager_ResultCallbackFunc_o *v38; // x20
  __int64 v39; // x1
  System_Int64_array *v40; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4B1599B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_EquipGraphListMenu_EndStatusSync__, callback, method);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v10, v11);
    byte_4B1599B = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v40 = 0LL;
  choiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager )
      goto LABEL_21;
    if ( EquipGraphListViewManager__GetSwapChoiceList(servantEquipListViewManager, &choiceList, &v40, v3) )
    {
      this->fields.requedstCallback = callback;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.requedstCallback,
        (int64_t)callback,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
      v38 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v35,
                                                     v36,
                                                     v37);
      NetworkManager_ResultCallbackFunc___ctor(
        v38,
        (Il2CppObject *)this,
        Method_EquipGraphListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v39);
      servantEquipListViewManager = (EquipGraphListViewManager_o *)NetworkManager__getRequest_object_(
                                                                     v38,
                                                                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( servantEquipListViewManager )
      {
        v26 = v40;
        v25 = choiceList;
        v28 = 1;
        v27 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1BCAA3C(servantEquipListViewManager, callback);
    }
  }
  else if ( modeKind == 1 )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager )
      goto LABEL_21;
    if ( EquipGraphListViewManager__GetSwapLockList(servantEquipListViewManager, &lockList, &unlockList, v3) )
    {
      this->fields.requedstCallback = callback;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.requedstCallback,
        (int64_t)callback,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
      v23 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v20,
                                                     v21,
                                                     v22);
      NetworkManager_ResultCallbackFunc___ctor(
        v23,
        (Il2CppObject *)this,
        Method_EquipGraphListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v24);
      servantEquipListViewManager = (EquipGraphListViewManager_o *)NetworkManager__getRequest_object_(
                                                                     v23,
                                                                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( servantEquipListViewManager )
      {
        v26 = unlockList;
        v25 = lockList;
        v27 = 1;
        v28 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)servantEquipListViewManager,
          v25,
          v26,
          0,
          v27,
          v28,
          0LL);
        return;
      }
      goto LABEL_21;
    }
  }
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      0LL,
      *(_QWORD *)&callback->fields.extra_arg);
}


void __fastcall EquipGraphListMenu__add_callbackFunc(
        EquipGraphListMenu_o *this,
        EquipGraphListMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct EquipGraphListMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct EquipGraphListMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EquipGraphListMenu_o *v11; // x0
  EquipGraphListMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4B1598E & 1) == 0 )
  {
    sub_1BCA7E0(&EquipGraphListMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B1598E = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (EquipGraphListMenu_CallbackFunc_c *)v8->klass != EquipGraphListMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  EquipGraphListMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall EquipGraphListMenu__remove_callbackFunc(
        EquipGraphListMenu_o *this,
        EquipGraphListMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct EquipGraphListMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct EquipGraphListMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  EquipGraphListMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4B1598F & 1) == 0 )
  {
    sub_1BCA7E0(&EquipGraphListMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B1598F = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (EquipGraphListMenu_CallbackFunc_c *)v8->klass != EquipGraphListMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  EquipGraphListMenu__GetModeKind(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu_CallbackFunc___ctor(
        EquipGraphListMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0D170;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0D118;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall EquipGraphListMenu_CallbackFunc__BeginInvoke(
        EquipGraphListMenu_CallbackFunc_o *this,
        int32_t result,
        EquipGraphListViewItem_o *item,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = result;
  if ( (byte_4B159A2 & 1) == 0 )
  {
    sub_1BCA7E0(&EquipGraphListMenu_ResultKind_TypeInfo, *(_QWORD *)&result, item);
    byte_4B159A2 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(EquipGraphListMenu_ResultKind_TypeInfo, &v12);
  v11[1] = (__int64)item;
  return (System_IAsyncResult_o *)sub_1BCA794(this, v11, callback, object);
}


void __fastcall EquipGraphListMenu_CallbackFunc__EndInvoke(
        EquipGraphListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall EquipGraphListMenu_CallbackFunc__Invoke(
        EquipGraphListMenu_CallbackFunc_o *this,
        int32_t result,
        EquipGraphListViewItem_o *item,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, EquipGraphListViewItem_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    item,
    *(_QWORD *)&this->fields.extra_arg);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu_RequestCallbackFunc___ctor(
        EquipGraphListMenu_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0D1CC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0D184;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall EquipGraphListMenu_RequestCallbackFunc__BeginInvoke(
        EquipGraphListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isRequest;
  if ( (byte_4B159A3 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isRequest, callback);
    byte_4B159A3 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall EquipGraphListMenu_RequestCallbackFunc__EndInvoke(
        EquipGraphListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall EquipGraphListMenu_RequestCallbackFunc__Invoke(
        EquipGraphListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isRequest,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall EquipGraphListMenu___c___cctor(const MethodInfo *method)
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

  if ( (byte_4B159A4 & 1) == 0 )
  {
    sub_1BCA7E0(&EquipGraphListMenu___c_TypeInfo, v1, v2);
    byte_4B159A4 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(EquipGraphListMenu___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  EquipGraphListMenu___c_TypeInfo->static_fields->__9 = (struct EquipGraphListMenu___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)EquipGraphListMenu___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall EquipGraphListMenu___c___ctor(EquipGraphListMenu___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu___c___Open_b__28_0(
        EquipGraphListMenu___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B159A5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, isDecide, method);
    byte_4B159A5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu___c___Open_b__29_0(
        EquipGraphListMenu___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B159A6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, isDecide, method);
    byte_4B159A6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0LL);
}