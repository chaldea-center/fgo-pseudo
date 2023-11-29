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
  sub_B16F98(
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
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  struct System_Action_IClassBoardSquareUser__o *releaseResponseCallback; // x0
  CommonUI_o *Instance; // x0

  if ( (byte_40FBA1E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_IClassBoardSquareUser__Invoke__, result);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&StringLiteral_20980, v6);
    byte_40FBA1E = 1;
  }
  if ( !result )
    goto LABEL_9;
  if ( System_String__Equals_43731072(result, (System_String_o *)StringLiteral_20980, 0LL) )
    return;
  ClassBoardSquareUser__ReleaseSquare(this, v7);
  releaseResponseCallback = this->fields.releaseResponseCallback;
  if ( releaseResponseCallback )
    System_Action_Uri___Invoke(
      (System_Action_Uri__o *)releaseResponseCallback,
      (System_Uri_o *)this,
      (const MethodInfo_24B7324 *)Method_System_Action_IClassBoardSquareUser__Invoke__);
  this->fields.releaseResponseCallback = 0LL;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields.releaseResponseCallback, 0LL, v8, v9, v10, v11, v12, v13);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
LABEL_9:
    sub_B170D4();
  CommonUI__SetConnect(Instance, 0, 0LL);
}


void __fastcall ClassBoardSquareUser__ReleaseSquare(ClassBoardSquareUser_o *this, const MethodInfo *method)
{
  struct System_Action_IClassBoardSquareUser__o *userUpdateEvent; // x0

  if ( (byte_40FBA1C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Action_IClassBoardSquareUser__Invoke__, method);
    byte_40FBA1C = 1;
  }
  userUpdateEvent = this->fields.userUpdateEvent;
  if ( userUpdateEvent )
    System_Action_Uri___Invoke(
      (System_Action_Uri__o *)userUpdateEvent,
      (System_Uri_o *)this,
      (const MethodInfo_24B7324 *)Method_System_Action_IClassBoardSquareUser__Invoke__);
}


void __fastcall ClassBoardSquareUser__RequestRelease(
        ClassBoardSquareUser_o *this,
        System_Action_IClassBoardSquareUser__o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  NetworkManager_ResultCallbackFunc_o *v11; // x21
  ClassBoardReleaseSquareRequest_o *Request_WarBoardWallAttackRequest; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  CommonUI_o *Instance; // x0
  const MethodInfo *v20; // x2
  struct ClassBoardSquareEntity_o *squareEntity; // x8
  ClassBoardReleaseRequestData_o v22; // 0:x1.8

  if ( (byte_40FBA1D & 1) == 0 )
  {
    sub_B16FFC(&Method_ClassBoardSquareUser_OnReleaseResponse__, callback);
    sub_B16FFC(&Method_NetworkManager_getRequest_ClassBoardReleaseSquareRequest___, v7);
    sub_B16FFC(&NetworkManager_TypeInfo, v8);
    sub_B16FFC(&NetworkManager_ResultCallbackFunc_TypeInfo, v9);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    byte_40FBA1D = 1;
  }
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_B170CC(
                                                 NetworkManager_ResultCallbackFunc_TypeInfo,
                                                 callback,
                                                 method,
                                                 v3,
                                                 v4);
  NetworkManager_ResultCallbackFunc___ctor(
    v11,
    (Il2CppObject *)this,
    Method_ClassBoardSquareUser_OnReleaseResponse__,
    0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  Request_WarBoardWallAttackRequest = (ClassBoardReleaseSquareRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                            v11,
                                                                            (const MethodInfo_19DD960 *)Method_NetworkManager_getRequest_ClassBoardReleaseSquareRequest___);
  this->fields.releaseResponseCallback = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.releaseResponseCallback,
    (System_Int32_array **)callback,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetConnect(Instance, 1, 0LL), (squareEntity = this->fields.squareEntity) == 0LL)
    || !Request_WarBoardWallAttackRequest )
  {
    sub_B170D4();
  }
  v22 = *(ClassBoardReleaseRequestData_o *)&squareEntity->fields.classBoardBaseId;
  ClassBoardReleaseSquareRequest__beginRequest(Request_WarBoardWallAttackRequest, v22, v20);
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
  __int64 v9; // x0
  bool v10; // zf
  ClassBoardSquareUser_o *v11; // x0
  System_Action_IClassBoardSquareUser__o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_40FBA19 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_IClassBoardSquareUser__TypeInfo, value);
    byte_40FBA19 = 1;
  }
  userUpdateEvent = this->fields.userUpdateEvent;
  p_fields = &this->fields;
  v6 = (System_Delegate_o *)userUpdateEvent;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_IClassBoardSquareUser__c *)v8->klass != System_Action_IClassBoardSquareUser__TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_fields, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ClassBoardSquareUser_o *)sub_B173C8(v8);
  ClassBoardSquareUser__remove_userUpdateEvent(v11, v12, v13);
}


bool __fastcall ClassBoardSquareUser__get_IsRelease(ClassBoardSquareUser_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UserClassBoardSquareMaster_o *Master_WarQuestSelectionMaster; // x0

  if ( (byte_40FBA1B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___, method);
    sub_B16FFC(&DataManager_TypeInfo, v3);
    byte_40FBA1B = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserClassBoardSquareMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B170D4();
  return UserClassBoardSquareMaster__HasSquare(Master_WarQuestSelectionMaster, this->fields.squareEntity, 0LL);
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
  __int64 v9; // x0
  bool v10; // zf
  ClassBoardSquareUser_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_40FBA1A & 1) == 0 )
  {
    sub_B16FFC(&System_Action_IClassBoardSquareUser__TypeInfo, value);
    byte_40FBA1A = 1;
  }
  userUpdateEvent = this->fields.userUpdateEvent;
  p_fields = &this->fields;
  v6 = (System_Delegate_o *)userUpdateEvent;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (System_Action_IClassBoardSquareUser__c *)v8->klass != System_Action_IClassBoardSquareUser__TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_fields, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ClassBoardSquareUser_o *)sub_B173C8(v8);
  ClassBoardSquareUser__get_IsRelease(v11, v12);
}