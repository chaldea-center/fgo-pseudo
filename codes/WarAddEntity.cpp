void WarAddEntity___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct WarAddEntity_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  struct WarAddEntity_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  if ( (byte_4CEF771 & 1) == 0 )
  {
    sub_1C7BAE8(&WarAddEntity_TypeInfo);
    sub_1C7BAE8(&StringLiteral_17224/*"bgChangeEffectTime"*/);
    sub_1C7BAE8(&StringLiteral_17225/*"bgChangeEffectType"*/);
    sub_1C7BAE8(&StringLiteral_19298/*"eventTowerId"*/);
    byte_4CEF771 = 1;
  }
  WarAddEntity_TypeInfo->static_fields->BG_CHANGE_TYPE_KEY = (struct System_String_o *)StringLiteral_17225/*"bgChangeEffectType"*/;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)WarAddEntity_TypeInfo->static_fields,
    StringLiteral_17225/*"bgChangeEffectType"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_17224/*"bgChangeEffectTime"*/;
  static_fields = WarAddEntity_TypeInfo->static_fields;
  static_fields->BG_CHANGE_TIME_KEY = (struct System_String_o *)StringLiteral_17224/*"bgChangeEffectTime"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->BG_CHANGE_TIME_KEY, v7, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_19298/*"eventTowerId"*/;
  v16 = WarAddEntity_TypeInfo->static_fields;
  v16->EVENT_TOWER_ID = (struct System_String_o *)StringLiteral_19298/*"eventTowerId"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v16->EVENT_TOWER_ID, v15, v17, v18, v19, v20, v21, v22);
}


void WarAddEntity___ctor(WarAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF770 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_string___ctor__);
    byte_4CEF770 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_342BE90 *)Method_DataEntityBase_string___ctor__);
}


System_String_o *WarAddEntity__CreatePK(int32_t warId, int32_t type, int32_t priority, const MethodInfo *method)
{
  if ( (byte_4CEF76C & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DataEntityBase_CreateMultiplePK_int__int__int___);
    byte_4CEF76C = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int__int_(
           warId,
           type,
           priority,
           (const MethodInfo_316EA0C *)Method_DataEntityBase_CreateMultiplePK_int__int__int___);
}


System_String_o *WarAddEntity__CreatePrimaryKey(WarAddEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t type; // w20
  int32_t warId; // w21
  int32_t priority; // w19

  if ( (byte_4CEF76B & 1) == 0 )
  {
    sub_1C7BAE8(&WarAddEntity_TypeInfo);
    byte_4CEF76B = 1;
  }
  warId = this->fields.warId;
  type = this->fields.type;
  priority = this->fields.priority;
  if ( !WarAddEntity_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo);
  return WarAddEntity__CreatePK(warId, type, priority, v2);
}


System_String_o *WarAddEntity__GetBoardEffectName(WarAddEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4CEF76F & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_17104/*"bannerEffectName"*/);
    byte_4CEF76F = 1;
  }
  return EntityScriptUtil__GetStringValue(this->fields.script, (System_String_o *)StringLiteral_17104/*"bannerEffectName"*/, 0, 0);
}


int32_t WarAddEntity__GetCondType(WarAddEntity_o *this, const MethodInfo *method)
{
  return this->fields.condType;
}


bool WarAddEntity__HasBGChange(WarAddEntity_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x19
  WarAddEntity_c *v4; // x0

  if ( (byte_4CEF76D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
    sub_1C7BAE8(&WarAddEntity_TypeInfo);
    byte_4CEF76D = 1;
  }
  script = this->fields.script;
  if ( !script )
    return 0;
  v4 = WarAddEntity_TypeInfo;
  if ( !WarAddEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarAddEntity_TypeInfo);
    v4 = WarAddEntity_TypeInfo;
  }
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)script,
           (Il2CppObject *)v4->static_fields->BG_CHANGE_TYPE_KEY,
           (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__object__ContainsKey__);
}


int32_t WarAddEntity__getScript(WarAddEntity_o *this, System_String_o *key, int32_t defVal, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__object__o *script; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x3
  WarAddEntity_o *v12; // x0
  const MethodInfo *v13; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4CEF76E & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C7BAE8(&long_TypeInfo);
    byte_4CEF76E = 1;
  }
  value = 0;
  script = this->fields.script;
  if ( !script
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_34F3C98 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
  {
    return defVal;
  }
  if ( !value )
    sub_1C7BD40(0, v8);
  if ( value->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(value, long_TypeInfo, v9, v10);
  sub_1C7C0DC(value);
  return (unsigned int)WarAddEntity__GetBoardEffectName(v12, v13);
}