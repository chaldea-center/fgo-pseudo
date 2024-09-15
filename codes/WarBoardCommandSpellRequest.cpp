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

  if ( (byte_4A2F8F4 & 1) == 0 )
  {
    sub_1B761C0(&StringLiteral_23465/*"stageId"*/, *(_QWORD *)&stageId);
    sub_1B761C0(&StringLiteral_18238/*"continueNum"*/, v9);
    sub_1B761C0(&StringLiteral_18150/*"commandSpellId"*/, v10);
    byte_4A2F8F4 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23465/*"stageId"*/, stageId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18150/*"commandSpellId"*/, commandSpellId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18238/*"continueNum"*/, continueNum, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardCommandSpellRequest__getURL(
        WarBoardCommandSpellRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A2F8F3 & 1) == 0 )
  {
    sub_1B761C0(&NetworkManager_TypeInfo, method);
    sub_1B761C0(&StringLiteral_24601/*"warBoard/commandSpell"*/, v2);
    byte_4A2F8F3 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61535060(BaseUrl, (System_String_o *)StringLiteral_24601/*"warBoard/commandSpell"*/, 0LL);
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
  ResponseData_o *v11; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  Il2CppObject *Item; // x0
  Il2CppObject *v14; // x0
  System_String_o *v15; // x1

  if ( (byte_4A2F8F5 & 1) == 0 )
  {
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList);
    sub_1B761C0(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v5);
    sub_1B761C0(&JsonManager_TypeInfo, v6);
    sub_1B761C0(&ResponseCommandKind_TypeInfo, v7);
    sub_1B761C0(&StringLiteral_22046/*"ng"*/, v8);
    sub_1B761C0(&StringLiteral_24613/*"warBoardData"*/, v9);
    byte_4A2F8F5 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v10 = ResponseCommandKind__SearchData(98, responseList, 0LL);
  if ( v10
    && (v11 = v10, ResponseData__checkError_40940600(v10, 0LL))
    && (success = (System_Collections_Generic_Dictionary_object__object__o *)v11->fields.success) != 0LL )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_24613/*"warBoardData"*/,
             (const MethodInfo_31A5CB0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v14 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      success,
      (Il2CppObject *)StringLiteral_24613/*"warBoardData"*/,
      v14,
      (const MethodInfo_31A5D1C *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v15 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v15 = (System_String_o *)StringLiteral_22046/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v15, 0LL);
}