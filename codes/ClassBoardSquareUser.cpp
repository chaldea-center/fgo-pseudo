void __fastcall ClassBoardSquareUser___ctor(
        ClassBoardSquareUser_o *this,
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


void __fastcall ClassBoardSquareUser__OnReleaseResponse(
        ClassBoardSquareUser_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ClassBoardSquareUser_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  const MethodInfo *v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Action_Uri__o *releaseResponseCallback; // x0

  v5 = this;
  if ( (byte_42EA8B9 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_IClassBoardSquareUser__Invoke__, (_DWORD)result, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7, v8);
    this = (ClassBoardSquareUser_o *)sub_B5D5C4(&StringLiteral_21345/*"ng"*/, v9, v10, v11);
    byte_42EA8B9 = 1;
  }
  if ( !result )
    goto LABEL_9;
  if ( System_String__Equals_44565128(result, (System_String_o *)StringLiteral_21345/*"ng"*/, 0LL) )
    return;
  ClassBoardSquareUser__ReleaseSquare(v5, v12);
  releaseResponseCallback = (System_Action_Uri__o *)v5->fields.releaseResponseCallback;
  if ( releaseResponseCallback )
    System_Action_Uri___Invoke(
      releaseResponseCallback,
      (System_Uri_o *)v5,
      (const MethodInfo_258B334 *)Method_System_Action_IClassBoardSquareUser__Invoke__);
  v5->fields.releaseResponseCallback = 0LL;
  sub_B5D560((BattleServantConfConponent_o *)&v5->fields.releaseResponseCallback, 0LL, v13, v14, v15, v16, v17, v18);
  this = (ClassBoardSquareUser_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_9:
    sub_B5D69C(this, result);
  CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
}


void __fastcall ClassBoardSquareUser__ReleaseSquare(ClassBoardSquareUser_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  struct System_Action_IClassBoardSquareUser__o *userUpdateEvent; // x0

  if ( (byte_42EA8B7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_IClassBoardSquareUser__Invoke__, (_DWORD)method, v2, v3);
    byte_42EA8B7 = 1;
  }
  userUpdateEvent = this->fields.userUpdateEvent;
  if ( userUpdateEvent )
    System_Action_Uri___Invoke(
      (System_Action_Uri__o *)userUpdateEvent,
      (System_Uri_o *)this,
      (const MethodInfo_258B334 *)Method_System_Action_IClassBoardSquareUser__Invoke__);
}


void __fastcall ClassBoardSquareUser__RequestRelease(
        ClassBoardSquareUser_o *this,
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
  ClassBoardReleaseSquareRequest_o *Request_WarBoardWallAttackRequest; // x21
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

  if ( (byte_42EA8B8 & 1) == 0 )
  {
    sub_B5D5C4(&Method_ClassBoardSquareUser_OnReleaseResponse__, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_NetworkManager_getRequest_ClassBoardReleaseSquareRequest___, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&NetworkManager_ResultCallbackFunc_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15, v16, v17);
    byte_42EA8B8 = 1;
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
  Request_WarBoardWallAttackRequest = (ClassBoardReleaseSquareRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                            v18,
                                                                            (const MethodInfo_1E656EC *)Method_NetworkManager_getRequest_ClassBoardReleaseSquareRequest___);
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
  ClassBoardReleaseSquareRequest__beginRequest(Request_WarBoardWallAttackRequest, v30, v28);
}


void __fastcall ClassBoardSquareUser__add_userUpdateEvent(
        ClassBoardSquareUser_o *this,
        System_Action_IClassBoardSquareUser__o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ClassBoardSquareUser_Fields *p_fields; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_IClassBoardSquareUser__o *userUpdateEvent; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  ClassBoardSquareUser_o *v12; // x0
  System_Action_IClassBoardSquareUser__o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EA8B4 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_IClassBoardSquareUser__TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EA8B4 = 1;
  }
  userUpdateEvent = this->fields.userUpdateEvent;
  p_fields = &this->fields;
  v7 = (System_Delegate_o *)userUpdateEvent;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_IClassBoardSquareUser__c *)v9->klass != System_Action_IClassBoardSquareUser__TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_fields, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (ClassBoardSquareUser_o *)sub_B5D990(v9);
  ClassBoardSquareUser__remove_userUpdateEvent(v12, v13, v14);
}


bool __fastcall ClassBoardSquareUser__get_IsRelease(ClassBoardSquareUser_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  UserClassBoardSquareMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v9; // x1

  if ( (byte_42EA8B6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&DataManager_TypeInfo, v5, v6, v7);
    byte_42EA8B6 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserClassBoardSquareMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B5D69C(0LL, v9);
  return UserClassBoardSquareMaster__HasSquare(Master_WarQuestSelectionMaster, this->fields.squareEntity, 0LL);
}


void __fastcall ClassBoardSquareUser__remove_userUpdateEvent(
        ClassBoardSquareUser_o *this,
        System_Action_IClassBoardSquareUser__o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ClassBoardSquareUser_Fields *p_fields; // x20
  System_Delegate_o *v7; // x21
  struct System_Action_IClassBoardSquareUser__o *userUpdateEvent; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  ClassBoardSquareUser_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42EA8B5 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_IClassBoardSquareUser__TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EA8B5 = 1;
  }
  userUpdateEvent = this->fields.userUpdateEvent;
  p_fields = &this->fields;
  v7 = (System_Delegate_o *)userUpdateEvent;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (System_Action_IClassBoardSquareUser__c *)v9->klass != System_Action_IClassBoardSquareUser__TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_fields, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (ClassBoardSquareUser_o *)sub_B5D990(v9);
  ClassBoardSquareUser__get_IsRelease(v12, v13);
}