void __fastcall AccountLinkageInfoRequest__beginRequest(AccountLinkageInfoRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v4; // x1
  __int64 v5; // x1

  if ( (byte_4B179C7 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    byte_4B179C7 = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, method);
  RequestBase__WriteParameter((RequestBase_o *)this, v4);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v5);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall AccountLinkageInfoRequest__getURL(
        AccountLinkageInfoRequest_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B179C6 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_16804/*"accountLinkageAnx/info"*/, v3, v4);
    byte_4B179C6 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_16804/*"accountLinkageAnx/info"*/, 0LL);
}


void __fastcall AccountLinkageInfoRequest__requestCompleted(
        AccountLinkageInfoRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  AccountLinkageInfoRequest_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  ResponseData_o *v19; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x22
  __int64 v24; // x2
  __int64 v25; // x3
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v27; // x9
  AccountLinkageInfoRequest_o *v28; // x0
  const MethodInfo *v29; // x1

  v4 = this;
  if ( (byte_4B179C8 & 1) == 0 )
  {
    sub_1BCA7E0(&AccountLinkageParams_TypeInfo, responseList, method);
    sub_1BCA7E0(&bool_TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v7, v8);
    sub_1BCA7E0(&long_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_22465/*"ok"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_16953/*"aniplexPlusServerError"*/, v13, v14);
    sub_1BCA7E0(&StringLiteral_22393/*"notificationType"*/, v15, v16);
    this = (AccountLinkageInfoRequest_o *)sub_1BCA7E0(&StringLiteral_22292/*"ng"*/, v17, v18);
    byte_4B179C8 = 1;
  }
  if ( !responseList )
    goto LABEL_18;
  if ( !responseList->max_length )
    sub_1BCAA44(this, responseList);
  v19 = responseList->m_Items[0];
  if ( !v19 )
    goto LABEL_18;
  this = (AccountLinkageInfoRequest_o *)ResponseData__checkError_41952396(v19, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    success = (System_Collections_Generic_Dictionary_object__object__o *)v19->fields.success;
    if ( success )
    {
      this = (AccountLinkageInfoRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                              success,
                                              (Il2CppObject *)StringLiteral_22393/*"notificationType"*/,
                                              (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( this )
      {
        if ( this->klass->_1.element_class != long_TypeInfo->_1.element_class )
          goto LABEL_20;
        v23 = *(_QWORD *)j_il2cpp_object_unbox_0(this, long_TypeInfo, v21, v22);
        this = (AccountLinkageInfoRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                success,
                                                (Il2CppObject *)StringLiteral_16953/*"aniplexPlusServerError"*/,
                                                (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        AccountLinkageParams_TypeInfo->static_fields->notificationType = v23;
        if ( this )
        {
          if ( this->klass->_1.element_class == bool_TypeInfo->_1.element_class )
          {
            AccountLinkageParams_TypeInfo->static_fields->isAniplexPlusServerError = *(_BYTE *)j_il2cpp_object_unbox_0(
                                                                                                 this,
                                                                                                 bool_TypeInfo,
                                                                                                 v24,
                                                                                                 v25);
            CallBack = v4->fields.CallBack;
            if ( CallBack )
            {
              v27 = &StringLiteral_22465/*"ok"*/;
LABEL_16:
              ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
                CallBack->fields.original_method_info,
                *v27,
                *(_QWORD *)&CallBack->fields.extra_arg);
              return;
            }
            return;
          }
LABEL_20:
          sub_1BCACFC(this);
          AccountLinkageInfoRequest___ctor(v28, v29);
          return;
        }
      }
    }
LABEL_18:
    sub_1BCAA3C(this, responseList);
  }
  CallBack = v4->fields.CallBack;
  if ( CallBack )
  {
    v27 = &StringLiteral_22292/*"ng"*/;
    goto LABEL_16;
  }
}