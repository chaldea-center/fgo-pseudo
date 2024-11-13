System_String_o *__fastcall AuCreateSeedRequest__getURL(AuCreateSeedRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *BaseUrl; // x0

  if ( (byte_4B179D9 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_23511/*"shop/createSeed"*/, v3, v4);
    byte_4B179D9 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62401220(BaseUrl, (System_String_o *)StringLiteral_23511/*"shop/createSeed"*/, 0LL);
}


void __fastcall AuCreateSeedRequest__requestCompleted(
        AuCreateSeedRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_array *v3; // x19
  AuCreateSeedRequest_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  int max_length; // w8
  unsigned int v12; // w22
  Il2CppClass **v13; // x8
  Il2CppClass *v14; // x21
  struct NetworkManager_ResultCallbackFunc_o *CallBack; // x8
  struct NetworkManager_ResultCallbackFunc_o *v16; // x8
  Il2CppObject *value; // [xsp+8h] [xbp-48h] BYREF

  v3 = responseList;
  v4 = this;
  if ( (byte_4B179DA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, responseList, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v5, v6);
    sub_1BCA7E0(&string_TypeInfo, v7, v8);
    this = (AuCreateSeedRequest_o *)sub_1BCA7E0(&StringLiteral_23325/*"seed"*/, v9, v10);
    byte_4B179DA = 1;
  }
  value = 0LL;
  if ( !v3 )
LABEL_21:
    sub_1BCAA3C(this, responseList);
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
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_1BCAA44(this, responseList);
      v13 = &v3->obj.klass + (int)v12;
      v14 = v13[4];
      if ( !v14 )
        goto LABEL_21;
      this = (AuCreateSeedRequest_o *)ResponseData__checkError(
                                        (ResponseData_o *)v13[4],
                                        (System_String_o *)v14->_1.name,
                                        0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (AuCreateSeedRequest_o *)v14->_1.byval_arg.data;
        if ( !this )
          goto LABEL_21;
        this = (AuCreateSeedRequest_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                          (System_Collections_Generic_Dictionary_object__object__o *)this,
                                          (Il2CppObject *)StringLiteral_23325/*"seed"*/,
                                          (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (AuCreateSeedRequest_o *)v14->_1.byval_arg.data;
          if ( !this )
            goto LABEL_21;
          this = (AuCreateSeedRequest_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                            (System_Collections_Generic_Dictionary_object__object__o *)this,
                                            (Il2CppObject *)StringLiteral_23325/*"seed"*/,
                                            &value,
                                            (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
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
      if ( (int)++v12 >= max_length )
        goto LABEL_16;
    }
    v16 = v4->fields.CallBack;
    if ( v16 )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, Il2CppObject *, _QWORD))v16->fields.m_target)(
        v16->fields.original_method_info,
        value,
        *(_QWORD *)&v16->fields.extra_arg);
  }
}