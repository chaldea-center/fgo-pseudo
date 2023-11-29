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
  int32_t TouchCount; // w0
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  struct TouchDetectorBase_TouchInfo_o **v30; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
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
    sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v5, v6, v7, v8, v9, v10, v11);
    StartTouchInfo_k__BackingField = this->fields._StartTouchInfo_k__BackingField;
    p_CurrentTouchInfo_k__BackingField = &this->fields._CurrentTouchInfo_k__BackingField;
    this->fields._CurrentTouchInfo_k__BackingField = StartTouchInfo_k__BackingField;
LABEL_3:
    sub_B16F98(
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
        sub_B170D4();
      if ( TouchCount == TouchDetectorBase_TouchInfo__get_TouchCount(p_fields->_StartTouchInfo_k__BackingField, 0LL) )
      {
        v30 = &this->fields._CurrentTouchInfo_k__BackingField;
      }
      else
      {
        this->fields._StartTouchInfo_k__BackingField = v22;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields,
          (System_Int32_array **)v22,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29);
        this->fields._CurrentTouchInfo_k__BackingField = 0LL;
        v30 = &this->fields._CurrentTouchInfo_k__BackingField;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._CurrentTouchInfo_k__BackingField,
          0LL,
          v31,
          v32,
          v33,
          v34,
          v35,
          v36);
      }
      CurrentTouchInfo_k__BackingField = this->fields._CurrentTouchInfo_k__BackingField;
      this->fields._PrevTouchInfo_k__BackingField = CurrentTouchInfo_k__BackingField;
      sub_B16F98(
        (BattleServantConfConponent_o *)&this->fields._PrevTouchInfo_k__BackingField,
        (System_Int32_array **)CurrentTouchInfo_k__BackingField,
        v24,
        v25,
        v26,
        v27,
        v28,
        v29);
      p_CurrentTouchInfo_k__BackingField = v30;
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
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  System_Collections_Generic_List_Touch__o *v10; // x19
  int32_t v11; // w20
  __int64 v12; // x1
  CTouch_c *v13; // x0
  System_Collections_Generic_List_int__o *ignoreFingerIDList; // x22
  int32_t fingerId; // w0
  const MethodInfo_2EDD1F8 *v16; // x22
  char v18[72]; // [xsp+8h] [xbp-128h] BYREF
  UnityEngine_Touch_o v19; // [xsp+50h] [xbp-E0h] BYREF
  UnityEngine_Touch_o v20; // [xsp+98h] [xbp-98h] BYREF

  if ( (byte_40FB612 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Touch__Add__, v2);
    sub_B16FFC(&Method_System_Collections_Generic_List_int__Contains__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Touch___ctor__, v4);
    sub_B16FFC(&System_Collections_Generic_List_Touch__TypeInfo, v5);
    byte_40FB612 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v10 = (System_Collections_Generic_List_Touch__o *)sub_B170CC(
                                                      System_Collections_Generic_List_Touch__TypeInfo,
                                                      v6,
                                                      v7,
                                                      v8,
                                                      v9);
  System_Collections_Generic_List_Touch____ctor(
    v10,
    (const MethodInfo_2EDC3CC *)Method_System_Collections_Generic_List_Touch___ctor__);
  if ( UnityEngine_Input__get_touchCount(0LL) >= 1 )
  {
    v11 = 0;
    do
    {
      UnityEngine_Input__GetTouch(&v20, v11, 0LL);
      memcpy(&v19, &v20, sizeof(v19));
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      if ( !byte_40F6391 )
      {
        sub_B16FFC(&CTouch_TypeInfo, v12);
        byte_40F6391 = 1;
      }
      v13 = CTouch_TypeInfo;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v13 = CTouch_TypeInfo;
      }
      ignoreFingerIDList = v13->static_fields->ignoreFingerIDList;
      fingerId = UnityEngine_Touch__get_fingerId(&v19, 0LL);
      if ( !ignoreFingerIDList )
LABEL_19:
        sub_B170D4();
      if ( !System_Collections_Generic_List_int___Contains(
              ignoreFingerIDList,
              fingerId,
              (const MethodInfo_2F10944 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        memcpy(v18, &v19, 0x44u);
        if ( !v10 )
          goto LABEL_19;
        v16 = (const MethodInfo_2EDD1F8 *)Method_System_Collections_Generic_List_Touch__Add__;
        memcpy(&v20, v18, sizeof(v20));
        System_Collections_Generic_List_Touch___Add(v10, &v20, v16);
      }
      ++v11;
    }
    while ( v11 < UnityEngine_Input__get_touchCount(0LL) );
  }
  return v10;
}


// local variable allocation has failed, the output may be wrong!
TouchDetectorBase_TouchInfo_o *__fastcall MapTouchDetector__GetCurrentTouchInfo(
        MapTouchDetector_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  MapTouchDetector_o *v14; // x0
  const MethodInfo *v15; // x1
  System_Collections_Generic_List_Touch__o *AvaliableTouchList; // x0
  System_Collections_Generic_List_Touch__o *v17; // x20
  UnityEngine_Vector2_o position; // kr00_8
  UnityEngine_Vector2_o ScreenPosition_27639960; // kr08_8
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  System_Collections_Generic_List_Vector2__o *v24; // x19
  UnityEngine_Vector2_o v25; // kr10_8
  UnityEngine_Vector2_o v26; // kr18_8
  UnityEngine_Vector2_array *v27; // x20
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x3
  __int64 v31; // x4
  TouchDetectorBase_TouchInfo_o *v32; // x19
  System_Collections_Generic_List_Enumerator_T__o v34[3]; // [xsp+0h] [xbp-190h] BYREF
  UnityEngine_Touch_o v35; // [xsp+58h] [xbp-138h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+A0h] [xbp-F0h] BYREF
  UnityEngine_Touch_o v37; // [xsp+F8h] [xbp-98h] BYREF

  if ( (byte_40FB611 & 1) == 0 )
  {
    sub_B16FFC(&CTouch_TypeInfo, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__, v2);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Touch__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Vector2__Add__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Touch__GetEnumerator__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Touch__RemoveAt__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Vector2__ToArray__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_Vector2___ctor__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_Touch__get_Count__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_Touch__get_Item__, v11);
    sub_B16FFC(&System_Collections_Generic_List_Vector2__TypeInfo, v12);
    sub_B16FFC(&TouchDetectorBase_TouchInfo_TypeInfo, v13);
    byte_40FB611 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  memset(&v36, 0, 0x58u);
  v14 = (MapTouchDetector_o *)memset(&v35, 0, sizeof(v35));
  AvaliableTouchList = MapTouchDetector__GetAvaliableTouchList(v14, v15);
  if ( !AvaliableTouchList )
    goto LABEL_20;
  v17 = AvaliableTouchList;
  if ( AvaliableTouchList->fields._size < 1 )
    return 0LL;
  memmove(&v37, &AvaliableTouchList->fields._items->m_Items[0].fields.m_Position, 0x44u);
  position = UnityEngine_Touch__get_position(&v37, 0LL);
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  ScreenPosition_27639960 = CTouch__getScreenPosition_27639960(position, 0LL);
  System_Collections_Generic_List_Touch___RemoveAt(
    v17,
    0,
    (const MethodInfo_2EDF310 *)Method_System_Collections_Generic_List_Touch__RemoveAt__);
  v24 = (System_Collections_Generic_List_Vector2__o *)sub_B170CC(
                                                        System_Collections_Generic_List_Vector2__TypeInfo,
                                                        v20,
                                                        v21,
                                                        v22,
                                                        v23);
  System_Collections_Generic_List_Vector2____ctor(
    v24,
    (const MethodInfo_2E4A3CC *)Method_System_Collections_Generic_List_Vector2___ctor__);
  System_Collections_Generic_List_Touch___GetEnumerator(
    v34,
    v17,
    (const MethodInfo_2EDE2C4 *)Method_System_Collections_Generic_List_Touch__GetEnumerator__);
  memcpy(&v36, v34, 0x58u);
  while ( System_Collections_Generic_List_Enumerator_Touch___MoveNext(
            &v36,
            (const MethodInfo_2077738 *)Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__) )
  {
    memcpy(&v35, &v36.fields.current, sizeof(v35));
    v25 = UnityEngine_Touch__get_position(&v35, 0LL);
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v26 = CTouch__getScreenPosition_27639960(v25, 0LL);
    if ( !v24 )
      sub_B170D4();
    System_Collections_Generic_List_Vector2___Add(
      v24,
      v26,
      (const MethodInfo_2E4B130 *)Method_System_Collections_Generic_List_Vector2__Add__);
  }
  System_Collections_Generic_List_Enumerator_Touch___Dispose(
    &v36,
    (const MethodInfo_2077734 *)Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__);
  if ( !v24 )
LABEL_20:
    sub_B170D4();
  v27 = System_Collections_Generic_List_Vector2___ToArray(
          v24,
          (const MethodInfo_2E4D2F0 *)Method_System_Collections_Generic_List_Vector2__ToArray__);
  v32 = (TouchDetectorBase_TouchInfo_o *)sub_B170CC(TouchDetectorBase_TouchInfo_TypeInfo, v28, v29, v30, v31);
  TouchDetectorBase_TouchInfo___ctor(v32, ScreenPosition_27639960, v27, 0LL);
  return v32;
}


bool __fastcall MapTouchDetector__IsTouchKeep(MapTouchDetector_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  MapTouchDetector_o *v5; // x0
  const MethodInfo *v6; // x1
  System_Collections_Generic_List_Touch__o *AvaliableTouchList; // x0
  char v8; // w19
  int v9; // w20
  System_Collections_Generic_List_Enumerator_T__o v11[3]; // [xsp+8h] [xbp-118h] BYREF
  UnityEngine_Touch_o v12; // [xsp+60h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v13; // [xsp+A8h] [xbp-78h] BYREF

  if ( (byte_40FB610 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__, v2);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Touch__get_Current__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Touch__GetEnumerator__, v4);
    byte_40FB610 = 1;
  }
  memset(&v13, 0, 0x58u);
  v5 = (MapTouchDetector_o *)memset(&v12, 0, sizeof(v12));
  AvaliableTouchList = MapTouchDetector__GetAvaliableTouchList(v5, v6);
  if ( !AvaliableTouchList )
    sub_B170D4();
  System_Collections_Generic_List_Touch___GetEnumerator(
    v11,
    AvaliableTouchList,
    (const MethodInfo_2EDE2C4 *)Method_System_Collections_Generic_List_Touch__GetEnumerator__);
  memcpy(&v13, v11, 0x58u);
  while ( System_Collections_Generic_List_Enumerator_Touch___MoveNext(
            &v13,
            (const MethodInfo_2077738 *)Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__) )
  {
    memcpy(&v12, &v13.fields.current, sizeof(v12));
    if ( UnityEngine_Touch__get_phase(&v12, 0LL) == 1 || UnityEngine_Touch__get_phase(&v12, 0LL) == 2 )
    {
      v8 = 1;
      v9 = 9;
      goto LABEL_10;
    }
  }
  v8 = 0;
  v9 = 7;
LABEL_10:
  System_Collections_Generic_List_Enumerator_Touch___Dispose(
    &v13,
    (const MethodInfo_2077734 *)Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__);
  return (v9 == 9) & v8;
}


bool __fastcall MapTouchDetector__IsTouchStart(MapTouchDetector_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  char v7; // w8
  bool result; // w0
  System_Collections_Generic_List_Touch__o *AvaliableTouchList; // x0
  char v10; // w19
  int v11; // w20
  System_Collections_Generic_List_Enumerator_T__o v12[3]; // [xsp+8h] [xbp-118h] BYREF
  UnityEngine_Touch_o v13; // [xsp+60h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+A8h] [xbp-78h] BYREF

  if ( (byte_40FB60F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_Touch__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_Touch__GetEnumerator__, v5);
    byte_40FB60F = 1;
  }
  memset(&v14, 0, 0x58u);
  memset(&v13, 0, sizeof(v13));
  v7 = ((__int64 (__fastcall *)(MapTouchDetector_o *, Il2CppMethodPointer))this->klass->vtable._6_IsTouchKeep.method)(
         this,
         this->klass->vtable._7_GetCurrentTouchInfo.methodPtr);
  result = 0;
  if ( (v7 & 1) == 0 )
  {
    AvaliableTouchList = MapTouchDetector__GetAvaliableTouchList(0LL, v6);
    if ( !AvaliableTouchList )
      sub_B170D4();
    System_Collections_Generic_List_Touch___GetEnumerator(
      v12,
      AvaliableTouchList,
      (const MethodInfo_2EDE2C4 *)Method_System_Collections_Generic_List_Touch__GetEnumerator__);
    memcpy(&v14, v12, 0x58u);
    while ( System_Collections_Generic_List_Enumerator_Touch___MoveNext(
              &v14,
              (const MethodInfo_2077738 *)Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__) )
    {
      memcpy(&v13, &v14.fields.current, sizeof(v13));
      if ( !UnityEngine_Touch__get_phase(&v13, 0LL) )
      {
        v10 = 1;
        v11 = 8;
        goto LABEL_10;
      }
    }
    v10 = 0;
    v11 = 6;
LABEL_10:
    System_Collections_Generic_List_Enumerator_Touch___Dispose(
      &v14,
      (const MethodInfo_2077734 *)Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__);
    return (v11 == 8) & v10;
  }
  return result;
}