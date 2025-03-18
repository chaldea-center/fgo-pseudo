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

  if ( (byte_4C239C7 & 1) == 0 )
  {
    sub_1C3B764(&JsonManager_TypeInfo, svtEquip);
    sub_1C3B764(&StringLiteral_19422/*"getMethodID"*/, v5);
    sub_1C3B764(&StringLiteral_16127/*"__field-group"*/, v6);
    sub_1C3B764(&StringLiteral_16386/*"align-items"*/, v7);
    byte_4C239C7 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v8 = JsonManager__toJson((Il2CppObject *)svtEquip, 0, 0, 0LL);
  v9 = System_String__Concat_63379872(
         (System_String_o *)StringLiteral_16127/*"__field-group"*/,
         v8,
         (System_String_o *)StringLiteral_16386/*"align-items"*/,
         0LL);
  RequestBase__addField_42621852((RequestBase_o *)this, (System_String_o *)StringLiteral_19422/*"getMethodID"*/, v9, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


void __fastcall ServantEquipSetRequest__beginRequest_42717944(
        ServantEquipSetRequest_o *this,
        SvtEquipInfo_array *svtEquipList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_String_o *v6; // x0

  if ( (byte_4C239C8 & 1) == 0 )
  {
    sub_1C3B764(&JsonManager_TypeInfo, svtEquipList);
    sub_1C3B764(&StringLiteral_19422/*"getMethodID"*/, v5);
    byte_4C239C8 = 1;
  }
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v6 = JsonManager__toJson(&svtEquipList->obj, 0, 0, 0LL);
  RequestBase__addField_42621852((RequestBase_o *)this, (System_String_o *)StringLiteral_19422/*"getMethodID"*/, v6, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall ServantEquipSetRequest__getURL(ServantEquipSetRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4C239C6 & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_24200/*"verticalImageChange"*/, v2);
    byte_4C239C6 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63368612(BaseUrl, (System_String_o *)StringLiteral_24200/*"verticalImageChange"*/, 0LL);
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

  if ( (byte_4C239C9 & 1) == 0 )
  {
    sub_1C3B764(&ResponseCommandKind_TypeInfo, responseList);
    sub_1C3B764(&StringLiteral_22683/*"sandboxSeurity"*/, v5);
    sub_1C3B764(&StringLiteral_22507/*"referrerMapId"*/, v6);
    byte_4C239C9 = 1;
  }
  if ( !ResponseCommandKind_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  v7 = ResponseCommandKind__SearchData(40, responseList, 0LL);
  if ( v7 && ResponseData__checkError(v7, v7->fields.resCode, v8) )
    v9 = &StringLiteral_22683/*"sandboxSeurity"*/;
  else
    v9 = &StringLiteral_22507/*"referrerMapId"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v9, 0LL);
}