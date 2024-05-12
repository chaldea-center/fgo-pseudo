void __fastcall EquipGraphListMenu___ctor(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_438FAD5 & 1) == 0 )
  {
    sub_B775C4(&BaseMenu_TypeInfo);
    byte_438FAD5 = 1;
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
        sub_B7769C(0LL, result);
      Item = EquipGraphListViewManager__GetItem(servantEquipListViewManager, n, 0LL);
    }
    p_callbackFunc->klass = 0LL;
    sub_B77560(p_callbackFunc, 0LL, *(System_String_array ***)&n, (System_String_array **)method, v4, v5, v6, v7);
    EquipGraphListMenu_CallbackFunc__Invoke(callbackFunc, result, Item, 0LL);
  }
}


void __fastcall EquipGraphListMenu__Close(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EquipGraphListMenu__Close_34209684(this, 0LL, v2);
}


void __fastcall EquipGraphListMenu__Close_34209684(
        EquipGraphListMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int32_t modeKind; // w1
  const MethodInfo *v11; // x3
  System_Action_o *v12; // x20

  if ( (byte_438FAC7 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_EquipGraphListMenu_EndClose__);
    byte_438FAC7 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B77560(
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
  EquipGraphListMenu__SetTabKind(this, modeKind, 0, v11);
  v12 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_EquipGraphListMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v12, 0LL);
}


void __fastcall EquipGraphListMenu__Decide(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 selectNum; // x1
  ListViewManager_o *servantEquipListViewManager; // x0
  struct UICommonButton_o *sortKindButton; // x21
  EventServantEntity_o *v6; // x20
  bool IsNoPeriod; // w0
  System_String_o *v8; // x21
  Il2CppObject *EndTimeStr; // x0
  System_String_o *v10; // x20
  CommonUI_o *Instance; // x21
  System_String_o *v12; // x22
  System_Action_o *v13; // x23
  EquipGraphListMenu_RequestCallbackFunc_o *v14; // x20
  const MethodInfo *v15; // x2

  if ( (byte_438FAC9 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_EquipGraphListMenu_EndCloseEventServantWarning__);
    sub_B775C4(&Method_EquipGraphListMenu_EndRequestClickDecide__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&StringLiteral_5669/*"EQUIP_GRAPH_EVENT_SERVANT_WARNING_MESSAGE"*/);
    sub_B775C4(&StringLiteral_5670/*"EQUIP_GRAPH_EVENT_SERVANT_WARNING_TITLE"*/);
    byte_438FAC9 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(8, 0LL);
  servantEquipListViewManager = (ListViewManager_o *)this->fields.servantEquipListViewManager;
  this->fields.state = 3;
  if ( !servantEquipListViewManager )
    goto LABEL_25;
  selectNum = (unsigned int)this->fields.selectNum;
  if ( (selectNum & 0x80000000) != 0
    || (sortKindButton = servantEquipListViewManager[1].fields.sortKindButton,
        (servantEquipListViewManager = (ListViewManager_o *)EquipGraphListViewManager__GetItem(
                                                              (EquipGraphListViewManager_o *)servantEquipListViewManager,
                                                              selectNum,
                                                              0LL)) == 0LL) )
  {
    if ( !this->fields.isSelectedSvt )
    {
      servantEquipListViewManager = (ListViewManager_o *)this->fields.servantEquipListViewManager;
      if ( !servantEquipListViewManager )
        goto LABEL_25;
      ListViewManager__SetScrollBarValue(servantEquipListViewManager, 0LL);
    }
  }
  else
  {
    if ( !sortKindButton )
      goto LABEL_25;
    servantEquipListViewManager = (ListViewManager_o *)sortKindButton->fields.tweenTargets;
    if ( !servantEquipListViewManager )
      goto LABEL_25;
    servantEquipListViewManager = (ListViewManager_o *)UserServantEntity__getEventServant(
                                                         (UserServantEntity_o *)servantEquipListViewManager,
                                                         0LL);
    if ( !sortKindButton->fields.tweenTargets )
      goto LABEL_25;
    v6 = (EventServantEntity_o *)servantEquipListViewManager;
    if ( UserServantEntity__IsEventJoin((UserServantEntity_o *)sortKindButton->fields.tweenTargets, 0LL) )
    {
      servantEquipListViewManager = (ListViewManager_o *)sortKindButton->fields.tweenTargets;
      if ( !servantEquipListViewManager )
        goto LABEL_25;
      IsNoPeriod = UserServantEntity__IsNoPeriod((UserServantEntity_o *)servantEquipListViewManager, 0LL);
      if ( v6 )
      {
        if ( !IsNoPeriod )
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v8 = LocalizationManager__Get((System_String_o *)StringLiteral_5669/*"EQUIP_GRAPH_EVENT_SERVANT_WARNING_MESSAGE"*/, 0LL);
          EndTimeStr = (Il2CppObject *)EventServantEntity__getEndTimeStr(v6, 0LL);
          v10 = System_String__Format(v8, EndTimeStr, 0LL);
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v12 = LocalizationManager__Get((System_String_o *)StringLiteral_5670/*"EQUIP_GRAPH_EVENT_SERVANT_WARNING_TITLE"*/, 0LL);
          v13 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
          System_Action___ctor(v13, (Il2CppObject *)this, Method_EquipGraphListMenu_EndCloseEventServantWarning__, 0LL);
          if ( Instance )
          {
            CommonUI__OpenNotificationDialog(Instance, v12, v10, v13, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0LL);
            return;
          }
LABEL_25:
          sub_B7769C(servantEquipListViewManager, selectNum);
        }
      }
    }
  }
  v14 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_B77694(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
  EquipGraphListMenu_RequestCallbackFunc___ctor(
    v14,
    (Il2CppObject *)this,
    Method_EquipGraphListMenu_EndRequestClickDecide__,
    0LL);
  EquipGraphListMenu__StatusRequest(this, v14, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu__EndClickTabChoice(
        EquipGraphListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0

  if ( isRequest )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager
      || (EquipGraphListViewManager__ModifyList(servantEquipListViewManager, 0, 0LL),
          (servantEquipListViewManager = this->fields.servantEquipListViewManager) == 0LL) )
    {
      sub_B7769C(servantEquipListViewManager, isRequest);
    }
    EquipGraphListViewManager__SetMode_31613644(servantEquipListViewManager, 3, 0LL);
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

  if ( isRequest )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager
      || (EquipGraphListViewManager__ModifyList(servantEquipListViewManager, 0, 0LL),
          (servantEquipListViewManager = this->fields.servantEquipListViewManager) == 0LL) )
    {
      sub_B7769C(servantEquipListViewManager, isRequest);
    }
    EquipGraphListViewManager__SetMode_31613644(servantEquipListViewManager, 3, 0LL);
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

  if ( isRequest )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager
      || (EquipGraphListViewManager__ModifyList(servantEquipListViewManager, 0, 0LL),
          (servantEquipListViewManager = this->fields.servantEquipListViewManager) == 0LL) )
    {
      sub_B7769C(servantEquipListViewManager, isRequest);
    }
    EquipGraphListViewManager__SetMode_31613644(servantEquipListViewManager, 3, 0LL);
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
    sub_B77560(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall EquipGraphListMenu__EndCloseEventServantWarning(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  EquipGraphListMenu_RequestCallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_438FACA & 1) == 0 )
  {
    sub_B775C4(&Method_EquipGraphListMenu_EndRequestClickDecide__);
    sub_B775C4(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
    byte_438FACA = 1;
  }
  v3 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_B77694(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
  EquipGraphListMenu_RequestCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_EquipGraphListMenu_EndRequestClickDecide__,
    0LL);
  EquipGraphListMenu__StatusRequest(this, v3, v4);
}


void __fastcall EquipGraphListMenu__EndCloseList(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall EquipGraphListMenu__EndCloseShowServantEquip(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  EquipGraphListViewManager_o *servantEquipListViewManager; // x20
  EquipGraphListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_438FAD3 & 1) == 0 )
  {
    sub_B775C4(&EquipGraphListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_EquipGraphListMenu_OnSelectServantEquip__);
    byte_438FAD3 = 1;
  }
  this->fields.state = 2;
  servantEquipListViewManager = this->fields.servantEquipListViewManager;
  v4 = (EquipGraphListViewManager_CallbackFunc_o *)sub_B77694(EquipGraphListViewManager_CallbackFunc_TypeInfo);
  EquipGraphListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_EquipGraphListMenu_OnSelectServantEquip__,
    0LL);
  if ( !servantEquipListViewManager )
    sub_B7769C(v5, v6);
  EquipGraphListViewManager__SetMode(servantEquipListViewManager, 2, v4, 0LL);
}


void __fastcall EquipGraphListMenu__EndOpen(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CommonUI_o *Instance; // x20
  TutorialFlag_ImageId_array *v5; // x0
  TutorialFlag_ImageId_array *v6; // x1
  il2cpp_array_size_t max_length; // w8
  __int64 v8; // x0

  if ( (byte_438FAC6 & 1) == 0 )
  {
    sub_B775C4(&TutorialFlag_ImageId___TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&TutorialFlag_TypeInfo);
    byte_438FAC6 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_29515752(110, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v5 = (TutorialFlag_ImageId_array *)sub_B775DC(TutorialFlag_ImageId___TypeInfo, 2LL);
    if ( !v5 )
      goto LABEL_14;
    max_length = v5->max_length;
    v6 = v5;
    if ( !max_length || (v5->m_Items[1] = 4, max_length == 1) )
    {
      v8 = sub_B776C8(v5);
      sub_B77668(v8, 0LL);
    }
    v5->m_Items[2] = 5;
    if ( !Instance )
LABEL_14:
      sub_B7769C(v5, v6);
    CommonUI__OpenTutorialImageDialog(Instance, v5, 110, 0LL, 0LL, 0LL, 0LL);
  }
  this->fields.state = 2;
  EquipGraphListMenu__SetTabKind(this, this->fields.modeKind, 0, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu__EndRequestClickCancel(
        EquipGraphListMenu_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0

  if ( isRequest )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager
      || (EquipGraphListViewManager__ModifyList(servantEquipListViewManager, 0, 0LL),
          (servantEquipListViewManager = this->fields.servantEquipListViewManager) == 0LL) )
    {
      sub_B7769C(servantEquipListViewManager, isRequest);
    }
    EquipGraphListViewManager__SetMode_31613644(servantEquipListViewManager, 3, 0LL);
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

  if ( isRequest )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager
      || (EquipGraphListViewManager__ModifyList(servantEquipListViewManager, 0, 0LL),
          (servantEquipListViewManager = this->fields.servantEquipListViewManager) == 0LL) )
    {
      sub_B7769C(servantEquipListViewManager, isRequest);
    }
    EquipGraphListViewManager__SetMode_31613644(servantEquipListViewManager, 3, 0LL);
  }
  EquipGraphListMenu__Callback(this, 1, this->fields.selectNum, v3);
}


void __fastcall EquipGraphListMenu__EndSelectEquip(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  EquipGraphListViewManager_o *servantEquipListViewManager; // x20
  EquipGraphListViewManager_CallbackFunc_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1

  if ( (byte_438FAD1 & 1) == 0 )
  {
    sub_B775C4(&EquipGraphListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_EquipGraphListMenu_OnSelectServantEquip__);
    byte_438FAD1 = 1;
  }
  this->fields.state = 2;
  servantEquipListViewManager = this->fields.servantEquipListViewManager;
  v4 = (EquipGraphListViewManager_CallbackFunc_o *)sub_B77694(EquipGraphListViewManager_CallbackFunc_TypeInfo);
  EquipGraphListViewManager_CallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_EquipGraphListMenu_OnSelectServantEquip__,
    0LL);
  if ( !servantEquipListViewManager )
    sub_B7769C(v5, v6);
  EquipGraphListViewManager__SetMode(servantEquipListViewManager, 2, v4, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu__EndShowServantEquip(
        EquipGraphListMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v7; // x21

  if ( (byte_438FAD2 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_EquipGraphListMenu_EndCloseShowServantEquip__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438FAD2 = 1;
  }
  if ( isDecide )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager
      || (EquipGraphListViewManager__ModifyList(servantEquipListViewManager, 0, 0LL),
          (servantEquipListViewManager = this->fields.servantEquipListViewManager) == 0LL) )
    {
LABEL_9:
      sub_B7769C(servantEquipListViewManager, isDecide);
    }
    EquipGraphListViewManager__SetMode_31613644(servantEquipListViewManager, 3, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_EquipGraphListMenu_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantEquipStatusDialog(Instance, v7, 0LL);
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
    sub_B77560(p_requedstCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B7769C(0LL, method);
  EquipGraphListViewManager__DestroyList(servantEquipListViewManager, 0LL);
  this->fields.modeKind = 0;
  this->fields.state = 0;
  this->fields.isInitTab = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall EquipGraphListMenu__OnClickCancel(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *servantEquipListViewManager; // x0
  EquipGraphListMenu_RequestCallbackFunc_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_438FACB & 1) == 0 )
  {
    sub_B775C4(&Method_EquipGraphListMenu_EndRequestClickCancel__);
    sub_B775C4(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438FACB = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !this->fields.isSelectedSvt )
    {
      servantEquipListViewManager = (ListViewManager_o *)this->fields.servantEquipListViewManager;
      if ( !servantEquipListViewManager )
        sub_B7769C(0LL, method);
      ListViewManager__SetScrollBarValue(servantEquipListViewManager, 0LL);
    }
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    v4 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_B77694(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
    EquipGraphListMenu_RequestCallbackFunc___ctor(
      v4,
      (Il2CppObject *)this,
      Method_EquipGraphListMenu_EndRequestClickCancel__,
      0LL);
    EquipGraphListMenu__StatusRequest(this, v4, v5);
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
      sub_B7769C(0LL, method);
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
  __int64 v3; // x1
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_438FAD4 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438FAD4 = 1;
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
          (servantEquipListViewManager = this->fields.servantEquipListViewManager) == 0LL)
      || (scaleChangeTabSprite = this->fields.scaleChangeTabSprite,
          servantEquipListViewManager = (EquipGraphListViewManager_o *)EquipGraphListViewManager__GetScaleButtonSpriteName(
                                                                         servantEquipListViewManager,
                                                                         0LL),
          !scaleChangeTabSprite) )
    {
      sub_B7769C(servantEquipListViewManager, v3);
    }
    UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)servantEquipListViewManager, 0LL);
  }
}


void __fastcall EquipGraphListMenu__OnClickTabChoice(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t modeKind; // w8
  EquipGraphListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2
  EquipGraphListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_438FACE & 1) == 0 )
  {
    sub_B775C4(&Method_EquipGraphListMenu_EndClickTabChoice__);
    sub_B775C4(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438FACE = 1;
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
        v5 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_B77694(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
        EquipGraphListMenu_RequestCallbackFunc___ctor(
          v5,
          (Il2CppObject *)this,
          Method_EquipGraphListMenu_EndClickTabChoice__,
          0LL);
        EquipGraphListMenu__StatusRequest(this, v5, v6);
        return;
      }
      v7 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_B77694(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
      EquipGraphListMenu_RequestCallbackFunc___ctor(
        v7,
        (Il2CppObject *)this,
        Method_EquipGraphListMenu_EndClickTabChoice__,
        0LL);
      EquipGraphListMenu__StatusRequest(this, v7, v8);
    }
    EquipGraphListMenu__SetTabKind(this, 2, 0, v3);
  }
}


void __fastcall EquipGraphListMenu__OnClickTabLock(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  int32_t modeKind; // w8
  EquipGraphListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2
  EquipGraphListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_438FACD & 1) == 0 )
  {
    sub_B775C4(&Method_EquipGraphListMenu_EndClickTabLock__);
    sub_B775C4(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438FACD = 1;
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
        v5 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_B77694(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
        EquipGraphListMenu_RequestCallbackFunc___ctor(
          v5,
          (Il2CppObject *)this,
          Method_EquipGraphListMenu_EndClickTabLock__,
          0LL);
        EquipGraphListMenu__StatusRequest(this, v5, v6);
        return;
      }
      v7 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_B77694(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
      EquipGraphListMenu_RequestCallbackFunc___ctor(
        v7,
        (Il2CppObject *)this,
        Method_EquipGraphListMenu_EndClickTabLock__,
        0LL);
      EquipGraphListMenu__StatusRequest(this, v7, v8);
    }
    EquipGraphListMenu__SetTabKind(this, 1, 0, v3);
  }
}


void __fastcall EquipGraphListMenu__OnClickTabStatus(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  EquipGraphListMenu_RequestCallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_438FACC & 1) == 0 )
  {
    sub_B775C4(&Method_EquipGraphListMenu_EndClickTabStatus__);
    sub_B775C4(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438FACC = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v3 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_B77694(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
    EquipGraphListMenu_RequestCallbackFunc___ctor(
      v3,
      (Il2CppObject *)this,
      Method_EquipGraphListMenu_EndClickTabStatus__,
      0LL);
    EquipGraphListMenu__StatusRequest(this, v3, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu__OnSelectServantEquip(
        EquipGraphListMenu_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  EquipGraphListViewItem_o *Item; // x20
  int32_t v9; // w8
  EquipGraphListViewManager_o *v10; // x21
  System_Action_o *v11; // x22
  int32_t modeKind; // w8
  const MethodInfo *v13; // x3
  WebViewManager_o *Instance; // x0
  UserServantEntity_o *userSvtEntity; // x21
  CommonUI_o *v16; // x22
  bool v17; // w20
  EquipGraphListViewManager_o *v18; // x20
  EquipGraphListViewManager_CallbackFunc_o *v19; // x21
  ServantStatusDialog_EndDelegate_o *v20; // x23

  if ( (byte_438FAD0 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&EquipGraphListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&ServantStatusDialog_EndDelegate_TypeInfo);
    sub_B775C4(&Method_EquipGraphListMenu_EndSelectEquip__);
    sub_B775C4(&Method_EquipGraphListMenu_EndShowServantEquip__);
    sub_B775C4(&Method_EquipGraphListMenu_OnSelectServantEquip__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438FAD0 = 1;
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
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          userSvtEntity = Item->fields.userSvtEntity;
          v16 = (CommonUI_o *)Instance;
          v17 = EquipGraphListViewItem__get_IsUse(Item, 0LL) || Item->fields.isBase;
          v20 = (ServantStatusDialog_EndDelegate_o *)sub_B77694(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v20,
            (Il2CppObject *)this,
            Method_EquipGraphListMenu_EndShowServantEquip__,
            0LL);
          if ( v16 )
          {
            CommonUI__OpenServantEquipStatusDialog_18071040(v16, 0, userSvtEntity, v17, v20, 0LL, 0LL);
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
        v18 = this->fields.servantEquipListViewManager;
LABEL_41:
        v19 = (EquipGraphListViewManager_CallbackFunc_o *)sub_B77694(EquipGraphListViewManager_CallbackFunc_TypeInfo);
        EquipGraphListViewManager_CallbackFunc___ctor(
          v19,
          (Il2CppObject *)this,
          Method_EquipGraphListMenu_OnSelectServantEquip__,
          0LL);
        if ( v18 )
        {
          EquipGraphListViewManager__SetMode(v18, 2, v19, 0LL);
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
          EquipGraphListMenu__Callback(this, 0, -1, v13);
        }
        return;
      }
      v9 = this->fields.modeKind;
      if ( v9 == 2 )
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
        if ( v9 != 1 )
        {
          if ( v9 )
            return;
          v10 = this->fields.servantEquipListViewManager;
          v11 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
          System_Action___ctor(v11, (Il2CppObject *)this, Method_EquipGraphListMenu_EndSelectEquip__, 0LL);
          if ( v10 )
          {
            EquipGraphListViewManager__SelectEquip(v10, Item, v11, 0LL);
            return;
          }
LABEL_50:
          sub_B7769C(servantEquipListViewManager, *(_QWORD *)&kind);
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
    v18 = this->fields.servantEquipListViewManager;
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
  EquipGraphListMenu_o *v13; // x19
  int32_t state; // w8
  const MethodInfo *v15; // x3
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  const MethodInfo *v22; // x3
  __int64 v23; // x1
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v26; // x20

  v13 = this;
  if ( (byte_438FAC4 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    this = (EquipGraphListMenu_o *)sub_B775C4(&Method_EquipGraphListMenu_EndOpen__);
    byte_438FAC4 = 1;
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
      sub_B77560(
        (BattleServantConfConponent_o *)&v13->fields.callbackFunc,
        (System_Int32_array **)callback,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      this = (EquipGraphListMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v13, 0LL);
      if ( !this )
        goto LABEL_17;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      EquipGraphListMenu__SetTabKind(v13, v13->fields.modeKind, 1, v22);
      this = (EquipGraphListMenu_o *)v13->fields.titleInfo;
      if ( !this )
        goto LABEL_17;
      TitleInfoControl__setTitleInfo((TitleInfoControl_o *)this, 0LL, 1, 0LL, 23, 0LL);
      this = (EquipGraphListMenu_o *)v13->fields.titleInfo;
      if ( !this )
        goto LABEL_17;
      TitleInfoControl__setBackBtnSprite_18688908((TitleInfoControl_o *)this, 1, 0, 0, 0LL);
      servantEquipListViewManager = v13->fields.servantEquipListViewManager;
      if ( !servantEquipListViewManager )
        sub_B7769C(0LL, v23);
      EquipGraphListViewManager__CreateList(
        servantEquipListViewManager,
        baseDeckItemList,
        partyItem,
        member,
        setupInfo,
        0LL);
      this = (EquipGraphListMenu_o *)v13->fields.servantEquipListViewManager;
      if ( !this
        || (scaleChangeTabSprite = v13->fields.scaleChangeTabSprite,
            this = (EquipGraphListMenu_o *)EquipGraphListViewManager__GetScaleButtonSpriteName(
                                             (EquipGraphListViewManager_o *)this,
                                             0LL),
            !scaleChangeTabSprite) )
      {
LABEL_17:
        sub_B7769C(this, baseDeckItemList);
      }
      UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)this, 0LL);
      v13->fields.state = 1;
      v26 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v26, (Il2CppObject *)v13, Method_EquipGraphListMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)v13, v26, 0LL);
    }
  }
  else
  {
    v13->fields.callbackFunc = callback;
    sub_B77560(
      (BattleServantConfConponent_o *)&v13->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)partyItem,
      *(System_String_array ***)&member,
      (System_Boolean_array **)setupInfo,
      (System_Int32_array **)callback,
      (System_Int32_array *)method,
      v7);
    v13->fields.state = 2;
    EquipGraphListMenu__SetTabKind(v13, v13->fields.modeKind, 0, v15);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu__Open_34208356(
        EquipGraphListMenu_o *this,
        WarBoardPartyListViewItem_o *partyItem,
        int32_t member,
        EventUpValSetupInfo_o *setupInfo,
        EquipGraphListMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  EquipGraphListMenu_o *v12; // x19
  int32_t state; // w8
  const MethodInfo *v14; // x3
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  const MethodInfo *v21; // x3
  __int64 v22; // x1
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v25; // x20

  v12 = this;
  if ( (byte_438FAC5 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    this = (EquipGraphListMenu_o *)sub_B775C4(&Method_EquipGraphListMenu_EndOpen__);
    byte_438FAC5 = 1;
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
      sub_B77560(
        (BattleServantConfConponent_o *)&v12->fields.callbackFunc,
        (System_Int32_array **)callback,
        v15,
        v16,
        v17,
        v18,
        v19,
        v20);
      this = (EquipGraphListMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0LL);
      if ( !this )
        goto LABEL_17;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      EquipGraphListMenu__SetTabKind(v12, v12->fields.modeKind, 1, v21);
      this = (EquipGraphListMenu_o *)v12->fields.titleInfo;
      if ( !this )
        goto LABEL_17;
      TitleInfoControl__setTitleInfo((TitleInfoControl_o *)this, 0LL, 1, 0LL, 23, 0LL);
      this = (EquipGraphListMenu_o *)v12->fields.titleInfo;
      if ( !this )
        goto LABEL_17;
      TitleInfoControl__setBackBtnSprite_18688908((TitleInfoControl_o *)this, 1, 0, 0, 0LL);
      servantEquipListViewManager = v12->fields.servantEquipListViewManager;
      if ( !servantEquipListViewManager )
        sub_B7769C(0LL, v22);
      EquipGraphListViewManager__CreateList_31609396(servantEquipListViewManager, partyItem, member, setupInfo, 0LL);
      this = (EquipGraphListMenu_o *)v12->fields.servantEquipListViewManager;
      if ( !this
        || (scaleChangeTabSprite = v12->fields.scaleChangeTabSprite,
            this = (EquipGraphListMenu_o *)EquipGraphListViewManager__GetScaleButtonSpriteName(
                                             (EquipGraphListViewManager_o *)this,
                                             0LL),
            !scaleChangeTabSprite) )
      {
LABEL_17:
        sub_B7769C(this, partyItem);
      }
      UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)this, 0LL);
      v12->fields.state = 1;
      v25 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
      System_Action___ctor(v25, (Il2CppObject *)v12, Method_EquipGraphListMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)v12, v25, 0LL);
    }
  }
  else
  {
    v12->fields.callbackFunc = callback;
    sub_B77560(
      (BattleServantConfConponent_o *)&v12->fields.callbackFunc,
      (System_Int32_array **)callback,
      *(System_String_array ***)&member,
      (System_String_array **)setupInfo,
      (System_Boolean_array **)callback,
      (System_Int32_array **)method,
      v6,
      v7);
    v12->fields.state = 2;
    EquipGraphListMenu__SetTabKind(v12, v12->fields.modeKind, 0, v14);
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
  bool v7; // w21
  __int64 *v8; // x8
  bool v9; // w23
  unsigned int v10; // w21
  UICommonButton_o *statusTabButton; // x22
  bool enabled; // w0
  __int64 *v13; // x8
  UICommonButton_o *lockTabButton; // x22
  bool v15; // w0
  __int64 *v16; // x8
  UICommonButton_o *choiceTabButton; // x22
  bool v18; // w0
  UILabel_o *explanationLabel; // x21
  __int64 *v20; // x8
  int32_t state; // w8
  EquipGraphListViewManager_o *servantEquipListViewManager; // x21
  EquipGraphListViewManager_CallbackFunc_o *v23; // x20

  v6 = this;
  if ( (byte_438FAC8 & 1) == 0 )
  {
    sub_B775C4(&EquipGraphListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_EquipGraphListMenu_OnSelectServantEquip__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_11930/*"SERVANT_EQUIP_OPERATION_EXPLANATION_CHOICE"*/);
    sub_B775C4(&StringLiteral_17463/*"button_allchoice_reg"*/);
    sub_B775C4(&StringLiteral_17466/*"button_alllock_unreg"*/);
    sub_B775C4(&StringLiteral_11932/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/);
    sub_B775C4(&StringLiteral_11931/*"SERVANT_EQUIP_OPERATION_EXPLANATION_LOCK"*/);
    sub_B775C4(&StringLiteral_17479/*"button_select_reg"*/);
    sub_B775C4(&StringLiteral_17480/*"button_select_unreg"*/);
    sub_B775C4(&StringLiteral_17465/*"button_alllock_reg"*/);
    this = (EquipGraphListMenu_o *)sub_B775C4(&StringLiteral_17464/*"button_allchoice_unreg"*/);
    byte_438FAC8 = 1;
  }
  v7 = !v6->fields.isInitTab || isInit;
  if ( v7 || v6->fields.modeKind != modeKind )
  {
    this = (EquipGraphListMenu_o *)v6->fields.statusTabButton;
    if ( !this )
      goto LABEL_48;
    ((void (__fastcall *)(EquipGraphListMenu_o *, __int64, void *, const MethodInfo *))this->klass[1]._1.namespaze)(
      this,
      1LL,
      this->klass[1]._1.byval_arg.data,
      method);
    this = (EquipGraphListMenu_o *)v6->fields.statusTabButton;
    if ( !this )
      goto LABEL_48;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, modeKind != 0, 0LL);
    this = (EquipGraphListMenu_o *)v6->fields.statusTabSprite;
    if ( !this )
      goto LABEL_48;
    v8 = &StringLiteral_17479/*"button_select_reg"*/;
    if ( modeKind )
      v8 = &StringLiteral_17480/*"button_select_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v8, 0LL);
    this = (EquipGraphListMenu_o *)v6->fields.statusTabButton;
    if ( !this )
      goto LABEL_48;
    v9 = !v7;
    v10 = !v7;
    this = (EquipGraphListMenu_o *)((__int64 (__fastcall *)(EquipGraphListMenu_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                                     this,
                                     0LL,
                                     v10,
                                     this->klass[1]._1.interfaceOffsets);
    statusTabButton = v6->fields.statusTabButton;
    if ( !statusTabButton )
      goto LABEL_48;
    enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v6->fields.statusTabButton, 0LL);
    UICommonButton__SetColliderEnable(statusTabButton, enabled, v10, 0LL);
    this = (EquipGraphListMenu_o *)v6->fields.lockTabButton;
    if ( !this )
      goto LABEL_48;
    ((void (__fastcall *)(EquipGraphListMenu_o *, __int64, void *))this->klass[1]._1.namespaze)(
      this,
      1LL,
      this->klass[1]._1.byval_arg.data);
    this = (EquipGraphListMenu_o *)v6->fields.lockTabButton;
    if ( !this )
      goto LABEL_48;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, modeKind != 1, 0LL);
    this = (EquipGraphListMenu_o *)v6->fields.lockTabSprite;
    if ( !this )
      goto LABEL_48;
    v13 = &StringLiteral_17465/*"button_alllock_reg"*/;
    if ( modeKind != 1 )
      v13 = &StringLiteral_17466/*"button_alllock_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v13, 0LL);
    this = (EquipGraphListMenu_o *)v6->fields.lockTabButton;
    if ( !this )
      goto LABEL_48;
    this = (EquipGraphListMenu_o *)((__int64 (__fastcall *)(EquipGraphListMenu_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                                     this,
                                     0LL,
                                     v9,
                                     this->klass[1]._1.interfaceOffsets);
    lockTabButton = v6->fields.lockTabButton;
    if ( !lockTabButton )
      goto LABEL_48;
    v15 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v6->fields.lockTabButton, 0LL);
    UICommonButton__SetColliderEnable(lockTabButton, v15, v9, 0LL);
    this = (EquipGraphListMenu_o *)v6->fields.choiceTabButton;
    if ( !this )
      goto LABEL_48;
    ((void (__fastcall *)(EquipGraphListMenu_o *, __int64, void *))this->klass[1]._1.namespaze)(
      this,
      1LL,
      this->klass[1]._1.byval_arg.data);
    this = (EquipGraphListMenu_o *)v6->fields.choiceTabButton;
    if ( !this )
      goto LABEL_48;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)this, modeKind != 2, 0LL);
    this = (EquipGraphListMenu_o *)v6->fields.choiceTabSprite;
    if ( !this )
      goto LABEL_48;
    v16 = &StringLiteral_17463/*"button_allchoice_reg"*/;
    if ( modeKind != 2 )
      v16 = &StringLiteral_17464/*"button_allchoice_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v16, 0LL);
    this = (EquipGraphListMenu_o *)v6->fields.choiceTabButton;
    if ( !this )
      goto LABEL_48;
    this = (EquipGraphListMenu_o *)((__int64 (__fastcall *)(EquipGraphListMenu_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                                     this,
                                     0LL,
                                     v9,
                                     this->klass[1]._1.interfaceOffsets);
    choiceTabButton = v6->fields.choiceTabButton;
    if ( !choiceTabButton )
      goto LABEL_48;
    v18 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v6->fields.choiceTabButton, 0LL);
    UICommonButton__SetColliderEnable(choiceTabButton, v18, v9, 0LL);
    if ( modeKind == 2 )
    {
      explanationLabel = v6->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v20 = &StringLiteral_11930/*"SERVANT_EQUIP_OPERATION_EXPLANATION_CHOICE"*/;
    }
    else if ( modeKind == 1 )
    {
      explanationLabel = v6->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v20 = &StringLiteral_11931/*"SERVANT_EQUIP_OPERATION_EXPLANATION_LOCK"*/;
    }
    else
    {
      if ( modeKind )
        goto LABEL_43;
      explanationLabel = v6->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v20 = &StringLiteral_11932/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/;
    }
    this = (EquipGraphListMenu_o *)LocalizationManager__Get((System_String_o *)*v20, 0LL);
    if ( !explanationLabel )
      goto LABEL_48;
    UILabel__set_text(explanationLabel, (System_String_o *)this, 0LL);
  }
LABEL_43:
  state = v6->fields.state;
  servantEquipListViewManager = v6->fields.servantEquipListViewManager;
  v6->fields.isInitTab = 1;
  v6->fields.modeKind = modeKind;
  if ( state == 2 )
  {
    v23 = (EquipGraphListViewManager_CallbackFunc_o *)sub_B77694(EquipGraphListViewManager_CallbackFunc_TypeInfo);
    EquipGraphListViewManager_CallbackFunc___ctor(
      v23,
      (Il2CppObject *)v6,
      Method_EquipGraphListMenu_OnSelectServantEquip__,
      0LL);
    if ( servantEquipListViewManager )
    {
      EquipGraphListViewManager__SetMode(servantEquipListViewManager, 2, v23, 0LL);
      return;
    }
LABEL_48:
    sub_B7769C(this, *(_QWORD *)&modeKind);
  }
  if ( !servantEquipListViewManager )
    goto LABEL_48;
  EquipGraphListViewManager__SetMode_31613644(servantEquipListViewManager, 1, 0LL);
}


void __fastcall EquipGraphListMenu__StatusRequest(
        EquipGraphListMenu_o *this,
        EquipGraphListMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t modeKind; // w8
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  NetworkManager_ResultCallbackFunc_o *v13; // x20
  System_Int64_array *v14; // x2
  System_Int64_array *v15; // x1
  bool v16; // w4
  bool v17; // w5
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  NetworkManager_ResultCallbackFunc_o *v24; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_438FACF & 1) == 0 )
  {
    sub_B775C4(&Method_EquipGraphListMenu_EndStatusSync__);
    sub_B775C4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_438FACF = 1;
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
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
      v24 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v24,
        (Il2CppObject *)this,
        Method_EquipGraphListMenu_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      servantEquipListViewManager = (EquipGraphListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                     v24,
                                                                     (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( servantEquipListViewManager )
      {
        v14 = unchoiceList;
        v15 = choiceList;
        v17 = 1;
        v16 = 0;
        goto LABEL_19;
      }
LABEL_23:
      sub_B7769C(servantEquipListViewManager, callback);
    }
  }
  else if ( modeKind == 1 )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager )
      goto LABEL_23;
    if ( EquipGraphListViewManager__GetSwapLockList(servantEquipListViewManager, &lockList, &unlockList, 0LL) )
    {
      this->fields.requedstCallback = callback;
      sub_B77560(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v7,
        v8,
        v9,
        v10,
        v11,
        v12);
      v13 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v13,
        (Il2CppObject *)this,
        Method_EquipGraphListMenu_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      servantEquipListViewManager = (EquipGraphListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                     v13,
                                                                     (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( servantEquipListViewManager )
      {
        v14 = unlockList;
        v15 = lockList;
        v16 = 1;
        v17 = 0;
LABEL_19:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)servantEquipListViewManager,
          v15,
          v14,
          0,
          v16,
          v17,
          0LL);
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

  if ( (byte_438FAC2 & 1) == 0 )
  {
    sub_B775C4(&EquipGraphListMenu_CallbackFunc_TypeInfo);
    byte_438FAC2 = 1;
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
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B77990(v8);
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

  if ( (byte_438FAC3 & 1) == 0 )
  {
    sub_B775C4(&EquipGraphListMenu_CallbackFunc_TypeInfo);
    byte_438FAC3 = 1;
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
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B77990(v8);
  EquipGraphListMenu__GetModeKind(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu_CallbackFunc___ctor(
        EquipGraphListMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B77560(p_method);
}


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
  if ( (byte_4388609 & 1) == 0 )
  {
    sub_B775C4(&EquipGraphListMenu_ResultKind_TypeInfo);
    byte_4388609 = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(EquipGraphListMenu_ResultKind_TypeInfo, &v12, item);
  v11[1] = (__int64)item;
  return (System_IAsyncResult_o *)sub_B77568(this, v11, callback, object);
}


void __fastcall EquipGraphListMenu_CallbackFunc__EndInvoke(
        EquipGraphListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
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
        sub_B77680(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result);
      if ( (sub_B775F4(v22) & 1) == 0 )
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
      v24 = sub_B775EC(v22);
      v25 = sub_B779F0(v22);
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
            v18 = sub_B0F4C0(v21, v28, v29);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, EquipGraphListViewItem_o *, _QWORD))sub_B77674(v17, v22);
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
            v16 = sub_B0F4C0(v21, class_0, v10);
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
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B77560(p_method);
}


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
  if ( (byte_438860A & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    byte_438860A = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


void __fastcall EquipGraphListMenu_RequestCallbackFunc__EndInvoke(
        EquipGraphListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
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
        sub_B77680(*(_QWORD *)&v18->fields.extra_arg, isRequest);
      if ( (sub_B775F4(v20) & 1) == 0 )
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
      v22 = sub_B775EC(v20);
      v23 = sub_B779F0(v20);
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
            v16 = sub_B0F4C0(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B77674(v15, v20);
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
            v14 = sub_B0F4C0(v19, class_0, v9);
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
  Il2CppObject *v1; // x19
  struct EquipGraphListMenu___c_StaticFields *static_fields; // x0

  if ( (byte_4388606 & 1) == 0 )
  {
    sub_B775C4(&EquipGraphListMenu___c_TypeInfo);
    byte_4388606 = 1;
  }
  v1 = (Il2CppObject *)sub_B77694(EquipGraphListMenu___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = EquipGraphListMenu___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EquipGraphListMenu___c_o *)v1;
  sub_B77560(static_fields);
}


void __fastcall EquipGraphListMenu___c___ctor(EquipGraphListMenu___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall EquipGraphListMenu___c___Open_b__28_0(
        EquipGraphListMenu___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ManagementManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4388607 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4388607 = 1;
  }
  Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v4);
  ManagementManager__reboot(Instance, 0, 0LL);
}


void __fastcall EquipGraphListMenu___c___Open_b__29_0(
        EquipGraphListMenu___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ManagementManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4388608 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4388608 = 1;
  }
  Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_B7769C(0LL, v4);
  ManagementManager__reboot(Instance, 0, 0LL);
}