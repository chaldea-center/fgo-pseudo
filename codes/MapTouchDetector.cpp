void __fastcall MapTouchDetector___ctor(MapTouchDetector_o *this, const MethodInfo *method)
{
  TouchDetectorBase___ctor((TouchDetectorBase_o *)this, 0LL);
}


void __fastcall MapTouchDetector__DetectTouchLocally(MapTouchDetector_o *this, const MethodInfo *method)
{
  char v3; // w0
  MapTouchDetector_c *klass; // x8
  struct TouchDetectorBase_TouchInfo_o *v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  struct TouchDetectorBase_TouchInfo_o *StartTouchInfo_k__BackingField; // x1
  struct TouchDetectorBase_TouchInfo_o **p_CurrentTouchInfo_k__BackingField; // x0
  MapTouchDetector_Fields *p_fields; // x21
  TouchDetectorBase_TouchInfo_o *v21; // x0
  struct TouchDetectorBase_TouchInfo_o *v22; // x20
  __int64 TouchCount; // x0
  __int64 v24; // x1
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  struct TouchDetectorBase_TouchInfo_o **v31; // x21
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  struct TouchDetectorBase_TouchInfo_o *CurrentTouchInfo_k__BackingField; // x1

  v3 = ((__int64 (__fastcall *)(MapTouchDetector_o *, Il2CppMethodPointer))this->klass->vtable._5_IsTouchStart.method)(
         this,
         this->klass->vtable._6_IsTouchKeep.methodPtr);
  klass = this->klass;
  if ( (v3 & 1) != 0 )
  {
    v5 = (struct TouchDetectorBase_TouchInfo_o *)((__int64 (__fastcall *)(MapTouchDetector_o *, void *))klass->vtable._7_GetCurrentTouchInfo.method)(
                                                   this,
                                                   klass[1]._1.image);
    this->fields._StartTouchInfo_k__BackingField = v5;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
    StartTouchInfo_k__BackingField = this->fields._StartTouchInfo_k__BackingField;
    p_CurrentTouchInfo_k__BackingField = &this->fields._CurrentTouchInfo_k__BackingField;
    this->fields._CurrentTouchInfo_k__BackingField = StartTouchInfo_k__BackingField;
LABEL_3:
    sub_B5D560(
      (BattleServantConfConponent_o *)p_CurrentTouchInfo_k__BackingField,
      (System_Int32_array **)StartTouchInfo_k__BackingField,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    return;
  }
  if ( (((__int64 (__fastcall *)(MapTouchDetector_o *, Il2CppMethodPointer))klass->vtable._6_IsTouchKeep.method)(
          this,
          klass->vtable._7_GetCurrentTouchInfo.methodPtr) & 1) != 0
    && (p_fields = &this->fields, this->fields._StartTouchInfo_k__BackingField) )
  {
    v21 = (TouchDetectorBase_TouchInfo_o *)((__int64 (__fastcall *)(MapTouchDetector_o *, void *))this->klass->vtable._7_GetCurrentTouchInfo.method)(
                                             this,
                                             this->klass[1]._1.image);
    if ( v21 )
    {
      v22 = v21;
      TouchCount = TouchDetectorBase_TouchInfo__get_TouchCount(v21, 0LL);
      if ( !p_fields->_StartTouchInfo_k__BackingField )
        sub_B5D69C(TouchCount, v24);
      if ( (_DWORD)TouchCount == TouchDetectorBase_TouchInfo__get_TouchCount(
                                   p_fields->_StartTouchInfo_k__BackingField,
                                   0LL) )
      {
        v31 = &this->fields._CurrentTouchInfo_k__BackingField;
      }
      else
      {
        this->fields._StartTouchInfo_k__BackingField = v22;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields,
          (System_Int32_array **)v22,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30);
        this->fields._CurrentTouchInfo_k__BackingField = 0LL;
        v31 = &this->fields._CurrentTouchInfo_k__BackingField;
        sub_B5D560(
          (BattleServantConfConponent_o *)&this->fields._CurrentTouchInfo_k__BackingField,
          0LL,
          v32,
          v33,
          v34,
          v35,
          v36,
          v37);
      }
      CurrentTouchInfo_k__BackingField = this->fields._CurrentTouchInfo_k__BackingField;
      this->fields._PrevTouchInfo_k__BackingField = CurrentTouchInfo_k__BackingField;
      sub_B5D560(
        (BattleServantConfConponent_o *)&this->fields._PrevTouchInfo_k__BackingField,
        (System_Int32_array **)CurrentTouchInfo_k__BackingField,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
      p_CurrentTouchInfo_k__BackingField = v31;
      StartTouchInfo_k__BackingField = v22;
      this->fields._CurrentTouchInfo_k__BackingField = v22;
      goto LABEL_3;
    }
  }
  else
  {
    TouchDetectorBase__ClearTouchInfo((TouchDetectorBase_o *)this, 0LL);
  }
}


System_Collections_Generic_List_Touch__o *__fastcall MapTouchDetector__GetAvaliableTouchList(
        MapTouchDetector_o *this,
        const MethodInfo *method)
{
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  System_Collections_Generic_List_Touch__o *v16; // x19
  int32_t v17; // w20
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  CTouch_c *v21; // x0
  System_Collections_Generic_List_int__o *ignoreFingerIDList; // x22
  void *fingerId; // x0
  __int64 v24; // x1
  const MethodInfo_3028988 *v25; // x22
  char v27[72]; // [xsp+8h] [xbp-128h] BYREF
  UnityEngine_Touch_o v28; // [xsp+50h] [xbp-E0h] BYREF
  UnityEngine_Touch_o v29; // [xsp+98h] [xbp-98h] BYREF

  if ( (byte_42EBB43 & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Touch__Add__, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Touch___ctor__, v10, v11, v12);
    sub_B5D5C4(&System_Collections_Generic_List_Touch__TypeInfo, v13, v14, v15);
    byte_42EBB43 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  v16 = (System_Collections_Generic_List_Touch__o *)sub_B5D694(System_Collections_Generic_List_Touch__TypeInfo);
  System_Collections_Generic_List_Touch____ctor(
    v16,
    (const MethodInfo_3027B5C *)Method_System_Collections_Generic_List_Touch___ctor__);
  if ( UnityEngine_Input__get_touchCount(0LL) >= 1 )
  {
    v17 = 0;
    do
    {
      UnityEngine_Input__GetTouch(&v29, v17, 0LL);
      memcpy(&v28, &v29, sizeof(v28));
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      if ( !byte_42E4CBE )
      {
        sub_B5D5C4(&CTouch_TypeInfo, v18, v19, v20);
        byte_42E4CBE = 1;
      }
      v21 = CTouch_TypeInfo;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v21 = CTouch_TypeInfo;
      }
      ignoreFingerIDList = v21->static_fields->ignoreFingerIDList;
      fingerId = (void *)UnityEngine_Touch__get_fingerId(&v28, 0LL);
      if ( !ignoreFingerIDList )
LABEL_19:
        sub_B5D69C(fingerId, v24);
      if ( !System_Collections_Generic_List_int___Contains(
              ignoreFingerIDList,
              (int32_t)fingerId,
              (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        fingerId = memcpy(v27, &v28, 0x44u);
        if ( !v16 )
          goto LABEL_19;
        v25 = (const MethodInfo_3028988 *)Method_System_Collections_Generic_List_Touch__Add__;
        memcpy(&v29, v27, sizeof(v29));
        System_Collections_Generic_List_Touch___Add(v16, &v29, v25);
      }
      ++v17;
    }
    while ( v17 < UnityEngine_Input__get_touchCount(0LL) );
  }
  return v16;
}


// local variable allocation has failed, the output may be wrong!
TouchDetectorBase_TouchInfo_o *__fastcall MapTouchDetector__GetCurrentTouchInfo(
        MapTouchDetector_o *this,
        const MethodInfo *method)
{
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
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  MapTouchDetector_o *v40; // x0
  const MethodInfo *v41; // x1
  System_Collections_Generic_List_Touch__o *AvaliableTouchList; // x0
  __int64 v43; // x1
  System_Collections_Generic_List_Touch__o *v44; // x20
  UnityEngine_Vector2_o position; // kr00_8
  UnityEngine_Vector2_o ScreenPosition_30481740; // kr08_8
  System_Collections_Generic_List_Vector2__o *v47; // x19
  UnityEngine_Vector2_o v48; // kr10_8
  UnityEngine_Vector2_o v49; // x0
  UnityEngine_Vector2_o v50; // x1
  UnityEngine_Vector2_o v51; // kr18_8
  UnityEngine_Vector2_array *v52; // x20
  TouchDetectorBase_TouchInfo_o *v53; // x19
  System_Collections_Generic_List_Enumerator_T__o v55[3]; // [xsp+0h] [xbp-190h] BYREF
  UnityEngine_Touch_o v56; // [xsp+58h] [xbp-138h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v57; // [xsp+A0h] [xbp-F0h] BYREF
  UnityEngine_Touch_o v58; // [xsp+F8h] [xbp-98h] BYREF

  if ( (byte_42EBB42 & 1) == 0 )
  {
    sub_B5D5C4(&CTouch_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Touch__get_Current__, v10, v11, v12);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Vector2__Add__, v13, v14, v15);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Touch__GetEnumerator__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Touch__RemoveAt__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Vector2__ToArray__, v22, v23, v24);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Vector2___ctor__, v25, v26, v27);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Touch__get_Count__, v28, v29, v30);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Touch__get_Item__, v31, v32, v33);
    sub_B5D5C4(&System_Collections_Generic_List_Vector2__TypeInfo, v34, v35, v36);
    sub_B5D5C4(&TouchDetectorBase_TouchInfo_TypeInfo, v37, v38, v39);
    byte_42EBB42 = 1;
  }
  memset(&v58, 0, sizeof(v58));
  memset(&v57, 0, 0x58u);
  v40 = (MapTouchDetector_o *)memset(&v56, 0, sizeof(v56));
  AvaliableTouchList = MapTouchDetector__GetAvaliableTouchList(v40, v41);
  if ( !AvaliableTouchList )
    goto LABEL_20;
  v44 = AvaliableTouchList;
  if ( AvaliableTouchList->fields._size < 1 )
    return 0LL;
  memmove(&v58, &AvaliableTouchList->fields._items->m_Items[0].fields.m_Position, 0x44u);
  position = UnityEngine_Touch__get_position(&v58, 0LL);
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  ScreenPosition_30481740 = CTouch__getScreenPosition_30481740(position, 0LL);
  System_Collections_Generic_List_Touch___RemoveAt(
    v44,
    0,
    (const MethodInfo_302AAA0 *)Method_System_Collections_Generic_List_Touch__RemoveAt__);
  v47 = (System_Collections_Generic_List_Vector2__o *)sub_B5D694(System_Collections_Generic_List_Vector2__TypeInfo);
  System_Collections_Generic_List_Vector2____ctor(
    v47,
    (const MethodInfo_303D820 *)Method_System_Collections_Generic_List_Vector2___ctor__);
  System_Collections_Generic_List_Touch___GetEnumerator(
    v55,
    v44,
    (const MethodInfo_3029A54 *)Method_System_Collections_Generic_List_Touch__GetEnumerator__);
  memcpy(&v57, v55, 0x58u);
  while ( System_Collections_Generic_List_Enumerator_Touch___MoveNext(
            &v57,
            (const MethodInfo_22E8D3C *)Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__) )
  {
    memcpy(&v56, &v57.fields.current, sizeof(v56));
    v48 = UnityEngine_Touch__get_position(&v56, 0LL);
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v51 = CTouch__getScreenPosition_30481740(v48, 0LL);
    if ( !v47 )
      ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B5D69C)(v49, v50);
    System_Collections_Generic_List_Vector2___Add(
      v47,
      v51,
      (const MethodInfo_303E584 *)Method_System_Collections_Generic_List_Vector2__Add__);
  }
  System_Collections_Generic_List_Enumerator_Touch___Dispose(
    &v57,
    (const MethodInfo_22E8D38 *)Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__);
  if ( !v47 )
LABEL_20:
    sub_B5D69C(AvaliableTouchList, v43);
  v52 = System_Collections_Generic_List_Vector2___ToArray(
          v47,
          (const MethodInfo_3040744 *)Method_System_Collections_Generic_List_Vector2__ToArray__);
  v53 = (TouchDetectorBase_TouchInfo_o *)sub_B5D694(TouchDetectorBase_TouchInfo_TypeInfo);
  TouchDetectorBase_TouchInfo___ctor(v53, ScreenPosition_30481740, v52, 0LL);
  return v53;
}


bool __fastcall MapTouchDetector__IsTouchKeep(MapTouchDetector_o *this, const MethodInfo *method)
{
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
  MapTouchDetector_o *v13; // x0
  const MethodInfo *v14; // x1
  System_Collections_Generic_List_Touch__o *AvaliableTouchList; // x0
  __int64 v16; // x1
  char v17; // w19
  int v18; // w20
  System_Collections_Generic_List_Enumerator_T__o v20[3]; // [xsp+8h] [xbp-118h] BYREF
  UnityEngine_Touch_o v21; // [xsp+60h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+A8h] [xbp-78h] BYREF

  if ( (byte_42EBB41 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__, v4, v5, v6);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Touch__get_Current__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Touch__GetEnumerator__, v10, v11, v12);
    byte_42EBB41 = 1;
  }
  memset(&v22, 0, 0x58u);
  v13 = (MapTouchDetector_o *)memset(&v21, 0, sizeof(v21));
  AvaliableTouchList = MapTouchDetector__GetAvaliableTouchList(v13, v14);
  if ( !AvaliableTouchList )
    sub_B5D69C(0LL, v16);
  System_Collections_Generic_List_Touch___GetEnumerator(
    v20,
    AvaliableTouchList,
    (const MethodInfo_3029A54 *)Method_System_Collections_Generic_List_Touch__GetEnumerator__);
  memcpy(&v22, v20, 0x58u);
  while ( System_Collections_Generic_List_Enumerator_Touch___MoveNext(
            &v22,
            (const MethodInfo_22E8D3C *)Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__) )
  {
    memcpy(&v21, &v22.fields.current, sizeof(v21));
    if ( UnityEngine_Touch__get_phase(&v21, 0LL) == 1 || UnityEngine_Touch__get_phase(&v21, 0LL) == 2 )
    {
      v17 = 1;
      v18 = 9;
      goto LABEL_10;
    }
  }
  v17 = 0;
  v18 = 7;
LABEL_10:
  System_Collections_Generic_List_Enumerator_Touch___Dispose(
    &v22,
    (const MethodInfo_22E8D38 *)Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__);
  return (v18 == 9) & v17;
}


bool __fastcall MapTouchDetector__IsTouchStart(MapTouchDetector_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  const MethodInfo *v14; // x1
  char v15; // w8
  bool result; // w0
  System_Collections_Generic_List_Touch__o *AvaliableTouchList; // x0
  __int64 v18; // x1
  char v19; // w19
  int v20; // w20
  System_Collections_Generic_List_Enumerator_T__o v21[3]; // [xsp+8h] [xbp-118h] BYREF
  UnityEngine_Touch_o v22; // [xsp+60h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+A8h] [xbp-78h] BYREF

  if ( (byte_42EBB40 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_Touch__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Touch__GetEnumerator__, v11, v12, v13);
    byte_42EBB40 = 1;
  }
  memset(&v23, 0, 0x58u);
  memset(&v22, 0, sizeof(v22));
  v15 = ((__int64 (__fastcall *)(MapTouchDetector_o *, Il2CppMethodPointer))this->klass->vtable._6_IsTouchKeep.method)(
          this,
          this->klass->vtable._7_GetCurrentTouchInfo.methodPtr);
  result = 0;
  if ( (v15 & 1) == 0 )
  {
    AvaliableTouchList = MapTouchDetector__GetAvaliableTouchList(0LL, v14);
    if ( !AvaliableTouchList )
      sub_B5D69C(0LL, v18);
    System_Collections_Generic_List_Touch___GetEnumerator(
      v21,
      AvaliableTouchList,
      (const MethodInfo_3029A54 *)Method_System_Collections_Generic_List_Touch__GetEnumerator__);
    memcpy(&v23, v21, 0x58u);
    while ( System_Collections_Generic_List_Enumerator_Touch___MoveNext(
              &v23,
              (const MethodInfo_22E8D3C *)Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__) )
    {
      memcpy(&v22, &v23.fields.current, sizeof(v22));
      if ( !UnityEngine_Touch__get_phase(&v22, 0LL) )
      {
        v19 = 1;
        v20 = 8;
        goto LABEL_10;
      }
    }
    v19 = 0;
    v20 = 6;
LABEL_10:
    System_Collections_Generic_List_Enumerator_Touch___Dispose(
      &v23,
      (const MethodInfo_22E8D38 *)Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__);
    return (v20 == 8) & v19;
  }
  return result;
}