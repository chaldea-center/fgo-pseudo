void __fastcall EquipGraphListMenu___ctor(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  if ( (byte_418BDD0 & 1) == 0 )
  {
    sub_B2C35C(&BaseMenu_TypeInfo, method);
    byte_418BDD0 = 1;
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
        sub_B2C434(0LL, result);
      Item = EquipGraphListViewManager__GetItem(servantEquipListViewManager, n, 0LL);
    }
    p_callbackFunc->klass = 0LL;
    sub_B2C2F8(p_callbackFunc, 0LL, *(System_String_array ***)&n, (System_String_array **)method, v4, v5, v6, v7);
    EquipGraphListMenu_CallbackFunc__Invoke(callbackFunc, result, Item, 0LL);
  }
}


void __fastcall EquipGraphListMenu__Close(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EquipGraphListMenu__Close_33199788(this, 0LL, v2);
}


void __fastcall EquipGraphListMenu__Close_33199788(
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
  System_Action_o *v13; // x20

  if ( (byte_418BDC2 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_EquipGraphListMenu_EndClose__, v10);
    byte_418BDC2 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
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
  v13 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
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
  __int64 selectNum; // x1
  ListViewManager_o *servantEquipListViewManager; // x0
  struct UICommonButton_o *sortKindButton; // x21
  EventServantEntity_o *v14; // x20
  bool IsNoPeriod; // w0
  System_String_o *v16; // x21
  Il2CppObject *EndTimeStr; // x0
  System_String_o *v18; // x20
  CommonUI_o *Instance; // x21
  System_String_o *v20; // x22
  System_Action_o *v21; // x23
  EquipGraphListMenu_RequestCallbackFunc_o *v22; // x20
  const MethodInfo *v23; // x2

  if ( (byte_418BDC4 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_EquipGraphListMenu_EndCloseEventServantWarning__, v3);
    sub_B2C35C(&Method_EquipGraphListMenu_EndRequestClickDecide__, v4);
    sub_B2C35C(&LocalizationManager_TypeInfo, v5);
    sub_B2C35C(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_B2C35C(&SoundManager_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_5526/*"EQUIP_GRAPH_EVENT_SERVANT_WARNING_MESSAGE"*/, v9);
    sub_B2C35C(&StringLiteral_5527/*"EQUIP_GRAPH_EVENT_SERVANT_WARNING_TITLE"*/, v10);
    byte_418BDC4 = 1;
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
    v14 = (EventServantEntity_o *)servantEquipListViewManager;
    if ( UserServantEntity__IsEventJoin((UserServantEntity_o *)sortKindButton->fields.tweenTargets, 0LL) )
    {
      servantEquipListViewManager = (ListViewManager_o *)sortKindButton->fields.tweenTargets;
      if ( !servantEquipListViewManager )
        goto LABEL_25;
      IsNoPeriod = UserServantEntity__IsNoPeriod((UserServantEntity_o *)servantEquipListViewManager, 0LL);
      if ( v14 )
      {
        if ( !IsNoPeriod )
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v16 = LocalizationManager__Get((System_String_o *)StringLiteral_5526/*"EQUIP_GRAPH_EVENT_SERVANT_WARNING_MESSAGE"*/, 0LL);
          EndTimeStr = (Il2CppObject *)EventServantEntity__getEndTimeStr(v14, 0LL);
          v18 = System_String__Format(v16, EndTimeStr, 0LL);
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v20 = LocalizationManager__Get((System_String_o *)StringLiteral_5527/*"EQUIP_GRAPH_EVENT_SERVANT_WARNING_TITLE"*/, 0LL);
          v21 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(v21, (Il2CppObject *)this, Method_EquipGraphListMenu_EndCloseEventServantWarning__, 0LL);
          if ( Instance )
          {
            CommonUI__OpenNotificationDialog(Instance, v20, v18, v21, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0LL);
            return;
          }
LABEL_25:
          sub_B2C434(servantEquipListViewManager, selectNum);
        }
      }
    }
  }
  v22 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_B2C42C(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
  EquipGraphListMenu_RequestCallbackFunc___ctor(
    v22,
    (Il2CppObject *)this,
    Method_EquipGraphListMenu_EndRequestClickDecide__,
    0LL);
  EquipGraphListMenu__StatusRequest(this, v22, v23);
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
      sub_B2C434(servantEquipListViewManager, isRequest);
    }
    EquipGraphListViewManager__SetMode_29525100(servantEquipListViewManager, 3, 0LL);
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
      sub_B2C434(servantEquipListViewManager, isRequest);
    }
    EquipGraphListViewManager__SetMode_29525100(servantEquipListViewManager, 3, 0LL);
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
      sub_B2C434(servantEquipListViewManager, isRequest);
    }
    EquipGraphListViewManager__SetMode_29525100(servantEquipListViewManager, 3, 0LL);
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
    sub_B2C2F8(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall EquipGraphListMenu__EndCloseEventServantWarning(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  EquipGraphListMenu_RequestCallbackFunc_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_418BDC5 & 1) == 0 )
  {
    sub_B2C35C(&Method_EquipGraphListMenu_EndRequestClickDecide__, method);
    sub_B2C35C(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo, v3);
    byte_418BDC5 = 1;
  }
  v4 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_B2C42C(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
  EquipGraphListMenu_RequestCallbackFunc___ctor(
    v4,
    (Il2CppObject *)this,
    Method_EquipGraphListMenu_EndRequestClickDecide__,
    0LL);
  EquipGraphListMenu__StatusRequest(this, v4, v5);
}


void __fastcall EquipGraphListMenu__EndCloseList(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall EquipGraphListMenu__EndCloseShowServantEquip(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  EquipGraphListViewManager_o *servantEquipListViewManager; // x20
  EquipGraphListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_418BDCE & 1) == 0 )
  {
    sub_B2C35C(&EquipGraphListViewManager_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_EquipGraphListMenu_OnSelectServantEquip__, v3);
    byte_418BDCE = 1;
  }
  this->fields.state = 2;
  servantEquipListViewManager = this->fields.servantEquipListViewManager;
  v5 = (EquipGraphListViewManager_CallbackFunc_o *)sub_B2C42C(EquipGraphListViewManager_CallbackFunc_TypeInfo);
  EquipGraphListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_EquipGraphListMenu_OnSelectServantEquip__,
    0LL);
  if ( !servantEquipListViewManager )
    sub_B2C434(v6, v7);
  EquipGraphListViewManager__SetMode(servantEquipListViewManager, 2, v5, 0LL);
}


void __fastcall EquipGraphListMenu__EndOpen(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  CommonUI_o *Instance; // x20
  TutorialFlag_ImageId_array *v7; // x0
  TutorialFlag_ImageId_array *v8; // x1
  il2cpp_array_size_t max_length; // w8
  __int64 v10; // x0

  if ( (byte_418BDC1 & 1) == 0 )
  {
    sub_B2C35C(&TutorialFlag_ImageId___TypeInfo, method);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_B2C35C(&TutorialFlag_TypeInfo, v4);
    byte_418BDC1 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_28617756(110, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v7 = (TutorialFlag_ImageId_array *)sub_B2C374(TutorialFlag_ImageId___TypeInfo, 2LL);
    if ( !v7 )
      goto LABEL_14;
    max_length = v7->max_length;
    v8 = v7;
    if ( !max_length || (v7->m_Items[1] = 4, max_length == 1) )
    {
      v10 = sub_B2C460(v7);
      sub_B2C400(v10, 0LL);
    }
    v7->m_Items[2] = 5;
    if ( !Instance )
LABEL_14:
      sub_B2C434(v7, v8);
    CommonUI__OpenTutorialImageDialog(Instance, v7, 110, 0LL, 0LL, 0LL, 0LL);
  }
  this->fields.state = 2;
  EquipGraphListMenu__SetTabKind(this, this->fields.modeKind, 0, v5);
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
      sub_B2C434(servantEquipListViewManager, isRequest);
    }
    EquipGraphListViewManager__SetMode_29525100(servantEquipListViewManager, 3, 0LL);
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
      sub_B2C434(servantEquipListViewManager, isRequest);
    }
    EquipGraphListViewManager__SetMode_29525100(servantEquipListViewManager, 3, 0LL);
  }
  EquipGraphListMenu__Callback(this, 1, this->fields.selectNum, v3);
}


void __fastcall EquipGraphListMenu__EndSelectEquip(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  EquipGraphListViewManager_o *servantEquipListViewManager; // x20
  EquipGraphListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_418BDCC & 1) == 0 )
  {
    sub_B2C35C(&EquipGraphListViewManager_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_EquipGraphListMenu_OnSelectServantEquip__, v3);
    byte_418BDCC = 1;
  }
  this->fields.state = 2;
  servantEquipListViewManager = this->fields.servantEquipListViewManager;
  v5 = (EquipGraphListViewManager_CallbackFunc_o *)sub_B2C42C(EquipGraphListViewManager_CallbackFunc_TypeInfo);
  EquipGraphListViewManager_CallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_EquipGraphListMenu_OnSelectServantEquip__,
    0LL);
  if ( !servantEquipListViewManager )
    sub_B2C434(v6, v7);
  EquipGraphListViewManager__SetMode(servantEquipListViewManager, 2, v5, 0LL);
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
  CommonUI_o *Instance; // x20
  System_Action_o *v9; // x21

  if ( (byte_418BDCD & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&Method_EquipGraphListMenu_EndCloseShowServantEquip__, v5);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    byte_418BDCD = 1;
  }
  if ( isDecide )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager
      || (EquipGraphListViewManager__ModifyList(servantEquipListViewManager, 0, 0LL),
          (servantEquipListViewManager = this->fields.servantEquipListViewManager) == 0LL) )
    {
LABEL_9:
      sub_B2C434(servantEquipListViewManager, isDecide);
    }
    EquipGraphListViewManager__SetMode_29525100(servantEquipListViewManager, 3, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_EquipGraphListMenu_EndCloseShowServantEquip__, 0LL);
  if ( !Instance )
    goto LABEL_9;
  CommonUI__CloseServantEquipStatusDialog(Instance, v9, 0LL);
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
    sub_B2C2F8(p_requedstCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B2C434(0LL, method);
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
  EquipGraphListMenu_RequestCallbackFunc_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_418BDC6 & 1) == 0 )
  {
    sub_B2C35C(&Method_EquipGraphListMenu_EndRequestClickCancel__, method);
    sub_B2C35C(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_418BDC6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !this->fields.isSelectedSvt )
    {
      servantEquipListViewManager = (ListViewManager_o *)this->fields.servantEquipListViewManager;
      if ( !servantEquipListViewManager )
        sub_B2C434(0LL, method);
      ListViewManager__SetScrollBarValue(servantEquipListViewManager, 0LL);
    }
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    v6 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_B2C42C(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
    EquipGraphListMenu_RequestCallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_EquipGraphListMenu_EndRequestClickCancel__,
      0LL);
    EquipGraphListMenu__StatusRequest(this, v6, v7);
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
      sub_B2C434(0LL, method);
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

  if ( (byte_418BDCF & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418BDCF = 1;
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
      sub_B2C434(servantEquipListViewManager, v3);
    }
    UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)servantEquipListViewManager, 0LL);
  }
}


void __fastcall EquipGraphListMenu__OnClickTabChoice(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  int32_t modeKind; // w8
  EquipGraphListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2
  EquipGraphListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_418BDC9 & 1) == 0 )
  {
    sub_B2C35C(&Method_EquipGraphListMenu_EndClickTabChoice__, method);
    sub_B2C35C(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_418BDC9 = 1;
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
        v7 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_B2C42C(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
        EquipGraphListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_EquipGraphListMenu_EndClickTabChoice__,
          0LL);
        EquipGraphListMenu__StatusRequest(this, v7, v8);
        return;
      }
      v9 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_B2C42C(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
      EquipGraphListMenu_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_EquipGraphListMenu_EndClickTabChoice__,
        0LL);
      EquipGraphListMenu__StatusRequest(this, v9, v10);
    }
    EquipGraphListMenu__SetTabKind(this, 2, 0, v5);
  }
}


void __fastcall EquipGraphListMenu__OnClickTabLock(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  const MethodInfo *v5; // x3
  int32_t modeKind; // w8
  EquipGraphListMenu_RequestCallbackFunc_o *v7; // x20
  const MethodInfo *v8; // x2
  EquipGraphListMenu_RequestCallbackFunc_o *v9; // x20
  const MethodInfo *v10; // x2

  if ( (byte_418BDC8 & 1) == 0 )
  {
    sub_B2C35C(&Method_EquipGraphListMenu_EndClickTabLock__, method);
    sub_B2C35C(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_418BDC8 = 1;
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
        v7 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_B2C42C(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
        EquipGraphListMenu_RequestCallbackFunc___ctor(
          v7,
          (Il2CppObject *)this,
          Method_EquipGraphListMenu_EndClickTabLock__,
          0LL);
        EquipGraphListMenu__StatusRequest(this, v7, v8);
        return;
      }
      v9 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_B2C42C(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
      EquipGraphListMenu_RequestCallbackFunc___ctor(
        v9,
        (Il2CppObject *)this,
        Method_EquipGraphListMenu_EndClickTabLock__,
        0LL);
      EquipGraphListMenu__StatusRequest(this, v9, v10);
    }
    EquipGraphListMenu__SetTabKind(this, 1, 0, v5);
  }
}


void __fastcall EquipGraphListMenu__OnClickTabStatus(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  EquipGraphListMenu_RequestCallbackFunc_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_418BDC7 & 1) == 0 )
  {
    sub_B2C35C(&Method_EquipGraphListMenu_EndClickTabStatus__, method);
    sub_B2C35C(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo, v3);
    sub_B2C35C(&SoundManager_TypeInfo, v4);
    byte_418BDC7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v5 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_B2C42C(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
    EquipGraphListMenu_RequestCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_EquipGraphListMenu_EndClickTabStatus__,
      0LL);
    EquipGraphListMenu__StatusRequest(this, v5, v6);
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
  __int64 v13; // x1
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  EquipGraphListViewItem_o *Item; // x20
  int32_t v16; // w8
  EquipGraphListViewManager_o *v17; // x21
  System_Action_o *v18; // x22
  int32_t modeKind; // w8
  const MethodInfo *v20; // x3
  WebViewManager_o *Instance; // x0
  UserServantEntity_o *userSvtEntity; // x21
  CommonUI_o *v23; // x22
  bool v24; // w20
  EquipGraphListViewManager_o *v25; // x20
  EquipGraphListViewManager_CallbackFunc_o *v26; // x21
  ServantStatusDialog_EndDelegate_o *v27; // x23

  if ( (byte_418BDCB & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&EquipGraphListViewManager_CallbackFunc_TypeInfo, v7);
    sub_B2C35C(&ServantStatusDialog_EndDelegate_TypeInfo, v8);
    sub_B2C35C(&Method_EquipGraphListMenu_EndSelectEquip__, v9);
    sub_B2C35C(&Method_EquipGraphListMenu_EndShowServantEquip__, v10);
    sub_B2C35C(&Method_EquipGraphListMenu_OnSelectServantEquip__, v11);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12);
    sub_B2C35C(&SoundManager_TypeInfo, v13);
    byte_418BDCB = 1;
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
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          userSvtEntity = Item->fields.userSvtEntity;
          v23 = (CommonUI_o *)Instance;
          v24 = EquipGraphListViewItem__get_IsUse(Item, 0LL) || Item->fields.isBase;
          v27 = (ServantStatusDialog_EndDelegate_o *)sub_B2C42C(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v27,
            (Il2CppObject *)this,
            Method_EquipGraphListMenu_EndShowServantEquip__,
            0LL);
          if ( v23 )
          {
            CommonUI__OpenServantEquipStatusDialog_17986180(v23, 0, userSvtEntity, v24, v27, 0LL, 0LL);
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
        v25 = this->fields.servantEquipListViewManager;
LABEL_41:
        v26 = (EquipGraphListViewManager_CallbackFunc_o *)sub_B2C42C(EquipGraphListViewManager_CallbackFunc_TypeInfo);
        EquipGraphListViewManager_CallbackFunc___ctor(
          v26,
          (Il2CppObject *)this,
          Method_EquipGraphListMenu_OnSelectServantEquip__,
          0LL);
        if ( v25 )
        {
          EquipGraphListViewManager__SetMode(v25, 2, v26, 0LL);
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
          EquipGraphListMenu__Callback(this, 0, -1, v20);
        }
        return;
      }
      v16 = this->fields.modeKind;
      if ( v16 == 2 )
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
        if ( v16 != 1 )
        {
          if ( v16 )
            return;
          v17 = this->fields.servantEquipListViewManager;
          v18 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
          System_Action___ctor(v18, (Il2CppObject *)this, Method_EquipGraphListMenu_EndSelectEquip__, 0LL);
          if ( v17 )
          {
            EquipGraphListViewManager__SelectEquip(v17, Item, v18, 0LL);
            return;
          }
LABEL_50:
          sub_B2C434(servantEquipListViewManager, *(_QWORD *)&kind);
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
    v25 = this->fields.servantEquipListViewManager;
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
  __int64 v14; // x1
  int32_t state; // w8
  const MethodInfo *v16; // x3
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  const MethodInfo *v23; // x3
  __int64 v24; // x1
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v27; // x20

  v13 = this;
  if ( (byte_418BDBF & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, baseDeckItemList);
    this = (EquipGraphListMenu_o *)sub_B2C35C(&Method_EquipGraphListMenu_EndOpen__, v14);
    byte_418BDBF = 1;
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
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v13->fields.callbackFunc,
        (System_Int32_array **)callback,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
      this = (EquipGraphListMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v13, 0LL);
      if ( !this )
        goto LABEL_17;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      EquipGraphListMenu__SetTabKind(v13, v13->fields.modeKind, 1, v23);
      this = (EquipGraphListMenu_o *)v13->fields.titleInfo;
      if ( !this )
        goto LABEL_17;
      TitleInfoControl__setTitleInfo((TitleInfoControl_o *)this, 0LL, 1, 0LL, 23, 0LL);
      this = (EquipGraphListMenu_o *)v13->fields.titleInfo;
      if ( !this )
        goto LABEL_17;
      TitleInfoControl__setBackBtnSprite_19529688((TitleInfoControl_o *)this, 1, 0, 0, 0LL);
      servantEquipListViewManager = v13->fields.servantEquipListViewManager;
      if ( !servantEquipListViewManager )
        sub_B2C434(0LL, v24);
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
        sub_B2C434(this, baseDeckItemList);
      }
      UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)this, 0LL);
      v13->fields.state = 1;
      v27 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v27, (Il2CppObject *)v13, Method_EquipGraphListMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)v13, v27, 0LL);
    }
  }
  else
  {
    v13->fields.callbackFunc = callback;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v13->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)partyItem,
      *(System_String_array ***)&member,
      (System_Boolean_array **)setupInfo,
      (System_Int32_array **)callback,
      (System_Int32_array *)method,
      v7);
    v13->fields.state = 2;
    EquipGraphListMenu__SetTabKind(v13, v13->fields.modeKind, 0, v16);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu__Open_33198460(
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
  __int64 v13; // x1
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

  v12 = this;
  if ( (byte_418BDC0 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, partyItem);
    this = (EquipGraphListMenu_o *)sub_B2C35C(&Method_EquipGraphListMenu_EndOpen__, v13);
    byte_418BDC0 = 1;
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
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&v12->fields.callbackFunc,
        (System_Int32_array **)callback,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      this = (EquipGraphListMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v12, 0LL);
      if ( !this )
        goto LABEL_17;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      EquipGraphListMenu__SetTabKind(v12, v12->fields.modeKind, 1, v22);
      this = (EquipGraphListMenu_o *)v12->fields.titleInfo;
      if ( !this )
        goto LABEL_17;
      TitleInfoControl__setTitleInfo((TitleInfoControl_o *)this, 0LL, 1, 0LL, 23, 0LL);
      this = (EquipGraphListMenu_o *)v12->fields.titleInfo;
      if ( !this )
        goto LABEL_17;
      TitleInfoControl__setBackBtnSprite_19529688((TitleInfoControl_o *)this, 1, 0, 0, 0LL);
      servantEquipListViewManager = v12->fields.servantEquipListViewManager;
      if ( !servantEquipListViewManager )
        sub_B2C434(0LL, v23);
      EquipGraphListViewManager__CreateList_29520852(servantEquipListViewManager, partyItem, member, setupInfo, 0LL);
      this = (EquipGraphListMenu_o *)v12->fields.servantEquipListViewManager;
      if ( !this
        || (scaleChangeTabSprite = v12->fields.scaleChangeTabSprite,
            this = (EquipGraphListMenu_o *)EquipGraphListViewManager__GetScaleButtonSpriteName(
                                             (EquipGraphListViewManager_o *)this,
                                             0LL),
            !scaleChangeTabSprite) )
      {
LABEL_17:
        sub_B2C434(this, partyItem);
      }
      UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)this, 0LL);
      v12->fields.state = 1;
      v26 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v26, (Il2CppObject *)v12, Method_EquipGraphListMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)v12, v26, 0LL);
    }
  }
  else
  {
    v12->fields.callbackFunc = callback;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v12->fields.callbackFunc,
      (System_Int32_array **)callback,
      *(System_String_array ***)&member,
      (System_String_array **)setupInfo,
      (System_Boolean_array **)callback,
      (System_Int32_array **)method,
      v6,
      v7);
    v12->fields.state = 2;
    EquipGraphListMenu__SetTabKind(v12, v12->fields.modeKind, 0, v15);
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
  System_String_o **v19; // x8
  bool v20; // w23
  unsigned int v21; // w21
  UICommonButton_o *statusTabButton; // x22
  bool enabled; // w0
  System_String_o **v24; // x8
  UICommonButton_o *lockTabButton; // x22
  bool v26; // w0
  System_String_o **v27; // x8
  UICommonButton_o *choiceTabButton; // x22
  bool v29; // w0
  UILabel_o *explanationLabel; // x21
  __int64 *v31; // x8
  int32_t state; // w8
  EquipGraphListViewManager_o *servantEquipListViewManager; // x21
  EquipGraphListViewManager_CallbackFunc_o *v34; // x20

  v6 = this;
  if ( (byte_418BDC3 & 1) == 0 )
  {
    sub_B2C35C(&EquipGraphListViewManager_CallbackFunc_TypeInfo, *(_QWORD *)&modeKind);
    sub_B2C35C(&Method_EquipGraphListMenu_OnSelectServantEquip__, v7);
    sub_B2C35C(&LocalizationManager_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_11706/*"SERVANT_EQUIP_OPERATION_EXPLANATION_CHOICE"*/, v9);
    sub_B2C35C(&StringLiteral_17123/*"button_allchoice_reg"*/, v10);
    sub_B2C35C(&StringLiteral_17126/*"button_alllock_unreg"*/, v11);
    sub_B2C35C(&StringLiteral_11708/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/, v12);
    sub_B2C35C(&StringLiteral_11707/*"SERVANT_EQUIP_OPERATION_EXPLANATION_LOCK"*/, v13);
    sub_B2C35C(&StringLiteral_17139/*"button_select_reg"*/, v14);
    sub_B2C35C(&StringLiteral_17140/*"button_select_unreg"*/, v15);
    sub_B2C35C(&StringLiteral_17125/*"button_alllock_reg"*/, v16);
    this = (EquipGraphListMenu_o *)sub_B2C35C(&StringLiteral_17124/*"button_allchoice_unreg"*/, v17);
    byte_418BDC3 = 1;
  }
  v18 = !v6->fields.isInitTab || isInit;
  if ( v18 || v6->fields.modeKind != modeKind )
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
    v19 = (System_String_o **)&StringLiteral_17139/*"button_select_reg"*/;
    if ( modeKind )
      v19 = (System_String_o **)&StringLiteral_17140/*"button_select_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)this, *v19, 0LL);
    this = (EquipGraphListMenu_o *)v6->fields.statusTabButton;
    if ( !this )
      goto LABEL_48;
    v20 = !v18;
    v21 = !v18;
    this = (EquipGraphListMenu_o *)((__int64 (__fastcall *)(EquipGraphListMenu_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                                     this,
                                     0LL,
                                     v21,
                                     this->klass[1]._1.interfaceOffsets);
    statusTabButton = v6->fields.statusTabButton;
    if ( !statusTabButton )
      goto LABEL_48;
    enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v6->fields.statusTabButton, 0LL);
    UICommonButton__SetColliderEnable(statusTabButton, enabled, v21, 0LL);
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
    v24 = (System_String_o **)&StringLiteral_17125/*"button_alllock_reg"*/;
    if ( modeKind != 1 )
      v24 = (System_String_o **)&StringLiteral_17126/*"button_alllock_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)this, *v24, 0LL);
    this = (EquipGraphListMenu_o *)v6->fields.lockTabButton;
    if ( !this )
      goto LABEL_48;
    this = (EquipGraphListMenu_o *)((__int64 (__fastcall *)(EquipGraphListMenu_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                                     this,
                                     0LL,
                                     v20,
                                     this->klass[1]._1.interfaceOffsets);
    lockTabButton = v6->fields.lockTabButton;
    if ( !lockTabButton )
      goto LABEL_48;
    v26 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v6->fields.lockTabButton, 0LL);
    UICommonButton__SetColliderEnable(lockTabButton, v26, v20, 0LL);
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
    v27 = (System_String_o **)&StringLiteral_17123/*"button_allchoice_reg"*/;
    if ( modeKind != 2 )
      v27 = (System_String_o **)&StringLiteral_17124/*"button_allchoice_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)this, *v27, 0LL);
    this = (EquipGraphListMenu_o *)v6->fields.choiceTabButton;
    if ( !this )
      goto LABEL_48;
    this = (EquipGraphListMenu_o *)((__int64 (__fastcall *)(EquipGraphListMenu_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                                     this,
                                     0LL,
                                     v20,
                                     this->klass[1]._1.interfaceOffsets);
    choiceTabButton = v6->fields.choiceTabButton;
    if ( !choiceTabButton )
      goto LABEL_48;
    v29 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v6->fields.choiceTabButton, 0LL);
    UICommonButton__SetColliderEnable(choiceTabButton, v29, v20, 0LL);
    if ( modeKind == 2 )
    {
      explanationLabel = v6->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v31 = &StringLiteral_11706/*"SERVANT_EQUIP_OPERATION_EXPLANATION_CHOICE"*/;
    }
    else if ( modeKind == 1 )
    {
      explanationLabel = v6->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v31 = &StringLiteral_11707/*"SERVANT_EQUIP_OPERATION_EXPLANATION_LOCK"*/;
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
      v31 = &StringLiteral_11708/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/;
    }
    this = (EquipGraphListMenu_o *)LocalizationManager__Get((System_String_o *)*v31, 0LL);
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
    v34 = (EquipGraphListViewManager_CallbackFunc_o *)sub_B2C42C(EquipGraphListViewManager_CallbackFunc_TypeInfo);
    EquipGraphListViewManager_CallbackFunc___ctor(
      v34,
      (Il2CppObject *)v6,
      Method_EquipGraphListMenu_OnSelectServantEquip__,
      0LL);
    if ( servantEquipListViewManager )
    {
      EquipGraphListViewManager__SetMode(servantEquipListViewManager, 2, v34, 0LL);
      return;
    }
LABEL_48:
    sub_B2C434(this, *(_QWORD *)&modeKind);
  }
  if ( !servantEquipListViewManager )
    goto LABEL_48;
  EquipGraphListViewManager__SetMode_29525100(servantEquipListViewManager, 1, 0LL);
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
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  NetworkManager_ResultCallbackFunc_o *v16; // x20
  System_Int64_array *v17; // x2
  System_Int64_array *v18; // x1
  bool v19; // w4
  bool v20; // w5
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  NetworkManager_ResultCallbackFunc_o *v27; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_418BDCA & 1) == 0 )
  {
    sub_B2C35C(&Method_EquipGraphListMenu_EndStatusSync__, callback);
    sub_B2C35C(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    byte_418BDCA = 1;
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
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      v27 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v27,
        (Il2CppObject *)this,
        Method_EquipGraphListMenu_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      servantEquipListViewManager = (EquipGraphListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                     v27,
                                                                     (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( servantEquipListViewManager )
      {
        v17 = unchoiceList;
        v18 = choiceList;
        v20 = 1;
        v19 = 0;
        goto LABEL_19;
      }
LABEL_23:
      sub_B2C434(servantEquipListViewManager, callback);
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
      sub_B2C2F8(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v10,
        v11,
        v12,
        v13,
        v14,
        v15);
      v16 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v16,
        (Il2CppObject *)this,
        Method_EquipGraphListMenu_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      servantEquipListViewManager = (EquipGraphListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                     v16,
                                                                     (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( servantEquipListViewManager )
      {
        v17 = unlockList;
        v18 = lockList;
        v19 = 1;
        v20 = 0;
LABEL_19:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)servantEquipListViewManager,
          v18,
          v17,
          0,
          v19,
          v20,
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

  if ( (byte_418BDBD & 1) == 0 )
  {
    sub_B2C35C(&EquipGraphListMenu_CallbackFunc_TypeInfo, value);
    byte_418BDBD = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
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

  if ( (byte_418BDBE & 1) == 0 )
  {
    sub_B2C35C(&EquipGraphListMenu_CallbackFunc_TypeInfo, value);
    byte_418BDBE = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_4184AAA & 1) == 0 )
  {
    sub_B2C35C(&EquipGraphListMenu_ResultKind_TypeInfo, *(_QWORD *)&result);
    byte_4184AAA = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(EquipGraphListMenu_ResultKind_TypeInfo, &v12);
  v11[1] = (__int64)item;
  return (System_IAsyncResult_o *)sub_B2C300(this, v11, callback, object);
}


void __fastcall EquipGraphListMenu_CallbackFunc__EndInvoke(
        EquipGraphListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned int v14; // w23
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, _QWORD, EquipGraphListViewItem_o *, _QWORD); // x0
  EquipGraphListMenu_CallbackFunc_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(unsigned int *, EquipGraphListViewItem_o *, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  unsigned int v28; // w24
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+Ch] [xbp-54h] BYREF
  EquipGraphListMenu_CallbackFunc_o *v35; // [xsp+18h] [xbp-48h] BYREF

  v35 = this;
  v34 = result;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v35;
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
      v21 = v8[v9];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(unsigned int *, EquipGraphListViewItem_o *, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&result, item, method);
      if ( (sub_B2C38C(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_36;
      v24((unsigned int *)v34, item, v23);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v22 )
    {
      v24(&v34 - 4, item, v23);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B2C384(v23);
      v26 = sub_B2C788(v23);
      if ( (v25 & 1) != 0 )
      {
        v28 = v34;
        if ( (v26 & 1) != 0 )
        {
          v29 = *v22;
          v30 = *(_QWORD *)(v23 + 24);
          v31 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_35;
            }
            v19 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v19 = sub_AC5258(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, EquipGraphListViewItem_o *, _QWORD))sub_B2C40C(v18, v23);
        (*v20)(v22, v28, item, v20);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v13 = *v22;
          v14 = v34;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v13 + 16LL * (int)(*v16 + v10) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AC5258(v22, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, EquipGraphListViewItem_o *, _QWORD))v17)(
            v22,
            v14,
            item,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, EquipGraphListViewItem_o *, _QWORD))(*v22
                                                                                        + 16LL
                                                                                        * *(unsigned __int16 *)(v23 + 72)
                                                                                        + 312))(
            v22,
            v34,
            item,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, EquipGraphListViewItem_o *, __int64))v24)(v22, v34, item, v23);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_4184AAB & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, isRequest);
    byte_4184AAB = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall EquipGraphListMenu_RequestCallbackFunc__EndInvoke(
        EquipGraphListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu_RequestCallbackFunc__Invoke(
        EquipGraphListMenu_RequestCallbackFunc_o *this,
        bool isRequest,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  EquipGraphListMenu_RequestCallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  EquipGraphListMenu_RequestCallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  EquipGraphListMenu_RequestCallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (EquipGraphListMenu_RequestCallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, isRequest, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(isRequest, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
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
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, isRequest, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, isRequest, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            isRequest,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, isRequest, v22);
    goto LABEL_37;
  }
}


void __fastcall EquipGraphListMenu___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct EquipGraphListMenu___c_StaticFields *static_fields; // x0

  if ( (byte_4184AA7 & 1) == 0 )
  {
    sub_B2C35C(&EquipGraphListMenu___c_TypeInfo, v1);
    byte_4184AA7 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(EquipGraphListMenu___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = EquipGraphListMenu___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EquipGraphListMenu___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
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
  __int64 v4; // x1

  if ( (byte_4184AA8 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, isDecide);
    byte_4184AA8 = 1;
  }
  Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  ManagementManager__reboot(Instance, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu___c___Open_b__29_0(
        EquipGraphListMenu___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ManagementManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4184AA9 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, isDecide);
    byte_4184AA9 = 1;
  }
  Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  ManagementManager__reboot(Instance, 0, 0LL);
}