void AppendSkillCombineRequest___ctor(AppendSkillCombineRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void AppendSkillCombineRequest__beginRequest(
        AppendSkillCombineRequest_o *this,
        int64_t baseUsrSvtId,
        int32_t skillNum,
        int32_t currentSkillLv,
        const MethodInfo *method)
{
  if ( (byte_4CB7D35 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_23610/*"skillNum"*/);
    sub_1C6BA08(&StringLiteral_17062/*"baseUserSvtId"*/);
    sub_1C6BA08(&StringLiteral_18437/*"currentSkillLv"*/);
    byte_4CB7D35 = 1;
  }
  RequestBase__addField_44468288((RequestBase_o *)this, (System_String_o *)StringLiteral_17062/*"baseUserSvtId"*/, baseUsrSvtId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23610/*"skillNum"*/, skillNum, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18437/*"currentSkillLv"*/, currentSkillLv, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *AppendSkillCombineRequest__getURL(AppendSkillCombineRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CB7D34 & 1) == 0 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_17759/*"card/combineAppendPassiveSkill"*/);
    byte_4CB7D34 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_63966792(BaseUrl, (System_String_o *)StringLiteral_17759/*"card/combineAppendPassiveSkill"*/, 0);
}


void AppendSkillCombineRequest__requestCompleted(
        AppendSkillCombineRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_4CB7D36 & 1) == 0 )
  {
    sub_1C6BA08(&JsonManager_TypeInfo);
    sub_1C6BA08(&ResponseCommandKind_TypeInfo);
    sub_1C6BA08(&StringLiteral_22301/*"ng"*/);
    byte_4CB7D36 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(108, responseList, 0);
  if ( v5 && (v6 = v5, ResponseData__checkError_44468912(v5, 0)) )
  {
    success = (Il2CppObject *)v6->fields.success;
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_22301/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0);
}