void __fastcall EventBossStatusUiEntity___ctor(EventBossStatusUiEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB8D6 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_string___ctor__, (_DWORD)method, v2, v3);
    byte_42EB8D6 = 1;
  }
  DataEntityBase_string____ctor(
    (DataEntityBase_string__o *)this,
    (const MethodInfo_23FAD5C *)Method_DataEntityBase_string___ctor__);
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
  UnityEngine_Color___ctor_41567816(v12, v3, v4, v5, (const MethodInfo *)&v10);
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
  __int64 v3; // x3
  EventBossStatusUiEntity_o *v5; // x0
  const MethodInfo *v6; // x2
  float v7; // s0
  float v8; // s1
  float v9; // s2
  float v10; // s3
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_42EB8CB & 1) == 0 )
  {
    sub_B5D5C4(&System_Convert_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB8CB = 1;
  }
  if ( (BYTE3(System_Convert_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !System_Convert_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  }
  v5 = (EventBossStatusUiEntity_o *)System_Convert__ToInt32_42797264(value, 16, 0LL);
  *(UnityEngine_Color_o *)&v7 = EventBossStatusUiEntity__ConvertColorFromInt(v5, (int32_t)v5, v6);
  result.fields.a = v10;
  result.fields.b = v9;
  result.fields.g = v8;
  result.fields.r = v7;
  return result;
}


System_String_o *__fastcall EventBossStatusUiEntity__CreatePK(int32_t eventId, int32_t idx, const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42EB8C7 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataEntityBase_CreateMultiplePK_int__int___, idx, (_DWORD)method, v3);
    byte_42EB8C7 = 1;
  }
  return DataEntityBase__CreateMultiplePK_int__int_(
           eventId,
           idx,
           (const MethodInfo_1AE3018 *)Method_DataEntityBase_CreateMultiplePK_int__int___);
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
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_String_o *v8; // x20
  Il2CppObject *ScriptObj; // x0

  if ( (byte_42EB8D1 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_17940/*"count_format"*/, (_DWORD)method, (_DWORD)v2, v3);
    sub_B5D5C4(&StringLiteral_1/*""*/, v5, v6, v7);
    byte_42EB8D1 = 1;
  }
  v8 = (System_String_o *)StringLiteral_1/*""*/;
  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, (System_String_o *)StringLiteral_17940/*"count_format"*/, v2);
  if ( ScriptObj )
    return (System_String_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))ScriptObj->klass->vtable[3].method)(
                                ScriptObj,
                                ScriptObj->klass->vtable[4].methodPtr);
  else
    return v8;
}


int32_t __fastcall EventBossStatusUiEntity__GetEventId(EventBossStatusUiEntity_o *this, const MethodInfo *method)
{
  return this->fields.eventId;
}


int32_t __fastcall EventBossStatusUiEntity__GetGaugeId(EventBossStatusUiEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EB8D0 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19196/*"gauge_id"*/, (_DWORD)method, v2, v3);
    byte_42EB8D0 = 1;
  }
  return EventBossStatusUiEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_19196/*"gauge_id"*/, -1, v3);
}


int32_t __fastcall EventBossStatusUiEntity__GetIndex(EventBossStatusUiEntity_o *this, const MethodInfo *method)
{
  return this->fields.idx;
}


int32_t __fastcall EventBossStatusUiEntity__GetLastBattleIconId(
        EventBossStatusUiEntity_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EB8D5 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_20441/*"lastbattle_icon_id"*/, (_DWORD)method, v2, v3);
    byte_42EB8D5 = 1;
  }
  return EventBossStatusUiEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_20441/*"lastbattle_icon_id"*/, -1, v3);
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
  if ( (byte_42EB8C8 & 1) == 0 )
  {
    sub_B5D5C4(&long_TypeInfo, (_DWORD)key, defVal, method);
    byte_42EB8C8 = 1;
  }
  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, key, *(const MethodInfo **)&defVal);
  if ( !ScriptObj )
    return v4;
  if ( ScriptObj->klass->_1.element_class == long_TypeInfo->_1.element_class )
    return *(_DWORD *)j_il2cpp_object_unbox_0(ScriptObj);
  sub_B5D990(ScriptObj);
  return (unsigned int)EventBossStatusUiEntity__GetScriptObj(v9, v10, v11);
}


Il2CppObject *__fastcall EventBossStatusUiEntity__GetScriptObj(
        EventBossStatusUiEntity_o *this,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v3; // x3
  Il2CppObject *result; // x0
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42EB8CA & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
      (_DWORD)key,
      (_DWORD)method,
      v3);
    byte_42EB8CA = 1;
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
           (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_42EB8C9 & 1) == 0 )
  {
    sub_B5D5C4(&System_Convert_TypeInfo, (_DWORD)key, defVal, method);
    byte_42EB8C9 = 1;
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
  return System_Convert__ToInt32_42797264(v8, 16, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o __fastcall EventBossStatusUiEntity__GetStatusBattleColor(
        EventBossStatusUiEntity_o *this,
        UnityEngine_Color_o defaultColor,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  __int64 v4; // x3
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  Il2CppObject *ScriptObj; // x0
  EventBossStatusUiEntity_o *v11; // x0
  const MethodInfo *v12; // x2
  float v13; // s2
  float v14; // s3
  float v15; // s0
  float v16; // s1
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = defaultColor.fields.a;
  b = defaultColor.fields.b;
  g = defaultColor.fields.g;
  r = defaultColor.fields.r;
  if ( (byte_42EB8CD & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22608/*"status_battle_color"*/, (_DWORD)method, (_DWORD)v3, v4);
    byte_42EB8CD = 1;
  }
  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, (System_String_o *)StringLiteral_22608/*"status_battle_color"*/, v3);
  if ( ScriptObj )
  {
    v11 = (EventBossStatusUiEntity_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))ScriptObj->klass->vtable[3].method)(
                                         ScriptObj,
                                         ScriptObj->klass->vtable[4].methodPtr);
    v17 = EventBossStatusUiEntity__ConvertColorFromStr(v11, (System_String_o *)v11, v12);
    r = v17.fields.r;
    g = v17.fields.g;
    b = v17.fields.b;
    a = v17.fields.a;
  }
  v13 = b;
  v14 = a;
  v15 = r;
  v16 = g;
  result.fields.a = v14;
  result.fields.b = v13;
  result.fields.g = v16;
  result.fields.r = v15;
  return result;
}


int32_t __fastcall EventBossStatusUiEntity__GetStatusHeight(EventBossStatusUiEntity_o *this, const MethodInfo *method)
{
  int v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_42EB8D2 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22609/*"status_height"*/, (_DWORD)method, v2, v3);
    byte_42EB8D2 = 1;
  }
  return EventBossStatusUiEntity__GetScriptIntParam(this, (System_String_o *)StringLiteral_22609/*"status_height"*/, -1, v3);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o __fastcall EventBossStatusUiEntity__GetStatusLastColor(
        EventBossStatusUiEntity_o *this,
        UnityEngine_Color_o defaultColor,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  __int64 v4; // x3
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  Il2CppObject *ScriptObj; // x0
  EventBossStatusUiEntity_o *v11; // x0
  const MethodInfo *v12; // x2
  float v13; // s2
  float v14; // s3
  float v15; // s0
  float v16; // s1
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = defaultColor.fields.a;
  b = defaultColor.fields.b;
  g = defaultColor.fields.g;
  r = defaultColor.fields.r;
  if ( (byte_42EB8CE & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22610/*"status_last_color"*/, (_DWORD)method, (_DWORD)v3, v4);
    byte_42EB8CE = 1;
  }
  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, (System_String_o *)StringLiteral_22610/*"status_last_color"*/, v3);
  if ( ScriptObj )
  {
    v11 = (EventBossStatusUiEntity_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))ScriptObj->klass->vtable[3].method)(
                                         ScriptObj,
                                         ScriptObj->klass->vtable[4].methodPtr);
    v17 = EventBossStatusUiEntity__ConvertColorFromStr(v11, (System_String_o *)v11, v12);
    r = v17.fields.r;
    g = v17.fields.g;
    b = v17.fields.b;
    a = v17.fields.a;
  }
  v13 = b;
  v14 = a;
  v15 = r;
  v16 = g;
  result.fields.a = v14;
  result.fields.b = v13;
  result.fields.g = v16;
  result.fields.r = v15;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o __fastcall EventBossStatusUiEntity__GetStatusWinColor(
        EventBossStatusUiEntity_o *this,
        UnityEngine_Color_o defaultColor,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  __int64 v4; // x3
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  Il2CppObject *ScriptObj; // x0
  EventBossStatusUiEntity_o *v11; // x0
  const MethodInfo *v12; // x2
  float v13; // s2
  float v14; // s3
  float v15; // s0
  float v16; // s1
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = defaultColor.fields.a;
  b = defaultColor.fields.b;
  g = defaultColor.fields.g;
  r = defaultColor.fields.r;
  if ( (byte_42EB8CF & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22617/*"status_win_color"*/, (_DWORD)method, (_DWORD)v3, v4);
    byte_42EB8CF = 1;
  }
  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, (System_String_o *)StringLiteral_22617/*"status_win_color"*/, v3);
  if ( ScriptObj )
  {
    v11 = (EventBossStatusUiEntity_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))ScriptObj->klass->vtable[3].method)(
                                         ScriptObj,
                                         ScriptObj->klass->vtable[4].methodPtr);
    v17 = EventBossStatusUiEntity__ConvertColorFromStr(v11, (System_String_o *)v11, v12);
    r = v17.fields.r;
    g = v17.fields.g;
    b = v17.fields.b;
    a = v17.fields.a;
  }
  v13 = b;
  v14 = a;
  v15 = r;
  v16 = g;
  result.fields.a = v14;
  result.fields.b = v13;
  result.fields.g = v16;
  result.fields.r = v15;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Color_o __fastcall EventBossStatusUiEntity__GetTextEffectColor(
        EventBossStatusUiEntity_o *this,
        UnityEngine_Color_o defaultColor,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2
  __int64 v4; // x3
  float a; // s8
  float b; // s9
  float g; // s10
  float r; // s11
  Il2CppObject *ScriptObj; // x0
  EventBossStatusUiEntity_o *v11; // x0
  const MethodInfo *v12; // x2
  float v13; // s2
  float v14; // s3
  float v15; // s0
  float v16; // s1
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o result; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  a = defaultColor.fields.a;
  b = defaultColor.fields.b;
  g = defaultColor.fields.g;
  r = defaultColor.fields.r;
  if ( (byte_42EB8CC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_22962/*"text_effect_color"*/, (_DWORD)method, (_DWORD)v3, v4);
    byte_42EB8CC = 1;
  }
  ScriptObj = EventBossStatusUiEntity__GetScriptObj(this, (System_String_o *)StringLiteral_22962/*"text_effect_color"*/, v3);
  if ( ScriptObj )
  {
    v11 = (EventBossStatusUiEntity_o *)((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))ScriptObj->klass->vtable[3].method)(
                                         ScriptObj,
                                         ScriptObj->klass->vtable[4].methodPtr);
    v17 = EventBossStatusUiEntity__ConvertColorFromStr(v11, (System_String_o *)v11, v12);
    r = v17.fields.r;
    g = v17.fields.g;
    b = v17.fields.b;
    a = v17.fields.a;
  }
  v13 = b;
  v14 = a;
  v15 = r;
  v16 = g;
  result.fields.a = v14;
  result.fields.b = v13;
  result.fields.g = v16;
  result.fields.r = v15;
  return result;
}


bool __fastcall EventBossStatusUiEntity__TryGetGridPos(
        EventBossStatusUiEntity_o *this,
        UnityEngine_Vector3_o *pos,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v6; // x21
  System_Int32_array *IntArray; // x0
  __int64 v8; // x1
  int32x2_t v9; // d0
  bool result; // w0
  __int64 v11; // x0

  if ( (byte_42EB8D3 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19323/*"grid_pos"*/, (_DWORD)pos, (_DWORD)method, v3);
    byte_42EB8D3 = 1;
  }
  v6 = (System_String_o *)StringLiteral_19323/*"grid_pos"*/;
  *pos = UnityEngine_Vector3__get_zero(0LL);
  if ( !EntityScriptUtil__ScriptHasKey(this->fields.script, v6, 0LL) )
    return 0;
  IntArray = EntityScriptUtil__GetIntArray(this->fields.script, v6, 0LL, 0LL);
  if ( !IntArray )
    sub_B5D69C(0LL, v8);
  if ( IntArray->max_length < 2 )
  {
    v11 = sub_B5D6C8(IntArray);
    sub_B5D668(v11, 0LL);
  }
  v9.n64_u64[0] = *(unsigned __int64 *)&IntArray->m_Items[1];
  result = 1;
  pos->fields.z = 0.0;
  *(float32x2_t *)&pos->fields.x = vcvt_f32_s32(v9);
  return result;
}


bool __fastcall EventBossStatusUiEntity__TryGetHpBarPos(
        EventBossStatusUiEntity_o *this,
        UnityEngine_Vector3_o *pos,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_String_o *v6; // x21
  System_Int32_array *IntArray; // x0
  __int64 v8; // x1
  int32x2_t v9; // d0
  bool result; // w0
  __int64 v11; // x0

  if ( (byte_42EB8D4 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_19421/*"hp_bar_pos"*/, (_DWORD)pos, (_DWORD)method, v3);
    byte_42EB8D4 = 1;
  }
  v6 = (System_String_o *)StringLiteral_19421/*"hp_bar_pos"*/;
  *pos = UnityEngine_Vector3__get_zero(0LL);
  if ( !EntityScriptUtil__ScriptHasKey(this->fields.script, v6, 0LL) )
    return 0;
  IntArray = EntityScriptUtil__GetIntArray(this->fields.script, v6, 0LL, 0LL);
  if ( !IntArray )
    sub_B5D69C(0LL, v8);
  if ( IntArray->max_length < 2 )
  {
    v11 = sub_B5D6C8(IntArray);
    sub_B5D668(v11, 0LL);
  }
  v9.n64_u64[0] = *(unsigned __int64 *)&IntArray->m_Items[1];
  result = 1;
  pos->fields.z = 0.0;
  *(float32x2_t *)&pos->fields.x = vcvt_f32_s32(v9);
  return result;
}