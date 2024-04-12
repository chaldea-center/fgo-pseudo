void __fastcall ServantEquipSetRequest___ctor(ServantEquipSetRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall ServantEquipSetRequest__beginRequest(
        ServantEquipSetRequest_o *this,
        SvtEquipInfo_o *svtEquip,
        const MethodInfo *method)
{
  System_String_o *v5; // x0
  System_String_o *v6; // x0

  if ( (byte_42B2EC5 & 1) == 0 )
  {
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&StringLiteral_18524/*"equipInfo"*/);
    sub_B52984(&StringLiteral_15739/*"["*/);
    sub_B52984(&StringLiteral_15976/*"]"*/);
    byte_42B2EC5 = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v5 = JsonManager__toJson((Il2CppObject *)svtEquip, 0, 0, 0LL);
  v6 = System_String__Concat_44570600(
         (System_String_o *)StringLiteral_15739/*"["*/,
         v5,
         (System_String_o *)StringLiteral_15976/*"]"*/,
         0LL);
  RequestBase__addField_32020920((RequestBase_o *)this, (System_String_o *)StringLiteral_18524/*"equipInfo"*/, v6, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


void __fastcall ServantEquipSetRequest__beginRequest_30454420(
        ServantEquipSetRequest_o *this,
        SvtEquipInfo_array *svtEquipList,
        const MethodInfo *method)
{
  System_String_o *v5; // x0

  if ( (byte_42B2EC6 & 1) == 0 )
  {
    sub_B52984(&JsonManager_TypeInfo);
    sub_B52984(&StringLiteral_18524/*"equipInfo"*/);
    byte_42B2EC6 = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v5 = JsonManager__toJson(&svtEquipList->obj, 0, 0, 0LL);
  RequestBase__addField_32020920((RequestBase_o *)this, (System_String_o *)StringLiteral_18524/*"equipInfo"*/, v5, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall ServantEquipSetRequest__getURL(ServantEquipSetRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_42B2EC4 & 1) == 0 )
  {
    sub_B52984(&NetworkManager_TypeInfo);
    sub_B52984(&StringLiteral_22656/*"svtEquip/set"*/);
    byte_42B2EC4 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44568316(BaseUrl, (System_String_o *)StringLiteral_22656/*"svtEquip/set"*/, 0LL);
}


void __fastcall ServantEquipSetRequest__requestCompleted(
        ServantEquipSetRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_42B2EC7 & 1) == 0 )
  {
    sub_B52984(&ResponseCommandKind_TypeInfo);
    sub_B52984(&StringLiteral_21388/*"ok"*/);
    sub_B52984(&StringLiteral_21239/*"ng"*/);
    byte_42B2EC7 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(40, responseList, 0LL);
  if ( v5 && ResponseData__checkError_29724768(v5, 0LL) )
    v6 = &StringLiteral_21388/*"ok"*/;
  else
    v6 = &StringLiteral_21239/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0LL);
}