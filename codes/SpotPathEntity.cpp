void __fastcall SpotPathEntity___ctor(SpotPathEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4188BD7 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataEntityBase_int___ctor__, method);
    byte_4188BD7 = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_24E3F7C *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall SpotPathEntity__CreatePrimaryKey(SpotPathEntity_o *this, const MethodInfo *method)
{
  return this->fields.spotId;
}


int32_t __fastcall SpotPathEntity__GetMapGimmickEffectId(SpotPathEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4188BD6 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_20371/*"mapGimmickEffectId"*/, method);
    byte_4188BD6 = 1;
  }
  return SpotPathEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20371/*"mapGimmickEffectId"*/, 0, v2);
}


int32_t __fastcall SpotPathEntity__GetMapGimmickId(SpotPathEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4188BD5 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_20372/*"mapGimmickId"*/, method);
    byte_4188BD5 = 1;
  }
  return SpotPathEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20372/*"mapGimmickId"*/, 0, v2);
}


int32_t __fastcall SpotPathEntity__GetValueType(SpotPathEntity_o *this, const MethodInfo *method)
{
  return this->fields.valueType;
}


bool __fastcall SpotPathEntity__IsStopRaidDeadTime(SpotPathEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4188BD4 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_22331/*"stopRaidDeadTime"*/, method);
    byte_4188BD4 = 1;
  }
  return SpotPathEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22331/*"stopRaidDeadTime"*/, 0, v2) != 0;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall SpotPathEntity__getScriptIntParam(
        SpotPathEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w19
  Il2CppObject *ScriptObj; // x0
  SpotPathEntity_o *v9; // x0
  const MethodInfo *v10; // x1

  v4 = defVal;
  if ( (byte_4188BD3 & 1) == 0 )
  {
    sub_B2C35C(&long_TypeInfo, key);
    byte_4188BD3 = 1;
  }
  ScriptObj = SpotPathEntity__getScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj);
  v9 = (SpotPathEntity_o *)sub_B2C728(ScriptObj);
  return SpotPathEntity__IsStopRaidDeadTime(v9, v10);
}


Il2CppObject *__fastcall SpotPathEntity__getScriptObj(
        SpotPathEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4188BD2 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_4188BD2 = 1;
  }
  value = 0LL;
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0LL;
    if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)result,
           (System_Xml_XmlQualifiedName_o *)key,
           &value,
           (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      return (Il2CppObject *)value;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}