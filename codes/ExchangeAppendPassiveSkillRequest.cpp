// local variable allocation has failed, the output may be wrong!
void __fastcall ExchangeAppendPassiveSkillRequest__beginRequest(
        ExchangeAppendPassiveSkillRequest_o *this,
        int64_t baseUsrSvtId,
        int32_t targetSkillNum,
        int32_t baseSkillNum,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1

  if ( (byte_49BC842 & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_16766/*"baseUserSvtId"*/, baseUsrSvtId);
    sub_1B4CF90(&StringLiteral_16761/*"baseSkillNum"*/, v9);
    sub_1B4CF90(&StringLiteral_23573/*"targetSkillNum"*/, v10);
    byte_49BC842 = 1;
  }
  RequestBase__addField_41754736(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_16766/*"baseUserSvtId"*/,
    baseUsrSvtId,
    *(const MethodInfo **)&baseSkillNum);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23573/*"targetSkillNum"*/, targetSkillNum, v11);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_16761/*"baseSkillNum"*/, baseSkillNum, v12);
  RequestBase__beginRequest((RequestBase_o *)this, v13);
}


System_String_o *__fastcall ExchangeAppendPassiveSkillRequest__getURL(
        ExchangeAppendPassiveSkillRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_49BC841 & 1) == 0 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_17447/*"card/exchangeAppendPassiveSkill"*/, v2);
    byte_49BC841 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61093468(BaseUrl, (System_String_o *)StringLiteral_17447/*"card/exchangeAppendPassiveSkill"*/, 0LL);
}


void __fastcall ExchangeAppendPassiveSkillRequest__requestCompleted(
        ExchangeAppendPassiveSkillRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  ResponseData_o *v8; // x20
  Il2CppObject *success; // x20
  System_String_o *v10; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v12; // x8

  if ( (byte_49BC843 & 1) == 0 )
  {
    sub_1B4CF90(&JsonManager_TypeInfo, responseList);
    sub_1B4CF90(&ResponseCommandKind_TypeInfo, v5);
    sub_1B4CF90(&StringLiteral_21779/*"ng"*/, v6);
    byte_49BC843 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(135, responseList, 0LL);
  if ( v7 && (v8 = v7, ResponseData__checkError_41839176(v7, 0LL)) )
  {
    success = (Il2CppObject *)v8->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_String_o *, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        v10,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v12 = this->fields.CallBack;
    if ( v12 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))v12->fields.m_target)(
        v12->fields.original_method_info,
        StringLiteral_21779/*"ng"*/,
        *(_QWORD *)&v12->fields.extra_arg);
  }
}