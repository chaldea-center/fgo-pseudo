void ClassBoardSquareUser___ctor(
        ClassBoardSquareUser_o *this,
        ClassBoardSquareEntity_o *masterEntity,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.squareEntity = masterEntity;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.squareEntity, (int32_t)masterEntity, v5, v6, v7, v8, v9, v10);
}


void ClassBoardSquareUser__OnReleaseResponse(
        ClassBoardSquareUser_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ClassBoardSquareUser_o *v4; // x19
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  struct System_Action_IClassBoardSquareUser__o *userUpdateEvent; // x8
  struct System_Action_IClassBoardSquareUser__o *releaseResponseCallback; // x8

  v4 = this;
  if ( (byte_4CF2342 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (ClassBoardSquareUser_o *)sub_1C7BAE8(&StringLiteral_22419/*"ng"*/);
    byte_4CF2342 = 1;
  }
  if ( !result )
    goto LABEL_11;
  if ( System_String__Equals_64212232(result, (System_String_o *)StringLiteral_22419/*"ng"*/, 0) )
    return;
  userUpdateEvent = v4->fields.userUpdateEvent;
  if ( userUpdateEvent )
    ((void (__fastcall *)(intptr_t, ClassBoardSquareUser_o *, intptr_t))userUpdateEvent->fields.invoke_impl)(
      userUpdateEvent->fields.method_code,
      v4,
      userUpdateEvent->fields.method);
  releaseResponseCallback = v4->fields.releaseResponseCallback;
  if ( releaseResponseCallback )
    ((void (__fastcall *)(intptr_t, ClassBoardSquareUser_o *, intptr_t))releaseResponseCallback->fields.invoke_impl)(
      releaseResponseCallback->fields.method_code,
      v4,
      releaseResponseCallback->fields.method);
  v4->fields.releaseResponseCallback = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v4->fields.releaseResponseCallback, 0, v5, v6, v7, v8, v9, v10);
  this = (ClassBoardSquareUser_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_11:
    sub_1C7BD40(this, result);
  CommonUI__SetConnect((CommonUI_o *)this, 0, 0);
}


void ClassBoardSquareUser__ReleaseSquare(ClassBoardSquareUser_o *this, const MethodInfo *method)
{
  struct System_Action_IClassBoardSquareUser__o *userUpdateEvent; // x8

  userUpdateEvent = this->fields.userUpdateEvent;
  if ( userUpdateEvent )
    ((void (__fastcall *)(intptr_t, ClassBoardSquareUser_o *, intptr_t))userUpdateEvent->fields.invoke_impl)(
      userUpdateEvent->fields.method_code,
      this,
      userUpdateEvent->fields.method);
}


void ClassBoardSquareUser__RequestRelease(
        ClassBoardSquareUser_o *this,
        System_Action_IClassBoardSquareUser__o *callback,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v5; // x21
  Il2CppObject *Request_object; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  struct ClassBoardSquareEntity_o *squareEntity; // x8
  int32_t classBoardBaseId; // w1
  int32_t id; // w2
  ClassBoardReleaseRequestData_o p_data; // x0
  ClassBoardReleaseRequestData_o v19; // x1
  ClassBoardReleaseRequestData_o data; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CF2341 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_ClassBoardSquareUser_OnReleaseResponse__);
    sub_1C7BAE8(&Method_NetworkManager_getRequest_ClassBoardReleaseSquareRequest___);
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CF2341 = 1;
  }
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_1C7BD34(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v5, (Il2CppObject *)this, Method_ClassBoardSquareUser_OnReleaseResponse__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v5,
                     (const MethodInfo_31FABE0 *)Method_NetworkManager_getRequest_ClassBoardReleaseSquareRequest___);
  this->fields.releaseResponseCallback = callback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.releaseResponseCallback,
    (int32_t)callback,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetConnect((CommonUI_o *)Instance, 1, 0), (squareEntity = this->fields.squareEntity) == 0)
    || (classBoardBaseId = squareEntity->fields.classBoardBaseId,
        id = squareEntity->fields.id,
        p_data = (ClassBoardReleaseRequestData_o)&data,
        data = 0,
        ClassBoardReleaseRequestData___ctor(p_data, classBoardBaseId, id, 0),
        !Request_object) )
  {
    sub_1C7BD40(Instance, v14);
  }
  v19 = data;
  ClassBoardReleaseSquareRequest__beginRequest((ClassBoardReleaseSquareRequest_o *)Request_object, v19, 0);
}


void ClassBoardSquareUser__add_userUpdateEvent(
        ClassBoardSquareUser_o *this,
        System_Action_IClassBoardSquareUser__o *value,
        const MethodInfo *method)
{
  ClassBoardSquareUser_Fields *p_fields; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_IClassBoardSquareUser__o *userUpdateEvent; // t1
  System_Delegate_o *v8; // x0
  System_Delegate_o *v9; // x22
  __int64 v10; // x1
  __int64 v11; // x0
  bool v12; // zf
  ClassBoardSquareUser_o *v13; // x0
  System_Action_IClassBoardSquareUser__o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_4CF233E & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_IClassBoardSquareUser__TypeInfo);
    byte_4CF233E = 1;
  }
  userUpdateEvent = this->fields.userUpdateEvent;
  p_fields = &this->fields;
  v6 = (System_Delegate_o *)userUpdateEvent;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( !v8 )
    {
      v10 = 0;
      goto LABEL_8;
    }
    v9 = v8;
    v10 = sub_1C7BC24(v8, System_Action_IClassBoardSquareUser__TypeInfo);
    if ( !v10 )
      break;
LABEL_8:
    v11 = sub_1CD78BC(p_fields, v10, v6);
    v12 = v6 == (System_Delegate_o *)v11;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_1C7C0DC(v9);
  ClassBoardSquareUser__remove_userUpdateEvent(v13, v14, v15);
}


bool ClassBoardSquareUser__get_IsRelease(ClassBoardSquareUser_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v4; // x1

  if ( (byte_4CF2340 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
    sub_1C7BAE8(&DataManager_TypeInfo);
    byte_4CF2340 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31703A0 *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
  if ( !Master_object )
    sub_1C7BD40(0, v4);
  return UserClassBoardSquareMaster__HasSquare(
           (UserClassBoardSquareMaster_o *)Master_object,
           this->fields.squareEntity,
           0);
}


void ClassBoardSquareUser__remove_userUpdateEvent(
        ClassBoardSquareUser_o *this,
        System_Action_IClassBoardSquareUser__o *value,
        const MethodInfo *method)
{
  ClassBoardSquareUser_Fields *p_fields; // x20
  System_Delegate_o *v6; // x21
  struct System_Action_IClassBoardSquareUser__o *userUpdateEvent; // t1
  System_Delegate_o *v8; // x0
  System_Delegate_o *v9; // x22
  __int64 v10; // x1
  __int64 v11; // x0
  bool v12; // zf
  ClassBoardSquareUser_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_4CF233F & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_IClassBoardSquareUser__TypeInfo);
    byte_4CF233F = 1;
  }
  userUpdateEvent = this->fields.userUpdateEvent;
  p_fields = &this->fields;
  v6 = (System_Delegate_o *)userUpdateEvent;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( !v8 )
    {
      v10 = 0;
      goto LABEL_8;
    }
    v9 = v8;
    v10 = sub_1C7BC24(v8, System_Action_IClassBoardSquareUser__TypeInfo);
    if ( !v10 )
      break;
LABEL_8:
    v11 = sub_1CD78BC(p_fields, v10, v6);
    v12 = v6 == (System_Delegate_o *)v11;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_1C7C0DC(v9);
  ClassBoardSquareUser__get_IsRelease(v13, v14);
}