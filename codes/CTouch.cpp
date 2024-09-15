void __fastcall CTouch___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x0
  struct CTouch_StaticFields *static_fields; // x8
  int32_t v7; // w2
  int32_t v8; // w3
  System_Collections_Generic_List_int__o *v9; // x19
  struct CTouch_StaticFields *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  struct CTouch_StaticFields *v13; // x8

  if ( (byte_4A327B5 & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, v1);
    sub_1B761C0(&Method_System_Collections_Generic_List_int___ctor__, v2);
    sub_1B761C0(&System_Collections_Generic_List_int__TypeInfo, v3);
    sub_1B761C0(&UnityEngine_Touch___TypeInfo, v4);
    byte_4A327B5 = 1;
  }
  *(_QWORD *)&CTouch_TypeInfo->static_fields->FLICK_LEN = 0x4170000040A00000LL;
  v5 = sub_1B76268(UnityEngine_Touch___TypeInfo, 1LL);
  static_fields = CTouch_TypeInfo->static_fields;
  static_fields->mTouch = (struct UnityEngine_Touch_array *)v5;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->mTouch, v5, v7, v8);
  v9 = (System_Collections_Generic_List_int__o *)sub_1B7640C(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_34B9D5C *)Method_System_Collections_Generic_List_int___ctor__);
  v10 = CTouch_TypeInfo->static_fields;
  v10->ignoreFingerIDList = v9;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&v10->ignoreFingerIDList, (int32_t)v9, v11, v12);
  v13 = CTouch_TypeInfo->static_fields;
  *(_WORD *)&v13->mIsTchNow = 0;
  v13->mState = 0;
  v13->mDragFrameCnt = -1;
  v13->mIsClassEnabled = 0;
}


System_Collections_Generic_List_int__o *__fastcall CTouch__GetIgnoreFingerIDList(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0

  if ( (byte_4A327B3 & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, v1);
    byte_4A327B3 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v2 = CTouch_TypeInfo;
  }
  return v2->static_fields->ignoreFingerIDList;
}


UnityEngine_Vector2_o __fastcall CTouch__GetTouchPos(const MethodInfo *method)
{
  __int64 v1; // x1
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  CTouch_c *v5; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  int32_t ValidTouchLastID; // w0
  UnityEngine_Vector2_o position; // kr00_8
  struct UnityEngine_Vector2_StaticFields *v10; // x8
  float v11; // s0
  float v12; // s1
  UnityEngine_Touch_o src; // [xsp+8h] [xbp-C8h] BYREF
  UnityEngine_Touch_o dest; // [xsp+50h] [xbp-80h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4A327A8 & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, v1);
    byte_4A327A8 = 1;
  }
  memset(&dest, 0, sizeof(dest));
  if ( !byte_4A28AAA )
  {
    sub_1B761C0(&UnityEngine_Vector2_TypeInfo, v1);
    byte_4A28AAA = 1;
  }
  static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  if ( UnityEngine_Input__get_touchCount(0LL) >= 1 )
  {
    v5 = CTouch_TypeInfo;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    if ( CTouch__GetValidTouchCount((const MethodInfo *)v5) == 1 )
    {
      if ( !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      if ( (CTouch__GetValidTouchLastID(1, v6) & 0x80000000) != 0 )
      {
        if ( !byte_4A28AAA )
        {
          sub_1B761C0(&UnityEngine_Vector2_TypeInfo, v7);
          byte_4A28AAA = 1;
        }
        v10 = UnityEngine_Vector2_TypeInfo->static_fields;
        x = v10->zeroVector.fields.x;
        y = v10->zeroVector.fields.y;
      }
      else
      {
        if ( !CTouch_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        ValidTouchLastID = CTouch__GetValidTouchLastID(1, v7);
        UnityEngine_Input__GetTouch(&src, ValidTouchLastID, 0LL);
        memcpy(&dest, &src, sizeof(dest));
        position = UnityEngine_Touch__get_position(&dest, 0LL);
        y = position.fields.y;
        x = position.fields.x;
      }
    }
  }
  v11 = x;
  v12 = y;
  result.fields.y = v12;
  result.fields.x = v11;
  return result;
}


int32_t __fastcall CTouch__GetValidTouchCount(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 touchCount; // x0
  __int64 v4; // x1
  CTouch_c *v5; // x8
  int v6; // w19
  struct System_Collections_Generic_List_int__o *ignoreFingerIDList; // x8

  if ( (byte_4A327B2 & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, v1);
    sub_1B761C0(&Method_System_Collections_Generic_List_int__get_Count__, v2);
    byte_4A327B2 = 1;
  }
  touchCount = UnityEngine_Input__get_touchCount(0LL);
  v5 = CTouch_TypeInfo;
  v6 = touchCount;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v5 = CTouch_TypeInfo;
  }
  ignoreFingerIDList = v5->static_fields->ignoreFingerIDList;
  if ( !ignoreFingerIDList )
    sub_1B7641C(touchCount, v4);
  return v6 - ignoreFingerIDList->fields._size;
}


int32_t __fastcall CTouch__GetValidTouchLastID(bool isReverse, const MethodInfo *method)
{
  __int64 v3; // x1
  CTouch_c *v4; // x0
  unsigned __int64 v5; // x19
  CTouch_c *v6; // x0
  System_Collections_Generic_List_int__o *ignoreFingerIDList; // x20
  UnityEngine_Touch_array *touches; // x0
  __int64 v9; // x1
  __int64 v10; // x22
  CTouch_c *v11; // x0
  System_Collections_Generic_List_int__o *v12; // x20

  if ( (byte_4A327B4 & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, method);
    sub_1B761C0(&Method_System_Collections_Generic_List_int__Contains__, v3);
    byte_4A327B4 = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
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
      while ( 1 )
      {
        LODWORD(v5) = v5 - 1;
        if ( (v5 & 0x80000000) != 0LL )
          goto LABEL_25;
        v6 = CTouch_TypeInfo;
        if ( !CTouch_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
          v6 = CTouch_TypeInfo;
        }
        ignoreFingerIDList = v6->static_fields->ignoreFingerIDList;
        touches = UnityEngine_Input__get_touches(0LL);
        if ( !touches )
          goto LABEL_27;
        if ( (unsigned int)v5 >= touches->max_length )
          goto LABEL_28;
        touches = (UnityEngine_Touch_array *)UnityEngine_Touch__get_fingerId(
                                               (UnityEngine_Touch_o *)&touches->m_Items[(unsigned int)v5].fields.m_Position,
                                               0LL);
        if ( !ignoreFingerIDList )
          goto LABEL_27;
        if ( !System_Collections_Generic_List_int___Contains(
                ignoreFingerIDList,
                (int32_t)touches,
                (const MethodInfo_34BA928 *)Method_System_Collections_Generic_List_int__Contains__) )
          return v5;
      }
    }
    if ( (int)v5 < 1 )
    {
LABEL_25:
      LODWORD(v5) = 0;
      return v5;
    }
    v5 = 0LL;
    v10 = 32LL;
    while ( 1 )
    {
      v11 = CTouch_TypeInfo;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v11 = CTouch_TypeInfo;
      }
      v12 = v11->static_fields->ignoreFingerIDList;
      touches = UnityEngine_Input__get_touches(0LL);
      if ( !touches )
        goto LABEL_27;
      if ( v5 >= touches->max_length )
LABEL_28:
        sub_1B76424(touches, v9);
      touches = (UnityEngine_Touch_array *)UnityEngine_Touch__get_fingerId(
                                             (UnityEngine_Touch_o *)((char *)touches + v10),
                                             0LL);
      if ( !v12 )
LABEL_27:
        sub_1B7641C(touches, v9);
      if ( !System_Collections_Generic_List_int___Contains(
              v12,
              (int32_t)touches,
              (const MethodInfo_34BA928 *)Method_System_Collections_Generic_List_int__Contains__) )
        break;
      ++v5;
      v10 += 68LL;
      if ( (__int64)v5 >= UnityEngine_Input__get_touchCount(0LL) )
        goto LABEL_25;
    }
  }
  return v5;
}


void __fastcall CTouch__SetClassEnabled(bool isEnabled, const MethodInfo *method)
{
  CTouch_c *v3; // x0

  if ( (byte_4A3278C & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, method);
    byte_4A3278C = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v3 = CTouch_TypeInfo;
  }
  v3->static_fields->mIsClassEnabled = isEnabled;
}


void __fastcall CTouch__SetMultiTouchEnabled(bool isEnabled, const MethodInfo *method)
{
  CTouch_c *v3; // x0

  if ( (byte_4A3278D & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, method);
    byte_4A3278D = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v3 = CTouch_TypeInfo;
  }
  v3->static_fields->mIsReqMultiTouchEnabled = isEnabled;
}


void __fastcall CTouch__add_MOnTouchPressEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  __int64 v3; // x1
  CTouch_c *v4; // x0
  System_Delegate_o *MOnTouchPressEvent; // x20
  System_Delegate_o *v6; // x0
  System_Delegate_o *v7; // x21
  CTouch_c *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CTouch_TouchEventHandler_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4A32792 & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, method);
    sub_1B761C0(&CTouch_TouchEventHandler_TypeInfo, v3);
    byte_4A32792 = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v4 = CTouch_TypeInfo;
  }
  MOnTouchPressEvent = (System_Delegate_o *)v4->static_fields->MOnTouchPressEvent;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(MOnTouchPressEvent, (System_Delegate_o *)value, 0LL);
    v7 = v6;
    if ( v6 )
    {
      if ( (CTouch_TouchEventHandler_c *)v6->klass != CTouch_TouchEventHandler_TypeInfo )
        break;
    }
    v8 = CTouch_TypeInfo;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v8 = CTouch_TypeInfo;
    }
    v9 = sub_1BB16B0(&v8->static_fields->MOnTouchPressEvent, v7, MOnTouchPressEvent);
    v10 = MOnTouchPressEvent == (System_Delegate_o *)v9;
    MOnTouchPressEvent = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B766DC(v6);
  CTouch__remove_MOnTouchPressEvent(v11, v12);
}


void __fastcall CTouch__add_MOnTouchReleaseEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  __int64 v3; // x1
  CTouch_c *v4; // x0
  System_Delegate_o *MOnTouchReleaseEvent; // x20
  System_Delegate_o *v6; // x0
  System_Delegate_o *v7; // x21
  CTouch_c *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CTouch_TouchEventHandler_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4A3278E & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, method);
    sub_1B761C0(&CTouch_TouchEventHandler_TypeInfo, v3);
    byte_4A3278E = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v4 = CTouch_TypeInfo;
  }
  MOnTouchReleaseEvent = (System_Delegate_o *)v4->static_fields->MOnTouchReleaseEvent;
  while ( 1 )
  {
    v6 = System_Delegate__Combine(MOnTouchReleaseEvent, (System_Delegate_o *)value, 0LL);
    v7 = v6;
    if ( v6 )
    {
      if ( (CTouch_TouchEventHandler_c *)v6->klass != CTouch_TouchEventHandler_TypeInfo )
        break;
    }
    v8 = CTouch_TypeInfo;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v8 = CTouch_TypeInfo;
    }
    v9 = sub_1BB16B0(&v8->static_fields->MOnTouchReleaseEvent, v7, MOnTouchReleaseEvent);
    v10 = MOnTouchReleaseEvent == (System_Delegate_o *)v9;
    MOnTouchReleaseEvent = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B766DC(v6);
  CTouch__remove_MOnTouchReleaseEvent(v11, v12);
}


void __fastcall CTouch__add_OnTouchPressEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  if ( (byte_4A32794 & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, method);
    byte_4A32794 = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__add_MOnTouchPressEvent(value, method);
}


void __fastcall CTouch__add_OnTouchReleaseEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  if ( (byte_4A32790 & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, method);
    byte_4A32790 = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__add_MOnTouchReleaseEvent(value, method);
}


int32_t __fastcall CTouch__getDragFrameCnt(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0

  if ( (byte_4A327A6 & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, v1);
    byte_4A327A6 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v2 = CTouch_TypeInfo;
  }
  return v2->static_fields->mDragFrameCnt;
}


int32_t __fastcall CTouch__getFlickDirX(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0
  __int64 v3; // x1
  CTouch_c *v4; // x0
  struct CTouch_StaticFields *static_fields; // x8
  float x; // s10
  float y; // s11
  float v8; // s8
  float v9; // s9
  float v10; // s0
  float v11; // s10
  float v12; // s11
  struct UnityEngine_Vector2_StaticFields *v13; // x8
  float v14; // s1
  float v15; // s0
  float v16; // s1
  struct UnityEngine_Vector2_StaticFields *v17; // x8

  if ( (byte_4A327A2 & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, v1);
    byte_4A327A2 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !CTouch__isFlick((const MethodInfo *)v2) )
    return 0;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !byte_4A2AAD6 )
  {
    sub_1B761C0(&CTouch_TypeInfo, v3);
    byte_4A2AAD6 = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v4 = CTouch_TypeInfo;
  }
  static_fields = v4->static_fields;
  x = static_fields->mScrPosDelta.fields.x;
  y = static_fields->mScrPosDelta.fields.y;
  if ( !byte_4A28AAA )
  {
    sub_1B761C0(&UnityEngine_Vector2_TypeInfo, v3);
    byte_4A28AAA = 1;
  }
  v8 = -1.0;
  v9 = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector.fields.y;
  if ( x >= 0.0 )
  {
    v8 = 1.0;
    if ( x <= 0.0 )
      return 0;
  }
  if ( !byte_4A28BB2 )
  {
    sub_1B761C0(&System_Math_TypeInfo, v3);
    byte_4A28BB2 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v10 = sqrtf((float)(x * x) + (float)(y * y));
  if ( v10 <= 0.00001 )
  {
    if ( !byte_4A28AAA )
    {
      sub_1B761C0(&UnityEngine_Vector2_TypeInfo, v3);
      byte_4A28AAA = 1;
    }
    v13 = UnityEngine_Vector2_TypeInfo->static_fields;
    v11 = v13->zeroVector.fields.x;
    v12 = v13->zeroVector.fields.y;
  }
  else
  {
    v11 = x / v10;
    v12 = y / v10;
  }
  if ( !byte_4A28BB2 )
  {
    sub_1B761C0(&System_Math_TypeInfo, v3);
    byte_4A28BB2 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v14 = sqrtf((float)(v9 * v9) + (float)(v8 * v8));
  if ( v14 <= 0.00001 )
  {
    if ( !byte_4A28AAA )
    {
      sub_1B761C0(&UnityEngine_Vector2_TypeInfo, v3);
      byte_4A28AAA = 1;
    }
    v17 = UnityEngine_Vector2_TypeInfo->static_fields;
    v15 = v17->zeroVector.fields.x;
    v16 = v17->zeroVector.fields.y;
  }
  else
  {
    v15 = v8 / v14;
    v16 = v9 / v14;
  }
  if ( (float)((float)(v11 * v15) + (float)(v12 * v16)) >= 0.75 )
    return (int)v8;
  else
    return 0;
}


int32_t __fastcall CTouch__getFlickDirY(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0
  __int64 v3; // x1
  CTouch_c *v4; // x0
  struct CTouch_StaticFields *static_fields; // x8
  float x; // s10
  float y; // s11
  float v8; // s8
  float v9; // s9
  float v10; // s0
  float v11; // s10
  float v12; // s11
  struct UnityEngine_Vector2_StaticFields *v13; // x8
  float v14; // s1
  float v15; // s0
  float v16; // s1
  struct UnityEngine_Vector2_StaticFields *v17; // x8

  if ( (byte_4A327A3 & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, v1);
    byte_4A327A3 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !CTouch__isFlick((const MethodInfo *)v2) )
    return 0;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !byte_4A2AAD6 )
  {
    sub_1B761C0(&CTouch_TypeInfo, v3);
    byte_4A2AAD6 = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v4 = CTouch_TypeInfo;
  }
  static_fields = v4->static_fields;
  x = static_fields->mScrPosDelta.fields.x;
  y = static_fields->mScrPosDelta.fields.y;
  if ( !byte_4A28AAA )
  {
    sub_1B761C0(&UnityEngine_Vector2_TypeInfo, v3);
    byte_4A28AAA = 1;
  }
  v8 = -1.0;
  v9 = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector.fields.x;
  if ( y <= 0.0 )
  {
    v8 = 1.0;
    if ( y >= 0.0 )
      return 0;
  }
  if ( !byte_4A28BB2 )
  {
    sub_1B761C0(&System_Math_TypeInfo, v3);
    byte_4A28BB2 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v10 = sqrtf((float)(x * x) + (float)(y * y));
  if ( v10 <= 0.00001 )
  {
    if ( !byte_4A28AAA )
    {
      sub_1B761C0(&UnityEngine_Vector2_TypeInfo, v3);
      byte_4A28AAA = 1;
    }
    v13 = UnityEngine_Vector2_TypeInfo->static_fields;
    v11 = v13->zeroVector.fields.x;
    v12 = v13->zeroVector.fields.y;
  }
  else
  {
    v11 = x / v10;
    v12 = y / v10;
  }
  if ( !byte_4A28BB2 )
  {
    sub_1B761C0(&System_Math_TypeInfo, v3);
    byte_4A28BB2 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v14 = sqrtf((float)(v9 * v9) + (float)(v8 * v8));
  if ( v14 <= 0.00001 )
  {
    if ( !byte_4A28AAA )
    {
      sub_1B761C0(&UnityEngine_Vector2_TypeInfo, v3);
      byte_4A28AAA = 1;
    }
    v17 = UnityEngine_Vector2_TypeInfo->static_fields;
    v15 = v17->zeroVector.fields.x;
    v16 = v17->zeroVector.fields.y;
  }
  else
  {
    v15 = v9 / v14;
    v16 = v8 / v14;
  }
  if ( (float)((float)(v11 * v15) + (float)(v12 * v16)) >= 0.75 )
    return (int)v8;
  else
    return 0;
}


UnityEngine_Vector2_o __fastcall CTouch__getPosNow(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0
  struct CTouch_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4A327A7 & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, v1);
    byte_4A327A7 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4A327AD & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, v1);
    byte_4A327AD = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4A327AF & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, v1);
    byte_4A327AF = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4A327B0 & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, v1);
    byte_4A327B0 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4A327AE & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, v1);
    byte_4A327AE = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4A327A9 & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, v1);
    byte_4A327A9 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
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
UnityEngine_Vector2_o __fastcall CTouch__getScreenPosition_46452756(
        UnityEngine_Vector2_o tch_pos,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x1
  float y; // s8
  float x; // s9
  CTouch_c *v5; // x0
  float v6; // s0
  float v7; // s1
  UnityEngine_Vector2_o ScreenPosition_46452868; // kr00_8
  UnityEngine_Vector2_o v9; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  y = tch_pos.fields.y;
  x = tch_pos.fields.x;
  if ( (byte_4A327AA & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, v2);
    byte_4A327AA = 1;
  }
  v5 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v5 = CTouch_TypeInfo;
  }
  v9.fields.x = x;
  v9.fields.y = y;
  ScreenPosition_46452868 = CTouch__getScreenPosition_46452868(v9, v5->static_fields->mScreenCam, v2);
  v7 = ScreenPosition_46452868.fields.y;
  v6 = ScreenPosition_46452868.fields.x;
  result.fields.y = v7;
  result.fields.x = v6;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o __fastcall CTouch__getScreenPosition_46452868(
        UnityEngine_Vector2_o tch_pos,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  __int64 v6; // x1
  __int64 v7; // x1
  CTouch_c *v8; // x0
  UnityEngine_Camera_o *mScreenCam; // x0
  float v10; // s9
  float v11; // s10
  unsigned int lossyScale; // s0
  float v13; // s8
  float v14; // s8
  float v15; // s1
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float v17; // s0
  UnityEngine_Ray_o v18; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v21; // 0:s0.4,4:s1.4,8:s2.4

  y = tch_pos.fields.y;
  x = tch_pos.fields.x;
  if ( (byte_4A327AC & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, method);
    sub_1B761C0(&UnityEngine_Object_TypeInfo, v6);
    byte_4A327AC = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0LL, 0LL) || x == 3.4028e38 || y == 3.4028e38 )
  {
    if ( !byte_4A28AAA )
    {
      sub_1B761C0(&UnityEngine_Vector2_TypeInfo, v7);
      byte_4A28AAA = 1;
    }
    static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
    v14 = static_fields->zeroVector.fields.x;
    v15 = static_fields->zeroVector.fields.y;
  }
  else
  {
    v8 = CTouch_TypeInfo;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v8 = CTouch_TypeInfo;
    }
    mScreenCam = v8->static_fields->mScreenCam;
    if ( !mScreenCam )
      goto LABEL_20;
    v20.fields.z = 0.0;
    v20.fields.x = x;
    v20.fields.y = y;
    UnityEngine_Camera__ScreenPointToRay_69094188(&v18, mScreenCam, v20, 0LL);
    mScreenCam = CTouch_TypeInfo->static_fields->mScreenCam;
    if ( !mScreenCam
      || (v11 = v18.fields.m_Origin.fields.x,
          v10 = v18.fields.m_Origin.fields.y,
          (mScreenCam = (UnityEngine_Camera_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)mScreenCam,
                                                  0LL)) == 0LL)
      || (lossyScale = (unsigned int)UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)mScreenCam, 0LL),
          (mScreenCam = CTouch_TypeInfo->static_fields->mScreenCam) == 0LL)
      || (v13 = *(float *)&lossyScale,
          (mScreenCam = (UnityEngine_Camera_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)mScreenCam,
                                                  0LL)) == 0LL) )
    {
LABEL_20:
      sub_1B7641C(mScreenCam, v7);
    }
    v14 = v11 / v13;
    v21 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)mScreenCam, 0LL);
    v15 = v10 / v21.fields.y;
  }
  v17 = v14;
  result.fields.y = v15;
  result.fields.x = v17;
  return result;
}


UnityEngine_Vector2_o __fastcall CTouch__getScreenPosition_46453260(
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  CTouch_c *v2; // x0
  const MethodInfo *v3; // x1
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o ScreenPosition_46452868; // kr00_8
  UnityEngine_Vector2_o TouchPos; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4A327AB & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, method);
    byte_4A327AB = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  TouchPos = CTouch__GetTouchPos((const MethodInfo *)v2);
  ScreenPosition_46452868 = CTouch__getScreenPosition_46452868(TouchPos, CTouch_TypeInfo->static_fields->mScreenCam, v3);
  y = ScreenPosition_46452868.fields.y;
  x = ScreenPosition_46452868.fields.x;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


int32_t __fastcall CTouch__getTouchState(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0

  if ( (byte_4A3279B & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, v1);
    byte_4A3279B = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
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
  struct CTouch_StaticFields *static_fields; // x8

  if ( (byte_4A32797 & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, v1);
    byte_4A32797 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v2 = CTouch_TypeInfo;
  }
  static_fields = v2->static_fields;
  if ( !static_fields->mIsInitDone )
  {
    if ( !v2->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v2);
      static_fields = CTouch_TypeInfo->static_fields;
    }
    static_fields->mIsInitDone = 1;
    *(_WORD *)&static_fields->mIsClassEnabled = 257;
  }
}


bool __fastcall CTouch__isDrag(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0
  CTouch_c *v3; // x0

  if ( (byte_4A327A5 & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, v1);
    byte_4A327A5 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !CTouch__isDragMode((const MethodInfo *)v2) )
    return 0;
  v3 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  return CTouch__isTouchKeep((const MethodInfo *)v3);
}


bool __fastcall CTouch__isDragMode(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0

  if ( (byte_4A327A4 & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, v1);
    byte_4A327A4 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4A327A0 & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, v1);
    byte_4A327A0 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v2 = CTouch_TypeInfo;
  }
  return CTouch__isFlick_46450084(v2->static_fields->FLICK_LEN, (const MethodInfo *)v2);
}


bool __fastcall CTouch__isFlick_46450084(float flickLen, const MethodInfo *method)
{
  __int64 v2; // x1
  CTouch_c *v4; // x0
  __int64 v5; // x1
  CTouch_c *v6; // x0

  if ( (byte_4A327A1 & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, v2);
    byte_4A327A1 = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !CTouch__isTouchRelease((const MethodInfo *)v4) )
    return 0;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !byte_4A327BB )
  {
    sub_1B761C0(&CTouch_TypeInfo, v5);
    byte_4A327BB = 1;
  }
  v6 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4A3279E & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, v1);
    byte_4A3279E = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4A3279C & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, v1);
    byte_4A3279C = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4A3279D & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, v1);
    byte_4A3279D = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4A3279F & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, v1);
    byte_4A3279F = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
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

  if ( (byte_4A3279A & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, v1);
    byte_4A3279A = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v2 = CTouch_TypeInfo;
  }
  static_fields = v2->static_fields;
  if ( static_fields->mIsInitDone )
  {
    if ( !v2->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v2);
      v2 = CTouch_TypeInfo;
      static_fields = CTouch_TypeInfo->static_fields;
    }
    if ( static_fields->mIsClassEnabled )
    {
      if ( !v2->_2.cctor_finished )
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
        if ( !CTouch_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
          v6 = CTouch_TypeInfo;
        }
        v6->static_fields->mProcessOldFrameCount = v7;
        if ( !UnityEngine_Input__get_multiTouchEnabled(0LL) )
          goto LABEL_32;
        v8 = CTouch_TypeInfo;
        if ( !CTouch_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
          v8 = CTouch_TypeInfo;
        }
        if ( !v8->static_fields->mIsReqMultiTouchEnabled )
        {
          if ( UnityEngine_Input__get_touchCount(0LL) > 0 )
          {
LABEL_27:
            v11 = CTouch_TypeInfo;
            if ( !CTouch_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
            CTouch__processSingleTouch((const MethodInfo *)v11);
            return;
          }
          v10 = 0;
        }
        else
        {
LABEL_32:
          if ( UnityEngine_Input__get_multiTouchEnabled(0LL) )
            goto LABEL_27;
          v9 = CTouch_TypeInfo;
          if ( !CTouch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
            v9 = CTouch_TypeInfo;
          }
          if ( !v9->static_fields->mIsReqMultiTouchEnabled )
            goto LABEL_27;
          v10 = 1;
        }
        UnityEngine_Input__set_multiTouchEnabled(v10, 0LL);
        goto LABEL_27;
      }
    }
  }
}


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
  struct UnityEngine_Vector2_o ScreenPosition_46452756; // kr08_8
  CTouch_c *v13; // x0
  __int64 v14; // x8
  const MethodInfo *touchCount; // x0
  CTouch_c *v16; // x8
  struct CTouch_StaticFields *static_fields; // x9
  struct UnityEngine_Vector2_o mPosNow; // x10
  UnityEngine_Vector2_o v19; // x1
  struct UnityEngine_Vector2_o v20; // kr10_8
  CTouch_c *v21; // x0
  UnityEngine_Vector2_c *v22; // x8
  struct CTouch_StaticFields *v23; // x9
  struct CTouch_TouchEventHandler_o *MOnTouchPressEvent; // x8
  __int64 v25; // x8
  __int64 v26; // x8
  __int64 v27; // x8
  __int64 v28; // x8
  CTouch_c *v29; // x0
  struct CTouch_StaticFields *v30; // x9
  struct CTouch_TouchEventHandler_o *MOnTouchReleaseEvent; // x8
  CTouch_c *v32; // x0
  _BOOL8 isTouchKeep; // x0
  CTouch_c *v34; // x8
  struct CTouch_StaticFields *v35; // x9
  int32_t *p_mDragFrameCnt; // x9
  int32_t v37; // w10
  int32_t mDragFrameCnt; // t1
  struct CTouch_StaticFields *v39; // x9
  int32_t v40; // t1
  bool v41; // w0
  __int64 v42; // x1
  CTouch_c *v43; // x8
  struct CTouch_StaticFields *v44; // x9
  float32x2_t v45; // d8
  float32x2_t v46; // d9
  float32x2_t v47; // d8
  float v48; // s1
  struct CTouch_StaticFields *v49; // x9
  float DRAG_LEN; // s0
  struct CTouch_StaticFields *v51; // x8
  float mScrPosDeltaLen; // s0
  float32x2_t v53; // d8
  float32x2_t v54; // d0
  CTouch_c *v55; // x0
  struct CTouch_StaticFields *v56; // x20
  float y; // s8
  float x; // s9
  char v59[72]; // [xsp+8h] [xbp-118h] BYREF
  UnityEngine_Touch_o src; // [xsp+50h] [xbp-D0h] BYREF
  char dest[72]; // [xsp+98h] [xbp-88h] BYREF

  if ( (byte_4A327B1 & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, v1);
    byte_4A327B1 = 1;
  }
  v2 = (const MethodInfo *)CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v2 = (const MethodInfo *)CTouch_TypeInfo;
  }
  *((_DWORD *)v2[2].virtualMethodPointer + 7) = 0;
  CTouch_TypeInfo->static_fields->mPosNow = CTouch__GetTouchPos(v2);
  if ( UnityEngine_Input__get_touchCount(0LL) < 1 )
    goto LABEL_17;
  v3 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( CTouch__GetValidTouchCount((const MethodInfo *)v3) != 1 )
    goto LABEL_17;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( (CTouch__GetValidTouchLastID(1, v4) & 0x80000000) == 0 )
  {
    v6 = CTouch_TypeInfo;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v6 = CTouch_TypeInfo;
    }
    mTouch = v6->static_fields->mTouch;
    ValidTouchLastID = CTouch__GetValidTouchLastID(1, v5);
    UnityEngine_Input__GetTouch(&src, ValidTouchLastID, 0LL);
    p_image = memcpy(dest, &src, 0x44u);
    if ( !mTouch )
      goto LABEL_121;
    p_image = memcpy(v59, dest, 0x44u);
    if ( !mTouch->max_length )
      goto LABEL_122;
    memcpy(&mTouch->m_Items[0].fields.m_Position, v59, 0x44u);
LABEL_17:
    v11 = (const MethodInfo *)CTouch_TypeInfo;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v11 = (const MethodInfo *)CTouch_TypeInfo;
    }
    *(_QWORD *)((char *)v11[2].virtualMethodPointer + 68) = *(_QWORD *)((char *)v11[2].virtualMethodPointer + 52);
    ScreenPosition_46452756 = CTouch__getScreenPosition_46452756(
                                *(UnityEngine_Vector2_o *)((char *)v11[2].virtualMethodPointer + 32),
                                v11);
    v13 = CTouch_TypeInfo;
    CTouch_TypeInfo->static_fields->mScrPosNow = ScreenPosition_46452756;
    if ( v13->static_fields->mIsTchNow )
      goto LABEL_40;
    if ( !v13->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v13);
    if ( CTouch__GetValidTouchCount((const MethodInfo *)v13) != 1 )
      goto LABEL_40;
    if ( UnityEngine_Input__get_touchCount(0LL) >= 1 )
    {
      p_image = &CTouch_TypeInfo->_1.image;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        p_image = &CTouch_TypeInfo->_1.image;
      }
      v14 = *(_QWORD *)(p_image[23] + 8LL);
      if ( !v14 )
        goto LABEL_121;
      if ( !*(_DWORD *)(v14 + 24) )
        goto LABEL_122;
      if ( !UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v14 + 32), 0LL) )
        goto LABEL_30;
    }
    if ( !UnityEngine_Input__GetMouseButtonDown(0, 0LL) )
    {
LABEL_40:
      v21 = CTouch_TypeInfo;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v21 = CTouch_TypeInfo;
      }
      if ( v21->static_fields->mIsTchNow )
      {
        if ( !v21->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v21);
        if ( CTouch__GetValidTouchCount((const MethodInfo *)v21) == 1 )
        {
          p_image = &CTouch_TypeInfo->_1.image;
          if ( !CTouch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
            p_image = &CTouch_TypeInfo->_1.image;
          }
          v25 = *(_QWORD *)(p_image[23] + 8LL);
          if ( !v25 )
            goto LABEL_121;
          if ( !*(_DWORD *)(v25 + 24) )
            goto LABEL_122;
          if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v25 + 32), 0LL) == 1 )
            goto LABEL_59;
          p_image = &CTouch_TypeInfo->_1.image;
          if ( !CTouch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
            p_image = &CTouch_TypeInfo->_1.image;
          }
          v26 = *(_QWORD *)(p_image[23] + 8LL);
          if ( !v26 )
            goto LABEL_121;
          if ( !*(_DWORD *)(v26 + 24) )
            goto LABEL_122;
          if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v26 + 32), 0LL) == 2 )
            goto LABEL_59;
        }
        v21 = CTouch_TypeInfo;
        if ( !CTouch_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
          v21 = CTouch_TypeInfo;
        }
        if ( v21->static_fields->mIsTchMouseNow )
        {
LABEL_59:
          v21 = CTouch_TypeInfo;
          if ( !CTouch_TypeInfo->_2.cctor_finished )
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
LABEL_30:
      touchCount = (const MethodInfo *)UnityEngine_Input__get_touchCount(0LL);
      v16 = CTouch_TypeInfo;
      if ( !(_DWORD)touchCount )
      {
        if ( !CTouch_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
          v16 = CTouch_TypeInfo;
        }
        v16->static_fields->mIsTchMouseNow = 1;
      }
      if ( !v16->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v16);
        v16 = CTouch_TypeInfo;
      }
      static_fields = v16->static_fields;
      mPosNow = static_fields->mPosNow;
      static_fields->mIsTchNow = 1;
      static_fields->mState = 1;
      static_fields->mPosPush = mPosNow;
      v20 = CTouch__getScreenPosition_46452756(v16->static_fields->mPosPush, touchCount);
      v21 = CTouch_TypeInfo;
      CTouch_TypeInfo->static_fields->mScrPosPush = v20;
      v21->static_fields->mScrPosOld = v21->static_fields->mScrPosNow;
      if ( !byte_4A28AAA )
      {
        sub_1B761C0(&UnityEngine_Vector2_TypeInfo, v19);
        v21 = CTouch_TypeInfo;
        byte_4A28AAA = 1;
      }
      v22 = UnityEngine_Vector2_TypeInfo;
      v21->static_fields->mScrPosDeltaOld = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
      v21->static_fields->mScrPosDelta = v22->static_fields->zeroVector;
      v23 = v21->static_fields;
      MOnTouchPressEvent = v23->MOnTouchPressEvent;
      *(_QWORD *)&v23->mDragFrameCnt = 0xFFFFFFFFLL;
      if ( MOnTouchPressEvent )
      {
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))MOnTouchPressEvent->fields.m_target)(
          MOnTouchPressEvent->fields.original_method_info,
          *(_QWORD *)&MOnTouchPressEvent->fields.extra_arg);
        v21 = CTouch_TypeInfo;
      }
    }
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = CTouch_TypeInfo;
    }
    if ( !v21->static_fields->mIsTchNow )
      goto LABEL_83;
    if ( !v21->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v21);
    if ( CTouch__GetValidTouchCount((const MethodInfo *)v21) != 1 )
    {
LABEL_78:
      if ( !UnityEngine_Input__GetMouseButtonUp(0, 0LL) )
      {
LABEL_83:
        v32 = CTouch_TypeInfo;
        if ( !CTouch_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        isTouchKeep = CTouch__isTouchKeep((const MethodInfo *)v32);
        v34 = CTouch_TypeInfo;
        if ( isTouchKeep )
        {
          if ( !CTouch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
            v34 = CTouch_TypeInfo;
          }
          v35 = v34->static_fields;
          mDragFrameCnt = v35->mDragFrameCnt;
          p_mDragFrameCnt = &v35->mDragFrameCnt;
          v37 = mDragFrameCnt;
          if ( (mDragFrameCnt & 0x80000000) == 0 )
          {
            if ( !v34->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v34);
              v34 = CTouch_TypeInfo;
              v39 = CTouch_TypeInfo->static_fields;
              v40 = v39->mDragFrameCnt;
              p_mDragFrameCnt = &v39->mDragFrameCnt;
              v37 = v40;
            }
            *p_mDragFrameCnt = v37 + 1;
          }
        }
        if ( !v34->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v34);
        v41 = CTouch__isTouchKeep((const MethodInfo *)isTouchKeep);
        v43 = CTouch_TypeInfo;
        if ( v41 )
        {
          if ( !CTouch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
            v43 = CTouch_TypeInfo;
          }
          v44 = v43->static_fields;
          if ( (v44->mDragFrameCnt & 0x80000000) != 0 )
          {
            if ( !v43->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v43);
              v44 = CTouch_TypeInfo->static_fields;
            }
            v45.n64_u64[0] = (unsigned __int64)v44->mScrPosNow;
            v46.n64_u64[0] = (unsigned __int64)v44->mScrPosPush;
            if ( !byte_4A28BB2 )
            {
              sub_1B761C0(&System_Math_TypeInfo, v42);
              byte_4A28BB2 = 1;
            }
            v47.n64_u64[0] = vsub_f32(v45, v46).n64_u64[0];
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            v43 = CTouch_TypeInfo;
            v48 = sqrtf(vaddv_f32(vmul_f32(v47, v47)));
            v49 = CTouch_TypeInfo->static_fields;
            DRAG_LEN = v49->DRAG_LEN;
            v49->mDragLen = v48;
            if ( v48 >= DRAG_LEN )
            {
              if ( !v43->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v43);
                v43 = CTouch_TypeInfo;
                v49 = CTouch_TypeInfo->static_fields;
              }
              v49->mDragFrameCnt = 0;
            }
          }
        }
        if ( !v43->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v43);
          v43 = CTouch_TypeInfo;
        }
        v43->static_fields->mScrPosDeltaOld = v43->static_fields->mScrPosDelta;
        v43->static_fields->mScrPosDelta = (struct UnityEngine_Vector2_o)vsub_f32(
                                                                           (float32x2_t)v43->static_fields->mScrPosNow,
                                                                           (float32x2_t)v43->static_fields->mScrPosOld).n64_u64[0];
        v51 = v43->static_fields;
        mScrPosDeltaLen = v51->mScrPosDeltaLen;
        v51->mScrPosDeltaLen = 0.0;
        v53.n64_u64[0] = (unsigned __int64)v51->mScrPosDelta;
        v51->mScrPosDeltaLenOld = mScrPosDeltaLen;
        if ( !byte_4A28AAA )
        {
          sub_1B761C0(&UnityEngine_Vector2_TypeInfo, v42);
          byte_4A28AAA = 1;
        }
        v54.n64_u64[0] = vsub_f32(v53, (float32x2_t)UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).n64_u64[0];
        if ( vaddv_f32(vmul_f32(v54, v54)) >= 1.0e-10 )
        {
          v55 = CTouch_TypeInfo;
          if ( !CTouch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
            v55 = CTouch_TypeInfo;
          }
          v56 = v55->static_fields;
          if ( !byte_4A28BB2 )
          {
            sub_1B761C0(&System_Math_TypeInfo, v42);
            byte_4A28BB2 = 1;
          }
          x = v56->mScrPosDelta.fields.x;
          y = v56->mScrPosDelta.fields.y;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          CTouch_TypeInfo->static_fields->mScrPosDeltaLen = sqrtf((float)(x * x) + (float)(y * y));
        }
        return;
      }
LABEL_79:
      v29 = CTouch_TypeInfo;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v29 = CTouch_TypeInfo;
      }
      v30 = v29->static_fields;
      MOnTouchReleaseEvent = v30->MOnTouchReleaseEvent;
      *(_WORD *)&v30->mIsTchNow = 0;
      v30->mState = 3;
      if ( MOnTouchReleaseEvent )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))MOnTouchReleaseEvent->fields.m_target)(
          MOnTouchReleaseEvent->fields.original_method_info,
          *(_QWORD *)&MOnTouchReleaseEvent->fields.extra_arg);
      goto LABEL_83;
    }
    p_image = &CTouch_TypeInfo->_1.image;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      p_image = &CTouch_TypeInfo->_1.image;
    }
    v27 = *(_QWORD *)(p_image[23] + 8LL);
    if ( v27 )
    {
      if ( !*(_DWORD *)(v27 + 24) )
        goto LABEL_122;
      if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v27 + 32), 0LL) == 3 )
        goto LABEL_79;
      p_image = &CTouch_TypeInfo->_1.image;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        p_image = &CTouch_TypeInfo->_1.image;
      }
      v28 = *(_QWORD *)(p_image[23] + 8LL);
      if ( v28 )
      {
        if ( *(_DWORD *)(v28 + 24) )
        {
          if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v28 + 32), 0LL) == 4 )
            goto LABEL_79;
          goto LABEL_78;
        }
LABEL_122:
        sub_1B76424(p_image, v10);
      }
    }
LABEL_121:
    sub_1B7641C(p_image, v10);
  }
}


void __fastcall CTouch__reboot(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0

  if ( (byte_4A32796 & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, v1);
    byte_4A32796 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v2 = CTouch_TypeInfo;
  }
  v2->static_fields->mIsInitDone = 0;
}


void __fastcall CTouch__remove_MOnTouchPressEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  __int64 v3; // x1
  CTouch_c *v4; // x0
  System_Delegate_o *MOnTouchPressEvent; // x20
  System_Delegate_o *v6; // x0
  System_Delegate_o *v7; // x21
  CTouch_c *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CTouch_TouchEventHandler_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4A32793 & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, method);
    sub_1B761C0(&CTouch_TouchEventHandler_TypeInfo, v3);
    byte_4A32793 = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v4 = CTouch_TypeInfo;
  }
  MOnTouchPressEvent = (System_Delegate_o *)v4->static_fields->MOnTouchPressEvent;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(MOnTouchPressEvent, (System_Delegate_o *)value, 0LL);
    v7 = v6;
    if ( v6 )
    {
      if ( (CTouch_TouchEventHandler_c *)v6->klass != CTouch_TouchEventHandler_TypeInfo )
        break;
    }
    v8 = CTouch_TypeInfo;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v8 = CTouch_TypeInfo;
    }
    v9 = sub_1BB16B0(&v8->static_fields->MOnTouchPressEvent, v7, MOnTouchPressEvent);
    v10 = MOnTouchPressEvent == (System_Delegate_o *)v9;
    MOnTouchPressEvent = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B766DC(v6);
  CTouch__add_OnTouchPressEvent(v11, v12);
}


void __fastcall CTouch__remove_MOnTouchReleaseEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  __int64 v3; // x1
  CTouch_c *v4; // x0
  System_Delegate_o *MOnTouchReleaseEvent; // x20
  System_Delegate_o *v6; // x0
  System_Delegate_o *v7; // x21
  CTouch_c *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CTouch_TouchEventHandler_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4A3278F & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, method);
    sub_1B761C0(&CTouch_TouchEventHandler_TypeInfo, v3);
    byte_4A3278F = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v4 = CTouch_TypeInfo;
  }
  MOnTouchReleaseEvent = (System_Delegate_o *)v4->static_fields->MOnTouchReleaseEvent;
  while ( 1 )
  {
    v6 = System_Delegate__Remove(MOnTouchReleaseEvent, (System_Delegate_o *)value, 0LL);
    v7 = v6;
    if ( v6 )
    {
      if ( (CTouch_TouchEventHandler_c *)v6->klass != CTouch_TouchEventHandler_TypeInfo )
        break;
    }
    v8 = CTouch_TypeInfo;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v8 = CTouch_TypeInfo;
    }
    v9 = sub_1BB16B0(&v8->static_fields->MOnTouchReleaseEvent, v7, MOnTouchReleaseEvent);
    v10 = MOnTouchReleaseEvent == (System_Delegate_o *)v9;
    MOnTouchReleaseEvent = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B766DC(v6);
  CTouch__add_OnTouchReleaseEvent(v11, v12);
}


void __fastcall CTouch__remove_OnTouchPressEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  if ( (byte_4A32795 & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, method);
    byte_4A32795 = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__remove_MOnTouchPressEvent(value, method);
}


void __fastcall CTouch__remove_OnTouchReleaseEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  if ( (byte_4A32791 & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, method);
    byte_4A32791 = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__remove_MOnTouchReleaseEvent(value, method);
}


void __fastcall CTouch__setParam(
        float flickLen,
        float dragLen,
        UnityEngine_Camera_o *screenCam,
        const MethodInfo *method)
{
  int32_t v4; // w2
  int32_t v5; // w3
  CTouch_c *v9; // x0
  struct CTouch_StaticFields *static_fields; // x8
  struct CTouch_StaticFields *v11; // x0

  if ( (byte_4A32798 & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, method);
    byte_4A32798 = 1;
  }
  v9 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v9 = CTouch_TypeInfo;
  }
  static_fields = v9->static_fields;
  if ( static_fields->mIsInitDone )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = CTouch_TypeInfo;
      static_fields = CTouch_TypeInfo->static_fields;
    }
    static_fields->FLICK_LEN = flickLen;
    static_fields->DRAG_LEN = dragLen;
    if ( !byte_4A2BE16 )
    {
      sub_1B761C0(&CTouch_TypeInfo, method);
      v9 = CTouch_TypeInfo;
      byte_4A2BE16 = 1;
    }
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = CTouch_TypeInfo;
    }
    v11 = v9->static_fields;
    v11->mScreenCam = screenCam;
    sub_1B76164((ServantStatusBattleListViewItem_o *)&v11->mScreenCam, (int32_t)screenCam, v4, v5);
  }
}


void __fastcall CTouch__setScreenCamera(UnityEngine_Camera_o *cam, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  CTouch_c *v5; // x0
  struct CTouch_StaticFields *static_fields; // x0

  if ( (byte_4A32799 & 1) == 0 )
  {
    sub_1B761C0(&CTouch_TypeInfo, method);
    byte_4A32799 = 1;
  }
  v5 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v5 = CTouch_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->mScreenCam = cam;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&static_fields->mScreenCam, (int32_t)cam, v2, v3);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CTouch_TouchEventHandler___ctor(
        CTouch_TouchEventHandler_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B76164((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B76280(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B76438(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B762E8(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19C4224;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C41E4;
}


System_IAsyncResult_o *__fastcall CTouch_TouchEventHandler__BeginInvoke(
        CTouch_TouchEventHandler_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1B76174(this, &v5, callback, object);
}


void __fastcall CTouch_TouchEventHandler__EndInvoke(
        CTouch_TouchEventHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B76178(result, 0LL, method);
}


void __fastcall CTouch_TouchEventHandler__Invoke(CTouch_TouchEventHandler_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}