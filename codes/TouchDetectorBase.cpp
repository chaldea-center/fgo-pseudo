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

  if ( (byte_4BD8FD6 & 1) == 0 )
  {
    sub_1C21E38(&Method_ActionExtensions_Call_int__int___);
    byte_4BD8FD6 = 1;
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
      (const MethodInfo_2F028A4 *)Method_ActionExtensions_Call_int__int___);
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
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, 0LL, v2, v3, v4, v5, v6, v7);
  this->fields._CurrentTouchInfo_k__BackingField = 0LL;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields._CurrentTouchInfo_k__BackingField,
    0LL,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  this->fields._PrevTouchInfo_k__BackingField = 0LL;
  sub_1C21DDC(
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
  sub_1C21DDC(
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
  sub_1C21DDC(
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
  sub_1C21DDC(
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
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
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
  System_Collections_Generic_List_Vector2__o *v8; // x21
  System_Collections_Generic_List_Vector2__o *klass; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  struct UnityEngine_Vector2_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  float *v20; // x8
  PartyOrganizationUtility_o *p_fields; // x20
  UnityEngine_Vector2_o v22; // 0:s0.4,4:s1.4

  y = primaryTouchPos.fields.y;
  x = primaryTouchPos.fields.x;
  if ( (byte_4BD8FDA & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Vector2__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Vector2__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Vector2___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_Vector2__TypeInfo);
    byte_4BD8FDA = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v8 = (System_Collections_Generic_List_Vector2__o *)sub_1C22084(System_Collections_Generic_List_Vector2__TypeInfo);
  System_Collections_Generic_List_Vector2____ctor(
    v8,
    (const MethodInfo_36A22D0 *)Method_System_Collections_Generic_List_Vector2___ctor__);
  if ( !v8 )
    goto LABEL_10;
  items = v8->fields._items;
  v18 = Method_System_Collections_Generic_List_Vector2__Add__;
  ++v8->fields._version;
  if ( !items )
    goto LABEL_10;
  size = v8->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    v22.fields.x = x;
    v22.fields.y = y;
    System_Collections_Generic_List_Vector2___AddWithResize(
      v8,
      v22,
      *(const MethodInfo_36A2B38 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
  }
  else
  {
    v20 = (float *)(&items->obj.klass + size);
    v8->fields._size = size + 1;
    v20[8] = x;
    v20[9] = y;
  }
  this->fields._TouchPosList_k__BackingField = v8;
  p_fields = (PartyOrganizationUtility_o *)&this->fields;
  sub_1C21DDC(p_fields, (int64_t)v8, v11, v12, v13, v14, v15, v16);
  klass = (System_Collections_Generic_List_Vector2__o *)p_fields->klass;
  if ( !p_fields->klass )
LABEL_10:
    sub_1C22094(klass, v10);
  System_Collections_Generic_List_Vector2___AddRange(
    klass,
    (System_Collections_Generic_IEnumerable_T__o *)optionalTouchPosArray,
    (const MethodInfo_36A2D48 *)Method_System_Collections_Generic_List_Vector2__AddRange__);
}


UnityEngine_Vector2_o __fastcall TouchDetectorBase_TouchInfo__get_TouchCenter(
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

  if ( (byte_4BD8FD9 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_Vector2__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_Vector2__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_Vector2__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Vector2__GetEnumerator__);
    byte_4BD8FD9 = 1;
  }
  memset(&i, 0, sizeof(i));
  if ( !byte_4BD6AAA )
  {
    sub_1C21E38(&UnityEngine_Vector2_TypeInfo);
    byte_4BD6AAA = 1;
  }
  TouchPosList_k__BackingField = this->fields._TouchPosList_k__BackingField;
  if ( !TouchPosList_k__BackingField )
    sub_1C22094(0LL, method);
  zeroVector = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  System_Collections_Generic_List_Vector2___GetEnumerator(
    &v9,
    TouchPosList_k__BackingField,
    (const MethodInfo_36A3650 *)Method_System_Collections_Generic_List_Vector2__GetEnumerator__);
  for ( i = v9;
        System_Collections_Generic_List_Enumerator_Vector2___MoveNext(
          &i,
          (const MethodInfo_33E7B64 *)Method_System_Collections_Generic_List_Enumerator_Vector2__MoveNext__);
        zeroVector = (struct UnityEngine_Vector2_o)vadd_f32((float32x2_t)zeroVector, (float32x2_t)i.fields._current).n64_u64[0] )
  {
    ;
  }
  System_Collections_Generic_List_Enumerator_Vector2___Dispose(
    &i,
    (const MethodInfo_33E7B60 *)Method_System_Collections_Generic_List_Enumerator_Vector2__Dispose__);
  v6.n64_f32[0] = (float)TouchDetectorBase_TouchInfo__get_TouchCount(this, v5);
  v7 = vdiv_f32((float32x2_t)zeroVector, vdup_lane_s32(v6, 0)).n64_u64[0];
  v8 = *((float *)&v7 + 1);
  result.fields.x = *(float *)&v7;
  result.fields.y = v8;
  return result;
}


int32_t __fastcall TouchDetectorBase_TouchInfo__get_TouchCount(
        TouchDetectorBase_TouchInfo_o *this,
        const MethodInfo *method)
{
  TouchDetectorBase_TouchInfo_o *v2; // x19
  struct System_Collections_Generic_List_Vector2__o *TouchPosList_k__BackingField; // x8

  v2 = this;
  if ( (byte_4BD8FD7 & 1) == 0 )
  {
    this = (TouchDetectorBase_TouchInfo_o *)sub_1C21E38(&Method_System_Collections_Generic_List_Vector2__get_Count__);
    byte_4BD8FD7 = 1;
  }
  TouchPosList_k__BackingField = v2->fields._TouchPosList_k__BackingField;
  if ( !TouchPosList_k__BackingField )
    sub_1C22094(this, method);
  return TouchPosList_k__BackingField->fields._size;
}


float __fastcall TouchDetectorBase_TouchInfo__get_TouchInterval(
        TouchDetectorBase_TouchInfo_o *this,
        const MethodInfo *method)
{
  long double v2; // q8
  System_Collections_Generic_List_Vector2__o *TouchPosList_k__BackingField; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_Vector2__o *v6; // x0
  Il2CppObject *current; // d9
  long double inited; // q0
  Il2CppObject *v9; // d10
  float32x2_t v10; // d0
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+20h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+40h] [xbp-A0h] BYREF
  System_Nullable_float__o v15; // 0:x0.8
  System_Nullable_float__o p_touchIntervalCache; // 0:x0.8

  if ( (byte_4BD8FD8 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_Vector2__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_Vector2__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_Vector2__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Vector2__GetEnumerator__);
    sub_1C21E38(&Method_System_Nullable_float___ctor__);
    sub_1C21E38(&Method_System_Nullable_float__get_HasValue__);
    sub_1C21E38(&Method_System_Nullable_float__get_Value__);
    byte_4BD8FD8 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  memset(&v13, 0, sizeof(v13));
  if ( !this->fields.touchIntervalCache.fields.hasValue )
  {
    TouchPosList_k__BackingField = this->fields._TouchPosList_k__BackingField;
    if ( !TouchPosList_k__BackingField )
      sub_1C22094(0LL, method);
    System_Collections_Generic_List_Vector2___GetEnumerator(
      &v12,
      TouchPosList_k__BackingField,
      (const MethodInfo_36A3650 *)Method_System_Collections_Generic_List_Vector2__GetEnumerator__);
    v14 = v12;
    LODWORD(v2) = 10.0;
    while ( System_Collections_Generic_List_Enumerator_Vector2___MoveNext(
              &v14,
              (const MethodInfo_33E7B64 *)Method_System_Collections_Generic_List_Enumerator_Vector2__MoveNext__) )
    {
      v6 = this->fields._TouchPosList_k__BackingField;
      if ( !v6 )
        sub_1C22094(0LL, v5);
      current = v14.fields._current;
      System_Collections_Generic_List_Vector2___GetEnumerator(
        &v12,
        v6,
        (const MethodInfo_36A3650 *)Method_System_Collections_Generic_List_Vector2__GetEnumerator__);
      v13 = v12;
      inited = v2;
LABEL_9:
      v2 = inited;
      while ( System_Collections_Generic_List_Enumerator_Vector2___MoveNext(
                &v13,
                (const MethodInfo_33E7B64 *)Method_System_Collections_Generic_List_Enumerator_Vector2__MoveNext__) )
      {
        v9 = v13.fields._current;
        if ( !byte_4BD6BB2 )
        {
          sub_1C21E38(&System_Math_TypeInfo);
          byte_4BD6BB2 = 1;
        }
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          inited = j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v10.n64_u64[0] = vsub_f32((float32x2_t)current, (float32x2_t)v9).n64_u64[0];
        *(float32x2_t *)&inited = vmul_f32(v10, v10);
        *(float *)&inited = sqrtf(vaddv_f32(*(float32x2_t *)&inited));
        if ( *(float *)&v2 < *(float *)&inited )
          goto LABEL_9;
      }
      System_Collections_Generic_List_Enumerator_Vector2___Dispose(
        &v13,
        (const MethodInfo_33E7B60 *)Method_System_Collections_Generic_List_Enumerator_Vector2__Dispose__);
    }
    System_Collections_Generic_List_Enumerator_Vector2___Dispose(
      &v14,
      (const MethodInfo_33E7B60 *)Method_System_Collections_Generic_List_Enumerator_Vector2__Dispose__);
    v15 = (System_Nullable_float__o)&v12;
    v12.fields._list = 0LL;
    System_Nullable_float____ctor(v15, *(float *)&v2, (const MethodInfo_376D9C4 *)Method_System_Nullable_float___ctor__);
    this->fields.touchIntervalCache = (struct System_Nullable_float__o)v12.fields._list;
  }
  p_touchIntervalCache = (System_Nullable_float__o)&this->fields.touchIntervalCache;
  return System_Nullable_float___get_Value(
           p_touchIntervalCache,
           (const MethodInfo_376D9DC *)Method_System_Nullable_float__get_Value__);
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
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields, (int64_t)value, (int64_t)method, v3, v4, v5, v6, v7);
}