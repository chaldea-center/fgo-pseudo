void __fastcall CTouch___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  System_Int32_array **v5; // x0
  struct CTouch_StaticFields *static_fields; // x8
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  CTouch_c *v13; // x8
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_List_int__o *v16; // x19
  struct CTouch_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7

  if ( (byte_4216428 & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, v1);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int___ctor__, v2);
    sub_B0D8A4(&System_Collections_Generic_List_int__TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_Touch___TypeInfo, v4);
    byte_4216428 = 1;
  }
  CTouch_TypeInfo->static_fields->FLICK_LEN = 5.0;
  CTouch_TypeInfo->static_fields->DRAG_LEN = 15.0;
  v5 = (System_Int32_array **)sub_B0D8BC(UnityEngine_Touch___TypeInfo, 1LL);
  static_fields = CTouch_TypeInfo->static_fields;
  static_fields->mTouch = (struct UnityEngine_Touch_array *)v5;
  sub_B0D840((BattleServantConfConponent_o *)&static_fields->mTouch, v5, v7, v8, v9, v10, v11, v12);
  v13 = CTouch_TypeInfo;
  CTouch_TypeInfo->static_fields->mIsTchNow = 0;
  v13->static_fields->mIsTchMouseNow = 0;
  v13->static_fields->mState = 0;
  v13->static_fields->mDragFrameCnt = -1;
  v13->static_fields->mIsClassEnabled = 0;
  v16 = (System_Collections_Generic_List_int__o *)sub_B0D974(System_Collections_Generic_List_int__TypeInfo, v14, v15);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_2FAF1A4 *)Method_System_Collections_Generic_List_int___ctor__);
  v17 = CTouch_TypeInfo->static_fields;
  v17->ignoreFingerIDList = v16;
  sub_B0D840(
    (BattleServantConfConponent_o *)&v17->ignoreFingerIDList,
    (System_Int32_array **)v16,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
}


System_Collections_Generic_List_int__o *__fastcall CTouch__GetIgnoreFingerIDList(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0

  if ( (byte_4216426 & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, v1);
    byte_4216426 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v2 = CTouch_TypeInfo;
  }
  return v2->static_fields->ignoreFingerIDList;
}


UnityEngine_Vector2_o __fastcall CTouch__GetTouchPos(const MethodInfo *method)
{
  __int64 v1; // x1
  float x; // s8
  float y; // s9
  UnityEngine_Vector2_o zero; // kr00_8
  CTouch_c *v5; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  int32_t ValidTouchLastID; // w0
  float v9; // s0
  float v10; // s1
  UnityEngine_Vector2_o position; // kr08_8
  UnityEngine_Vector2_o v12; // kr10_8
  float v13; // s0
  float v14; // s1
  UnityEngine_Touch_o v15; // [xsp+0h] [xbp-B0h] BYREF
  UnityEngine_Touch_o v16; // [xsp+48h] [xbp-68h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_421641B & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, v1);
    byte_421641B = 1;
  }
  memset(&v16, 0, sizeof(v16));
  zero = UnityEngine_Vector2__get_zero(0LL);
  y = zero.fields.y;
  x = zero.fields.x;
  if ( UnityEngine_Input__get_touchCount(0LL) >= 1 )
  {
    v5 = CTouch_TypeInfo;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    if ( CTouch__GetValidTouchCount((const MethodInfo *)v5) == 1 )
    {
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      if ( (CTouch__GetValidTouchLastID(1, v6) & 0x80000000) != 0 )
      {
        v12 = UnityEngine_Vector2__get_zero(0LL);
        v10 = v12.fields.y;
        v9 = v12.fields.x;
      }
      else
      {
        if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        ValidTouchLastID = CTouch__GetValidTouchLastID(1, v7);
        UnityEngine_Input__GetTouch(&v15, ValidTouchLastID, 0LL);
        memcpy(&v16, &v15, sizeof(v16));
        position = UnityEngine_Touch__get_position(&v16, 0LL);
        v10 = position.fields.y;
        v9 = position.fields.x;
      }
      x = v9;
      y = v10;
    }
  }
  v13 = x;
  v14 = y;
  result.fields.y = v14;
  result.fields.x = v13;
  return result;
}


int32_t __fastcall CTouch__GetValidTouchCount(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 touchCount; // x0
  int v4; // w19
  CTouch_c *v5; // x8
  struct System_Collections_Generic_List_int__o *ignoreFingerIDList; // x8

  if ( (byte_4216425 & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, v1);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__get_Count__, v2);
    byte_4216425 = 1;
  }
  touchCount = UnityEngine_Input__get_touchCount(0LL);
  v4 = touchCount;
  v5 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v5 = CTouch_TypeInfo;
  }
  ignoreFingerIDList = v5->static_fields->ignoreFingerIDList;
  if ( !ignoreFingerIDList )
    sub_B0D97C(touchCount);
  return v4 - ignoreFingerIDList->fields._size;
}


int32_t __fastcall CTouch__GetValidTouchLastID(bool isReverse, const MethodInfo *method)
{
  __int64 v3; // x1
  CTouch_c *v4; // x0
  unsigned __int64 v5; // x19
  __int64 i; // x22
  CTouch_c *v7; // x0
  System_Collections_Generic_List_int__o *ignoreFingerIDList; // x20
  UnityEngine_Touch_array *touches; // x0
  __int64 v10; // x22
  CTouch_c *v11; // x0
  System_Collections_Generic_List_int__o *v12; // x20
  __int64 v14; // x0

  if ( (byte_4216427 & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_int__Contains__, v3);
    byte_4216427 = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( CTouch__GetValidTouchCount((const MethodInfo *)v4) < 1 )
  {
    LODWORD(v5) = -1;
  }
  else
  {
    LODWORD(v5) = UnityEngine_Input__get_touchCount(0LL);
    if ( isReverse )
    {
      for ( i = 68LL * ((int)v5 - 1) + 32; ; i -= 68LL )
      {
        LODWORD(v5) = v5 - 1;
        if ( (v5 & 0x80000000) != 0LL )
          break;
        v7 = CTouch_TypeInfo;
        if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
          v7 = CTouch_TypeInfo;
        }
        ignoreFingerIDList = v7->static_fields->ignoreFingerIDList;
        touches = UnityEngine_Input__get_touches(0LL);
        if ( !touches )
          goto LABEL_31;
        if ( (unsigned int)v5 >= touches->max_length )
          goto LABEL_32;
        touches = (UnityEngine_Touch_array *)UnityEngine_Touch__get_fingerId(
                                               (UnityEngine_Touch_o *)((char *)touches + i),
                                               0LL);
        if ( !ignoreFingerIDList )
          goto LABEL_31;
        if ( !System_Collections_Generic_List_int___Contains(
                ignoreFingerIDList,
                (int32_t)touches,
                (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__) )
          return v5;
      }
      goto LABEL_29;
    }
    if ( (int)v5 < 1 )
    {
LABEL_29:
      LODWORD(v5) = 0;
      return v5;
    }
    v5 = 0LL;
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
      if ( v5 >= touches->max_length )
      {
LABEL_32:
        v14 = sub_B0D9A8(touches);
        sub_B0D948(v14, 0LL);
      }
      touches = (UnityEngine_Touch_array *)UnityEngine_Touch__get_fingerId(
                                             (UnityEngine_Touch_o *)((char *)touches + v10),
                                             0LL);
      if ( !v12 )
LABEL_31:
        sub_B0D97C(touches);
      if ( !System_Collections_Generic_List_int___Contains(
              v12,
              (int32_t)touches,
              (const MethodInfo_2FB0354 *)Method_System_Collections_Generic_List_int__Contains__) )
        break;
      ++v5;
      v10 += 68LL;
      if ( (__int64)v5 >= UnityEngine_Input__get_touchCount(0LL) )
        goto LABEL_29;
    }
  }
  return v5;
}


void __fastcall CTouch__SetClassEnabled(bool isEnabled, const MethodInfo *method)
{
  CTouch_c *v3; // x0

  if ( (byte_42163FF & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, method);
    byte_42163FF = 1;
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

  if ( (byte_4216400 & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, method);
    byte_4216400 = 1;
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
  if ( (byte_4216407 & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, method);
    byte_4216407 = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__add_mOnTouchPressEvent(value, method);
}


void __fastcall CTouch__add_OnTouchReleaseEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  if ( (byte_4216403 & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, method);
    byte_4216403 = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__add_mOnTouchReleaseEvent(value, method);
}


void __fastcall CTouch__add_mOnTouchPressEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  __int64 v3; // x1
  CTouch_c *v4; // x0
  System_Delegate_o *mOnTouchPressEvent; // x20
  System_Delegate_o *v6; // x0
  System_Delegate_o *v7; // x21
  CTouch_c *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CTouch_TouchEventHandler_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4216405 & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, method);
    sub_B0D8A4(&CTouch_TouchEventHandler_TypeInfo, v3);
    byte_4216405 = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v4 = CTouch_TypeInfo;
  }
  mOnTouchPressEvent = (System_Delegate_o *)v4->static_fields->mOnTouchPressEvent;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(mOnTouchPressEvent, (System_Delegate_o *)value, 0LL);
    v7 = v6;
    if ( v6 )
    {
      if ( (CTouch_TouchEventHandler_c *)v6->klass != CTouch_TouchEventHandler_TypeInfo )
        break;
    }
    v8 = CTouch_TypeInfo;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v8 = CTouch_TypeInfo;
    }
    v9 = sub_B022BC(&v8->static_fields->mOnTouchPressEvent, v7, mOnTouchPressEvent);
    v10 = mOnTouchPressEvent == (System_Delegate_o *)v9;
    mOnTouchPressEvent = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CTouch_TouchEventHandler_o *)sub_B0DC70(v6);
  CTouch__remove_mOnTouchPressEvent(v11, v12);
}


void __fastcall CTouch__add_mOnTouchReleaseEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  __int64 v3; // x1
  CTouch_c *v4; // x0
  System_Delegate_o *mOnTouchReleaseEvent; // x20
  System_Delegate_o *v6; // x0
  System_Delegate_o *v7; // x21
  CTouch_c *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CTouch_TouchEventHandler_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4216401 & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, method);
    sub_B0D8A4(&CTouch_TouchEventHandler_TypeInfo, v3);
    byte_4216401 = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v4 = CTouch_TypeInfo;
  }
  mOnTouchReleaseEvent = (System_Delegate_o *)v4->static_fields->mOnTouchReleaseEvent;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(mOnTouchReleaseEvent, (System_Delegate_o *)value, 0LL);
    v7 = v6;
    if ( v6 )
    {
      if ( (CTouch_TouchEventHandler_c *)v6->klass != CTouch_TouchEventHandler_TypeInfo )
        break;
    }
    v8 = CTouch_TypeInfo;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v8 = CTouch_TypeInfo;
    }
    v9 = sub_B022BC(&v8->static_fields->mOnTouchReleaseEvent, v7, mOnTouchReleaseEvent);
    v10 = mOnTouchReleaseEvent == (System_Delegate_o *)v9;
    mOnTouchReleaseEvent = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CTouch_TouchEventHandler_o *)sub_B0DC70(v6);
  CTouch__remove_mOnTouchReleaseEvent(v11, v12);
}


int32_t __fastcall CTouch__getDragFrameCnt(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0

  if ( (byte_4216419 & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, v1);
    byte_4216419 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v2 = CTouch_TypeInfo;
  }
  return v2->static_fields->mDragFrameCnt;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CTouch__getFlickDirX(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0
  __int64 v3; // x1
  CTouch_c *v4; // x0
  __int64 zero; // kr00_8
  float x; // s8
  float y; // s9
  UnityEngine_Vector2_o v8; // kr08_8
  __int64 v11; // [xsp+10h] [xbp-30h] BYREF
  struct UnityEngine_Vector2_o mScrPosDelta; // [xsp+18h] [xbp-28h] BYREF
  UnityEngine_Vector2_o normalized; // 0:s0.4,4:s1.4

  if ( (byte_4216415 & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, v1);
    byte_4216415 = 1;
  }
  v11 = 0LL;
  mScrPosDelta = 0LL;
  v2 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !CTouch__isFlick((const MethodInfo *)v2) )
    return 0;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !byte_4211BDC )
  {
    sub_B0D8A4(&CTouch_TypeInfo, v3);
    byte_4211BDC = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v4 = CTouch_TypeInfo;
  }
  mScrPosDelta = v4->static_fields->mScrPosDelta;
  zero = (__int64)UnityEngine_Vector2__get_zero(0LL);
  v11 = zero;
  if ( mScrPosDelta.fields.x >= 0.0 && mScrPosDelta.fields.x <= 0.0 )
    return 0;
  LODWORD(v11) = zero;
  normalized = UnityEngine_Vector2__get_normalized((UnityEngine_Vector2_o)zero, (const MethodInfo *)&mScrPosDelta);
  x = normalized.fields.x;
  y = normalized.fields.y;
  v8 = UnityEngine_Vector2__get_normalized(normalized, (const MethodInfo *)&v11);
  if ( (float)((float)(x * v8.fields.x) + (float)(y * v8.fields.y)) < 0.75 )
    return 0;
  if ( *(float *)&v11 == INFINITY )
    return (int)-*(float *)&v11;
  else
    return (int)*(float *)&v11;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CTouch__getFlickDirY(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0
  __int64 v3; // x1
  CTouch_c *v4; // x0
  struct CTouch_StaticFields *static_fields; // x8
  float y; // w19
  __int64 zero; // kr00_8
  float x; // s8
  float v9; // s9
  UnityEngine_Vector2_o v10; // kr08_8
  __int64 v13; // [xsp+0h] [xbp-30h] BYREF
  __int64 v14; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector2_o normalized; // 0:s0.4,4:s1.4

  if ( (byte_4216416 & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, v1);
    byte_4216416 = 1;
  }
  v13 = 0LL;
  v14 = 0LL;
  v2 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !CTouch__isFlick((const MethodInfo *)v2) )
    return 0;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !byte_4211BDC )
  {
    sub_B0D8A4(&CTouch_TypeInfo, v3);
    byte_4211BDC = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v4 = CTouch_TypeInfo;
  }
  static_fields = v4->static_fields;
  y = static_fields->mScrPosDelta.fields.y;
  *(float *)&v14 = static_fields->mScrPosDelta.fields.x;
  *((float *)&v14 + 1) = y;
  zero = (__int64)UnityEngine_Vector2__get_zero(0LL);
  v13 = zero;
  if ( y <= 0.0 && y >= 0.0 )
    return 0;
  HIDWORD(v13) = zero;
  normalized = UnityEngine_Vector2__get_normalized((UnityEngine_Vector2_o)zero, (const MethodInfo *)&v14);
  x = normalized.fields.x;
  v9 = normalized.fields.y;
  v10 = UnityEngine_Vector2__get_normalized(normalized, (const MethodInfo *)&v13);
  if ( (float)((float)(x * v10.fields.x) + (float)(v9 * v10.fields.y)) < 0.75 )
    return 0;
  if ( *((float *)&v13 + 1) == INFINITY )
    return (int)-*((float *)&v13 + 1);
  else
    return (int)*((float *)&v13 + 1);
}


UnityEngine_Vector2_o __fastcall CTouch__getPosNow(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0
  struct CTouch_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_421641A & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, v1);
    byte_421641A = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v2 = CTouch_TypeInfo;
  }
  static_fields = v2->static_fields;
  x = static_fields->mPosNow.fields.x;
  y = static_fields->mPosNow.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Vector2_o __fastcall CTouch__getScrPosDelta(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0
  struct CTouch_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4216420 & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, v1);
    byte_4216420 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v2 = CTouch_TypeInfo;
  }
  static_fields = v2->static_fields;
  x = static_fields->mScrPosDelta.fields.x;
  y = static_fields->mScrPosDelta.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


float __fastcall CTouch__getScrPosDeltaLen(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0

  if ( (byte_4216422 & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, v1);
    byte_4216422 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v2 = CTouch_TypeInfo;
  }
  return v2->static_fields->mScrPosDeltaLen;
}


float __fastcall CTouch__getScrPosDeltaLenOld(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0

  if ( (byte_4216423 & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, v1);
    byte_4216423 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v2 = CTouch_TypeInfo;
  }
  return v2->static_fields->mScrPosDeltaLenOld;
}


UnityEngine_Vector2_o __fastcall CTouch__getScrPosDeltaOld(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0
  struct CTouch_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4216421 & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, v1);
    byte_4216421 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v2 = CTouch_TypeInfo;
  }
  static_fields = v2->static_fields;
  x = static_fields->mScrPosDeltaOld.fields.x;
  y = static_fields->mScrPosDeltaOld.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Vector2_o __fastcall CTouch__getScreenPosition(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0
  struct CTouch_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_421641C & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, v1);
    byte_421641C = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v2 = CTouch_TypeInfo;
  }
  static_fields = v2->static_fields;
  x = static_fields->mScrPosNow.fields.x;
  y = static_fields->mScrPosNow.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o __fastcall CTouch__getScreenPosition_27683908(
        UnityEngine_Vector2_o tch_pos,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x1
  float y; // s8
  float x; // s9
  CTouch_c *v5; // x0
  float v6; // s0
  float v7; // s1
  UnityEngine_Vector2_o ScreenPosition_27684032; // kr00_8
  UnityEngine_Vector2_o v9; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  y = tch_pos.fields.y;
  x = tch_pos.fields.x;
  if ( (byte_421641D & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, v2);
    byte_421641D = 1;
  }
  v5 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v5 = CTouch_TypeInfo;
  }
  v9.fields.x = x;
  v9.fields.y = y;
  ScreenPosition_27684032 = CTouch__getScreenPosition_27684032(v9, v5->static_fields->mScreenCam, v2);
  v7 = ScreenPosition_27684032.fields.y;
  v6 = ScreenPosition_27684032.fields.x;
  result.fields.y = v7;
  result.fields.x = v6;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o __fastcall CTouch__getScreenPosition_27684032(
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
  if ( (byte_421641F & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, method);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    byte_421641F = 1;
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
    UnityEngine_Camera__ScreenPointToRay_40755584(&v19, mScreenCam, v22, 0LL);
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
      sub_B0D97C(mScreenCam);
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


UnityEngine_Vector2_o __fastcall CTouch__getScreenPosition_27684436(
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  CTouch_c *v2; // x0
  const MethodInfo *v3; // x1
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o ScreenPosition_27684032; // kr00_8
  UnityEngine_Vector2_o TouchPos; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_421641E & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, method);
    byte_421641E = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  TouchPos = CTouch__GetTouchPos((const MethodInfo *)v2);
  ScreenPosition_27684032 = CTouch__getScreenPosition_27684032(TouchPos, CTouch_TypeInfo->static_fields->mScreenCam, v3);
  y = ScreenPosition_27684032.fields.y;
  x = ScreenPosition_27684032.fields.x;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


int32_t __fastcall CTouch__getTouchState(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0

  if ( (byte_421640E & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, v1);
    byte_421640E = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v2 = CTouch_TypeInfo;
  }
  return v2->static_fields->mState;
}


void __fastcall CTouch__init(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0
  struct CTouch_StaticFields **p_static_fields; // x8
  struct CTouch_StaticFields *static_fields; // x9
  bool *p_mIsInitDone; // x9
  _BOOL4 mIsInitDone; // t1

  if ( (byte_421640A & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, v1);
    byte_421640A = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v2 = CTouch_TypeInfo;
  }
  p_static_fields = &v2->static_fields;
  static_fields = v2->static_fields;
  mIsInitDone = static_fields->mIsInitDone;
  p_mIsInitDone = &static_fields->mIsInitDone;
  if ( !mIsInitDone )
  {
    if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v2);
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
  __int64 v1; // x1
  CTouch_c *v2; // x0
  CTouch_c *v3; // x0

  if ( (byte_4216418 & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, v1);
    byte_4216418 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !CTouch__isDragMode((const MethodInfo *)v2) )
    return 0;
  v3 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  return CTouch__isTouchKeep((const MethodInfo *)v3);
}


bool __fastcall CTouch__isDragMode(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0

  if ( (byte_4216417 & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, v1);
    byte_4216417 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v2 = CTouch_TypeInfo;
  }
  return v2->static_fields->mDragFrameCnt >= 0;
}


bool __fastcall CTouch__isFlick(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0

  if ( (byte_4216413 & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, v1);
    byte_4216413 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v2 = CTouch_TypeInfo;
  }
  return CTouch__isFlick_27681520(v2->static_fields->FLICK_LEN, (const MethodInfo *)v2);
}


bool __fastcall CTouch__isFlick_27681520(float flickLen, const MethodInfo *method)
{
  __int64 v2; // x1
  CTouch_c *v4; // x0
  __int64 v5; // x1
  CTouch_c *v6; // x0

  if ( (byte_4216414 & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, v2);
    byte_4216414 = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !CTouch__isTouchRelease((const MethodInfo *)v4) )
    return 0;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !byte_4216429 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, v5);
    byte_4216429 = 1;
  }
  v6 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v6 = CTouch_TypeInfo;
  }
  return v6->static_fields->mScrPosDeltaLen >= flickLen;
}


bool __fastcall CTouch__isTouchKeep(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0

  if ( (byte_4216411 & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, v1);
    byte_4216411 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v2 = CTouch_TypeInfo;
  }
  return v2->static_fields->mState == 2;
}


bool __fastcall CTouch__isTouchNone(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0

  if ( (byte_421640F & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, v1);
    byte_421640F = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v2 = CTouch_TypeInfo;
  }
  return v2->static_fields->mState == 0;
}


bool __fastcall CTouch__isTouchPush(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0

  if ( (byte_4216410 & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, v1);
    byte_4216410 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v2 = CTouch_TypeInfo;
  }
  return v2->static_fields->mState == 1;
}


bool __fastcall CTouch__isTouchRelease(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0

  if ( (byte_4216412 & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, v1);
    byte_4216412 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v2 = CTouch_TypeInfo;
  }
  return v2->static_fields->mState == 3;
}


void __fastcall CTouch__process(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0
  struct CTouch_StaticFields *static_fields; // x8
  int32_t mProcessOldFrameCount; // w19
  int32_t frameCount; // w0
  CTouch_c *v6; // x8
  int32_t v7; // w19
  CTouch_c *v8; // x0
  CTouch_c *v9; // x0
  bool v10; // w0
  CTouch_c *v11; // x0

  if ( (byte_421640D & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, v1);
    byte_421640D = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v2 = CTouch_TypeInfo;
  }
  static_fields = v2->static_fields;
  if ( static_fields->mIsInitDone )
  {
    if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v2);
      v2 = CTouch_TypeInfo;
      static_fields = CTouch_TypeInfo->static_fields;
    }
    if ( static_fields->mIsClassEnabled )
    {
      if ( (BYTE3(v2->vtable._0_Equals.methodPtr) & 4) != 0 && !v2->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v2);
        static_fields = CTouch_TypeInfo->static_fields;
      }
      mProcessOldFrameCount = static_fields->mProcessOldFrameCount;
      if ( mProcessOldFrameCount != UnityEngine_Time__get_frameCount(0LL) )
      {
        frameCount = UnityEngine_Time__get_frameCount(0LL);
        v6 = CTouch_TypeInfo;
        v7 = frameCount;
        if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
          v6 = CTouch_TypeInfo;
        }
        v6->static_fields->mProcessOldFrameCount = v7;
        if ( !UnityEngine_Input__get_multiTouchEnabled(0LL) )
          goto LABEL_39;
        v8 = CTouch_TypeInfo;
        if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
          v8 = CTouch_TypeInfo;
        }
        if ( !v8->static_fields->mIsReq_MultiTouchEnabled )
        {
          if ( UnityEngine_Input__get_touchCount(0LL) > 0 )
          {
LABEL_33:
            v11 = CTouch_TypeInfo;
            if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
            CTouch__processSingleTouch((const MethodInfo *)v11);
            return;
          }
          v10 = 0;
        }
        else
        {
LABEL_39:
          if ( UnityEngine_Input__get_multiTouchEnabled(0LL) )
            goto LABEL_33;
          v9 = CTouch_TypeInfo;
          if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
            v9 = CTouch_TypeInfo;
          }
          if ( !v9->static_fields->mIsReq_MultiTouchEnabled )
            goto LABEL_33;
          v10 = 1;
        }
        UnityEngine_Input__set_multiTouchEnabled(v10, 0LL);
        goto LABEL_33;
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CTouch__processSingleTouch(const MethodInfo *method)
{
  __int64 v1; // x1
  const MethodInfo *v2; // x0
  CTouch_c *v3; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  CTouch_c *v6; // x0
  struct UnityEngine_Touch_array *mTouch; // x20
  int32_t ValidTouchLastID; // w0
  _QWORD *p_image; // x0
  const MethodInfo *v10; // x0
  struct UnityEngine_Vector2_o ScreenPosition_27683908; // kr08_8
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

  if ( (byte_4216424 & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, v1);
    byte_4216424 = 1;
  }
  v54 = 0LL;
  v2 = (const MethodInfo *)CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v2 = (const MethodInfo *)CTouch_TypeInfo;
  }
  HIDWORD(v2[2].klass->_1.name) = 0;
  CTouch_TypeInfo->static_fields->mPosNow = CTouch__GetTouchPos(v2);
  if ( UnityEngine_Input__get_touchCount(0LL) < 1 )
    goto LABEL_21;
  v3 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( CTouch__GetValidTouchCount((const MethodInfo *)v3) != 1 )
    goto LABEL_21;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( (CTouch__GetValidTouchLastID(1, v4) & 0x80000000) == 0 )
  {
    v6 = CTouch_TypeInfo;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v6 = CTouch_TypeInfo;
    }
    mTouch = v6->static_fields->mTouch;
    ValidTouchLastID = CTouch__GetValidTouchLastID(1, v5);
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
    ScreenPosition_27683908 = CTouch__getScreenPosition_27683908((UnityEngine_Vector2_o)v10[2].klass->_1.namespaze, v10);
    v12 = CTouch_TypeInfo;
    CTouch_TypeInfo->static_fields->mScrPosNow = ScreenPosition_27683908;
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
      v16 = CTouch__getScreenPosition_27683908(v15->static_fields->mPosPush, touchCount);
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
      sub_B0D97C(p_image);
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
    v50 = sub_B0D9A8(p_image);
    sub_B0D948(v50, 0LL);
  }
}


void __fastcall CTouch__reboot(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0

  if ( (byte_4216409 & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, v1);
    byte_4216409 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v2 = CTouch_TypeInfo;
  }
  v2->static_fields->mIsInitDone = 0;
}


void __fastcall CTouch__remove_OnTouchPressEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  if ( (byte_4216408 & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, method);
    byte_4216408 = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__remove_mOnTouchPressEvent(value, method);
}


void __fastcall CTouch__remove_OnTouchReleaseEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  if ( (byte_4216404 & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, method);
    byte_4216404 = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__remove_mOnTouchReleaseEvent(value, method);
}


void __fastcall CTouch__remove_mOnTouchPressEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  __int64 v3; // x1
  CTouch_c *v4; // x0
  System_Delegate_o *mOnTouchPressEvent; // x20
  System_Delegate_o *v6; // x0
  System_Delegate_o *v7; // x21
  CTouch_c *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CTouch_TouchEventHandler_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4216406 & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, method);
    sub_B0D8A4(&CTouch_TouchEventHandler_TypeInfo, v3);
    byte_4216406 = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v4 = CTouch_TypeInfo;
  }
  mOnTouchPressEvent = (System_Delegate_o *)v4->static_fields->mOnTouchPressEvent;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(mOnTouchPressEvent, (System_Delegate_o *)value, 0LL);
    v7 = v6;
    if ( v6 )
    {
      if ( (CTouch_TouchEventHandler_c *)v6->klass != CTouch_TouchEventHandler_TypeInfo )
        break;
    }
    v8 = CTouch_TypeInfo;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v8 = CTouch_TypeInfo;
    }
    v9 = sub_B022BC(&v8->static_fields->mOnTouchPressEvent, v7, mOnTouchPressEvent);
    v10 = mOnTouchPressEvent == (System_Delegate_o *)v9;
    mOnTouchPressEvent = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CTouch_TouchEventHandler_o *)sub_B0DC70(v6);
  CTouch__add_OnTouchPressEvent(v11, v12);
}


void __fastcall CTouch__remove_mOnTouchReleaseEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  __int64 v3; // x1
  CTouch_c *v4; // x0
  System_Delegate_o *mOnTouchReleaseEvent; // x20
  System_Delegate_o *v6; // x0
  System_Delegate_o *v7; // x21
  CTouch_c *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CTouch_TouchEventHandler_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4216402 & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, method);
    sub_B0D8A4(&CTouch_TouchEventHandler_TypeInfo, v3);
    byte_4216402 = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v4 = CTouch_TypeInfo;
  }
  mOnTouchReleaseEvent = (System_Delegate_o *)v4->static_fields->mOnTouchReleaseEvent;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(mOnTouchReleaseEvent, (System_Delegate_o *)value, 0LL);
    v7 = v6;
    if ( v6 )
    {
      if ( (CTouch_TouchEventHandler_c *)v6->klass != CTouch_TouchEventHandler_TypeInfo )
        break;
    }
    v8 = CTouch_TypeInfo;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v8 = CTouch_TypeInfo;
    }
    v9 = sub_B022BC(&v8->static_fields->mOnTouchReleaseEvent, v7, mOnTouchReleaseEvent);
    v10 = mOnTouchReleaseEvent == (System_Delegate_o *)v9;
    mOnTouchReleaseEvent = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CTouch_TouchEventHandler_o *)sub_B0DC70(v6);
  CTouch__add_OnTouchReleaseEvent(v11, v12);
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

  if ( (byte_421640B & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, method);
    byte_421640B = 1;
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
    if ( !byte_4210D24 )
    {
      sub_B0D8A4(&CTouch_TypeInfo, method);
      byte_4210D24 = 1;
    }
    v15 = CTouch_TypeInfo;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v15 = CTouch_TypeInfo;
    }
    v16 = v15->static_fields;
    v16->mScreenCam = screen_cam;
    sub_B0D840(
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

  if ( (byte_421640C & 1) == 0 )
  {
    sub_B0D8A4(&CTouch_TypeInfo, method);
    byte_421640C = 1;
  }
  v9 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v9 = CTouch_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->mScreenCam = cam;
  sub_B0D840(
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
  sub_B0D840(p_method, object);
}


System_IAsyncResult_o *__fastcall CTouch_TouchEventHandler__BeginInvoke(
        CTouch_TouchEventHandler_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B0D848(this, &v5, callback, object);
}


void __fastcall CTouch_TouchEventHandler__EndInvoke(
        CTouch_TouchEventHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B0D84C(result, 0LL, method);
}


void __fastcall CTouch_TouchEventHandler__Invoke(CTouch_TouchEventHandler_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v6; // x23
  CTouch_TouchEventHandler_o **v7; // x24
  __int64 v8; // x25
  unsigned int v9; // w22
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD); // x0
  CTouch_TouchEventHandler_o *v18; // x8
  __int64 *v19; // x20
  __int64 v20; // x21
  void (__fastcall *v21)(__int64); // x22
  char v22; // w22
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  CTouch_TouchEventHandler_o *v29; // [xsp+8h] [xbp-38h] BYREF

  v29 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v4 + 24);
  if ( v6 )
  {
    v7 = (CTouch_TouchEventHandler_o **)(v4 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(__int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B0D960(*(_QWORD *)&v18->fields.extra_arg, method, v2, v3);
      if ( (sub_B0D8D4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) )
        goto LABEL_35;
      v21(v20);
LABEL_36:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B0D8CC(v20);
      v23 = sub_B0DCD0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_34;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_34:
            v16 = sub_AA67A0(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD))sub_B0D954(v15, v20);
        (*v17)(v19, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AA67A0(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v14)(v19, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v21)(v19, v20);
    goto LABEL_36;
  }
}