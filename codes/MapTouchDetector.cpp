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
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct TouchDetectorBase_TouchInfo_o *StartTouchInfo_k__BackingField; // x1
  struct TouchDetectorBase_TouchInfo_o **p_CurrentTouchInfo_k__BackingField; // x0
  const MethodInfo *v12; // x1
  MapTouchDetector_Fields *p_fields; // x21
  TouchDetectorBase_TouchInfo_o *v14; // x0
  const MethodInfo *v15; // x1
  struct TouchDetectorBase_TouchInfo_o *v16; // x20
  __int64 TouchCount; // x0
  const MethodInfo *v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
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
    sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)v5, v6, v7);
    StartTouchInfo_k__BackingField = this->fields._StartTouchInfo_k__BackingField;
    this->fields._CurrentTouchInfo_k__BackingField = StartTouchInfo_k__BackingField;
    p_CurrentTouchInfo_k__BackingField = &this->fields._CurrentTouchInfo_k__BackingField;
LABEL_3:
    sub_1C32BC4(
      (CGThumbnailListItem_o *)p_CurrentTouchInfo_k__BackingField,
      (int32_t)StartTouchInfo_k__BackingField,
      v8,
      v9);
    return;
  }
  if ( (((__int64 (__fastcall *)(MapTouchDetector_o *, const MethodInfo *))klass->vtable._6_IsTouchKeep.methodPtr)(
          this,
          klass->vtable._6_IsTouchKeep.method)
      & 1) != 0
    && (p_fields = &this->fields, this->fields._StartTouchInfo_k__BackingField) )
  {
    v14 = (TouchDetectorBase_TouchInfo_o *)((__int64 (__fastcall *)(MapTouchDetector_o *, const MethodInfo *))this->klass->vtable._7_GetCurrentTouchInfo.methodPtr)(
                                             this,
                                             this->klass->vtable._7_GetCurrentTouchInfo.method);
    if ( v14 )
    {
      v16 = v14;
      TouchCount = TouchDetectorBase_TouchInfo__get_TouchCount(v14, v15);
      if ( !p_fields->_StartTouchInfo_k__BackingField )
        sub_1C32E7C(TouchCount);
      if ( (_DWORD)TouchCount != TouchDetectorBase_TouchInfo__get_TouchCount(
                                   p_fields->_StartTouchInfo_k__BackingField,
                                   v18) )
      {
        this->fields._StartTouchInfo_k__BackingField = v16;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields, (int32_t)v16, v19, v20);
        this->fields._CurrentTouchInfo_k__BackingField = 0;
        sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._CurrentTouchInfo_k__BackingField, 0, v21, v22);
      }
      CurrentTouchInfo_k__BackingField = this->fields._CurrentTouchInfo_k__BackingField;
      this->fields._PrevTouchInfo_k__BackingField = CurrentTouchInfo_k__BackingField;
      sub_1C32BC4(
        (CGThumbnailListItem_o *)&this->fields._PrevTouchInfo_k__BackingField,
        (int32_t)CurrentTouchInfo_k__BackingField,
        v19,
        v20);
      p_CurrentTouchInfo_k__BackingField = &this->fields._CurrentTouchInfo_k__BackingField;
      LODWORD(StartTouchInfo_k__BackingField) = (_DWORD)v16;
      this->fields._CurrentTouchInfo_k__BackingField = v16;
      goto LABEL_3;
    }
  }
  else
  {
    TouchDetectorBase__ClearTouchInfo((TouchDetectorBase_o *)this, v12);
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
  _QWORD *v7; // x22
  struct UnityEngine_Touch_array *items; // x8
  __int64 size; // x9
  const MethodInfo_37D95EC *v10; // x22
  _BYTE v12[72]; // [xsp+8h] [xbp-188h] BYREF
  UnityEngine_Touch_o dest; // [xsp+50h] [xbp-140h] BYREF
  _BYTE v14[72]; // [xsp+A0h] [xbp-F0h] BYREF
  UnityEngine_Touch_o src; // [xsp+E8h] [xbp-A8h] BYREF

  if ( (byte_4C34265 & 1) == 0 )
  {
    sub_1C32C20(&CTouch_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Touch__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Touch___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_Touch__TypeInfo);
    byte_4C34265 = 1;
  }
  memset(&dest, 0, sizeof(dest));
  v2 = (System_Collections_Generic_List_Touch__o *)sub_1C32E6C(System_Collections_Generic_List_Touch__TypeInfo);
  System_Collections_Generic_List_Touch____ctor(
    v2,
    (const MethodInfo_37D8CD0 *)Method_System_Collections_Generic_List_Touch___ctor__);
  if ( UnityEngine_Input__get_touchCount(0) >= 1 )
  {
    v3 = 0;
    while ( 1 )
    {
      UnityEngine_Input__GetTouch(&src, v3, 0);
      memcpy(&dest, &src, sizeof(dest));
      if ( !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      if ( !byte_4C342A7 )
      {
        sub_1C32C20(&CTouch_TypeInfo);
        byte_4C342A7 = 1;
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
              (const MethodInfo_377BB10 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        fingerId = memcpy(v12, &dest, 0x44u);
        if ( !v2 )
          break;
        v7 = Method_System_Collections_Generic_List_Touch__Add__;
        fingerId = memcpy(v14, v12, 0x44u);
        items = v2->fields._items;
        ++v2->fields._version;
        if ( !items )
          break;
        size = v2->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          v10 = *(const MethodInfo_37D95EC **)(*(_QWORD *)(v7[4] + 192LL) + 112LL);
          memcpy(&src, v14, sizeof(src));
          System_Collections_Generic_List_Touch___AddWithResize(v2, &src, v10);
        }
        else
        {
          v2->fields._size = size + 1;
          memcpy(&items->m_Items[size], v14, sizeof(items->m_Items[size]));
        }
      }
      if ( ++v3 >= UnityEngine_Input__get_touchCount(0) )
        return v2;
    }
    sub_1C32E7C(fingerId);
  }
  return v2;
}


TouchDetectorBase_TouchInfo_o *MapTouchDetector__GetCurrentTouchInfo(
        MapTouchDetector_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_Touch__o *AvaliableTouchList; // x0
  System_Collections_Generic_List_Touch__o *v3; // x20
  UnityEngine_Vector2_o position; // kr00_8
  UnityEngine_Vector2_o ScreenPosition_49007160; // kr08_8
  System_Collections_Generic_List_Vector2__o *v6; // x19
  UnityEngine_Vector2_o v7; // kr10_8
  UnityEngine_Vector2_o v8; // x0
  UnityEngine_Vector2_o v9; // kr18_8
  struct UnityEngine_Vector2_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  UnityEngine_Vector2_array *v13; // x20
  TouchDetectorBase_TouchInfo_o *v14; // x19
  const MethodInfo *v15; // x2
  UnityEngine_Touch_o src; // [xsp+8h] [xbp-1D8h] BYREF
  UnityEngine_Touch_o v18; // [xsp+60h] [xbp-180h] BYREF
  _BYTE v19[80]; // [xsp+B0h] [xbp-130h] BYREF
  __int64 v20; // [xsp+100h] [xbp-E0h]
  UnityEngine_Touch_o dest; // [xsp+110h] [xbp-D0h] BYREF

  if ( (byte_4C34264 & 1) == 0 )
  {
    sub_1C32C20(&CTouch_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_Touch__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Vector2__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Touch__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Touch__RemoveAt__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Vector2__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Vector2___ctor__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Touch__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Touch__get_Item__);
    sub_1C32C20(&System_Collections_Generic_List_Vector2__TypeInfo);
    this = (MapTouchDetector_o *)sub_1C32C20(&TouchDetectorBase_TouchInfo_TypeInfo);
    byte_4C34264 = 1;
  }
  v20 = 0;
  memset(&dest, 0, sizeof(dest));
  memset(v19, 0, sizeof(v19));
  memset(&v18, 0, sizeof(v18));
  AvaliableTouchList = MapTouchDetector__GetAvaliableTouchList(this, method);
  if ( !AvaliableTouchList )
    goto LABEL_22;
  v3 = AvaliableTouchList;
  if ( AvaliableTouchList->fields._size < 1 )
    return 0;
  System_Collections_Generic_List_Touch___get_Item(
    &src,
    AvaliableTouchList,
    0,
    (const MethodInfo_37D9234 *)Method_System_Collections_Generic_List_Touch__get_Item__);
  memcpy(&dest, &src, sizeof(dest));
  position = UnityEngine_Touch__get_position(&dest, 0);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  ScreenPosition_49007160 = CTouch__getScreenPosition_49007160(position, 0);
  System_Collections_Generic_List_Touch___RemoveAt(
    v3,
    0,
    (const MethodInfo_37DB2E8 *)Method_System_Collections_Generic_List_Touch__RemoveAt__);
  v6 = (System_Collections_Generic_List_Vector2__o *)sub_1C32E6C(System_Collections_Generic_List_Vector2__TypeInfo);
  System_Collections_Generic_List_Vector2____ctor(
    v6,
    (const MethodInfo_37EE444 *)Method_System_Collections_Generic_List_Vector2___ctor__);
  System_Collections_Generic_List_Touch___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&src,
    v3,
    (const MethodInfo_37DA408 *)Method_System_Collections_Generic_List_Touch__GetEnumerator__);
  memcpy(v19, &src, 0x58u);
  while ( System_Collections_Generic_List_Enumerator_Touch___MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)v19,
            (const MethodInfo_3528064 *)Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__) )
  {
    memcpy(&v18, &v19[16], sizeof(v18));
    v7 = UnityEngine_Touch__get_position(&v18, 0);
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v9 = CTouch__getScreenPosition_49007160(v7, 0);
    if ( !v6 )
      ((void (__fastcall __noreturn *)(_QWORD))sub_1C32E7C)(v8);
    items = v6->fields._items;
    v11 = Method_System_Collections_Generic_List_Vector2__Add__;
    ++v6->fields._version;
    if ( !items )
      ((void (__fastcall __noreturn *)(_QWORD))sub_1C32E7C)(v8);
    size = v6->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_Vector2___AddWithResize(
        v6,
        v9,
        *(const MethodInfo_37EECAC **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
    }
    else
    {
      v6->fields._size = size + 1;
      items->m_Items[size] = v9;
    }
  }
  System_Collections_Generic_List_Enumerator_Touch___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)v19,
    (const MethodInfo_3528060 *)Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__);
  if ( !v6 )
LABEL_22:
    sub_1C32E7C(AvaliableTouchList);
  v13 = System_Collections_Generic_List_Vector2___ToArray(
          v6,
          (const MethodInfo_37F07C8 *)Method_System_Collections_Generic_List_Vector2__ToArray__);
  v14 = (TouchDetectorBase_TouchInfo_o *)sub_1C32E6C(TouchDetectorBase_TouchInfo_TypeInfo);
  TouchDetectorBase_TouchInfo___ctor(v14, ScreenPosition_49007160, v13, v15);
  return v14;
}


bool MapTouchDetector__IsTouchKeep(MapTouchDetector_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_Touch__o *AvaliableTouchList; // x0
  char v3; // w19
  int v4; // w21
  System_Collections_Generic_List_Enumerator_T__o src[3]; // [xsp+8h] [xbp-138h] BYREF
  UnityEngine_Touch_o v7; // [xsp+60h] [xbp-E0h] BYREF
  _BYTE dest[80]; // [xsp+B0h] [xbp-90h] BYREF
  __int64 v9; // [xsp+100h] [xbp-40h]

  if ( (byte_4C34263 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_Touch__get_Current__);
    this = (MapTouchDetector_o *)sub_1C32C20(&Method_System_Collections_Generic_List_Touch__GetEnumerator__);
    byte_4C34263 = 1;
  }
  v9 = 0;
  memset(dest, 0, sizeof(dest));
  memset(&v7, 0, sizeof(v7));
  AvaliableTouchList = MapTouchDetector__GetAvaliableTouchList(this, method);
  if ( !AvaliableTouchList )
    sub_1C32E7C(0);
  System_Collections_Generic_List_Touch___GetEnumerator(
    src,
    AvaliableTouchList,
    (const MethodInfo_37DA408 *)Method_System_Collections_Generic_List_Touch__GetEnumerator__);
  memcpy(dest, src, 0x58u);
  while ( System_Collections_Generic_List_Enumerator_Touch___MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)dest,
            (const MethodInfo_3528064 *)Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__) )
  {
    memcpy(&v7, &dest[16], sizeof(v7));
    if ( UnityEngine_Touch__get_phase(&v7, 0) == 1 || UnityEngine_Touch__get_phase(&v7, 0) == 2 )
    {
      v3 = 1;
      v4 = 5;
      goto LABEL_10;
    }
  }
  v3 = 0;
  v4 = 6;
LABEL_10:
  System_Collections_Generic_List_Enumerator_Touch___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)dest,
    (const MethodInfo_3528060 *)Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__);
  return v3 & (v4 == 5);
}


bool MapTouchDetector__IsTouchStart(MapTouchDetector_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  char v4; // w8
  bool result; // w0
  System_Collections_Generic_List_Touch__o *AvaliableTouchList; // x0
  bool v7; // w19
  int v8; // w20
  System_Collections_Generic_List_Enumerator_T__o src[3]; // [xsp+8h] [xbp-138h] BYREF
  UnityEngine_Touch_o v10; // [xsp+60h] [xbp-E0h] BYREF
  _BYTE dest[80]; // [xsp+B0h] [xbp-90h] BYREF
  __int64 v12; // [xsp+100h] [xbp-40h]

  if ( (byte_4C34262 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_Touch__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Touch__GetEnumerator__);
    byte_4C34262 = 1;
  }
  v12 = 0;
  memset(dest, 0, sizeof(dest));
  memset(&v10, 0, sizeof(v10));
  v4 = ((__int64 (__fastcall *)(MapTouchDetector_o *, const MethodInfo *))this->klass->vtable._6_IsTouchKeep.methodPtr)(
         this,
         this->klass->vtable._6_IsTouchKeep.method);
  result = 0;
  if ( (v4 & 1) == 0 )
  {
    AvaliableTouchList = MapTouchDetector__GetAvaliableTouchList(0, v3);
    if ( !AvaliableTouchList )
      sub_1C32E7C(0);
    System_Collections_Generic_List_Touch___GetEnumerator(
      src,
      AvaliableTouchList,
      (const MethodInfo_37DA408 *)Method_System_Collections_Generic_List_Touch__GetEnumerator__);
    memcpy(dest, src, 0x58u);
    while ( 1 )
    {
      v7 = System_Collections_Generic_List_Enumerator_Touch___MoveNext(
             (System_Collections_Generic_List_Enumerator_T__o *)dest,
             (const MethodInfo_3528064 *)Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__);
      if ( !v7 )
        break;
      memcpy(&v10, &dest[16], sizeof(v10));
      if ( !UnityEngine_Touch__get_phase(&v10, 0) )
      {
        v8 = 5;
        goto LABEL_10;
      }
    }
    v8 = 6;
LABEL_10:
    System_Collections_Generic_List_Enumerator_Touch___Dispose(
      (System_Collections_Generic_List_Enumerator_T__o *)dest,
      (const MethodInfo_3528060 *)Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__);
    return v7 && v8 == 5;
  }
  return result;
}