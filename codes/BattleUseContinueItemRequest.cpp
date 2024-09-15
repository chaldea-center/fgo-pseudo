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
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x1

  if ( (byte_4A2F713 & 1) == 0 )
  {
    sub_1B761C0(&NetworkManager_TypeInfo, battleId);
    sub_1B761C0(&StringLiteral_24345/*"useItemId"*/, v11);
    sub_1B761C0(&StringLiteral_18238/*"continueNum"*/, v12);
    sub_1B761C0(&StringLiteral_17107/*"battleId"*/, v13);
    sub_1B761C0(&StringLiteral_24346/*"useItemNum"*/, v14);
    byte_4A2F713 = 1;
  }
  RequestBase__addField_40947456(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_17107/*"battleId"*/,
    battleId,
    *(const MethodInfo **)&useItemId);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18238/*"continueNum"*/, continueNum, v15);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24345/*"useItemId"*/, useItemId, v16);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24346/*"useItemNum"*/, useItemNum, v17);
  RequestBase__addBaseField((RequestBase_o *)this, v18);
  RequestBase__WriteParameter((RequestBase_o *)this, v19);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall BattleUseContinueItemRequest__getMockData(
        BattleUseContinueItemRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4A2F712 & 1) == 0 )
  {
    sub_1B761C0(&NetworkManager_TypeInfo, method);
    sub_1B761C0(&StringLiteral_9100/*"MockBattleUseContinueItemRequest"*/, v2);
    byte_4A2F712 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9100/*"MockBattleUseContinueItemRequest"*/, 0LL);
}


System_String_o *__fastcall BattleUseContinueItemRequest__getParameterFileName(
        BattleUseContinueItemRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4A2F714 & 1) == 0 )
  {
    sub_1B761C0(&AndroidUtil_TypeInfo, method);
    sub_1B761C0(&DatFileName_TypeInfo, v2);
    sub_1B761C0(&StringLiteral_1123/*"/"*/, v3);
    byte_4A2F714 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(29, 0LL);
  return System_String__Concat_61546320(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall BattleUseContinueItemRequest__getURL(
        BattleUseContinueItemRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4A2F711 & 1) == 0 )
  {
    sub_1B761C0(&NetworkManager_TypeInfo, method);
    sub_1B761C0(&StringLiteral_17095/*"battle/useContinueItem"*/, v2);
    byte_4A2F711 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61535060(BaseUrl, (System_String_o *)StringLiteral_17095/*"battle/useContinueItem"*/, 0LL);
}


void __fastcall BattleUseContinueItemRequest__requestCompleted(
        BattleUseContinueItemRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v9; // x9

  if ( (byte_4A2F715 & 1) == 0 )
  {
    sub_1B761C0(&ResponseCommandKind_TypeInfo, responseList);
    sub_1B761C0(&StringLiteral_22216/*"ok"*/, v5);
    sub_1B761C0(&StringLiteral_22046/*"ng"*/, v6);
    byte_4A2F715 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(105, responseList, 0LL);
  if ( v7 && v7->fields.success )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22216/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22046/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v9,
    *(_QWORD *)&CallBack->fields.extra_arg);
}