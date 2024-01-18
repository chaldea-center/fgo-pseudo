void __fastcall ResponseData___cctor(const MethodInfo *method)
{
  ;
}


void __fastcall ResponseData___ctor(ResponseData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  ResponseData_c *v4; // x0

  if ( (byte_418ADD9 & 1) == 0 )
  {
    sub_B2C35C(&ResponseData___TypeInfo, method);
    sub_B2C35C(&ResponseData_TypeInfo, v3);
    byte_418ADD9 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4 = ResponseData_TypeInfo;
  if ( (BYTE3(ResponseData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !ResponseData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseData_TypeInfo);
    v4 = ResponseData_TypeInfo;
  }
  if ( v4->static_fields->_never )
    sub_B2C374(ResponseData___TypeInfo, 1LL);
}


bool __fastcall ResponseData__checkError(ResponseData_o *this, System_String_o *resCode, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  uint32_t v14; // w0
  __int64 *v15; // x8

  if ( (byte_418ADDA & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1215/*"89"*/, resCode);
    sub_B2C35C(&StringLiteral_971/*"01"*/, v4);
    sub_B2C35C(&StringLiteral_976/*"03"*/, v5);
    sub_B2C35C(&StringLiteral_1221/*"99"*/, v6);
    sub_B2C35C(&StringLiteral_975/*"02"*/, v7);
    sub_B2C35C(&StringLiteral_1214/*"88"*/, v8);
    sub_B2C35C(&StringLiteral_1219/*"98"*/, v9);
    sub_B2C35C(&StringLiteral_1096/*"11"*/, v10);
    sub_B2C35C(&StringLiteral_1207/*"71"*/, v11);
    sub_B2C35C(&StringLiteral_977/*"04"*/, v12);
    sub_B2C35C(&StringLiteral_962/*"00"*/, v13);
    byte_418ADDA = 1;
  }
  if ( !resCode )
    return 0;
  v14 = PrivateImplementationDetails___ComputeStringHash_21099092(resCode, 0LL);
  if ( v14 > 0x1EED6D94 )
  {
    if ( v14 > 0x21ED724D )
    {
      switch ( v14 )
      {
        case 0x90E5D245:
          v15 = &StringLiteral_1207/*"71"*/;
          goto LABEL_30;
        case 0x9901B55A:
          v15 = &StringLiteral_1215/*"89"*/;
          goto LABEL_30;
        case 0x9A01B6ED:
          v15 = &StringLiteral_1214/*"88"*/;
          goto LABEL_30;
      }
    }
    else
    {
      if ( v14 == 535654183 )
      {
        v15 = &StringLiteral_975/*"02"*/;
        goto LABEL_30;
      }
      if ( v14 == 552431802 )
      {
        v15 = &StringLiteral_971/*"01"*/;
        goto LABEL_30;
      }
      if ( v14 == 569209421 && System_String__op_Equality(resCode, (System_String_o *)StringLiteral_962/*"00"*/, 0LL) )
        return 1;
    }
  }
  else if ( v14 > 0x14FEA6F7 )
  {
    switch ( v14 )
    {
      case 0x1CEB2BD7u:
        v15 = &StringLiteral_1096/*"11"*/;
        goto LABEL_30;
      case 0x1DED6C01u:
        v15 = &StringLiteral_977/*"04"*/;
        goto LABEL_30;
      case 0x1EED6D94u:
        v15 = &StringLiteral_976/*"03"*/;
        goto LABEL_30;
    }
  }
  else
  {
    if ( v14 == 335455588 )
    {
      v15 = &StringLiteral_1219/*"98"*/;
      goto LABEL_30;
    }
    if ( v14 == 352233207 )
    {
      v15 = &StringLiteral_1221/*"99"*/;
LABEL_30:
      System_String__op_Equality(resCode, (System_String_o *)*v15, 0LL);
    }
  }
  return 0;
}


bool __fastcall ResponseData__checkError_31019724(ResponseData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ResponseData__checkError(this, this->fields.resCode, v2);
}


void __fastcall ResponseData__debugPrint(ResponseData_o *this, const MethodInfo *method)
{
  ;
}


System_String_o *__fastcall ResponseData__getErrorMessage(ResponseData_o *this, const MethodInfo *method)
{
  ResponseData_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *fail; // x19

  v2 = this;
  if ( (byte_418ADDB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    this = (ResponseData_o *)sub_B2C35C(&StringLiteral_17994/*"detail"*/, v4);
    byte_418ADDB = 1;
  }
  fail = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v2->fields.fail;
  if ( !fail )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)fail,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_17994/*"detail"*/,
         (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    this = (ResponseData_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                               fail,
                               (System_Type_o *)StringLiteral_17994/*"detail"*/,
                               (const MethodInfo_2DB1BFC *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( this )
      return (System_String_o *)((__int64 (__fastcall *)(ResponseData_o *, void *))this->klass->vtable._3_ToString.method)(
                                  this,
                                  this->klass[1]._1.image);
LABEL_8:
    sub_B2C434(this, method);
  }
  return 0LL;
}