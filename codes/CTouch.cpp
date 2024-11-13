void __fastcall CTouch___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int64_t v9; // x0
  struct CTouch_StaticFields *static_fields; // x8
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  System_Collections_Generic_List_int__o *v20; // x19
  struct CTouch_StaticFields *v21; // x0
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct CTouch_StaticFields *v28; // x8

  if ( (byte_4B1A8D6 & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int___ctor__, v3, v4);
    sub_1BCA7E0(&System_Collections_Generic_List_int__TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Touch___TypeInfo, v7, v8);
    byte_4B1A8D6 = 1;
  }
  *(_QWORD *)&CTouch_TypeInfo->static_fields->FLICK_LEN = 0x4170000040A00000LL;
  v9 = sub_1BCA888(UnityEngine_Touch___TypeInfo, 1LL);
  static_fields = CTouch_TypeInfo->static_fields;
  static_fields->mTouch = (struct UnityEngine_Touch_array *)v9;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->mTouch, v9, v11, v12, v13, v14, v15, v16);
  v20 = (System_Collections_Generic_List_int__o *)sub_1BCAA2C(
                                                    System_Collections_Generic_List_int__TypeInfo,
                                                    v17,
                                                    v18,
                                                    v19);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_35843E4 *)Method_System_Collections_Generic_List_int___ctor__);
  v21 = CTouch_TypeInfo->static_fields;
  v21->ignoreFingerIDList = v20;
  sub_1BCA784((PartyOrganizationUtility_o *)&v21->ignoreFingerIDList, (int64_t)v20, v22, v23, v24, v25, v26, v27);
  v28 = CTouch_TypeInfo->static_fields;
  *(_WORD *)&v28->mIsTchNow = 0;
  v28->mState = 0;
  v28->mDragFrameCnt = -1;
  v28->mIsClassEnabled = 0;
}


System_Collections_Generic_List_int__o *__fastcall CTouch__GetIgnoreFingerIDList(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  CTouch_c *v3; // x0

  if ( (byte_4B1A8D4 & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, v1, v2);
    byte_4B1A8D4 = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
    v3 = CTouch_TypeInfo;
  }
  return v3->static_fields->ignoreFingerIDList;
}


UnityEngine_Vector2_o __fastcall CTouch__GetTouchPos(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  __int64 v6; // x1
  CTouch_c *v7; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  __int64 v10; // x2
  int32_t ValidTouchLastID; // w0
  UnityEngine_Vector2_o position; // kr00_8
  struct UnityEngine_Vector2_StaticFields *v13; // x8
  float v14; // s0
  float v15; // s1
  UnityEngine_Touch_o src; // [xsp+8h] [xbp-C8h] BYREF
  UnityEngine_Touch_o dest; // [xsp+50h] [xbp-80h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4B1A8C9 & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, v1, v2);
    byte_4B1A8C9 = 1;
  }
  memset(&dest, 0, sizeof(dest));
  if ( !byte_4B108BA )
  {
    sub_1BCA7E0(&UnityEngine_Vector2_TypeInfo, v1, v2);
    byte_4B108BA = 1;
  }
  static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  if ( UnityEngine_Input__get_touchCount(0LL) >= 1 )
  {
    v7 = CTouch_TypeInfo;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v6);
    if ( CTouch__GetValidTouchCount((const MethodInfo *)v7) == 1 )
    {
      if ( !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v8);
      if ( (CTouch__GetValidTouchLastID(1, v8) & 0x80000000) != 0 )
      {
        if ( !byte_4B108BA )
        {
          sub_1BCA7E0(&UnityEngine_Vector2_TypeInfo, v9, v10);
          byte_4B108BA = 1;
        }
        v13 = UnityEngine_Vector2_TypeInfo->static_fields;
        x = v13->zeroVector.fields.x;
        y = v13->zeroVector.fields.y;
      }
      else
      {
        if ( !CTouch_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v9);
        ValidTouchLastID = CTouch__GetValidTouchLastID(1, v9);
        UnityEngine_Input__GetTouch(&src, ValidTouchLastID, 0LL);
        memcpy(&dest, &src, sizeof(dest));
        position = UnityEngine_Touch__get_position(&dest, 0LL);
        y = position.fields.y;
        x = position.fields.x;
      }
    }
  }
  v14 = x;
  v15 = y;
  result.fields.y = v15;
  result.fields.x = v14;
  return result;
}


int32_t __fastcall CTouch__GetValidTouchCount(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 touchCount; // x0
  __int64 v6; // x1
  CTouch_c *v7; // x8
  int v8; // w19
  struct System_Collections_Generic_List_int__o *ignoreFingerIDList; // x8

  if ( (byte_4B1A8D3 & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, v1, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__get_Count__, v3, v4);
    byte_4B1A8D3 = 1;
  }
  touchCount = UnityEngine_Input__get_touchCount(0LL);
  v7 = CTouch_TypeInfo;
  v8 = touchCount;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v6);
    v7 = CTouch_TypeInfo;
  }
  ignoreFingerIDList = v7->static_fields->ignoreFingerIDList;
  if ( !ignoreFingerIDList )
    sub_1BCAA3C(touchCount, v6);
  return v8 - ignoreFingerIDList->fields._size;
}


int32_t __fastcall CTouch__GetValidTouchLastID(bool isReverse, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  CTouch_c *v6; // x0
  __int64 v7; // x1
  unsigned __int64 v8; // x19
  CTouch_c *v9; // x0
  System_Collections_Generic_List_int__o *ignoreFingerIDList; // x20
  UnityEngine_Touch_array *touches; // x0
  __int64 v12; // x1
  __int64 v13; // x22
  CTouch_c *v14; // x0
  System_Collections_Generic_List_int__o *v15; // x20

  if ( (byte_4B1A8D5 & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v4, v5);
    byte_4B1A8D5 = 1;
  }
  v6 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
  if ( CTouch__GetValidTouchCount((const MethodInfo *)v6) < 1 )
  {
    LODWORD(v8) = -1;
  }
  else
  {
    LODWORD(v8) = UnityEngine_Input__get_touchCount(0LL);
    if ( isReverse )
    {
      while ( 1 )
      {
        LODWORD(v8) = v8 - 1;
        if ( (v8 & 0x80000000) != 0LL )
          goto LABEL_25;
        v9 = CTouch_TypeInfo;
        if ( !CTouch_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v7);
          v9 = CTouch_TypeInfo;
        }
        ignoreFingerIDList = v9->static_fields->ignoreFingerIDList;
        touches = UnityEngine_Input__get_touches(0LL);
        if ( !touches )
          goto LABEL_27;
        if ( (unsigned int)v8 >= touches->max_length )
          goto LABEL_28;
        touches = (UnityEngine_Touch_array *)UnityEngine_Touch__get_fingerId(
                                               (UnityEngine_Touch_o *)&touches->m_Items[(unsigned int)v8].fields.m_Position,
                                               0LL);
        if ( !ignoreFingerIDList )
          goto LABEL_27;
        if ( !System_Collections_Generic_List_int___Contains(
                ignoreFingerIDList,
                (int32_t)touches,
                (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__) )
          return v8;
      }
    }
    if ( (int)v8 < 1 )
    {
LABEL_25:
      LODWORD(v8) = 0;
      return v8;
    }
    v8 = 0LL;
    v13 = 32LL;
    while ( 1 )
    {
      v14 = CTouch_TypeInfo;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v7);
        v14 = CTouch_TypeInfo;
      }
      v15 = v14->static_fields->ignoreFingerIDList;
      touches = UnityEngine_Input__get_touches(0LL);
      if ( !touches )
        goto LABEL_27;
      if ( v8 >= touches->max_length )
LABEL_28:
        sub_1BCAA44(touches, v12);
      touches = (UnityEngine_Touch_array *)UnityEngine_Touch__get_fingerId(
                                             (UnityEngine_Touch_o *)((char *)touches + v13),
                                             0LL);
      if ( !v15 )
LABEL_27:
        sub_1BCAA3C(touches, v12);
      if ( !System_Collections_Generic_List_int___Contains(
              v15,
              (int32_t)touches,
              (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__) )
        break;
      ++v8;
      v13 += 68LL;
      if ( (__int64)v8 >= UnityEngine_Input__get_touchCount(0LL) )
        goto LABEL_25;
    }
  }
  return v8;
}


void __fastcall CTouch__SetClassEnabled(bool isEnabled, const MethodInfo *method)
{
  __int64 v2; // x2
  CTouch_c *v4; // x0

  if ( (byte_4B1A8AD & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, method, v2);
    byte_4B1A8AD = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
    v4 = CTouch_TypeInfo;
  }
  v4->static_fields->mIsClassEnabled = isEnabled;
}


void __fastcall CTouch__SetMultiTouchEnabled(bool isEnabled, const MethodInfo *method)
{
  __int64 v2; // x2
  CTouch_c *v4; // x0

  if ( (byte_4B1A8AE & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, method, v2);
    byte_4B1A8AE = 1;
  }
  v4 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
    v4 = CTouch_TypeInfo;
  }
  v4->static_fields->mIsReqMultiTouchEnabled = isEnabled;
}


void __fastcall CTouch__add_MOnTouchPressEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  CTouch_c *v6; // x0
  System_Delegate_o *MOnTouchPressEvent; // x20
  System_Delegate_o *v8; // x0
  CTouch_TouchEventHandler_c *v9; // x1
  System_Delegate_o *v10; // x21
  CTouch_c *v11; // x0
  __int64 v12; // x0
  bool v13; // zf
  CTouch_TouchEventHandler_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4B1A8B3 & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, method, v2);
    sub_1BCA7E0(&CTouch_TouchEventHandler_TypeInfo, v4, v5);
    byte_4B1A8B3 = 1;
  }
  v6 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
    v6 = CTouch_TypeInfo;
  }
  MOnTouchPressEvent = (System_Delegate_o *)v6->static_fields->MOnTouchPressEvent;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(MOnTouchPressEvent, (System_Delegate_o *)value, 0LL);
    v10 = v8;
    if ( v8 )
    {
      v9 = CTouch_TouchEventHandler_TypeInfo;
      if ( (CTouch_TouchEventHandler_c *)v8->klass != CTouch_TouchEventHandler_TypeInfo )
        break;
    }
    v11 = CTouch_TypeInfo;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v9);
      v11 = CTouch_TypeInfo;
    }
    v12 = sub_1C05CD0(&v11->static_fields->MOnTouchPressEvent, v10, MOnTouchPressEvent);
    v13 = MOnTouchPressEvent == (System_Delegate_o *)v12;
    MOnTouchPressEvent = (System_Delegate_o *)v12;
    if ( v13 )
      return;
  }
  sub_1BCACFC(v8);
  CTouch__remove_MOnTouchPressEvent(v14, v15);
}


void __fastcall CTouch__add_MOnTouchReleaseEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  CTouch_c *v6; // x0
  System_Delegate_o *MOnTouchReleaseEvent; // x20
  System_Delegate_o *v8; // x0
  CTouch_TouchEventHandler_c *v9; // x1
  System_Delegate_o *v10; // x21
  CTouch_c *v11; // x0
  __int64 v12; // x0
  bool v13; // zf
  CTouch_TouchEventHandler_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4B1A8AF & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, method, v2);
    sub_1BCA7E0(&CTouch_TouchEventHandler_TypeInfo, v4, v5);
    byte_4B1A8AF = 1;
  }
  v6 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
    v6 = CTouch_TypeInfo;
  }
  MOnTouchReleaseEvent = (System_Delegate_o *)v6->static_fields->MOnTouchReleaseEvent;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(MOnTouchReleaseEvent, (System_Delegate_o *)value, 0LL);
    v10 = v8;
    if ( v8 )
    {
      v9 = CTouch_TouchEventHandler_TypeInfo;
      if ( (CTouch_TouchEventHandler_c *)v8->klass != CTouch_TouchEventHandler_TypeInfo )
        break;
    }
    v11 = CTouch_TypeInfo;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v9);
      v11 = CTouch_TypeInfo;
    }
    v12 = sub_1C05CD0(&v11->static_fields->MOnTouchReleaseEvent, v10, MOnTouchReleaseEvent);
    v13 = MOnTouchReleaseEvent == (System_Delegate_o *)v12;
    MOnTouchReleaseEvent = (System_Delegate_o *)v12;
    if ( v13 )
      return;
  }
  sub_1BCACFC(v8);
  CTouch__remove_MOnTouchReleaseEvent(v14, v15);
}


void __fastcall CTouch__add_OnTouchPressEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1A8B5 & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, method, v2);
    byte_4B1A8B5 = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
  CTouch__add_MOnTouchPressEvent(value, method);
}


void __fastcall CTouch__add_OnTouchReleaseEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1A8B1 & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, method, v2);
    byte_4B1A8B1 = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
  CTouch__add_MOnTouchReleaseEvent(value, method);
}


int32_t __fastcall CTouch__getDragFrameCnt(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  CTouch_c *v3; // x0

  if ( (byte_4B1A8C7 & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, v1, v2);
    byte_4B1A8C7 = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
    v3 = CTouch_TypeInfo;
  }
  return v3->static_fields->mDragFrameCnt;
}


int32_t __fastcall CTouch__getFlickDirX(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  CTouch_c *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  CTouch_c *v6; // x0
  struct CTouch_StaticFields *static_fields; // x8
  float x; // s10
  float y; // s11
  float v10; // s8
  float v11; // s9
  float v12; // s0
  float v13; // s10
  float v14; // s11
  struct UnityEngine_Vector2_StaticFields *v15; // x8
  float v16; // s1
  float v17; // s0
  float v18; // s1
  struct UnityEngine_Vector2_StaticFields *v19; // x8

  if ( (byte_4B1A8C3 & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, v1, v2);
    byte_4B1A8C3 = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
  if ( !CTouch__isFlick((const MethodInfo *)v3) )
    return 0;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v4);
  if ( !byte_4B12CDC )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, v4, v5);
    byte_4B12CDC = 1;
  }
  v6 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v4);
    v6 = CTouch_TypeInfo;
  }
  static_fields = v6->static_fields;
  x = static_fields->mScrPosDelta.fields.x;
  y = static_fields->mScrPosDelta.fields.y;
  if ( !byte_4B108BA )
  {
    sub_1BCA7E0(&UnityEngine_Vector2_TypeInfo, v4, v5);
    byte_4B108BA = 1;
  }
  v10 = -1.0;
  v11 = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector.fields.y;
  if ( x >= 0.0 )
  {
    v10 = 1.0;
    if ( x <= 0.0 )
      return 0;
  }
  if ( !byte_4B109C2 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v4, v5);
    byte_4B109C2 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v4);
  v12 = sqrtf((float)(x * x) + (float)(y * y));
  if ( v12 <= 0.00001 )
  {
    if ( !byte_4B108BA )
    {
      sub_1BCA7E0(&UnityEngine_Vector2_TypeInfo, v4, v5);
      byte_4B108BA = 1;
    }
    v15 = UnityEngine_Vector2_TypeInfo->static_fields;
    v13 = v15->zeroVector.fields.x;
    v14 = v15->zeroVector.fields.y;
  }
  else
  {
    v13 = x / v12;
    v14 = y / v12;
  }
  if ( !byte_4B109C2 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v4, v5);
    byte_4B109C2 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v4);
  v16 = sqrtf((float)(v11 * v11) + (float)(v10 * v10));
  if ( v16 <= 0.00001 )
  {
    if ( !byte_4B108BA )
    {
      sub_1BCA7E0(&UnityEngine_Vector2_TypeInfo, v4, v5);
      byte_4B108BA = 1;
    }
    v19 = UnityEngine_Vector2_TypeInfo->static_fields;
    v17 = v19->zeroVector.fields.x;
    v18 = v19->zeroVector.fields.y;
  }
  else
  {
    v17 = v10 / v16;
    v18 = v11 / v16;
  }
  if ( (float)((float)(v13 * v17) + (float)(v14 * v18)) >= 0.75 )
    return (int)v10;
  else
    return 0;
}


int32_t __fastcall CTouch__getFlickDirY(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  CTouch_c *v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  CTouch_c *v6; // x0
  struct CTouch_StaticFields *static_fields; // x8
  float x; // s10
  float y; // s11
  float v10; // s8
  float v11; // s9
  float v12; // s0
  float v13; // s10
  float v14; // s11
  struct UnityEngine_Vector2_StaticFields *v15; // x8
  float v16; // s1
  float v17; // s0
  float v18; // s1
  struct UnityEngine_Vector2_StaticFields *v19; // x8

  if ( (byte_4B1A8C4 & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, v1, v2);
    byte_4B1A8C4 = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
  if ( !CTouch__isFlick((const MethodInfo *)v3) )
    return 0;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v4);
  if ( !byte_4B12CDC )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, v4, v5);
    byte_4B12CDC = 1;
  }
  v6 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v4);
    v6 = CTouch_TypeInfo;
  }
  static_fields = v6->static_fields;
  x = static_fields->mScrPosDelta.fields.x;
  y = static_fields->mScrPosDelta.fields.y;
  if ( !byte_4B108BA )
  {
    sub_1BCA7E0(&UnityEngine_Vector2_TypeInfo, v4, v5);
    byte_4B108BA = 1;
  }
  v10 = -1.0;
  v11 = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector.fields.x;
  if ( y <= 0.0 )
  {
    v10 = 1.0;
    if ( y >= 0.0 )
      return 0;
  }
  if ( !byte_4B109C2 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v4, v5);
    byte_4B109C2 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v4);
  v12 = sqrtf((float)(x * x) + (float)(y * y));
  if ( v12 <= 0.00001 )
  {
    if ( !byte_4B108BA )
    {
      sub_1BCA7E0(&UnityEngine_Vector2_TypeInfo, v4, v5);
      byte_4B108BA = 1;
    }
    v15 = UnityEngine_Vector2_TypeInfo->static_fields;
    v13 = v15->zeroVector.fields.x;
    v14 = v15->zeroVector.fields.y;
  }
  else
  {
    v13 = x / v12;
    v14 = y / v12;
  }
  if ( !byte_4B109C2 )
  {
    sub_1BCA7E0(&System_Math_TypeInfo, v4, v5);
    byte_4B109C2 = 1;
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v4);
  v16 = sqrtf((float)(v11 * v11) + (float)(v10 * v10));
  if ( v16 <= 0.00001 )
  {
    if ( !byte_4B108BA )
    {
      sub_1BCA7E0(&UnityEngine_Vector2_TypeInfo, v4, v5);
      byte_4B108BA = 1;
    }
    v19 = UnityEngine_Vector2_TypeInfo->static_fields;
    v17 = v19->zeroVector.fields.x;
    v18 = v19->zeroVector.fields.y;
  }
  else
  {
    v17 = v11 / v16;
    v18 = v10 / v16;
  }
  if ( (float)((float)(v13 * v17) + (float)(v14 * v18)) >= 0.75 )
    return (int)v10;
  else
    return 0;
}


UnityEngine_Vector2_o __fastcall CTouch__getPosNow(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  CTouch_c *v3; // x0
  struct CTouch_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4B1A8C8 & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, v1, v2);
    byte_4B1A8C8 = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
    v3 = CTouch_TypeInfo;
  }
  static_fields = v3->static_fields;
  x = static_fields->mPosNow.fields.x;
  y = static_fields->mPosNow.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Vector2_o __fastcall CTouch__getScrPosDelta(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  CTouch_c *v3; // x0
  struct CTouch_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4B1A8CE & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, v1, v2);
    byte_4B1A8CE = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
    v3 = CTouch_TypeInfo;
  }
  static_fields = v3->static_fields;
  x = static_fields->mScrPosDelta.fields.x;
  y = static_fields->mScrPosDelta.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


float __fastcall CTouch__getScrPosDeltaLen(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  CTouch_c *v3; // x0

  if ( (byte_4B1A8D0 & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, v1, v2);
    byte_4B1A8D0 = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
    v3 = CTouch_TypeInfo;
  }
  return v3->static_fields->mScrPosDeltaLen;
}


float __fastcall CTouch__getScrPosDeltaLenOld(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  CTouch_c *v3; // x0

  if ( (byte_4B1A8D1 & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, v1, v2);
    byte_4B1A8D1 = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
    v3 = CTouch_TypeInfo;
  }
  return v3->static_fields->mScrPosDeltaLenOld;
}


UnityEngine_Vector2_o __fastcall CTouch__getScrPosDeltaOld(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  CTouch_c *v3; // x0
  struct CTouch_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4B1A8CF & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, v1, v2);
    byte_4B1A8CF = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
    v3 = CTouch_TypeInfo;
  }
  static_fields = v3->static_fields;
  x = static_fields->mScrPosDeltaOld.fields.x;
  y = static_fields->mScrPosDeltaOld.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


UnityEngine_Vector2_o __fastcall CTouch__getScreenPosition(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  CTouch_c *v3; // x0
  struct CTouch_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4B1A8CA & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, v1, v2);
    byte_4B1A8CA = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
    v3 = CTouch_TypeInfo;
  }
  static_fields = v3->static_fields;
  x = static_fields->mScrPosNow.fields.x;
  y = static_fields->mScrPosNow.fields.y;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o __fastcall CTouch__getScreenPosition_47127516(
        UnityEngine_Vector2_o tch_pos,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x1
  __int64 v3; // x2
  float y; // s8
  float x; // s9
  CTouch_c *v6; // x0
  float v7; // s0
  float v8; // s1
  UnityEngine_Vector2_o ScreenPosition_47127628; // kr00_8
  UnityEngine_Vector2_o v10; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  y = tch_pos.fields.y;
  x = tch_pos.fields.x;
  if ( (byte_4B1A8CB & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, v2, v3);
    byte_4B1A8CB = 1;
  }
  v6 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v2);
    v6 = CTouch_TypeInfo;
  }
  v10.fields.x = x;
  v10.fields.y = y;
  ScreenPosition_47127628 = CTouch__getScreenPosition_47127628(v10, v6->static_fields->mScreenCam, v2);
  v8 = ScreenPosition_47127628.fields.y;
  v7 = ScreenPosition_47127628.fields.x;
  result.fields.y = v8;
  result.fields.x = v7;
  return result;
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_Vector2_o __fastcall CTouch__getScreenPosition_47127628(
        UnityEngine_Vector2_o tch_pos,
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  __int64 v3; // x2
  float y; // s8
  float x; // s9
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  CTouch_c *v11; // x0
  UnityEngine_Camera_o *mScreenCam; // x0
  float v13; // s9
  float v14; // s10
  unsigned int lossyScale; // s0
  float v16; // s8
  float v17; // s8
  float v18; // s1
  struct UnityEngine_Vector2_StaticFields *static_fields; // x8
  float v20; // s0
  UnityEngine_Ray_o v21; // [xsp+8h] [xbp-58h] BYREF
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4

  y = tch_pos.fields.y;
  x = tch_pos.fields.x;
  if ( (byte_4B1A8CD & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, method, v3);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B1A8CD = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)cam, 0LL, 0LL) || x == 3.4028e38 || y == 3.4028e38 )
  {
    if ( !byte_4B108BA )
    {
      sub_1BCA7E0(&UnityEngine_Vector2_TypeInfo, v9, v10);
      byte_4B108BA = 1;
    }
    static_fields = UnityEngine_Vector2_TypeInfo->static_fields;
    v17 = static_fields->zeroVector.fields.x;
    v18 = static_fields->zeroVector.fields.y;
  }
  else
  {
    v11 = CTouch_TypeInfo;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v9);
      v11 = CTouch_TypeInfo;
    }
    mScreenCam = v11->static_fields->mScreenCam;
    if ( !mScreenCam )
      goto LABEL_20;
    v23.fields.z = 0.0;
    v23.fields.x = x;
    v23.fields.y = y;
    UnityEngine_Camera__ScreenPointToRay_69960936(&v21, mScreenCam, v23, 0LL);
    mScreenCam = CTouch_TypeInfo->static_fields->mScreenCam;
    if ( !mScreenCam
      || (v14 = v21.fields.m_Origin.fields.x,
          v13 = v21.fields.m_Origin.fields.y,
          (mScreenCam = (UnityEngine_Camera_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)mScreenCam,
                                                  0LL)) == 0LL)
      || (lossyScale = (unsigned int)UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)mScreenCam, 0LL),
          (mScreenCam = CTouch_TypeInfo->static_fields->mScreenCam) == 0LL)
      || (v16 = *(float *)&lossyScale,
          (mScreenCam = (UnityEngine_Camera_o *)UnityEngine_Component__get_transform(
                                                  (UnityEngine_Component_o *)mScreenCam,
                                                  0LL)) == 0LL) )
    {
LABEL_20:
      sub_1BCAA3C(mScreenCam, v9);
    }
    v17 = v14 / v16;
    v24 = UnityEngine_Transform__get_lossyScale((UnityEngine_Transform_o *)mScreenCam, 0LL);
    v18 = v13 / v24.fields.y;
  }
  v20 = v17;
  result.fields.y = v18;
  result.fields.x = v20;
  return result;
}


UnityEngine_Vector2_o __fastcall CTouch__getScreenPosition_47128020(
        UnityEngine_Camera_o *cam,
        const MethodInfo *method)
{
  __int64 v2; // x2
  CTouch_c *v3; // x0
  const MethodInfo *v4; // x1
  float x; // s0
  float y; // s1
  UnityEngine_Vector2_o ScreenPosition_47127628; // kr00_8
  UnityEngine_Vector2_o TouchPos; // 0:s0.4,4:s1.4
  UnityEngine_Vector2_o result; // 0:s0.4,4:s1.4

  if ( (byte_4B1A8CC & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, method, v2);
    byte_4B1A8CC = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
  TouchPos = CTouch__GetTouchPos((const MethodInfo *)v3);
  ScreenPosition_47127628 = CTouch__getScreenPosition_47127628(TouchPos, CTouch_TypeInfo->static_fields->mScreenCam, v4);
  y = ScreenPosition_47127628.fields.y;
  x = ScreenPosition_47127628.fields.x;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


int32_t __fastcall CTouch__getTouchState(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  CTouch_c *v3; // x0

  if ( (byte_4B1A8BC & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, v1, v2);
    byte_4B1A8BC = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
    v3 = CTouch_TypeInfo;
  }
  return v3->static_fields->mState;
}


void __fastcall CTouch__init(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  CTouch_c *v3; // x0
  struct CTouch_StaticFields *static_fields; // x8

  if ( (byte_4B1A8B8 & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, v1, v2);
    byte_4B1A8B8 = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
    v3 = CTouch_TypeInfo;
  }
  static_fields = v3->static_fields;
  if ( !static_fields->mIsInitDone )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3, v1);
      static_fields = CTouch_TypeInfo->static_fields;
    }
    static_fields->mIsInitDone = 1;
    *(_WORD *)&static_fields->mIsClassEnabled = 257;
  }
}


bool __fastcall CTouch__isDrag(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  CTouch_c *v3; // x0
  __int64 v4; // x1
  CTouch_c *v5; // x0

  if ( (byte_4B1A8C6 & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, v1, v2);
    byte_4B1A8C6 = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
  if ( !CTouch__isDragMode((const MethodInfo *)v3) )
    return 0;
  v5 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v4);
  return CTouch__isTouchKeep((const MethodInfo *)v5);
}


bool __fastcall CTouch__isDragMode(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  CTouch_c *v3; // x0

  if ( (byte_4B1A8C5 & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, v1, v2);
    byte_4B1A8C5 = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
    v3 = CTouch_TypeInfo;
  }
  return v3->static_fields->mDragFrameCnt >= 0;
}


bool __fastcall CTouch__isFlick(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  CTouch_c *v3; // x0

  if ( (byte_4B1A8C1 & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, v1, v2);
    byte_4B1A8C1 = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
    v3 = CTouch_TypeInfo;
  }
  return CTouch__isFlick_47124844(v3->static_fields->FLICK_LEN, (const MethodInfo *)v3);
}


bool __fastcall CTouch__isFlick_47124844(float flickLen, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x2
  CTouch_c *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  CTouch_c *v8; // x0

  if ( (byte_4B1A8C2 & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, v2, v3);
    byte_4B1A8C2 = 1;
  }
  v5 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v2);
  if ( !CTouch__isTouchRelease((const MethodInfo *)v5) )
    return 0;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v6);
  if ( !byte_4B1A8DC )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, v6, v7);
    byte_4B1A8DC = 1;
  }
  v8 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v6);
    v8 = CTouch_TypeInfo;
  }
  return v8->static_fields->mScrPosDeltaLen >= flickLen;
}


bool __fastcall CTouch__isTouchKeep(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  CTouch_c *v3; // x0

  if ( (byte_4B1A8BF & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, v1, v2);
    byte_4B1A8BF = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
    v3 = CTouch_TypeInfo;
  }
  return v3->static_fields->mState == 2;
}


bool __fastcall CTouch__isTouchNone(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  CTouch_c *v3; // x0

  if ( (byte_4B1A8BD & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, v1, v2);
    byte_4B1A8BD = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
    v3 = CTouch_TypeInfo;
  }
  return v3->static_fields->mState == 0;
}


bool __fastcall CTouch__isTouchPush(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  CTouch_c *v3; // x0

  if ( (byte_4B1A8BE & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, v1, v2);
    byte_4B1A8BE = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
    v3 = CTouch_TypeInfo;
  }
  return v3->static_fields->mState == 1;
}


bool __fastcall CTouch__isTouchRelease(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  CTouch_c *v3; // x0

  if ( (byte_4B1A8C0 & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, v1, v2);
    byte_4B1A8C0 = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
    v3 = CTouch_TypeInfo;
  }
  return v3->static_fields->mState == 3;
}


void __fastcall CTouch__process(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  CTouch_c *v3; // x0
  struct CTouch_StaticFields *static_fields; // x8
  int32_t mProcessOldFrameCount; // w19
  int32_t frameCount; // w0
  __int64 v7; // x1
  CTouch_c *v8; // x8
  int32_t v9; // w19
  __int64 v10; // x1
  CTouch_c *v11; // x0
  __int64 v12; // x1
  CTouch_c *v13; // x0
  bool v14; // w0
  CTouch_c *v15; // x0

  if ( (byte_4B1A8BB & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, v1, v2);
    byte_4B1A8BB = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
    v3 = CTouch_TypeInfo;
  }
  static_fields = v3->static_fields;
  if ( static_fields->mIsInitDone )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3, v1);
      v3 = CTouch_TypeInfo;
      static_fields = CTouch_TypeInfo->static_fields;
    }
    if ( static_fields->mIsClassEnabled )
    {
      if ( !v3->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v3, v1);
        static_fields = CTouch_TypeInfo->static_fields;
      }
      mProcessOldFrameCount = static_fields->mProcessOldFrameCount;
      if ( mProcessOldFrameCount != UnityEngine_Time__get_frameCount(0LL) )
      {
        frameCount = UnityEngine_Time__get_frameCount(0LL);
        v8 = CTouch_TypeInfo;
        v9 = frameCount;
        if ( !CTouch_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v7);
          v8 = CTouch_TypeInfo;
        }
        v8->static_fields->mProcessOldFrameCount = v9;
        if ( !UnityEngine_Input__get_multiTouchEnabled(0LL) )
          goto LABEL_32;
        v11 = CTouch_TypeInfo;
        if ( !CTouch_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v10);
          v11 = CTouch_TypeInfo;
        }
        if ( !v11->static_fields->mIsReqMultiTouchEnabled )
        {
          if ( UnityEngine_Input__get_touchCount(0LL) > 0 )
          {
LABEL_27:
            v15 = CTouch_TypeInfo;
            if ( !CTouch_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v12);
            CTouch__processSingleTouch((const MethodInfo *)v15);
            return;
          }
          v14 = 0;
        }
        else
        {
LABEL_32:
          if ( UnityEngine_Input__get_multiTouchEnabled(0LL) )
            goto LABEL_27;
          v13 = CTouch_TypeInfo;
          if ( !CTouch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v12);
            v13 = CTouch_TypeInfo;
          }
          if ( !v13->static_fields->mIsReqMultiTouchEnabled )
            goto LABEL_27;
          v14 = 1;
        }
        UnityEngine_Input__set_multiTouchEnabled(v14, 0LL);
        goto LABEL_27;
      }
    }
  }
}


void __fastcall CTouch__processSingleTouch(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  const MethodInfo *v3; // x0
  const MethodInfo *v4; // x1
  CTouch_c *v5; // x0
  const MethodInfo *v6; // x1
  CTouch_c *v7; // x0
  struct UnityEngine_Touch_array *mTouch; // x20
  int32_t ValidTouchLastID; // w0
  _QWORD *p_image; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x0
  struct UnityEngine_Vector2_o ScreenPosition_47127516; // kr08_8
  CTouch_c *v14; // x0
  __int64 v15; // x8
  const MethodInfo *touchCount; // x0
  __int64 v17; // x1
  CTouch_c *v18; // x8
  struct CTouch_StaticFields *static_fields; // x9
  struct UnityEngine_Vector2_o mPosNow; // x10
  UnityEngine_Vector2_o v21; // x2
  struct UnityEngine_Vector2_o v22; // kr10_8
  CTouch_c *v23; // x0
  UnityEngine_Vector2_c *v24; // x8
  struct CTouch_StaticFields *v25; // x9
  struct CTouch_TouchEventHandler_o *MOnTouchPressEvent; // x8
  __int64 v27; // x8
  __int64 v28; // x8
  __int64 v29; // x8
  __int64 v30; // x8
  CTouch_c *v31; // x0
  struct CTouch_StaticFields *v32; // x9
  struct CTouch_TouchEventHandler_o *MOnTouchReleaseEvent; // x8
  CTouch_c *v34; // x0
  _BOOL8 isTouchKeep; // x0
  __int64 v36; // x1
  CTouch_c *v37; // x8
  struct CTouch_StaticFields *v38; // x9
  int32_t *p_mDragFrameCnt; // x9
  int32_t v40; // w10
  int32_t mDragFrameCnt; // t1
  struct CTouch_StaticFields *v42; // x9
  int32_t v43; // t1
  bool v44; // w0
  __int64 v45; // x1
  __int64 v46; // x2
  CTouch_c *v47; // x8
  struct CTouch_StaticFields *v48; // x9
  float32x2_t v49; // d8
  float32x2_t v50; // d9
  float32x2_t v51; // d8
  float v52; // s1
  struct CTouch_StaticFields *v53; // x9
  float DRAG_LEN; // s0
  struct CTouch_StaticFields *v55; // x8
  float mScrPosDeltaLen; // s0
  float32x2_t v57; // d8
  float32x2_t v58; // d0
  CTouch_c *v59; // x0
  struct CTouch_StaticFields *v60; // x20
  float y; // s8
  float x; // s9
  char v63[72]; // [xsp+8h] [xbp-118h] BYREF
  UnityEngine_Touch_o src; // [xsp+50h] [xbp-D0h] BYREF
  char dest[72]; // [xsp+98h] [xbp-88h] BYREF

  if ( (byte_4B1A8D2 & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, v1, v2);
    byte_4B1A8D2 = 1;
  }
  v3 = (const MethodInfo *)CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
    v3 = (const MethodInfo *)CTouch_TypeInfo;
  }
  *((_DWORD *)v3[2].virtualMethodPointer + 7) = 0;
  CTouch_TypeInfo->static_fields->mPosNow = CTouch__GetTouchPos(v3);
  if ( UnityEngine_Input__get_touchCount(0LL) < 1 )
    goto LABEL_17;
  v5 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v4);
  if ( CTouch__GetValidTouchCount((const MethodInfo *)v5) != 1 )
    goto LABEL_17;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v4);
  if ( (CTouch__GetValidTouchLastID(1, v4) & 0x80000000) == 0 )
  {
    v7 = CTouch_TypeInfo;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v6);
      v7 = CTouch_TypeInfo;
    }
    mTouch = v7->static_fields->mTouch;
    ValidTouchLastID = CTouch__GetValidTouchLastID(1, v6);
    UnityEngine_Input__GetTouch(&src, ValidTouchLastID, 0LL);
    p_image = memcpy(dest, &src, 0x44u);
    if ( !mTouch )
      goto LABEL_121;
    p_image = memcpy(v63, dest, 0x44u);
    if ( !mTouch->max_length )
      goto LABEL_122;
    memcpy(&mTouch->m_Items[0].fields.m_Position, v63, 0x44u);
LABEL_17:
    v12 = (const MethodInfo *)CTouch_TypeInfo;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v4);
      v12 = (const MethodInfo *)CTouch_TypeInfo;
    }
    *(_QWORD *)((char *)v12[2].virtualMethodPointer + 68) = *(_QWORD *)((char *)v12[2].virtualMethodPointer + 52);
    ScreenPosition_47127516 = CTouch__getScreenPosition_47127516(
                                *(UnityEngine_Vector2_o *)((char *)v12[2].virtualMethodPointer + 32),
                                v12);
    v14 = CTouch_TypeInfo;
    CTouch_TypeInfo->static_fields->mScrPosNow = ScreenPosition_47127516;
    if ( v14->static_fields->mIsTchNow )
      goto LABEL_40;
    if ( !v14->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v14, v11);
    if ( CTouch__GetValidTouchCount((const MethodInfo *)v14) != 1 )
      goto LABEL_40;
    if ( UnityEngine_Input__get_touchCount(0LL) >= 1 )
    {
      p_image = &CTouch_TypeInfo->_1.image;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v11);
        p_image = &CTouch_TypeInfo->_1.image;
      }
      v15 = *(_QWORD *)(p_image[23] + 8LL);
      if ( !v15 )
        goto LABEL_121;
      if ( !*(_DWORD *)(v15 + 24) )
        goto LABEL_122;
      if ( !UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v15 + 32), 0LL) )
        goto LABEL_30;
    }
    if ( !UnityEngine_Input__GetMouseButtonDown(0, 0LL) )
    {
LABEL_40:
      v23 = CTouch_TypeInfo;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v11);
        v23 = CTouch_TypeInfo;
      }
      if ( v23->static_fields->mIsTchNow )
      {
        if ( !v23->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v23, v11);
        if ( CTouch__GetValidTouchCount((const MethodInfo *)v23) == 1 )
        {
          p_image = &CTouch_TypeInfo->_1.image;
          if ( !CTouch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v11);
            p_image = &CTouch_TypeInfo->_1.image;
          }
          v27 = *(_QWORD *)(p_image[23] + 8LL);
          if ( !v27 )
            goto LABEL_121;
          if ( !*(_DWORD *)(v27 + 24) )
            goto LABEL_122;
          if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v27 + 32), 0LL) == 1 )
            goto LABEL_59;
          p_image = &CTouch_TypeInfo->_1.image;
          if ( !CTouch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v11);
            p_image = &CTouch_TypeInfo->_1.image;
          }
          v28 = *(_QWORD *)(p_image[23] + 8LL);
          if ( !v28 )
            goto LABEL_121;
          if ( !*(_DWORD *)(v28 + 24) )
            goto LABEL_122;
          if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v28 + 32), 0LL) == 2 )
            goto LABEL_59;
        }
        v23 = CTouch_TypeInfo;
        if ( !CTouch_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v11);
          v23 = CTouch_TypeInfo;
        }
        if ( v23->static_fields->mIsTchMouseNow )
        {
LABEL_59:
          v23 = CTouch_TypeInfo;
          if ( !CTouch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v11);
            v23 = CTouch_TypeInfo;
          }
          v23->static_fields->mState = 2;
        }
      }
    }
    else
    {
LABEL_30:
      touchCount = (const MethodInfo *)UnityEngine_Input__get_touchCount(0LL);
      v18 = CTouch_TypeInfo;
      if ( !(_DWORD)touchCount )
      {
        if ( !CTouch_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v17);
          v18 = CTouch_TypeInfo;
        }
        v18->static_fields->mIsTchMouseNow = 1;
      }
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18, v17);
        v18 = CTouch_TypeInfo;
      }
      static_fields = v18->static_fields;
      mPosNow = static_fields->mPosNow;
      static_fields->mIsTchNow = 1;
      static_fields->mState = 1;
      static_fields->mPosPush = mPosNow;
      v22 = CTouch__getScreenPosition_47127516(v18->static_fields->mPosPush, touchCount);
      v23 = CTouch_TypeInfo;
      CTouch_TypeInfo->static_fields->mScrPosPush = v22;
      v23->static_fields->mScrPosOld = v23->static_fields->mScrPosNow;
      if ( !byte_4B108BA )
      {
        sub_1BCA7E0(&UnityEngine_Vector2_TypeInfo, v11, v21);
        v23 = CTouch_TypeInfo;
        byte_4B108BA = 1;
      }
      v24 = UnityEngine_Vector2_TypeInfo;
      v23->static_fields->mScrPosDeltaOld = UnityEngine_Vector2_TypeInfo->static_fields->zeroVector;
      v23->static_fields->mScrPosDelta = v24->static_fields->zeroVector;
      v25 = v23->static_fields;
      MOnTouchPressEvent = v25->MOnTouchPressEvent;
      *(_QWORD *)&v25->mDragFrameCnt = 0xFFFFFFFFLL;
      if ( MOnTouchPressEvent )
      {
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))MOnTouchPressEvent->fields.m_target)(
          MOnTouchPressEvent->fields.original_method_info,
          *(_QWORD *)&MOnTouchPressEvent->fields.extra_arg);
        v23 = CTouch_TypeInfo;
      }
    }
    if ( !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23, v11);
      v23 = CTouch_TypeInfo;
    }
    if ( !v23->static_fields->mIsTchNow )
      goto LABEL_83;
    if ( !v23->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(v23, v11);
    if ( CTouch__GetValidTouchCount((const MethodInfo *)v23) != 1 )
    {
LABEL_78:
      if ( !UnityEngine_Input__GetMouseButtonUp(0, 0LL) )
      {
LABEL_83:
        v34 = CTouch_TypeInfo;
        if ( !CTouch_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v11);
        isTouchKeep = CTouch__isTouchKeep((const MethodInfo *)v34);
        v37 = CTouch_TypeInfo;
        if ( isTouchKeep )
        {
          if ( !CTouch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v36);
            v37 = CTouch_TypeInfo;
          }
          v38 = v37->static_fields;
          mDragFrameCnt = v38->mDragFrameCnt;
          p_mDragFrameCnt = &v38->mDragFrameCnt;
          v40 = mDragFrameCnt;
          if ( (mDragFrameCnt & 0x80000000) == 0 )
          {
            if ( !v37->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v37, v36);
              v37 = CTouch_TypeInfo;
              v42 = CTouch_TypeInfo->static_fields;
              v43 = v42->mDragFrameCnt;
              p_mDragFrameCnt = &v42->mDragFrameCnt;
              v40 = v43;
            }
            *p_mDragFrameCnt = v40 + 1;
          }
        }
        if ( !v37->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(v37, v36);
        v44 = CTouch__isTouchKeep((const MethodInfo *)isTouchKeep);
        v47 = CTouch_TypeInfo;
        if ( v44 )
        {
          if ( !CTouch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v45);
            v47 = CTouch_TypeInfo;
          }
          v48 = v47->static_fields;
          if ( (v48->mDragFrameCnt & 0x80000000) != 0 )
          {
            if ( !v47->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v47, v45);
              v48 = CTouch_TypeInfo->static_fields;
            }
            v49.n64_u64[0] = (unsigned __int64)v48->mScrPosNow;
            v50.n64_u64[0] = (unsigned __int64)v48->mScrPosPush;
            if ( !byte_4B109C2 )
            {
              sub_1BCA7E0(&System_Math_TypeInfo, v45, v46);
              byte_4B109C2 = 1;
            }
            v51.n64_u64[0] = vsub_f32(v49, v50).n64_u64[0];
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v45);
            v47 = CTouch_TypeInfo;
            v52 = sqrtf(vaddv_f32(vmul_f32(v51, v51)));
            v53 = CTouch_TypeInfo->static_fields;
            DRAG_LEN = v53->DRAG_LEN;
            v53->mDragLen = v52;
            if ( v52 >= DRAG_LEN )
            {
              if ( !v47->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(v47, v45);
                v47 = CTouch_TypeInfo;
                v53 = CTouch_TypeInfo->static_fields;
              }
              v53->mDragFrameCnt = 0;
            }
          }
        }
        if ( !v47->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v47, v45);
          v47 = CTouch_TypeInfo;
        }
        v47->static_fields->mScrPosDeltaOld = v47->static_fields->mScrPosDelta;
        v47->static_fields->mScrPosDelta = (struct UnityEngine_Vector2_o)vsub_f32(
                                                                           (float32x2_t)v47->static_fields->mScrPosNow,
                                                                           (float32x2_t)v47->static_fields->mScrPosOld).n64_u64[0];
        v55 = v47->static_fields;
        mScrPosDeltaLen = v55->mScrPosDeltaLen;
        v55->mScrPosDeltaLen = 0.0;
        v57.n64_u64[0] = (unsigned __int64)v55->mScrPosDelta;
        v55->mScrPosDeltaLenOld = mScrPosDeltaLen;
        if ( !byte_4B108BA )
        {
          sub_1BCA7E0(&UnityEngine_Vector2_TypeInfo, v45, v46);
          byte_4B108BA = 1;
        }
        v58.n64_u64[0] = vsub_f32(v57, (float32x2_t)UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).n64_u64[0];
        if ( vaddv_f32(vmul_f32(v58, v58)) >= 1.0e-10 )
        {
          v59 = CTouch_TypeInfo;
          if ( !CTouch_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v45);
            v59 = CTouch_TypeInfo;
          }
          v60 = v59->static_fields;
          if ( !byte_4B109C2 )
          {
            sub_1BCA7E0(&System_Math_TypeInfo, v45, v46);
            byte_4B109C2 = 1;
          }
          x = v60->mScrPosDelta.fields.x;
          y = v60->mScrPosDelta.fields.y;
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, v45);
          CTouch_TypeInfo->static_fields->mScrPosDeltaLen = sqrtf((float)(x * x) + (float)(y * y));
        }
        return;
      }
LABEL_79:
      v31 = CTouch_TypeInfo;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v11);
        v31 = CTouch_TypeInfo;
      }
      v32 = v31->static_fields;
      MOnTouchReleaseEvent = v32->MOnTouchReleaseEvent;
      *(_WORD *)&v32->mIsTchNow = 0;
      v32->mState = 3;
      if ( MOnTouchReleaseEvent )
        ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))MOnTouchReleaseEvent->fields.m_target)(
          MOnTouchReleaseEvent->fields.original_method_info,
          *(_QWORD *)&MOnTouchReleaseEvent->fields.extra_arg);
      goto LABEL_83;
    }
    p_image = &CTouch_TypeInfo->_1.image;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v11);
      p_image = &CTouch_TypeInfo->_1.image;
    }
    v29 = *(_QWORD *)(p_image[23] + 8LL);
    if ( v29 )
    {
      if ( !*(_DWORD *)(v29 + 24) )
        goto LABEL_122;
      if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v29 + 32), 0LL) == 3 )
        goto LABEL_79;
      p_image = &CTouch_TypeInfo->_1.image;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v11);
        p_image = &CTouch_TypeInfo->_1.image;
      }
      v30 = *(_QWORD *)(p_image[23] + 8LL);
      if ( v30 )
      {
        if ( *(_DWORD *)(v30 + 24) )
        {
          if ( UnityEngine_Touch__get_phase((UnityEngine_Touch_o *)(v30 + 32), 0LL) == 4 )
            goto LABEL_79;
          goto LABEL_78;
        }
LABEL_122:
        sub_1BCAA44(p_image, v11);
      }
    }
LABEL_121:
    sub_1BCAA3C(p_image, v11);
  }
}


void __fastcall CTouch__reboot(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  CTouch_c *v3; // x0

  if ( (byte_4B1A8B7 & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, v1, v2);
    byte_4B1A8B7 = 1;
  }
  v3 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v1);
    v3 = CTouch_TypeInfo;
  }
  v3->static_fields->mIsInitDone = 0;
}


void __fastcall CTouch__remove_MOnTouchPressEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  CTouch_c *v6; // x0
  System_Delegate_o *MOnTouchPressEvent; // x20
  System_Delegate_o *v8; // x0
  CTouch_TouchEventHandler_c *v9; // x1
  System_Delegate_o *v10; // x21
  CTouch_c *v11; // x0
  __int64 v12; // x0
  bool v13; // zf
  CTouch_TouchEventHandler_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4B1A8B4 & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, method, v2);
    sub_1BCA7E0(&CTouch_TouchEventHandler_TypeInfo, v4, v5);
    byte_4B1A8B4 = 1;
  }
  v6 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
    v6 = CTouch_TypeInfo;
  }
  MOnTouchPressEvent = (System_Delegate_o *)v6->static_fields->MOnTouchPressEvent;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(MOnTouchPressEvent, (System_Delegate_o *)value, 0LL);
    v10 = v8;
    if ( v8 )
    {
      v9 = CTouch_TouchEventHandler_TypeInfo;
      if ( (CTouch_TouchEventHandler_c *)v8->klass != CTouch_TouchEventHandler_TypeInfo )
        break;
    }
    v11 = CTouch_TypeInfo;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v9);
      v11 = CTouch_TypeInfo;
    }
    v12 = sub_1C05CD0(&v11->static_fields->MOnTouchPressEvent, v10, MOnTouchPressEvent);
    v13 = MOnTouchPressEvent == (System_Delegate_o *)v12;
    MOnTouchPressEvent = (System_Delegate_o *)v12;
    if ( v13 )
      return;
  }
  sub_1BCACFC(v8);
  CTouch__add_OnTouchPressEvent(v14, v15);
}


void __fastcall CTouch__remove_MOnTouchReleaseEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  CTouch_c *v6; // x0
  System_Delegate_o *MOnTouchReleaseEvent; // x20
  System_Delegate_o *v8; // x0
  CTouch_TouchEventHandler_c *v9; // x1
  System_Delegate_o *v10; // x21
  CTouch_c *v11; // x0
  __int64 v12; // x0
  bool v13; // zf
  CTouch_TouchEventHandler_o *v14; // x0
  const MethodInfo *v15; // x1

  if ( (byte_4B1A8B0 & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, method, v2);
    sub_1BCA7E0(&CTouch_TouchEventHandler_TypeInfo, v4, v5);
    byte_4B1A8B0 = 1;
  }
  v6 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
    v6 = CTouch_TypeInfo;
  }
  MOnTouchReleaseEvent = (System_Delegate_o *)v6->static_fields->MOnTouchReleaseEvent;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(MOnTouchReleaseEvent, (System_Delegate_o *)value, 0LL);
    v10 = v8;
    if ( v8 )
    {
      v9 = CTouch_TouchEventHandler_TypeInfo;
      if ( (CTouch_TouchEventHandler_c *)v8->klass != CTouch_TouchEventHandler_TypeInfo )
        break;
    }
    v11 = CTouch_TypeInfo;
    if ( !CTouch_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v9);
      v11 = CTouch_TypeInfo;
    }
    v12 = sub_1C05CD0(&v11->static_fields->MOnTouchReleaseEvent, v10, MOnTouchReleaseEvent);
    v13 = MOnTouchReleaseEvent == (System_Delegate_o *)v12;
    MOnTouchReleaseEvent = (System_Delegate_o *)v12;
    if ( v13 )
      return;
  }
  sub_1BCACFC(v8);
  CTouch__add_OnTouchReleaseEvent(v14, v15);
}


void __fastcall CTouch__remove_OnTouchPressEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1A8B6 & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, method, v2);
    byte_4B1A8B6 = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
  CTouch__remove_MOnTouchPressEvent(value, method);
}


void __fastcall CTouch__remove_OnTouchReleaseEvent(CTouch_TouchEventHandler_o *value, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B1A8B2 & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, method, v2);
    byte_4B1A8B2 = 1;
  }
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
  CTouch__remove_MOnTouchReleaseEvent(value, method);
}


void __fastcall CTouch__setParam(
        float flickLen,
        float dragLen,
        UnityEngine_Camera_o *screenCam,
        const MethodInfo *method)
{
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7
  CTouch_c *v13; // x0
  struct CTouch_StaticFields *static_fields; // x8
  struct CTouch_StaticFields *v15; // x0

  if ( (byte_4B1A8B9 & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, method, v4);
    byte_4B1A8B9 = 1;
  }
  v13 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
    v13 = CTouch_TypeInfo;
  }
  static_fields = v13->static_fields;
  if ( static_fields->mIsInitDone )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13, method);
      v13 = CTouch_TypeInfo;
      static_fields = CTouch_TypeInfo->static_fields;
    }
    static_fields->FLICK_LEN = flickLen;
    static_fields->DRAG_LEN = dragLen;
    if ( !byte_4B14050 )
    {
      sub_1BCA7E0(&CTouch_TypeInfo, method, v4);
      v13 = CTouch_TypeInfo;
      byte_4B14050 = 1;
    }
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13, method);
      v13 = CTouch_TypeInfo;
    }
    v15 = v13->static_fields;
    v15->mScreenCam = screenCam;
    sub_1BCA784((PartyOrganizationUtility_o *)&v15->mScreenCam, (int64_t)screenCam, v4, v5, v6, v7, v8, v9);
  }
}


void __fastcall CTouch__setScreenCamera(UnityEngine_Camera_o *cam, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  CTouch_c *v9; // x0
  struct CTouch_StaticFields *static_fields; // x0

  if ( (byte_4B1A8BA & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, method, v2);
    byte_4B1A8BA = 1;
  }
  v9 = CTouch_TypeInfo;
  if ( !CTouch_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, method);
    v9 = CTouch_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->mScreenCam = cam;
  sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->mScreenCam, (int64_t)cam, v2, v3, v4, v5, v6, v7);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CTouch_TouchEventHandler___ctor(
        CTouch_TouchEventHandler_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A137AC;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A1376C;
}


System_IAsyncResult_o *__fastcall CTouch_TouchEventHandler__BeginInvoke(
        CTouch_TouchEventHandler_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1BCA794(this, &v5, callback, object);
}


void __fastcall CTouch_TouchEventHandler__EndInvoke(
        CTouch_TouchEventHandler_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall CTouch_TouchEventHandler__Invoke(CTouch_TouchEventHandler_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}