void __fastcall ServantTreasureDvcCombineRequest___ctor(
        ServantTreasureDvcCombineRequest_o *this,
        const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall ServantTreasureDvcCombineRequest__beginRequest(
        ServantTreasureDvcCombineRequest_o *this,
        int64_t baseUsrSvtId,
        int32_t selectTdIndex,
        int32_t selectTdId,
        System_String_o *materialSvtIds,
        const MethodInfo *method)
{
  if ( (byte_438DCEA & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_16949/*"baseUserSvtId"*/);
    sub_B775C4(&StringLiteral_23263/*"treasureDeviceId"*/);
    sub_B775C4(&StringLiteral_21609/*"num"*/);
    sub_B775C4(&StringLiteral_20844/*"materialUserSvtIds"*/);
    byte_438DCEA = 1;
  }
  RequestBase__addField_32564924((RequestBase_o *)this, (System_String_o *)StringLiteral_16949/*"baseUserSvtId"*/, baseUsrSvtId, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_21609/*"num"*/, selectTdIndex, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23263/*"treasureDeviceId"*/, selectTdId, 0LL);
  RequestBase__addField_32565392((RequestBase_o *)this, (System_String_o *)StringLiteral_20844/*"materialUserSvtIds"*/, materialSvtIds, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall ServantTreasureDvcCombineRequest__getURL(
        ServantTreasureDvcCombineRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_438DCE9 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_17563/*"card/combineTd"*/);
    byte_438DCE9 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_17563/*"card/combineTd"*/, 0LL);
}


void __fastcall ServantTreasureDvcCombineRequest__requestCompleted(
        ServantTreasureDvcCombineRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  Il2CppObject *success; // x20
  System_String_o *v8; // x1

  if ( (byte_438DCEB & 1) == 0 )
  {
    sub_B775C4(&JsonManager_TypeInfo);
    sub_B775C4(&ResponseCommandKind_TypeInfo);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    byte_438DCEB = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(27, responseList, 0LL);
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