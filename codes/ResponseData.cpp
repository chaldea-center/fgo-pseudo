void __fastcall ResponseData___ctor(ResponseData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1

  if ( (byte_4C239B1 & 1) == 0 )
  {
    sub_1C3B764(&ResponseData___TypeInfo, method);
    sub_1C3B764(&ResponseData_TypeInfo, v3);
    byte_4C239B1 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( ResponseData_TypeInfo->static_fields->_never )
    sub_1C3B80C(ResponseData___TypeInfo, 1LL);
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

  if ( (byte_4C239B2 & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_1515/*"<'width'>"*/, resCode);
    sub_1C3B764(&StringLiteral_1208/*"1.2.840.10045.4.3"*/, v4);
    sub_1C3B764(&StringLiteral_1215/*"1.2.840.113549.1.1.11"*/, v5);
    sub_1C3B764(&StringLiteral_1521/*"</DP>"*/, v6);
    sub_1C3B764(&StringLiteral_1214/*"1.2.840.113549.1.1.10"*/, v7);
    sub_1C3B764(&StringLiteral_1514/*"<![CDATA["*/, v8);
    sub_1C3B764(&StringLiteral_1519/*"</D>"*/, v9);
    sub_1C3B764(&StringLiteral_1382/*"2.5.4.7"*/, v10);
    sub_1C3B764(&StringLiteral_1509/*"<"*/, v11);
    sub_1C3B764(&StringLiteral_1216/*"1.2.840.113549.1.1.12"*/, v12);
    sub_1C3B764(&StringLiteral_1199/*"1.2.840.10045.2.1"*/, v13);
    byte_4C239B2 = 1;
  }
  if ( !resCode )
    return 0;
  v14 = PrivateImplementationDetails___ComputeStringHash(resCode, 0LL);
  if ( v14 > 0x1EED6D94 )
  {
    if ( v14 > 0x21ED724D )
    {
      switch ( v14 )
      {
        case 0x90E5D245:
          v15 = &StringLiteral_1509/*"<"*/;
          goto LABEL_30;
        case 0x9901B55A:
          v15 = &StringLiteral_1515/*"<'width'>"*/;
          goto LABEL_30;
        case 0x9A01B6ED:
          v15 = &StringLiteral_1514/*"<![CDATA["*/;
          goto LABEL_30;
      }
    }
    else
    {
      if ( v14 == 535654183 )
      {
        v15 = &StringLiteral_1214/*"1.2.840.113549.1.1.10"*/;
        goto LABEL_30;
      }
      if ( v14 == 552431802 )
      {
        v15 = &StringLiteral_1208/*"1.2.840.10045.4.3"*/;
        goto LABEL_30;
      }
      if ( v14 == 569209421 && System_String__op_Equality(resCode, (System_String_o *)StringLiteral_1199/*"1.2.840.10045.2.1"*/, 0LL) )
        return 1;
    }
  }
  else if ( v14 > 0x14FEA6F7 )
  {
    switch ( v14 )
    {
      case 0x1CEB2BD7u:
        v15 = &StringLiteral_1382/*"2.5.4.7"*/;
        goto LABEL_30;
      case 0x1DED6C01u:
        v15 = &StringLiteral_1216/*"1.2.840.113549.1.1.12"*/;
        goto LABEL_30;
      case 0x1EED6D94u:
        v15 = &StringLiteral_1215/*"1.2.840.113549.1.1.11"*/;
        goto LABEL_30;
    }
  }
  else
  {
    if ( v14 == 335455588 )
    {
      v15 = &StringLiteral_1519/*"</D>"*/;
      goto LABEL_30;
    }
    if ( v14 == 352233207 )
    {
      v15 = &StringLiteral_1521/*"</DP>"*/;
LABEL_30:
      System_String__op_Equality(resCode, (System_String_o *)*v15, 0LL);
    }
  }
  return 0;
}


bool __fastcall ResponseData__checkError_42712632(ResponseData_o *this, const MethodInfo *method)
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
  System_Collections_Generic_Dictionary_object__object__o *fail; // x19

  v2 = this;
  if ( (byte_4C239B3 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1C3B764(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v3);
    this = (ResponseData_o *)sub_1C3B764(&StringLiteral_18956/*"exception"*/, v4);
    byte_4C239B3 = 1;
  }
  fail = (System_Collections_Generic_Dictionary_object__object__o *)v2->fields.fail;
  if ( !fail )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         fail,
         (Il2CppObject *)StringLiteral_18956/*"exception"*/,
         (const MethodInfo_335595C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    this = (ResponseData_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                               fail,
                               (Il2CppObject *)StringLiteral_18956/*"exception"*/,
                               (const MethodInfo_33556E8 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( this )
      return (System_String_o *)((__int64 (__fastcall *)(ResponseData_o *, void *))this->klass->vtable._3_ToString.method)(
                                  this,
                                  this->klass[1]._1.image);
LABEL_8:
    sub_1C3B9C0(this, method);
  }
  return 0LL;
}