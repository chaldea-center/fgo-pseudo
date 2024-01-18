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
  TouchDetectorBase_TouchInfo_o *v8; // x0

  if ( (byte_418995A & 1) == 0 )
  {
    sub_B2C35C(&Method_ActionExtensions_Call_int__int___, method);
    byte_418995A = 1;
  }
  CurrentTouchInfo_k__BackingField = this->fields._CurrentTouchInfo_k__BackingField;
  if ( CurrentTouchInfo_k__BackingField )
  {
    TouchDetectorBase_TouchInfo__get_TouchCount(CurrentTouchInfo_k__BackingField, 0LL);
    CurrentTouchInfo_k__BackingField = this->fields._CurrentTouchInfo_k__BackingField;
    if ( CurrentTouchInfo_k__BackingField )
      LODWORD(CurrentTouchInfo_k__BackingField) = TouchDetectorBase_TouchInfo__get_TouchCount(
                                                    CurrentTouchInfo_k__BackingField,
                                                    0LL);
  }
  currentTouchCountCache = this->fields.currentTouchCountCache;
  if ( (_DWORD)CurrentTouchInfo_k__BackingField != currentTouchCountCache )
  {
    v5 = this->fields._CurrentTouchInfo_k__BackingField;
    OnChangeTouchCount_k__BackingField = (System_Action_T1__T2__o *)this->fields._OnChangeTouchCount_k__BackingField;
    if ( v5 )
      TouchCount = TouchDetectorBase_TouchInfo__get_TouchCount(v5, 0LL);
    else
      TouchCount = 0;
    ActionExtensions__Call_int__int_(
      OnChangeTouchCount_k__BackingField,
      currentTouchCountCache,
      TouchCount,
      (const MethodInfo_2D65BD0 *)Method_ActionExtensions_Call_int__int___);
    v8 = this->fields._CurrentTouchInfo_k__BackingField;
    if ( v8 )
      LODWORD(v8) = TouchDetectorBase_TouchInfo__get_TouchCount(v8, 0LL);
    this->fields.currentTouchCountCache = (int)v8;
  }
}


void __fastcall TouchDetectorBase__ClearTouchInfo(TouchDetectorBase_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7

  this->fields._StartTouchInfo_k__BackingField = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields._CurrentTouchInfo_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._CurrentTouchInfo_k__BackingField,
    0LL,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields._PrevTouchInfo_k__BackingField = 0LL;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._PrevTouchInfo_k__BackingField,
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
                                                  0LL);
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._CurrentTouchInfo_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._CurrentTouchInfo_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._OnChangeTouchCount_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._OnChangeTouchCount_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._PrevTouchInfo_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields._PrevTouchInfo_k__BackingField,
    (System_Int32_array **)value,
    (System_String_array **)method,
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
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7

  this->fields._StartTouchInfo_k__BackingField = value;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields,
    (System_Int32_array **)value,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  System_Collections_Generic_List_Vector2__o *TouchPosList_k__BackingField; // x0
  __int64 v13; // x1
  TouchDetectorBase_TouchInfo_Fields *p_fields; // x20
  UnityEngine_Vector2_o v15; // 0:s0.4,4:s1.4

  y = primaryTouchPos.fields.y;
  x = primaryTouchPos.fields.x;
  if ( (byte_418535A & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Vector2__AddRange__, optionalTouchPosArray);
    sub_B2C35C(&Method_System_Collections_Generic_List_Vector2__Add__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Vector2___ctor__, v9);
    sub_B2C35C(&System_Collections_Generic_List_Vector2__TypeInfo, v10);
    byte_418535A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v11 = (System_Collections_Generic_List_Vector2__o *)sub_B2C42C(System_Collections_Generic_List_Vector2__TypeInfo);
  System_Collections_Generic_List_Vector2____ctor(
    v11,
    (const MethodInfo_2EDA4C4 *)Method_System_Collections_Generic_List_Vector2___ctor__);
  if ( !v11
    || (v15.fields.x = x,
        v15.fields.y = y,
        System_Collections_Generic_List_Vector2___Add(
          v11,
          v15,
          (const MethodInfo_2EDB228 *)Method_System_Collections_Generic_List_Vector2__Add__),
        this->fields._TouchPosList_k__BackingField = v11,
        p_fields = &this->fields,
        sub_B2C2F8(p_fields, v11),
        (TouchPosList_k__BackingField = p_fields->_TouchPosList_k__BackingField) == 0LL) )
  {
    sub_B2C434(TouchPosList_k__BackingField, v13);
  }
  System_Collections_Generic_List_Vector2___AddRange(
    TouchPosList_k__BackingField,
    (System_Collections_Generic_IEnumerable_T__o *)optionalTouchPosArray,
    (const MethodInfo_2EDB48C *)Method_System_Collections_Generic_List_Vector2__AddRange__);
}


UnityEngine_Vector2_o __fastcall TouchDetectorBase_TouchInfo__get_TouchCenter(
        TouchDetectorBase_TouchInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  UnityEngine_Vector2_o v6; // x1
  UnityEngine_Vector2_o zero; // kr00_8
  System_Collections_Generic_List_Vector2__o *TouchPosList_k__BackingField; // x0
  float x; // s8
  float y; // s9
  const MethodInfo *v11; // x1
  int32_t TouchCount; // w0
  float v13; // s0
  float v14; // s1
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o i; // [xsp+20h] [xbp-40h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4185359 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Vector2__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Vector2__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Vector2__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Vector2__GetEnumerator__, v5);
    byte_4185359 = 1;
  }
  memset(&i, 0, sizeof(i));
  zero = UnityEngine_Vector2__get_zero(0LL);
  TouchPosList_k__BackingField = this->fields._TouchPosList_k__BackingField;
  if ( !TouchPosList_k__BackingField )
    ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B2C434)(0LL, v6);
  x = zero.fields.x;
  y = zero.fields.y;
  System_Collections_Generic_List_Vector2___GetEnumerator(
    &v15,
    TouchPosList_k__BackingField,
    (const MethodInfo_2EDC0F8 *)Method_System_Collections_Generic_List_Vector2__GetEnumerator__);
  for ( i = v15;
        System_Collections_Generic_List_Enumerator_Vector2___MoveNext(
          &i,
          (const MethodInfo_20EEBB8 *)Method_System_Collections_Generic_List_Enumerator_Vector2__MoveNext__);
        y = y + *((float *)&i.fields.current + 1) )
  {
    x = x + *(float *)&i.fields.current;
  }
  System_Collections_Generic_List_Enumerator_Vector2___Dispose(
    &i,
    (const MethodInfo_20EEBB4 *)Method_System_Collections_Generic_List_Enumerator_Vector2__Dispose__);
  TouchCount = TouchDetectorBase_TouchInfo__get_TouchCount(this, v11);
  v13 = x / (float)TouchCount;
  v14 = y / (float)TouchCount;
  result.fields.y = v14;
  result.fields.x = v13;
  return result;
}


int32_t __fastcall TouchDetectorBase_TouchInfo__get_TouchCount(
        TouchDetectorBase_TouchInfo_o *this,
        const MethodInfo *method)
{
  TouchDetectorBase_TouchInfo_o *v2; // x19
  struct System_Collections_Generic_List_Vector2__o *TouchPosList_k__BackingField; // x8

  v2 = this;
  if ( (byte_4185357 & 1) == 0 )
  {
    this = (TouchDetectorBase_TouchInfo_o *)sub_B2C35C(
                                              &Method_System_Collections_Generic_List_Vector2__get_Count__,
                                              method);
    byte_4185357 = 1;
  }
  TouchPosList_k__BackingField = v2->fields._TouchPosList_k__BackingField;
  if ( !TouchPosList_k__BackingField )
    sub_B2C434(this, method);
  return TouchPosList_k__BackingField->fields._size;
}


// local variable allocation has failed, the output may be wrong!
float __fastcall TouchDetectorBase_TouchInfo__get_TouchInterval(
        TouchDetectorBase_TouchInfo_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_Vector2__o *TouchPosList_k__BackingField; // x0
  int v10; // w28
  float v11; // s8
  __int64 v12; // x1
  System_Collections_Generic_List_Vector2__o *v13; // x0
  const void *genericMethod; // d9
  void (__fastcall *v15)(); // d0
  float magnitude; // s0
  int v17; // s1
  int v18; // w22
  int v19; // w19
  _BYTE v21[32]; // [xsp+10h] [xbp-D0h] BYREF
  int v22; // [xsp+30h] [xbp-B0h]
  MethodInfo methoda; // [xsp+38h] [xbp-A8h] BYREF
  System_Nullable_float__o p_touchIntervalCache; // 0:x0.8
  System_Nullable_float__o v25; // 0:x0.8

  if ( (byte_4185358 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Vector2__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Vector2__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Vector2__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Vector2__GetEnumerator__, v5);
    sub_B2C35C(&Method_System_Nullable_float___ctor__, v6);
    sub_B2C35C(&Method_System_Nullable_float__get_HasValue__, v7);
    sub_B2C35C(&Method_System_Nullable_float__get_Value__, v8);
    byte_4185358 = 1;
  }
  memset(&methoda.parameters, 0, 24);
  memset(&methoda, 0, 32);
  v22 = 0;
  p_touchIntervalCache = (System_Nullable_float__o)&this->fields.touchIntervalCache;
  if ( !this->fields.touchIntervalCache.fields.has_value )
  {
    TouchPosList_k__BackingField = this->fields._TouchPosList_k__BackingField;
    if ( !TouchPosList_k__BackingField )
      sub_B2C434(0LL, method);
    System_Collections_Generic_List_Vector2___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v21,
      TouchPosList_k__BackingField,
      (const MethodInfo_2EDC0F8 *)Method_System_Collections_Generic_List_Vector2__GetEnumerator__);
    methoda.genericMethod = *(const void **)&v21[16];
    *(_OWORD *)&methoda.parameters = *(_OWORD *)v21;
    v10 = 0;
    v11 = 10.0;
    while ( System_Collections_Generic_List_Enumerator_Vector2___MoveNext(
              (System_Collections_Generic_List_Enumerator_T__o *)&methoda.parameters,
              (const MethodInfo_20EEBB8 *)Method_System_Collections_Generic_List_Enumerator_Vector2__MoveNext__) )
    {
      v13 = this->fields._TouchPosList_k__BackingField;
      if ( !v13 )
        sub_B2C434(0LL, v12);
      genericMethod = methoda.genericMethod;
      System_Collections_Generic_List_Vector2___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)v21,
        v13,
        (const MethodInfo_2EDC0F8 *)Method_System_Collections_Generic_List_Vector2__GetEnumerator__);
      methoda.klass = *(Il2CppClass **)&v21[16];
      *(_OWORD *)&methoda.invoker_method = *(_OWORD *)v21;
      while ( System_Collections_Generic_List_Enumerator_Vector2___MoveNext(
                (System_Collections_Generic_List_Enumerator_T__o *)&methoda.invoker_method,
                (const MethodInfo_20EEBB8 *)Method_System_Collections_Generic_List_Enumerator_Vector2__MoveNext__) )
      {
        v15 = (void (__fastcall *)())vsub_f32((float32x2_t)genericMethod, (float32x2_t)methoda.klass).n64_u64[0];
        methoda.methodPointer = v15;
        magnitude = UnityEngine_Vector2__get_magnitude(*(UnityEngine_Vector2_o *)(&v17 - 1), &methoda);
        if ( v11 < magnitude )
          v11 = magnitude;
      }
      *(_DWORD *)&v21[4 * v10 + 24] = 128;
      v18 = ++v22;
      System_Collections_Generic_List_Enumerator_Vector2___Dispose(
        (System_Collections_Generic_List_Enumerator_T__o *)&methoda.invoker_method,
        (const MethodInfo_20EEBB4 *)Method_System_Collections_Generic_List_Enumerator_Vector2__Dispose__);
      v10 = 0;
      if ( v18 )
      {
        v10 = v18;
        if ( *(_DWORD *)&v21[4 * v18 + 20] == 128 )
        {
          v10 = v18 - 1;
          v22 = v18 - 1;
        }
      }
    }
    *(_DWORD *)&v21[4 * v10 + 24] = 153;
    v19 = ++v22;
    System_Collections_Generic_List_Enumerator_Vector2___Dispose(
      (System_Collections_Generic_List_Enumerator_T__o *)&methoda.parameters,
      (const MethodInfo_20EEBB4 *)Method_System_Collections_Generic_List_Enumerator_Vector2__Dispose__);
    if ( v19 && *(_DWORD *)&v21[4 * v19 + 20] == 153 )
      v22 = v19 - 1;
    v25 = (System_Nullable_float__o)v21;
    *(_QWORD *)v21 = 0LL;
    System_Nullable_float____ctor(v25, v11, (const MethodInfo_21536DC *)Method_System_Nullable_float___ctor__);
    p_touchIntervalCache = (System_Nullable_float__o)&this->fields.touchIntervalCache;
    this->fields.touchIntervalCache = *(struct System_Nullable_float__o *)v21;
  }
  return System_Nullable_float___get_Value(
           p_touchIntervalCache,
           (const MethodInfo_21536F4 *)Method_System_Nullable_float__get_Value__);
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
  this->fields._TouchPosList_k__BackingField = value;
  sub_B2C2F8(&this->fields, value);
}