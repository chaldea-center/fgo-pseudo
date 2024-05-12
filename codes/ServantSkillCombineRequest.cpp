void __fastcall ServantSkillCombineRequest___ctor(ServantSkillCombineRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall ServantSkillCombineRequest__beginRequest(
        ServantSkillCombineRequest_o *this,
        int64_t baseUsrSvtId,
        int32_t selectSkillIndex,
        int32_t selectSkillId,
        const MethodInfo *method)
{
  if ( (byte_438D1D0 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_16949/*"baseUserSvtId"*/);
    sub_B775C4(&StringLiteral_21609/*"num"*/);
    sub_B775C4(&StringLiteral_22615/*"skillId"*/);
    byte_438D1D0 = 1;
  }
  RequestBase__addField_32564924((RequestBase_o *)this, (System_String_o *)StringLiteral_16949/*"baseUserSvtId"*/, baseUsrSvtId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21609/*"num"*/, selectSkillIndex, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22615/*"skillId"*/, selectSkillId, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall ServantSkillCombineRequest__getURL(
        ServantSkillCombineRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_438D1CF & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_17562/*"card/combineSkill"*/);
    byte_438D1CF = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_17562/*"card/combineSkill"*/, 0LL);
}


void __fastcall ServantSkillCombineRequest__requestCompleted(
        ServantSkillCombineRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_438D1D1 & 1) == 0 )
  {
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&ResponseCommandKind_TypeInfo);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    byte_438D1D1 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(26, responseList, 0LL);
  if ( v5 && (v6 = v5, ResponseData__checkError_30128096(v5, 0LL)) )
  {
    success = (Il2CppObject *)v6->fields.success;
    if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v8 = JsonManager__toJson(success, 0, 0, 0LL);
  }
  else
  {
    v8 = (System_String_o *)StringLiteral_21504/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0LL);
}