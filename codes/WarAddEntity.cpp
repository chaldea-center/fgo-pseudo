void __fastcall WarAddEntity___cctor(const MethodInfo *method)
{
  int v1; // w1
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v18; // x1
  struct WarAddEntity_StaticFields *v19; // x0
  System_Int32_array **v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct WarAddEntity_StaticFields *v27; // x0
  System_Int32_array **v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  if ( (byte_42E68B8 & 1) == 0 )
  {
    sub_B5D5C4(&WarAddEntity_TypeInfo, v1, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_16905/*"bgChangeEffectTime"*/, v8, v9, v10);
    sub_B5D5C4(&StringLiteral_16906/*"bgChangeEffectType"*/, v11, v12, v13);
    sub_B5D5C4(&StringLiteral_18710/*"eventTowerId"*/, v14, v15, v16);
    byte_42E68B8 = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarAddEntity_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_16906/*"bgChangeEffectType"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_16906/*"bgChangeEffectType"*/;
  sub_B5D560(static_fields, v18, v2, v3, v4, v5, v6, v7);
  v19 = WarAddEntity_TypeInfo->static_fields;
  v20 = (System_Int32_array **)StringLiteral_16905/*"bgChangeEffectTime"*/;
  v19->BG_CHANGE_TIME_KEY = (struct System_String_o *)StringLiteral_16905/*"bgChangeEffectTime"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v19->BG_CHANGE_TIME_KEY, v20, v21, v22, v23, v24, v25, v26);
  v27 = WarAddEntity_TypeInfo->static_fields;
  v28 = (System_Int32_array **)StringLiteral_18710/*"eventTowerId"*/;
  v27->EVENT_TOWER_ID = (struct System_String_o *)StringLiteral_18710/*"eventTowerId"*/;
  sub_B5D560((BattleServantConfConponent_o *)&v27->EVENT_TOWER_ID, v28, v29, v30, v31, v32, v33, v34);
}


void __fastcall WarAddEntity___ctor(WarAddEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E68B7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42E68B7 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall WarAddEntity__CreatePK(
        int32_t warId,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_42E68B4 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, type, priority, method);
    byte_42E68B4 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           warId,
           type,
           priority,
           (const MethodInfo_1AE3440 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall WarAddEntity__CreatePrimaryKey(WarAddEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3
  int32_t type; // w20
  int32_t warId; // w21
  int32_t priority; // w19

  if ( (byte_42E68B3 & 1) == 0 )
  {
    sub_B5D5C4(&WarAddEntity_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E68B3 = 1;
  }
  warId = this->fields.warId;
  type = this->fields.type;
  priority = this->fields.priority;
  if ( (BYTE3(WarAddEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !WarAddEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo);
  return WarAddEntity__CreatePK(warId, type, priority, v3);
}


int32_t __fastcall WarAddEntity__GetCondType(WarAddEntity_o *this, const MethodInfo *method)
{
  return this->fields.condType;
}


bool __fastcall WarAddEntity__HasBGChange(WarAddEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x19
  WarAddEntity_c *v9; // x0

  if ( (byte_42E68B5 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&WarAddEntity_TypeInfo, v5, v6, v7);
    byte_42E68B5 = 1;
  }
  script = this->fields.script;
  if ( !script )
    return 0;
  v9 = WarAddEntity_TypeInfo;
  if ( (BYTE3(WarAddEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !WarAddEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo);
    v9 = WarAddEntity_TypeInfo;
  }
  return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)v9->static_fields->BG_CHANGE_TYPE_KEY,
           (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
}


int32_t __fastcall WarAddEntity__getScript(
        WarAddEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w19
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v11; // x1
  int32_t result; // w0
  WarAddEntity_o *v13; // x0
  const MethodInfo *v14; // x1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  v4 = defVal;
  if ( (byte_42E68B6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, (_DWORD)key, defVal, method);
    sub_B5D5C4(&long_TypeInfo, v7, v8, v9);
    byte_42E68B6 = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          &value,
          (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return v4;
  }
  if ( !value )
    sub_B5D69C(0LL, v11);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value);
  v13 = (WarAddEntity_o *)sub_B5D990(value);
  WarAddEntity___ctor(v13, v14);
  return result;
}