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
    sub_B52920((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
    StartTouchInfo_k__BackingField = this->fields._StartTouchInfo_k__BackingField;
    p_CurrentTouchInfo_k__BackingField = &this->fields._CurrentTouchInfo_k__BackingField;
    this->fields._CurrentTouchInfo_k__BackingField = StartTouchInfo_k__BackingField;
LABEL_3:
    sub_B52920(
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
        sub_B52A5C(TouchCount, v24);
      if ( (_DWORD)TouchCount == TouchDetectorBase_TouchInfo__get_TouchCount(
                                   p_fields->_StartTouchInfo_k__BackingField,
                                   0LL) )
      {
        v31 = &this->fields._CurrentTouchInfo_k__BackingField;
      }
      else
      {
        this->fields._StartTouchInfo_k__BackingField = v22;
        sub_B52920(
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
        sub_B52920(
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
      sub_B52920(
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
  System_Collections_Generic_List_Touch__o *v2; // x19
  int32_t v3; // w20
  CTouch_c *v4; // x0
  System_Collections_Generic_List_int__o *ignoreFingerIDList; // x22
  void *fingerId; // x0
  __int64 v7; // x1
  const MethodInfo_2FDE954 *v8; // x22
  char v10[72]; // [xsp+8h] [xbp-128h] BYREF
  UnityEngine_Touch_o v11; // [xsp+50h] [xbp-E0h] BYREF
  UnityEngine_Touch_o v12; // [xsp+98h] [xbp-98h] BYREF

  if ( (byte_42B307C & 1) == 0 )
  {
    sub_B52984(&CTouch_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Touch__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_int__Contains__);
    sub_B52984(&Method_System_Collections_Generic_List_Touch___ctor__);
    sub_B52984(&System_Collections_Generic_List_Touch__TypeInfo);
    byte_42B307C = 1;
  }
  memset(&v11, 0, sizeof(v11));
  v2 = (System_Collections_Generic_List_Touch__o *)sub_B52A54(System_Collections_Generic_List_Touch__TypeInfo);
  System_Collections_Generic_List_Touch____ctor(
    v2,
    (const MethodInfo_2FDDB28 *)Method_System_Collections_Generic_List_Touch___ctor__);
  if ( UnityEngine_Input__get_touchCount(0LL) >= 1 )
  {
    v3 = 0;
    do
    {
      UnityEngine_Input__GetTouch(&v12, v3, 0LL);
      memcpy(&v11, &v12, sizeof(v11));
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      if ( !byte_42AC43E )
      {
        sub_B52984(&CTouch_TypeInfo);
        byte_42AC43E = 1;
      }
      v4 = CTouch_TypeInfo;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v4 = CTouch_TypeInfo;
      }
      ignoreFingerIDList = v4->static_fields->ignoreFingerIDList;
      fingerId = (void *)UnityEngine_Touch__get_fingerId(&v11, 0LL);
      if ( !ignoreFingerIDList )
LABEL_19:
        sub_B52A5C(fingerId, v7);
      if ( !System_Collections_Generic_List_int___Contains(
              ignoreFingerIDList,
              (int32_t)fingerId,
              (const MethodInfo_3057404 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        fingerId = memcpy(v10, &v11, 0x44u);
        if ( !v2 )
          goto LABEL_19;
        v8 = (const MethodInfo_2FDE954 *)Method_System_Collections_Generic_List_Touch__Add__;
        memcpy(&v12, v10, sizeof(v12));
        System_Collections_Generic_List_Touch___Add(v2, &v12, v8);
      }
      ++v3;
    }
    while ( v3 < UnityEngine_Input__get_touchCount(0LL) );
  }
  return v2;
}


// local variable allocation has failed, the output may be wrong!
TouchDetectorBase_TouchInfo_o *__fastcall MapTouchDetector__GetCurrentTouchInfo(
        MapTouchDetector_o *this,
        const MethodInfo *method)
{
  MapTouchDetector_o *v2; // x0
  const MethodInfo *v3; // x1
  System_Collections_Generic_List_Touch__o *AvaliableTouchList; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_Touch__o *v6; // x20
  UnityEngine_Vector2_o position; // kr00_8
  UnityEngine_Vector2_o ScreenPosition_27818792; // kr08_8
  System_Collections_Generic_List_Vector2__o *v9; // x19
  UnityEngine_Vector2_o v10; // kr10_8
  UnityEngine_Vector2_o v11; // x0
  UnityEngine_Vector2_o v12; // x1
  UnityEngine_Vector2_o v13; // kr18_8
  UnityEngine_Vector2_array *v14; // x20
  TouchDetectorBase_TouchInfo_o *v15; // x19
  System_Collections_Generic_List_Enumerator_T__o v17[3]; // [xsp+0h] [xbp-190h] BYREF
  UnityEngine_Touch_o v18; // [xsp+58h] [xbp-138h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+A0h] [xbp-F0h] BYREF
  UnityEngine_Touch_o v20; // [xsp+F8h] [xbp-98h] BYREF

  if ( (byte_42B307B & 1) == 0 )
  {
    sub_B52984(&CTouch_TypeInfo);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_Touch__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_Vector2__Add__);
    sub_B52984(&Method_System_Collections_Generic_List_Touch__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_Touch__RemoveAt__);
    sub_B52984(&Method_System_Collections_Generic_List_Vector2__ToArray__);
    sub_B52984(&Method_System_Collections_Generic_List_Vector2___ctor__);
    sub_B52984(&Method_System_Collections_Generic_List_Touch__get_Count__);
    sub_B52984(&Method_System_Collections_Generic_List_Touch__get_Item__);
    sub_B52984(&System_Collections_Generic_List_Vector2__TypeInfo);
    sub_B52984(&TouchDetectorBase_TouchInfo_TypeInfo);
    byte_42B307B = 1;
  }
  memset(&v20, 0, sizeof(v20));
  memset(&v19, 0, 0x58u);
  v2 = (MapTouchDetector_o *)memset(&v18, 0, sizeof(v18));
  AvaliableTouchList = MapTouchDetector__GetAvaliableTouchList(v2, v3);
  if ( !AvaliableTouchList )
    goto LABEL_20;
  v6 = AvaliableTouchList;
  if ( AvaliableTouchList->fields._size < 1 )
    return 0LL;
  memmove(&v20, &AvaliableTouchList->fields._items->m_Items[0].fields.m_Position, 0x44u);
  position = UnityEngine_Touch__get_position(&v20, 0LL);
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  ScreenPosition_27818792 = CTouch__getScreenPosition_27818792(position, 0LL);
  System_Collections_Generic_List_Touch___RemoveAt(
    v6,
    0,
    (const MethodInfo_2FE0A6C *)Method_System_Collections_Generic_List_Touch__RemoveAt__);
  v9 = (System_Collections_Generic_List_Vector2__o *)sub_B52A54(System_Collections_Generic_List_Vector2__TypeInfo);
  System_Collections_Generic_List_Vector2____ctor(
    v9,
    (const MethodInfo_302B60C *)Method_System_Collections_Generic_List_Vector2___ctor__);
  System_Collections_Generic_List_Touch___GetEnumerator(
    v17,
    v6,
    (const MethodInfo_2FDFA20 *)Method_System_Collections_Generic_List_Touch__GetEnumerator__);
  memcpy(&v19, v17, 0x58u);
  while ( System_Collections_Generic_List_Enumerator_Touch___MoveNext(
            &v19,
            (const MethodInfo_2309DF0 *)Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__) )
  {
    memcpy(&v18, &v19.fields.current, sizeof(v18));
    v10 = UnityEngine_Touch__get_position(&v18, 0LL);
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v13 = CTouch__getScreenPosition_27818792(v10, 0LL);
    if ( !v9 )
      ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B52A5C)(v11, v12);
    System_Collections_Generic_List_Vector2___Add(
      v9,
      v13,
      (const MethodInfo_302C370 *)Method_System_Collections_Generic_List_Vector2__Add__);
  }
  System_Collections_Generic_List_Enumerator_Touch___Dispose(
    &v19,
    (const MethodInfo_2309DEC *)Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__);
  if ( !v9 )
LABEL_20:
    sub_B52A5C(AvaliableTouchList, v5);
  v14 = System_Collections_Generic_List_Vector2___ToArray(
          v9,
          (const MethodInfo_302E530 *)Method_System_Collections_Generic_List_Vector2__ToArray__);
  v15 = (TouchDetectorBase_TouchInfo_o *)sub_B52A54(TouchDetectorBase_TouchInfo_TypeInfo);
  TouchDetectorBase_TouchInfo___ctor(v15, ScreenPosition_27818792, v14, 0LL);
  return v15;
}


bool __fastcall MapTouchDetector__IsTouchKeep(MapTouchDetector_o *this, const MethodInfo *method)
{
  MapTouchDetector_o *v2; // x0
  const MethodInfo *v3; // x1
  System_Collections_Generic_List_Touch__o *AvaliableTouchList; // x0
  __int64 v5; // x1
  char v6; // w19
  int v7; // w20
  System_Collections_Generic_List_Enumerator_T__o v9[3]; // [xsp+8h] [xbp-118h] BYREF
  UnityEngine_Touch_o v10; // [xsp+60h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+A8h] [xbp-78h] BYREF

  if ( (byte_42B307A & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_Touch__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_Touch__GetEnumerator__);
    byte_42B307A = 1;
  }
  memset(&v11, 0, 0x58u);
  v2 = (MapTouchDetector_o *)memset(&v10, 0, sizeof(v10));
  AvaliableTouchList = MapTouchDetector__GetAvaliableTouchList(v2, v3);
  if ( !AvaliableTouchList )
    sub_B52A5C(0LL, v5);
  System_Collections_Generic_List_Touch___GetEnumerator(
    v9,
    AvaliableTouchList,
    (const MethodInfo_2FDFA20 *)Method_System_Collections_Generic_List_Touch__GetEnumerator__);
  memcpy(&v11, v9, 0x58u);
  while ( System_Collections_Generic_List_Enumerator_Touch___MoveNext(
            &v11,
            (const MethodInfo_2309DF0 *)Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__) )
  {
    memcpy(&v10, &v11.fields.current, sizeof(v10));
    if ( UnityEngine_Touch__get_phase(&v10, 0LL) == 1 || UnityEngine_Touch__get_phase(&v10, 0LL) == 2 )
    {
      v6 = 1;
      v7 = 9;
      goto LABEL_10;
    }
  }
  v6 = 0;
  v7 = 7;
LABEL_10:
  System_Collections_Generic_List_Enumerator_Touch___Dispose(
    &v11,
    (const MethodInfo_2309DEC *)Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__);
  return (v7 == 9) & v6;
}


bool __fastcall MapTouchDetector__IsTouchStart(MapTouchDetector_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  char v4; // w8
  bool result; // w0
  System_Collections_Generic_List_Touch__o *AvaliableTouchList; // x0
  __int64 v7; // x1
  char v8; // w19
  int v9; // w20
  System_Collections_Generic_List_Enumerator_T__o v10[3]; // [xsp+8h] [xbp-118h] BYREF
  UnityEngine_Touch_o v11; // [xsp+60h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v12; // [xsp+A8h] [xbp-78h] BYREF

  if ( (byte_42B3079 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_Touch__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_Touch__GetEnumerator__);
    byte_42B3079 = 1;
  }
  memset(&v12, 0, 0x58u);
  memset(&v11, 0, sizeof(v11));
  v4 = ((__int64 (__fastcall *)(MapTouchDetector_o *, Il2CppMethodPointer))this->klass->vtable._6_IsTouchKeep.method)(
         this,
         this->klass->vtable._7_GetCurrentTouchInfo.methodPtr);
  result = 0;
  if ( (v4 & 1) == 0 )
  {
    AvaliableTouchList = MapTouchDetector__GetAvaliableTouchList(0LL, v3);
    if ( !AvaliableTouchList )
      sub_B52A5C(0LL, v7);
    System_Collections_Generic_List_Touch___GetEnumerator(
      v10,
      AvaliableTouchList,
      (const MethodInfo_2FDFA20 *)Method_System_Collections_Generic_List_Touch__GetEnumerator__);
    memcpy(&v12, v10, 0x58u);
    while ( System_Collections_Generic_List_Enumerator_Touch___MoveNext(
              &v12,
              (const MethodInfo_2309DF0 *)Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__) )
    {
      memcpy(&v11, &v12.fields.current, sizeof(v11));
      if ( !UnityEngine_Touch__get_phase(&v11, 0LL) )
      {
        v8 = 1;
        v9 = 8;
        goto LABEL_10;
      }
    }
    v8 = 0;
    v9 = 6;
LABEL_10:
    System_Collections_Generic_List_Enumerator_Touch___Dispose(
      &v12,
      (const MethodInfo_2309DEC *)Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__);
    return (v9 == 8) & v8;
  }
  return result;
}