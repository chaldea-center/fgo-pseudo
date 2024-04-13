void __fastcall CTouch___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Int32_array **v13; // x0
  struct CTouch_StaticFields *static_fields; // x8
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  CTouch_c *v21; // x8
  System_Collections_Generic_List_int__o *v22; // x19
  struct CTouch_StaticFields *v23; // x0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7

  if ( (byte_42EB60B & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v4, v5, v6);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v7, v8, v9);
    sub_B5D5C4(&UnityEngine_Touch___TypeInfo, v10, v11, v12);
    byte_42EB60B = 1;
  }
  CTouch_TypeInfo->static_fields->FLICK_LEN = 5.0;
  CTouch_TypeInfo->static_fields->DRAG_LEN = 15.0;
  v13 = (System_Int32_array **)sub_B5D5DC(UnityEngine_Touch___TypeInfo, 1LL);
  static_fields = CTouch_TypeInfo->static_fields;
  static_fields->mTouch = (struct UnityEngine_Touch_array *)v13;
  sub_B5D560((BattleServantConfConponent_o *)&static_fields->mTouch, v13, v15, v16, v17, v18, v19, v20);
  v21 = CTouch_TypeInfo;
  CTouch_TypeInfo->static_fields->mIsTchNow = 0;
  v21->static_fields->mIsTchMouseNow = 0;
  v21->static_fields->mState = 0;
  v21->static_fields->mDragFrameCnt = -1;
  v21->static_fields->mIsClassEnabled = 0;
  v22 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v22,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  v23 = CTouch_TypeInfo->static_fields;
  v23->ignoreFingerIDList = v22;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v23->ignoreFingerIDList,
    (System_Int32_array **)v22,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
}


System_Collections_Generic_List_int__o *__fastcall CTouch__GetIgnoreFingerIDList(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  CTouch_c *v4; // x0

  if ( (byte_42EB609 & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, v1, v2, v3);
    byte_42EB609 = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v4 = CTouch_TypeInfo;
  }
  return v4->static_fields->ignoreFingerIDList;
}


UnityEngine_Vector2_o __fastcall CTouch__GetTouchPos(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  float x; // s8
  float y; // s9
  UnityEngine_Vector2_o zero; // kr00_8
  CTouch_c *v7; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  int32_t ValidTouchLastID; // w0
  float v11; // s0
  float v12; // s1
  UnityEngine_Vector2_o position; // kr08_8
  UnityEngine_Vector2_o v14; // kr10_8
  float v15; // s0
  float v16; // s1
  UnityEngine_Touch_o v17; // [xsp+0h] [xbp-B0h] BYREF
  UnityEngine_Touch_o v18; // [xsp+48h] [xbp-68h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_42EB5FE & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, v1, v2, v3);
    byte_42EB5FE = 1;
  }
  memset(&v18, 0, sizeof(v18));
  zero = UnityEngine_Vector2__get_zero(0LL);
  y = zero.fields.y;
  x = zero.fields.x;
  if ( UnityEngine_Input__get_touchCount(0LL) >= 1 )
  {
    v7 = CTouch_TypeInfo;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    if ( CTouch__GetValidTouchCount((const MethodInfo *)v7) == 1 )
    {
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      if ( (CTouch__GetValidTouchLastID(1, v8) & 0x80000000) != 0 )
      {
        v14 = UnityEngine_Vector2__get_zero(0LL);
        v12 = v14.fields.y;
        v11 = v14.fields.x;
      }
      else
      {
        if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        ValidTouchLastID = CTouch__GetValidTouchLastID(1, v9);
        UnityEngine_Input__GetTouch(&v17, ValidTouchLastID, 0LL);
        memcpy(&v18, &v17, sizeof(v18));
        position = UnityEngine_Touch__get_position(&v18, 0LL);
        v12 = position.fields.y;
        v11 = position.fields.x;
      }
      x = v11;
      y = v12;
    }
  }
  v15 = x;
  v16 = y;
  result.fields.y = v16;
  result.fields.x = v15;
  return result;
}


int32_t __fastcall CTouch__GetValidTouchCount(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  __int64 touchCount; // x0
  __int64 v8; // x1
  int v9; // w19
  CTouch_c *v10; // x8
  struct System_Collections_Generic_List_int__o *ignoreFingerIDList; // x8

  if ( (byte_42EB608 & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, v1, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v4, v5, v6);
    byte_42EB608 = 1;
  }
  touchCount = UnityEngine_Input__get_touchCount(0LL);
  v9 = touchCount;
  v10 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v10 = CTouch_TypeInfo;
  }
  ignoreFingerIDList = v10->static_fields->ignoreFingerIDList;
  if ( !ignoreFingerIDList )
    sub_B5D69C(touchCount, v8);
  return v9 - ignoreFingerIDList->fields._size;
}


int32_t __fastcall CTouch__GetValidTouchLastID(bool isReverse, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CTouch_c *v8; // x0
  unsigned __int64 v9; // x19
  __int64 i; // x22
  CTouch_c *v11; // x0
  System_Collections_Generic_List_int__o *ignoreFingerIDList; // x20
  UnityEngine_Touch_array *touches; // x0
  __int64 v14; // x1
  __int64 v15; // x22
  CTouch_c *v16; // x0
  System_Collections_Generic_List_int__o *v17; // x20
  __int64 v19; // x0

  if ( (byte_42EB60A & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v5, v6, v7);
    byte_42EB60A = 1;
  }
  v8 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( CTouch__GetValidTouchCount((const MethodInfo *)v8) < 1 )
  {
    LODWORD(v9) = -1;
  }
  else
  {
    LODWORD(v9) = UnityEngine_Input__get_touchCount(0LL);
    if ( isReverse )
    {
      for ( i = 68LL * ((int)v9 - 1) + 32; ; i -= 68LL )
      {
        LODWORD(v9) = v9 - 1;
        if ( (v9 & 0x80000000) != 0LL )
          break;
        v11 = CTouch_TypeInfo;
        if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
          v11 = CTouch_TypeInfo;
        }
        ignoreFingerIDList = v11->static_fields->ignoreFingerIDList;
        touches = UnityEngine_Input__get_touches(0LL);
        if ( !touches )
          goto LABEL_31;
        if ( (unsigned int)v9 >= touches->max_length )
          goto LABEL_32;
        touches = (UnityEngine_Touch_array *)UnityEngine_Touch__get_fingerId(
                                               (UnityEngine_Touch_o *)((char *)touches + i),
                                               0LL);
        if ( !ignoreFingerIDList )
          goto LABEL_31;
        if ( !System_Collections_Generic_List_int___Contains(
                ignoreFingerIDList,
                (int32_t)touches,
                (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__) )
          return v9;
      }
      goto LABEL_29;
    }
    if ( (int)v9 < 1 )
    {
LABEL_29:
      LODWORD(v9) = 0;
      return v9;
    }
    v9 = 0LL;
    v15 = 32LL;
    while ( 1 )
    {
      v16 = CTouch_TypeInfo;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v16 = CTouch_TypeInfo;
      }
      v17 = v16->static_fields->ignoreFingerIDList;
      touches = UnityEngine_Input__get_touches(0LL);
      if ( !touches )
        goto LABEL_31;
      if ( v9 >= touches->max_length )
      {
LABEL_32:
        v19 = sub_B5D6C8(touches);
        sub_B5D668(v19, 0LL);
      }
      touches = (UnityEngine_Touch_array *)UnityEngine_Touch__get_fingerId(
                                             (UnityEngine_Touch_o *)((char *)touches + v15),
                                             0LL);
      if ( !v17 )
LABEL_31:
        sub_B5D69C(touches, v14);
      if ( !System_Collections_Generic_List_int___Contains(
              v17,
              (int32_t)touches,
              (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__) )
        break;
      ++v9;
      v15 += 68LL;
      if ( (__int64)v9 >= UnityEngine_Input__get_touchCount(0LL) )
        goto LABEL_29;
    }
  }
  return v9;
}


void __fastcall CTouch__SetClassEnabled(bool isEnabled, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CTouch_c *v5; // x0

  if ( (byte_42EB5E2 & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB5E2 = 1;
  }
  v5 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v5 = CTouch_TypeInfo;
  }
  v5->static_fields->mIsClassEnabled = isEnabled;
}


void __fastcall CTouch__SetMultiTouchEnabled(bool is_enabled, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CTouch_c *v5; // x0

  if ( (byte_42EB5E3 & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB5E3 = 1;
  }
  v5 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v5 = CTouch_TypeInfo;
  }
  v5->static_fields->mIsReq_MultiTouchEnabled = is_enabled;
}


void __fastcall CTouch__add_OnTouchPressEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB5EA & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB5EA = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__add_mOnTouchPressEvent(value, method);
}


void __fastcall CTouch__add_OnTouchReleaseEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB5E6 & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB5E6 = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__add_mOnTouchReleaseEvent(value, method);
}


void __fastcall CTouch__add_mOnTouchPressEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CTouch_c *v8; // x0
  System_Delegate_o *mOnTouchPressEvent; // x20
  System_Delegate_o *v10; // x0
  System_Delegate_o *v11; // x21
  CTouch_c *v12; // x0
  __int64 v13; // x0
  bool v14; // zf
  CTouch_TouchEventHandler_o *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_42EB5E8 & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CTouch_TouchEventHandler_TypeInfo, v5, v6, v7);
    byte_42EB5E8 = 1;
  }
  v8 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v8 = CTouch_TypeInfo;
  }
  mOnTouchPressEvent = (System_Delegate_o *)v8->static_fields->mOnTouchPressEvent;
  while ( 1 )
  {
    v10 = System_Delegate__Combine(mOnTouchPressEvent, (System_Delegate_o *)value, 0LL);
    v11 = v10;
    if ( v10 )
    {
      if ( (CTouch_TouchEventHandler_c *)v10->klass != CTouch_TouchEventHandler_TypeInfo )
        break;
    }
    v12 = CTouch_TypeInfo;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v12 = CTouch_TypeInfo;
    }
    v13 = sub_B51FDC(&v12->static_fields->mOnTouchPressEvent, v11, mOnTouchPressEvent);
    v14 = mOnTouchPressEvent == (System_Delegate_o *)v13;
    mOnTouchPressEvent = (System_Delegate_o *)v13;
    if ( v14 )
      return;
  }
  sub_B5D990(v10);
  CTouch__remove_mOnTouchPressEvent(v15, v16);
}


void __fastcall CTouch__add_mOnTouchReleaseEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CTouch_c *v8; // x0
  System_Delegate_o *mOnTouchReleaseEvent; // x20
  System_Delegate_o *v10; // x0
  System_Delegate_o *v11; // x21
  CTouch_c *v12; // x0
  __int64 v13; // x0
  bool v14; // zf
  CTouch_TouchEventHandler_o *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_42EB5E4 & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CTouch_TouchEventHandler_TypeInfo, v5, v6, v7);
    byte_42EB5E4 = 1;
  }
  v8 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v8 = CTouch_TypeInfo;
  }
  mOnTouchReleaseEvent = (System_Delegate_o *)v8->static_fields->mOnTouchReleaseEvent;
  while ( 1 )
  {
    v10 = System_Delegate__Combine(mOnTouchReleaseEvent, (System_Delegate_o *)value, 0LL);
    v11 = v10;
    if ( v10 )
    {
      if ( (CTouch_TouchEventHandler_c *)v10->klass != CTouch_TouchEventHandler_TypeInfo )
        break;
    }
    v12 = CTouch_TypeInfo;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v12 = CTouch_TypeInfo;
    }
    v13 = sub_B51FDC(&v12->static_fields->mOnTouchReleaseEvent, v11, mOnTouchReleaseEvent);
    v14 = mOnTouchReleaseEvent == (System_Delegate_o *)v13;
    mOnTouchReleaseEvent = (System_Delegate_o *)v13;
    if ( v14 )
      return;
  }
  sub_B5D990(v10);
  CTouch__remove_mOnTouchReleaseEvent(v15, v16);
}


int32_t __fastcall CTouch__getDragFrameCnt(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  CTouch_c *v4; // x0

  if ( (byte_42EB5FC & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, v1, v2, v3);
    byte_42EB5FC = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v4 = CTouch_TypeInfo;
  }
  return v4->static_fields->mDragFrameCnt;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CTouch__getFlickDirX(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  CTouch_c *v4; // x0
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CTouch_c *v8; // x0
  __int64 zero; // kr00_8
  float x; // s8
  float y; // s9
  UnityEngine_Vector2_o v12; // kr08_8
  __int64 v15; // [xsp+10h] [xbp-30h] BYREF
  struct UnityEngine_Vector2_o mScrPosDelta; // [xsp+18h] [xbp-28h] BYREF
  UnityEngine_Vector2_o normalized; // 0:s0.4,4:s1.4

  if ( (byte_42EB5F8 & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, v1, v2, v3);
    byte_42EB5F8 = 1;
  }
  v15 = 0LL;
  mScrPosDelta = 0LL;
  v4 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !CTouch__isFlick((const MethodInfo *)v4) )
    return 0;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !byte_42E658F )
  {
    sub_B5D5C4(&CTouch_TypeInfo, v5, v6, v7);
    byte_42E658F = 1;
  }
  v8 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v8 = CTouch_TypeInfo;
  }
  mScrPosDelta = v8->static_fields->mScrPosDelta;
  zero = (__int64)UnityEngine_Vector2__get_zero(0LL);
  v15 = zero;
  if ( mScrPosDelta.fields.x >= 0.0 && mScrPosDelta.fields.x <= 0.0 )
    return 0;
  LODWORD(v15) = zero;
  normalized = UnityEngine_Vector2__get_normalized((UnityEngine_Vector2_o)zero, (const MethodInfo *)&mScrPosDelta);
  x = normalized.fields.x;
  y = normalized.fields.y;
  v12 = UnityEngine_Vector2__get_normalized(normalized, (const MethodInfo *)&v15);
  if ( (float)((float)(x * v12.fields.x) + (float)(y * v12.fields.y)) < 0.75 )
    return 0;
  if ( *(float *)&v15 == INFINITY )
    return (int)-*(float *)&v15;
  else
    return (int)*(float *)&v15;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall CTouch__getFlickDirY(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  CTouch_c *v4; // x0
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CTouch_c *v8; // x0
  struct CTouch_StaticFields *static_fields; // x8
  float y; // w19
  __int64 zero; // kr00_8
  float x; // s8
  float v13; // s9
  UnityEngine_Vector2_o v14; // kr08_8
  __int64 v17; // [xsp+0h] [xbp-30h] BYREF
  __int64 v18; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector2_o normalized; // 0:s0.4,4:s1.4

  if ( (byte_42EB5F9 & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, v1, v2, v3);
    byte_42EB5F9 = 1;
  }
  v17 = 0LL;
  v18 = 0LL;
  v4 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !CTouch__isFlick((const MethodInfo *)v4) )
    return 0;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !byte_42E658F )
  {
    sub_B5D5C4(&CTouch_TypeInfo, v5, v6, v7);
    byte_42E658F = 1;
  }
  v8 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v8 = CTouch_TypeInfo;
  }
  static_fields = v8->static_fields;
  y = static_fields->mScrPosDelta.fields.y;
  *(float *)&v18 = static_fields->mScrPosDelta.fields.x;
  *((float *)&v18 + 1) = y;
  zero = (__int64)UnityEngine_Vector2__get_zero(0LL);
  v17 = zero;
  if ( y <= 0.0 && y >= 0.0 )
    return 0;
  HIDWORD(v17) = zero;
  normalized = UnityEngine_Vector2__get_normalized((UnityEngine_Vector2_o)zero, (const MethodInfo *)&v18);
  x = normalized.fields.x;
  v13 = normalized.fields.y;
  v14 = UnityEngine_Vector2__get_normalized(normalized, (const MethodInfo *)&v17);
  if ( (float)((float)(x * v14.fields.x) + (float)(v13 * v14.fields.y)) < 0.75 )
    return 0;
  if ( *((float *)&v17 + 1) == INFINITY )
    return (int)-*((float *)&v17 + 1);
  else
    return (int)*((float *)&v17 + 1);
}


UnityEngine_Vector2_o __fastcall CTouch__getPosNow(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  CTouch_c *v4; // x0
  struct CTouch_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_42EB5FD & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, v1, v2, v3);
    byte_42EB5FD = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v4 = CTouch_TypeInfo;
  }
  static_fields = v4->static_fields;
  x = static_fields->mPosNow.fields.x;
  y = static_fields->mPosNow.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Vector2_o __fastcall CTouch__getScrPosDelta(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  CTouch_c *v4; // x0
  struct CTouch_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_42EB603 & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, v1, v2, v3);
    byte_42EB603 = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v4 = CTouch_TypeInfo;
  }
  static_fields = v4->static_fields;
  x = static_fields->mScrPosDelta.fields.x;
  y = static_fields->mScrPosDelta.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


float __fastcall CTouch__getScrPosDeltaLen(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  CTouch_c *v4; // x0

  if ( (byte_42EB605 & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, v1, v2, v3);
    byte_42EB605 = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v4 = CTouch_TypeInfo;
  }
  return v4->static_fields->mScrPosDeltaLen;
}


float __fastcall CTouch__getScrPosDeltaLenOld(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  CTouch_c *v4; // x0

  if ( (byte_42EB606 & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, v1, v2, v3);
    byte_42EB606 = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v4 = CTouch_TypeInfo;
  }
  return v4->static_fields->mScrPosDeltaLenOld;
}


UnityEngine_Vector2_o __fastcall CTouch__getScrPosDeltaOld(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  CTouch_c *v4; // x0
  struct CTouch_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_42EB604 & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, v1, v2, v3);
    byte_42EB604 = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v4 = CTouch_TypeInfo;
  }
  static_fields = v4->static_fields;
  x = static_fields->mScrPosDeltaOld.fields.x;
  y = static_fields->mScrPosDeltaOld.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Vector2_o __fastcall CTouch__getScreenPosition(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  CTouch_c *v4; // x0
  struct CTouch_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_42EB5FF & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, v1, v2, v3);
    byte_42EB5FF = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v4 = CTouch_TypeInfo;
  }
  static_fields = v4->static_fields;
  x = static_fields->mScrPosNow.fields.x;
  y = static_fields->mScrPosNow.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o __fastcall CTouch__getScreenPosition_30481740(
        UnityEngine_Vector2_o tch_pos,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x1
  int v3; // w2
  __int64 v4; // x3
  float y; // s8
  float x; // s9
  CTouch_c *v7; // x0
  float v8; // s0
  float v9; // s1
  UnityEngine_Vector2_o ScreenPosition_30481864; // kr00_8
  UnityEngine_Vector2_o v11; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  y = tch_pos.fields.y;
  x = tch_pos.fields.x;
  if ( (byte_42EB600 & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, (_DWORD)v2, v3, v4);
    byte_42EB600 = 1;
  }
  v7 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v7 = CTouch_TypeInfo;
  }
  v11.fields.x = x;
  v11.fields.y = y;
  ScreenPosition_30481864 = CTouch__getScreenPosition_30481864(v11, v7->static_fields->mScreenCam, v2);
  v9 = ScreenPosition_30481864.fields.y;
  v8 = ScreenPosition_30481864.fields.x;
  result.fields.y = v9;
  result.fields.x = v8;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o __fastcall CTouch__getScreenPosition_30481864(
        UnityEngine_Vector2_o tch_pos,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  int v3; // w2
  __int64 v4; // x3
  float y; // s8
  float x; // s9
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  __int64 v11; // x1
  float v12; // s1
  UnityEngine_Vector2_o zero; // kr00_8
  float v14; // s9
  CTouch_c *v15; // x0
  UnityEngine_Camera_o *mScreenCam; // x0
  float v17; // s0
  float v18; // s1
  float v19; // s9
  float v20; // s8
  unsigned int lossyScale; // s0
  float v22; // s10
  float v23; // s0
  UnityEngine_Ray_o v24; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Ray_o v25; // [xsp+20h] [xbp-50h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  y = tch_pos.fields.y;
  x = tch_pos.fields.x;
  if ( (byte_42EB602 & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, (_DWORD)method, v3, v4);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42EB602 = 1;
  }
  memset(&v25, 0, sizeof(v25));
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0LL, 0LL) || x == 3.4028e38 || y == 3.4028e38 )
  {
    zero = UnityEngine_Vector2__get_zero(0LL);
    v12 = zero.fields.y;
    v14 = zero.fields.x;
  }
  else
  {
    v15 = CTouch_TypeInfo;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v15 = CTouch_TypeInfo;
    }
    mScreenCam = v15->static_fields->mScreenCam;
    if ( !mScreenCam )
      goto LABEL_20;
    v27.fields.z = 0.0;
    v27.fields.x = x;
    v27.fields.y = y;
    UnityEngine_Camera__ScreenPointToRay_41565876(&v24, mScreenCam, v27, 0LL);
    v25 = v24;
    *(UnityEngine_Vector3_o *)&v17 = UnityEngine_Ray__get_origin(&v25, 0LL);
    mScreenCam = CTouch_TypeInfo->static_fields->mScreenCam;
    if ( !mScreenCam
      || (v19 = v17,
          v20 = v18,
          (mScreenCam = (UnityEngine_Camera_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)mScreenCam,
                                                  0LL)) == 0LL)
      || (lossyScale = (unsigned int)UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)mScreenCam, 0LL),
          (mScreenCam = CTouch_TypeInfo->static_fields->mScreenCam) == 0LL)
      || (v22 = *(float *)&lossyScale,
          (mScreenCam = (UnityEngine_Camera_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)mScreenCam,
                                                  0LL)) == 0LL) )
    {
LABEL_20:
      sub_B5D69C(mScreenCam, v11);
    }
    v14 = v19 / v22;
    v28 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)mScreenCam, 0LL);
    v12 = v20 / v28.fields.y;
  }
  v23 = v14;
  result.fields.y = v12;
  result.fields.x = v23;
  return result;
}


UnityEngine_Vector2_o __fastcall CTouch__getScreenPosition_30482268(
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  CTouch_c *v4; // x0
  const MethodInfo *v5; // x1
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o ScreenPosition_30481864; // kr00_8
  UnityEngine_Vector2_o TouchPos; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_42EB601 & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB601 = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  TouchPos = CTouch__GetTouchPos((const MethodInfo *)v4);
  ScreenPosition_30481864 = CTouch__getScreenPosition_30481864(TouchPos, CTouch_TypeInfo->static_fields->mScreenCam, v5);
  y = ScreenPosition_30481864.fields.y;
  x = ScreenPosition_30481864.fields.x;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


int32_t __fastcall CTouch__getTouchState(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  CTouch_c *v4; // x0

  if ( (byte_42EB5F1 & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, v1, v2, v3);
    byte_42EB5F1 = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v4 = CTouch_TypeInfo;
  }
  return v4->static_fields->mState;
}


void __fastcall CTouch__init(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  CTouch_c *v4; // x0
  struct CTouch_StaticFields **p_static_fields; // x8
  struct CTouch_StaticFields *static_fields; // x9
  bool *p_mIsInitDone; // x9
  _BOOL4 mIsInitDone; // t1

  if ( (byte_42EB5ED & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, v1, v2, v3);
    byte_42EB5ED = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v4 = CTouch_TypeInfo;
  }
  p_static_fields = &v4->static_fields;
  static_fields = v4->static_fields;
  mIsInitDone = static_fields->mIsInitDone;
  p_mIsInitDone = &static_fields->mIsInitDone;
  if ( !mIsInitDone )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  CTouch_c *v4; // x0
  CTouch_c *v5; // x0

  if ( (byte_42EB5FB & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, v1, v2, v3);
    byte_42EB5FB = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !CTouch__isDragMode((const MethodInfo *)v4) )
    return 0;
  v5 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  return CTouch__isTouchKeep((const MethodInfo *)v5);
}


bool __fastcall CTouch__isDragMode(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  CTouch_c *v4; // x0

  if ( (byte_42EB5FA & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, v1, v2, v3);
    byte_42EB5FA = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v4 = CTouch_TypeInfo;
  }
  return v4->static_fields->mDragFrameCnt >= 0;
}


bool __fastcall CTouch__isFlick(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  CTouch_c *v4; // x0

  if ( (byte_42EB5F6 & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, v1, v2, v3);
    byte_42EB5F6 = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v4 = CTouch_TypeInfo;
  }
  return CTouch__isFlick_30479352(v4->static_fields->FLICK_LEN, (const MethodInfo *)v4);
}


bool __fastcall CTouch__isFlick_30479352(float flickLen, const MethodInfo *method)
{
  int v2; // w1
  int v3; // w2
  __int64 v4; // x3
  CTouch_c *v6; // x0
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  CTouch_c *v10; // x0

  if ( (byte_42EB5F7 & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, v2, v3, v4);
    byte_42EB5F7 = 1;
  }
  v6 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !CTouch__isTouchRelease((const MethodInfo *)v6) )
    return 0;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !byte_42EB70C )
  {
    sub_B5D5C4(&CTouch_TypeInfo, v7, v8, v9);
    byte_42EB70C = 1;
  }
  v10 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v10 = CTouch_TypeInfo;
  }
  return v10->static_fields->mScrPosDeltaLen >= flickLen;
}


bool __fastcall CTouch__isTouchKeep(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  CTouch_c *v4; // x0

  if ( (byte_42EB5F4 & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, v1, v2, v3);
    byte_42EB5F4 = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v4 = CTouch_TypeInfo;
  }
  return v4->static_fields->mState == 2;
}


bool __fastcall CTouch__isTouchNone(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  CTouch_c *v4; // x0

  if ( (byte_42EB5F2 & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, v1, v2, v3);
    byte_42EB5F2 = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v4 = CTouch_TypeInfo;
  }
  return v4->static_fields->mState == 0;
}


bool __fastcall CTouch__isTouchPush(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  CTouch_c *v4; // x0

  if ( (byte_42EB5F3 & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, v1, v2, v3);
    byte_42EB5F3 = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v4 = CTouch_TypeInfo;
  }
  return v4->static_fields->mState == 1;
}


bool __fastcall CTouch__isTouchRelease(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  CTouch_c *v4; // x0

  if ( (byte_42EB5F5 & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, v1, v2, v3);
    byte_42EB5F5 = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v4 = CTouch_TypeInfo;
  }
  return v4->static_fields->mState == 3;
}


void __fastcall CTouch__process(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  CTouch_c *v4; // x0
  struct CTouch_StaticFields *static_fields; // x8
  int32_t mProcessOldFrameCount; // w19
  int32_t frameCount; // w0
  CTouch_c *v8; // x8
  int32_t v9; // w19
  CTouch_c *v10; // x0
  CTouch_c *v11; // x0
  bool v12; // w0
  CTouch_c *v13; // x0

  if ( (byte_42EB5F0 & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, v1, v2, v3);
    byte_42EB5F0 = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v4 = CTouch_TypeInfo;
  }
  static_fields = v4->static_fields;
  if ( static_fields->mIsInitDone )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = CTouch_TypeInfo;
      static_fields = CTouch_TypeInfo->static_fields;
    }
    if ( static_fields->mIsClassEnabled )
    {
      if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v4);
        static_fields = CTouch_TypeInfo->static_fields;
      }
      mProcessOldFrameCount = static_fields->mProcessOldFrameCount;
      if ( mProcessOldFrameCount != UnityEngine_Time__get_frameCount(0LL) )
      {
        frameCount = UnityEngine_Time__get_frameCount(0LL);
        v8 = CTouch_TypeInfo;
        v9 = frameCount;
        if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
          v8 = CTouch_TypeInfo;
        }
        v8->static_fields->mProcessOldFrameCount = v9;
        if ( !UnityEngine_Input__get_multiTouchEnabled(0LL) )
          goto LABEL_39;
        v10 = CTouch_TypeInfo;
        if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
          v10 = CTouch_TypeInfo;
        }
        if ( !v10->static_fields->mIsReq_MultiTouchEnabled )
        {
          if ( UnityEngine_Input__get_touchCount(0LL) > 0 )
          {
LABEL_33:
            v13 = CTouch_TypeInfo;
            if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
            CTouch__processSingleTouch((const MethodInfo *)v13);
            return;
          }
          v12 = 0;
        }
        else
        {
LABEL_39:
          if ( UnityEngine_Input__get_multiTouchEnabled(0LL) )
            goto LABEL_33;
          v11 = CTouch_TypeInfo;
          if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
            v11 = CTouch_TypeInfo;
          }
          if ( !v11->static_fields->mIsReq_MultiTouchEnabled )
            goto LABEL_33;
          v12 = 1;
        }
        UnityEngine_Input__set_multiTouchEnabled(v12, 0LL);
        goto LABEL_33;
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CTouch__processSingleTouch(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v4; // x0
  CTouch_c *v5; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  CTouch_c *v8; // x0
  struct UnityEngine_Touch_array *mTouch; // x20
  int32_t ValidTouchLastID; // w0
  _QWORD *p_image; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x0
  struct UnityEngine_Vector2_o ScreenPosition_30481740; // kr08_8
  CTouch_c *v15; // x0
  __int64 v16; // x8
  const MethodInfo *touchCount; // x0
  CTouch_c *v18; // x8
  struct UnityEngine_Vector2_o v19; // kr10_8
  CTouch_c *v20; // x8
  struct UnityEngine_Vector2_o zero; // kr20_8
  CTouch_c *v22; // x0
  CTouch_TouchEventHandler_o *mOnTouchPressEvent; // x8
  __int64 v24; // x8
  __int64 v25; // x8
  __int64 v26; // x8
  __int64 v27; // x8
  CTouch_c *v28; // x0
  CTouch_TouchEventHandler_o *mOnTouchReleaseEvent; // x8
  CTouch_c *v30; // x0
  _BOOL8 isTouchKeep; // x0
  CTouch_c *v32; // x8
  struct CTouch_StaticFields *static_fields; // x9
  int32_t *p_mDragFrameCnt; // x9
  int32_t v35; // w10
  int32_t mDragFrameCnt; // t1
  struct CTouch_StaticFields *v37; // x9
  int32_t v38; // t1
  bool v39; // w0
  CTouch_c *v40; // x8
  float32x2_t *v41; // x9
  float32x2_t v42; // d1 OVERLAPPED
  unsigned __int64 v43; // d0
  float magnitude; // s0
  struct CTouch_StaticFields *v45; // x9
  struct CTouch_StaticFields *v46; // x8
  float x; // s8
  float y; // s9
  UnityEngine_Vector2_o v49; // kr28_8
  float v50; // s1
  float v51; // s0
  CTouch_c *v52; // x0
  __int64 v53; // x0
  char v54[72]; // [xsp+8h] [xbp-108h] BYREF
  UnityEngine_Touch_o v55; // [xsp+50h] [xbp-C0h] BYREF
  char v56[72]; // [xsp+98h] [xbp-78h] BYREF
  unsigned __int64 v57; // [xsp+F8h] [xbp-18h] BYREF

  if ( (byte_42EB607 & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, v1, v2, v3);
    byte_42EB607 = 1;
  }
  v57 = 0LL;
  v4 = (const MethodInfo *)CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v4 = (const MethodInfo *)CTouch_TypeInfo;
  }
  HIDWORD(v4[2].klass->_1.name) = 0;
  CTouch_TypeInfo->static_fields->mPosNow = CTouch__GetTouchPos(v4);
  if ( UnityEngine_Input__get_touchCount(0LL) < 1 )
    goto LABEL_21;
  v5 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( CTouch__GetValidTouchCount((const MethodInfo *)v5) != 1 )
    goto LABEL_21;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( (CTouch__GetValidTouchLastID(1, v6) & 0x80000000) == 0 )
  {
    v8 = CTouch_TypeInfo;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v8 = CTouch_TypeInfo;
    }
    mTouch = v8->static_fields->mTouch;
    ValidTouchLastID = CTouch__GetValidTouchLastID(1, v7);
    UnityEngine_Input__GetTouch(&v55, ValidTouchLastID, 0LL);
    p_image = memcpy(v56, &v55, 0x44u);
    if ( !mTouch )
      goto LABEL_145;
    p_image = memcpy(v54, v56, 0x44u);
    if ( !mTouch->max_length )
      goto LABEL_144;
    memcpy(&mTouch->m_Items[0].fields.m_Position, v54, 0x44u);
LABEL_21:
    v13 = (const MethodInfo *)CTouch_TypeInfo;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v13 = (const MethodInfo *)CTouch_TypeInfo;
    }
    *(_QWORD *)&v13[2].klass->_1.this_arg.bits = *(_QWORD *)&v13[2].klass->_1.byval_arg.bits;
    ScreenPosition_30481740 = CTouch__getScreenPosition_30481740((UnityEngine_Vector2_o)v13[2].klass->_1.namespaze, v13);
    v15 = CTouch_TypeInfo;
    CTouch_TypeInfo->static_fields->mScrPosNow = ScreenPosition_30481740;
    if ( v15->static_fields->mIsTchNow )
      goto LABEL_50;
    if ( (BYTE3(v15->vtable._0_Equals.methodPtr) & 4) != 0 && !v15->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v15);
    if ( CTouch__GetValidTouchCount((const MethodInfo *)v15) != 1 )
      goto LABEL_50;
    if ( UnityEngine_Input__get_touchCount(0LL) >= 1 )
    {
      p_image = &CTouch_TypeInfo->_1.image;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        p_image = &CTouch_TypeInfo->_1.image;
      }
      v16 = *(_QWORD *)(p_image[23] + 8LL);
      if ( !v16 )
        goto LABEL_145;
      if ( !*(_DWORD *)(v16 + 24) )
        goto LABEL_144;
      if ( !UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v16 + 32), 0LL) )
        goto LABEL_37;
    }
    if ( !UnityEngine_Input__GetMouseButtonDown(0, 0LL) )
    {
LABEL_50:
      v22 = CTouch_TypeInfo;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v22 = CTouch_TypeInfo;
      }
      if ( v22->static_fields->mIsTchNow )
      {
        if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v22);
        if ( CTouch__GetValidTouchCount((const MethodInfo *)v22) == 1 )
        {
          p_image = &CTouch_TypeInfo->_1.image;
          if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
            p_image = &CTouch_TypeInfo->_1.image;
          }
          v24 = *(_QWORD *)(p_image[23] + 8LL);
          if ( !v24 )
            goto LABEL_145;
          if ( !*(_DWORD *)(v24 + 24) )
            goto LABEL_144;
          if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v24 + 32), 0LL) == 1 )
            goto LABEL_74;
          p_image = &CTouch_TypeInfo->_1.image;
          if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
            p_image = &CTouch_TypeInfo->_1.image;
          }
          v25 = *(_QWORD *)(p_image[23] + 8LL);
          if ( !v25 )
            goto LABEL_145;
          if ( !*(_DWORD *)(v25 + 24) )
            goto LABEL_144;
          if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v25 + 32), 0LL) == 2 )
            goto LABEL_74;
        }
        v22 = CTouch_TypeInfo;
        if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
          v22 = CTouch_TypeInfo;
        }
        if ( v22->static_fields->mIsTchMouseNow )
        {
LABEL_74:
          v22 = CTouch_TypeInfo;
          if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
            v22 = CTouch_TypeInfo;
          }
          v22->static_fields->mState = 2;
        }
      }
    }
    else
    {
LABEL_37:
      touchCount = (const MethodInfo *)UnityEngine_Input__get_touchCount(0LL);
      v18 = CTouch_TypeInfo;
      if ( !(_DWORD)touchCount )
      {
        if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
          v18 = CTouch_TypeInfo;
        }
        v18->static_fields->mIsTchMouseNow = 1;
      }
      if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = CTouch_TypeInfo;
      }
      v18->static_fields->mIsTchNow = 1;
      v18->static_fields->mState = 1;
      v18->static_fields->mPosPush = v18->static_fields->mPosNow;
      v19 = CTouch__getScreenPosition_30481740(v18->static_fields->mPosPush, touchCount);
      v20 = CTouch_TypeInfo;
      CTouch_TypeInfo->static_fields->mScrPosPush = v19;
      v20->static_fields->mScrPosOld = v20->static_fields->mScrPosNow;
      CTouch_TypeInfo->static_fields->mScrPosDeltaOld = UnityEngine_Vector2__get_zero(0LL);
      zero = UnityEngine_Vector2__get_zero(0LL);
      v22 = CTouch_TypeInfo;
      CTouch_TypeInfo->static_fields->mScrPosDelta = zero;
      v22->static_fields->mDragFrameCnt = -1;
      v22->static_fields->mDragLen = 0.0;
      mOnTouchPressEvent = v22->static_fields->mOnTouchPressEvent;
      if ( mOnTouchPressEvent )
      {
        if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v22);
          mOnTouchPressEvent = CTouch_TypeInfo->static_fields->mOnTouchPressEvent;
          if ( !mOnTouchPressEvent )
            goto LABEL_145;
        }
        CTouch_TouchEventHandler__Invoke(mOnTouchPressEvent, 0LL);
        v22 = CTouch_TypeInfo;
      }
    }
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = CTouch_TypeInfo;
    }
    if ( !v22->static_fields->mIsTchNow )
      goto LABEL_107;
    if ( (BYTE3(v22->vtable._0_Equals.methodPtr) & 4) != 0 && !v22->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v22);
    if ( CTouch__GetValidTouchCount((const MethodInfo *)v22) != 1 )
    {
LABEL_98:
      if ( !UnityEngine_Input__GetMouseButtonUp(0, 0LL) )
        goto LABEL_107;
LABEL_99:
      v28 = CTouch_TypeInfo;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v28 = CTouch_TypeInfo;
      }
      v28->static_fields->mIsTchMouseNow = 0;
      v28->static_fields->mIsTchNow = 0;
      v28->static_fields->mState = 3;
      mOnTouchReleaseEvent = v28->static_fields->mOnTouchReleaseEvent;
      if ( !mOnTouchReleaseEvent )
        goto LABEL_107;
      if ( (BYTE3(v28->vtable._0_Equals.methodPtr) & 4) == 0
        || v28->_2.cctor_finished
        || (j_il2cpp_runtime_class_init_0(v28),
            (mOnTouchReleaseEvent = CTouch_TypeInfo->static_fields->mOnTouchReleaseEvent) != 0LL) )
      {
        CTouch_TouchEventHandler__Invoke(mOnTouchReleaseEvent, 0LL);
LABEL_107:
        v30 = CTouch_TypeInfo;
        if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        isTouchKeep = CTouch__isTouchKeep((const MethodInfo *)v30);
        v32 = CTouch_TypeInfo;
        if ( isTouchKeep )
        {
          if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
            v32 = CTouch_TypeInfo;
          }
          static_fields = v32->static_fields;
          mDragFrameCnt = static_fields->mDragFrameCnt;
          p_mDragFrameCnt = &static_fields->mDragFrameCnt;
          v35 = mDragFrameCnt;
          if ( (mDragFrameCnt & 0x80000000) == 0 )
          {
            if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v32);
              v32 = CTouch_TypeInfo;
              v37 = CTouch_TypeInfo->static_fields;
              v38 = v37->mDragFrameCnt;
              p_mDragFrameCnt = &v37->mDragFrameCnt;
              v35 = v38;
            }
            *p_mDragFrameCnt = v35 + 1;
          }
        }
        if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v32);
        v39 = CTouch__isTouchKeep((const MethodInfo *)isTouchKeep);
        v40 = CTouch_TypeInfo;
        if ( v39 )
        {
          if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
            v40 = CTouch_TypeInfo;
          }
          v41 = (float32x2_t *)v40->static_fields;
          if ( (v41[11].n64_u32[0] & 0x80000000) != 0 )
          {
            if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v40);
              v41 = (float32x2_t *)CTouch_TypeInfo->static_fields;
            }
            v42.n64_u64[0] = v41[6].n64_u64[0];
            v43 = vsub_f32(v41[5], v42).n64_u64[0];
            v57 = v43;
            magnitude = UnityEngine_Vector2__get_magnitude(
                          *(UnityEngine_Vector2_o *)((char *)&v42 - 4),
                          (const MethodInfo *)&v57);
            v40 = CTouch_TypeInfo;
            CTouch_TypeInfo->static_fields->mDragLen = magnitude;
            v45 = v40->static_fields;
            if ( v45->mDragLen >= v45->DRAG_LEN )
            {
              if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v40);
                v40 = CTouch_TypeInfo;
                v45 = CTouch_TypeInfo->static_fields;
              }
              v45->mDragFrameCnt = 0;
            }
          }
        }
        if ( (BYTE3(v40->vtable._0_Equals.methodPtr) & 4) != 0 && !v40->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v40);
          v40 = CTouch_TypeInfo;
        }
        v40->static_fields->mScrPosDeltaOld = v40->static_fields->mScrPosDelta;
        v40->static_fields->mScrPosDelta = (struct UnityEngine_Vector2_o)vsub_f32(
                                                                           (float32x2_t)v40->static_fields->mScrPosNow,
                                                                           (float32x2_t)v40->static_fields->mScrPosOld).n64_u64[0];
        v40->static_fields->mScrPosDeltaLenOld = v40->static_fields->mScrPosDeltaLen;
        v40->static_fields->mScrPosDeltaLen = 0.0;
        v46 = v40->static_fields;
        x = v46->mScrPosDelta.fields.x;
        y = v46->mScrPosDelta.fields.y;
        v49 = UnityEngine_Vector2__get_zero(0LL);
        v50 = (float)(y - v49.fields.y) * (float)(y - v49.fields.y);
        v51 = (float)((float)(x - v49.fields.x) * (float)(x - v49.fields.x)) + v50;
        if ( v51 >= 1.0e-10 )
        {
          v52 = CTouch_TypeInfo;
          if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
          {
            LODWORD(v51) = j_il2cpp_runtime_class_init_0(CTouch_TypeInfo).n128_u32[0];
            v52 = CTouch_TypeInfo;
          }
          CTouch_TypeInfo->static_fields->mScrPosDeltaLen = UnityEngine_Vector2__get_magnitude(
                                                              *(UnityEngine_Vector2_o *)&v51,
                                                              (const MethodInfo *)&v52->static_fields->mScrPosDelta);
        }
        return;
      }
LABEL_145:
      sub_B5D69C(p_image, v12);
    }
    p_image = &CTouch_TypeInfo->_1.image;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      p_image = &CTouch_TypeInfo->_1.image;
    }
    v26 = *(_QWORD *)(p_image[23] + 8LL);
    if ( !v26 )
      goto LABEL_145;
    if ( *(_DWORD *)(v26 + 24) )
    {
      if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v26 + 32), 0LL) == 3 )
        goto LABEL_99;
      p_image = &CTouch_TypeInfo->_1.image;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        p_image = &CTouch_TypeInfo->_1.image;
      }
      v27 = *(_QWORD *)(p_image[23] + 8LL);
      if ( !v27 )
        goto LABEL_145;
      if ( *(_DWORD *)(v27 + 24) )
      {
        if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v27 + 32), 0LL) == 4 )
          goto LABEL_99;
        goto LABEL_98;
      }
    }
LABEL_144:
    v53 = sub_B5D6C8(p_image);
    sub_B5D668(v53, 0LL);
  }
}


void __fastcall CTouch__reboot(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  CTouch_c *v4; // x0

  if ( (byte_42EB5EC & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, v1, v2, v3);
    byte_42EB5EC = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v4 = CTouch_TypeInfo;
  }
  v4->static_fields->mIsInitDone = 0;
}


void __fastcall CTouch__remove_OnTouchPressEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB5EB & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB5EB = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__remove_mOnTouchPressEvent(value, method);
}


void __fastcall CTouch__remove_OnTouchReleaseEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB5E7 & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB5E7 = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__remove_mOnTouchReleaseEvent(value, method);
}


void __fastcall CTouch__remove_mOnTouchPressEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CTouch_c *v8; // x0
  System_Delegate_o *mOnTouchPressEvent; // x20
  System_Delegate_o *v10; // x0
  System_Delegate_o *v11; // x21
  CTouch_c *v12; // x0
  __int64 v13; // x0
  bool v14; // zf
  CTouch_TouchEventHandler_o *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_42EB5E9 & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CTouch_TouchEventHandler_TypeInfo, v5, v6, v7);
    byte_42EB5E9 = 1;
  }
  v8 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v8 = CTouch_TypeInfo;
  }
  mOnTouchPressEvent = (System_Delegate_o *)v8->static_fields->mOnTouchPressEvent;
  while ( 1 )
  {
    v10 = System_Delegate__Remove(mOnTouchPressEvent, (System_Delegate_o *)value, 0LL);
    v11 = v10;
    if ( v10 )
    {
      if ( (CTouch_TouchEventHandler_c *)v10->klass != CTouch_TouchEventHandler_TypeInfo )
        break;
    }
    v12 = CTouch_TypeInfo;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v12 = CTouch_TypeInfo;
    }
    v13 = sub_B51FDC(&v12->static_fields->mOnTouchPressEvent, v11, mOnTouchPressEvent);
    v14 = mOnTouchPressEvent == (System_Delegate_o *)v13;
    mOnTouchPressEvent = (System_Delegate_o *)v13;
    if ( v14 )
      return;
  }
  sub_B5D990(v10);
  CTouch__add_OnTouchPressEvent(v15, v16);
}


void __fastcall CTouch__remove_mOnTouchReleaseEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  CTouch_c *v8; // x0
  System_Delegate_o *mOnTouchReleaseEvent; // x20
  System_Delegate_o *v10; // x0
  System_Delegate_o *v11; // x21
  CTouch_c *v12; // x0
  __int64 v13; // x0
  bool v14; // zf
  CTouch_TouchEventHandler_o *v15; // x0
  const MethodInfo *v16; // x1

  if ( (byte_42EB5E5 & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CTouch_TouchEventHandler_TypeInfo, v5, v6, v7);
    byte_42EB5E5 = 1;
  }
  v8 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v8 = CTouch_TypeInfo;
  }
  mOnTouchReleaseEvent = (System_Delegate_o *)v8->static_fields->mOnTouchReleaseEvent;
  while ( 1 )
  {
    v10 = System_Delegate__Remove(mOnTouchReleaseEvent, (System_Delegate_o *)value, 0LL);
    v11 = v10;
    if ( v10 )
    {
      if ( (CTouch_TouchEventHandler_c *)v10->klass != CTouch_TouchEventHandler_TypeInfo )
        break;
    }
    v12 = CTouch_TypeInfo;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v12 = CTouch_TypeInfo;
    }
    v13 = sub_B51FDC(&v12->static_fields->mOnTouchReleaseEvent, v11, mOnTouchReleaseEvent);
    v14 = mOnTouchReleaseEvent == (System_Delegate_o *)v13;
    mOnTouchReleaseEvent = (System_Delegate_o *)v13;
    if ( v14 )
      return;
  }
  sub_B5D990(v10);
  CTouch__add_OnTouchReleaseEvent(v15, v16);
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

  if ( (byte_42EB5EE & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, (_DWORD)method, (_DWORD)v4, v5);
    byte_42EB5EE = 1;
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
    if ( !byte_42E5011 )
    {
      sub_B5D5C4(&CTouch_TypeInfo, (_DWORD)method, (_DWORD)v4, v5);
      byte_42E5011 = 1;
    }
    v15 = CTouch_TypeInfo;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v15 = CTouch_TypeInfo;
    }
    v16 = v15->static_fields;
    v16->mScreenCam = screen_cam;
    sub_B5D560(
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

  if ( (byte_42EB5EF & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, (_DWORD)method, (_DWORD)v2, v3);
    byte_42EB5EF = 1;
  }
  v9 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v9 = CTouch_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->mScreenCam = cam;
  sub_B5D560(
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
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall CTouch_TouchEventHandler__BeginInvoke(
        CTouch_TouchEventHandler_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B5D568(this, &v5, callback, object);
}


void __fastcall CTouch_TouchEventHandler__EndInvoke(
        CTouch_TouchEventHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


void __fastcall CTouch_TouchEventHandler__Invoke(CTouch_TouchEventHandler_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x8
  __int64 v5; // x23
  CTouch_TouchEventHandler_o **v6; // x24
  __int64 v7; // x25
  unsigned int v8; // w22
  __int64 class_0; // x0
  __int64 v10; // x3
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
  __int64 v24; // x3
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  CTouch_TouchEventHandler_o *v30; // [xsp+8h] [xbp-38h] BYREF

  v30 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v30;
    v5 = 1LL;
    goto LABEL_5;
  }
  v5 = *(_QWORD *)(v3 + 24);
  if ( v5 )
  {
    v6 = (CTouch_TouchEventHandler_o **)(v3 + 32);
LABEL_5:
    v7 = 0LL;
    while ( 1 )
    {
      v18 = v6[v7];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(__int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v18->fields.extra_arg, method, v2);
      if ( (sub_B5D5F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) )
        goto LABEL_35;
      v21(v20);
LABEL_36:
      if ( ++v7 == v5 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B5D5EC(v20);
      v23 = sub_B5D9F0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v25 = *v19;
          v26 = *(_QWORD *)(v20 + 24);
          v27 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_34;
            }
            v16 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_34:
            v16 = sub_AF54C0(v19, v26, v27, v24);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD))sub_B5D674(v15, v20);
        (*v17)(v19, v17);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v20 + 72);
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
            v14 = v11 + 16LL * (int)(*v13 + v8) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AF54C0(v19, class_0, v8, v10);
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