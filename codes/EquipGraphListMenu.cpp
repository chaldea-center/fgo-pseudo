void __fastcall EquipGraphListMenu___ctor(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42ED038 & 1) == 0 )
  {
    sub_B5D5C4(&BaseMenu_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ED038 = 1;
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
        sub_B5D69C(0LL, result);
      Item = EquipGraphListViewManager__GetItem(servantEquipListViewManager, n, 0LL);
    }
    p_callbackFunc->klass = 0LL;
    sub_B5D560(p_callbackFunc, 0LL, *(System_String_array ***)&n, (System_String_array **)method, v4, v5, v6, v7);
    EquipGraphListMenu_CallbackFunc__Invoke(callbackFunc, result, Item, 0LL);
  }
}


void __fastcall EquipGraphListMenu__Close(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  EquipGraphListMenu__Close_34011716(this, 0LL, v2);
}


void __fastcall EquipGraphListMenu__Close_34011716(
        EquipGraphListMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int32_t modeKind; // w1
  const MethodInfo *v14; // x3
  System_Action_o *v15; // x20

  if ( (byte_42ED02A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_EquipGraphListMenu_EndClose__, v10, v11, v12);
    byte_42ED02A = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(
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
  EquipGraphListMenu__SetTabKind(this, modeKind, 0, v14);
  v15 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_EquipGraphListMenu_EndClose__, 0LL);
  BaseMenu__Close((BaseMenu_o *)this, v15, 0LL);
}


void __fastcall EquipGraphListMenu__Decide(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  __int64 selectNum; // x1
  ListViewManager_o *servantEquipListViewManager; // x0
  struct UICommonButton_o *sortKindButton; // x21
  EventServantEntity_o *v32; // x20
  bool IsNoPeriod; // w0
  System_String_o *v34; // x21
  Il2CppObject *EndTimeStr; // x0
  System_String_o *v36; // x20
  CommonUI_o *Instance; // x21
  System_String_o *v38; // x22
  System_Action_o *v39; // x23
  EquipGraphListMenu_RequestCallbackFunc_o *v40; // x20
  const MethodInfo *v41; // x2

  if ( (byte_42ED02C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EquipGraphListMenu_EndCloseEventServantWarning__, v5, v6, v7);
    sub_B5D5C4(&Method_EquipGraphListMenu_EndRequestClickDecide__, v8, v9, v10);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&SoundManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_5603/*"EQUIP_GRAPH_EVENT_SERVANT_WARNING_MESSAGE"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_5604/*"EQUIP_GRAPH_EVENT_SERVANT_WARNING_TITLE"*/, v26, v27, v28);
    byte_42ED02C = 1;
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
    v32 = (EventServantEntity_o *)servantEquipListViewManager;
    if ( UserServantEntity__IsEventJoin((UserServantEntity_o *)sortKindButton->fields.tweenTargets, 0LL) )
    {
      servantEquipListViewManager = (ListViewManager_o *)sortKindButton->fields.tweenTargets;
      if ( !servantEquipListViewManager )
        goto LABEL_25;
      IsNoPeriod = UserServantEntity__IsNoPeriod((UserServantEntity_o *)servantEquipListViewManager, 0LL);
      if ( v32 )
      {
        if ( !IsNoPeriod )
        {
          if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !LocalizationManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          }
          v34 = LocalizationManager__Get((System_String_o *)StringLiteral_5603/*"EQUIP_GRAPH_EVENT_SERVANT_WARNING_MESSAGE"*/, 0LL);
          EndTimeStr = (Il2CppObject *)EventServantEntity__getEndTimeStr(v32, 0LL);
          v36 = System_String__Format(v34, EndTimeStr, 0LL);
          Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          v38 = LocalizationManager__Get((System_String_o *)StringLiteral_5604/*"EQUIP_GRAPH_EVENT_SERVANT_WARNING_TITLE"*/, 0LL);
          v39 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(v39, (Il2CppObject *)this, Method_EquipGraphListMenu_EndCloseEventServantWarning__, 0LL);
          if ( Instance )
          {
            CommonUI__OpenNotificationDialog(Instance, v38, v36, v39, -1, 0, 0, 0, 1, 0, 0, 0, 0LL, 0LL);
            return;
          }
LABEL_25:
          sub_B5D69C(servantEquipListViewManager, selectNum);
        }
      }
    }
  }
  v40 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_B5D694(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
  EquipGraphListMenu_RequestCallbackFunc___ctor(
    v40,
    (Il2CppObject *)this,
    Method_EquipGraphListMenu_EndRequestClickDecide__,
    0LL);
  EquipGraphListMenu__StatusRequest(this, v40, v41);
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
      sub_B5D69C(servantEquipListViewManager, isRequest);
    }
    EquipGraphListViewManager__SetMode_30704820(servantEquipListViewManager, 3, 0LL);
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
      sub_B5D69C(servantEquipListViewManager, isRequest);
    }
    EquipGraphListViewManager__SetMode_30704820(servantEquipListViewManager, 3, 0LL);
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
      sub_B5D69C(servantEquipListViewManager, isRequest);
    }
    EquipGraphListViewManager__SetMode_30704820(servantEquipListViewManager, 3, 0LL);
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
    sub_B5D560(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall EquipGraphListMenu__EndCloseEventServantWarning(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  EquipGraphListMenu_RequestCallbackFunc_o *v8; // x20
  const MethodInfo *v9; // x2

  if ( (byte_42ED02D & 1) == 0 )
  {
    sub_B5D5C4(&Method_EquipGraphListMenu_EndRequestClickDecide__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    byte_42ED02D = 1;
  }
  v8 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_B5D694(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
  EquipGraphListMenu_RequestCallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_EquipGraphListMenu_EndRequestClickDecide__,
    0LL);
  EquipGraphListMenu__StatusRequest(this, v8, v9);
}


void __fastcall EquipGraphListMenu__EndCloseList(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall EquipGraphListMenu__EndCloseShowServantEquip(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  EquipGraphListViewManager_o *servantEquipListViewManager; // x20
  EquipGraphListViewManager_CallbackFunc_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42ED036 & 1) == 0 )
  {
    sub_B5D5C4(&EquipGraphListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EquipGraphListMenu_OnSelectServantEquip__, v5, v6, v7);
    byte_42ED036 = 1;
  }
  this->fields.state = 2;
  servantEquipListViewManager = this->fields.servantEquipListViewManager;
  v9 = (EquipGraphListViewManager_CallbackFunc_o *)sub_B5D694(EquipGraphListViewManager_CallbackFunc_TypeInfo);
  EquipGraphListViewManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_EquipGraphListMenu_OnSelectServantEquip__,
    0LL);
  if ( !servantEquipListViewManager )
    sub_B5D69C(v10, v11);
  EquipGraphListViewManager__SetMode(servantEquipListViewManager, 2, v9, 0LL);
}


void __fastcall EquipGraphListMenu__EndOpen(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  const MethodInfo *v11; // x3
  CommonUI_o *Instance; // x20
  TutorialFlag_ImageId_array *v13; // x0
  TutorialFlag_ImageId_array *v14; // x1
  il2cpp_array_size_t max_length; // w8
  __int64 v16; // x0

  if ( (byte_42ED029 & 1) == 0 )
  {
    sub_B5D5C4(&TutorialFlag_ImageId___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&TutorialFlag_TypeInfo, v8, v9, v10);
    byte_42ED029 = 1;
  }
  if ( (BYTE3(TutorialFlag_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( !TutorialFlag__Get_29295864(110, 0LL) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v13 = (TutorialFlag_ImageId_array *)sub_B5D5DC(TutorialFlag_ImageId___TypeInfo, 2LL);
    if ( !v13 )
      goto LABEL_14;
    max_length = v13->max_length;
    v14 = v13;
    if ( !max_length || (v13->m_Items[1] = 4, max_length == 1) )
    {
      v16 = sub_B5D6C8(v13);
      sub_B5D668(v16, 0LL);
    }
    v13->m_Items[2] = 5;
    if ( !Instance )
LABEL_14:
      sub_B5D69C(v13, v14);
    CommonUI__OpenTutorialImageDialog(Instance, v13, 110, 0LL, 0LL, 0LL, 0LL);
  }
  this->fields.state = 2;
  EquipGraphListMenu__SetTabKind(this, this->fields.modeKind, 0, v11);
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
      sub_B5D69C(servantEquipListViewManager, isRequest);
    }
    EquipGraphListViewManager__SetMode_30704820(servantEquipListViewManager, 3, 0LL);
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
      sub_B5D69C(servantEquipListViewManager, isRequest);
    }
    EquipGraphListViewManager__SetMode_30704820(servantEquipListViewManager, 3, 0LL);
  }
  EquipGraphListMenu__Callback(this, 1, this->fields.selectNum, v3);
}


void __fastcall EquipGraphListMenu__EndSelectEquip(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  EquipGraphListViewManager_o *servantEquipListViewManager; // x20
  EquipGraphListViewManager_CallbackFunc_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42ED034 & 1) == 0 )
  {
    sub_B5D5C4(&EquipGraphListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_EquipGraphListMenu_OnSelectServantEquip__, v5, v6, v7);
    byte_42ED034 = 1;
  }
  this->fields.state = 2;
  servantEquipListViewManager = this->fields.servantEquipListViewManager;
  v9 = (EquipGraphListViewManager_CallbackFunc_o *)sub_B5D694(EquipGraphListViewManager_CallbackFunc_TypeInfo);
  EquipGraphListViewManager_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_EquipGraphListMenu_OnSelectServantEquip__,
    0LL);
  if ( !servantEquipListViewManager )
    sub_B5D69C(v10, v11);
  EquipGraphListViewManager__SetMode(servantEquipListViewManager, 2, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu__EndShowServantEquip(
        EquipGraphListMenu_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  CommonUI_o *Instance; // x20
  System_Action_o *v14; // x21

  if ( (byte_42ED035 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_EquipGraphListMenu_EndCloseShowServantEquip__, v6, v7, v8);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10, v11);
    byte_42ED035 = 1;
  }
  if ( isDecide )
  {
    servantEquipListViewManager = this->fields.servantEquipListViewManager;
    if ( !servantEquipListViewManager
      || (EquipGraphListViewManager__ModifyList(servantEquipListViewManager, 0, 0LL),
          (servantEquipListViewManager = this->fields.servantEquipListViewManager) == 0LL) )
    {
LABEL_9:
      sub_B5D69C(servantEquipListViewManager, isDecide);
    }
    EquipGraphListViewManager__SetMode_30704820(servantEquipListViewManager, 3, 0LL);
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
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
    sub_B5D560(p_requedstCallback, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
    sub_B5D69C(0LL, method);
  EquipGraphListViewManager__DestroyList(servantEquipListViewManager, 0LL);
  this->fields.modeKind = 0;
  this->fields.state = 0;
  this->fields.isInitTab = 0;
  BaseMenu__Init((BaseMenu_o *)this, 0LL);
}


void __fastcall EquipGraphListMenu__OnClickCancel(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  ListViewManager_o *servantEquipListViewManager; // x0
  EquipGraphListMenu_RequestCallbackFunc_o *v12; // x20
  const MethodInfo *v13; // x2

  if ( (byte_42ED02E & 1) == 0 )
  {
    sub_B5D5C4(&Method_EquipGraphListMenu_EndRequestClickCancel__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42ED02E = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( !this->fields.isSelectedSvt )
    {
      servantEquipListViewManager = (ListViewManager_o *)this->fields.servantEquipListViewManager;
      if ( !servantEquipListViewManager )
        sub_B5D69C(0LL, method);
      ListViewManager__SetScrollBarValue(servantEquipListViewManager, 0LL);
    }
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    v12 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_B5D694(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
    EquipGraphListMenu_RequestCallbackFunc___ctor(
      v12,
      (Il2CppObject *)this,
      Method_EquipGraphListMenu_EndRequestClickCancel__,
      0LL);
    EquipGraphListMenu__StatusRequest(this, v12, v13);
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
      sub_B5D69C(0LL, method);
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
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x1
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x19

  if ( (byte_42ED037 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42ED037 = 1;
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
      sub_B5D69C(servantEquipListViewManager, v5);
    }
    UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)servantEquipListViewManager, 0LL);
  }
}


void __fastcall EquipGraphListMenu__OnClickTabChoice(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  const MethodInfo *v11; // x3
  int32_t modeKind; // w8
  EquipGraphListMenu_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2
  EquipGraphListMenu_RequestCallbackFunc_o *v15; // x20
  const MethodInfo *v16; // x2

  if ( (byte_42ED031 & 1) == 0 )
  {
    sub_B5D5C4(&Method_EquipGraphListMenu_EndClickTabChoice__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42ED031 = 1;
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
        v13 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_B5D694(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
        EquipGraphListMenu_RequestCallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          Method_EquipGraphListMenu_EndClickTabChoice__,
          0LL);
        EquipGraphListMenu__StatusRequest(this, v13, v14);
        return;
      }
      v15 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_B5D694(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
      EquipGraphListMenu_RequestCallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        Method_EquipGraphListMenu_EndClickTabChoice__,
        0LL);
      EquipGraphListMenu__StatusRequest(this, v15, v16);
    }
    EquipGraphListMenu__SetTabKind(this, 2, 0, v11);
  }
}


void __fastcall EquipGraphListMenu__OnClickTabLock(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  const MethodInfo *v11; // x3
  int32_t modeKind; // w8
  EquipGraphListMenu_RequestCallbackFunc_o *v13; // x20
  const MethodInfo *v14; // x2
  EquipGraphListMenu_RequestCallbackFunc_o *v15; // x20
  const MethodInfo *v16; // x2

  if ( (byte_42ED030 & 1) == 0 )
  {
    sub_B5D5C4(&Method_EquipGraphListMenu_EndClickTabLock__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42ED030 = 1;
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
        v13 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_B5D694(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
        EquipGraphListMenu_RequestCallbackFunc___ctor(
          v13,
          (Il2CppObject *)this,
          Method_EquipGraphListMenu_EndClickTabLock__,
          0LL);
        EquipGraphListMenu__StatusRequest(this, v13, v14);
        return;
      }
      v15 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_B5D694(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
      EquipGraphListMenu_RequestCallbackFunc___ctor(
        v15,
        (Il2CppObject *)this,
        Method_EquipGraphListMenu_EndClickTabLock__,
        0LL);
      EquipGraphListMenu__StatusRequest(this, v15, v16);
    }
    EquipGraphListMenu__SetTabKind(this, 1, 0, v11);
  }
}


void __fastcall EquipGraphListMenu__OnClickTabStatus(EquipGraphListMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  EquipGraphListMenu_RequestCallbackFunc_o *v11; // x20
  const MethodInfo *v12; // x2

  if ( (byte_42ED02F & 1) == 0 )
  {
    sub_B5D5C4(&Method_EquipGraphListMenu_EndClickTabStatus__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&EquipGraphListMenu_RequestCallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42ED02F = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    v11 = (EquipGraphListMenu_RequestCallbackFunc_o *)sub_B5D694(EquipGraphListMenu_RequestCallbackFunc_TypeInfo);
    EquipGraphListMenu_RequestCallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_EquipGraphListMenu_EndClickTabStatus__,
      0LL);
    EquipGraphListMenu__StatusRequest(this, v11, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu__OnSelectServantEquip(
        EquipGraphListMenu_o *this,
        int32_t kind,
        int32_t n,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  EquipGraphListViewItem_o *Item; // x20
  int32_t v30; // w8
  EquipGraphListViewManager_o *v31; // x21
  System_Action_o *v32; // x22
  int32_t modeKind; // w8
  const MethodInfo *v34; // x3
  WebViewManager_o *Instance; // x0
  UserServantEntity_o *userSvtEntity; // x21
  CommonUI_o *v37; // x22
  bool v38; // w20
  EquipGraphListViewManager_o *v39; // x20
  EquipGraphListViewManager_CallbackFunc_o *v40; // x21
  ServantStatusDialog_EndDelegate_o *v41; // x23

  if ( (byte_42ED033 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, kind, n, method);
    sub_B5D5C4(&EquipGraphListViewManager_CallbackFunc_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&ServantStatusDialog_EndDelegate_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&Method_EquipGraphListMenu_EndSelectEquip__, v13, v14, v15);
    sub_B5D5C4(&Method_EquipGraphListMenu_EndShowServantEquip__, v16, v17, v18);
    sub_B5D5C4(&Method_EquipGraphListMenu_OnSelectServantEquip__, v19, v20, v21);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v22, v23, v24);
    sub_B5D5C4(&SoundManager_TypeInfo, v25, v26, v27);
    byte_42ED033 = 1;
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
          Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          userSvtEntity = Item->fields.userSvtEntity;
          v37 = (CommonUI_o *)Instance;
          v38 = EquipGraphListViewItem__get_IsUse(Item, 0LL) || Item->fields.isBase;
          v41 = (ServantStatusDialog_EndDelegate_o *)sub_B5D694(ServantStatusDialog_EndDelegate_TypeInfo);
          ServantStatusDialog_EndDelegate___ctor(
            v41,
            (Il2CppObject *)this,
            Method_EquipGraphListMenu_EndShowServantEquip__,
            0LL);
          if ( v37 )
          {
            CommonUI__OpenServantEquipStatusDialog_18217060(v37, 0, userSvtEntity, v38, v41, 0LL, 0LL);
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
        v39 = this->fields.servantEquipListViewManager;
LABEL_41:
        v40 = (EquipGraphListViewManager_CallbackFunc_o *)sub_B5D694(EquipGraphListViewManager_CallbackFunc_TypeInfo);
        EquipGraphListViewManager_CallbackFunc___ctor(
          v40,
          (Il2CppObject *)this,
          Method_EquipGraphListMenu_OnSelectServantEquip__,
          0LL);
        if ( v39 )
        {
          EquipGraphListViewManager__SetMode(v39, 2, v40, 0LL);
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
          EquipGraphListMenu__Callback(this, 0, -1, v34);
        }
        return;
      }
      v30 = this->fields.modeKind;
      if ( v30 == 2 )
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
        if ( v30 != 1 )
        {
          if ( v30 )
            return;
          v31 = this->fields.servantEquipListViewManager;
          v32 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(v32, (Il2CppObject *)this, Method_EquipGraphListMenu_EndSelectEquip__, 0LL);
          if ( v31 )
          {
            EquipGraphListViewManager__SelectEquip(v31, Item, v32, 0LL);
            return;
          }
LABEL_50:
          sub_B5D69C(servantEquipListViewManager, *(_QWORD *)&kind);
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
    v39 = this->fields.servantEquipListViewManager;
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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int32_t state; // w8
  const MethodInfo *v18; // x3
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  const MethodInfo *v25; // x3
  __int64 v26; // x1
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v29; // x20

  v13 = this;
  if ( (byte_42ED027 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)baseDeckItemList, (_DWORD)partyItem, *(_QWORD *)&member);
    this = (EquipGraphListMenu_o *)sub_B5D5C4(&Method_EquipGraphListMenu_EndOpen__, v14, v15, v16);
    byte_42ED027 = 1;
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
      sub_B5D560(
        (BattleServantConfConponent_o *)&v13->fields.callbackFunc,
        (System_Int32_array **)callback,
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
      TitleInfoControl__setBackBtnSprite_18313300((TitleInfoControl_o *)this, 1, 0, 0, 0LL);
      servantEquipListViewManager = v13->fields.servantEquipListViewManager;
      if ( !servantEquipListViewManager )
        sub_B5D69C(0LL, v26);
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
        sub_B5D69C(this, baseDeckItemList);
      }
      UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)this, 0LL);
      v13->fields.state = 1;
      v29 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v29, (Il2CppObject *)v13, Method_EquipGraphListMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)v13, v29, 0LL);
    }
  }
  else
  {
    v13->fields.callbackFunc = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v13->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)partyItem,
      *(System_String_array ***)&member,
      (System_Boolean_array **)setupInfo,
      (System_Int32_array **)callback,
      (System_Int32_array *)method,
      v7);
    v13->fields.state = 2;
    EquipGraphListMenu__SetTabKind(v13, v13->fields.modeKind, 0, v18);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EquipGraphListMenu__Open_34010388(
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int32_t state; // w8
  const MethodInfo *v17; // x3
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  const MethodInfo *v24; // x3
  __int64 v25; // x1
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  UISprite_o *scaleChangeTabSprite; // x20
  System_Action_o *v28; // x20

  v12 = this;
  if ( (byte_42ED028 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)partyItem, member, setupInfo);
    this = (EquipGraphListMenu_o *)sub_B5D5C4(&Method_EquipGraphListMenu_EndOpen__, v13, v14, v15);
    byte_42ED028 = 1;
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
      sub_B5D560(
        (BattleServantConfConponent_o *)&v12->fields.callbackFunc,
        (System_Int32_array **)callback,
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
      TitleInfoControl__setBackBtnSprite_18313300((TitleInfoControl_o *)this, 1, 0, 0, 0LL);
      servantEquipListViewManager = v12->fields.servantEquipListViewManager;
      if ( !servantEquipListViewManager )
        sub_B5D69C(0LL, v25);
      EquipGraphListViewManager__CreateList_30700572(servantEquipListViewManager, partyItem, member, setupInfo, 0LL);
      this = (EquipGraphListMenu_o *)v12->fields.servantEquipListViewManager;
      if ( !this
        || (scaleChangeTabSprite = v12->fields.scaleChangeTabSprite,
            this = (EquipGraphListMenu_o *)EquipGraphListViewManager__GetScaleButtonSpriteName(
                                             (EquipGraphListViewManager_o *)this,
                                             0LL),
            !scaleChangeTabSprite) )
      {
LABEL_17:
        sub_B5D69C(this, partyItem);
      }
      UISprite__set_spriteName(scaleChangeTabSprite, (System_String_o *)this, 0LL);
      v12->fields.state = 1;
      v28 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v28, (Il2CppObject *)v12, Method_EquipGraphListMenu_EndOpen__, 0LL);
      BaseMenu__Open((BaseMenu_o *)v12, v28, 0LL);
    }
  }
  else
  {
    v12->fields.callbackFunc = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&v12->fields.callbackFunc,
      (System_Int32_array **)callback,
      *(System_String_array ***)&member,
      (System_String_array **)setupInfo,
      (System_Boolean_array **)callback,
      (System_Int32_array **)method,
      v6,
      v7);
    v12->fields.state = 2;
    EquipGraphListMenu__SetTabKind(v12, v12->fields.modeKind, 0, v17);
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
  int v7; // w1
  char v8; // w2
  __int64 v9; // x3
  int v10; // w1
  char v11; // w2
  __int64 v12; // x3
  int v13; // w1
  char v14; // w2
  __int64 v15; // x3
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  int v28; // w1
  char v29; // w2
  __int64 v30; // x3
  int v31; // w1
  char v32; // w2
  __int64 v33; // x3
  int v34; // w1
  char v35; // w2
  __int64 v36; // x3
  int v37; // w1
  char v38; // w2
  __int64 v39; // x3
  bool v40; // w21
  __int64 *v41; // x8
  bool v42; // w23
  unsigned int v43; // w21
  UICommonButton_o *statusTabButton; // x22
  bool enabled; // w0
  __int64 *v46; // x8
  UICommonButton_o *lockTabButton; // x22
  bool v48; // w0
  __int64 *v49; // x8
  UICommonButton_o *choiceTabButton; // x22
  bool v51; // w0
  UILabel_o *explanationLabel; // x21
  __int64 *v53; // x8
  int32_t state; // w8
  EquipGraphListViewManager_o *servantEquipListViewManager; // x21
  EquipGraphListViewManager_CallbackFunc_o *v56; // x20

  v6 = this;
  if ( (byte_42ED02B & 1) == 0 )
  {
    sub_B5D5C4(&EquipGraphListViewManager_CallbackFunc_TypeInfo, modeKind, isInit, method);
    sub_B5D5C4(&Method_EquipGraphListMenu_OnSelectServantEquip__, v7, v8, v9);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_11845/*"SERVANT_EQUIP_OPERATION_EXPLANATION_CHOICE"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_17333/*"button_allchoice_reg"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_17336/*"button_alllock_unreg"*/, v19, v20, v21);
    sub_B5D5C4(&StringLiteral_11847/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_11846/*"SERVANT_EQUIP_OPERATION_EXPLANATION_LOCK"*/, v25, v26, v27);
    sub_B5D5C4(&StringLiteral_17349/*"button_select_reg"*/, v28, v29, v30);
    sub_B5D5C4(&StringLiteral_17350/*"button_select_unreg"*/, v31, v32, v33);
    sub_B5D5C4(&StringLiteral_17335/*"button_alllock_reg"*/, v34, v35, v36);
    this = (EquipGraphListMenu_o *)sub_B5D5C4(&StringLiteral_17334/*"button_allchoice_unreg"*/, v37, v38, v39);
    byte_42ED02B = 1;
  }
  v40 = !v6->fields.isInitTab || isInit;
  if ( v40 || v6->fields.modeKind != modeKind )
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
    v41 = &StringLiteral_17349/*"button_select_reg"*/;
    if ( modeKind )
      v41 = &StringLiteral_17350/*"button_select_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v41, 0LL);
    this = (EquipGraphListMenu_o *)v6->fields.statusTabButton;
    if ( !this )
      goto LABEL_48;
    v42 = !v40;
    v43 = !v40;
    this = (EquipGraphListMenu_o *)((__int64 (__fastcall *)(EquipGraphListMenu_o *, _QWORD, _QWORD, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                                     this,
                                     0LL,
                                     v43,
                                     this->klass[1]._1.interfaceOffsets);
    statusTabButton = v6->fields.statusTabButton;
    if ( !statusTabButton )
      goto LABEL_48;
    enabled = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v6->fields.statusTabButton, 0LL);
    UICommonButton__SetColliderEnable(statusTabButton, enabled, v43, 0LL);
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
    v46 = &StringLiteral_17335/*"button_alllock_reg"*/;
    if ( modeKind != 1 )
      v46 = &StringLiteral_17336/*"button_alllock_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v46, 0LL);
    this = (EquipGraphListMenu_o *)v6->fields.lockTabButton;
    if ( !this )
      goto LABEL_48;
    this = (EquipGraphListMenu_o *)((__int64 (__fastcall *)(EquipGraphListMenu_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                                     this,
                                     0LL,
                                     v42,
                                     this->klass[1]._1.interfaceOffsets);
    lockTabButton = v6->fields.lockTabButton;
    if ( !lockTabButton )
      goto LABEL_48;
    v48 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v6->fields.lockTabButton, 0LL);
    UICommonButton__SetColliderEnable(lockTabButton, v48, v42, 0LL);
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
    v49 = &StringLiteral_17333/*"button_allchoice_reg"*/;
    if ( modeKind != 2 )
      v49 = &StringLiteral_17334/*"button_allchoice_unreg"*/;
    UISprite__set_spriteName((UISprite_o *)this, (System_String_o *)*v49, 0LL);
    this = (EquipGraphListMenu_o *)v6->fields.choiceTabButton;
    if ( !this )
      goto LABEL_48;
    this = (EquipGraphListMenu_o *)((__int64 (__fastcall *)(EquipGraphListMenu_o *, _QWORD, bool, Il2CppRuntimeInterfaceOffsetPair *))this->klass[1]._1.implementedInterfaces)(
                                     this,
                                     0LL,
                                     v42,
                                     this->klass[1]._1.interfaceOffsets);
    choiceTabButton = v6->fields.choiceTabButton;
    if ( !choiceTabButton )
      goto LABEL_48;
    v51 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)v6->fields.choiceTabButton, 0LL);
    UICommonButton__SetColliderEnable(choiceTabButton, v51, v42, 0LL);
    if ( modeKind == 2 )
    {
      explanationLabel = v6->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v53 = &StringLiteral_11845/*"SERVANT_EQUIP_OPERATION_EXPLANATION_CHOICE"*/;
    }
    else if ( modeKind == 1 )
    {
      explanationLabel = v6->fields.explanationLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v53 = &StringLiteral_11846/*"SERVANT_EQUIP_OPERATION_EXPLANATION_LOCK"*/;
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
      v53 = &StringLiteral_11847/*"SERVANT_EQUIP_OPERATION_EXPLANATION_STATUS"*/;
    }
    this = (EquipGraphListMenu_o *)LocalizationManager__Get((System_String_o *)*v53, 0LL);
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
    v56 = (EquipGraphListViewManager_CallbackFunc_o *)sub_B5D694(EquipGraphListViewManager_CallbackFunc_TypeInfo);
    EquipGraphListViewManager_CallbackFunc___ctor(
      v56,
      (Il2CppObject *)v6,
      Method_EquipGraphListMenu_OnSelectServantEquip__,
      0LL);
    if ( servantEquipListViewManager )
    {
      EquipGraphListViewManager__SetMode(servantEquipListViewManager, 2, v56, 0LL);
      return;
    }
LABEL_48:
    sub_B5D69C(this, *(_QWORD *)&modeKind);
  }
  if ( !servantEquipListViewManager )
    goto LABEL_48;
  EquipGraphListViewManager__SetMode_30704820(servantEquipListViewManager, 1, 0LL);
}


void __fastcall EquipGraphListMenu__StatusRequest(
        EquipGraphListMenu_o *this,
        EquipGraphListMenu_RequestCallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int32_t modeKind; // w8
  EquipGraphListViewManager_o *servantEquipListViewManager; // x0
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  NetworkManager_ResultCallbackFunc_o *v23; // x20
  System_Int64_array *v24; // x2
  System_Int64_array *v25; // x1
  bool v26; // w4
  bool v27; // w5
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  NetworkManager_ResultCallbackFunc_o *v34; // x20
  System_Int64_array *unchoiceList; // [xsp+8h] [xbp-38h] BYREF
  System_Int64_array *choiceList; // [xsp+10h] [xbp-30h] BYREF
  System_Int64_array *unlockList; // [xsp+18h] [xbp-28h] BYREF
  System_Int64_array *lockList; // [xsp+28h] [xbp-18h] BYREF

  if ( (byte_42ED032 & 1) == 0 )
  {
    sub_B5D5C4(&Method_EquipGraphListMenu_EndStatusSync__, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_CardStatusSyncRequest___, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v12, v13, v14);
    byte_42ED032 = 1;
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
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33);
      v34 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v34,
        (Il2CppObject *)this,
        Method_EquipGraphListMenu_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      servantEquipListViewManager = (EquipGraphListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                     v34,
                                                                     (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( servantEquipListViewManager )
      {
        v24 = unchoiceList;
        v25 = choiceList;
        v27 = 1;
        v26 = 0;
        goto LABEL_19;
      }
LABEL_23:
      sub_B5D69C(servantEquipListViewManager, callback);
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
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields.requedstCallback,
        (System_Int32_array **)callback,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
      v23 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
      NetworkManager_ResultCallbackFunc___ctor(
        v23,
        (Il2CppObject *)this,
        Method_EquipGraphListMenu_EndStatusSync__,
        0LL);
      if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !NetworkManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      }
      servantEquipListViewManager = (EquipGraphListViewManager_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                     v23,
                                                                     (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_CardStatusSyncRequest___);
      if ( servantEquipListViewManager )
      {
        v24 = unlockList;
        v25 = lockList;
        v26 = 1;
        v27 = 0;
LABEL_19:
        CardStatusSyncRequest__beginRequest(
          (CardStatusSyncRequest_o *)servantEquipListViewManager,
          v25,
          v24,
          0,
          v26,
          v27,
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
  __int64 v3; // x3
  struct EquipGraphListMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct EquipGraphListMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  EquipGraphListMenu_o *v12; // x0
  EquipGraphListMenu_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42ED025 & 1) == 0 )
  {
    sub_B5D5C4(&EquipGraphListMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42ED025 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (EquipGraphListMenu_CallbackFunc_c *)v9->klass != EquipGraphListMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  EquipGraphListMenu__remove_callbackFunc(v12, v13, v14);
}


void __fastcall EquipGraphListMenu__remove_callbackFunc(
        EquipGraphListMenu_o *this,
        EquipGraphListMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct EquipGraphListMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct EquipGraphListMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  EquipGraphListMenu_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42ED026 & 1) == 0 )
  {
    sub_B5D5C4(&EquipGraphListMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42ED026 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (EquipGraphListMenu_CallbackFunc_c *)v9->klass != EquipGraphListMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  EquipGraphListMenu__GetModeKind(v12, v13);
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
  sub_B5D560(p_method);
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
  if ( (byte_42E64DD & 1) == 0 )
  {
    sub_B5D5C4(&EquipGraphListMenu_ResultKind_TypeInfo, result, (_DWORD)item, callback);
    byte_42E64DD = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(EquipGraphListMenu_ResultKind_TypeInfo, &v12);
  v11[1] = (__int64)item;
  return (System_IAsyncResult_o *)sub_B5D568(this, v11, callback, object);
}


void __fastcall EquipGraphListMenu_CallbackFunc__EndInvoke(
        EquipGraphListMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
        sub_B5D680(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&result, item);
      if ( (sub_B5D5F4(v23) & 1) == 0 )
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
      v25 = sub_B5D5EC(v23);
      v26 = sub_B5D9F0(v23);
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
            v19 = sub_AF54C0(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, EquipGraphListViewItem_o *, _QWORD))sub_B5D674(v18, v23);
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
            v17 = sub_AF54C0(v22, class_0, v10, v12);
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
  sub_B5D560(p_method);
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
  if ( (byte_42E64DE & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, isRequest, (_DWORD)callback, object);
    byte_42E64DE = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall EquipGraphListMenu_RequestCallbackFunc__EndInvoke(
        EquipGraphListMenu_RequestCallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  EquipGraphListMenu_RequestCallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  EquipGraphListMenu_RequestCallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, isRequest, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(isRequest, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, isRequest, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, isRequest, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            isRequest,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, isRequest, v21);
    goto LABEL_37;
  }
}


void __fastcall EquipGraphListMenu___c___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  struct EquipGraphListMenu___c_StaticFields *static_fields; // x0

  if ( (byte_42E64DA & 1) == 0 )
  {
    sub_B5D5C4(&EquipGraphListMenu___c_TypeInfo, v1, v2, v3);
    byte_42E64DA = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(EquipGraphListMenu___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = EquipGraphListMenu___c_TypeInfo->static_fields;
  static_fields->__9 = (struct EquipGraphListMenu___c_o *)v4;
  sub_B5D560(static_fields);
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
  __int64 v3; // x3
  ManagementManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E64DB & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42E64DB = 1;
  }
  Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  ManagementManager__reboot(Instance, 0, 0LL);
}


void __fastcall EquipGraphListMenu___c___Open_b__29_0(
        EquipGraphListMenu___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ManagementManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_42E64DC & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, isDecide, (_DWORD)method, v3);
    byte_42E64DC = 1;
  }
  Instance = (ManagementManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v5);
  ManagementManager__reboot(Instance, 0, 0LL);
}