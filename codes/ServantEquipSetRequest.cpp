void ServantEquipSetRequest__beginRequest(
        ServantEquipSetRequest_o *this,
        SvtEquipInfo_o *svtEquip,
        const MethodInfo *method)
{
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1

  if ( (byte_4E065ED & 1) == 0 )
  {
    sub_1CE6700(&JsonManager_TypeInfo);
    sub_1CE6700(&StringLiteral_19315/*"equipInfo"*/);
    sub_1CE6700(&StringLiteral_15954/*"["*/);
    sub_1CE6700(&StringLiteral_16207/*"]"*/);
    byte_4E065ED = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v5 = JsonManager__toJson((Il2CppObject *)svtEquip, 0, 0, 0);
  v6 = System_String__Concat_65161092(
         (System_String_o *)StringLiteral_15954/*"["*/,
         v5,
         (System_String_o *)StringLiteral_16207/*"]"*/,
         0);
  RequestBase__addField_45365032((RequestBase_o *)this, (System_String_o *)StringLiteral_19315/*"equipInfo"*/, v6, v7);
  RequestBase__beginRequest((RequestBase_o *)this, v8);
}


void ServantEquipSetRequest__beginRequest_45386688(
        ServantEquipSetRequest_o *this,
        SvtEquipInfo_array *svtEquipList,
        const MethodInfo *method)
{
  System_String_o *v5; // x0
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x1

  if ( (byte_4E065EE & 1) == 0 )
  {
    sub_1CE6700(&JsonManager_TypeInfo);
    sub_1CE6700(&StringLiteral_19315/*"equipInfo"*/);
    byte_4E065EE = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v5 = JsonManager__toJson(&svtEquipList->obj, 0, 0, 0);
  RequestBase__addField_45365032((RequestBase_o *)this, (System_String_o *)StringLiteral_19315/*"equipInfo"*/, v5, v6);
  RequestBase__beginRequest((RequestBase_o *)this, v7);
}


System_String_o *ServantEquipSetRequest__getURL(ServantEquipSetRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4E065EC & 1) == 0 )
  {
    sub_1CE6700(&NetworkManager_TypeInfo);
    sub_1CE6700(&StringLiteral_24248/*"svtEquip/set"*/);
    byte_4E065EC = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_65122828(BaseUrl, (System_String_o *)StringLiteral_24248/*"svtEquip/set"*/, 0);
}


void ServantEquipSetRequest__requestCompleted(
        ServantEquipSetRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  const MethodInfo *v6; // x2
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v8; // x9

  if ( (byte_4E065EF & 1) == 0 )
  {
    sub_1CE6700(&ResponseCommandKind_TypeInfo);
    sub_1CE6700(&StringLiteral_22728/*"ok"*/);
    sub_1CE6700(&StringLiteral_22555/*"ng"*/);
    byte_4E065EF = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(40, responseList, 0);
  if ( v5 && ResponseData__checkError(v5, v5->fields.resCode, v6) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22728/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22555/*"ng"*/;
  }
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
    CallBack->fields.method_code,
    *v8,
    CallBack->fields.method);
}