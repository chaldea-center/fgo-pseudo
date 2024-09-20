void __fastcall AccountLinkageInfoRequest__beginRequest(AccountLinkageInfoRequest_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4A5C909 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    byte_4A5C909 = 1;
  }
  RequestBase__addBaseField((RequestBase_o *)this, method);
  RequestBase__WriteParameter((RequestBase_o *)this, v3);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  NetworkManager__RequestStart((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall AccountLinkageInfoRequest__getURL(
        AccountLinkageInfoRequest_o *this,
        const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4A5C908 & 1) == 0 )
  {
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&StringLiteral_16635/*"accountLinkageAnx/info"*/);
    byte_4A5C908 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_61707032(BaseUrl, (System_String_o *)StringLiteral_16635/*"accountLinkageAnx/info"*/, 0LL);
}


void __fastcall AccountLinkageInfoRequest__requestCompleted(
        AccountLinkageInfoRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  AccountLinkageInfoRequest_o *v4; // x19
  ResponseData_o *v5; // x20
  System_Collections_Generic_Dictionary_object__object__o *success; // x20
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x22
  __int64 v10; // x2
  __int64 v11; // x3
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v13; // x9
  AccountLinkageInfoRequest_o *v14; // x0
  const MethodInfo *v15; // x1

  v4 = this;
  if ( (byte_4A5C90A & 1) == 0 )
  {
    sub_1B885B0(&AccountLinkageParams_TypeInfo);
    sub_1B885B0(&bool_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    sub_1B885B0(&long_TypeInfo);
    sub_1B885B0(&StringLiteral_22225/*"ok"*/);
    sub_1B885B0(&StringLiteral_16785/*"aniplexPlusServerError"*/);
    sub_1B885B0(&StringLiteral_22154/*"notificationType"*/);
    this = (AccountLinkageInfoRequest_o *)sub_1B885B0(&StringLiteral_22055/*"ng"*/);
    byte_4A5C90A = 1;
  }
  if ( !responseList )
    goto LABEL_18;
  if ( !responseList->max_length )
    sub_1B88814(this, responseList);
  v5 = responseList->m_Items[0];
  if ( !v5 )
    goto LABEL_18;
  this = (AccountLinkageInfoRequest_o *)ResponseData__checkError((ResponseData_o *)this, v5->fields.resCode, method);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    success = (System_Collections_Generic_Dictionary_object__object__o *)v5->fields.success;
    if ( success )
    {
      this = (AccountLinkageInfoRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                              success,
                                              (Il2CppObject *)StringLiteral_22154/*"notificationType"*/,
                                              (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( this )
      {
        if ( this->klass->_1.element_class != long_TypeInfo->_1.element_class )
          goto LABEL_20;
        v9 = *(_QWORD *)j_il2cpp_object_unbox_0(this, long_TypeInfo, v7, v8);
        this = (AccountLinkageInfoRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                success,
                                                (Il2CppObject *)StringLiteral_16785/*"aniplexPlusServerError"*/,
                                                (const MethodInfo_31C7148 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        AccountLinkageParams_TypeInfo->static_fields->notificationType = v9;
        if ( this )
        {
          if ( this->klass->_1.element_class == bool_TypeInfo->_1.element_class )
          {
            AccountLinkageParams_TypeInfo->static_fields->isAniplexPlusServerError = *(_BYTE *)j_il2cpp_object_unbox_0(
                                                                                                 this,
                                                                                                 bool_TypeInfo,
                                                                                                 v10,
                                                                                                 v11);
            CallBack = v4->fields.CallBack;
            if ( CallBack )
            {
              v13 = &StringLiteral_22225/*"ok"*/;
LABEL_16:
              ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
                CallBack->fields.original_method_info,
                *v13,
                *(_QWORD *)&CallBack->fields.extra_arg);
              return;
            }
            return;
          }
LABEL_20:
          sub_1B88ACC(this);
          AccountLinkageInfoRequest___ctor(v14, v15);
          return;
        }
      }
    }
LABEL_18:
    sub_1B8880C(this, responseList);
  }
  CallBack = v4->fields.CallBack;
  if ( CallBack )
  {
    v13 = &StringLiteral_22055/*"ng"*/;
    goto LABEL_16;
  }
}