void __fastcall AccountLinkageInfoRequest__beginRequest(AccountLinkageInfoRequest_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( (byte_4C23815 & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    byte_4C23815 = 1;
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

  if ( (byte_4C23814 & 1) == 0 )
  {
    sub_1C3B764(&NetworkManager_TypeInfo, method);
    sub_1C3B764(&StringLiteral_16957/*"bit_talk_edgeblur_light"*/, v2);
    byte_4C23814 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63368612(BaseUrl, (System_String_o *)StringLiteral_16957/*"bit_talk_edgeblur_light"*/, 0LL);
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
  if ( (byte_4C23816 & 1) == 0 )
  {
    sub_1C3B764(&AccountLinkageParams_TypeInfo, responseList);
    sub_1C3B764(&bool_TypeInfo, v5);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v6);
    sub_1C3B764(&long_TypeInfo, v7);
    sub_1C3B764(&StringLiteral_22683/*"sandboxSeurity"*/, v8);
    sub_1C3B764(&StringLiteral_17110/*"btn_auto_on"*/, v9);
    sub_1C3B764(&StringLiteral_22611/*"ribbon_noblephantasmup_01"*/, v10);
    this = (AccountLinkageInfoRequest_o *)sub_1C3B764(&StringLiteral_22507/*"referrerMapId"*/, v11);
    byte_4C23816 = 1;
  }
  if ( !responseList )
    goto LABEL_18;
  if ( !responseList->max_length )
    sub_1C3B9C8(this, responseList);
  v12 = responseList->m_Items[0];
  if ( !v12 )
    goto LABEL_18;
  this = (AccountLinkageInfoRequest_o *)ResponseData__checkError_42712632(v12, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    success = (System_Collections_Generic_Dictionary_object__object__o *)v12->fields.success;
    if ( success )
    {
      this = (AccountLinkageInfoRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                              success,
                                              (Il2CppObject *)StringLiteral_22611/*"ribbon_noblephantasmup_01"*/,
                                              (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
      if ( this )
      {
        if ( this->klass->_1.element_class != long_TypeInfo->_1.element_class )
          goto LABEL_20;
        v16 = *(_QWORD *)j_il2cpp_object_unbox_0(this, long_TypeInfo, v14, v15);
        this = (AccountLinkageInfoRequest_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                success,
                                                (Il2CppObject *)StringLiteral_17110/*"btn_auto_on"*/,
                                                (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
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
              v20 = &StringLiteral_22683/*"sandboxSeurity"*/;
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
          sub_1C3BC80(this);
          AccountLinkageInfoRequest___ctor(v21, v22);
          return;
        }
      }
    }
LABEL_18:
    sub_1C3B9C0(this, responseList);
  }
  CallBack = v4->fields.CallBack;
  if ( CallBack )
  {
    v20 = &StringLiteral_22507/*"referrerMapId"*/;
    goto LABEL_16;
  }
}