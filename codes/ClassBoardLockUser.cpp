void __fastcall ClassBoardLockUser___ctor(
        ClassBoardLockUser_o *this,
        ClassBoardSquareEntity_o *masterEntity,
        const MethodInfo *method)
{
  ClassBoardSquareUser___ctor((ClassBoardSquareUser_o *)this, masterEntity, 0LL);
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
  struct ClassBoardSquareEntity_o *squareEntity; // x8
  int32_t classBoardBaseId; // w1
  int32_t id; // w2
  ClassBoardReleaseRequestData_o data; // [xsp+8h] [xbp-18h] BYREF
  ClassBoardReleaseRequestData_o p_data; // 0:x0.8
  ClassBoardReleaseRequestData_o v20; // 0:x1.8

  if ( (byte_42B388D & 1) == 0 )
  {
    sub_B52984(&Method_ClassBoardSquareUser_OnReleaseResponse__);
    sub_B52984(&Method_NetworkManager_getRequest_ClassBoardReleaseLockRequest___);
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_42B388D = 1;
  }
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_B52A54(NetworkManager_ResultCallbackFunc_TypeInfo);
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
                                                                          (const MethodInfo_1F705CC *)Method_NetworkManager_getRequest_ClassBoardReleaseLockRequest___);
  this->fields.releaseResponseCallback = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.releaseResponseCallback,
    (System_Int32_array **)callback,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetConnect(Instance, 1, 0LL), (squareEntity = this->fields.squareEntity) == 0LL)
    || (classBoardBaseId = squareEntity->fields.classBoardBaseId,
        id = squareEntity->fields.id,
        p_data = (ClassBoardReleaseRequestData_o)&data,
        data = 0LL,
        ClassBoardReleaseRequestData___ctor(p_data, classBoardBaseId, id, 0LL),
        !Request_WarBoardWallAttackRequest) )
  {
    sub_B52A5C(Instance, v14);
  }
  v20 = data;
  ClassBoardReleaseLockRequest__beginRequest(Request_WarBoardWallAttackRequest, v20, 0LL);
}