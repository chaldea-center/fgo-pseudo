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

  if ( (byte_4C3F850 & 1) == 0 )
  {
    sub_1C37058(&Method_ActionExtensions_Call_int__int___);
    byte_4C3F850 = 1;
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
      (const MethodInfo_3034834 *)Method_ActionExtensions_Call_int__int___);
    v9 = this->fields._CurrentTouchInfo_k__BackingField;
    if ( v9 )
      LODWORD(v9) = TouchDetectorBase_TouchInfo__get_TouchCount(v9, v8);
    this->fields.currentTouchCountCache = (int)v9;
  }
}


void TouchDetectorBase__ClearTouchInfo(TouchDetectorBase_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  this->fields._StartTouchInfo_k__BackingField = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, 0, v2, v3);
  this->fields._CurrentTouchInfo_k__BackingField = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._CurrentTouchInfo_k__BackingField, 0, v5, v6);
  this->fields._PrevTouchInfo_k__BackingField = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields._PrevTouchInfo_k__BackingField, 0, v7, v8);
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
  const MethodInfo *v3; // x3

  this->fields._CurrentTouchInfo_k__BackingField = value;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields._CurrentTouchInfo_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
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
  const MethodInfo *v3; // x3

  this->fields._OnChangeTouchCount_k__BackingField = value;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields._OnChangeTouchCount_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void TouchDetectorBase__set_PrevTouchInfo(
        TouchDetectorBase_o *this,
        TouchDetectorBase_TouchInfo_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._PrevTouchInfo_k__BackingField = value;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields._PrevTouchInfo_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void TouchDetectorBase__set_StartTouchInfo(
        TouchDetectorBase_o *this,
        TouchDetectorBase_TouchInfo_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._StartTouchInfo_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct UnityEngine_Vector2_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  float *v15; // x8
  CGThumbnailListItem_o *p_fields; // x20
  UnityEngine_Vector2_o v17; // 0:s0.4,4:s1.4

  y = primaryTouchPos.fields.y;
  x = primaryTouchPos.fields.x;
  if ( (byte_4C3F854 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Vector2__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_Vector2__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_Vector2___ctor__);
    sub_1C37058(&System_Collections_Generic_List_Vector2__TypeInfo);
    byte_4C3F854 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v8 = (System_Collections_Generic_List_Vector2__o *)sub_1C372A4(System_Collections_Generic_List_Vector2__TypeInfo);
  System_Collections_Generic_List_Vector2____ctor(
    v8,
    (const MethodInfo_37F8CAC *)Method_System_Collections_Generic_List_Vector2___ctor__);
  if ( !v8 )
    goto LABEL_10;
  items = v8->fields._items;
  v13 = Method_System_Collections_Generic_List_Vector2__Add__;
  ++v8->fields._version;
  if ( !items )
    goto LABEL_10;
  size = v8->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    v17.fields.x = x;
    v17.fields.y = y;
    System_Collections_Generic_List_Vector2___AddWithResize(
      v8,
      v17,
      *(const MethodInfo_37F9514 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = (float *)(&items->obj.klass + size);
    v8->fields._size = size + 1;
    v15[8] = x;
    v15[9] = y;
  }
  this->fields._TouchPosList_k__BackingField = v8;
  p_fields = (CGThumbnailListItem_o *)&this->fields;
  sub_1C36FFC(p_fields, (int32_t)v8, v10, v11);
  klass = (System_Collections_Generic_List_Vector2__o *)p_fields->klass;
  if ( !p_fields->klass )
LABEL_10:
    sub_1C372B4(klass);
  System_Collections_Generic_List_Vector2___AddRange(
    klass,
    (System_Collections_Generic_IEnumerable_T__o *)optionalTouchPosArray,
    (const MethodInfo_37F9724 *)Method_System_Collections_Generic_List_Vector2__AddRange__);
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
  System_Collections_Generic_List_Enumerator_T__o v9; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+20h] [xbp-50h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4C3F853 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_Vector2__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_Vector2__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_Vector2__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_Vector2__GetEnumerator__);
    byte_4C3F853 = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( !byte_4C3C81A )
  {
    sub_1C37058(&UnityEngine_Vector2_TypeInfo);
    byte_4C3C81A = 1;
  }
  TouchPosList_k__BackingField = this->fields._TouchPosList_k__BackingField;
  if ( !TouchPosList_k__BackingField )
    sub_1C372B4(0);
  zeroVector = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  System_Collections_Generic_List_Vector2___GetEnumerator(
    &v9,
    TouchPosList_k__BackingField,
    (const MethodInfo_37FA02C *)Method_System_Collections_Generic_List_Vector2__GetEnumerator__);
  for ( i = v9;
        System_Collections_Generic_List_Enumerator_Vector2___MoveNext(
          &i,
          (const MethodInfo_35342C8 *)Method_System_Collections_Generic_List_Enumerator_Vector2__MoveNext__);
        zeroVector = (struct UnityEngine_Vector2_o)vadd_f32((float32x2_t)zeroVector, (float32x2_t)i.fields._current).n64_u64[0] )
  {
    ;
  }
  System_Collections_Generic_List_Enumerator_Vector2___Dispose(
    &i,
    (const MethodInfo_35342C4 *)Method_System_Collections_Generic_List_Enumerator_Vector2__Dispose__);
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
  if ( (byte_4C3F851 & 1) == 0 )
  {
    this = (TouchDetectorBase_TouchInfo_o *)sub_1C37058(&Method_System_Collections_Generic_List_Vector2__get_Count__);
    byte_4C3F851 = 1;
  }
  TouchPosList_k__BackingField = v2->fields._TouchPosList_k__BackingField;
  if ( !TouchPosList_k__BackingField )
    sub_1C372B4(this);
  return TouchPosList_k__BackingField->fields._size;
}


float TouchDetectorBase_TouchInfo__get_TouchInterval(TouchDetectorBase_TouchInfo_o *this, const MethodInfo *method)
{
  long double v2; // q8
  System_Collections_Generic_List_Vector2__o *TouchPosList_k__BackingField; // x0
  System_Collections_Generic_List_Vector2__o *v5; // x0
  Il2CppObject *current; // d9
  long double inited; // q0
  Il2CppObject *v8; // d10
  float32x2_t v9; // d0
  System_Nullable_float__o v10; // x0
  System_Nullable_float__o p_touchIntervalCache; // x0
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+20h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+40h] [xbp-A0h] BYREF

  if ( (byte_4C3F852 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_Vector2__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_Vector2__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_Vector2__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_Vector2__GetEnumerator__);
    sub_1C37058(&Method_System_Nullable_float___ctor__);
    sub_1C37058(&Method_System_Nullable_float__get_HasValue__);
    sub_1C37058(&Method_System_Nullable_float__get_Value__);
    byte_4C3F852 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  memset(&v14, 0, sizeof(v14));
  if ( !this->fields.touchIntervalCache.fields.hasValue )
  {
    TouchPosList_k__BackingField = this->fields._TouchPosList_k__BackingField;
    if ( !TouchPosList_k__BackingField )
      sub_1C372B4(0);
    System_Collections_Generic_List_Vector2___GetEnumerator(
      &v13,
      TouchPosList_k__BackingField,
      (const MethodInfo_37FA02C *)Method_System_Collections_Generic_List_Vector2__GetEnumerator__);
    v15 = v13;
    LODWORD(v2) = 10.0;
    while ( System_Collections_Generic_List_Enumerator_Vector2___MoveNext(
              &v15,
              (const MethodInfo_35342C8 *)Method_System_Collections_Generic_List_Enumerator_Vector2__MoveNext__) )
    {
      v5 = this->fields._TouchPosList_k__BackingField;
      if ( !v5 )
        sub_1C372B4(0);
      current = v15.fields._current;
      System_Collections_Generic_List_Vector2___GetEnumerator(
        &v13,
        v5,
        (const MethodInfo_37FA02C *)Method_System_Collections_Generic_List_Vector2__GetEnumerator__);
      v14 = v13;
      inited = v2;
LABEL_9:
      v2 = inited;
      while ( System_Collections_Generic_List_Enumerator_Vector2___MoveNext(
                &v14,
                (const MethodInfo_35342C8 *)Method_System_Collections_Generic_List_Enumerator_Vector2__MoveNext__) )
      {
        v8 = v14.fields._current;
        if ( !byte_4C3C922 )
        {
          sub_1C37058(&System_Math_TypeInfo);
          byte_4C3C922 = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          inited = j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v9.n64_u64[0] = vsub_f32((float32x2_t)current, (float32x2_t)v8).n64_u64[0];
        *(float32x2_t *)&inited = vmul_f32(v9, v9);
        *(float *)&inited = sqrtf(vaddv_f32(*(float32x2_t *)&inited));
        if ( *(float *)&v2 < *(float *)&inited )
          goto LABEL_9;
      }
      System_Collections_Generic_List_Enumerator_Vector2___Dispose(
        &v14,
        (const MethodInfo_35342C4 *)Method_System_Collections_Generic_List_Enumerator_Vector2__Dispose__);
    }
    System_Collections_Generic_List_Enumerator_Vector2___Dispose(
      &v15,
      (const MethodInfo_35342C4 *)Method_System_Collections_Generic_List_Enumerator_Vector2__Dispose__);
    v10 = (System_Nullable_float__o)&v13;
    v13.fields._list = 0;
    System_Nullable_float____ctor(v10, *(float *)&v2, (const MethodInfo_38CAEA4 *)Method_System_Nullable_float___ctor__);
    this->fields.touchIntervalCache = (struct System_Nullable_float__o)v13.fields._list;
  }
  p_touchIntervalCache = (System_Nullable_float__o)&this->fields.touchIntervalCache;
  return System_Nullable_float___get_Value(
           p_touchIntervalCache,
           (const MethodInfo_38CAEBC *)Method_System_Nullable_float__get_Value__);
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
  const MethodInfo *v3; // x3

  this->fields._TouchPosList_k__BackingField = value;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}