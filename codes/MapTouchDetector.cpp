void MapTouchDetector___ctor(MapTouchDetector_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MapTouchDetector__DetectTouchLocally(MapTouchDetector_o *this, const MethodInfo *method)
{
  char v3; // w0
  MapTouchDetector_c *klass; // x8
  struct TouchDetectorBase_TouchInfo_o *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  struct TouchDetectorBase_TouchInfo_o *StartTouchInfo_k__BackingField; // x1
  struct TouchDetectorBase_TouchInfo_o **p_CurrentTouchInfo_k__BackingField; // x0
  const MethodInfo *v20; // x1
  MapTouchDetector_Fields *p_fields; // x21
  TouchDetectorBase_TouchInfo_o *v22; // x0
  const MethodInfo *v23; // x1
  struct TouchDetectorBase_TouchInfo_o *v24; // x20
  __int64 TouchCount; // x0
  const MethodInfo *v26; // x1
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7
  struct TouchDetectorBase_TouchInfo_o *CurrentTouchInfo_k__BackingField; // x1

  v3 = ((__int64 (__fastcall *)(MapTouchDetector_o *, const MethodInfo *))this->klass->vtable._5_IsTouchStart.methodPtr)(
         this,
         this->klass->vtable._5_IsTouchStart.method);
  klass = this->klass;
  if ( (v3 & 1) != 0 )
  {
    v5 = (struct TouchDetectorBase_TouchInfo_o *)((__int64 (__fastcall *)(MapTouchDetector_o *, const MethodInfo *))klass->vtable._7_GetCurrentTouchInfo.methodPtr)(
                                                   this,
                                                   klass->vtable._7_GetCurrentTouchInfo.method);
    this->fields._StartTouchInfo_k__BackingField = v5;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v5, v6, v7, v8, v9, v10, v11);
    StartTouchInfo_k__BackingField = this->fields._StartTouchInfo_k__BackingField;
    this->fields._CurrentTouchInfo_k__BackingField = StartTouchInfo_k__BackingField;
    p_CurrentTouchInfo_k__BackingField = &this->fields._CurrentTouchInfo_k__BackingField;
LABEL_3:
    sub_1C9403C(
      (GrandQuestFolderBoardItem_o *)p_CurrentTouchInfo_k__BackingField,
      (int32_t)StartTouchInfo_k__BackingField,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
    return;
  }
  if ( (((__int64 (__fastcall *)(MapTouchDetector_o *, const MethodInfo *))klass->vtable._6_IsTouchKeep.methodPtr)(
          this,
          klass->vtable._6_IsTouchKeep.method)
      & 1) != 0
    && (p_fields = &this->fields, this->fields._StartTouchInfo_k__BackingField) )
  {
    v22 = (TouchDetectorBase_TouchInfo_o *)((__int64 (__fastcall *)(MapTouchDetector_o *, const MethodInfo *))this->klass->vtable._7_GetCurrentTouchInfo.methodPtr)(
                                             this,
                                             this->klass->vtable._7_GetCurrentTouchInfo.method);
    if ( v22 )
    {
      v24 = v22;
      TouchCount = TouchDetectorBase_TouchInfo__get_TouchCount(v22, v23);
      if ( !p_fields->_StartTouchInfo_k__BackingField )
        sub_1C942F0(TouchCount, v26);
      if ( (_DWORD)TouchCount != TouchDetectorBase_TouchInfo__get_TouchCount(
                                   p_fields->_StartTouchInfo_k__BackingField,
                                   v26) )
      {
        this->fields._StartTouchInfo_k__BackingField = v24;
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v24, v27, v28, v29, v30, v31, v32);
        this->fields._CurrentTouchInfo_k__BackingField = 0;
        sub_1C9403C(
          (GrandQuestFolderBoardItem_o *)&this->fields._CurrentTouchInfo_k__BackingField,
          0,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
      }
      CurrentTouchInfo_k__BackingField = this->fields._CurrentTouchInfo_k__BackingField;
      this->fields._PrevTouchInfo_k__BackingField = CurrentTouchInfo_k__BackingField;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&this->fields._PrevTouchInfo_k__BackingField,
        (int32_t)CurrentTouchInfo_k__BackingField,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
      p_CurrentTouchInfo_k__BackingField = &this->fields._CurrentTouchInfo_k__BackingField;
      LODWORD(StartTouchInfo_k__BackingField) = (_DWORD)v24;
      this->fields._CurrentTouchInfo_k__BackingField = v24;
      goto LABEL_3;
    }
  }
  else
  {
    TouchDetectorBase__ClearTouchInfo((TouchDetectorBase_o *)this, v20);
  }
}


System_Collections_Generic_List_Touch__o *MapTouchDetector__GetAvaliableTouchList(
        MapTouchDetector_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_Touch__o *v2; // x19
  int32_t v3; // w20
  CTouch_c *v4; // x0
  System_Collections_Generic_List_int__o *ignoreFingerIDList; // x22
  void *fingerId; // x0
  __int64 v7; // x1
  _QWORD *v8; // x22
  struct UnityEngine_Touch_array *items; // x8
  __int64 size; // x9
  const MethodInfo_38ABC64 *v11; // x22
  _BYTE v13[72]; // [xsp+8h] [xbp-188h] BYREF
  UnityEngine_Touch_o dest; // [xsp+50h] [xbp-140h] BYREF
  _BYTE v15[72]; // [xsp+A0h] [xbp-F0h] BYREF
  UnityEngine_Touch_o src; // [xsp+E8h] [xbp-A8h] BYREF

  if ( (byte_4D28F97 & 1) == 0 )
  {
    sub_1C94098(&CTouch_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Touch__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C94098(&Method_System_Collections_Generic_List_Touch___ctor__);
    sub_1C94098(&System_Collections_Generic_List_Touch__TypeInfo);
    byte_4D28F97 = 1;
  }
  memset(&dest, 0, sizeof(dest));
  v2 = (System_Collections_Generic_List_Touch__o *)sub_1C942E4(System_Collections_Generic_List_Touch__TypeInfo);
  System_Collections_Generic_List_Touch____ctor(
    v2,
    (const MethodInfo_38AB348 *)Method_System_Collections_Generic_List_Touch___ctor__);
  if ( UnityEngine_Input__get_touchCount(0) >= 1 )
  {
    v3 = 0;
    while ( 1 )
    {
      UnityEngine_Input__GetTouch(&src, v3, 0);
      memcpy(&dest, &src, sizeof(dest));
      if ( !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      if ( !byte_4D28FD2 )
      {
        sub_1C94098(&CTouch_TypeInfo);
        byte_4D28FD2 = 1;
      }
      v4 = CTouch_TypeInfo;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v4 = CTouch_TypeInfo;
      }
      ignoreFingerIDList = v4->static_fields->ignoreFingerIDList;
      fingerId = (void *)UnityEngine_Touch__get_fingerId(&dest, 0);
      if ( !ignoreFingerIDList )
        break;
      if ( !System_Collections_Generic_List_int___Contains(
              ignoreFingerIDList,
              (int32_t)fingerId,
              (const MethodInfo_384E188 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        fingerId = memcpy(v13, &dest, 0x44u);
        if ( !v2 )
          break;
        v8 = Method_System_Collections_Generic_List_Touch__Add__;
        fingerId = memcpy(v15, v13, 0x44u);
        items = v2->fields._items;
        ++v2->fields._version;
        if ( !items )
          break;
        size = v2->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          v11 = *(const MethodInfo_38ABC64 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL);
          memcpy(&src, v15, sizeof(src));
          System_Collections_Generic_List_Touch___AddWithResize(v2, &src, v11);
        }
        else
        {
          v2->fields._size = size + 1;
          memcpy(&items->m_Items[size], v15, sizeof(items->m_Items[size]));
        }
      }
      if ( ++v3 >= UnityEngine_Input__get_touchCount(0) )
        return v2;
    }
    sub_1C942F0(fingerId, v7);
  }
  return v2;
}


TouchDetectorBase_TouchInfo_o *MapTouchDetector__GetCurrentTouchInfo(
        MapTouchDetector_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_Touch__o *AvaliableTouchList; // x0
  __int64 v3; // x1
  System_Collections_Generic_List_Touch__o *v4; // x20
  UnityEngine_Vector2_o position; // kr00_8
  UnityEngine_Vector2_o ScreenPosition_49740920; // kr08_8
  System_Collections_Generic_List_Vector2__o *v7; // x19
  UnityEngine_Vector2_o v8; // kr10_8
  UnityEngine_Vector2_o v9; // x0
  UnityEngine_Vector2_o v10; // x1
  UnityEngine_Vector2_o v11; // kr18_8
  struct UnityEngine_Vector2_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  UnityEngine_Vector2_array *v15; // x20
  TouchDetectorBase_TouchInfo_o *v16; // x19
  const MethodInfo *v17; // x2
  UnityEngine_Touch_o src; // [xsp+8h] [xbp-1D8h] BYREF
  UnityEngine_Touch_o v20; // [xsp+60h] [xbp-180h] BYREF
  _BYTE v21[80]; // [xsp+B0h] [xbp-130h] BYREF
  __int64 v22; // [xsp+100h] [xbp-E0h]
  UnityEngine_Touch_o dest; // [xsp+110h] [xbp-D0h] BYREF

  if ( (byte_4D28F96 & 1) == 0 )
  {
    sub_1C94098(&CTouch_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_Touch__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_Vector2__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_Touch__GetEnumerator__);
    sub_1C94098(&Method_System_Collections_Generic_List_Touch__RemoveAt__);
    sub_1C94098(&Method_System_Collections_Generic_List_Vector2__ToArray__);
    sub_1C94098(&Method_System_Collections_Generic_List_Vector2___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_List_Touch__get_Count__);
    sub_1C94098(&Method_System_Collections_Generic_List_Touch__get_Item__);
    sub_1C94098(&System_Collections_Generic_List_Vector2__TypeInfo);
    this = (MapTouchDetector_o *)sub_1C94098(&TouchDetectorBase_TouchInfo_TypeInfo);
    byte_4D28F96 = 1;
  }
  v22 = 0;
  memset(&dest, 0, sizeof(dest));
  memset(v21, 0, sizeof(v21));
  memset(&v20, 0, sizeof(v20));
  AvaliableTouchList = MapTouchDetector__GetAvaliableTouchList(this, method);
  if ( !AvaliableTouchList )
    goto LABEL_22;
  v4 = AvaliableTouchList;
  if ( AvaliableTouchList->fields._size < 1 )
    return 0;
  System_Collections_Generic_List_Touch___get_Item(
    &src,
    AvaliableTouchList,
    0,
    (const MethodInfo_38AB8AC *)Method_System_Collections_Generic_List_Touch__get_Item__);
  memcpy(&dest, &src, sizeof(dest));
  position = UnityEngine_Touch__get_position(&dest, 0);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  ScreenPosition_49740920 = CTouch__getScreenPosition_49740920(position, 0);
  System_Collections_Generic_List_Touch___RemoveAt(
    v4,
    0,
    (const MethodInfo_38AD960 *)Method_System_Collections_Generic_List_Touch__RemoveAt__);
  v7 = (System_Collections_Generic_List_Vector2__o *)sub_1C942E4(System_Collections_Generic_List_Vector2__TypeInfo);
  System_Collections_Generic_List_Vector2____ctor(
    v7,
    (const MethodInfo_38EA3F4 *)Method_System_Collections_Generic_List_Vector2___ctor__);
  System_Collections_Generic_List_Touch___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&src,
    v4,
    (const MethodInfo_38ACA80 *)Method_System_Collections_Generic_List_Touch__GetEnumerator__);
  memcpy(v21, &src, 0x58u);
  while ( System_Collections_Generic_List_Enumerator_Touch___MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)v21,
            (const MethodInfo_35F127C *)Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__) )
  {
    memcpy(&v20, &v21[16], sizeof(v20));
    v8 = UnityEngine_Touch__get_position(&v20, 0);
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v11 = CTouch__getScreenPosition_49740920(v8, 0);
    if ( !v7 )
      ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C942F0)(v9, v10);
    items = v7->fields._items;
    v13 = Method_System_Collections_Generic_List_Vector2__Add__;
    ++v7->fields._version;
    if ( !items )
      ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C942F0)(v9, v10);
    size = v7->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_Vector2___AddWithResize(
        v7,
        v11,
        *(const MethodInfo_38EAC5C **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    }
    else
    {
      v7->fields._size = size + 1;
      items->m_Items[size] = v11;
    }
  }
  System_Collections_Generic_List_Enumerator_Touch___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)v21,
    (const MethodInfo_35F1278 *)Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__);
  if ( !v7 )
LABEL_22:
    sub_1C942F0(AvaliableTouchList, v3);
  v15 = System_Collections_Generic_List_Vector2___ToArray(
          v7,
          (const MethodInfo_38EC778 *)Method_System_Collections_Generic_List_Vector2__ToArray__);
  v16 = (TouchDetectorBase_TouchInfo_o *)sub_1C942E4(TouchDetectorBase_TouchInfo_TypeInfo);
  TouchDetectorBase_TouchInfo___ctor(v16, ScreenPosition_49740920, v15, v17);
  return v16;
}


bool MapTouchDetector__IsTouchKeep(MapTouchDetector_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_Touch__o *AvaliableTouchList; // x0
  __int64 v3; // x1
  char v4; // w19
  int v5; // w21
  System_Collections_Generic_List_Enumerator_T__o src[3]; // [xsp+8h] [xbp-138h] BYREF
  UnityEngine_Touch_o v8; // [xsp+60h] [xbp-E0h] BYREF
  _BYTE dest[80]; // [xsp+B0h] [xbp-90h] BYREF
  __int64 v10; // [xsp+100h] [xbp-40h]

  if ( (byte_4D28F95 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_Touch__get_Current__);
    this = (MapTouchDetector_o *)sub_1C94098(&Method_System_Collections_Generic_List_Touch__GetEnumerator__);
    byte_4D28F95 = 1;
  }
  v10 = 0;
  memset(dest, 0, sizeof(dest));
  memset(&v8, 0, sizeof(v8));
  AvaliableTouchList = MapTouchDetector__GetAvaliableTouchList(this, method);
  if ( !AvaliableTouchList )
    sub_1C942F0(0, v3);
  System_Collections_Generic_List_Touch___GetEnumerator(
    src,
    AvaliableTouchList,
    (const MethodInfo_38ACA80 *)Method_System_Collections_Generic_List_Touch__GetEnumerator__);
  memcpy(dest, src, 0x58u);
  while ( System_Collections_Generic_List_Enumerator_Touch___MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)dest,
            (const MethodInfo_35F127C *)Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__) )
  {
    memcpy(&v8, &dest[16], sizeof(v8));
    if ( UnityEngine_Touch__get_phase(&v8, 0) == 1 || UnityEngine_Touch__get_phase(&v8, 0) == 2 )
    {
      v4 = 1;
      v5 = 5;
      goto LABEL_10;
    }
  }
  v4 = 0;
  v5 = 6;
LABEL_10:
  System_Collections_Generic_List_Enumerator_Touch___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)dest,
    (const MethodInfo_35F1278 *)Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__);
  return v4 & (v5 == 5);
}


bool MapTouchDetector__IsTouchStart(MapTouchDetector_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  char v4; // w8
  bool result; // w0
  System_Collections_Generic_List_Touch__o *AvaliableTouchList; // x0
  __int64 v7; // x1
  bool v8; // w19
  int v9; // w20
  System_Collections_Generic_List_Enumerator_T__o src[3]; // [xsp+8h] [xbp-138h] BYREF
  UnityEngine_Touch_o v11; // [xsp+60h] [xbp-E0h] BYREF
  _BYTE dest[80]; // [xsp+B0h] [xbp-90h] BYREF
  __int64 v13; // [xsp+100h] [xbp-40h]

  if ( (byte_4D28F94 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_List_Enumerator_Touch__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_List_Touch__GetEnumerator__);
    byte_4D28F94 = 1;
  }
  v13 = 0;
  memset(dest, 0, sizeof(dest));
  memset(&v11, 0, sizeof(v11));
  v4 = ((__int64 (__fastcall *)(MapTouchDetector_o *, const MethodInfo *))this->klass->vtable._6_IsTouchKeep.methodPtr)(
         this,
         this->klass->vtable._6_IsTouchKeep.method);
  result = 0;
  if ( (v4 & 1) == 0 )
  {
    AvaliableTouchList = MapTouchDetector__GetAvaliableTouchList(0, v3);
    if ( !AvaliableTouchList )
      sub_1C942F0(0, v7);
    System_Collections_Generic_List_Touch___GetEnumerator(
      src,
      AvaliableTouchList,
      (const MethodInfo_38ACA80 *)Method_System_Collections_Generic_List_Touch__GetEnumerator__);
    memcpy(dest, src, 0x58u);
    while ( 1 )
    {
      v8 = System_Collections_Generic_List_Enumerator_Touch___MoveNext(
             (System_Collections_Generic_List_Enumerator_T__o *)dest,
             (const MethodInfo_35F127C *)Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__);
      if ( !v8 )
        break;
      memcpy(&v11, &dest[16], sizeof(v11));
      if ( !UnityEngine_Touch__get_phase(&v11, 0) )
      {
        v9 = 5;
        goto LABEL_10;
      }
    }
    v9 = 6;
LABEL_10:
    System_Collections_Generic_List_Enumerator_Touch___Dispose(
      (System_Collections_Generic_List_Enumerator_T__o *)dest,
      (const MethodInfo_35F1278 *)Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__);
    return v8 && v9 == 5;
  }
  return result;
}