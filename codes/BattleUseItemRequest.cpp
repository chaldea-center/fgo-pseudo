// local variable allocation has failed, the output may be wrong!
void __fastcall BattleUseItemRequest__beginRequest(
        BattleUseItemRequest_o *this,
        int32_t itemId,
        int32_t num,
        int32_t eventId,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x1
  __int64 v19; // x1

  if ( (byte_4B17A0F & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, *(_QWORD *)&itemId, *(_QWORD *)&num);
    sub_1BCA7E0(&StringLiteral_22418/*"num"*/, v9, v10);
    sub_1BCA7E0(&StringLiteral_19329/*"eventId"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_24610/*"useItemId"*/, v13, v14);
    byte_4B17A0F = 1;
  }
  RequestBase__addField(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_19329/*"eventId"*/,
    eventId,
    *(const MethodInfo **)&eventId);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24610/*"useItemId"*/, itemId, v15);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22418/*"num"*/, num, v16);
  RequestBase__addBaseField((RequestBase_o *)this, v17);
  RequestBase__WriteParameter((RequestBase_o *)this, v18);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v19);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall BattleUseItemRequest__getParameterFileName(
        BattleUseItemRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4B17A0E & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidUtil_TypeInfo, method, v2);
    sub_1BCA7E0(&DatFileName_TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v5, v6);
    byte_4B17A0E = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, method);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v7);
  FileName = DatFileName__getFileName(30, 0LL);
  return System_String__Concat_62412480(DatFileSavePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall BattleUseItemRequest__getURL(BattleUseItemRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17A0D & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_17274/*"battle/useItem"*/, v3, v4);
    byte_4B17A0D = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_17274/*"battle/useItem"*/, 0LL);
}


void __fastcall BattleUseItemRequest__requestCompleted(
        BattleUseItemRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  ResponseData_o *v9; // x0
  ResponseData_o *v10; // x20
  __int64 v11; // x1
  Il2CppObject *success; // x20
  System_String_o *v13; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v15; // x8

  if ( (byte_4B17A10 & 1) == 0 )
  {
    sub_1BCA7E0(&JsonManager_TypeInfo, responseList, method);
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, v5, v6);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v7, v8);
    byte_4B17A10 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v9 = ResponseCommandKind__SearchData(107, responseList, 0LL);
  if ( v9 && (v10 = v9, ResponseData__checkError_41952396(v9, 0LL)) )
  {
    success = (Il2CppObject *)v10->fields.success;
    if ( success )
    {
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v11);
      v13 = JsonManager__toJson(success, 0, 0, 0LL);
      CallBack = this->fields.CallBack;
      if ( CallBack )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
          CallBack->fields.original_method_info,
          v13,
          *(_QWORD *)&CallBack->fields.extra_arg);
    }
  }
  else
  {
    v15 = this->fields.CallBack;
    if ( v15 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v15->fields.m_target)(
        v15->fields.original_method_info,
        StringLiteral_22292/*"ng"*/,
        *(_QWORD *)&v15->fields.extra_arg);
  }
}