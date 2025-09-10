void CTouch___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  struct CTouch_StaticFields *static_fields; // x8
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  System_Collections_Generic_List_int__o *v5; // x19
  struct CTouch_StaticFields *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct CTouch_StaticFields *v9; // x8

  if ( (byte_4C2B8B2 & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C2D490(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C2D490(&UnityEngine_Touch___TypeInfo);
    byte_4C2B8B2 = 1;
  }
  *(_QWORD *)&CTouch_TypeInfo->static_fields->FLICK_LEN = 0x4170000040A00000LL;
  v1 = sub_1C2D538(UnityEngine_Touch___TypeInfo, 1);
  static_fields = CTouch_TypeInfo->static_fields;
  static_fields->mTouch = (struct UnityEngine_Touch_array *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->mTouch, v1, v3, v4);
  v5 = (System_Collections_Generic_List_int__o *)sub_1C2D6DC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_376C30C *)Method_System_Collections_Generic_List_int___ctor__);
  v6 = CTouch_TypeInfo->static_fields;
  v6->ignoreFingerIDList = v5;
  sub_1C2D434((CGThumbnailListItem_o *)&v6->ignoreFingerIDList, (int32_t)v5, v7, v8);
  v9 = CTouch_TypeInfo->static_fields;
  *(_WORD *)&v9->mIsTchNow = 0;
  v9->mState = 0;
  v9->mDragFrameCnt = -1;
  v9->mIsClassEnabled = 0;
}


System_Collections_Generic_List_int__o *CTouch__GetIgnoreFingerIDList(const MethodInfo *method)
{
  CTouch_c *v1; // x0

  if ( (byte_4C2B8B0 & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    byte_4C2B8B0 = 1;
  }
  v1 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v1 = CTouch_TypeInfo;
  }
  return v1->static_fields->ignoreFingerIDList;
}


UnityEngine_Vector2_o CTouch__GetTouchPos(const MethodInfo *method)
{
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  CTouch_c *v4; // x0
  const MethodInfo *v5; // x1
  const MethodInfo *v6; // x1
  int32_t ValidTouchLastID; // w0
  UnityEngine_Vector2_o position; // kr00_8
  struct UnityEngine_Vector2_StaticFields *v9; // x8
  float v10; // s0
  float v11; // s1
  UnityEngine_Touch_o src; // [xsp+8h] [xbp-C8h] BYREF
  UnityEngine_Touch_o dest; // [xsp+50h] [xbp-80h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4C2B8A5 & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    byte_4C2B8A5 = 1;
  }
  memset(&dest, 0, sizeof(dest));
  if ( !byte_4C20C9A )
  {
    sub_1C2D490(&UnityEngine_Vector2_TypeInfo);
    byte_4C20C9A = 1;
  }
  static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  if ( UnityEngine_Input__get_touchCount(0) >= 1 )
  {
    v4 = CTouch_TypeInfo;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    if ( CTouch__GetValidTouchCount((const MethodInfo *)v4) == 1 )
    {
      if ( !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      if ( CTouch__GetValidTouchLastID(1, v5) < 0 )
      {
        if ( !byte_4C20C9A )
        {
          sub_1C2D490(&UnityEngine_Vector2_TypeInfo);
          byte_4C20C9A = 1;
        }
        v9 = UnityEngine_Vector2_TypeInfo->static_fields;
        x = v9->zeroVector.fields.x;
        y = v9->zeroVector.fields.y;
      }
      else
      {
        if ( !CTouch_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        ValidTouchLastID = CTouch__GetValidTouchLastID(1, v6);
        UnityEngine_Input__GetTouch(&src, ValidTouchLastID, 0);
        memcpy(&dest, &src, sizeof(dest));
        position = UnityEngine_Touch__get_position(&dest, 0);
        x = position.fields.x;
        y = position.fields.y;
      }
    }
  }
  v10 = x;
  v11 = y;
  result.fields.y = v11;
  result.fields.x = v10;
  return result;
}


int32_t CTouch__GetValidTouchCount(const MethodInfo *method)
{
  __int64 touchCount; // x0
  __int64 v2; // x1
  CTouch_c *v3; // x8
  int v4; // w19
  struct System_Collections_Generic_List_int__o *ignoreFingerIDList; // x8

  if ( (byte_4C2B8AF & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__get_Count__);
    byte_4C2B8AF = 1;
  }
  touchCount = UnityEngine_Input__get_touchCount(0);
  v3 = CTouch_TypeInfo;
  v4 = touchCount;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v3 = CTouch_TypeInfo;
  }
  ignoreFingerIDList = v3->static_fields->ignoreFingerIDList;
  if ( !ignoreFingerIDList )
    sub_1C2D6EC(touchCount, v2);
  return v4 - ignoreFingerIDList->fields._size;
}


int32_t CTouch__GetValidTouchLastID(bool isReverse, const MethodInfo *method)
{
  CTouch_c *v3; // x0
  unsigned __int64 v4; // x19
  CTouch_c *v5; // x0
  System_Collections_Generic_List_int__o *ignoreFingerIDList; // x20
  UnityEngine_Touch_array *touches; // x0
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x22
  CTouch_c *v11; // x0
  System_Collections_Generic_List_int__o *v12; // x20

  if ( (byte_4C2B8B1 & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    sub_1C2D490(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4C2B8B1 = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( CTouch__GetValidTouchCount((const MethodInfo *)v3) < 1 )
  {
    LODWORD(v4) = -1;
  }
  else
  {
    LODWORD(v4) = UnityEngine_Input__get_touchCount(0);
    if ( isReverse )
    {
      while ( 1 )
      {
        LODWORD(v4) = v4 - 1;
        if ( (v4 & 0x80000000) != 0LL )
          goto LABEL_25;
        v5 = CTouch_TypeInfo;
        if ( !CTouch_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
          v5 = CTouch_TypeInfo;
        }
        ignoreFingerIDList = v5->static_fields->ignoreFingerIDList;
        touches = UnityEngine_Input__get_touches(0);
        if ( !touches )
          goto LABEL_27;
        if ( (unsigned int)v4 >= LODWORD(touches->max_length) )
          goto LABEL_28;
        touches = (UnityEngine_Touch_array *)UnityEngine_Touch__get_fingerId(&touches->m_Items[(unsigned int)v4], 0);
        if ( !ignoreFingerIDList )
          goto LABEL_27;
        if ( !System_Collections_Generic_List_int___Contains(
                ignoreFingerIDList,
                (int32_t)touches,
                (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__) )
          return v4;
      }
    }
    if ( (int)v4 < 1 )
    {
LABEL_25:
      LODWORD(v4) = 0;
      return v4;
    }
    v4 = 0;
    v10 = 32;
    while ( 1 )
    {
      v11 = CTouch_TypeInfo;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v11 = CTouch_TypeInfo;
      }
      v12 = v11->static_fields->ignoreFingerIDList;
      touches = UnityEngine_Input__get_touches(0);
      if ( !touches )
        goto LABEL_27;
      if ( v4 >= LODWORD(touches->max_length) )
LABEL_28:
        sub_1C2D6F4(touches, v8, v9);
      touches = (UnityEngine_Touch_array *)UnityEngine_Touch__get_fingerId(
                                             (UnityEngine_Touch_o *)((char *)touches + v10),
                                             0);
      if ( !v12 )
LABEL_27:
        sub_1C2D6EC(touches, v8);
      if ( !System_Collections_Generic_List_int___Contains(
              v12,
              (int32_t)touches,
              (const MethodInfo_376CED8 *)Method_System_Collections_Generic_List_int__Contains__) )
        break;
      ++v4;
      v10 += 68;
      if ( (__int64)v4 >= UnityEngine_Input__get_touchCount(0) )
        goto LABEL_25;
    }
  }
  return v4;
}


void CTouch__SetClassEnabled(bool isEnabled, const MethodInfo *method)
{
  CTouch_c *v3; // x0

  if ( (byte_4C2B889 & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    byte_4C2B889 = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v3 = CTouch_TypeInfo;
  }
  v3->static_fields->mIsClassEnabled = isEnabled;
}


void CTouch__SetMultiTouchEnabled(bool isEnabled, const MethodInfo *method)
{
  CTouch_c *v3; // x0

  if ( (byte_4C2B88A & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    byte_4C2B88A = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v3 = CTouch_TypeInfo;
  }
  v3->static_fields->mIsReqMultiTouchEnabled = isEnabled;
}


void CTouch__add_MOnTouchPressEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  CTouch_c *v3; // x0
  System_Delegate_o *MOnTouchPressEvent; // x20
  System_Delegate_o *v5; // x0
  System_Delegate_o *v6; // x21
  CTouch_c *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CTouch_TouchEventHandler_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4C2B88F & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    sub_1C2D490(&CTouch_TouchEventHandler_TypeInfo);
    byte_4C2B88F = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v3 = CTouch_TypeInfo;
  }
  MOnTouchPressEvent = (System_Delegate_o *)v3->static_fields->MOnTouchPressEvent;
  while ( 1 )
  {
    v5 = System_Delegate__Combine(MOnTouchPressEvent, (System_Delegate_o *)value, 0);
    v6 = v5;
    if ( v5 )
    {
      if ( (CTouch_TouchEventHandler_c *)v5->klass != CTouch_TouchEventHandler_TypeInfo )
        break;
    }
    v7 = CTouch_TypeInfo;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v7 = CTouch_TypeInfo;
    }
    v8 = sub_1C676E8(&v7->static_fields->MOnTouchPressEvent, v6, MOnTouchPressEvent);
    v9 = MOnTouchPressEvent == (System_Delegate_o *)v8;
    MOnTouchPressEvent = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2D9AC(v5);
  CTouch__remove_MOnTouchPressEvent(v10, v11);
}


void CTouch__add_MOnTouchReleaseEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  CTouch_c *v3; // x0
  System_Delegate_o *MOnTouchReleaseEvent; // x20
  System_Delegate_o *v5; // x0
  System_Delegate_o *v6; // x21
  CTouch_c *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CTouch_TouchEventHandler_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4C2B88B & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    sub_1C2D490(&CTouch_TouchEventHandler_TypeInfo);
    byte_4C2B88B = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v3 = CTouch_TypeInfo;
  }
  MOnTouchReleaseEvent = (System_Delegate_o *)v3->static_fields->MOnTouchReleaseEvent;
  while ( 1 )
  {
    v5 = System_Delegate__Combine(MOnTouchReleaseEvent, (System_Delegate_o *)value, 0);
    v6 = v5;
    if ( v5 )
    {
      if ( (CTouch_TouchEventHandler_c *)v5->klass != CTouch_TouchEventHandler_TypeInfo )
        break;
    }
    v7 = CTouch_TypeInfo;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v7 = CTouch_TypeInfo;
    }
    v8 = sub_1C676E8(&v7->static_fields->MOnTouchReleaseEvent, v6, MOnTouchReleaseEvent);
    v9 = MOnTouchReleaseEvent == (System_Delegate_o *)v8;
    MOnTouchReleaseEvent = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2D9AC(v5);
  CTouch__remove_MOnTouchReleaseEvent(v10, v11);
}


void CTouch__add_OnTouchPressEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  if ( (byte_4C2B891 & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    byte_4C2B891 = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__add_MOnTouchPressEvent(value, method);
}


void CTouch__add_OnTouchReleaseEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  if ( (byte_4C2B88D & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    byte_4C2B88D = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__add_MOnTouchReleaseEvent(value, method);
}


int32_t CTouch__getDragFrameCnt(const MethodInfo *method)
{
  CTouch_c *v1; // x0

  if ( (byte_4C2B8A3 & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    byte_4C2B8A3 = 1;
  }
  v1 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v1 = CTouch_TypeInfo;
  }
  return v1->static_fields->mDragFrameCnt;
}


int32_t CTouch__getFlickDirX(const MethodInfo *method)
{
  CTouch_c *v1; // x0
  CTouch_c *v2; // x0
  struct CTouch_StaticFields *static_fields; // x8
  float x; // s10
  float y; // s11
  float v6; // s8
  float v7; // s9
  float v8; // s0
  float v9; // s10
  float v10; // s11
  struct UnityEngine_Vector2_StaticFields *v11; // x8
  float v12; // s1
  float v13; // s0
  float v14; // s1
  struct UnityEngine_Vector2_StaticFields *v15; // x8

  if ( (byte_4C2B89F & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    byte_4C2B89F = 1;
  }
  v1 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !CTouch__isFlick((const MethodInfo *)v1) )
    return 0;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !byte_4C23B1F )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    byte_4C23B1F = 1;
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
  if ( !byte_4C20C9A )
  {
    sub_1C2D490(&UnityEngine_Vector2_TypeInfo);
    byte_4C20C9A = 1;
  }
  v6 = -1.0;
  v7 = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector.fields.y;
  if ( x >= 0.0 )
  {
    v6 = 1.0;
    if ( x <= 0.0 )
      return 0;
  }
  if ( !byte_4C20DA2 )
  {
    sub_1C2D490(&System_Math_TypeInfo);
    byte_4C20DA2 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v8 = sqrtf((float)(x * x) + (float)(y * y));
  if ( v8 <= 0.00001 )
  {
    if ( !byte_4C20C9A )
    {
      sub_1C2D490(&UnityEngine_Vector2_TypeInfo);
      byte_4C20C9A = 1;
    }
    v11 = UnityEngine_Vector2_TypeInfo->static_fields;
    v9 = v11->zeroVector.fields.x;
    v10 = v11->zeroVector.fields.y;
  }
  else
  {
    v9 = x / v8;
    v10 = y / v8;
  }
  if ( !byte_4C20DA2 )
  {
    sub_1C2D490(&System_Math_TypeInfo);
    byte_4C20DA2 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v12 = sqrtf((float)(v7 * v7) + (float)(v6 * v6));
  if ( v12 <= 0.00001 )
  {
    if ( !byte_4C20C9A )
    {
      sub_1C2D490(&UnityEngine_Vector2_TypeInfo);
      byte_4C20C9A = 1;
    }
    v15 = UnityEngine_Vector2_TypeInfo->static_fields;
    v13 = v15->zeroVector.fields.x;
    v14 = v15->zeroVector.fields.y;
  }
  else
  {
    v13 = v6 / v12;
    v14 = v7 / v12;
  }
  if ( (float)((float)(v9 * v13) + (float)(v10 * v14)) >= 0.75 )
    return (int)v6;
  else
    return 0;
}


int32_t CTouch__getFlickDirY(const MethodInfo *method)
{
  CTouch_c *v1; // x0
  CTouch_c *v2; // x0
  struct CTouch_StaticFields *static_fields; // x8
  float x; // s10
  float y; // s11
  float v6; // s8
  float v7; // s9
  float v8; // s0
  float v9; // s10
  float v10; // s11
  struct UnityEngine_Vector2_StaticFields *v11; // x8
  float v12; // s1
  float v13; // s0
  float v14; // s1
  struct UnityEngine_Vector2_StaticFields *v15; // x8

  if ( (byte_4C2B8A0 & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    byte_4C2B8A0 = 1;
  }
  v1 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !CTouch__isFlick((const MethodInfo *)v1) )
    return 0;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !byte_4C23B1F )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    byte_4C23B1F = 1;
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
  if ( !byte_4C20C9A )
  {
    sub_1C2D490(&UnityEngine_Vector2_TypeInfo);
    byte_4C20C9A = 1;
  }
  v6 = -1.0;
  v7 = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector.fields.x;
  if ( y <= 0.0 )
  {
    v6 = 1.0;
    if ( y >= 0.0 )
      return 0;
  }
  if ( !byte_4C20DA2 )
  {
    sub_1C2D490(&System_Math_TypeInfo);
    byte_4C20DA2 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v8 = sqrtf((float)(x * x) + (float)(y * y));
  if ( v8 <= 0.00001 )
  {
    if ( !byte_4C20C9A )
    {
      sub_1C2D490(&UnityEngine_Vector2_TypeInfo);
      byte_4C20C9A = 1;
    }
    v11 = UnityEngine_Vector2_TypeInfo->static_fields;
    v9 = v11->zeroVector.fields.x;
    v10 = v11->zeroVector.fields.y;
  }
  else
  {
    v9 = x / v8;
    v10 = y / v8;
  }
  if ( !byte_4C20DA2 )
  {
    sub_1C2D490(&System_Math_TypeInfo);
    byte_4C20DA2 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v12 = sqrtf((float)(v7 * v7) + (float)(v6 * v6));
  if ( v12 <= 0.00001 )
  {
    if ( !byte_4C20C9A )
    {
      sub_1C2D490(&UnityEngine_Vector2_TypeInfo);
      byte_4C20C9A = 1;
    }
    v15 = UnityEngine_Vector2_TypeInfo->static_fields;
    v13 = v15->zeroVector.fields.x;
    v14 = v15->zeroVector.fields.y;
  }
  else
  {
    v13 = v7 / v12;
    v14 = v6 / v12;
  }
  if ( (float)((float)(v9 * v13) + (float)(v10 * v14)) >= 0.75 )
    return (int)v6;
  else
    return 0;
}


UnityEngine_Vector2_o CTouch__getPosNow(const MethodInfo *method)
{
  CTouch_c *v1; // x0
  struct CTouch_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4C2B8A4 & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    byte_4C2B8A4 = 1;
  }
  v1 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
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


UnityEngine_Vector2_o CTouch__getScrPosDelta(const MethodInfo *method)
{
  CTouch_c *v1; // x0
  struct CTouch_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4C2B8AA & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    byte_4C2B8AA = 1;
  }
  v1 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
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


float CTouch__getScrPosDeltaLen(const MethodInfo *method)
{
  CTouch_c *v1; // x0

  if ( (byte_4C2B8AC & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    byte_4C2B8AC = 1;
  }
  v1 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v1 = CTouch_TypeInfo;
  }
  return v1->static_fields->mScrPosDeltaLen;
}


float CTouch__getScrPosDeltaLenOld(const MethodInfo *method)
{
  CTouch_c *v1; // x0

  if ( (byte_4C2B8AD & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    byte_4C2B8AD = 1;
  }
  v1 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v1 = CTouch_TypeInfo;
  }
  return v1->static_fields->mScrPosDeltaLenOld;
}


UnityEngine_Vector2_o CTouch__getScrPosDeltaOld(const MethodInfo *method)
{
  CTouch_c *v1; // x0
  struct CTouch_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4C2B8AB & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    byte_4C2B8AB = 1;
  }
  v1 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
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


UnityEngine_Vector2_o CTouch__getScreenPosition(const MethodInfo *method)
{
  CTouch_c *v1; // x0
  struct CTouch_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4C2B8A6 & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    byte_4C2B8A6 = 1;
  }
  v1 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
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


UnityEngine_Vector2_o CTouch__getScreenPosition_48947244(UnityEngine_Vector2_o tch_pos, const MethodInfo *method)
{
  const MethodInfo *v2; // x1
  float y; // s8
  float x; // s9
  CTouch_c *v5; // x0
  float v6; // s0
  float v7; // s1
  UnityEngine_Vector2_o ScreenPosition_48947356; // kr00_8
  UnityEngine_Vector2_o v9; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  y = tch_pos.fields.y;
  x = tch_pos.fields.x;
  if ( (byte_4C2B8A7 & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    byte_4C2B8A7 = 1;
  }
  v5 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v5 = CTouch_TypeInfo;
  }
  v9.fields.x = x;
  v9.fields.y = y;
  ScreenPosition_48947356 = CTouch__getScreenPosition_48947356(v9, v5->static_fields->mScreenCam, v2);
  v7 = ScreenPosition_48947356.fields.y;
  v6 = ScreenPosition_48947356.fields.x;
  result.fields.y = v7;
  result.fields.x = v6;
  return result;
}


UnityEngine_Vector2_o CTouch__getScreenPosition_48947356(
        UnityEngine_Vector2_o tch_pos,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  __int64 v6; // x1
  CTouch_c *v7; // x0
  UnityEngine_Camera_o *mScreenCam; // x0
  float v9; // s9
  float v10; // s10
  unsigned int lossyScale; // s0
  float v12; // s8
  float v13; // s8
  float v14; // s1
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float v16; // s0
  UnityEngine_Ray_o v17; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  y = tch_pos.fields.y;
  x = tch_pos.fields.x;
  if ( (byte_4C2B8A9 & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    sub_1C2D490(&UnityEngine_Object_TypeInfo);
    byte_4C2B8A9 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0, 0) || x == 3.4028e38 || y == 3.4028e38 )
  {
    if ( !byte_4C20C9A )
    {
      sub_1C2D490(&UnityEngine_Vector2_TypeInfo);
      byte_4C20C9A = 1;
    }
    static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
    v13 = static_fields->zeroVector.fields.x;
    v14 = static_fields->zeroVector.fields.y;
  }
  else
  {
    v7 = CTouch_TypeInfo;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v7 = CTouch_TypeInfo;
    }
    mScreenCam = v7->static_fields->mScreenCam;
    if ( !mScreenCam )
      goto LABEL_20;
    v19.fields.z = 0.0;
    v19.fields.x = x;
    v19.fields.y = y;
    UnityEngine_Camera__ScreenPointToRay_70970460(&v17, mScreenCam, v19, 0);
    mScreenCam = CTouch_TypeInfo->static_fields->mScreenCam;
    if ( !mScreenCam
      || (v10 = v17.fields.m_Origin.fields.x,
          v9 = v17.fields.m_Origin.fields.y,
          (mScreenCam = (UnityEngine_Camera_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)mScreenCam,
                                                  0)) == 0)
      || (lossyScale = (unsigned int)UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)mScreenCam, 0),
          (mScreenCam = CTouch_TypeInfo->static_fields->mScreenCam) == 0)
      || (v12 = *(float *)&lossyScale,
          (mScreenCam = (UnityEngine_Camera_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)mScreenCam,
                                                  0)) == 0) )
    {
LABEL_20:
      sub_1C2D6EC(mScreenCam, v6);
    }
    v13 = v10 / v12;
    v20 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)mScreenCam, 0);
    v14 = v9 / v20.fields.y;
  }
  v16 = v13;
  result.fields.y = v14;
  result.fields.x = v16;
  return result;
}


UnityEngine_Vector2_o CTouch__getScreenPosition_48947748(UnityEngine_Camera_o *cam, const MethodInfo *method)
{
  CTouch_c *v2; // x0
  const MethodInfo *v3; // x1
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o ScreenPosition_48947356; // kr00_8
  UnityEngine_Vector2_o TouchPos; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4C2B8A8 & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    byte_4C2B8A8 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  TouchPos = CTouch__GetTouchPos((const MethodInfo *)v2);
  ScreenPosition_48947356 = CTouch__getScreenPosition_48947356(TouchPos, CTouch_TypeInfo->static_fields->mScreenCam, v3);
  y = ScreenPosition_48947356.fields.y;
  x = ScreenPosition_48947356.fields.x;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


int32_t CTouch__getTouchState(const MethodInfo *method)
{
  CTouch_c *v1; // x0

  if ( (byte_4C2B898 & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    byte_4C2B898 = 1;
  }
  v1 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v1 = CTouch_TypeInfo;
  }
  return v1->static_fields->mState;
}


void CTouch__init(const MethodInfo *method)
{
  CTouch_c *v1; // x0
  struct CTouch_StaticFields *static_fields; // x8

  if ( (byte_4C2B894 & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    byte_4C2B894 = 1;
  }
  v1 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v1 = CTouch_TypeInfo;
  }
  static_fields = v1->static_fields;
  if ( !static_fields->mIsInitDone )
  {
    if ( !v1->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v1);
      static_fields = CTouch_TypeInfo->static_fields;
    }
    static_fields->mIsInitDone = 1;
    *(_WORD *)&static_fields->mIsClassEnabled = 257;
  }
}


bool CTouch__isDrag(const MethodInfo *method)
{
  CTouch_c *v1; // x0
  CTouch_c *v2; // x0

  if ( (byte_4C2B8A2 & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    byte_4C2B8A2 = 1;
  }
  v1 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !CTouch__isDragMode((const MethodInfo *)v1) )
    return 0;
  v2 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  return CTouch__isTouchKeep((const MethodInfo *)v2);
}


bool CTouch__isDragMode(const MethodInfo *method)
{
  CTouch_c *v1; // x0

  if ( (byte_4C2B8A1 & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    byte_4C2B8A1 = 1;
  }
  v1 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v1 = CTouch_TypeInfo;
  }
  return v1->static_fields->mDragFrameCnt >= 0;
}


bool CTouch__isFlick(const MethodInfo *method)
{
  CTouch_c *v1; // x0

  if ( (byte_4C2B89D & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    byte_4C2B89D = 1;
  }
  v1 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v1 = CTouch_TypeInfo;
  }
  return CTouch__isFlick_48944572(v1->static_fields->FLICK_LEN, (const MethodInfo *)v1);
}


bool CTouch__isFlick_48944572(float flickLen, const MethodInfo *method)
{
  CTouch_c *v3; // x0
  CTouch_c *v4; // x0

  if ( (byte_4C2B89E & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    byte_4C2B89E = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !CTouch__isTouchRelease((const MethodInfo *)v3) )
    return 0;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !byte_4C2B8B8 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    byte_4C2B8B8 = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v4 = CTouch_TypeInfo;
  }
  return v4->static_fields->mScrPosDeltaLen >= flickLen;
}


bool CTouch__isTouchKeep(const MethodInfo *method)
{
  CTouch_c *v1; // x0

  if ( (byte_4C2B89B & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    byte_4C2B89B = 1;
  }
  v1 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v1 = CTouch_TypeInfo;
  }
  return v1->static_fields->mState == 2;
}


bool CTouch__isTouchNone(const MethodInfo *method)
{
  CTouch_c *v1; // x0

  if ( (byte_4C2B899 & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    byte_4C2B899 = 1;
  }
  v1 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v1 = CTouch_TypeInfo;
  }
  return v1->static_fields->mState == 0;
}


bool CTouch__isTouchPush(const MethodInfo *method)
{
  CTouch_c *v1; // x0

  if ( (byte_4C2B89A & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    byte_4C2B89A = 1;
  }
  v1 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v1 = CTouch_TypeInfo;
  }
  return v1->static_fields->mState == 1;
}


bool CTouch__isTouchRelease(const MethodInfo *method)
{
  CTouch_c *v1; // x0

  if ( (byte_4C2B89C & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    byte_4C2B89C = 1;
  }
  v1 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v1 = CTouch_TypeInfo;
  }
  return v1->static_fields->mState == 3;
}


void CTouch__process(const MethodInfo *method)
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

  if ( (byte_4C2B897 & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    byte_4C2B897 = 1;
  }
  v1 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v1 = CTouch_TypeInfo;
  }
  static_fields = v1->static_fields;
  if ( static_fields->mIsInitDone )
  {
    if ( !v1->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v1);
      v1 = CTouch_TypeInfo;
      static_fields = CTouch_TypeInfo->static_fields;
    }
    if ( static_fields->mIsClassEnabled )
    {
      if ( !v1->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v1);
        static_fields = CTouch_TypeInfo->static_fields;
      }
      mProcessOldFrameCount = static_fields->mProcessOldFrameCount;
      if ( mProcessOldFrameCount != UnityEngine_Time__get_frameCount(0) )
      {
        frameCount = UnityEngine_Time__get_frameCount(0);
        v5 = CTouch_TypeInfo;
        v6 = frameCount;
        if ( !CTouch_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
          v5 = CTouch_TypeInfo;
        }
        v5->static_fields->mProcessOldFrameCount = v6;
        if ( !UnityEngine_Input__get_multiTouchEnabled(0) )
          goto LABEL_32;
        v7 = CTouch_TypeInfo;
        if ( !CTouch_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
          v7 = CTouch_TypeInfo;
        }
        if ( !v7->static_fields->mIsReqMultiTouchEnabled )
        {
          if ( UnityEngine_Input__get_touchCount(0) > 0 )
          {
LABEL_27:
            v10 = CTouch_TypeInfo;
            if ( !CTouch_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
            CTouch__processSingleTouch((const MethodInfo *)v10);
            return;
          }
          v9 = 0;
        }
        else
        {
LABEL_32:
          if ( UnityEngine_Input__get_multiTouchEnabled(0) )
            goto LABEL_27;
          v8 = CTouch_TypeInfo;
          if ( !CTouch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
            v8 = CTouch_TypeInfo;
          }
          if ( !v8->static_fields->mIsReqMultiTouchEnabled )
            goto LABEL_27;
          v9 = 1;
        }
        UnityEngine_Input__set_multiTouchEnabled(v9, 0);
        goto LABEL_27;
      }
    }
  }
}


void CTouch__processSingleTouch(const MethodInfo *method)
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
  __int64 v10; // x2
  const MethodInfo *v11; // x0
  UnityEngine_Vector2_o ScreenPosition_48947244; // kr08_8
  CTouch_c *v13; // x0
  __int64 v14; // x8
  const MethodInfo *touchCount; // x0
  CTouch_c *v16; // x8
  struct CTouch_StaticFields *static_fields; // x9
  struct UnityEngine_Vector2_o mPosNow; // x10
  UnityEngine_Vector2_o v19; // kr10_8
  CTouch_c *v20; // x0
  UnityEngine_Vector2_c *v21; // x8
  struct CTouch_StaticFields *v22; // x9
  struct CTouch_TouchEventHandler_o *MOnTouchPressEvent; // x8
  __int64 v24; // x8
  __int64 v25; // x8
  __int64 v26; // x8
  __int64 v27; // x8
  CTouch_c *v28; // x0
  struct CTouch_StaticFields *v29; // x9
  struct CTouch_TouchEventHandler_o *MOnTouchReleaseEvent; // x8
  CTouch_c *v31; // x0
  _BOOL8 isTouchKeep; // x0
  CTouch_c *v33; // x8
  struct CTouch_StaticFields *v34; // x9
  int32_t *p_mDragFrameCnt; // x9
  int32_t v36; // w10
  int32_t mDragFrameCnt; // t1
  struct CTouch_StaticFields *v38; // x9
  int32_t v39; // t1
  bool v40; // w0
  CTouch_c *v41; // x8
  struct CTouch_StaticFields *v42; // x9
  float32x2_t v43; // d8
  float32x2_t v44; // d9
  float32x2_t v45; // d8
  float v46; // s1
  struct CTouch_StaticFields *v47; // x9
  float DRAG_LEN; // s0
  struct CTouch_StaticFields *v49; // x8
  float mScrPosDeltaLen; // s0
  float32x2_t v51; // d8
  float32x2_t v52; // d0
  CTouch_c *v53; // x0
  struct CTouch_StaticFields *v54; // x20
  float y; // s8
  float x; // s9
  _BYTE v57[72]; // [xsp+8h] [xbp-118h] BYREF
  UnityEngine_Touch_o src; // [xsp+50h] [xbp-D0h] BYREF
  _BYTE dest[72]; // [xsp+98h] [xbp-88h] BYREF

  if ( (byte_4C2B8AE & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    byte_4C2B8AE = 1;
  }
  v1 = (const MethodInfo *)CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v1 = (const MethodInfo *)CTouch_TypeInfo;
  }
  *((_DWORD *)v1[2].virtualMethodPointer + 7) = 0;
  CTouch_TypeInfo->static_fields->mPosNow = CTouch__GetTouchPos(v1);
  if ( UnityEngine_Input__get_touchCount(0) < 1 )
    goto LABEL_17;
  v2 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( CTouch__GetValidTouchCount((const MethodInfo *)v2) != 1 )
    goto LABEL_17;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( (CTouch__GetValidTouchLastID(1, v3) & 0x80000000) == 0 )
  {
    v5 = CTouch_TypeInfo;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v5 = CTouch_TypeInfo;
    }
    mTouch = v5->static_fields->mTouch;
    ValidTouchLastID = CTouch__GetValidTouchLastID(1, v4);
    UnityEngine_Input__GetTouch(&src, ValidTouchLastID, 0);
    p_image = memcpy(dest, &src, 0x44u);
    if ( !mTouch )
      goto LABEL_121;
    p_image = memcpy(v57, dest, 0x44u);
    if ( !LODWORD(mTouch->max_length) )
      goto LABEL_122;
    memcpy(mTouch->m_Items, v57, 0x44u);
LABEL_17:
    v11 = (const MethodInfo *)CTouch_TypeInfo;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v11 = (const MethodInfo *)CTouch_TypeInfo;
    }
    *(_QWORD *)((char *)v11[2].virtualMethodPointer + 68) = *(_QWORD *)((char *)v11[2].virtualMethodPointer + 52);
    ScreenPosition_48947244 = CTouch__getScreenPosition_48947244(
                                *(UnityEngine_Vector2_o *)((char *)v11[2].virtualMethodPointer + 32),
                                v11);
    v13 = CTouch_TypeInfo;
    CTouch_TypeInfo->static_fields->mScrPosNow = ScreenPosition_48947244;
    if ( v13->static_fields->mIsTchNow )
      goto LABEL_40;
    if ( !v13->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v13);
    if ( CTouch__GetValidTouchCount((const MethodInfo *)v13) != 1 )
      goto LABEL_40;
    if ( UnityEngine_Input__get_touchCount(0) >= 1 )
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
      if ( !UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v14 + 32), 0) )
        goto LABEL_30;
    }
    if ( !UnityEngine_Input__GetMouseButtonDown(0, 0) )
    {
LABEL_40:
      v20 = CTouch_TypeInfo;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v20 = CTouch_TypeInfo;
      }
      if ( v20->static_fields->mIsTchNow )
      {
        if ( !v20->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v20);
        if ( CTouch__GetValidTouchCount((const MethodInfo *)v20) == 1 )
        {
          p_image = &CTouch_TypeInfo->_1.image;
          if ( !CTouch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
            p_image = &CTouch_TypeInfo->_1.image;
          }
          v24 = *(_QWORD *)(p_image[23] + 8LL);
          if ( !v24 )
            goto LABEL_121;
          if ( !*(_DWORD *)(v24 + 24) )
            goto LABEL_122;
          if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v24 + 32), 0) == 1 )
            goto LABEL_59;
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
          if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v25 + 32), 0) == 2 )
            goto LABEL_59;
        }
        v20 = CTouch_TypeInfo;
        if ( !CTouch_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
          v20 = CTouch_TypeInfo;
        }
        if ( v20->static_fields->mIsTchMouseNow )
        {
LABEL_59:
          v20 = CTouch_TypeInfo;
          if ( !CTouch_TypeInfo->_2.cctor_finished )
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
LABEL_30:
      touchCount = (const MethodInfo *)UnityEngine_Input__get_touchCount(0);
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
      v19 = CTouch__getScreenPosition_48947244(v16->static_fields->mPosPush, touchCount);
      v20 = CTouch_TypeInfo;
      CTouch_TypeInfo->static_fields->mScrPosPush = v19;
      v20->static_fields->mScrPosOld = v20->static_fields->mScrPosNow;
      if ( !byte_4C20C9A )
      {
        sub_1C2D490(&UnityEngine_Vector2_TypeInfo);
        v20 = CTouch_TypeInfo;
        byte_4C20C9A = 1;
      }
      v21 = UnityEngine_Vector2_TypeInfo;
      v20->static_fields->mScrPosDeltaOld = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
      v20->static_fields->mScrPosDelta = v21->static_fields->zeroVector;
      v22 = v20->static_fields;
      MOnTouchPressEvent = v22->MOnTouchPressEvent;
      *(_QWORD *)&v22->mDragFrameCnt = 0xFFFFFFFFLL;
      if ( MOnTouchPressEvent )
      {
        ((void (__fastcall *)(intptr_t, intptr_t))MOnTouchPressEvent->fields.invoke_impl)(
          MOnTouchPressEvent->fields.method_code,
          MOnTouchPressEvent->fields.method);
        v20 = CTouch_TypeInfo;
      }
    }
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = CTouch_TypeInfo;
    }
    if ( !v20->static_fields->mIsTchNow )
      goto LABEL_83;
    if ( !v20->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v20);
    if ( CTouch__GetValidTouchCount((const MethodInfo *)v20) != 1 )
    {
LABEL_78:
      if ( !UnityEngine_Input__GetMouseButtonUp(0, 0) )
      {
LABEL_83:
        v31 = CTouch_TypeInfo;
        if ( !CTouch_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        isTouchKeep = CTouch__isTouchKeep((const MethodInfo *)v31);
        v33 = CTouch_TypeInfo;
        if ( isTouchKeep )
        {
          if ( !CTouch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
            v33 = CTouch_TypeInfo;
          }
          v34 = v33->static_fields;
          mDragFrameCnt = v34->mDragFrameCnt;
          p_mDragFrameCnt = &v34->mDragFrameCnt;
          v36 = mDragFrameCnt;
          if ( (mDragFrameCnt & 0x80000000) == 0 )
          {
            if ( !v33->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v33);
              v33 = CTouch_TypeInfo;
              v38 = CTouch_TypeInfo->static_fields;
              v39 = v38->mDragFrameCnt;
              p_mDragFrameCnt = &v38->mDragFrameCnt;
              v36 = v39;
            }
            *p_mDragFrameCnt = v36 + 1;
          }
        }
        if ( !v33->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v33);
        v40 = CTouch__isTouchKeep((const MethodInfo *)isTouchKeep);
        v41 = CTouch_TypeInfo;
        if ( v40 )
        {
          if ( !CTouch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
            v41 = CTouch_TypeInfo;
          }
          v42 = v41->static_fields;
          if ( v42->mDragFrameCnt < 0 )
          {
            if ( !v41->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v41);
              v42 = CTouch_TypeInfo->static_fields;
            }
            v43.n64_u64[0] = (unsigned __int64)v42->mScrPosNow;
            v44.n64_u64[0] = (unsigned __int64)v42->mScrPosPush;
            if ( !byte_4C20DA2 )
            {
              sub_1C2D490(&System_Math_TypeInfo);
              byte_4C20DA2 = 1;
            }
            v45.n64_u64[0] = vsub_f32(v43, v44).n64_u64[0];
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            v41 = CTouch_TypeInfo;
            v46 = sqrtf(vaddv_f32(vmul_f32(v45, v45)));
            v47 = CTouch_TypeInfo->static_fields;
            DRAG_LEN = v47->DRAG_LEN;
            v47->mDragLen = v46;
            if ( v46 >= DRAG_LEN )
            {
              if ( !v41->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v41);
                v41 = CTouch_TypeInfo;
                v47 = CTouch_TypeInfo->static_fields;
              }
              v47->mDragFrameCnt = 0;
            }
          }
        }
        if ( !v41->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v41);
          v41 = CTouch_TypeInfo;
        }
        v41->static_fields->mScrPosDeltaOld = v41->static_fields->mScrPosDelta;
        v41->static_fields->mScrPosDelta = (struct UnityEngine_Vector2_o)vsub_f32(
                                                                           (float32x2_t)v41->static_fields->mScrPosNow,
                                                                           (float32x2_t)v41->static_fields->mScrPosOld).n64_u64[0];
        v49 = v41->static_fields;
        mScrPosDeltaLen = v49->mScrPosDeltaLen;
        v49->mScrPosDeltaLen = 0.0;
        v51.n64_u64[0] = (unsigned __int64)v49->mScrPosDelta;
        v49->mScrPosDeltaLenOld = mScrPosDeltaLen;
        if ( !byte_4C20C9A )
        {
          sub_1C2D490(&UnityEngine_Vector2_TypeInfo);
          byte_4C20C9A = 1;
        }
        v52.n64_u64[0] = vsub_f32(v51, (float32x2_t)UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).n64_u64[0];
        if ( vaddv_f32(vmul_f32(v52, v52)) >= 1.0e-10 )
        {
          v53 = CTouch_TypeInfo;
          if ( !CTouch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
            v53 = CTouch_TypeInfo;
          }
          v54 = v53->static_fields;
          if ( !byte_4C20DA2 )
          {
            sub_1C2D490(&System_Math_TypeInfo);
            byte_4C20DA2 = 1;
          }
          x = v54->mScrPosDelta.fields.x;
          y = v54->mScrPosDelta.fields.y;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          CTouch_TypeInfo->static_fields->mScrPosDeltaLen = sqrtf((float)(x * x) + (float)(y * y));
        }
        return;
      }
LABEL_79:
      v28 = CTouch_TypeInfo;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v28 = CTouch_TypeInfo;
      }
      v29 = v28->static_fields;
      MOnTouchReleaseEvent = v29->MOnTouchReleaseEvent;
      *(_WORD *)&v29->mIsTchNow = 0;
      v29->mState = 3;
      if ( MOnTouchReleaseEvent )
        ((void (__fastcall *)(intptr_t, intptr_t))MOnTouchReleaseEvent->fields.invoke_impl)(
          MOnTouchReleaseEvent->fields.method_code,
          MOnTouchReleaseEvent->fields.method);
      goto LABEL_83;
    }
    p_image = &CTouch_TypeInfo->_1.image;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      p_image = &CTouch_TypeInfo->_1.image;
    }
    v26 = *(_QWORD *)(p_image[23] + 8LL);
    if ( v26 )
    {
      if ( !*(_DWORD *)(v26 + 24) )
        goto LABEL_122;
      if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v26 + 32), 0) == 3 )
        goto LABEL_79;
      p_image = &CTouch_TypeInfo->_1.image;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        p_image = &CTouch_TypeInfo->_1.image;
      }
      v27 = *(_QWORD *)(p_image[23] + 8LL);
      if ( v27 )
      {
        if ( *(_DWORD *)(v27 + 24) )
        {
          if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v27 + 32), 0) == 4 )
            goto LABEL_79;
          goto LABEL_78;
        }
LABEL_122:
        sub_1C2D6F4(p_image, v9, v10);
      }
    }
LABEL_121:
    sub_1C2D6EC(p_image, v9);
  }
}


void CTouch__reboot(const MethodInfo *method)
{
  CTouch_c *v1; // x0

  if ( (byte_4C2B893 & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    byte_4C2B893 = 1;
  }
  v1 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v1 = CTouch_TypeInfo;
  }
  v1->static_fields->mIsInitDone = 0;
}


void CTouch__remove_MOnTouchPressEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  CTouch_c *v3; // x0
  System_Delegate_o *MOnTouchPressEvent; // x20
  System_Delegate_o *v5; // x0
  System_Delegate_o *v6; // x21
  CTouch_c *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CTouch_TouchEventHandler_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4C2B890 & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    sub_1C2D490(&CTouch_TouchEventHandler_TypeInfo);
    byte_4C2B890 = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v3 = CTouch_TypeInfo;
  }
  MOnTouchPressEvent = (System_Delegate_o *)v3->static_fields->MOnTouchPressEvent;
  while ( 1 )
  {
    v5 = System_Delegate__Remove(MOnTouchPressEvent, (System_Delegate_o *)value, 0);
    v6 = v5;
    if ( v5 )
    {
      if ( (CTouch_TouchEventHandler_c *)v5->klass != CTouch_TouchEventHandler_TypeInfo )
        break;
    }
    v7 = CTouch_TypeInfo;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v7 = CTouch_TypeInfo;
    }
    v8 = sub_1C676E8(&v7->static_fields->MOnTouchPressEvent, v6, MOnTouchPressEvent);
    v9 = MOnTouchPressEvent == (System_Delegate_o *)v8;
    MOnTouchPressEvent = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2D9AC(v5);
  CTouch__add_OnTouchPressEvent(v10, v11);
}


void CTouch__remove_MOnTouchReleaseEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  CTouch_c *v3; // x0
  System_Delegate_o *MOnTouchReleaseEvent; // x20
  System_Delegate_o *v5; // x0
  System_Delegate_o *v6; // x21
  CTouch_c *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  CTouch_TouchEventHandler_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4C2B88C & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    sub_1C2D490(&CTouch_TouchEventHandler_TypeInfo);
    byte_4C2B88C = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v3 = CTouch_TypeInfo;
  }
  MOnTouchReleaseEvent = (System_Delegate_o *)v3->static_fields->MOnTouchReleaseEvent;
  while ( 1 )
  {
    v5 = System_Delegate__Remove(MOnTouchReleaseEvent, (System_Delegate_o *)value, 0);
    v6 = v5;
    if ( v5 )
    {
      if ( (CTouch_TouchEventHandler_c *)v5->klass != CTouch_TouchEventHandler_TypeInfo )
        break;
    }
    v7 = CTouch_TypeInfo;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v7 = CTouch_TypeInfo;
    }
    v8 = sub_1C676E8(&v7->static_fields->MOnTouchReleaseEvent, v6, MOnTouchReleaseEvent);
    v9 = MOnTouchReleaseEvent == (System_Delegate_o *)v8;
    MOnTouchReleaseEvent = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C2D9AC(v5);
  CTouch__add_OnTouchReleaseEvent(v10, v11);
}


void CTouch__remove_OnTouchPressEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  if ( (byte_4C2B892 & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    byte_4C2B892 = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__remove_MOnTouchPressEvent(value, method);
}


void CTouch__remove_OnTouchReleaseEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  if ( (byte_4C2B88E & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    byte_4C2B88E = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__remove_MOnTouchReleaseEvent(value, method);
}


void CTouch__setParam(float flickLen, float dragLen, UnityEngine_Camera_o *screenCam, const MethodInfo *method)
{
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  CTouch_c *v9; // x0
  struct CTouch_StaticFields *static_fields; // x8
  struct CTouch_StaticFields *v11; // x0

  if ( (byte_4C2B895 & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    byte_4C2B895 = 1;
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
    if ( !byte_4C217DF )
    {
      sub_1C2D490(&CTouch_TypeInfo);
      v9 = CTouch_TypeInfo;
      byte_4C217DF = 1;
    }
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = CTouch_TypeInfo;
    }
    v11 = v9->static_fields;
    v11->mScreenCam = screenCam;
    sub_1C2D434((CGThumbnailListItem_o *)&v11->mScreenCam, (int32_t)screenCam, v4, v5);
  }
}


void CTouch__setScreenCamera(UnityEngine_Camera_o *cam, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  CTouch_c *v5; // x0
  struct CTouch_StaticFields *static_fields; // x0

  if ( (byte_4C2B896 & 1) == 0 )
  {
    sub_1C2D490(&CTouch_TypeInfo);
    byte_4C2B896 = 1;
  }
  v5 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v5 = CTouch_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->mScreenCam = cam;
  sub_1C2D434((CGThumbnailListItem_o *)&static_fields->mScreenCam, (int32_t)cam, v2, v3);
}


void CTouch_TouchEventHandler___ctor(
        CTouch_TouchEventHandler_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A77FA0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A77F60;
}


System_IAsyncResult_o *CTouch_TouchEventHandler__BeginInvoke(
        CTouch_TouchEventHandler_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C2D444(this, &v5, callback, object);
}


void CTouch_TouchEventHandler__EndInvoke(
        CTouch_TouchEventHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
}


void CTouch_TouchEventHandler__Invoke(CTouch_TouchEventHandler_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}