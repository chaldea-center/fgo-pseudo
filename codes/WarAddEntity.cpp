void __fastcall WarAddEntity___cctor(const MethodInfo *method)
{
  System_String_array **v1; // x2
  System_String_array **v2; // x3
  System_Boolean_array **v3; // x4
  System_Int32_array **v4; // x5
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  BattleServantConfConponent_o *static_fields; // x0
  System_Int32_array **v8; // x1
  struct WarAddEntity_StaticFields *v9; // x0
  System_Int32_array **v10; // x1
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  struct WarAddEntity_StaticFields *v17; // x0
  System_Int32_array **v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_42AE02C & 1) == 0 )
  {
    sub_B52984(&WarAddEntity_TypeInfo);
    sub_B52984(&StringLiteral_16814/*"bgChangeEffectTime"*/);
    sub_B52984(&StringLiteral_16815/*"bgChangeEffectType"*/);
    sub_B52984(&StringLiteral_18615/*"eventTowerId"*/);
    byte_42AE02C = 1;
  }
  static_fields = (BattleServantConfConponent_o *)WarAddEntity_TypeInfo->static_fields;
  v8 = (System_Int32_array **)StringLiteral_16815/*"bgChangeEffectType"*/;
  static_fields->klass = (BattleServantConfConponent_c *)StringLiteral_16815/*"bgChangeEffectType"*/;
  sub_B52920(static_fields, v8, v1, v2, v3, v4, v5, v6);
  v9 = WarAddEntity_TypeInfo->static_fields;
  v10 = (System_Int32_array **)StringLiteral_16814/*"bgChangeEffectTime"*/;
  v9->BG_CHANGE_TIME_KEY = (struct System_String_o *)StringLiteral_16814/*"bgChangeEffectTime"*/;
  sub_B52920((BattleServantConfConponent_o *)&v9->BG_CHANGE_TIME_KEY, v10, v11, v12, v13, v14, v15, v16);
  v17 = WarAddEntity_TypeInfo->static_fields;
  v18 = (System_Int32_array **)StringLiteral_18615/*"eventTowerId"*/;
  v17->EVENT_TOWER_ID = (struct System_String_o *)StringLiteral_18615/*"eventTowerId"*/;
  sub_B52920((BattleServantConfConponent_o *)&v17->EVENT_TOWER_ID, v18, v19, v20, v21, v22, v23, v24);
}


void __fastcall WarAddEntity___ctor(WarAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_42AE02B & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_string___ctor__);
    byte_42AE02B = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23E2224 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *__fastcall WarAddEntity__CreatePK(
        int32_t warId,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_42AE028 & 1) == 0 )
  {
    sub_B52984(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_42AE028 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           warId,
           type,
           priority,
           (const MethodInfo_1A4E378 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall WarAddEntity__CreatePrimaryKey(WarAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t type; // w20
  int32_t warId; // w21
  int32_t priority; // w19

  if ( (byte_42AE027 & 1) == 0 )
  {
    sub_B52984(&WarAddEntity_TypeInfo);
    byte_42AE027 = 1;
  }
  warId = this->fields.warId;
  type = this->fields.type;
  priority = this->fields.priority;
  if ( (BYTE3(WarAddEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !WarAddEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo);
  return WarAddEntity__CreatePK(warId, type, priority, v2);
}


int32_t __fastcall WarAddEntity__GetCondType(WarAddEntity_o *this, const MethodInfo *method)
{
  return this->fields.condType;
}


bool __fastcall WarAddEntity__HasBGChange(WarAddEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x19
  WarAddEntity_c *v4; // x0

  if ( (byte_42AE029 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_B52984(&WarAddEntity_TypeInfo);
    byte_42AE029 = 1;
  }
  script = this->fields.script;
  if ( !script )
    return 0;
  v4 = WarAddEntity_TypeInfo;
  if ( (BYTE3(WarAddEntity_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !WarAddEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo);
    v4 = WarAddEntity_TypeInfo;
  }
  return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
           (System_Xml_XmlQualifiedName_o *)v4->static_fields->BG_CHANGE_TYPE_KEY,
           (const MethodInfo_2F1BA74 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
}


int32_t __fastcall WarAddEntity__getScript(
        WarAddEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  int32_t result; // w0
  WarAddEntity_o *v10; // x0
  const MethodInfo *v11; // x1
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_42AE02A & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_B52984(&long_TypeInfo);
    byte_42AE02A = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)script,
          (System_Xml_XmlQualifiedName_o *)key,
          &value,
          (const MethodInfo_2F1D600 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defVal;
  }
  if ( !value )
    sub_B52A5C(0LL, v8);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value);
  v10 = (WarAddEntity_o *)sub_B52D50(value);
  WarAddEntity___ctor(v10, v11);
  return result;
}