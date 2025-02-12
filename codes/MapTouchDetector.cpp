void __fastcall MapTouchDetector___ctor(MapTouchDetector_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MapTouchDetector__DetectTouchLocally(MapTouchDetector_o *this, const MethodInfo *method)
{
  char v3; // w0
  MapTouchDetector_c *klass; // x8
  struct TouchDetectorBase_TouchInfo_o *v5; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct TouchDetectorBase_TouchInfo_o *StartTouchInfo_k__BackingField; // x1
  struct TouchDetectorBase_TouchInfo_o **p_CurrentTouchInfo_k__BackingField; // x0
  const MethodInfo *v20; // x1
  MapTouchDetector_Fields *p_fields; // x21
  TouchDetectorBase_TouchInfo_o *v22; // x0
  const MethodInfo *v23; // x1
  struct TouchDetectorBase_TouchInfo_o *v24; // x20
  __int64 TouchCount; // x0
  const MethodInfo *v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
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
    sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, (int64_t)v5, v6, v7, v8, v9, v10, v11);
    StartTouchInfo_k__BackingField = this->fields._StartTouchInfo_k__BackingField;
    this->fields._CurrentTouchInfo_k__BackingField = StartTouchInfo_k__BackingField;
    p_CurrentTouchInfo_k__BackingField = &this->fields._CurrentTouchInfo_k__BackingField;
LABEL_3:
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)p_CurrentTouchInfo_k__BackingField,
      (int64_t)StartTouchInfo_k__BackingField,
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
    v22 = (TouchDetectorBase_TouchInfo_o *)((__int64 (__fastcall *)(MapTouchDetector_o *, void *))this->klass->vtable._7_GetCurrentTouchInfo.method)(
                                             this,
                                             this->klass[1]._1.image);
    if ( v22 )
    {
      v24 = v22;
      TouchCount = TouchDetectorBase_TouchInfo__get_TouchCount(v22, v23);
      if ( !p_fields->_StartTouchInfo_k__BackingField )
        sub_1C13F80(TouchCount, v26);
      if ( (_DWORD)TouchCount != TouchDetectorBase_TouchInfo__get_TouchCount(
                                   p_fields->_StartTouchInfo_k__BackingField,
                                   v26) )
      {
        this->fields._StartTouchInfo_k__BackingField = v24;
        sub_1C13CC8((PartyOrganizationUtility_o *)&this->fields, (int64_t)v24, v27, v28, v29, v30, v31, v32);
        this->fields._CurrentTouchInfo_k__BackingField = 0LL;
        sub_1C13CC8(
          (PartyOrganizationUtility_o *)&this->fields._CurrentTouchInfo_k__BackingField,
          0LL,
          v33,
          v34,
          v35,
          v36,
          v37,
          v38);
      }
      CurrentTouchInfo_k__BackingField = this->fields._CurrentTouchInfo_k__BackingField;
      this->fields._PrevTouchInfo_k__BackingField = CurrentTouchInfo_k__BackingField;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&this->fields._PrevTouchInfo_k__BackingField,
        (int64_t)CurrentTouchInfo_k__BackingField,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
      p_CurrentTouchInfo_k__BackingField = &this->fields._CurrentTouchInfo_k__BackingField;
      StartTouchInfo_k__BackingField = v24;
      this->fields._CurrentTouchInfo_k__BackingField = v24;
      goto LABEL_3;
    }
  }
  else
  {
    TouchDetectorBase__ClearTouchInfo((TouchDetectorBase_o *)this, v20);
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
  _QWORD *v13; // x22
  struct UnityEngine_Touch_array *items; // x8
  __int64 size; // x9
  const MethodInfo_366B590 *v16; // x22
  char v18[72]; // [xsp+8h] [xbp-188h] BYREF
  UnityEngine_Touch_o dest; // [xsp+50h] [xbp-140h] BYREF
  char v20[72]; // [xsp+A0h] [xbp-F0h] BYREF
  UnityEngine_Touch_o src; // [xsp+E8h] [xbp-A8h] BYREF

  if ( (byte_4BB118C & 1) == 0 )
  {
    sub_1C13D24(&CTouch_TypeInfo, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_Touch__Add__, v2);
    sub_1C13D24(&Method_System_Collections_Generic_List_int__Contains__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_Touch___ctor__, v4);
    sub_1C13D24(&System_Collections_Generic_List_Touch__TypeInfo, v5);
    byte_4BB118C = 1;
  }
  memset(&dest, 0, sizeof(dest));
  v6 = (System_Collections_Generic_List_Touch__o *)sub_1C13F70(System_Collections_Generic_List_Touch__TypeInfo);
  System_Collections_Generic_List_Touch____ctor(
    v6,
    (const MethodInfo_366AC74 *)Method_System_Collections_Generic_List_Touch___ctor__);
  if ( UnityEngine_Input__get_touchCount(0LL) >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      UnityEngine_Input__GetTouch(&src, v7, 0LL);
      memcpy(&dest, &src, sizeof(dest));
      if ( !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
      if ( !byte_4BB124C )
      {
        sub_1C13D24(&CTouch_TypeInfo, v8);
        byte_4BB124C = 1;
      }
      v9 = CTouch_TypeInfo;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
        v9 = CTouch_TypeInfo;
      }
      ignoreFingerIDList = v9->static_fields->ignoreFingerIDList;
      fingerId = (void *)UnityEngine_Touch__get_fingerId(&dest, 0LL);
      if ( !ignoreFingerIDList )
        break;
      if ( !System_Collections_Generic_List_int___Contains(
              ignoreFingerIDList,
              (int32_t)fingerId,
              (const MethodInfo_3610520 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        fingerId = memcpy(v18, &dest, 0x44u);
        if ( !v6 )
          break;
        v13 = Method_System_Collections_Generic_List_Touch__Add__;
        fingerId = memcpy(v20, v18, 0x44u);
        items = v6->fields._items;
        ++v6->fields._version;
        if ( !items )
          break;
        size = v6->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          v16 = *(const MethodInfo_366B590 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL);
          memcpy(&src, v20, sizeof(src));
          System_Collections_Generic_List_Touch___AddWithResize(v6, &src, v16);
        }
        else
        {
          v6->fields._size = size + 1;
          memcpy(&items->m_Items[size].fields.m_Position, v20, 0x44u);
        }
      }
      if ( ++v7 >= UnityEngine_Input__get_touchCount(0LL) )
        return v6;
    }
    sub_1C13F80(fingerId, v12);
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
  System_Collections_Generic_List_Touch__o *AvaliableTouchList; // x0
  __int64 v15; // x1
  System_Collections_Generic_List_Touch__o *v16; // x20
  UnityEngine_Vector2_o position; // kr00_8
  UnityEngine_Vector2_o ScreenPosition_47606696; // kr08_8
  System_Collections_Generic_List_Vector2__o *v19; // x19
  UnityEngine_Vector2_o v20; // kr10_8
  UnityEngine_Vector2_o v21; // x0
  UnityEngine_Vector2_o v22; // x1
  UnityEngine_Vector2_o v23; // kr18_8
  struct UnityEngine_Vector2_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  UnityEngine_Vector2_array *v27; // x20
  TouchDetectorBase_TouchInfo_o *v28; // x19
  const MethodInfo *v29; // x2
  UnityEngine_Touch_o src; // [xsp+8h] [xbp-1D8h] BYREF
  UnityEngine_Touch_o v32; // [xsp+60h] [xbp-180h] BYREF
  char v33[80]; // [xsp+B0h] [xbp-130h] BYREF
  __int64 v34; // [xsp+100h] [xbp-E0h]
  UnityEngine_Touch_o dest; // [xsp+110h] [xbp-D0h] BYREF

  if ( (byte_4BB118B & 1) == 0 )
  {
    sub_1C13D24(&CTouch_TypeInfo, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__, v2);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_Touch__get_Current__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_Vector2__Add__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_List_Touch__GetEnumerator__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_List_Touch__RemoveAt__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_List_Vector2__ToArray__, v8);
    sub_1C13D24(&Method_System_Collections_Generic_List_Vector2___ctor__, v9);
    sub_1C13D24(&Method_System_Collections_Generic_List_Touch__get_Count__, v10);
    sub_1C13D24(&Method_System_Collections_Generic_List_Touch__get_Item__, v11);
    sub_1C13D24(&System_Collections_Generic_List_Vector2__TypeInfo, v12);
    this = (MapTouchDetector_o *)sub_1C13D24(&TouchDetectorBase_TouchInfo_TypeInfo, v13);
    byte_4BB118B = 1;
  }
  v34 = 0LL;
  memset(&dest, 0, sizeof(dest));
  memset(v33, 0, sizeof(v33));
  memset(&v32, 0, sizeof(v32));
  AvaliableTouchList = MapTouchDetector__GetAvaliableTouchList(this, method);
  if ( !AvaliableTouchList )
    goto LABEL_22;
  v16 = AvaliableTouchList;
  if ( AvaliableTouchList->fields._size < 1 )
    return 0LL;
  System_Collections_Generic_List_Touch___get_Item(
    &src,
    AvaliableTouchList,
    0,
    (const MethodInfo_366B1D8 *)Method_System_Collections_Generic_List_Touch__get_Item__);
  memcpy(&dest, &src, sizeof(dest));
  position = UnityEngine_Touch__get_position(&dest, 0LL);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
  ScreenPosition_47606696 = CTouch__getScreenPosition_47606696(position, 0LL);
  System_Collections_Generic_List_Touch___RemoveAt(
    v16,
    0,
    (const MethodInfo_366D28C *)Method_System_Collections_Generic_List_Touch__RemoveAt__);
  v19 = (System_Collections_Generic_List_Vector2__o *)sub_1C13F70(System_Collections_Generic_List_Vector2__TypeInfo);
  System_Collections_Generic_List_Vector2____ctor(
    v19,
    (const MethodInfo_36803E8 *)Method_System_Collections_Generic_List_Vector2___ctor__);
  System_Collections_Generic_List_Touch___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&src,
    v16,
    (const MethodInfo_366C3AC *)Method_System_Collections_Generic_List_Touch__GetEnumerator__);
  memcpy(v33, &src, 0x58u);
  while ( System_Collections_Generic_List_Enumerator_Touch___MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)v33,
            (const MethodInfo_33C3AB4 *)Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__) )
  {
    memcpy(&v32, &v33[16], sizeof(v32));
    v20 = UnityEngine_Touch__get_position(&v32, 0LL);
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CTouch_TypeInfo);
    v23 = CTouch__getScreenPosition_47606696(v20, 0LL);
    if ( !v19 )
      ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C13F80)(v21, v22);
    items = v19->fields._items;
    v25 = Method_System_Collections_Generic_List_Vector2__Add__;
    ++v19->fields._version;
    if ( !items )
      ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1C13F80)(v21, v22);
    size = v19->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_Vector2___AddWithResize(
        v19,
        v23,
        *(const MethodInfo_3680C50 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
    }
    else
    {
      v19->fields._size = size + 1;
      *(UnityEngine_Vector2_o *)&items->m_Items[size].fields.y = v23;
    }
  }
  System_Collections_Generic_List_Enumerator_Touch___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)v33,
    (const MethodInfo_33C3AB0 *)Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__);
  if ( !v19 )
LABEL_22:
    sub_1C13F80(AvaliableTouchList, v15);
  v27 = System_Collections_Generic_List_Vector2___ToArray(
          v19,
          (const MethodInfo_368276C *)Method_System_Collections_Generic_List_Vector2__ToArray__);
  v28 = (TouchDetectorBase_TouchInfo_o *)sub_1C13F70(TouchDetectorBase_TouchInfo_TypeInfo);
  TouchDetectorBase_TouchInfo___ctor(v28, ScreenPosition_47606696, v27, v29);
  return v28;
}


bool __fastcall MapTouchDetector__IsTouchKeep(MapTouchDetector_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_Touch__o *AvaliableTouchList; // x0
  __int64 v6; // x1
  char v7; // w19
  int v8; // w21
  System_Collections_Generic_List_Enumerator_T__o src[3]; // [xsp+8h] [xbp-138h] BYREF
  UnityEngine_Touch_o v11; // [xsp+60h] [xbp-E0h] BYREF
  char dest[80]; // [xsp+B0h] [xbp-90h] BYREF
  __int64 v13; // [xsp+100h] [xbp-40h]

  if ( (byte_4BB118A & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__, v2);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_Touch__get_Current__, v3);
    this = (MapTouchDetector_o *)sub_1C13D24(&Method_System_Collections_Generic_List_Touch__GetEnumerator__, v4);
    byte_4BB118A = 1;
  }
  v13 = 0LL;
  memset(dest, 0, sizeof(dest));
  memset(&v11, 0, sizeof(v11));
  AvaliableTouchList = MapTouchDetector__GetAvaliableTouchList(this, method);
  if ( !AvaliableTouchList )
    sub_1C13F80(0LL, v6);
  System_Collections_Generic_List_Touch___GetEnumerator(
    src,
    AvaliableTouchList,
    (const MethodInfo_366C3AC *)Method_System_Collections_Generic_List_Touch__GetEnumerator__);
  memcpy(dest, src, 0x58u);
  while ( System_Collections_Generic_List_Enumerator_Touch___MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)dest,
            (const MethodInfo_33C3AB4 *)Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__) )
  {
    memcpy(&v11, &dest[16], sizeof(v11));
    if ( UnityEngine_Touch__get_phase(&v11, 0LL) == 1 || UnityEngine_Touch__get_phase(&v11, 0LL) == 2 )
    {
      v7 = 1;
      v8 = 5;
      goto LABEL_10;
    }
  }
  v7 = 0;
  v8 = 6;
LABEL_10:
  System_Collections_Generic_List_Enumerator_Touch___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)dest,
    (const MethodInfo_33C3AB0 *)Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__);
  return v7 & (v8 == 5);
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
  bool v11; // w19
  int v12; // w20
  System_Collections_Generic_List_Enumerator_T__o src[3]; // [xsp+8h] [xbp-138h] BYREF
  UnityEngine_Touch_o v14; // [xsp+60h] [xbp-E0h] BYREF
  char dest[80]; // [xsp+B0h] [xbp-90h] BYREF
  __int64 v16; // [xsp+100h] [xbp-40h]

  if ( (byte_4BB1189 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__, method);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_List_Enumerator_Touch__get_Current__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_List_Touch__GetEnumerator__, v5);
    byte_4BB1189 = 1;
  }
  v16 = 0LL;
  memset(dest, 0, sizeof(dest));
  memset(&v14, 0, sizeof(v14));
  v7 = ((__int64 (__fastcall *)(MapTouchDetector_o *, Il2CppMethodPointer))this->klass->vtable._6_IsTouchKeep.method)(
         this,
         this->klass->vtable._7_GetCurrentTouchInfo.methodPtr);
  result = 0;
  if ( (v7 & 1) == 0 )
  {
    AvaliableTouchList = MapTouchDetector__GetAvaliableTouchList(0LL, v6);
    if ( !AvaliableTouchList )
      sub_1C13F80(0LL, v10);
    System_Collections_Generic_List_Touch___GetEnumerator(
      src,
      AvaliableTouchList,
      (const MethodInfo_366C3AC *)Method_System_Collections_Generic_List_Touch__GetEnumerator__);
    memcpy(dest, src, 0x58u);
    while ( 1 )
    {
      v11 = System_Collections_Generic_List_Enumerator_Touch___MoveNext(
              (System_Collections_Generic_List_Enumerator_T__o *)dest,
              (const MethodInfo_33C3AB4 *)Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__);
      if ( !v11 )
        break;
      memcpy(&v14, &dest[16], sizeof(v14));
      if ( !UnityEngine_Touch__get_phase(&v14, 0LL) )
      {
        v12 = 5;
        goto LABEL_10;
      }
    }
    v12 = 6;
LABEL_10:
    System_Collections_Generic_List_Enumerator_Touch___Dispose(
      (System_Collections_Generic_List_Enumerator_T__o *)dest,
      (const MethodInfo_33C3AB0 *)Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__);
    return v11 && v12 == 5;
  }
  return result;
}