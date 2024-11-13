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
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v5, v6, v7, v8, v9, v10, v11);
    StartTouchInfo_k__BackingField = this->fields._StartTouchInfo_k__BackingField;
    this->fields._CurrentTouchInfo_k__BackingField = StartTouchInfo_k__BackingField;
    p_CurrentTouchInfo_k__BackingField = &this->fields._CurrentTouchInfo_k__BackingField;
LABEL_3:
    sub_1BCA784(
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
        sub_1BCAA3C(TouchCount, v26);
      if ( (_DWORD)TouchCount != TouchDetectorBase_TouchInfo__get_TouchCount(
                                   p_fields->_StartTouchInfo_k__BackingField,
                                   v26) )
      {
        this->fields._StartTouchInfo_k__BackingField = v24;
        sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v24, v27, v28, v29, v30, v31, v32);
        this->fields._CurrentTouchInfo_k__BackingField = 0LL;
        sub_1BCA784(
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
      sub_1BCA784(
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_Touch__o *v12; // x19
  int32_t v13; // w20
  __int64 v14; // x1
  __int64 v15; // x2
  CTouch_c *v16; // x0
  System_Collections_Generic_List_int__o *ignoreFingerIDList; // x22
  void *fingerId; // x0
  __int64 v19; // x1
  _QWORD *v20; // x22
  struct UnityEngine_Touch_array *items; // x8
  __int64 size; // x9
  const MethodInfo_35E0020 *v23; // x22
  char v25[72]; // [xsp+8h] [xbp-188h] BYREF
  UnityEngine_Touch_o dest; // [xsp+50h] [xbp-140h] BYREF
  char v27[72]; // [xsp+A0h] [xbp-F0h] BYREF
  UnityEngine_Touch_o src; // [xsp+E8h] [xbp-A8h] BYREF

  if ( (byte_4B12D01 & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Touch__Add__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_int__Contains__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Touch___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_Touch__TypeInfo, v10, v11);
    byte_4B12D01 = 1;
  }
  memset(&dest, 0, sizeof(dest));
  v12 = (System_Collections_Generic_List_Touch__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_Touch__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_Touch____ctor(
    v12,
    (const MethodInfo_35DF704 *)Method_System_Collections_Generic_List_Touch___ctor__);
  if ( UnityEngine_Input__get_touchCount(0LL) >= 1 )
  {
    v13 = 0;
    while ( 1 )
    {
      UnityEngine_Input__GetTouch(&src, v13, 0LL);
      memcpy(&dest, &src, sizeof(dest));
      if ( !CTouch_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v14);
      if ( !byte_4B12DC1 )
      {
        sub_1BCA7E0(&CTouch_TypeInfo, v14, v15);
        byte_4B12DC1 = 1;
      }
      v16 = CTouch_TypeInfo;
      if ( !CTouch_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(CTouch_TypeInfo, v14);
        v16 = CTouch_TypeInfo;
      }
      ignoreFingerIDList = v16->static_fields->ignoreFingerIDList;
      fingerId = (void *)UnityEngine_Touch__get_fingerId(&dest, 0LL);
      if ( !ignoreFingerIDList )
        break;
      if ( !System_Collections_Generic_List_int___Contains(
              ignoreFingerIDList,
              (int32_t)fingerId,
              (const MethodInfo_3584FB0 *)Method_System_Collections_Generic_List_int__Contains__) )
      {
        fingerId = memcpy(v25, &dest, 0x44u);
        if ( !v12 )
          break;
        v20 = Method_System_Collections_Generic_List_Touch__Add__;
        fingerId = memcpy(v27, v25, 0x44u);
        items = v12->fields._items;
        ++v12->fields._version;
        if ( !items )
          break;
        size = v12->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          v23 = *(const MethodInfo_35E0020 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL);
          memcpy(&src, v27, sizeof(src));
          System_Collections_Generic_List_Touch___AddWithResize(v12, &src, v23);
        }
        else
        {
          v12->fields._size = size + 1;
          memcpy(&items->m_Items[size].fields.m_Position, v27, 0x44u);
        }
      }
      if ( ++v13 >= UnityEngine_Input__get_touchCount(0LL) )
        return v12;
    }
    sub_1BCAA3C(fingerId, v19);
  }
  return v12;
}


// local variable allocation has failed, the output may be wrong!
TouchDetectorBase_TouchInfo_o *__fastcall MapTouchDetector__GetCurrentTouchInfo(
        MapTouchDetector_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  System_Collections_Generic_List_Touch__o *AvaliableTouchList; // x0
  __int64 v28; // x1
  System_Collections_Generic_List_Touch__o *v29; // x20
  UnityEngine_Vector2_o v30; // x1
  UnityEngine_Vector2_o position; // kr00_8
  UnityEngine_Vector2_o ScreenPosition_47127516; // kr08_8
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  System_Collections_Generic_List_Vector2__o *v36; // x19
  UnityEngine_Vector2_o v37; // x1
  UnityEngine_Vector2_o v38; // kr10_8
  UnityEngine_Vector2_o v39; // x0
  UnityEngine_Vector2_o v40; // x1
  UnityEngine_Vector2_o v41; // kr18_8
  struct UnityEngine_Vector2_array *items; // x8
  _QWORD *v43; // x9
  __int64 size; // x10
  UnityEngine_Vector2_array *v45; // x20
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x3
  TouchDetectorBase_TouchInfo_o *v49; // x19
  const MethodInfo *v50; // x2
  UnityEngine_Touch_o src; // [xsp+8h] [xbp-1D8h] BYREF
  UnityEngine_Touch_o v53; // [xsp+60h] [xbp-180h] BYREF
  char v54[80]; // [xsp+B0h] [xbp-130h] BYREF
  __int64 v55; // [xsp+100h] [xbp-E0h]
  UnityEngine_Touch_o dest; // [xsp+110h] [xbp-D0h] BYREF

  if ( (byte_4B12D00 & 1) == 0 )
  {
    sub_1BCA7E0(&CTouch_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__, v3, v4);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Touch__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Vector2__Add__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Touch__GetEnumerator__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Touch__RemoveAt__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Vector2__ToArray__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Vector2___ctor__, v17, v18);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Touch__get_Count__, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Touch__get_Item__, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_List_Vector2__TypeInfo, v23, v24);
    this = (MapTouchDetector_o *)sub_1BCA7E0(&TouchDetectorBase_TouchInfo_TypeInfo, v25, v26);
    byte_4B12D00 = 1;
  }
  v55 = 0LL;
  memset(&dest, 0, sizeof(dest));
  memset(v54, 0, sizeof(v54));
  memset(&v53, 0, sizeof(v53));
  AvaliableTouchList = MapTouchDetector__GetAvaliableTouchList(this, method);
  if ( !AvaliableTouchList )
    goto LABEL_22;
  v29 = AvaliableTouchList;
  if ( AvaliableTouchList->fields._size < 1 )
    return 0LL;
  System_Collections_Generic_List_Touch___get_Item(
    &src,
    AvaliableTouchList,
    0,
    (const MethodInfo_35DFC68 *)Method_System_Collections_Generic_List_Touch__get_Item__);
  memcpy(&dest, &src, sizeof(dest));
  position = UnityEngine_Touch__get_position(&dest, 0LL);
  if ( !CTouch_TypeInfo->_2.cctor_finished )
    ((void (__fastcall *)(_QWORD, _QWORD))j_il2cpp_runtime_class_init_0)(CTouch_TypeInfo, v30);
  ScreenPosition_47127516 = CTouch__getScreenPosition_47127516(position, 0LL);
  System_Collections_Generic_List_Touch___RemoveAt(
    v29,
    0,
    (const MethodInfo_35E1D1C *)Method_System_Collections_Generic_List_Touch__RemoveAt__);
  v36 = (System_Collections_Generic_List_Vector2__o *)sub_1BCAA2C(
                                                        System_Collections_Generic_List_Vector2__TypeInfo,
                                                        v33,
                                                        v34,
                                                        v35);
  System_Collections_Generic_List_Vector2____ctor(
    v36,
    (const MethodInfo_35F4E78 *)Method_System_Collections_Generic_List_Vector2___ctor__);
  System_Collections_Generic_List_Touch___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&src,
    v29,
    (const MethodInfo_35E0E3C *)Method_System_Collections_Generic_List_Touch__GetEnumerator__);
  memcpy(v54, &src, 0x58u);
  while ( System_Collections_Generic_List_Enumerator_Touch___MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)v54,
            (const MethodInfo_3338044 *)Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__) )
  {
    memcpy(&v53, &v54[16], sizeof(v53));
    v38 = UnityEngine_Touch__get_position(&v53, 0LL);
    if ( !CTouch_TypeInfo->_2.cctor_finished )
      ((void (__fastcall *)(_QWORD, _QWORD))j_il2cpp_runtime_class_init_0)(CTouch_TypeInfo, v37);
    v41 = CTouch__getScreenPosition_47127516(v38, 0LL);
    if ( !v36 )
      sub_1BCAA3C(v39, v40);
    items = v36->fields._items;
    v43 = Method_System_Collections_Generic_List_Vector2__Add__;
    ++v36->fields._version;
    if ( !items )
      sub_1BCAA3C(v39, v40);
    size = v36->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_Vector2___AddWithResize(
        v36,
        v41,
        *(const MethodInfo_35F56E0 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
    }
    else
    {
      v36->fields._size = size + 1;
      *(UnityEngine_Vector2_o *)&items->m_Items[size].fields.y = v41;
    }
  }
  System_Collections_Generic_List_Enumerator_Touch___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)v54,
    (const MethodInfo_3338040 *)Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__);
  if ( !v36 )
LABEL_22:
    sub_1BCAA3C(AvaliableTouchList, v28);
  v45 = System_Collections_Generic_List_Vector2___ToArray(
          v36,
          (const MethodInfo_35F71FC *)Method_System_Collections_Generic_List_Vector2__ToArray__);
  v49 = (TouchDetectorBase_TouchInfo_o *)sub_1BCAA2C(TouchDetectorBase_TouchInfo_TypeInfo, v46, v47, v48);
  TouchDetectorBase_TouchInfo___ctor(v49, ScreenPosition_47127516, v45, v50);
  return v49;
}


bool __fastcall MapTouchDetector__IsTouchKeep(MapTouchDetector_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  System_Collections_Generic_List_Touch__o *AvaliableTouchList; // x0
  __int64 v10; // x1
  char v11; // w19
  int v12; // w21
  System_Collections_Generic_List_Enumerator_T__o src[3]; // [xsp+8h] [xbp-138h] BYREF
  UnityEngine_Touch_o v15; // [xsp+60h] [xbp-E0h] BYREF
  char dest[80]; // [xsp+B0h] [xbp-90h] BYREF
  __int64 v17; // [xsp+100h] [xbp-40h]

  if ( (byte_4B12CFF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__, v3, v4);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Touch__get_Current__, v5, v6);
    this = (MapTouchDetector_o *)sub_1BCA7E0(&Method_System_Collections_Generic_List_Touch__GetEnumerator__, v7, v8);
    byte_4B12CFF = 1;
  }
  v17 = 0LL;
  memset(dest, 0, sizeof(dest));
  memset(&v15, 0, sizeof(v15));
  AvaliableTouchList = MapTouchDetector__GetAvaliableTouchList(this, method);
  if ( !AvaliableTouchList )
    sub_1BCAA3C(0LL, v10);
  System_Collections_Generic_List_Touch___GetEnumerator(
    src,
    AvaliableTouchList,
    (const MethodInfo_35E0E3C *)Method_System_Collections_Generic_List_Touch__GetEnumerator__);
  memcpy(dest, src, 0x58u);
  while ( System_Collections_Generic_List_Enumerator_Touch___MoveNext(
            (System_Collections_Generic_List_Enumerator_T__o *)dest,
            (const MethodInfo_3338044 *)Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__) )
  {
    memcpy(&v15, &dest[16], sizeof(v15));
    if ( UnityEngine_Touch__get_phase(&v15, 0LL) == 1 || UnityEngine_Touch__get_phase(&v15, 0LL) == 2 )
    {
      v11 = 1;
      v12 = 5;
      goto LABEL_10;
    }
  }
  v11 = 0;
  v12 = 6;
LABEL_10:
  System_Collections_Generic_List_Enumerator_Touch___Dispose(
    (System_Collections_Generic_List_Enumerator_T__o *)dest,
    (const MethodInfo_3338040 *)Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__);
  return v11 & (v12 == 5);
}


bool __fastcall MapTouchDetector__IsTouchStart(MapTouchDetector_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  const MethodInfo *v10; // x1
  char v11; // w8
  bool result; // w0
  System_Collections_Generic_List_Touch__o *AvaliableTouchList; // x0
  __int64 v14; // x1
  bool v15; // w19
  int v16; // w20
  System_Collections_Generic_List_Enumerator_T__o src[3]; // [xsp+8h] [xbp-138h] BYREF
  UnityEngine_Touch_o v18; // [xsp+60h] [xbp-E0h] BYREF
  char dest[80]; // [xsp+B0h] [xbp-90h] BYREF
  __int64 v20; // [xsp+100h] [xbp-40h]

  if ( (byte_4B12CFE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_Touch__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Touch__GetEnumerator__, v8, v9);
    byte_4B12CFE = 1;
  }
  v20 = 0LL;
  memset(dest, 0, sizeof(dest));
  memset(&v18, 0, sizeof(v18));
  v11 = ((__int64 (__fastcall *)(MapTouchDetector_o *, Il2CppMethodPointer))this->klass->vtable._6_IsTouchKeep.method)(
          this,
          this->klass->vtable._7_GetCurrentTouchInfo.methodPtr);
  result = 0;
  if ( (v11 & 1) == 0 )
  {
    AvaliableTouchList = MapTouchDetector__GetAvaliableTouchList(0LL, v10);
    if ( !AvaliableTouchList )
      sub_1BCAA3C(0LL, v14);
    System_Collections_Generic_List_Touch___GetEnumerator(
      src,
      AvaliableTouchList,
      (const MethodInfo_35E0E3C *)Method_System_Collections_Generic_List_Touch__GetEnumerator__);
    memcpy(dest, src, 0x58u);
    while ( 1 )
    {
      v15 = System_Collections_Generic_List_Enumerator_Touch___MoveNext(
              (System_Collections_Generic_List_Enumerator_T__o *)dest,
              (const MethodInfo_3338044 *)Method_System_Collections_Generic_List_Enumerator_Touch__MoveNext__);
      if ( !v15 )
        break;
      memcpy(&v18, &dest[16], sizeof(v18));
      if ( !UnityEngine_Touch__get_phase(&v18, 0LL) )
      {
        v16 = 5;
        goto LABEL_10;
      }
    }
    v16 = 6;
LABEL_10:
    System_Collections_Generic_List_Enumerator_Touch___Dispose(
      (System_Collections_Generic_List_Enumerator_T__o *)dest,
      (const MethodInfo_3338040 *)Method_System_Collections_Generic_List_Enumerator_Touch__Dispose__);
    return v15 && v16 == 5;
  }
  return result;
}