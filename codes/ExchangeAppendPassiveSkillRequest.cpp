void ExchangeAppendPassiveSkillRequest___ctor(ExchangeAppendPassiveSkillRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void ExchangeAppendPassiveSkillRequest__beginRequest(
        ExchangeAppendPassiveSkillRequest_o *this,
        int64_t baseUsrSvtId,
        int32_t targetSkillNum,
        int32_t baseSkillNum,
        const MethodInfo *method)
{
  if ( (byte_4E06536 & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_17226/*"baseUserSvtId"*/);
    sub_1CE6700(&StringLiteral_17220/*"baseSkillNum"*/);
    sub_1CE6700(&StringLiteral_24385/*"targetSkillNum"*/);
    byte_4E06536 = 1;
  }
  RequestBase__addField_45375920((RequestBase_o *)this, (System_String_o *)StringLiteral_17226/*"baseUserSvtId"*/, baseUsrSvtId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24385/*"targetSkillNum"*/, targetSkillNum, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_17220/*"baseSkillNum"*/, baseSkillNum, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *ExchangeAppendPassiveSkillRequest__getURL(
        ExchangeAppendPassiveSkillRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4E06535 & 1) == 0 )
  {
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&StringLiteral_17949/*"card/exchangeAppendPassiveSkill"*/);
    byte_4E06535 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_65122828(BaseUrl, (System_String_o *)StringLiteral_17949/*"card/exchangeAppendPassiveSkill"*/, 0);
}


void ExchangeAppendPassiveSkillRequest__requestCompleted(
        ExchangeAppendPassiveSkillRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_4E06537 & 1) == 0 )
  {
    sub_1CE6700(&JsonManager_TypeInfo);
    sub_1CE6700(&ResponseCommandKind_TypeInfo);
    sub_1CE6700(&StringLiteral_22555/*"ng"*/);
    byte_4E06537 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(135, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_45365352(v5, 0)) )
  {
    success = (Il2CppObject *)v6->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_22555/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0);
}