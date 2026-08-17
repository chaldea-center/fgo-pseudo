void TouchDetectorBase___ctor(TouchDetectorBase_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TouchDetectorBase__CheckUpdateCurrentTouchCount(TouchDetectorBase_o *this, const MethodInfo *method)
{
  TouchDetectorBase_TouchInfo_o *CurrentTouchInfo_k__BackingField; // x0
  int32_t currentTouchCountCache; // w20
  TouchDetectorBase_TouchInfo_o *v5; // x0
  System_Action_T1__T2__o *OnChangeTouchCount_k__BackingField; // x21
  int32_t TouchCount; // w2
  const MethodInfo *v8; // x1
  TouchDetectorBase_TouchInfo_o *v9; // x0

  if ( (byte_596CE66 & 1) == 0 )
  {
    sub_2213A60(&Method_ActionExtensions_Call_int__int___);
    byte_596CE66 = 1;
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
      (const MethodInfo_37001A4 *)Method_ActionExtensions_Call_int__int___);
    v9 = this->fields._CurrentTouchInfo_k__BackingField;
    if ( v9 )
      LODWORD(v9) = TouchDetectorBase_TouchInfo__get_TouchCount(v9, v8);
    this->fields.currentTouchCountCache = (int)v9;
  }
}


void TouchDetectorBase__ClearTouchInfo(TouchDetectorBase_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7

  this->fields._StartTouchInfo_k__BackingField = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, 0, v2, v3, v4, v5, v6, v7);
  this->fields._CurrentTouchInfo_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._CurrentTouchInfo_k__BackingField,
    0,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields._PrevTouchInfo_k__BackingField = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._PrevTouchInfo_k__BackingField,
    0,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
}


void TouchDetectorBase__DetectTouch(TouchDetectorBase_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( this->fields.isTouchEnable )
  {
    ((void (__fastcall *)(TouchDetectorBase_o *, void *))this->klass[1]._1.image)(this, this->klass[1]._1.gc_desc);
    TouchDetectorBase__CheckUpdateCurrentTouchCount(this, v3);
  }
}


int32_t TouchDetectorBase__get_CurrentTouchCount(TouchDetectorBase_o *this, const MethodInfo *method)
{
  TouchDetectorBase_TouchInfo_o *CurrentTouchInfo_k__BackingField; // x0

  CurrentTouchInfo_k__BackingField = this->fields._CurrentTouchInfo_k__BackingField;
  if ( CurrentTouchInfo_k__BackingField )
    LODWORD(CurrentTouchInfo_k__BackingField) = TouchDetectorBase_TouchInfo__get_TouchCount(
                                                  CurrentTouchInfo_k__BackingField,
                                                  method);
  return (int)CurrentTouchInfo_k__BackingField;
}


TouchDetectorBase_TouchInfo_o *TouchDetectorBase__get_CurrentTouchInfo(
        TouchDetectorBase_o *this,
        const MethodInfo *method)
{
  return this->fields._CurrentTouchInfo_k__BackingField;
}


bool TouchDetectorBase__get_IsTouchEnable(TouchDetectorBase_o *this, const MethodInfo *method)
{
  return this->fields.isTouchEnable;
}


System_Action_int__int__o *TouchDetectorBase__get_OnChangeTouchCount(
        TouchDetectorBase_o *this,
        const MethodInfo *method)
{
  return this->fields._OnChangeTouchCount_k__BackingField;
}


TouchDetectorBase_TouchInfo_o *TouchDetectorBase__get_PrevTouchInfo(
        TouchDetectorBase_o *this,
        const MethodInfo *method)
{
  return this->fields._PrevTouchInfo_k__BackingField;
}


TouchDetectorBase_TouchInfo_o *TouchDetectorBase__get_StartTouchInfo(
        TouchDetectorBase_o *this,
        const MethodInfo *method)
{
  return this->fields._StartTouchInfo_k__BackingField;
}


void TouchDetectorBase__set_CurrentTouchInfo(
        TouchDetectorBase_o *this,
        TouchDetectorBase_TouchInfo_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._CurrentTouchInfo_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._CurrentTouchInfo_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void TouchDetectorBase__set_IsTouchEnable(TouchDetectorBase_o *this, bool value, const MethodInfo *method)
{
  this->fields.isTouchEnable = value;
  if ( !value )
    TouchDetectorBase__ClearTouchInfo(this, (const MethodInfo *)value);
}


void TouchDetectorBase__set_OnChangeTouchCount(
        TouchDetectorBase_o *this,
        System_Action_int__int__o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._OnChangeTouchCount_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._OnChangeTouchCount_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TouchDetectorBase__set_PrevTouchInfo(
        TouchDetectorBase_o *this,
        TouchDetectorBase_TouchInfo_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._PrevTouchInfo_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._PrevTouchInfo_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TouchDetectorBase__set_StartTouchInfo(
        TouchDetectorBase_o *this,
        TouchDetectorBase_TouchInfo_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._StartTouchInfo_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TouchDetectorBase_TouchInfo___ctor(
        TouchDetectorBase_TouchInfo_o *this,
        UnityEngine_Vector2_o primaryTouchPos,
        UnityEngine_Vector2_array *optionalTouchPosArray,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  System_Collections_Generic_List_Vector2__o *v8; // x21
  System_Collections_Generic_List_Vector2__o *klass; // x0
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct UnityEngine_Vector2_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  float *v20; // x8
  MissionNaviTransitionBoardItem_o *p_fields; // x20
  UnityEngine_Vector2_o v22; // 0:s0.4,4:s1.4

  y = primaryTouchPos.fields.y;
  x = primaryTouchPos.fields.x;
  if ( (byte_596CE6A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Vector2__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_Vector2__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_Vector2___ctor__);
    sub_2213A60(&System_Collections_Generic_List_Vector2__TypeInfo);
    byte_596CE6A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v8 = (System_Collections_Generic_List_Vector2__o *)sub_2213CCC(System_Collections_Generic_List_Vector2__TypeInfo);
  System_Collections_Generic_List_Vector2____ctor(
    v8,
    (const MethodInfo_44E0464 *)Method_System_Collections_Generic_List_Vector2___ctor__);
  if ( !v8 )
    goto LABEL_10;
  items = v8->fields._items;
  v18 = Method_System_Collections_Generic_List_Vector2__Add__;
  ++v8->fields._version;
  if ( !items )
    goto LABEL_10;
  size = v8->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    v22.fields.x = x;
    v22.fields.y = y;
    System_Collections_Generic_List_Vector2___AddWithResize(
      v8,
      v22,
      *(const MethodInfo_44E0CFC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = (float *)(&items->obj.klass + size);
    v8->fields._size = size + 1;
    v20[8] = x;
    v20[9] = y;
  }
  this->fields._TouchPosList_k__BackingField = v8;
  p_fields = (MissionNaviTransitionBoardItem_o *)&this->fields;
  sub_2213A04(p_fields, (int32_t)v8, v11, v12, v13, v14, v15, v16);
  klass = (System_Collections_Generic_List_Vector2__o *)p_fields->klass;
  if ( !p_fields->klass )
LABEL_10:
    sub_2213CDC(klass, v10);
  System_Collections_Generic_List_Vector2___AddRange(
    klass,
    (System_Collections_Generic_IEnumerable_T__o *)optionalTouchPosArray,
    (const MethodInfo_44E0F0C *)Method_System_Collections_Generic_List_Vector2__AddRange__);
}


UnityEngine_Vector2_o TouchDetectorBase_TouchInfo__get_TouchCenter(
        TouchDetectorBase_TouchInfo_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_Vector2__o *TouchPosList_k__BackingField; // x0
  struct UnityEngine_Vector2_o zeroVector; // d8
  const MethodInfo *v5; // x1
  int32x2_t v6; // d0
  unsigned __int64 v7; // d0
  float v8; // s1
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+18h] [xbp-48h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_596CE69 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Vector2__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Vector2__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Vector2__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Vector2__GetEnumerator__);
    byte_596CE69 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  if ( !byte_59699C0 )
  {
    sub_2213A60(&UnityEngine_Vector2_TypeInfo);
    byte_59699C0 = 1;
  }
  TouchPosList_k__BackingField = this->fields._TouchPosList_k__BackingField;
  if ( !TouchPosList_k__BackingField )
    sub_2213CDC(0, method);
  zeroVector = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  System_Collections_Generic_List_Vector2___GetEnumerator(
    &v9,
    TouchPosList_k__BackingField,
    (const MethodInfo_44E17E8 *)Method_System_Collections_Generic_List_Vector2__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_Vector2___MoveNext(
            &v9,
            (const MethodInfo_41317D0 *)Method_System_Collections_Generic_List_Enumerator_Vector2__MoveNext__) )
    zeroVector = (struct UnityEngine_Vector2_o)vadd_f32((float32x2_t)zeroVector, (float32x2_t)v9.fields._current).n64_u64[0];
  System_Collections_Generic_List_Enumerator_Vector2___Dispose(
    &v9,
    (const MethodInfo_41317CC *)Method_System_Collections_Generic_List_Enumerator_Vector2__Dispose__);
  v6.n64_f32[0] = (float)TouchDetectorBase_TouchInfo__get_TouchCount(this, v5);
  v7 = vdiv_f32((float32x2_t)zeroVector, vdup_lane_s32(v6, 0)).n64_u64[0];
  v8 = *((float *)&v7 + 1);
  result.fields.x = *(float *)&v7;
  result.fields.y = v8;
  return result;
}


int32_t TouchDetectorBase_TouchInfo__get_TouchCount(TouchDetectorBase_TouchInfo_o *this, const MethodInfo *method)
{
  TouchDetectorBase_TouchInfo_o *v2; // x19
  struct System_Collections_Generic_List_Vector2__o *TouchPosList_k__BackingField; // x8

  v2 = this;
  if ( (byte_596CE67 & 1) == 0 )
  {
    this = (TouchDetectorBase_TouchInfo_o *)sub_2213A60(&Method_System_Collections_Generic_List_Vector2__get_Count__);
    byte_596CE67 = 1;
  }
  TouchPosList_k__BackingField = v2->fields._TouchPosList_k__BackingField;
  if ( !TouchPosList_k__BackingField )
    sub_2213CDC(this, method);
  return TouchPosList_k__BackingField->fields._size;
}


// write access to const memory has been detected, the output may be wrong!
float TouchDetectorBase_TouchInfo__get_TouchInterval(TouchDetectorBase_TouchInfo_o *this, const MethodInfo *method)
{
  _BOOL4 hasValue; // w8
  System_Nullable_float__o p_touchIntervalCache; // x0
  System_Collections_Generic_List_Vector2__o *TouchPosList_k__BackingField; // x0
  float v7; // s8
  __int64 v8; // x1
  System_Collections_Generic_List_Vector2__o *v9; // x0
  Il2CppObject *current; // d9
  __int128 v11; // q0
  float v12; // s0
  __int64 v13; // x1
  __int64 v14; // x2
  Il2CppObject *v15; // d10
  float32x2_t v16; // d0
  System_Nullable_float__o v17; // x0
  System_Nullable_float__o v18; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+18h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+30h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+50h] [xbp-A0h] BYREF

  if ( (byte_596CE68 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Vector2__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Vector2__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_Vector2__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_Vector2__GetEnumerator__);
    sub_2213A60(&Method_System_Nullable_float___ctor__);
    sub_2213A60(&Method_System_Nullable_float__get_HasValue__);
    sub_2213A60(&Method_System_Nullable_float__get_Value__);
    byte_596CE68 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  hasValue = this->fields.touchIntervalCache.fields.hasValue;
  memset(&v20, 0, sizeof(v20));
  if ( hasValue )
  {
    p_touchIntervalCache = (System_Nullable_float__o)&this->fields.touchIntervalCache;
    return System_Nullable_float___get_Value(
             p_touchIntervalCache,
             (const MethodInfo_45E6930 *)Method_System_Nullable_float__get_Value__);
  }
  else
  {
    TouchPosList_k__BackingField = this->fields._TouchPosList_k__BackingField;
    if ( !TouchPosList_k__BackingField )
      sub_2213CDC(0, method);
    System_Collections_Generic_List_Vector2___GetEnumerator(
      &v19,
      TouchPosList_k__BackingField,
      (const MethodInfo_44E17E8 *)Method_System_Collections_Generic_List_Vector2__GetEnumerator__);
    v21 = v19;
    v7 = 10.0;
    while ( System_Collections_Generic_List_Enumerator_Vector2___MoveNext(
              &v21,
              (const MethodInfo_41317D0 *)Method_System_Collections_Generic_List_Enumerator_Vector2__MoveNext__) )
    {
      v9 = this->fields._TouchPosList_k__BackingField;
      if ( !v9 )
        sub_2213CDC(0, v8);
      current = v21.fields._current;
      System_Collections_Generic_List_Vector2___GetEnumerator(
        &v19,
        v9,
        (const MethodInfo_44E17E8 *)Method_System_Collections_Generic_List_Vector2__GetEnumerator__);
      v11 = *(_OWORD *)&v19.fields._list;
      v19.fields._list = 0;
      *(_QWORD *)&v19.fields._index = &v20;
      *(_OWORD *)&v20.fields._list = v11;
      v12 = v7;
      v20.fields._current = v19.fields._current;
LABEL_10:
      v7 = v12;
      while ( System_Collections_Generic_List_Enumerator_Vector2___MoveNext(
                &v20,
                (const MethodInfo_41317D0 *)Method_System_Collections_Generic_List_Enumerator_Vector2__MoveNext__) )
      {
        v15 = v20.fields._current;
        if ( !byte_5969AE1 )
        {
          sub_2213A60(&System_Math_TypeInfo);
          byte_5969AE1 = 1;
        }
        if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v13, v14);
        v16.n64_u64[0] = vsub_f32((float32x2_t)current, (float32x2_t)v15).n64_u64[0];
        v12 = sqrtf(vaddv_f32(vmul_f32(v16, v16)));
        if ( v7 < v12 )
          goto LABEL_10;
      }
      System_Collections_Generic_List_Enumerator_Vector2___Dispose(
        &v20,
        (const MethodInfo_41317CC *)Method_System_Collections_Generic_List_Enumerator_Vector2__Dispose__);
    }
    System_Collections_Generic_List_Enumerator_Vector2___Dispose(
      &v21,
      (const MethodInfo_41317CC *)Method_System_Collections_Generic_List_Enumerator_Vector2__Dispose__);
    v17 = (System_Nullable_float__o)&v19;
    v19.fields._list = 0;
    System_Nullable_float____ctor(v17, v7, (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
    v18 = (System_Nullable_float__o)24LL;
    off_18[0] = (int *)v19.fields._list;
    return System_Nullable_float___get_Value(v18, (const MethodInfo_45E6930 *)Method_System_Nullable_float__get_Value__);
  }
}


System_Collections_Generic_List_Vector2__o *TouchDetectorBase_TouchInfo__get_TouchPosList(
        TouchDetectorBase_TouchInfo_o *this,
        const MethodInfo *method)
{
  return this->fields._TouchPosList_k__BackingField;
}


void TouchDetectorBase_TouchInfo__set_TouchPosList(
        TouchDetectorBase_TouchInfo_o *this,
        System_Collections_Generic_List_Vector2__o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._TouchPosList_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}