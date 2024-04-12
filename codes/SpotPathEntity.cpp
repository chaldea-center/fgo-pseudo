void __fastcall SpotPathEntity___ctor(SpotPathEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42B0A8C & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_int___ctor__);
    byte_42B0A8C = 1;
  }
  DataEntityBase_int____ctor(
    (DataEntityBase_int__o *)this,
    (const MethodInfo_23E2184 *)Method_DataEntityBase_int___ctor__);
}


int32_t __fastcall SpotPathEntity__CreatePrimaryKey(SpotPathEntity_o *this, const MethodInfo *method)
{
  return this->fields.spotId;
}


int32_t __fastcall SpotPathEntity__GetMapGimmickEffectId(SpotPathEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B0A8B & 1) == 0 )
  {
    sub_B52984(&StringLiteral_20526/*"mapGimmickEffectId"*/);
    byte_42B0A8B = 1;
  }
  return SpotPathEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20526/*"mapGimmickEffectId"*/, 0, v2);
}


int32_t __fastcall SpotPathEntity__GetMapGimmickId(SpotPathEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B0A8A & 1) == 0 )
  {
    sub_B52984(&StringLiteral_20527/*"mapGimmickId"*/);
    byte_42B0A8A = 1;
  }
  return SpotPathEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_20527/*"mapGimmickId"*/, 0, v2);
}


int32_t __fastcall SpotPathEntity__GetValueType(SpotPathEntity_o *this, const MethodInfo *method)
{
  return this->fields.valueType;
}


bool __fastcall SpotPathEntity__IsStopRaidDeadTime(SpotPathEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_42B0A89 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_22519/*"stopRaidDeadTime"*/);
    byte_42B0A89 = 1;
  }
  return SpotPathEntity__getScriptIntParam(this, (System_String_o *)StringLiteral_22519/*"stopRaidDeadTime"*/, 0, v2) != 0;
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
  if ( (byte_42B0A88 & 1) == 0 )
  {
    sub_B52984(&long_TypeInfo);
    byte_42B0A88 = 1;
  }
  ScriptObj = SpotPathEntity__getScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj);
  v9 = (SpotPathEntity_o *)sub_B52D50(ScriptObj);
  return SpotPathEntity__IsStopRaidDeadTime(v9, v10);
}


Il2CppObject *__fastcall SpotPathEntity__getScriptObj(
        SpotPathEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B0A87 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_42B0A87 = 1;
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
           (const MethodInfo_2F1D600 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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