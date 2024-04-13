void __fastcall ResponseData___cctor(const MethodInfo *method)
{
  ;
}


void __fastcall ResponseData___ctor(ResponseData_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  ResponseData_c *v8; // x0

  if ( (byte_42EAEE8 & 1) == 0 )
  {
    sub_B5D5C4(&ResponseData___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ResponseData_TypeInfo, v5, v6, v7);
    byte_42EAEE8 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v8 = ResponseData_TypeInfo;
  if ( (BYTE3(ResponseData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !ResponseData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ResponseData_TypeInfo);
    v8 = ResponseData_TypeInfo;
  }
  if ( v8->static_fields->_never )
    sub_B5D5DC(ResponseData___TypeInfo, 1LL);
}


bool __fastcall ResponseData__checkError(ResponseData_o *this, System_String_o *resCode, const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  uint32_t v35; // w0
  __int64 *v36; // x8

  if ( (byte_42EAEE9 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1235/*"89"*/, (_DWORD)resCode, (_DWORD)method, v3);
    sub_B5D5C4(&StringLiteral_991/*"01"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_996/*"03"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_1241/*"99"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_995/*"02"*/, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_1234/*"88"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_1239/*"98"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_1116/*"11"*/, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_1227/*"71"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_997/*"04"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_982/*"00"*/, v32, v33, v34);
    byte_42EAEE9 = 1;
  }
  if ( !resCode )
    return 0;
  v35 = PrivateImplementationDetails___ComputeStringHash_21231600(resCode, 0LL);
  if ( v35 > 0x1EED6D94 )
  {
    if ( v35 > 0x21ED724D )
    {
      switch ( v35 )
      {
        case 0x90E5D245:
          v36 = &StringLiteral_1227/*"71"*/;
          goto LABEL_30;
        case 0x9901B55A:
          v36 = &StringLiteral_1235/*"89"*/;
          goto LABEL_30;
        case 0x9A01B6ED:
          v36 = &StringLiteral_1234/*"88"*/;
          goto LABEL_30;
      }
    }
    else
    {
      if ( v35 == 535654183 )
      {
        v36 = &StringLiteral_995/*"02"*/;
        goto LABEL_30;
      }
      if ( v35 == 552431802 )
      {
        v36 = &StringLiteral_991/*"01"*/;
        goto LABEL_30;
      }
      if ( v35 == 569209421 && System_String__op_Equality(resCode, (System_String_o *)StringLiteral_982/*"00"*/, 0LL) )
        return 1;
    }
  }
  else if ( v35 > 0x14FEA6F7 )
  {
    switch ( v35 )
    {
      case 0x1CEB2BD7u:
        v36 = &StringLiteral_1116/*"11"*/;
        goto LABEL_30;
      case 0x1DED6C01u:
        v36 = &StringLiteral_997/*"04"*/;
        goto LABEL_30;
      case 0x1EED6D94u:
        v36 = &StringLiteral_996/*"03"*/;
        goto LABEL_30;
    }
  }
  else
  {
    if ( v35 == 335455588 )
    {
      v36 = &StringLiteral_1239/*"98"*/;
      goto LABEL_30;
    }
    if ( v35 == 352233207 )
    {
      v36 = &StringLiteral_1241/*"99"*/;
LABEL_30:
      System_String__op_Equality(resCode, (System_String_o *)*v36, 0LL);
    }
  }
  return 0;
}


bool __fastcall ResponseData__checkError_29500464(ResponseData_o *this, const MethodInfo *method)
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
  int v2; // w2
  __int64 v3; // x3
  ResponseData_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  System_Collections_Generic_Dictionary_Type__IStoreExtension__o *fail; // x19

  v4 = this;
  if ( (byte_42EAEEA & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v5, v6, v7);
    this = (ResponseData_o *)sub_B5D5C4(&StringLiteral_18219/*"detail"*/, v8, v9, v10);
    byte_42EAEEA = 1;
  }
  fail = (System_Collections_Generic_Dictionary_Type__IStoreExtension__o *)v4->fields.fail;
  if ( !fail )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)fail,
         (System_Xml_XmlQualifiedName_o *)StringLiteral_18219/*"detail"*/,
         (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    this = (ResponseData_o *)System_Collections_Generic_Dictionary_Type__IStoreExtension___get_Item(
                               fail,
                               (System_Type_o *)StringLiteral_18219/*"detail"*/,
                               (const MethodInfo_2F26AF8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( this )
      return (System_String_o *)((__int64 (__fastcall *)(ResponseData_o *, void *))this->klass->vtable._3_ToString.method)(
                                  this,
                                  this->klass[1]._1.image);
LABEL_8:
    sub_B5D69C(this, method);
  }
  return 0LL;
}