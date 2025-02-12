void __fastcall AccountLinkageInfoRequest__beginRequest(AccountLinkageInfoRequest_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4BB5F1B & 1) == 0 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, method);
    byte_4BB5F1B = 1;
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
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4BB5F1A & 1) == 0 )
  {
    sub_1C13D24(&NetworkManager_TypeInfo, method);
    sub_1C13D24(&StringLiteral_16890/*"a lost name should not be null or empty, this probably points to an importer or serialization bug"*/, v2);
    byte_4BB5F1A = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62967944(BaseUrl, (System_String_o *)StringLiteral_16890/*"a lost name should not be null or empty, this probably points to an importer or serialization bug"*/, 0LL);
}


void __fastcall AccountLinkageInfoRequest__requestCompleted(
        AccountLinkageInfoRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  AccountLinkageInfoRequest_o *v4; // x19
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
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  __int64 *v20; // x9
  AccountLinkageInfoRequest_o *v21; // x0
  const MethodInfo *v22; // x1

  v4 = this;
  if ( (byte_4BB5F1C & 1) == 0 )
  {
    sub_1C13D24(&AccountLinkageParams_TypeInfo, responseList);
    sub_1C13D24(&bool_TypeInfo, v5);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_1C13D24(&long_TypeInfo, v7);
    sub_1C13D24(&StringLiteral_22595/*"offline"*/, v8);
    sub_1C13D24(&StringLiteral_17040/*"android/os/Bundle"*/, v9);
    sub_1C13D24(&StringLiteral_22523/*"not find file ["*/, v10);
    this = (AccountLinkageInfoRequest_o *)sub_1C13D24(&StringLiteral_22421/*"newAttributes"*/, v11);
    byte_4BB5F1C = 1;
  }
  if ( !responseList )
    goto LABEL_18;
  if ( !responseList->max_length )
    sub_1C13F88(this, responseList);
  v12 = responseList->m_Items[0];
  if ( !v12 )
    goto LABEL_18;
  this = (AccountLinkageInfoRequest_o *)ResponseData__checkError_42394144(v12, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    success = (System_Collections_Generic_Dictionary_object__object__o *)v12->fields.success;
    if ( success )
    {
      this = (AccountLinkageInfoRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                              success,
                                              (Il2CppObject *)StringLiteral_22523/*"not find file ["*/,
                                              (const MethodInfo_32F2930 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( this )
      {
        if ( this->klass->_1.element_class != long_TypeInfo->_1.element_class )
          goto LABEL_20;
        v16 = *(_QWORD *)j_il2cpp_object_unbox_0(this, long_TypeInfo, v14, v15);
        this = (AccountLinkageInfoRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                success,
                                                (Il2CppObject *)StringLiteral_17040/*"android/os/Bundle"*/,
                                                (const MethodInfo_32F2930 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
        AccountLinkageParams_TypeInfo->static_fields->notificationType = v16;
        if ( this )
        {
          if ( this->klass->_1.element_class == bool_TypeInfo->_1.element_class )
          {
            AccountLinkageParams_TypeInfo->static_fields->isAniplexPlusServerError = *(_BYTE *)j_il2cpp_object_unbox_0(
                                                                                                 this,
                                                                                                 bool_TypeInfo,
                                                                                                 v17,
                                                                                                 v18);
            CallBack = v4->fields.CallBack;
            if ( CallBack )
            {
              v20 = &StringLiteral_22595/*"offline"*/;
LABEL_16:
              ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))CallBack->fields.m_target)(
                CallBack->fields.original_method_info,
                *v20,
                *(_QWORD *)&CallBack->fields.extra_arg);
              return;
            }
            return;
          }
LABEL_20:
          sub_1C14240(this);
          AccountLinkageInfoRequest___ctor(v21, v22);
          return;
        }
      }
    }
LABEL_18:
    sub_1C13F80(this, responseList);
  }
  CallBack = v4->fields.CallBack;
  if ( CallBack )
  {
    v20 = &StringLiteral_22421/*"newAttributes"*/;
    goto LABEL_16;
  }
}