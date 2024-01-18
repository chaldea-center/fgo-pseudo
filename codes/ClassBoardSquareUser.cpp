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


void __fastcall ClassBoardSquareUser__OnReleaseResponse(
        ClassBoardSquareUser_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  ClassBoardSquareUser_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  const MethodInfo *v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  System_Action_Uri__o *releaseResponseCallback; // x0

  v4 = this;
  if ( (byte_41895A4 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_IClassBoardSquareUser__Invoke__, result);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    this = (ClassBoardSquareUser_o *)sub_B2C35C(&StringLiteral_21068/*"ng"*/, v6);
    byte_41895A4 = 1;
  }
  if ( !result )
    goto LABEL_9;
  if ( System_String__Equals_44292872(result, (System_String_o *)StringLiteral_21068/*"ng"*/, 0LL) )
    return;
  ClassBoardSquareUser__ReleaseSquare(v4, v7);
  releaseResponseCallback = (System_Action_Uri__o *)v4->fields.releaseResponseCallback;
  if ( releaseResponseCallback )
    System_Action_Uri___Invoke(
      releaseResponseCallback,
      (System_Uri_o *)v4,
      (const MethodInfo_24BBAEC *)Method_System_Action_IClassBoardSquareUser__Invoke__);
  v4->fields.releaseResponseCallback = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&v4->fields.releaseResponseCallback, 0LL, v8, v9, v10, v11, v12, v13);
  this = (ClassBoardSquareUser_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_9:
    sub_B2C434(this, result);
  CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
}


void __fastcall ClassBoardSquareUser__ReleaseSquare(ClassBoardSquareUser_o *this, const MethodInfo *method)
{
  struct System_Action_IClassBoardSquareUser__o *userUpdateEvent; // x0

  if ( (byte_41895A2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Action_IClassBoardSquareUser__Invoke__, method);
    byte_41895A2 = 1;
  }
  userUpdateEvent = this->fields.userUpdateEvent;
  if ( userUpdateEvent )
    System_Action_Uri___Invoke(
      (System_Action_Uri__o *)userUpdateEvent,
      (System_Uri_o *)this,
      (const MethodInfo_24BBAEC *)Method_System_Action_IClassBoardSquareUser__Invoke__);
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
  ClassBoardReleaseSquareRequest_o *Request_WarBoardWallAttackRequest; // x21
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

  if ( (byte_41895A3 & 1) == 0 )
  {
    sub_B2C35C(&Method_ClassBoardSquareUser_OnReleaseResponse__, callback);
    sub_B2C35C(&Method_NetworkManager_getRequest_ClassBoardReleaseSquareRequest___, v5);
    sub_B2C35C(&NetworkManager_TypeInfo, v6);
    sub_B2C35C(&NetworkManager_ResultCallbackFunc_TypeInfo, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    byte_41895A3 = 1;
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
  Request_WarBoardWallAttackRequest = (ClassBoardReleaseSquareRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                            v9,
                                                                            (const MethodInfo_1AB4500 *)Method_NetworkManager_getRequest_ClassBoardReleaseSquareRequest___);
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
  ClassBoardReleaseSquareRequest__beginRequest(Request_WarBoardWallAttackRequest, v21, v19);
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

  if ( (byte_418959F & 1) == 0 )
  {
    sub_B2C35C(&System_Action_IClassBoardSquareUser__TypeInfo, value);
    byte_418959F = 1;
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
    v9 = sub_B20D74(p_fields, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ClassBoardSquareUser_o *)sub_B2C728(v8);
  ClassBoardSquareUser__remove_userUpdateEvent(v11, v12, v13);
}


bool __fastcall ClassBoardSquareUser__get_IsRelease(ClassBoardSquareUser_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UserClassBoardSquareMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v5; // x1

  if ( (byte_41895A1 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___, method);
    sub_B2C35C(&DataManager_TypeInfo, v3);
    byte_41895A1 = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserClassBoardSquareMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B2C434(0LL, v5);
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

  if ( (byte_41895A0 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_IClassBoardSquareUser__TypeInfo, value);
    byte_41895A0 = 1;
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
    v9 = sub_B20D74(p_fields, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ClassBoardSquareUser_o *)sub_B2C728(v8);
  ClassBoardSquareUser__get_IsRelease(v11, v12);
}