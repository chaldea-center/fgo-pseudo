void __fastcall ResponseData___ctor(ResponseData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2

  if ( (byte_4B17B5F & 1) == 0 )
  {
    sub_1BCA7E0(&ResponseData___TypeInfo, method, v2);
    sub_1BCA7E0(&ResponseData_TypeInfo, v4, v5);
    byte_4B17B5F = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( ResponseData_TypeInfo->static_fields->_never )
    sub_1BCA888(ResponseData___TypeInfo, 1LL);
}


bool __fastcall ResponseData__checkError(ResponseData_o *this, System_String_o *resCode, const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  uint32_t v24; // w0
  __int64 *v25; // x8

  if ( (byte_4B17B60 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1531/*"89"*/, resCode, method);
    sub_1BCA7E0(&StringLiteral_1226/*"01"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_1233/*"03"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_1537/*"99"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_1232/*"02"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_1530/*"88"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_1535/*"98"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_1400/*"11"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_1525/*"71"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_1234/*"04"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_1217/*"00"*/, v22, v23);
    byte_4B17B60 = 1;
  }
  if ( !resCode )
    return 0;
  v24 = PrivateImplementationDetails___ComputeStringHash(resCode, 0LL);
  if ( v24 > 0x1EED6D94 )
  {
    if ( v24 > 0x21ED724D )
    {
      switch ( v24 )
      {
        case 0x90E5D245:
          v25 = &StringLiteral_1525/*"71"*/;
          goto LABEL_30;
        case 0x9901B55A:
          v25 = &StringLiteral_1531/*"89"*/;
          goto LABEL_30;
        case 0x9A01B6ED:
          v25 = &StringLiteral_1530/*"88"*/;
          goto LABEL_30;
      }
    }
    else
    {
      if ( v24 == 535654183 )
      {
        v25 = &StringLiteral_1232/*"02"*/;
        goto LABEL_30;
      }
      if ( v24 == 552431802 )
      {
        v25 = &StringLiteral_1226/*"01"*/;
        goto LABEL_30;
      }
      if ( v24 == 569209421 && System_String__op_Equality(resCode, (System_String_o *)StringLiteral_1217/*"00"*/, 0LL) )
        return 1;
    }
  }
  else if ( v24 > 0x14FEA6F7 )
  {
    switch ( v24 )
    {
      case 0x1CEB2BD7u:
        v25 = &StringLiteral_1400/*"11"*/;
        goto LABEL_30;
      case 0x1DED6C01u:
        v25 = &StringLiteral_1234/*"04"*/;
        goto LABEL_30;
      case 0x1EED6D94u:
        v25 = &StringLiteral_1233/*"03"*/;
        goto LABEL_30;
    }
  }
  else
  {
    if ( v24 == 335455588 )
    {
      v25 = &StringLiteral_1535/*"98"*/;
      goto LABEL_30;
    }
    if ( v24 == 352233207 )
    {
      v25 = &StringLiteral_1537/*"99"*/;
LABEL_30:
      System_String__op_Equality(resCode, (System_String_o *)*v25, 0LL);
    }
  }
  return 0;
}


bool __fastcall ResponseData__checkError_41952396(ResponseData_o *this, const MethodInfo *method)
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
  __int64 v2; // x2
  ResponseData_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_Dictionary_object__object__o *fail; // x19

  v3 = this;
  if ( (byte_4B17B61 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__, v4, v5);
    this = (ResponseData_o *)sub_1BCA7E0(&StringLiteral_18786/*"detail"*/, v6, v7);
    byte_4B17B61 = 1;
  }
  fail = (System_Collections_Generic_Dictionary_object__object__o *)v3->fields.fail;
  if ( !fail )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         fail,
         (Il2CppObject *)StringLiteral_18786/*"detail"*/,
         (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    this = (ResponseData_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                               fail,
                               (Il2CppObject *)StringLiteral_18786/*"detail"*/,
                               (const MethodInfo_32651E0 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( this )
      return (System_String_o *)((__int64 (__fastcall *)(ResponseData_o *, void *))this->klass->vtable._3_ToString.method)(
                                  this,
                                  this->klass[1]._1.image);
LABEL_8:
    sub_1BCAA3C(this, method);
  }
  return 0LL;
}