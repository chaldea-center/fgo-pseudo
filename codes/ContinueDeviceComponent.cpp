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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  Il2CppClass *klass; // x1
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  System_Action_o *v22; // x21
  const MethodInfo *v23; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B11584 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, result, method);
    sub_1BCA7E0(&Method_ContinueDeviceComponent_onNextDispOpen__, v5, v6);
    sub_1BCA7E0(&Method_DataManager_GetMaster_UserContinueMaster___, v7, v8);
    sub_1BCA7E0(&DataManager_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long__TryGetSingleEntity__, v11, v12);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v13, v14);
    byte_4B11584 = 1;
  }
  entity = 0LL;
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_22292/*"ng"*/, 0LL) )
    goto LABEL_10;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v15);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_UserContinueMaster___);
  if ( !Master_object )
    goto LABEL_15;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataMasterBase_object__object__long___TryGetSingleEntity(
                                                                  Master_object,
                                                                  &entity,
                                                                  (const MethodInfo_31B30C8 *)Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long__TryGetSingleEntity__);
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
    sub_1BCAA3C(Master_object, v15);
  }
  klass = entity[2].klass;
  this->fields.continueCode = (struct System_String_o *)klass;
  sub_1BCA784(&this->fields.continueCode, klass);
  continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
  *(_QWORD *)&this->fields.state = 0x100000000LL;
  v22 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v19, v20, v21);
  System_Action___ctor(v22, (Il2CppObject *)this, Method_ContinueDeviceComponent_onNextDispOpen__, 0LL);
  if ( !continueDeviceInputMenu )
    goto LABEL_15;
  ContinueDeviceInputMenu__Close_31592096(continueDeviceInputMenu, v22, v23);
}


bool __fastcall ContinueDeviceComponent__closeMenu(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  System_Action_o *v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  ContinueDeviceInputMenu_o *v12; // x20
  System_Action_o *v13; // x21
  const MethodInfo *v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  ContinueDeviceDispMenu_o *continueDeviceDispMenu; // x20
  System_Action_o *v19; // x21
  const MethodInfo *v20; // x2
  ContinueDeviceDispMenu_o *v21; // x20
  System_Action_o *v22; // x21
  const MethodInfo *v23; // x2
  CommonConfirmDialog_o *continueDeviceConfirmDialog; // x20
  System_Action_o *v25; // x21

  if ( (byte_4B11580 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ContinueDeviceComponent_onClose__, v5, v6);
    byte_4B11580 = 1;
  }
  switch ( this->fields.state )
  {
    case 1:
      this->fields.closeCount = 1;
      continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
      v8 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0LL);
      if ( !continueDeviceInputMenu )
        goto LABEL_16;
      ContinueDeviceInputMenu__Close_31592096(continueDeviceInputMenu, v8, v11);
      return 1;
    case 2:
      this->fields.closeCount = 2;
      v12 = this->fields.continueDeviceInputMenu;
      v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0LL);
      if ( !v12 )
        goto LABEL_16;
      ContinueDeviceInputMenu__Close_31592096(v12, v13, v14);
      goto LABEL_13;
    case 4:
      this->fields.closeCount = 1;
      continueDeviceDispMenu = this->fields.continueDeviceDispMenu;
      v19 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0LL);
      if ( !continueDeviceDispMenu )
        goto LABEL_16;
      ContinueDeviceDispMenu__Close_31592412(continueDeviceDispMenu, v19, v20);
      return 1;
    case 5:
      this->fields.closeCount = 2;
      v21 = this->fields.continueDeviceDispMenu;
      v22 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
      System_Action___ctor(v22, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0LL);
      if ( !v21 )
        goto LABEL_16;
      ContinueDeviceDispMenu__Close_31592412(v21, v22, v23);
LABEL_13:
      continueDeviceConfirmDialog = this->fields.continueDeviceConfirmDialog;
      v25 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v15, v16, v17);
      System_Action___ctor(v25, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0LL);
      if ( !continueDeviceConfirmDialog )
LABEL_16:
        sub_1BCAA3C(v9, v10);
      CommonConfirmDialog__Close_30742760(continueDeviceConfirmDialog, v25, 0LL);
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
    sub_1BCAA3C(continueDeviceInputMenu, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)continueDeviceInputMenu, 0, 0LL);
}


void __fastcall ContinueDeviceComponent__onClose(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t v4; // w8
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4B11581 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3623/*"CLOSE_MENU"*/, method, v2);
    byte_4B11581 = 1;
  }
  v4 = this->fields.closeCount - 1;
  this->fields.closeCount = v4;
  if ( !v4 )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      sub_1BCAA3C(0LL, method);
    PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3623/*"CLOSE_MENU"*/, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ContinueDeviceComponent__onCloseDialog(
        ContinueDeviceComponent_o *this,
        bool result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4B11589 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3627/*"CLOSE_SERIAL_CODE"*/, result, method);
    byte_4B11589 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1BCAA3C(0LL, result);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3627/*"CLOSE_SERIAL_CODE"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ContinueDeviceComponent__onCloseMenu(
        ContinueDeviceComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  CommonUI_o *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B1158A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, *(_QWORD *)&result, method);
    sub_1BCA7E0(&StringLiteral_3627/*"CLOSE_SERIAL_CODE"*/, v4, v5);
    byte_4B1158A = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ClosePresentBoxNotificationMenu(Instance, 0LL),
        (Instance = (CommonUI_o *)this->fields.myRoomFsm) == 0LL) )
  {
    sub_1BCAA3C(Instance, v7);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3627/*"CLOSE_SERIAL_CODE"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ContinueDeviceComponent__onConfirmCode(
        ContinueDeviceComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  NetworkManager_ResultCallbackFunc_o *v16; // x20
  __int64 v17; // x1
  ContinuePrepareRequest_o *Request_object; // x0
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  ContinueDeviceInputMenu_CallbackFunc_o *v23; // x21
  const MethodInfo *v24; // x3
  const MethodInfo *v25; // x2

  if ( (byte_4B11583 & 1) == 0 )
  {
    sub_1BCA7E0(&ContinueDeviceInputMenu_CallbackFunc_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_ContinueDeviceComponent_callbackCodeInput__, v6, v7);
    sub_1BCA7E0(&Method_ContinueDeviceComponent_onInputCode__, v8, v9);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_ContinuePrepareRequest___, v10, v11);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v14, v15);
    byte_4B11583 = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 3;
    v16 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   isDecide,
                                                   method,
                                                   v3);
    NetworkManager_ResultCallbackFunc___ctor(
      v16,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_callbackCodeInput__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17);
    Request_object = (ContinuePrepareRequest_o *)NetworkManager__getRequest_object_(
                                                   v16,
                                                   (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_ContinuePrepareRequest___);
    if ( Request_object )
    {
      ContinuePrepareRequest__beginRequest(Request_object, this->fields.passwardCode, 0LL);
      return;
    }
LABEL_11:
    sub_1BCAA3C(Request_object, isDecide);
  }
  Request_object = (ContinuePrepareRequest_o *)this->fields.continueDeviceConfirmDialog;
  this->fields.state = 1;
  if ( !Request_object )
    goto LABEL_11;
  CommonConfirmDialog__Close((CommonConfirmDialog_o *)Request_object, 0LL);
  continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
  v23 = (ContinueDeviceInputMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                    ContinueDeviceInputMenu_CallbackFunc_TypeInfo,
                                                    v20,
                                                    v21,
                                                    v22);
  ContinueDeviceInputMenu_CallbackFunc___ctor(
    v23,
    (Il2CppObject *)this,
    Method_ContinueDeviceComponent_onInputCode__,
    v24);
  if ( !continueDeviceInputMenu )
    goto LABEL_11;
  ContinueDeviceInputMenu__Open(continueDeviceInputMenu, v23, v25);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ContinueDeviceComponent__onConfirmRetry(
        ContinueDeviceComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  ContinueDeviceDispMenu_o *continueDeviceDispMenu; // x20
  System_Action_o *v13; // x21
  CommonConfirmDialog_o *v14; // x0
  const MethodInfo *v15; // x2
  CommonConfirmDialog_o *continueDeviceConfirmDialog; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Action_o *v20; // x21
  ContinueDeviceDispMenu_o *v21; // x20
  System_String_o *continueCode; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  ContinueDeviceDispMenu_CallbackFunc_o *v26; // x22
  const MethodInfo *v27; // x3
  const MethodInfo *v28; // x3

  if ( (byte_4B11587 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&ContinueDeviceDispMenu_CallbackFunc_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_ContinueDeviceComponent_onDispCode__, v8, v9);
    sub_1BCA7E0(&Method_ContinueDeviceComponent_onNextRetryOpen__, v10, v11);
    byte_4B11587 = 1;
  }
  if ( isDecide )
  {
    *(_QWORD *)&this->fields.state = 0x200000000LL;
    continueDeviceDispMenu = this->fields.continueDeviceDispMenu;
    v13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, isDecide, method, v3);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_ContinueDeviceComponent_onNextRetryOpen__, 0LL);
    if ( continueDeviceDispMenu )
    {
      ContinueDeviceDispMenu__Close_31592412(continueDeviceDispMenu, v13, v15);
      continueDeviceConfirmDialog = this->fields.continueDeviceConfirmDialog;
      v20 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v17, v18, v19);
      System_Action___ctor(v20, (Il2CppObject *)this, Method_ContinueDeviceComponent_onNextRetryOpen__, 0LL);
      if ( continueDeviceConfirmDialog )
      {
        CommonConfirmDialog__Close_30742760(continueDeviceConfirmDialog, v20, 0LL);
        return;
      }
    }
LABEL_10:
    sub_1BCAA3C(v14, isDecide);
  }
  v14 = this->fields.continueDeviceConfirmDialog;
  this->fields.state = 4;
  if ( !v14 )
    goto LABEL_10;
  CommonConfirmDialog__Close(v14, 0LL);
  v21 = this->fields.continueDeviceDispMenu;
  continueCode = this->fields.continueCode;
  v26 = (ContinueDeviceDispMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                   ContinueDeviceDispMenu_CallbackFunc_TypeInfo,
                                                   v23,
                                                   v24,
                                                   v25);
  ContinueDeviceDispMenu_CallbackFunc___ctor(
    v26,
    (Il2CppObject *)this,
    Method_ContinueDeviceComponent_onDispCode__,
    v27);
  if ( !v21 )
    goto LABEL_10;
  ContinueDeviceDispMenu__Open(v21, continueCode, v26, v28);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ContinueDeviceComponent__onDispCode(
        ContinueDeviceComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  CommonConfirmDialog_o *continueDeviceConfirmDialog; // x20
  System_String_o *v14; // x21
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  CommonConfirmDialog_ClickDelegate_o *v18; // x22
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4B11586 & 1) == 0 )
  {
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_ContinueDeviceComponent_onConfirmRetry__, v5, v6);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&StringLiteral_3894/*"CONTINUE_DEVICE_CONFIRM_MESSAGE2"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_3615/*"CLOSE_CONTINUE_DEVICE"*/, v11, v12);
    byte_4B11586 = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 2;
    continueDeviceConfirmDialog = this->fields.continueDeviceConfirmDialog;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, isDecide);
    v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3894/*"CONTINUE_DEVICE_CONFIRM_MESSAGE2"*/, 0LL);
    v18 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(CommonConfirmDialog_ClickDelegate_TypeInfo, v15, v16, v17);
    CommonConfirmDialog_ClickDelegate___ctor(
      v18,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_onConfirmRetry__,
      0LL);
    if ( continueDeviceConfirmDialog )
    {
      CommonConfirmDialog__Open(continueDeviceConfirmDialog, 0LL, v14, v18, 0, 0, 0, 0LL);
      return;
    }
LABEL_10:
    sub_1BCAA3C(myRoomFsm, isDecide);
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_10;
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3615/*"CLOSE_CONTINUE_DEVICE"*/, 0LL);
}


void __fastcall ContinueDeviceComponent__onInputCode(
        ContinueDeviceComponent_o *this,
        System_String_o *code,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  NetworkManager_ResultCallbackFunc_o *v16; // x20
  __int64 v17; // x1
  ContinuePrepareRequest_o *Request_object; // x0

  if ( (byte_4B11582 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ContinueDeviceComponent_callbackCodeInput__, code, method);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_ContinuePrepareRequest___, v5, v6);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_3615/*"CLOSE_CONTINUE_DEVICE"*/, v11, v12);
    byte_4B11582 = 1;
  }
  if ( code )
  {
    this->fields.passwardCode = code;
    sub_1BCA784(&this->fields.passwardCode, code);
    this->fields.state = 3;
    v16 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(NetworkManager_ResultCallbackFunc_TypeInfo, v13, v14, v15);
    NetworkManager_ResultCallbackFunc___ctor(
      v16,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_callbackCodeInput__,
      0LL);
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17);
    Request_object = (ContinuePrepareRequest_o *)NetworkManager__getRequest_object_(
                                                   v16,
                                                   (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_ContinuePrepareRequest___);
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
    sub_1BCAA3C(Request_object, code);
  }
  Request_object = (ContinuePrepareRequest_o *)this->fields.myRoomFsm;
  if ( !Request_object )
    goto LABEL_11;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Request_object, (System_String_o *)StringLiteral_3615/*"CLOSE_CONTINUE_DEVICE"*/, 0LL);
}


void __fastcall ContinueDeviceComponent__onNextDispOpen(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  int32_t v7; // w8
  ContinueDeviceDispMenu_o *continueDeviceDispMenu; // x20
  System_String_o *continueCode; // x21
  ContinueDeviceDispMenu_CallbackFunc_o *v10; // x22
  const MethodInfo *v11; // x3
  MyRoomControl_o *myRoomCtrl; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3

  if ( (byte_4B11585 & 1) == 0 )
  {
    sub_1BCA7E0(&ContinueDeviceDispMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ContinueDeviceComponent_onDispCode__, v5, v6);
    byte_4B11585 = 1;
  }
  v7 = this->fields.closeCount - 1;
  this->fields.closeCount = v7;
  if ( !v7 )
  {
    this->fields.state = 4;
    continueDeviceDispMenu = this->fields.continueDeviceDispMenu;
    continueCode = this->fields.continueCode;
    v10 = (ContinueDeviceDispMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                     ContinueDeviceDispMenu_CallbackFunc_TypeInfo,
                                                     method,
                                                     v2,
                                                     v3);
    ContinueDeviceDispMenu_CallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_onDispCode__,
      v11);
    if ( !continueDeviceDispMenu
      || (ContinueDeviceDispMenu__Open(continueDeviceDispMenu, continueCode, v10, v14),
          (myRoomCtrl = this->fields.myRoomCtrl) == 0LL) )
    {
      sub_1BCAA3C(myRoomCtrl, v13);
    }
    MyRoomControl__SetBackButtonIgnore(myRoomCtrl, 0, 0LL);
  }
}


void __fastcall ContinueDeviceComponent__onNextRetryOpen(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  int32_t v8; // w8
  void *v9; // x1
  void *v10; // x1
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  ContinueDeviceInputMenu_CallbackFunc_o *v15; // x21
  const MethodInfo *v16; // x3
  __int64 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2

  if ( (byte_4B11588 & 1) == 0 )
  {
    sub_1BCA7E0(&ContinueDeviceInputMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_ContinueDeviceComponent_onInputCode__, v4, v5);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v6, v7);
    byte_4B11588 = 1;
  }
  v8 = this->fields.closeCount - 1;
  this->fields.closeCount = v8;
  if ( !v8 )
  {
    this->fields.state = 1;
    v9 = StringLiteral_1/*""*/;
    this->fields.passwardCode = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1BCA784(&this->fields.passwardCode, v9);
    v10 = StringLiteral_1/*""*/;
    this->fields.continueCode = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1BCA784(&this->fields.continueCode, v10);
    continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
    v15 = (ContinueDeviceInputMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                      ContinueDeviceInputMenu_CallbackFunc_TypeInfo,
                                                      v12,
                                                      v13,
                                                      v14);
    ContinueDeviceInputMenu_CallbackFunc___ctor(
      v15,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_onInputCode__,
      v16);
    if ( !continueDeviceInputMenu )
      sub_1BCAA3C(v17, v18);
    ContinueDeviceInputMenu__Open(continueDeviceInputMenu, v15, v19);
  }
}


bool __fastcall ContinueDeviceComponent__openMenu(ContinueDeviceComponent_o *this, const MethodInfo *method)
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
  __int64 gameObject; // x0
  __int64 v21; // x1
  __int64 v22; // x1
  Il2CppObject *MasterData_object; // x20
  void *v24; // x1
  void *v25; // x1
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  ContinueDeviceInputMenu_CallbackFunc_o *v30; // x21
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x2
  void *v34; // x1
  Il2CppClass *klass; // x1
  ContinueDeviceDispMenu_o *continueDeviceDispMenu; // x20
  System_String_o *continueCode; // x21
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  ContinueDeviceDispMenu_CallbackFunc_o *v41; // x22
  const MethodInfo *v42; // x3
  const MethodInfo *v43; // x3
  Il2CppObject *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B1157F & 1) == 0 )
  {
    sub_1BCA7E0(&ContinueDeviceInputMenu_CallbackFunc_TypeInfo, method, v2);
    sub_1BCA7E0(&ContinueDeviceDispMenu_CallbackFunc_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_ContinueDeviceComponent_onDispCode__, v6, v7);
    sub_1BCA7E0(&Method_ContinueDeviceComponent_onInputCode__, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMasterData_UserContinueMaster___, v10, v11);
    sub_1BCA7E0(&Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long__TryGetEntity__, v12, v13);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v16, v17);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v18, v19);
    byte_4B1157F = 1;
  }
  entity = 0LL;
  gameObject = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_17;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)gameObject,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_UserContinueMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v22);
  gameObject = NetworkManager__get_UserId(0LL);
  if ( !MasterData_object )
    goto LABEL_17;
  gameObject = DataMasterBase_object__object__long___TryGetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 &entity,
                 gameObject,
                 (const MethodInfo_31B3040 *)Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long__TryGetEntity__);
  if ( (gameObject & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_17;
    if ( !LODWORD(entity[1].monitor) )
    {
      this->fields.state = 4;
      v34 = StringLiteral_1/*""*/;
      this->fields.passwardCode = (struct System_String_o *)StringLiteral_1/*""*/;
      gameObject = sub_1BCA784(&this->fields.passwardCode, v34);
      if ( entity )
      {
        klass = entity[2].klass;
        this->fields.continueCode = (struct System_String_o *)klass;
        sub_1BCA784(&this->fields.continueCode, klass);
        continueDeviceDispMenu = this->fields.continueDeviceDispMenu;
        continueCode = this->fields.continueCode;
        v41 = (ContinueDeviceDispMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                         ContinueDeviceDispMenu_CallbackFunc_TypeInfo,
                                                         v38,
                                                         v39,
                                                         v40);
        ContinueDeviceDispMenu_CallbackFunc___ctor(
          v41,
          (Il2CppObject *)this,
          Method_ContinueDeviceComponent_onDispCode__,
          v42);
        if ( continueDeviceDispMenu )
        {
          ContinueDeviceDispMenu__Open(continueDeviceDispMenu, continueCode, v41, v43);
          return 1;
        }
      }
LABEL_17:
      sub_1BCAA3C(gameObject, v21);
    }
  }
  this->fields.state = 1;
  v24 = StringLiteral_1/*""*/;
  this->fields.passwardCode = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(&this->fields.passwardCode, v24);
  v25 = StringLiteral_1/*""*/;
  this->fields.continueCode = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784(&this->fields.continueCode, v25);
  continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
  v30 = (ContinueDeviceInputMenu_CallbackFunc_o *)sub_1BCAA2C(
                                                    ContinueDeviceInputMenu_CallbackFunc_TypeInfo,
                                                    v27,
                                                    v28,
                                                    v29);
  ContinueDeviceInputMenu_CallbackFunc___ctor(
    v30,
    (Il2CppObject *)this,
    Method_ContinueDeviceComponent_onInputCode__,
    v31);
  if ( !continueDeviceInputMenu )
    goto LABEL_17;
  ContinueDeviceInputMenu__Open(continueDeviceInputMenu, v30, v32);
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
    sub_1BCAA3C(gameObject, v4);
  }
  CommonConfirmDialog__Init((CommonConfirmDialog_o *)gameObject, 0LL);
}