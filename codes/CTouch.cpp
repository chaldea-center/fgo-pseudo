void __fastcall CTouch___cctor(const MethodInfo *method)
{
  System_Int32_array **v1; // x0
  struct CTouch_StaticFields *static_fields; // x8
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  CTouch_c *v9; // x8
  System_Collections_Generic_List_int__o *v10; // x19
  struct CTouch_StaticFields *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7

  if ( (byte_438E3A8 & 1) == 0 )
  {
    sub_B775C4(&CTouch_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int___ctor___69397304);
    sub_B775C4(&System_Collections_Generic_List_int__TypeInfo);
    sub_B775C4(&UnityEngine_Touch___TypeInfo);
    byte_438E3A8 = 1;
  }
  CTouch_TypeInfo->static_fields->FLICK_LEN = 5.0;
  CTouch_TypeInfo->static_fields->DRAG_LEN = 15.0;
  v1 = (System_Int32_array **)sub_B775DC(UnityEngine_Touch___TypeInfo, 1LL);
  static_fields = CTouch_TypeInfo->static_fields;
  static_fields->mTouch = (struct UnityEngine_Touch_array *)v1;
  sub_B77560((BattleServantConfConponent_o *)&static_fields->mTouch, v1, v3, v4, v5, v6, v7, v8);
  v9 = CTouch_TypeInfo;
  CTouch_TypeInfo->static_fields->mIsTchNow = 0;
  v9->static_fields->mIsTchMouseNow = 0;
  v9->static_fields->mState = 0;
  v9->static_fields->mDragFrameCnt = -1;
  v9->static_fields->mIsClassEnabled = 0;
  v10 = (System_Collections_Generic_List_int__o *)sub_B77694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_30E508C *)Method_System_Collections_Generic_List_int___ctor___69397304);
  v11 = CTouch_TypeInfo->static_fields;
  v11->ignoreFingerIDList = v10;
  sub_B77560(
    (BattleServantConfConponent_o *)&v11->ignoreFingerIDList,
    (System_Int32_array **)v10,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
}


System_Collections_Generic_List_int__o *__fastcall CTouch__GetIgnoreFingerIDList(const MethodInfo *method)
{
  CTouch_c *v1; // x0

  if ( (byte_438E3A6 & 1) == 0 )
  {
    sub_B775C4(&CTouch_TypeInfo);
    byte_438E3A6 = 1;
  }
  v1 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v1 = CTouch_TypeInfo;
  }
  return v1->static_fields->ignoreFingerIDList;
}


UnityEngine_Vector2_o __fastcall CTouch__GetTouchPos(const MethodInfo *method)
{
  float x; // s8
  float y; // s9
  UnityEngine_Vector2_o zero; // kr00_8
  CTouch_c *v4; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  int32_t ValidTouchLastID; // w0
  float v8; // s0
  float v9; // s1
  UnityEngine_Vector2_o position; // kr08_8
  UnityEngine_Vector2_o v11; // kr10_8
  float v12; // s0
  float v13; // s1
  UnityEngine_Touch_o v14; // [xsp+0h] [xbp-B0h] BYREF
  UnityEngine_Touch_o v15; // [xsp+48h] [xbp-68h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_438E39B & 1) == 0 )
  {
    sub_B775C4(&CTouch_TypeInfo);
    byte_438E39B = 1;
  }
  memset(&v15, 0, sizeof(v15));
  zero = UnityEngine_Vector2__get_zero(0LL);
  y = zero.fields.y;
  x = zero.fields.x;
  if ( UnityEngine_Input__get_touchCount(0LL) >= 1 )
  {
    v4 = CTouch_TypeInfo;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    if ( CTouch__GetValidTouchCount((const MethodInfo *)v4) == 1 )
    {
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      if ( (CTouch__GetValidTouchLastID(1, v5) & 0x80000000) != 0 )
      {
        v11 = UnityEngine_Vector2__get_zero(0LL);
        v9 = v11.fields.y;
        v8 = v11.fields.x;
      }
      else
      {
        if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        ValidTouchLastID = CTouch__GetValidTouchLastID(1, v6);
        UnityEngine_Input__GetTouch(&v14, ValidTouchLastID, 0LL);
        memcpy(&v15, &v14, sizeof(v15));
        position = UnityEngine_Touch__get_position(&v15, 0LL);
        v9 = position.fields.y;
        v8 = position.fields.x;
      }
      x = v8;
      y = v9;
    }
  }
  v12 = x;
  v13 = y;
  result.fields.y = v13;
  result.fields.x = v12;
  return result;
}


int32_t __fastcall CTouch__GetValidTouchCount(const MethodInfo *method)
{
  __int64 touchCount; // x0
  __int64 v2; // x1
  int v3; // w19
  CTouch_c *v4; // x8
  struct System_Collections_Generic_List_int__o *ignoreFingerIDList; // x8

  if ( (byte_438E3A5 & 1) == 0 )
  {
    sub_B775C4(&CTouch_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__get_Count__);
    byte_438E3A5 = 1;
  }
  touchCount = UnityEngine_Input__get_touchCount(0LL);
  v3 = touchCount;
  v4 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v4 = CTouch_TypeInfo;
  }
  ignoreFingerIDList = v4->static_fields->ignoreFingerIDList;
  if ( !ignoreFingerIDList )
    sub_B7769C(touchCount, v2);
  return v3 - ignoreFingerIDList->fields._size;
}


int32_t __fastcall CTouch__GetValidTouchLastID(bool isReverse, const MethodInfo *method)
{
  CTouch_c *v3; // x0
  unsigned __int64 v4; // x19
  __int64 i; // x22
  CTouch_c *v6; // x0
  System_Collections_Generic_List_int__o *ignoreFingerIDList; // x20
  UnityEngine_Touch_array *touches; // x0
  __int64 v9; // x1
  __int64 v10; // x22
  CTouch_c *v11; // x0
  System_Collections_Generic_List_int__o *v12; // x20
  __int64 v14; // x0

  if ( (byte_438E3A7 & 1) == 0 )
  {
    sub_B775C4(&CTouch_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_int__Contains__);
    byte_438E3A7 = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( CTouch__GetValidTouchCount((const MethodInfo *)v3) < 1 )
  {
    LODWORD(v4) = -1;
  }
  else
  {
    LODWORD(v4) = UnityEngine_Input__get_touchCount(0LL);
    if ( isReverse )
    {
      for ( i = 68LL * ((int)v4 - 1) + 32; ; i -= 68LL )
      {
        LODWORD(v4) = v4 - 1;
        if ( (v4 & 0x80000000) != 0LL )
          break;
        v6 = CTouch_TypeInfo;
        if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
          v6 = CTouch_TypeInfo;
        }
        ignoreFingerIDList = v6->static_fields->ignoreFingerIDList;
        touches = UnityEngine_Input__get_touches(0LL);
        if ( !touches )
          goto LABEL_31;
        if ( (unsigned int)v4 >= touches->max_length )
          goto LABEL_32;
        touches = (UnityEngine_Touch_array *)UnityEngine_Touch__get_fingerId(
                                               (UnityEngine_Touch_o *)((char *)touches + i),
                                               0LL);
        if ( !ignoreFingerIDList )
          goto LABEL_31;
        if ( !System_Collections_Generic_List_int___Contains(
                ignoreFingerIDList,
                (int32_t)touches,
                (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__) )
          return v4;
      }
      goto LABEL_29;
    }
    if ( (int)v4 < 1 )
    {
LABEL_29:
      LODWORD(v4) = 0;
      return v4;
    }
    v4 = 0LL;
    v10 = 32LL;
    while ( 1 )
    {
      v11 = CTouch_TypeInfo;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v11 = CTouch_TypeInfo;
      }
      v12 = v11->static_fields->ignoreFingerIDList;
      touches = UnityEngine_Input__get_touches(0LL);
      if ( !touches )
        goto LABEL_31;
      if ( v4 >= touches->max_length )
      {
LABEL_32:
        v14 = sub_B776C8(touches);
        sub_B77668(v14, 0LL);
      }
      touches = (UnityEngine_Touch_array *)UnityEngine_Touch__get_fingerId(
                                             (UnityEngine_Touch_o *)((char *)touches + v10),
                                             0LL);
      if ( !v12 )
LABEL_31:
        sub_B7769C(touches, v9);
      if ( !System_Collections_Generic_List_int___Contains(
              v12,
              (int32_t)touches,
              (const MethodInfo_30E623C *)Method_System_Collections_Generic_List_int__Contains__) )
        break;
      ++v4;
      v10 += 68LL;
      if ( (__int64)v4 >= UnityEngine_Input__get_touchCount(0LL) )
        goto LABEL_29;
    }
  }
  return v4;
}


void __fastcall CTouch__SetClassEnabled(bool isEnabled, const MethodInfo *method)
{
  CTouch_c *v3; // x0

  if ( (byte_438E37F & 1) == 0 )
  {
    sub_B775C4(&CTouch_TypeInfo);
    byte_438E37F = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v3 = CTouch_TypeInfo;
  }
  v3->static_fields->mIsClassEnabled = isEnabled;
}


void __fastcall CTouch__SetMultiTouchEnabled(bool is_enabled, const MethodInfo *method)
{
  CTouch_c *v3; // x0

  if ( (byte_438E380 & 1) == 0 )
  {
    sub_B775C4(&CTouch_TypeInfo);
    byte_438E380 = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v3 = CTouch_TypeInfo;
  }
  v3->static_fields->mIsReq_MultiTouchEnabled = is_enabled;
}


void __fastcall CTouch__add_OnTouchPressEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  if ( (byte_438E387 & 1) == 0 )
  {
    sub_B775C4(&CTouch_TypeInfo);
    byte_438E387 = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__add_mOnTouchPressEvent(value, method);
}


void __fastcall CTouch__add_OnTouchReleaseEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  if ( (byte_438E383 & 1) == 0 )
  {
    sub_B775C4(&CTouch_TypeInfo);
    byte_438E383 = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__add_mOnTouchReleaseEvent(value, method);
}


void __fastcall CTouch__add_mOnTouchPressEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  CTouch_c *v3; // x0
  System_Delegate_o *mOnTouchPressEvent; // x20
  System_Delegate_o *v5; // x0
  System_Delegate_o *v6; // x21
  CTouch_c *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CTouch_TouchEventHandler_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_438E385 & 1) == 0 )
  {
    sub_B775C4(&CTouch_TypeInfo);
    sub_B775C4(&CTouch_TouchEventHandler_TypeInfo);
    byte_438E385 = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v3 = CTouch_TypeInfo;
  }
  mOnTouchPressEvent = (System_Delegate_o *)v3->static_fields->mOnTouchPressEvent;
  while ( 1 )
  {
    v5 = System_Delegate__Combine(mOnTouchPressEvent, (System_Delegate_o *)value, 0LL);
    v6 = v5;
    if ( v5 )
    {
      if ( (CTouch_TouchEventHandler_c *)v5->klass != CTouch_TouchEventHandler_TypeInfo )
        break;
    }
    v7 = CTouch_TypeInfo;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v7 = CTouch_TypeInfo;
    }
    v8 = sub_B6BFDC(&v7->static_fields->mOnTouchPressEvent, v6, mOnTouchPressEvent);
    v9 = mOnTouchPressEvent == (System_Delegate_o *)v8;
    mOnTouchPressEvent = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v5);
  CTouch__remove_mOnTouchPressEvent(v10, v11);
}


void __fastcall CTouch__add_mOnTouchReleaseEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  CTouch_c *v3; // x0
  System_Delegate_o *mOnTouchReleaseEvent; // x20
  System_Delegate_o *v5; // x0
  System_Delegate_o *v6; // x21
  CTouch_c *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CTouch_TouchEventHandler_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_438E381 & 1) == 0 )
  {
    sub_B775C4(&CTouch_TypeInfo);
    sub_B775C4(&CTouch_TouchEventHandler_TypeInfo);
    byte_438E381 = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v3 = CTouch_TypeInfo;
  }
  mOnTouchReleaseEvent = (System_Delegate_o *)v3->static_fields->mOnTouchReleaseEvent;
  while ( 1 )
  {
    v5 = System_Delegate__Combine(mOnTouchReleaseEvent, (System_Delegate_o *)value, 0LL);
    v6 = v5;
    if ( v5 )
    {
      if ( (CTouch_TouchEventHandler_c *)v5->klass != CTouch_TouchEventHandler_TypeInfo )
        break;
    }
    v7 = CTouch_TypeInfo;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v7 = CTouch_TypeInfo;
    }
    v8 = sub_B6BFDC(&v7->static_fields->mOnTouchReleaseEvent, v6, mOnTouchReleaseEvent);
    v9 = mOnTouchReleaseEvent == (System_Delegate_o *)v8;
    mOnTouchReleaseEvent = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v5);
  CTouch__remove_mOnTouchReleaseEvent(v10, v11);
}


int32_t __fastcall CTouch__getDragFrameCnt(const MethodInfo *method)
{
  CTouch_c *v1; // x0

  if ( (byte_438E399 & 1) == 0 )
  {
    sub_B775C4(&CTouch_TypeInfo);
    byte_438E399 = 1;
  }
  v1 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v1 = CTouch_TypeInfo;
  }
  return v1->static_fields->mDragFrameCnt;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CTouch__getFlickDirX(const MethodInfo *method)
{
  CTouch_c *v1; // x0
  CTouch_c *v2; // x0
  __int64 zero; // kr00_8
  float x; // s8
  float y; // s9
  UnityEngine_Vector2_o v6; // kr08_8
  __int64 v9; // [xsp+10h] [xbp-30h] BYREF
  struct UnityEngine_Vector2_o mScrPosDelta; // [xsp+18h] [xbp-28h] BYREF
  UnityEngine_Vector2_o normalized; // 0:s0.4,4:s1.4

  if ( (byte_438E395 & 1) == 0 )
  {
    sub_B775C4(&CTouch_TypeInfo);
    byte_438E395 = 1;
  }
  v9 = 0LL;
  mScrPosDelta = 0LL;
  v1 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !CTouch__isFlick((const MethodInfo *)v1) )
    return 0;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !byte_438869A )
  {
    sub_B775C4(&CTouch_TypeInfo);
    byte_438869A = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v2 = CTouch_TypeInfo;
  }
  mScrPosDelta = v2->static_fields->mScrPosDelta;
  zero = (__int64)UnityEngine_Vector2__get_zero(0LL);
  v9 = zero;
  if ( mScrPosDelta.fields.x >= 0.0 && mScrPosDelta.fields.x <= 0.0 )
    return 0;
  LODWORD(v9) = zero;
  normalized = UnityEngine_Vector2__get_normalized((UnityEngine_Vector2_o)zero, (const MethodInfo *)&mScrPosDelta);
  x = normalized.fields.x;
  y = normalized.fields.y;
  v6 = UnityEngine_Vector2__get_normalized(normalized, (const MethodInfo *)&v9);
  if ( (float)((float)(x * v6.fields.x) + (float)(y * v6.fields.y)) < 0.75 )
    return 0;
  if ( *(float *)&v9 == INFINITY )
    return (int)-*(float *)&v9;
  else
    return (int)*(float *)&v9;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CTouch__getFlickDirY(const MethodInfo *method)
{
  CTouch_c *v1; // x0
  CTouch_c *v2; // x0
  struct CTouch_StaticFields *static_fields; // x8
  float y; // w19
  __int64 zero; // kr00_8
  float x; // s8
  float v7; // s9
  UnityEngine_Vector2_o v8; // kr08_8
  __int64 v11; // [xsp+0h] [xbp-30h] BYREF
  __int64 v12; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector2_o normalized; // 0:s0.4,4:s1.4

  if ( (byte_438E396 & 1) == 0 )
  {
    sub_B775C4(&CTouch_TypeInfo);
    byte_438E396 = 1;
  }
  v11 = 0LL;
  v12 = 0LL;
  v1 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !CTouch__isFlick((const MethodInfo *)v1) )
    return 0;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !byte_438869A )
  {
    sub_B775C4(&CTouch_TypeInfo);
    byte_438869A = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v2 = CTouch_TypeInfo;
  }
  static_fields = v2->static_fields;
  y = static_fields->mScrPosDelta.fields.y;
  *(float *)&v12 = static_fields->mScrPosDelta.fields.x;
  *((float *)&v12 + 1) = y;
  zero = (__int64)UnityEngine_Vector2__get_zero(0LL);
  v11 = zero;
  if ( y <= 0.0 && y >= 0.0 )
    return 0;
  HIDWORD(v11) = zero;
  normalized = UnityEngine_Vector2__get_normalized((UnityEngine_Vector2_o)zero, (const MethodInfo *)&v12);
  x = normalized.fields.x;
  v7 = normalized.fields.y;
  v8 = UnityEngine_Vector2__get_normalized(normalized, (const MethodInfo *)&v11);
  if ( (float)((float)(x * v8.fields.x) + (float)(v7 * v8.fields.y)) < 0.75 )
    return 0;
  if ( *((float *)&v11 + 1) == INFINITY )
    return (int)-*((float *)&v11 + 1);
  else
    return (int)*((float *)&v11 + 1);
}


UnityEngine_Vector2_o __fastcall CTouch__getPosNow(const MethodInfo *method)
{
  CTouch_c *v1; // x0
  struct CTouch_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_438E39A & 1) == 0 )
  {
    sub_B775C4(&CTouch_TypeInfo);
    byte_438E39A = 1;
  }
  v1 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v1 = CTouch_TypeInfo;
  }
  static_fields = v1->static_fields;
  x = static_fields->mPosNow.fields.x;
  y = static_fields->mPosNow.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Vector2_o __fastcall CTouch__getScrPosDelta(const MethodInfo *method)
{
  CTouch_c *v1; // x0
  struct CTouch_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_438E3A0 & 1) == 0 )
  {
    sub_B775C4(&CTouch_TypeInfo);
    byte_438E3A0 = 1;
  }
  v1 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v1 = CTouch_TypeInfo;
  }
  static_fields = v1->static_fields;
  x = static_fields->mScrPosDelta.fields.x;
  y = static_fields->mScrPosDelta.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


float __fastcall CTouch__getScrPosDeltaLen(const MethodInfo *method)
{
  CTouch_c *v1; // x0

  if ( (byte_438E3A2 & 1) == 0 )
  {
    sub_B775C4(&CTouch_TypeInfo);
    byte_438E3A2 = 1;
  }
  v1 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v1 = CTouch_TypeInfo;
  }
  return v1->static_fields->mScrPosDeltaLen;
}


float __fastcall CTouch__getScrPosDeltaLenOld(const MethodInfo *method)
{
  CTouch_c *v1; // x0

  if ( (byte_438E3A3 & 1) == 0 )
  {
    sub_B775C4(&CTouch_TypeInfo);
    byte_438E3A3 = 1;
  }
  v1 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v1 = CTouch_TypeInfo;
  }
  return v1->static_fields->mScrPosDeltaLenOld;
}


UnityEngine_Vector2_o __fastcall CTouch__getScrPosDeltaOld(const MethodInfo *method)
{
  CTouch_c *v1; // x0
  struct CTouch_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_438E3A1 & 1) == 0 )
  {
    sub_B775C4(&CTouch_TypeInfo);
    byte_438E3A1 = 1;
  }
  v1 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v1 = CTouch_TypeInfo;
  }
  static_fields = v1->static_fields;
  x = static_fields->mScrPosDeltaOld.fields.x;
  y = static_fields->mScrPosDeltaOld.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Vector2_o __fastcall CTouch__getScreenPosition(const MethodInfo *method)
{
  CTouch_c *v1; // x0
  struct CTouch_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_438E39C & 1) == 0 )
  {
    sub_B775C4(&CTouch_TypeInfo);
    byte_438E39C = 1;
  }
  v1 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v1 = CTouch_TypeInfo;
  }
  static_fields = v1->static_fields;
  x = static_fields->mScrPosNow.fields.x;
  y = static_fields->mScrPosNow.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o __fastcall CTouch__getScreenPosition_31095212(
        UnityEngine_Vector2_o tch_pos,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x1
  float y; // s8
  float x; // s9
  CTouch_c *v5; // x0
  float v6; // s0
  float v7; // s1
  UnityEngine_Vector2_o ScreenPosition_31095336; // kr00_8
  UnityEngine_Vector2_o v9; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  y = tch_pos.fields.y;
  x = tch_pos.fields.x;
  if ( (byte_438E39D & 1) == 0 )
  {
    sub_B775C4(&CTouch_TypeInfo);
    byte_438E39D = 1;
  }
  v5 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v5 = CTouch_TypeInfo;
  }
  v9.fields.x = x;
  v9.fields.y = y;
  ScreenPosition_31095336 = CTouch__getScreenPosition_31095336(v9, v5->static_fields->mScreenCam, v2);
  v7 = ScreenPosition_31095336.fields.y;
  v6 = ScreenPosition_31095336.fields.x;
  result.fields.y = v7;
  result.fields.x = v6;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o __fastcall CTouch__getScreenPosition_31095336(
        UnityEngine_Vector2_o tch_pos,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  __int64 v6; // x1
  float v7; // s1
  UnityEngine_Vector2_o zero; // kr00_8
  float v9; // s9
  CTouch_c *v10; // x0
  UnityEngine_Camera_o *mScreenCam; // x0
  float v12; // s0
  float v13; // s1
  float v14; // s9
  float v15; // s8
  unsigned int lossyScale; // s0
  float v17; // s10
  float v18; // s0
  UnityEngine_Ray_o v19; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Ray_o v20; // [xsp+20h] [xbp-50h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  y = tch_pos.fields.y;
  x = tch_pos.fields.x;
  if ( (byte_438E39F & 1) == 0 )
  {
    sub_B775C4(&CTouch_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_438E39F = 1;
  }
  memset(&v20, 0, sizeof(v20));
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0LL, 0LL) || x == 3.4028e38 || y == 3.4028e38 )
  {
    zero = UnityEngine_Vector2__get_zero(0LL);
    v7 = zero.fields.y;
    v9 = zero.fields.x;
  }
  else
  {
    v10 = CTouch_TypeInfo;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v10 = CTouch_TypeInfo;
    }
    mScreenCam = v10->static_fields->mScreenCam;
    if ( !mScreenCam )
      goto LABEL_20;
    v22.fields.z = 0.0;
    v22.fields.x = x;
    v22.fields.y = y;
    UnityEngine_Camera__ScreenPointToRay_41408892(&v19, mScreenCam, v22, 0LL);
    v20 = v19;
    *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Ray__get_origin(&v20, 0LL);
    mScreenCam = CTouch_TypeInfo->static_fields->mScreenCam;
    if ( !mScreenCam
      || (v14 = v12,
          v15 = v13,
          (mScreenCam = (UnityEngine_Camera_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)mScreenCam,
                                                  0LL)) == 0LL)
      || (lossyScale = (unsigned int)UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)mScreenCam, 0LL),
          (mScreenCam = CTouch_TypeInfo->static_fields->mScreenCam) == 0LL)
      || (v17 = *(float *)&lossyScale,
          (mScreenCam = (UnityEngine_Camera_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)mScreenCam,
                                                  0LL)) == 0LL) )
    {
LABEL_20:
      sub_B7769C(mScreenCam, v6);
    }
    v9 = v14 / v17;
    v23 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)mScreenCam, 0LL);
    v7 = v15 / v23.fields.y;
  }
  v18 = v9;
  result.fields.y = v7;
  result.fields.x = v18;
  return result;
}


UnityEngine_Vector2_o __fastcall CTouch__getScreenPosition_31095740(
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  CTouch_c *v2; // x0
  const MethodInfo *v3; // x1
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o ScreenPosition_31095336; // kr00_8
  UnityEngine_Vector2_o TouchPos; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_438E39E & 1) == 0 )
  {
    sub_B775C4(&CTouch_TypeInfo);
    byte_438E39E = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  TouchPos = CTouch__GetTouchPos((const MethodInfo *)v2);
  ScreenPosition_31095336 = CTouch__getScreenPosition_31095336(TouchPos, CTouch_TypeInfo->static_fields->mScreenCam, v3);
  y = ScreenPosition_31095336.fields.y;
  x = ScreenPosition_31095336.fields.x;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


int32_t __fastcall CTouch__getTouchState(const MethodInfo *method)
{
  CTouch_c *v1; // x0

  if ( (byte_438E38E & 1) == 0 )
  {
    sub_B775C4(&CTouch_TypeInfo);
    byte_438E38E = 1;
  }
  v1 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v1 = CTouch_TypeInfo;
  }
  return v1->static_fields->mState;
}


void __fastcall CTouch__init(const MethodInfo *method)
{
  CTouch_c *v1; // x0
  struct CTouch_StaticFields **p_static_fields; // x8
  struct CTouch_StaticFields *static_fields; // x9
  bool *p_mIsInitDone; // x9
  _BOOL4 mIsInitDone; // t1

  if ( (byte_438E38A & 1) == 0 )
  {
    sub_B775C4(&CTouch_TypeInfo);
    byte_438E38A = 1;
  }
  v1 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v1 = CTouch_TypeInfo;
  }
  p_static_fields = &v1->static_fields;
  static_fields = v1->static_fields;
  mIsInitDone = static_fields->mIsInitDone;
  p_mIsInitDone = &static_fields->mIsInitDone;
  if ( !mIsInitDone )
  {
    if ( (BYTE3(v1->vtable._0_Equals.methodPtr) & 4) != 0 && !v1->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v1);
      p_static_fields = &CTouch_TypeInfo->static_fields;
      p_mIsInitDone = &CTouch_TypeInfo->static_fields->mIsInitDone;
    }
    *p_mIsInitDone = 1;
    (*p_static_fields)->mIsReq_MultiTouchEnabled = 1;
    (*p_static_fields)->mIsClassEnabled = 1;
  }
}


bool __fastcall CTouch__isDrag(const MethodInfo *method)
{
  CTouch_c *v1; // x0
  CTouch_c *v2; // x0

  if ( (byte_438E398 & 1) == 0 )
  {
    sub_B775C4(&CTouch_TypeInfo);
    byte_438E398 = 1;
  }
  v1 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !CTouch__isDragMode((const MethodInfo *)v1) )
    return 0;
  v2 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  return CTouch__isTouchKeep((const MethodInfo *)v2);
}


bool __fastcall CTouch__isDragMode(const MethodInfo *method)
{
  CTouch_c *v1; // x0

  if ( (byte_438E397 & 1) == 0 )
  {
    sub_B775C4(&CTouch_TypeInfo);
    byte_438E397 = 1;
  }
  v1 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v1 = CTouch_TypeInfo;
  }
  return v1->static_fields->mDragFrameCnt >= 0;
}


bool __fastcall CTouch__isFlick(const MethodInfo *method)
{
  CTouch_c *v1; // x0

  if ( (byte_438E393 & 1) == 0 )
  {
    sub_B775C4(&CTouch_TypeInfo);
    byte_438E393 = 1;
  }
  v1 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v1 = CTouch_TypeInfo;
  }
  return CTouch__isFlick_31092824(v1->static_fields->FLICK_LEN, (const MethodInfo *)v1);
}


bool __fastcall CTouch__isFlick_31092824(float flickLen, const MethodInfo *method)
{
  CTouch_c *v3; // x0
  CTouch_c *v4; // x0

  if ( (byte_438E394 & 1) == 0 )
  {
    sub_B775C4(&CTouch_TypeInfo);
    byte_438E394 = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !CTouch__isTouchRelease((const MethodInfo *)v3) )
    return 0;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !byte_438E47F )
  {
    sub_B775C4(&CTouch_TypeInfo);
    byte_438E47F = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v4 = CTouch_TypeInfo;
  }
  return v4->static_fields->mScrPosDeltaLen >= flickLen;
}


bool __fastcall CTouch__isTouchKeep(const MethodInfo *method)
{
  CTouch_c *v1; // x0

  if ( (byte_438E391 & 1) == 0 )
  {
    sub_B775C4(&CTouch_TypeInfo);
    byte_438E391 = 1;
  }
  v1 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v1 = CTouch_TypeInfo;
  }
  return v1->static_fields->mState == 2;
}


bool __fastcall CTouch__isTouchNone(const MethodInfo *method)
{
  CTouch_c *v1; // x0

  if ( (byte_438E38F & 1) == 0 )
  {
    sub_B775C4(&CTouch_TypeInfo);
    byte_438E38F = 1;
  }
  v1 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v1 = CTouch_TypeInfo;
  }
  return v1->static_fields->mState == 0;
}


bool __fastcall CTouch__isTouchPush(const MethodInfo *method)
{
  CTouch_c *v1; // x0

  if ( (byte_438E390 & 1) == 0 )
  {
    sub_B775C4(&CTouch_TypeInfo);
    byte_438E390 = 1;
  }
  v1 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v1 = CTouch_TypeInfo;
  }
  return v1->static_fields->mState == 1;
}


bool __fastcall CTouch__isTouchRelease(const MethodInfo *method)
{
  CTouch_c *v1; // x0

  if ( (byte_438E392 & 1) == 0 )
  {
    sub_B775C4(&CTouch_TypeInfo);
    byte_438E392 = 1;
  }
  v1 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v1 = CTouch_TypeInfo;
  }
  return v1->static_fields->mState == 3;
}


void __fastcall CTouch__process(const MethodInfo *method)
{
  CTouch_c *v1; // x0
  struct CTouch_StaticFields *static_fields; // x8
  int32_t mProcessOldFrameCount; // w19
  int32_t frameCount; // w0
  CTouch_c *v5; // x8
  int32_t v6; // w19
  CTouch_c *v7; // x0
  CTouch_c *v8; // x0
  bool v9; // w0
  CTouch_c *v10; // x0

  if ( (byte_438E38D & 1) == 0 )
  {
    sub_B775C4(&CTouch_TypeInfo);
    byte_438E38D = 1;
  }
  v1 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v1 = CTouch_TypeInfo;
  }
  static_fields = v1->static_fields;
  if ( static_fields->mIsInitDone )
  {
    if ( (BYTE3(v1->vtable._0_Equals.methodPtr) & 4) != 0 && !v1->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v1);
      v1 = CTouch_TypeInfo;
      static_fields = CTouch_TypeInfo->static_fields;
    }
    if ( static_fields->mIsClassEnabled )
    {
      if ( (BYTE3(v1->vtable._0_Equals.methodPtr) & 4) != 0 && !v1->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v1);
        static_fields = CTouch_TypeInfo->static_fields;
      }
      mProcessOldFrameCount = static_fields->mProcessOldFrameCount;
      if ( mProcessOldFrameCount != UnityEngine_Time__get_frameCount(0LL) )
      {
        frameCount = UnityEngine_Time__get_frameCount(0LL);
        v5 = CTouch_TypeInfo;
        v6 = frameCount;
        if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
          v5 = CTouch_TypeInfo;
        }
        v5->static_fields->mProcessOldFrameCount = v6;
        if ( !UnityEngine_Input__get_multiTouchEnabled(0LL) )
          goto LABEL_39;
        v7 = CTouch_TypeInfo;
        if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
          v7 = CTouch_TypeInfo;
        }
        if ( !v7->static_fields->mIsReq_MultiTouchEnabled )
        {
          if ( UnityEngine_Input__get_touchCount(0LL) > 0 )
          {
LABEL_33:
            v10 = CTouch_TypeInfo;
            if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
            CTouch__processSingleTouch((const MethodInfo *)v10);
            return;
          }
          v9 = 0;
        }
        else
        {
LABEL_39:
          if ( UnityEngine_Input__get_multiTouchEnabled(0LL) )
            goto LABEL_33;
          v8 = CTouch_TypeInfo;
          if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
            v8 = CTouch_TypeInfo;
          }
          if ( !v8->static_fields->mIsReq_MultiTouchEnabled )
            goto LABEL_33;
          v9 = 1;
        }
        UnityEngine_Input__set_multiTouchEnabled(v9, 0LL);
        goto LABEL_33;
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CTouch__processSingleTouch(const MethodInfo *method)
{
  const MethodInfo *v1; // x0
  CTouch_c *v2; // x0
  const MethodInfo *v3; // x1
  const MethodInfo *v4; // x1
  CTouch_c *v5; // x0
  struct UnityEngine_Touch_array *mTouch; // x20
  int32_t ValidTouchLastID; // w0
  _QWORD *p_image; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x0
  struct UnityEngine_Vector2_o ScreenPosition_31095212; // kr08_8
  CTouch_c *v12; // x0
  __int64 v13; // x8
  const MethodInfo *touchCount; // x0
  CTouch_c *v15; // x8
  struct UnityEngine_Vector2_o v16; // kr10_8
  CTouch_c *v17; // x8
  struct UnityEngine_Vector2_o zero; // kr20_8
  CTouch_c *v19; // x0
  CTouch_TouchEventHandler_o *mOnTouchPressEvent; // x8
  __int64 v21; // x8
  __int64 v22; // x8
  __int64 v23; // x8
  __int64 v24; // x8
  CTouch_c *v25; // x0
  CTouch_TouchEventHandler_o *mOnTouchReleaseEvent; // x8
  CTouch_c *v27; // x0
  _BOOL8 isTouchKeep; // x0
  CTouch_c *v29; // x8
  struct CTouch_StaticFields *static_fields; // x9
  int32_t *p_mDragFrameCnt; // x9
  int32_t v32; // w10
  int32_t mDragFrameCnt; // t1
  struct CTouch_StaticFields *v34; // x9
  int32_t v35; // t1
  bool v36; // w0
  CTouch_c *v37; // x8
  float32x2_t *v38; // x9
  float32x2_t v39; // d1 OVERLAPPED
  unsigned __int64 v40; // d0
  float magnitude; // s0
  struct CTouch_StaticFields *v42; // x9
  struct CTouch_StaticFields *v43; // x8
  float x; // s8
  float y; // s9
  UnityEngine_Vector2_o v46; // kr28_8
  float v47; // s1
  float v48; // s0
  CTouch_c *v49; // x0
  __int64 v50; // x0
  char v51[72]; // [xsp+8h] [xbp-108h] BYREF
  UnityEngine_Touch_o v52; // [xsp+50h] [xbp-C0h] BYREF
  char v53[72]; // [xsp+98h] [xbp-78h] BYREF
  unsigned __int64 v54; // [xsp+F8h] [xbp-18h] BYREF

  if ( (byte_438E3A4 & 1) == 0 )
  {
    sub_B775C4(&CTouch_TypeInfo);
    byte_438E3A4 = 1;
  }
  v54 = 0LL;
  v1 = (const MethodInfo *)CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v1 = (const MethodInfo *)CTouch_TypeInfo;
  }
  HIDWORD(v1[2].klass->_1.name) = 0;
  CTouch_TypeInfo->static_fields->mPosNow = CTouch__GetTouchPos(v1);
  if ( UnityEngine_Input__get_touchCount(0LL) < 1 )
    goto LABEL_21;
  v2 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( CTouch__GetValidTouchCount((const MethodInfo *)v2) != 1 )
    goto LABEL_21;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( (CTouch__GetValidTouchLastID(1, v3) & 0x80000000) == 0 )
  {
    v5 = CTouch_TypeInfo;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v5 = CTouch_TypeInfo;
    }
    mTouch = v5->static_fields->mTouch;
    ValidTouchLastID = CTouch__GetValidTouchLastID(1, v4);
    UnityEngine_Input__GetTouch(&v52, ValidTouchLastID, 0LL);
    p_image = memcpy(v53, &v52, 0x44u);
    if ( !mTouch )
      goto LABEL_145;
    p_image = memcpy(v51, v53, 0x44u);
    if ( !mTouch->max_length )
      goto LABEL_144;
    memcpy(&mTouch->m_Items[0].fields.m_Position, v51, 0x44u);
LABEL_21:
    v10 = (const MethodInfo *)CTouch_TypeInfo;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v10 = (const MethodInfo *)CTouch_TypeInfo;
    }
    *(_QWORD *)&v10[2].klass->_1.this_arg.bits = *(_QWORD *)&v10[2].klass->_1.byval_arg.bits;
    ScreenPosition_31095212 = CTouch__getScreenPosition_31095212((UnityEngine_Vector2_o)v10[2].klass->_1.namespaze, v10);
    v12 = CTouch_TypeInfo;
    CTouch_TypeInfo->static_fields->mScrPosNow = ScreenPosition_31095212;
    if ( v12->static_fields->mIsTchNow )
      goto LABEL_50;
    if ( (BYTE3(v12->vtable._0_Equals.methodPtr) & 4) != 0 && !v12->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v12);
    if ( CTouch__GetValidTouchCount((const MethodInfo *)v12) != 1 )
      goto LABEL_50;
    if ( UnityEngine_Input__get_touchCount(0LL) >= 1 )
    {
      p_image = &CTouch_TypeInfo->_1.image;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        p_image = &CTouch_TypeInfo->_1.image;
      }
      v13 = *(_QWORD *)(p_image[23] + 8LL);
      if ( !v13 )
        goto LABEL_145;
      if ( !*(_DWORD *)(v13 + 24) )
        goto LABEL_144;
      if ( !UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v13 + 32), 0LL) )
        goto LABEL_37;
    }
    if ( !UnityEngine_Input__GetMouseButtonDown(0, 0LL) )
    {
LABEL_50:
      v19 = CTouch_TypeInfo;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v19 = CTouch_TypeInfo;
      }
      if ( v19->static_fields->mIsTchNow )
      {
        if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v19);
        if ( CTouch__GetValidTouchCount((const MethodInfo *)v19) == 1 )
        {
          p_image = &CTouch_TypeInfo->_1.image;
          if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
            p_image = &CTouch_TypeInfo->_1.image;
          }
          v21 = *(_QWORD *)(p_image[23] + 8LL);
          if ( !v21 )
            goto LABEL_145;
          if ( !*(_DWORD *)(v21 + 24) )
            goto LABEL_144;
          if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v21 + 32), 0LL) == 1 )
            goto LABEL_74;
          p_image = &CTouch_TypeInfo->_1.image;
          if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
            p_image = &CTouch_TypeInfo->_1.image;
          }
          v22 = *(_QWORD *)(p_image[23] + 8LL);
          if ( !v22 )
            goto LABEL_145;
          if ( !*(_DWORD *)(v22 + 24) )
            goto LABEL_144;
          if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v22 + 32), 0LL) == 2 )
            goto LABEL_74;
        }
        v19 = CTouch_TypeInfo;
        if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
          v19 = CTouch_TypeInfo;
        }
        if ( v19->static_fields->mIsTchMouseNow )
        {
LABEL_74:
          v19 = CTouch_TypeInfo;
          if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
            v19 = CTouch_TypeInfo;
          }
          v19->static_fields->mState = 2;
        }
      }
    }
    else
    {
LABEL_37:
      touchCount = (const MethodInfo *)UnityEngine_Input__get_touchCount(0LL);
      v15 = CTouch_TypeInfo;
      if ( !(_DWORD)touchCount )
      {
        if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
          v15 = CTouch_TypeInfo;
        }
        v15->static_fields->mIsTchMouseNow = 1;
      }
      if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = CTouch_TypeInfo;
      }
      v15->static_fields->mIsTchNow = 1;
      v15->static_fields->mState = 1;
      v15->static_fields->mPosPush = v15->static_fields->mPosNow;
      v16 = CTouch__getScreenPosition_31095212(v15->static_fields->mPosPush, touchCount);
      v17 = CTouch_TypeInfo;
      CTouch_TypeInfo->static_fields->mScrPosPush = v16;
      v17->static_fields->mScrPosOld = v17->static_fields->mScrPosNow;
      CTouch_TypeInfo->static_fields->mScrPosDeltaOld = UnityEngine_Vector2__get_zero(0LL);
      zero = UnityEngine_Vector2__get_zero(0LL);
      v19 = CTouch_TypeInfo;
      CTouch_TypeInfo->static_fields->mScrPosDelta = zero;
      v19->static_fields->mDragFrameCnt = -1;
      v19->static_fields->mDragLen = 0.0;
      mOnTouchPressEvent = v19->static_fields->mOnTouchPressEvent;
      if ( mOnTouchPressEvent )
      {
        if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v19);
          mOnTouchPressEvent = CTouch_TypeInfo->static_fields->mOnTouchPressEvent;
          if ( !mOnTouchPressEvent )
            goto LABEL_145;
        }
        CTouch_TouchEventHandler__Invoke(mOnTouchPressEvent, 0LL);
        v19 = CTouch_TypeInfo;
      }
    }
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = CTouch_TypeInfo;
    }
    if ( !v19->static_fields->mIsTchNow )
      goto LABEL_107;
    if ( (BYTE3(v19->vtable._0_Equals.methodPtr) & 4) != 0 && !v19->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v19);
    if ( CTouch__GetValidTouchCount((const MethodInfo *)v19) != 1 )
    {
LABEL_98:
      if ( !UnityEngine_Input__GetMouseButtonUp(0, 0LL) )
        goto LABEL_107;
LABEL_99:
      v25 = CTouch_TypeInfo;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v25 = CTouch_TypeInfo;
      }
      v25->static_fields->mIsTchMouseNow = 0;
      v25->static_fields->mIsTchNow = 0;
      v25->static_fields->mState = 3;
      mOnTouchReleaseEvent = v25->static_fields->mOnTouchReleaseEvent;
      if ( !mOnTouchReleaseEvent )
        goto LABEL_107;
      if ( (BYTE3(v25->vtable._0_Equals.methodPtr) & 4) == 0
        || v25->_2.cctor_finished
        || (j_il2cpp_runtime_class_init_0(v25),
            (mOnTouchReleaseEvent = CTouch_TypeInfo->static_fields->mOnTouchReleaseEvent) != 0LL) )
      {
        CTouch_TouchEventHandler__Invoke(mOnTouchReleaseEvent, 0LL);
LABEL_107:
        v27 = CTouch_TypeInfo;
        if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        isTouchKeep = CTouch__isTouchKeep((const MethodInfo *)v27);
        v29 = CTouch_TypeInfo;
        if ( isTouchKeep )
        {
          if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
            v29 = CTouch_TypeInfo;
          }
          static_fields = v29->static_fields;
          mDragFrameCnt = static_fields->mDragFrameCnt;
          p_mDragFrameCnt = &static_fields->mDragFrameCnt;
          v32 = mDragFrameCnt;
          if ( (mDragFrameCnt & 0x80000000) == 0 )
          {
            if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v29);
              v29 = CTouch_TypeInfo;
              v34 = CTouch_TypeInfo->static_fields;
              v35 = v34->mDragFrameCnt;
              p_mDragFrameCnt = &v34->mDragFrameCnt;
              v32 = v35;
            }
            *p_mDragFrameCnt = v32 + 1;
          }
        }
        if ( (BYTE3(v29->vtable._0_Equals.methodPtr) & 4) != 0 && !v29->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v29);
        v36 = CTouch__isTouchKeep((const MethodInfo *)isTouchKeep);
        v37 = CTouch_TypeInfo;
        if ( v36 )
        {
          if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
            v37 = CTouch_TypeInfo;
          }
          v38 = (float32x2_t *)v37->static_fields;
          if ( (v38[11].n64_u32[0] & 0x80000000) != 0 )
          {
            if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v37);
              v38 = (float32x2_t *)CTouch_TypeInfo->static_fields;
            }
            v39.n64_u64[0] = v38[6].n64_u64[0];
            v40 = vsub_f32(v38[5], v39).n64_u64[0];
            v54 = v40;
            magnitude = UnityEngine_Vector2__get_magnitude(
                          *(UnityEngine_Vector2_o *)((char *)&v39 - 4),
                          (const MethodInfo *)&v54);
            v37 = CTouch_TypeInfo;
            CTouch_TypeInfo->static_fields->mDragLen = magnitude;
            v42 = v37->static_fields;
            if ( v42->mDragLen >= v42->DRAG_LEN )
            {
              if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v37);
                v37 = CTouch_TypeInfo;
                v42 = CTouch_TypeInfo->static_fields;
              }
              v42->mDragFrameCnt = 0;
            }
          }
        }
        if ( (BYTE3(v37->vtable._0_Equals.methodPtr) & 4) != 0 && !v37->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v37);
          v37 = CTouch_TypeInfo;
        }
        v37->static_fields->mScrPosDeltaOld = v37->static_fields->mScrPosDelta;
        v37->static_fields->mScrPosDelta = (struct UnityEngine_Vector2_o)vsub_f32(
                                                                           (float32x2_t)v37->static_fields->mScrPosNow,
                                                                           (float32x2_t)v37->static_fields->mScrPosOld).n64_u64[0];
        v37->static_fields->mScrPosDeltaLenOld = v37->static_fields->mScrPosDeltaLen;
        v37->static_fields->mScrPosDeltaLen = 0.0;
        v43 = v37->static_fields;
        x = v43->mScrPosDelta.fields.x;
        y = v43->mScrPosDelta.fields.y;
        v46 = UnityEngine_Vector2__get_zero(0LL);
        v47 = (float)(y - v46.fields.y) * (float)(y - v46.fields.y);
        v48 = (float)((float)(x - v46.fields.x) * (float)(x - v46.fields.x)) + v47;
        if ( v48 >= 1.0e-10 )
        {
          v49 = CTouch_TypeInfo;
          if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
          {
            LODWORD(v48) = j_il2cpp_runtime_class_init_0(CTouch_TypeInfo).n128_u32[0];
            v49 = CTouch_TypeInfo;
          }
          CTouch_TypeInfo->static_fields->mScrPosDeltaLen = UnityEngine_Vector2__get_magnitude(
                                                              *(UnityEngine_Vector2_o *)&v48,
                                                              (const MethodInfo *)&v49->static_fields->mScrPosDelta);
        }
        return;
      }
LABEL_145:
      sub_B7769C(p_image, v9);
    }
    p_image = &CTouch_TypeInfo->_1.image;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      p_image = &CTouch_TypeInfo->_1.image;
    }
    v23 = *(_QWORD *)(p_image[23] + 8LL);
    if ( !v23 )
      goto LABEL_145;
    if ( *(_DWORD *)(v23 + 24) )
    {
      if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v23 + 32), 0LL) == 3 )
        goto LABEL_99;
      p_image = &CTouch_TypeInfo->_1.image;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        p_image = &CTouch_TypeInfo->_1.image;
      }
      v24 = *(_QWORD *)(p_image[23] + 8LL);
      if ( !v24 )
        goto LABEL_145;
      if ( *(_DWORD *)(v24 + 24) )
      {
        if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v24 + 32), 0LL) == 4 )
          goto LABEL_99;
        goto LABEL_98;
      }
    }
LABEL_144:
    v50 = sub_B776C8(p_image);
    sub_B77668(v50, 0LL);
  }
}


void __fastcall CTouch__reboot(const MethodInfo *method)
{
  CTouch_c *v1; // x0

  if ( (byte_438E389 & 1) == 0 )
  {
    sub_B775C4(&CTouch_TypeInfo);
    byte_438E389 = 1;
  }
  v1 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v1 = CTouch_TypeInfo;
  }
  v1->static_fields->mIsInitDone = 0;
}


void __fastcall CTouch__remove_OnTouchPressEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  if ( (byte_438E388 & 1) == 0 )
  {
    sub_B775C4(&CTouch_TypeInfo);
    byte_438E388 = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__remove_mOnTouchPressEvent(value, method);
}


void __fastcall CTouch__remove_OnTouchReleaseEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  if ( (byte_438E384 & 1) == 0 )
  {
    sub_B775C4(&CTouch_TypeInfo);
    byte_438E384 = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__remove_mOnTouchReleaseEvent(value, method);
}


void __fastcall CTouch__remove_mOnTouchPressEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  CTouch_c *v3; // x0
  System_Delegate_o *mOnTouchPressEvent; // x20
  System_Delegate_o *v5; // x0
  System_Delegate_o *v6; // x21
  CTouch_c *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CTouch_TouchEventHandler_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_438E386 & 1) == 0 )
  {
    sub_B775C4(&CTouch_TypeInfo);
    sub_B775C4(&CTouch_TouchEventHandler_TypeInfo);
    byte_438E386 = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v3 = CTouch_TypeInfo;
  }
  mOnTouchPressEvent = (System_Delegate_o *)v3->static_fields->mOnTouchPressEvent;
  while ( 1 )
  {
    v5 = System_Delegate__Remove(mOnTouchPressEvent, (System_Delegate_o *)value, 0LL);
    v6 = v5;
    if ( v5 )
    {
      if ( (CTouch_TouchEventHandler_c *)v5->klass != CTouch_TouchEventHandler_TypeInfo )
        break;
    }
    v7 = CTouch_TypeInfo;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v7 = CTouch_TypeInfo;
    }
    v8 = sub_B6BFDC(&v7->static_fields->mOnTouchPressEvent, v6, mOnTouchPressEvent);
    v9 = mOnTouchPressEvent == (System_Delegate_o *)v8;
    mOnTouchPressEvent = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v5);
  CTouch__add_OnTouchPressEvent(v10, v11);
}


void __fastcall CTouch__remove_mOnTouchReleaseEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  CTouch_c *v3; // x0
  System_Delegate_o *mOnTouchReleaseEvent; // x20
  System_Delegate_o *v5; // x0
  System_Delegate_o *v6; // x21
  CTouch_c *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CTouch_TouchEventHandler_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_438E382 & 1) == 0 )
  {
    sub_B775C4(&CTouch_TypeInfo);
    sub_B775C4(&CTouch_TouchEventHandler_TypeInfo);
    byte_438E382 = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v3 = CTouch_TypeInfo;
  }
  mOnTouchReleaseEvent = (System_Delegate_o *)v3->static_fields->mOnTouchReleaseEvent;
  while ( 1 )
  {
    v5 = System_Delegate__Remove(mOnTouchReleaseEvent, (System_Delegate_o *)value, 0LL);
    v6 = v5;
    if ( v5 )
    {
      if ( (CTouch_TouchEventHandler_c *)v5->klass != CTouch_TouchEventHandler_TypeInfo )
        break;
    }
    v7 = CTouch_TypeInfo;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v7 = CTouch_TypeInfo;
    }
    v8 = sub_B6BFDC(&v7->static_fields->mOnTouchReleaseEvent, v6, mOnTouchReleaseEvent);
    v9 = mOnTouchReleaseEvent == (System_Delegate_o *)v8;
    mOnTouchReleaseEvent = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_B77990(v5);
  CTouch__add_OnTouchReleaseEvent(v10, v11);
}


void __fastcall CTouch__setParam(
        float flick_len,
        float drag_len,
        UnityEngine_Camera_o *screen_cam,
        const MethodInfo *method)
{
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  CTouch_c *v13; // x0
  struct CTouch_StaticFields *static_fields; // x8
  CTouch_c *v15; // x0
  struct CTouch_StaticFields *v16; // x0

  if ( (byte_438E38B & 1) == 0 )
  {
    sub_B775C4(&CTouch_TypeInfo);
    byte_438E38B = 1;
  }
  v13 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v13 = CTouch_TypeInfo;
  }
  static_fields = v13->static_fields;
  if ( static_fields->mIsInitDone )
  {
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      static_fields = CTouch_TypeInfo->static_fields;
    }
    static_fields->FLICK_LEN = flick_len;
    CTouch_TypeInfo->static_fields->DRAG_LEN = drag_len;
    if ( !byte_4387B34 )
    {
      sub_B775C4(&CTouch_TypeInfo);
      byte_4387B34 = 1;
    }
    v15 = CTouch_TypeInfo;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v15 = CTouch_TypeInfo;
    }
    v16 = v15->static_fields;
    v16->mScreenCam = screen_cam;
    sub_B77560(
      (BattleServantConfConponent_o *)&v16->mScreenCam,
      (System_Int32_array **)screen_cam,
      v4,
      v5,
      v6,
      v7,
      v8,
      v9);
  }
}


void __fastcall CTouch__setScreenCamera(UnityEngine_Camera_o *cam, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  CTouch_c *v9; // x0
  struct CTouch_StaticFields *static_fields; // x0

  if ( (byte_438E38C & 1) == 0 )
  {
    sub_B775C4(&CTouch_TypeInfo);
    byte_438E38C = 1;
  }
  v9 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v9 = CTouch_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->mScreenCam = cam;
  sub_B77560(
    (BattleServantConfConponent_o *)&static_fields->mScreenCam,
    (System_Int32_array **)cam,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CTouch_TouchEventHandler___ctor(
        CTouch_TouchEventHandler_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B77560(p_method);
}


System_IAsyncResult_o *__fastcall CTouch_TouchEventHandler__BeginInvoke(
        CTouch_TouchEventHandler_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B77568(this, &v5, callback, object);
}


void __fastcall CTouch_TouchEventHandler__EndInvoke(
        CTouch_TouchEventHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


void __fastcall CTouch_TouchEventHandler__Invoke(CTouch_TouchEventHandler_o *this, const MethodInfo *method)
{
  __int64 v2; // x8
  __int64 v4; // x23
  CTouch_TouchEventHandler_o **v5; // x24
  __int64 v6; // x25
  unsigned int v7; // w22
  __int64 class_0; // x0
  __int64 v9; // x8
  unsigned __int64 v10; // x10
  _DWORD *v11; // x11
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0
  void (__fastcall **v15)(__int64 *, _QWORD); // x0
  CTouch_TouchEventHandler_o *v16; // x8
  __int64 *v17; // x20
  __int64 v18; // x21
  void (__fastcall *v19)(__int64); // x22
  char v20; // w22
  char v21; // w0
  __int64 v22; // x8
  __int64 v23; // x1
  __int64 v24; // x2
  unsigned __int64 v25; // x10
  _DWORD *v26; // x11
  CTouch_TouchEventHandler_o *v27; // [xsp+8h] [xbp-38h] BYREF

  v27 = this;
  v2 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v2 )
  {
    v5 = &v27;
    v4 = 1LL;
    goto LABEL_5;
  }
  v4 = *(_QWORD *)(v2 + 24);
  if ( v4 )
  {
    v5 = (CTouch_TouchEventHandler_o **)(v2 + 32);
LABEL_5:
    v6 = 0LL;
    while ( 1 )
    {
      v16 = v5[v6];
      v17 = *(__int64 **)&v16->fields.method;
      v18 = *(_QWORD *)&v16->fields.extra_arg;
      v19 = *(void (__fastcall **)(__int64))&v16->fields.method_ptr;
      if ( *(__int16 *)(v18 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v16->fields.extra_arg, method);
      if ( (sub_B775F4(v18) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v18 + 74) )
        goto LABEL_35;
      v19(v18);
LABEL_36:
      if ( ++v6 == v4 )
        return;
    }
    if ( v17 && *(__int16 *)(v18 + 72) != -1 && (*(_BYTE *)(*v17 + 277) & 1) == 0 && this->fields.m_target )
    {
      v20 = sub_B775EC(v18);
      v21 = sub_B779F0(v18);
      if ( (v20 & 1) != 0 )
      {
        if ( (v21 & 1) != 0 )
        {
          v22 = *v17;
          v23 = *(_QWORD *)(v18 + 24);
          v24 = *(unsigned __int16 *)(v18 + 72);
          if ( *(_WORD *)(*v17 + 298) )
          {
            v25 = 0LL;
            v26 = (_DWORD *)(*(_QWORD *)(v22 + 176) + 8LL);
            while ( *((_QWORD *)v26 - 1) != v23 )
            {
              ++v25;
              v26 += 4;
              if ( v25 >= *(unsigned __int16 *)(*v17 + 298) )
                goto LABEL_34;
            }
            v14 = v22 + 16LL * (*v26 + (int)v24) + 312;
          }
          else
          {
LABEL_34:
            v14 = sub_B0F4C0(v17, v23, v24);
          }
          v13 = *(_QWORD *)(v14 + 8);
        }
        else
        {
          v13 = *(_QWORD *)(*v17 + 16LL * *(unsigned __int16 *)(v18 + 72) + 320);
        }
        v15 = (void (__fastcall **)(__int64 *, _QWORD))sub_B77674(v13, v18);
        (*v15)(v17, v15);
      }
      else
      {
        v7 = *(unsigned __int16 *)(v18 + 72);
        if ( (v21 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v18);
          v9 = *v17;
          if ( *(_WORD *)(*v17 + 298) )
          {
            v10 = 0LL;
            v11 = (_DWORD *)(*(_QWORD *)(v9 + 176) + 8LL);
            while ( *((_QWORD *)v11 - 1) != class_0 )
            {
              ++v10;
              v11 += 4;
              if ( v10 >= *(unsigned __int16 *)(*v17 + 298) )
                goto LABEL_11;
            }
            v12 = v9 + 16LL * (int)(*v11 + v7) + 312;
          }
          else
          {
LABEL_11:
            v12 = sub_B0F4C0(v17, class_0, v7);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v12)(v17, *(_QWORD *)(v12 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v17 + 16LL * *(unsigned __int16 *)(v18 + 72) + 312))(
            v17,
            *(_QWORD *)(*v17 + 16LL * *(unsigned __int16 *)(v18 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v19)(v17, v18);
    goto LABEL_36;
  }
}