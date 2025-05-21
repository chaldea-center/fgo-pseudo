void __fastcall EventBossStatusUiEntity___ctor(EventBossStatusUiEntity_o *this, const MethodInfo *method)
{
  if ( (byte_4B44947 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_string___ctor__, method);
    byte_4B44947 = 1;
  }
  DataEntityBase_object____ctor(
    (DataEntityBase_PKType__o *)this,
    (const MethodInfo_32DF9D0 *)Method_DataEntityBase_string___ctor__);
}


UnityEngine_Color_o __fastcall EventBossStatusUiEntity__ConvertColorFromInt(
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


UnityEngine_Color_o __fastcall EventBossStatusUiEntity__ConvertColorFromStr(
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

  if ( (byte_4B4493C & 1) == 0 )
  {
    sub_1BDB878(&System_Convert_TypeInfo, value);
    byte_4B4493C = 1;
  }
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  v4 = System_Convert__ToInt32_63655352(value, 16, 0LL);
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


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall EventBossStatusUiEntity__CreatePK(int32_t eventId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_4B44938 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataEntityBase_CreateMultiplePK_int__int___, *(_QWORD *)&idx);
    byte_4B44938 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           idx,
           (const MethodInfo_3031AE4 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
}


System_String_o *__fastcall EventBossStatusUiEntity__CreatePrimaryKey(
        EventBossStatusUiEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  return EventBossStatusUiEntity__CreatePK(this->fields.eventId, this->fields.idx, v2);
}


System_String_o *__fastcall EventBossStatusUiEntity__GetCountFormat(
        EventBossStatusUiEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  System_String_o *v5; // x20
  Il2CppObject *ScriptObj; // x0

  if ( (byte_4B44942 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_18294/*"count_format"*/, method);
    sub_1BDB878(&StringLiteral_1/*""*/, v4);
    byte_4B44942 = 1;
  }
  v5 = (System_String_o *)StringLiteral_1/*""*/;
  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, (System_String_o *)StringLiteral_18294/*"count_format"*/, v2);
  if ( ScriptObj )
    return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))ScriptObj->klass->vtable[3].method)(
                                ScriptObj,
                                ScriptObj->klass->vtable[4].methodPtr);
  else
    return v5;
}


int32_t __fastcall EventBossStatusUiEntity__GetEventId(EventBossStatusUiEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventId;
}


int32_t __fastcall EventBossStatusUiEntity__GetGaugeId(EventBossStatusUiEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B44941 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_19760/*"gauge_id"*/, method);
    byte_4B44941 = 1;
  }
  return EventBossStatusUiEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_19760/*"gauge_id"*/, -1, v2);
}


int32_t __fastcall EventBossStatusUiEntity__GetIndex(EventBossStatusUiEntity_o *this, const MethodInfo *method)
{
  return this->fields.idx;
}


int32_t __fastcall EventBossStatusUiEntity__GetLastBattleIconId(
        EventBossStatusUiEntity_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B44946 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_21184/*"lastbattle_icon_id"*/, method);
    byte_4B44946 = 1;
  }
  return EventBossStatusUiEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_21184/*"lastbattle_icon_id"*/, -1, v2);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventBossStatusUiEntity__GetScriptIntParam(
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
  if ( (byte_4B44939 & 1) == 0 )
  {
    sub_1BDB878(&long_TypeInfo, key);
    byte_4B44939 = 1;
  }
  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj, long_TypeInfo, v8, v9);
  sub_1BDBD94(ScriptObj);
  return (unsigned int)EventBossStatusUiEntity__GetScriptObj(v11, v12, v13);
}


Il2CppObject *__fastcall EventBossStatusUiEntity__GetScriptObj(
        EventBossStatusUiEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B4493B & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, key);
    byte_4B4493B = 1;
  }
  result = (Il2CppObject *)this->fields.script;
  if ( result )
  {
    value = 0LL;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)result,
           (Il2CppObject *)key,
           &value,
           (const MethodInfo_33A1A3C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      return value;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}


System_String_o *__fastcall EventBossStatusUiEntity__GetScriptString(
        EventBossStatusUiEntity_o *this,
        System_String_o *key,
        System_String_o *defStr,
        const MethodInfo *method)
{
  Il2CppObject *ScriptObj; // x0

  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, key, (const MethodInfo *)defStr);
  if ( ScriptObj )
    return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))ScriptObj->klass->vtable[3].method)(
                                ScriptObj,
                                ScriptObj->klass->vtable[4].methodPtr);
  else
    return defStr;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall EventBossStatusUiEntity__GetScriptStringParam(
        EventBossStatusUiEntity_o *this,
        System_String_o *key,
        int32_t defVal,
        const MethodInfo *method)
{
  Il2CppObject *ScriptObj; // x0
  System_String_o *v8; // x19

  if ( (byte_4B4493A & 1) == 0 )
  {
    sub_1BDB878(&System_Convert_TypeInfo, key);
    byte_4B4493A = 1;
  }
  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return defVal;
  v8 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))ScriptObj->klass->vtable[3].method)(
                            ScriptObj,
                            ScriptObj->klass->vtable[4].methodPtr);
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToInt32_63655352(v8, 16, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o __fastcall EventBossStatusUiEntity__GetStatusBattleColor(
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
  if ( (byte_4B4493E & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_23718/*"status_battle_color"*/, method);
    byte_4B4493E = 1;
  }
  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, (System_String_o *)StringLiteral_23718/*"status_battle_color"*/, v3);
  if ( ScriptObj )
  {
    v10 = (EventBossStatusUiEntity_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))ScriptObj->klass->vtable[3].method)(
                                         ScriptObj,
                                         ScriptObj->klass->vtable[4].methodPtr);
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


int32_t __fastcall EventBossStatusUiEntity__GetStatusHeight(EventBossStatusUiEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4B44943 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_23719/*"status_height"*/, method);
    byte_4B44943 = 1;
  }
  return EventBossStatusUiEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_23719/*"status_height"*/, -1, v2);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o __fastcall EventBossStatusUiEntity__GetStatusLastColor(
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
  if ( (byte_4B4493F & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_23720/*"status_last_color"*/, method);
    byte_4B4493F = 1;
  }
  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, (System_String_o *)StringLiteral_23720/*"status_last_color"*/, v3);
  if ( ScriptObj )
  {
    v10 = (EventBossStatusUiEntity_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))ScriptObj->klass->vtable[3].method)(
                                         ScriptObj,
                                         ScriptObj->klass->vtable[4].methodPtr);
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


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o __fastcall EventBossStatusUiEntity__GetStatusWinColor(
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
  if ( (byte_4B44940 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_23727/*"status_win_color"*/, method);
    byte_4B44940 = 1;
  }
  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, (System_String_o *)StringLiteral_23727/*"status_win_color"*/, v3);
  if ( ScriptObj )
  {
    v10 = (EventBossStatusUiEntity_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))ScriptObj->klass->vtable[3].method)(
                                         ScriptObj,
                                         ScriptObj->klass->vtable[4].methodPtr);
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


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o __fastcall EventBossStatusUiEntity__GetTextEffectColor(
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
  if ( (byte_4B4493D & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_24098/*"text_effect_color"*/, method);
    byte_4B4493D = 1;
  }
  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, (System_String_o *)StringLiteral_24098/*"text_effect_color"*/, v3);
  if ( ScriptObj )
  {
    v10 = (EventBossStatusUiEntity_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))ScriptObj->klass->vtable[3].method)(
                                         ScriptObj,
                                         ScriptObj->klass->vtable[4].methodPtr);
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


bool __fastcall EventBossStatusUiEntity__TryGetGridPos(
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
  __int64 v11; // x2
  int32x2_t v12; // d0

  if ( (byte_4B44944 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_19923/*"grid_pos"*/, pos);
    byte_4B44944 = 1;
  }
  v5 = (System_String_o *)StringLiteral_19923/*"grid_pos"*/;
  if ( !byte_4B3E911 )
  {
    sub_1BDB878(&UnityEngine_Vector3_TypeInfo, pos);
    byte_4B3E911 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&pos->fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  pos->fields.z = z;
  HasKey = EntityScriptUtil__ScriptHasKey(this->fields.script, v5, 0LL);
  if ( HasKey )
  {
    IntArray = EntityScriptUtil__GetIntArray(this->fields.script, v5, 0LL, 0LL);
    if ( !IntArray )
      sub_1BDBAD4(0LL, v10);
    if ( IntArray->max_length < 2 )
      sub_1BDBADC(IntArray, v10, v11);
    v12.n64_u64[0] = *(unsigned __int64 *)&IntArray->m_Items[1];
    pos->fields.z = 0.0;
    *(float32x2_t *)&pos->fields.x = vcvt_f32_s32(v12);
  }
  return HasKey;
}


bool __fastcall EventBossStatusUiEntity__TryGetHpBarPos(
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
  __int64 v11; // x2
  int32x2_t v12; // d0

  if ( (byte_4B44945 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_20035/*"hp_bar_pos"*/, pos);
    byte_4B44945 = 1;
  }
  v5 = (System_String_o *)StringLiteral_20035/*"hp_bar_pos"*/;
  if ( !byte_4B3E911 )
  {
    sub_1BDB878(&UnityEngine_Vector3_TypeInfo, pos);
    byte_4B3E911 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&pos->fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  pos->fields.z = z;
  HasKey = EntityScriptUtil__ScriptHasKey(this->fields.script, v5, 0LL);
  if ( HasKey )
  {
    IntArray = EntityScriptUtil__GetIntArray(this->fields.script, v5, 0LL, 0LL);
    if ( !IntArray )
      sub_1BDBAD4(0LL, v10);
    if ( IntArray->max_length < 2 )
      sub_1BDBADC(IntArray, v10, v11);
    v12.n64_u64[0] = *(unsigned __int64 *)&IntArray->m_Items[1];
    pos->fields.z = 0.0;
    *(float32x2_t *)&pos->fields.x = vcvt_f32_s32(v12);
  }
  return HasKey;
}