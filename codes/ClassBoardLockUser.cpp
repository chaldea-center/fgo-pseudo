void __fastcall ClassBoardLockUser___ctor(
        ClassBoardLockUser_o *this,
        ClassBoardSquareEntity_o *masterEntity,
        const MethodInfo *method)
{
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.squareEntity = masterEntity;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.squareEntity, (int64_t)masterEntity, v5, v6, v7, v8, v9, v10);
}


void __fastcall ClassBoardLockUser__RequestRelease(
        ClassBoardLockUser_o *this,
        System_Action_IClassBoardSquareUser__o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  NetworkManager_ResultCallbackFunc_o *v14; // x21
  __int64 v15; // x1
  Il2CppObject *Request_object; // x21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  Il2CppObject *Instance; // x0
  __int64 v24; // x1
  struct ClassBoardSquareEntity_o *squareEntity; // x8
  int32_t classBoardBaseId; // w1
  int32_t id; // w2
  ClassBoardReleaseRequestData_o data; // [xsp+8h] [xbp-38h] BYREF
  ClassBoardReleaseRequestData_o p_data; // 0:x0.8
  ClassBoardReleaseRequestData_o v30; // 0:x1.8

  if ( (byte_4B19763 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_ClassBoardSquareUser_OnReleaseResponse__, callback, method);
    sub_1BCA7E0(&Method_NetworkManager_getRequest_ClassBoardReleaseLockRequest___, v6, v7);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v8, v9);
    sub_1BCA7E0(&NetworkManager_ResultCallbackFunc_TypeInfo, v10, v11);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13);
    byte_4B19763 = 1;
  }
  v14 = (NetworkManager_ResultCallbackFunc_o *)sub_1BCAA2C(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 callback,
                                                 method,
                                                 v3);
  NetworkManager_ResultCallbackFunc___ctor(
    v14,
    (Il2CppObject *)this,
    Method_ClassBoardSquareUser_OnReleaseResponse__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v15);
  Request_object = NetworkManager__getRequest_object_(
                     v14,
                     (const MethodInfo_2F964CC *)Method_NetworkManager_getRequest_ClassBoardReleaseLockRequest___);
  this->fields.releaseResponseCallback = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.releaseResponseCallback,
    (int64_t)callback,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetConnect((CommonUI_o *)Instance, 1, 0LL), (squareEntity = this->fields.squareEntity) == 0LL)
    || (classBoardBaseId = squareEntity->fields.classBoardBaseId,
        id = squareEntity->fields.id,
        p_data = (ClassBoardReleaseRequestData_o)&data,
        data = 0LL,
        ClassBoardReleaseRequestData___ctor(p_data, classBoardBaseId, id, 0LL),
        !Request_object) )
  {
    sub_1BCAA3C(Instance, v24);
  }
  v30 = data;
  ClassBoardReleaseLockRequest__beginRequest((ClassBoardReleaseLockRequest_o *)Request_object, v30, 0LL);
}