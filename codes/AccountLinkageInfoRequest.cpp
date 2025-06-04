void __fastcall AccountLinkageInfoRequest___ctor(AccountLinkageInfoRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


void __fastcall AccountLinkageInfoRequest__beginRequest(AccountLinkageInfoRequest_o *this, const MethodInfo *method)
{
  if ( (byte_4B039BF & 1) == 0 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, method);
    byte_4B039BF = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, 0LL);
  RequestBase__WriteParameter((RequestBase_o *)this, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall AccountLinkageInfoRequest__getURL(
        AccountLinkageInfoRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B039BE & 1) == 0 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, method);
    sub_1BC3008(&StringLiteral_16495/*"accountLinkageAnx/info"*/, v2);
    byte_4B039BE = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62348648(BaseUrl, (System_String_o *)StringLiteral_16495/*"accountLinkageAnx/info"*/, 0LL);
}


void __fastcall AccountLinkageInfoRequest__requestCompleted(
        AccountLinkageInfoRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  RequestBase_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  ResponseData_o *v12; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x22
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 *v19; // x8
  AccountLinkageInfoRequest_o *v20; // x0
  const MethodInfo *v21; // x1

  v4 = (RequestBase_o *)this;
  if ( (byte_4B039C0 & 1) == 0 )
  {
    sub_1BC3008(&AccountLinkageParams_TypeInfo, responseList);
    sub_1BC3008(&bool_TypeInfo, v5);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_1BC3008(&long_TypeInfo, v7);
    sub_1BC3008(&StringLiteral_22163/*"ok"*/, v8);
    sub_1BC3008(&StringLiteral_16637/*"aniplexPlusServerError"*/, v9);
    sub_1BC3008(&StringLiteral_22096/*"notificationType"*/, v10);
    this = (AccountLinkageInfoRequest_o *)sub_1BC3008(&StringLiteral_21997/*"ng"*/, v11);
    byte_4B039C0 = 1;
  }
  if ( !responseList )
    goto LABEL_15;
  if ( !responseList->max_length )
    sub_1BC326C(this, responseList, method);
  v12 = responseList->m_Items[0];
  if ( !v12 )
    goto LABEL_15;
  this = (AccountLinkageInfoRequest_o *)ResponseData__checkError_43184840(v12, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v19 = &StringLiteral_21997/*"ng"*/;
    goto LABEL_14;
  }
  success = (System_Collections_Generic_Dictionary_object__object__o *)v12->fields.success;
  if ( !success )
    goto LABEL_15;
  this = (AccountLinkageInfoRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                          success,
                                          (Il2CppObject *)StringLiteral_22096/*"notificationType"*/,
                                          (const MethodInfo_336CF68 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  if ( !this )
    goto LABEL_15;
  if ( this->klass->_1.element_class != long_TypeInfo->_1.element_class )
    goto LABEL_17;
  v16 = *(_QWORD *)j_il2cpp_object_unbox_0(this, long_TypeInfo, v14, v15);
  this = (AccountLinkageInfoRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                          success,
                                          (Il2CppObject *)StringLiteral_16637/*"aniplexPlusServerError"*/,
                                          (const MethodInfo_336CF68 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
  AccountLinkageParams_TypeInfo->static_fields->notificationType = v16;
  if ( !this )
LABEL_15:
    sub_1BC3264(this, responseList);
  if ( this->klass->_1.element_class == bool_TypeInfo->_1.element_class )
  {
    AccountLinkageParams_TypeInfo->static_fields->isAniplexPlusServerError = *(_BYTE *)j_il2cpp_object_unbox_0(
                                                                                         this,
                                                                                         bool_TypeInfo,
                                                                                         v17,
                                                                                         v18);
    v19 = &StringLiteral_22163/*"ok"*/;
LABEL_14:
    RequestBase__completed(v4, (System_String_o *)*v19, 0LL);
    return;
  }
LABEL_17:
  sub_1BC3524(this);
  AccountLinkageInfoRequest___ctor(v20, v21);
}