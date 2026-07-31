void ClassBoardLockUser___ctor(
        ClassBoardLockUser_o *this,
        ClassBoardSquareEntity_o *masterEntity,
        const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.squareEntity = masterEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.squareEntity,
    (int32_t)masterEntity,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void ClassBoardLockUser__RequestRelease(
        ClassBoardLockUser_o *this,
        System_Action_IClassBoardSquareUser__o *callback,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v5; // x21
  __int64 v6; // x1
  Il2CppObject *Request_object; // x21
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  struct ClassBoardSquareEntity_o *squareEntity; // x8
  int32_t classBoardBaseId; // w1
  int32_t id; // w2
  ClassBoardReleaseRequestData_o p_data; // x0
  ClassBoardReleaseRequestData_o v20; // x1
  ClassBoardReleaseRequestData_o data; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_593C558 & 1) == 0 )
  {
    sub_21FFC50(&Method_ClassBoardSquareUser_OnReleaseResponse__);
    sub_21FFC50(&Method_NetworkManager_getRequest_ClassBoardReleaseLockRequest___);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593C558 = 1;
  }
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_21FFEBC(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v5, (Il2CppObject *)this, Method_ClassBoardSquareUser_OnReleaseResponse__, 0);
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v6);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_38BE6B0 *)Method_NetworkManager_getRequest_ClassBoardReleaseLockRequest___);
  this->fields.releaseResponseCallback = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.releaseResponseCallback,
    (int32_t)callback,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetConnect((CommonUI_o *)Instance, 1, 0), (squareEntity = this->fields.squareEntity) == 0)
    || (classBoardBaseId = squareEntity->fields.classBoardBaseId,
        id = squareEntity->fields.id,
        p_data = (ClassBoardReleaseRequestData_o)&data,
        data = 0,
        ClassBoardReleaseRequestData___ctor(p_data, classBoardBaseId, id, 0),
        !Request_object) )
  {
    sub_21FFECC(Instance, v15);
  }
  v20 = data;
  ClassBoardReleaseLockRequest__beginRequest((ClassBoardReleaseLockRequest_o *)Request_object, v20, 0);
}