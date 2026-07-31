void ServantEquipSetRequest__beginRequest(
        ServantEquipSetRequest_o *this,
        SvtEquipInfo_o *svtEquip,
        const MethodInfo *method)
{
  System_String_o *v5; // x0
  System_String_o *v6; // x0
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1

  if ( (byte_593A2E8 & 1) == 0 )
  {
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&StringLiteral_19909/*"equipInfo"*/);
    sub_21FFC50(&StringLiteral_16395/*"["*/);
    sub_21FFC50(&StringLiteral_16659/*"]"*/);
    byte_593A2E8 = 1;
  }
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, svtEquip);
  v5 = JsonManager__toJson((Il2CppObject *)svtEquip, 0, 0, 0);
  v6 = System_String__Concat_75481624(
         (System_String_o *)StringLiteral_16395/*"["*/,
         v5,
         (System_String_o *)StringLiteral_16659/*"]"*/,
         0);
  RequestBase__addField_51187332((RequestBase_o *)this, (System_String_o *)StringLiteral_19909/*"equipInfo"*/, v6, v7);
  RequestBase__beginRequest((RequestBase_o *)this, v8);
}


void ServantEquipSetRequest__beginRequest_51211408(
        ServantEquipSetRequest_o *this,
        SvtEquipInfo_array *svtEquipList,
        const MethodInfo *method)
{
  System_String_o *v5; // x0
  const MethodInfo *v6; // x3
  const MethodInfo *v7; // x1

  if ( (byte_593A2E9 & 1) == 0 )
  {
    sub_21FFC50(&JsonManager_TypeInfo);
    sub_21FFC50(&StringLiteral_19909/*"equipInfo"*/);
    byte_593A2E9 = 1;
  }
  if ( !*(&JsonManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo, svtEquipList);
  v5 = JsonManager__toJson(&svtEquipList->obj, 0, 0, 0);
  RequestBase__addField_51187332((RequestBase_o *)this, (System_String_o *)StringLiteral_19909/*"equipInfo"*/, v5, v6);
  RequestBase__beginRequest((RequestBase_o *)this, v7);
}


System_String_o *ServantEquipSetRequest__getURL(ServantEquipSetRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_593A2E7 & 1) == 0 )
  {
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&StringLiteral_25090/*"svtEquip/set"*/);
    byte_593A2E7 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75438412(BaseUrl, (System_String_o *)StringLiteral_25090/*"svtEquip/set"*/, 0);
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

  if ( (byte_593A2EA & 1) == 0 )
  {
    sub_21FFC50(&ResponseCommandKind_TypeInfo);
    sub_21FFC50(&StringLiteral_23468/*"ok"*/);
    sub_21FFC50(&StringLiteral_23290/*"ng"*/);
    byte_593A2EA = 1;
  }
  if ( !*(&ResponseCommandKind_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo, responseList);
  v5 = ResponseCommandKind__SearchData(40, responseList, 0);
  if ( v5 && ResponseData__checkError(v5, v5->fields.resCode, v6) )
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_23468/*"ok"*/;
  }
  else
  {
    CallBack = this->fields.CallBack;
    if ( !CallBack )
      return;
    v8 = &StringLiteral_23290/*"ng"*/;
  }
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))CallBack->fields.invoke_impl)(
    CallBack->fields.method_code,
    *v8,
    CallBack->fields.method);
}