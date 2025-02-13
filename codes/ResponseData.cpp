void __fastcall ResponseData___ctor(ResponseData_o *this, const MethodInfo *method)
{
  if ( (byte_4BDDF43 & 1) == 0 )
  {
    sub_1C21E38(&ResponseData___TypeInfo);
    sub_1C21E38(&ResponseData_TypeInfo);
    byte_4BDDF43 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( ResponseData_TypeInfo->static_fields->_never )
    sub_1C21EE0(ResponseData___TypeInfo, 1LL);
}


bool __fastcall ResponseData__checkError(ResponseData_o *this, System_String_o *resCode, const MethodInfo *method)
{
  uint32_t v4; // w0
  __int64 *v5; // x8

  if ( (byte_4BDDF44 & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1536/*"89"*/);
    sub_1C21E38(&StringLiteral_1229/*"01"*/);
    sub_1C21E38(&StringLiteral_1236/*"03"*/);
    sub_1C21E38(&StringLiteral_1542/*"99"*/);
    sub_1C21E38(&StringLiteral_1235/*"02"*/);
    sub_1C21E38(&StringLiteral_1535/*"88"*/);
    sub_1C21E38(&StringLiteral_1540/*"98"*/);
    sub_1C21E38(&StringLiteral_1403/*"11"*/);
    sub_1C21E38(&StringLiteral_1529/*"71"*/);
    sub_1C21E38(&StringLiteral_1237/*"04"*/);
    sub_1C21E38(&StringLiteral_1220/*"00"*/);
    byte_4BDDF44 = 1;
  }
  if ( !resCode )
    return 0;
  v4 = PrivateImplementationDetails___ComputeStringHash(resCode, 0LL);
  if ( v4 > 0x1EED6D94 )
  {
    if ( v4 > 0x21ED724D )
    {
      switch ( v4 )
      {
        case 0x90E5D245:
          v5 = &StringLiteral_1529/*"71"*/;
          goto LABEL_30;
        case 0x9901B55A:
          v5 = &StringLiteral_1536/*"89"*/;
          goto LABEL_30;
        case 0x9A01B6ED:
          v5 = &StringLiteral_1535/*"88"*/;
          goto LABEL_30;
      }
    }
    else
    {
      if ( v4 == 535654183 )
      {
        v5 = &StringLiteral_1235/*"02"*/;
        goto LABEL_30;
      }
      if ( v4 == 552431802 )
      {
        v5 = &StringLiteral_1229/*"01"*/;
        goto LABEL_30;
      }
      if ( v4 == 569209421 && System_String__op_Equality(resCode, (System_String_o *)StringLiteral_1220/*"00"*/, 0LL) )
        return 1;
    }
  }
  else if ( v4 > 0x14FEA6F7 )
  {
    switch ( v4 )
    {
      case 0x1CEB2BD7u:
        v5 = &StringLiteral_1403/*"11"*/;
        goto LABEL_30;
      case 0x1DED6C01u:
        v5 = &StringLiteral_1237/*"04"*/;
        goto LABEL_30;
      case 0x1EED6D94u:
        v5 = &StringLiteral_1236/*"03"*/;
        goto LABEL_30;
    }
  }
  else
  {
    if ( v4 == 335455588 )
    {
      v5 = &StringLiteral_1540/*"98"*/;
      goto LABEL_30;
    }
    if ( v4 == 352233207 )
    {
      v5 = &StringLiteral_1542/*"99"*/;
LABEL_30:
      System_String__op_Equality(resCode, (System_String_o *)*v5, 0LL);
    }
  }
  return 0;
}


bool __fastcall ResponseData__checkError_42505456(ResponseData_o *this, const MethodInfo *method)
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
  System_Collections_Generic_Dictionary_object__object__o *fail; // x19

  v2 = this;
  if ( (byte_4BDDF45 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    this = (ResponseData_o *)sub_1C21E38(&StringLiteral_18912/*"detail"*/);
    byte_4BDDF45 = 1;
  }
  fail = (System_Collections_Generic_Dictionary_object__object__o *)v2->fields.fail;
  if ( !fail )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         fail,
         (Il2CppObject *)StringLiteral_18912/*"detail"*/,
         (const MethodInfo_3316874 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    this = (ResponseData_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                               fail,
                               (Il2CppObject *)StringLiteral_18912/*"detail"*/,
                               (const MethodInfo_3316600 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( this )
      return (System_String_o *)((__int64 (__fastcall *)(ResponseData_o *, void *))this->klass->vtable._3_ToString.method)(
                                  this,
                                  this->klass[1]._1.image);
LABEL_8:
    sub_1C22094(this, method);
  }
  return 0LL;
}