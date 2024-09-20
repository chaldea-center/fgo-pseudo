void __fastcall WarBoardCommandSpellRequest___ctor(WarBoardCommandSpellRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall WarBoardCommandSpellRequest__beginRequest(
        WarBoardCommandSpellRequest_o *this,
        int32_t stageId,
        int32_t commandSpellId,
        int32_t continueNum,
        const MethodInfo *method)
{
  if ( (byte_4A5CB28 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_23477/*"stageId"*/);
    sub_1B885B0(&StringLiteral_18244/*"continueNum"*/);
    sub_1B885B0(&StringLiteral_18156/*"commandSpellId"*/);
    byte_4A5CB28 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23477/*"stageId"*/, stageId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18156/*"commandSpellId"*/, commandSpellId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18244/*"continueNum"*/, continueNum, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardCommandSpellRequest__getURL(
        WarBoardCommandSpellRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5CB27 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_24614/*"warBoard/commandSpell"*/);
    byte_4A5CB27 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_24614/*"warBoard/commandSpell"*/, 0LL);
}


void __fastcall WarBoardCommandSpellRequest__requestCompleted(
        WarBoardCommandSpellRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  Il2CppObject *Item; // x0
  Il2CppObject *v9; // x0
  System_String_o *v10; // x1

  if ( (byte_4A5CB29 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    sub_1B885B0(&JsonManager_TypeInfo);
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    sub_1B885B0(&StringLiteral_24626/*"warBoardData"*/);
    byte_4A5CB29 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(98, responseList, 0LL);
  if ( v5
    && (v6 = v5, ResponseData__checkError_41126424(v5, 0LL))
    && (success = (System_Collections_Generic_Dictionary_object__object__o *)v6->fields.success) != 0LL )
  {
    Item = System_Collections_Generic_Dictionary_object__object___get_Item(
             success,
             (Il2CppObject *)StringLiteral_24626/*"warBoardData"*/,
             (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v9 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      success,
      (Il2CppObject *)StringLiteral_24626/*"warBoardData"*/,
      v9,
      (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_22055/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}