void __fastcall TouchDetectorBase___ctor(TouchDetectorBase_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TouchDetectorBase__CheckUpdateCurrentTouchCount(TouchDetectorBase_o *this, const MethodInfo *method)
{
  TouchDetectorBase_TouchInfo_o *CurrentTouchInfo_k__BackingField; // x0
  int32_t currentTouchCountCache; // w20
  TouchDetectorBase_TouchInfo_o *v5; // x0
  System_Action_T1__T2__o *OnChangeTouchCount_k__BackingField; // x21
  int32_t TouchCount; // w2
  const MethodInfo *v8; // x1
  TouchDetectorBase_TouchInfo_o *v9; // x0

  if ( (byte_4B63676 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_ActionExtensions_Call_int__int___, method);
    byte_4B63676 = 1;
  }
  CurrentTouchInfo_k__BackingField = this->fields._CurrentTouchInfo_k__BackingField;
  if ( CurrentTouchInfo_k__BackingField )
  {
    TouchDetectorBase_TouchInfo__get_TouchCount(CurrentTouchInfo_k__BackingField, method);
    CurrentTouchInfo_k__BackingField = this->fields._CurrentTouchInfo_k__BackingField;
    if ( CurrentTouchInfo_k__BackingField )
      LODWORD(CurrentTouchInfo_k__BackingField) = TouchDetectorBase_TouchInfo__get_TouchCount(
                                                    CurrentTouchInfo_k__BackingField,
                                                    method);
  }
  currentTouchCountCache = this->fields.currentTouchCountCache;
  if ( (_DWORD)CurrentTouchInfo_k__BackingField != currentTouchCountCache )
  {
    v5 = this->fields._CurrentTouchInfo_k__BackingField;
    OnChangeTouchCount_k__BackingField = (System_Action_T1__T2__o *)this->fields._OnChangeTouchCount_k__BackingField;
    if ( v5 )
      TouchCount = TouchDetectorBase_TouchInfo__get_TouchCount(v5, method);
    else
      TouchCount = 0;
    ActionExtensions__Call_int__int_(
      OnChangeTouchCount_k__BackingField,
      currentTouchCountCache,
      TouchCount,
      (const MethodInfo_2EABBB0 *)Method_ActionExtensions_Call_int__int___);
    v9 = this->fields._CurrentTouchInfo_k__BackingField;
    if ( v9 )
      LODWORD(v9) = TouchDetectorBase_TouchInfo__get_TouchCount(v9, v8);
    this->fields.currentTouchCountCache = (int)v9;
  }
}


void __fastcall TouchDetectorBase__ClearTouchInfo(TouchDetectorBase_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7

  this->fields._StartTouchInfo_k__BackingField = 0LL;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields._CurrentTouchInfo_k__BackingField = 0LL;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._CurrentTouchInfo_k__BackingField,
    0LL,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields._PrevTouchInfo_k__BackingField = 0LL;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._PrevTouchInfo_k__BackingField,
    0LL,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}


void __fastcall TouchDetectorBase__DetectTouch(TouchDetectorBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( this->fields.isTouchEnable )
  {
    ((void (__fastcall *)(TouchDetectorBase_o *, const char *))this->klass[1]._1.gc_desc)(this, this->klass[1]._1.name);
    TouchDetectorBase__CheckUpdateCurrentTouchCount(this, v3);
  }
}


int32_t __fastcall TouchDetectorBase__get_CurrentTouchCount(TouchDetectorBase_o *this, const MethodInfo *method)
{
  TouchDetectorBase_TouchInfo_o *CurrentTouchInfo_k__BackingField; // x0

  CurrentTouchInfo_k__BackingField = this->fields._CurrentTouchInfo_k__BackingField;
  if ( CurrentTouchInfo_k__BackingField )
    LODWORD(CurrentTouchInfo_k__BackingField) = TouchDetectorBase_TouchInfo__get_TouchCount(
                                                  CurrentTouchInfo_k__BackingField,
                                                  method);
  return (int)CurrentTouchInfo_k__BackingField;
}


TouchDetectorBase_TouchInfo_o *__fastcall TouchDetectorBase__get_CurrentTouchInfo(
        TouchDetectorBase_o *this,
        const MethodInfo *method)
{
  return this->fields._CurrentTouchInfo_k__BackingField;
}


bool __fastcall TouchDetectorBase__get_IsTouchEnable(TouchDetectorBase_o *this, const MethodInfo *method)
{
  return this->fields.isTouchEnable;
}


System_Action_int__int__o *__fastcall TouchDetectorBase__get_OnChangeTouchCount(
        TouchDetectorBase_o *this,
        const MethodInfo *method)
{
  return this->fields._OnChangeTouchCount_k__BackingField;
}


TouchDetectorBase_TouchInfo_o *__fastcall TouchDetectorBase__get_PrevTouchInfo(
        TouchDetectorBase_o *this,
        const MethodInfo *method)
{
  return this->fields._PrevTouchInfo_k__BackingField;
}


TouchDetectorBase_TouchInfo_o *__fastcall TouchDetectorBase__get_StartTouchInfo(
        TouchDetectorBase_o *this,
        const MethodInfo *method)
{
  return this->fields._StartTouchInfo_k__BackingField;
}


void __fastcall TouchDetectorBase__set_CurrentTouchInfo(
        TouchDetectorBase_o *this,
        TouchDetectorBase_TouchInfo_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._CurrentTouchInfo_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._CurrentTouchInfo_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TouchDetectorBase__set_IsTouchEnable(TouchDetectorBase_o *this, bool value, const MethodInfo *method)
{
  this->fields.isTouchEnable = value;
  if ( !value )
    TouchDetectorBase__ClearTouchInfo(this, (const MethodInfo *)value);
}


void __fastcall TouchDetectorBase__set_OnChangeTouchCount(
        TouchDetectorBase_o *this,
        System_Action_int__int__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._OnChangeTouchCount_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._OnChangeTouchCount_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TouchDetectorBase__set_PrevTouchInfo(
        TouchDetectorBase_o *this,
        TouchDetectorBase_TouchInfo_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._PrevTouchInfo_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._PrevTouchInfo_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TouchDetectorBase__set_StartTouchInfo(
        TouchDetectorBase_o *this,
        TouchDetectorBase_TouchInfo_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._StartTouchInfo_k__BackingField = value;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TouchDetectorBase_TouchInfo___ctor(
        TouchDetectorBase_TouchInfo_o *this,
        UnityEngine_Vector2_o primaryTouchPos,
        UnityEngine_Vector2_array *optionalTouchPosArray,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_Vector2__o *v11; // x21
  System_Collections_Generic_List_Vector2__o *klass; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct UnityEngine_Vector2_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  float *v23; // x8
  PartyOrganizationUtility_o *p_fields; // x20
  UnityEngine_Vector2_o v25; // 0:s0.4,4:s1.4

  y = primaryTouchPos.fields.y;
  x = primaryTouchPos.fields.x;
  if ( (byte_4B6367A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Vector2__AddRange__, optionalTouchPosArray);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Vector2__Add__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Vector2___ctor__, v9);
    sub_1BE4ACC(&System_Collections_Generic_List_Vector2__TypeInfo, v10);
    byte_4B6367A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v11 = (System_Collections_Generic_List_Vector2__o *)sub_1BE4D18(System_Collections_Generic_List_Vector2__TypeInfo);
  System_Collections_Generic_List_Vector2____ctor(
    v11,
    (const MethodInfo_363F440 *)Method_System_Collections_Generic_List_Vector2___ctor__);
  if ( !v11 )
    goto LABEL_10;
  items = v11->fields._items;
  v21 = Method_System_Collections_Generic_List_Vector2__Add__;
  ++v11->fields._version;
  if ( !items )
    goto LABEL_10;
  size = v11->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    v25.fields.x = x;
    v25.fields.y = y;
    System_Collections_Generic_List_Vector2___AddWithResize(
      v11,
      v25,
      *(const MethodInfo_363FCA8 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v23 = (float *)(&items->obj.klass + size);
    v11->fields._size = size + 1;
    v23[8] = x;
    v23[9] = y;
  }
  this->fields._TouchPosList_k__BackingField = v11;
  p_fields = (PartyOrganizationUtility_o *)&this->fields;
  sub_1BE4A70(p_fields, (int64_t)v11, v14, v15, v16, v17, v18, v19);
  klass = (System_Collections_Generic_List_Vector2__o *)p_fields->klass;
  if ( !p_fields->klass )
LABEL_10:
    sub_1BE4D28(klass, v13);
  System_Collections_Generic_List_Vector2___AddRange(
    klass,
    (System_Collections_Generic_IEnumerable_T__o *)optionalTouchPosArray,
    (const MethodInfo_363FEB8 *)Method_System_Collections_Generic_List_Vector2__AddRange__);
}


UnityEngine_Vector2_o __fastcall TouchDetectorBase_TouchInfo__get_TouchCenter(
        TouchDetectorBase_TouchInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_Vector2__o *TouchPosList_k__BackingField; // x0
  struct UnityEngine_Vector2_o zeroVector; // d8
  const MethodInfo *v8; // x1
  int32x2_t v9; // d0
  unsigned __int64 v10; // d0
  float v11; // s1
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+20h] [xbp-50h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4B63679 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_Vector2__Dispose__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_Vector2__MoveNext__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_Vector2__get_Current__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Vector2__GetEnumerator__, v5);
    byte_4B63679 = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( !byte_4B611DA )
  {
    sub_1BE4ACC(&UnityEngine_Vector2_TypeInfo, method);
    byte_4B611DA = 1;
  }
  TouchPosList_k__BackingField = this->fields._TouchPosList_k__BackingField;
  if ( !TouchPosList_k__BackingField )
    sub_1BE4D28(0LL, method);
  zeroVector = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  System_Collections_Generic_List_Vector2___GetEnumerator(
    &v12,
    TouchPosList_k__BackingField,
    (const MethodInfo_36407C0 *)Method_System_Collections_Generic_List_Vector2__GetEnumerator__);
  for ( i = v12;
        System_Collections_Generic_List_Enumerator_Vector2___MoveNext(
          &i,
          (const MethodInfo_3384000 *)Method_System_Collections_Generic_List_Enumerator_Vector2__MoveNext__);
        zeroVector = (struct UnityEngine_Vector2_o)vadd_f32((float32x2_t)zeroVector, (float32x2_t)i.fields._current).n64_u64[0] )
  {
    ;
  }
  System_Collections_Generic_List_Enumerator_Vector2___Dispose(
    &i,
    (const MethodInfo_3383FFC *)Method_System_Collections_Generic_List_Enumerator_Vector2__Dispose__);
  v9.n64_f32[0] = (float)TouchDetectorBase_TouchInfo__get_TouchCount(this, v8);
  v10 = vdiv_f32((float32x2_t)zeroVector, vdup_lane_s32(v9, 0)).n64_u64[0];
  v11 = *((float *)&v10 + 1);
  result.fields.x = *(float *)&v10;
  result.fields.y = v11;
  return result;
}


int32_t __fastcall TouchDetectorBase_TouchInfo__get_TouchCount(
        TouchDetectorBase_TouchInfo_o *this,
        const MethodInfo *method)
{
  TouchDetectorBase_TouchInfo_o *v2; // x19
  struct System_Collections_Generic_List_Vector2__o *TouchPosList_k__BackingField; // x8

  v2 = this;
  if ( (byte_4B63677 & 1) == 0 )
  {
    this = (TouchDetectorBase_TouchInfo_o *)sub_1BE4ACC(
                                              &Method_System_Collections_Generic_List_Vector2__get_Count__,
                                              method);
    byte_4B63677 = 1;
  }
  TouchPosList_k__BackingField = v2->fields._TouchPosList_k__BackingField;
  if ( !TouchPosList_k__BackingField )
    sub_1BE4D28(this, method);
  return TouchPosList_k__BackingField->fields._size;
}


float __fastcall TouchDetectorBase_TouchInfo__get_TouchInterval(
        TouchDetectorBase_TouchInfo_o *this,
        const MethodInfo *method)
{
  long double v2; // q8
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_Vector2__o *TouchPosList_k__BackingField; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_Vector2__o *v12; // x0
  Il2CppObject *current; // d9
  long double inited; // q0
  __int64 v15; // x1
  Il2CppObject *v16; // d10
  float32x2_t v17; // d0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+40h] [xbp-A0h] BYREF
  System_Nullable_float__o v22; // 0:x0.8
  System_Nullable_float__o p_touchIntervalCache; // 0:x0.8

  if ( (byte_4B63678 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_Vector2__Dispose__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_Vector2__MoveNext__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_Vector2__get_Current__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Vector2__GetEnumerator__, v6);
    sub_1BE4ACC(&Method_System_Nullable_float___ctor__, v7);
    sub_1BE4ACC(&Method_System_Nullable_float__get_HasValue__, v8);
    sub_1BE4ACC(&Method_System_Nullable_float__get_Value__, v9);
    byte_4B63678 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  memset(&v20, 0, sizeof(v20));
  if ( !this->fields.touchIntervalCache.fields.hasValue )
  {
    TouchPosList_k__BackingField = this->fields._TouchPosList_k__BackingField;
    if ( !TouchPosList_k__BackingField )
      sub_1BE4D28(0LL, method);
    System_Collections_Generic_List_Vector2___GetEnumerator(
      &v19,
      TouchPosList_k__BackingField,
      (const MethodInfo_36407C0 *)Method_System_Collections_Generic_List_Vector2__GetEnumerator__);
    v21 = v19;
    LODWORD(v2) = 10.0;
    while ( System_Collections_Generic_List_Enumerator_Vector2___MoveNext(
              &v21,
              (const MethodInfo_3384000 *)Method_System_Collections_Generic_List_Enumerator_Vector2__MoveNext__) )
    {
      v12 = this->fields._TouchPosList_k__BackingField;
      if ( !v12 )
        sub_1BE4D28(0LL, v11);
      current = v21.fields._current;
      System_Collections_Generic_List_Vector2___GetEnumerator(
        &v19,
        v12,
        (const MethodInfo_36407C0 *)Method_System_Collections_Generic_List_Vector2__GetEnumerator__);
      v20 = v19;
      inited = v2;
LABEL_9:
      v2 = inited;
      while ( System_Collections_Generic_List_Enumerator_Vector2___MoveNext(
                &v20,
                (const MethodInfo_3384000 *)Method_System_Collections_Generic_List_Enumerator_Vector2__MoveNext__) )
      {
        v16 = v20.fields._current;
        if ( !byte_4B612E2 )
        {
          sub_1BE4ACC(&System_Math_TypeInfo, v15);
          byte_4B612E2 = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          inited = j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v17.n64_u64[0] = vsub_f32((float32x2_t)current, (float32x2_t)v16).n64_u64[0];
        *(float32x2_t *)&inited = vmul_f32(v17, v17);
        *(float *)&inited = sqrtf(vaddv_f32(*(float32x2_t *)&inited));
        if ( *(float *)&v2 < *(float *)&inited )
          goto LABEL_9;
      }
      System_Collections_Generic_List_Enumerator_Vector2___Dispose(
        &v20,
        (const MethodInfo_3383FFC *)Method_System_Collections_Generic_List_Enumerator_Vector2__Dispose__);
    }
    System_Collections_Generic_List_Enumerator_Vector2___Dispose(
      &v21,
      (const MethodInfo_3383FFC *)Method_System_Collections_Generic_List_Enumerator_Vector2__Dispose__);
    v22 = (System_Nullable_float__o)&v19;
    v19.fields._list = 0LL;
    System_Nullable_float____ctor(v22, *(float *)&v2, (const MethodInfo_370B430 *)Method_System_Nullable_float___ctor__);
    this->fields.touchIntervalCache = (struct System_Nullable_float__o)v19.fields._list;
  }
  p_touchIntervalCache = (System_Nullable_float__o)&this->fields.touchIntervalCache;
  return System_Nullable_float___get_Value(
           p_touchIntervalCache,
           (const MethodInfo_370B448 *)Method_System_Nullable_float__get_Value__);
}


System_Collections_Generic_List_Vector2__o *__fastcall TouchDetectorBase_TouchInfo__get_TouchPosList(
        TouchDetectorBase_TouchInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._TouchPosList_k__BackingField;
}


void __fastcall TouchDetectorBase_TouchInfo__set_TouchPosList(
        TouchDetectorBase_TouchInfo_o *this,
        System_Collections_Generic_List_Vector2__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._TouchPosList_k__BackingField = value;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
}