void ServantEquipSetRequest__beginRequest(
        ServantEquipSetRequest_o *this,
        SvtEquipInfo_o *svtEquip,
        const MethodInfo *method)
{
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1

  if ( (byte_4CF0214 & 1) == 0 )
  {
    sub_1C7BAE8(&JsonManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_19203/*"equipInfo"*/);
    sub_1C7BAE8(&StringLiteral_15862/*"["*/);
    sub_1C7BAE8(&StringLiteral_16114/*"]"*/);
    byte_4CF0214 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v5 = JsonManager__toJson((Il2CppObject *)svtEquip, 0, 0, 0);
  v6 = System_String__Concat_64215176(
         (System_String_o *)StringLiteral_15862/*"["*/,
         v5,
         (System_String_o *)StringLiteral_16114/*"]"*/,
         0);
  RequestBase__addField_44748720((RequestBase_o *)this, (System_String_o *)StringLiteral_19203/*"equipInfo"*/, v6, v7);
  RequestBase__beginRequest((RequestBase_o *)this, v8);
}


void ServantEquipSetRequest__beginRequest_44786380(
        ServantEquipSetRequest_o *this,
        SvtEquipInfo_array *svtEquipList,
        const MethodInfo *method)
{
  System_String_o *v5; // x0
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x1

  if ( (byte_4CF0215 & 1) == 0 )
  {
    sub_1C7BAE8(&JsonManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_19203/*"equipInfo"*/);
    byte_4CF0215 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v5 = JsonManager__toJson(&svtEquipList->obj, 0, 0, 0);
  RequestBase__addField_44748720((RequestBase_o *)this, (System_String_o *)StringLiteral_19203/*"equipInfo"*/, v5, v6);
  RequestBase__beginRequest((RequestBase_o *)this, v7);
}


System_String_o *ServantEquipSetRequest__getURL(ServantEquipSetRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CF0213 & 1) == 0 )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_24098/*"svtEquip/set"*/);
    byte_4CF0213 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64176912(BaseUrl, (System_String_o *)StringLiteral_24098/*"svtEquip/set"*/, 0);
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

  if ( (byte_4CF0216 & 1) == 0 )
  {
    sub_1C7BAE8(&ResponseCommandKind_TypeInfo);
    sub_1C7BAE8(&StringLiteral_22590/*"ok"*/);
    sub_1C7BAE8(&StringLiteral_22419/*"ng"*/);
    byte_4CF0216 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v5 = ResponseCommandKind__SearchData(40, responseList, 0);
  if ( v5 && ResponseData__checkError(v5, v5->fields.resCode, v6) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22590/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_22419/*"ng"*/;
  }
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
    CallBack->fields.method_code,
    *v8,
    CallBack->fields.method);
}