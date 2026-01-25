void CTouch___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  struct CTouch_StaticFields *static_fields; // x8
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  System_Collections_Generic_List_int__o *v9; // x19
  struct CTouch_StaticFields *v10; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct CTouch_StaticFields *v17; // x8

  if ( (byte_4CF2BBF & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C7BAE8(&UnityEngine_Touch___TypeInfo);
    byte_4CF2BBF = 1;
  }
  *(_QWORD *)&CTouch_TypeInfo->static_fields->FLICK_LEN = 0x4170000040A00000LL;
  v1 = sub_1C7BB90(UnityEngine_Touch___TypeInfo, 1);
  static_fields = CTouch_TypeInfo->static_fields;
  static_fields->mTouch = (struct UnityEngine_Touch_array *)v1;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->mTouch, v1, v3, v4, v5, v6, v7, v8);
  v9 = (System_Collections_Generic_List_int__o *)sub_1C7BD34(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_3821584 *)Method_System_Collections_Generic_List_int___ctor__);
  v10 = CTouch_TypeInfo->static_fields;
  v10->ignoreFingerIDList = v9;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v10->ignoreFingerIDList, (int32_t)v9, v11, v12, v13, v14, v15, v16);
  v17 = CTouch_TypeInfo->static_fields;
  *(_WORD *)&v17->mIsTchNow = 0;
  v17->mState = 0;
  v17->mDragFrameCnt = -1;
  v17->mIsClassEnabled = 0;
}


System_Collections_Generic_List_int__o *CTouch__GetIgnoreFingerIDList(const MethodInfo *method)
{
  CTouch_c *v1; // x0

  if ( (byte_4CF2BBD & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    byte_4CF2BBD = 1;
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

  if ( (byte_4CF2BB2 & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    byte_4CF2BB2 = 1;
  }
  memset(&dest, 0, sizeof(dest));
  if ( !byte_4CE7D39 )
  {
    sub_1C7BAE8(&UnityEngine_Vector2_TypeInfo);
    byte_4CE7D39 = 1;
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
        if ( !byte_4CE7D39 )
        {
          sub_1C7BAE8(&UnityEngine_Vector2_TypeInfo);
          byte_4CE7D39 = 1;
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

  if ( (byte_4CF2BBC & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__get_Count__);
    byte_4CF2BBC = 1;
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
    sub_1C7BD40(touchCount, v2);
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
  __int64 v9; // x22
  CTouch_c *v10; // x0
  System_Collections_Generic_List_int__o *v11; // x20

  if ( (byte_4CF2BBE & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_int__Contains__);
    byte_4CF2BBE = 1;
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
                (const MethodInfo_3822150 *)Method_System_Collections_Generic_List_int__Contains__) )
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
    v9 = 32;
    while ( 1 )
    {
      v10 = CTouch_TypeInfo;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v10 = CTouch_TypeInfo;
      }
      v11 = v10->static_fields->ignoreFingerIDList;
      touches = UnityEngine_Input__get_touches(0);
      if ( !touches )
        goto LABEL_27;
      if ( v4 >= LODWORD(touches->max_length) )
LABEL_28:
        sub_1C7BD48(touches);
      touches = (UnityEngine_Touch_array *)UnityEngine_Touch__get_fingerId(
                                             (UnityEngine_Touch_o *)((char *)touches + v9),
                                             0);
      if ( !v11 )
LABEL_27:
        sub_1C7BD40(touches, v8);
      if ( !System_Collections_Generic_List_int___Contains(
              v11,
              (int32_t)touches,
              (const MethodInfo_3822150 *)Method_System_Collections_Generic_List_int__Contains__) )
        break;
      ++v4;
      v9 += 68;
      if ( (__int64)v4 >= UnityEngine_Input__get_touchCount(0) )
        goto LABEL_25;
    }
  }
  return v4;
}


void CTouch__SetClassEnabled(bool isEnabled, const MethodInfo *method)
{
  CTouch_c *v3; // x0

  if ( (byte_4CF2B96 & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    byte_4CF2B96 = 1;
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

  if ( (byte_4CF2B97 & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    byte_4CF2B97 = 1;
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

  if ( (byte_4CF2B9C & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    sub_1C7BAE8(&CTouch_TouchEventHandler_TypeInfo);
    byte_4CF2B9C = 1;
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
    v8 = sub_1CD78BC(&v7->static_fields->MOnTouchPressEvent, v6, MOnTouchPressEvent);
    v9 = MOnTouchPressEvent == (System_Delegate_o *)v8;
    MOnTouchPressEvent = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C7C0DC(v5);
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

  if ( (byte_4CF2B98 & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    sub_1C7BAE8(&CTouch_TouchEventHandler_TypeInfo);
    byte_4CF2B98 = 1;
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
    v8 = sub_1CD78BC(&v7->static_fields->MOnTouchReleaseEvent, v6, MOnTouchReleaseEvent);
    v9 = MOnTouchReleaseEvent == (System_Delegate_o *)v8;
    MOnTouchReleaseEvent = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C7C0DC(v5);
  CTouch__remove_MOnTouchReleaseEvent(v10, v11);
}


void CTouch__add_OnTouchPressEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  if ( (byte_4CF2B9E & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    byte_4CF2B9E = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__add_MOnTouchPressEvent(value, method);
}


void CTouch__add_OnTouchReleaseEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  if ( (byte_4CF2B9A & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    byte_4CF2B9A = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__add_MOnTouchReleaseEvent(value, method);
}


int32_t CTouch__getDragFrameCnt(const MethodInfo *method)
{
  CTouch_c *v1; // x0

  if ( (byte_4CF2BB0 & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    byte_4CF2BB0 = 1;
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

  if ( (byte_4CF2BAC & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    byte_4CF2BAC = 1;
  }
  v1 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !CTouch__isFlick((const MethodInfo *)v1) )
    return 0;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !byte_4CEAD80 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    byte_4CEAD80 = 1;
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
  if ( !byte_4CE7D39 )
  {
    sub_1C7BAE8(&UnityEngine_Vector2_TypeInfo);
    byte_4CE7D39 = 1;
  }
  v6 = -1.0;
  v7 = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector.fields.y;
  if ( x >= 0.0 )
  {
    v6 = 1.0;
    if ( x <= 0.0 )
      return 0;
  }
  if ( !byte_4CE7E5A )
  {
    sub_1C7BAE8(&System_Math_TypeInfo);
    byte_4CE7E5A = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v8 = sqrtf((float)(x * x) + (float)(y * y));
  if ( v8 <= 0.00001 )
  {
    if ( !byte_4CE7D39 )
    {
      sub_1C7BAE8(&UnityEngine_Vector2_TypeInfo);
      byte_4CE7D39 = 1;
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
  if ( !byte_4CE7E5A )
  {
    sub_1C7BAE8(&System_Math_TypeInfo);
    byte_4CE7E5A = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v12 = sqrtf((float)(v7 * v7) + (float)(v6 * v6));
  if ( v12 <= 0.00001 )
  {
    if ( !byte_4CE7D39 )
    {
      sub_1C7BAE8(&UnityEngine_Vector2_TypeInfo);
      byte_4CE7D39 = 1;
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

  if ( (byte_4CF2BAD & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    byte_4CF2BAD = 1;
  }
  v1 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !CTouch__isFlick((const MethodInfo *)v1) )
    return 0;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !byte_4CEAD80 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    byte_4CEAD80 = 1;
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
  if ( !byte_4CE7D39 )
  {
    sub_1C7BAE8(&UnityEngine_Vector2_TypeInfo);
    byte_4CE7D39 = 1;
  }
  v6 = -1.0;
  v7 = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector.fields.x;
  if ( y <= 0.0 )
  {
    v6 = 1.0;
    if ( y >= 0.0 )
      return 0;
  }
  if ( !byte_4CE7E5A )
  {
    sub_1C7BAE8(&System_Math_TypeInfo);
    byte_4CE7E5A = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v8 = sqrtf((float)(x * x) + (float)(y * y));
  if ( v8 <= 0.00001 )
  {
    if ( !byte_4CE7D39 )
    {
      sub_1C7BAE8(&UnityEngine_Vector2_TypeInfo);
      byte_4CE7D39 = 1;
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
  if ( !byte_4CE7E5A )
  {
    sub_1C7BAE8(&System_Math_TypeInfo);
    byte_4CE7E5A = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v12 = sqrtf((float)(v7 * v7) + (float)(v6 * v6));
  if ( v12 <= 0.00001 )
  {
    if ( !byte_4CE7D39 )
    {
      sub_1C7BAE8(&UnityEngine_Vector2_TypeInfo);
      byte_4CE7D39 = 1;
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

  if ( (byte_4CF2BB1 & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    byte_4CF2BB1 = 1;
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

  if ( (byte_4CF2BB7 & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    byte_4CF2BB7 = 1;
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

  if ( (byte_4CF2BB9 & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    byte_4CF2BB9 = 1;
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

  if ( (byte_4CF2BBA & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    byte_4CF2BBA = 1;
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

  if ( (byte_4CF2BB8 & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    byte_4CF2BB8 = 1;
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

  if ( (byte_4CF2BB3 & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    byte_4CF2BB3 = 1;
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


UnityEngine_Vector2_o CTouch__getScreenPosition_49569152(UnityEngine_Vector2_o tch_pos, const MethodInfo *method)
{
  const MethodInfo *v2; // x1
  float y; // s8
  float x; // s9
  CTouch_c *v5; // x0
  float v6; // s0
  float v7; // s1
  UnityEngine_Vector2_o ScreenPosition_49569264; // kr00_8
  UnityEngine_Vector2_o v9; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  y = tch_pos.fields.y;
  x = tch_pos.fields.x;
  if ( (byte_4CF2BB4 & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    byte_4CF2BB4 = 1;
  }
  v5 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v5 = CTouch_TypeInfo;
  }
  v9.fields.x = x;
  v9.fields.y = y;
  ScreenPosition_49569264 = CTouch__getScreenPosition_49569264(v9, v5->static_fields->mScreenCam, v2);
  v7 = ScreenPosition_49569264.fields.y;
  v6 = ScreenPosition_49569264.fields.x;
  result.fields.y = v7;
  result.fields.x = v6;
  return result;
}


UnityEngine_Vector2_o CTouch__getScreenPosition_49569264(
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
  if ( (byte_4CF2BB6 & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CF2BB6 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0, 0) || x == 3.4028e38 || y == 3.4028e38 )
  {
    if ( !byte_4CE7D39 )
    {
      sub_1C7BAE8(&UnityEngine_Vector2_TypeInfo);
      byte_4CE7D39 = 1;
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
    UnityEngine_Camera__ScreenPointToRay_71675208(&v17, mScreenCam, v19, 0);
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
      sub_1C7BD40(mScreenCam, v6);
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


UnityEngine_Vector2_o CTouch__getScreenPosition_49569656(UnityEngine_Camera_o *cam, const MethodInfo *method)
{
  CTouch_c *v2; // x0
  const MethodInfo *v3; // x1
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o ScreenPosition_49569264; // kr00_8
  UnityEngine_Vector2_o TouchPos; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4CF2BB5 & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    byte_4CF2BB5 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  TouchPos = CTouch__GetTouchPos((const MethodInfo *)v2);
  ScreenPosition_49569264 = CTouch__getScreenPosition_49569264(TouchPos, CTouch_TypeInfo->static_fields->mScreenCam, v3);
  y = ScreenPosition_49569264.fields.y;
  x = ScreenPosition_49569264.fields.x;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


int32_t CTouch__getTouchState(const MethodInfo *method)
{
  CTouch_c *v1; // x0

  if ( (byte_4CF2BA5 & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    byte_4CF2BA5 = 1;
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

  if ( (byte_4CF2BA1 & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    byte_4CF2BA1 = 1;
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

  if ( (byte_4CF2BAF & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    byte_4CF2BAF = 1;
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

  if ( (byte_4CF2BAE & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    byte_4CF2BAE = 1;
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

  if ( (byte_4CF2BAA & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    byte_4CF2BAA = 1;
  }
  v1 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v1 = CTouch_TypeInfo;
  }
  return CTouch__isFlick_49566480(v1->static_fields->FLICK_LEN, (const MethodInfo *)v1);
}


bool CTouch__isFlick_49566480(float flickLen, const MethodInfo *method)
{
  CTouch_c *v3; // x0
  CTouch_c *v4; // x0

  if ( (byte_4CF2BAB & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    byte_4CF2BAB = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !CTouch__isTouchRelease((const MethodInfo *)v3) )
    return 0;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  if ( !byte_4CF2BC5 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    byte_4CF2BC5 = 1;
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

  if ( (byte_4CF2BA8 & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    byte_4CF2BA8 = 1;
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

  if ( (byte_4CF2BA6 & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    byte_4CF2BA6 = 1;
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

  if ( (byte_4CF2BA7 & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    byte_4CF2BA7 = 1;
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

  if ( (byte_4CF2BA9 & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    byte_4CF2BA9 = 1;
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

  if ( (byte_4CF2BA4 & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    byte_4CF2BA4 = 1;
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
  const MethodInfo *v10; // x0
  UnityEngine_Vector2_o ScreenPosition_49569152; // kr08_8
  CTouch_c *v12; // x0
  __int64 v13; // x8
  const MethodInfo *touchCount; // x0
  CTouch_c *v15; // x8
  struct CTouch_StaticFields *static_fields; // x9
  struct UnityEngine_Vector2_o mPosNow; // x10
  UnityEngine_Vector2_o v18; // kr10_8
  CTouch_c *v19; // x0
  UnityEngine_Vector2_c *v20; // x8
  struct CTouch_StaticFields *v21; // x9
  struct CTouch_TouchEventHandler_o *MOnTouchPressEvent; // x8
  __int64 v23; // x8
  __int64 v24; // x8
  __int64 v25; // x8
  __int64 v26; // x8
  CTouch_c *v27; // x0
  struct CTouch_StaticFields *v28; // x9
  struct CTouch_TouchEventHandler_o *MOnTouchReleaseEvent; // x8
  CTouch_c *v30; // x0
  _BOOL8 isTouchKeep; // x0
  CTouch_c *v32; // x8
  struct CTouch_StaticFields *v33; // x9
  int32_t *p_mDragFrameCnt; // x9
  int32_t v35; // w10
  int32_t mDragFrameCnt; // t1
  struct CTouch_StaticFields *v37; // x9
  int32_t v38; // t1
  bool v39; // w0
  CTouch_c *v40; // x8
  struct CTouch_StaticFields *v41; // x9
  float32x2_t v42; // d8
  float32x2_t v43; // d9
  float32x2_t v44; // d8
  float v45; // s1
  struct CTouch_StaticFields *v46; // x9
  float DRAG_LEN; // s0
  struct CTouch_StaticFields *v48; // x8
  float mScrPosDeltaLen; // s0
  float32x2_t v50; // d8
  float32x2_t v51; // d0
  CTouch_c *v52; // x0
  struct CTouch_StaticFields *v53; // x20
  float y; // s8
  float x; // s9
  _BYTE v56[72]; // [xsp+8h] [xbp-118h] BYREF
  UnityEngine_Touch_o src; // [xsp+50h] [xbp-D0h] BYREF
  _BYTE dest[72]; // [xsp+98h] [xbp-88h] BYREF

  if ( (byte_4CF2BBB & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    byte_4CF2BBB = 1;
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
    p_image = memcpy(v56, dest, 0x44u);
    if ( !LODWORD(mTouch->max_length) )
      goto LABEL_122;
    memcpy(mTouch->m_Items, v56, 0x44u);
LABEL_17:
    v10 = (const MethodInfo *)CTouch_TypeInfo;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      v10 = (const MethodInfo *)CTouch_TypeInfo;
    }
    *(_QWORD *)((char *)v10[2].virtualMethodPointer + 68) = *(_QWORD *)((char *)v10[2].virtualMethodPointer + 52);
    ScreenPosition_49569152 = CTouch__getScreenPosition_49569152(
                                *(UnityEngine_Vector2_o *)((char *)v10[2].virtualMethodPointer + 32),
                                v10);
    v12 = CTouch_TypeInfo;
    CTouch_TypeInfo->static_fields->mScrPosNow = ScreenPosition_49569152;
    if ( v12->static_fields->mIsTchNow )
      goto LABEL_40;
    if ( !v12->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v12);
    if ( CTouch__GetValidTouchCount((const MethodInfo *)v12) != 1 )
      goto LABEL_40;
    if ( UnityEngine_Input__get_touchCount(0) >= 1 )
    {
      p_image = &CTouch_TypeInfo->_1.image;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        p_image = &CTouch_TypeInfo->_1.image;
      }
      v13 = *(_QWORD *)(p_image[23] + 8LL);
      if ( !v13 )
        goto LABEL_121;
      if ( !*(_DWORD *)(v13 + 24) )
        goto LABEL_122;
      if ( !UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v13 + 32), 0) )
        goto LABEL_30;
    }
    if ( !UnityEngine_Input__GetMouseButtonDown(0, 0) )
    {
LABEL_40:
      v19 = CTouch_TypeInfo;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v19 = CTouch_TypeInfo;
      }
      if ( v19->static_fields->mIsTchNow )
      {
        if ( !v19->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v19);
        if ( CTouch__GetValidTouchCount((const MethodInfo *)v19) == 1 )
        {
          p_image = &CTouch_TypeInfo->_1.image;
          if ( !CTouch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
            p_image = &CTouch_TypeInfo->_1.image;
          }
          v23 = *(_QWORD *)(p_image[23] + 8LL);
          if ( !v23 )
            goto LABEL_121;
          if ( !*(_DWORD *)(v23 + 24) )
            goto LABEL_122;
          if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v23 + 32), 0) == 1 )
            goto LABEL_59;
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
          if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v24 + 32), 0) == 2 )
            goto LABEL_59;
        }
        v19 = CTouch_TypeInfo;
        if ( !CTouch_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
          v19 = CTouch_TypeInfo;
        }
        if ( v19->static_fields->mIsTchMouseNow )
        {
LABEL_59:
          v19 = CTouch_TypeInfo;
          if ( !CTouch_TypeInfo->_2.cctor_finished )
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
LABEL_30:
      touchCount = (const MethodInfo *)UnityEngine_Input__get_touchCount(0);
      v15 = CTouch_TypeInfo;
      if ( !(_DWORD)touchCount )
      {
        if ( !CTouch_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
          v15 = CTouch_TypeInfo;
        }
        v15->static_fields->mIsTchMouseNow = 1;
      }
      if ( !v15->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v15);
        v15 = CTouch_TypeInfo;
      }
      static_fields = v15->static_fields;
      mPosNow = static_fields->mPosNow;
      static_fields->mIsTchNow = 1;
      static_fields->mState = 1;
      static_fields->mPosPush = mPosNow;
      v18 = CTouch__getScreenPosition_49569152(v15->static_fields->mPosPush, touchCount);
      v19 = CTouch_TypeInfo;
      CTouch_TypeInfo->static_fields->mScrPosPush = v18;
      v19->static_fields->mScrPosOld = v19->static_fields->mScrPosNow;
      if ( !byte_4CE7D39 )
      {
        sub_1C7BAE8(&UnityEngine_Vector2_TypeInfo);
        v19 = CTouch_TypeInfo;
        byte_4CE7D39 = 1;
      }
      v20 = UnityEngine_Vector2_TypeInfo;
      v19->static_fields->mScrPosDeltaOld = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
      v19->static_fields->mScrPosDelta = v20->static_fields->zeroVector;
      v21 = v19->static_fields;
      MOnTouchPressEvent = v21->MOnTouchPressEvent;
      *(_QWORD *)&v21->mDragFrameCnt = 0xFFFFFFFFLL;
      if ( MOnTouchPressEvent )
      {
        ((void (__fastcall *)(intptr_t, intptr_t))MOnTouchPressEvent->fields.invoke_impl)(
          MOnTouchPressEvent->fields.method_code,
          MOnTouchPressEvent->fields.method);
        v19 = CTouch_TypeInfo;
      }
    }
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = CTouch_TypeInfo;
    }
    if ( !v19->static_fields->mIsTchNow )
      goto LABEL_83;
    if ( !v19->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v19);
    if ( CTouch__GetValidTouchCount((const MethodInfo *)v19) != 1 )
    {
LABEL_78:
      if ( !UnityEngine_Input__GetMouseButtonUp(0, 0) )
      {
LABEL_83:
        v30 = CTouch_TypeInfo;
        if ( !CTouch_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        isTouchKeep = CTouch__isTouchKeep((const MethodInfo *)v30);
        v32 = CTouch_TypeInfo;
        if ( isTouchKeep )
        {
          if ( !CTouch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
            v32 = CTouch_TypeInfo;
          }
          v33 = v32->static_fields;
          mDragFrameCnt = v33->mDragFrameCnt;
          p_mDragFrameCnt = &v33->mDragFrameCnt;
          v35 = mDragFrameCnt;
          if ( (mDragFrameCnt & 0x80000000) == 0 )
          {
            if ( !v32->_2.cctor_finished )
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
        if ( !v32->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v32);
        v39 = CTouch__isTouchKeep((const MethodInfo *)isTouchKeep);
        v40 = CTouch_TypeInfo;
        if ( v39 )
        {
          if ( !CTouch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
            v40 = CTouch_TypeInfo;
          }
          v41 = v40->static_fields;
          if ( v41->mDragFrameCnt < 0 )
          {
            if ( !v40->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v40);
              v41 = CTouch_TypeInfo->static_fields;
            }
            v42.n64_u64[0] = (unsigned __int64)v41->mScrPosNow;
            v43.n64_u64[0] = (unsigned __int64)v41->mScrPosPush;
            if ( !byte_4CE7E5A )
            {
              sub_1C7BAE8(&System_Math_TypeInfo);
              byte_4CE7E5A = 1;
            }
            v44.n64_u64[0] = vsub_f32(v42, v43).n64_u64[0];
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            v40 = CTouch_TypeInfo;
            v45 = sqrtf(vaddv_f32(vmul_f32(v44, v44)));
            v46 = CTouch_TypeInfo->static_fields;
            DRAG_LEN = v46->DRAG_LEN;
            v46->mDragLen = v45;
            if ( v45 >= DRAG_LEN )
            {
              if ( !v40->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v40);
                v40 = CTouch_TypeInfo;
                v46 = CTouch_TypeInfo->static_fields;
              }
              v46->mDragFrameCnt = 0;
            }
          }
        }
        if ( !v40->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v40);
          v40 = CTouch_TypeInfo;
        }
        v40->static_fields->mScrPosDeltaOld = v40->static_fields->mScrPosDelta;
        v40->static_fields->mScrPosDelta = (struct UnityEngine_Vector2_o)vsub_f32(
                                                                           (float32x2_t)v40->static_fields->mScrPosNow,
                                                                           (float32x2_t)v40->static_fields->mScrPosOld).n64_u64[0];
        v48 = v40->static_fields;
        mScrPosDeltaLen = v48->mScrPosDeltaLen;
        v48->mScrPosDeltaLen = 0.0;
        v50.n64_u64[0] = (unsigned __int64)v48->mScrPosDelta;
        v48->mScrPosDeltaLenOld = mScrPosDeltaLen;
        if ( !byte_4CE7D39 )
        {
          sub_1C7BAE8(&UnityEngine_Vector2_TypeInfo);
          byte_4CE7D39 = 1;
        }
        v51.n64_u64[0] = vsub_f32(v50, (float32x2_t)UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).n64_u64[0];
        if ( vaddv_f32(vmul_f32(v51, v51)) >= 1.0e-10 )
        {
          v52 = CTouch_TypeInfo;
          if ( !CTouch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
            v52 = CTouch_TypeInfo;
          }
          v53 = v52->static_fields;
          if ( !byte_4CE7E5A )
          {
            sub_1C7BAE8(&System_Math_TypeInfo);
            byte_4CE7E5A = 1;
          }
          x = v53->mScrPosDelta.fields.x;
          y = v53->mScrPosDelta.fields.y;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          CTouch_TypeInfo->static_fields->mScrPosDeltaLen = sqrtf((float)(x * x) + (float)(y * y));
        }
        return;
      }
LABEL_79:
      v27 = CTouch_TypeInfo;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v27 = CTouch_TypeInfo;
      }
      v28 = v27->static_fields;
      MOnTouchReleaseEvent = v28->MOnTouchReleaseEvent;
      *(_WORD *)&v28->mIsTchNow = 0;
      v28->mState = 3;
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
    v25 = *(_QWORD *)(p_image[23] + 8LL);
    if ( v25 )
    {
      if ( !*(_DWORD *)(v25 + 24) )
        goto LABEL_122;
      if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v25 + 32), 0) == 3 )
        goto LABEL_79;
      p_image = &CTouch_TypeInfo->_1.image;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        p_image = &CTouch_TypeInfo->_1.image;
      }
      v26 = *(_QWORD *)(p_image[23] + 8LL);
      if ( v26 )
      {
        if ( *(_DWORD *)(v26 + 24) )
        {
          if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v26 + 32), 0) == 4 )
            goto LABEL_79;
          goto LABEL_78;
        }
LABEL_122:
        sub_1C7BD48(p_image);
      }
    }
LABEL_121:
    sub_1C7BD40(p_image, v9);
  }
}


void CTouch__reboot(const MethodInfo *method)
{
  CTouch_c *v1; // x0

  if ( (byte_4CF2BA0 & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    byte_4CF2BA0 = 1;
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

  if ( (byte_4CF2B9D & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    sub_1C7BAE8(&CTouch_TouchEventHandler_TypeInfo);
    byte_4CF2B9D = 1;
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
    v8 = sub_1CD78BC(&v7->static_fields->MOnTouchPressEvent, v6, MOnTouchPressEvent);
    v9 = MOnTouchPressEvent == (System_Delegate_o *)v8;
    MOnTouchPressEvent = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C7C0DC(v5);
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

  if ( (byte_4CF2B99 & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    sub_1C7BAE8(&CTouch_TouchEventHandler_TypeInfo);
    byte_4CF2B99 = 1;
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
    v8 = sub_1CD78BC(&v7->static_fields->MOnTouchReleaseEvent, v6, MOnTouchReleaseEvent);
    v9 = MOnTouchReleaseEvent == (System_Delegate_o *)v8;
    MOnTouchReleaseEvent = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C7C0DC(v5);
  CTouch__add_OnTouchReleaseEvent(v10, v11);
}


void CTouch__remove_OnTouchPressEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  if ( (byte_4CF2B9F & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    byte_4CF2B9F = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__remove_MOnTouchPressEvent(value, method);
}


void CTouch__remove_OnTouchReleaseEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  if ( (byte_4CF2B9B & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    byte_4CF2B9B = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  CTouch__remove_MOnTouchReleaseEvent(value, method);
}


void CTouch__setParam(float flickLen, float dragLen, UnityEngine_Camera_o *screenCam, const MethodInfo *method)
{
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  CTouch_c *v13; // x0
  struct CTouch_StaticFields *static_fields; // x8
  struct CTouch_StaticFields *v15; // x0

  if ( (byte_4CF2BA2 & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    byte_4CF2BA2 = 1;
  }
  v13 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v13 = CTouch_TypeInfo;
  }
  static_fields = v13->static_fields;
  if ( static_fields->mIsInitDone )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = CTouch_TypeInfo;
      static_fields = CTouch_TypeInfo->static_fields;
    }
    static_fields->FLICK_LEN = flickLen;
    static_fields->DRAG_LEN = dragLen;
    if ( !byte_4CE8A18 )
    {
      sub_1C7BAE8(&CTouch_TypeInfo);
      v13 = CTouch_TypeInfo;
      byte_4CE8A18 = 1;
    }
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      v13 = CTouch_TypeInfo;
    }
    v15 = v13->static_fields;
    v15->mScreenCam = screenCam;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v15->mScreenCam, (int32_t)screenCam, v4, v5, v6, v7, v8, v9);
  }
}


void CTouch__setScreenCamera(UnityEngine_Camera_o *cam, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  CTouch_c *v9; // x0
  struct CTouch_StaticFields *static_fields; // x0

  if ( (byte_4CF2BA3 & 1) == 0 )
  {
    sub_1C7BAE8(&CTouch_TypeInfo);
    byte_4CF2BA3 = 1;
  }
  v9 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v9 = CTouch_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->mScreenCam = cam;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->mScreenCam, (int32_t)cam, v2, v3, v4, v5, v6, v7);
}


void CTouch_TouchEventHandler___ctor(
        CTouch_TouchEventHandler_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AB7CC8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AB7C88;
}


System_IAsyncResult_o *CTouch_TouchEventHandler__BeginInvoke(
        CTouch_TouchEventHandler_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, &v5, callback, object);
}


void CTouch_TouchEventHandler__EndInvoke(
        CTouch_TouchEventHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
}


void CTouch_TouchEventHandler__Invoke(CTouch_TouchEventHandler_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}