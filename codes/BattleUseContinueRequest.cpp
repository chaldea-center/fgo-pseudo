// local variable allocation has failed, the output may be wrong!
void __fastcall BattleUseContinueRequest__beginRequest(
        BattleUseContinueRequest_o *this,
        int64_t battleId,
        System_Int32_array *usedTurnArray,
        int32_t continueCount,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x1

  if ( (byte_4C2385B & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, battleId);
    sub_1C3B764(&StringLiteral_24874/*"ᜀᜠ"*/, v9);
    sub_1C3B764(&StringLiteral_18599/*"elementType"*/, v10);
    sub_1C3B764(&StringLiteral_17444/*"case"*/, v11);
    byte_4C2385B = 1;
  }
  RequestBase__addField_42628192(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_17444/*"case"*/,
    battleId,
    *(const MethodInfo **)&continueCount);
  RequestBase__addField_42630344(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_24874/*"ᜀᜠ"*/,
    &usedTurnArray->obj,
    v12);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18599/*"elementType"*/, continueCount, v13);
  RequestBase__addBaseField((RequestBase_o *)this, v14);
  RequestBase__WriteParameter((RequestBase_o *)this, v15);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall BattleUseContinueRequest__getMockData(
        BattleUseContinueRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4C2385A & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_9291/*"Non existent ParameterInfo. Position bigger than member's parameters length."*/, v2);
    byte_4C2385A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9291/*"Non existent ParameterInfo. Position bigger than member's parameters length."*/, 0LL);
}


System_String_o *__fastcall BattleUseContinueRequest__getParameterFileName(
        BattleUseContinueRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  System_String_o *DatFileSavePath; // x19
  System_String_o *FileName; // x2

  if ( (byte_4C2385C & 1) == 0 )
  {
    sub_1C3B764(&AndroidUtil_TypeInfo, method);
    sub_1C3B764(&DatFileName_TypeInfo, v2);
    sub_1C3B764(&StringLiteral_1102/*"/[delegate]"*/, v3);
    byte_4C2385C = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0LL);
  if ( !DatFileName_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DatFileName_TypeInfo);
  FileName = DatFileName__getFileName(2, 0LL);
  return System_String__Concat_63379872(DatFileSavePath, (System_String_o *)StringLiteral_1102/*"/[delegate]"*/, FileName, 0LL);
}


System_String_o *__fastcall BattleUseContinueRequest__getURL(
        BattleUseContinueRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4C23859 & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_17431/*"card_command_card_exceed"*/, v2);
    byte_4C23859 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63368612(BaseUrl, (System_String_o *)StringLiteral_17431/*"card_command_card_exceed"*/, 0LL);
}


void __fastcall BattleUseContinueRequest__requestCompleted(
        BattleUseContinueRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v9; // x9

  if ( (byte_4C2385D & 1) == 0 )
  {
    sub_1C3B764(&ResponseCommandKind_TypeInfo, responseList);
    sub_1C3B764(&StringLiteral_22683/*"sandboxSeurity"*/, v5);
    sub_1C3B764(&StringLiteral_22507/*"referrerMapId"*/, v6);
    byte_4C2385D = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(24, responseList, 0LL);
  if ( v7 && v7->fields.success )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22683/*"sandboxSeurity"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v9 = &StringLiteral_22507/*"referrerMapId"*/;
  }
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
    CallBack->fields.original_method_info,
    *v9,
    *(_QWORD *)&CallBack->fields.extra_arg);
}