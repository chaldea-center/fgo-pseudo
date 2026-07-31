void MapTouchDetector___ctor(MapTouchDetector_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MapTouchDetector__DetectTouchLocally(MapTouchDetector_o *this, const MethodInfo *method)
{
  char v3; // w0
  MapTouchDetector_c *klass; // x8
  struct TouchDetectorBase_TouchInfo_o *v5; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct TouchDetectorBase_TouchInfo_o *StartTouchInfo_k__BackingField; // x1
  struct TouchDetectorBase_TouchInfo_o **p_CurrentTouchInfo_k__BackingField; // x0
  const MethodInfo *v20; // x1
  MapTouchDetector_Fields *p_fields; // x21
  TouchDetectorBase_TouchInfo_o *v22; // x0
  const MethodInfo *v23; // x1
  struct TouchDetectorBase_TouchInfo_o *v24; // x20
  __int64 TouchCount; // x0
  const MethodInfo *v26; // x1
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
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
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v5, v6, v7, v8, v9, v10, v11);
    StartTouchInfo_k__BackingField = this->fields._StartTouchInfo_k__BackingField;
    this->fields._CurrentTouchInfo_k__BackingField = StartTouchInfo_k__BackingField;
    p_CurrentTouchInfo_k__BackingField = &this->fields._CurrentTouchInfo_k__BackingField;
LABEL_3:
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)p_CurrentTouchInfo_k__BackingField,
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
        sub_21FFECC(TouchCount, v26);
      if ( (_DWORD)TouchCount != TouchDetectorBase_TouchInfo__get_TouchCount(
                                   p_fields->_StartTouchInfo_k__BackingField,
                                   v26) )
      {
        this->fields._StartTouchInfo_k__BackingField = v24;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v24, v27, v28, v29, v30, v31, v32);
        this->fields._CurrentTouchInfo_k__BackingField = 0;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields._CurrentTouchInfo_k__BackingField,
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
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields._PrevTouchInfo_k__BackingField,
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
  __int64 v4; // x1
  __int64 v5; // x2
  CTouch_c *v6; // x0
  System_Collections_Generic_List_int__o *ignoreFingerIDList; // x22
  void *fingerId; // x0
  __int64 v9; // x1
  struct UnityEngine_Touch_array *items; // x8
  _QWORD *v11; // x9
  int32_t size; // w10
  const MethodInfo_4495718 *v13; // x22
  UnityEngine_Touch_o v15; // [xsp+0h] [xbp-130h] BYREF
  _BYTE dest[68]; // [xsp+48h] [xbp-E8h] BYREF
  UnityEngine_Touch_o src; // [xsp+8Ch] [xbp-A4h] BYREF

  if ( (byte_5934D36 & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Touch__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Touch___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_Touch__TypeInfo);
    byte_5934D36 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  v2 = (System_Collections_Generic_List_Touch__o *)sub_21FFEBC(System_Collections_Generic_List_Touch__TypeInfo);
  System_Collections_Generic_List_Touch____ctor(
    v2,
    (const MethodInfo_4494E08 *)Method_System_Collections_Generic_List_Touch___ctor__);
  if ( UnityEngine_Input__get_touchCount(0) >= 1 )
  {
    v3 = 0;
    while ( 1 )
    {
      UnityEngine_Input__GetTouch(&src, v3, 0);
      memcpy(&v15, &src, sizeof(v15));
      if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v4, v5);
      if ( !byte_5934D80 )
      {
        sub_21FFC50(&CTouch_TypeInfo);
        byte_5934D80 = 1;
      }
      v6 = CTouch_TypeInfo;
      if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v4, v5);
        v6 = CTouch_TypeInfo;
      }
      ignoreFingerIDList = v6->static_fields->ignoreFingerIDList;
      fingerId = (void *)UnityEngine_Touch__get_fingerId(&v15, 0);
      if ( !ignoreFingerIDList )
        break;
      fingerId = (void *)System_Collections_Generic_List_int___Contains(
                           ignoreFingerIDList,
                           (int32_t)fingerId,
                           (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)fingerId & 1) == 0 )
      {
        if ( !v2 )
          break;
        fingerId = memcpy(dest, &v15, sizeof(dest));
        items = v2->fields._items;
        v11 = Method_System_Collections_Generic_List_Touch__Add__;
        ++v2->fields._version;
        if ( !items )
          break;
        size = v2->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          v13 = *(const MethodInfo_4495718 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL);
          memcpy(&src, dest, sizeof(src));
          System_Collections_Generic_List_Touch___AddWithResize(v2, &src, v13);
        }
        else
        {
          v2->fields._size = size + 1;
          memcpy(&items->m_Items[size], dest, sizeof(items->m_Items[size]));
        }
      }
      if ( ++v3 >= UnityEngine_Input__get_touchCount(0) )
        return v2;
    }
    sub_21FFECC(fingerId, v9);
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
  UnityEngine_Vector2_o v5; // x1
  UnityEngine_Vector2_o v6; // x2
  UnityEngine_Vector2_o position; // kr00_8
  UnityEngine_Vector2_o ScreenPosition_55911772; // kr08_8
  System_Collections_Generic_List_Vector2__o *v9; // x19
  UnityEngine_Vector2_o v10; // x1
  UnityEngine_Vector2_o v11; // x2
  UnityEngine_Vector2_o v12; // kr10_8
  UnityEngine_Vector2_o v13; // x0
  UnityEngine_Vector2_o v14; // x1
  UnityEngine_Vector2_o v15; // kr18_8
  struct UnityEngine_Vector2_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  UnityEngine_Vector2_array *v19; // x20
  TouchDetectorBase_TouchInfo_o *v20; // x19
  const MethodInfo *v21; // x2
  System_Collections_Generic_List_Enumerator_T__o v23[3]; // [xsp+10h] [xbp-220h] BYREF
  UnityEngine_Touch_o src; // [xsp+6Ch] [xbp-1C4h] BYREF
  UnityEngine_Touch_o v25; // [xsp+B0h] [xbp-180h] BYREF
  _BYTE v26[80]; // [xsp+100h] [xbp-130h] BYREF
  __int64 v27; // [xsp+150h] [xbp-E0h]
  UnityEngine_Touch_o dest; // [xsp+160h] [xbp-D0h] BYREF

  if ( (byte_5934D35 & 1) == 0 )
  {
    sub_21FFC50(&CTouch_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_Touch__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector2__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Touch__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Touch__RemoveAt__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector2__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Vector2___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Touch__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Touch__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_Vector2__TypeInfo);
    this = (MapTouchDetector_o *)sub_21FFC50(&TouchDetectorBase_TouchInfo_TypeInfo);
    byte_5934D35 = 1;
  }
  v27 = 0;
  memset(v26, 0, sizeof(v26));
  memset(&v25, 0, sizeof(v25));
  memset(&dest, 0, sizeof(dest));
  AvaliableTouchList = MapTouchDetector__GetAvaliableTouchList(this, method);
  if ( !AvaliableTouchList )
    goto LABEL_21;
  v4 = AvaliableTouchList;
  if ( AvaliableTouchList->fields._size < 1 )
    return 0;
  System_Collections_Generic_List_Touch___get_Item(
    &src,
    AvaliableTouchList,
    0,
    (const MethodInfo_44953A0 *)Method_System_Collections_Generic_List_Touch__get_Item__);
  memcpy(&dest, &src, sizeof(dest));
  position = UnityEngine_Touch__get_position(&dest, 0);
  if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))j_il2cpp_runtime_class_init_0)(CTouch_TypeInfo, v5, v6);
  ScreenPosition_55911772 = CTouch__getScreenPosition_55911772(position, 0);
  System_Collections_Generic_List_Touch___RemoveAt(
    v4,
    0,
    (const MethodInfo_4497220 *)Method_System_Collections_Generic_List_Touch__RemoveAt__);
  v9 = (System_Collections_Generic_List_Vector2__o *)sub_21FFEBC(System_Collections_Generic_List_Vector2__TypeInfo);
  System_Collections_Generic_List_Vector2____ctor(
    v9,
    (const MethodInfo_44AC32C *)Method_System_Collections_Generic_List_Vector2___ctor__);
  System_Collections_Generic_List_Touch___GetEnumerator(
    v23,
    v4,
    (const MethodInfo_4496414 *)Method_System_Collections_Generic_List_Touch__GetEnumerator__);
  memcpy(v26, v23, 0x58u);
  v23[0].fields._list = 0;
  *(_QWORD *)&v23[0].fields._index = v26;
  while ( System_Collections_Generic_List_Enumerator_Touch___MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)v26,
            (const MethodInfo_40FB41C *)Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__) )
  {
    memcpy(&v25, &v26[16], sizeof(v25));
    v12 = UnityEngine_Touch__get_position(&v25, 0);
    if ( !*(&CTouch_TypeInfo->_2.cctor_finished + 1) )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))j_il2cpp_runtime_class_init_0)(CTouch_TypeInfo, v10, v11);
    v15 = CTouch__getScreenPosition_55911772(v12, 0);
    if ( !v9
      || (items = v9->fields._items,
          v17 = Method_System_Collections_Generic_List_Vector2__Add__,
          ++v9->fields._version,
          !items) )
    {
      sub_21FFECC(v13, v14);
    }
    size = v9->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_Vector2___AddWithResize(
        v9,
        v15,
        *(const MethodInfo_44ACBC4 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    }
    else
    {
      v9->fields._size = size + 1;
      items->m_Items[size] = v15;
    }
  }
  System_Collections_Generic_List_Enumerator_Touch___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)v26,
    (const MethodInfo_40FB418 *)Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__);
  if ( !v9 )
LABEL_21:
    sub_21FFECC(AvaliableTouchList, v3);
  v19 = System_Collections_Generic_List_Vector2___ToArray(
          v9,
          (const MethodInfo_44AE694 *)Method_System_Collections_Generic_List_Vector2__ToArray__);
  v20 = (TouchDetectorBase_TouchInfo_o *)sub_21FFEBC(TouchDetectorBase_TouchInfo_TypeInfo);
  TouchDetectorBase_TouchInfo___ctor(v20, ScreenPosition_55911772, v19, v21);
  return v20;
}


bool MapTouchDetector__IsTouchKeep(MapTouchDetector_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_Touch__o *AvaliableTouchList; // x0
  __int64 v3; // x1
  bool v4; // w19
  UnityEngine_Touch_o dest; // [xsp+10h] [xbp-E0h] BYREF
  _BYTE v7[80]; // [xsp+60h] [xbp-90h] BYREF
  __int64 v8; // [xsp+B0h] [xbp-40h]

  if ( (byte_5934D34 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_Touch__get_Current__);
    this = (MapTouchDetector_o *)sub_21FFC50(&Method_System_Collections_Generic_List_Touch__GetEnumerator__);
    byte_5934D34 = 1;
  }
  v8 = 0;
  memset(v7, 0, sizeof(v7));
  memset(&dest, 0, sizeof(dest));
  AvaliableTouchList = MapTouchDetector__GetAvaliableTouchList(this, method);
  if ( !AvaliableTouchList )
    sub_21FFECC(0, v3);
  System_Collections_Generic_List_Touch___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)v7,
    AvaliableTouchList,
    (const MethodInfo_4496414 *)Method_System_Collections_Generic_List_Touch__GetEnumerator__);
  do
  {
    v4 = System_Collections_Generic_List_Enumerator_Touch___MoveNext(
           (System_Collections_Generic_List_Enumerator_T__o *)v7,
           (const MethodInfo_40FB41C *)Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__);
    if ( !v4 )
      break;
    memcpy(&dest, &v7[16], sizeof(dest));
    if ( UnityEngine_Touch__get_phase(&dest, 0) == 1 )
      break;
  }
  while ( UnityEngine_Touch__get_phase(&dest, 0) != 2 );
  System_Collections_Generic_List_Enumerator_Touch___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)v7,
    (const MethodInfo_40FB418 *)Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__);
  return v4;
}


bool MapTouchDetector__IsTouchStart(MapTouchDetector_o *this, const MethodInfo *method)
{
  MapTouchDetector_c *klass; // x8
  MapTouchDetector_o *v4; // x0
  const MethodInfo *v5; // x1
  bool v6; // w19
  System_Collections_Generic_List_Touch__o *AvaliableTouchList; // x0
  __int64 v8; // x1
  UnityEngine_Touch_o dest; // [xsp+10h] [xbp-D0h] BYREF
  _BYTE v11[80]; // [xsp+60h] [xbp-80h] BYREF
  __int64 v12; // [xsp+B0h] [xbp-30h]

  if ( (byte_5934D33 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_Touch__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Touch__GetEnumerator__);
    byte_5934D33 = 1;
  }
  klass = this->klass;
  v12 = 0;
  memset(v11, 0, sizeof(v11));
  memset(&dest, 0, sizeof(dest));
  v4 = (MapTouchDetector_o *)((__int64 (__fastcall *)(MapTouchDetector_o *, const MethodInfo *))klass->vtable._6_IsTouchKeep.methodPtr)(
                               this,
                               klass->vtable._6_IsTouchKeep.method);
  v6 = 0;
  if ( ((unsigned __int8)v4 & 1) == 0 )
  {
    AvaliableTouchList = MapTouchDetector__GetAvaliableTouchList(v4, v5);
    if ( !AvaliableTouchList )
      sub_21FFECC(0, v8);
    System_Collections_Generic_List_Touch___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)v11,
      AvaliableTouchList,
      (const MethodInfo_4496414 *)Method_System_Collections_Generic_List_Touch__GetEnumerator__);
    do
    {
      v6 = System_Collections_Generic_List_Enumerator_Touch___MoveNext(
             (System_Collections_Generic_List_Enumerator_T__o *)v11,
             (const MethodInfo_40FB41C *)Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__);
      if ( !v6 )
        break;
      memcpy(&dest, &v11[16], sizeof(dest));
    }
    while ( UnityEngine_Touch__get_phase(&dest, 0) );
    System_Collections_Generic_List_Enumerator_Touch___Dispose(
      (System_Collections_Generic_List_Enumerator_T__o *)v11,
      (const MethodInfo_40FB418 *)Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__);
  }
  return v6;
}