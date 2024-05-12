void __fastcall WarBoardMasterAttackRequest___ctor(WarBoardMasterAttackRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


bool __fastcall WarBoardMasterAttackRequest__backgroundErrorRequest(
        WarBoardMasterAttackRequest_o *this,
        System_String_o *errorCode,
        const MethodInfo *method)
{
  int32_t retryCount; // w9
  bool v4; // w8
  int32_t v5; // w9

  retryCount = this->fields.retryCount;
  v4 = retryCount < 3;
  if ( retryCount <= 2 )
    v5 = retryCount + 1;
  else
    v5 = 0;
  this->fields.retryCount = v5;
  return v4;
}


void __fastcall WarBoardMasterAttackRequest__backgroundErrorRetry(
        WarBoardMasterAttackRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_438AE84 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_438AE84 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


void __fastcall WarBoardMasterAttackRequest__beginRequest(
        WarBoardMasterAttackRequest_o *this,
        int32_t stageId,
        int32_t forceId,
        int32_t groupId,
        int32_t pieceIndex,
        int32_t targetForceId,
        int32_t targetGroupId,
        int32_t targetPieceIndex,
        int32_t befSquareIndex,
        int32_t aftSquareIndex,
        WarBoardData_o *warBoardData,
        const MethodInfo *method)
{
  __int64 v19; // x0
  __int64 v20; // x1

  if ( (byte_438AE83 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22736/*"stageId"*/);
    sub_B775C4(&StringLiteral_23082/*"targetGroupId"*/);
    sub_B775C4(&StringLiteral_23087/*"targetPieceIndex"*/);
    sub_B775C4(&StringLiteral_17015/*"befSquareIndex"*/);
    sub_B775C4(&StringLiteral_23081/*"targetForceId"*/);
    sub_B775C4(&StringLiteral_21926/*"pieceIndex"*/);
    sub_B775C4(&StringLiteral_19473/*"groupId"*/);
    sub_B775C4(&StringLiteral_19182/*"forceId"*/);
    sub_B775C4(&StringLiteral_16606/*"aftSquareIndex"*/);
    byte_438AE83 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22736/*"stageId"*/, stageId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19182/*"forceId"*/, forceId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19473/*"groupId"*/, groupId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21926/*"pieceIndex"*/, pieceIndex, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23081/*"targetForceId"*/, targetForceId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23082/*"targetGroupId"*/, targetGroupId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23087/*"targetPieceIndex"*/, targetPieceIndex, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17015/*"befSquareIndex"*/, befSquareIndex, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16606/*"aftSquareIndex"*/, aftSquareIndex, 0LL);
  if ( !warBoardData )
    sub_B7769C(v19, v20);
  WarBoardData__SetRequest(warBoardData, (RequestBase_o *)this, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardMasterAttackRequest__getURL(
        WarBoardMasterAttackRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_438AE82 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_23689/*"warBoard/masterAttack"*/);
    byte_438AE82 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_23689/*"warBoard/masterAttack"*/, 0LL);
}


bool __fastcall WarBoardMasterAttackRequest__isBackgroundRequest(
        WarBoardMasterAttackRequest_o *this,
        const MethodInfo *method)
{
  return 1;
}


void __fastcall WarBoardMasterAttackRequest__requestCompleted(
        WarBoardMasterAttackRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *success; // x20
  Il2CppObject *Item; // x0
  Il2CppObject *v9; // x0
  System_String_o *v10; // x1

  if ( (byte_438AE85 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&ResponseCommandKind_TypeInfo);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    sub_B775C4(&StringLiteral_23698/*"warBoardData"*/);
    byte_438AE85 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(96, responseList, 0LL);
  if ( v5
    && (v6 = v5, ResponseData__checkError_30128096(v5, 0LL))
    && (success = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v6->fields.success) != 0LL )
  {
    Item = (Il2CppObject *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                             success,
                             (System_Type_o *)StringLiteral_23698/*"warBoardData"*/,
                             (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v9 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)success,
      (System_Xml_XmlQualifiedName_o *)StringLiteral_23698/*"warBoardData"*/,
      (System_Xml_Schema_XmlSchemaObject_o *)v9,
      (const MethodInfo_2F7D5D0 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_21504/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}