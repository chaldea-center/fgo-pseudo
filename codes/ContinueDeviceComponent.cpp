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
  DataMasterBase_UserGameMaster__UserGameEntity__long__o *Master_WarQuestSelectionMaster; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct System_String_o *birthDay; // x1
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  System_Action_o *v21; // x21
  const MethodInfo *v22; // x2
  UserGameEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4216492 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, result);
    sub_B0D8A4(&Method_ContinueDeviceComponent_onNextDispOpen__, v5);
    sub_B0D8A4(&Method_DataManager_GetMaster_UserContinueMaster___, v6);
    sub_B0D8A4(&DataManager_TypeInfo, v7);
    sub_B0D8A4(&Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long__TryGetSingleEntity__, v8);
    sub_B0D8A4(&StringLiteral_21137/*"ng"*/, v9);
    byte_4216492 = 1;
  }
  entity = 0LL;
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21137/*"ng"*/, 0LL) )
    goto LABEL_11;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1714548 *)Method_DataManager_GetMaster_UserContinueMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_16;
  Master_WarQuestSelectionMaster = (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
                                                                                               Master_WarQuestSelectionMaster,
                                                                                               &entity,
                                                                                               (const MethodInfo_2669EE4 *)Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long__TryGetSingleEntity__);
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
    sub_B0D97C(Master_WarQuestSelectionMaster);
  }
  birthDay = (struct System_String_o *)entity->fields.birthDay;
  this->fields.continueCode = birthDay;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.continueCode,
    (System_Int32_array **)birthDay,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
  *(_QWORD *)&this->fields.state = 0x100000000LL;
  v21 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v19, v20);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_ContinueDeviceComponent_onNextDispOpen__, 0LL);
  if ( !continueDeviceInputMenu )
    goto LABEL_16;
  ContinueDeviceInputMenu__Close_27729592(continueDeviceInputMenu, v21, v22);
}


bool __fastcall ContinueDeviceComponent__closeMenu(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  System_Action_o *v6; // x21
  __int64 v7; // x0
  const MethodInfo *v8; // x2
  ContinueDeviceDispMenu_o *continueDeviceDispMenu; // x20
  System_Action_o *v10; // x21
  const MethodInfo *v11; // x2
  ContinueDeviceInputMenu_o *v12; // x20
  System_Action_o *v13; // x21
  const MethodInfo *v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  ContinueDeviceDispMenu_o *v17; // x20
  System_Action_o *v18; // x21
  const MethodInfo *v19; // x2
  CommonConfirmDialog_o *continueDeviceConfirmDialog; // x20
  System_Action_o *v21; // x21

  if ( (byte_421648E & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&Method_ContinueDeviceComponent_onClose__, v4);
    byte_421648E = 1;
  }
  switch ( this->fields.state )
  {
    case 1:
      this->fields.closeCount = 1;
      continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
      v6 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
      System_Action___ctor(v6, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0LL);
      if ( !continueDeviceInputMenu )
        goto LABEL_16;
      ContinueDeviceInputMenu__Close_27729592(continueDeviceInputMenu, v6, v8);
      return 1;
    case 2:
      this->fields.closeCount = 2;
      v12 = this->fields.continueDeviceInputMenu;
      v13 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
      System_Action___ctor(v13, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0LL);
      if ( !v12 )
        goto LABEL_16;
      ContinueDeviceInputMenu__Close_27729592(v12, v13, v14);
      goto LABEL_12;
    case 4:
      this->fields.closeCount = 1;
      continueDeviceDispMenu = this->fields.continueDeviceDispMenu;
      v10 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
      System_Action___ctor(v10, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0LL);
      if ( !continueDeviceDispMenu )
        goto LABEL_16;
      ContinueDeviceDispMenu__Close_27729912(continueDeviceDispMenu, v10, v11);
      return 1;
    case 5:
      this->fields.closeCount = 2;
      v17 = this->fields.continueDeviceDispMenu;
      v18 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, method, v2);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0LL);
      if ( !v17 )
        goto LABEL_16;
      ContinueDeviceDispMenu__Close_27729912(v17, v18, v19);
LABEL_12:
      continueDeviceConfirmDialog = this->fields.continueDeviceConfirmDialog;
      v21 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v15, v16);
      System_Action___ctor(v21, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0LL);
      if ( !continueDeviceConfirmDialog )
LABEL_16:
        sub_B0D97C(v7);
      CommonConfirmDialog__Close_16936408(continueDeviceConfirmDialog, v21, 0LL);
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
  const MethodInfo *v4; // x1

  continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
  this->fields.state = 0;
  if ( !continueDeviceInputMenu
    || (ContinueDeviceInputMenu__Init(continueDeviceInputMenu, method),
        (continueDeviceInputMenu = (ContinueDeviceInputMenu_o *)this->fields.continueDeviceDispMenu) == 0LL)
    || (ContinueDeviceDispMenu__Init((ContinueDeviceDispMenu_o *)continueDeviceInputMenu, v4),
        (continueDeviceInputMenu = (ContinueDeviceInputMenu_o *)this->fields.continueDeviceConfirmDialog) == 0LL)
    || (CommonConfirmDialog__Init((CommonConfirmDialog_o *)continueDeviceInputMenu, 0LL),
        (continueDeviceInputMenu = (ContinueDeviceInputMenu_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)this,
                                                                  0LL)) == 0LL) )
  {
    sub_B0D97C(continueDeviceInputMenu);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)continueDeviceInputMenu, 0, 0LL);
}


void __fastcall ContinueDeviceComponent__onClose(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  int32_t v3; // w8
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_421648F & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_3115/*"CLOSE_MENU"*/, method);
    byte_421648F = 1;
  }
  v3 = this->fields.closeCount - 1;
  this->fields.closeCount = v3;
  if ( !v3 )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      sub_B0D97C(0LL);
    PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3115/*"CLOSE_MENU"*/, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ContinueDeviceComponent__onCloseDialog(
        ContinueDeviceComponent_o *this,
        bool result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4216497 & 1) == 0 )
  {
    sub_B0D8A4(&StringLiteral_3119/*"CLOSE_SERIAL_CODE"*/, result);
    byte_4216497 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B0D97C(0LL);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3119/*"CLOSE_SERIAL_CODE"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ContinueDeviceComponent__onCloseMenu(
        ContinueDeviceComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  CommonUI_o *Instance; // x0

  if ( (byte_4216498 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, *(_QWORD *)&result);
    sub_B0D8A4(&StringLiteral_3119/*"CLOSE_SERIAL_CODE"*/, v4);
    byte_4216498 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ClosePresentBoxNotificationMenu(Instance, 0LL),
        (Instance = (CommonUI_o *)this->fields.myRoomFsm) == 0LL) )
  {
    sub_B0D97C(Instance);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3119/*"CLOSE_SERIAL_CODE"*/, 0LL);
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
  __int64 v14; // x1
  __int64 v15; // x2
  ContinueDeviceInputMenu_CallbackFunc_o *v16; // x21
  const MethodInfo *v17; // x2

  if ( (byte_4216491 & 1) == 0 )
  {
    sub_B0D8A4(&ContinueDeviceInputMenu_CallbackFunc_TypeInfo, isDecide);
    sub_B0D8A4(&Method_ContinueDeviceComponent_callbackCodeInput__, v5);
    sub_B0D8A4(&Method_ContinueDeviceComponent_onInputCode__, v6);
    sub_B0D8A4(&Method_NetworkManager_getRequest_ContinuePrepareRequest___, v7);
    sub_B0D8A4(&NetworkManager_TypeInfo, v8);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    byte_4216491 = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 3;
    v10 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   isDecide,
                                                   method);
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
                                                                      (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_ContinuePrepareRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      ContinuePrepareRequest__beginRequest(Request_WarBoardWallAttackRequest, this->fields.passwardCode, v12);
      return;
    }
LABEL_12:
    sub_B0D97C(Request_WarBoardWallAttackRequest);
  }
  Request_WarBoardWallAttackRequest = (ContinuePrepareRequest_o *)this->fields.continueDeviceConfirmDialog;
  this->fields.state = 1;
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_12;
  CommonConfirmDialog__Close((CommonConfirmDialog_o *)Request_WarBoardWallAttackRequest, 0LL);
  continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
  v16 = (ContinueDeviceInputMenu_CallbackFunc_o *)sub_B0D974(ContinueDeviceInputMenu_CallbackFunc_TypeInfo, v14, v15);
  ContinueDeviceInputMenu_CallbackFunc___ctor(
    v16,
    (Il2CppObject *)this,
    Method_ContinueDeviceComponent_onInputCode__,
    0LL);
  if ( !continueDeviceInputMenu )
    goto LABEL_12;
  ContinueDeviceInputMenu__Open(continueDeviceInputMenu, v16, v17);
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
  __int64 v13; // x1
  __int64 v14; // x2
  System_Action_o *v15; // x21
  ContinueDeviceDispMenu_o *v16; // x20
  System_String_o *continueCode; // x21
  __int64 v18; // x1
  __int64 v19; // x2
  ContinueDeviceDispMenu_CallbackFunc_o *v20; // x22
  const MethodInfo *v21; // x3

  if ( (byte_4216495 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isDecide);
    sub_B0D8A4(&ContinueDeviceDispMenu_CallbackFunc_TypeInfo, v5);
    sub_B0D8A4(&Method_ContinueDeviceComponent_onDispCode__, v6);
    sub_B0D8A4(&Method_ContinueDeviceComponent_onNextRetryOpen__, v7);
    byte_4216495 = 1;
  }
  if ( isDecide )
  {
    continueDeviceDispMenu = this->fields.continueDeviceDispMenu;
    *(_QWORD *)&this->fields.state = 0x200000000LL;
    v9 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, isDecide, method);
    System_Action___ctor(v9, (Il2CppObject *)this, Method_ContinueDeviceComponent_onNextRetryOpen__, 0LL);
    if ( continueDeviceDispMenu )
    {
      ContinueDeviceDispMenu__Close_27729912(continueDeviceDispMenu, v9, v11);
      continueDeviceConfirmDialog = this->fields.continueDeviceConfirmDialog;
      v15 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v13, v14);
      System_Action___ctor(v15, (Il2CppObject *)this, Method_ContinueDeviceComponent_onNextRetryOpen__, 0LL);
      if ( continueDeviceConfirmDialog )
      {
        CommonConfirmDialog__Close_16936408(continueDeviceConfirmDialog, v15, 0LL);
        return;
      }
    }
LABEL_10:
    sub_B0D97C(v10);
  }
  v10 = this->fields.continueDeviceConfirmDialog;
  this->fields.state = 4;
  if ( !v10 )
    goto LABEL_10;
  CommonConfirmDialog__Close(v10, 0LL);
  v16 = this->fields.continueDeviceDispMenu;
  continueCode = this->fields.continueCode;
  v20 = (ContinueDeviceDispMenu_CallbackFunc_o *)sub_B0D974(ContinueDeviceDispMenu_CallbackFunc_TypeInfo, v18, v19);
  ContinueDeviceDispMenu_CallbackFunc___ctor(
    v20,
    (Il2CppObject *)this,
    Method_ContinueDeviceComponent_onDispCode__,
    0LL);
  if ( !v16 )
    goto LABEL_10;
  ContinueDeviceDispMenu__Open(v16, continueCode, v20, v21);
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
  __int64 v11; // x1
  __int64 v12; // x2
  CommonConfirmDialog_ClickDelegate_o *v13; // x22
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4216494 & 1) == 0 )
  {
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, isDecide);
    sub_B0D8A4(&Method_ContinueDeviceComponent_onConfirmRetry__, v5);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v6);
    sub_B0D8A4(&StringLiteral_3377/*"CONTINUE_DEVICE_CONFIRM_MESSAGE2"*/, v7);
    sub_B0D8A4(&StringLiteral_3107/*"CLOSE_CONTINUE_DEVICE"*/, v8);
    byte_4216494 = 1;
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
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3377/*"CONTINUE_DEVICE_CONFIRM_MESSAGE2"*/, 0LL);
    v13 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(CommonConfirmDialog_ClickDelegate_TypeInfo, v11, v12);
    CommonConfirmDialog_ClickDelegate___ctor(
      v13,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_onConfirmRetry__,
      0LL);
    if ( continueDeviceConfirmDialog )
    {
      CommonConfirmDialog__Open(continueDeviceConfirmDialog, 0LL, v10, v13, 0, 0, 0, 0LL);
      return;
    }
LABEL_11:
    sub_B0D97C(myRoomFsm);
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_11;
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3107/*"CLOSE_CONTINUE_DEVICE"*/, 0LL);
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
  __int64 v14; // x1
  __int64 v15; // x2
  NetworkManager_ResultCallbackFunc_o *v16; // x20
  ContinuePrepareRequest_o *Request_WarBoardWallAttackRequest; // x0
  const MethodInfo *v18; // x2

  if ( (byte_4216490 & 1) == 0 )
  {
    sub_B0D8A4(&Method_ContinueDeviceComponent_callbackCodeInput__, code);
    sub_B0D8A4(&Method_NetworkManager_getRequest_ContinuePrepareRequest___, v10);
    sub_B0D8A4(&NetworkManager_TypeInfo, v11);
    sub_B0D8A4(&NetworkManager_ResultCallbackFunc_TypeInfo, v12);
    sub_B0D8A4(&StringLiteral_3107/*"CLOSE_CONTINUE_DEVICE"*/, v13);
    byte_4216490 = 1;
  }
  if ( code )
  {
    this->fields.passwardCode = code;
    sub_B0D840(
      (BattleServantConfConponent_o *)&this->fields.passwardCode,
      (System_Int32_array **)code,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.state = 3;
    v16 = (NetworkManager_ResultCallbackFunc_o *)sub_B0D974(NetworkManager_ResultCallbackFunc_TypeInfo, v14, v15);
    NetworkManager_ResultCallbackFunc___ctor(
      v16,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_callbackCodeInput__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (ContinuePrepareRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v16,
                                                                      (const MethodInfo_2049D98 *)Method_NetworkManager_getRequest_ContinuePrepareRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      ContinuePrepareRequest__beginRequest(Request_WarBoardWallAttackRequest, this->fields.passwardCode, v18);
      Request_WarBoardWallAttackRequest = (ContinuePrepareRequest_o *)this->fields.myRoomCtrl;
      if ( Request_WarBoardWallAttackRequest )
      {
        MyRoomControl__SetBackButtonIgnore((MyRoomControl_o *)Request_WarBoardWallAttackRequest, 1, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B0D97C(Request_WarBoardWallAttackRequest);
  }
  Request_WarBoardWallAttackRequest = (ContinuePrepareRequest_o *)this->fields.myRoomFsm;
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_12;
  PlayMakerFSM__SendEvent(
    (PlayMakerFSM_o *)Request_WarBoardWallAttackRequest,
    (System_String_o *)StringLiteral_3107/*"CLOSE_CONTINUE_DEVICE"*/,
    0LL);
}


void __fastcall ContinueDeviceComponent__onNextDispOpen(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  int32_t v5; // w8
  ContinueDeviceDispMenu_o *continueDeviceDispMenu; // x20
  System_String_o *continueCode; // x21
  ContinueDeviceDispMenu_CallbackFunc_o *v8; // x22
  MyRoomControl_o *myRoomCtrl; // x0
  const MethodInfo *v10; // x3

  if ( (byte_4216493 & 1) == 0 )
  {
    sub_B0D8A4(&ContinueDeviceDispMenu_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_ContinueDeviceComponent_onDispCode__, v4);
    byte_4216493 = 1;
  }
  v5 = this->fields.closeCount - 1;
  this->fields.closeCount = v5;
  if ( !v5 )
  {
    this->fields.state = 4;
    continueDeviceDispMenu = this->fields.continueDeviceDispMenu;
    continueCode = this->fields.continueCode;
    v8 = (ContinueDeviceDispMenu_CallbackFunc_o *)sub_B0D974(ContinueDeviceDispMenu_CallbackFunc_TypeInfo, method, v2);
    ContinueDeviceDispMenu_CallbackFunc___ctor(
      v8,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_onDispCode__,
      0LL);
    if ( !continueDeviceDispMenu
      || (ContinueDeviceDispMenu__Open(continueDeviceDispMenu, continueCode, v8, v10),
          (myRoomCtrl = this->fields.myRoomCtrl) == 0LL) )
    {
      sub_B0D97C(myRoomCtrl);
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
  __int64 v21; // x1
  __int64 v22; // x2
  ContinueDeviceInputMenu_CallbackFunc_o *v23; // x21
  __int64 v24; // x0
  const MethodInfo *v25; // x2

  if ( (byte_4216496 & 1) == 0 )
  {
    sub_B0D8A4(&ContinueDeviceInputMenu_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&Method_ContinueDeviceComponent_onInputCode__, v9);
    sub_B0D8A4(&StringLiteral_1/*""*/, v10);
    byte_4216496 = 1;
  }
  v11 = this->fields.closeCount - 1;
  this->fields.closeCount = v11;
  if ( !v11 )
  {
    this->fields.state = 1;
    v12 = (System_Int32_array **)StringLiteral_1/*""*/;
    this->fields.passwardCode = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.passwardCode, v12, v2, v3, v4, v5, v6, v7);
    v13 = (System_Int32_array **)StringLiteral_1/*""*/;
    this->fields.continueCode = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.continueCode, v13, v14, v15, v16, v17, v18, v19);
    continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
    v23 = (ContinueDeviceInputMenu_CallbackFunc_o *)sub_B0D974(ContinueDeviceInputMenu_CallbackFunc_TypeInfo, v21, v22);
    ContinueDeviceInputMenu_CallbackFunc___ctor(
      v23,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_onInputCode__,
      0LL);
    if ( !continueDeviceInputMenu )
      sub_B0D97C(v24);
    ContinueDeviceInputMenu__Open(continueDeviceInputMenu, v23, v25);
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
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Int32_array **v19; // x1
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  ContinueDeviceInputMenu_CallbackFunc_o *v30; // x21
  const MethodInfo *v31; // x2
  System_Int32_array **v33; // x1
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  struct System_String_o *fakeValue; // x1
  ContinueDeviceDispMenu_o *continueDeviceDispMenu; // x20
  System_String_o *continueCode; // x21
  __int64 v43; // x1
  __int64 v44; // x2
  ContinueDeviceDispMenu_CallbackFunc_o *v45; // x22
  const MethodInfo *v46; // x3
  UserServantEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_421648D & 1) == 0 )
  {
    sub_B0D8A4(&ContinueDeviceDispMenu_CallbackFunc_TypeInfo, method);
    sub_B0D8A4(&ContinueDeviceInputMenu_CallbackFunc_TypeInfo, v3);
    sub_B0D8A4(&Method_ContinueDeviceComponent_onDispCode__, v4);
    sub_B0D8A4(&Method_ContinueDeviceComponent_onInputCode__, v5);
    sub_B0D8A4(&Method_DataManager_GetMasterData_UserContinueMaster___, v6);
    sub_B0D8A4(&Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long__TryGetEntity__, v7);
    sub_B0D8A4(&NetworkManager_TypeInfo, v8);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B0D8A4(&StringLiteral_1/*""*/, v10);
    byte_421648D = 1;
  }
  entity = 0LL;
  gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)gameObject, (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_UserContinueMaster___);
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
                 (const MethodInfo_2669E58 *)Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long__TryGetEntity__);
  if ( (gameObject & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_18;
    if ( !LODWORD(entity->fields.id.fields.hiddenValue) )
    {
      this->fields.state = 4;
      v33 = (System_Int32_array **)StringLiteral_1/*""*/;
      this->fields.passwardCode = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_B0D840((BattleServantConfConponent_o *)&this->fields.passwardCode, v33, v13, v14, v15, v16, v17, v18);
      if ( entity )
      {
        fakeValue = (struct System_String_o *)entity->fields.id.fields.fakeValue;
        this->fields.continueCode = fakeValue;
        sub_B0D840(
          (BattleServantConfConponent_o *)&this->fields.continueCode,
          (System_Int32_array **)fakeValue,
          v34,
          v35,
          v36,
          v37,
          v38,
          v39);
        continueDeviceDispMenu = this->fields.continueDeviceDispMenu;
        continueCode = this->fields.continueCode;
        v45 = (ContinueDeviceDispMenu_CallbackFunc_o *)sub_B0D974(
                                                         ContinueDeviceDispMenu_CallbackFunc_TypeInfo,
                                                         v43,
                                                         v44);
        ContinueDeviceDispMenu_CallbackFunc___ctor(
          v45,
          (Il2CppObject *)this,
          Method_ContinueDeviceComponent_onDispCode__,
          0LL);
        if ( continueDeviceDispMenu )
        {
          ContinueDeviceDispMenu__Open(continueDeviceDispMenu, continueCode, v45, v46);
          return 1;
        }
      }
LABEL_18:
      sub_B0D97C(gameObject);
    }
  }
  this->fields.state = 1;
  v19 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.passwardCode = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.passwardCode, v19, v13, v14, v15, v16, v17, v18);
  v20 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.continueCode = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B0D840((BattleServantConfConponent_o *)&this->fields.continueCode, v20, v21, v22, v23, v24, v25, v26);
  continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
  v30 = (ContinueDeviceInputMenu_CallbackFunc_o *)sub_B0D974(ContinueDeviceInputMenu_CallbackFunc_TypeInfo, v28, v29);
  ContinueDeviceInputMenu_CallbackFunc___ctor(
    v30,
    (Il2CppObject *)this,
    Method_ContinueDeviceComponent_onInputCode__,
    0LL);
  if ( !continueDeviceInputMenu )
    goto LABEL_18;
  ContinueDeviceInputMenu__Open(continueDeviceInputMenu, v30, v31);
  return 1;
}


void __fastcall ContinueDeviceComponent__showMenu(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        gameObject = (UnityEngine_GameObject_o *)this->fields.continueDeviceInputMenu,
        this->fields.state = 0,
        !gameObject)
    || (ContinueDeviceInputMenu__Init((ContinueDeviceInputMenu_o *)gameObject, v4),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.continueDeviceDispMenu) == 0LL)
    || (ContinueDeviceDispMenu__Init((ContinueDeviceDispMenu_o *)gameObject, v5),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.continueDeviceConfirmDialog) == 0LL) )
  {
    sub_B0D97C(gameObject);
  }
  CommonConfirmDialog__Init((CommonConfirmDialog_o *)gameObject, 0LL);
}