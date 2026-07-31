void ContinueDeviceComponent___ctor(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void ContinueDeviceComponent__callbackCodeInput(
        ContinueDeviceComponent_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  Il2CppClass *klass; // x1
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  System_Action_c *v16; // x0
  System_Action_o *v17; // x21
  const MethodInfo *v18; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5933334 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_ContinueDeviceComponent_onNextDispOpen__);
    sub_21FFC50(&Method_DataManager_GetMaster_UserContinueMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long__TryGetSingleEntity__);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_5933334 = 1;
  }
  entity = 0;
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_23290/*"ng"*/, 0) )
    goto LABEL_10;
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v5, v6);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_UserContinueMaster___);
  if ( !Master_object )
    goto LABEL_15;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___TryGetSingleEntity(
                                                                  Master_object,
                                                                  &entity,
                                                                  (const MethodInfo_3EDFB14 *)Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long__TryGetSingleEntity__);
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
      CommonConfirmDialog__Close((CommonConfirmDialog_o *)Master_object, 0);
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)this->fields.myRoomCtrl;
      if ( Master_object )
      {
        MyRoomControl__SetBackButtonIgnore((MyRoomControl_o *)Master_object, 0, 0);
        return;
      }
    }
LABEL_15:
    sub_21FFECC(Master_object, v5);
  }
  klass = entity[2].klass;
  this->fields.continueCode = (struct System_String_o *)klass;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.continueCode,
    (int32_t)klass,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
  v16 = System_Action_TypeInfo;
  *(_QWORD *)&this->fields.state = 0x100000000LL;
  v17 = (System_Action_o *)sub_21FFEBC(v16);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_ContinueDeviceComponent_onNextDispOpen__, 0);
  if ( !continueDeviceInputMenu )
    goto LABEL_15;
  ContinueDeviceInputMenu__Close_39756880(continueDeviceInputMenu, v17, v18);
}


bool ContinueDeviceComponent__closeMenu(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  int32_t state; // w8
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  ContinueDeviceDispMenu_o *v9; // x20
  System_Action_o *v10; // x21
  const MethodInfo *v11; // x2
  CommonConfirmDialog_o *continueDeviceConfirmDialog; // x20
  System_Action_o *v13; // x21
  ContinueDeviceInputMenu_o *v14; // x20
  System_Action_o *v15; // x21
  const MethodInfo *v16; // x2
  ContinueDeviceDispMenu_o *continueDeviceDispMenu; // x20
  System_Action_o *v18; // x21
  const MethodInfo *v19; // x2

  if ( (byte_5933330 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_ContinueDeviceComponent_onClose__);
    byte_5933330 = 1;
  }
  state = this->fields.state;
  if ( state <= 3 )
  {
    if ( state != 1 )
    {
      if ( state == 2 )
      {
        continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
        this->fields.closeCount = 2;
        v5 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
        System_Action___ctor(v5, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0);
        if ( !continueDeviceInputMenu )
          goto LABEL_20;
        ContinueDeviceInputMenu__Close_39756880(continueDeviceInputMenu, v5, v8);
        goto LABEL_12;
      }
LABEL_14:
      this->fields.closeCount = 0;
      ContinueDeviceComponent__onClose(this, method);
      return 1;
    }
    v14 = this->fields.continueDeviceInputMenu;
    this->fields.closeCount = 1;
    v15 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0);
    if ( v14 )
    {
      ContinueDeviceInputMenu__Close_39756880(v14, v15, v16);
      return 1;
    }
LABEL_20:
    sub_21FFECC(v6, v7);
  }
  if ( state == 4 )
  {
    continueDeviceDispMenu = this->fields.continueDeviceDispMenu;
    this->fields.closeCount = 1;
    v18 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v18, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0);
    if ( continueDeviceDispMenu )
    {
      ContinueDeviceDispMenu__Close_39757196(continueDeviceDispMenu, v18, v19);
      return 1;
    }
    goto LABEL_20;
  }
  if ( state != 5 )
    goto LABEL_14;
  v9 = this->fields.continueDeviceDispMenu;
  this->fields.closeCount = 2;
  v10 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0);
  if ( !v9 )
    goto LABEL_20;
  ContinueDeviceDispMenu__Close_39757196(v9, v10, v11);
LABEL_12:
  continueDeviceConfirmDialog = this->fields.continueDeviceConfirmDialog;
  v13 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0);
  if ( !continueDeviceConfirmDialog )
    goto LABEL_20;
  CommonConfirmDialog__Close_37269428(continueDeviceConfirmDialog, v13, 0);
  return 1;
}


void ContinueDeviceComponent__hideMenu(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x0

  continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
  this->fields.state = 0;
  if ( !continueDeviceInputMenu
    || (ContinueDeviceInputMenu__Init(continueDeviceInputMenu, method),
        (continueDeviceInputMenu = (ContinueDeviceInputMenu_o *)this->fields.continueDeviceDispMenu) == 0)
    || (ContinueDeviceDispMenu__Init((ContinueDeviceDispMenu_o *)continueDeviceInputMenu, method),
        (continueDeviceInputMenu = (ContinueDeviceInputMenu_o *)this->fields.continueDeviceConfirmDialog) == 0)
    || (CommonConfirmDialog__Init((CommonConfirmDialog_o *)continueDeviceInputMenu, 0),
        (continueDeviceInputMenu = (ContinueDeviceInputMenu_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0)) == 0) )
  {
    sub_21FFECC(continueDeviceInputMenu, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)continueDeviceInputMenu, 0, 0);
}


void ContinueDeviceComponent__onClose(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  int32_t v3; // w8
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_5933331 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_3651/*"CLOSE_MENU"*/);
    byte_5933331 = 1;
  }
  v3 = this->fields.closeCount - 1;
  this->fields.closeCount = v3;
  if ( !v3 )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      sub_21FFECC(0, method);
    PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3651/*"CLOSE_MENU"*/, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ContinueDeviceComponent__onCloseDialog(ContinueDeviceComponent_o *this, bool result, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_5933339 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_3655/*"CLOSE_SERIAL_CODE"*/);
    byte_5933339 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_21FFECC(0, result);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3655/*"CLOSE_SERIAL_CODE"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void ContinueDeviceComponent__onCloseMenu(ContinueDeviceComponent_o *this, int32_t result, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_593333A & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_3655/*"CLOSE_SERIAL_CODE"*/);
    byte_593333A = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_21FFECC(0, *(_QWORD *)&result);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3655/*"CLOSE_SERIAL_CODE"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void ContinueDeviceComponent__onConfirmCode(ContinueDeviceComponent_o *this, bool isDecide, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_c *v5; // x0
  NetworkManager_ResultCallbackFunc_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x2
  ContinuePrepareRequest_o *Request_object; // x0
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  ContinueDeviceInputMenu_CallbackFunc_o *v11; // x21
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2

  if ( (byte_5933333 & 1) == 0 )
  {
    sub_21FFC50(&ContinueDeviceInputMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_ContinueDeviceComponent_callbackCodeInput__);
    sub_21FFC50(&Method_ContinueDeviceComponent_onInputCode__);
    sub_21FFC50(&Method_NetworkManager_getRequest_ContinuePrepareRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_5933333 = 1;
  }
  if ( isDecide )
  {
    v5 = NetworkManager_ResultCallbackFunc_TypeInfo;
    this->fields.state = 3;
    v6 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(v5);
    NetworkManager_ResultCallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_callbackCodeInput__,
      0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v7, v8);
    Request_object = (ContinuePrepareRequest_o *)NetworkManager__getRequest_object_(
                                                   v6,
                                                   (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_ContinuePrepareRequest___);
    if ( Request_object )
    {
      ContinuePrepareRequest__beginRequest(Request_object, this->fields.passwardCode, 0);
      return;
    }
LABEL_11:
    sub_21FFECC(Request_object, isDecide);
  }
  Request_object = (ContinuePrepareRequest_o *)this->fields.continueDeviceConfirmDialog;
  this->fields.state = 1;
  if ( !Request_object )
    goto LABEL_11;
  CommonConfirmDialog__Close((CommonConfirmDialog_o *)Request_object, 0);
  continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
  v11 = (ContinueDeviceInputMenu_CallbackFunc_o *)sub_21FFEBC(ContinueDeviceInputMenu_CallbackFunc_TypeInfo);
  ContinueDeviceInputMenu_CallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_ContinueDeviceComponent_onInputCode__,
    v12);
  if ( !continueDeviceInputMenu )
    goto LABEL_11;
  ContinueDeviceInputMenu__Open(continueDeviceInputMenu, v11, v13);
}


// local variable allocation has failed, the output may be wrong!
void ContinueDeviceComponent__onConfirmRetry(ContinueDeviceComponent_o *this, bool isDecide, const MethodInfo *method)
{
  ContinueDeviceDispMenu_o *continueDeviceDispMenu; // x20
  System_Action_c *v6; // x0
  System_Action_o *v7; // x21
  CommonConfirmDialog_o *v8; // x0
  const MethodInfo *v9; // x2
  CommonConfirmDialog_o *continueDeviceConfirmDialog; // x20
  System_Action_o *v11; // x21
  ContinueDeviceDispMenu_o *v12; // x20
  System_String_o *continueCode; // x21
  ContinueDeviceDispMenu_CallbackFunc_o *v14; // x22
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3

  if ( (byte_5933337 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&ContinueDeviceDispMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_ContinueDeviceComponent_onDispCode__);
    sub_21FFC50(&Method_ContinueDeviceComponent_onNextRetryOpen__);
    byte_5933337 = 1;
  }
  if ( isDecide )
  {
    continueDeviceDispMenu = this->fields.continueDeviceDispMenu;
    v6 = System_Action_TypeInfo;
    *(_QWORD *)&this->fields.state = 0x200000000LL;
    v7 = (System_Action_o *)sub_21FFEBC(v6);
    System_Action___ctor(v7, (Il2CppObject *)this, Method_ContinueDeviceComponent_onNextRetryOpen__, 0);
    if ( continueDeviceDispMenu )
    {
      ContinueDeviceDispMenu__Close_39757196(continueDeviceDispMenu, v7, v9);
      continueDeviceConfirmDialog = this->fields.continueDeviceConfirmDialog;
      v11 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_ContinueDeviceComponent_onNextRetryOpen__, 0);
      if ( continueDeviceConfirmDialog )
      {
        CommonConfirmDialog__Close_37269428(continueDeviceConfirmDialog, v11, 0);
        return;
      }
    }
LABEL_10:
    sub_21FFECC(v8, isDecide);
  }
  v8 = this->fields.continueDeviceConfirmDialog;
  this->fields.state = 4;
  if ( !v8 )
    goto LABEL_10;
  CommonConfirmDialog__Close(v8, 0);
  v12 = this->fields.continueDeviceDispMenu;
  continueCode = this->fields.continueCode;
  v14 = (ContinueDeviceDispMenu_CallbackFunc_o *)sub_21FFEBC(ContinueDeviceDispMenu_CallbackFunc_TypeInfo);
  ContinueDeviceDispMenu_CallbackFunc___ctor(
    v14,
    (Il2CppObject *)this,
    Method_ContinueDeviceComponent_onDispCode__,
    v15);
  if ( !v12 )
    goto LABEL_10;
  ContinueDeviceDispMenu__Open(v12, continueCode, v14, v16);
}


// local variable allocation has failed, the output may be wrong!
void ContinueDeviceComponent__onDispCode(ContinueDeviceComponent_o *this, bool isDecide, const MethodInfo *method)
{
  LocalizationManager_c *v5; // x0
  CommonConfirmDialog_o *continueDeviceConfirmDialog; // x20
  System_String_o *v7; // x21
  CommonConfirmDialog_ClickDelegate_o *v8; // x22
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_5933336 & 1) == 0 )
  {
    sub_21FFC50(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&Method_ContinueDeviceComponent_onConfirmRetry__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_3943/*"CONTINUE_DEVICE_CONFIRM_MESSAGE2"*/);
    sub_21FFC50(&StringLiteral_3641/*"CLOSE_CONTINUE_DEVICE"*/);
    byte_5933336 = 1;
  }
  if ( isDecide )
  {
    v5 = LocalizationManager_TypeInfo;
    continueDeviceConfirmDialog = this->fields.continueDeviceConfirmDialog;
    this->fields.state = 2;
    if ( !*(&v5->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v5, isDecide, method);
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_3943/*"CONTINUE_DEVICE_CONFIRM_MESSAGE2"*/, 0);
    v8 = (CommonConfirmDialog_ClickDelegate_o *)sub_21FFEBC(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v8,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_onConfirmRetry__,
      0);
    if ( continueDeviceConfirmDialog )
    {
      CommonConfirmDialog__Open(continueDeviceConfirmDialog, 0, v7, v8, 0, 0, 0, 0);
      return;
    }
LABEL_10:
    sub_21FFECC(myRoomFsm, isDecide);
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_10;
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3641/*"CLOSE_CONTINUE_DEVICE"*/, 0);
}


void ContinueDeviceComponent__onInputCode(
        ContinueDeviceComponent_o *this,
        System_String_o *code,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  NetworkManager_ResultCallbackFunc_c *v10; // x0
  NetworkManager_ResultCallbackFunc_o *v11; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  ContinuePrepareRequest_o *Request_object; // x0

  if ( (byte_5933332 & 1) == 0 )
  {
    sub_21FFC50(&Method_ContinueDeviceComponent_callbackCodeInput__);
    sub_21FFC50(&Method_NetworkManager_getRequest_ContinuePrepareRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&StringLiteral_3641/*"CLOSE_CONTINUE_DEVICE"*/);
    byte_5933332 = 1;
  }
  if ( code )
  {
    this->fields.passwardCode = code;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.passwardCode,
      (int32_t)code,
      (System_String_o *)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    v10 = NetworkManager_ResultCallbackFunc_TypeInfo;
    this->fields.state = 3;
    v11 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(v10);
    NetworkManager_ResultCallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_callbackCodeInput__,
      0);
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v12, v13);
    Request_object = (ContinuePrepareRequest_o *)NetworkManager__getRequest_object_(
                                                   v11,
                                                   (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_ContinuePrepareRequest___);
    if ( Request_object )
    {
      ContinuePrepareRequest__beginRequest(Request_object, this->fields.passwardCode, 0);
      Request_object = (ContinuePrepareRequest_o *)this->fields.myRoomCtrl;
      if ( Request_object )
      {
        MyRoomControl__SetBackButtonIgnore((MyRoomControl_o *)Request_object, 1, 0);
        return;
      }
    }
LABEL_11:
    sub_21FFECC(Request_object, code);
  }
  Request_object = (ContinuePrepareRequest_o *)this->fields.myRoomFsm;
  if ( !Request_object )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_3641/*"CLOSE_CONTINUE_DEVICE"*/, 0);
}


void ContinueDeviceComponent__onNextDispOpen(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  int32_t v3; // w8
  ContinueDeviceDispMenu_o *continueDeviceDispMenu; // x20
  System_String_o *continueCode; // x21
  ContinueDeviceDispMenu_CallbackFunc_o *v6; // x22
  const MethodInfo *v7; // x3
  MyRoomControl_o *myRoomCtrl; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3

  if ( (byte_5933335 & 1) == 0 )
  {
    sub_21FFC50(&ContinueDeviceDispMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_ContinueDeviceComponent_onDispCode__);
    byte_5933335 = 1;
  }
  v3 = this->fields.closeCount - 1;
  this->fields.closeCount = v3;
  if ( !v3 )
  {
    continueDeviceDispMenu = this->fields.continueDeviceDispMenu;
    continueCode = this->fields.continueCode;
    this->fields.state = 4;
    v6 = (ContinueDeviceDispMenu_CallbackFunc_o *)sub_21FFEBC(ContinueDeviceDispMenu_CallbackFunc_TypeInfo);
    ContinueDeviceDispMenu_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_onDispCode__,
      v7);
    if ( !continueDeviceDispMenu
      || (ContinueDeviceDispMenu__Open(continueDeviceDispMenu, continueCode, v6, v10),
          (myRoomCtrl = this->fields.myRoomCtrl) == 0) )
    {
      sub_21FFECC(myRoomCtrl, v9);
    }
    MyRoomControl__SetBackButtonIgnore(myRoomCtrl, 0, 0);
  }
}


void ContinueDeviceComponent__onNextRetryOpen(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t v9; // w8
  int32_t v10; // w1
  int32_t v11; // w1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  ContinueDeviceInputMenu_CallbackFunc_o *v19; // x21
  const MethodInfo *v20; // x3
  __int64 v21; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2

  if ( (byte_5933338 & 1) == 0 )
  {
    sub_21FFC50(&ContinueDeviceInputMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_ContinueDeviceComponent_onInputCode__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5933338 = 1;
  }
  v9 = this->fields.closeCount - 1;
  this->fields.closeCount = v9;
  if ( !v9 )
  {
    this->fields.state = 1;
    v10 = (int)StringLiteral_1/*""*/;
    this->fields.passwardCode = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.passwardCode, v10, v2, v3, v4, v5, v6, v7);
    v11 = (int)StringLiteral_1/*""*/;
    this->fields.continueCode = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.continueCode, v11, v12, v13, v14, v15, v16, v17);
    continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
    v19 = (ContinueDeviceInputMenu_CallbackFunc_o *)sub_21FFEBC(ContinueDeviceInputMenu_CallbackFunc_TypeInfo);
    ContinueDeviceInputMenu_CallbackFunc___ctor(
      v19,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_onInputCode__,
      v20);
    if ( !continueDeviceInputMenu )
      sub_21FFECC(v21, v22);
    ContinueDeviceInputMenu__Open(continueDeviceInputMenu, v19, v23);
  }
}


bool ContinueDeviceComponent__openMenu(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *MasterData_object; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  struct System_String_o *v13; // x1
  int32_t v14; // w1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  ContinueDeviceInputMenu_CallbackFunc_o *v22; // x21
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x2
  int32_t v26; // w1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  Il2CppClass *klass; // x1
  ContinueDeviceDispMenu_o *continueDeviceDispMenu; // x20
  System_String_o *continueCode; // x21
  ContinueDeviceDispMenu_CallbackFunc_o *v36; // x22
  const MethodInfo *v37; // x3
  const MethodInfo *v38; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_593332F & 1) == 0 )
  {
    sub_21FFC50(&ContinueDeviceInputMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&ContinueDeviceDispMenu_CallbackFunc_TypeInfo);
    sub_21FFC50(&Method_ContinueDeviceComponent_onDispCode__);
    sub_21FFC50(&Method_ContinueDeviceComponent_onInputCode__);
    sub_21FFC50(&Method_DataManager_GetMasterData_UserContinueMaster___);
    sub_21FFC50(&Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long__TryGetEntity__);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593332F = 1;
  }
  entity = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)gameObject,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_UserContinueMaster___);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
  if ( !byte_5931D52 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    byte_5931D52 = 1;
  }
  gameObject = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
    gameObject = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_21;
  gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__long___TryGetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                             &entity,
                                             *(_QWORD *)(gameObject[7].fields.m_CachedPtr + 64),
                                             (const MethodInfo_3EDFA34 *)Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_21;
    if ( !LODWORD(entity[1].monitor) )
    {
      v26 = (int)StringLiteral_1/*""*/;
      this->fields.passwardCode = (struct System_String_o *)StringLiteral_1/*""*/;
      this->fields.state = 4;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.passwardCode, v26, v7, v8, v9, v10, v11, v12);
      if ( entity )
      {
        klass = entity[2].klass;
        this->fields.continueCode = (struct System_String_o *)klass;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.continueCode,
          (int32_t)klass,
          v27,
          v28,
          v29,
          v30,
          v31,
          v32);
        continueDeviceDispMenu = this->fields.continueDeviceDispMenu;
        continueCode = this->fields.continueCode;
        v36 = (ContinueDeviceDispMenu_CallbackFunc_o *)sub_21FFEBC(ContinueDeviceDispMenu_CallbackFunc_TypeInfo);
        ContinueDeviceDispMenu_CallbackFunc___ctor(
          v36,
          (Il2CppObject *)this,
          Method_ContinueDeviceComponent_onDispCode__,
          v37);
        if ( continueDeviceDispMenu )
        {
          ContinueDeviceDispMenu__Open(continueDeviceDispMenu, continueCode, v36, v38);
          return 1;
        }
      }
LABEL_21:
      sub_21FFECC(gameObject, v4);
    }
  }
  v13 = (struct System_String_o *)StringLiteral_1/*""*/;
  this->fields.state = 1;
  this->fields.passwardCode = v13;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.passwardCode, (int32_t)v13, v7, v8, v9, v10, v11, v12);
  v14 = (int)StringLiteral_1/*""*/;
  this->fields.continueCode = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.continueCode, v14, v15, v16, v17, v18, v19, v20);
  continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
  v22 = (ContinueDeviceInputMenu_CallbackFunc_o *)sub_21FFEBC(ContinueDeviceInputMenu_CallbackFunc_TypeInfo);
  ContinueDeviceInputMenu_CallbackFunc___ctor(
    v22,
    (Il2CppObject *)this,
    Method_ContinueDeviceComponent_onInputCode__,
    v23);
  if ( !continueDeviceInputMenu )
    goto LABEL_21;
  ContinueDeviceInputMenu__Open(continueDeviceInputMenu, v22, v24);
  return 1;
}


void ContinueDeviceComponent__showMenu(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0),
        gameObject = (UnityEngine_GameObject_o *)this->fields.continueDeviceInputMenu,
        this->fields.state = 0,
        !gameObject)
    || (ContinueDeviceInputMenu__Init((ContinueDeviceInputMenu_o *)gameObject, v4),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.continueDeviceDispMenu) == 0)
    || (ContinueDeviceDispMenu__Init((ContinueDeviceDispMenu_o *)gameObject, v4),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.continueDeviceConfirmDialog) == 0) )
  {
    sub_21FFECC(gameObject, v4);
  }
  CommonConfirmDialog__Init((CommonConfirmDialog_o *)gameObject, 0);
}