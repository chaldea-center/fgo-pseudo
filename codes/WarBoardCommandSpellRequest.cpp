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

  if ( (byte_4C23A3F & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_23970/*"updateDamageGauge"*/, *(_QWORD *)&stageId);
    sub_1C3B764(&StringLiteral_18599/*"elementType"*/, v9);
    sub_1C3B764(&StringLiteral_18511/*"ef_states_down_01"*/, v10);
    byte_4C23A3F = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23970/*"updateDamageGauge"*/, stageId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18511/*"ef_states_down_01"*/, commandSpellId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18599/*"elementType"*/, continueNum, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall WarBoardCommandSpellRequest__getURL(
        WarBoardCommandSpellRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4C23A3E & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_25124/*"？？？"*/, v2);
    byte_4C23A3E = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63368612(BaseUrl, (System_String_o *)StringLiteral_25124/*"？？？"*/, 0LL);
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

  if ( (byte_4C23A40 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__set_Item__, v5);
    sub_1C3B764(&JsonManager_TypeInfo, v6);
    sub_1C3B764(&ResponseCommandKind_TypeInfo, v7);
    sub_1C3B764(&StringLiteral_22507/*"referrerMapId"*/, v8);
    sub_1C3B764(&StringLiteral_25136, v9);
    byte_4C23A40 = 1;
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
             (Il2CppObject *)StringLiteral_25136,
             (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    v15 = RequestBase__UnpackToMessagePack((RequestBase_o *)this, Item, 0LL);
    System_Collections_Generic_Dictionary_object__object___set_Item(
      success,
      (Il2CppObject *)StringLiteral_25136,
      v15,
      (const MethodInfo_3355754 *)Method_System_Collections_Generic_Dictionary_string__object__set_Item__);
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v16 = JsonManager__toJson((Il2CppObject *)success, 0, 0, 0LL);
  }
  else
  {
    v16 = (System_String_o *)StringLiteral_22507/*"referrerMapId"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v16, 0LL);
}