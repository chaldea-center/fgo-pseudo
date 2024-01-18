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
  DataMasterBase_UserGameMaster__UserGameEntity__long__o *Master_WarQuestSelectionMaster; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct System_String_o *birthDay; // x1
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  System_Action_o *v20; // x21
  const MethodInfo *v21; // x2
  UserGameEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4189625 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, result);
    sub_B2C35C(&Method_ContinueDeviceComponent_onNextDispOpen__, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_UserContinueMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long__TryGetSingleEntity__, v8);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v9);
    byte_4189625 = 1;
  }
  entity = 0LL;
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21068/*"ng"*/, 0LL) )
    goto LABEL_11;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserContinueMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_16;
  Master_WarQuestSelectionMaster = (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
                                                                                               Master_WarQuestSelectionMaster,
                                                                                               &entity,
                                                                                               (const MethodInfo_24E43E0 *)Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long__TryGetSingleEntity__);
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
    sub_B2C434(Master_WarQuestSelectionMaster, v10);
  }
  birthDay = (struct System_String_o *)entity->fields.birthDay;
  this->fields.continueCode = birthDay;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.continueCode,
    (System_Int32_array **)birthDay,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
  *(_QWORD *)&this->fields.state = 0x100000000LL;
  v20 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_ContinueDeviceComponent_onNextDispOpen__, 0LL);
  if ( !continueDeviceInputMenu )
    goto LABEL_16;
  ContinueDeviceInputMenu__Close_28254608(continueDeviceInputMenu, v20, v21);
}


bool __fastcall ContinueDeviceComponent__closeMenu(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  ContinueDeviceDispMenu_o *continueDeviceDispMenu; // x20
  System_Action_o *v10; // x21
  const MethodInfo *v11; // x2
  ContinueDeviceInputMenu_o *v12; // x20
  System_Action_o *v13; // x21
  const MethodInfo *v14; // x2
  ContinueDeviceDispMenu_o *v15; // x20
  System_Action_o *v16; // x21
  const MethodInfo *v17; // x2
  CommonConfirmDialog_o *continueDeviceConfirmDialog; // x20
  System_Action_o *v19; // x21

  if ( (byte_4189621 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_ContinueDeviceComponent_onClose__, v3);
    byte_4189621 = 1;
  }
  switch ( this->fields.state )
  {
    case 1:
      this->fields.closeCount = 1;
      continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
      v5 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v5, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0LL);
      if ( !continueDeviceInputMenu )
        goto LABEL_16;
      ContinueDeviceInputMenu__Close_28254608(continueDeviceInputMenu, v5, v8);
      return 1;
    case 2:
      this->fields.closeCount = 2;
      v12 = this->fields.continueDeviceInputMenu;
      v13 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0LL);
      if ( !v12 )
        goto LABEL_16;
      ContinueDeviceInputMenu__Close_28254608(v12, v13, v14);
      goto LABEL_12;
    case 4:
      this->fields.closeCount = 1;
      continueDeviceDispMenu = this->fields.continueDeviceDispMenu;
      v10 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0LL);
      if ( !continueDeviceDispMenu )
        goto LABEL_16;
      ContinueDeviceDispMenu__Close_28254928(continueDeviceDispMenu, v10, v11);
      return 1;
    case 5:
      this->fields.closeCount = 2;
      v15 = this->fields.continueDeviceDispMenu;
      v16 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v16, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0LL);
      if ( !v15 )
        goto LABEL_16;
      ContinueDeviceDispMenu__Close_28254928(v15, v16, v17);
LABEL_12:
      continueDeviceConfirmDialog = this->fields.continueDeviceConfirmDialog;
      v19 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v19, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0LL);
      if ( !continueDeviceConfirmDialog )
LABEL_16:
        sub_B2C434(v6, v7);
      CommonConfirmDialog__Close_17891128(continueDeviceConfirmDialog, v19, 0LL);
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
    sub_B2C434(continueDeviceInputMenu, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)continueDeviceInputMenu, 0, 0LL);
}


void __fastcall ContinueDeviceComponent__onClose(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  int32_t v3; // w8
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4189622 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3103/*"CLOSE_MENU"*/, method);
    byte_4189622 = 1;
  }
  v3 = this->fields.closeCount - 1;
  this->fields.closeCount = v3;
  if ( !v3 )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      sub_B2C434(0LL, method);
    PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3103/*"CLOSE_MENU"*/, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ContinueDeviceComponent__onCloseDialog(
        ContinueDeviceComponent_o *this,
        bool result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_418962A & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_3107/*"CLOSE_SERIAL_CODE"*/, result);
    byte_418962A = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B2C434(0LL, result);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3107/*"CLOSE_SERIAL_CODE"*/, 0LL);
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

  if ( (byte_418962B & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, *(_QWORD *)&result);
    sub_B2C35C(&StringLiteral_3107/*"CLOSE_SERIAL_CODE"*/, v4);
    byte_418962B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ClosePresentBoxNotificationMenu(Instance, 0LL),
        (Instance = (CommonUI_o *)this->fields.myRoomFsm) == 0LL) )
  {
    sub_B2C434(Instance, v6);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3107/*"CLOSE_SERIAL_CODE"*/, 0LL);
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
  ContinuePrepareRequest_o *Request_WarBoardWallAttackRequest; // x0
  const MethodInfo *v12; // x2
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  ContinueDeviceInputMenu_CallbackFunc_o *v14; // x21
  const MethodInfo *v15; // x2

  if ( (byte_4189624 & 1) == 0 )
  {
    sub_B2C35C(&ContinueDeviceInputMenu_CallbackFunc_TypeInfo, isDecide);
    sub_B2C35C(&Method_ContinueDeviceComponent_callbackCodeInput__, v5);
    sub_B2C35C(&Method_ContinueDeviceComponent_onInputCode__, v6);
    sub_B2C35C(&Method_NetworkManager_getRequest_ContinuePrepareRequest___, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    byte_4189624 = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 3;
    v10 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
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
                                                                      (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_ContinuePrepareRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      ContinuePrepareRequest__beginRequest(Request_WarBoardWallAttackRequest, this->fields.passwardCode, v12);
      return;
    }
LABEL_12:
    sub_B2C434(Request_WarBoardWallAttackRequest, isDecide);
  }
  Request_WarBoardWallAttackRequest = (ContinuePrepareRequest_o *)this->fields.continueDeviceConfirmDialog;
  this->fields.state = 1;
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_12;
  CommonConfirmDialog__Close((CommonConfirmDialog_o *)Request_WarBoardWallAttackRequest, 0LL);
  continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
  v14 = (ContinueDeviceInputMenu_CallbackFunc_o *)sub_B2C42C(ContinueDeviceInputMenu_CallbackFunc_TypeInfo);
  ContinueDeviceInputMenu_CallbackFunc___ctor(
    v14,
    (Il2CppObject *)this,
    Method_ContinueDeviceComponent_onInputCode__,
    0LL);
  if ( !continueDeviceInputMenu )
    goto LABEL_12;
  ContinueDeviceInputMenu__Open(continueDeviceInputMenu, v14, v15);
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

  if ( (byte_4189628 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isDecide);
    sub_B2C35C(&ContinueDeviceDispMenu_CallbackFunc_TypeInfo, v5);
    sub_B2C35C(&Method_ContinueDeviceComponent_onDispCode__, v6);
    sub_B2C35C(&Method_ContinueDeviceComponent_onNextRetryOpen__, v7);
    byte_4189628 = 1;
  }
  if ( isDecide )
  {
    continueDeviceDispMenu = this->fields.continueDeviceDispMenu;
    *(_QWORD *)&this->fields.state = 0x200000000LL;
    v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_ContinueDeviceComponent_onNextRetryOpen__, 0LL);
    if ( continueDeviceDispMenu )
    {
      ContinueDeviceDispMenu__Close_28254928(continueDeviceDispMenu, v9, v11);
      continueDeviceConfirmDialog = this->fields.continueDeviceConfirmDialog;
      v13 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_ContinueDeviceComponent_onNextRetryOpen__, 0LL);
      if ( continueDeviceConfirmDialog )
      {
        CommonConfirmDialog__Close_17891128(continueDeviceConfirmDialog, v13, 0LL);
        return;
      }
    }
LABEL_10:
    sub_B2C434(v10, isDecide);
  }
  v10 = this->fields.continueDeviceConfirmDialog;
  this->fields.state = 4;
  if ( !v10 )
    goto LABEL_10;
  CommonConfirmDialog__Close(v10, 0LL);
  v14 = this->fields.continueDeviceDispMenu;
  continueCode = this->fields.continueCode;
  v16 = (ContinueDeviceDispMenu_CallbackFunc_o *)sub_B2C42C(ContinueDeviceDispMenu_CallbackFunc_TypeInfo);
  ContinueDeviceDispMenu_CallbackFunc___ctor(
    v16,
    (Il2CppObject *)this,
    Method_ContinueDeviceComponent_onDispCode__,
    0LL);
  if ( !v14 )
    goto LABEL_10;
  ContinueDeviceDispMenu__Open(v14, continueCode, v16, v17);
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

  if ( (byte_4189627 & 1) == 0 )
  {
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, isDecide);
    sub_B2C35C(&Method_ContinueDeviceComponent_onConfirmRetry__, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&StringLiteral_3364/*"CONTINUE_DEVICE_CONFIRM_MESSAGE2"*/, v7);
    sub_B2C35C(&StringLiteral_3095/*"CLOSE_CONTINUE_DEVICE"*/, v8);
    byte_4189627 = 1;
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
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3364/*"CONTINUE_DEVICE_CONFIRM_MESSAGE2"*/, 0LL);
    v11 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
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
LABEL_11:
    sub_B2C434(myRoomFsm, isDecide);
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_11;
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3095/*"CLOSE_CONTINUE_DEVICE"*/, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  NetworkManager_ResultCallbackFunc_o *v14; // x20
  ContinuePrepareRequest_o *Request_WarBoardWallAttackRequest; // x0
  const MethodInfo *v16; // x2

  if ( (byte_4189623 & 1) == 0 )
  {
    sub_B2C35C(&Method_ContinueDeviceComponent_callbackCodeInput__, code);
    sub_B2C35C(&Method_NetworkManager_getRequest_ContinuePrepareRequest___, v10);
    sub_B2C35C(&NetworkManager_TypeInfo, v11);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v12);
    sub_B2C35C(&StringLiteral_3095/*"CLOSE_CONTINUE_DEVICE"*/, v13);
    byte_4189623 = 1;
  }
  if ( code )
  {
    this->fields.passwardCode = code;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.passwardCode,
      (System_Int32_array **)code,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.state = 3;
    v14 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v14,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_callbackCodeInput__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (ContinuePrepareRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v14,
                                                                      (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_ContinuePrepareRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      ContinuePrepareRequest__beginRequest(Request_WarBoardWallAttackRequest, this->fields.passwardCode, v16);
      Request_WarBoardWallAttackRequest = (ContinuePrepareRequest_o *)this->fields.myRoomCtrl;
      if ( Request_WarBoardWallAttackRequest )
      {
        MyRoomControl__SetBackButtonIgnore((MyRoomControl_o *)Request_WarBoardWallAttackRequest, 1, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B2C434(Request_WarBoardWallAttackRequest, code);
  }
  Request_WarBoardWallAttackRequest = (ContinuePrepareRequest_o *)this->fields.myRoomFsm;
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_12;
  PlayMakerFSM__SendEvent(
    (PlayMakerFSM_o *)Request_WarBoardWallAttackRequest,
    (System_String_o *)StringLiteral_3095/*"CLOSE_CONTINUE_DEVICE"*/,
    0LL);
}


void __fastcall ContinueDeviceComponent__onNextDispOpen(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t v4; // w8
  ContinueDeviceDispMenu_o *continueDeviceDispMenu; // x20
  System_String_o *continueCode; // x21
  ContinueDeviceDispMenu_CallbackFunc_o *v7; // x22
  MyRoomControl_o *myRoomCtrl; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x3

  if ( (byte_4189626 & 1) == 0 )
  {
    sub_B2C35C(&ContinueDeviceDispMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_ContinueDeviceComponent_onDispCode__, v3);
    byte_4189626 = 1;
  }
  v4 = this->fields.closeCount - 1;
  this->fields.closeCount = v4;
  if ( !v4 )
  {
    this->fields.state = 4;
    continueDeviceDispMenu = this->fields.continueDeviceDispMenu;
    continueCode = this->fields.continueCode;
    v7 = (ContinueDeviceDispMenu_CallbackFunc_o *)sub_B2C42C(ContinueDeviceDispMenu_CallbackFunc_TypeInfo);
    ContinueDeviceDispMenu_CallbackFunc___ctor(
      v7,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_onDispCode__,
      0LL);
    if ( !continueDeviceDispMenu
      || (ContinueDeviceDispMenu__Open(continueDeviceDispMenu, continueCode, v7, v10),
          (myRoomCtrl = this->fields.myRoomCtrl) == 0LL) )
    {
      sub_B2C434(myRoomCtrl, v9);
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
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t v11; // w8
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
  __int64 v22; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x2

  if ( (byte_4189629 & 1) == 0 )
  {
    sub_B2C35C(&ContinueDeviceInputMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_ContinueDeviceComponent_onInputCode__, v9);
    sub_B2C35C(&StringLiteral_1/*""*/, v10);
    byte_4189629 = 1;
  }
  v11 = this->fields.closeCount - 1;
  this->fields.closeCount = v11;
  if ( !v11 )
  {
    this->fields.state = 1;
    v12 = (System_Int32_array **)StringLiteral_1/*""*/;
    this->fields.passwardCode = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.passwardCode, v12, v2, v3, v4, v5, v6, v7);
    v13 = (System_Int32_array **)StringLiteral_1/*""*/;
    this->fields.continueCode = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.continueCode, v13, v14, v15, v16, v17, v18, v19);
    continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
    v21 = (ContinueDeviceInputMenu_CallbackFunc_o *)sub_B2C42C(ContinueDeviceInputMenu_CallbackFunc_TypeInfo);
    ContinueDeviceInputMenu_CallbackFunc___ctor(
      v21,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_onInputCode__,
      0LL);
    if ( !continueDeviceInputMenu )
      sub_B2C434(v22, v23);
    ContinueDeviceInputMenu__Open(continueDeviceInputMenu, v21, v24);
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
  int64_t gameObject; // x0
  __int64 v12; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  System_Int32_array **v20; // x1
  System_Int32_array **v21; // x1
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  ContinueDeviceInputMenu_CallbackFunc_o *v29; // x21
  const MethodInfo *v30; // x2
  System_Int32_array **v32; // x1
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  struct System_String_o *fakeValue; // x1
  ContinueDeviceDispMenu_o *continueDeviceDispMenu; // x20
  System_String_o *continueCode; // x21
  ContinueDeviceDispMenu_CallbackFunc_o *v42; // x22
  const MethodInfo *v43; // x3
  UserServantEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4189620 & 1) == 0 )
  {
    sub_B2C35C(&ContinueDeviceDispMenu_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&ContinueDeviceInputMenu_CallbackFunc_TypeInfo, v3);
    sub_B2C35C(&Method_ContinueDeviceComponent_onDispCode__, v4);
    sub_B2C35C(&Method_ContinueDeviceComponent_onInputCode__, v5);
    sub_B2C35C(&Method_DataManager_GetMasterData_UserContinueMaster___, v6);
    sub_B2C35C(&Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long__TryGetEntity__, v7);
    sub_B2C35C(&NetworkManager_TypeInfo, v8);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B2C35C(&StringLiteral_1/*""*/, v10);
    byte_4189620 = 1;
  }
  entity = 0LL;
  gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)gameObject, (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_UserContinueMaster___);
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
                 (const MethodInfo_24E4354 *)Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long__TryGetEntity__);
  if ( (gameObject & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_18;
    if ( !LODWORD(entity->fields.id.fields.hiddenValue) )
    {
      this->fields.state = 4;
      v32 = (System_Int32_array **)StringLiteral_1/*""*/;
      this->fields.passwardCode = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.passwardCode, v32, v14, v15, v16, v17, v18, v19);
      if ( entity )
      {
        fakeValue = (struct System_String_o *)entity->fields.id.fields.fakeValue;
        this->fields.continueCode = fakeValue;
        sub_B2C2F8(
          (BattleServantConfConponent_o *)&this->fields.continueCode,
          (System_Int32_array **)fakeValue,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
        continueDeviceDispMenu = this->fields.continueDeviceDispMenu;
        continueCode = this->fields.continueCode;
        v42 = (ContinueDeviceDispMenu_CallbackFunc_o *)sub_B2C42C(ContinueDeviceDispMenu_CallbackFunc_TypeInfo);
        ContinueDeviceDispMenu_CallbackFunc___ctor(
          v42,
          (Il2CppObject *)this,
          Method_ContinueDeviceComponent_onDispCode__,
          0LL);
        if ( continueDeviceDispMenu )
        {
          ContinueDeviceDispMenu__Open(continueDeviceDispMenu, continueCode, v42, v43);
          return 1;
        }
      }
LABEL_18:
      sub_B2C434(gameObject, v12);
    }
  }
  this->fields.state = 1;
  v20 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.passwardCode = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.passwardCode, v20, v14, v15, v16, v17, v18, v19);
  v21 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.continueCode = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.continueCode, v21, v22, v23, v24, v25, v26, v27);
  continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
  v29 = (ContinueDeviceInputMenu_CallbackFunc_o *)sub_B2C42C(ContinueDeviceInputMenu_CallbackFunc_TypeInfo);
  ContinueDeviceInputMenu_CallbackFunc___ctor(
    v29,
    (Il2CppObject *)this,
    Method_ContinueDeviceComponent_onInputCode__,
    0LL);
  if ( !continueDeviceInputMenu )
    goto LABEL_18;
  ContinueDeviceInputMenu__Open(continueDeviceInputMenu, v29, v30);
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
    sub_B2C434(gameObject, v4);
  }
  CommonConfirmDialog__Init((CommonConfirmDialog_o *)gameObject, 0LL);
}