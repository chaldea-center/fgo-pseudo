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
  System_Collections_Generic_List_int__o *v14; // x19
  struct CTouch_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_41897B9 & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, v1);
    sub_B2C35C(&Method_System_Collections_Generic_List_int___ctor__, v2);
    sub_B2C35C(&System_Collections_Generic_List_int__TypeInfo, v3);
    sub_B2C35C(&UnityEngine_Touch___TypeInfo, v4);
    byte_41897B9 = 1;
  }
  CTouch_TypeInfo->static_fields->FLICK_LEN = 5.0;
  CTouch_TypeInfo->static_fields->DRAG_LEN = 15.0;
  v5 = (System_Int32_array **)sub_B2C374(UnityEngine_Touch___TypeInfo, 1LL);
  static_fields = CTouch_TypeInfo->static_fields;
  static_fields->mTouch = (struct UnityEngine_Touch_array *)v5;
  sub_B2C2F8((BattleServantConfConponent_o *)&static_fields->mTouch, v5, v7, v8, v9, v10, v11, v12);
  v13 = CTouch_TypeInfo;
  CTouch_TypeInfo->static_fields->mIsTchNow = 0;
  v13->static_fields->mIsTchMouseNow = 0;
  v13->static_fields->mState = 0;
  v13->static_fields->mDragFrameCnt = -1;
  v13->static_fields->mIsClassEnabled = 0;
  v14 = (System_Collections_Generic_List_int__o *)sub_B2C42C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_2F6629C *)Method_System_Collections_Generic_List_int___ctor__);
  v15 = CTouch_TypeInfo->static_fields;
  v15->ignoreFingerIDList = v14;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v15->ignoreFingerIDList,
    (System_Int32_array **)v14,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
}


System_Collections_Generic_List_int__o *__fastcall CTouch__GetIgnoreFingerIDList(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0

  if ( (byte_41897B7 & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, v1);
    byte_41897B7 = 1;
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

  if ( (byte_41897AC & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, v1);
    byte_41897AC = 1;
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
  __int64 v4; // x1
  int v5; // w19
  CTouch_c *v6; // x8
  struct System_Collections_Generic_List_int__o *ignoreFingerIDList; // x8

  if ( (byte_41897B6 & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, v1);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__get_Count__, v2);
    byte_41897B6 = 1;
  }
  touchCount = UnityEngine_Input__get_touchCount(0LL);
  v5 = touchCount;
  v6 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v6 = CTouch_TypeInfo;
  }
  ignoreFingerIDList = v6->static_fields->ignoreFingerIDList;
  if ( !ignoreFingerIDList )
    sub_B2C434(touchCount, v4);
  return v5 - ignoreFingerIDList->fields._size;
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
  __int64 v10; // x1
  __int64 v11; // x22
  CTouch_c *v12; // x0
  System_Collections_Generic_List_int__o *v13; // x20
  __int64 v15; // x0

  if ( (byte_41897B8 & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v3);
    byte_41897B8 = 1;
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
                (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__) )
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
    v11 = 32LL;
    while ( 1 )
    {
      v12 = CTouch_TypeInfo;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v12 = CTouch_TypeInfo;
      }
      v13 = v12->static_fields->ignoreFingerIDList;
      touches = UnityEngine_Input__get_touches(0LL);
      if ( !touches )
        goto LABEL_31;
      if ( v5 >= touches->max_length )
      {
LABEL_32:
        v15 = sub_B2C460(touches);
        sub_B2C400(v15, 0LL);
      }
      touches = (UnityEngine_Touch_array *)UnityEngine_Touch__get_fingerId(
                                             (UnityEngine_Touch_o *)((char *)touches + v11),
                                             0LL);
      if ( !v13 )
LABEL_31:
        sub_B2C434(touches, v10);
      if ( !System_Collections_Generic_List_int___Contains(
              v13,
              (int32_t)touches,
              (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__) )
        break;
      ++v5;
      v11 += 68LL;
      if ( (__int64)v5 >= UnityEngine_Input__get_touchCount(0LL) )
        goto LABEL_29;
    }
  }
  return v5;
}


void __fastcall CTouch__SetClassEnabled(bool isEnabled, const MethodInfo *method)
{
  CTouch_c *v3; // x0

  if ( (byte_4189790 & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, method);
    byte_4189790 = 1;
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

  if ( (byte_4189791 & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, method);
    byte_4189791 = 1;
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
  if ( (byte_4189798 & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, method);
    byte_4189798 = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__add_mOnTouchPressEvent(value, method);
}


void __fastcall CTouch__add_OnTouchReleaseEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  if ( (byte_4189794 & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, method);
    byte_4189794 = 1;
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

  if ( (byte_4189796 & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, method);
    sub_B2C35C(&CTouch_TouchEventHandler_TypeInfo, v3);
    byte_4189796 = 1;
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
    v9 = sub_B20D74(&v8->static_fields->mOnTouchPressEvent, v7, mOnTouchPressEvent);
    v10 = mOnTouchPressEvent == (System_Delegate_o *)v9;
    mOnTouchPressEvent = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CTouch_TouchEventHandler_o *)sub_B2C728(v6);
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

  if ( (byte_4189792 & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, method);
    sub_B2C35C(&CTouch_TouchEventHandler_TypeInfo, v3);
    byte_4189792 = 1;
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
    v9 = sub_B20D74(&v8->static_fields->mOnTouchReleaseEvent, v7, mOnTouchReleaseEvent);
    v10 = mOnTouchReleaseEvent == (System_Delegate_o *)v9;
    mOnTouchReleaseEvent = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CTouch_TouchEventHandler_o *)sub_B2C728(v6);
  CTouch__remove_mOnTouchReleaseEvent(v11, v12);
}


int32_t __fastcall CTouch__getDragFrameCnt(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0

  if ( (byte_41897AA & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, v1);
    byte_41897AA = 1;
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

  if ( (byte_41897A6 & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, v1);
    byte_41897A6 = 1;
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
  if ( !byte_4186509 )
  {
    sub_B2C35C(&CTouch_TypeInfo, v3);
    byte_4186509 = 1;
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

  if ( (byte_41897A7 & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, v1);
    byte_41897A7 = 1;
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
  if ( !byte_4186509 )
  {
    sub_B2C35C(&CTouch_TypeInfo, v3);
    byte_4186509 = 1;
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

  if ( (byte_41897AB & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, v1);
    byte_41897AB = 1;
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

  if ( (byte_41897B1 & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, v1);
    byte_41897B1 = 1;
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

  if ( (byte_41897B3 & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, v1);
    byte_41897B3 = 1;
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

  if ( (byte_41897B4 & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, v1);
    byte_41897B4 = 1;
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

  if ( (byte_41897B2 & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, v1);
    byte_41897B2 = 1;
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

  if ( (byte_41897AD & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, v1);
    byte_41897AD = 1;
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
UnityEngine_Vector2_o __fastcall CTouch__getScreenPosition_28394880(
        UnityEngine_Vector2_o tch_pos,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x1
  float y; // s8
  float x; // s9
  CTouch_c *v5; // x0
  float v6; // s0
  float v7; // s1
  UnityEngine_Vector2_o ScreenPosition_28395004; // kr00_8
  UnityEngine_Vector2_o v9; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  y = tch_pos.fields.y;
  x = tch_pos.fields.x;
  if ( (byte_41897AE & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, v2);
    byte_41897AE = 1;
  }
  v5 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v5 = CTouch_TypeInfo;
  }
  v9.fields.x = x;
  v9.fields.y = y;
  ScreenPosition_28395004 = CTouch__getScreenPosition_28395004(v9, v5->static_fields->mScreenCam, v2);
  v7 = ScreenPosition_28395004.fields.y;
  v6 = ScreenPosition_28395004.fields.x;
  result.fields.y = v7;
  result.fields.x = v6;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o __fastcall CTouch__getScreenPosition_28395004(
        UnityEngine_Vector2_o tch_pos,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  __int64 v6; // x1
  __int64 v7; // x1
  float v8; // s1
  UnityEngine_Vector2_o zero; // kr00_8
  float v10; // s9
  CTouch_c *v11; // x0
  UnityEngine_Camera_o *mScreenCam; // x0
  float v13; // s0
  float v14; // s1
  float v15; // s9
  float v16; // s8
  unsigned int lossyScale; // s0
  float v18; // s10
  float v19; // s0
  UnityEngine_Ray_o v20; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Ray_o v21; // [xsp+20h] [xbp-50h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  y = tch_pos.fields.y;
  x = tch_pos.fields.x;
  if ( (byte_41897B0 & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, method);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_41897B0 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0LL, 0LL) || x == 3.4028e38 || y == 3.4028e38 )
  {
    zero = UnityEngine_Vector2__get_zero(0LL);
    v8 = zero.fields.y;
    v10 = zero.fields.x;
  }
  else
  {
    v11 = CTouch_TypeInfo;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v11 = CTouch_TypeInfo;
    }
    mScreenCam = v11->static_fields->mScreenCam;
    if ( !mScreenCam )
      goto LABEL_20;
    v23.fields.z = 0.0;
    v23.fields.x = x;
    v23.fields.y = y;
    UnityEngine_Camera__ScreenPointToRay_40631244(&v20, mScreenCam, v23, 0LL);
    v21 = v20;
    *(UnityEngine_Vector3_o *)&v13 = UnityEngine_Ray__get_origin(&v21, 0LL);
    mScreenCam = CTouch_TypeInfo->static_fields->mScreenCam;
    if ( !mScreenCam
      || (v15 = v13,
          v16 = v14,
          (mScreenCam = (UnityEngine_Camera_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)mScreenCam,
                                                  0LL)) == 0LL)
      || (lossyScale = (unsigned int)UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)mScreenCam, 0LL),
          (mScreenCam = CTouch_TypeInfo->static_fields->mScreenCam) == 0LL)
      || (v18 = *(float *)&lossyScale,
          (mScreenCam = (UnityEngine_Camera_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)mScreenCam,
                                                  0LL)) == 0LL) )
    {
LABEL_20:
      sub_B2C434(mScreenCam, v7);
    }
    v10 = v15 / v18;
    v24 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)mScreenCam, 0LL);
    v8 = v16 / v24.fields.y;
  }
  v19 = v10;
  result.fields.y = v8;
  result.fields.x = v19;
  return result;
}


UnityEngine_Vector2_o __fastcall CTouch__getScreenPosition_28395408(
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  CTouch_c *v2; // x0
  const MethodInfo *v3; // x1
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o ScreenPosition_28395004; // kr00_8
  UnityEngine_Vector2_o TouchPos; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_41897AF & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, method);
    byte_41897AF = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  TouchPos = CTouch__GetTouchPos((const MethodInfo *)v2);
  ScreenPosition_28395004 = CTouch__getScreenPosition_28395004(TouchPos, CTouch_TypeInfo->static_fields->mScreenCam, v3);
  y = ScreenPosition_28395004.fields.y;
  x = ScreenPosition_28395004.fields.x;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


int32_t __fastcall CTouch__getTouchState(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0

  if ( (byte_418979F & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, v1);
    byte_418979F = 1;
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

  if ( (byte_418979B & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, v1);
    byte_418979B = 1;
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

  if ( (byte_41897A9 & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, v1);
    byte_41897A9 = 1;
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

  if ( (byte_41897A8 & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, v1);
    byte_41897A8 = 1;
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

  if ( (byte_41897A4 & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, v1);
    byte_41897A4 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v2 = CTouch_TypeInfo;
  }
  return CTouch__isFlick_28392492(v2->static_fields->FLICK_LEN, (const MethodInfo *)v2);
}


bool __fastcall CTouch__isFlick_28392492(float flickLen, const MethodInfo *method)
{
  __int64 v2; // x1
  CTouch_c *v4; // x0
  __int64 v5; // x1
  CTouch_c *v6; // x0

  if ( (byte_41897A5 & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, v2);
    byte_41897A5 = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !CTouch__isTouchRelease((const MethodInfo *)v4) )
    return 0;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !byte_41897BA )
  {
    sub_B2C35C(&CTouch_TypeInfo, v5);
    byte_41897BA = 1;
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

  if ( (byte_41897A2 & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, v1);
    byte_41897A2 = 1;
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

  if ( (byte_41897A0 & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, v1);
    byte_41897A0 = 1;
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

  if ( (byte_41897A1 & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, v1);
    byte_41897A1 = 1;
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

  if ( (byte_41897A3 & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, v1);
    byte_41897A3 = 1;
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

  if ( (byte_418979E & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, v1);
    byte_418979E = 1;
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
  __int64 v10; // x1
  const MethodInfo *v11; // x0
  struct UnityEngine_Vector2_o ScreenPosition_28394880; // kr08_8
  CTouch_c *v13; // x0
  __int64 v14; // x8
  const MethodInfo *touchCount; // x0
  CTouch_c *v16; // x8
  struct UnityEngine_Vector2_o v17; // kr10_8
  CTouch_c *v18; // x8
  struct UnityEngine_Vector2_o zero; // kr20_8
  CTouch_c *v20; // x0
  CTouch_TouchEventHandler_o *mOnTouchPressEvent; // x8
  __int64 v22; // x8
  __int64 v23; // x8
  __int64 v24; // x8
  __int64 v25; // x8
  CTouch_c *v26; // x0
  CTouch_TouchEventHandler_o *mOnTouchReleaseEvent; // x8
  CTouch_c *v28; // x0
  _BOOL8 isTouchKeep; // x0
  CTouch_c *v30; // x8
  struct CTouch_StaticFields *static_fields; // x9
  int32_t *p_mDragFrameCnt; // x9
  int32_t v33; // w10
  int32_t mDragFrameCnt; // t1
  struct CTouch_StaticFields *v35; // x9
  int32_t v36; // t1
  bool v37; // w0
  CTouch_c *v38; // x8
  float32x2_t *v39; // x9
  float32x2_t v40; // d1 OVERLAPPED
  unsigned __int64 v41; // d0
  float magnitude; // s0
  struct CTouch_StaticFields *v43; // x9
  struct CTouch_StaticFields *v44; // x8
  float x; // s8
  float y; // s9
  UnityEngine_Vector2_o v47; // kr28_8
  float v48; // s1
  float v49; // s0
  CTouch_c *v50; // x0
  __int64 v51; // x0
  char v52[72]; // [xsp+8h] [xbp-108h] BYREF
  UnityEngine_Touch_o v53; // [xsp+50h] [xbp-C0h] BYREF
  char v54[72]; // [xsp+98h] [xbp-78h] BYREF
  unsigned __int64 v55; // [xsp+F8h] [xbp-18h] BYREF

  if ( (byte_41897B5 & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, v1);
    byte_41897B5 = 1;
  }
  v55 = 0LL;
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
    UnityEngine_Input__GetTouch(&v53, ValidTouchLastID, 0LL);
    p_image = memcpy(v54, &v53, 0x44u);
    if ( !mTouch )
      goto LABEL_145;
    p_image = memcpy(v52, v54, 0x44u);
    if ( !mTouch->max_length )
      goto LABEL_144;
    memcpy(&mTouch->m_Items[0].fields.m_Position, v52, 0x44u);
LABEL_21:
    v11 = (const MethodInfo *)CTouch_TypeInfo;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v11 = (const MethodInfo *)CTouch_TypeInfo;
    }
    *(_QWORD *)&v11[2].klass->_1.this_arg.bits = *(_QWORD *)&v11[2].klass->_1.byval_arg.bits;
    ScreenPosition_28394880 = CTouch__getScreenPosition_28394880((UnityEngine_Vector2_o)v11[2].klass->_1.namespaze, v11);
    v13 = CTouch_TypeInfo;
    CTouch_TypeInfo->static_fields->mScrPosNow = ScreenPosition_28394880;
    if ( v13->static_fields->mIsTchNow )
      goto LABEL_50;
    if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v13);
    if ( CTouch__GetValidTouchCount((const MethodInfo *)v13) != 1 )
      goto LABEL_50;
    if ( UnityEngine_Input__get_touchCount(0LL) >= 1 )
    {
      p_image = &CTouch_TypeInfo->_1.image;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        p_image = &CTouch_TypeInfo->_1.image;
      }
      v14 = *(_QWORD *)(p_image[23] + 8LL);
      if ( !v14 )
        goto LABEL_145;
      if ( !*(_DWORD *)(v14 + 24) )
        goto LABEL_144;
      if ( !UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v14 + 32), 0LL) )
        goto LABEL_37;
    }
    if ( !UnityEngine_Input__GetMouseButtonDown(0, 0LL) )
    {
LABEL_50:
      v20 = CTouch_TypeInfo;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v20 = CTouch_TypeInfo;
      }
      if ( v20->static_fields->mIsTchNow )
      {
        if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v20);
        if ( CTouch__GetValidTouchCount((const MethodInfo *)v20) == 1 )
        {
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
          if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v22 + 32), 0LL) == 1 )
            goto LABEL_74;
          p_image = &CTouch_TypeInfo->_1.image;
          if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
            p_image = &CTouch_TypeInfo->_1.image;
          }
          v23 = *(_QWORD *)(p_image[23] + 8LL);
          if ( !v23 )
            goto LABEL_145;
          if ( !*(_DWORD *)(v23 + 24) )
            goto LABEL_144;
          if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v23 + 32), 0LL) == 2 )
            goto LABEL_74;
        }
        v20 = CTouch_TypeInfo;
        if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
          v20 = CTouch_TypeInfo;
        }
        if ( v20->static_fields->mIsTchMouseNow )
        {
LABEL_74:
          v20 = CTouch_TypeInfo;
          if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
            v20 = CTouch_TypeInfo;
          }
          v20->static_fields->mState = 2;
        }
      }
    }
    else
    {
LABEL_37:
      touchCount = (const MethodInfo *)UnityEngine_Input__get_touchCount(0LL);
      v16 = CTouch_TypeInfo;
      if ( !(_DWORD)touchCount )
      {
        if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
          v16 = CTouch_TypeInfo;
        }
        v16->static_fields->mIsTchMouseNow = 1;
      }
      if ( (BYTE3(v16->vtable._0_Equals.methodPtr) & 4) != 0 && !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = CTouch_TypeInfo;
      }
      v16->static_fields->mIsTchNow = 1;
      v16->static_fields->mState = 1;
      v16->static_fields->mPosPush = v16->static_fields->mPosNow;
      v17 = CTouch__getScreenPosition_28394880(v16->static_fields->mPosPush, touchCount);
      v18 = CTouch_TypeInfo;
      CTouch_TypeInfo->static_fields->mScrPosPush = v17;
      v18->static_fields->mScrPosOld = v18->static_fields->mScrPosNow;
      CTouch_TypeInfo->static_fields->mScrPosDeltaOld = UnityEngine_Vector2__get_zero(0LL);
      zero = UnityEngine_Vector2__get_zero(0LL);
      v20 = CTouch_TypeInfo;
      CTouch_TypeInfo->static_fields->mScrPosDelta = zero;
      v20->static_fields->mDragFrameCnt = -1;
      v20->static_fields->mDragLen = 0.0;
      mOnTouchPressEvent = v20->static_fields->mOnTouchPressEvent;
      if ( mOnTouchPressEvent )
      {
        if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v20);
          mOnTouchPressEvent = CTouch_TypeInfo->static_fields->mOnTouchPressEvent;
          if ( !mOnTouchPressEvent )
            goto LABEL_145;
        }
        CTouch_TouchEventHandler__Invoke(mOnTouchPressEvent, 0LL);
        v20 = CTouch_TypeInfo;
      }
    }
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = CTouch_TypeInfo;
    }
    if ( !v20->static_fields->mIsTchNow )
      goto LABEL_107;
    if ( (BYTE3(v20->vtable._0_Equals.methodPtr) & 4) != 0 && !v20->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v20);
    if ( CTouch__GetValidTouchCount((const MethodInfo *)v20) != 1 )
    {
LABEL_98:
      if ( !UnityEngine_Input__GetMouseButtonUp(0, 0LL) )
        goto LABEL_107;
LABEL_99:
      v26 = CTouch_TypeInfo;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v26 = CTouch_TypeInfo;
      }
      v26->static_fields->mIsTchMouseNow = 0;
      v26->static_fields->mIsTchNow = 0;
      v26->static_fields->mState = 3;
      mOnTouchReleaseEvent = v26->static_fields->mOnTouchReleaseEvent;
      if ( !mOnTouchReleaseEvent )
        goto LABEL_107;
      if ( (BYTE3(v26->vtable._0_Equals.methodPtr) & 4) == 0
        || v26->_2.cctor_finished
        || (j_il2cpp_runtime_class_init_0(v26),
            (mOnTouchReleaseEvent = CTouch_TypeInfo->static_fields->mOnTouchReleaseEvent) != 0LL) )
      {
        CTouch_TouchEventHandler__Invoke(mOnTouchReleaseEvent, 0LL);
LABEL_107:
        v28 = CTouch_TypeInfo;
        if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        isTouchKeep = CTouch__isTouchKeep((const MethodInfo *)v28);
        v30 = CTouch_TypeInfo;
        if ( isTouchKeep )
        {
          if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
            v30 = CTouch_TypeInfo;
          }
          static_fields = v30->static_fields;
          mDragFrameCnt = static_fields->mDragFrameCnt;
          p_mDragFrameCnt = &static_fields->mDragFrameCnt;
          v33 = mDragFrameCnt;
          if ( (mDragFrameCnt & 0x80000000) == 0 )
          {
            if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v30);
              v30 = CTouch_TypeInfo;
              v35 = CTouch_TypeInfo->static_fields;
              v36 = v35->mDragFrameCnt;
              p_mDragFrameCnt = &v35->mDragFrameCnt;
              v33 = v36;
            }
            *p_mDragFrameCnt = v33 + 1;
          }
        }
        if ( (BYTE3(v30->vtable._0_Equals.methodPtr) & 4) != 0 && !v30->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v30);
        v37 = CTouch__isTouchKeep((const MethodInfo *)isTouchKeep);
        v38 = CTouch_TypeInfo;
        if ( v37 )
        {
          if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
            v38 = CTouch_TypeInfo;
          }
          v39 = (float32x2_t *)v38->static_fields;
          if ( (v39[11].n64_u32[0] & 0x80000000) != 0 )
          {
            if ( (BYTE3(v38->vtable._0_Equals.methodPtr) & 4) != 0 && !v38->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v38);
              v39 = (float32x2_t *)CTouch_TypeInfo->static_fields;
            }
            v40.n64_u64[0] = v39[6].n64_u64[0];
            v41 = vsub_f32(v39[5], v40).n64_u64[0];
            v55 = v41;
            magnitude = UnityEngine_Vector2__get_magnitude(
                          *(UnityEngine_Vector2_o *)((char *)&v40 - 4),
                          (const MethodInfo *)&v55);
            v38 = CTouch_TypeInfo;
            CTouch_TypeInfo->static_fields->mDragLen = magnitude;
            v43 = v38->static_fields;
            if ( v43->mDragLen >= v43->DRAG_LEN )
            {
              if ( (BYTE3(v38->vtable._0_Equals.methodPtr) & 4) != 0 && !v38->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v38);
                v38 = CTouch_TypeInfo;
                v43 = CTouch_TypeInfo->static_fields;
              }
              v43->mDragFrameCnt = 0;
            }
          }
        }
        if ( (BYTE3(v38->vtable._0_Equals.methodPtr) & 4) != 0 && !v38->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v38);
          v38 = CTouch_TypeInfo;
        }
        v38->static_fields->mScrPosDeltaOld = v38->static_fields->mScrPosDelta;
        v38->static_fields->mScrPosDelta = (struct UnityEngine_Vector2_o)vsub_f32(
                                                                           (float32x2_t)v38->static_fields->mScrPosNow,
                                                                           (float32x2_t)v38->static_fields->mScrPosOld).n64_u64[0];
        v38->static_fields->mScrPosDeltaLenOld = v38->static_fields->mScrPosDeltaLen;
        v38->static_fields->mScrPosDeltaLen = 0.0;
        v44 = v38->static_fields;
        x = v44->mScrPosDelta.fields.x;
        y = v44->mScrPosDelta.fields.y;
        v47 = UnityEngine_Vector2__get_zero(0LL);
        v48 = (float)(y - v47.fields.y) * (float)(y - v47.fields.y);
        v49 = (float)((float)(x - v47.fields.x) * (float)(x - v47.fields.x)) + v48;
        if ( v49 >= 1.0e-10 )
        {
          v50 = CTouch_TypeInfo;
          if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
          {
            LODWORD(v49) = j_il2cpp_runtime_class_init_0(CTouch_TypeInfo).n128_u32[0];
            v50 = CTouch_TypeInfo;
          }
          CTouch_TypeInfo->static_fields->mScrPosDeltaLen = UnityEngine_Vector2__get_magnitude(
                                                              *(UnityEngine_Vector2_o *)&v49,
                                                              (const MethodInfo *)&v50->static_fields->mScrPosDelta);
        }
        return;
      }
LABEL_145:
      sub_B2C434(p_image, v10);
    }
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
      if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v24 + 32), 0LL) == 3 )
        goto LABEL_99;
      p_image = &CTouch_TypeInfo->_1.image;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        p_image = &CTouch_TypeInfo->_1.image;
      }
      v25 = *(_QWORD *)(p_image[23] + 8LL);
      if ( !v25 )
        goto LABEL_145;
      if ( *(_DWORD *)(v25 + 24) )
      {
        if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v25 + 32), 0LL) == 4 )
          goto LABEL_99;
        goto LABEL_98;
      }
    }
LABEL_144:
    v51 = sub_B2C460(p_image);
    sub_B2C400(v51, 0LL);
  }
}


void __fastcall CTouch__reboot(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0

  if ( (byte_418979A & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, v1);
    byte_418979A = 1;
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
  if ( (byte_4189799 & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, method);
    byte_4189799 = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__remove_mOnTouchPressEvent(value, method);
}


void __fastcall CTouch__remove_OnTouchReleaseEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  if ( (byte_4189795 & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, method);
    byte_4189795 = 1;
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

  if ( (byte_4189797 & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, method);
    sub_B2C35C(&CTouch_TouchEventHandler_TypeInfo, v3);
    byte_4189797 = 1;
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
    v9 = sub_B20D74(&v8->static_fields->mOnTouchPressEvent, v7, mOnTouchPressEvent);
    v10 = mOnTouchPressEvent == (System_Delegate_o *)v9;
    mOnTouchPressEvent = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CTouch_TouchEventHandler_o *)sub_B2C728(v6);
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

  if ( (byte_4189793 & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, method);
    sub_B2C35C(&CTouch_TouchEventHandler_TypeInfo, v3);
    byte_4189793 = 1;
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
    v9 = sub_B20D74(&v8->static_fields->mOnTouchReleaseEvent, v7, mOnTouchReleaseEvent);
    v10 = mOnTouchReleaseEvent == (System_Delegate_o *)v9;
    mOnTouchReleaseEvent = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CTouch_TouchEventHandler_o *)sub_B2C728(v6);
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

  if ( (byte_418979C & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, method);
    byte_418979C = 1;
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
    if ( !byte_418474C )
    {
      sub_B2C35C(&CTouch_TypeInfo, method);
      byte_418474C = 1;
    }
    v15 = CTouch_TypeInfo;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v15 = CTouch_TypeInfo;
    }
    v16 = v15->static_fields;
    v16->mScreenCam = screen_cam;
    sub_B2C2F8(
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

  if ( (byte_418979D & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, method);
    byte_418979D = 1;
  }
  v9 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v9 = CTouch_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->mScreenCam = cam;
  sub_B2C2F8(
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
  sub_B2C2F8(p_method, object);
}


System_IAsyncResult_o *__fastcall CTouch_TouchEventHandler__BeginInvoke(
        CTouch_TouchEventHandler_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B2C300(this, &v5, callback, object);
}


void __fastcall CTouch_TouchEventHandler__EndInvoke(
        CTouch_TouchEventHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD); // x0
  CTouch_TouchEventHandler_o *v19; // x8
  __int64 *v20; // x20
  __int64 v21; // x21
  void (__fastcall *v22)(__int64); // x22
  char v23; // w22
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  CTouch_TouchEventHandler_o *v31; // [xsp+8h] [xbp-38h] BYREF

  v31 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v7 = &v31;
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
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(__int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v19->fields.extra_arg, method, v2, v3);
      if ( (sub_B2C38C(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) )
        goto LABEL_35;
      v22(v21);
LABEL_36:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B2C384(v21);
      v24 = sub_B2C788(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_34;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_34:
            v17 = sub_AC5258(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD))sub_B2C40C(v16, v21);
        (*v18)(v20, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AC5258(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v15)(v20, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v22)(v20, v21);
    goto LABEL_36;
  }
}