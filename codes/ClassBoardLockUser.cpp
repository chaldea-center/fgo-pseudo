void ClassBoardLockUser___ctor(
        ClassBoardLockUser_o *this,
        ClassBoardSquareEntity_o *masterEntity,
        const MethodInfo *method)
{
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.squareEntity = masterEntity;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.squareEntity, (int32_t)masterEntity, v5, v6);
}


void ClassBoardLockUser__RequestRelease(
        ClassBoardLockUser_o *this,
        System_Action_IClassBoardSquareUser__o *callback,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v5; // x21
  Il2CppObject *Request_object; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  Il2CppObject *Instance; // x0
  struct ClassBoardSquareEntity_o *squareEntity; // x8
  int32_t classBoardBaseId; // w1
  int32_t id; // w2
  ClassBoardReleaseRequestData_o p_data; // x0
  ClassBoardReleaseRequestData_o v14; // x1
  ClassBoardReleaseRequestData_o data; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3B59D & 1) == 0 )
  {
    sub_1C32C20(&Method_ClassBoardSquareUser_OnReleaseResponse__);
    sub_1C32C20(&Method_NetworkManager_getRequest_ClassBoardReleaseLockRequest___);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3B59D = 1;
  }
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C32E6C(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v5, (Il2CppObject *)this, Method_ClassBoardSquareUser_OnReleaseResponse__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_3168488 *)Method_NetworkManager_getRequest_ClassBoardReleaseLockRequest___);
  this->fields.releaseResponseCallback = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.releaseResponseCallback, (int32_t)callback, v7, v8);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetConnect((CommonUI_o *)Instance, 1, 0), (squareEntity = this->fields.squareEntity) == 0)
    || (classBoardBaseId = squareEntity->fields.classBoardBaseId,
        id = squareEntity->fields.id,
        p_data = (ClassBoardReleaseRequestData_o)&data,
        data = 0,
        ClassBoardReleaseRequestData___ctor(p_data, classBoardBaseId, id, 0),
        !Request_object) )
  {
    sub_1C32E7C(Instance);
  }
  v14 = data;
  ClassBoardReleaseLockRequest__beginRequest((ClassBoardReleaseLockRequest_o *)Request_object, v14, 0);
}