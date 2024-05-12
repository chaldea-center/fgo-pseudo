void __fastcall AuCreateSeedRequest___ctor(AuCreateSeedRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall AuCreateSeedRequest__getURL(AuCreateSeedRequest_o *this, const MethodInfo *method)
{
  System_String_o *BaseUrl; // x0

  if ( (byte_4388BD5 & 1) == 0 )
  {
    sub_B775C4(&NetworkManager_TypeInfo);
    sub_B775C4(&StringLiteral_22577/*"shop/createSeed"*/);
    byte_4388BD5 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44901936(BaseUrl, (System_String_o *)StringLiteral_22577/*"shop/createSeed"*/, 0LL);
}


void __fastcall AuCreateSeedRequest__requestCompleted(
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
  __int64 v10; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-48h] BYREF

  v3 = responseList;
  v4 = this;
  if ( (byte_4388BD6 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B775C4(&string_TypeInfo);
    this = (AuCreateSeedRequest_o *)sub_B775C4(&StringLiteral_22416/*"seed"*/);
    byte_4388BD6 = 1;
  }
  value = 0LL;
  if ( !v3 )
LABEL_19:
    sub_B7769C(this, responseList);
  max_length = v3->max_length;
  if ( max_length < 1 )
  {
LABEL_16:
    v9 = (RequestBase_o *)v4;
    responseList = 0LL;
  }
  else
  {
    v6 = 0;
    while ( 1 )
    {
      if ( v6 >= max_length )
      {
        v10 = sub_B776C8(this);
        sub_B77668(v10, 0LL);
      }
      v7 = &v3->obj.klass + (int)v6;
      v8 = v7[4];
      if ( !v8 )
        goto LABEL_19;
      this = (AuCreateSeedRequest_o *)ResponseData__checkError(
                                        (ResponseData_o *)v7[4],
                                        (System_String_o *)v8->_1.name,
                                        0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (AuCreateSeedRequest_o *)v8->_1.byval_arg.data;
        if ( !this )
          goto LABEL_19;
        this = (AuCreateSeedRequest_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
                                          (System_Xml_XmlQualifiedName_o *)StringLiteral_22416/*"seed"*/,
                                          (const MethodInfo_2F7D86C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (AuCreateSeedRequest_o *)v8->_1.byval_arg.data;
          if ( !this )
            goto LABEL_19;
          this = (AuCreateSeedRequest_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
                                            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
                                            (System_Xml_XmlQualifiedName_o *)StringLiteral_22416/*"seed"*/,
                                            &value,
                                            (const MethodInfo_2F7F3F8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
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
  RequestBase__completed(v9, (System_String_o *)responseList, 0LL);
}