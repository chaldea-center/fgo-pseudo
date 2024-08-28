void __fastcall WarAddEntity___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w1
  struct WarAddEntity_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w1
  struct WarAddEntity_StaticFields *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A09B8C & 1) == 0 )
  {
    sub_1B686D4(&WarAddEntity_TypeInfo, v1);
    sub_1B686D4(&StringLiteral_17103/*"bgChangeEffectTime"*/, v4);
    sub_1B686D4(&StringLiteral_17104/*"bgChangeEffectType"*/, v5);
    sub_1B686D4(&StringLiteral_19073/*"eventTowerId"*/, v6);
    byte_4A09B8C = 1;
  }
  WarAddEntity_TypeInfo->static_fields->BG_CHANGE_TYPE_KEY = (struct System_String_o *)StringLiteral_17104/*"bgChangeEffectType"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)WarAddEntity_TypeInfo->static_fields, StringLiteral_17104/*"bgChangeEffectType"*/, v2, v3);
  v7 = StringLiteral_17103/*"bgChangeEffectTime"*/;
  static_fields = WarAddEntity_TypeInfo->static_fields;
  static_fields->BG_CHANGE_TIME_KEY = (struct System_String_o *)StringLiteral_17103/*"bgChangeEffectTime"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&static_fields->BG_CHANGE_TIME_KEY, v7, v9, v10);
  v11 = StringLiteral_19073/*"eventTowerId"*/;
  v12 = WarAddEntity_TypeInfo->static_fields;
  v12->EVENT_TOWER_ID = (struct System_String_o *)StringLiteral_19073/*"eventTowerId"*/;
  sub_1B68678((ServantStatusBattleListViewItem_o *)&v12->EVENT_TOWER_ID, v11, v13, v14);
}


void __fastcall WarAddEntity___ctor(WarAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4A09B8B & 1) == 0 )
  {
    sub_1B686D4(&Method_DataEntityBase_string___ctor__, method);
    byte_4A09B8B = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_30E4338 *)Method_DataEntityBase_string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall WarAddEntity__CreatePK(
        int32_t warId,
        int32_t type,
        int32_t priority,
        const MethodInfo *method)
{
  if ( (byte_4A09B88 & 1) == 0 )
  {
    sub_1B686D4(&Method_DataEntityBase_CreateMultiplePK_int__int__int___, *(_QWORD *)&type);
    byte_4A09B88 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           warId,
           type,
           priority,
           (const MethodInfo_2E48404 *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *__fastcall WarAddEntity__CreatePrimaryKey(WarAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t type; // w20
  int32_t warId; // w21
  int32_t priority; // w19

  if ( (byte_4A09B87 & 1) == 0 )
  {
    sub_1B686D4(&WarAddEntity_TypeInfo, method);
    byte_4A09B87 = 1;
  }
  warId = this->fields.warId;
  type = this->fields.type;
  priority = this->fields.priority;
  if ( !WarAddEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo);
  return WarAddEntity__CreatePK(warId, type, priority, v2);
}


int32_t __fastcall WarAddEntity__GetCondType(WarAddEntity_o *this, const MethodInfo *method)
{
  return this->fields.condType;
}


bool __fastcall WarAddEntity__HasBGChange(WarAddEntity_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x19
  WarAddEntity_c *v5; // x0

  if ( (byte_4A09B89 & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__, method);
    sub_1B686D4(&WarAddEntity_TypeInfo, v3);
    byte_4A09B89 = 1;
  }
  script = this->fields.script;
  if ( !script )
    return 0;
  v5 = WarAddEntity_TypeInfo;
  if ( !WarAddEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo);
    v5 = WarAddEntity_TypeInfo;
  }
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)v5->static_fields->BG_CHANGE_TYPE_KEY,
           (const MethodInfo_3189D5C *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
}


int32_t __fastcall WarAddEntity__getScript(
        WarAddEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  __int64 v7; // x1
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  int32_t result; // w0
  WarAddEntity_o *v13; // x0
  const MethodInfo *v14; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A09B8A & 1) == 0 )
  {
    sub_1B686D4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    sub_1B686D4(&long_TypeInfo, v7);
    byte_4A09B8A = 1;
  }
  value = 0LL;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_318B374 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defVal;
  }
  if ( !value )
    sub_1B68930(0LL, v9);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v10, v11);
  sub_1B68BF0(value);
  WarAddEntity___ctor(v13, v14);
  return result;
}