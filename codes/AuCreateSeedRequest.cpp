void __fastcall AuCreateSeedRequest___ctor(AuCreateSeedRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall AuCreateSeedRequest__getURL(AuCreateSeedRequest_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  System_String_o *BaseUrl; // x0

  if ( (byte_421675B & 1) == 0 )
  {
    sub_B0D8A4(&NetworkManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_22179/*"shop/createSeed"*/, v2);
    byte_421675B = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_43849904(BaseUrl, (System_String_o *)StringLiteral_22179/*"shop/createSeed"*/, 0LL);
}


void __fastcall AuCreateSeedRequest__requestCompleted(
        AuCreateSeedRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  AuCreateSeedRequest_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  signed int max_length; // w8
  unsigned int v9; // w22
  Il2CppClass **v10; // x8
  Il2CppClass *v11; // x21
  System_String_o *v12; // x1
  RequestBase_o *v13; // x0
  __int64 v14; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_421675C & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, responseList);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v5);
    sub_B0D8A4(&string_TypeInfo, v6);
    this = (AuCreateSeedRequest_o *)sub_B0D8A4(&StringLiteral_22021/*"seed"*/, v7);
    byte_421675C = 1;
  }
  value = 0LL;
  if ( !responseList )
LABEL_19:
    sub_B0D97C(this);
  max_length = responseList->max_length;
  if ( max_length < 1 )
  {
LABEL_16:
    v13 = (RequestBase_o *)v4;
    v12 = 0LL;
  }
  else
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= max_length )
      {
        v14 = sub_B0D9A8(this);
        sub_B0D948(v14, 0LL);
      }
      v10 = &responseList->obj.klass + (int)v9;
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
                                          (System_Xml_XmlQualifiedName_o *)StringLiteral_22021/*"seed"*/,
                                          (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (AuCreateSeedRequest_o *)v11->_1.byval_arg.data;
          if ( !this )
            goto LABEL_19;
          this = (AuCreateSeedRequest_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
                                            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
                                            (System_Xml_XmlQualifiedName_o *)StringLiteral_22021/*"seed"*/,
                                            &value,
                                            (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            v12 = (System_String_o *)value;
            if ( value )
            {
              if ( (System_String_c *)value->klass == string_TypeInfo )
                break;
            }
          }
        }
      }
      max_length = responseList->max_length;
      if ( (int)++v9 >= max_length )
        goto LABEL_16;
    }
    v13 = (RequestBase_o *)v4;
  }
  RequestBase__completed(v13, v12, 0LL);
}