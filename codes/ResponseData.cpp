void ResponseData___ctor(ResponseData_o *this, const MethodInfo *method)
{
  if ( (byte_4D3258E & 1) == 0 )
  {
    sub_1C93AD4(&ResponseData___TypeInfo);
    sub_1C93AD4(&ResponseData_TypeInfo);
    byte_4D3258E = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( ResponseData_TypeInfo->static_fields->_never )
    sub_1C93B7C(ResponseData___TypeInfo, 1);
}


bool ResponseData__checkError(ResponseData_o *this, System_String_o *resCode, const MethodInfo *method)
{
  uint32_t v4; // w0
  __int64 *v5; // x8

  if ( (byte_4D3258F & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1441/*"89"*/);
    sub_1C93AD4(&StringLiteral_1130/*"01"*/);
    sub_1C93AD4(&StringLiteral_1137/*"03"*/);
    sub_1C93AD4(&StringLiteral_1447/*"99"*/);
    sub_1C93AD4(&StringLiteral_1136/*"02"*/);
    sub_1C93AD4(&StringLiteral_1440/*"88"*/);
    sub_1C93AD4(&StringLiteral_1445/*"98"*/);
    sub_1C93AD4(&StringLiteral_1302/*"11"*/);
    sub_1C93AD4(&StringLiteral_1435/*"71"*/);
    sub_1C93AD4(&StringLiteral_1138/*"04"*/);
    sub_1C93AD4(&StringLiteral_1123/*"00"*/);
    byte_4D3258F = 1;
  }
  if ( !resCode )
    return 0;
  v4 = PrivateImplementationDetails___ComputeStringHash(resCode, 0);
  if ( v4 > 0x1EED6D94 )
  {
    if ( v4 > 0x21ED724D )
    {
      switch ( v4 )
      {
        case 0x90E5D245:
          v5 = &StringLiteral_1435/*"71"*/;
          goto LABEL_30;
        case 0x9901B55A:
          v5 = &StringLiteral_1441/*"89"*/;
          goto LABEL_30;
        case 0x9A01B6ED:
          v5 = &StringLiteral_1440/*"88"*/;
          goto LABEL_30;
      }
    }
    else
    {
      if ( v4 == 535654183 )
      {
        v5 = &StringLiteral_1136/*"02"*/;
        goto LABEL_30;
      }
      if ( v4 == 552431802 )
      {
        v5 = &StringLiteral_1130/*"01"*/;
        goto LABEL_30;
      }
      if ( v4 == 569209421 && System_String__op_Equality(resCode, (System_String_o *)StringLiteral_1123/*"00"*/, 0) )
        return 1;
    }
  }
  else if ( v4 > 0x14FEA6F7 )
  {
    switch ( v4 )
    {
      case 0x1CEB2BD7u:
        v5 = &StringLiteral_1302/*"11"*/;
        goto LABEL_30;
      case 0x1DED6C01u:
        v5 = &StringLiteral_1138/*"04"*/;
        goto LABEL_30;
      case 0x1EED6D94u:
        v5 = &StringLiteral_1137/*"03"*/;
        goto LABEL_30;
    }
  }
  else
  {
    if ( v4 == 335455588 )
    {
      v5 = &StringLiteral_1445/*"98"*/;
      goto LABEL_30;
    }
    if ( v4 == 352233207 )
    {
      v5 = &StringLiteral_1447/*"99"*/;
LABEL_30:
      System_String__op_Equality(resCode, (System_String_o *)*v5, 0);
    }
  }
  return 0;
}


bool ResponseData__checkError_44908744(ResponseData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return ResponseData__checkError(this, this->fields.resCode, v2);
}


void ResponseData__debugPrint(ResponseData_o *this, const MethodInfo *method)
{
  ;
}


System_String_o *ResponseData__getErrorMessage(ResponseData_o *this, const MethodInfo *method)
{
  ResponseData_o *v2; // x19
  System_Collections_Generic_Dictionary_object__object__o *fail; // x19

  v2 = this;
  if ( (byte_4D32590 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    this = (ResponseData_o *)sub_1C93AD4(&StringLiteral_18756/*"detail"*/);
    byte_4D32590 = 1;
  }
  fail = (System_Collections_Generic_Dictionary_object__object__o *)v2->fields.fail;
  if ( !fail )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         fail,
         (Il2CppObject *)StringLiteral_18756/*"detail"*/,
         (const MethodInfo_352ED9C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    this = (ResponseData_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                               fail,
                               (Il2CppObject *)StringLiteral_18756/*"detail"*/,
                               (const MethodInfo_352EB28 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( this )
      return ((System_String_o *(__fastcall *)(ResponseData_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
               this,
               this->klass->vtable._3_ToString.method);
LABEL_8:
    sub_1C93D2C(this, method);
  }
  return 0;
}