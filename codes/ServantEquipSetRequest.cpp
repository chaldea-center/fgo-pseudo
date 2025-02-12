void __fastcall ServantEquipSetRequest___ctor(ServantEquipSetRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall ServantEquipSetRequest__beginRequest(
        ServantEquipSetRequest_o *this,
        SvtEquipInfo_o *svtEquip,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_String_o *v8; // x0
  System_String_o *v9; // x0

  if ( (byte_4BC94AF & 1) == 0 )
  {
    sub_1C1ABD4(&JsonManager_TypeInfo, svtEquip);
    sub_1C1ABD4(&StringLiteral_19360/*"equipInfo"*/, v5);
    sub_1C1ABD4(&StringLiteral_16075/*"["*/, v6);
    sub_1C1ABD4(&StringLiteral_16334/*"]"*/, v7);
    byte_4BC94AF = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v8 = JsonManager__toJson((Il2CppObject *)svtEquip, 0, 0, 0LL);
  v9 = System_String__Concat_63051628(
         (System_String_o *)StringLiteral_16075/*"["*/,
         v8,
         (System_String_o *)StringLiteral_16334/*"]"*/,
         0LL);
  RequestBase__addField_42362156((RequestBase_o *)this, (System_String_o *)StringLiteral_19360/*"equipInfo"*/, v9, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


void __fastcall ServantEquipSetRequest__beginRequest_42458132(
        ServantEquipSetRequest_o *this,
        SvtEquipInfo_array *svtEquipList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *v6; // x0

  if ( (byte_4BC94B0 & 1) == 0 )
  {
    sub_1C1ABD4(&JsonManager_TypeInfo, svtEquipList);
    sub_1C1ABD4(&StringLiteral_19360/*"equipInfo"*/, v5);
    byte_4BC94B0 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v6 = JsonManager__toJson(&svtEquipList->obj, 0, 0, 0LL);
  RequestBase__addField_42362156((RequestBase_o *)this, (System_String_o *)StringLiteral_19360/*"equipInfo"*/, v6, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall ServantEquipSetRequest__getURL(ServantEquipSetRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4BC94AE & 1) == 0 )
  {
    sub_1C1ABD4(&NetworkManager_TypeInfo, method);
    sub_1C1ABD4(&StringLiteral_24115/*"svtEquip/set"*/, v2);
    byte_4BC94AE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63040368(BaseUrl, (System_String_o *)StringLiteral_24115/*"svtEquip/set"*/, 0LL);
}


void __fastcall ServantEquipSetRequest__requestCompleted(
        ServantEquipSetRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  ResponseData_o *v7; // x0
  const MethodInfo *v8; // x2
  __int64 *v9; // x8

  if ( (byte_4BC94B1 & 1) == 0 )
  {
    sub_1C1ABD4(&ResponseCommandKind_TypeInfo, responseList);
    sub_1C1ABD4(&StringLiteral_22613/*"ok"*/, v5);
    sub_1C1ABD4(&StringLiteral_22437/*"ng"*/, v6);
    byte_4BC94B1 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(40, responseList, 0LL);
  if ( v7 && ResponseData__checkError(v7, v7->fields.resCode, v8) )
    v9 = &StringLiteral_22613/*"ok"*/;
  else
    v9 = &StringLiteral_22437/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v9, 0LL);
}