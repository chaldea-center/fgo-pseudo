void __fastcall ServantCombineRequest___ctor(ServantCombineRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall ServantCombineRequest__beginRequest(
        ServantCombineRequest_o *this,
        int64_t baseUsrSvtId,
        System_String_o *materialSvtIds,
        int32_t useQp,
        int32_t getExp,
        const MethodInfo *method)
{
  if ( (byte_438C742 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_16949/*"baseUserSvtId"*/);
    sub_B775C4(&StringLiteral_19374/*"getExp"*/);
    sub_B775C4(&StringLiteral_23461/*"useQp"*/);
    sub_B775C4(&StringLiteral_20844/*"materialUserSvtIds"*/);
    byte_438C742 = 1;
  }
  RequestBase__addField_32564924((RequestBase_o *)this, (System_String_o *)StringLiteral_16949/*"baseUserSvtId"*/, baseUsrSvtId, 0LL);
  RequestBase__addField_32565392((RequestBase_o *)this, (System_String_o *)StringLiteral_20844/*"materialUserSvtIds"*/, materialSvtIds, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_23461/*"useQp"*/, useQp, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_19374/*"getExp"*/, getExp, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall ServantCombineRequest__getMockData(ServantCombineRequest_o *this, const MethodInfo *method)
{
  if ( (byte_438C741 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_9332/*"MockSvtCombineResponse"*/);
    byte_438C741 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9332/*"MockSvtCombineResponse"*/, 0LL);
}


System_String_o *__fastcall ServantCombineRequest__getURL(ServantCombineRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_438C740 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_17556/*"card/combine"*/);
    byte_438C740 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_17556/*"card/combine"*/, 0LL);
}


void __fastcall ServantCombineRequest__requestCompleted(
        ServantCombineRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_o *v5; // x0
  ResponseData_o *v6; // x20
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *success; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v9; // x1
  System_String_o *v10; // x1

  if ( (byte_438C743 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_B775C4(&ResponseCommandKind_TypeInfo);
    sub_B775C4(&StringLiteral_22902/*"successResult"*/);
    sub_B775C4(&StringLiteral_21504/*"ng"*/);
    byte_438C743 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v5 = ResponseCommandKind__SearchData(25, responseList, 0LL);
  if ( v5
    && (v6 = v5, ResponseData__checkError_30128096(v5, 0LL))
    && (success = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v6->fields.success) != 0LL )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             success,
             (System_Type_o *)StringLiteral_22902/*"successResult"*/,
             (const MethodInfo_2F7D534 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      sub_B7769C(0LL, v9);
    v10 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                               Item,
                               Item->klass->vtable[4].methodPtr);
  }
  else
  {
    v10 = (System_String_o *)StringLiteral_21504/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v10, 0LL);
}