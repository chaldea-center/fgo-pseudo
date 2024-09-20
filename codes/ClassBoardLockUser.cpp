void __fastcall ClassBoardLockUser___ctor(
        ClassBoardLockUser_o *this,
        ClassBoardSquareEntity_o *masterEntity,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.squareEntity = masterEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.squareEntity, (int32_t)masterEntity, v5, v6);
}


void __fastcall ClassBoardLockUser__RequestRelease(
        ClassBoardLockUser_o *this,
        System_Action_IClassBoardSquareUser__o *callback,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v5; // x21
  Il2CppObject *Request_object; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  struct ClassBoardSquareEntity_o *squareEntity; // x8
  int32_t classBoardBaseId; // w1
  int32_t id; // w2
  ClassBoardReleaseRequestData_o data; // [xsp+8h] [xbp-38h] BYREF
  ClassBoardReleaseRequestData_o p_data; // 0:x0.8
  ClassBoardReleaseRequestData_o v16; // 0:x1.8

  if ( (byte_4A5E635 & 1) == 0 )
  {
    sub_1B885B0(&Method_ClassBoardSquareUser_OnReleaseResponse__);
    sub_1B885B0(&Method_NetworkManager_getRequest_ClassBoardReleaseLockRequest___);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5E635 = 1;
  }
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1B887FC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v5,
    (Il2CppObject *)this,
    Method_ClassBoardSquareUser_OnReleaseResponse__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_2F019D8 *)Method_NetworkManager_getRequest_ClassBoardReleaseLockRequest___);
  this->fields.releaseResponseCallback = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.releaseResponseCallback, (int32_t)callback, v7, v8);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetConnect((CommonUI_o *)Instance, 1, 0LL), (squareEntity = this->fields.squareEntity) == 0LL)
    || (classBoardBaseId = squareEntity->fields.classBoardBaseId,
        id = squareEntity->fields.id,
        p_data = (ClassBoardReleaseRequestData_o)&data,
        data = 0LL,
        ClassBoardReleaseRequestData___ctor(p_data, classBoardBaseId, id, 0LL),
        !Request_object) )
  {
    sub_1B8880C(Instance, v10);
  }
  v16 = data;
  ClassBoardReleaseLockRequest__beginRequest((ClassBoardReleaseLockRequest_o *)Request_object, v16, 0LL);
}