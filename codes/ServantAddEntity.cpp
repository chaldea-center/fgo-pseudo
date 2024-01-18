void __fastcall ServantAddEntity___ctor(ServantAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4187B4E & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_4187B4E = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall ServantAddEntity__CreatePrimaryKey(ServantAddEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v6; // 0:x0.16

  if ( (byte_4187B4A & 1) == 0 )
  {
    sub_B2C35C(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4187B4A = 1;
  }
  v4 = *(_QWORD *)&this->fields.svtId.fields.currentCryptoKey;
  v3 = *(_QWORD *)&this->fields.svtId.fields.fakeValue;
  if ( (BYTE3(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  }
  *(_QWORD *)&v6.fields.currentCryptoKey = v4;
  *(_QWORD *)&v6.fields.fakeValue = v3;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_44758064(v6, 0LL);
}


System_String_o *__fastcall ServantAddEntity__GetOverwriteServantShortName(
        ServantAddEntity_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4187B4D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, method);
    sub_B2C35C(&string_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_21339/*"overWriteServantShortName"*/, v4);
    byte_4187B4D = 1;
  }
  value = 0LL;
  result = (System_String_o *)this->fields.script;
  if ( result )
  {
    if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
            (System_Xml_XmlQualifiedName_o *)StringLiteral_21339/*"overWriteServantShortName"*/,
            &value,
            (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      return 0LL;
    result = (System_String_o *)value;
    if ( value && (System_String_c *)value->klass != string_TypeInfo )
    {
      sub_B2C728(value);
      return 0LL;
    }
  }
  return result;
}


int32_t __fastcall ServantAddEntity__GetPresentDialogMessageId(ServantAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  ServantAddMaster_c *v4; // x0

  if ( (byte_4187B4C & 1) == 0 )
  {
    sub_B2C35C(&ServantAddMaster_TypeInfo, method);
    byte_4187B4C = 1;
  }
  v4 = ServantAddMaster_TypeInfo;
  if ( (BYTE3(ServantAddMaster_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ServantAddMaster_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ServantAddMaster_TypeInfo);
    v4 = ServantAddMaster_TypeInfo;
  }
  return ServantAddEntity__GetScript(this, v4->static_fields->PRESENT_DIALOG_MESSAGE_ID, 0, v2);
}


int32_t __fastcall ServantAddEntity__GetScript(
        ServantAddEntity_o *this,
        System_String_o *key,
        int32_t defaultValue,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v9; // x1
  ServantAddEntity_o *v11; // x0
  const MethodInfo *v12; // x1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4187B4B & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    sub_B2C35C(&long_TypeInfo, v7);
    byte_4187B4B = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          &value,
          (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defaultValue;
  }
  if ( !value )
    sub_B2C434(0LL, v9);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value);
  v11 = (ServantAddEntity_o *)sub_B2C728(value);
  return ServantAddEntity__GetPresentDialogMessageId(v11, v12);
}