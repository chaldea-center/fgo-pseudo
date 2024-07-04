System_String_o *__fastcall AuCreateSeedRequest__getURL(AuCreateSeedRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_48E3E25 & 1) == 0 )
  {
    sub_1B00CCC(&NetworkManager_TypeInfo, method);
    sub_1B00CCC(&StringLiteral_22942/*"shop/createSeed"*/, v2);
    byte_48E3E25 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_60325748(BaseUrl, (System_String_o *)StringLiteral_22942/*"shop/createSeed"*/, 0LL);
}


void __fastcall AuCreateSeedRequest__requestCompleted(
        AuCreateSeedRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_array *v3; // x19
  AuCreateSeedRequest_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int max_length; // w8
  unsigned int v9; // w21
  ResponseData_o *v10; // x26
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v12; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-48h] BYREF

  v3 = responseList;
  v4 = this;
  if ( (byte_48E3E26 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, responseList);
    sub_1B00CCC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v5);
    sub_1B00CCC(&string_TypeInfo, v6);
    this = (AuCreateSeedRequest_o *)sub_1B00CCC(&StringLiteral_22763/*"seed"*/, v7);
    byte_48E3E26 = 1;
  }
  value = 0LL;
  if ( !v3 )
LABEL_21:
    sub_1B00F28(this, responseList);
  max_length = v3->max_length;
  if ( max_length < 1 )
  {
LABEL_16:
    CallBack = v4->fields.CallBack;
    if ( CallBack )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))CallBack->fields.m_target)(
        CallBack->fields.original_method_info,
        0LL,
        *(_QWORD *)&CallBack->fields.extra_arg);
  }
  else
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_1B00F30(this, responseList);
      v10 = v3->m_Items[v9];
      if ( !v10 )
        goto LABEL_21;
      this = (AuCreateSeedRequest_o *)ResponseData__checkError((ResponseData_o *)this, v10->fields.resCode, method);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (AuCreateSeedRequest_o *)v10->fields.success;
        if ( !this )
          goto LABEL_21;
        this = (AuCreateSeedRequest_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                          (System_Collections_Generic_Dictionary_object__object__o *)this,
                                          (Il2CppObject *)StringLiteral_22763/*"seed"*/,
                                          (const MethodInfo_308DC3C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (AuCreateSeedRequest_o *)v10->fields.success;
          if ( !this )
            goto LABEL_21;
          this = (AuCreateSeedRequest_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                            (System_Collections_Generic_Dictionary_object__object__o *)this,
                                            (Il2CppObject *)StringLiteral_22763/*"seed"*/,
                                            &value,
                                            (const MethodInfo_308F254 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            responseList = (ResponseData_array *)value;
            if ( value )
            {
              if ( (System_String_c *)value->klass == string_TypeInfo )
                break;
            }
          }
        }
      }
      max_length = v3->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_16;
    }
    v12 = v4->fields.CallBack;
    if ( v12 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, Il2CppObject *, _QWORD))v12->fields.m_target)(
        v12->fields.original_method_info,
        value,
        *(_QWORD *)&v12->fields.extra_arg);
  }
}