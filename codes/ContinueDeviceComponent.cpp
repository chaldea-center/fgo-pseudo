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
  DataMasterBase_UserGameMaster__UserGameEntity__long__o *Master_WarQuestSelectionMaster; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  struct System_String_o *birthDay; // x1
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  System_Action_o *v15; // x21
  const MethodInfo *v16; // x2
  UserGameEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4353557 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_ContinueDeviceComponent_onNextDispOpen__);
    sub_B70694(&Method_DataManager_GetMaster_UserContinueMaster___);
    sub_B70694(&DataManager_TypeInfo);
    sub_B70694(&Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long__TryGetSingleEntity__);
    sub_B70694(&StringLiteral_21408/*"ng"*/);
    byte_4353557 = 1;
  }
  entity = 0LL;
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21408/*"ng"*/, 0LL) )
    goto LABEL_11;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserContinueMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_16;
  Master_WarQuestSelectionMaster = (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
                                                                                               Master_WarQuestSelectionMaster,
                                                                                               &entity,
                                                                                               (const MethodInfo_21C0750 *)Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long__TryGetSingleEntity__);
  if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
    goto LABEL_11;
  if ( !entity )
    goto LABEL_16;
  if ( LODWORD(entity->fields.name) )
  {
LABEL_11:
    Master_WarQuestSelectionMaster = (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)this->fields.continueDeviceConfirmDialog;
    if ( Master_WarQuestSelectionMaster )
    {
      CommonConfirmDialog__Close((CommonConfirmDialog_o *)Master_WarQuestSelectionMaster, 0LL);
      Master_WarQuestSelectionMaster = (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)this->fields.myRoomCtrl;
      if ( Master_WarQuestSelectionMaster )
      {
        MyRoomControl__SetBackButtonIgnore((MyRoomControl_o *)Master_WarQuestSelectionMaster, 0, 0LL);
        return;
      }
    }
LABEL_16:
    sub_B7076C(Master_WarQuestSelectionMaster, v5);
  }
  birthDay = (struct System_String_o *)entity->fields.birthDay;
  this->fields.continueCode = birthDay;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.continueCode,
    (System_Int32_array **)birthDay,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
  *(_QWORD *)&this->fields.state = 0x100000000LL;
  v15 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ContinueDeviceComponent_onNextDispOpen__, 0LL);
  if ( !continueDeviceInputMenu )
    goto LABEL_16;
  ContinueDeviceInputMenu__Close_28102304(continueDeviceInputMenu, v15, v16);
}


bool __fastcall ContinueDeviceComponent__closeMenu(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  ContinueDeviceDispMenu_o *continueDeviceDispMenu; // x20
  System_Action_o *v9; // x21
  const MethodInfo *v10; // x2
  ContinueDeviceInputMenu_o *v11; // x20
  System_Action_o *v12; // x21
  const MethodInfo *v13; // x2
  ContinueDeviceDispMenu_o *v14; // x20
  System_Action_o *v15; // x21
  const MethodInfo *v16; // x2
  CommonConfirmDialog_o *continueDeviceConfirmDialog; // x20
  System_Action_o *v18; // x21

  if ( (byte_4353553 & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&Method_ContinueDeviceComponent_onClose__);
    byte_4353553 = 1;
  }
  switch ( this->fields.state )
  {
    case 1:
      this->fields.closeCount = 1;
      continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
      v4 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v4, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0LL);
      if ( !continueDeviceInputMenu )
        goto LABEL_16;
      ContinueDeviceInputMenu__Close_28102304(continueDeviceInputMenu, v4, v7);
      return 1;
    case 2:
      this->fields.closeCount = 2;
      v11 = this->fields.continueDeviceInputMenu;
      v12 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v12, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0LL);
      if ( !v11 )
        goto LABEL_16;
      ContinueDeviceInputMenu__Close_28102304(v11, v12, v13);
      goto LABEL_12;
    case 4:
      this->fields.closeCount = 1;
      continueDeviceDispMenu = this->fields.continueDeviceDispMenu;
      v9 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0LL);
      if ( !continueDeviceDispMenu )
        goto LABEL_16;
      ContinueDeviceDispMenu__Close_28102624(continueDeviceDispMenu, v9, v10);
      return 1;
    case 5:
      this->fields.closeCount = 2;
      v14 = this->fields.continueDeviceDispMenu;
      v15 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0LL);
      if ( !v14 )
        goto LABEL_16;
      ContinueDeviceDispMenu__Close_28102624(v14, v15, v16);
LABEL_12:
      continueDeviceConfirmDialog = this->fields.continueDeviceConfirmDialog;
      v18 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0LL);
      if ( !continueDeviceConfirmDialog )
LABEL_16:
        sub_B7076C(v5, v6);
      CommonConfirmDialog__Close_17823424(continueDeviceConfirmDialog, v18, 0LL);
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
    sub_B7076C(continueDeviceInputMenu, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)continueDeviceInputMenu, 0, 0LL);
}


void __fastcall ContinueDeviceComponent__onClose(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  int32_t v3; // w8
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4353554 & 1) == 0 )
  {
    sub_B70694(&StringLiteral_3177/*"CLOSE_MENU"*/);
    byte_4353554 = 1;
  }
  v3 = this->fields.closeCount - 1;
  this->fields.closeCount = v3;
  if ( !v3 )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      sub_B7076C(0LL, method);
    PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3177/*"CLOSE_MENU"*/, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ContinueDeviceComponent__onCloseDialog(
        ContinueDeviceComponent_o *this,
        bool result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_435355C & 1) == 0 )
  {
    sub_B70694(&StringLiteral_3181/*"CLOSE_SERIAL_CODE"*/);
    byte_435355C = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B7076C(0LL, result);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3181/*"CLOSE_SERIAL_CODE"*/, 0LL);
}


void __fastcall ContinueDeviceComponent__onCloseMenu(
        ContinueDeviceComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_435355D & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B70694(&StringLiteral_3181/*"CLOSE_SERIAL_CODE"*/);
    byte_435355D = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ClosePresentBoxNotificationMenu(Instance, 0LL),
        (Instance = (CommonUI_o *)this->fields.myRoomFsm) == 0LL) )
  {
    sub_B7076C(Instance, v5);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3181/*"CLOSE_SERIAL_CODE"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ContinueDeviceComponent__onConfirmCode(
        ContinueDeviceComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v5; // x20
  ContinuePrepareRequest_o *Request_WarBoardWallAttackRequest; // x0
  const MethodInfo *v7; // x2
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  ContinueDeviceInputMenu_CallbackFunc_o *v9; // x21
  const MethodInfo *v10; // x2

  if ( (byte_4353556 & 1) == 0 )
  {
    sub_B70694(&ContinueDeviceInputMenu_CallbackFunc_TypeInfo);
    sub_B70694(&Method_ContinueDeviceComponent_callbackCodeInput__);
    sub_B70694(&Method_ContinueDeviceComponent_onInputCode__);
    sub_B70694(&Method_NetworkManager_getRequest_ContinuePrepareRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4353556 = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 3;
    v5 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v5,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_callbackCodeInput__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (ContinuePrepareRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v5,
                                                                      (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_ContinuePrepareRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      ContinuePrepareRequest__beginRequest(Request_WarBoardWallAttackRequest, this->fields.passwardCode, v7);
      return;
    }
LABEL_12:
    sub_B7076C(Request_WarBoardWallAttackRequest, isDecide);
  }
  Request_WarBoardWallAttackRequest = (ContinuePrepareRequest_o *)this->fields.continueDeviceConfirmDialog;
  this->fields.state = 1;
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_12;
  CommonConfirmDialog__Close((CommonConfirmDialog_o *)Request_WarBoardWallAttackRequest, 0LL);
  continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
  v9 = (ContinueDeviceInputMenu_CallbackFunc_o *)sub_B70764(ContinueDeviceInputMenu_CallbackFunc_TypeInfo);
  ContinueDeviceInputMenu_CallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_ContinueDeviceComponent_onInputCode__,
    0LL);
  if ( !continueDeviceInputMenu )
    goto LABEL_12;
  ContinueDeviceInputMenu__Open(continueDeviceInputMenu, v9, v10);
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

  if ( (byte_435355A & 1) == 0 )
  {
    sub_B70694(&System_Action_TypeInfo);
    sub_B70694(&ContinueDeviceDispMenu_CallbackFunc_TypeInfo);
    sub_B70694(&Method_ContinueDeviceComponent_onDispCode__);
    sub_B70694(&Method_ContinueDeviceComponent_onNextRetryOpen__);
    byte_435355A = 1;
  }
  if ( isDecide )
  {
    continueDeviceDispMenu = this->fields.continueDeviceDispMenu;
    *(_QWORD *)&this->fields.state = 0x200000000LL;
    v6 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_ContinueDeviceComponent_onNextRetryOpen__, 0LL);
    if ( continueDeviceDispMenu )
    {
      ContinueDeviceDispMenu__Close_28102624(continueDeviceDispMenu, v6, v8);
      continueDeviceConfirmDialog = this->fields.continueDeviceConfirmDialog;
      v10 = (System_Action_o *)sub_B70764(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_ContinueDeviceComponent_onNextRetryOpen__, 0LL);
      if ( continueDeviceConfirmDialog )
      {
        CommonConfirmDialog__Close_17823424(continueDeviceConfirmDialog, v10, 0LL);
        return;
      }
    }
LABEL_10:
    sub_B7076C(v7, isDecide);
  }
  v7 = this->fields.continueDeviceConfirmDialog;
  this->fields.state = 4;
  if ( !v7 )
    goto LABEL_10;
  CommonConfirmDialog__Close(v7, 0LL);
  v11 = this->fields.continueDeviceDispMenu;
  continueCode = this->fields.continueCode;
  v13 = (ContinueDeviceDispMenu_CallbackFunc_o *)sub_B70764(ContinueDeviceDispMenu_CallbackFunc_TypeInfo);
  ContinueDeviceDispMenu_CallbackFunc___ctor(
    v13,
    (Il2CppObject *)this,
    Method_ContinueDeviceComponent_onDispCode__,
    0LL);
  if ( !v11 )
    goto LABEL_10;
  ContinueDeviceDispMenu__Open(v11, continueCode, v13, v14);
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

  if ( (byte_4353559 & 1) == 0 )
  {
    sub_B70694(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B70694(&Method_ContinueDeviceComponent_onConfirmRetry__);
    sub_B70694(&LocalizationManager_TypeInfo);
    sub_B70694(&StringLiteral_3439/*"CONTINUE_DEVICE_CONFIRM_MESSAGE2"*/);
    sub_B70694(&StringLiteral_3169/*"CLOSE_CONTINUE_DEVICE"*/);
    byte_4353559 = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 2;
    continueDeviceConfirmDialog = this->fields.continueDeviceConfirmDialog;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v6 = LocalizationManager__Get((System_String_o *)StringLiteral_3439/*"CONTINUE_DEVICE_CONFIRM_MESSAGE2"*/, 0LL);
    v7 = (CommonConfirmDialog_ClickDelegate_o *)sub_B70764(CommonConfirmDialog_ClickDelegate_TypeInfo);
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
LABEL_11:
    sub_B7076C(myRoomFsm, isDecide);
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_11;
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3169/*"CLOSE_CONTINUE_DEVICE"*/, 0LL);
}


void __fastcall ContinueDeviceComponent__onInputCode(
        ContinueDeviceComponent_o *this,
        System_String_o *code,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  NetworkManager_ResultCallbackFunc_o *v10; // x20
  ContinuePrepareRequest_o *Request_WarBoardWallAttackRequest; // x0
  const MethodInfo *v12; // x2

  if ( (byte_4353555 & 1) == 0 )
  {
    sub_B70694(&Method_ContinueDeviceComponent_callbackCodeInput__);
    sub_B70694(&Method_NetworkManager_getRequest_ContinuePrepareRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B70694(&StringLiteral_3169/*"CLOSE_CONTINUE_DEVICE"*/);
    byte_4353555 = 1;
  }
  if ( code )
  {
    this->fields.passwardCode = code;
    sub_B70630(
      (BattleServantConfConponent_o *)&this->fields.passwardCode,
      (System_Int32_array **)code,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.state = 3;
    v10 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_callbackCodeInput__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (ContinuePrepareRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v10,
                                                                      (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_ContinuePrepareRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      ContinuePrepareRequest__beginRequest(Request_WarBoardWallAttackRequest, this->fields.passwardCode, v12);
      Request_WarBoardWallAttackRequest = (ContinuePrepareRequest_o *)this->fields.myRoomCtrl;
      if ( Request_WarBoardWallAttackRequest )
      {
        MyRoomControl__SetBackButtonIgnore((MyRoomControl_o *)Request_WarBoardWallAttackRequest, 1, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B7076C(Request_WarBoardWallAttackRequest, code);
  }
  Request_WarBoardWallAttackRequest = (ContinuePrepareRequest_o *)this->fields.myRoomFsm;
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_12;
  PlayMakerFSM__SendEvent(
    (PlayMakerFSM_o *)Request_WarBoardWallAttackRequest,
    (System_String_o *)StringLiteral_3169/*"CLOSE_CONTINUE_DEVICE"*/,
    0LL);
}


void __fastcall ContinueDeviceComponent__onNextDispOpen(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  int32_t v3; // w8
  ContinueDeviceDispMenu_o *continueDeviceDispMenu; // x20
  System_String_o *continueCode; // x21
  ContinueDeviceDispMenu_CallbackFunc_o *v6; // x22
  MyRoomControl_o *myRoomCtrl; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_4353558 & 1) == 0 )
  {
    sub_B70694(&ContinueDeviceDispMenu_CallbackFunc_TypeInfo);
    sub_B70694(&Method_ContinueDeviceComponent_onDispCode__);
    byte_4353558 = 1;
  }
  v3 = this->fields.closeCount - 1;
  this->fields.closeCount = v3;
  if ( !v3 )
  {
    this->fields.state = 4;
    continueDeviceDispMenu = this->fields.continueDeviceDispMenu;
    continueCode = this->fields.continueCode;
    v6 = (ContinueDeviceDispMenu_CallbackFunc_o *)sub_B70764(ContinueDeviceDispMenu_CallbackFunc_TypeInfo);
    ContinueDeviceDispMenu_CallbackFunc___ctor(
      v6,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_onDispCode__,
      0LL);
    if ( !continueDeviceDispMenu
      || (ContinueDeviceDispMenu__Open(continueDeviceDispMenu, continueCode, v6, v9),
          (myRoomCtrl = this->fields.myRoomCtrl) == 0LL) )
    {
      sub_B7076C(myRoomCtrl, v8);
    }
    MyRoomControl__SetBackButtonIgnore(myRoomCtrl, 0, 0LL);
  }
}


void __fastcall ContinueDeviceComponent__onNextRetryOpen(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int32_t v9; // w8
  System_Int32_array **v10; // x1
  System_Int32_array **v11; // x1
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  ContinueDeviceInputMenu_CallbackFunc_o *v19; // x21
  __int64 v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2

  if ( (byte_435355B & 1) == 0 )
  {
    sub_B70694(&ContinueDeviceInputMenu_CallbackFunc_TypeInfo);
    sub_B70694(&Method_ContinueDeviceComponent_onInputCode__);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_435355B = 1;
  }
  v9 = this->fields.closeCount - 1;
  this->fields.closeCount = v9;
  if ( !v9 )
  {
    this->fields.state = 1;
    v10 = (System_Int32_array **)StringLiteral_1/*""*/;
    this->fields.passwardCode = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.passwardCode, v10, v2, v3, v4, v5, v6, v7);
    v11 = (System_Int32_array **)StringLiteral_1/*""*/;
    this->fields.continueCode = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_B70630((BattleServantConfConponent_o *)&this->fields.continueCode, v11, v12, v13, v14, v15, v16, v17);
    continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
    v19 = (ContinueDeviceInputMenu_CallbackFunc_o *)sub_B70764(ContinueDeviceInputMenu_CallbackFunc_TypeInfo);
    ContinueDeviceInputMenu_CallbackFunc___ctor(
      v19,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_onInputCode__,
      0LL);
    if ( !continueDeviceInputMenu )
      sub_B7076C(v20, v21);
    ContinueDeviceInputMenu__Open(continueDeviceInputMenu, v19, v22);
  }
}


bool __fastcall ContinueDeviceComponent__openMenu(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  int64_t gameObject; // x0
  __int64 v4; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Int32_array **v12; // x1
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  ContinueDeviceInputMenu_CallbackFunc_o *v21; // x21
  const MethodInfo *v22; // x2
  System_Int32_array **v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct System_String_o *fakeValue; // x1
  ContinueDeviceDispMenu_o *continueDeviceDispMenu; // x20
  System_String_o *continueCode; // x21
  ContinueDeviceDispMenu_CallbackFunc_o *v34; // x22
  const MethodInfo *v35; // x3
  UserServantEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4353552 & 1) == 0 )
  {
    sub_B70694(&ContinueDeviceDispMenu_CallbackFunc_TypeInfo);
    sub_B70694(&ContinueDeviceInputMenu_CallbackFunc_TypeInfo);
    sub_B70694(&Method_ContinueDeviceComponent_onDispCode__);
    sub_B70694(&Method_ContinueDeviceComponent_onInputCode__);
    sub_B70694(&Method_DataManager_GetMasterData_UserContinueMaster___);
    sub_B70694(&Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long__TryGetEntity__);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B70694(&StringLiteral_1/*""*/);
    byte_4353552 = 1;
  }
  entity = 0LL;
  gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)gameObject, (const MethodInfo_1CA35A0 *)Method_DataManager_GetMasterData_UserContinueMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  gameObject = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_18;
  gameObject = DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
                 MasterData_WarQuestSelectionMaster,
                 &entity,
                 gameObject,
                 (const MethodInfo_21C06C4 *)Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long__TryGetEntity__);
  if ( (gameObject & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_18;
    if ( !LODWORD(entity->fields.id.fields.hiddenValue) )
    {
      this->fields.state = 4;
      v24 = (System_Int32_array **)StringLiteral_1/*""*/;
      this->fields.passwardCode = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_B70630((BattleServantConfConponent_o *)&this->fields.passwardCode, v24, v6, v7, v8, v9, v10, v11);
      if ( entity )
      {
        fakeValue = (struct System_String_o *)entity->fields.id.fields.fakeValue;
        this->fields.continueCode = fakeValue;
        sub_B70630(
          (BattleServantConfConponent_o *)&this->fields.continueCode,
          (System_Int32_array **)fakeValue,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30);
        continueDeviceDispMenu = this->fields.continueDeviceDispMenu;
        continueCode = this->fields.continueCode;
        v34 = (ContinueDeviceDispMenu_CallbackFunc_o *)sub_B70764(ContinueDeviceDispMenu_CallbackFunc_TypeInfo);
        ContinueDeviceDispMenu_CallbackFunc___ctor(
          v34,
          (Il2CppObject *)this,
          Method_ContinueDeviceComponent_onDispCode__,
          0LL);
        if ( continueDeviceDispMenu )
        {
          ContinueDeviceDispMenu__Open(continueDeviceDispMenu, continueCode, v34, v35);
          return 1;
        }
      }
LABEL_18:
      sub_B7076C(gameObject, v4);
    }
  }
  this->fields.state = 1;
  v12 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.passwardCode = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.passwardCode, v12, v6, v7, v8, v9, v10, v11);
  v13 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.continueCode = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.continueCode, v13, v14, v15, v16, v17, v18, v19);
  continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
  v21 = (ContinueDeviceInputMenu_CallbackFunc_o *)sub_B70764(ContinueDeviceInputMenu_CallbackFunc_TypeInfo);
  ContinueDeviceInputMenu_CallbackFunc___ctor(
    v21,
    (Il2CppObject *)this,
    Method_ContinueDeviceComponent_onInputCode__,
    0LL);
  if ( !continueDeviceInputMenu )
    goto LABEL_18;
  ContinueDeviceInputMenu__Open(continueDeviceInputMenu, v21, v22);
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
    sub_B7076C(gameObject, v4);
  }
  CommonConfirmDialog__Init((CommonConfirmDialog_o *)gameObject, 0LL);
}