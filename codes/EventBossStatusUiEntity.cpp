void EventBossStatusUiEntity___ctor(EventBossStatusUiEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4E048F6 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataEntityBase_string___ctor__);
    byte_4E048F6 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_34E6B9C *)Method_DataEntityBase_string___ctor__);
}


UnityEngine_Color_o EventBossStatusUiEntity__ConvertColorFromInt(
        EventBossStatusUiEntity_o *this,
        int32_t value,
        const MethodInfo *method)
{
  float v3; // s0
  float v4; // s1
  float v5; // s2
  float v6; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = (float)BYTE2(value) / 255.0;
  v4 = (float)BYTE1(value) / 255.0;
  v5 = (float)(unsigned __int8)value / 255.0;
  v6 = 1.0;
  result.fields.a = v6;
  result.fields.b = v5;
  result.fields.g = v4;
  result.fields.r = v3;
  return result;
}


UnityEngine_Color_o EventBossStatusUiEntity__ConvertColorFromStr(
        EventBossStatusUiEntity_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v4; // w0
  float v5; // s0
  float v6; // s1
  float v7; // s2
  float v8; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4E048E9 & 1) == 0 )
  {
    sub_1CE6700(&System_Convert_TypeInfo);
    byte_4E048E9 = 1;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v4 = System_Convert__ToInt32_66218016(value, 16, 0);
  v5 = (float)BYTE2(v4) / 255.0;
  v6 = (float)BYTE1(v4) / 255.0;
  v7 = (float)(unsigned __int8)v4 / 255.0;
  v8 = 1.0;
  result.fields.a = v8;
  result.fields.b = v7;
  result.fields.g = v6;
  result.fields.r = v5;
  return result;
}


System_String_o *EventBossStatusUiEntity__CreatePK(int32_t eventId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4E048E6 & 1) == 0 )
  {
    sub_1CE6700(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_4E048E6 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           idx,
           (const MethodInfo_3202530 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_4E048F1 & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_18503/*"count_format"*/);
    sub_1CE6700(&StringLiteral_1/*""*/);
    byte_4E048F1 = 1;
  }
  v4 = (System_String_o *)StringLiteral_1/*""*/;
  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, (System_String_o *)StringLiteral_18503/*"count_format"*/, v2);
  if ( ScriptObj )
    return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))ScriptObj->klass->vtable[3].methodPtr)(
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

  if ( (byte_4E048F0 & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_20030/*"gauge_id"*/);
    byte_4E048F0 = 1;
  }
  return EventBossStatusUiEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_20030/*"gauge_id"*/, -1, v2);
}


int32_t EventBossStatusUiEntity__GetLastBattleIconId(EventBossStatusUiEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E048F5 & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_21502/*"lastbattle_icon_id"*/);
    byte_4E048F5 = 1;
  }
  return EventBossStatusUiEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_21502/*"lastbattle_icon_id"*/, -1, v2);
}


UnityEngine_Color_o EventBossStatusUiEntity__GetScriptColor(
        EventBossStatusUiEntity_o *this,
        System_String_o *key,
        UnityEngine_Color_o defaultColor,
        const MethodInfo *method)
{
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  Il2CppObject *ScriptObj; // x0
  EventBossStatusUiEntity_o *v9; // x0
  const MethodInfo *v10; // x2
  float v11; // s2
  float v12; // s3
  float v13; // s0
  float v14; // s1
  UnityEngine_Color_o v15; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = defaultColor.fields.a;
  b = defaultColor.fields.b;
  g = defaultColor.fields.g;
  r = defaultColor.fields.r;
  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, key, method);
  if ( ScriptObj )
  {
    v9 = (EventBossStatusUiEntity_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))ScriptObj->klass->vtable[3].methodPtr)(
                                        ScriptObj,
                                        ScriptObj->klass->vtable[3].method);
    v15 = EventBossStatusUiEntity__ConvertColorFromStr(v9, (System_String_o *)v9, v10);
    r = v15.fields.r;
    g = v15.fields.g;
    b = v15.fields.b;
    a = v15.fields.a;
  }
  v11 = b;
  v12 = a;
  v13 = r;
  v14 = g;
  result.fields.a = v12;
  result.fields.b = v11;
  result.fields.g = v14;
  result.fields.r = v13;
  return result;
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
  if ( (byte_4E048E7 & 1) == 0 )
  {
    sub_1CE6700(&long_TypeInfo);
    byte_4E048E7 = 1;
  }
  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v8, v9);
  sub_1CE6CF4(ScriptObj);
  return (unsigned int)EventBossStatusUiEntity__GetScriptObj(v11, v12, v13);
}


Il2CppObject *EventBossStatusUiEntity__GetScriptObj(
        EventBossStatusUiEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4E048E8 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4E048E8 = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_35B619C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
    return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))ScriptObj->klass->vtable[3].methodPtr)(
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
  float v12; // s2
  float v13; // s3
  float v14; // s0
  float v15; // s1
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = defaultColor.fields.a;
  b = defaultColor.fields.b;
  g = defaultColor.fields.g;
  r = defaultColor.fields.r;
  if ( (byte_4E048ED & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_24064/*"status_battle_color"*/);
    byte_4E048ED = 1;
  }
  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, (System_String_o *)StringLiteral_24064/*"status_battle_color"*/, v3);
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
  v12 = b;
  v13 = a;
  v14 = r;
  v15 = g;
  result.fields.a = v13;
  result.fields.b = v12;
  result.fields.g = v15;
  result.fields.r = v14;
  return result;
}


int32_t EventBossStatusUiEntity__GetStatusHeight(EventBossStatusUiEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4E048F2 & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_24065/*"status_height"*/);
    byte_4E048F2 = 1;
  }
  return EventBossStatusUiEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_24065/*"status_height"*/, -1, v2);
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
  float v12; // s2
  float v13; // s3
  float v14; // s0
  float v15; // s1
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = defaultColor.fields.a;
  b = defaultColor.fields.b;
  g = defaultColor.fields.g;
  r = defaultColor.fields.r;
  if ( (byte_4E048EE & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_24066/*"status_last_color"*/);
    byte_4E048EE = 1;
  }
  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, (System_String_o *)StringLiteral_24066/*"status_last_color"*/, v3);
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
  v12 = b;
  v13 = a;
  v14 = r;
  v15 = g;
  result.fields.a = v13;
  result.fields.b = v12;
  result.fields.g = v15;
  result.fields.r = v14;
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
  float v12; // s2
  float v13; // s3
  float v14; // s0
  float v15; // s1
  UnityEngine_Color_o v16; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = defaultColor.fields.a;
  b = defaultColor.fields.b;
  g = defaultColor.fields.g;
  r = defaultColor.fields.r;
  if ( (byte_4E048EF & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_24073/*"status_win_color"*/);
    byte_4E048EF = 1;
  }
  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, (System_String_o *)StringLiteral_24073/*"status_win_color"*/, v3);
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
  v12 = b;
  v13 = a;
  v14 = r;
  v15 = g;
  result.fields.a = v13;
  result.fields.b = v12;
  result.fields.g = v15;
  result.fields.r = v14;
  return result;
}


UnityEngine_Color_o EventBossStatusUiEntity__GetTextColor(
        EventBossStatusUiEntity_o *this,
        UnityEngine_Color_o defaultColor,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = defaultColor.fields.a;
  b = defaultColor.fields.b;
  g = defaultColor.fields.g;
  r = defaultColor.fields.r;
  if ( (byte_4E048EB & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_24437/*"text_color"*/);
    byte_4E048EB = 1;
  }
  v9.fields.b = b;
  v9.fields.a = a;
  v9.fields.r = r;
  v9.fields.g = g;
  return EventBossStatusUiEntity__GetScriptColor(this, (System_String_o *)StringLiteral_24437/*"text_color"*/, v9, v3);
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
  UnityEngine_Color_o v9; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = defaultColor.fields.a;
  b = defaultColor.fields.b;
  g = defaultColor.fields.g;
  r = defaultColor.fields.r;
  if ( (byte_4E048EC & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_24438/*"text_effect_color"*/);
    byte_4E048EC = 1;
  }
  v9.fields.b = b;
  v9.fields.a = a;
  v9.fields.r = r;
  v9.fields.g = g;
  return EventBossStatusUiEntity__GetScriptColor(this, (System_String_o *)StringLiteral_24438/*"text_effect_color"*/, v9, v3);
}


UnityEngine_Vector2_o EventBossStatusUiEntity__GetTextEffectDistance(
        EventBossStatusUiEntity_o *this,
        UnityEngine_Vector2_o defaultValue,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  float FloatValue; // s9
  float v7; // s1
  float v8; // s0
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  y = defaultValue.fields.y;
  x = defaultValue.fields.x;
  if ( (byte_4E048EA & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_24440/*"text_effect_distance_x"*/);
    sub_1CE6700(&StringLiteral_24441/*"text_effect_distance_y"*/);
    byte_4E048EA = 1;
  }
  FloatValue = EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_24440/*"text_effect_distance_x"*/, x, 0);
  v7 = EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_24441/*"text_effect_distance_y"*/, y, 0);
  v8 = FloatValue;
  result.fields.y = v7;
  result.fields.x = v8;
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

  if ( (byte_4E048F3 & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_20189/*"grid_pos"*/);
    byte_4E048F3 = 1;
  }
  v5 = (System_String_o *)StringLiteral_20189/*"grid_pos"*/;
  if ( !byte_4DFE0A9 )
  {
    sub_1CE6700(&UnityEngine_Vector3_TypeInfo);
    byte_4DFE0A9 = 1;
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
      sub_1CE6958(0, v10);
    if ( LODWORD(IntArray->max_length) < 2 )
      sub_1CE6960(IntArray);
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

  if ( (byte_4E048F4 & 1) == 0 )
  {
    sub_1CE6700(&StringLiteral_20303/*"hp_bar_pos"*/);
    byte_4E048F4 = 1;
  }
  v5 = (System_String_o *)StringLiteral_20303/*"hp_bar_pos"*/;
  if ( !byte_4DFE0A9 )
  {
    sub_1CE6700(&UnityEngine_Vector3_TypeInfo);
    byte_4DFE0A9 = 1;
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
      sub_1CE6958(0, v10);
    if ( LODWORD(IntArray->max_length) < 2 )
      sub_1CE6960(IntArray);
    v11.n64_u64[0] = *(unsigned __int64 *)IntArray->m_Items;
    pos->fields.z = 0.0;
    *(float32x2_t *)&pos->fields.x = vcvt_f32_s32(v11);
  }
  return HasKey;
}