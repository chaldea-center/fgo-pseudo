void __fastcall AuCreateSeedRequest___ctor(AuCreateSeedRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall AuCreateSeedRequest__getURL(AuCreateSeedRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_40FBF2F & 1) == 0 )
  {
    sub_B16FFC(&NetworkManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_22012/*"shop/createSeed"*/, v2);
    byte_40FBF2F = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43743732(BaseUrl, (System_String_o *)StringLiteral_22012/*"shop/createSeed"*/, 0LL);
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *data; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v13; // x0
  RequestBase_o *v14; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-48h] BYREF

  v3 = responseList;
  v4 = this;
  if ( (byte_40FBF30 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, responseList);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v5);
    sub_B16FFC(&string_TypeInfo, v6);
    this = (AuCreateSeedRequest_o *)sub_B16FFC(&StringLiteral_21856/*"seed"*/, v7);
    byte_40FBF30 = 1;
  }
  value = 0LL;
  if ( !v3 )
LABEL_19:
    sub_B170D4();
  max_length = v3->max_length;
  if ( max_length < 1 )
  {
LABEL_16:
    v14 = (RequestBase_o *)v4;
    responseList = 0LL;
  }
  else
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
      {
        sub_B17100(this, responseList, method);
        sub_B170A0();
      }
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
        data = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v11->_1.byval_arg.data;
        if ( !data )
          goto LABEL_19;
        this = (AuCreateSeedRequest_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                          data,
                                          (System_Xml_XmlQualifiedName_o *)StringLiteral_21856/*"seed"*/,
                                          (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v13 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v11->_1.byval_arg.data;
          if ( !v13 )
            goto LABEL_19;
          this = (AuCreateSeedRequest_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
                                            v13,
                                            (System_Xml_XmlQualifiedName_o *)StringLiteral_21856/*"seed"*/,
                                            &value,
                                            (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
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
    v14 = (RequestBase_o *)v4;
  }
  RequestBase__completed(v14, (System_String_o *)responseList, 0LL);
}