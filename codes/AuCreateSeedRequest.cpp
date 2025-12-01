void AuCreateSeedRequest___ctor(AuCreateSeedRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


System_String_o *AuCreateSeedRequest__getURL(AuCreateSeedRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4CC8E60 & 1) == 0 )
  {
    sub_1C713B0(&NetworkManager_TypeInfo);
    sub_1C713B0(&StringLiteral_23546/*"shop/createSeed"*/);
    byte_4CC8E60 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_64031724(BaseUrl, (System_String_o *)StringLiteral_23546/*"shop/createSeed"*/, 0);
}


void AuCreateSeedRequest__requestCompleted(
        AuCreateSeedRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_array *v3; // x20
  AuCreateSeedRequest_o *v4; // x19
  int max_length; // w8
  unsigned int v6; // w22
  Il2CppClass **v7; // x8
  Il2CppClass *v8; // x21
  RequestBase_o *v9; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-48h] BYREF

  v3 = responseList;
  v4 = this;
  if ( (byte_4CC8E61 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C713B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C713B0(&string_TypeInfo);
    this = (AuCreateSeedRequest_o *)sub_1C713B0(&StringLiteral_23371/*"seed"*/);
    byte_4CC8E61 = 1;
  }
  value = 0;
  if ( !v3 )
LABEL_19:
    sub_1C71608(this, responseList);
  max_length = v3->max_length;
  if ( max_length < 1 )
  {
LABEL_16:
    v9 = (RequestBase_o *)v4;
    responseList = 0;
  }
  else
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
        sub_1C71610(this);
      v7 = &v3->obj.klass + (int)v6;
      v8 = v7[4];
      if ( !v8 )
        goto LABEL_19;
      this = (AuCreateSeedRequest_o *)ResponseData__checkError(
                                        (ResponseData_o *)v7[4],
                                        (System_String_o *)v8->_1.name,
                                        0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (AuCreateSeedRequest_o *)v8->_1.byval_arg.data;
        if ( !this )
          goto LABEL_19;
        this = (AuCreateSeedRequest_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                          (System_Collections_Generic_Dictionary_object__object__o *)this,
                                          (Il2CppObject *)StringLiteral_23371/*"seed"*/,
                                          (const MethodInfo_34CB8D4 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (AuCreateSeedRequest_o *)v8->_1.byval_arg.data;
          if ( !this )
            goto LABEL_19;
          this = (AuCreateSeedRequest_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                            (System_Collections_Generic_Dictionary_object__object__o *)this,
                                            (Il2CppObject *)StringLiteral_23371/*"seed"*/,
                                            &value,
                                            (const MethodInfo_34CCEEC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
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
    v9 = (RequestBase_o *)v4;
  }
  RequestBase__completed(v9, (System_String_o *)responseList, 0);
}