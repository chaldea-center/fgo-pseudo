void __fastcall ResponseData___cctor(const MethodInfo *method)
{
  ;
}


void __fastcall ResponseData___ctor(ResponseData_o *this, const MethodInfo *method)
{
  ResponseData_c *v3; // x0

  if ( (byte_42B2898 & 1) == 0 )
  {
    sub_B52984(&ResponseData___TypeInfo);
    sub_B52984(&ResponseData_TypeInfo);
    byte_42B2898 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = ResponseData_TypeInfo;
  if ( (BYTE3(ResponseData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !ResponseData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseData_TypeInfo);
    v3 = ResponseData_TypeInfo;
  }
  if ( v3->static_fields->_never )
    sub_B5299C(ResponseData___TypeInfo, 1LL);
}


bool __fastcall ResponseData__checkError(ResponseData_o *this, System_String_o *resCode, const MethodInfo *method)
{
  uint32_t v4; // w0
  __int64 *v5; // x8

  if ( (byte_42B2899 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1230/*"89"*/);
    sub_B52984(&StringLiteral_987/*"01"*/);
    sub_B52984(&StringLiteral_992/*"03"*/);
    sub_B52984(&StringLiteral_1236/*"99"*/);
    sub_B52984(&StringLiteral_991/*"02"*/);
    sub_B52984(&StringLiteral_1229/*"88"*/);
    sub_B52984(&StringLiteral_1234/*"98"*/);
    sub_B52984(&StringLiteral_1112/*"11"*/);
    sub_B52984(&StringLiteral_1222/*"71"*/);
    sub_B52984(&StringLiteral_993/*"04"*/);
    sub_B52984(&StringLiteral_978/*"00"*/);
    byte_42B2899 = 1;
  }
  if ( !resCode )
    return 0;
  v4 = PrivateImplementationDetails___ComputeStringHash_21189352(resCode, 0LL);
  if ( v4 > 0x1EED6D94 )
  {
    if ( v4 > 0x21ED724D )
    {
      switch ( v4 )
      {
        case 0x90E5D245:
          v5 = &StringLiteral_1222/*"71"*/;
          goto LABEL_30;
        case 0x9901B55A:
          v5 = &StringLiteral_1230/*"89"*/;
          goto LABEL_30;
        case 0x9A01B6ED:
          v5 = &StringLiteral_1229/*"88"*/;
          goto LABEL_30;
      }
    }
    else
    {
      if ( v4 == 535654183 )
      {
        v5 = &StringLiteral_991/*"02"*/;
        goto LABEL_30;
      }
      if ( v4 == 552431802 )
      {
        v5 = &StringLiteral_987/*"01"*/;
        goto LABEL_30;
      }
      if ( v4 == 569209421 && System_String__op_Equality(resCode, (System_String_o *)StringLiteral_978/*"00"*/, 0LL) )
        return 1;
    }
  }
  else if ( v4 > 0x14FEA6F7 )
  {
    switch ( v4 )
    {
      case 0x1CEB2BD7u:
        v5 = &StringLiteral_1112/*"11"*/;
        goto LABEL_30;
      case 0x1DED6C01u:
        v5 = &StringLiteral_993/*"04"*/;
        goto LABEL_30;
      case 0x1EED6D94u:
        v5 = &StringLiteral_992/*"03"*/;
        goto LABEL_30;
    }
  }
  else
  {
    if ( v4 == 335455588 )
    {
      v5 = &StringLiteral_1234/*"98"*/;
      goto LABEL_30;
    }
    if ( v4 == 352233207 )
    {
      v5 = &StringLiteral_1236/*"99"*/;
LABEL_30:
      System_String__op_Equality(resCode, (System_String_o *)*v5, 0LL);
    }
  }
  return 0;
}


bool __fastcall ResponseData__checkError_29724768(ResponseData_o *this, const MethodInfo *method)
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
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *fail; // x19

  v2 = this;
  if ( (byte_42B289A & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    this = (ResponseData_o *)sub_B52984(&StringLiteral_18125/*"detail"*/);
    byte_42B289A = 1;
  }
  fail = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v2->fields.fail;
  if ( !fail )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)fail,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_18125/*"detail"*/,
         (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    this = (ResponseData_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                               fail,
                               (System_Type_o *)StringLiteral_18125/*"detail"*/,
                               (const MethodInfo_2F1B73C *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( this )
      return (System_String_o *)((__int64 (__fastcall *)(ResponseData_o *, void *))this->klass->vtable._3_ToString.method)(
                                  this,
                                  this->klass[1]._1.image);
LABEL_8:
    sub_B52A5C(this, method);
  }
  return 0LL;
}