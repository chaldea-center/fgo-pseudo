void __fastcall AppendSkillCombineRequest___ctor(AppendSkillCombineRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall AppendSkillCombineRequest__beginRequest(
        AppendSkillCombineRequest_o *this,
        int64_t baseUsrSvtId,
        int32_t skillNum,
        int32_t currentSkillLv,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1

  if ( (byte_4B46421 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_23547/*"skillNum"*/, baseUsrSvtId);
    sub_1BDB878(&StringLiteral_17063/*"baseUserSvtId"*/, v9);
    sub_1BDB878(&StringLiteral_18412/*"currentSkillLv"*/, v10);
    byte_4B46421 = 1;
  }
  RequestBase__addField_43153704((RequestBase_o *)this, (System_String_o *)StringLiteral_17063/*"baseUserSvtId"*/, baseUsrSvtId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23547/*"skillNum"*/, skillNum, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18412/*"currentSkillLv"*/, currentSkillLv, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall AppendSkillCombineRequest__getURL(
        AppendSkillCombineRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B46420 & 1) == 0 )
  {
    sub_1BDB878(&NetworkManager_TypeInfo, method);
    sub_1BDB878(&StringLiteral_17752/*"card/combineAppendPassiveSkill"*/, v2);
    byte_4B46420 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62572260(BaseUrl, (System_String_o *)StringLiteral_17752/*"card/combineAppendPassiveSkill"*/, 0LL);
}


void __fastcall AppendSkillCombineRequest__requestCompleted(
        AppendSkillCombineRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  ResponseData_o *v8; // x20
  Il2CppObject *success; // x20
  System_String_o *v10; // x1

  if ( (byte_4B46422 & 1) == 0 )
  {
    sub_1BDB878(&JsonManager_TypeInfo, responseList);
    sub_1BDB878(&ResponseCommandKind_TypeInfo, v5);
    sub_1BDB878(&StringLiteral_22233/*"ng"*/, v6);
    byte_4B46422 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(108, responseList, 0LL);
  if ( v7 && (v8 = v7, ResponseData__checkError_43151432(v7, 0LL)) )
  {
    success = (Il2CppObject *)v8->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_22233/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}