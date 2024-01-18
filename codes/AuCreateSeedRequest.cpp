void __fastcall AuCreateSeedRequest___ctor(AuCreateSeedRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall AuCreateSeedRequest__getURL(AuCreateSeedRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_41898EF & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_22104/*"shop/createSeed"*/, v2);
    byte_41898EF = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44305532(BaseUrl, (System_String_o *)StringLiteral_22104/*"shop/createSeed"*/, 0LL);
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
  __int64 v13; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-48h] BYREF

  v3 = responseList;
  v4 = this;
  if ( (byte_41898F0 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, responseList);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v5);
    sub_B2C35C(&string_TypeInfo, v6);
    this = (AuCreateSeedRequest_o *)sub_B2C35C(&StringLiteral_21948/*"seed"*/, v7);
    byte_41898F0 = 1;
  }
  value = 0LL;
  if ( !v3 )
LABEL_19:
    sub_B2C434(this, responseList);
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
      {
        v13 = sub_B2C460(this);
        sub_B2C400(v13, 0LL);
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
        this = (AuCreateSeedRequest_o *)v11->_1.byval_arg.data;
        if ( !this )
          goto LABEL_19;
        this = (AuCreateSeedRequest_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
                                          (System_Xml_XmlQualifiedName_o *)StringLiteral_21948/*"seed"*/,
                                          (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (AuCreateSeedRequest_o *)v11->_1.byval_arg.data;
          if ( !this )
            goto LABEL_19;
          this = (AuCreateSeedRequest_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
                                            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
                                            (System_Xml_XmlQualifiedName_o *)StringLiteral_21948/*"seed"*/,
                                            &value,
                                            (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
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