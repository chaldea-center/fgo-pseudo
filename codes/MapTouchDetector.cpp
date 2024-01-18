void __fastcall MapTouchDetector___ctor(MapTouchDetector_o *this, const MethodInfo *method)
{
  TouchDetectorBase___ctor((TouchDetectorBase_o *)this, 0LL);
}


void __fastcall MapTouchDetector__DetectTouchLocally(MapTouchDetector_o *this, const MethodInfo *method)
{
  char v3; // w0
  MapTouchDetector_c *klass; // x8
  struct TouchDetectorBase_TouchInfo_o *v5; // x0
  struct TouchDetectorBase_TouchInfo_o *StartTouchInfo_k__BackingField; // x1
  struct TouchDetectorBase_TouchInfo_o **p_CurrentTouchInfo_k__BackingField; // x0
  MapTouchDetector_Fields *p_fields; // x21
  TouchDetectorBase_TouchInfo_o *v9; // x0
  struct TouchDetectorBase_TouchInfo_o *v10; // x20
  __int64 TouchCount; // x0
  __int64 v12; // x1
  struct TouchDetectorBase_TouchInfo_o **v13; // x21
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
    sub_B2C2F8(&this->fields, v5);
    StartTouchInfo_k__BackingField = this->fields._StartTouchInfo_k__BackingField;
    p_CurrentTouchInfo_k__BackingField = &this->fields._CurrentTouchInfo_k__BackingField;
    this->fields._CurrentTouchInfo_k__BackingField = StartTouchInfo_k__BackingField;
LABEL_3:
    sub_B2C2F8(p_CurrentTouchInfo_k__BackingField, StartTouchInfo_k__BackingField);
    return;
  }
  if ( (((__int64 (__fastcall *)(MapTouchDetector_o *, Il2CppMethodPointer))klass->vtable._6_IsTouchKeep.method)(
          this,
          klass->vtable._7_GetCurrentTouchInfo.methodPtr) & 1) != 0
    && (p_fields = &this->fields, this->fields._StartTouchInfo_k__BackingField) )
  {
    v9 = (TouchDetectorBase_TouchInfo_o *)((__int64 (__fastcall *)(MapTouchDetector_o *, void *))this->klass->vtable._7_GetCurrentTouchInfo.method)(
                                            this,
                                            this->klass[1]._1.image);
    if ( v9 )
    {
      v10 = v9;
      TouchCount = TouchDetectorBase_TouchInfo__get_TouchCount(v9, 0LL);
      if ( !p_fields->_StartTouchInfo_k__BackingField )
        sub_B2C434(TouchCount, v12);
      if ( (_DWORD)TouchCount == TouchDetectorBase_TouchInfo__get_TouchCount(
                                   p_fields->_StartTouchInfo_k__BackingField,
                                   0LL) )
      {
        v13 = &this->fields._CurrentTouchInfo_k__BackingField;
      }
      else
      {
        this->fields._StartTouchInfo_k__BackingField = v10;
        sub_B2C2F8(&this->fields, v10);
        this->fields._CurrentTouchInfo_k__BackingField = 0LL;
        v13 = &this->fields._CurrentTouchInfo_k__BackingField;
        sub_B2C2F8(&this->fields._CurrentTouchInfo_k__BackingField, 0LL);
      }
      CurrentTouchInfo_k__BackingField = this->fields._CurrentTouchInfo_k__BackingField;
      this->fields._PrevTouchInfo_k__BackingField = CurrentTouchInfo_k__BackingField;
      sub_B2C2F8(&this->fields._PrevTouchInfo_k__BackingField, CurrentTouchInfo_k__BackingField);
      p_CurrentTouchInfo_k__BackingField = v13;
      StartTouchInfo_k__BackingField = v10;
      this->fields._CurrentTouchInfo_k__BackingField = v10;
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
  System_Collections_Generic_List_Touch__o *v6; // x19
  int32_t v7; // w20
  __int64 v8; // x1
  CTouch_c *v9; // x0
  System_Collections_Generic_List_int__o *ignoreFingerIDList; // x22
  void *fingerId; // x0
  __int64 v12; // x1
  const MethodInfo_2F19C84 *v13; // x22
  char v15[72]; // [xsp+8h] [xbp-128h] BYREF
  UnityEngine_Touch_o v16; // [xsp+50h] [xbp-E0h] BYREF
  UnityEngine_Touch_o v17; // [xsp+98h] [xbp-98h] BYREF

  if ( (byte_41858E1 & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Touch__Add__, v2);
    sub_B2C35C(&Method_System_Collections_Generic_List_int__Contains__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Touch___ctor__, v4);
    sub_B2C35C(&System_Collections_Generic_List_Touch__TypeInfo, v5);
    byte_41858E1 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  v6 = (System_Collections_Generic_List_Touch__o *)sub_B2C42C(System_Collections_Generic_List_Touch__TypeInfo);
  System_Collections_Generic_List_Touch____ctor(
    v6,
    (const MethodInfo_2F18E58 *)Method_System_Collections_Generic_List_Touch___ctor__);
  if ( UnityEngine_Input__get_touchCount(0LL) >= 1 )
  {
    v7 = 0;
    do
    {
      UnityEngine_Input__GetTouch(&v17, v7, 0LL);
      memcpy(&v16, &v17, sizeof(v16));
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      if ( !byte_4183DF9 )
      {
        sub_B2C35C(&CTouch_TypeInfo, v8);
        byte_4183DF9 = 1;
      }
      v9 = CTouch_TypeInfo;
      if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v9 = CTouch_TypeInfo;
      }
      ignoreFingerIDList = v9->static_fields->ignoreFingerIDList;
      fingerId = (void *)UnityEngine_Touch__get_fingerId(&v16, 0LL);
      if ( !ignoreFingerIDList )
LABEL_19:
        sub_B2C434(fingerId, v12);
      if ( !System_Collections_Generic_List_int___Contains(
              ignoreFingerIDList,
              (int32_t)fingerId,
              (const MethodInfo_2F6744C *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        fingerId = memcpy(v15, &v16, 0x44u);
        if ( !v6 )
          goto LABEL_19;
        v13 = (const MethodInfo_2F19C84 *)Method_System_Collections_Generic_List_Touch__Add__;
        memcpy(&v17, v15, sizeof(v17));
        System_Collections_Generic_List_Touch___Add(v6, &v17, v13);
      }
      ++v7;
    }
    while ( v7 < UnityEngine_Input__get_touchCount(0LL) );
  }
  return v6;
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
  __int64 v17; // x1
  System_Collections_Generic_List_Touch__o *v18; // x20
  UnityEngine_Vector2_o position; // kr00_8
  UnityEngine_Vector2_o ScreenPosition_28394880; // kr08_8
  System_Collections_Generic_List_Vector2__o *v21; // x19
  UnityEngine_Vector2_o v22; // kr10_8
  UnityEngine_Vector2_o v23; // x0
  UnityEngine_Vector2_o v24; // x1
  UnityEngine_Vector2_o v25; // kr18_8
  UnityEngine_Vector2_array *v26; // x20
  TouchDetectorBase_TouchInfo_o *v27; // x19
  System_Collections_Generic_List_Enumerator_T__o v29[3]; // [xsp+0h] [xbp-190h] BYREF
  UnityEngine_Touch_o v30; // [xsp+58h] [xbp-138h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v31; // [xsp+A0h] [xbp-F0h] BYREF
  UnityEngine_Touch_o v32; // [xsp+F8h] [xbp-98h] BYREF

  if ( (byte_41858E0 & 1) == 0 )
  {
    sub_B2C35C(&CTouch_TypeInfo, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__, v2);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Touch__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Vector2__Add__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Touch__GetEnumerator__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Touch__RemoveAt__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Vector2__ToArray__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_Vector2___ctor__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_Touch__get_Count__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_Touch__get_Item__, v11);
    sub_B2C35C(&System_Collections_Generic_List_Vector2__TypeInfo, v12);
    sub_B2C35C(&TouchDetectorBase_TouchInfo_TypeInfo, v13);
    byte_41858E0 = 1;
  }
  memset(&v32, 0, sizeof(v32));
  memset(&v31, 0, 0x58u);
  v14 = (MapTouchDetector_o *)memset(&v30, 0, sizeof(v30));
  AvaliableTouchList = MapTouchDetector__GetAvaliableTouchList(v14, v15);
  if ( !AvaliableTouchList )
    goto LABEL_20;
  v18 = AvaliableTouchList;
  if ( AvaliableTouchList->fields._size < 1 )
    return 0LL;
  memmove(&v32, &AvaliableTouchList->fields._items->m_Items[0].fields.m_Position, 0x44u);
  position = UnityEngine_Touch__get_position(&v32, 0LL);
  if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  ScreenPosition_28394880 = CTouch__getScreenPosition_28394880(position, 0LL);
  System_Collections_Generic_List_Touch___RemoveAt(
    v18,
    0,
    (const MethodInfo_2F1BD9C *)Method_System_Collections_Generic_List_Touch__RemoveAt__);
  v21 = (System_Collections_Generic_List_Vector2__o *)sub_B2C42C(System_Collections_Generic_List_Vector2__TypeInfo);
  System_Collections_Generic_List_Vector2____ctor(
    v21,
    (const MethodInfo_2EDA4C4 *)Method_System_Collections_Generic_List_Vector2___ctor__);
  System_Collections_Generic_List_Touch___GetEnumerator(
    v29,
    v18,
    (const MethodInfo_2F1AD50 *)Method_System_Collections_Generic_List_Touch__GetEnumerator__);
  memcpy(&v31, v29, 0x58u);
  while ( System_Collections_Generic_List_Enumerator_Touch___MoveNext(
            &v31,
            (const MethodInfo_20EDB10 *)Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__) )
  {
    memcpy(&v30, &v31.fields.current, sizeof(v30));
    v22 = UnityEngine_Touch__get_position(&v30, 0LL);
    if ( (BYTE3(CTouch_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v25 = CTouch__getScreenPosition_28394880(v22, 0LL);
    if ( !v21 )
      ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_B2C434)(v23, v24);
    System_Collections_Generic_List_Vector2___Add(
      v21,
      v25,
      (const MethodInfo_2EDB228 *)Method_System_Collections_Generic_List_Vector2__Add__);
  }
  System_Collections_Generic_List_Enumerator_Touch___Dispose(
    &v31,
    (const MethodInfo_20EDB0C *)Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__);
  if ( !v21 )
LABEL_20:
    sub_B2C434(AvaliableTouchList, v17);
  v26 = System_Collections_Generic_List_Vector2___ToArray(
          v21,
          (const MethodInfo_2EDD3E8 *)Method_System_Collections_Generic_List_Vector2__ToArray__);
  v27 = (TouchDetectorBase_TouchInfo_o *)sub_B2C42C(TouchDetectorBase_TouchInfo_TypeInfo);
  TouchDetectorBase_TouchInfo___ctor(v27, ScreenPosition_28394880, v26, 0LL);
  return v27;
}


bool __fastcall MapTouchDetector__IsTouchKeep(MapTouchDetector_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  MapTouchDetector_o *v5; // x0
  const MethodInfo *v6; // x1
  System_Collections_Generic_List_Touch__o *AvaliableTouchList; // x0
  __int64 v8; // x1
  char v9; // w19
  int v10; // w20
  System_Collections_Generic_List_Enumerator_T__o v12[3]; // [xsp+8h] [xbp-118h] BYREF
  UnityEngine_Touch_o v13; // [xsp+60h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v14; // [xsp+A8h] [xbp-78h] BYREF

  if ( (byte_41858DF & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__, v2);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Touch__get_Current__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Touch__GetEnumerator__, v4);
    byte_41858DF = 1;
  }
  memset(&v14, 0, 0x58u);
  v5 = (MapTouchDetector_o *)memset(&v13, 0, sizeof(v13));
  AvaliableTouchList = MapTouchDetector__GetAvaliableTouchList(v5, v6);
  if ( !AvaliableTouchList )
    sub_B2C434(0LL, v8);
  System_Collections_Generic_List_Touch___GetEnumerator(
    v12,
    AvaliableTouchList,
    (const MethodInfo_2F1AD50 *)Method_System_Collections_Generic_List_Touch__GetEnumerator__);
  memcpy(&v14, v12, 0x58u);
  while ( System_Collections_Generic_List_Enumerator_Touch___MoveNext(
            &v14,
            (const MethodInfo_20EDB10 *)Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__) )
  {
    memcpy(&v13, &v14.fields.current, sizeof(v13));
    if ( UnityEngine_Touch__get_phase(&v13, 0LL) == 1 || UnityEngine_Touch__get_phase(&v13, 0LL) == 2 )
    {
      v9 = 1;
      v10 = 9;
      goto LABEL_10;
    }
  }
  v9 = 0;
  v10 = 7;
LABEL_10:
  System_Collections_Generic_List_Enumerator_Touch___Dispose(
    &v14,
    (const MethodInfo_20EDB0C *)Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__);
  return (v10 == 9) & v9;
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
  __int64 v10; // x1
  char v11; // w19
  int v12; // w20
  System_Collections_Generic_List_Enumerator_T__o v13[3]; // [xsp+8h] [xbp-118h] BYREF
  UnityEngine_Touch_o v14; // [xsp+60h] [xbp-C0h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v15; // [xsp+A8h] [xbp-78h] BYREF

  if ( (byte_41858DE & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_Touch__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_Touch__GetEnumerator__, v5);
    byte_41858DE = 1;
  }
  memset(&v15, 0, 0x58u);
  memset(&v14, 0, sizeof(v14));
  v7 = ((__int64 (__fastcall *)(MapTouchDetector_o *, Il2CppMethodPointer))this->klass->vtable._6_IsTouchKeep.method)(
         this,
         this->klass->vtable._7_GetCurrentTouchInfo.methodPtr);
  result = 0;
  if ( (v7 & 1) == 0 )
  {
    AvaliableTouchList = MapTouchDetector__GetAvaliableTouchList(0LL, v6);
    if ( !AvaliableTouchList )
      sub_B2C434(0LL, v10);
    System_Collections_Generic_List_Touch___GetEnumerator(
      v13,
      AvaliableTouchList,
      (const MethodInfo_2F1AD50 *)Method_System_Collections_Generic_List_Touch__GetEnumerator__);
    memcpy(&v15, v13, 0x58u);
    while ( System_Collections_Generic_List_Enumerator_Touch___MoveNext(
              &v15,
              (const MethodInfo_20EDB10 *)Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__) )
    {
      memcpy(&v14, &v15.fields.current, sizeof(v14));
      if ( !UnityEngine_Touch__get_phase(&v14, 0LL) )
      {
        v11 = 1;
        v12 = 8;
        goto LABEL_10;
      }
    }
    v11 = 0;
    v12 = 6;
LABEL_10:
    System_Collections_Generic_List_Enumerator_Touch___Dispose(
      &v15,
      (const MethodInfo_20EDB0C *)Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__);
    return (v12 == 8) & v11;
  }
  return result;
}