void EventBossStatusUiEntity___ctor(EventBossStatusUiEntity_o *this, const MethodInfo *method)
{
  if ( (byte_5938547 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_string___ctor__);
    byte_5938547 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_3EDADE8 *)Method_DataEntityBase_string___ctor__);
}


UnityEngine_Color_o EventBossStatusUiEntity__ConvertColorFromInt(
        EventBossStatusUiEntity_o *this,
        int32_t value,
        const MethodInfo *method)
{
  float v3; // s3
  unsigned __int64 v4; // d0
  float v5; // s2
  float v6; // s1
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v3 = 1.0;
  v4 = vdiv_f32(
         vcvt_f32_s32(vand_s8(vshl_u32(vdup_n_s32(value), (uint32x2_t)0xFFFFFFF8FFFFFFF0LL), (int8x8_t)0xFF000000FFLL)),
         vdup_n_s32(0x437F0000u)).n64_u64[0];
  v5 = (float)(unsigned __int8)value / 255.0;
  v6 = *((float *)&v4 + 1);
  result.fields.r = *(float *)&v4;
  result.fields.a = v3;
  result.fields.b = v5;
  result.fields.g = v6;
  return result;
}


UnityEngine_Color_o EventBossStatusUiEntity__ConvertColorFromStr(
        EventBossStatusUiEntity_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v4; // w0
  float v5; // s3
  unsigned __int64 v6; // d0
  float v7; // s2
  float v8; // s1
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_593853A & 1) == 0 )
  {
    sub_21FFC50(&System_Convert_TypeInfo);
    byte_593853A = 1;
  }
  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, value);
  v4 = System_Convert__ToInt32_76483112(value, 16, 0);
  v5 = 1.0;
  v6 = vdiv_f32(
         vcvt_f32_s32(vand_s8(vshl_u32(vdup_n_s32(v4), (uint32x2_t)0xFFFFFFF8FFFFFFF0LL), (int8x8_t)0xFF000000FFLL)),
         vdup_n_s32(0x437F0000u)).n64_u64[0];
  v7 = (float)(unsigned __int8)v4 / 255.0;
  v8 = *((float *)&v6 + 1);
  result.fields.r = *(float *)&v6;
  result.fields.a = v5;
  result.fields.b = v7;
  result.fields.g = v8;
  return result;
}


System_String_o *EventBossStatusUiEntity__CreatePK(int32_t eventId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_5938538 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_5938538 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           idx,
           (const MethodInfo_3820F68 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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

  if ( (byte_5938542 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_19071/*"count_format"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5938542 = 1;
  }
  v4 = (System_String_o *)StringLiteral_1/*""*/;
  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, (System_String_o *)StringLiteral_19071/*"count_format"*/, v2);
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

  if ( (byte_5938541 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20643/*"gauge_id"*/);
    byte_5938541 = 1;
  }
  return EventBossStatusUiEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_20643/*"gauge_id"*/, -1, v2);
}


int32_t EventBossStatusUiEntity__GetLastBattleIconId(EventBossStatusUiEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_5938546 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_22195/*"lastbattle_icon_id"*/);
    byte_5938546 = 1;
  }
  return EventBossStatusUiEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_22195/*"lastbattle_icon_id"*/, -1, v2);
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
  __int64 v6; // x2
  __int64 v7; // x3
  EventBossStatusUiEntity_o *v9; // x0
  System_String_o *v10; // x1
  const MethodInfo *v11; // x2

  v4 = defVal;
  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == *(Il2CppClass **)(qword_594C090 + 64) )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, qword_594C090, v6, v7);
  sub_220024C(ScriptObj, qword_594C090, v6, v7);
  return (unsigned int)EventBossStatusUiEntity__GetScriptObj(v9, v10, v11);
}


Il2CppObject *EventBossStatusUiEntity__GetScriptObj(
        EventBossStatusUiEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5938539 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_5938539 = 1;
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
           (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  if ( (byte_593853E & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24900/*"status_battle_color"*/);
    byte_593853E = 1;
  }
  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, (System_String_o *)StringLiteral_24900/*"status_battle_color"*/, v3);
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

  if ( (byte_5938543 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24901/*"status_height"*/);
    byte_5938543 = 1;
  }
  return EventBossStatusUiEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_24901/*"status_height"*/, -1, v2);
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
  if ( (byte_593853F & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24902/*"status_last_color"*/);
    byte_593853F = 1;
  }
  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, (System_String_o *)StringLiteral_24902/*"status_last_color"*/, v3);
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
  if ( (byte_5938540 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_24909/*"status_win_color"*/);
    byte_5938540 = 1;
  }
  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, (System_String_o *)StringLiteral_24909/*"status_win_color"*/, v3);
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
  if ( (byte_593853C & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25291/*"text_color"*/);
    byte_593853C = 1;
  }
  v9.fields.b = b;
  v9.fields.a = a;
  v9.fields.r = r;
  v9.fields.g = g;
  return EventBossStatusUiEntity__GetScriptColor(this, (System_String_o *)StringLiteral_25291/*"text_color"*/, v9, v3);
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
  if ( (byte_593853D & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25292/*"text_effect_color"*/);
    byte_593853D = 1;
  }
  v9.fields.b = b;
  v9.fields.a = a;
  v9.fields.r = r;
  v9.fields.g = g;
  return EventBossStatusUiEntity__GetScriptColor(this, (System_String_o *)StringLiteral_25292/*"text_effect_color"*/, v9, v3);
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
  if ( (byte_593853B & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_25294/*"text_effect_distance_x"*/);
    sub_21FFC50(&StringLiteral_25295/*"text_effect_distance_y"*/);
    byte_593853B = 1;
  }
  FloatValue = EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_25294/*"text_effect_distance_x"*/, x, 0);
  v7 = EntityScriptUtil__GetFloatValue(this->fields.script, (System_String_o *)StringLiteral_25295/*"text_effect_distance_y"*/, y, 0);
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

  if ( (byte_5938544 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20810/*"grid_pos"*/);
    byte_5938544 = 1;
  }
  v5 = (System_String_o *)StringLiteral_20810/*"grid_pos"*/;
  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
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
      sub_21FFECC(0, v10);
    if ( LODWORD(IntArray->max_length) < 2 )
      sub_21FFED4(IntArray);
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

  if ( (byte_5938545 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_20938/*"hp_bar_pos"*/);
    byte_5938545 = 1;
  }
  v5 = (System_String_o *)StringLiteral_20938/*"hp_bar_pos"*/;
  if ( !byte_5931940 )
  {
    sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
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
      sub_21FFECC(0, v10);
    if ( LODWORD(IntArray->max_length) < 2 )
      sub_21FFED4(IntArray);
    v11.n64_u64[0] = *(unsigned __int64 *)IntArray->m_Items;
    pos->fields.z = 0.0;
    *(float32x2_t *)&pos->fields.x = vcvt_f32_s32(v11);
  }
  return HasKey;
}