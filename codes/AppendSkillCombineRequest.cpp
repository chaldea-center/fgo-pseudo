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

  if ( (byte_49FFBC4 & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_23250/*"skillNum"*/, baseUsrSvtId);
    sub_1B64870(&StringLiteral_17018/*"baseUserSvtId"*/, v9);
    sub_1B64870(&StringLiteral_18331/*"currentSkillLv"*/, v10);
    byte_49FFBC4 = 1;
  }
  RequestBase__addField_40854504((RequestBase_o *)this, (System_String_o *)StringLiteral_17018/*"baseUserSvtId"*/, baseUsrSvtId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23250/*"skillNum"*/, skillNum, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18331/*"currentSkillLv"*/, currentSkillLv, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall AppendSkillCombineRequest__getURL(
        AppendSkillCombineRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_49FFBC3 & 1) == 0 )
  {
    sub_1B64870(&NetworkManager_TypeInfo, method);
    sub_1B64870(&StringLiteral_17677/*"card/combineAppendPassiveSkill"*/, v2);
    byte_49FFBC3 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61383576(BaseUrl, (System_String_o *)StringLiteral_17677/*"card/combineAppendPassiveSkill"*/, 0LL);
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

  if ( (byte_49FFBC5 & 1) == 0 )
  {
    sub_1B64870(&JsonManager_TypeInfo, responseList);
    sub_1B64870(&ResponseCommandKind_TypeInfo, v5);
    sub_1B64870(&StringLiteral_21971/*"ng"*/, v6);
    byte_49FFBC5 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(108, responseList, 0LL);
  if ( v7 && (v8 = v7, ResponseData__checkError_40851148(v7, 0LL)) )
  {
    success = (Il2CppObject *)v8->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v10 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_21971/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}