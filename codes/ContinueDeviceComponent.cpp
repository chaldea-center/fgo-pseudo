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
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  Il2CppClass *klass; // x1
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  System_Action_o *v15; // x21
  const MethodInfo *v16; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CE944B & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_ContinueDeviceComponent_onNextDispOpen__);
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserContinueMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    sub_1C7BAE8(&Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long__TryGetSingleEntity__);
    sub_1C7BAE8(&StringLiteral_22419/*"ng"*/);
    byte_4CE944B = 1;
  }
  entity = 0;
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22419/*"ng"*/, 0) )
    goto LABEL_10;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserContinueMaster___);
  if ( !Master_object )
    goto LABEL_15;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___TryGetSingleEntity(
                                                                  Master_object,
                                                                  &entity,
                                                                  (const MethodInfo_3430984 *)Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long__TryGetSingleEntity__);
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
    sub_1C7BD40(Master_object, v5);
  }
  klass = entity[2].klass;
  this->fields.continueCode = (struct System_String_o *)klass;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.continueCode, (int32_t)klass, v7, v8, v9, v10, v11, v12);
  continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
  *(_QWORD *)&this->fields.state = 0x100000000LL;
  v15 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ContinueDeviceComponent_onNextDispOpen__, 0);
  if ( !continueDeviceInputMenu )
    goto LABEL_15;
  ContinueDeviceInputMenu__Close_33463712(continueDeviceInputMenu, v15, v16);
}


bool ContinueDeviceComponent__closeMenu(ContinueDeviceComponent_o *this, const MethodInfo *method)
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

  if ( (byte_4CE9447 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_ContinueDeviceComponent_onClose__);
    byte_4CE9447 = 1;
  }
  switch ( this->fields.state )
  {
    case 1:
      this->fields.closeCount = 1;
      continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
      v4 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(v4, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0);
      if ( !continueDeviceInputMenu )
        goto LABEL_16;
      ContinueDeviceInputMenu__Close_33463712(continueDeviceInputMenu, v4, v7);
      return 1;
    case 2:
      this->fields.closeCount = 2;
      v8 = this->fields.continueDeviceInputMenu;
      v9 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0);
      if ( !v8 )
        goto LABEL_16;
      ContinueDeviceInputMenu__Close_33463712(v8, v9, v10);
      goto LABEL_13;
    case 4:
      this->fields.closeCount = 1;
      continueDeviceDispMenu = this->fields.continueDeviceDispMenu;
      v12 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0);
      if ( !continueDeviceDispMenu )
        goto LABEL_16;
      ContinueDeviceDispMenu__Close_33464028(continueDeviceDispMenu, v12, v13);
      return 1;
    case 5:
      this->fields.closeCount = 2;
      v14 = this->fields.continueDeviceDispMenu;
      v15 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0);
      if ( !v14 )
        goto LABEL_16;
      ContinueDeviceDispMenu__Close_33464028(v14, v15, v16);
LABEL_13:
      continueDeviceConfirmDialog = this->fields.continueDeviceConfirmDialog;
      v18 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0);
      if ( !continueDeviceConfirmDialog )
LABEL_16:
        sub_1C7BD40(v5, v6);
      CommonConfirmDialog__Close_31459892(continueDeviceConfirmDialog, v18, 0);
      return 1;
    default:
      this->fields.closeCount = 0;
      ContinueDeviceComponent__onClose(this, method);
      return 1;
  }
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
    sub_1C7BD40(continueDeviceInputMenu, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)continueDeviceInputMenu, 0, 0);
}


void ContinueDeviceComponent__onClose(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  int32_t v3; // w8
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4CE9448 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_3519/*"CLOSE_MENU"*/);
    byte_4CE9448 = 1;
  }
  v3 = this->fields.closeCount - 1;
  this->fields.closeCount = v3;
  if ( !v3 )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      sub_1C7BD40(0, method);
    PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3519/*"CLOSE_MENU"*/, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void ContinueDeviceComponent__onCloseDialog(ContinueDeviceComponent_o *this, bool result, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4CE9450 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_3523/*"CLOSE_SERIAL_CODE"*/);
    byte_4CE9450 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C7BD40(0, result);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3523/*"CLOSE_SERIAL_CODE"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void ContinueDeviceComponent__onCloseMenu(ContinueDeviceComponent_o *this, int32_t result, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4CE9451 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_3523/*"CLOSE_SERIAL_CODE"*/);
    byte_4CE9451 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C7BD40(0, *(_QWORD *)&result);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3523/*"CLOSE_SERIAL_CODE"*/, 0);
}


// local variable allocation has failed, the output may be wrong!
void ContinueDeviceComponent__onConfirmCode(ContinueDeviceComponent_o *this, bool isDecide, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  ContinuePrepareRequest_o *Request_object; // x0
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  ContinueDeviceInputMenu_CallbackFunc_o *v8; // x21
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_4CE944A & 1) == 0 )
  {
    sub_1C7BAE8(&ContinueDeviceInputMenu_CallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_ContinueDeviceComponent_callbackCodeInput__);
    sub_1C7BAE8(&Method_ContinueDeviceComponent_onInputCode__);
    sub_1C7BAE8(&Method_NetworkManager_getRequest_ContinuePrepareRequest___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4CE944A = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 3;
    v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C7BD34(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_callbackCodeInput__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (ContinuePrepareRequest_o *)NetworkManager__getRequest_object_(
                                                   v5,
                                                   (const MethodInfo_31FABE0 *)Method_NetworkManager_getRequest_ContinuePrepareRequest___);
    if ( Request_object )
    {
      ContinuePrepareRequest__beginRequest(Request_object, this->fields.passwardCode, 0);
      return;
    }
LABEL_11:
    sub_1C7BD40(Request_object, isDecide);
  }
  Request_object = (ContinuePrepareRequest_o *)this->fields.continueDeviceConfirmDialog;
  this->fields.state = 1;
  if ( !Request_object )
    goto LABEL_11;
  CommonConfirmDialog__Close((CommonConfirmDialog_o *)Request_object, 0);
  continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
  v8 = (ContinueDeviceInputMenu_CallbackFunc_o *)sub_1C7BD34(ContinueDeviceInputMenu_CallbackFunc_TypeInfo);
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
void ContinueDeviceComponent__onConfirmRetry(ContinueDeviceComponent_o *this, bool isDecide, const MethodInfo *method)
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

  if ( (byte_4CE944E & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&ContinueDeviceDispMenu_CallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_ContinueDeviceComponent_onDispCode__);
    sub_1C7BAE8(&Method_ContinueDeviceComponent_onNextRetryOpen__);
    byte_4CE944E = 1;
  }
  if ( isDecide )
  {
    *(_QWORD *)&this->fields.state = 0x200000000LL;
    continueDeviceDispMenu = this->fields.continueDeviceDispMenu;
    v6 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_ContinueDeviceComponent_onNextRetryOpen__, 0);
    if ( continueDeviceDispMenu )
    {
      ContinueDeviceDispMenu__Close_33464028(continueDeviceDispMenu, v6, v8);
      continueDeviceConfirmDialog = this->fields.continueDeviceConfirmDialog;
      v10 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_ContinueDeviceComponent_onNextRetryOpen__, 0);
      if ( continueDeviceConfirmDialog )
      {
        CommonConfirmDialog__Close_31459892(continueDeviceConfirmDialog, v10, 0);
        return;
      }
    }
LABEL_10:
    sub_1C7BD40(v7, isDecide);
  }
  v7 = this->fields.continueDeviceConfirmDialog;
  this->fields.state = 4;
  if ( !v7 )
    goto LABEL_10;
  CommonConfirmDialog__Close(v7, 0);
  v11 = this->fields.continueDeviceDispMenu;
  continueCode = this->fields.continueCode;
  v13 = (ContinueDeviceDispMenu_CallbackFunc_o *)sub_1C7BD34(ContinueDeviceDispMenu_CallbackFunc_TypeInfo);
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
void ContinueDeviceComponent__onDispCode(ContinueDeviceComponent_o *this, bool isDecide, const MethodInfo *method)
{
  CommonConfirmDialog_o *continueDeviceConfirmDialog; // x20
  System_String_o *v6; // x21
  CommonConfirmDialog_ClickDelegate_o *v7; // x22
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4CE944D & 1) == 0 )
  {
    sub_1C7BAE8(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C7BAE8(&Method_ContinueDeviceComponent_onConfirmRetry__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_3810/*"CONTINUE_DEVICE_CONFIRM_MESSAGE2"*/);
    sub_1C7BAE8(&StringLiteral_3509/*"CLOSE_CONTINUE_DEVICE"*/);
    byte_4CE944D = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 2;
    continueDeviceConfirmDialog = this->fields.continueDeviceConfirmDialog;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3810/*"CONTINUE_DEVICE_CONFIRM_MESSAGE2"*/, 0);
    v7 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C7BD34(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v7,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_onConfirmRetry__,
      0);
    if ( continueDeviceConfirmDialog )
    {
      CommonConfirmDialog__Open(continueDeviceConfirmDialog, 0, v6, v7, 0, 0, 0, 0);
      return;
    }
LABEL_10:
    sub_1C7BD40(myRoomFsm, isDecide);
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_10;
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3509/*"CLOSE_CONTINUE_DEVICE"*/, 0);
}


void ContinueDeviceComponent__onInputCode(
        ContinueDeviceComponent_o *this,
        System_String_o *code,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  NetworkManager_ResultCallbackFunc_o *v10; // x20
  ContinuePrepareRequest_o *Request_object; // x0

  if ( (byte_4CE9449 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_ContinueDeviceComponent_callbackCodeInput__);
    sub_1C7BAE8(&Method_NetworkManager_getRequest_ContinuePrepareRequest___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C7BAE8(&StringLiteral_3509/*"CLOSE_CONTINUE_DEVICE"*/);
    byte_4CE9449 = 1;
  }
  if ( code )
  {
    this->fields.passwardCode = code;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.passwardCode,
      (int32_t)code,
      (int32_t)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.state = 3;
    v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1C7BD34(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_callbackCodeInput__,
      0);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Request_object = (ContinuePrepareRequest_o *)NetworkManager__getRequest_object_(
                                                   v10,
                                                   (const MethodInfo_31FABE0 *)Method_NetworkManager_getRequest_ContinuePrepareRequest___);
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
    sub_1C7BD40(Request_object, code);
  }
  Request_object = (ContinuePrepareRequest_o *)this->fields.myRoomFsm;
  if ( !Request_object )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_3509/*"CLOSE_CONTINUE_DEVICE"*/, 0);
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

  if ( (byte_4CE944C & 1) == 0 )
  {
    sub_1C7BAE8(&ContinueDeviceDispMenu_CallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_ContinueDeviceComponent_onDispCode__);
    byte_4CE944C = 1;
  }
  v3 = this->fields.closeCount - 1;
  this->fields.closeCount = v3;
  if ( !v3 )
  {
    this->fields.state = 4;
    continueDeviceDispMenu = this->fields.continueDeviceDispMenu;
    continueCode = this->fields.continueCode;
    v6 = (ContinueDeviceDispMenu_CallbackFunc_o *)sub_1C7BD34(ContinueDeviceDispMenu_CallbackFunc_TypeInfo);
    ContinueDeviceDispMenu_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_onDispCode__,
      v7);
    if ( !continueDeviceDispMenu
      || (ContinueDeviceDispMenu__Open(continueDeviceDispMenu, continueCode, v6, v10),
          (myRoomCtrl = this->fields.myRoomCtrl) == 0) )
    {
      sub_1C7BD40(myRoomCtrl, v9);
    }
    MyRoomControl__SetBackButtonIgnore(myRoomCtrl, 0, 0);
  }
}


void ContinueDeviceComponent__onNextRetryOpen(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t v9; // w8
  int32_t v10; // w1
  int32_t v11; // w1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  ContinueDeviceInputMenu_CallbackFunc_o *v19; // x21
  const MethodInfo *v20; // x3
  __int64 v21; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2

  if ( (byte_4CE944F & 1) == 0 )
  {
    sub_1C7BAE8(&ContinueDeviceInputMenu_CallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_ContinueDeviceComponent_onInputCode__);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CE944F = 1;
  }
  v9 = this->fields.closeCount - 1;
  this->fields.closeCount = v9;
  if ( !v9 )
  {
    this->fields.state = 1;
    v10 = StringLiteral_1/*""*/;
    this->fields.passwardCode = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.passwardCode, v10, v2, v3, v4, v5, v6, v7);
    v11 = StringLiteral_1/*""*/;
    this->fields.continueCode = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.continueCode, v11, v12, v13, v14, v15, v16, v17);
    continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
    v19 = (ContinueDeviceInputMenu_CallbackFunc_o *)sub_1C7BD34(ContinueDeviceInputMenu_CallbackFunc_TypeInfo);
    ContinueDeviceInputMenu_CallbackFunc___ctor(
      v19,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_onInputCode__,
      v20);
    if ( !continueDeviceInputMenu )
      sub_1C7BD40(v21, v22);
    ContinueDeviceInputMenu__Open(continueDeviceInputMenu, v19, v23);
  }
}


bool ContinueDeviceComponent__openMenu(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w1
  int32_t v13; // w1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  ContinueDeviceInputMenu_CallbackFunc_o *v21; // x21
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x2
  int32_t v25; // w1
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  Il2CppClass *klass; // x1
  ContinueDeviceDispMenu_o *continueDeviceDispMenu; // x20
  System_String_o *continueCode; // x21
  ContinueDeviceDispMenu_CallbackFunc_o *v35; // x22
  const MethodInfo *v36; // x3
  const MethodInfo *v37; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CE9446 & 1) == 0 )
  {
    sub_1C7BAE8(&ContinueDeviceInputMenu_CallbackFunc_TypeInfo);
    sub_1C7BAE8(&ContinueDeviceDispMenu_CallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_ContinueDeviceComponent_onDispCode__);
    sub_1C7BAE8(&Method_ContinueDeviceComponent_onInputCode__);
    sub_1C7BAE8(&Method_DataManager_GetMasterData_UserContinueMaster___);
    sub_1C7BAE8(&Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long__TryGetEntity__);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CE9446 = 1;
  }
  entity = 0;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_21;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  gameObject = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_21;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)gameObject,
                        (const MethodInfo_31703F4 *)Method_DataManager_GetMasterData_UserContinueMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CE827C )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    byte_4CE827C = 1;
  }
  gameObject = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)NetworkManager_TypeInfo;
  }
  if ( !MasterData_object )
    goto LABEL_21;
  gameObject = (UnityEngine_GameObject_o *)DataMasterBase_object__object__long___TryGetEntity(
                                             (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                             &entity,
                                             *(_QWORD *)(gameObject[7].fields.m_CachedPtr + 64),
                                             (const MethodInfo_34308A4 *)Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long__TryGetEntity__);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_21;
    if ( !LODWORD(entity[1].monitor) )
    {
      this->fields.state = 4;
      v25 = StringLiteral_1/*""*/;
      this->fields.passwardCode = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.passwardCode, v25, v6, v7, v8, v9, v10, v11);
      if ( entity )
      {
        klass = entity[2].klass;
        this->fields.continueCode = (struct System_String_o *)klass;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&this->fields.continueCode,
          (int32_t)klass,
          v26,
          v27,
          v28,
          v29,
          v30,
          v31);
        continueDeviceDispMenu = this->fields.continueDeviceDispMenu;
        continueCode = this->fields.continueCode;
        v35 = (ContinueDeviceDispMenu_CallbackFunc_o *)sub_1C7BD34(ContinueDeviceDispMenu_CallbackFunc_TypeInfo);
        ContinueDeviceDispMenu_CallbackFunc___ctor(
          v35,
          (Il2CppObject *)this,
          Method_ContinueDeviceComponent_onDispCode__,
          v36);
        if ( continueDeviceDispMenu )
        {
          ContinueDeviceDispMenu__Open(continueDeviceDispMenu, continueCode, v35, v37);
          return 1;
        }
      }
LABEL_21:
      sub_1C7BD40(gameObject, v4);
    }
  }
  this->fields.state = 1;
  v12 = StringLiteral_1/*""*/;
  this->fields.passwardCode = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.passwardCode, v12, v6, v7, v8, v9, v10, v11);
  v13 = StringLiteral_1/*""*/;
  this->fields.continueCode = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.continueCode, v13, v14, v15, v16, v17, v18, v19);
  continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
  v21 = (ContinueDeviceInputMenu_CallbackFunc_o *)sub_1C7BD34(ContinueDeviceInputMenu_CallbackFunc_TypeInfo);
  ContinueDeviceInputMenu_CallbackFunc___ctor(
    v21,
    (Il2CppObject *)this,
    Method_ContinueDeviceComponent_onInputCode__,
    v22);
  if ( !continueDeviceInputMenu )
    goto LABEL_21;
  ContinueDeviceInputMenu__Open(continueDeviceInputMenu, v21, v23);
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
    sub_1C7BD40(gameObject, v4);
  }
  CommonConfirmDialog__Init((CommonConfirmDialog_o *)gameObject, 0);
}