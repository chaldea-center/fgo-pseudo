void EventBossStatusUiEntity___ctor(EventBossStatusUiEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4D308BE & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_string___ctor__);
    byte_4D308BE = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3460BB4 *)Method_DataEntityBase_string___ctor__);
}


UnityEngine_Color_o EventBossStatusUiEntity__ConvertColorFromInt(
        EventBossStatusUiEntity_o *this,
        int32_t value,
        const MethodInfo *method)
{
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  result.fields.r = (float)BYTE2(value) / 255.0;
  result.fields.g = (float)BYTE1(value) / 255.0;
  result.fields.b = (float)(unsigned __int8)value / 255.0;
  result.fields.a = 1.0;
  return result;
}


UnityEngine_Color_o EventBossStatusUiEntity__ConvertColorFromStr(
        EventBossStatusUiEntity_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v4; // w0
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4D308B3 & 1) == 0 )
  {
    sub_1C93AD4(&System_Convert_TypeInfo);
    byte_4D308B3 = 1;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v4 = System_Convert__ToInt32_65520912(value, 16, 0);
  result.fields.r = (float)BYTE2(v4) / 255.0;
  result.fields.g = (float)BYTE1(v4) / 255.0;
  result.fields.b = (float)(unsigned __int8)v4 / 255.0;
  result.fields.a = 1.0;
  return result;
}


System_String_o *EventBossStatusUiEntity__CreatePK(int32_t eventId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4D308B0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4D308B0 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           idx,
           (const MethodInfo_31A2BC4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *EventBossStatusUiEntity__CreatePrimaryKey(EventBossStatusUiEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventBossStatusUiEntity__CreatePK(this->fields.eventId, this->fields.idx, v2);
}


System_String_o *EventBossStatusUiEntity__GetCountFormat(EventBossStatusUiEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *v4; // x20
  Il2CppObject *ScriptObj; // x0

  if ( (byte_4D308B9 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_18443/*"count_format"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D308B9 = 1;
  }
  v4 = (System_String_o *)StringLiteral_1/*""*/;
  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, (System_String_o *)StringLiteral_18443/*"count_format"*/, v2);
  if ( ScriptObj )
    return ((System_String_o *(__fastcall *)(Il2CppObject *, const MethodInfo *))ScriptObj->klass->vtable[3].methodPtr)(
             ScriptObj,
             ScriptObj->klass->vtable[3].method);
  else
    return v4;
}


int32_t EventBossStatusUiEntity__GetEventId(EventBossStatusUiEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventId;
}


int32_t EventBossStatusUiEntity__GetGaugeId(EventBossStatusUiEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D308B8 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_19964/*"gauge_id"*/);
    byte_4D308B8 = 1;
  }
  return EventBossStatusUiEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_19964/*"gauge_id"*/, -1, v2);
}


int32_t EventBossStatusUiEntity__GetLastBattleIconId(EventBossStatusUiEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D308BD & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_21432/*"lastbattle_icon_id"*/);
    byte_4D308BD = 1;
  }
  return EventBossStatusUiEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_21432/*"lastbattle_icon_id"*/, -1, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t EventBossStatusUiEntity__GetScriptIntParam(
        EventBossStatusUiEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  int32_t v4; // w19
  Il2CppObject *ScriptObj; // x0
  __int64 v8; // x2
  __int64 v9; // x3
  EventBossStatusUiEntity_o *v11; // x0
  System_String_o *v12; // x1
  const MethodInfo *v13; // x2

  v4 = defVal;
  if ( (byte_4D308B1 & 1) == 0 )
  {
    sub_1C93AD4(&long_TypeInfo);
    byte_4D308B1 = 1;
  }
  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v8, v9);
  sub_1C940C8(ScriptObj);
  return (unsigned int)EventBossStatusUiEntity__GetScriptObj(v11, v12, v13);
}


Il2CppObject *EventBossStatusUiEntity__GetScriptObj(
        EventBossStatusUiEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D308B2 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4D308B2 = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_35303B4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      return value;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


System_String_o *EventBossStatusUiEntity__GetScriptString(
        EventBossStatusUiEntity_o *this,
        System_String_o *key,
        System_String_o *defStr,
        const MethodInfo *method)
{
  Il2CppObject *ScriptObj; // x0

  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, key, (const MethodInfo *)defStr);
  if ( ScriptObj )
    return ((System_String_o *(__fastcall *)(Il2CppObject *, const MethodInfo *))ScriptObj->klass->vtable[3].methodPtr)(
             ScriptObj,
             ScriptObj->klass->vtable[3].method);
  else
    return defStr;
}


UnityEngine_Color_o EventBossStatusUiEntity__GetStatusBattleColor(
        EventBossStatusUiEntity_o *this,
        UnityEngine_Color_o defaultColor,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  Il2CppObject *ScriptObj; // x0
  EventBossStatusUiEntity_o *v10; // x0
  const MethodInfo *v11; // x2
  UnityEngine_Color_o v16; // 0:kr00_16.16
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = defaultColor.fields.a;
  b = defaultColor.fields.b;
  g = defaultColor.fields.g;
  r = defaultColor.fields.r;
  if ( (byte_4D308B5 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_23981/*"status_battle_color"*/);
    byte_4D308B5 = 1;
  }
  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, (System_String_o *)StringLiteral_23981/*"status_battle_color"*/, v3);
  if ( ScriptObj )
  {
    v10 = (EventBossStatusUiEntity_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))ScriptObj->klass->vtable[3].methodPtr)(
                                         ScriptObj,
                                         ScriptObj->klass->vtable[3].method);
    v16 = EventBossStatusUiEntity__ConvertColorFromStr(v10, (System_String_o *)v10, v11);
    r = v16.fields.r;
    g = v16.fields.g;
    b = v16.fields.b;
    a = v16.fields.a;
  }
  result.fields.b = b;
  result.fields.a = a;
  result.fields.r = r;
  result.fields.g = g;
  return result;
}


int32_t EventBossStatusUiEntity__GetStatusHeight(EventBossStatusUiEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4D308BA & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_23982/*"status_height"*/);
    byte_4D308BA = 1;
  }
  return EventBossStatusUiEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_23982/*"status_height"*/, -1, v2);
}


UnityEngine_Color_o EventBossStatusUiEntity__GetStatusLastColor(
        EventBossStatusUiEntity_o *this,
        UnityEngine_Color_o defaultColor,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  Il2CppObject *ScriptObj; // x0
  EventBossStatusUiEntity_o *v10; // x0
  const MethodInfo *v11; // x2
  UnityEngine_Color_o v16; // 0:kr00_16.16
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = defaultColor.fields.a;
  b = defaultColor.fields.b;
  g = defaultColor.fields.g;
  r = defaultColor.fields.r;
  if ( (byte_4D308B6 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_23983/*"status_last_color"*/);
    byte_4D308B6 = 1;
  }
  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, (System_String_o *)StringLiteral_23983/*"status_last_color"*/, v3);
  if ( ScriptObj )
  {
    v10 = (EventBossStatusUiEntity_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))ScriptObj->klass->vtable[3].methodPtr)(
                                         ScriptObj,
                                         ScriptObj->klass->vtable[3].method);
    v16 = EventBossStatusUiEntity__ConvertColorFromStr(v10, (System_String_o *)v10, v11);
    r = v16.fields.r;
    g = v16.fields.g;
    b = v16.fields.b;
    a = v16.fields.a;
  }
  result.fields.b = b;
  result.fields.a = a;
  result.fields.r = r;
  result.fields.g = g;
  return result;
}


UnityEngine_Color_o EventBossStatusUiEntity__GetStatusWinColor(
        EventBossStatusUiEntity_o *this,
        UnityEngine_Color_o defaultColor,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  Il2CppObject *ScriptObj; // x0
  EventBossStatusUiEntity_o *v10; // x0
  const MethodInfo *v11; // x2
  UnityEngine_Color_o v16; // 0:kr00_16.16
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = defaultColor.fields.a;
  b = defaultColor.fields.b;
  g = defaultColor.fields.g;
  r = defaultColor.fields.r;
  if ( (byte_4D308B7 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_23990/*"status_win_color"*/);
    byte_4D308B7 = 1;
  }
  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, (System_String_o *)StringLiteral_23990/*"status_win_color"*/, v3);
  if ( ScriptObj )
  {
    v10 = (EventBossStatusUiEntity_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))ScriptObj->klass->vtable[3].methodPtr)(
                                         ScriptObj,
                                         ScriptObj->klass->vtable[3].method);
    v16 = EventBossStatusUiEntity__ConvertColorFromStr(v10, (System_String_o *)v10, v11);
    r = v16.fields.r;
    g = v16.fields.g;
    b = v16.fields.b;
    a = v16.fields.a;
  }
  result.fields.b = b;
  result.fields.a = a;
  result.fields.r = r;
  result.fields.g = g;
  return result;
}


UnityEngine_Color_o EventBossStatusUiEntity__GetTextEffectColor(
        EventBossStatusUiEntity_o *this,
        UnityEngine_Color_o defaultColor,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  Il2CppObject *ScriptObj; // x0
  EventBossStatusUiEntity_o *v10; // x0
  const MethodInfo *v11; // x2
  UnityEngine_Color_o v16; // 0:kr00_16.16
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = defaultColor.fields.a;
  b = defaultColor.fields.b;
  g = defaultColor.fields.g;
  r = defaultColor.fields.r;
  if ( (byte_4D308B4 & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_24354/*"text_effect_color"*/);
    byte_4D308B4 = 1;
  }
  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, (System_String_o *)StringLiteral_24354/*"text_effect_color"*/, v3);
  if ( ScriptObj )
  {
    v10 = (EventBossStatusUiEntity_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))ScriptObj->klass->vtable[3].methodPtr)(
                                         ScriptObj,
                                         ScriptObj->klass->vtable[3].method);
    v16 = EventBossStatusUiEntity__ConvertColorFromStr(v10, (System_String_o *)v10, v11);
    r = v16.fields.r;
    g = v16.fields.g;
    b = v16.fields.b;
    a = v16.fields.a;
  }
  result.fields.b = b;
  result.fields.a = a;
  result.fields.r = r;
  result.fields.g = g;
  return result;
}


bool EventBossStatusUiEntity__TryGetGridPos(
        EventBossStatusUiEntity_o *this,
        UnityEngine_Vector3_o *pos,
        const MethodInfo *method)
{
  System_String_o *v5; // x21
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  bool HasKey; // w22
  System_Int32_array *IntArray; // x0
  __int64 v10; // x1
  int32x2_t v11; // d0

  if ( (byte_4D308BB & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_20123/*"grid_pos"*/);
    byte_4D308BB = 1;
  }
  v5 = (System_String_o *)StringLiteral_20123/*"grid_pos"*/;
  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&pos->fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  pos->fields.z = z;
  HasKey = EntityScriptUtil__ScriptHasKey(this->fields.script, v5, 0);
  if ( HasKey )
  {
    IntArray = EntityScriptUtil__GetIntArray(this->fields.script, v5, 0, 0);
    if ( !IntArray )
      sub_1C93D2C(0, v10);
    if ( LODWORD(IntArray->max_length) < 2 )
      sub_1C93D34(IntArray);
    v11.n64_u64[0] = *(unsigned __int64 *)IntArray->m_Items;
    pos->fields.z = 0.0;
    *(float32x2_t *)&pos->fields.x = vcvt_f32_s32(v11);
  }
  return HasKey;
}


bool EventBossStatusUiEntity__TryGetHpBarPos(
        EventBossStatusUiEntity_o *this,
        UnityEngine_Vector3_o *pos,
        const MethodInfo *method)
{
  System_String_o *v5; // x21
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  bool HasKey; // w22
  System_Int32_array *IntArray; // x0
  __int64 v10; // x1
  int32x2_t v11; // d0

  if ( (byte_4D308BC & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_20236/*"hp_bar_pos"*/);
    byte_4D308BC = 1;
  }
  v5 = (System_String_o *)StringLiteral_20236/*"hp_bar_pos"*/;
  if ( !byte_4D2A139 )
  {
    sub_1C93AD4(&UnityEngine_Vector3_TypeInfo);
    byte_4D2A139 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&pos->fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  pos->fields.z = z;
  HasKey = EntityScriptUtil__ScriptHasKey(this->fields.script, v5, 0);
  if ( HasKey )
  {
    IntArray = EntityScriptUtil__GetIntArray(this->fields.script, v5, 0, 0);
    if ( !IntArray )
      sub_1C93D2C(0, v10);
    if ( LODWORD(IntArray->max_length) < 2 )
      sub_1C93D34(IntArray);
    v11.n64_u64[0] = *(unsigned __int64 *)IntArray->m_Items;
    pos->fields.z = 0.0;
    *(float32x2_t *)&pos->fields.x = vcvt_f32_s32(v11);
  }
  return HasKey;
}