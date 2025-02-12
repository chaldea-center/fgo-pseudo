void __fastcall EquipGraphListMenu___ctor(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4BC724A & 1) == 0 )
  {
    sub_1C1ABD4(&BaseMenu_TypeInfo, method);
    byte_4BC724A = 1;
  }
  if ( !BaseMenu_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseMenu_TypeInfo);
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
        sub_1C1AE30(0LL, result);
      Item = EquipGraphListViewManager__GetItem(servantEquipListViewManager, n, *(const MethodInfo **)&n);
    }
    p_callbackFunc->klass = 0LL;
    sub_1C1AB78(p_callbackFunc, 0LL, *(int64_t *)&n, (int32_t)method, v4, v5, v6, v7);
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

  EquipGraphListMenu__Close_39664224(this, 0LL, v2);
}


void __fastcall EquipGraphListMenu__Close_39664224(
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
  int32_t modeKind; // w1
  const MethodInfo *v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_4BC723C & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, callback);
    sub_1C1ABD4(&Method_EquipGraphListMenu_EndClose__, v10);
    byte_4BC723C = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C1AB78(
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
  EquipGraphListMenu__SetTabKind(this, modeKind, 0, v12);
  v13 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_EquipGraphListMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v13, 0LL);
}


void __fastcall EquipGraphListMenu__Decide(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  __int64 selectNum; // x1
  const MethodInfo *v14; // x2
  ListViewManager_o *servantEquipListViewManager; // x0
  struct System_Collections_Generic_List_UIDragDropListViewSurface__o *dropList; // x21
  EventServantEntity_o *v17; // x20
  bool IsNoPeriod; // w0
  System_String_o *v19; // x21
  Il2CppObject *EndTimeStr; // x0
  System_String_o *v21; // x20
  Il2CppObject *Instance; // x21
  System_String_o *v23; // x22
  System_Action_o *v24; // x23
  EquipGraphListMenu_RequestCallbackFunc_o *v25; // x20
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x2

  if ( (byte_4BC723E & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, method);
    sub_1C1ABD4(&Method_EquipGraphListMenu_Decide__, v3);
    sub_1C1ABD4(&Method_EquipGraphListMenu_EndCloseEventServantWarning__, v4);
    sub_1C1ABD4(&Method_EquipGraphListMenu_EndRequestClickDecide__, v5);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v6);
    sub_1C1ABD4(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo, v7);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1C1ABD4(&StringLiteral_5622/*"EQUIP_GRAPH_EVENT_SERVANT_WARNING_MESSAGE"*/, v9);
    sub_1C1ABD4(&StringLiteral_5623/*"EQUIP_GRAPH_EVENT_SERVANT_WARNING_TITLE"*/, v10);
    byte_4BC723E = 1;
  }
  v11 = Method_EquipGraphListMenu_Decide__;
  if ( (*((_BYTE *)Method_EquipGraphListMenu_Decide__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1C1ABEC(Method_EquipGraphListMenu_Decide__);
  v12 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v11, v11[4]);
  OverwriteAssetSoundName__PlaySystemSe(v12, 8, 0, 0LL);
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
                                                              v14)) == 0LL) )
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
    v17 = (EventServantEntity_o *)servantEquipListViewManager;
    if ( UserServantEntity__IsEventJoin(*(UserServantEntity_o **)&dropList->fields._size, 0LL) )
    {
      servantEquipListViewManager = *(ListViewManager_o **)&dropList->fields._size;
      if ( !servantEquipListViewManager )
        goto LABEL_23;
      IsNoPeriod = UserServantEntity__IsNoPeriod((UserServantEntity_o *)servantEquipListViewManager, 0LL);
      if ( v17 )
      {
        if ( !IsNoPeriod )
        {
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v19 = LocalizationManager__Get((System_String_o *)StringLiteral_5622/*"EQUIP_GRAPH_EVENT_SERVANT_WARNING_MESSAGE"*/, 0LL);
          EndTimeStr = (Il2CppObject *)EventServantEntity__getEndTimeStr(v17, 0LL);
          v21 = System_String__Format(v19, EndTimeStr, 0LL);
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v23 = LocalizationManager__Get((System_String_o *)StringLiteral_5623/*"EQUIP_GRAPH_EVENT_SERVANT_WARNING_TITLE"*/, 0LL);
          v24 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
          System_Action___ctor(v24, (Il2CppObject *)this, Method_EquipGraphListMenu_EndCloseEventServantWarning__, 0LL);
          if ( Instance )
          {
            CommonUI__OpenNotificationDialog(
              (CommonUI_o *)Instance,
              v23,
              v21,
              v24,
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
          sub_1C1AE30(servantEquipListViewManager, selectNum);
        }
      }
    }
  }
  v25 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_1C1AE20(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
  EquipGraphListMenu_RequestCallbackFunc___ctor(
    v25,
    (Il2CppObject *)this,
    Method_EquipGraphListMenu_EndRequestClickDecide__,
    v26);
  EquipGraphListMenu__StatusRequest(this, v25, v27);
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
      sub_1C1AE30(servantEquipListViewManager, isRequest);
    }
    EquipGraphListViewManager__SetMode_39664692(servantEquipListViewManager, 3, v6);
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
      sub_1C1AE30(servantEquipListViewManager, isRequest);
    }
    EquipGraphListViewManager__SetMode_39664692(servantEquipListViewManager, 3, v6);
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
      sub_1C1AE30(servantEquipListViewManager, isRequest);
    }
    EquipGraphListViewManager__SetMode_39664692(servantEquipListViewManager, 3, v6);
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
    sub_1C1AB78(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v10->fields.m_target)(
      v10->fields.original_method_info,
      *(_QWORD *)&v10->fields.extra_arg);
  }
}


void __fastcall EquipGraphListMenu__EndCloseEventServantWarning(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  EquipGraphListMenu_RequestCallbackFunc_o *v4; // x20
  const MethodInfo *v5; // x3
  const MethodInfo *v6; // x2

  if ( (byte_4BC723F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_EquipGraphListMenu_EndRequestClickDecide__, method);
    sub_1C1ABD4(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo, v3);
    byte_4BC723F = 1;
  }
  v4 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_1C1AE20(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
  EquipGraphListMenu_RequestCallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_EquipGraphListMenu_EndRequestClickDecide__,
    v5);
  EquipGraphListMenu__StatusRequest(this, v4, v6);
}


void __fastcall EquipGraphListMenu__EndCloseList(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall EquipGraphListMenu__EndCloseShowServantEquip(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct EquipGraphListViewManager_o *servantEquipListViewManager; // x20
  EquipGraphListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  const MethodInfo *v15; // x2

  if ( (byte_4BC7248 & 1) == 0 )
  {
    sub_1C1ABD4(&EquipGraphListViewManager_CallbackFunc_TypeInfo, method);
    sub_1C1ABD4(&Method_EquipGraphListMenu_OnSelectServantEquip__, v3);
    byte_4BC7248 = 1;
  }
  this->fields.state = 2;
  servantEquipListViewManager = this->fields.servantEquipListViewManager;
  v5 = (EquipGraphListViewManager_CallbackFunc_o *)sub_1C1AE20(EquipGraphListViewManager_CallbackFunc_TypeInfo);
  EquipGraphListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_EquipGraphListMenu_OnSelectServantEquip__,
    v6);
  if ( !servantEquipListViewManager )
    sub_1C1AE30(v7, v8);
  servantEquipListViewManager->fields.callbackFunc = v5;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&servantEquipListViewManager->fields.callbackFunc,
    (int64_t)v5,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  EquipGraphListViewManager__SetMode_39664692(servantEquipListViewManager, 2, v15);
}


void __fastcall EquipGraphListMenu__EndOpen(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  Il2CppObject *Instance; // x20
  TutorialFlag_ImageId_array *v7; // x0
  TutorialFlag_ImageId_array *v8; // x1
  il2cpp_array_size_t max_length; // w8
  int32_t modeKind; // w1

  if ( (byte_4BC723B & 1) == 0 )
  {
    sub_1C1ABD4(&TutorialFlag_ImageId___TypeInfo, method);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1C1ABD4(&TutorialFlag_TypeInfo, v4);
    byte_4BC723B = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_38884588(110, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = (TutorialFlag_ImageId_array *)sub_1C1AC7C(TutorialFlag_ImageId___TypeInfo, 2LL);
    if ( !v7 )
      goto LABEL_13;
    max_length = v7->max_length;
    v8 = v7;
    if ( !max_length || (v7->m_Items[1] = 4, max_length == 1) )
      sub_1C1AE38(v7, v7);
    v7->m_Items[2] = 5;
    if ( !Instance )
LABEL_13:
      sub_1C1AE30(v7, v8);
    CommonUI__OpenTutorialImageDialog((CommonUI_o *)Instance, v7, 110, 0LL, 0LL, 0LL, 0LL);
  }
  modeKind = this->fields.modeKind;
  this->fields.state = 2;
  EquipGraphListMenu__SetTabKind(this, modeKind, 0, v5);
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
      sub_1C1AE30(servantEquipListViewManager, isRequest);
    }
    EquipGraphListViewManager__SetMode_39664692(servantEquipListViewManager, 3, v6);
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
      sub_1C1AE30(servantEquipListViewManager, isRequest);
    }
    EquipGraphListViewManager__SetMode_39664692(servantEquipListViewManager, 3, v6);
  }
  EquipGraphListMenu__Callback(this, 1, this->fields.selectNum, v3);
}


void __fastcall EquipGraphListMenu__EndSelectEquip(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct EquipGraphListViewManager_o *servantEquipListViewManager; // x20
  EquipGraphListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  const MethodInfo *v15; // x2

  if ( (byte_4BC7246 & 1) == 0 )
  {
    sub_1C1ABD4(&EquipGraphListViewManager_CallbackFunc_TypeInfo, method);
    sub_1C1ABD4(&Method_EquipGraphListMenu_OnSelectServantEquip__, v3);
    byte_4BC7246 = 1;
  }
  this->fields.state = 2;
  servantEquipListViewManager = this->fields.servantEquipListViewManager;
  v5 = (EquipGraphListViewManager_CallbackFunc_o *)sub_1C1AE20(EquipGraphListViewManager_CallbackFunc_TypeInfo);
  EquipGraphListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_EquipGraphListMenu_OnSelectServantEquip__,
    v6);
  if ( !servantEquipListViewManager )
    sub_1C1AE30(v7, v8);
  servantEquipListViewManager->fields.callbackFunc = v5;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&servantEquipListViewManager->fields.callbackFunc,
    (int64_t)v5,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  EquipGraphListViewManager__SetMode_39664692(servantEquipListViewManager, 2, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu__EndShowServantEquip(
        EquipGraphListMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  const MethodInfo *v8; // x2
  Il2CppObject *Instance; // x20
  System_Action_o *v10; // x21

  if ( (byte_4BC7247 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, isDecide);
    sub_1C1ABD4(&Method_EquipGraphListMenu_EndCloseShowServantEquip__, v5);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_4BC7247 = 1;
  }
  if ( isDecide )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager
      || (EquipGraphListViewManager__ModifyList(servantEquipListViewManager, 0, method),
          (servantEquipListViewManager = this->fields.servantEquipListViewManager) == 0LL) )
    {
LABEL_9:
      sub_1C1AE30(servantEquipListViewManager, isDecide);
    }
    EquipGraphListViewManager__SetMode_39664692(servantEquipListViewManager, 3, v8);
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_EquipGraphListMenu_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantEquipStatusDialog((CommonUI_o *)Instance, v10, 0LL);
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
    sub_1C1AB78(p_requedstCallback, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
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
    sub_1C1AE30(0LL, method);
  EquipGraphListViewManager__DestroyList(servantEquipListViewManager, method);
  this->fields.modeKind = 0;
  this->fields.state = 0;
  this->fields.isInitTab = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall EquipGraphListMenu__OnClickCancel(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  ListViewManager_o *servantEquipListViewManager; // x0
  _QWORD *v6; // x0
  System_Reflection_MethodBase_o *v7; // x0
  EquipGraphListMenu_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_4BC7240 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_EquipGraphListMenu_EndRequestClickCancel__, method);
    sub_1C1ABD4(&Method_EquipGraphListMenu_OnClickCancel__, v3);
    sub_1C1ABD4(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4BC7240 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !this->fields.isSelectedSvt )
    {
      servantEquipListViewManager = (ListViewManager_o *)this->fields.servantEquipListViewManager;
      if ( !servantEquipListViewManager )
        sub_1C1AE30(0LL, method);
      ListViewManager__SetScrollBarValue(servantEquipListViewManager, 0LL);
    }
    this->fields.state = 3;
    v6 = Method_EquipGraphListMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_EquipGraphListMenu_OnClickCancel__ + 83) & 2) != 0 )
      v6 = (_QWORD *)sub_1C1ABEC(Method_EquipGraphListMenu_OnClickCancel__);
    v7 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v6, v6[4]);
    OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0, 0LL);
    v8 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_1C1AE20(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
    EquipGraphListMenu_RequestCallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_EquipGraphListMenu_EndRequestClickCancel__,
      v9);
    EquipGraphListMenu__StatusRequest(this, v8, v10);
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
      sub_1C1AE30(0LL, method);
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
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x1
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_4BC7249 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_EquipGraphListMenu_OnClickScaleChange__, method);
    byte_4BC7249 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_EquipGraphListMenu_OnClickScaleChange__;
    if ( (*((_BYTE *)Method_EquipGraphListMenu_OnClickScaleChange__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C1ABEC(Method_EquipGraphListMenu_OnClickScaleChange__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager
      || (EquipGraphListViewManager__ChangeIconScale(servantEquipListViewManager, v5),
          (servantEquipListViewManager = this->fields.servantEquipListViewManager) == 0LL)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          servantEquipListViewManager = (EquipGraphListViewManager_o *)EquipGraphListViewManager__GetScaleButtonSpriteName(
                                                                         servantEquipListViewManager,
                                                                         v5),
          !scaleChangeTabSprite) )
    {
      sub_1C1AE30(servantEquipListViewManager, v5);
    }
    UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)servantEquipListViewManager, 0LL);
  }
}


void __fastcall EquipGraphListMenu__OnClickTabChoice(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x3
  int32_t modeKind; // w8
  EquipGraphListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  EquipGraphListMenu_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2

  if ( (byte_4BC7243 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_EquipGraphListMenu_EndClickTabChoice__, method);
    sub_1C1ABD4(&Method_EquipGraphListMenu_OnClickTabChoice__, v3);
    sub_1C1ABD4(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4BC7243 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_EquipGraphListMenu_OnClickTabChoice__;
    if ( (*((_BYTE *)Method_EquipGraphListMenu_OnClickTabChoice__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C1ABEC(Method_EquipGraphListMenu_OnClickTabChoice__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 2 )
      {
        v9 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_1C1AE20(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
        EquipGraphListMenu_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_EquipGraphListMenu_EndClickTabChoice__,
          v10);
        EquipGraphListMenu__StatusRequest(this, v9, v11);
        return;
      }
      v12 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_1C1AE20(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
      EquipGraphListMenu_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_EquipGraphListMenu_EndClickTabChoice__,
        v13);
      EquipGraphListMenu__StatusRequest(this, v12, v14);
    }
    EquipGraphListMenu__SetTabKind(this, 2, 0, v7);
  }
}


void __fastcall EquipGraphListMenu__OnClickTabLock(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x3
  int32_t modeKind; // w8
  EquipGraphListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  EquipGraphListMenu_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2

  if ( (byte_4BC7242 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_EquipGraphListMenu_EndClickTabLock__, method);
    sub_1C1ABD4(&Method_EquipGraphListMenu_OnClickTabLock__, v3);
    sub_1C1ABD4(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4BC7242 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_EquipGraphListMenu_OnClickTabLock__;
    if ( (*((_BYTE *)Method_EquipGraphListMenu_OnClickTabLock__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C1ABEC(Method_EquipGraphListMenu_OnClickTabLock__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 1 )
      {
        v9 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_1C1AE20(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
        EquipGraphListMenu_RequestCallbackFunc___ctor(
          v9,
          (Il2CppObject *)this,
          Method_EquipGraphListMenu_EndClickTabLock__,
          v10);
        EquipGraphListMenu__StatusRequest(this, v9, v11);
        return;
      }
      v12 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_1C1AE20(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
      EquipGraphListMenu_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_EquipGraphListMenu_EndClickTabLock__,
        v13);
      EquipGraphListMenu__StatusRequest(this, v12, v14);
    }
    EquipGraphListMenu__SetTabKind(this, 1, 0, v7);
  }
}


void __fastcall EquipGraphListMenu__OnClickTabStatus(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  EquipGraphListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2

  if ( (byte_4BC7241 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_EquipGraphListMenu_EndClickTabStatus__, method);
    sub_1C1ABD4(&Method_EquipGraphListMenu_OnClickTabStatus__, v3);
    sub_1C1ABD4(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo, v4);
    byte_4BC7241 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v5 = Method_EquipGraphListMenu_OnClickTabStatus__;
    if ( (*((_BYTE *)Method_EquipGraphListMenu_OnClickTabStatus__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C1ABEC(Method_EquipGraphListMenu_OnClickTabStatus__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0LL);
    v7 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_1C1AE20(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
    EquipGraphListMenu_RequestCallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_EquipGraphListMenu_EndClickTabStatus__,
      v8);
    EquipGraphListMenu__StatusRequest(this, v7, v9);
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
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  EquipGraphListViewItem_o *Item; // x20
  int32_t modeKind; // w8
  struct EquipGraphListViewManager_o *v16; // x20
  EquipGraphListViewManager_CallbackFunc_o *v17; // x0
  const MethodInfo *v18; // x3
  intptr_t v19; // w2
  int32_t v20; // w8
  EquipGraphListViewManager_o *v21; // x21
  System_Action_o *v22; // x22
  const MethodInfo *v23; // x3
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  const MethodInfo *v26; // x3
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  Il2CppObject *Instance; // x21
  bool v30; // w22
  _QWORD *v31; // x0
  System_Reflection_MethodBase_o *v32; // x0
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  EquipGraphListViewManager_CallbackFunc_c *v35; // x0
  int64_t v36; // x21
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7
  const MethodInfo *v43; // x2
  UserServantEntity_o *userSvtEntity; // x20
  ServantStatusDialog_EndDelegate_o *v45; // x23

  if ( (byte_4BC7245 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1C1ABD4(&EquipGraphListViewManager_CallbackFunc_TypeInfo, v7);
    sub_1C1ABD4(&ServantStatusDialog_EndDelegate_TypeInfo, v8);
    sub_1C1ABD4(&Method_EquipGraphListMenu_EndSelectEquip__, v9);
    sub_1C1ABD4(&Method_EquipGraphListMenu_EndShowServantEquip__, v10);
    sub_1C1ABD4(&Method_EquipGraphListMenu_OnSelectServantEquip__, v11);
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    byte_4BC7245 = 1;
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
        v16 = this->fields.servantEquipListViewManager;
        v17 = (EquipGraphListViewManager_CallbackFunc_o *)sub_1C1AE20(EquipGraphListViewManager_CallbackFunc_TypeInfo);
        v19 = (int)Method_EquipGraphListMenu_OnSelectServantEquip__;
        goto LABEL_40;
      }
      v27 = Method_EquipGraphListMenu_OnSelectServantEquip__;
      if ( (*((_BYTE *)Method_EquipGraphListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
        v27 = (_QWORD *)sub_1C1ABEC(Method_EquipGraphListMenu_OnSelectServantEquip__);
      v28 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v27, v27[4]);
      if ( Item )
      {
        OverwriteAssetSoundName__PlaySystemSe(v28, 0, 0, 0LL);
        this->fields.state = 5;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        v30 = (Item->fields.wearerMember & 0x80000000) == 0 || Item->fields.isBase;
        userSvtEntity = Item->fields.userSvtEntity;
        v45 = (ServantStatusDialog_EndDelegate_o *)sub_1C1AE20(ServantStatusDialog_EndDelegate_TypeInfo);
        ServantStatusDialog_EndDelegate___ctor(
          v45,
          (Il2CppObject *)this,
          Method_EquipGraphListMenu_EndShowServantEquip__,
          0LL);
        if ( Instance )
        {
          CommonUI__OpenServantEquipStatusDialog_31114148((CommonUI_o *)Instance, 0, userSvtEntity, v30, v45, 0LL, 0LL);
          return;
        }
        goto LABEL_45;
      }
      OverwriteAssetSoundName__PlaySystemSe(v28, 2, 0, 0LL);
      this->fields.state = 2;
      v16 = this->fields.servantEquipListViewManager;
      v35 = EquipGraphListViewManager_CallbackFunc_TypeInfo;
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
          v24 = Method_EquipGraphListMenu_OnSelectServantEquip__;
          if ( (*((_BYTE *)Method_EquipGraphListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
            v24 = (_QWORD *)sub_1C1ABEC(Method_EquipGraphListMenu_OnSelectServantEquip__);
          v25 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v24, v24[4]);
          OverwriteAssetSoundName__PlaySystemSe(v25, 1, 0, 0LL);
          this->fields.state = 3;
          EquipGraphListMenu__Callback(this, 0, -1, v26);
        }
        return;
      }
      v20 = this->fields.modeKind;
      if ( v20 == 2 )
      {
        v31 = Method_EquipGraphListMenu_OnSelectServantEquip__;
        if ( (*((_BYTE *)Method_EquipGraphListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
          v31 = (_QWORD *)sub_1C1ABEC(Method_EquipGraphListMenu_OnSelectServantEquip__);
        v32 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v31, v31[4]);
        OverwriteAssetSoundName__PlaySystemSe(v32, 0, 0, 0LL);
        if ( !Item )
          goto LABEL_45;
        Item->fields.isSwapChoice ^= 1u;
      }
      else
      {
        if ( v20 != 1 )
        {
          if ( v20 )
            return;
          v21 = this->fields.servantEquipListViewManager;
          v22 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
          System_Action___ctor(v22, (Il2CppObject *)this, Method_EquipGraphListMenu_EndSelectEquip__, 0LL);
          if ( v21 )
          {
            EquipGraphListViewManager__SelectEquip(v21, Item, v22, v23);
            return;
          }
LABEL_45:
          sub_1C1AE30(servantEquipListViewManager, *(_QWORD *)&kind);
        }
        v33 = Method_EquipGraphListMenu_OnSelectServantEquip__;
        if ( (*((_BYTE *)Method_EquipGraphListMenu_OnSelectServantEquip__ + 83) & 2) != 0 )
          v33 = (_QWORD *)sub_1C1ABEC(Method_EquipGraphListMenu_OnSelectServantEquip__);
        v34 = (System_Reflection_MethodBase_o *)sub_1C1ABB8(v33, v33[4]);
        OverwriteAssetSoundName__PlaySystemSe(v34, 11, 0, 0LL);
        if ( !Item )
          goto LABEL_45;
        Item->fields.isSwapLock ^= 1u;
      }
      this->fields.state = 2;
      v16 = this->fields.servantEquipListViewManager;
      v35 = EquipGraphListViewManager_CallbackFunc_TypeInfo;
    }
    v17 = (EquipGraphListViewManager_CallbackFunc_o *)sub_1C1AE20(v35);
    v19 = (int)Method_EquipGraphListMenu_OnSelectServantEquip__;
LABEL_40:
    v36 = (int64_t)v17;
    EquipGraphListViewManager_CallbackFunc___ctor(v17, (Il2CppObject *)this, v19, v18);
    if ( v16 )
    {
      v16->fields.callbackFunc = (struct EquipGraphListViewManager_CallbackFunc_o *)v36;
      sub_1C1AB78((PartyOrganizationUtility_o *)&v16->fields.callbackFunc, v36, v37, v38, v39, v40, v41, v42);
      EquipGraphListViewManager__SetMode_39664692(v16, 2, v43);
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
  const MethodInfo *v26; // x5
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v29; // x20

  v13 = this;
  if ( (byte_4BC7239 & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, baseDeckItemList);
    this = (EquipGraphListMenu_o *)sub_1C1ABD4(&Method_EquipGraphListMenu_EndOpen__, v14);
    byte_4BC7239 = 1;
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
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&v13->fields.callbackFunc,
        (int64_t)callback,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
      this = (EquipGraphListMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v13, 0LL);
      if ( !this )
        goto LABEL_17;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      EquipGraphListMenu__SetTabKind(v13, v13->fields.modeKind, 1, v24);
      this = (EquipGraphListMenu_o *)v13->fields.titleInfo;
      if ( !this )
        goto LABEL_17;
      TitleInfoControl__setTitleInfo((TitleInfoControl_o *)this, 0LL, 1, 0LL, 23, 0LL);
      this = (EquipGraphListMenu_o *)v13->fields.titleInfo;
      if ( !this )
        goto LABEL_17;
      TitleInfoControl__setBackBtnSprite_38338644((TitleInfoControl_o *)this, 1, 0, 0, 0LL);
      servantEquipListViewManager = v13->fields.servantEquipListViewManager;
      if ( !servantEquipListViewManager )
        sub_1C1AE30(0LL, v25);
      EquipGraphListViewManager__CreateList(
        servantEquipListViewManager,
        baseDeckItemList,
        partyItem,
        member,
        setupInfo,
        v26);
      this = (EquipGraphListMenu_o *)v13->fields.servantEquipListViewManager;
      if ( !this
        || (scaleChangeTabSprite = v13->fields.scaleChangeTabSprite,
            this = (EquipGraphListMenu_o *)EquipGraphListViewManager__GetScaleButtonSpriteName(
                                             (EquipGraphListViewManager_o *)this,
                                             (const MethodInfo *)baseDeckItemList),
            !scaleChangeTabSprite) )
      {
LABEL_17:
        sub_1C1AE30(this, baseDeckItemList);
      }
      UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)this, 0LL);
      v13->fields.state = 1;
      v29 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(v29, (Il2CppObject *)v13, Method_EquipGraphListMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)v13, v29, 0LL);
    }
  }
  else
  {
    v13->fields.callbackFunc = callback;
    sub_1C1AB78(
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
    EquipGraphListMenu__SetTabKind(v13, modeKind, 0, v17);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu__Open_39661628(
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
  int32_t state; // w8
  int32_t modeKind; // w1
  const MethodInfo *v16; // x3
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  const MethodInfo *v23; // x3
  __int64 v24; // x1
  const MethodInfo *v25; // x4
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v28; // x20

  v12 = this;
  if ( (byte_4BC723A & 1) == 0 )
  {
    sub_1C1ABD4(&System_Action_TypeInfo, partyItem);
    this = (EquipGraphListMenu_o *)sub_1C1ABD4(&Method_EquipGraphListMenu_EndOpen__, v13);
    byte_4BC723A = 1;
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
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&v12->fields.callbackFunc,
        (int64_t)callback,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
      this = (EquipGraphListMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0LL);
      if ( !this )
        goto LABEL_17;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      EquipGraphListMenu__SetTabKind(v12, v12->fields.modeKind, 1, v23);
      this = (EquipGraphListMenu_o *)v12->fields.titleInfo;
      if ( !this )
        goto LABEL_17;
      TitleInfoControl__setTitleInfo((TitleInfoControl_o *)this, 0LL, 1, 0LL, 23, 0LL);
      this = (EquipGraphListMenu_o *)v12->fields.titleInfo;
      if ( !this )
        goto LABEL_17;
      TitleInfoControl__setBackBtnSprite_38338644((TitleInfoControl_o *)this, 1, 0, 0, 0LL);
      servantEquipListViewManager = v12->fields.servantEquipListViewManager;
      if ( !servantEquipListViewManager )
        sub_1C1AE30(0LL, v24);
      EquipGraphListViewManager__CreateList_39662548(servantEquipListViewManager, partyItem, member, setupInfo, v25);
      this = (EquipGraphListMenu_o *)v12->fields.servantEquipListViewManager;
      if ( !this
        || (scaleChangeTabSprite = v12->fields.scaleChangeTabSprite,
            this = (EquipGraphListMenu_o *)EquipGraphListViewManager__GetScaleButtonSpriteName(
                                             (EquipGraphListViewManager_o *)this,
                                             (const MethodInfo *)partyItem),
            !scaleChangeTabSprite) )
      {
LABEL_17:
        sub_1C1AE30(this, partyItem);
      }
      UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)this, 0LL);
      v12->fields.state = 1;
      v28 = (System_Action_o *)sub_1C1AE20(System_Action_TypeInfo);
      System_Action___ctor(v28, (Il2CppObject *)v12, Method_EquipGraphListMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)v12, v28, 0LL);
    }
  }
  else
  {
    v12->fields.callbackFunc = callback;
    sub_1C1AB78(
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
    EquipGraphListMenu__SetTabKind(v12, modeKind, 0, v16);
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
  bool v18; // w21
  __int64 *v19; // x8
  bool v20; // w23
  unsigned int v21; // w21
  UICommonButton_o *statusTabButton; // x22
  bool enabled; // w0
  __int64 *v24; // x8
  UICommonButton_o *lockTabButton; // x22
  bool v26; // w0
  __int64 *v27; // x8
  UICommonButton_o *choiceTabButton; // x22
  bool v29; // w0
  UILabel_o *explanationLabel; // x21
  __int64 *v31; // x8
  int32_t state; // w8
  struct EquipGraphListViewManager_o *servantEquipListViewManager; // x21
  EquipGraphListViewManager_CallbackFunc_o *v34; // x20
  const MethodInfo *v35; // x3
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  int32_t v42; // w1

  v6 = this;
  if ( (byte_4BC723D & 1) == 0 )
  {
    sub_1C1ABD4(&EquipGraphListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&modeKind);
    sub_1C1ABD4(&Method_EquipGraphListMenu_OnSelectServantEquip__, v7);
    sub_1C1ABD4(&LocalizationManager_TypeInfo, v8);
    sub_1C1ABD4(&StringLiteral_11799/*"SERVANT_EQUIP_OPERATION_EXPLANATION_CHOICE"*/, v9);
    sub_1C1ABD4(&StringLiteral_17931/*"button_allchoice_reg"*/, v10);
    sub_1C1ABD4(&StringLiteral_17934/*"button_alllock_unreg"*/, v11);
    sub_1C1ABD4(&StringLiteral_11801/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/, v12);
    sub_1C1ABD4(&StringLiteral_11800/*"SERVANT_EQUIP_OPERATION_EXPLANATION_LOCK"*/, v13);
    sub_1C1ABD4(&StringLiteral_17947/*"button_select_reg"*/, v14);
    sub_1C1ABD4(&StringLiteral_17948/*"button_select_unreg"*/, v15);
    sub_1C1ABD4(&StringLiteral_17933/*"button_alllock_reg"*/, v16);
    this = (EquipGraphListMenu_o *)sub_1C1ABD4(&StringLiteral_17932/*"button_allchoice_unreg"*/, v17);
    byte_4BC723D = 1;
  }
  v18 = !v6->fields.isInitTab || isInit;
  if ( v18 || v6->fields.modeKind != modeKind )
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
    v19 = &StringLiteral_17947/*"button_select_reg"*/;
    if ( modeKind )
      v19 = &StringLiteral_17948/*"button_select_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v19, 0LL);
    this = (EquipGraphListMenu_o *)v6->fields.statusTabButton;
    if ( !this )
      goto LABEL_46;
    v20 = !v18;
    v21 = !v18;
    this = (EquipGraphListMenu_o *)((__int64 (__fastcall *)(EquipGraphListMenu_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                                     this,
                                     0LL,
                                     v21,
                                     this->klass[1]._1.interfaceOffsets);
    statusTabButton = v6->fields.statusTabButton;
    if ( !statusTabButton )
      goto LABEL_46;
    enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v6->fields.statusTabButton, 0LL);
    UICommonButton__SetColliderEnable(statusTabButton, enabled, v21, 0LL);
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
    v24 = &StringLiteral_17933/*"button_alllock_reg"*/;
    if ( modeKind != 1 )
      v24 = &StringLiteral_17934/*"button_alllock_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v24, 0LL);
    this = (EquipGraphListMenu_o *)v6->fields.lockTabButton;
    if ( !this )
      goto LABEL_46;
    this = (EquipGraphListMenu_o *)((__int64 (__fastcall *)(EquipGraphListMenu_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                                     this,
                                     0LL,
                                     v20,
                                     this->klass[1]._1.interfaceOffsets);
    lockTabButton = v6->fields.lockTabButton;
    if ( !lockTabButton )
      goto LABEL_46;
    v26 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v6->fields.lockTabButton, 0LL);
    UICommonButton__SetColliderEnable(lockTabButton, v26, v20, 0LL);
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
    v27 = &StringLiteral_17931/*"button_allchoice_reg"*/;
    if ( modeKind != 2 )
      v27 = &StringLiteral_17932/*"button_allchoice_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v27, 0LL);
    this = (EquipGraphListMenu_o *)v6->fields.choiceTabButton;
    if ( !this )
      goto LABEL_46;
    this = (EquipGraphListMenu_o *)((__int64 (__fastcall *)(EquipGraphListMenu_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                                     this,
                                     0LL,
                                     v20,
                                     this->klass[1]._1.interfaceOffsets);
    choiceTabButton = v6->fields.choiceTabButton;
    if ( !choiceTabButton )
      goto LABEL_46;
    v29 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v6->fields.choiceTabButton, 0LL);
    UICommonButton__SetColliderEnable(choiceTabButton, v29, v20, 0LL);
    if ( modeKind == 2 )
    {
      explanationLabel = v6->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v31 = &StringLiteral_11799/*"SERVANT_EQUIP_OPERATION_EXPLANATION_CHOICE"*/;
    }
    else if ( modeKind == 1 )
    {
      explanationLabel = v6->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v31 = &StringLiteral_11800/*"SERVANT_EQUIP_OPERATION_EXPLANATION_LOCK"*/;
    }
    else
    {
      if ( modeKind )
        goto LABEL_40;
      explanationLabel = v6->fields.explanationLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v31 = &StringLiteral_11801/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/;
    }
    this = (EquipGraphListMenu_o *)LocalizationManager__Get((System_String_o *)*v31, 0LL);
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
      v42 = 1;
      goto LABEL_45;
    }
LABEL_46:
    sub_1C1AE30(this, *(_QWORD *)&modeKind);
  }
  v34 = (EquipGraphListViewManager_CallbackFunc_o *)sub_1C1AE20(EquipGraphListViewManager_CallbackFunc_TypeInfo);
  EquipGraphListViewManager_CallbackFunc___ctor(
    v34,
    (Il2CppObject *)v6,
    (intptr_t)Method_EquipGraphListMenu_OnSelectServantEquip__,
    v35);
  if ( !servantEquipListViewManager )
    goto LABEL_46;
  servantEquipListViewManager->fields.callbackFunc = v34;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)&servantEquipListViewManager->fields.callbackFunc,
    (int64_t)v34,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41);
  v42 = 2;
LABEL_45:
  EquipGraphListViewManager__SetMode_39664692(servantEquipListViewManager, v42, (const MethodInfo *)isInit);
}


void __fastcall EquipGraphListMenu__StatusRequest(
        EquipGraphListMenu_o *this,
        EquipGraphListMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  int32_t modeKind; // w8
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  NetworkManager_ResultCallbackFunc_o *v17; // x20
  System_Int64_array *v18; // x1
  System_Int64_array *v19; // x2
  bool v20; // w4
  bool v21; // w5
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  NetworkManager_ResultCallbackFunc_o *v28; // x20
  System_Int64_array *v29; // [xsp+0h] [xbp-40h] BYREF
  System_Int64_array *choiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *unlockList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *lockList; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4BC7244 & 1) == 0 )
  {
    sub_1C1ABD4(&Method_EquipGraphListMenu_EndStatusSync__, callback);
    sub_1C1ABD4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v6);
    sub_1C1ABD4(&NetworkManager_TypeInfo, v7);
    sub_1C1ABD4(&NetworkManager_ResultCallbackFunc_TypeInfo, v8);
    byte_4BC7244 = 1;
  }
  unlockList = 0LL;
  lockList = 0LL;
  v29 = 0LL;
  choiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager )
      goto LABEL_21;
    if ( EquipGraphListViewManager__GetSwapChoiceList(servantEquipListViewManager, &choiceList, &v29, v3) )
    {
      this->fields.requedstCallback = callback;
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&this->fields.requedstCallback,
        (int64_t)callback,
        v22,
        v23,
        v24,
        v25,
        v26,
        v27);
      v28 = (NetworkManager_ResultCallbackFunc_o *)sub_1C1AE20(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v28,
        (Il2CppObject *)this,
        Method_EquipGraphListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      servantEquipListViewManager = (EquipGraphListViewManager_o *)NetworkManager__getRequest_object_(
                                                                     v28,
                                                                     (const MethodInfo_3023C78 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( servantEquipListViewManager )
      {
        v19 = v29;
        v18 = choiceList;
        v21 = 1;
        v20 = 0;
        goto LABEL_17;
      }
LABEL_21:
      sub_1C1AE30(servantEquipListViewManager, callback);
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
      sub_1C1AB78(
        (PartyOrganizationUtility_o *)&this->fields.requedstCallback,
        (int64_t)callback,
        v11,
        v12,
        v13,
        v14,
        v15,
        v16);
      v17 = (NetworkManager_ResultCallbackFunc_o *)sub_1C1AE20(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v17,
        (Il2CppObject *)this,
        Method_EquipGraphListMenu_EndStatusSync__,
        0LL);
      if ( !NetworkManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      servantEquipListViewManager = (EquipGraphListViewManager_o *)NetworkManager__getRequest_object_(
                                                                     v17,
                                                                     (const MethodInfo_3023C78 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( servantEquipListViewManager )
      {
        v19 = unlockList;
        v18 = lockList;
        v20 = 1;
        v21 = 0;
LABEL_17:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)servantEquipListViewManager,
          v18,
          v19,
          0,
          v20,
          v21,
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

  if ( (byte_4BC7237 & 1) == 0 )
  {
    sub_1C1ABD4(&EquipGraphListMenu_CallbackFunc_TypeInfo, value);
    byte_4BC7237 = 1;
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
    v9 = sub_1C560C4(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C1B0F0(v8);
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

  if ( (byte_4BC7238 & 1) == 0 )
  {
    sub_1C1ABD4(&EquipGraphListMenu_CallbackFunc_TypeInfo, value);
    byte_4BC7238 = 1;
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
    v9 = sub_1C560C4(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C1B0F0(v8);
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
  sub_1C1AB78(
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
  if ( (sub_1C1AC94(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C1AE4C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C1ACFC(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A5C5A4;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A5C54C;
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
  if ( (byte_4BC724B & 1) == 0 )
  {
    sub_1C1ABD4(&EquipGraphListMenu_ResultKind_TypeInfo, *(_QWORD *)&result);
    byte_4BC724B = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(EquipGraphListMenu_ResultKind_TypeInfo, &v12, item, callback, object);
  v11[1] = (__int64)item;
  return (System_IAsyncResult_o *)sub_1C1AB88(this, v11, callback, object);
}


void __fastcall EquipGraphListMenu_CallbackFunc__EndInvoke(
        EquipGraphListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C1AB8C(result, 0LL, method);
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
  sub_1C1AB78(
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
  if ( (sub_1C1AC94(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C1AE4C(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C1ACFC(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A5C600;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A5C5B8;
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
  if ( (byte_4BC724C & 1) == 0 )
  {
    sub_1C1ABD4(&bool_TypeInfo, isRequest);
    byte_4BC724C = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C1AB88(this, v9, callback, object);
}


void __fastcall EquipGraphListMenu_RequestCallbackFunc__EndInvoke(
        EquipGraphListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C1AB8C(result, 0LL, method);
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
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BC724D & 1) == 0 )
  {
    sub_1C1ABD4(&EquipGraphListMenu___c_TypeInfo, v1);
    byte_4BC724D = 1;
  }
  v2 = (Il2CppObject *)sub_1C1AE20(EquipGraphListMenu___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  EquipGraphListMenu___c_TypeInfo->static_fields->__9 = (struct EquipGraphListMenu___c_o *)v2;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)EquipGraphListMenu___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
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

  if ( (byte_4BC724E & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, isDecide);
    byte_4BC724E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v4);
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

  if ( (byte_4BC724F & 1) == 0 )
  {
    sub_1C1ABD4(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, isDecide);
    byte_4BC724F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_387A8A8 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1C1AE30(0LL, v4);
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0LL);
}