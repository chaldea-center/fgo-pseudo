void __fastcall ClassBoardLockUser___ctor(
        ClassBoardLockUser_o *this,
        ClassBoardSquareEntity_o *masterEntity,
        const MethodInfo *method)
{
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.squareEntity = masterEntity;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.squareEntity,
    (System_Int32_array **)masterEntity,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall ClassBoardLockUser__RequestRelease(
        ClassBoardLockUser_o *this,
        System_Action_IClassBoardSquareUser__o *callback,
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
  NetworkManager_ResultCallbackFunc_o *v18; // x21
  ClassBoardReleaseLockRequest_o *Request_WarBoardWallAttackRequest; // x21
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  CommonUI_o *Instance; // x0
  __int64 v27; // x1
  const MethodInfo *v28; // x2
  struct ClassBoardSquareEntity_o *squareEntity; // x8
  ClassBoardReleaseRequestData_o v30; // 0:x1.8

  if ( (byte_42EA827 & 1) == 0 )
  {
    sub_B5D5C4(&Method_ClassBoardSquareUser_OnReleaseResponse__, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_ClassBoardReleaseLockRequest___, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15, v16, v17);
    byte_42EA827 = 1;
  }
  v18 = (NetworkManager_ResultCallbackFunc_o *)sub_B5D694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v18,
    (Il2CppObject *)this,
    Method_ClassBoardSquareUser_OnReleaseResponse__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (ClassBoardReleaseLockRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                          v18,
                                                                          (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_ClassBoardReleaseLockRequest___);
  this->fields.releaseResponseCallback = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.releaseResponseCallback,
    (System_Int32_array **)callback,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetConnect(Instance, 1, 0LL), (squareEntity = this->fields.squareEntity) == 0LL)
    || !Request_WarBoardWallAttackRequest )
  {
    sub_B5D69C(Instance, v27);
  }
  v30 = *(ClassBoardReleaseRequestData_o *)&squareEntity->fields.classBoardBaseId;
  ClassBoardReleaseLockRequest__beginRequest(Request_WarBoardWallAttackRequest, v30, v28);
}