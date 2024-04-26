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
  sub_B70630(
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
  const MethodInfo *v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Action_Uri__o *releaseResponseCallback; // x0

  v4 = this;
  if ( (byte_4353BAD & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_IClassBoardSquareUser__Invoke__);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (ClassBoardSquareUser_o *)sub_B70694(&StringLiteral_21408/*"ng"*/);
    byte_4353BAD = 1;
  }
  if ( !result )
    goto LABEL_9;
  if ( System_String__Equals_44745508(result, (System_String_o *)StringLiteral_21408/*"ng"*/, 0LL) )
    return;
  ClassBoardSquareUser__ReleaseSquare(v4, v5);
  releaseResponseCallback = (System_Action_Uri__o *)v4->fields.releaseResponseCallback;
  if ( releaseResponseCallback )
    System_Action_Uri___Invoke(
      releaseResponseCallback,
      (System_Uri_o *)v4,
      (const MethodInfo_264C15C *)Method_System_Action_IClassBoardSquareUser__Invoke__);
  v4->fields.releaseResponseCallback = 0LL;
  sub_B70630((BattleServantConfConponent_o *)&v4->fields.releaseResponseCallback, 0LL, v6, v7, v8, v9, v10, v11);
  this = (ClassBoardSquareUser_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !this )
LABEL_9:
    sub_B7076C(this, result);
  CommonUI__SetConnect((CommonUI_o *)this, 0, 0LL);
}


void __fastcall ClassBoardSquareUser__ReleaseSquare(ClassBoardSquareUser_o *this, const MethodInfo *method)
{
  struct System_Action_IClassBoardSquareUser__o *userUpdateEvent; // x0

  if ( (byte_4353BAB & 1) == 0 )
  {
    sub_B70694(&Method_System_Action_IClassBoardSquareUser__Invoke__);
    byte_4353BAB = 1;
  }
  userUpdateEvent = this->fields.userUpdateEvent;
  if ( userUpdateEvent )
    System_Action_Uri___Invoke(
      (System_Action_Uri__o *)userUpdateEvent,
      (System_Uri_o *)this,
      (const MethodInfo_264C15C *)Method_System_Action_IClassBoardSquareUser__Invoke__);
}


void __fastcall ClassBoardSquareUser__RequestRelease(
        ClassBoardSquareUser_o *this,
        System_Action_IClassBoardSquareUser__o *callback,
        const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v5; // x21
  ClassBoardReleaseSquareRequest_o *Request_WarBoardWallAttackRequest; // x21
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  CommonUI_o *Instance; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  struct ClassBoardSquareEntity_o *squareEntity; // x8
  ClassBoardReleaseRequestData_o v17; // 0:x1.8

  if ( (byte_4353BAC & 1) == 0 )
  {
    sub_B70694(&Method_ClassBoardSquareUser_OnReleaseResponse__);
    sub_B70694(&Method_NetworkManager_getRequest_ClassBoardReleaseSquareRequest___);
    sub_B70694(&NetworkManager_TypeInfo);
    sub_B70694(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4353BAC = 1;
  }
  v5 = (NetworkManager_ResultCallbackFunc_o *)sub_B70764(NetworkManager_ResultCallbackFunc_TypeInfo);
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
  Request_WarBoardWallAttackRequest = (ClassBoardReleaseSquareRequest_o *)NetworkManager__getRequest_WarBoardWallAttackRequest_(
                                                                            v5,
                                                                            (const MethodInfo_1D57A4C *)Method_NetworkManager_getRequest_ClassBoardReleaseSquareRequest___);
  this->fields.releaseResponseCallback = callback;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.releaseResponseCallback,
    (System_Int32_array **)callback,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2CE992C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__SetConnect(Instance, 1, 0LL), (squareEntity = this->fields.squareEntity) == 0LL)
    || !Request_WarBoardWallAttackRequest )
  {
    sub_B7076C(Instance, v14);
  }
  v17 = *(ClassBoardReleaseRequestData_o *)&squareEntity->fields.classBoardBaseId;
  ClassBoardReleaseSquareRequest__beginRequest(Request_WarBoardWallAttackRequest, v17, v15);
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

  if ( (byte_4353BA8 & 1) == 0 )
  {
    sub_B70694(&System_Action_IClassBoardSquareUser__TypeInfo);
    byte_4353BA8 = 1;
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
    v9 = sub_B650AC(p_fields, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B70A60(v8);
  ClassBoardSquareUser__remove_userUpdateEvent(v11, v12, v13);
}


bool __fastcall ClassBoardSquareUser__get_IsRelease(ClassBoardSquareUser_o *this, const MethodInfo *method)
{
  UserClassBoardSquareMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v4; // x1

  if ( (byte_4353BAA & 1) == 0 )
  {
    sub_B70694(&Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
    sub_B70694(&DataManager_TypeInfo);
    byte_4353BAA = 1;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (UserClassBoardSquareMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1CA3540 *)Method_DataManager_GetMaster_UserClassBoardSquareMaster___);
  if ( !Master_WarQuestSelectionMaster )
    sub_B7076C(0LL, v4);
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

  if ( (byte_4353BA9 & 1) == 0 )
  {
    sub_B70694(&System_Action_IClassBoardSquareUser__TypeInfo);
    byte_4353BA9 = 1;
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
    v9 = sub_B650AC(p_fields, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B70A60(v8);
  ClassBoardSquareUser__get_IsRelease(v11, v12);
}