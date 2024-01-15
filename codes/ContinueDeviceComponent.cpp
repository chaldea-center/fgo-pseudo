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
  CommonConfirmDialog_o *continueDeviceConfirmDialog; // x0
  MyRoomControl_o *myRoomCtrl; // x0
  struct System_String_o *birthDay; // x1
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x4
  System_Action_o *v25; // x21
  const MethodInfo *v26; // x2
  UserGameEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FBD82 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, result);
    sub_B16FFC(&Method_ContinueDeviceComponent_onNextDispOpen__, v5);
    sub_B16FFC(&Method_DataManager_GetMaster_UserContinueMaster___, v6);
    sub_B16FFC(&DataManager_TypeInfo, v7);
    sub_B16FFC(&Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long__TryGetSingleEntity__, v8);
    sub_B16FFC(&StringLiteral_20980/*"ng"*/, v9);
    byte_40FBD82 = 1;
  }
  entity = 0LL;
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_20980/*"ng"*/, 0LL) )
    goto LABEL_11;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserContinueMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_16;
  if ( !DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
          Master_WarQuestSelectionMaster,
          &entity,
          (const MethodInfo_266F698 *)Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long__TryGetSingleEntity__) )
    goto LABEL_11;
  if ( !entity )
    goto LABEL_16;
  if ( LODWORD(entity->fields.name) )
  {
LABEL_11:
    continueDeviceConfirmDialog = this->fields.continueDeviceConfirmDialog;
    if ( continueDeviceConfirmDialog )
    {
      CommonConfirmDialog__Close(continueDeviceConfirmDialog, 0LL);
      myRoomCtrl = this->fields.myRoomCtrl;
      if ( myRoomCtrl )
      {
        MyRoomControl__SetBackButtonIgnore(myRoomCtrl, 0, 0LL);
        return;
      }
    }
LABEL_16:
    sub_B170D4();
  }
  birthDay = (struct System_String_o *)entity->fields.birthDay;
  this->fields.continueCode = birthDay;
  sub_B16F98(
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
  v25 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v21, v22, v23, v24);
  System_Action___ctor(v25, (Il2CppObject *)this, Method_ContinueDeviceComponent_onNextDispOpen__, 0LL);
  if ( !continueDeviceInputMenu )
    goto LABEL_16;
  ContinueDeviceInputMenu__Close_28477848(continueDeviceInputMenu, v25, v26);
}


bool __fastcall ContinueDeviceComponent__closeMenu(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  System_Action_o *v8; // x21
  const MethodInfo *v9; // x2
  ContinueDeviceDispMenu_o *continueDeviceDispMenu; // x20
  System_Action_o *v11; // x21
  const MethodInfo *v12; // x2
  ContinueDeviceInputMenu_o *v13; // x20
  System_Action_o *v14; // x21
  const MethodInfo *v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  ContinueDeviceDispMenu_o *v20; // x20
  System_Action_o *v21; // x21
  const MethodInfo *v22; // x2
  CommonConfirmDialog_o *continueDeviceConfirmDialog; // x20
  System_Action_o *v24; // x21

  if ( (byte_40FBD7E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&Method_ContinueDeviceComponent_onClose__, v6);
    byte_40FBD7E = 1;
  }
  switch ( this->fields.state )
  {
    case 1:
      this->fields.closeCount = 1;
      continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
      v8 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
      System_Action___ctor(v8, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0LL);
      if ( !continueDeviceInputMenu )
        goto LABEL_16;
      ContinueDeviceInputMenu__Close_28477848(continueDeviceInputMenu, v8, v9);
      return 1;
    case 2:
      this->fields.closeCount = 2;
      v13 = this->fields.continueDeviceInputMenu;
      v14 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
      System_Action___ctor(v14, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0LL);
      if ( !v13 )
        goto LABEL_16;
      ContinueDeviceInputMenu__Close_28477848(v13, v14, v15);
      goto LABEL_12;
    case 4:
      this->fields.closeCount = 1;
      continueDeviceDispMenu = this->fields.continueDeviceDispMenu;
      v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
      System_Action___ctor(v11, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0LL);
      if ( !continueDeviceDispMenu )
        goto LABEL_16;
      ContinueDeviceDispMenu__Close_28478168(continueDeviceDispMenu, v11, v12);
      return 1;
    case 5:
      this->fields.closeCount = 2;
      v20 = this->fields.continueDeviceDispMenu;
      v21 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
      System_Action___ctor(v21, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0LL);
      if ( !v20 )
        goto LABEL_16;
      ContinueDeviceDispMenu__Close_28478168(v20, v21, v22);
LABEL_12:
      continueDeviceConfirmDialog = this->fields.continueDeviceConfirmDialog;
      v24 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v16, v17, v18, v19);
      System_Action___ctor(v24, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0LL);
      if ( !continueDeviceConfirmDialog )
LABEL_16:
        sub_B170D4();
      CommonConfirmDialog__Close_18159552(continueDeviceConfirmDialog, v24, 0LL);
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
  ContinueDeviceDispMenu_o *continueDeviceDispMenu; // x0
  CommonConfirmDialog_o *continueDeviceConfirmDialog; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
  this->fields.state = 0;
  if ( !continueDeviceInputMenu
    || (ContinueDeviceInputMenu__Init(continueDeviceInputMenu, method),
        (continueDeviceDispMenu = this->fields.continueDeviceDispMenu) == 0LL)
    || (ContinueDeviceDispMenu__Init(continueDeviceDispMenu, v4),
        (continueDeviceConfirmDialog = this->fields.continueDeviceConfirmDialog) == 0LL)
    || (CommonConfirmDialog__Init(continueDeviceConfirmDialog, 0LL),
        (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
}


void __fastcall ContinueDeviceComponent__onClose(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  int32_t v3; // w8
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_40FBD7F & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3094/*"CLOSE_MENU"*/, method);
    byte_40FBD7F = 1;
  }
  v3 = this->fields.closeCount - 1;
  this->fields.closeCount = v3;
  if ( !v3 )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      sub_B170D4();
    PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3094/*"CLOSE_MENU"*/, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ContinueDeviceComponent__onCloseDialog(
        ContinueDeviceComponent_o *this,
        bool result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_40FBD87 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_3098/*"CLOSE_SERIAL_CODE"*/, result);
    byte_40FBD87 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B170D4();
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3098/*"CLOSE_SERIAL_CODE"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ContinueDeviceComponent__onCloseMenu(
        ContinueDeviceComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v4; // x1
  CommonUI_o *Instance; // x0
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_40FBD88 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, *(_QWORD *)&result);
    sub_B16FFC(&StringLiteral_3098/*"CLOSE_SERIAL_CODE"*/, v4);
    byte_40FBD88 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ClosePresentBoxNotificationMenu(Instance, 0LL), (myRoomFsm = this->fields.myRoomFsm) == 0LL) )
  {
    sub_B170D4();
  }
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3098/*"CLOSE_SERIAL_CODE"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ContinueDeviceComponent__onConfirmCode(
        ContinueDeviceComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  NetworkManager_ResultCallbackFunc_o *v12; // x20
  ContinuePrepareRequest_o *Request_WarBoardWallAttackRequest; // x0
  const MethodInfo *v14; // x2
  CommonConfirmDialog_o *continueDeviceConfirmDialog; // x0
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  ContinueDeviceInputMenu_CallbackFunc_o *v21; // x21
  const MethodInfo *v22; // x2

  if ( (byte_40FBD81 & 1) == 0 )
  {
    sub_B16FFC(&ContinueDeviceInputMenu_CallbackFunc_TypeInfo, isDecide);
    sub_B16FFC(&Method_ContinueDeviceComponent_callbackCodeInput__, v7);
    sub_B16FFC(&Method_ContinueDeviceComponent_onInputCode__, v8);
    sub_B16FFC(&Method_NetworkManager_getRequest_ContinuePrepareRequest___, v9);
    sub_B16FFC(&NetworkManager_TypeInfo, v10);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v11);
    byte_40FBD81 = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 3;
    v12 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   isDecide,
                                                   method,
                                                   v3,
                                                   v4);
    NetworkManager_ResultCallbackFunc___ctor(
      v12,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_callbackCodeInput__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (ContinuePrepareRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v12,
                                                                      (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_ContinuePrepareRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      ContinuePrepareRequest__beginRequest(Request_WarBoardWallAttackRequest, this->fields.passwardCode, v14);
      return;
    }
LABEL_12:
    sub_B170D4();
  }
  continueDeviceConfirmDialog = this->fields.continueDeviceConfirmDialog;
  this->fields.state = 1;
  if ( !continueDeviceConfirmDialog )
    goto LABEL_12;
  CommonConfirmDialog__Close(continueDeviceConfirmDialog, 0LL);
  continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
  v21 = (ContinueDeviceInputMenu_CallbackFunc_o *)sub_B170CC(
                                                    ContinueDeviceInputMenu_CallbackFunc_TypeInfo,
                                                    v17,
                                                    v18,
                                                    v19,
                                                    v20);
  ContinueDeviceInputMenu_CallbackFunc___ctor(
    v21,
    (Il2CppObject *)this,
    Method_ContinueDeviceComponent_onInputCode__,
    0LL);
  if ( !continueDeviceInputMenu )
    goto LABEL_12;
  ContinueDeviceInputMenu__Open(continueDeviceInputMenu, v21, v22);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ContinueDeviceComponent__onConfirmRetry(
        ContinueDeviceComponent_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  ContinueDeviceDispMenu_o *continueDeviceDispMenu; // x20
  System_Action_o *v11; // x21
  const MethodInfo *v12; // x2
  CommonConfirmDialog_o *continueDeviceConfirmDialog; // x20
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  __int64 v17; // x4
  System_Action_o *v18; // x21
  CommonConfirmDialog_o *v19; // x0
  ContinueDeviceDispMenu_o *v20; // x20
  System_String_o *continueCode; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  __int64 v25; // x4
  ContinueDeviceDispMenu_CallbackFunc_o *v26; // x22
  const MethodInfo *v27; // x3

  if ( (byte_40FBD85 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isDecide);
    sub_B16FFC(&ContinueDeviceDispMenu_CallbackFunc_TypeInfo, v7);
    sub_B16FFC(&Method_ContinueDeviceComponent_onDispCode__, v8);
    sub_B16FFC(&Method_ContinueDeviceComponent_onNextRetryOpen__, v9);
    byte_40FBD85 = 1;
  }
  if ( isDecide )
  {
    continueDeviceDispMenu = this->fields.continueDeviceDispMenu;
    *(_QWORD *)&this->fields.state = 0x200000000LL;
    v11 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, isDecide, method, v3, v4);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_ContinueDeviceComponent_onNextRetryOpen__, 0LL);
    if ( continueDeviceDispMenu )
    {
      ContinueDeviceDispMenu__Close_28478168(continueDeviceDispMenu, v11, v12);
      continueDeviceConfirmDialog = this->fields.continueDeviceConfirmDialog;
      v18 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v14, v15, v16, v17);
      System_Action___ctor(v18, (Il2CppObject *)this, Method_ContinueDeviceComponent_onNextRetryOpen__, 0LL);
      if ( continueDeviceConfirmDialog )
      {
        CommonConfirmDialog__Close_18159552(continueDeviceConfirmDialog, v18, 0LL);
        return;
      }
    }
LABEL_10:
    sub_B170D4();
  }
  v19 = this->fields.continueDeviceConfirmDialog;
  this->fields.state = 4;
  if ( !v19 )
    goto LABEL_10;
  CommonConfirmDialog__Close(v19, 0LL);
  v20 = this->fields.continueDeviceDispMenu;
  continueCode = this->fields.continueCode;
  v26 = (ContinueDeviceDispMenu_CallbackFunc_o *)sub_B170CC(
                                                   ContinueDeviceDispMenu_CallbackFunc_TypeInfo,
                                                   v22,
                                                   v23,
                                                   v24,
                                                   v25);
  ContinueDeviceDispMenu_CallbackFunc___ctor(
    v26,
    (Il2CppObject *)this,
    Method_ContinueDeviceComponent_onDispCode__,
    0LL);
  if ( !v20 )
    goto LABEL_10;
  ContinueDeviceDispMenu__Open(v20, continueCode, v26, v27);
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
  __int64 v13; // x3
  __int64 v14; // x4
  CommonConfirmDialog_ClickDelegate_o *v15; // x22
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_40FBD84 & 1) == 0 )
  {
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, isDecide);
    sub_B16FFC(&Method_ContinueDeviceComponent_onConfirmRetry__, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&StringLiteral_3355/*"CONTINUE_DEVICE_CONFIRM_MESSAGE2"*/, v7);
    sub_B16FFC(&StringLiteral_3086/*"CLOSE_CONTINUE_DEVICE"*/, v8);
    byte_40FBD84 = 1;
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
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_3355/*"CONTINUE_DEVICE_CONFIRM_MESSAGE2"*/, 0LL);
    v15 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                   CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                   v11,
                                                   v12,
                                                   v13,
                                                   v14);
    CommonConfirmDialog_ClickDelegate___ctor(
      v15,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_onConfirmRetry__,
      0LL);
    if ( continueDeviceConfirmDialog )
    {
      CommonConfirmDialog__Open(continueDeviceConfirmDialog, 0LL, v10, v15, 0, 0, 0, 0LL);
      return;
    }
LABEL_11:
    sub_B170D4();
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_11;
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3086/*"CLOSE_CONTINUE_DEVICE"*/, 0LL);
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
  __int64 v16; // x3
  __int64 v17; // x4
  NetworkManager_ResultCallbackFunc_o *v18; // x20
  ContinuePrepareRequest_o *Request_WarBoardWallAttackRequest; // x0
  const MethodInfo *v20; // x2
  MyRoomControl_o *myRoomCtrl; // x0
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_40FBD80 & 1) == 0 )
  {
    sub_B16FFC(&Method_ContinueDeviceComponent_callbackCodeInput__, code);
    sub_B16FFC(&Method_NetworkManager_getRequest_ContinuePrepareRequest___, v10);
    sub_B16FFC(&NetworkManager_TypeInfo, v11);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v12);
    sub_B16FFC(&StringLiteral_3086/*"CLOSE_CONTINUE_DEVICE"*/, v13);
    byte_40FBD80 = 1;
  }
  if ( code )
  {
    this->fields.passwardCode = code;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.passwardCode,
      (System_Int32_array **)code,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.state = 3;
    v18 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                   NetworkManager_ResultCallbackFunc_TypeInfo,
                                                   v14,
                                                   v15,
                                                   v16,
                                                   v17);
    NetworkManager_ResultCallbackFunc___ctor(
      v18,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_callbackCodeInput__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (ContinuePrepareRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v18,
                                                                      (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_ContinuePrepareRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      ContinuePrepareRequest__beginRequest(Request_WarBoardWallAttackRequest, this->fields.passwardCode, v20);
      myRoomCtrl = this->fields.myRoomCtrl;
      if ( myRoomCtrl )
      {
        MyRoomControl__SetBackButtonIgnore(myRoomCtrl, 1, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B170D4();
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_12;
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3086/*"CLOSE_CONTINUE_DEVICE"*/, 0LL);
}


void __fastcall ContinueDeviceComponent__onNextDispOpen(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  int32_t v7; // w8
  ContinueDeviceDispMenu_o *continueDeviceDispMenu; // x20
  System_String_o *continueCode; // x21
  ContinueDeviceDispMenu_CallbackFunc_o *v10; // x22
  const MethodInfo *v11; // x3
  MyRoomControl_o *myRoomCtrl; // x0

  if ( (byte_40FBD83 & 1) == 0 )
  {
    sub_B16FFC(&ContinueDeviceDispMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_ContinueDeviceComponent_onDispCode__, v6);
    byte_40FBD83 = 1;
  }
  v7 = this->fields.closeCount - 1;
  this->fields.closeCount = v7;
  if ( !v7 )
  {
    this->fields.state = 4;
    continueDeviceDispMenu = this->fields.continueDeviceDispMenu;
    continueCode = this->fields.continueCode;
    v10 = (ContinueDeviceDispMenu_CallbackFunc_o *)sub_B170CC(
                                                     ContinueDeviceDispMenu_CallbackFunc_TypeInfo,
                                                     method,
                                                     v2,
                                                     v3,
                                                     v4);
    ContinueDeviceDispMenu_CallbackFunc___ctor(
      v10,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_onDispCode__,
      0LL);
    if ( !continueDeviceDispMenu
      || (ContinueDeviceDispMenu__Open(continueDeviceDispMenu, continueCode, v10, v11),
          (myRoomCtrl = this->fields.myRoomCtrl) == 0LL) )
    {
      sub_B170D4();
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
  __int64 v23; // x3
  __int64 v24; // x4
  ContinueDeviceInputMenu_CallbackFunc_o *v25; // x21
  const MethodInfo *v26; // x2

  if ( (byte_40FBD86 & 1) == 0 )
  {
    sub_B16FFC(&ContinueDeviceInputMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&Method_ContinueDeviceComponent_onInputCode__, v9);
    sub_B16FFC(&StringLiteral_1/*""*/, v10);
    byte_40FBD86 = 1;
  }
  v11 = this->fields.closeCount - 1;
  this->fields.closeCount = v11;
  if ( !v11 )
  {
    this->fields.state = 1;
    v12 = (System_Int32_array **)StringLiteral_1/*""*/;
    this->fields.passwardCode = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.passwardCode, v12, v2, v3, v4, v5, v6, v7);
    v13 = (System_Int32_array **)StringLiteral_1/*""*/;
    this->fields.continueCode = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.continueCode, v13, v14, v15, v16, v17, v18, v19);
    continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
    v25 = (ContinueDeviceInputMenu_CallbackFunc_o *)sub_B170CC(
                                                      ContinueDeviceInputMenu_CallbackFunc_TypeInfo,
                                                      v21,
                                                      v22,
                                                      v23,
                                                      v24);
    ContinueDeviceInputMenu_CallbackFunc___ctor(
      v25,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_onInputCode__,
      0LL);
    if ( !continueDeviceInputMenu )
      sub_B170D4();
    ContinueDeviceInputMenu__Open(continueDeviceInputMenu, v25, v26);
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
  UnityEngine_GameObject_o *gameObject; // x0
  WebViewManager_o *Instance; // x0
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  int64_t UserId; // x0
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_Int32_array **v21; // x1
  System_Int32_array **v22; // x1
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  ContinueDeviceInputMenu_CallbackFunc_o *v34; // x21
  const MethodInfo *v35; // x2
  System_Int32_array **v37; // x1
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct System_String_o *fakeValue; // x1
  ContinueDeviceDispMenu_o *continueDeviceDispMenu; // x20
  System_String_o *continueCode; // x21
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  ContinueDeviceDispMenu_CallbackFunc_o *v51; // x22
  const MethodInfo *v52; // x3
  UserServantEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_40FBD7D & 1) == 0 )
  {
    sub_B16FFC(&ContinueDeviceDispMenu_CallbackFunc_TypeInfo, method);
    sub_B16FFC(&ContinueDeviceInputMenu_CallbackFunc_TypeInfo, v3);
    sub_B16FFC(&Method_ContinueDeviceComponent_onDispCode__, v4);
    sub_B16FFC(&Method_ContinueDeviceComponent_onInputCode__, v5);
    sub_B16FFC(&Method_DataManager_GetMasterData_UserContinueMaster___, v6);
    sub_B16FFC(&Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long__TryGetEntity__, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v9);
    sub_B16FFC(&StringLiteral_1/*""*/, v10);
    byte_40FBD7D = 1;
  }
  entity = 0LL;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)Instance, (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_UserContinueMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_18;
  if ( DataMasterBase_UserServantStorageMaster__UserServantEntity__long___TryGetEntity(
         MasterData_WarQuestSelectionMaster,
         &entity,
         UserId,
         (const MethodInfo_266F60C *)Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long__TryGetEntity__) )
  {
    if ( !entity )
      goto LABEL_18;
    if ( !LODWORD(entity->fields.id.fields.hiddenValue) )
    {
      this->fields.state = 4;
      v37 = (System_Int32_array **)StringLiteral_1/*""*/;
      this->fields.passwardCode = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_B16F98((BattleServantConfConponent_o *)&this->fields.passwardCode, v37, v15, v16, v17, v18, v19, v20);
      if ( entity )
      {
        fakeValue = (struct System_String_o *)entity->fields.id.fields.fakeValue;
        this->fields.continueCode = fakeValue;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.continueCode,
          (System_Int32_array **)fakeValue,
          v38,
          v39,
          v40,
          v41,
          v42,
          v43);
        continueDeviceDispMenu = this->fields.continueDeviceDispMenu;
        continueCode = this->fields.continueCode;
        v51 = (ContinueDeviceDispMenu_CallbackFunc_o *)sub_B170CC(
                                                         ContinueDeviceDispMenu_CallbackFunc_TypeInfo,
                                                         v47,
                                                         v48,
                                                         v49,
                                                         v50);
        ContinueDeviceDispMenu_CallbackFunc___ctor(
          v51,
          (Il2CppObject *)this,
          Method_ContinueDeviceComponent_onDispCode__,
          0LL);
        if ( continueDeviceDispMenu )
        {
          ContinueDeviceDispMenu__Open(continueDeviceDispMenu, continueCode, v51, v52);
          return 1;
        }
      }
LABEL_18:
      sub_B170D4();
    }
  }
  this->fields.state = 1;
  v21 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.passwardCode = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.passwardCode, v21, v15, v16, v17, v18, v19, v20);
  v22 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.continueCode = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.continueCode, v22, v23, v24, v25, v26, v27, v28);
  continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
  v34 = (ContinueDeviceInputMenu_CallbackFunc_o *)sub_B170CC(
                                                    ContinueDeviceInputMenu_CallbackFunc_TypeInfo,
                                                    v30,
                                                    v31,
                                                    v32,
                                                    v33);
  ContinueDeviceInputMenu_CallbackFunc___ctor(
    v34,
    (Il2CppObject *)this,
    Method_ContinueDeviceComponent_onInputCode__,
    0LL);
  if ( !continueDeviceInputMenu )
    goto LABEL_18;
  ContinueDeviceInputMenu__Open(continueDeviceInputMenu, v34, v35);
  return 1;
}


void __fastcall ContinueDeviceComponent__showMenu(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v4; // x1
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x0
  const MethodInfo *v6; // x1
  ContinueDeviceDispMenu_o *continueDeviceDispMenu; // x0
  CommonConfirmDialog_o *continueDeviceConfirmDialog; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 1, 0LL),
        continueDeviceInputMenu = this->fields.continueDeviceInputMenu,
        this->fields.state = 0,
        !continueDeviceInputMenu)
    || (ContinueDeviceInputMenu__Init(continueDeviceInputMenu, v4),
        (continueDeviceDispMenu = this->fields.continueDeviceDispMenu) == 0LL)
    || (ContinueDeviceDispMenu__Init(continueDeviceDispMenu, v6),
        (continueDeviceConfirmDialog = this->fields.continueDeviceConfirmDialog) == 0LL) )
  {
    sub_B170D4();
  }
  CommonConfirmDialog__Init(continueDeviceConfirmDialog, 0LL);
}