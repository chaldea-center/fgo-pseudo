void __fastcall WarBoardCommandSpellRequest___ctor(WarBoardCommandSpellRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarBoardCommandSpellRequest__beginRequest(
        WarBoardCommandSpellRequest_o *this,
        int32_t stageId,
        int32_t commandSpellId,
        int32_t continueNum,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1

  if ( (byte_49BC96E & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_23204/*"stageId"*/, *(_QWORD *)&stageId);
    sub_1B4CF90(&StringLiteral_17938/*"continueNum"*/, v9);
    sub_1B4CF90(&StringLiteral_17852/*"commandSpellId"*/, v10);
    byte_49BC96E = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23204/*"stageId"*/, stageId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17852/*"commandSpellId"*/, commandSpellId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17938/*"continueNum"*/, continueNum, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardCommandSpellRequest__getURL(
        WarBoardCommandSpellRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_49BC96D & 1) == 0 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_24327/*"warBoard/commandSpell"*/, v2);
    byte_49BC96D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61093468(BaseUrl, (System_String_o *)StringLiteral_24327/*"warBoard/commandSpell"*/, 0LL);
}


void __fastcall WarBoardCommandSpellRequest__requestCompleted(
        WarBoardCommandSpellRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  ResponseData_o *v10; // x0
  const MethodInfo *v11; // x2
  ResponseData_o *v12; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  Il2CppObject *Item; // x0
  Il2CppObject *v15; // x0
  System_String_o *v16; // x1

  if ( (byte_49BC96F & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v5);
    sub_1B4CF90(&JsonManager_TypeInfo, v6);
    sub_1B4CF90(&ResponseCommandKind_TypeInfo, v7);
    sub_1B4CF90(&StringLiteral_21779/*"ng"*/, v8);
    sub_1B4CF90(&StringLiteral_24339/*"warBoardData"*/, v9);
    byte_49BC96F = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v10 = ResponseCommandKind__SearchData(98, responseList, 0LL);
  if ( v10
    && (v12 = v10, ResponseData__checkError(v10, v10->fields.resCode, v11))
    && (success = (System_Collections_Generic_Dictionary_object__object__o *)v12->fields.success) != 0LL )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_24339/*"warBoardData"*/,
             (const MethodInfo_3257A98 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v15 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      success,
      (Il2CppObject *)StringLiteral_24339/*"warBoardData"*/,
      v15,
      (const MethodInfo_3257B04 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v16 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v16 = (System_String_o *)StringLiteral_21779/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v16, 0LL);
}