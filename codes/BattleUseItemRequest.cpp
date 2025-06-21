void __fastcall BattleUseItemRequest___ctor(BattleUseItemRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleUseItemRequest__beginRequest(
        BattleUseItemRequest_o *this,
        int32_t itemId,
        int32_t num,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1

  if ( (byte_4B1DF17 & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, *(_QWORD *)&itemId);
    sub_1BCAFF8(&StringLiteral_22137/*"num"*/, v9);
    sub_1BCAFF8(&StringLiteral_18977/*"eventId"*/, v10);
    sub_1BCAFF8(&StringLiteral_24265/*"useItemId"*/, v11);
    byte_4B1DF17 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18977/*"eventId"*/, eventId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24265/*"useItemId"*/, itemId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22137/*"num"*/, num, 0LL);
  RequestBase__addBaseField((RequestBase_o *)this, 0LL);
  RequestBase__WriteParameter((RequestBase_o *)this, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall BattleUseItemRequest__getParameterFileName(
        BattleUseItemRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4B1DF16 & 1) == 0 )
  {
    sub_1BCAFF8(&AndroidUtil_TypeInfo, method);
    sub_1BCAFF8(&DatFileName_TypeInfo, v2);
    sub_1BCAFF8(&StringLiteral_1039/*"/"*/, v3);
    byte_4B1DF16 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(30, 0LL);
  return System_String__Concat_62488672(DatFileSavePath, (System_String_o *)StringLiteral_1039/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall BattleUseItemRequest__getURL(BattleUseItemRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B1DF15 & 1) == 0 )
  {
    sub_1BCAFF8(&NetworkManager_TypeInfo, method);
    sub_1BCAFF8(&StringLiteral_16927/*"battle/useItem"*/, v2);
    byte_4B1DF15 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62450424(BaseUrl, (System_String_o *)StringLiteral_16927/*"battle/useItem"*/, 0LL);
}


void __fastcall BattleUseItemRequest__requestCompleted(
        BattleUseItemRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  ResponseData_o *v8; // x20
  Il2CppObject *success; // x20
  System_String_o *v10; // x1

  if ( (byte_4B1DF18 & 1) == 0 )
  {
    sub_1BCAFF8(&JsonManager_TypeInfo, responseList);
    sub_1BCAFF8(&ResponseCommandKind_TypeInfo, v5);
    sub_1BCAFF8(&StringLiteral_22015/*"ng"*/, v6);
    byte_4B1DF18 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(107, responseList, 0LL);
  if ( v7 && (v8 = v7, ResponseData__checkError_43347888(v7, 0LL)) )
  {
    success = (Il2CppObject *)v8->fields.success;
    if ( !success )
      return;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_22015/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}