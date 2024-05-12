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

  if ( (byte_438E914 & 1) == 0 )
  {
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&StringLiteral_18757/*"equipInfo"*/);
    sub_B775C4(&StringLiteral_15925/*"["*/);
    sub_B775C4(&StringLiteral_16162/*"]"*/);
    byte_438E914 = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v5 = JsonManager__toJson((Il2CppObject *)svtEquip, 0, 0, 0LL);
  v6 = System_String__Concat_44904220(
         (System_String_o *)StringLiteral_15925/*"["*/,
         v5,
         (System_String_o *)StringLiteral_16162/*"]"*/,
         0LL);
  RequestBase__addField_32565392((RequestBase_o *)this, (System_String_o *)StringLiteral_18757/*"equipInfo"*/, v6, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


void __fastcall ServantEquipSetRequest__beginRequest_31742568(
        ServantEquipSetRequest_o *this,
        SvtEquipInfo_array *svtEquipList,
        const MethodInfo *method)
{
  System_String_o *v5; // x0

  if ( (byte_438E915 & 1) == 0 )
  {
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&StringLiteral_18757/*"equipInfo"*/);
    byte_438E915 = 1;
  }
  if ( (BYTE3(JsonManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v5 = JsonManager__toJson(&svtEquipList->obj, 0, 0, 0LL);
  RequestBase__addField_32565392((RequestBase_o *)this, (System_String_o *)StringLiteral_18757/*"equipInfo"*/, v5, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall ServantEquipSetRequest__getURL(ServantEquipSetRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_438E913 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_22943/*"svtEquip/set"*/);
    byte_438E913 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_22943/*"svtEquip/set"*/, 0LL);
}


void __fastcall ServantEquipSetRequest__requestCompleted(
        ServantEquipSetRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  __int64 *v6; // x8

  if ( (byte_438E916 & 1) == 0 )
  {
    sub_B775C4(&ResponseCommandKind_TypeInfo);
    sub_B775C4(&StringLiteral_21657/*"ok"*/);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    byte_438E916 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(40, responseList, 0LL);
  if ( v5 && ResponseData__checkError_30128096(v5, 0LL) )
    v6 = &StringLiteral_21657/*"ok"*/;
  else
    v6 = &StringLiteral_21504/*"ng"*/;
  RequestBase__completed((RequestBase_o *)this, (System_String_o *)*v6, 0LL);
}