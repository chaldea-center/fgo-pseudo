System_String_o *__fastcall AuCreateSeedRequest__getURL(AuCreateSeedRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4BDDDB9 & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_23690/*"shop/createSeed"*/);
    byte_4BDDDB9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_63115476(BaseUrl, (System_String_o *)StringLiteral_23690/*"shop/createSeed"*/, 0LL);
}


void __fastcall AuCreateSeedRequest__requestCompleted(
        AuCreateSeedRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_array *v3; // x19
  AuCreateSeedRequest_o *v4; // x20
  int max_length; // w8
  unsigned int v6; // w22
  Il2CppClass **v7; // x8
  Il2CppClass *v8; // x21
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v10; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-48h] BYREF

  v3 = responseList;
  v4 = this;
  if ( (byte_4BDDDBA & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C21E38(&string_TypeInfo);
    this = (AuCreateSeedRequest_o *)sub_1C21E38(&StringLiteral_23503/*"seed"*/);
    byte_4BDDDBA = 1;
  }
  value = 0LL;
  if ( !v3 )
LABEL_21:
    sub_1C22094(this, responseList);
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
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
        sub_1C2209C(this, responseList);
      v7 = &v3->obj.klass + (int)v6;
      v8 = v7[4];
      if ( !v8 )
        goto LABEL_21;
      this = (AuCreateSeedRequest_o *)ResponseData__checkError(
                                        (ResponseData_o *)v7[4],
                                        (System_String_o *)v8->_1.name,
                                        0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (AuCreateSeedRequest_o *)v8->_1.byval_arg.data;
        if ( !this )
          goto LABEL_21;
        this = (AuCreateSeedRequest_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                          (System_Collections_Generic_Dictionary_object__object__o *)this,
                                          (Il2CppObject *)StringLiteral_23503/*"seed"*/,
                                          (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (AuCreateSeedRequest_o *)v8->_1.byval_arg.data;
          if ( !this )
            goto LABEL_21;
          this = (AuCreateSeedRequest_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                            (System_Collections_Generic_Dictionary_object__object__o *)this,
                                            (Il2CppObject *)StringLiteral_23503/*"seed"*/,
                                            &value,
                                            (const MethodInfo_3317E8C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
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
      if ( (int)++v6 >= max_length )
        goto LABEL_16;
    }
    v10 = v4->fields.CallBack;
    if ( v10 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, Il2CppObject *, _QWORD))v10->fields.m_target)(
        v10->fields.original_method_info,
        value,
        *(_QWORD *)&v10->fields.extra_arg);
  }
}