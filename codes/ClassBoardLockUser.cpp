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
  sub_B2C2F8(
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  NetworkManager_ResultCallbackFunc_o *v9; // x21
  ClassBoardReleaseLockRequest_o *Request_WarBoardWallAttackRequest; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  CommonUI_o *Instance; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  struct ClassBoardSquareEntity_o *squareEntity; // x8
  ClassBoardReleaseRequestData_o v21; // 0:x1.8

  if ( (byte_4189512 & 1) == 0 )
  {
    sub_B2C35C(&Method_ClassBoardSquareUser_OnReleaseResponse__, callback);
    sub_B2C35C(&Method_NetworkManager_getRequest_ClassBoardReleaseLockRequest___, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_4189512 = 1;
  }
  v9 = (NetworkManager_ResultCallbackFunc_o *)sub_B2C42C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_ClassBoardSquareUser_OnReleaseResponse__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (ClassBoardReleaseLockRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                          v9,
                                                                          (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_ClassBoardReleaseLockRequest___);
  this->fields.releaseResponseCallback = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.releaseResponseCallback,
    (System_Int32_array **)callback,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetConnect(Instance, 1, 0LL), (squareEntity = this->fields.squareEntity) == 0LL)
    || !Request_WarBoardWallAttackRequest )
  {
    sub_B2C434(Instance, v18);
  }
  v21 = *(ClassBoardReleaseRequestData_o *)&squareEntity->fields.classBoardBaseId;
  ClassBoardReleaseLockRequest__beginRequest(Request_WarBoardWallAttackRequest, v21, v19);
}