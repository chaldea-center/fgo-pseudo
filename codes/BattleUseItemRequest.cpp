void __fastcall BattleUseItemRequest___ctor(BattleUseItemRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall BattleUseItemRequest__beginRequest(
        BattleUseItemRequest_o *this,
        int32_t itemId,
        int32_t num,
        int32_t eventId,
        const MethodInfo *method)
{
  if ( (byte_42AFC60 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_21341/*"num"*/);
    sub_B52984(&StringLiteral_18606/*"eventId"*/);
    sub_B52984(&StringLiteral_23171/*"useItemId"*/);
    byte_42AFC60 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18606/*"eventId"*/, eventId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23171/*"useItemId"*/, itemId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21341/*"num"*/, num, 0LL);
  RequestBase__addBaseField((RequestBase_o *)this, 0LL);
  RequestBase__WriteParameter((RequestBase_o *)this, 0LL);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall BattleUseItemRequest__getParameterFileName(
        BattleUseItemRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_42AFC5F & 1) == 0 )
  {
    sub_B52984(&AndroidUtil_TypeInfo);
    sub_B52984(&DatFileName_TypeInfo);
    sub_B52984(&StringLiteral_886/*"/"*/);
    byte_42AFC5F = 1;
  }
  if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( (BYTE3(DatFileName_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(30, 0LL);
  return System_String__Concat_44570600(DatFileSavePath, (System_String_o *)StringLiteral_886/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall BattleUseItemRequest__getURL(BattleUseItemRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_42AFC5E & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_16756/*"battle/useItem"*/);
    byte_42AFC5E = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44568316(BaseUrl, (System_String_o *)StringLiteral_16756/*"battle/useItem"*/, 0LL);
}


void __fastcall BattleUseItemRequest__requestCompleted(
        BattleUseItemRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_42AFC61 & 1) == 0 )
  {
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&ResponseCommandKind_TypeInfo);
    sub_B52984(&StringLiteral_21239/*"ng"*/);
    byte_42AFC61 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(107, responseList, 0LL);
  if ( v5 && (v6 = v5, ResponseData__checkError_29724768(v5, 0LL)) )
  {
    success = (Il2CppObject *)v6->fields.success;
    if ( !success )
      return;
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_21239/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0LL);
}