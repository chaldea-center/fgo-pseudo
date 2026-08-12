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

  if ( (byte_59724D5 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17776/*"baseUserSvtId"*/);
    sub_2213A60(&StringLiteral_23468/*"num"*/);
    sub_2213A60(&StringLiteral_24757/*"skillId"*/);
    byte_59724D5 = 1;
  }
  RequestBase__addField_51256716(
    (RequestBase_o *)this,
    (System_String_o *)StringLiteral_17776/*"baseUserSvtId"*/,
    baseUsrSvtId,
    *(const MethodInfo **)&selectSkillId);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23468/*"num"*/, selectSkillIndex, v9);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24757/*"skillId"*/, selectSkillId, v10);
  RequestBase__beginRequest((RequestBase_o *)this, v11);
}


System_String_o *ServantSkillCombineRequest__getURL(ServantSkillCombineRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_59724D4 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_18535/*"card/combineSkill"*/);
    byte_59724D4 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_18535/*"card/combineSkill"*/, 0);
}


void ServantSkillCombineRequest__requestCompleted(
        ServantSkillCombineRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  ResponseData_o *v7; // x20
  __int64 v8; // x1
  Il2CppObject *success; // x20
  System_String_o *v10; // x0
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 v12; // x1

  if ( (byte_59724D6 & 1) == 0 )
  {
    sub_2213A60(&JsonManager_TypeInfo);
    sub_2213A60(&ResponseCommandKind_TypeInfo);
    sub_2213A60(&StringLiteral_23336/*"ng"*/);
    byte_59724D6 = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(26, responseList, 0);
  if ( !v5 || (v7 = v5, !ResponseData__checkError(v5, v5->fields.resCode, v6)) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v12 = StringLiteral_23336/*"ng"*/;
    goto LABEL_13;
  }
  success = (Il2CppObject *)v7->fields.success;
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, v8);
  v10 = JsonManager__toJson(success, 0, 0, 0);
  CallBack = this->fields.CallBack;
  if ( CallBack )
  {
    v12 = (__int64)v10;
LABEL_13:
    ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
      CallBack->fields.method_code,
      v12,
      CallBack->fields.method);
  }
}