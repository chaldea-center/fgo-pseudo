void __fastcall ClassBoardSquareUser___ctor(
        ClassBoardSquareUser_o *this,
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
  sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields.squareEntity, (int64_t)masterEntity, v5, v6, v7, v8, v9, v10);
}


void __fastcall ClassBoardSquareUser__OnReleaseResponse(
        ClassBoardSquareUser_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ClassBoardSquareUser_o *v4; // x19
  __int64 v5; // x1
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  struct System_Action_IClassBoardSquareUser__o *userUpdateEvent; // x8
  struct System_Action_IClassBoardSquareUser__o *releaseResponseCallback; // x8

  v4 = this;
  if ( (byte_4BB7D10 & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, result);
    this = (ClassBoardSquareUser_o *)sub_1C13D24(&StringLiteral_22421/*"newAttributes"*/, v5);
    byte_4BB7D10 = 1;
  }
  if ( !result )
    goto LABEL_11;
  if ( System_String__Equals_62976260(result, (System_String_o *)StringLiteral_22421/*"newAttributes"*/, 0LL) )
    return;
  userUpdateEvent = v4->fields.userUpdateEvent;
  if ( userUpdateEvent )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, ClassBoardSquareUser_o *, _QWORD))userUpdateEvent->fields.m_target)(
      userUpdateEvent->fields.original_method_info,
      v4,
      *(_QWORD *)&userUpdateEvent->fields.extra_arg);
  releaseResponseCallback = v4->fields.releaseResponseCallback;
  if ( releaseResponseCallback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, ClassBoardSquareUser_o *, _QWORD))releaseResponseCallback->fields.m_target)(
      releaseResponseCallback->fields.original_method_info,
      v4,
      *(_QWORD *)&releaseResponseCallback->fields.extra_arg);
  v4->fields.releaseResponseCallback = 0LL;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v4->fields.releaseResponseCallback, 0LL, v6, v7, v8, v9, v10, v11);
  this = (ClassBoardSquareUser_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_11:
    sub_1C13F80(this, result);
  CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
}


void __fastcall ClassBoardSquareUser__ReleaseSquare(ClassBoardSquareUser_o *this, const MethodInfo *method)
{
  struct System_Action_IClassBoardSquareUser__o *userUpdateEvent; // x8

  userUpdateEvent = this->fields.userUpdateEvent;
  if ( userUpdateEvent )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, ClassBoardSquareUser_o *, _QWORD))userUpdateEvent->fields.m_target)(
      userUpdateEvent->fields.original_method_info,
      this,
      *(_QWORD *)&userUpdateEvent->fields.extra_arg);
}


void __fastcall ClassBoardSquareUser__RequestRelease(
        ClassBoardSquareUser_o *this,
        System_Action_IClassBoardSquareUser__o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  NetworkManager_ResultCallbackFunc_o *v9; // x21
  Il2CppObject *Request_object; // x21
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  Il2CppObject *Instance; // x0
  __int64 v18; // x1
  struct ClassBoardSquareEntity_o *squareEntity; // x8
  int32_t classBoardBaseId; // w1
  int32_t id; // w2
  ClassBoardReleaseRequestData_o data; // [xsp+8h] [xbp-38h] BYREF
  ClassBoardReleaseRequestData_o p_data; // 0:x0.8
  ClassBoardReleaseRequestData_o v24; // 0:x1.8

  if ( (byte_4BB7D0F & 1) == 0 )
  {
    sub_1C13D24(&Method_ClassBoardSquareUser_OnReleaseResponse__, callback);
    sub_1C13D24(&Method_NetworkManager_getRequest_ClassBoardReleaseSquareRequest___, v5);
    sub_1C13D24(&NetworkManager_TypeInfo, v6);
    sub_1C13D24(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_1C13D24(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_4BB7D0F = 1;
  }
  v9 = (NetworkManager_ResultCallbackFunc_o *)sub_1C13F70(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v9,
    (Il2CppObject *)this,
    Method_ClassBoardSquareUser_OnReleaseResponse__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v9,
                     (const MethodInfo_3013AB4 *)Method_NetworkManager_getRequest_ClassBoardReleaseSquareRequest___);
  this->fields.releaseResponseCallback = callback;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields.releaseResponseCallback,
    (int64_t)callback,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetConnect((CommonUI_o *)Instance, 1, 0LL), (squareEntity = this->fields.squareEntity) == 0LL)
    || (classBoardBaseId = squareEntity->fields.classBoardBaseId,
        id = squareEntity->fields.id,
        p_data = (ClassBoardReleaseRequestData_o)&data,
        data = 0LL,
        ClassBoardReleaseRequestData___ctor(p_data, classBoardBaseId, id, 0LL),
        !Request_object) )
  {
    sub_1C13F80(Instance, v18);
  }
  v24 = data;
  ClassBoardReleaseSquareRequest__beginRequest((ClassBoardReleaseSquareRequest_o *)Request_object, v24, 0LL);
}


void __fastcall ClassBoardSquareUser__add_userUpdateEvent(
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

  if ( (byte_4BB7D0C & 1) == 0 )
  {
    sub_1C13D24(&System_Action_IClassBoardSquareUser__TypeInfo, value);
    byte_4BB7D0C = 1;
  }
  userUpdateEvent = this->fields.userUpdateEvent;
  p_fields = &this->fields;
  v6 = (System_Delegate_o *)userUpdateEvent;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( !v8 )
    {
      v10 = 0LL;
      goto LABEL_8;
    }
    v9 = v8;
    v10 = sub_1C13E60(v8, System_Action_IClassBoardSquareUser__TypeInfo);
    if ( !v10 )
      break;
LABEL_8:
    v11 = sub_1C4F214(p_fields, v10, v6);
    v12 = v6 == (System_Delegate_o *)v11;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_1C14240(v9);
  ClassBoardSquareUser__remove_userUpdateEvent(v13, v14, v15);
}


bool __fastcall ClassBoardSquareUser__get_IsRelease(ClassBoardSquareUser_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1

  if ( (byte_4BB7D0E & 1) == 0 )
  {
    sub_1C13D24(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___, method);
    sub_1C13D24(&DataManager_TypeInfo, v3);
    byte_4BB7D0E = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F8F418 *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
  if ( !Master_object )
    sub_1C13F80(0LL, v5);
  return UserClassBoardSquareMaster__HasSquare(
           (UserClassBoardSquareMaster_o *)Master_object,
           this->fields.squareEntity,
           0LL);
}


void __fastcall ClassBoardSquareUser__remove_userUpdateEvent(
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

  if ( (byte_4BB7D0D & 1) == 0 )
  {
    sub_1C13D24(&System_Action_IClassBoardSquareUser__TypeInfo, value);
    byte_4BB7D0D = 1;
  }
  userUpdateEvent = this->fields.userUpdateEvent;
  p_fields = &this->fields;
  v6 = (System_Delegate_o *)userUpdateEvent;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( !v8 )
    {
      v10 = 0LL;
      goto LABEL_8;
    }
    v9 = v8;
    v10 = sub_1C13E60(v8, System_Action_IClassBoardSquareUser__TypeInfo);
    if ( !v10 )
      break;
LABEL_8:
    v11 = sub_1C4F214(p_fields, v10, v6);
    v12 = v6 == (System_Delegate_o *)v11;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_1C14240(v9);
  ClassBoardSquareUser__get_IsRelease(v13, v14);
}