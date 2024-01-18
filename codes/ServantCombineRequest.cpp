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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1

  if ( (byte_4189EBF & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_16623/*"baseUserSvtId"*/, baseUsrSvtId);
    sub_B2C35C(&StringLiteral_18989/*"getExp"*/, v11);
    sub_B2C35C(&StringLiteral_22983/*"useQp"*/, v12);
    sub_B2C35C(&StringLiteral_20428/*"materialUserSvtIds"*/, v13);
    byte_4189EBF = 1;
  }
  RequestBase__addField_31051460((RequestBase_o *)this, (System_String_o *)StringLiteral_16623/*"baseUserSvtId"*/, baseUsrSvtId, 0LL);
  RequestBase__addField_31051928((RequestBase_o *)this, (System_String_o *)StringLiteral_20428/*"materialUserSvtIds"*/, materialSvtIds, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_22983/*"useQp"*/, useQp, 0LL);
  RequestBase__addField((RequestBase_o *)this, (System_String_o *)StringLiteral_18989/*"getExp"*/, getExp, 0LL);
  RequestBase__beginRequest((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall ServantCombineRequest__getMockData(ServantCombineRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_4189EBE & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_9165/*"MockSvtCombineResponse"*/, v2);
    byte_4189EBE = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  return NetworkManager__getMockFile((System_String_o *)StringLiteral_9165/*"MockSvtCombineResponse"*/, 0LL);
}


System_String_o *__fastcall ServantCombineRequest__getURL(ServantCombineRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4189EBD & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_17213/*"card/combine"*/, v2);
    byte_4189EBD = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44305532(BaseUrl, (System_String_o *)StringLiteral_17213/*"card/combine"*/, 0LL);
}


void __fastcall ServantCombineRequest__requestCompleted(
        ServantCombineRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  ResponseData_o *v8; // x0
  ResponseData_o *v9; // x20
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *success; // x0
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0
  __int64 v12; // x1
  System_String_o *v13; // x1

  if ( (byte_4189EC0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, responseList);
    sub_B2C35C(&ResponseCommandKind_TypeInfo, v5);
    sub_B2C35C(&StringLiteral_22426/*"successResult"*/, v6);
    sub_B2C35C(&StringLiteral_21068/*"ng"*/, v7);
    byte_4189EC0 = 1;
  }
  if ( (BYTE3(ResponseCommandKind_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ResponseCommandKind_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseCommandKind_TypeInfo);
  }
  v8 = ResponseCommandKind__SearchData(25, responseList, 0LL);
  if ( v8
    && (v9 = v8, ResponseData__checkError_31019724(v8, 0LL))
    && (success = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v9->fields.success) != 0LL )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             success,
             (System_Type_o *)StringLiteral_22426/*"successResult"*/,
             (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( !Item )
      sub_B2C434(0LL, v12);
    v13 = (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                               Item,
                               Item->klass->vtable[4].methodPtr);
  }
  else
  {
    v13 = (System_String_o *)StringLiteral_21068/*"ng"*/;
  }
  RequestBase__completed((RequestBase_o *)this, v13, 0LL);
}