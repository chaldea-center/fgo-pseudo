void __fastcall AuCreateSeedRequest___ctor(AuCreateSeedRequest_o *this, const MethodInfo *method)
{
  RequestBase___ctor((RequestBase_o *)this, 0LL);
}


System_String_o *__fastcall AuCreateSeedRequest__getURL(AuCreateSeedRequest_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  System_String_o *BaseUrl; // x0

  if ( (byte_42EBD81 & 1) == 0 )
  {
    sub_B5D5C4(&NetworkManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_22406/*"shop/createSeed"*/, v4, v5, v6);
    byte_42EBD81 = 1;
  }
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  BaseUrl = NetworkManager__getBaseUrl(1, 0LL);
  return System_String__Concat_44577788(BaseUrl, (System_String_o *)StringLiteral_22406/*"shop/createSeed"*/, 0LL);
}


void __fastcall AuCreateSeedRequest__requestCompleted(
        AuCreateSeedRequest_o *this,
        ResponseData_array *responseList,
        const MethodInfo *method)
{
  __int64 v3; // x3
  ResponseData_array *v4; // x20
  AuCreateSeedRequest_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int max_length; // w8
  unsigned int v16; // w22
  Il2CppClass **v17; // x8
  Il2CppClass *v18; // x21
  RequestBase_o *v19; // x0
  __int64 v20; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-48h] BYREF

  v4 = responseList;
  v5 = this;
  if ( (byte_42EBD82 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__,
      (_DWORD)responseList,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v6, v7, v8);
    sub_B5D5C4(&string_TypeInfo, v9, v10, v11);
    this = (AuCreateSeedRequest_o *)sub_B5D5C4(&StringLiteral_22247/*"seed"*/, v12, v13, v14);
    byte_42EBD82 = 1;
  }
  value = 0LL;
  if ( !v4 )
LABEL_19:
    sub_B5D69C(this, responseList);
  max_length = v4->max_length;
  if ( max_length < 1 )
  {
LABEL_16:
    v19 = (RequestBase_o *)v5;
    responseList = 0LL;
  }
  else
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
      {
        v20 = sub_B5D6C8(this);
        sub_B5D668(v20, 0LL);
      }
      v17 = &v4->obj.klass + (int)v16;
      v18 = v17[4];
      if ( !v18 )
        goto LABEL_19;
      this = (AuCreateSeedRequest_o *)ResponseData__checkError(
                                        (ResponseData_o *)v17[4],
                                        (System_String_o *)v18->_1.name,
                                        0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (AuCreateSeedRequest_o *)v18->_1.byval_arg.data;
        if ( !this )
          goto LABEL_19;
        this = (AuCreateSeedRequest_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
                                          (System_Xml_XmlQualifiedName_o *)StringLiteral_22247/*"seed"*/,
                                          (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (AuCreateSeedRequest_o *)v18->_1.byval_arg.data;
          if ( !this )
            goto LABEL_19;
          this = (AuCreateSeedRequest_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
                                            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
                                            (System_Xml_XmlQualifiedName_o *)StringLiteral_22247/*"seed"*/,
                                            &value,
                                            (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
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
      max_length = v4->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_16;
    }
    v19 = (RequestBase_o *)v5;
  }
  RequestBase__completed(v19, (System_String_o *)responseList, 0LL);
}