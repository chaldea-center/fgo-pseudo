void __fastcall EventBossStatusUiEntity___ctor(EventBossStatusUiEntity_o *this, const MethodInfo *method)
{
  if ( (byte_438E85E & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_string___ctor__);
    byte_438E85E = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_21FB7E0 *)Method_DataEntityBase_string___ctor__);
}


UnityEngine_Color_o __fastcall EventBossStatusUiEntity__ConvertColorFromInt(
        EventBossStatusUiEntity_o *this,
        int32_t value,
        const MethodInfo *method)
{
  float v3; // s4
  float v4; // s5
  float v5; // s6
  float v6; // s0
  float v7; // s1
  float v8; // s2
  float v9; // s3
  __int64 v10; // [xsp+0h] [xbp-10h] BYREF
  __int64 v11; // [xsp+8h] [xbp-8h]
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v12.fields.a = (float)(unsigned __int8)value;
  v12.fields.r = (float)BYTE2(value) / 255.0;
  v12.fields.g = (float)BYTE1(value) / 255.0;
  v12.fields.b = v12.fields.a / 255.0;
  v10 = 0LL;
  v11 = 0LL;
  UnityEngine_Color___ctor_41410832(v12, v3, v4, v5, (const MethodInfo *)&v10);
  v7 = *((float *)&v10 + 1);
  v6 = *(float *)&v10;
  v9 = *((float *)&v11 + 1);
  v8 = *(float *)&v11;
  result.fields.a = v9;
  result.fields.b = v8;
  result.fields.g = v7;
  result.fields.r = v6;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o __fastcall EventBossStatusUiEntity__ConvertColorFromStr(
        EventBossStatusUiEntity_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  EventBossStatusUiEntity_o *v4; // x0
  const MethodInfo *v5; // x2
  float v6; // s0
  float v7; // s1
  float v8; // s2
  float v9; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_438E853 & 1) == 0 )
  {
    sub_B775C4(&System_Convert_TypeInfo);
    byte_438E853 = 1;
  }
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v4 = (EventBossStatusUiEntity_o *)System_Convert__ToInt32_42791388(value, 16, 0LL);
  *(UnityEngine_Color_o *)&v6 = EventBossStatusUiEntity__ConvertColorFromInt(v4, (int32_t)v4, v5);
  result.fields.a = v9;
  result.fields.b = v8;
  result.fields.g = v7;
  result.fields.r = v6;
  return result;
}


System_String_o *__fastcall EventBossStatusUiEntity__CreatePK(int32_t eventId, int32_t idx, const MethodInfo *method)
{
  if ( (byte_438E84F & 1) == 0 )
  {
    sub_B775C4(&Method_DataEntityBase_CreateMultiplePK_int__int___);
    byte_438E84F = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           idx,
           (const MethodInfo_1D171BC *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  System_String_o *v4; // x20
  Il2CppObject *ScriptObj; // x0

  if ( (byte_438E859 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_18075/*"count_format"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438E859 = 1;
  }
  v4 = (System_String_o *)StringLiteral_1/*""*/;
  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, (System_String_o *)StringLiteral_18075/*"count_format"*/, v2);
  if ( ScriptObj )
    return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))ScriptObj->klass->vtable[3].method)(
                                ScriptObj,
                                ScriptObj->klass->vtable[4].methodPtr);
  else
    return v4;
}


int32_t __fastcall EventBossStatusUiEntity__GetEventId(EventBossStatusUiEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventId;
}


int32_t __fastcall EventBossStatusUiEntity__GetGaugeId(EventBossStatusUiEntity_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_438E858 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_19342/*"gauge_id"*/);
    byte_438E858 = 1;
  }
  return EventBossStatusUiEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_19342/*"gauge_id"*/, -1, v2);
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

  if ( (byte_438E85D & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_20596/*"lastbattle_icon_id"*/);
    byte_438E85D = 1;
  }
  return EventBossStatusUiEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_20596/*"lastbattle_icon_id"*/, -1, v2);
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
  EventBossStatusUiEntity_o *v9; // x0
  System_String_o *v10; // x1
  const MethodInfo *v11; // x2

  v4 = defVal;
  if ( (byte_438E850 & 1) == 0 )
  {
    sub_B775C4(&long_TypeInfo);
    byte_438E850 = 1;
  }
  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj);
  sub_B77990(ScriptObj);
  return (unsigned int)EventBossStatusUiEntity__GetScriptObj(v9, v10, v11);
}


Il2CppObject *__fastcall EventBossStatusUiEntity__GetScriptObj(
        EventBossStatusUiEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_438E852 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_438E852 = 1;
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
           (const MethodInfo_2F7F3F8 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_438E851 & 1) == 0 )
  {
    sub_B775C4(&System_Convert_TypeInfo);
    byte_438E851 = 1;
  }
  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return defVal;
  v8 = (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))ScriptObj->klass->vtable[3].method)(
                            ScriptObj,
                            ScriptObj->klass->vtable[4].methodPtr);
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  return System_Convert__ToInt32_42791388(v8, 16, 0LL);
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
  if ( (byte_438E855 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22779/*"status_battle_color"*/);
    byte_438E855 = 1;
  }
  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, (System_String_o *)StringLiteral_22779/*"status_battle_color"*/, v3);
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

  if ( (byte_438E85A & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22780/*"status_height"*/);
    byte_438E85A = 1;
  }
  return EventBossStatusUiEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_22780/*"status_height"*/, -1, v2);
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
  if ( (byte_438E856 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22781/*"status_last_color"*/);
    byte_438E856 = 1;
  }
  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, (System_String_o *)StringLiteral_22781/*"status_last_color"*/, v3);
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
  if ( (byte_438E857 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_22788/*"status_win_color"*/);
    byte_438E857 = 1;
  }
  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, (System_String_o *)StringLiteral_22788/*"status_win_color"*/, v3);
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
  if ( (byte_438E854 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_23134/*"text_effect_color"*/);
    byte_438E854 = 1;
  }
  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, (System_String_o *)StringLiteral_23134/*"text_effect_color"*/, v3);
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
  System_Int32_array *IntArray; // x0
  __int64 v7; // x1
  int32x2_t v8; // d0
  bool result; // w0
  __int64 v10; // x0

  if ( (byte_438E85B & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_19470/*"grid_pos"*/);
    byte_438E85B = 1;
  }
  v5 = (System_String_o *)StringLiteral_19470/*"grid_pos"*/;
  *pos = UnityEngine_Vector3__get_zero(0LL);
  if ( !EntityScriptUtil__ScriptHasKey(this->fields.script, v5, 0LL) )
    return 0;
  IntArray = EntityScriptUtil__GetIntArray(this->fields.script, v5, 0LL, 0LL);
  if ( !IntArray )
    sub_B7769C(0LL, v7);
  if ( IntArray->max_length < 2 )
  {
    v10 = sub_B776C8(IntArray);
    sub_B77668(v10, 0LL);
  }
  v8.n64_u64[0] = *(unsigned __int64 *)&IntArray->m_Items[1];
  result = 1;
  pos->fields.z = 0.0;
  *(float32x2_t *)&pos->fields.x = vcvt_f32_s32(v8);
  return result;
}


bool __fastcall EventBossStatusUiEntity__TryGetHpBarPos(
        EventBossStatusUiEntity_o *this,
        UnityEngine_Vector3_o *pos,
        const MethodInfo *method)
{
  System_String_o *v5; // x21
  System_Int32_array *IntArray; // x0
  __int64 v7; // x1
  int32x2_t v8; // d0
  bool result; // w0
  __int64 v10; // x0

  if ( (byte_438E85C & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_19569/*"hp_bar_pos"*/);
    byte_438E85C = 1;
  }
  v5 = (System_String_o *)StringLiteral_19569/*"hp_bar_pos"*/;
  *pos = UnityEngine_Vector3__get_zero(0LL);
  if ( !EntityScriptUtil__ScriptHasKey(this->fields.script, v5, 0LL) )
    return 0;
  IntArray = EntityScriptUtil__GetIntArray(this->fields.script, v5, 0LL, 0LL);
  if ( !IntArray )
    sub_B7769C(0LL, v7);
  if ( IntArray->max_length < 2 )
  {
    v10 = sub_B776C8(IntArray);
    sub_B77668(v10, 0LL);
  }
  v8.n64_u64[0] = *(unsigned __int64 *)&IntArray->m_Items[1];
  result = 1;
  pos->fields.z = 0.0;
  *(float32x2_t *)&pos->fields.x = vcvt_f32_s32(v8);
  return result;
}