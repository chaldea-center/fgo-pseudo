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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2

  if ( (byte_4B17BED & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_23725/*"stageId"*/, *(_QWORD *)&stageId, *(_QWORD *)&commandSpellId);
    sub_1BCA7E0(&StringLiteral_18428/*"continueNum"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_18340/*"commandSpellId"*/, v11, v12);
    byte_4B17BED = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23725/*"stageId"*/, stageId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18340/*"commandSpellId"*/, commandSpellId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18428/*"continueNum"*/, continueNum, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardCommandSpellRequest__getURL(
        WarBoardCommandSpellRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17BEC & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_24868/*"warBoard/commandSpell"*/, v3, v4);
    byte_4B17BEC = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_24868/*"warBoard/commandSpell"*/, 0LL);
}


void __fastcall WarBoardCommandSpellRequest__requestCompleted(
        WarBoardCommandSpellRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  ResponseData_o *v15; // x0
  const MethodInfo *v16; // x2
  ResponseData_o *v17; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  Il2CppObject *Item; // x0
  Il2CppObject *v20; // x0
  __int64 v21; // x1
  System_String_o *v22; // x1

  if ( (byte_4B17BEE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v5, v6);
    sub_1BCA7E0(&JsonManager_TypeInfo, v7, v8);
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_24880/*"warBoardData"*/, v13, v14);
    byte_4B17BEE = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v15 = ResponseCommandKind__SearchData(98, responseList, 0LL);
  if ( v15
    && (v17 = v15, ResponseData__checkError(v15, v15->fields.resCode, v16))
    && (success = (System_Collections_Generic_Dictionary_object__object__o *)v17->fields.success) != 0LL )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_24880/*"warBoardData"*/,
             (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v20 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      success,
      (Il2CppObject *)StringLiteral_24880/*"warBoardData"*/,
      v20,
      (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v21);
    v22 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v22 = (System_String_o *)StringLiteral_22292/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v22, 0LL);
}