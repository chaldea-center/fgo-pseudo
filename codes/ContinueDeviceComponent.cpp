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
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  System_Action_o *v13; // x21
  const MethodInfo *v14; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A1AFF5 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, result);
    sub_1B715CC(&Method_ContinueDeviceComponent_onNextDispOpen__, v5);
    sub_1B715CC(&Method_DataManager_GetMaster_UserContinueMaster___, v6);
    sub_1B715CC(&DataManager_TypeInfo, v7);
    sub_1B715CC(&Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long__TryGetSingleEntity__, v8);
    sub_1B715CC(&StringLiteral_22000/*"ng"*/, v9);
    byte_4A1AFF5 = 1;
  }
  entity = 0LL;
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22000/*"ng"*/, 0LL) )
    goto LABEL_10;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2E5B394 *)Method_DataManager_GetMaster_UserContinueMaster___);
  if ( !Master_object )
    goto LABEL_15;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___TryGetSingleEntity(
                                                                  Master_object,
                                                                  &entity,
                                                                  (const MethodInfo_30F89E8 *)Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long__TryGetSingleEntity__);
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
    sub_1B71828(Master_object, v10);
  }
  this->fields.continueCode = (struct System_String_o *)entity[2].klass;
  sub_1B71570(&this->fields.continueCode);
  continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
  *(_QWORD *)&this->fields.state = 0x100000000LL;
  v13 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_ContinueDeviceComponent_onNextDispOpen__, 0LL);
  if ( !continueDeviceInputMenu )
    goto LABEL_15;
  ContinueDeviceInputMenu__Close_30828840(continueDeviceInputMenu, v13, v14);
}


bool __fastcall ContinueDeviceComponent__closeMenu(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  ContinueDeviceInputMenu_o *v9; // x20
  System_Action_o *v10; // x21
  const MethodInfo *v11; // x2
  ContinueDeviceDispMenu_o *continueDeviceDispMenu; // x20
  System_Action_o *v13; // x21
  const MethodInfo *v14; // x2
  ContinueDeviceDispMenu_o *v15; // x20
  System_Action_o *v16; // x21
  const MethodInfo *v17; // x2
  CommonConfirmDialog_o *continueDeviceConfirmDialog; // x20
  System_Action_o *v19; // x21

  if ( (byte_4A1AFF1 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, method);
    sub_1B715CC(&Method_ContinueDeviceComponent_onClose__, v3);
    byte_4A1AFF1 = 1;
  }
  switch ( this->fields.state )
  {
    case 1:
      this->fields.closeCount = 1;
      continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
      v5 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
      System_Action___ctor(v5, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0LL);
      if ( !continueDeviceInputMenu )
        goto LABEL_16;
      ContinueDeviceInputMenu__Close_30828840(continueDeviceInputMenu, v5, v8);
      return 1;
    case 2:
      this->fields.closeCount = 2;
      v9 = this->fields.continueDeviceInputMenu;
      v10 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0LL);
      if ( !v9 )
        goto LABEL_16;
      ContinueDeviceInputMenu__Close_30828840(v9, v10, v11);
      goto LABEL_13;
    case 4:
      this->fields.closeCount = 1;
      continueDeviceDispMenu = this->fields.continueDeviceDispMenu;
      v13 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0LL);
      if ( !continueDeviceDispMenu )
        goto LABEL_16;
      ContinueDeviceDispMenu__Close_30829156(continueDeviceDispMenu, v13, v14);
      return 1;
    case 5:
      this->fields.closeCount = 2;
      v15 = this->fields.continueDeviceDispMenu;
      v16 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0LL);
      if ( !v15 )
        goto LABEL_16;
      ContinueDeviceDispMenu__Close_30829156(v15, v16, v17);
LABEL_13:
      continueDeviceConfirmDialog = this->fields.continueDeviceConfirmDialog;
      v19 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0LL);
      if ( !continueDeviceConfirmDialog )
LABEL_16:
        sub_1B71828(v6, v7);
      CommonConfirmDialog__Close_30377456(continueDeviceConfirmDialog, v19, 0LL);
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
    sub_1B71828(continueDeviceInputMenu, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)continueDeviceInputMenu, 0, 0LL);
}


void __fastcall ContinueDeviceComponent__onClose(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  int32_t v3; // w8
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4A1AFF2 & 1) == 0 )
  {
    sub_1B715CC(&StringLiteral_3577/*"CLOSE_MENU"*/, method);
    byte_4A1AFF2 = 1;
  }
  v3 = this->fields.closeCount - 1;
  this->fields.closeCount = v3;
  if ( !v3 )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      sub_1B71828(0LL, method);
    PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3577/*"CLOSE_MENU"*/, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ContinueDeviceComponent__onCloseDialog(
        ContinueDeviceComponent_o *this,
        bool result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4A1AFFA & 1) == 0 )
  {
    sub_1B715CC(&StringLiteral_3581/*"CLOSE_SERIAL_CODE"*/, result);
    byte_4A1AFFA = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1B71828(0LL, result);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3581/*"CLOSE_SERIAL_CODE"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ContinueDeviceComponent__onCloseMenu(
        ContinueDeviceComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_4A1AFFB & 1) == 0 )
  {
    sub_1B715CC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, *(_QWORD *)&result);
    sub_1B715CC(&StringLiteral_3581/*"CLOSE_SERIAL_CODE"*/, v4);
    byte_4A1AFFB = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ClosePresentBoxNotificationMenu(Instance, 0LL),
        (Instance = (CommonUI_o *)this->fields.myRoomFsm) == 0LL) )
  {
    sub_1B71828(Instance, v6);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3581/*"CLOSE_SERIAL_CODE"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ContinueDeviceComponent__onConfirmCode(
        ContinueDeviceComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  NetworkManager_ResultCallbackFunc_o *v10; // x20
  ContinuePrepareRequest_o *Request_object; // x0
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  ContinueDeviceInputMenu_CallbackFunc_o *v13; // x21
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x2

  if ( (byte_4A1AFF4 & 1) == 0 )
  {
    sub_1B715CC(&ContinueDeviceInputMenu_CallbackFunc_TypeInfo, isDecide);
    sub_1B715CC(&Method_ContinueDeviceComponent_callbackCodeInput__, v5);
    sub_1B715CC(&Method_ContinueDeviceComponent_onInputCode__, v6);
    sub_1B715CC(&Method_NetworkManager_getRequest_ContinuePrepareRequest___, v7);
    sub_1B715CC(&NetworkManager_TypeInfo, v8);
    sub_1B715CC(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    byte_4A1AFF4 = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 3;
    v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1B71818(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_callbackCodeInput__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (ContinuePrepareRequest_o *)NetworkManager__getRequest_object_(
                                                   v10,
                                                   (const MethodInfo_2EDD4A0 *)Method_NetworkManager_getRequest_ContinuePrepareRequest___);
    if ( Request_object )
    {
      ContinuePrepareRequest__beginRequest(Request_object, this->fields.passwardCode, 0LL);
      return;
    }
LABEL_11:
    sub_1B71828(Request_object, isDecide);
  }
  Request_object = (ContinuePrepareRequest_o *)this->fields.continueDeviceConfirmDialog;
  this->fields.state = 1;
  if ( !Request_object )
    goto LABEL_11;
  CommonConfirmDialog__Close((CommonConfirmDialog_o *)Request_object, 0LL);
  continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
  v13 = (ContinueDeviceInputMenu_CallbackFunc_o *)sub_1B71818(ContinueDeviceInputMenu_CallbackFunc_TypeInfo);
  ContinueDeviceInputMenu_CallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    Method_ContinueDeviceComponent_onInputCode__,
    v14);
  if ( !continueDeviceInputMenu )
    goto LABEL_11;
  ContinueDeviceInputMenu__Open(continueDeviceInputMenu, v13, v15);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ContinueDeviceComponent__onConfirmRetry(
        ContinueDeviceComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ContinueDeviceDispMenu_o *continueDeviceDispMenu; // x20
  System_Action_o *v9; // x21
  CommonConfirmDialog_o *v10; // x0
  const MethodInfo *v11; // x2
  CommonConfirmDialog_o *continueDeviceConfirmDialog; // x20
  System_Action_o *v13; // x21
  ContinueDeviceDispMenu_o *v14; // x20
  System_String_o *continueCode; // x21
  ContinueDeviceDispMenu_CallbackFunc_o *v16; // x22
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x3

  if ( (byte_4A1AFF8 & 1) == 0 )
  {
    sub_1B715CC(&System_Action_TypeInfo, isDecide);
    sub_1B715CC(&ContinueDeviceDispMenu_CallbackFunc_TypeInfo, v5);
    sub_1B715CC(&Method_ContinueDeviceComponent_onDispCode__, v6);
    sub_1B715CC(&Method_ContinueDeviceComponent_onNextRetryOpen__, v7);
    byte_4A1AFF8 = 1;
  }
  if ( isDecide )
  {
    *(_QWORD *)&this->fields.state = 0x200000000LL;
    continueDeviceDispMenu = this->fields.continueDeviceDispMenu;
    v9 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_ContinueDeviceComponent_onNextRetryOpen__, 0LL);
    if ( continueDeviceDispMenu )
    {
      ContinueDeviceDispMenu__Close_30829156(continueDeviceDispMenu, v9, v11);
      continueDeviceConfirmDialog = this->fields.continueDeviceConfirmDialog;
      v13 = (System_Action_o *)sub_1B71818(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_ContinueDeviceComponent_onNextRetryOpen__, 0LL);
      if ( continueDeviceConfirmDialog )
      {
        CommonConfirmDialog__Close_30377456(continueDeviceConfirmDialog, v13, 0LL);
        return;
      }
    }
LABEL_10:
    sub_1B71828(v10, isDecide);
  }
  v10 = this->fields.continueDeviceConfirmDialog;
  this->fields.state = 4;
  if ( !v10 )
    goto LABEL_10;
  CommonConfirmDialog__Close(v10, 0LL);
  v14 = this->fields.continueDeviceDispMenu;
  continueCode = this->fields.continueCode;
  v16 = (ContinueDeviceDispMenu_CallbackFunc_o *)sub_1B71818(ContinueDeviceDispMenu_CallbackFunc_TypeInfo);
  ContinueDeviceDispMenu_CallbackFunc___ctor(
    v16,
    (Il2CppObject *)this,
    Method_ContinueDeviceComponent_onDispCode__,
    v17);
  if ( !v14 )
    goto LABEL_10;
  ContinueDeviceDispMenu__Open(v14, continueCode, v16, v18);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ContinueDeviceComponent__onDispCode(
        ContinueDeviceComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  CommonConfirmDialog_o *continueDeviceConfirmDialog; // x20
  System_String_o *v10; // x21
  CommonConfirmDialog_ClickDelegate_o *v11; // x22
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4A1AFF7 & 1) == 0 )
  {
    sub_1B715CC(&CommonConfirmDialog_ClickDelegate_TypeInfo, isDecide);
    sub_1B715CC(&Method_ContinueDeviceComponent_onConfirmRetry__, v5);
    sub_1B715CC(&LocalizationManager_TypeInfo, v6);
    sub_1B715CC(&StringLiteral_3843/*"CONTINUE_DEVICE_CONFIRM_MESSAGE2"*/, v7);
    sub_1B715CC(&StringLiteral_3569/*"CLOSE_CONTINUE_DEVICE"*/, v8);
    byte_4A1AFF7 = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 2;
    continueDeviceConfirmDialog = this->fields.continueDeviceConfirmDialog;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3843/*"CONTINUE_DEVICE_CONFIRM_MESSAGE2"*/, 0LL);
    v11 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B71818(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v11,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_onConfirmRetry__,
      0LL);
    if ( continueDeviceConfirmDialog )
    {
      CommonConfirmDialog__Open(continueDeviceConfirmDialog, 0LL, v10, v11, 0, 0, 0, 0LL);
      return;
    }
LABEL_10:
    sub_1B71828(myRoomFsm, isDecide);
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_10;
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3569/*"CLOSE_CONTINUE_DEVICE"*/, 0LL);
}


void __fastcall ContinueDeviceComponent__onInputCode(
        ContinueDeviceComponent_o *this,
        System_String_o *code,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  NetworkManager_ResultCallbackFunc_o *v9; // x20
  ContinuePrepareRequest_o *Request_object; // x0

  if ( (byte_4A1AFF3 & 1) == 0 )
  {
    sub_1B715CC(&Method_ContinueDeviceComponent_callbackCodeInput__, code);
    sub_1B715CC(&Method_NetworkManager_getRequest_ContinuePrepareRequest___, v5);
    sub_1B715CC(&NetworkManager_TypeInfo, v6);
    sub_1B715CC(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1B715CC(&StringLiteral_3569/*"CLOSE_CONTINUE_DEVICE"*/, v8);
    byte_4A1AFF3 = 1;
  }
  if ( code )
  {
    this->fields.passwardCode = code;
    sub_1B71570(&this->fields.passwardCode);
    this->fields.state = 3;
    v9 = (NetworkManager_ResultCallbackFunc_o *)sub_1B71818(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v9,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_callbackCodeInput__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (ContinuePrepareRequest_o *)NetworkManager__getRequest_object_(
                                                   v9,
                                                   (const MethodInfo_2EDD4A0 *)Method_NetworkManager_getRequest_ContinuePrepareRequest___);
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
    sub_1B71828(Request_object, code);
  }
  Request_object = (ContinuePrepareRequest_o *)this->fields.myRoomFsm;
  if ( !Request_object )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_3569/*"CLOSE_CONTINUE_DEVICE"*/, 0LL);
}


void __fastcall ContinueDeviceComponent__onNextDispOpen(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t v4; // w8
  ContinueDeviceDispMenu_o *continueDeviceDispMenu; // x20
  System_String_o *continueCode; // x21
  ContinueDeviceDispMenu_CallbackFunc_o *v7; // x22
  const MethodInfo *v8; // x3
  MyRoomControl_o *myRoomCtrl; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3

  if ( (byte_4A1AFF6 & 1) == 0 )
  {
    sub_1B715CC(&ContinueDeviceDispMenu_CallbackFunc_TypeInfo, method);
    sub_1B715CC(&Method_ContinueDeviceComponent_onDispCode__, v3);
    byte_4A1AFF6 = 1;
  }
  v4 = this->fields.closeCount - 1;
  this->fields.closeCount = v4;
  if ( !v4 )
  {
    this->fields.state = 4;
    continueDeviceDispMenu = this->fields.continueDeviceDispMenu;
    continueCode = this->fields.continueCode;
    v7 = (ContinueDeviceDispMenu_CallbackFunc_o *)sub_1B71818(ContinueDeviceDispMenu_CallbackFunc_TypeInfo);
    ContinueDeviceDispMenu_CallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_onDispCode__,
      v8);
    if ( !continueDeviceDispMenu
      || (ContinueDeviceDispMenu__Open(continueDeviceDispMenu, continueCode, v7, v11),
          (myRoomCtrl = this->fields.myRoomCtrl) == 0LL) )
    {
      sub_1B71828(myRoomCtrl, v10);
    }
    MyRoomControl__SetBackButtonIgnore(myRoomCtrl, 0, 0LL);
  }
}


void __fastcall ContinueDeviceComponent__onNextRetryOpen(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t v5; // w8
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  ContinueDeviceInputMenu_CallbackFunc_o *v7; // x21
  const MethodInfo *v8; // x3
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2

  if ( (byte_4A1AFF9 & 1) == 0 )
  {
    sub_1B715CC(&ContinueDeviceInputMenu_CallbackFunc_TypeInfo, method);
    sub_1B715CC(&Method_ContinueDeviceComponent_onInputCode__, v3);
    sub_1B715CC(&StringLiteral_1/*""*/, v4);
    byte_4A1AFF9 = 1;
  }
  v5 = this->fields.closeCount - 1;
  this->fields.closeCount = v5;
  if ( !v5 )
  {
    this->fields.state = 1;
    this->fields.passwardCode = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1B71570(&this->fields.passwardCode);
    this->fields.continueCode = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1B71570(&this->fields.continueCode);
    continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
    v7 = (ContinueDeviceInputMenu_CallbackFunc_o *)sub_1B71818(ContinueDeviceInputMenu_CallbackFunc_TypeInfo);
    ContinueDeviceInputMenu_CallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_onInputCode__,
      v8);
    if ( !continueDeviceInputMenu )
      sub_1B71828(v9, v10);
    ContinueDeviceInputMenu__Open(continueDeviceInputMenu, v7, v11);
  }
}


bool __fastcall ContinueDeviceComponent__openMenu(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 gameObject; // x0
  __int64 v12; // x1
  Il2CppObject *MasterData_object; // x20
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  ContinueDeviceInputMenu_CallbackFunc_o *v15; // x21
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2
  ContinueDeviceDispMenu_o *continueDeviceDispMenu; // x20
  System_String_o *continueCode; // x21
  ContinueDeviceDispMenu_CallbackFunc_o *v21; // x22
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A1AFF0 & 1) == 0 )
  {
    sub_1B715CC(&ContinueDeviceInputMenu_CallbackFunc_TypeInfo, method);
    sub_1B715CC(&ContinueDeviceDispMenu_CallbackFunc_TypeInfo, v3);
    sub_1B715CC(&Method_ContinueDeviceComponent_onDispCode__, v4);
    sub_1B715CC(&Method_ContinueDeviceComponent_onInputCode__, v5);
    sub_1B715CC(&Method_DataManager_GetMasterData_UserContinueMaster___, v6);
    sub_1B715CC(&Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long__TryGetEntity__, v7);
    sub_1B715CC(&NetworkManager_TypeInfo, v8);
    sub_1B715CC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_1B715CC(&StringLiteral_1/*""*/, v10);
    byte_4A1AFF0 = 1;
  }
  entity = 0LL;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_370B208 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)gameObject,
                        (const MethodInfo_2E5B3E8 *)Method_DataManager_GetMasterData_UserContinueMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  gameObject = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_17;
  gameObject = DataMasterBase_object__object__long___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 &entity,
                 gameObject,
                 (const MethodInfo_30F8960 *)Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long__TryGetEntity__);
  if ( (gameObject & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_17;
    if ( !LODWORD(entity[1].monitor) )
    {
      this->fields.state = 4;
      this->fields.passwardCode = (struct System_String_o *)StringLiteral_1/*""*/;
      gameObject = sub_1B71570(&this->fields.passwardCode);
      if ( entity )
      {
        this->fields.continueCode = (struct System_String_o *)entity[2].klass;
        sub_1B71570(&this->fields.continueCode);
        continueDeviceDispMenu = this->fields.continueDeviceDispMenu;
        continueCode = this->fields.continueCode;
        v21 = (ContinueDeviceDispMenu_CallbackFunc_o *)sub_1B71818(ContinueDeviceDispMenu_CallbackFunc_TypeInfo);
        ContinueDeviceDispMenu_CallbackFunc___ctor(
          v21,
          (Il2CppObject *)this,
          Method_ContinueDeviceComponent_onDispCode__,
          v22);
        if ( continueDeviceDispMenu )
        {
          ContinueDeviceDispMenu__Open(continueDeviceDispMenu, continueCode, v21, v23);
          return 1;
        }
      }
LABEL_17:
      sub_1B71828(gameObject, v12);
    }
  }
  this->fields.state = 1;
  this->fields.passwardCode = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B71570(&this->fields.passwardCode);
  this->fields.continueCode = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B71570(&this->fields.continueCode);
  continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
  v15 = (ContinueDeviceInputMenu_CallbackFunc_o *)sub_1B71818(ContinueDeviceInputMenu_CallbackFunc_TypeInfo);
  ContinueDeviceInputMenu_CallbackFunc___ctor(
    v15,
    (Il2CppObject *)this,
    Method_ContinueDeviceComponent_onInputCode__,
    v16);
  if ( !continueDeviceInputMenu )
    goto LABEL_17;
  ContinueDeviceInputMenu__Open(continueDeviceInputMenu, v15, v17);
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
    sub_1B71828(gameObject, v4);
  }
  CommonConfirmDialog__Init((CommonConfirmDialog_o *)gameObject, 0LL);
}