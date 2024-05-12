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
  sub_B77560(
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
  NetworkManager_ResultCallbackFunc_o *v5; // x21
  ClassBoardReleaseLockRequest_o *Request_WarBoardWallAttackRequest; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  CommonUI_o *Instance; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  struct ClassBoardSquareEntity_o *squareEntity; // x8
  ClassBoardReleaseRequestData_o v17; // 0:x1.8

  if ( (byte_438D3D9 & 1) == 0 )
  {
    sub_B775C4(&Method_ClassBoardSquareUser_OnReleaseResponse__);
    sub_B775C4(&Method_NetworkManager_getRequest_ClassBoardReleaseLockRequest___);
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438D3D9 = 1;
  }
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_B77694(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_ClassBoardSquareUser_OnReleaseResponse__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (ClassBoardReleaseLockRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                          v5,
                                                                          (const MethodInfo_1DF8BE8 *)Method_NetworkManager_getRequest_ClassBoardReleaseLockRequest___);
  this->fields.releaseResponseCallback = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.releaseResponseCallback,
    (System_Int32_array **)callback,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetConnect(Instance, 1, 0LL), (squareEntity = this->fields.squareEntity) == 0LL)
    || !Request_WarBoardWallAttackRequest )
  {
    sub_B7769C(Instance, v14);
  }
  v17 = *(ClassBoardReleaseRequestData_o *)&squareEntity->fields.classBoardBaseId;
  ClassBoardReleaseLockRequest__beginRequest(Request_WarBoardWallAttackRequest, v17, v15);
}