void __fastcall EquipGraphListMenu___ctor(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_40FE2EE & 1) == 0 )
  {
    sub_B16FFC(&BaseMenu_TypeInfo, method);
    byte_40FE2EE = 1;
  }
  if ( (BYTE3(BaseMenu_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseMenu_TypeInfo->_2.cctor_finished )
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  EquipGraphListMenu_CallbackFunc_o *callbackFunc; // x20
  BattleServantConfConponent_o *p_callbackFunc; // x21
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  EquipGraphListViewItem_o *Item; // x22

  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
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
        sub_B170D4();
      Item = EquipGraphListViewManager__GetItem(servantEquipListViewManager, n, 0LL);
    }
    p_callbackFunc->klass = 0LL;
    sub_B16F98(p_callbackFunc, 0LL, *(System_String_array ***)&n, (System_String_array **)method, v4, v5, v6, v7);
    EquipGraphListMenu_CallbackFunc__Invoke(callbackFunc, result, Item, 0LL);
  }
}


void __fastcall EquipGraphListMenu__Close(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EquipGraphListMenu__Close_33217824(this, 0LL, v2);
}


void __fastcall EquipGraphListMenu__Close_33217824(
        EquipGraphListMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  int32_t modeKind; // w1
  const MethodInfo *v12; // x3
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x4
  System_Action_o *v17; // x20

  if ( (byte_40FE2E0 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_EquipGraphListMenu_EndClose__, v10);
    byte_40FE2E0 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  modeKind = this->fields.modeKind;
  this->fields.state = 4;
  EquipGraphListMenu__SetTabKind(this, modeKind, 0, v12);
  v17 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v13, v14, v15, v16);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_EquipGraphListMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v17, 0LL);
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
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  struct EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  __int64 selectNum; // x1
  struct EquipGraphServantItem_o *servantItemInfo; // x21
  UserServantEntity_o *userServantEntity; // x0
  EventServantEntity_o *EventServant; // x0
  EventServantEntity_o *v19; // x20
  UserServantEntity_o *v20; // x0
  bool IsNoPeriod; // w0
  System_String_o *v22; // x21
  Il2CppObject *EndTimeStr; // x0
  System_String_o *v24; // x20
  CommonUI_o *Instance; // x21
  System_String_o *v26; // x22
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  System_Action_o *v31; // x23
  ListViewManager_o *v32; // x0
  EquipGraphListMenu_RequestCallbackFunc_o *v33; // x20
  const MethodInfo *v34; // x2

  if ( (byte_40FE2E2 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_EquipGraphListMenu_EndCloseEventServantWarning__, v3);
    sub_B16FFC(&Method_EquipGraphListMenu_EndRequestClickDecide__, v4);
    sub_B16FFC(&LocalizationManager_TypeInfo, v5);
    sub_B16FFC(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B16FFC(&SoundManager_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_5511, v9);
    sub_B16FFC(&StringLiteral_5512, v10);
    byte_40FE2E2 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  servantEquipListViewManager = this->fields.servantEquipListViewManager;
  this->fields.state = 3;
  if ( !servantEquipListViewManager )
    goto LABEL_25;
  selectNum = (unsigned int)this->fields.selectNum;
  if ( (selectNum & 0x80000000) != 0
    || (servantItemInfo = servantEquipListViewManager->fields.servantItemInfo,
        !EquipGraphListViewManager__GetItem(servantEquipListViewManager, selectNum, 0LL)) )
  {
    if ( !this->fields.isSelectedSvt )
    {
      v32 = (ListViewManager_o *)this->fields.servantEquipListViewManager;
      if ( !v32 )
        goto LABEL_25;
      ListViewManager__SetScrollBarValue(v32, 0LL);
    }
  }
  else
  {
    if ( !servantItemInfo )
      goto LABEL_25;
    userServantEntity = servantItemInfo->fields.userServantEntity;
    if ( !userServantEntity )
      goto LABEL_25;
    EventServant = UserServantEntity__getEventServant(userServantEntity, 0LL);
    if ( !servantItemInfo->fields.userServantEntity )
      goto LABEL_25;
    v19 = EventServant;
    if ( UserServantEntity__IsEventJoin(servantItemInfo->fields.userServantEntity, 0LL) )
    {
      v20 = servantItemInfo->fields.userServantEntity;
      if ( !v20 )
        goto LABEL_25;
      IsNoPeriod = UserServantEntity__IsNoPeriod(v20, 0LL);
      if ( v19 )
      {
        if ( !IsNoPeriod )
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v22 = LocalizationManager__Get((System_String_o *)StringLiteral_5511, 0LL);
          EndTimeStr = (Il2CppObject *)EventServantEntity__getEndTimeStr(v19, 0LL);
          v24 = System_String__Format(v22, EndTimeStr, 0LL);
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v26 = LocalizationManager__Get((System_String_o *)StringLiteral_5512, 0LL);
          v31 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v27, v28, v29, v30);
          System_Action___ctor(v31, (Il2CppObject *)this, Method_EquipGraphListMenu_EndCloseEventServantWarning__, 0LL);
          if ( Instance )
          {
            CommonUI__OpenNotificationDialog(Instance, v26, v24, v31, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0LL);
            return;
          }
LABEL_25:
          sub_B170D4();
        }
      }
    }
  }
  v33 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                      EquipGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                      selectNum,
                                                      v11,
                                                      v12,
                                                      v13);
  EquipGraphListMenu_RequestCallbackFunc___ctor(
    v33,
    (Il2CppObject *)this,
    Method_EquipGraphListMenu_EndRequestClickDecide__,
    0LL);
  EquipGraphListMenu__StatusRequest(this, v33, v34);
}


void __fastcall EquipGraphListMenu__EndClickTabChoice(
        EquipGraphListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  EquipGraphListViewManager_o *v6; // x0

  if ( isRequest )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager
      || (EquipGraphListViewManager__ModifyList(servantEquipListViewManager, 0, 0LL),
          (v6 = this->fields.servantEquipListViewManager) == 0LL) )
    {
      sub_B170D4();
    }
    EquipGraphListViewManager__SetMode_29304608(v6, 3, 0LL);
  }
  EquipGraphListMenu__SetTabKind(this, 2, 0, v3);
}


void __fastcall EquipGraphListMenu__EndClickTabLock(
        EquipGraphListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  EquipGraphListViewManager_o *v6; // x0

  if ( isRequest )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager
      || (EquipGraphListViewManager__ModifyList(servantEquipListViewManager, 0, 0LL),
          (v6 = this->fields.servantEquipListViewManager) == 0LL) )
    {
      sub_B170D4();
    }
    EquipGraphListViewManager__SetMode_29304608(v6, 3, 0LL);
  }
  EquipGraphListMenu__SetTabKind(this, 1, 0, v3);
}


void __fastcall EquipGraphListMenu__EndClickTabStatus(
        EquipGraphListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  EquipGraphListViewManager_o *v6; // x0

  if ( isRequest )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager
      || (EquipGraphListViewManager__ModifyList(servantEquipListViewManager, 0, 0LL),
          (v6 = this->fields.servantEquipListViewManager) == 0LL) )
    {
      sub_B170D4();
    }
    EquipGraphListViewManager__SetMode_29304608(v6, 3, 0LL);
  }
  EquipGraphListMenu__SetTabKind(this, 0, 0, v3);
}


void __fastcall EquipGraphListMenu__EndClose(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  EquipGraphListMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B16F98(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall EquipGraphListMenu__EndCloseEventServantWarning(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  EquipGraphListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_40FE2E3 & 1) == 0 )
  {
    sub_B16FFC(&Method_EquipGraphListMenu_EndRequestClickDecide__, method);
    sub_B16FFC(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo, v6);
    byte_40FE2E3 = 1;
  }
  v7 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                     EquipGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                     method,
                                                     v2,
                                                     v3,
                                                     v4);
  EquipGraphListMenu_RequestCallbackFunc___ctor(
    v7,
    (Il2CppObject *)this,
    Method_EquipGraphListMenu_EndRequestClickDecide__,
    0LL);
  EquipGraphListMenu__StatusRequest(this, v7, v8);
}


void __fastcall EquipGraphListMenu__EndCloseList(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall EquipGraphListMenu__EndCloseShowServantEquip(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  EquipGraphListViewManager_o *servantEquipListViewManager; // x20
  EquipGraphListViewManager_CallbackFunc_o *v8; // x21

  if ( (byte_40FE2EC & 1) == 0 )
  {
    sub_B16FFC(&EquipGraphListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_EquipGraphListMenu_OnSelectServantEquip__, v6);
    byte_40FE2EC = 1;
  }
  this->fields.state = 2;
  servantEquipListViewManager = this->fields.servantEquipListViewManager;
  v8 = (EquipGraphListViewManager_CallbackFunc_o *)sub_B170CC(
                                                     EquipGraphListViewManager_CallbackFunc_TypeInfo,
                                                     method,
                                                     v2,
                                                     v3,
                                                     v4);
  EquipGraphListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_EquipGraphListMenu_OnSelectServantEquip__,
    0LL);
  if ( !servantEquipListViewManager )
    sub_B170D4();
  EquipGraphListViewManager__SetMode(servantEquipListViewManager, 2, v8, 0LL);
}


void __fastcall EquipGraphListMenu__EndOpen(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  CommonUI_o *Instance; // x20
  __int64 v7; // x2
  TutorialFlag_ImageId_array *v8; // x0
  __int64 v9; // x2
  il2cpp_array_size_t max_length; // w8

  if ( (byte_40FE2DF & 1) == 0 )
  {
    sub_B16FFC(&TutorialFlag_ImageId___TypeInfo, method);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B16FFC(&TutorialFlag_TypeInfo, v4);
    byte_40FE2DF = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_28023340(110, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (TutorialFlag_ImageId_array *)sub_B17014(TutorialFlag_ImageId___TypeInfo, 2LL, v7);
    if ( !v8 )
      goto LABEL_14;
    max_length = v8->max_length;
    if ( !max_length || (v8->m_Items[1] = 4, max_length == 1) )
    {
      sub_B17100(v8, v8, v9);
      sub_B170A0();
    }
    v8->m_Items[2] = 5;
    if ( !Instance )
LABEL_14:
      sub_B170D4();
    CommonUI__OpenTutorialImageDialog(Instance, v8, 110, 0LL, 0LL, 0LL, 0LL);
  }
  this->fields.state = 2;
  EquipGraphListMenu__SetTabKind(this, this->fields.modeKind, 0, v5);
}


void __fastcall EquipGraphListMenu__EndRequestClickCancel(
        EquipGraphListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  EquipGraphListViewManager_o *v6; // x0

  if ( isRequest )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager
      || (EquipGraphListViewManager__ModifyList(servantEquipListViewManager, 0, 0LL),
          (v6 = this->fields.servantEquipListViewManager) == 0LL) )
    {
      sub_B170D4();
    }
    EquipGraphListViewManager__SetMode_29304608(v6, 3, 0LL);
  }
  EquipGraphListMenu__Callback(this, 0, -1, v3);
}


void __fastcall EquipGraphListMenu__EndRequestClickDecide(
        EquipGraphListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  EquipGraphListViewManager_o *v6; // x0

  if ( isRequest )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager
      || (EquipGraphListViewManager__ModifyList(servantEquipListViewManager, 0, 0LL),
          (v6 = this->fields.servantEquipListViewManager) == 0LL) )
    {
      sub_B170D4();
    }
    EquipGraphListViewManager__SetMode_29304608(v6, 3, 0LL);
  }
  EquipGraphListMenu__Callback(this, 1, this->fields.selectNum, v3);
}


void __fastcall EquipGraphListMenu__EndSelectEquip(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  EquipGraphListViewManager_o *servantEquipListViewManager; // x20
  EquipGraphListViewManager_CallbackFunc_o *v8; // x21

  if ( (byte_40FE2EA & 1) == 0 )
  {
    sub_B16FFC(&EquipGraphListViewManager_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_EquipGraphListMenu_OnSelectServantEquip__, v6);
    byte_40FE2EA = 1;
  }
  this->fields.state = 2;
  servantEquipListViewManager = this->fields.servantEquipListViewManager;
  v8 = (EquipGraphListViewManager_CallbackFunc_o *)sub_B170CC(
                                                     EquipGraphListViewManager_CallbackFunc_TypeInfo,
                                                     method,
                                                     v2,
                                                     v3,
                                                     v4);
  EquipGraphListViewManager_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_EquipGraphListMenu_OnSelectServantEquip__,
    0LL);
  if ( !servantEquipListViewManager )
    sub_B170D4();
  EquipGraphListViewManager__SetMode(servantEquipListViewManager, 2, v8, 0LL);
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
  EquipGraphListViewManager_o *v8; // x0
  CommonUI_o *Instance; // x20
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  System_Action_o *v14; // x21

  if ( (byte_40FE2EB & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&Method_EquipGraphListMenu_EndCloseShowServantEquip__, v5);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_40FE2EB = 1;
  }
  if ( isDecide )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager
      || (EquipGraphListViewManager__ModifyList(servantEquipListViewManager, 0, 0LL),
          (v8 = this->fields.servantEquipListViewManager) == 0LL) )
    {
LABEL_9:
      sub_B170D4();
    }
    EquipGraphListViewManager__SetMode_29304608(v8, 3, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v10, v11, v12, v13);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_EquipGraphListMenu_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantEquipStatusDialog(Instance, v14, 0LL);
}


void __fastcall EquipGraphListMenu__EndStatusSync(
        EquipGraphListMenu_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_requedstCallback; // x0
  EquipGraphListMenu_RequestCallbackFunc_o *v9; // x19
  struct EquipGraphListMenu_RequestCallbackFunc_o *requedstCallback; // t1

  requedstCallback = this->fields.requedstCallback;
  p_requedstCallback = (BattleServantConfConponent_o *)&this->fields.requedstCallback;
  v9 = requedstCallback;
  if ( requedstCallback )
  {
    p_requedstCallback->klass = 0LL;
    sub_B16F98(p_requedstCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    EquipGraphListMenu_RequestCallbackFunc__Invoke(v9, 1, 0LL);
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
    sub_B170D4();
  EquipGraphListViewManager__DestroyList(servantEquipListViewManager, 0LL);
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
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  EquipGraphListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2

  if ( (byte_40FE2E4 & 1) == 0 )
  {
    sub_B16FFC(&Method_EquipGraphListMenu_EndRequestClickCancel__, method);
    sub_B16FFC(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FE2E4 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !this->fields.isSelectedSvt )
    {
      servantEquipListViewManager = (ListViewManager_o *)this->fields.servantEquipListViewManager;
      if ( !servantEquipListViewManager )
        sub_B170D4();
      ListViewManager__SetScrollBarValue(servantEquipListViewManager, 0LL);
    }
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    v10 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                        EquipGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                        v6,
                                                        v7,
                                                        v8,
                                                        v9);
    EquipGraphListMenu_RequestCallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_EquipGraphListMenu_EndRequestClickCancel__,
      0LL);
    EquipGraphListMenu__StatusRequest(this, v10, v11);
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
      sub_B170D4();
    SelectItem = EquipGraphListViewManager__GetSelectItem(servantEquipListViewManager, 0LL);
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
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  EquipGraphListViewManager_o *v4; // x0
  UISprite_o *scaleChangeTabSprite; // x19
  System_String_o *ScaleButtonSpriteName; // x0

  if ( (byte_40FE2ED & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FE2ED = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager
      || (EquipGraphListViewManager__ChangeIconScale(servantEquipListViewManager, 0LL),
          (v4 = this->fields.servantEquipListViewManager) == 0LL)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          ScaleButtonSpriteName = EquipGraphListViewManager__GetScaleButtonSpriteName(v4, 0LL),
          !scaleChangeTabSprite) )
    {
      sub_B170D4();
    }
    UISprite__set_spriteName(scaleChangeTabSprite, ScaleButtonSpriteName, 0LL);
  }
}


void __fastcall EquipGraphListMenu__OnClickTabChoice(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x3
  __int64 v8; // x4
  int32_t modeKind; // w8
  EquipGraphListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2
  EquipGraphListMenu_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x2

  if ( (byte_40FE2E7 & 1) == 0 )
  {
    sub_B16FFC(&Method_EquipGraphListMenu_EndClickTabChoice__, method);
    sub_B16FFC(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FE2E7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 2 )
      {
        v10 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                            EquipGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                            v5,
                                                            v6,
                                                            v7,
                                                            v8);
        EquipGraphListMenu_RequestCallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_EquipGraphListMenu_EndClickTabChoice__,
          0LL);
        EquipGraphListMenu__StatusRequest(this, v10, v11);
        return;
      }
      v12 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                          EquipGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                          v5,
                                                          v6,
                                                          v7,
                                                          v8);
      EquipGraphListMenu_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_EquipGraphListMenu_EndClickTabChoice__,
        0LL);
      EquipGraphListMenu__StatusRequest(this, v12, v13);
    }
    EquipGraphListMenu__SetTabKind(this, 2, 0, v7);
  }
}


void __fastcall EquipGraphListMenu__OnClickTabLock(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  const MethodInfo *v7; // x3
  __int64 v8; // x4
  int32_t modeKind; // w8
  EquipGraphListMenu_RequestCallbackFunc_o *v10; // x20
  const MethodInfo *v11; // x2
  EquipGraphListMenu_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x2

  if ( (byte_40FE2E6 & 1) == 0 )
  {
    sub_B16FFC(&Method_EquipGraphListMenu_EndClickTabLock__, method);
    sub_B16FFC(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FE2E6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    modeKind = this->fields.modeKind;
    if ( modeKind )
    {
      if ( modeKind == 1 )
      {
        v10 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                            EquipGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                            v5,
                                                            v6,
                                                            v7,
                                                            v8);
        EquipGraphListMenu_RequestCallbackFunc___ctor(
          v10,
          (Il2CppObject *)this,
          Method_EquipGraphListMenu_EndClickTabLock__,
          0LL);
        EquipGraphListMenu__StatusRequest(this, v10, v11);
        return;
      }
      v12 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                          EquipGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                          v5,
                                                          v6,
                                                          v7,
                                                          v8);
      EquipGraphListMenu_RequestCallbackFunc___ctor(
        v12,
        (Il2CppObject *)this,
        Method_EquipGraphListMenu_EndClickTabLock__,
        0LL);
      EquipGraphListMenu__StatusRequest(this, v12, v13);
    }
    EquipGraphListMenu__SetTabKind(this, 1, 0, v7);
  }
}


void __fastcall EquipGraphListMenu__OnClickTabStatus(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x3
  __int64 v8; // x4
  EquipGraphListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_40FE2E5 & 1) == 0 )
  {
    sub_B16FFC(&Method_EquipGraphListMenu_EndClickTabStatus__, method);
    sub_B16FFC(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo, v3);
    sub_B16FFC(&SoundManager_TypeInfo, v4);
    byte_40FE2E5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v9 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_B170CC(
                                                       EquipGraphListMenu_RequestCallbackFunc_TypeInfo,
                                                       v5,
                                                       v6,
                                                       v7,
                                                       v8);
    EquipGraphListMenu_RequestCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_EquipGraphListMenu_EndClickTabStatus__,
      0LL);
    EquipGraphListMenu__StatusRequest(this, v9, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu__OnSelectServantEquip(
        EquipGraphListMenu_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  __int64 v4; // x4
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  EquipGraphListViewItem_o *Item; // x20
  int32_t v17; // w8
  EquipGraphListViewManager_o *v18; // x21
  System_Action_o *v19; // x22
  int32_t modeKind; // w8
  const MethodInfo *v21; // x3
  WebViewManager_o *Instance; // x0
  UserServantEntity_o *userSvtEntity; // x21
  CommonUI_o *v24; // x22
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  bool v29; // w20
  EquipGraphListViewManager_o *v30; // x20
  EquipGraphListViewManager_CallbackFunc_o *v31; // x21
  ServantStatusDialog_EndDelegate_o *v32; // x23

  if ( (byte_40FE2E9 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&EquipGraphListViewManager_CallbackFunc_TypeInfo, v8);
    sub_B16FFC(&ServantStatusDialog_EndDelegate_TypeInfo, v9);
    sub_B16FFC(&Method_EquipGraphListMenu_EndSelectEquip__, v10);
    sub_B16FFC(&Method_EquipGraphListMenu_EndShowServantEquip__, v11);
    sub_B16FFC(&Method_EquipGraphListMenu_OnSelectServantEquip__, v12);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_B16FFC(&SoundManager_TypeInfo, v14);
    byte_40FE2E9 = 1;
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
        goto LABEL_50;
      Item = EquipGraphListViewManager__GetItem(servantEquipListViewManager, n, 0LL);
    }
    if ( kind == 3 )
    {
      modeKind = this->fields.modeKind;
      if ( !modeKind )
      {
        if ( Item )
        {
          if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(0, 0LL);
          this->fields.state = 5;
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          userSvtEntity = Item->fields.userSvtEntity;
          v24 = (CommonUI_o *)Instance;
          v29 = EquipGraphListViewItem__get_IsUse(Item, 0LL) || Item->fields.isBase;
          v32 = (ServantStatusDialog_EndDelegate_o *)sub_B170CC(
                                                       ServantStatusDialog_EndDelegate_TypeInfo,
                                                       v25,
                                                       v26,
                                                       v27,
                                                       v28);
          ServantStatusDialog_EndDelegate___ctor(
            v32,
            (Il2CppObject *)this,
            Method_EquipGraphListMenu_EndShowServantEquip__,
            0LL);
          if ( v24 )
          {
            CommonUI__OpenServantEquipStatusDialog_18252416(v24, 0, userSvtEntity, v29, v32, 0LL, 0LL);
            return;
          }
          goto LABEL_50;
        }
        if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(2, 0LL);
        this->fields.state = 2;
        v30 = this->fields.servantEquipListViewManager;
LABEL_41:
        v31 = (EquipGraphListViewManager_CallbackFunc_o *)sub_B170CC(
                                                            EquipGraphListViewManager_CallbackFunc_TypeInfo,
                                                            *(_QWORD *)&kind,
                                                            *(_QWORD *)&n,
                                                            method,
                                                            v4);
        EquipGraphListViewManager_CallbackFunc___ctor(
          v31,
          (Il2CppObject *)this,
          Method_EquipGraphListMenu_OnSelectServantEquip__,
          0LL);
        if ( v30 )
        {
          EquipGraphListViewManager__SetMode(v30, 2, v31, 0LL);
          return;
        }
        goto LABEL_50;
      }
      if ( (unsigned int)(modeKind - 1) >= 2 )
        return;
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
          if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !SoundManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          }
          SoundManager__playSystemSe(1, 0LL);
          this->fields.state = 3;
          EquipGraphListMenu__Callback(this, 0, -1, v21);
        }
        return;
      }
      v17 = this->fields.modeKind;
      if ( v17 == 2 )
      {
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(0, 0LL);
        if ( !Item )
          goto LABEL_50;
        EquipGraphListViewItem__SwapChoice(Item, 0LL);
      }
      else
      {
        if ( v17 != 1 )
        {
          if ( v17 )
            return;
          v18 = this->fields.servantEquipListViewManager;
          v19 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, *(_QWORD *)&kind, *(_QWORD *)&n, method, v4);
          System_Action___ctor(v19, (Il2CppObject *)this, Method_EquipGraphListMenu_EndSelectEquip__, 0LL);
          if ( v18 )
          {
            EquipGraphListViewManager__SelectEquip(v18, Item, v19, 0LL);
            return;
          }
LABEL_50:
          sub_B170D4();
        }
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__playSystemSe(11, 0LL);
        if ( !Item )
          goto LABEL_50;
        EquipGraphListViewItem__SwapLock(Item, 0LL);
      }
    }
    v30 = this->fields.servantEquipListViewManager;
    this->fields.state = 2;
    goto LABEL_41;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu__Open(
        EquipGraphListMenu_o *this,
        PartyListViewItem_array *baseDeckItemList,
        PartyListViewItem_o *partyItem,
        int32_t member,
        EventUpValSetupInfo_o *setupInfo,
        EquipGraphListMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  __int64 v14; // x1
  int32_t state; // w8
  const MethodInfo *v16; // x3
  PartyOrganizationListViewItem_o *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v25; // x3
  TitleInfoControl_o *titleInfo; // x0
  TitleInfoControl_o *v27; // x0
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  EquipGraphListViewManager_o *v29; // x0
  UISprite_o *scaleChangeTabSprite; // x20
  System_String_o *ScaleButtonSpriteName; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  __int64 v35; // x4
  System_Action_o *v36; // x20

  if ( (byte_40FE2DD & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, baseDeckItemList);
    sub_B16FFC(&Method_EquipGraphListMenu_EndOpen__, v14);
    byte_40FE2DD = 1;
  }
  state = this->fields.state;
  if ( (unsigned int)(state - 2) >= 2 )
  {
    if ( !state )
    {
      if ( !partyItem )
        goto LABEL_17;
      v17 = PartyListViewItem__GetMember(partyItem, member, 0LL);
      if ( !v17 )
        goto LABEL_17;
      this->fields.isSelectedSvt = PartyOrganizationListViewItem__get_EquipUserSvtId(v17, 0LL) > 0;
      this->fields.callbackFunc = callback;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.callbackFunc,
        (System_Int32_array **)callback,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_17;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      EquipGraphListMenu__SetTabKind(this, this->fields.modeKind, 1, v25);
      titleInfo = this->fields.titleInfo;
      if ( !titleInfo )
        goto LABEL_17;
      TitleInfoControl__setTitleInfo(titleInfo, 0LL, 1, 0LL, 23, 0LL);
      v27 = this->fields.titleInfo;
      if ( !v27 )
        goto LABEL_17;
      TitleInfoControl__setBackBtnSprite_19608808(v27, 1, 0, 0, 0LL);
      servantEquipListViewManager = this->fields.servantEquipListViewManager;
      if ( !servantEquipListViewManager )
        sub_B170D4();
      EquipGraphListViewManager__CreateList(
        servantEquipListViewManager,
        baseDeckItemList,
        partyItem,
        member,
        setupInfo,
        0LL);
      v29 = this->fields.servantEquipListViewManager;
      if ( !v29
        || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
            ScaleButtonSpriteName = EquipGraphListViewManager__GetScaleButtonSpriteName(v29, 0LL),
            !scaleChangeTabSprite) )
      {
LABEL_17:
        sub_B170D4();
      }
      UISprite__set_spriteName(scaleChangeTabSprite, ScaleButtonSpriteName, 0LL);
      this->fields.state = 1;
      v36 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v32, v33, v34, v35);
      System_Action___ctor(v36, (Il2CppObject *)this, Method_EquipGraphListMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)this, v36, 0LL);
    }
  }
  else
  {
    this->fields.callbackFunc = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)partyItem,
      *(System_String_array ***)&member,
      (System_Boolean_array **)setupInfo,
      (System_Int32_array **)callback,
      (System_Int32_array *)method,
      v7);
    this->fields.state = 2;
    EquipGraphListMenu__SetTabKind(this, this->fields.modeKind, 0, v16);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu__Open_33216496(
        EquipGraphListMenu_o *this,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t member,
        EventUpValSetupInfo_o *setupInfo,
        EquipGraphListMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v13; // x1
  int32_t state; // w8
  const MethodInfo *v15; // x3
  PartyOrganizationListViewItem_o *MemberItem; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v24; // x3
  TitleInfoControl_o *titleInfo; // x0
  TitleInfoControl_o *v26; // x0
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  EquipGraphListViewManager_o *v28; // x0
  UISprite_o *scaleChangeTabSprite; // x20
  System_String_o *ScaleButtonSpriteName; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  System_Action_o *v35; // x20

  if ( (byte_40FE2DE & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, partyItem);
    sub_B16FFC(&Method_EquipGraphListMenu_EndOpen__, v13);
    byte_40FE2DE = 1;
  }
  state = this->fields.state;
  if ( (unsigned int)(state - 2) >= 2 )
  {
    if ( !state )
    {
      if ( !partyItem )
        goto LABEL_17;
      MemberItem = WarBoardPartyListViewItem__GetMemberItem(partyItem, member, 0LL);
      if ( !MemberItem )
        goto LABEL_17;
      this->fields.isSelectedSvt = PartyOrganizationListViewItem__get_EquipUserSvtId(MemberItem, 0LL) > 0;
      this->fields.callbackFunc = callback;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.callbackFunc,
        (System_Int32_array **)callback,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( !gameObject )
        goto LABEL_17;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      EquipGraphListMenu__SetTabKind(this, this->fields.modeKind, 1, v24);
      titleInfo = this->fields.titleInfo;
      if ( !titleInfo )
        goto LABEL_17;
      TitleInfoControl__setTitleInfo(titleInfo, 0LL, 1, 0LL, 23, 0LL);
      v26 = this->fields.titleInfo;
      if ( !v26 )
        goto LABEL_17;
      TitleInfoControl__setBackBtnSprite_19608808(v26, 1, 0, 0, 0LL);
      servantEquipListViewManager = this->fields.servantEquipListViewManager;
      if ( !servantEquipListViewManager )
        sub_B170D4();
      EquipGraphListViewManager__CreateList_29300360(servantEquipListViewManager, partyItem, member, setupInfo, 0LL);
      v28 = this->fields.servantEquipListViewManager;
      if ( !v28
        || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
            ScaleButtonSpriteName = EquipGraphListViewManager__GetScaleButtonSpriteName(v28, 0LL),
            !scaleChangeTabSprite) )
      {
LABEL_17:
        sub_B170D4();
      }
      UISprite__set_spriteName(scaleChangeTabSprite, ScaleButtonSpriteName, 0LL);
      this->fields.state = 1;
      v35 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v31, v32, v33, v34);
      System_Action___ctor(v35, (Il2CppObject *)this, Method_EquipGraphListMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)this, v35, 0LL);
    }
  }
  else
  {
    this->fields.callbackFunc = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      *(System_String_array ***)&member,
      (System_String_array **)setupInfo,
      (System_Boolean_array **)callback,
      (System_Int32_array **)method,
      v6,
      v7);
    this->fields.state = 2;
    EquipGraphListMenu__SetTabKind(this, this->fields.modeKind, 0, v15);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu__SetTabKind(
        EquipGraphListMenu_o *this,
        int32_t modeKind,
        bool isInit,
        const MethodInfo *method)
{
  __int64 v4; // x4
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
  bool v19; // w21
  struct UICommonButton_o *statusTabButton; // x0
  UnityEngine_Behaviour_o *v21; // x0
  UISprite_o *statusTabSprite; // x0
  System_String_o **v23; // x8
  struct UICommonButton_o *v24; // x0
  bool v25; // w23
  unsigned int v26; // w21
  UICommonButton_o *v27; // x22
  bool enabled; // w0
  struct UICommonButton_o *lockTabButton; // x0
  UnityEngine_Behaviour_o *v30; // x0
  UISprite_o *lockTabSprite; // x0
  System_String_o **v32; // x8
  struct UICommonButton_o *v33; // x0
  UICommonButton_o *v34; // x22
  bool v35; // w0
  struct UICommonButton_o *choiceTabButton; // x0
  UnityEngine_Behaviour_o *v37; // x0
  UISprite_o *choiceTabSprite; // x0
  System_String_o **v39; // x8
  struct UICommonButton_o *v40; // x0
  UICommonButton_o *v41; // x22
  bool v42; // w0
  UILabel_o *explanationLabel; // x21
  __int64 *v44; // x8
  System_String_o *v45; // x0
  int32_t state; // w8
  EquipGraphListViewManager_o *servantEquipListViewManager; // x21
  EquipGraphListViewManager_CallbackFunc_o *v48; // x20

  if ( (byte_40FE2E1 & 1) == 0 )
  {
    sub_B16FFC(&EquipGraphListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&modeKind);
    sub_B16FFC(&Method_EquipGraphListMenu_OnSelectServantEquip__, v8);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_11667, v10);
    sub_B16FFC(&StringLiteral_17057, v11);
    sub_B16FFC(&StringLiteral_17060, v12);
    sub_B16FFC(&StringLiteral_11669, v13);
    sub_B16FFC(&StringLiteral_11668, v14);
    sub_B16FFC(&StringLiteral_17073, v15);
    sub_B16FFC(&StringLiteral_17074, v16);
    sub_B16FFC(&StringLiteral_17059, v17);
    sub_B16FFC(&StringLiteral_17058, v18);
    byte_40FE2E1 = 1;
  }
  v19 = !this->fields.isInitTab || isInit;
  if ( v19 || this->fields.modeKind != modeKind )
  {
    statusTabButton = this->fields.statusTabButton;
    if ( !statusTabButton )
      goto LABEL_48;
    ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer, const MethodInfo *))statusTabButton->klass->vtable._5_set_isEnabled.method)(
      statusTabButton,
      1LL,
      statusTabButton->klass->vtable._6_OnInit.methodPtr,
      method);
    v21 = (UnityEngine_Behaviour_o *)this->fields.statusTabButton;
    if ( !v21 )
      goto LABEL_48;
    UnityEngine_Behaviour__set_enabled(v21, modeKind != 0, 0LL);
    statusTabSprite = this->fields.statusTabSprite;
    if ( !statusTabSprite )
      goto LABEL_48;
    v23 = (System_String_o **)&StringLiteral_17073;
    if ( modeKind )
      v23 = (System_String_o **)&StringLiteral_17074;
    UISprite__set_spriteName(statusTabSprite, *v23, 0LL);
    v24 = this->fields.statusTabButton;
    if ( !v24 )
      goto LABEL_48;
    v25 = !v19;
    v26 = !v19;
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, _QWORD, Il2CppMethodPointer))v24->klass->vtable._14_SetState.method)(
      v24,
      0LL,
      v26,
      v24->klass->vtable._15_OnPress.methodPtr);
    v27 = this->fields.statusTabButton;
    if ( !v27 )
      goto LABEL_48;
    enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.statusTabButton, 0LL);
    UICommonButton__SetColliderEnable(v27, enabled, v26, 0LL);
    lockTabButton = this->fields.lockTabButton;
    if ( !lockTabButton )
      goto LABEL_48;
    ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))lockTabButton->klass->vtable._5_set_isEnabled.method)(
      lockTabButton,
      1LL,
      lockTabButton->klass->vtable._6_OnInit.methodPtr);
    v30 = (UnityEngine_Behaviour_o *)this->fields.lockTabButton;
    if ( !v30 )
      goto LABEL_48;
    UnityEngine_Behaviour__set_enabled(v30, modeKind != 1, 0LL);
    lockTabSprite = this->fields.lockTabSprite;
    if ( !lockTabSprite )
      goto LABEL_48;
    v32 = (System_String_o **)&StringLiteral_17059;
    if ( modeKind != 1 )
      v32 = (System_String_o **)&StringLiteral_17060;
    UISprite__set_spriteName(lockTabSprite, *v32, 0LL);
    v33 = this->fields.lockTabButton;
    if ( !v33 )
      goto LABEL_48;
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, bool, Il2CppMethodPointer))v33->klass->vtable._14_SetState.method)(
      v33,
      0LL,
      v25,
      v33->klass->vtable._15_OnPress.methodPtr);
    v34 = this->fields.lockTabButton;
    if ( !v34 )
      goto LABEL_48;
    v35 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.lockTabButton, 0LL);
    UICommonButton__SetColliderEnable(v34, v35, v25, 0LL);
    choiceTabButton = this->fields.choiceTabButton;
    if ( !choiceTabButton )
      goto LABEL_48;
    ((void (__fastcall *)(struct UICommonButton_o *, __int64, Il2CppMethodPointer))choiceTabButton->klass->vtable._5_set_isEnabled.method)(
      choiceTabButton,
      1LL,
      choiceTabButton->klass->vtable._6_OnInit.methodPtr);
    v37 = (UnityEngine_Behaviour_o *)this->fields.choiceTabButton;
    if ( !v37 )
      goto LABEL_48;
    UnityEngine_Behaviour__set_enabled(v37, modeKind != 2, 0LL);
    choiceTabSprite = this->fields.choiceTabSprite;
    if ( !choiceTabSprite )
      goto LABEL_48;
    v39 = (System_String_o **)&StringLiteral_17057;
    if ( modeKind != 2 )
      v39 = (System_String_o **)&StringLiteral_17058;
    UISprite__set_spriteName(choiceTabSprite, *v39, 0LL);
    v40 = this->fields.choiceTabButton;
    if ( !v40 )
      goto LABEL_48;
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, bool, Il2CppMethodPointer))v40->klass->vtable._14_SetState.method)(
      v40,
      0LL,
      v25,
      v40->klass->vtable._15_OnPress.methodPtr);
    v41 = this->fields.choiceTabButton;
    if ( !v41 )
      goto LABEL_48;
    v42 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)this->fields.choiceTabButton, 0LL);
    UICommonButton__SetColliderEnable(v41, v42, v25, 0LL);
    if ( modeKind == 2 )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v44 = &StringLiteral_11667;
    }
    else if ( modeKind == 1 )
    {
      explanationLabel = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v44 = &StringLiteral_11668;
    }
    else
    {
      if ( modeKind )
        goto LABEL_43;
      explanationLabel = this->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v44 = &StringLiteral_11669;
    }
    v45 = LocalizationManager__Get((System_String_o *)*v44, 0LL);
    if ( !explanationLabel )
      goto LABEL_48;
    UILabel__set_text(explanationLabel, v45, 0LL);
  }
LABEL_43:
  state = this->fields.state;
  servantEquipListViewManager = this->fields.servantEquipListViewManager;
  this->fields.isInitTab = 1;
  this->fields.modeKind = modeKind;
  if ( state == 2 )
  {
    v48 = (EquipGraphListViewManager_CallbackFunc_o *)sub_B170CC(
                                                        EquipGraphListViewManager_CallbackFunc_TypeInfo,
                                                        *(_QWORD *)&modeKind,
                                                        isInit,
                                                        method,
                                                        v4);
    EquipGraphListViewManager_CallbackFunc___ctor(
      v48,
      (Il2CppObject *)this,
      Method_EquipGraphListMenu_OnSelectServantEquip__,
      0LL);
    if ( servantEquipListViewManager )
    {
      EquipGraphListViewManager__SetMode(servantEquipListViewManager, 2, v48, 0LL);
      return;
    }
LABEL_48:
    sub_B170D4();
  }
  if ( !servantEquipListViewManager )
    goto LABEL_48;
  EquipGraphListViewManager__SetMode_29304608(servantEquipListViewManager, 1, 0LL);
}


void __fastcall EquipGraphListMenu__StatusRequest(
        EquipGraphListMenu_o *this,
        EquipGraphListMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t modeKind; // w8
  EquipGraphListViewManager_o *v9; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  NetworkManager_ResultCallbackFunc_o *v20; // x20
  CardStatusSyncRequest_o *Request_WarBoardWallAttackRequest; // x0
  System_Int64_array *v22; // x2
  System_Int64_array *v23; // x1
  bool v24; // w4
  bool v25; // w5
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  NetworkManager_ResultCallbackFunc_o *v37; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_40FE2E8 & 1) == 0 )
  {
    sub_B16FFC(&Method_EquipGraphListMenu_EndStatusSync__, callback);
    sub_B16FFC(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v5);
    sub_B16FFC(&NetworkManager_TypeInfo, v6);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_40FE2E8 = 1;
  }
  lockList = 0LL;
  choiceList = 0LL;
  unlockList = 0LL;
  unchoiceList = 0LL;
  modeKind = this->fields.modeKind;
  if ( modeKind == 2 )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager )
      goto LABEL_23;
    if ( EquipGraphListViewManager__GetSwapChoiceList(servantEquipListViewManager, &choiceList, &unchoiceList, 0LL) )
    {
      this->fields.requedstCallback = callback;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
      v37 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v33,
                                                     v34,
                                                     v35,
                                                     v36);
      NetworkManager_ResultCallbackFunc___ctor(
        v37,
        (Il2CppObject *)this,
        Method_EquipGraphListMenu_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v37,
                                                                       (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        v22 = unchoiceList;
        v23 = choiceList;
        v25 = 1;
        v24 = 0;
        goto LABEL_19;
      }
LABEL_23:
      sub_B170D4();
    }
  }
  else if ( modeKind == 1 )
  {
    v9 = this->fields.servantEquipListViewManager;
    if ( !v9 )
      goto LABEL_23;
    if ( EquipGraphListViewManager__GetSwapLockList(v9, &lockList, &unlockList, 0LL) )
    {
      this->fields.requedstCallback = callback;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
      v20 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                     NetworkManager_ResultCallbackFunc_TypeInfo,
                                                     v16,
                                                     v17,
                                                     v18,
                                                     v19);
      NetworkManager_ResultCallbackFunc___ctor(
        v20,
        (Il2CppObject *)this,
        Method_EquipGraphListMenu_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      Request_WarBoardWallAttackRequest = (CardStatusSyncRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                       v20,
                                                                       (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( Request_WarBoardWallAttackRequest )
      {
        v22 = unlockList;
        v23 = lockList;
        v24 = 1;
        v25 = 0;
LABEL_19:
        CardStatusSyncRequest__beginRequest(Request_WarBoardWallAttackRequest, v23, v22, 0, v24, v25, 0LL);
        return;
      }
      goto LABEL_23;
    }
  }
  if ( callback )
    EquipGraphListMenu_RequestCallbackFunc__Invoke(callback, 0, 0LL);
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

  if ( (byte_40FE2DB & 1) == 0 )
  {
    sub_B16FFC(&EquipGraphListMenu_CallbackFunc_TypeInfo, value);
    byte_40FE2DB = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
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

  if ( (byte_40FE2DC & 1) == 0 )
  {
    sub_B16FFC(&EquipGraphListMenu_CallbackFunc_TypeInfo, value);
    byte_40FE2DC = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  EquipGraphListMenu__GetModeKind(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu_CallbackFunc___ctor(
        EquipGraphListMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  __int64 v11[3]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-24h] BYREF

  v12 = result;
  if ( (byte_40F8B85 & 1) == 0 )
  {
    sub_B16FFC(&EquipGraphListMenu_ResultKind_TypeInfo, *(_QWORD *)&result);
    byte_40F8B85 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(EquipGraphListMenu_ResultKind_TypeInfo, &v12);
  v11[1] = (__int64)item;
  return (System_IAsyncResult_o *)sub_B16FA0(this, v11, callback, object);
}


void __fastcall EquipGraphListMenu_CallbackFunc__EndInvoke(
        EquipGraphListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu_CallbackFunc__Invoke(
        EquipGraphListMenu_CallbackFunc_o *this,
        int32_t result,
        EquipGraphListViewItem_o *item,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  EquipGraphListMenu_CallbackFunc_o **v8; // x26
  __int64 v9; // x27
  unsigned int v10; // w24
  __int64 class_0; // x0
  __int64 v12; // x8
  unsigned int v13; // w23
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, EquipGraphListViewItem_o *, _QWORD); // x0
  EquipGraphListMenu_CallbackFunc_o *v20; // x8
  __int64 *v21; // x22
  __int64 v22; // x23
  void (__fastcall *v23)(unsigned int *, EquipGraphListViewItem_o *, __int64); // x24
  char v24; // w24
  char v25; // w0
  unsigned int v26; // w24
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+Ch] [xbp-54h] BYREF
  EquipGraphListMenu_CallbackFunc_o *v33; // [xsp+18h] [xbp-48h] BYREF

  v33 = this;
  v32 = result;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v33;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (EquipGraphListMenu_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, EquipGraphListViewItem_o *, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result, item);
      if ( (sub_B1702C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_36;
      v23((unsigned int *)v32, item, v22);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v21 )
    {
      v23(&v32 - 4, item, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B17024(v22);
      v25 = sub_B17428(v22);
      if ( (v24 & 1) != 0 )
      {
        v26 = v32;
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AAFEF8(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, EquipGraphListViewItem_o *, _QWORD))sub_B170AC(v17, v22);
        (*v19)(v21, v26, item, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v32;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AAFEF8(v21, class_0, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, EquipGraphListViewItem_o *, _QWORD))v16)(
            v21,
            v13,
            item,
            *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, EquipGraphListViewItem_o *, _QWORD))(*v21
                                                                                        + 16LL
                                                                                        * *(unsigned __int16 *)(v22 + 72)
                                                                                        + 312))(
            v21,
            v32,
            item,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, EquipGraphListViewItem_o *, __int64))v23)(v21, v32, item, v22);
    goto LABEL_38;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu_RequestCallbackFunc___ctor(
        EquipGraphListMenu_RequestCallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall EquipGraphListMenu_RequestCallbackFunc__BeginInvoke(
        EquipGraphListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isRequest;
  if ( (byte_40F8B86 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, isRequest);
    byte_40F8B86 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall EquipGraphListMenu_RequestCallbackFunc__EndInvoke(
        EquipGraphListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu_RequestCallbackFunc__Invoke(
        EquipGraphListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  EquipGraphListMenu_RequestCallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  EquipGraphListMenu_RequestCallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  EquipGraphListMenu_RequestCallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (EquipGraphListMenu_RequestCallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, isRequest, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(isRequest, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, isRequest, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, isRequest, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            isRequest,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, isRequest, v20);
    goto LABEL_37;
  }
}


void __fastcall EquipGraphListMenu___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F8B82 & 1) == 0 )
  {
    sub_B16FFC(&EquipGraphListMenu___c_TypeInfo, v1);
    byte_40F8B82 = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(EquipGraphListMenu___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)EquipGraphListMenu___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
  ManagementManager_o *Instance; // x0

  if ( (byte_40F8B83 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, isDecide);
    byte_40F8B83 = 1;
  }
  Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  ManagementManager__reboot(Instance, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu___c___Open_b__29_0(
        EquipGraphListMenu___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ManagementManager_o *Instance; // x0

  if ( (byte_40F8B84 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, isDecide);
    byte_40F8B84 = 1;
  }
  Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_B170D4();
  ManagementManager__reboot(Instance, 0, 0LL);
}