void ResponseData___ctor(ResponseData_o *this, const MethodInfo *method)
{
  if ( (byte_59724AF & 1) == 0 )
  {
    sub_2213A60(&ResponseData___TypeInfo);
    sub_2213A60(&ResponseData_TypeInfo);
    byte_59724AF = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( ResponseData_TypeInfo->static_fields->_never )
    sub_2213B20(ResponseData___TypeInfo, 1);
}


bool ResponseData__checkError(ResponseData_o *this, System_String_o *resCode, const MethodInfo *method)
{
  uint32_t v4; // w0
  __int64 *v5; // x8

  if ( (byte_59724B0 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1523/*"89"*/);
    sub_2213A60(&StringLiteral_1212/*"01"*/);
    sub_2213A60(&StringLiteral_1219/*"03"*/);
    sub_2213A60(&StringLiteral_1529/*"99"*/);
    sub_2213A60(&StringLiteral_1218/*"02"*/);
    sub_2213A60(&StringLiteral_1522/*"88"*/);
    sub_2213A60(&StringLiteral_1527/*"98"*/);
    sub_2213A60(&StringLiteral_1384/*"11"*/);
    sub_2213A60(&StringLiteral_1517/*"71"*/);
    sub_2213A60(&StringLiteral_1220/*"04"*/);
    sub_2213A60(&StringLiteral_1205/*"00"*/);
    byte_59724B0 = 1;
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
          v5 = &StringLiteral_1517/*"71"*/;
          goto LABEL_30;
        case 0x9901B55A:
          v5 = &StringLiteral_1523/*"89"*/;
          goto LABEL_30;
        case 0x9A01B6ED:
          v5 = &StringLiteral_1522/*"88"*/;
          goto LABEL_30;
      }
    }
    else
    {
      if ( v4 == 535654183 )
      {
        v5 = &StringLiteral_1218/*"02"*/;
        goto LABEL_30;
      }
      if ( v4 == 552431802 )
      {
        v5 = &StringLiteral_1212/*"01"*/;
        goto LABEL_30;
      }
      if ( v4 == 569209421 && System_String__op_Equality(resCode, (System_String_o *)StringLiteral_1205/*"00"*/, 0) )
        return 1;
    }
  }
  else if ( v4 > 0x14FEA6F7 )
  {
    switch ( v4 )
    {
      case 0x1CEB2BD7u:
        v5 = &StringLiteral_1384/*"11"*/;
        goto LABEL_30;
      case 0x1DED6C01u:
        v5 = &StringLiteral_1220/*"04"*/;
        goto LABEL_30;
      case 0x1EED6D94u:
        v5 = &StringLiteral_1219/*"03"*/;
        goto LABEL_30;
    }
  }
  else
  {
    if ( v4 == 335455588 )
    {
      v5 = &StringLiteral_1527/*"98"*/;
      goto LABEL_30;
    }
    if ( v4 == 352233207 )
    {
      v5 = &StringLiteral_1529/*"99"*/;
LABEL_30:
      System_String__op_Equality(resCode, (System_String_o *)*v5, 0);
    }
  }
  return 0;
}


bool ResponseData__checkError_51257228(ResponseData_o *this, const MethodInfo *method)
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
  if ( (byte_59724B1 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    this = (ResponseData_o *)sub_2213A60(&StringLiteral_19438/*"detail"*/);
    byte_59724B1 = 1;
  }
  fail = (System_Collections_Generic_Dictionary_object__object__o *)v2->fields.fail;
  if ( !fail )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         fail,
         (Il2CppObject *)StringLiteral_19438/*"detail"*/,
         (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__) )
  {
    this = (ResponseData_o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                               fail,
                               (Il2CppObject *)StringLiteral_19438/*"detail"*/,
                               (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__object__get_Item__);
    if ( this )
      return ((System_String_o *(__fastcall *)(ResponseData_o *, const MethodInfo *))this->klass->vtable._3_ToString.methodPtr)(
               this,
               this->klass->vtable._3_ToString.method);
LABEL_8:
    sub_2213CDC(this, method);
  }
  return 0;
}