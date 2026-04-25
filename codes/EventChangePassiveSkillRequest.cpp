void EventChangePassiveSkillRequest___ctor(EventChangePassiveSkillRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


void EventChangePassiveSkillRequest__beginRequest(
        EventChangePassiveSkillRequest_o *this,
        int32_t skillChangeType,
        int32_t eventId,
        int32_t svtId,
        int32_t itemId,
        int32_t skillId,
        const MethodInfo *method)
{
  if ( (byte_4E06506 & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_24249/*"svtId"*/);
    sub_1CE6700(&StringLiteral_19400/*"eventId"*/);
    sub_1CE6700(&StringLiteral_21340/*"itemId"*/);
    sub_1CE6700(&StringLiteral_23885/*"skillId"*/);
    sub_1CE6700(&StringLiteral_24642/*"type"*/);
    byte_4E06506 = 1;
  }
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24642/*"type"*/, skillChangeType, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19400/*"eventId"*/, eventId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_24249/*"svtId"*/, svtId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21340/*"itemId"*/, itemId, 0);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23885/*"skillId"*/, skillId, 0);
  RequestBase__beginRequest((RequestBase_o *)this, 0);
}


System_String_o *EventChangePassiveSkillRequest__getURL(
        EventChangePassiveSkillRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4E06505 & 1) == 0 )
  {
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&StringLiteral_19379/*"event/changePassiveSkill"*/);
    byte_4E06505 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_65122828(BaseUrl, (System_String_o *)StringLiteral_19379/*"event/changePassiveSkill"*/, 0);
}


void EventChangePassiveSkillRequest__requestCompleted(
        EventChangePassiveSkillRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  bool v7; // w0
  System_String_o *v8; // x1
  Il2CppObject *success; // x20

  if ( (byte_4E06507 & 1) == 0 )
  {
    sub_1CE6700(&JsonManager_TypeInfo);
    sub_1CE6700(&ResponseCommandKind_TypeInfo);
    byte_4E06507 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(139, responseList, 0);
  if ( v5 )
  {
    v6 = v5;
    v7 = ResponseData__checkError_45365352(v5, 0);
    v8 = 0;
    if ( v7 )
    {
      success = (Il2CppObject *)v6->fields.success;
      if ( !JsonManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
      v8 = JsonManager__toJson(success, 0, 0, 0);
    }
  }
  else
  {
    v8 = 0;
  }
  RequestBase__completed((RequestBase_o *)this, v8, 0);
}