void __fastcall AuCreateSeedRequest___ctor(AuCreateSeedRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall AuCreateSeedRequest__getURL(AuCreateSeedRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_4B039D2 & 1) == 0 )
  {
    sub_1BC3008(&NetworkManager_TypeInfo, method);
    sub_1BC3008(&StringLiteral_23205/*"shop/createSeed"*/, v2);
    byte_4B039D2 = 1;
  }
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_62348648(BaseUrl, (System_String_o *)StringLiteral_23205/*"shop/createSeed"*/, 0LL);
}


void __fastcall AuCreateSeedRequest__requestCompleted(
        AuCreateSeedRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_array *v3; // x20
  AuCreateSeedRequest_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int max_length; // w8
  unsigned int v9; // w22
  Il2CppClass **v10; // x8
  Il2CppClass *v11; // x21
  RequestBase_o *v12; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-48h] BYREF

  v3 = responseList;
  v4 = this;
  if ( (byte_4B039D3 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, responseList);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v5);
    sub_1BC3008(&string_TypeInfo, v6);
    this = (AuCreateSeedRequest_o *)sub_1BC3008(&StringLiteral_23018/*"seed"*/, v7);
    byte_4B039D3 = 1;
  }
  value = 0LL;
  if ( !v3 )
LABEL_19:
    sub_1BC3264(this, responseList);
  max_length = v3->max_length;
  if ( max_length < 1 )
  {
LABEL_16:
    v12 = (RequestBase_o *)v4;
    responseList = 0LL;
  }
  else
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
        sub_1BC326C(this, responseList, method);
      v10 = &v3->obj.klass + (int)v9;
      v11 = v10[4];
      if ( !v11 )
        goto LABEL_19;
      this = (AuCreateSeedRequest_o *)ResponseData__checkError(
                                        (ResponseData_o *)v10[4],
                                        (System_String_o *)v11->_1.name,
                                        0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (AuCreateSeedRequest_o *)v11->_1.byval_arg.data;
        if ( !this )
          goto LABEL_19;
        this = (AuCreateSeedRequest_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                          (System_Collections_Generic_Dictionary_object__object__o *)this,
                                          (Il2CppObject *)StringLiteral_23018/*"seed"*/,
                                          (const MethodInfo_336D1DC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (AuCreateSeedRequest_o *)v11->_1.byval_arg.data;
          if ( !this )
            goto LABEL_19;
          this = (AuCreateSeedRequest_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                            (System_Collections_Generic_Dictionary_object__object__o *)this,
                                            (Il2CppObject *)StringLiteral_23018/*"seed"*/,
                                            &value,
                                            (const MethodInfo_336E7F4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
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
    v12 = (RequestBase_o *)v4;
  }
  RequestBase__completed(v12, (System_String_o *)responseList, 0LL);
}