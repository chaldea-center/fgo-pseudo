void __fastcall ContinueDeviceComponent___ctor(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ContinueDeviceComponent__callbackCodeInput(
        ContinueDeviceComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  Il2CppClass *klass; // x1
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  System_Action_o *v9; // x21
  const MethodInfo *v10; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A56662 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ContinueDeviceComponent_onNextDispOpen__);
    sub_1B885B0(&Method_DataManager_GetMaster_UserContinueMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long__TryGetSingleEntity__);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A56662 = 1;
  }
  entity = 0LL;
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22055/*"ng"*/, 0LL) )
    goto LABEL_10;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_UserContinueMaster___);
  if ( !Master_object )
    goto LABEL_15;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___TryGetSingleEntity(
                                                                  Master_object,
                                                                  &entity,
                                                                  (const MethodInfo_311DBBC *)Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long__TryGetSingleEntity__);
  if ( ((unsigned __int8)Master_object & 1) == 0 )
    goto LABEL_10;
  if ( !entity )
    goto LABEL_15;
  if ( LODWORD(entity[1].monitor) )
  {
LABEL_10:
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.continueDeviceConfirmDialog;
    if ( Master_object )
    {
      CommonConfirmDialog__Close((CommonConfirmDialog_o *)Master_object, 0LL);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.myRoomCtrl;
      if ( Master_object )
      {
        MyRoomControl__SetBackButtonIgnore((MyRoomControl_o *)Master_object, 0, 0LL);
        return;
      }
    }
LABEL_15:
    sub_1B8880C(Master_object, v5);
  }
  klass = entity[2].klass;
  this->fields.continueCode = (struct System_String_o *)klass;
  sub_1B88554(&this->fields.continueCode, klass);
  continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
  *(_QWORD *)&this->fields.state = 0x100000000LL;
  v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_ContinueDeviceComponent_onNextDispOpen__, 0LL);
  if ( !continueDeviceInputMenu )
    goto LABEL_15;
  ContinueDeviceInputMenu__Close_31017808(continueDeviceInputMenu, v9, v10);
}


bool __fastcall ContinueDeviceComponent__closeMenu(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  ContinueDeviceInputMenu_o *v8; // x20
  System_Action_o *v9; // x21
  const MethodInfo *v10; // x2
  ContinueDeviceDispMenu_o *continueDeviceDispMenu; // x20
  System_Action_o *v12; // x21
  const MethodInfo *v13; // x2
  ContinueDeviceDispMenu_o *v14; // x20
  System_Action_o *v15; // x21
  const MethodInfo *v16; // x2
  CommonConfirmDialog_o *continueDeviceConfirmDialog; // x20
  System_Action_o *v18; // x21

  if ( (byte_4A5665E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_ContinueDeviceComponent_onClose__);
    byte_4A5665E = 1;
  }
  switch ( this->fields.state )
  {
    case 1:
      this->fields.closeCount = 1;
      continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
      v4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v4, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0LL);
      if ( !continueDeviceInputMenu )
        goto LABEL_16;
      ContinueDeviceInputMenu__Close_31017808(continueDeviceInputMenu, v4, v7);
      return 1;
    case 2:
      this->fields.closeCount = 2;
      v8 = this->fields.continueDeviceInputMenu;
      v9 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0LL);
      if ( !v8 )
        goto LABEL_16;
      ContinueDeviceInputMenu__Close_31017808(v8, v9, v10);
      goto LABEL_13;
    case 4:
      this->fields.closeCount = 1;
      continueDeviceDispMenu = this->fields.continueDeviceDispMenu;
      v12 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0LL);
      if ( !continueDeviceDispMenu )
        goto LABEL_16;
      ContinueDeviceDispMenu__Close_31018124(continueDeviceDispMenu, v12, v13);
      return 1;
    case 5:
      this->fields.closeCount = 2;
      v14 = this->fields.continueDeviceDispMenu;
      v15 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0LL);
      if ( !v14 )
        goto LABEL_16;
      ContinueDeviceDispMenu__Close_31018124(v14, v15, v16);
LABEL_13:
      continueDeviceConfirmDialog = this->fields.continueDeviceConfirmDialog;
      v18 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0LL);
      if ( !continueDeviceConfirmDialog )
LABEL_16:
        sub_1B8880C(v5, v6);
      CommonConfirmDialog__Close_30471636(continueDeviceConfirmDialog, v18, 0LL);
      return 1;
    default:
      this->fields.closeCount = 0;
      ContinueDeviceComponent__onClose(this, method);
      return 1;
  }
}


void __fastcall ContinueDeviceComponent__hideMenu(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x0

  continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
  this->fields.state = 0;
  if ( !continueDeviceInputMenu
    || (ContinueDeviceInputMenu__Init(continueDeviceInputMenu, method),
        (continueDeviceInputMenu = (ContinueDeviceInputMenu_o *)this->fields.continueDeviceDispMenu) == 0LL)
    || (ContinueDeviceDispMenu__Init((ContinueDeviceDispMenu_o *)continueDeviceInputMenu, method),
        (continueDeviceInputMenu = (ContinueDeviceInputMenu_o *)this->fields.continueDeviceConfirmDialog) == 0LL)
    || (CommonConfirmDialog__Init((CommonConfirmDialog_o *)continueDeviceInputMenu, 0LL),
        (continueDeviceInputMenu = (ContinueDeviceInputMenu_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL)) == 0LL) )
  {
    sub_1B8880C(continueDeviceInputMenu, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)continueDeviceInputMenu, 0, 0LL);
}


void __fastcall ContinueDeviceComponent__onClose(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  int32_t v3; // w8
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4A5665F & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3595/*"CLOSE_MENU"*/);
    byte_4A5665F = 1;
  }
  v3 = this->fields.closeCount - 1;
  this->fields.closeCount = v3;
  if ( !v3 )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      sub_1B8880C(0LL, method);
    PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3595/*"CLOSE_MENU"*/, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ContinueDeviceComponent__onCloseDialog(
        ContinueDeviceComponent_o *this,
        bool result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4A56667 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3599/*"CLOSE_SERIAL_CODE"*/);
    byte_4A56667 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1B8880C(0LL, result);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3599/*"CLOSE_SERIAL_CODE"*/, 0LL);
}


void __fastcall ContinueDeviceComponent__onCloseMenu(
        ContinueDeviceComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4A56668 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_3599/*"CLOSE_SERIAL_CODE"*/);
    byte_4A56668 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ClosePresentBoxNotificationMenu(Instance, 0LL),
        (Instance = (CommonUI_o *)this->fields.myRoomFsm) == 0LL) )
  {
    sub_1B8880C(Instance, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3599/*"CLOSE_SERIAL_CODE"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ContinueDeviceComponent__onConfirmCode(
        ContinueDeviceComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  ContinuePrepareRequest_o *Request_object; // x0
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  ContinueDeviceInputMenu_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_4A56661 & 1) == 0 )
  {
    sub_1B885B0(&ContinueDeviceInputMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ContinueDeviceComponent_callbackCodeInput__);
    sub_1B885B0(&Method_ContinueDeviceComponent_onInputCode__);
    sub_1B885B0(&Method_NetworkManager_getRequest_ContinuePrepareRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4A56661 = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 3;
    v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_callbackCodeInput__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (ContinuePrepareRequest_o *)NetworkManager__getRequest_object_(
                                                   v5,
                                                   (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_ContinuePrepareRequest___);
    if ( Request_object )
    {
      ContinuePrepareRequest__beginRequest(Request_object, this->fields.passwardCode, 0LL);
      return;
    }
LABEL_11:
    sub_1B8880C(Request_object, isDecide);
  }
  Request_object = (ContinuePrepareRequest_o *)this->fields.continueDeviceConfirmDialog;
  this->fields.state = 1;
  if ( !Request_object )
    goto LABEL_11;
  CommonConfirmDialog__Close((CommonConfirmDialog_o *)Request_object, 0LL);
  continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
  v8 = (ContinueDeviceInputMenu_CallbackFunc_o *)sub_1B887FC(ContinueDeviceInputMenu_CallbackFunc_TypeInfo);
  ContinueDeviceInputMenu_CallbackFunc___ctor(
    v8,
    (Il2CppObject *)this,
    Method_ContinueDeviceComponent_onInputCode__,
    v9);
  if ( !continueDeviceInputMenu )
    goto LABEL_11;
  ContinueDeviceInputMenu__Open(continueDeviceInputMenu, v8, v10);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ContinueDeviceComponent__onConfirmRetry(
        ContinueDeviceComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ContinueDeviceDispMenu_o *continueDeviceDispMenu; // x20
  System_Action_o *v6; // x21
  CommonConfirmDialog_o *v7; // x0
  const MethodInfo *v8; // x2
  CommonConfirmDialog_o *continueDeviceConfirmDialog; // x20
  System_Action_o *v10; // x21
  ContinueDeviceDispMenu_o *v11; // x20
  System_String_o *continueCode; // x21
  ContinueDeviceDispMenu_CallbackFunc_o *v13; // x22
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3

  if ( (byte_4A56665 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&ContinueDeviceDispMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ContinueDeviceComponent_onDispCode__);
    sub_1B885B0(&Method_ContinueDeviceComponent_onNextRetryOpen__);
    byte_4A56665 = 1;
  }
  if ( isDecide )
  {
    *(_QWORD *)&this->fields.state = 0x200000000LL;
    continueDeviceDispMenu = this->fields.continueDeviceDispMenu;
    v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_ContinueDeviceComponent_onNextRetryOpen__, 0LL);
    if ( continueDeviceDispMenu )
    {
      ContinueDeviceDispMenu__Close_31018124(continueDeviceDispMenu, v6, v8);
      continueDeviceConfirmDialog = this->fields.continueDeviceConfirmDialog;
      v10 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_ContinueDeviceComponent_onNextRetryOpen__, 0LL);
      if ( continueDeviceConfirmDialog )
      {
        CommonConfirmDialog__Close_30471636(continueDeviceConfirmDialog, v10, 0LL);
        return;
      }
    }
LABEL_10:
    sub_1B8880C(v7, isDecide);
  }
  v7 = this->fields.continueDeviceConfirmDialog;
  this->fields.state = 4;
  if ( !v7 )
    goto LABEL_10;
  CommonConfirmDialog__Close(v7, 0LL);
  v11 = this->fields.continueDeviceDispMenu;
  continueCode = this->fields.continueCode;
  v13 = (ContinueDeviceDispMenu_CallbackFunc_o *)sub_1B887FC(ContinueDeviceDispMenu_CallbackFunc_TypeInfo);
  ContinueDeviceDispMenu_CallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    Method_ContinueDeviceComponent_onDispCode__,
    v14);
  if ( !v11 )
    goto LABEL_10;
  ContinueDeviceDispMenu__Open(v11, continueCode, v13, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ContinueDeviceComponent__onDispCode(
        ContinueDeviceComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  CommonConfirmDialog_o *continueDeviceConfirmDialog; // x20
  System_String_o *v6; // x21
  CommonConfirmDialog_ClickDelegate_o *v7; // x22
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4A56664 & 1) == 0 )
  {
    sub_1B885B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&Method_ContinueDeviceComponent_onConfirmRetry__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_3861/*"CONTINUE_DEVICE_CONFIRM_MESSAGE2"*/);
    sub_1B885B0(&StringLiteral_3587/*"CLOSE_CONTINUE_DEVICE"*/);
    byte_4A56664 = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 2;
    continueDeviceConfirmDialog = this->fields.continueDeviceConfirmDialog;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3861/*"CONTINUE_DEVICE_CONFIRM_MESSAGE2"*/, 0LL);
    v7 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B887FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v7,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_onConfirmRetry__,
      0LL);
    if ( continueDeviceConfirmDialog )
    {
      CommonConfirmDialog__Open(continueDeviceConfirmDialog, 0LL, v6, v7, 0, 0, 0, 0LL);
      return;
    }
LABEL_10:
    sub_1B8880C(myRoomFsm, isDecide);
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_10;
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3587/*"CLOSE_CONTINUE_DEVICE"*/, 0LL);
}


void __fastcall ContinueDeviceComponent__onInputCode(
        ContinueDeviceComponent_o *this,
        System_String_o *code,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  ContinuePrepareRequest_o *Request_object; // x0

  if ( (byte_4A56660 & 1) == 0 )
  {
    sub_1B885B0(&Method_ContinueDeviceComponent_callbackCodeInput__);
    sub_1B885B0(&Method_NetworkManager_getRequest_ContinuePrepareRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&StringLiteral_3587/*"CLOSE_CONTINUE_DEVICE"*/);
    byte_4A56660 = 1;
  }
  if ( code )
  {
    this->fields.passwardCode = code;
    sub_1B88554(&this->fields.passwardCode, code);
    this->fields.state = 3;
    v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_callbackCodeInput__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (ContinuePrepareRequest_o *)NetworkManager__getRequest_object_(
                                                   v5,
                                                   (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_ContinuePrepareRequest___);
    if ( Request_object )
    {
      ContinuePrepareRequest__beginRequest(Request_object, this->fields.passwardCode, 0LL);
      Request_object = (ContinuePrepareRequest_o *)this->fields.myRoomCtrl;
      if ( Request_object )
      {
        MyRoomControl__SetBackButtonIgnore((MyRoomControl_o *)Request_object, 1, 0LL);
        return;
      }
    }
LABEL_11:
    sub_1B8880C(Request_object, code);
  }
  Request_object = (ContinuePrepareRequest_o *)this->fields.myRoomFsm;
  if ( !Request_object )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_3587/*"CLOSE_CONTINUE_DEVICE"*/, 0LL);
}


void __fastcall ContinueDeviceComponent__onNextDispOpen(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  int32_t v3; // w8
  ContinueDeviceDispMenu_o *continueDeviceDispMenu; // x20
  System_String_o *continueCode; // x21
  ContinueDeviceDispMenu_CallbackFunc_o *v6; // x22
  const MethodInfo *v7; // x3
  MyRoomControl_o *myRoomCtrl; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3

  if ( (byte_4A56663 & 1) == 0 )
  {
    sub_1B885B0(&ContinueDeviceDispMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ContinueDeviceComponent_onDispCode__);
    byte_4A56663 = 1;
  }
  v3 = this->fields.closeCount - 1;
  this->fields.closeCount = v3;
  if ( !v3 )
  {
    this->fields.state = 4;
    continueDeviceDispMenu = this->fields.continueDeviceDispMenu;
    continueCode = this->fields.continueCode;
    v6 = (ContinueDeviceDispMenu_CallbackFunc_o *)sub_1B887FC(ContinueDeviceDispMenu_CallbackFunc_TypeInfo);
    ContinueDeviceDispMenu_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_onDispCode__,
      v7);
    if ( !continueDeviceDispMenu
      || (ContinueDeviceDispMenu__Open(continueDeviceDispMenu, continueCode, v6, v10),
          (myRoomCtrl = this->fields.myRoomCtrl) == 0LL) )
    {
      sub_1B8880C(myRoomCtrl, v9);
    }
    MyRoomControl__SetBackButtonIgnore(myRoomCtrl, 0, 0LL);
  }
}


void __fastcall ContinueDeviceComponent__onNextRetryOpen(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  int32_t v3; // w8
  void *v4; // x1
  void *v5; // x1
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  ContinueDeviceInputMenu_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x3
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4A56666 & 1) == 0 )
  {
    sub_1B885B0(&ContinueDeviceInputMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ContinueDeviceComponent_onInputCode__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A56666 = 1;
  }
  v3 = this->fields.closeCount - 1;
  this->fields.closeCount = v3;
  if ( !v3 )
  {
    this->fields.state = 1;
    v4 = StringLiteral_1/*""*/;
    this->fields.passwardCode = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1B88554(&this->fields.passwardCode, v4);
    v5 = StringLiteral_1/*""*/;
    this->fields.continueCode = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1B88554(&this->fields.continueCode, v5);
    continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
    v7 = (ContinueDeviceInputMenu_CallbackFunc_o *)sub_1B887FC(ContinueDeviceInputMenu_CallbackFunc_TypeInfo);
    ContinueDeviceInputMenu_CallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_onInputCode__,
      v8);
    if ( !continueDeviceInputMenu )
      sub_1B8880C(v9, v10);
    ContinueDeviceInputMenu__Open(continueDeviceInputMenu, v7, v11);
  }
}


bool __fastcall ContinueDeviceComponent__openMenu(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  __int64 gameObject; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  void *v6; // x1
  void *v7; // x1
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  ContinueDeviceInputMenu_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  void *v13; // x1
  Il2CppClass *klass; // x1
  ContinueDeviceDispMenu_o *continueDeviceDispMenu; // x20
  System_String_o *continueCode; // x21
  ContinueDeviceDispMenu_CallbackFunc_o *v17; // x22
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A5665D & 1) == 0 )
  {
    sub_1B885B0(&ContinueDeviceInputMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&ContinueDeviceDispMenu_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_ContinueDeviceComponent_onDispCode__);
    sub_1B885B0(&Method_ContinueDeviceComponent_onInputCode__);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserContinueMaster___);
    sub_1B885B0(&Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long__TryGetEntity__);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5665D = 1;
  }
  entity = 0LL;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)gameObject,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserContinueMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  gameObject = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_17;
  gameObject = DataMasterBase_object__object__long___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 &entity,
                 gameObject,
                 (const MethodInfo_311DB34 *)Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long__TryGetEntity__);
  if ( (gameObject & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_17;
    if ( !LODWORD(entity[1].monitor) )
    {
      this->fields.state = 4;
      v13 = StringLiteral_1/*""*/;
      this->fields.passwardCode = (struct System_String_o *)StringLiteral_1/*""*/;
      gameObject = sub_1B88554(&this->fields.passwardCode, v13);
      if ( entity )
      {
        klass = entity[2].klass;
        this->fields.continueCode = (struct System_String_o *)klass;
        sub_1B88554(&this->fields.continueCode, klass);
        continueDeviceDispMenu = this->fields.continueDeviceDispMenu;
        continueCode = this->fields.continueCode;
        v17 = (ContinueDeviceDispMenu_CallbackFunc_o *)sub_1B887FC(ContinueDeviceDispMenu_CallbackFunc_TypeInfo);
        ContinueDeviceDispMenu_CallbackFunc___ctor(
          v17,
          (Il2CppObject *)this,
          Method_ContinueDeviceComponent_onDispCode__,
          v18);
        if ( continueDeviceDispMenu )
        {
          ContinueDeviceDispMenu__Open(continueDeviceDispMenu, continueCode, v17, v19);
          return 1;
        }
      }
LABEL_17:
      sub_1B8880C(gameObject, v4);
    }
  }
  this->fields.state = 1;
  v6 = StringLiteral_1/*""*/;
  this->fields.passwardCode = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554(&this->fields.passwardCode, v6);
  v7 = StringLiteral_1/*""*/;
  this->fields.continueCode = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B88554(&this->fields.continueCode, v7);
  continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
  v9 = (ContinueDeviceInputMenu_CallbackFunc_o *)sub_1B887FC(ContinueDeviceInputMenu_CallbackFunc_TypeInfo);
  ContinueDeviceInputMenu_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_ContinueDeviceComponent_onInputCode__,
    v10);
  if ( !continueDeviceInputMenu )
    goto LABEL_17;
  ContinueDeviceInputMenu__Open(continueDeviceInputMenu, v9, v11);
  return 1;
}


void __fastcall ContinueDeviceComponent__showMenu(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        gameObject = (UnityEngine_GameObject_o *)this->fields.continueDeviceInputMenu,
        this->fields.state = 0,
        !gameObject)
    || (ContinueDeviceInputMenu__Init((ContinueDeviceInputMenu_o *)gameObject, v4),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.continueDeviceDispMenu) == 0LL)
    || (ContinueDeviceDispMenu__Init((ContinueDeviceDispMenu_o *)gameObject, v4),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.continueDeviceConfirmDialog) == 0LL) )
  {
    sub_1B8880C(gameObject, v4);
  }
  CommonConfirmDialog__Init((CommonConfirmDialog_o *)gameObject, 0LL);
}