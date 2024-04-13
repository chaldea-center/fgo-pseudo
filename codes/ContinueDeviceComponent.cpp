void __fastcall ContinueDeviceComponent___ctor(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall ContinueDeviceComponent__callbackCodeInput(
        ContinueDeviceComponent_o *this,
        System_String_o *result,
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  __int64 v21; // x1
  DataMasterBase_UserGameMaster__UserGameEntity__long__o *Master_WarQuestSelectionMaster; // x0
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  struct System_String_o *birthDay; // x1
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  System_Action_o *v31; // x21
  const MethodInfo *v32; // x2
  UserGameEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EA775 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ContinueDeviceComponent_onNextDispOpen__, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMaster_UserContinueMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long__TryGetSingleEntity__, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v18, v19, v20);
    byte_42EA775 = 1;
  }
  entity = 0LL;
  if ( !System_String__op_Inequality(result, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL) )
    goto LABEL_11;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserContinueMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_16;
  Master_WarQuestSelectionMaster = (DataMasterBase_UserGameMaster__UserGameEntity__long__o *)DataMasterBase_UserGameMaster__UserGameEntity__long___TryGetSingleEntity(
                                                                                               Master_WarQuestSelectionMaster,
                                                                                               &entity,
                                                                                               (const MethodInfo_23FB120 *)Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long__TryGetSingleEntity__);
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
    sub_B5D69C(Master_WarQuestSelectionMaster, v21);
  }
  birthDay = (struct System_String_o *)entity->fields.birthDay;
  this->fields.continueCode = birthDay;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.continueCode,
    (System_Int32_array **)birthDay,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
  *(_QWORD *)&this->fields.state = 0x100000000LL;
  v31 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v31, (Il2CppObject *)this, Method_ContinueDeviceComponent_onNextDispOpen__, 0LL);
  if ( !continueDeviceInputMenu )
    goto LABEL_16;
  ContinueDeviceInputMenu__Close_28739680(continueDeviceInputMenu, v31, v32);
}


bool __fastcall ContinueDeviceComponent__closeMenu(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  ContinueDeviceDispMenu_o *continueDeviceDispMenu; // x20
  System_Action_o *v14; // x21
  const MethodInfo *v15; // x2
  ContinueDeviceInputMenu_o *v16; // x20
  System_Action_o *v17; // x21
  const MethodInfo *v18; // x2
  ContinueDeviceDispMenu_o *v19; // x20
  System_Action_o *v20; // x21
  const MethodInfo *v21; // x2
  CommonConfirmDialog_o *continueDeviceConfirmDialog; // x20
  System_Action_o *v23; // x21

  if ( (byte_42EA771 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ContinueDeviceComponent_onClose__, v5, v6, v7);
    byte_42EA771 = 1;
  }
  switch ( this->fields.state )
  {
    case 1:
      this->fields.closeCount = 1;
      continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
      v9 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v9, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0LL);
      if ( !continueDeviceInputMenu )
        goto LABEL_16;
      ContinueDeviceInputMenu__Close_28739680(continueDeviceInputMenu, v9, v12);
      return 1;
    case 2:
      this->fields.closeCount = 2;
      v16 = this->fields.continueDeviceInputMenu;
      v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v17, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0LL);
      if ( !v16 )
        goto LABEL_16;
      ContinueDeviceInputMenu__Close_28739680(v16, v17, v18);
      goto LABEL_12;
    case 4:
      this->fields.closeCount = 1;
      continueDeviceDispMenu = this->fields.continueDeviceDispMenu;
      v14 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v14, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0LL);
      if ( !continueDeviceDispMenu )
        goto LABEL_16;
      ContinueDeviceDispMenu__Close_28740000(continueDeviceDispMenu, v14, v15);
      return 1;
    case 5:
      this->fields.closeCount = 2;
      v19 = this->fields.continueDeviceDispMenu;
      v20 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v20, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0LL);
      if ( !v19 )
        goto LABEL_16;
      ContinueDeviceDispMenu__Close_28740000(v19, v20, v21);
LABEL_12:
      continueDeviceConfirmDialog = this->fields.continueDeviceConfirmDialog;
      v23 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v23, (Il2CppObject *)this, Method_ContinueDeviceComponent_onClose__, 0LL);
      if ( !continueDeviceConfirmDialog )
LABEL_16:
        sub_B5D69C(v10, v11);
      CommonConfirmDialog__Close_18121248(continueDeviceConfirmDialog, v23, 0LL);
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
    sub_B5D69C(continueDeviceInputMenu, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)continueDeviceInputMenu, 0, 0LL);
}


void __fastcall ContinueDeviceComponent__onClose(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int32_t v5; // w8
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_42EA772 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3168/*"CLOSE_MENU"*/, (_DWORD)method, v2, v3);
    byte_42EA772 = 1;
  }
  v5 = this->fields.closeCount - 1;
  this->fields.closeCount = v5;
  if ( !v5 )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      sub_B5D69C(0LL, method);
    PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3168/*"CLOSE_MENU"*/, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ContinueDeviceComponent__onCloseDialog(
        ContinueDeviceComponent_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_42EA77A & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_3172/*"CLOSE_SERIAL_CODE"*/, result, (_DWORD)method, v3);
    byte_42EA77A = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_B5D69C(0LL, result);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3172/*"CLOSE_SERIAL_CODE"*/, 0LL);
}


void __fastcall ContinueDeviceComponent__onCloseMenu(
        ContinueDeviceComponent_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CommonUI_o *Instance; // x0
  __int64 v9; // x1

  if ( (byte_42EA77B & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, result, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_3172/*"CLOSE_SERIAL_CODE"*/, v5, v6, v7);
    byte_42EA77B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__ClosePresentBoxNotificationMenu(Instance, 0LL),
        (Instance = (CommonUI_o *)this->fields.myRoomFsm) == 0LL) )
  {
    sub_B5D69C(Instance, v9);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_3172/*"CLOSE_SERIAL_CODE"*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ContinueDeviceComponent__onConfirmCode(
        ContinueDeviceComponent_o *this,
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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  NetworkManager_ResultCallbackFunc_o *v21; // x20
  ContinuePrepareRequest_o *Request_WarBoardWallAttackRequest; // x0
  const MethodInfo *v23; // x2
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  ContinueDeviceInputMenu_CallbackFunc_o *v25; // x21
  const MethodInfo *v26; // x2

  if ( (byte_42EA774 & 1) == 0 )
  {
    sub_B5D5C4(&ContinueDeviceInputMenu_CallbackFunc_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ContinueDeviceComponent_callbackCodeInput__, v6, v7, v8);
    sub_B5D5C4(&Method_ContinueDeviceComponent_onInputCode__, v9, v10, v11);
    sub_B5D5C4(&Method_NetworkManager_getRequest_ContinuePrepareRequest___, v12, v13, v14);
    sub_B5D5C4(&NetworkManager_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v18, v19, v20);
    byte_42EA774 = 1;
  }
  if ( isDecide )
  {
    this->fields.state = 3;
    v21 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v21,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_callbackCodeInput__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (ContinuePrepareRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v21,
                                                                      (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_ContinuePrepareRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      ContinuePrepareRequest__beginRequest(Request_WarBoardWallAttackRequest, this->fields.passwardCode, v23);
      return;
    }
LABEL_12:
    sub_B5D69C(Request_WarBoardWallAttackRequest, isDecide);
  }
  Request_WarBoardWallAttackRequest = (ContinuePrepareRequest_o *)this->fields.continueDeviceConfirmDialog;
  this->fields.state = 1;
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_12;
  CommonConfirmDialog__Close((CommonConfirmDialog_o *)Request_WarBoardWallAttackRequest, 0LL);
  continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
  v25 = (ContinueDeviceInputMenu_CallbackFunc_o *)sub_B5D694(ContinueDeviceInputMenu_CallbackFunc_TypeInfo);
  ContinueDeviceInputMenu_CallbackFunc___ctor(
    v25,
    (Il2CppObject *)this,
    Method_ContinueDeviceComponent_onInputCode__,
    0LL);
  if ( !continueDeviceInputMenu )
    goto LABEL_12;
  ContinueDeviceInputMenu__Open(continueDeviceInputMenu, v25, v26);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ContinueDeviceComponent__onConfirmRetry(
        ContinueDeviceComponent_o *this,
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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  ContinueDeviceDispMenu_o *continueDeviceDispMenu; // x20
  System_Action_o *v16; // x21
  CommonConfirmDialog_o *v17; // x0
  const MethodInfo *v18; // x2
  CommonConfirmDialog_o *continueDeviceConfirmDialog; // x20
  System_Action_o *v20; // x21
  ContinueDeviceDispMenu_o *v21; // x20
  System_String_o *continueCode; // x21
  ContinueDeviceDispMenu_CallbackFunc_o *v23; // x22
  const MethodInfo *v24; // x3

  if ( (byte_42EA778 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&ContinueDeviceDispMenu_CallbackFunc_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_ContinueDeviceComponent_onDispCode__, v9, v10, v11);
    sub_B5D5C4(&Method_ContinueDeviceComponent_onNextRetryOpen__, v12, v13, v14);
    byte_42EA778 = 1;
  }
  if ( isDecide )
  {
    continueDeviceDispMenu = this->fields.continueDeviceDispMenu;
    *(_QWORD *)&this->fields.state = 0x200000000LL;
    v16 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v16, (Il2CppObject *)this, Method_ContinueDeviceComponent_onNextRetryOpen__, 0LL);
    if ( continueDeviceDispMenu )
    {
      ContinueDeviceDispMenu__Close_28740000(continueDeviceDispMenu, v16, v18);
      continueDeviceConfirmDialog = this->fields.continueDeviceConfirmDialog;
      v20 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v20, (Il2CppObject *)this, Method_ContinueDeviceComponent_onNextRetryOpen__, 0LL);
      if ( continueDeviceConfirmDialog )
      {
        CommonConfirmDialog__Close_18121248(continueDeviceConfirmDialog, v20, 0LL);
        return;
      }
    }
LABEL_10:
    sub_B5D69C(v17, isDecide);
  }
  v17 = this->fields.continueDeviceConfirmDialog;
  this->fields.state = 4;
  if ( !v17 )
    goto LABEL_10;
  CommonConfirmDialog__Close(v17, 0LL);
  v21 = this->fields.continueDeviceDispMenu;
  continueCode = this->fields.continueCode;
  v23 = (ContinueDeviceDispMenu_CallbackFunc_o *)sub_B5D694(ContinueDeviceDispMenu_CallbackFunc_TypeInfo);
  ContinueDeviceDispMenu_CallbackFunc___ctor(
    v23,
    (Il2CppObject *)this,
    Method_ContinueDeviceComponent_onDispCode__,
    0LL);
  if ( !v21 )
    goto LABEL_10;
  ContinueDeviceDispMenu__Open(v21, continueCode, v23, v24);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ContinueDeviceComponent__onDispCode(
        ContinueDeviceComponent_o *this,
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
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  CommonConfirmDialog_o *continueDeviceConfirmDialog; // x20
  System_String_o *v19; // x21
  CommonConfirmDialog_ClickDelegate_o *v20; // x22
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_42EA777 & 1) == 0 )
  {
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, isDecide, (_DWORD)method, v3);
    sub_B5D5C4(&Method_ContinueDeviceComponent_onConfirmRetry__, v6, v7, v8);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_3430/*"CONTINUE_DEVICE_CONFIRM_MESSAGE2"*/, v12, v13, v14);
    sub_B5D5C4(&StringLiteral_3160/*"CLOSE_CONTINUE_DEVICE"*/, v15, v16, v17);
    byte_42EA777 = 1;
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
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_3430/*"CONTINUE_DEVICE_CONFIRM_MESSAGE2"*/, 0LL);
    v20 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
    CommonConfirmDialog_ClickDelegate___ctor(
      v20,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_onConfirmRetry__,
      0LL);
    if ( continueDeviceConfirmDialog )
    {
      CommonConfirmDialog__Open(continueDeviceConfirmDialog, 0LL, v19, v20, 0, 0, 0, 0LL);
      return;
    }
LABEL_11:
    sub_B5D69C(myRoomFsm, isDecide);
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_11;
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3160/*"CLOSE_CONTINUE_DEVICE"*/, 0LL);
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
  NetworkManager_ResultCallbackFunc_o *v22; // x20
  ContinuePrepareRequest_o *Request_WarBoardWallAttackRequest; // x0
  const MethodInfo *v24; // x2

  if ( (byte_42EA773 & 1) == 0 )
  {
    sub_B5D5C4(&Method_ContinueDeviceComponent_callbackCodeInput__, (_DWORD)code, (_DWORD)method, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_ContinuePrepareRequest___, v10, v11, v12);
    sub_B5D5C4(&NetworkManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_3160/*"CLOSE_CONTINUE_DEVICE"*/, v19, v20, v21);
    byte_42EA773 = 1;
  }
  if ( code )
  {
    this->fields.passwardCode = code;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.passwardCode,
      (System_Int32_array **)code,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.state = 3;
    v22 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
    NetworkManager_ResultCallbackFunc___ctor(
      v22,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_callbackCodeInput__,
      0LL);
    if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    }
    Request_WarBoardWallAttackRequest = (ContinuePrepareRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                      v22,
                                                                      (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_ContinuePrepareRequest___);
    if ( Request_WarBoardWallAttackRequest )
    {
      ContinuePrepareRequest__beginRequest(Request_WarBoardWallAttackRequest, this->fields.passwardCode, v24);
      Request_WarBoardWallAttackRequest = (ContinuePrepareRequest_o *)this->fields.myRoomCtrl;
      if ( Request_WarBoardWallAttackRequest )
      {
        MyRoomControl__SetBackButtonIgnore((MyRoomControl_o *)Request_WarBoardWallAttackRequest, 1, 0LL);
        return;
      }
    }
LABEL_12:
    sub_B5D69C(Request_WarBoardWallAttackRequest, code);
  }
  Request_WarBoardWallAttackRequest = (ContinuePrepareRequest_o *)this->fields.myRoomFsm;
  if ( !Request_WarBoardWallAttackRequest )
    goto LABEL_12;
  PlayMakerFSM__SendEvent(
    (PlayMakerFSM_o *)Request_WarBoardWallAttackRequest,
    (System_String_o *)StringLiteral_3160/*"CLOSE_CONTINUE_DEVICE"*/,
    0LL);
}


void __fastcall ContinueDeviceComponent__onNextDispOpen(ContinueDeviceComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int32_t v8; // w8
  ContinueDeviceDispMenu_o *continueDeviceDispMenu; // x20
  System_String_o *continueCode; // x21
  ContinueDeviceDispMenu_CallbackFunc_o *v11; // x22
  MyRoomControl_o *myRoomCtrl; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3

  if ( (byte_42EA776 & 1) == 0 )
  {
    sub_B5D5C4(&ContinueDeviceDispMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_ContinueDeviceComponent_onDispCode__, v5, v6, v7);
    byte_42EA776 = 1;
  }
  v8 = this->fields.closeCount - 1;
  this->fields.closeCount = v8;
  if ( !v8 )
  {
    this->fields.state = 4;
    continueDeviceDispMenu = this->fields.continueDeviceDispMenu;
    continueCode = this->fields.continueCode;
    v11 = (ContinueDeviceDispMenu_CallbackFunc_o *)sub_B5D694(ContinueDeviceDispMenu_CallbackFunc_TypeInfo);
    ContinueDeviceDispMenu_CallbackFunc___ctor(
      v11,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_onDispCode__,
      0LL);
    if ( !continueDeviceDispMenu
      || (ContinueDeviceDispMenu__Open(continueDeviceDispMenu, continueCode, v11, v14),
          (myRoomCtrl = this->fields.myRoomCtrl) == 0LL) )
    {
      sub_B5D69C(myRoomCtrl, v13);
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
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int32_t v15; // w8
  System_Int32_array **v16; // x1
  System_Int32_array **v17; // x1
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  ContinueDeviceInputMenu_CallbackFunc_o *v25; // x21
  __int64 v26; // x0
  __int64 v27; // x1
  const MethodInfo *v28; // x2

  if ( (byte_42EA779 & 1) == 0 )
  {
    sub_B5D5C4(&ContinueDeviceInputMenu_CallbackFunc_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&Method_ContinueDeviceComponent_onInputCode__, v9, v10, v11);
    sub_B5D5C4(&StringLiteral_1/*""*/, v12, v13, v14);
    byte_42EA779 = 1;
  }
  v15 = this->fields.closeCount - 1;
  this->fields.closeCount = v15;
  if ( !v15 )
  {
    this->fields.state = 1;
    v16 = (System_Int32_array **)StringLiteral_1/*""*/;
    this->fields.passwardCode = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.passwardCode, v16, v2, v3, v4, v5, v6, v7);
    v17 = (System_Int32_array **)StringLiteral_1/*""*/;
    this->fields.continueCode = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.continueCode, v17, v18, v19, v20, v21, v22, v23);
    continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
    v25 = (ContinueDeviceInputMenu_CallbackFunc_o *)sub_B5D694(ContinueDeviceInputMenu_CallbackFunc_TypeInfo);
    ContinueDeviceInputMenu_CallbackFunc___ctor(
      v25,
      (Il2CppObject *)this,
      Method_ContinueDeviceComponent_onInputCode__,
      0LL);
    if ( !continueDeviceInputMenu )
      sub_B5D69C(v26, v27);
    ContinueDeviceInputMenu__Open(continueDeviceInputMenu, v25, v28);
  }
}


bool __fastcall ContinueDeviceComponent__openMenu(ContinueDeviceComponent_o *this, const MethodInfo *method)
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
  int64_t gameObject; // x0
  __int64 v30; // x1
  DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *MasterData_WarQuestSelectionMaster; // x20
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  System_Int32_array **v38; // x1
  System_Int32_array **v39; // x1
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  ContinueDeviceInputMenu_o *continueDeviceInputMenu; // x20
  ContinueDeviceInputMenu_CallbackFunc_o *v47; // x21
  const MethodInfo *v48; // x2
  System_Int32_array **v50; // x1
  System_String_array **v51; // x2
  System_String_array **v52; // x3
  System_Boolean_array **v53; // x4
  System_Int32_array **v54; // x5
  System_Int32_array *v55; // x6
  System_Int32_array *v56; // x7
  struct System_String_o *fakeValue; // x1
  ContinueDeviceDispMenu_o *continueDeviceDispMenu; // x20
  System_String_o *continueCode; // x21
  ContinueDeviceDispMenu_CallbackFunc_o *v60; // x22
  const MethodInfo *v61; // x3
  UserServantEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42EA770 & 1) == 0 )
  {
    sub_B5D5C4(&ContinueDeviceDispMenu_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ContinueDeviceInputMenu_CallbackFunc_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_ContinueDeviceComponent_onDispCode__, v8, v9, v10);
    sub_B5D5C4(&Method_ContinueDeviceComponent_onInputCode__, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMasterData_UserContinueMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long__TryGetEntity__, v17, v18, v19);
    sub_B5D5C4(&NetworkManager_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_1/*""*/, v26, v27, v28);
    byte_42EA770 = 1;
  }
  entity = 0LL;
  gameObject = (int64_t)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
  gameObject = (int64_t)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !gameObject )
    goto LABEL_18;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_UserServantStorageMaster__UserServantEntity__long__o *)DataManager__GetMasterData_WarQuestSelectionMaster_((DataManager_o *)gameObject, (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_UserContinueMaster___);
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
                 (const MethodInfo_23FB094 *)Method_DataMasterBase_UserContinueMaster__UserContinueEntity__long__TryGetEntity__);
  if ( (gameObject & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_18;
    if ( !LODWORD(entity->fields.id.fields.hiddenValue) )
    {
      this->fields.state = 4;
      v50 = (System_Int32_array **)StringLiteral_1/*""*/;
      this->fields.passwardCode = (struct System_String_o *)StringLiteral_1/*""*/;
      sub_B5D560((BattleServantConfConponent_o *)&this->fields.passwardCode, v50, v32, v33, v34, v35, v36, v37);
      if ( entity )
      {
        fakeValue = (struct System_String_o *)entity->fields.id.fields.fakeValue;
        this->fields.continueCode = fakeValue;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields.continueCode,
          (System_Int32_array **)fakeValue,
          v51,
          v52,
          v53,
          v54,
          v55,
          v56);
        continueDeviceDispMenu = this->fields.continueDeviceDispMenu;
        continueCode = this->fields.continueCode;
        v60 = (ContinueDeviceDispMenu_CallbackFunc_o *)sub_B5D694(ContinueDeviceDispMenu_CallbackFunc_TypeInfo);
        ContinueDeviceDispMenu_CallbackFunc___ctor(
          v60,
          (Il2CppObject *)this,
          Method_ContinueDeviceComponent_onDispCode__,
          0LL);
        if ( continueDeviceDispMenu )
        {
          ContinueDeviceDispMenu__Open(continueDeviceDispMenu, continueCode, v60, v61);
          return 1;
        }
      }
LABEL_18:
      sub_B5D69C(gameObject, v30);
    }
  }
  this->fields.state = 1;
  v38 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.passwardCode = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.passwardCode, v38, v32, v33, v34, v35, v36, v37);
  v39 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.continueCode = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.continueCode, v39, v40, v41, v42, v43, v44, v45);
  continueDeviceInputMenu = this->fields.continueDeviceInputMenu;
  v47 = (ContinueDeviceInputMenu_CallbackFunc_o *)sub_B5D694(ContinueDeviceInputMenu_CallbackFunc_TypeInfo);
  ContinueDeviceInputMenu_CallbackFunc___ctor(
    v47,
    (Il2CppObject *)this,
    Method_ContinueDeviceComponent_onInputCode__,
    0LL);
  if ( !continueDeviceInputMenu )
    goto LABEL_18;
  ContinueDeviceInputMenu__Open(continueDeviceInputMenu, v47, v48);
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
    sub_B5D69C(gameObject, v4);
  }
  CommonConfirmDialog__Init((CommonConfirmDialog_o *)gameObject, 0LL);
}