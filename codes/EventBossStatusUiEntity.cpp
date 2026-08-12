void EventBossStatusUiEntity___ctor(EventBossStatusUiEntity_o *this, const MethodInfo *method)
{
  if ( (byte_59706FA & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_string___ctor__);
    byte_59706FA = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3F0E590 *)Method_DataEntityBase_string___ctor__);
}


UnityEngine_Color_o EventBossStatusUiEntity__ConvertColorFromInt(
        EventBossStatusUiEntity_o *this,
        int32_t value,
        const MethodInfo *method)
{
  unsigned __int64 v4; // d0
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  result.fields.a = 1.0;
  v4 = vdiv_f32(
         vcvt_f32_s32(vand_s8(vshl_u32(vdup_n_s32(value), (uint32x2_t)0xFFFFFFF8FFFFFFF0LL), (int8x8_t)0xFF000000FFLL)),
         vdup_n_s32(0x437F0000u)).n64_u64[0];
  result.fields.b = (float)(unsigned __int8)value / 255.0;
  result.fields.g = *((float *)&v4 + 1);
  result.fields.r = *(float *)&v4;
  return result;
}


UnityEngine_Color_o EventBossStatusUiEntity__ConvertColorFromStr(
        EventBossStatusUiEntity_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v4; // w0
  unsigned __int64 v6; // d0
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_59706ED & 1) == 0 )
  {
    sub_2213A60(&System_Convert_TypeInfo);
    byte_59706ED = 1;
  }
  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, value);
  v4 = System_Convert__ToInt32_76696416(value, 16, 0);
  result.fields.a = 1.0;
  v6 = vdiv_f32(
         vcvt_f32_s32(vand_s8(vshl_u32(vdup_n_s32(v4), (uint32x2_t)0xFFFFFFF8FFFFFFF0LL), (int8x8_t)0xFF000000FFLL)),
         vdup_n_s32(0x437F0000u)).n64_u64[0];
  result.fields.b = (float)(unsigned __int8)v4 / 255.0;
  result.fields.g = *((float *)&v6 + 1);
  result.fields.r = *(float *)&v6;
  return result;
}


System_String_o *EventBossStatusUiEntity__CreatePK(int32_t eventId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_59706EB & 1) == 0 )
  {
    sub_2213A60(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_59706EB = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           idx,
           (const MethodInfo_3854430 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_59706F5 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_19112/*"count_format"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_59706F5 = 1;
  }
  v4 = (System_String_o *)StringLiteral_1/*""*/;
  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, (System_String_o *)StringLiteral_19112/*"count_format"*/, v2);
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

  if ( (byte_59706F4 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20684/*"gauge_id"*/);
    byte_59706F4 = 1;
  }
  return EventBossStatusUiEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_20684/*"gauge_id"*/, -1, v2);
}


int32_t EventBossStatusUiEntity__GetLastBattleIconId(EventBossStatusUiEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_59706F9 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_22238/*"lastbattle_icon_id"*/);
    byte_59706F9 = 1;
  }
  return EventBossStatusUiEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_22238/*"lastbattle_icon_id"*/, -1, v2);
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
  UnityEngine_Color_o v15; // 0:kr00_16.16
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
  result.fields.b = b;
  result.fields.a = a;
  result.fields.r = r;
  result.fields.g = g;
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
  __int64 v6; // x2
  __int64 v7; // x3
  EventBossStatusUiEntity_o *v9; // x0
  System_String_o *v10; // x1
  const MethodInfo *v11; // x2

  v4 = defVal;
  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == *(Il2CppClass **)(qword_5984368 + 64) )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, qword_5984368, v6, v7);
  sub_221405C(ScriptObj, qword_5984368, v6, v7);
  return (unsigned int)EventBossStatusUiEntity__GetScriptObj(v9, v10, v11);
}


Il2CppObject *EventBossStatusUiEntity__GetScriptObj(
        EventBossStatusUiEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_59706EC & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_59706EC = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  value = 0;
  if ( result )
  {
    value = 0;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  if ( (byte_59706F1 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24948/*"status_battle_color"*/);
    byte_59706F1 = 1;
  }
  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, (System_String_o *)StringLiteral_24948/*"status_battle_color"*/, v3);
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

  if ( (byte_59706F6 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24949/*"status_height"*/);
    byte_59706F6 = 1;
  }
  return EventBossStatusUiEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_24949/*"status_height"*/, -1, v2);
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
  if ( (byte_59706F2 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24950/*"status_last_color"*/);
    byte_59706F2 = 1;
  }
  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, (System_String_o *)StringLiteral_24950/*"status_last_color"*/, v3);
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
  if ( (byte_59706F3 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_24957/*"status_win_color"*/);
    byte_59706F3 = 1;
  }
  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, (System_String_o *)StringLiteral_24957/*"status_win_color"*/, v3);
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
  if ( (byte_59706EF & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_25339/*"text_color"*/);
    byte_59706EF = 1;
  }
  v9.fields.b = b;
  v9.fields.a = a;
  v9.fields.r = r;
  v9.fields.g = g;
  return EventBossStatusUiEntity__GetScriptColor(this, (System_String_o *)StringLiteral_25339/*"text_color"*/, v9, v3);
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
  if ( (byte_59706F0 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_25340/*"text_effect_color"*/);
    byte_59706F0 = 1;
  }
  v9.fields.b = b;
  v9.fields.a = a;
  v9.fields.r = r;
  v9.fields.g = g;
  return EventBossStatusUiEntity__GetScriptColor(this, (System_String_o *)StringLiteral_25340/*"text_effect_color"*/, v9, v3);
}


UnityEngine_Vector2_o EventBossStatusUiEntity__GetTextEffectDistance(
        EventBossStatusUiEntity_o *this,
        UnityEngine_Vector2_o defaultValue,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  float FloatValue; // s9
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  y = defaultValue.fields.y;
  x = defaultValue.fields.x;
  if ( (byte_59706EE & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_25342/*"text_effect_distance_x"*/);
    sub_2213A60(&StringLiteral_25343/*"text_effect_distance_y"*/);
    byte_59706EE = 1;
  }
  FloatValue = EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_25342/*"text_effect_distance_x"*/, x, 0);
  result.fields.y = EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_25343/*"text_effect_distance_y"*/, y, 0);
  result.fields.x = FloatValue;
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

  if ( (byte_59706F7 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20851/*"grid_pos"*/);
    byte_59706F7 = 1;
  }
  v5 = (System_String_o *)StringLiteral_20851/*"grid_pos"*/;
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
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
      sub_2213CDC(0, v10);
    if ( LODWORD(IntArray->max_length) < 2 )
      sub_2213CE4(IntArray);
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

  if ( (byte_59706F8 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_20979/*"hp_bar_pos"*/);
    byte_59706F8 = 1;
  }
  v5 = (System_String_o *)StringLiteral_20979/*"hp_bar_pos"*/;
  if ( !byte_5969AE0 )
  {
    sub_2213A60(&UnityEngine_Vector3_TypeInfo);
    byte_5969AE0 = 1;
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
      sub_2213CDC(0, v10);
    if ( LODWORD(IntArray->max_length) < 2 )
      sub_2213CE4(IntArray);
    v11.n64_u64[0] = *(unsigned __int64 *)IntArray->m_Items;
    pos->fields.z = 0.0;
    *(float32x2_t *)&pos->fields.x = vcvt_f32_s32(v11);
  }
  return HasKey;
}