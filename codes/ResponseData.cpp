void __fastcall ResponseData___cctor(const MethodInfo *method)
{
  ;
}


void __fastcall ResponseData___ctor(ResponseData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  ResponseData_c *v5; // x0

  if ( (byte_40FD37B & 1) == 0 )
  {
    sub_B16FFC(&ResponseData___TypeInfo, method);
    sub_B16FFC(&ResponseData_TypeInfo, v3);
    byte_40FD37B = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v5 = ResponseData_TypeInfo;
  if ( (BYTE3(ResponseData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !ResponseData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseData_TypeInfo);
    v5 = ResponseData_TypeInfo;
  }
  if ( v5->static_fields->_never )
    sub_B17014(ResponseData___TypeInfo, 1LL, v4);
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

  if ( (byte_40FD37C & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1213/*"89"*/, resCode);
    sub_B16FFC(&StringLiteral_969/*"01"*/, v4);
    sub_B16FFC(&StringLiteral_974/*"03"*/, v5);
    sub_B16FFC(&StringLiteral_1219/*"99"*/, v6);
    sub_B16FFC(&StringLiteral_973/*"02"*/, v7);
    sub_B16FFC(&StringLiteral_1212/*"88"*/, v8);
    sub_B16FFC(&StringLiteral_1217/*"98"*/, v9);
    sub_B16FFC(&StringLiteral_1094/*"11"*/, v10);
    sub_B16FFC(&StringLiteral_1205/*"71"*/, v11);
    sub_B16FFC(&StringLiteral_975/*"04"*/, v12);
    sub_B16FFC(&StringLiteral_960/*"00"*/, v13);
    byte_40FD37C = 1;
  }
  if ( !resCode )
    return 0;
  v14 = PrivateImplementationDetails___ComputeStringHash_21105248(resCode, 0LL);
  if ( v14 > 0x1EED6D94 )
  {
    if ( v14 > 0x21ED724D )
    {
      switch ( v14 )
      {
        case 0x90E5D245:
          v15 = &StringLiteral_1205/*"71"*/;
          goto LABEL_30;
        case 0x9901B55A:
          v15 = &StringLiteral_1213/*"89"*/;
          goto LABEL_30;
        case 0x9A01B6ED:
          v15 = &StringLiteral_1212/*"88"*/;
          goto LABEL_30;
      }
    }
    else
    {
      if ( v14 == 535654183 )
      {
        v15 = &StringLiteral_973/*"02"*/;
        goto LABEL_30;
      }
      if ( v14 == 552431802 )
      {
        v15 = &StringLiteral_969/*"01"*/;
        goto LABEL_30;
      }
      if ( v14 == 569209421 && System_String__op_Equality(resCode, (System_String_o *)StringLiteral_960/*"00"*/, 0LL) )
        return 1;
    }
  }
  else if ( v14 > 0x14FEA6F7 )
  {
    switch ( v14 )
    {
      case 0x1CEB2BD7u:
        v15 = &StringLiteral_1094/*"11"*/;
        goto LABEL_30;
      case 0x1DED6C01u:
        v15 = &StringLiteral_975/*"04"*/;
        goto LABEL_30;
      case 0x1EED6D94u:
        v15 = &StringLiteral_974/*"03"*/;
        goto LABEL_30;
    }
  }
  else
  {
    if ( v14 == 335455588 )
    {
      v15 = &StringLiteral_1217/*"98"*/;
      goto LABEL_30;
    }
    if ( v14 == 352233207 )
    {
      v15 = &StringLiteral_1219/*"99"*/;
LABEL_30:
      System_String__op_Equality(resCode, (System_String_o *)*v15, 0LL);
    }
  }
  return 0;
}


bool __fastcall ResponseData__checkError_30924960(ResponseData_o *this, const MethodInfo *method)
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *fail; // x19
  UnityEngine_Purchasing_IStoreExtension_o *Item; // x0

  if ( (byte_40FD37D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    sub_B16FFC(&StringLiteral_17926/*"detail"*/, v4);
    byte_40FD37D = 1;
  }
  fail = this->fields.fail;
  if ( !fail )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)fail,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_17926/*"detail"*/,
         (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    Item = System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
             (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)fail,
             (System_Type_o *)StringLiteral_17926/*"detail"*/,
             (const MethodInfo_2DA3B54 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( Item )
      return (System_String_o *)((__int64 (__fastcall *)(UnityEngine_Purchasing_IStoreExtension_o *, Il2CppMethodPointer))Item->klass->vtable[3].method)(
                                  Item,
                                  Item->klass->vtable[4].methodPtr);
LABEL_8:
    sub_B170D4();
  }
  return 0LL;
}