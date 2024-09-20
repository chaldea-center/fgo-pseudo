// local variable allocation has failed, the output may be wrong!
void __fastcall BattleUseContinueRequest__beginRequest(
        BattleUseContinueRequest_o *this,
        int64_t battleId,
        System_Int32_array *usedTurnArray,
        int32_t continueCount,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x1

  if ( (byte_4A5C94C & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_24367/*"usedTurnList"*/);
    sub_1B885B0(&StringLiteral_18244/*"continueNum"*/);
    sub_1B885B0(&StringLiteral_17113/*"battleId"*/);
    byte_4A5C94C = 1;
  }
  RequestBase__addField_41133280(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_17113/*"battleId"*/,
    battleId,
    *(const MethodInfo **)&continueCount);
  RequestBase__addField_41136012((RequestBase_o *)this, (System_String_o *)StringLiteral_24367/*"usedTurnList"*/, &usedTurnArray->obj, v9);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18244/*"continueNum"*/, continueCount, v10);
  RequestBase__addBaseField((RequestBase_o *)this, v11);
  RequestBase__WriteParameter((RequestBase_o *)this, v12);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall BattleUseContinueRequest__getMockData(
        BattleUseContinueRequest_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5C94B & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_9104/*"MockBattleUseContinueRequest"*/);
    byte_4A5C94B = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9104/*"MockBattleUseContinueRequest"*/, 0LL);
}


System_String_o *__fastcall BattleUseContinueRequest__getParameterFileName(
        BattleUseContinueRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4A5C94D & 1) == 0 )
  {
    sub_1B885B0(&AndroidUtil_TypeInfo);
    sub_1B885B0(&DatFileName_TypeInfo);
    sub_1B885B0(&StringLiteral_1123/*"/"*/);
    byte_4A5C94D = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(2, 0LL);
  return System_String__Concat_61718292(DatFileSavePath, (System_String_o *)StringLiteral_1123/*"/"*/, FileName, 0LL);
}


System_String_o *__fastcall BattleUseContinueRequest__getURL(
        BattleUseContinueRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5C94A & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_17100/*"battle/useContinue"*/);
    byte_4A5C94A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_17100/*"battle/useContinue"*/, 0LL);
}


void __fastcall BattleUseContinueRequest__requestCompleted(
        BattleUseContinueRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v7; // x9

  if ( (byte_4A5C94E & 1) == 0 )
  {
    sub_1B885B0(&ResponseCommandKind_TypeInfo);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5C94E = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(24, responseList, 0LL);
  if ( v5 && v5->fields.success )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v7 = &StringLiteral_22225/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v7 = &StringLiteral_22055/*"ng"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v7,
    *(_QWORD *)&CallBack->fields.extra_arg);
}