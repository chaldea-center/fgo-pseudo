// local variable allocation has failed, the output may be wrong!
void __fastcall BattleUseContinueItemRequest__beginRequest(
        BattleUseContinueItemRequest_o *this,
        int64_t battleId,
        int32_t continueNum,
        int32_t useItemId,
        int32_t useItemNum,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x1
  const MethodInfo *v23; // x1
  __int64 v24; // x1

  if ( (byte_4B17A05 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, battleId, *(_QWORD *)&continueNum);
    sub_1BCA7E0(&StringLiteral_24610/*"useItemId"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_18428/*"continueNum"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_17285/*"battleId"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_24611/*"useItemNum"*/, v17, v18);
    byte_4B17A05 = 1;
  }
  RequestBase__addField_41868688(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_17285/*"battleId"*/,
    battleId,
    *(const MethodInfo **)&useItemId);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18428/*"continueNum"*/, continueNum, v19);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24610/*"useItemId"*/, useItemId, v20);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24611/*"useItemNum"*/, useItemNum, v21);
  RequestBase__addBaseField((RequestBase_o *)this, v22);
  RequestBase__WriteParameter((RequestBase_o *)this, v23);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v24);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall BattleUseContinueItemRequest__getMockData(
        BattleUseContinueItemRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2

  if ( (byte_4B17A04 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_9233/*"MockBattleUseContinueItemRequest"*/, v3, v4);
    byte_4B17A04 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9233/*"MockBattleUseContinueItemRequest"*/, 0LL);
}


System_String_o *__fastcall BattleUseContinueItemRequest__getParameterFileName(
        BattleUseContinueItemRequest_o *this,
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

  if ( (byte_4B17A06 & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidUtil_TypeInfo, method, v2);
    sub_1BCA7E0(&DatFileName_TypeInfo, v3, v4);
    sub_1BCA7E0(&StringLiteral_1120/*"/"*/, v5, v6);
    byte_4B17A06 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, method);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo, v7);
  FileName = DatFileName__getFileName(29, 0LL);
  return System_String__Concat_62412480(DatFileSavePath, (System_String_o *)StringLiteral_1120/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall BattleUseContinueItemRequest__getURL(
        BattleUseContinueItemRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B17A03 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_17273/*"battle/useContinueItem"*/, v3, v4);
    byte_4B17A03 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_17273/*"battle/useContinueItem"*/, 0LL);
}


void __fastcall BattleUseContinueItemRequest__requestCompleted(
        BattleUseContinueItemRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  ResponseData_o *v9; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v11; // x9

  if ( (byte_4B17A07 & 1) == 0 )
  {
    sub_1BCA7E0(&ResponseCommandKind_TypeInfo, responseList, method);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v5, v6);
    sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v7, v8);
    byte_4B17A07 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v9 = ResponseCommandKind__SearchData(105, responseList, 0LL);
  if ( v9 && v9->fields.success )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v11 = &StringLiteral_22465/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v11 = &StringLiteral_22292/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v11,
    *(_QWORD *)&CallBack->fields.extra_arg);
}