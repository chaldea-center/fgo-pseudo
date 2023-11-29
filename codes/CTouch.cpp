void __fastcall CTouch___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Int32_array **v6; // x0
  struct CTouch_StaticFields *static_fields; // x8
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  CTouch_c *v14; // x8
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x4
  System_Collections_Generic_List_int__o *v19; // x19
  struct CTouch_StaticFields *v20; // x0
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_40FB548 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, v1);
    sub_B16FFC(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_B16FFC(&System_Collections_Generic_List_int__TypeInfo, v4);
    sub_B16FFC(&UnityEngine_Touch___TypeInfo, v5);
    byte_40FB548 = 1;
  }
  CTouch_TypeInfo->static_fields->FLICK_LEN = 5.0;
  CTouch_TypeInfo->static_fields->DRAG_LEN = 15.0;
  v6 = (System_Int32_array **)sub_B17014(UnityEngine_Touch___TypeInfo, 1LL, v2);
  static_fields = CTouch_TypeInfo->static_fields;
  static_fields->mTouch = (struct UnityEngine_Touch_array *)v6;
  sub_B16F98((BattleServantConfConponent_o *)&static_fields->mTouch, v6, v8, v9, v10, v11, v12, v13);
  v14 = CTouch_TypeInfo;
  CTouch_TypeInfo->static_fields->mIsTchNow = 0;
  v14->static_fields->mIsTchMouseNow = 0;
  v14->static_fields->mState = 0;
  v14->static_fields->mDragFrameCnt = -1;
  v14->static_fields->mIsClassEnabled = 0;
  v19 = (System_Collections_Generic_List_int__o *)sub_B170CC(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v15,
                                                    v16,
                                                    v17,
                                                    v18);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_2F0F794 *)Method_System_Collections_Generic_List_int___ctor__);
  v20 = CTouch_TypeInfo->static_fields;
  v20->ignoreFingerIDList = v19;
  sub_B16F98(
    (BattleServantConfConponent_o *)&v20->ignoreFingerIDList,
    (System_Int32_array **)v19,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
}


System_Collections_Generic_List_int__o *__fastcall CTouch__GetIgnoreFingerIDList(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0

  if ( (byte_40FB546 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, v1);
    byte_40FB546 = 1;
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

  if ( (byte_40FB53B & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, v1);
    byte_40FB53B = 1;
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
  int32_t touchCount; // w19
  CTouch_c *v4; // x8
  struct System_Collections_Generic_List_int__o *ignoreFingerIDList; // x8

  if ( (byte_40FB545 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, v1);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__get_Count__, v2);
    byte_40FB545 = 1;
  }
  touchCount = UnityEngine_Input__get_touchCount(0LL);
  v4 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v4 = CTouch_TypeInfo;
  }
  ignoreFingerIDList = v4->static_fields->ignoreFingerIDList;
  if ( !ignoreFingerIDList )
    sub_B170D4();
  return touchCount - ignoreFingerIDList->fields._size;
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
  __int64 v11; // x2
  int32_t fingerId; // w0
  __int64 v13; // x22
  CTouch_c *v14; // x0
  System_Collections_Generic_List_int__o *v15; // x20
  int32_t v16; // w0

  if ( (byte_40FB547 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v3);
    byte_40FB547 = 1;
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
        fingerId = UnityEngine_Touch__get_fingerId((UnityEngine_Touch_o *)((char *)touches + i), 0LL);
        if ( !ignoreFingerIDList )
          goto LABEL_31;
        if ( !System_Collections_Generic_List_int___Contains(
                ignoreFingerIDList,
                fingerId,
                (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
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
    v13 = 32LL;
    while ( 1 )
    {
      v14 = CTouch_TypeInfo;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v14 = CTouch_TypeInfo;
      }
      v15 = v14->static_fields->ignoreFingerIDList;
      touches = UnityEngine_Input__get_touches(0LL);
      if ( !touches )
        goto LABEL_31;
      if ( v5 >= touches->max_length )
      {
LABEL_32:
        sub_B17100(touches, v10, v11);
        sub_B170A0();
      }
      v16 = UnityEngine_Touch__get_fingerId((UnityEngine_Touch_o *)((char *)touches + v13), 0LL);
      if ( !v15 )
LABEL_31:
        sub_B170D4();
      if ( !System_Collections_Generic_List_int___Contains(
              v15,
              v16,
              (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
        break;
      ++v5;
      v13 += 68LL;
      if ( (__int64)v5 >= UnityEngine_Input__get_touchCount(0LL) )
        goto LABEL_29;
    }
  }
  return v5;
}


void __fastcall CTouch__SetClassEnabled(bool isEnabled, const MethodInfo *method)
{
  CTouch_c *v3; // x0

  if ( (byte_40FB51F & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, method);
    byte_40FB51F = 1;
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

  if ( (byte_40FB520 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, method);
    byte_40FB520 = 1;
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
  if ( (byte_40FB527 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, method);
    byte_40FB527 = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__add_mOnTouchPressEvent(value, method);
}


void __fastcall CTouch__add_OnTouchReleaseEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  if ( (byte_40FB523 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, method);
    byte_40FB523 = 1;
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

  if ( (byte_40FB525 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, method);
    sub_B16FFC(&CTouch_TouchEventHandler_TypeInfo, v3);
    byte_40FB525 = 1;
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
    v9 = sub_B0BA14(&v8->static_fields->mOnTouchPressEvent, v7, mOnTouchPressEvent);
    v10 = mOnTouchPressEvent == (System_Delegate_o *)v9;
    mOnTouchPressEvent = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CTouch_TouchEventHandler_o *)sub_B173C8(v6);
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

  if ( (byte_40FB521 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, method);
    sub_B16FFC(&CTouch_TouchEventHandler_TypeInfo, v3);
    byte_40FB521 = 1;
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
    v9 = sub_B0BA14(&v8->static_fields->mOnTouchReleaseEvent, v7, mOnTouchReleaseEvent);
    v10 = mOnTouchReleaseEvent == (System_Delegate_o *)v9;
    mOnTouchReleaseEvent = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CTouch_TouchEventHandler_o *)sub_B173C8(v6);
  CTouch__remove_mOnTouchReleaseEvent(v11, v12);
}


int32_t __fastcall CTouch__getDragFrameCnt(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0

  if ( (byte_40FB539 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, v1);
    byte_40FB539 = 1;
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

  if ( (byte_40FB535 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, v1);
    byte_40FB535 = 1;
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
  if ( !byte_40F8BA0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, v3);
    byte_40F8BA0 = 1;
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

  if ( (byte_40FB536 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, v1);
    byte_40FB536 = 1;
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
  if ( !byte_40F8BA0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, v3);
    byte_40F8BA0 = 1;
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

  if ( (byte_40FB53A & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, v1);
    byte_40FB53A = 1;
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

  if ( (byte_40FB540 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, v1);
    byte_40FB540 = 1;
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

  if ( (byte_40FB542 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, v1);
    byte_40FB542 = 1;
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

  if ( (byte_40FB543 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, v1);
    byte_40FB543 = 1;
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

  if ( (byte_40FB541 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, v1);
    byte_40FB541 = 1;
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

  if ( (byte_40FB53C & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, v1);
    byte_40FB53C = 1;
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
UnityEngine_Vector2_o __fastcall CTouch__getScreenPosition_27639960(
        UnityEngine_Vector2_o tch_pos,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x1
  float y; // s8
  float x; // s9
  CTouch_c *v5; // x0
  float v6; // s0
  float v7; // s1
  UnityEngine_Vector2_o ScreenPosition_27640084; // kr00_8
  UnityEngine_Vector2_o v9; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  y = tch_pos.fields.y;
  x = tch_pos.fields.x;
  if ( (byte_40FB53D & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, v2);
    byte_40FB53D = 1;
  }
  v5 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v5 = CTouch_TypeInfo;
  }
  v9.fields.x = x;
  v9.fields.y = y;
  ScreenPosition_27640084 = CTouch__getScreenPosition_27640084(v9, v5->static_fields->mScreenCam, v2);
  v7 = ScreenPosition_27640084.fields.y;
  v6 = ScreenPosition_27640084.fields.x;
  result.fields.y = v7;
  result.fields.x = v6;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o __fastcall CTouch__getScreenPosition_27640084(
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
  UnityEngine_Component_o *v14; // x0
  float v15; // s9
  float v16; // s8
  UnityEngine_Transform_o *transform; // x0
  unsigned int lossyScale; // s0
  UnityEngine_Component_o *v19; // x0
  float v20; // s10
  UnityEngine_Transform_o *v21; // x0
  float v22; // s0
  UnityEngine_Ray_o v23; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Ray_o v24; // [xsp+20h] [xbp-50h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  y = tch_pos.fields.y;
  x = tch_pos.fields.x;
  if ( (byte_40FB53F & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, method);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40FB53F = 1;
  }
  memset(&v24, 0, sizeof(v24));
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
    v26.fields.z = 0.0;
    v26.fields.x = x;
    v26.fields.y = y;
    UnityEngine_Camera__ScreenPointToRay_40664072(&v23, mScreenCam, v26, 0LL);
    v24 = v23;
    *(UnityEngine_Vector3_o *)&v12 = UnityEngine_Ray__get_origin(&v24, 0LL);
    v14 = (UnityEngine_Component_o *)CTouch_TypeInfo->static_fields->mScreenCam;
    if ( !v14
      || (v15 = v12, v16 = v13, (transform = UnityEngine_Component__get_transform(v14, 0LL)) == 0LL)
      || (lossyScale = (unsigned int)UnityEngine_Transform__get_lossyScale(transform, 0LL),
          (v19 = (UnityEngine_Component_o *)CTouch_TypeInfo->static_fields->mScreenCam) == 0LL)
      || (v20 = *(float *)&lossyScale, (v21 = UnityEngine_Component__get_transform(v19, 0LL)) == 0LL) )
    {
LABEL_20:
      sub_B170D4();
    }
    v9 = v15 / v20;
    v27 = UnityEngine_Transform__get_lossyScale(v21, 0LL);
    v7 = v16 / v27.fields.y;
  }
  v22 = v9;
  result.fields.y = v7;
  result.fields.x = v22;
  return result;
}


UnityEngine_Vector2_o __fastcall CTouch__getScreenPosition_27640488(
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  CTouch_c *v2; // x0
  const MethodInfo *v3; // x1
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o ScreenPosition_27640084; // kr00_8
  UnityEngine_Vector2_o TouchPos; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_40FB53E & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, method);
    byte_40FB53E = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  TouchPos = CTouch__GetTouchPos((const MethodInfo *)v2);
  ScreenPosition_27640084 = CTouch__getScreenPosition_27640084(TouchPos, CTouch_TypeInfo->static_fields->mScreenCam, v3);
  y = ScreenPosition_27640084.fields.y;
  x = ScreenPosition_27640084.fields.x;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


int32_t __fastcall CTouch__getTouchState(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0

  if ( (byte_40FB52E & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, v1);
    byte_40FB52E = 1;
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

  if ( (byte_40FB52A & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, v1);
    byte_40FB52A = 1;
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

  if ( (byte_40FB538 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, v1);
    byte_40FB538 = 1;
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

  if ( (byte_40FB537 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, v1);
    byte_40FB537 = 1;
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

  if ( (byte_40FB533 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, v1);
    byte_40FB533 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v2 = CTouch_TypeInfo;
  }
  return CTouch__isFlick_27637572(v2->static_fields->FLICK_LEN, (const MethodInfo *)v2);
}


bool __fastcall CTouch__isFlick_27637572(float flickLen, const MethodInfo *method)
{
  __int64 v2; // x1
  CTouch_c *v4; // x0
  __int64 v5; // x1
  CTouch_c *v6; // x0

  if ( (byte_40FB534 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, v2);
    byte_40FB534 = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !CTouch__isTouchRelease((const MethodInfo *)v4) )
    return 0;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !byte_40FB558 )
  {
    sub_B16FFC(&CTouch_TypeInfo, v5);
    byte_40FB558 = 1;
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

  if ( (byte_40FB531 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, v1);
    byte_40FB531 = 1;
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

  if ( (byte_40FB52F & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, v1);
    byte_40FB52F = 1;
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

  if ( (byte_40FB530 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, v1);
    byte_40FB530 = 1;
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

  if ( (byte_40FB532 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, v1);
    byte_40FB532 = 1;
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

  if ( (byte_40FB52D & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, v1);
    byte_40FB52D = 1;
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
  __int64 v11; // x2
  const MethodInfo *v12; // x0
  struct UnityEngine_Vector2_o ScreenPosition_27639960; // kr08_8
  CTouch_c *v14; // x0
  __int64 v15; // x8
  const MethodInfo *touchCount; // x0
  CTouch_c *v17; // x8
  struct UnityEngine_Vector2_o v18; // kr10_8
  CTouch_c *v19; // x8
  struct UnityEngine_Vector2_o zero; // kr20_8
  CTouch_c *v21; // x0
  CTouch_TouchEventHandler_o *mOnTouchPressEvent; // x8
  __int64 v23; // x8
  __int64 v24; // x8
  __int64 v25; // x8
  __int64 v26; // x8
  CTouch_c *v27; // x0
  CTouch_TouchEventHandler_o *mOnTouchReleaseEvent; // x8
  CTouch_c *v29; // x0
  _BOOL8 isTouchKeep; // x0
  CTouch_c *v31; // x8
  struct CTouch_StaticFields *static_fields; // x9
  int32_t *p_mDragFrameCnt; // x9
  int32_t v34; // w10
  int32_t mDragFrameCnt; // t1
  struct CTouch_StaticFields *v36; // x9
  int32_t v37; // t1
  bool v38; // w0
  CTouch_c *v39; // x8
  float32x2_t *v40; // x9
  float32x2_t v41; // d1 OVERLAPPED
  unsigned __int64 v42; // d0
  float magnitude; // s0
  struct CTouch_StaticFields *v44; // x9
  struct CTouch_StaticFields *v45; // x8
  float x; // s8
  float y; // s9
  UnityEngine_Vector2_o v48; // kr28_8
  float v49; // s1
  float v50; // s0
  CTouch_c *v51; // x0
  char v52[72]; // [xsp+8h] [xbp-108h] BYREF
  UnityEngine_Touch_o v53; // [xsp+50h] [xbp-C0h] BYREF
  char v54[72]; // [xsp+98h] [xbp-78h] BYREF
  unsigned __int64 v55; // [xsp+F8h] [xbp-18h] BYREF

  if ( (byte_40FB544 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, v1);
    byte_40FB544 = 1;
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
    memcpy(v54, &v53, 0x44u);
    if ( !mTouch )
      goto LABEL_145;
    p_image = memcpy(v52, v54, 0x44u);
    if ( !mTouch->max_length )
      goto LABEL_144;
    memcpy(&mTouch->m_Items[0].fields.m_Position, v52, 0x44u);
LABEL_21:
    v12 = (const MethodInfo *)CTouch_TypeInfo;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v12 = (const MethodInfo *)CTouch_TypeInfo;
    }
    *(_QWORD *)&v12[2].klass->_1.this_arg.bits = *(_QWORD *)&v12[2].klass->_1.byval_arg.bits;
    ScreenPosition_27639960 = CTouch__getScreenPosition_27639960((UnityEngine_Vector2_o)v12[2].klass->_1.namespaze, v12);
    v14 = CTouch_TypeInfo;
    CTouch_TypeInfo->static_fields->mScrPosNow = ScreenPosition_27639960;
    if ( v14->static_fields->mIsTchNow )
      goto LABEL_50;
    if ( (BYTE3(v14->vtable._0_Equals.methodPtr) & 4) != 0 && !v14->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v14);
    if ( CTouch__GetValidTouchCount((const MethodInfo *)v14) != 1 )
      goto LABEL_50;
    if ( UnityEngine_Input__get_touchCount(0LL) >= 1 )
    {
      p_image = &CTouch_TypeInfo->_1.image;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        p_image = &CTouch_TypeInfo->_1.image;
      }
      v15 = *(_QWORD *)(p_image[23] + 8LL);
      if ( !v15 )
        goto LABEL_145;
      if ( !*(_DWORD *)(v15 + 24) )
        goto LABEL_144;
      if ( !UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v15 + 32), 0LL) )
        goto LABEL_37;
    }
    if ( !UnityEngine_Input__GetMouseButtonDown(0, 0LL) )
    {
LABEL_50:
      v21 = CTouch_TypeInfo;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v21 = CTouch_TypeInfo;
      }
      if ( v21->static_fields->mIsTchNow )
      {
        if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v21);
        if ( CTouch__GetValidTouchCount((const MethodInfo *)v21) == 1 )
        {
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
          if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v23 + 32), 0LL) == 1 )
            goto LABEL_74;
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
          if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v24 + 32), 0LL) == 2 )
            goto LABEL_74;
        }
        v21 = CTouch_TypeInfo;
        if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
          v21 = CTouch_TypeInfo;
        }
        if ( v21->static_fields->mIsTchMouseNow )
        {
LABEL_74:
          v21 = CTouch_TypeInfo;
          if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
            v21 = CTouch_TypeInfo;
          }
          v21->static_fields->mState = 2;
        }
      }
    }
    else
    {
LABEL_37:
      touchCount = (const MethodInfo *)UnityEngine_Input__get_touchCount(0LL);
      v17 = CTouch_TypeInfo;
      if ( !(_DWORD)touchCount )
      {
        if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
          v17 = CTouch_TypeInfo;
        }
        v17->static_fields->mIsTchMouseNow = 1;
      }
      if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v17);
        v17 = CTouch_TypeInfo;
      }
      v17->static_fields->mIsTchNow = 1;
      v17->static_fields->mState = 1;
      v17->static_fields->mPosPush = v17->static_fields->mPosNow;
      v18 = CTouch__getScreenPosition_27639960(v17->static_fields->mPosPush, touchCount);
      v19 = CTouch_TypeInfo;
      CTouch_TypeInfo->static_fields->mScrPosPush = v18;
      v19->static_fields->mScrPosOld = v19->static_fields->mScrPosNow;
      CTouch_TypeInfo->static_fields->mScrPosDeltaOld = UnityEngine_Vector2__get_zero(0LL);
      zero = UnityEngine_Vector2__get_zero(0LL);
      v21 = CTouch_TypeInfo;
      CTouch_TypeInfo->static_fields->mScrPosDelta = zero;
      v21->static_fields->mDragFrameCnt = -1;
      v21->static_fields->mDragLen = 0.0;
      mOnTouchPressEvent = v21->static_fields->mOnTouchPressEvent;
      if ( mOnTouchPressEvent )
      {
        if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v21);
          mOnTouchPressEvent = CTouch_TypeInfo->static_fields->mOnTouchPressEvent;
          if ( !mOnTouchPressEvent )
            goto LABEL_145;
        }
        CTouch_TouchEventHandler__Invoke(mOnTouchPressEvent, 0LL);
        v21 = CTouch_TypeInfo;
      }
    }
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = CTouch_TypeInfo;
    }
    if ( !v21->static_fields->mIsTchNow )
      goto LABEL_107;
    if ( (BYTE3(v21->vtable._0_Equals.methodPtr) & 4) != 0 && !v21->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v21);
    if ( CTouch__GetValidTouchCount((const MethodInfo *)v21) != 1 )
    {
LABEL_98:
      if ( !UnityEngine_Input__GetMouseButtonUp(0, 0LL) )
        goto LABEL_107;
LABEL_99:
      v27 = CTouch_TypeInfo;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v27 = CTouch_TypeInfo;
      }
      v27->static_fields->mIsTchMouseNow = 0;
      v27->static_fields->mIsTchNow = 0;
      v27->static_fields->mState = 3;
      mOnTouchReleaseEvent = v27->static_fields->mOnTouchReleaseEvent;
      if ( !mOnTouchReleaseEvent )
        goto LABEL_107;
      if ( (BYTE3(v27->vtable._0_Equals.methodPtr) & 4) == 0
        || v27->_2.cctor_finished
        || (j_il2cpp_runtime_class_init_0(v27),
            (mOnTouchReleaseEvent = CTouch_TypeInfo->static_fields->mOnTouchReleaseEvent) != 0LL) )
      {
        CTouch_TouchEventHandler__Invoke(mOnTouchReleaseEvent, 0LL);
LABEL_107:
        v29 = CTouch_TypeInfo;
        if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        isTouchKeep = CTouch__isTouchKeep((const MethodInfo *)v29);
        v31 = CTouch_TypeInfo;
        if ( isTouchKeep )
        {
          if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
            v31 = CTouch_TypeInfo;
          }
          static_fields = v31->static_fields;
          mDragFrameCnt = static_fields->mDragFrameCnt;
          p_mDragFrameCnt = &static_fields->mDragFrameCnt;
          v34 = mDragFrameCnt;
          if ( (mDragFrameCnt & 0x80000000) == 0 )
          {
            if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v31);
              v31 = CTouch_TypeInfo;
              v36 = CTouch_TypeInfo->static_fields;
              v37 = v36->mDragFrameCnt;
              p_mDragFrameCnt = &v36->mDragFrameCnt;
              v34 = v37;
            }
            *p_mDragFrameCnt = v34 + 1;
          }
        }
        if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v31);
        v38 = CTouch__isTouchKeep((const MethodInfo *)isTouchKeep);
        v39 = CTouch_TypeInfo;
        if ( v38 )
        {
          if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
            v39 = CTouch_TypeInfo;
          }
          v40 = (float32x2_t *)v39->static_fields;
          if ( (v40[11].n64_u32[0] & 0x80000000) != 0 )
          {
            if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v39);
              v40 = (float32x2_t *)CTouch_TypeInfo->static_fields;
            }
            v41.n64_u64[0] = v40[6].n64_u64[0];
            v42 = vsub_f32(v40[5], v41).n64_u64[0];
            v55 = v42;
            magnitude = UnityEngine_Vector2__get_magnitude(
                          *(UnityEngine_Vector2_o *)((char *)&v41 - 4),
                          (const MethodInfo *)&v55);
            v39 = CTouch_TypeInfo;
            CTouch_TypeInfo->static_fields->mDragLen = magnitude;
            v44 = v39->static_fields;
            if ( v44->mDragLen >= v44->DRAG_LEN )
            {
              if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v39);
                v39 = CTouch_TypeInfo;
                v44 = CTouch_TypeInfo->static_fields;
              }
              v44->mDragFrameCnt = 0;
            }
          }
        }
        if ( (BYTE3(v39->vtable._0_Equals.methodPtr) & 4) != 0 && !v39->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v39);
          v39 = CTouch_TypeInfo;
        }
        v39->static_fields->mScrPosDeltaOld = v39->static_fields->mScrPosDelta;
        v39->static_fields->mScrPosDelta = (struct UnityEngine_Vector2_o)vsub_f32(
                                                                           (float32x2_t)v39->static_fields->mScrPosNow,
                                                                           (float32x2_t)v39->static_fields->mScrPosOld).n64_u64[0];
        v39->static_fields->mScrPosDeltaLenOld = v39->static_fields->mScrPosDeltaLen;
        v39->static_fields->mScrPosDeltaLen = 0.0;
        v45 = v39->static_fields;
        x = v45->mScrPosDelta.fields.x;
        y = v45->mScrPosDelta.fields.y;
        v48 = UnityEngine_Vector2__get_zero(0LL);
        v49 = (float)(y - v48.fields.y) * (float)(y - v48.fields.y);
        v50 = (float)((float)(x - v48.fields.x) * (float)(x - v48.fields.x)) + v49;
        if ( v50 >= 1.0e-10 )
        {
          v51 = CTouch_TypeInfo;
          if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
          {
            LODWORD(v50) = j_il2cpp_runtime_class_init_0(CTouch_TypeInfo).n128_u32[0];
            v51 = CTouch_TypeInfo;
          }
          CTouch_TypeInfo->static_fields->mScrPosDeltaLen = UnityEngine_Vector2__get_magnitude(
                                                              *(UnityEngine_Vector2_o *)&v50,
                                                              (const MethodInfo *)&v51->static_fields->mScrPosDelta);
        }
        return;
      }
LABEL_145:
      sub_B170D4();
    }
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
      if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v25 + 32), 0LL) == 3 )
        goto LABEL_99;
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
        if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v26 + 32), 0LL) == 4 )
          goto LABEL_99;
        goto LABEL_98;
      }
    }
LABEL_144:
    sub_B17100(p_image, v10, v11);
    sub_B170A0();
  }
}


void __fastcall CTouch__reboot(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0

  if ( (byte_40FB529 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, v1);
    byte_40FB529 = 1;
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
  if ( (byte_40FB528 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, method);
    byte_40FB528 = 1;
  }
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__remove_mOnTouchPressEvent(value, method);
}


void __fastcall CTouch__remove_OnTouchReleaseEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  if ( (byte_40FB524 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, method);
    byte_40FB524 = 1;
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

  if ( (byte_40FB526 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, method);
    sub_B16FFC(&CTouch_TouchEventHandler_TypeInfo, v3);
    byte_40FB526 = 1;
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
    v9 = sub_B0BA14(&v8->static_fields->mOnTouchPressEvent, v7, mOnTouchPressEvent);
    v10 = mOnTouchPressEvent == (System_Delegate_o *)v9;
    mOnTouchPressEvent = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CTouch_TouchEventHandler_o *)sub_B173C8(v6);
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

  if ( (byte_40FB522 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, method);
    sub_B16FFC(&CTouch_TouchEventHandler_TypeInfo, v3);
    byte_40FB522 = 1;
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
    v9 = sub_B0BA14(&v8->static_fields->mOnTouchReleaseEvent, v7, mOnTouchReleaseEvent);
    v10 = mOnTouchReleaseEvent == (System_Delegate_o *)v9;
    mOnTouchReleaseEvent = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (CTouch_TouchEventHandler_o *)sub_B173C8(v6);
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

  if ( (byte_40FB52B & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, method);
    byte_40FB52B = 1;
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
    if ( !byte_40F6E59 )
    {
      sub_B16FFC(&CTouch_TypeInfo, method);
      byte_40F6E59 = 1;
    }
    v15 = CTouch_TypeInfo;
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v15 = CTouch_TypeInfo;
    }
    v16 = v15->static_fields;
    v16->mScreenCam = screen_cam;
    sub_B16F98(
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

  if ( (byte_40FB52C & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, method);
    byte_40FB52C = 1;
  }
  v9 = CTouch_TypeInfo;
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v9 = CTouch_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->mScreenCam = cam;
  sub_B16F98(
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
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B16F98(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


System_IAsyncResult_o *__fastcall CTouch_TouchEventHandler__BeginInvoke(
        CTouch_TouchEventHandler_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B16FA0(this, &v5, callback, object);
}


void __fastcall CTouch_TouchEventHandler__EndInvoke(
        CTouch_TouchEventHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
  __int64 v10; // x8
  unsigned __int64 v11; // x10
  _DWORD *v12; // x11
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x0
  void (__fastcall **v16)(__int64 *, _QWORD); // x0
  CTouch_TouchEventHandler_o *v17; // x8
  __int64 *v18; // x20
  __int64 v19; // x21
  void (__fastcall *v20)(__int64); // x22
  char v21; // w22
  char v22; // w0
  __int64 v23; // x8
  __int64 v24; // x1
  __int64 v25; // x2
  unsigned __int64 v26; // x10
  _DWORD *v27; // x11
  CTouch_TouchEventHandler_o *v28; // [xsp+8h] [xbp-38h] BYREF

  v28 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v28;
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
      v17 = v6[v7];
      v18 = *(__int64 **)&v17->fields.method;
      v19 = *(_QWORD *)&v17->fields.extra_arg;
      v20 = *(void (__fastcall **)(__int64))&v17->fields.method_ptr;
      if ( *(__int16 *)(v19 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v17->fields.extra_arg, method, v2);
      if ( (sub_B1702C(v19) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v19 + 74) )
        goto LABEL_35;
      v20(v19);
LABEL_36:
      if ( ++v7 == v5 )
        return;
    }
    if ( v18 && *(__int16 *)(v19 + 72) != -1 && (*(_BYTE *)(*v18 + 277) & 1) == 0 && this->fields.m_target )
    {
      v21 = sub_B17024(v19);
      v22 = sub_B17428(v19);
      if ( (v21 & 1) != 0 )
      {
        if ( (v22 & 1) != 0 )
        {
          v23 = *v18;
          v24 = *(_QWORD *)(v19 + 24);
          v25 = *(unsigned __int16 *)(v19 + 72);
          if ( *(_WORD *)(*v18 + 298) )
          {
            v26 = 0LL;
            v27 = (_DWORD *)(*(_QWORD *)(v23 + 176) + 8LL);
            while ( *((_QWORD *)v27 - 1) != v24 )
            {
              ++v26;
              v27 += 4;
              if ( v26 >= *(unsigned __int16 *)(*v18 + 298) )
                goto LABEL_34;
            }
            v15 = v23 + 16LL * (*v27 + (int)v25) + 312;
          }
          else
          {
LABEL_34:
            v15 = sub_AAFEF8(v18, v24, v25);
          }
          v14 = *(_QWORD *)(v15 + 8);
        }
        else
        {
          v14 = *(_QWORD *)(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 320);
        }
        v16 = (void (__fastcall **)(__int64 *, _QWORD))sub_B170AC(v14, v19);
        (*v16)(v18, v16);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v19 + 72);
        if ( (v22 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v19);
          v10 = *v18;
          if ( *(_WORD *)(*v18 + 298) )
          {
            v11 = 0LL;
            v12 = (_DWORD *)(*(_QWORD *)(v10 + 176) + 8LL);
            while ( *((_QWORD *)v12 - 1) != class_0 )
            {
              ++v11;
              v12 += 4;
              if ( v11 >= *(unsigned __int16 *)(*v18 + 298) )
                goto LABEL_11;
            }
            v13 = v10 + 16LL * (int)(*v12 + v8) + 312;
          }
          else
          {
LABEL_11:
            v13 = sub_AAFEF8(v18, class_0, v8);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v13)(v18, *(_QWORD *)(v13 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 312))(
            v18,
            *(_QWORD *)(*v18 + 16LL * *(unsigned __int16 *)(v19 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v20)(v18, v19);
    goto LABEL_36;
  }
}