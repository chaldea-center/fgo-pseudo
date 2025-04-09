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

  if ( (byte_49BC8F6 & 1) == 0 )
  {
    sub_1B4CF90(&JsonManager_TypeInfo, svtEquip);
    sub_1B4CF90(&StringLiteral_18740/*"equipInfo"*/, v5);
    sub_1B4CF90(&StringLiteral_15507/*"["*/, v6);
    sub_1B4CF90(&StringLiteral_15763/*"]"*/, v7);
    byte_49BC8F6 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v8 = JsonManager__toJson((Il2CppObject *)svtEquip, 0, 0, 0LL);
  v9 = System_String__Concat_61131716(
         (System_String_o *)StringLiteral_15507/*"["*/,
         v8,
         (System_String_o *)StringLiteral_15763/*"]"*/,
         0LL);
  RequestBase__addField_41748396((RequestBase_o *)this, (System_String_o *)StringLiteral_18740/*"equipInfo"*/, v9, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


void __fastcall ServantEquipSetRequest__beginRequest_41844488(
        ServantEquipSetRequest_o *this,
        SvtEquipInfo_array *svtEquipList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *v6; // x0

  if ( (byte_49BC8F7 & 1) == 0 )
  {
    sub_1B4CF90(&JsonManager_TypeInfo, svtEquipList);
    sub_1B4CF90(&StringLiteral_18740/*"equipInfo"*/, v5);
    byte_49BC8F7 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v6 = JsonManager__toJson(&svtEquipList->obj, 0, 0, 0LL);
  RequestBase__addField_41748396((RequestBase_o *)this, (System_String_o *)StringLiteral_18740/*"equipInfo"*/, v6, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall ServantEquipSetRequest__getURL(ServantEquipSetRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_49BC8F5 & 1) == 0 )
  {
    sub_1B4CF90(&NetworkManager_TypeInfo, method);
    sub_1B4CF90(&StringLiteral_23423/*"svtEquip/set"*/, v2);
    byte_49BC8F5 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61093468(BaseUrl, (System_String_o *)StringLiteral_23423/*"svtEquip/set"*/, 0LL);
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

  if ( (byte_49BC8F8 & 1) == 0 )
  {
    sub_1B4CF90(&ResponseCommandKind_TypeInfo, responseList);
    sub_1B4CF90(&StringLiteral_21947/*"ok"*/, v5);
    sub_1B4CF90(&StringLiteral_21779/*"ng"*/, v6);
    byte_49BC8F8 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(40, responseList, 0LL);
  if ( v7 && ResponseData__checkError(v7, v7->fields.resCode, v8) )
    v9 = &StringLiteral_21947/*"ok"*/;
  else
    v9 = &StringLiteral_21779/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v9, 0LL);
}