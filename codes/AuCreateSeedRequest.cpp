void AuCreateSeedRequest___ctor(AuCreateSeedRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0);
}


System_String_o *AuCreateSeedRequest__getURL(AuCreateSeedRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_5972318 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_24665/*"shop/createSeed"*/);
    byte_5972318 = 1;
  }
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, method);
  BaseUrl = NetworkManager__getBaseUrl(1, 0);
  return System_String__Concat_75651716(BaseUrl, (System_String_o *)StringLiteral_24665/*"shop/createSeed"*/, 0);
}


void AuCreateSeedRequest__requestCompleted(
        AuCreateSeedRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  ResponseData_array *v3; // x20
  AuCreateSeedRequest_o *v4; // x19
  int max_length; // w8
  unsigned int v6; // w26
  Il2CppClass **v7; // x8
  Il2CppClass *v8; // x21
  RequestBase_o *v9; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-48h] BYREF

  v3 = responseList;
  v4 = this;
  if ( (byte_5972319 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    this = (AuCreateSeedRequest_o *)sub_2213A60(&StringLiteral_24472/*"seed"*/);
    byte_5972319 = 1;
  }
  value = 0;
  if ( !v3 )
LABEL_19:
    sub_2213CDC(this, responseList);
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
        sub_2213CE4(this);
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
                                          (Il2CppObject *)StringLiteral_24472/*"seed"*/,
                                          (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (AuCreateSeedRequest_o *)v8->_1.byval_arg.data;
          if ( !this )
            goto LABEL_19;
          this = (AuCreateSeedRequest_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                                            (System_Collections_Generic_Dictionary_object__object__o *)this,
                                            (Il2CppObject *)StringLiteral_24472/*"seed"*/,
                                            &value,
                                            (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            responseList = (ResponseData_array *)value;
            if ( value )
            {
              if ( value->klass == (Il2CppClass *)qword_5984390 )
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