void CTouch___cctor(const MethodInfo *method)
{
  Il2CppClass *v1; // x0
  __int64 v2; // x0
  struct CTouch_StaticFields *static_fields; // x8
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_List_int__o *v10; // x19
  struct CTouch_StaticFields *v11; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct CTouch_StaticFields *v18; // x8

  if ( (byte_593CC17 & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&UnityEngine_Touch___TypeInfo);
    byte_593CC17 = 1;
  }
  v1 = UnityEngine_Touch___TypeInfo;
  *(_QWORD *)&CTouch_TypeInfo->static_fields->FLICK_LEN = 0x4170000040A00000LL;
  v2 = sub_21FFD10(v1, 1);
  static_fields = CTouch_TypeInfo->static_fields;
  static_fields->mTouch = (struct UnityEngine_Touch_array *)v2;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->mTouch, v2, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v10,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  v11 = CTouch_TypeInfo->static_fields;
  v11->ignoreFingerIDList = v10;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v11->ignoreFingerIDList, (int32_t)v10, v12, v13, v14, v15, v16, v17);
  v18 = CTouch_TypeInfo->static_fields;
  *(_WORD *)&v18->mIsTchNow = 0;
  v18->mState = 0;
  v18->mDragFrameCnt = -1;
  v18->mIsClassEnabled = 0;
}


System_Collections_Generic_List_int__o *CTouch__GetIgnoreFingerIDList(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0

  if ( (byte_593CC15 & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    byte_593CC15 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
    v2 = CTouch_TypeInfo;
  }
  return v2->static_fields->ignoreFingerIDList;
}


UnityEngine_Vector2_o CTouch__GetTouchPos(const MethodInfo *method)
{
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  __int64 v4; // x1
  CTouch_c *v5; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  int32_t ValidTouchLastID; // w0
  UnityEngine_Vector2_o position; // kr00_8
  struct UnityEngine_Vector2_StaticFields *v10; // x8
  float v11; // s0
  float v12; // s1
  UnityEngine_Touch_o src; // [xsp+Ch] [xbp-C4h] BYREF
  UnityEngine_Touch_o dest; // [xsp+50h] [xbp-80h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_593CC0A & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    byte_593CC0A = 1;
  }
  memset(&dest, 0, sizeof(dest));
  if ( !byte_5931820 )
  {
    sub_21FFC50(&UnityEngine_Vector2_TypeInfo);
    byte_5931820 = 1;
  }
  static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  if ( UnityEngine_Input__get_touchCount(0) >= 1 )
  {
    v5 = CTouch_TypeInfo;
    if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v4);
    if ( CTouch__GetValidTouchCount((const MethodInfo *)v5) == 1 )
    {
      if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v6);
      if ( CTouch__GetValidTouchLastID(1, v6) < 0 )
      {
        if ( !byte_5931820 )
        {
          sub_21FFC50(&UnityEngine_Vector2_TypeInfo);
          byte_5931820 = 1;
        }
        v10 = UnityEngine_Vector2_TypeInfo->static_fields;
        x = v10->zeroVector.fields.x;
        y = v10->zeroVector.fields.y;
      }
      else
      {
        if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v7);
        ValidTouchLastID = CTouch__GetValidTouchLastID(1, v7);
        UnityEngine_Input__GetTouch(&src, ValidTouchLastID, 0);
        memcpy(&dest, &src, sizeof(dest));
        position = UnityEngine_Touch__get_position(&dest, 0);
        x = position.fields.x;
        y = position.fields.y;
      }
    }
  }
  v11 = x;
  v12 = y;
  result.fields.y = v12;
  result.fields.x = v11;
  return result;
}


int32_t CTouch__GetValidTouchCount(const MethodInfo *method)
{
  __int64 touchCount; // x0
  __int64 v2; // x1
  CTouch_c *v3; // x8
  int v4; // w19
  struct System_Collections_Generic_List_int__o *ignoreFingerIDList; // x8

  if ( (byte_593CC14 & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Count__);
    byte_593CC14 = 1;
  }
  touchCount = UnityEngine_Input__get_touchCount(0);
  v3 = CTouch_TypeInfo;
  v4 = touchCount;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v2);
    v3 = CTouch_TypeInfo;
  }
  ignoreFingerIDList = v3->static_fields->ignoreFingerIDList;
  if ( !ignoreFingerIDList )
    sub_21FFECC(touchCount, v2);
  return v4 - ignoreFingerIDList->fields._size;
}


int32_t CTouch__GetValidTouchLastID(bool isReverse, const MethodInfo *method)
{
  CTouch_c *v3; // x0
  __int64 v4; // x1
  unsigned __int64 v5; // x19
  int i; // w23
  CTouch_c *v7; // x0
  System_Collections_Generic_List_int__o *ignoreFingerIDList; // x20
  UnityEngine_Touch_array *touches; // x0
  __int64 v10; // x1
  __int64 v11; // x23
  CTouch_c *v12; // x0
  System_Collections_Generic_List_int__o *v13; // x20

  if ( (byte_593CC16 & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    byte_593CC16 = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
  if ( CTouch__GetValidTouchCount((const MethodInfo *)v3) < 1 )
  {
    LODWORD(v5) = -1;
  }
  else
  {
    LODWORD(v5) = UnityEngine_Input__get_touchCount(0);
    if ( isReverse )
    {
      for ( i = v5 - 1; ; --i )
      {
        LODWORD(v5) = v5 - 1;
        if ( (v5 & 0x80000000) != 0LL )
          break;
        v7 = CTouch_TypeInfo;
        if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v4);
          v7 = CTouch_TypeInfo;
        }
        ignoreFingerIDList = v7->static_fields->ignoreFingerIDList;
        touches = UnityEngine_Input__get_touches(0);
        if ( !touches )
          goto LABEL_28;
        if ( (unsigned int)v5 >= LODWORD(touches->max_length) )
          goto LABEL_29;
        touches = (UnityEngine_Touch_array *)UnityEngine_Touch__get_fingerId(&touches->m_Items[i], 0);
        if ( !ignoreFingerIDList )
          goto LABEL_28;
        if ( !System_Collections_Generic_List_int___Contains(
                ignoreFingerIDList,
                (int32_t)touches,
                (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__) )
          return v5;
      }
      goto LABEL_26;
    }
    if ( (int)v5 < 1 )
    {
LABEL_26:
      LODWORD(v5) = 0;
      return v5;
    }
    v5 = 0;
    v11 = 32;
    while ( 1 )
    {
      v12 = CTouch_TypeInfo;
      if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v4);
        v12 = CTouch_TypeInfo;
      }
      v13 = v12->static_fields->ignoreFingerIDList;
      touches = UnityEngine_Input__get_touches(0);
      if ( !touches )
        goto LABEL_28;
      if ( v5 >= LODWORD(touches->max_length) )
LABEL_29:
        sub_21FFED4(touches);
      touches = (UnityEngine_Touch_array *)UnityEngine_Touch__get_fingerId(
                                             (UnityEngine_Touch_o *)((char *)touches + v11),
                                             0);
      if ( !v13 )
LABEL_28:
        sub_21FFECC(touches, v10);
      if ( !System_Collections_Generic_List_int___Contains(
              v13,
              (int32_t)touches,
              (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__) )
        break;
      ++v5;
      v11 += 68;
      if ( (__int64)v5 >= UnityEngine_Input__get_touchCount(0) )
        goto LABEL_26;
    }
  }
  return v5;
}


void CTouch__SetClassEnabled(bool isEnabled, const MethodInfo *method)
{
  CTouch_c *v3; // x0

  if ( (byte_593CBEE & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    byte_593CBEE = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
    v3 = CTouch_TypeInfo;
  }
  v3->static_fields->mIsClassEnabled = isEnabled;
}


void CTouch__SetMultiTouchEnabled(bool isEnabled, const MethodInfo *method)
{
  CTouch_c *v3; // x0

  if ( (byte_593CBEF & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    byte_593CBEF = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
    v3 = CTouch_TypeInfo;
  }
  v3->static_fields->mIsReqMultiTouchEnabled = isEnabled;
}


void CTouch__add_MOnTouchPressEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  CTouch_c *v3; // x0
  System_Delegate_o *MOnTouchPressEvent; // x20
  System_Delegate_o *v5; // x0
  CTouch_TouchEventHandler_c *v6; // x1
  __int64 v7; // x2
  System_Delegate_o *v8; // x21
  CTouch_c *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  CTouch_TouchEventHandler_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_593CBF4 & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    sub_21FFC50(&CTouch_TouchEventHandler_TypeInfo);
    byte_593CBF4 = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
    v3 = CTouch_TypeInfo;
  }
  MOnTouchPressEvent = (System_Delegate_o *)v3->static_fields->MOnTouchPressEvent;
  while ( 1 )
  {
    v5 = System_Delegate__Combine(MOnTouchPressEvent, (System_Delegate_o *)value, 0);
    v8 = v5;
    if ( v5 )
    {
      v6 = CTouch_TouchEventHandler_TypeInfo;
      if ( (CTouch_TouchEventHandler_c *)v5->klass != CTouch_TouchEventHandler_TypeInfo )
        break;
    }
    v9 = CTouch_TypeInfo;
    if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v6);
      v9 = CTouch_TypeInfo;
    }
    v10 = sub_223767C(&v9->static_fields->MOnTouchPressEvent, v8, MOnTouchPressEvent);
    v11 = v10 == (_QWORD)MOnTouchPressEvent;
    MOnTouchPressEvent = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_220024C(v5, CTouch_TouchEventHandler_TypeInfo, v7);
  CTouch__remove_MOnTouchPressEvent(v12, v13);
}


void CTouch__add_MOnTouchReleaseEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  CTouch_c *v3; // x0
  System_Delegate_o *MOnTouchReleaseEvent; // x20
  System_Delegate_o *v5; // x0
  CTouch_TouchEventHandler_c *v6; // x1
  __int64 v7; // x2
  System_Delegate_o *v8; // x21
  CTouch_c *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  CTouch_TouchEventHandler_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_593CBF0 & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    sub_21FFC50(&CTouch_TouchEventHandler_TypeInfo);
    byte_593CBF0 = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
    v3 = CTouch_TypeInfo;
  }
  MOnTouchReleaseEvent = (System_Delegate_o *)v3->static_fields->MOnTouchReleaseEvent;
  while ( 1 )
  {
    v5 = System_Delegate__Combine(MOnTouchReleaseEvent, (System_Delegate_o *)value, 0);
    v8 = v5;
    if ( v5 )
    {
      v6 = CTouch_TouchEventHandler_TypeInfo;
      if ( (CTouch_TouchEventHandler_c *)v5->klass != CTouch_TouchEventHandler_TypeInfo )
        break;
    }
    v9 = CTouch_TypeInfo;
    if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v6);
      v9 = CTouch_TypeInfo;
    }
    v10 = sub_223767C(&v9->static_fields->MOnTouchReleaseEvent, v8, MOnTouchReleaseEvent);
    v11 = v10 == (_QWORD)MOnTouchReleaseEvent;
    MOnTouchReleaseEvent = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_220024C(v5, CTouch_TouchEventHandler_TypeInfo, v7);
  CTouch__remove_MOnTouchReleaseEvent(v12, v13);
}


void CTouch__add_OnTouchPressEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  if ( (byte_593CBF6 & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    byte_593CBF6 = 1;
  }
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
  CTouch__add_MOnTouchPressEvent(value, method);
}


void CTouch__add_OnTouchReleaseEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  if ( (byte_593CBF2 & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    byte_593CBF2 = 1;
  }
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
  CTouch__add_MOnTouchReleaseEvent(value, method);
}


int32_t CTouch__getDragFrameCnt(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0

  if ( (byte_593CC08 & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    byte_593CC08 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
    v2 = CTouch_TypeInfo;
  }
  return v2->static_fields->mDragFrameCnt;
}


int32_t CTouch__getFlickDirX(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0
  __int64 v3; // x1
  CTouch_c *v4; // x0
  float32x2_t v5; // d1
  float v6; // s2
  float y; // s3
  __n128 inited; // q0
  struct UnityEngine_Vector2_o zeroVector; // d8
  struct UnityEngine_Vector2_o v10; // d0
  unsigned __int64 v12; // [xsp+0h] [xbp-70h]
  float v13; // [xsp+10h] [xbp-60h]
  float v14; // [xsp+20h] [xbp-50h]

  if ( (byte_593CC04 & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    byte_593CC04 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
  if ( !CTouch__isFlick((const MethodInfo *)v2) )
    return 0;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v3);
  if ( !byte_5934CC5 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    byte_5934CC5 = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v3);
    v4 = CTouch_TypeInfo;
  }
  v5.n64_u64[0] = (unsigned __int64)v4->static_fields->mScrPosDelta;
  v12 = v5.n64_u64[0];
  if ( !byte_5931820 )
  {
    sub_21FFC50(&UnityEngine_Vector2_TypeInfo);
    v5.n64_u64[0] = v12;
    byte_5931820 = 1;
  }
  v6 = -1.0;
  y = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector.fields.y;
  if ( v5.n64_f32[0] >= 0.0 )
  {
    v6 = 1.0;
    if ( v5.n64_f32[0] <= 0.0 )
      return 0;
  }
  v13 = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector.fields.y;
  v14 = v6;
  if ( !byte_5931941 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    v5.n64_u64[0] = v12;
    y = v13;
    v6 = v14;
    byte_5931941 = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v3);
    v5.n64_u64[0] = v12;
    y = v13;
    v6 = v14;
  }
  inited.n128_u64[0] = vmul_f32(v5, v5).n64_u64[0];
  inited.n128_f32[0] = sqrtf(vaddv_f32((float32x2_t)inited.n128_u64[0]));
  if ( inited.n128_f32[0] <= 0.00001 )
  {
    if ( !byte_5931820 )
    {
      sub_21FFC50(&UnityEngine_Vector2_TypeInfo);
      y = v13;
      v6 = v14;
      byte_5931820 = 1;
    }
    zeroVector = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  }
  else
  {
    inited.n128_u64[0] = vdup_lane_s32((int32x2_t)inited.n128_u64[0], 0).n64_u64[0];
    zeroVector = (struct UnityEngine_Vector2_o)vdiv_f32(v5, (float32x2_t)inited.n128_u64[0]).n64_u64[0];
  }
  if ( !byte_5931941 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    y = v13;
    v6 = v14;
    byte_5931941 = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
  {
    inited = j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v3);
    y = v13;
    v6 = v14;
  }
  inited.n128_f32[0] = sqrtf((float)(y * y) + (float)(v6 * v6));
  if ( inited.n128_f32[0] <= 0.00001 )
  {
    if ( !byte_5931820 )
    {
      sub_21FFC50(&UnityEngine_Vector2_TypeInfo);
      v6 = v14;
      byte_5931820 = 1;
    }
    v10 = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  }
  else
  {
    v10 = (struct UnityEngine_Vector2_o)vdiv_f32(
                                          (float32x2_t)__PAIR64__(LODWORD(y), LODWORD(v6)),
                                          vdup_lane_s32((int32x2_t)inited.n128_u64[0], 0)).n64_u64[0];
  }
  if ( vaddv_f32(vmul_f32((float32x2_t)zeroVector, (float32x2_t)v10)) >= 0.75 )
    return (int)v6;
  else
    return 0;
}


int32_t CTouch__getFlickDirY(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0
  __int64 v3; // x1
  CTouch_c *v4; // x0
  float32x2_t v5; // d1
  float v6; // s2
  float32x2_t v7; // d3
  __n128 inited; // q0
  struct UnityEngine_Vector2_o zeroVector; // d8
  struct UnityEngine_Vector2_o v10; // d0
  unsigned __int64 v12; // [xsp+0h] [xbp-70h]
  float x; // [xsp+10h] [xbp-60h]
  float v14; // [xsp+20h] [xbp-50h]

  if ( (byte_593CC05 & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    byte_593CC05 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
  if ( !CTouch__isFlick((const MethodInfo *)v2) )
    return 0;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v3);
  if ( !byte_5934CC5 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    byte_5934CC5 = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v3);
    v4 = CTouch_TypeInfo;
  }
  v5.n64_u64[0] = (unsigned __int64)v4->static_fields->mScrPosDelta;
  v12 = v5.n64_u64[0];
  if ( !byte_5931820 )
  {
    sub_21FFC50(&UnityEngine_Vector2_TypeInfo);
    v5.n64_u64[0] = v12;
    byte_5931820 = 1;
  }
  v6 = -1.0;
  v7.n64_u32[0] = LODWORD(UnityEngine_Vector2_TypeInfo->static_fields->zeroVector.fields.x);
  if ( v5.n64_f32[1] <= 0.0 )
  {
    v6 = 1.0;
    if ( v5.n64_f32[1] >= 0.0 )
      return 0;
  }
  x = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector.fields.x;
  v14 = v6;
  if ( !byte_5931941 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    v5.n64_u64[0] = v12;
    v7.n64_f32[0] = x;
    v6 = v14;
    byte_5931941 = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v3);
    v5.n64_u64[0] = v12;
    v7.n64_f32[0] = x;
    v6 = v14;
  }
  inited.n128_u64[0] = vmul_f32(v5, v5).n64_u64[0];
  inited.n128_f32[0] = sqrtf(vaddv_f32((float32x2_t)inited.n128_u64[0]));
  if ( inited.n128_f32[0] <= 0.00001 )
  {
    if ( !byte_5931820 )
    {
      sub_21FFC50(&UnityEngine_Vector2_TypeInfo);
      v7.n64_f32[0] = x;
      v6 = v14;
      byte_5931820 = 1;
    }
    zeroVector = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  }
  else
  {
    inited.n128_u64[0] = vdup_lane_s32((int32x2_t)inited.n128_u64[0], 0).n64_u64[0];
    zeroVector = (struct UnityEngine_Vector2_o)vdiv_f32(v5, (float32x2_t)inited.n128_u64[0]).n64_u64[0];
  }
  if ( !byte_5931941 )
  {
    sub_21FFC50(&System_Math_TypeInfo);
    v7.n64_f32[0] = x;
    v6 = v14;
    byte_5931941 = 1;
  }
  if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
  {
    inited = j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v3);
    v7.n64_f32[0] = x;
    v6 = v14;
  }
  inited.n128_f32[0] = sqrtf((float)(v7.n64_f32[0] * v7.n64_f32[0]) + (float)(v6 * v6));
  if ( inited.n128_f32[0] <= 0.00001 )
  {
    if ( !byte_5931820 )
    {
      sub_21FFC50(&UnityEngine_Vector2_TypeInfo);
      v6 = v14;
      byte_5931820 = 1;
    }
    v10 = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
  }
  else
  {
    v7.n64_f32[1] = v6;
    v10 = (struct UnityEngine_Vector2_o)vdiv_f32(v7, vdup_lane_s32((int32x2_t)inited.n128_u64[0], 0)).n64_u64[0];
  }
  if ( vaddv_f32(vmul_f32((float32x2_t)zeroVector, (float32x2_t)v10)) >= 0.75 )
    return (int)v6;
  else
    return 0;
}


UnityEngine_Vector2_o CTouch__getPosNow(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0
  struct CTouch_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_593CC09 & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    byte_593CC09 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
    v2 = CTouch_TypeInfo;
  }
  static_fields = v2->static_fields;
  x = static_fields->mPosNow.fields.x;
  y = static_fields->mPosNow.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Vector2_o CTouch__getScrPosDelta(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0
  struct CTouch_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_593CC0F & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    byte_593CC0F = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
    v2 = CTouch_TypeInfo;
  }
  static_fields = v2->static_fields;
  x = static_fields->mScrPosDelta.fields.x;
  y = static_fields->mScrPosDelta.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


float CTouch__getScrPosDeltaLen(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0

  if ( (byte_593CC11 & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    byte_593CC11 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
    v2 = CTouch_TypeInfo;
  }
  return v2->static_fields->mScrPosDeltaLen;
}


float CTouch__getScrPosDeltaLenOld(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0

  if ( (byte_593CC12 & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    byte_593CC12 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
    v2 = CTouch_TypeInfo;
  }
  return v2->static_fields->mScrPosDeltaLenOld;
}


UnityEngine_Vector2_o CTouch__getScrPosDeltaOld(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0
  struct CTouch_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_593CC10 & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    byte_593CC10 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
    v2 = CTouch_TypeInfo;
  }
  static_fields = v2->static_fields;
  x = static_fields->mScrPosDeltaOld.fields.x;
  y = static_fields->mScrPosDeltaOld.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Vector2_o CTouch__getScreenPosition(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0
  struct CTouch_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_593CC0B & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    byte_593CC0B = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
    v2 = CTouch_TypeInfo;
  }
  static_fields = v2->static_fields;
  x = static_fields->mScrPosNow.fields.x;
  y = static_fields->mScrPosNow.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Vector2_o CTouch__getScreenPosition_55911772(UnityEngine_Vector2_o tch_pos, const MethodInfo *method)
{
  const MethodInfo *v2; // x1
  float y; // s8
  float x; // s9
  CTouch_c *v5; // x0
  float v6; // s0
  float v7; // s1
  UnityEngine_Vector2_o ScreenPosition_55911884; // kr00_8
  UnityEngine_Vector2_o v9; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  y = tch_pos.fields.y;
  x = tch_pos.fields.x;
  if ( (byte_593CC0C & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    byte_593CC0C = 1;
  }
  v5 = CTouch_TypeInfo;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v2);
    v5 = CTouch_TypeInfo;
  }
  v9.fields.x = x;
  v9.fields.y = y;
  ScreenPosition_55911884 = CTouch__getScreenPosition_55911884(v9, v5->static_fields->mScreenCam, v2);
  v7 = ScreenPosition_55911884.fields.y;
  v6 = ScreenPosition_55911884.fields.x;
  result.fields.y = v7;
  result.fields.x = v6;
  return result;
}


UnityEngine_Vector2_o CTouch__getScreenPosition_55911884(
        UnityEngine_Vector2_o tch_pos,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  float y; // s8
  float x; // s9
  __int64 v6; // x1
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float v8; // s1
  float v9; // s8
  CTouch_c *v10; // x0
  UnityEngine_Camera_o *mScreenCam; // x0
  float v12; // s9
  float v13; // s10
  unsigned int lossyScale; // s0
  float v15; // s8
  float v16; // s0
  UnityEngine_Ray_o v17; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  y = tch_pos.fields.y;
  x = tch_pos.fields.x;
  if ( (byte_593CC0E & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593CC0E = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0, 0) || x == 3.4028e38 || y == 3.4028e38 )
  {
    if ( !byte_5931820 )
    {
      sub_21FFC50(&UnityEngine_Vector2_TypeInfo);
      byte_5931820 = 1;
    }
    static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
    v9 = static_fields->zeroVector.fields.x;
    v8 = static_fields->zeroVector.fields.y;
  }
  else
  {
    v10 = CTouch_TypeInfo;
    if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v6);
      v10 = CTouch_TypeInfo;
    }
    mScreenCam = v10->static_fields->mScreenCam;
    if ( !mScreenCam )
      goto LABEL_20;
    v19.fields.z = 0.0;
    v19.fields.x = x;
    v19.fields.y = y;
    UnityEngine_Camera__ScreenPointToRay_82985504(&v17, mScreenCam, v19, 0);
    mScreenCam = CTouch_TypeInfo->static_fields->mScreenCam;
    if ( !mScreenCam
      || (v13 = v17.fields.m_Origin.fields.x,
          v12 = v17.fields.m_Origin.fields.y,
          (mScreenCam = (UnityEngine_Camera_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)mScreenCam,
                                                  0)) == 0)
      || (lossyScale = (unsigned int)UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)mScreenCam, 0),
          (mScreenCam = CTouch_TypeInfo->static_fields->mScreenCam) == 0)
      || (v15 = *(float *)&lossyScale,
          (mScreenCam = (UnityEngine_Camera_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)mScreenCam,
                                                  0)) == 0) )
    {
LABEL_20:
      sub_21FFECC(mScreenCam, v6);
    }
    v9 = v13 / v15;
    v20 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)mScreenCam, 0);
    v8 = v12 / v20.fields.y;
  }
  v16 = v9;
  result.fields.y = v8;
  result.fields.x = v16;
  return result;
}


UnityEngine_Vector2_o CTouch__getScreenPosition_55912272(UnityEngine_Camera_o *cam, const MethodInfo *method)
{
  CTouch_c *v2; // x0
  const MethodInfo *v3; // x1
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o ScreenPosition_55911884; // kr00_8
  UnityEngine_Vector2_o TouchPos; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_593CC0D & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    byte_593CC0D = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
  TouchPos = CTouch__GetTouchPos((const MethodInfo *)v2);
  ScreenPosition_55911884 = CTouch__getScreenPosition_55911884(TouchPos, CTouch_TypeInfo->static_fields->mScreenCam, v3);
  y = ScreenPosition_55911884.fields.y;
  x = ScreenPosition_55911884.fields.x;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


int32_t CTouch__getTouchState(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0

  if ( (byte_593CBFD & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    byte_593CBFD = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
    v2 = CTouch_TypeInfo;
  }
  return v2->static_fields->mState;
}


void CTouch__init(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0
  struct CTouch_StaticFields *static_fields; // x8

  if ( (byte_593CBF9 & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    byte_593CBF9 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
    v2 = CTouch_TypeInfo;
  }
  static_fields = v2->static_fields;
  if ( !static_fields->mIsInitDone )
  {
    if ( !*(&v2->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v2, v1);
      static_fields = CTouch_TypeInfo->static_fields;
    }
    static_fields->mIsInitDone = 1;
    *(_WORD *)&static_fields->mIsClassEnabled = 257;
  }
}


bool CTouch__isDrag(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0
  __int64 v3; // x1
  CTouch_c *v4; // x0

  if ( (byte_593CC07 & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    byte_593CC07 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
  if ( !CTouch__isDragMode((const MethodInfo *)v2) )
    return 0;
  v4 = CTouch_TypeInfo;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v3);
  return CTouch__isTouchKeep((const MethodInfo *)v4);
}


bool CTouch__isDragMode(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0

  if ( (byte_593CC06 & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    byte_593CC06 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
    v2 = CTouch_TypeInfo;
  }
  return v2->static_fields->mDragFrameCnt >= 0;
}


bool CTouch__isFlick(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0

  if ( (byte_593CC02 & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    byte_593CC02 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
    v2 = CTouch_TypeInfo;
  }
  return CTouch__isFlick_55909004(v2->static_fields->FLICK_LEN, (const MethodInfo *)v2);
}


bool CTouch__isFlick_55909004(float flickLen, const MethodInfo *method)
{
  __int64 v2; // x1
  CTouch_c *v4; // x0
  __int64 v5; // x1
  CTouch_c *v6; // x0

  if ( (byte_593CC03 & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    byte_593CC03 = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v2);
  if ( !CTouch__isTouchRelease((const MethodInfo *)v4) )
    return 0;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v5);
  if ( !byte_593CC1C )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    byte_593CC1C = 1;
  }
  v6 = CTouch_TypeInfo;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v5);
    v6 = CTouch_TypeInfo;
  }
  return v6->static_fields->mScrPosDeltaLen >= flickLen;
}


bool CTouch__isTouchKeep(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0

  if ( (byte_593CC00 & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    byte_593CC00 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
    v2 = CTouch_TypeInfo;
  }
  return v2->static_fields->mState == 2;
}


bool CTouch__isTouchNone(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0

  if ( (byte_593CBFE & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    byte_593CBFE = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
    v2 = CTouch_TypeInfo;
  }
  return v2->static_fields->mState == 0;
}


bool CTouch__isTouchPush(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0

  if ( (byte_593CBFF & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    byte_593CBFF = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
    v2 = CTouch_TypeInfo;
  }
  return v2->static_fields->mState == 1;
}


bool CTouch__isTouchRelease(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0

  if ( (byte_593CC01 & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    byte_593CC01 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
    v2 = CTouch_TypeInfo;
  }
  return v2->static_fields->mState == 3;
}


void CTouch__process(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0
  struct CTouch_StaticFields *static_fields; // x8
  int32_t mProcessOldFrameCount; // w19
  int32_t frameCount; // w0
  __int64 v6; // x1
  CTouch_c *v7; // x8
  int32_t v8; // w19
  __int64 v9; // x1
  CTouch_c *v10; // x0
  __int64 v11; // x1
  CTouch_c *v12; // x0
  bool v13; // w0
  CTouch_c *v14; // x0

  if ( (byte_593CBFC & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    byte_593CBFC = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
    v2 = CTouch_TypeInfo;
  }
  static_fields = v2->static_fields;
  if ( static_fields->mIsInitDone )
  {
    if ( !*(&v2->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v2, v1);
      v2 = CTouch_TypeInfo;
      static_fields = CTouch_TypeInfo->static_fields;
    }
    if ( static_fields->mIsClassEnabled )
    {
      if ( !*(&v2->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v2, v1);
        static_fields = CTouch_TypeInfo->static_fields;
      }
      mProcessOldFrameCount = static_fields->mProcessOldFrameCount;
      if ( mProcessOldFrameCount != UnityEngine_Time__get_frameCount(0) )
      {
        frameCount = UnityEngine_Time__get_frameCount(0);
        v7 = CTouch_TypeInfo;
        v8 = frameCount;
        if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v6);
          v7 = CTouch_TypeInfo;
        }
        v7->static_fields->mProcessOldFrameCount = v8;
        if ( !UnityEngine_Input__get_multiTouchEnabled(0) )
          goto LABEL_32;
        v10 = CTouch_TypeInfo;
        if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v9);
          v10 = CTouch_TypeInfo;
        }
        if ( !v10->static_fields->mIsReqMultiTouchEnabled )
        {
          if ( UnityEngine_Input__get_touchCount(0) > 0 )
          {
LABEL_27:
            v14 = CTouch_TypeInfo;
            if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v11);
            CTouch__processSingleTouch((const MethodInfo *)v14);
            return;
          }
          v13 = 0;
        }
        else
        {
LABEL_32:
          if ( UnityEngine_Input__get_multiTouchEnabled(0) )
            goto LABEL_27;
          v12 = CTouch_TypeInfo;
          if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v11);
            v12 = CTouch_TypeInfo;
          }
          if ( !v12->static_fields->mIsReqMultiTouchEnabled )
            goto LABEL_27;
          v13 = 1;
        }
        UnityEngine_Input__set_multiTouchEnabled(v13, 0);
        goto LABEL_27;
      }
    }
  }
}


void CTouch__processSingleTouch(const MethodInfo *method)
{
  __int64 v1; // x1
  const MethodInfo *v2; // x0
  const MethodInfo *v3; // x1
  CTouch_c *v4; // x0
  const MethodInfo *v5; // x1
  CTouch_c *v6; // x0
  struct UnityEngine_Touch_array *mTouch; // x20
  int32_t ValidTouchLastID; // w0
  const MethodInfo *Touch; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x0
  UnityEngine_Vector2_o ScreenPosition_55911772; // kr08_8
  CTouch_c *v13; // x0
  __int64 v14; // x8
  __int64 v15; // x1
  int32_t touchCount; // w8
  CTouch_c *v17; // x0
  struct CTouch_StaticFields *static_fields; // x8
  struct UnityEngine_Vector2_o mPosNow; // x9
  UnityEngine_Vector2_o v20; // kr10_8
  int v21; // w10
  UnityEngine_Vector2_c *v22; // x8
  Il2CppMethodPointer virtualMethodPointer; // x9
  __int64 v24; // x8
  __int64 v25; // x8
  int32_t phase; // w8
  __int64 v27; // x8
  __int64 v28; // x8
  __int64 v29; // x8
  CTouch_c *v30; // x0
  struct CTouch_StaticFields *v31; // x9
  struct CTouch_TouchEventHandler_o *MOnTouchReleaseEvent; // x8
  CTouch_c *v33; // x0
  __int64 v34; // x1
  bool isTouchKeep; // w8
  CTouch_c *v36; // x0
  struct CTouch_StaticFields *v37; // x8
  int32_t mDragFrameCnt; // w9
  __int64 v39; // x1
  bool v40; // w8
  CTouch_c *v41; // x0
  struct CTouch_StaticFields *v42; // x8
  float32x2_t v43; // d8
  float32x2_t v44; // d9
  float32x2_t v45; // d8
  struct CTouch_StaticFields *v46; // x8
  float DRAG_LEN; // s1
  float v48; // s0
  int v49; // w9
  struct CTouch_StaticFields *v50; // x8
  float mScrPosDeltaLen; // s0
  float32x2_t v52; // d8
  float32x2_t v53; // d0
  CTouch_c *v54; // x0
  struct CTouch_StaticFields *v55; // x20
  float32x2_t v56; // d8
  UnityEngine_Touch_o src; // [xsp+Ch] [xbp-84h] BYREF

  if ( (byte_593CC13 & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    byte_593CC13 = 1;
  }
  v2 = (const MethodInfo *)CTouch_TypeInfo;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
    v2 = (const MethodInfo *)CTouch_TypeInfo;
  }
  *((_DWORD *)v2[2].virtualMethodPointer + 7) = 0;
  CTouch_TypeInfo->static_fields->mPosNow = CTouch__GetTouchPos(v2);
  if ( UnityEngine_Input__get_touchCount(0) < 1 )
    goto LABEL_17;
  v4 = CTouch_TypeInfo;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v3);
  if ( CTouch__GetValidTouchCount((const MethodInfo *)v4) != 1 )
    goto LABEL_17;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v3);
  if ( (CTouch__GetValidTouchLastID(1, v3) & 0x80000000) == 0 )
  {
    v6 = CTouch_TypeInfo;
    if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v5);
      v6 = CTouch_TypeInfo;
    }
    mTouch = v6->static_fields->mTouch;
    ValidTouchLastID = CTouch__GetValidTouchLastID(1, v5);
    Touch = (const MethodInfo *)UnityEngine_Input__GetTouch(&src, ValidTouchLastID, 0);
    if ( !mTouch )
      goto LABEL_122;
    if ( !LODWORD(mTouch->max_length) )
      goto LABEL_123;
    memmove(mTouch->m_Items, &src, 0x44u);
LABEL_17:
    v11 = (const MethodInfo *)CTouch_TypeInfo;
    if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v3);
      v11 = (const MethodInfo *)CTouch_TypeInfo;
    }
    *(_QWORD *)((char *)v11[2].virtualMethodPointer + 68) = *(_QWORD *)((char *)v11[2].virtualMethodPointer + 52);
    ScreenPosition_55911772 = CTouch__getScreenPosition_55911772(
                                *(UnityEngine_Vector2_o *)((char *)v11[2].virtualMethodPointer + 32),
                                v11);
    v13 = CTouch_TypeInfo;
    CTouch_TypeInfo->static_fields->mScrPosNow = ScreenPosition_55911772;
    if ( !v13->static_fields->mIsTchNow )
    {
      if ( !*(&v13->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(v13, v10);
      if ( CTouch__GetValidTouchCount((const MethodInfo *)v13) == 1 )
      {
        if ( UnityEngine_Input__get_touchCount(0) >= 1 )
        {
          Touch = (const MethodInfo *)CTouch_TypeInfo;
          if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v10);
            Touch = (const MethodInfo *)CTouch_TypeInfo;
          }
          v14 = *((_QWORD *)Touch[2].virtualMethodPointer + 1);
          if ( !v14 )
            goto LABEL_122;
          if ( !*(_DWORD *)(v14 + 24) )
            goto LABEL_123;
          if ( !UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v14 + 32), 0) )
            goto LABEL_30;
        }
        if ( UnityEngine_Input__GetMouseButtonDown(0, 0) )
        {
LABEL_30:
          touchCount = UnityEngine_Input__get_touchCount(0);
          v17 = CTouch_TypeInfo;
          if ( !touchCount )
          {
            if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v15);
              v17 = CTouch_TypeInfo;
            }
            v17->static_fields->mIsTchMouseNow = 1;
          }
          if ( !*(&v17->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(v17, v15);
            v17 = CTouch_TypeInfo;
          }
          static_fields = v17->static_fields;
          mPosNow = static_fields->mPosNow;
          static_fields->mIsTchNow = 1;
          static_fields->mState = 1;
          static_fields->mPosPush = mPosNow;
          v20 = CTouch__getScreenPosition_55911772(v17->static_fields->mPosPush, (const MethodInfo *)v17);
          Touch = (const MethodInfo *)CTouch_TypeInfo;
          v21 = (unsigned __int8)byte_5931820;
          CTouch_TypeInfo->static_fields->mScrPosPush = v20;
          *(_QWORD *)((char *)Touch[2].virtualMethodPointer + 68) = *(_QWORD *)((char *)Touch[2].virtualMethodPointer
                                                                              + 52);
          if ( !v21 )
          {
            sub_21FFC50(&UnityEngine_Vector2_TypeInfo);
            Touch = (const MethodInfo *)CTouch_TypeInfo;
            byte_5931820 = 1;
          }
          v22 = UnityEngine_Vector2_TypeInfo;
          *(struct UnityEngine_Vector2_o *)((char *)Touch[2].virtualMethodPointer + 84) = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
          *(struct UnityEngine_Vector2_o *)((char *)Touch[2].virtualMethodPointer + 76) = v22->static_fields->zeroVector;
          virtualMethodPointer = Touch[2].virtualMethodPointer;
          v24 = *((_QWORD *)virtualMethodPointer + 17);
          *(_QWORD *)((char *)virtualMethodPointer + 100) = 0xFFFFFFFFLL;
          if ( v24 )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD))(v24 + 24))(*(_QWORD *)(v24 + 64), *(_QWORD *)(v24 + 40));
            Touch = (const MethodInfo *)CTouch_TypeInfo;
          }
          goto LABEL_63;
        }
      }
    }
    Touch = (const MethodInfo *)CTouch_TypeInfo;
    if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v10);
      Touch = (const MethodInfo *)CTouch_TypeInfo;
    }
    if ( *((_BYTE *)Touch[2].virtualMethodPointer + 24) )
    {
      if ( !HIDWORD(Touch[2].parameters) )
        j_il2cpp_runtime_class_init_0(Touch, v10);
      if ( CTouch__GetValidTouchCount(Touch) == 1 )
      {
        Touch = (const MethodInfo *)CTouch_TypeInfo;
        if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v10);
          Touch = (const MethodInfo *)CTouch_TypeInfo;
        }
        v25 = *((_QWORD *)Touch[2].virtualMethodPointer + 1);
        if ( !v25 )
          goto LABEL_122;
        if ( !*(_DWORD *)(v25 + 24) )
          goto LABEL_123;
        phase = UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v25 + 32), 0);
        Touch = (const MethodInfo *)CTouch_TypeInfo;
        if ( phase == 1 )
          goto LABEL_60;
        if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v10);
          Touch = (const MethodInfo *)CTouch_TypeInfo;
        }
        v27 = *((_QWORD *)Touch[2].virtualMethodPointer + 1);
        if ( !v27 )
          goto LABEL_122;
        if ( !*(_DWORD *)(v27 + 24) )
          goto LABEL_123;
        if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v27 + 32), 0) == 2 )
        {
          Touch = (const MethodInfo *)CTouch_TypeInfo;
LABEL_60:
          if ( !HIDWORD(Touch[2].parameters) )
          {
            j_il2cpp_runtime_class_init_0(Touch, v10);
            Touch = (const MethodInfo *)CTouch_TypeInfo;
          }
          *((_DWORD *)Touch[2].virtualMethodPointer + 7) = 2;
          goto LABEL_63;
        }
      }
      Touch = (const MethodInfo *)CTouch_TypeInfo;
      if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v10);
        Touch = (const MethodInfo *)CTouch_TypeInfo;
      }
      if ( *((_BYTE *)Touch[2].virtualMethodPointer + 25) )
        goto LABEL_60;
    }
LABEL_63:
    if ( !HIDWORD(Touch[2].parameters) )
    {
      j_il2cpp_runtime_class_init_0(Touch, v10);
      Touch = (const MethodInfo *)CTouch_TypeInfo;
    }
    if ( !*((_BYTE *)Touch[2].virtualMethodPointer + 24) )
      goto LABEL_84;
    if ( !HIDWORD(Touch[2].parameters) )
      j_il2cpp_runtime_class_init_0(Touch, v10);
    if ( CTouch__GetValidTouchCount(Touch) != 1 )
    {
LABEL_79:
      if ( !UnityEngine_Input__GetMouseButtonUp(0, 0) )
      {
LABEL_84:
        v33 = CTouch_TypeInfo;
        if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v10);
        isTouchKeep = CTouch__isTouchKeep((const MethodInfo *)v33);
        v36 = CTouch_TypeInfo;
        if ( isTouchKeep )
        {
          if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v34);
            v36 = CTouch_TypeInfo;
          }
          v37 = v36->static_fields;
          mDragFrameCnt = v37->mDragFrameCnt;
          if ( (mDragFrameCnt & 0x80000000) == 0 )
          {
            if ( !*(&v36->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v36, v34);
              v36 = CTouch_TypeInfo;
              v37 = CTouch_TypeInfo->static_fields;
              mDragFrameCnt = v37->mDragFrameCnt;
            }
            v37->mDragFrameCnt = mDragFrameCnt + 1;
          }
        }
        if ( !*(&v36->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(v36, v34);
        v40 = CTouch__isTouchKeep((const MethodInfo *)v36);
        v41 = CTouch_TypeInfo;
        if ( v40 )
        {
          if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v39);
            v41 = CTouch_TypeInfo;
          }
          v42 = v41->static_fields;
          if ( v42->mDragFrameCnt < 0 )
          {
            if ( !*(&v41->_2.cctor_finished + 1) )
            {
              j_il2cpp_runtime_class_init_0(v41, v39);
              v42 = CTouch_TypeInfo->static_fields;
            }
            v43.n64_u64[0] = (unsigned __int64)v42->mScrPosNow;
            v44.n64_u64[0] = (unsigned __int64)v42->mScrPosPush;
            if ( !byte_5931941 )
            {
              sub_21FFC50(&System_Math_TypeInfo);
              byte_5931941 = 1;
            }
            v45.n64_u64[0] = vsub_f32(v43, v44).n64_u64[0];
            if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v39);
            v41 = CTouch_TypeInfo;
            v46 = CTouch_TypeInfo->static_fields;
            DRAG_LEN = v46->DRAG_LEN;
            v48 = sqrtf(vaddv_f32(vmul_f32(v45, v45)));
            v46->mDragLen = v48;
            if ( v48 >= DRAG_LEN )
            {
              if ( !*(&v41->_2.cctor_finished + 1) )
              {
                j_il2cpp_runtime_class_init_0(v41, v39);
                v41 = CTouch_TypeInfo;
                v46 = CTouch_TypeInfo->static_fields;
              }
              v46->mDragFrameCnt = 0;
            }
          }
        }
        if ( !*(&v41->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v41, v39);
          v41 = CTouch_TypeInfo;
        }
        v41->static_fields->mScrPosDeltaOld = v41->static_fields->mScrPosDelta;
        v49 = (unsigned __int8)byte_5931820;
        v41->static_fields->mScrPosDelta = (struct UnityEngine_Vector2_o)vsub_f32(
                                                                           (float32x2_t)v41->static_fields->mScrPosNow,
                                                                           (float32x2_t)v41->static_fields->mScrPosOld).n64_u64[0];
        v50 = v41->static_fields;
        mScrPosDeltaLen = v50->mScrPosDeltaLen;
        v52.n64_u64[0] = (unsigned __int64)v50->mScrPosDelta;
        v50->mScrPosDeltaLen = 0.0;
        v50->mScrPosDeltaLenOld = mScrPosDeltaLen;
        if ( !v49 )
        {
          sub_21FFC50(&UnityEngine_Vector2_TypeInfo);
          byte_5931820 = 1;
        }
        v53.n64_u64[0] = vsub_f32(v52, (float32x2_t)UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).n64_u64[0];
        if ( vaddv_f32(vmul_f32(v53, v53)) >= 1.0e-10 )
        {
          v54 = CTouch_TypeInfo;
          if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v39);
            v54 = CTouch_TypeInfo;
          }
          v55 = v54->static_fields;
          if ( !byte_5931941 )
          {
            sub_21FFC50(&System_Math_TypeInfo);
            byte_5931941 = 1;
          }
          v56.n64_u64[0] = (unsigned __int64)v55->mScrPosDelta;
          if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v39);
          CTouch_TypeInfo->static_fields->mScrPosDeltaLen = sqrtf(vaddv_f32(vmul_f32(v56, v56)));
        }
        return;
      }
LABEL_80:
      v30 = CTouch_TypeInfo;
      if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v10);
        v30 = CTouch_TypeInfo;
      }
      v31 = v30->static_fields;
      MOnTouchReleaseEvent = v31->MOnTouchReleaseEvent;
      *(_WORD *)&v31->mIsTchNow = 0;
      v31->mState = 3;
      if ( MOnTouchReleaseEvent )
        ((void (__fastcall *)(intptr_t, intptr_t))MOnTouchReleaseEvent->fields.invoke_impl)(
          MOnTouchReleaseEvent->fields.method_code,
          MOnTouchReleaseEvent->fields.method);
      goto LABEL_84;
    }
    Touch = (const MethodInfo *)CTouch_TypeInfo;
    if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v10);
      Touch = (const MethodInfo *)CTouch_TypeInfo;
    }
    v28 = *((_QWORD *)Touch[2].virtualMethodPointer + 1);
    if ( v28 )
    {
      if ( !*(_DWORD *)(v28 + 24) )
        goto LABEL_123;
      if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v28 + 32), 0) == 3 )
        goto LABEL_80;
      Touch = (const MethodInfo *)CTouch_TypeInfo;
      if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v10);
        Touch = (const MethodInfo *)CTouch_TypeInfo;
      }
      v29 = *((_QWORD *)Touch[2].virtualMethodPointer + 1);
      if ( v29 )
      {
        if ( *(_DWORD *)(v29 + 24) )
        {
          if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v29 + 32), 0) == 4 )
            goto LABEL_80;
          goto LABEL_79;
        }
LABEL_123:
        sub_21FFED4(Touch);
      }
    }
LABEL_122:
    sub_21FFECC(Touch, v10);
  }
}


void CTouch__reboot(const MethodInfo *method)
{
  __int64 v1; // x1
  CTouch_c *v2; // x0

  if ( (byte_593CBF8 & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    byte_593CBF8 = 1;
  }
  v2 = CTouch_TypeInfo;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
    v2 = CTouch_TypeInfo;
  }
  v2->static_fields->mIsInitDone = 0;
}


void CTouch__remove_MOnTouchPressEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  CTouch_c *v3; // x0
  System_Delegate_o *MOnTouchPressEvent; // x20
  System_Delegate_o *v5; // x0
  CTouch_TouchEventHandler_c *v6; // x1
  __int64 v7; // x2
  System_Delegate_o *v8; // x21
  CTouch_c *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  CTouch_TouchEventHandler_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_593CBF5 & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    sub_21FFC50(&CTouch_TouchEventHandler_TypeInfo);
    byte_593CBF5 = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
    v3 = CTouch_TypeInfo;
  }
  MOnTouchPressEvent = (System_Delegate_o *)v3->static_fields->MOnTouchPressEvent;
  while ( 1 )
  {
    v5 = System_Delegate__Remove(MOnTouchPressEvent, (System_Delegate_o *)value, 0);
    v8 = v5;
    if ( v5 )
    {
      v6 = CTouch_TouchEventHandler_TypeInfo;
      if ( (CTouch_TouchEventHandler_c *)v5->klass != CTouch_TouchEventHandler_TypeInfo )
        break;
    }
    v9 = CTouch_TypeInfo;
    if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v6);
      v9 = CTouch_TypeInfo;
    }
    v10 = sub_223767C(&v9->static_fields->MOnTouchPressEvent, v8, MOnTouchPressEvent);
    v11 = v10 == (_QWORD)MOnTouchPressEvent;
    MOnTouchPressEvent = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_220024C(v5, CTouch_TouchEventHandler_TypeInfo, v7);
  CTouch__add_OnTouchPressEvent(v12, v13);
}


void CTouch__remove_MOnTouchReleaseEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  CTouch_c *v3; // x0
  System_Delegate_o *MOnTouchReleaseEvent; // x20
  System_Delegate_o *v5; // x0
  CTouch_TouchEventHandler_c *v6; // x1
  __int64 v7; // x2
  System_Delegate_o *v8; // x21
  CTouch_c *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  CTouch_TouchEventHandler_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_593CBF1 & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    sub_21FFC50(&CTouch_TouchEventHandler_TypeInfo);
    byte_593CBF1 = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
    v3 = CTouch_TypeInfo;
  }
  MOnTouchReleaseEvent = (System_Delegate_o *)v3->static_fields->MOnTouchReleaseEvent;
  while ( 1 )
  {
    v5 = System_Delegate__Remove(MOnTouchReleaseEvent, (System_Delegate_o *)value, 0);
    v8 = v5;
    if ( v5 )
    {
      v6 = CTouch_TouchEventHandler_TypeInfo;
      if ( (CTouch_TouchEventHandler_c *)v5->klass != CTouch_TouchEventHandler_TypeInfo )
        break;
    }
    v9 = CTouch_TypeInfo;
    if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v6);
      v9 = CTouch_TypeInfo;
    }
    v10 = sub_223767C(&v9->static_fields->MOnTouchReleaseEvent, v8, MOnTouchReleaseEvent);
    v11 = v10 == (_QWORD)MOnTouchReleaseEvent;
    MOnTouchReleaseEvent = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_220024C(v5, CTouch_TouchEventHandler_TypeInfo, v7);
  CTouch__add_OnTouchReleaseEvent(v12, v13);
}


void CTouch__remove_OnTouchPressEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  if ( (byte_593CBF7 & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    byte_593CBF7 = 1;
  }
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
  CTouch__remove_MOnTouchPressEvent(value, method);
}


void CTouch__remove_OnTouchReleaseEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  if ( (byte_593CBF3 & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    byte_593CBF3 = 1;
  }
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
  CTouch__remove_MOnTouchReleaseEvent(value, method);
}


void CTouch__setParam(float flickLen, float dragLen, UnityEngine_Camera_o *screenCam, const MethodInfo *method)
{
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  CTouch_c *v13; // x0
  struct CTouch_StaticFields *static_fields; // x8
  struct CTouch_StaticFields *v15; // x0

  if ( (byte_593CBFA & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    byte_593CBFA = 1;
  }
  v13 = CTouch_TypeInfo;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
    v13 = CTouch_TypeInfo;
  }
  static_fields = v13->static_fields;
  if ( static_fields->mIsInitDone )
  {
    if ( !*(&v13->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v13, method);
      v13 = CTouch_TypeInfo;
      static_fields = CTouch_TypeInfo->static_fields;
    }
    static_fields->FLICK_LEN = flickLen;
    static_fields->DRAG_LEN = dragLen;
    if ( !byte_5932645 )
    {
      sub_21FFC50(&CTouch_TypeInfo);
      v13 = CTouch_TypeInfo;
      byte_5932645 = 1;
    }
    if ( !*(&v13->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v13, method);
      v13 = CTouch_TypeInfo;
    }
    v15 = v13->static_fields;
    v15->mScreenCam = screenCam;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v15->mScreenCam, (int32_t)screenCam, v4, v5, v6, v7, v8, v9);
  }
}


void CTouch__setScreenCamera(UnityEngine_Camera_o *cam, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  CTouch_c *v9; // x0
  struct CTouch_StaticFields *static_fields; // x0

  if ( (byte_593CBFB & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    byte_593CBFB = 1;
  }
  v9 = CTouch_TypeInfo;
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
    v9 = CTouch_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->mScreenCam = cam;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->mScreenCam, (int32_t)cam, v2, v3, v4, v5, v6, v7);
}


void CTouch_TouchEventHandler___ctor(
        CTouch_TouchEventHandler_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_2002E40;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_2002E00;
}


System_IAsyncResult_o *CTouch_TouchEventHandler__BeginInvoke(
        CTouch_TouchEventHandler_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  return (System_IAsyncResult_o *)sub_21FFC04(this, &v5, callback, object);
}


void CTouch_TouchEventHandler__EndInvoke(
        CTouch_TouchEventHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void CTouch_TouchEventHandler__Invoke(CTouch_TouchEventHandler_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}