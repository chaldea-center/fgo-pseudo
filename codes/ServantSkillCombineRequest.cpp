// local variable allocation has failed, the output may be wrong!
void ServantSkillCombineRequest__beginRequest(
        ServantSkillCombineRequest_o *this,
        int64_t baseUsrSvtId,
        int32_t selectSkillIndex,
        int32_t selectSkillId,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1

  if ( (byte_4CF0224 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_17130/*"baseUserSvtId"*/);
    sub_1C7BAE8(&StringLiteral_22543/*"num"*/);
    sub_1C7BAE8(&StringLiteral_23738/*"skillId"*/);
    byte_4CF0224 = 1;
  }
  RequestBase__addField_44745468(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_17130/*"baseUserSvtId"*/,
    baseUsrSvtId,
    *(const MethodInfo **)&selectSkillId);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22543/*"num"*/, selectSkillIndex, v9);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23738/*"skillId"*/, selectSkillId, v10);
  RequestBase__beginRequest((RequestBase_o *)this, v11);
}


System_String_o *ServantSkillCombineRequest__getURL(ServantSkillCombineRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CF0223 & 1) == 0 )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_17842/*"card/combineSkill"*/);
    byte_4CF0223 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64176912(BaseUrl, (System_String_o *)StringLiteral_17842/*"card/combineSkill"*/, 0);
}


void ServantSkillCombineRequest__requestCompleted(
        ServantSkillCombineRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  Il2CppObject *success; // x20
  System_String_o *v9; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v11; // x8

  if ( (byte_4CF0225 & 1) == 0 )
  {
    sub_1C7BAE8(&JsonManager_TypeInfo);
    sub_1C7BAE8(&ResponseCommandKind_TypeInfo);
    sub_1C7BAE8(&StringLiteral_22419/*"ng"*/);
    byte_4CF0225 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(26, responseList, 0);
  if ( v5 && (v7 = v5, ResponseData__checkError(v5, v5->fields.resCode, v6)) )
  {
    success = (Il2CppObject *)v7->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v9 = JsonManager__toJson(success, 0, 0, 0);
    CallBack = this->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(intptr_t, System_String_o *, intptr_t))CallBack->fields.invoke_impl)(
        CallBack->fields.method_code,
        v9,
        CallBack->fields.method);
  }
  else
  {
    v11 = this->fields.CallBack;
    if ( v11 )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))v11->fields.invoke_impl)(
        v11->fields.method_code,
        StringLiteral_22419/*"ng"*/,
        v11->fields.method);
  }
}