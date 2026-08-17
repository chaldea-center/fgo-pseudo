void TitleInfoEventUIComponent___ctor(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  System_Collections_Generic_List_object__o *v10; // x20
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_Collections_Generic_List_object__o *v17; // x20
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7

  if ( (byte_596F31F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_AssetData___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoUIBase___ctor__);
    sub_2213A60(&System_Collections_Generic_List_TitleInfoEventUIPartsComponent__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_EventInfoUIBase__TypeInfo);
    sub_2213A60(&System_Collections_Generic_List_AssetData__TypeInfo);
    byte_596F31F = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_AssetData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_AssetData___ctor__);
  this->fields.eventInfoAssetDataList = (struct System_Collections_Generic_List_AssetData__o *)v3;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventInfoAssetDataList,
    (int32_t)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_EventInfoUIBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_EventInfoUIBase___ctor__);
  this->fields.eventUiPrefabList = (struct System_Collections_Generic_List_EventInfoUIBase__o *)v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventUiPrefabList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_TitleInfoEventUIPartsComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent___ctor__);
  this->fields.eventUIPartsList = (struct System_Collections_Generic_List_TitleInfoEventUIPartsComponent__o *)v17;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.eventUIPartsList,
    (int32_t)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  TitleInfoEventInfoComponent___ctor((TitleInfoEventInfoComponent_o *)this, 0);
}


void TitleInfoEventUIComponent__AfterRedisplay(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventInfoUIBase__o *eventUiPrefabList; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *current; // x19
  _BOOL8 v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596F30C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F30C = 1;
  }
  eventUiPrefabList = this->fields.eventUiPrefabList;
  memset(&v9, 0, sizeof(v9));
  if ( eventUiPrefabList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v9,
      (System_Collections_Generic_List_object__o *)eventUiPrefabList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v9,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
    {
      current = v9.fields._current;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
      v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
      if ( !v7 )
      {
        if ( !current )
          sub_2213CDC(v7, v8);
        ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))current->klass->vtable[11].methodPtr)(
          current,
          current->klass->vtable[11].method);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v9,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
  }
}


System_Collections_IEnumerator_o *TitleInfoEventUIComponent__AsyncSetup(
        TitleInfoEventUIComponent_o *this,
        EventUiEntity_o *eventUIEntity,
        bool isMap,
        bool isEventReward,
        bool isCaldea,
        System_Action_o *callback,
        const MethodInfo *method)
{
  bool v12; // w24
  __int64 v13; // x22
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_596F30D & 1) == 0 )
  {
    sub_2213A60(&TitleInfoEventUIComponent__AsyncSetup_d__15_TypeInfo);
    byte_596F30D = 1;
  }
  v12 = isMap;
  v13 = sub_2213CCC(TitleInfoEventUIComponent__AsyncSetup_d__15_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  *(_DWORD *)(v13 + 16) = 0;
  *(_QWORD *)(v13 + 48) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 48), (int32_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v13 + 32) = eventUIEntity;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 32), (int32_t)eventUIEntity, v20, v21, v22, v23, v24, v25);
  *(_BYTE *)(v13 + 40) = v12;
  *(_BYTE *)(v13 + 41) = isEventReward;
  *(_QWORD *)(v13 + 56) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v13 + 56), (int32_t)callback, v26, v27, v28, v29, v30, v31);
  return (System_Collections_IEnumerator_o *)v13;
}


System_String_o *TitleInfoEventUIComponent__GetAssetName(EventUiEntity_o *eventUIEntity, const MethodInfo *method)
{
  EventUiEntity_o *v2; // x19
  int32_t eventId; // w0
  Il2CppObject *v5; // x20
  Il2CppObject *v6; // x0
  int32_t warId; // [xsp+8h] [xbp-28h] BYREF
  int v8; // [xsp+Ch] [xbp-24h] BYREF

  v2 = eventUIEntity;
  if ( (byte_596F31C & 1) == 0 )
  {
    eventUIEntity = (EventUiEntity_o *)sub_2213A60(&StringLiteral_6539/*"EventUI/Prefabs/{0}/{1}"*/);
    byte_596F31C = 1;
  }
  if ( !v2 )
    sub_2213CDC(eventUIEntity, method);
  eventId = v2->fields.eventId;
  if ( eventId )
    return TitleInfoEventUIComponent__GetEventAssetName(eventId, method);
  v8 = 0;
  v5 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v8);
  warId = v2->fields.warId;
  v6 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &warId);
  return System_String__Format_75697880((System_String_o *)StringLiteral_6539/*"EventUI/Prefabs/{0}/{1}"*/, v5, v6, 0);
}


System_String_o *TitleInfoEventUIComponent__GetEventAssetName(int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *v3; // x0
  int32_t v5; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_596F31D & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_6538/*"EventUI/Prefabs/{0}"*/);
    byte_596F31D = 1;
  }
  v5 = eventId;
  v3 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v5);
  return System_String__Format((System_String_o *)StringLiteral_6538/*"EventUI/Prefabs/{0}"*/, v3, 0);
}


UnityEngine_Vector3_o TitleInfoEventUIComponent__GetPosition(
        TitleInfoEventUIComponent_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  int32_t x; // w20
  EventUiEntity_c *v5; // x0
  float EVNET_UI_POSITION_MAGNIFICATION; // s3
  float v7; // s0
  float v8; // s1
  float v9; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596F319 & 1) == 0 )
  {
    this = (TitleInfoEventUIComponent_o *)sub_2213A60(&EventUiEntity_TypeInfo);
    byte_596F319 = 1;
  }
  if ( !entity )
    sub_2213CDC(this, entity);
  x = entity->fields.x;
  v5 = EventUiEntity_TypeInfo;
  if ( !*(&EventUiEntity_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(EventUiEntity_TypeInfo, entity, method);
    v5 = EventUiEntity_TypeInfo;
  }
  EVNET_UI_POSITION_MAGNIFICATION = v5->static_fields->EVNET_UI_POSITION_MAGNIFICATION;
  v7 = EVNET_UI_POSITION_MAGNIFICATION * (float)x;
  v8 = -(float)(EVNET_UI_POSITION_MAGNIFICATION * (float)entity->fields.y);
  v9 = 0.0;
  result.fields.z = v9;
  result.fields.y = v8;
  result.fields.x = v7;
  return result;
}


bool TitleInfoEventUIComponent__IsBusy(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *eventUiPrefabList; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  bool v6; // w19
  Il2CppObject *current; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596F31E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoUIBase__get_Count__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F31E = 1;
  }
  eventUiPrefabList = (System_Collections_Generic_List_object__o *)this->fields.eventUiPrefabList;
  memset(&v11, 0, sizeof(v11));
  if ( eventUiPrefabList && eventUiPrefabList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      eventUiPrefabList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    while ( 1 )
    {
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v11,
             (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__);
      if ( !v6 )
        break;
      current = v11.fields._current;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
      v8 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
      if ( v8 )
      {
        if ( !current )
          sub_2213CDC(v8, v9);
        if ( (((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))current->klass->vtable[17].methodPtr)(
                current,
                current->klass->vtable[17].method)
            & 1) != 0 )
          break;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
  }
  else
  {
    return 0;
  }
  return v6;
}


bool TitleInfoEventUIComponent__IsDispEventUIForSpot(
        TitleInfoEventUIComponent_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  EventUiEntity_o *eventUIEntity_k__BackingField; // x0

  eventUIEntity_k__BackingField = this->fields._eventUIEntity_k__BackingField;
  if ( eventUIEntity_k__BackingField )
    LOBYTE(eventUIEntity_k__BackingField) = EventUiEntity__IsDispEventUIForSpot(
                                              eventUIEntity_k__BackingField,
                                              spotId,
                                              0);
  return (char)eventUIEntity_k__BackingField;
}


bool TitleInfoEventUIComponent__IsDispPossible(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  return 1;
}


bool TitleInfoEventUIComponent__IsEventRaidBoss(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  return 0;
}


bool TitleInfoEventUIComponent__IsPlayAnim(
        TitleInfoEventUIComponent_o *this,
        int32_t playType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *eventUiPrefabList; // x0
  __int64 v5; // x1
  bool v6; // w20
  System_Collections_Generic_List_Enumerator_object__o v8; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_596F316 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoUIBase__get_Count__);
    byte_596F316 = 1;
  }
  eventUiPrefabList = (System_Collections_Generic_List_object__o *)this->fields.eventUiPrefabList;
  memset(&v8, 0, sizeof(v8));
  if ( eventUiPrefabList && eventUiPrefabList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v8,
      eventUiPrefabList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    do
    {
      v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v8,
             (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__);
      if ( !v6 )
        break;
      if ( !v8.fields._current )
        sub_2213CDC(0, v5);
    }
    while ( (((__int64 (*)(void))v8.fields._current->klass->vtable[7].methodPtr)() & 1) == 0 );
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v8,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
  }
  else
  {
    return 0;
  }
  return v6;
}


System_Collections_IEnumerator_o *TitleInfoEventUIComponent__LoadAssetBundle(
        TitleInfoEventUIComponent_o *this,
        EventUiEntity_o *eventUIEntity,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_596F30E & 1) == 0 )
  {
    sub_2213A60(&TitleInfoEventUIComponent__LoadAssetBundle_d__16_TypeInfo);
    byte_596F30E = 1;
  }
  v7 = sub_2213CCC(TitleInfoEventUIComponent__LoadAssetBundle_d__16_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = eventUIEntity;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 40), (int32_t)eventUIEntity, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 48) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 48), (int32_t)callback, v20, v21, v22, v23, v24, v25);
  return (System_Collections_IEnumerator_o *)v7;
}


void TitleInfoEventUIComponent__OnDestroy(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventInfoUIBase__o *eventUiPrefabList; // x8
  int32_t size; // w2
  int v5; // w9

  if ( (byte_596F31B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoUIBase__Clear__);
    byte_596F31B = 1;
  }
  eventUiPrefabList = this->fields.eventUiPrefabList;
  if ( eventUiPrefabList )
  {
    size = eventUiPrefabList->fields._size;
    v5 = eventUiPrefabList->fields._version + 1;
    eventUiPrefabList->fields._size = 0;
    eventUiPrefabList->fields._version = v5;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)eventUiPrefabList->fields._items, 0, size, 0);
  }
  TitleInfoEventUIComponent__ReleaseAsset(this, method);
}


void TitleInfoEventUIComponent__PlayAnim(
        TitleInfoEventUIComponent_o *this,
        int32_t playType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x23
  struct System_Collections_Generic_List_EventInfoUIBase__o *v8; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  struct System_Collections_Generic_List_EventInfoUIBase__o *eventUiPrefabList; // x8
  int size; // w8
  System_Action_o *v18; // x22
  __int64 v19; // x1
  __int64 v20; // x2
  Il2CppObject *current; // x21
  _BOOL8 v22; // x0
  __int64 v23; // x1
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_596F317 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoUIBase__get_Count__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_TitleInfoEventUIComponent___c__DisplayClass27_0__PlayAnim_b__0__);
    sub_2213A60(&TitleInfoEventUIComponent___c__DisplayClass27_0_TypeInfo);
    byte_596F317 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  v7 = sub_2213CCC(TitleInfoEventUIComponent___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_17;
  *(_QWORD *)(v7 + 16) = callback;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)callback, v10, v11, v12, v13, v14, v15);
  eventUiPrefabList = this->fields.eventUiPrefabList;
  if ( !eventUiPrefabList || (size = eventUiPrefabList->fields._size, size < 1) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 16), 0);
    return;
  }
  *(_DWORD *)(v7 + 24) = size;
  v18 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v7,
    Method_TitleInfoEventUIComponent___c__DisplayClass27_0__PlayAnim_b__0__,
    0);
  v8 = this->fields.eventUiPrefabList;
  if ( !v8 )
LABEL_17:
    sub_2213CDC(v8, v9);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v24,
    (System_Collections_Generic_List_object__o *)v8,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
  {
    current = v24.fields._current;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19, v20);
    v22 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
    if ( v22 )
    {
      ActionExtensions__Call(v18, 0);
    }
    else
    {
      if ( !current )
        sub_2213CDC(v22, v23);
      ((void (__fastcall *)(Il2CppObject *, _QWORD, System_Action_o *, const MethodInfo *))current->klass->vtable[8].methodPtr)(
        current,
        (unsigned int)playType,
        v18,
        current->klass->vtable[8].method);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
}


void TitleInfoEventUIComponent__Redisplay(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventInfoUIBase__o *eventUiPrefabList; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *current; // x19
  _BOOL8 v7; // x0
  __int64 v8; // x1
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596F30B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F30B = 1;
  }
  eventUiPrefabList = this->fields.eventUiPrefabList;
  memset(&v9, 0, sizeof(v9));
  if ( eventUiPrefabList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v9,
      (System_Collections_Generic_List_object__o *)eventUiPrefabList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v9,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
    {
      current = v9.fields._current;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
      v7 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
      if ( !v7 )
      {
        if ( !current )
          sub_2213CDC(v7, v8);
        ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))current->klass->vtable[10].methodPtr)(
          current,
          current->klass->vtable[10].method);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v9,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
  }
}


void TitleInfoEventUIComponent__ReleaseAsset(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_AssetData__o *eventInfoAssetDataList; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  Il2CppObject *current; // x20
  __int64 v7; // x0
  __int64 v8; // x1
  struct System_Collections_Generic_List_AssetData__o *v9; // x8
  int32_t size; // w2
  int v11; // w9
  System_Collections_Generic_List_Enumerator_object__o v12; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596F31A & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_AssetData__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    byte_596F31A = 1;
  }
  eventInfoAssetDataList = this->fields.eventInfoAssetDataList;
  memset(&v12, 0, sizeof(v12));
  if ( eventInfoAssetDataList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v12,
      (System_Collections_Generic_List_object__o *)eventInfoAssetDataList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v12,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__) )
    {
      current = v12.fields._current;
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v4, v5);
      AssetManager__releaseAsset_47496972((AssetData_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v12,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    v9 = this->fields.eventInfoAssetDataList;
    if ( !v9 )
      sub_2213CDC(v7, v8);
    size = v9->fields._size;
    v11 = v9->fields._version + 1;
    v9->fields._size = 0;
    v9->fields._version = v11;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v9->fields._items, 0, size, 0);
  }
}


void TitleInfoEventUIComponent__SetActiveChildren(
        TitleInfoEventUIComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  System_Collections_IEnumerator_o *Enumerator; // x0
  __int64 v8; // x1
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v10; // x9
  int *p_offset; // x10
  __int64 v12; // x0
  System_Collections_IEnumerator_c *v13; // x8
  __int64 v14; // x9
  System_Collections_IEnumerator_c **v15; // x10
  __int64 v16; // x0
  UnityEngine_Component_o *v17; // x0
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 naturalAligment; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x20
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  System_Collections_IEnumerator_o *v30; // [xsp+28h] [xbp-38h]

  if ( (byte_596F310 & 1) == 0 )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&UnityEngine_Transform_TypeInfo);
    byte_596F310 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_2213CDC(0, v6);
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0);
  v30 = Enumerator;
  while ( 1 )
  {
    if ( !v30 )
      goto LABEL_34;
    klass = v30->klass;
    v10 = *(unsigned __int16 *)&v30->klass->_2.rank;
    if ( *(_WORD *)&v30->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v10;
        p_offset += 4;
        if ( !v10 )
          goto LABEL_10;
      }
      v12 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v12 = sub_224BC3C(v30, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v12)(v30, *(_QWORD *)(v12 + 8)) & 1) == 0 )
      break;
    v13 = v30->klass;
    v14 = *(unsigned __int16 *)&v30->klass->_2.rank;
    if ( *(_WORD *)&v30->klass->_2.rank )
    {
      v15 = (System_Collections_IEnumerator_c **)&v13->_1.interfaceOffsets->offset;
      while ( *(v15 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v14;
        v15 += 2;
        if ( !v14 )
          goto LABEL_17;
      }
      v16 = (__int64)&v13->vtable[*(_DWORD *)v15 + 1];
    }
    else
    {
LABEL_17:
      v16 = sub_224BC3C(v30, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v17 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v16)(
                                       v30,
                                       *(_QWORD *)(v16 + 8));
    if ( !v17 )
      sub_2213CDC(0, v18);
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v17->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v17->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_221405C(v17, UnityEngine_Transform_TypeInfo, v19, v20);
LABEL_34:
      sub_2213CDC(Enumerator, v8);
    }
    gameObject = UnityEngine_Component__get_gameObject(v17, 0);
    if ( !gameObject )
      sub_2213CDC(0, v23);
    UnityEngine_GameObject__SetActive(gameObject, isActive, 0);
  }
  v24 = sub_2213BB4(v30, System_IDisposable_TypeInfo);
  if ( v24 )
  {
    v25 = *(_QWORD *)v24;
    v26 = v24;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v28 - 1) != System_IDisposable_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_29;
      }
      v29 = v25 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_29:
      v29 = sub_224BC3C(v24, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v29)(v26, *(_QWORD *)(v29 + 8));
  }
}


void TitleInfoEventUIComponent__SetDispEventUIForSpot(
        TitleInfoEventUIComponent_o *this,
        int32_t spotId,
        const MethodInfo *method)
{
  EventUiEntity_o *eventUIEntity_k__BackingField; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  EventUiEntity_o *v8; // x0
  bool v9; // w1
  EventUiEntity_o *v10; // x0
  const MethodInfo *v11; // x2

  eventUIEntity_k__BackingField = this->fields._eventUIEntity_k__BackingField;
  if ( eventUIEntity_k__BackingField )
  {
    if ( EventUiEntity__IsDispArea(eventUIEntity_k__BackingField, 8, 0) )
    {
      v8 = this->fields._eventUIEntity_k__BackingField;
      v9 = v8 && EventUiEntity__IsDispEventUIForSpot(v8, spotId, 0);
      TitleInfoEventUIComponent__SetActiveChildren(this, v9, v7);
    }
    v10 = this->fields._eventUIEntity_k__BackingField;
    if ( !v10 )
      sub_2213CDC(0, v6);
    if ( EventUiEntity__IsDispArea(v10, 1, 0) )
      TitleInfoEventUIComponent__SwitchSpotState(this, spotId > 0, v11);
  }
}


void TitleInfoEventUIComponent__SetGameObject(
        TitleInfoEventUIComponent_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  const MethodInfo *v20; // x1
  System_String_o *AssetName; // x19
  AssetLoader_LoadEndDataHandler_o *v22; // x20
  __int64 v23; // x1
  __int64 v24; // x2

  if ( (byte_596F313 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_TitleInfoEventUIComponent___c__DisplayClass23_0__SetGameObject_b__0__);
    sub_2213A60(&TitleInfoEventUIComponent___c__DisplayClass23_0_TypeInfo);
    byte_596F313 = 1;
  }
  v5 = sub_2213CCC(TitleInfoEventUIComponent___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_2213CDC(v6, v7);
  *(_QWORD *)(v5 + 16) = entity;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)entity, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)this, v14, v15, v16, v17, v18, v19);
  AssetName = TitleInfoEventUIComponent__GetAssetName(*(EventUiEntity_o **)(v5 + 16), v20);
  v22 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v22,
    (Il2CppObject *)v5,
    Method_TitleInfoEventUIComponent___c__DisplayClass23_0__SetGameObject_b__0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v23, v24);
  AssetManager__loadAssetStorage(AssetName, v22, 1, 0, 0);
}


void TitleInfoEventUIComponent__SetImage(
        TitleInfoEventUIComponent_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  TitleInfoEventUIComponent_o *v4; // x20
  System_String_o *v5; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  UISprite_o *imageSprite; // x22
  System_String_o *v9; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoEventUIComponent_o *v11; // x20
  const MethodInfo *v12; // x2
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_596F314 & 1) == 0 )
  {
    this = (TitleInfoEventUIComponent_o *)sub_2213A60(&AtlasManager_TypeInfo);
    byte_596F314 = 1;
  }
  if ( !entity )
    goto LABEL_10;
  v5 = System_Int32__ToString((int)entity + 52, 0);
  imageSprite = v4->fields.imageSprite;
  v9 = v5;
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v6, v7);
  AtlasManager__SetEventUI(imageSprite, v9, 0);
  this = (TitleInfoEventUIComponent_o *)v4->fields.imageSprite;
  if ( !this
    || (((void (__fastcall *)(TitleInfoEventUIComponent_o *, void *))this->klass[1].vtable._6_IsEventRaidBoss.method)(
          this,
          this->klass[2]._1.image),
        (this = (TitleInfoEventUIComponent_o *)v4->fields.imageSprite) == 0)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0),
        GameObjectExtensions__ResetLocalScale(gameObject, 0),
        (this = (TitleInfoEventUIComponent_o *)v4->fields.imageSprite) == 0) )
  {
LABEL_10:
    sub_2213CDC(this, entity);
  }
  v11 = (TitleInfoEventUIComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Position = TitleInfoEventUIComponent__GetPosition(v11, entity, v12);
  GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v11, Position, 0);
}


void TitleInfoEventUIComponent__SetUIDisp(TitleInfoEventUIComponent_o *this, bool isDisp, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *eventUiPrefabList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596F318 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoUIBase__get_Count__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F318 = 1;
  }
  eventUiPrefabList = (System_Collections_Generic_List_object__o *)this->fields.eventUiPrefabList;
  memset(&v11, 0, sizeof(v11));
  if ( eventUiPrefabList && eventUiPrefabList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      eventUiPrefabList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
    {
      current = v11.fields._current;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
      v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
      if ( !v9 )
      {
        if ( !current )
          sub_2213CDC(v9, v10);
        ((void (__fastcall *)(Il2CppObject *, bool, const MethodInfo *))current->klass->vtable[12].methodPtr)(
          current,
          isDisp,
          current->klass->vtable[12].method);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
  }
}


void TitleInfoEventUIComponent__SetValue(
        TitleInfoEventUIComponent_o *this,
        int32_t valueType,
        Il2CppObject *val,
        int32_t setType,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventInfoUIBase__o *eventUiPrefabList; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  Il2CppObject *current; // x22
  _BOOL8 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_596F315 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F315 = 1;
  }
  eventUiPrefabList = this->fields.eventUiPrefabList;
  memset(&v15, 0, sizeof(v15));
  if ( eventUiPrefabList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      (System_Collections_Generic_List_object__o *)eventUiPrefabList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
    {
      current = v15.fields._current;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
      v13 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
      if ( !v13 )
      {
        if ( !current )
          sub_2213CDC(v13, v14);
        ((void (__fastcall *)(Il2CppObject *, _QWORD, Il2CppObject *, _QWORD, const MethodInfo *))current->klass->vtable[6].methodPtr)(
          current,
          (unsigned int)valueType,
          val,
          (unsigned int)setType,
          current->klass->vtable[6].method);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
  }
}


void TitleInfoEventUIComponent__SwitchSpotState(
        TitleInfoEventUIComponent_o *this,
        bool isOpen,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventInfoUIBase__o *eventUiPrefabList; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *current; // x20
  _BOOL8 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_596F311 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F311 = 1;
  }
  eventUiPrefabList = this->fields.eventUiPrefabList;
  memset(&v11, 0, sizeof(v11));
  if ( eventUiPrefabList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      (System_Collections_Generic_List_object__o *)eventUiPrefabList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
    {
      current = v11.fields._current;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
      v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
      if ( !v9 )
      {
        if ( !current )
          sub_2213CDC(v9, v10);
        ((void (__fastcall *)(Il2CppObject *, bool, const MethodInfo *))current->klass->vtable[13].methodPtr)(
          current,
          isOpen,
          current->klass->vtable[13].method);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
  }
}


void TitleInfoEventUIComponent__UpdateDisp(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  ;
}


void TitleInfoEventUIComponent__UpdateEventUI(
        TitleInfoEventUIComponent_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  UnityEngine_Object_o *imageSprite; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  int32_t objectType; // w8

  if ( (byte_596F30F & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F30F = 1;
  }
  imageSprite = (UnityEngine_Object_o *)this->fields.imageSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, entity, method);
  v6 = UnityEngine_Object__op_Equality(imageSprite, 0, 0);
  if ( !v6 )
  {
    if ( !entity )
      sub_2213CDC(v6, v7);
    objectType = entity->fields.objectType;
    if ( objectType == 3 )
    {
      TitleInfoEventUIComponent__SetGameObject(this, entity, v8);
    }
    else if ( objectType == 2 )
    {
      TitleInfoEventUIComponent__SetImage(this, entity, v8);
    }
  }
}


void TitleInfoEventUIComponent__UpdatePartsDisp(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *eventUIPartsList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_596F312 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__get_Count__);
    byte_596F312 = 1;
  }
  eventUIPartsList = (System_Collections_Generic_List_object__o *)this->fields.eventUIPartsList;
  memset(&v5, 0, sizeof(v5));
  if ( eventUIPartsList && eventUIPartsList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v5,
      eventUIPartsList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v5,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__MoveNext__) )
    {
      if ( !v5.fields._current )
        sub_2213CDC(0, v4);
      TitleInfoEventUIPartsComponent__UpdateDisp((TitleInfoEventUIPartsComponent_o *)v5.fields._current, v4);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v5,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__Dispose__);
  }
}


System_Collections_Generic_List_EventInfoUIBase__o *TitleInfoEventUIComponent__get_EventUiPrefabList(
        TitleInfoEventUIComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.eventUiPrefabList;
}


EventUiEntity_o *TitleInfoEventUIComponent__get_eventUIEntity(
        TitleInfoEventUIComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._eventUIEntity_k__BackingField;
}


void TitleInfoEventUIComponent__set_eventUIEntity(
        TitleInfoEventUIComponent_o *this,
        EventUiEntity_o *value,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._eventUIEntity_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._eventUIEntity_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void TitleInfoEventUIComponent__AsyncSetup_d__15___ctor(
        TitleInfoEventUIComponent__AsyncSetup_d__15_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool TitleInfoEventUIComponent__AsyncSetup_d__15__MoveNext(
        TitleInfoEventUIComponent__AsyncSetup_d__15_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  bool result; // w0
  struct TitleInfoEventUIComponent_o *_4__this; // x20
  __int64 v6; // x21
  __int64 v7; // x0
  struct EventUiEntity_o *v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct EventUiEntity_o *eventUIEntity; // x1
  struct TitleInfoEventUIComponent_o *v16; // x1
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  struct System_Action_o *callback; // x1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  EventUiEntity_o *v36; // x22
  System_Action_o *v37; // x23
  const MethodInfo *v38; // x3
  Il2CppObject *AssetBundle; // x0
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  int32_t v46; // w8

  if ( (byte_596F323 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_TitleInfoEventUIComponent___c__DisplayClass15_0__AsyncSetup_b__0__);
    sub_2213A60(&TitleInfoEventUIComponent___c__DisplayClass15_0_TypeInfo);
    byte_596F323 = 1;
  }
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 1 )
  {
    v46 = -1;
  }
  else
  {
    if ( _1__state )
      return result;
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    v6 = sub_2213CCC(TitleInfoEventUIComponent___c__DisplayClass15_0_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0);
    if ( !v6 )
      goto LABEL_13;
    eventUIEntity = this->fields.eventUIEntity;
    *(_QWORD *)(v6 + 16) = eventUIEntity;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 16), (int32_t)eventUIEntity, v9, v10, v11, v12, v13, v14);
    *(_WORD *)(v6 + 24) = *(_WORD *)&this->fields.isMap;
    v16 = this->fields.__4__this;
    *(_QWORD *)(v6 + 32) = v16;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 32), (int32_t)v16, v17, v18, v19, v20, v21, v22);
    callback = this->fields.callback;
    *(_QWORD *)(v6 + 40) = callback;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v6 + 40), (int32_t)callback, v24, v25, v26, v27, v28, v29);
    v8 = *(struct EventUiEntity_o **)(v6 + 16);
    if ( !v8 )
      return 0;
    if ( !_4__this )
LABEL_13:
      sub_2213CDC(v7, v8);
    _4__this->fields._eventUIEntity_k__BackingField = v8;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&_4__this->fields._eventUIEntity_k__BackingField,
      (int32_t)v8,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    v36 = *(EventUiEntity_o **)(v6 + 16);
    v37 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
    System_Action___ctor(
      v37,
      (Il2CppObject *)v6,
      Method_TitleInfoEventUIComponent___c__DisplayClass15_0__AsyncSetup_b__0__,
      0);
    AssetBundle = (Il2CppObject *)TitleInfoEventUIComponent__LoadAssetBundle(_4__this, v36, v37, v38);
    this->fields.__2__current = AssetBundle;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.__2__current,
      (int32_t)AssetBundle,
      v40,
      v41,
      v42,
      v43,
      v44,
      v45);
    v46 = 1;
    result = 1;
  }
  this->fields.__1__state = v46;
  return result;
}


Il2CppObject *TitleInfoEventUIComponent__AsyncSetup_d__15__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TitleInfoEventUIComponent__AsyncSetup_d__15_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn TitleInfoEventUIComponent__AsyncSetup_d__15__System_Collections_IEnumerator_Reset(
        TitleInfoEventUIComponent__AsyncSetup_d__15_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_TitleInfoEventUIComponent__AsyncSetup_d__15_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *TitleInfoEventUIComponent__AsyncSetup_d__15__System_Collections_IEnumerator_get_Current(
        TitleInfoEventUIComponent__AsyncSetup_d__15_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void TitleInfoEventUIComponent__AsyncSetup_d__15__System_IDisposable_Dispose(
        TitleInfoEventUIComponent__AsyncSetup_d__15_o *this,
        const MethodInfo *method)
{
  ;
}


void TitleInfoEventUIComponent__LoadAssetBundle_d__16___ctor(
        TitleInfoEventUIComponent__LoadAssetBundle_d__16_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool TitleInfoEventUIComponent__LoadAssetBundle_d__16__MoveNext(
        TitleInfoEventUIComponent__LoadAssetBundle_d__16_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  TitleInfoEventUIComponent__LoadAssetBundle_d__16_o *v8; // x19
  int32_t _1__state; // w8
  Il2CppObject *v10; // x21
  Il2CppObject **p__8__1; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct TitleInfoEventUIComponent_o *_4__this; // x1
  System_String_o *AssetName; // x0
  Il2CppObject *v26; // x22
  System_String_o *v27; // x20
  AssetLoader_LoadEndDataHandler_o *v28; // x21
  __int64 v29; // x1
  __int64 v30; // x2
  struct TitleInfoEventUIComponent___c__DisplayClass16_0_o *_8__1; // x8
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  bool result; // w0

  v8 = this;
  if ( (byte_596F324 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&Method_TitleInfoEventUIComponent___c__DisplayClass16_0__LoadAssetBundle_b__0__);
    this = (TitleInfoEventUIComponent__LoadAssetBundle_d__16_o *)sub_2213A60(&TitleInfoEventUIComponent___c__DisplayClass16_0_TypeInfo);
    byte_596F324 = 1;
  }
  _1__state = v8->fields.__1__state;
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
    goto LABEL_12;
  }
  if ( !_1__state )
  {
    v8->fields.__1__state = -1;
    v10 = (Il2CppObject *)sub_2213CCC(TitleInfoEventUIComponent___c__DisplayClass16_0_TypeInfo);
    System_Object___ctor(v10, 0);
    v8->fields.__8__1 = (struct TitleInfoEventUIComponent___c__DisplayClass16_0_o *)v10;
    p__8__1 = (Il2CppObject **)&v8->fields.__8__1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields.__8__1, (int32_t)v10, v12, v13, v14, v15, v16, v17);
    this = (TitleInfoEventUIComponent__LoadAssetBundle_d__16_o *)v8->fields.__8__1;
    if ( !this )
      goto LABEL_17;
    _4__this = v8->fields.__4__this;
    *(_QWORD *)&this->fields.__1__state = _4__this;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)_4__this, v18, v19, v20, v21, v22, v23);
    this = (TitleInfoEventUIComponent__LoadAssetBundle_d__16_o *)v8->fields.eventUIEntity;
    if ( !this )
    {
LABEL_15:
      ActionExtensions__Call(v8->fields.callback, 0);
      return 0;
    }
    if ( !*p__8__1 )
LABEL_17:
      sub_2213CDC(this, method);
    LOBYTE((*p__8__1)[1].monitor) = 0;
    AssetName = TitleInfoEventUIComponent__GetAssetName((EventUiEntity_o *)this, method);
    v26 = *p__8__1;
    v27 = AssetName;
    v28 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v28,
      v26,
      Method_TitleInfoEventUIComponent___c__DisplayClass16_0__LoadAssetBundle_b__0__,
      0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v29, v30);
    this = (TitleInfoEventUIComponent__LoadAssetBundle_d__16_o *)AssetManager__loadAssetStorage(v27, v28, 1, 0, 0);
    v8->fields._isAssetFound_5__2 = (unsigned __int8)this & 1;
LABEL_12:
    _8__1 = v8->fields.__8__1;
    if ( _8__1 )
    {
      if ( (v8->fields._isAssetFound_5__2 & (_8__1->fields.isAssetLoaded ^ 0xFF)) != 0 )
      {
        v8->fields.__2__current = 0;
        p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
        sub_2213A04(p__2__current, 0, v2, v3, v4, v5, v6, v7);
        result = 1;
        p__2__current[-1].fields._BoardType_k__BackingField = 1;
        return result;
      }
      goto LABEL_15;
    }
    goto LABEL_17;
  }
  return 0;
}


Il2CppObject *TitleInfoEventUIComponent__LoadAssetBundle_d__16__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TitleInfoEventUIComponent__LoadAssetBundle_d__16_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn TitleInfoEventUIComponent__LoadAssetBundle_d__16__System_Collections_IEnumerator_Reset(
        TitleInfoEventUIComponent__LoadAssetBundle_d__16_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_TitleInfoEventUIComponent__LoadAssetBundle_d__16_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *TitleInfoEventUIComponent__LoadAssetBundle_d__16__System_Collections_IEnumerator_get_Current(
        TitleInfoEventUIComponent__LoadAssetBundle_d__16_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void TitleInfoEventUIComponent__LoadAssetBundle_d__16__System_IDisposable_Dispose(
        TitleInfoEventUIComponent__LoadAssetBundle_d__16_o *this,
        const MethodInfo *method)
{
  ;
}


void TitleInfoEventUIComponent___c__DisplayClass15_0___ctor(
        TitleInfoEventUIComponent___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleInfoEventUIComponent___c__DisplayClass15_0___AsyncSetup_b__0(
        TitleInfoEventUIComponent___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  EventUiEntity_o *eventUIEntity; // x0
  const MethodInfo *v4; // x2
  struct TitleInfoEventUIComponent_o *_4__this; // x8
  const MethodInfo *v6; // x2

  if ( (byte_596F320 & 1) == 0 )
  {
    sub_2213A60(&Method_UnityEngine_Component_GetComponentsInChildren_TitleInfoEventUIPartsComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__AddRange__);
    byte_596F320 = 1;
  }
  eventUIEntity = this->fields.eventUIEntity;
  if ( !eventUIEntity )
    goto LABEL_26;
  if ( EventUiEntity__IsDispArea(eventUIEntity, 1, 0) && this->fields.isMap )
    goto LABEL_14;
  eventUIEntity = this->fields.eventUIEntity;
  if ( !eventUIEntity )
    goto LABEL_26;
  if ( EventUiEntity__IsDispArea(eventUIEntity, 2, 0) && this->fields.isEventReward )
    goto LABEL_14;
  eventUIEntity = this->fields.eventUIEntity;
  if ( !eventUIEntity )
    goto LABEL_26;
  if ( EventUiEntity__IsDispArea(eventUIEntity, 4, 0) )
    goto LABEL_14;
  eventUIEntity = this->fields.eventUIEntity;
  if ( !eventUIEntity )
    goto LABEL_26;
  if ( EventUiEntity__IsDispArea(eventUIEntity, 8, 0) && this->fields.isMap )
  {
LABEL_14:
    eventUIEntity = (EventUiEntity_o *)this->fields.__4__this;
    if ( !eventUIEntity )
      goto LABEL_26;
    TitleInfoEventUIComponent__UpdateEventUI(
      (TitleInfoEventUIComponent_o *)eventUIEntity,
      this->fields.eventUIEntity,
      v4);
  }
  eventUIEntity = (EventUiEntity_o *)this->fields.__4__this;
  if ( !eventUIEntity )
    goto LABEL_26;
  eventUIEntity = (EventUiEntity_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)eventUIEntity, 0);
  if ( !eventUIEntity )
    goto LABEL_26;
  eventUIEntity = (EventUiEntity_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                       (UnityEngine_Component_o *)eventUIEntity,
                                       1,
                                       (const MethodInfo_38217CC *)Method_UnityEngine_Component_GetComponentsInChildren_TitleInfoEventUIPartsComponent___);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (method = (const MethodInfo *)eventUIEntity,
        (eventUIEntity = (EventUiEntity_o *)_4__this->fields.eventUIPartsList) == 0)
    || (System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)eventUIEntity,
          (System_Collections_Generic_IEnumerable_T__o *)method,
          (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__AddRange__),
        (eventUIEntity = (EventUiEntity_o *)this->fields.__4__this) == 0)
    || (TitleInfoEventUIComponent__UpdatePartsDisp((TitleInfoEventUIComponent_o *)eventUIEntity, method),
        (eventUIEntity = this->fields.eventUIEntity) == 0) )
  {
LABEL_26:
    sub_2213CDC(eventUIEntity, method);
  }
  if ( EventUiEntity__IsDispArea(eventUIEntity, 8, 0) )
  {
    eventUIEntity = (EventUiEntity_o *)this->fields.__4__this;
    if ( eventUIEntity )
    {
      TitleInfoEventUIComponent__SetActiveChildren((TitleInfoEventUIComponent_o *)eventUIEntity, 0, v6);
      goto LABEL_25;
    }
    goto LABEL_26;
  }
LABEL_25:
  ActionExtensions__Call(this->fields.callback, 0);
}


void TitleInfoEventUIComponent___c__DisplayClass16_0___ctor(
        TitleInfoEventUIComponent___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleInfoEventUIComponent___c__DisplayClass16_0___LoadAssetBundle_b__0(
        TitleInfoEventUIComponent___c__DisplayClass16_0_o *this,
        AssetData_o *asset,
        const MethodInfo *method)
{
  TitleInfoEventUIComponent___c__DisplayClass16_0_o *v4; // x19
  struct TitleInfoEventUIComponent_o *_4__this; // x8
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct TitleInfoEventUIComponent_o *v12; // x8
  struct TitleInfoEventUIComponent_o *v13; // x8
  _QWORD *v14; // x9
  __int64 v15; // x10
  TitleInfoEventUIComponent_c **v16; // x8

  v4 = this;
  if ( (byte_596F321 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_AssetData__Add__);
    this = (TitleInfoEventUIComponent___c__DisplayClass16_0_o *)sub_2213A60(&Method_System_Collections_Generic_List_AssetData__Contains__);
    byte_596F321 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  this = (TitleInfoEventUIComponent___c__DisplayClass16_0_o *)_4__this->fields.eventInfoAssetDataList;
  if ( !this )
    goto LABEL_13;
  this = (TitleInfoEventUIComponent___c__DisplayClass16_0_o *)System_Collections_Generic_List_object___Contains(
                                                                (System_Collections_Generic_List_object__o *)this,
                                                                (Il2CppObject *)asset,
                                                                (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_AssetData__Contains__);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_12;
  v12 = v4->fields.__4__this;
  if ( !v12
    || (this = (TitleInfoEventUIComponent___c__DisplayClass16_0_o *)v12->fields.eventInfoAssetDataList) == 0
    || (v13 = this->fields.__4__this,
        v14 = Method_System_Collections_Generic_List_AssetData__Add__,
        ++*((_DWORD *)&this->fields.isAssetLoaded + 1),
        !v13) )
  {
LABEL_13:
    sub_2213CDC(this, asset);
  }
  v15 = *(int *)&this->fields.isAssetLoaded;
  if ( (unsigned int)v15 >= LODWORD(v13->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)asset,
      *(const MethodInfo_4483C64 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &v13->klass + v15;
    *(_DWORD *)&this->fields.isAssetLoaded = v15 + 1;
    v16[4] = (TitleInfoEventUIComponent_c *)asset;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v16 + 4), (int32_t)asset, v6, v7, v8, v9, v10, v11);
  }
LABEL_12:
  v4->fields.isAssetLoaded = 1;
}


void TitleInfoEventUIComponent___c__DisplayClass23_0___ctor(
        TitleInfoEventUIComponent___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleInfoEventUIComponent___c__DisplayClass23_0___SetGameObject_b__0(
        TitleInfoEventUIComponent___c__DisplayClass23_0_o *this,
        AssetData_o *prefabData,
        const MethodInfo *method)
{
  TitleInfoEventUIComponent___c__DisplayClass23_0_o *v4; // x19
  struct EventUiEntity_o *entity; // x8
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_Object_o *Object_47472752; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  UnityEngine_Object_o *v11; // x0
  UnityEngine_GameObject_o *v12; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v14; // x2
  struct EventUiEntity_o *v15; // x8
  __int64 v16; // x1
  __int64 v17; // x2
  Il2CppObject *Component_object; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct TitleInfoEventUIComponent_o *_4__this; // x8
  struct EventUiEntity_o *v26; // x8
  _QWORD *v27; // x9
  __int64 _4__this_low; // x10
  EventUiEntity_c **v29; // x8
  struct EventUiEntity_o *v30; // x8
  EventUiValueEntity_array *List; // x0
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_596F322 & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventUiValueMaster___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_EventInfoUIBase___);
    sub_2213A60(&UnityEngine_GameObject_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_EventInfoUIBase__Add__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    this = (TitleInfoEventUIComponent___c__DisplayClass23_0_o *)sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596F322 = 1;
  }
  entity = v4->fields.entity;
  if ( !entity )
    goto LABEL_35;
  this = (TitleInfoEventUIComponent___c__DisplayClass23_0_o *)System_Int32__ToString((int)entity + 52, 0);
  if ( !prefabData )
    goto LABEL_35;
  Object_47472752 = AssetData__GetObject_47472752(prefabData, (System_String_o *)this, 0);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6, v7);
  if ( UnityEngine_Object__op_Inequality(Object_47472752, 0, 0) )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
    v11 = UnityEngine_Object__Instantiate_83458448(Object_47472752, 0);
    if ( v11 )
      v12 = (UnityEngine_GameObject_c *)v11->klass == UnityEngine_GameObject_TypeInfo
          ? (UnityEngine_GameObject_o *)v11
          : 0LL;
    else
      v12 = 0;
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v12, 0, 0) )
    {
      this = (TitleInfoEventUIComponent___c__DisplayClass23_0_o *)v4->fields.__4__this;
      if ( !this )
        goto LABEL_35;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      GameObjectExtensions__SafeSetParent_42897308(v12, gameObject, 0);
      GameObjectExtensions__ResetLocalScale(v12, 0);
      if ( !v4->fields.__4__this )
        goto LABEL_35;
      Position = TitleInfoEventUIComponent__GetPosition((TitleInfoEventUIComponent_o *)this, v4->fields.entity, v14);
      GameObjectExtensions__SetLocalPosition(v12, Position, 0);
      v15 = v4->fields.entity;
      if ( !v15 )
        goto LABEL_35;
      this = (TitleInfoEventUIComponent___c__DisplayClass23_0_o *)System_Int32__ToString((int)v15 + 16, 0);
      if ( !v12 )
        goto LABEL_35;
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v12, (System_String_o *)this, 0);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v12,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_EventInfoUIBase___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16, v17);
      this = (TitleInfoEventUIComponent___c__DisplayClass23_0_o *)UnityEngine_Object__op_Inequality(
                                                                    (UnityEngine_Object_o *)Component_object,
                                                                    0,
                                                                    0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_35;
        this = (TitleInfoEventUIComponent___c__DisplayClass23_0_o *)((__int64 (__fastcall *)(Il2CppObject *, struct EventUiEntity_o *, const MethodInfo *))Component_object->klass->vtable[4].methodPtr)(
                                                                      Component_object,
                                                                      v4->fields.entity,
                                                                      Component_object->klass->vtable[4].method);
        _4__this = v4->fields.__4__this;
        if ( !_4__this )
          goto LABEL_35;
        this = (TitleInfoEventUIComponent___c__DisplayClass23_0_o *)_4__this->fields.eventUiPrefabList;
        if ( !this )
          goto LABEL_35;
        v26 = this->fields.entity;
        v27 = Method_System_Collections_Generic_List_EventInfoUIBase__Add__;
        ++HIDWORD(this->fields.__4__this);
        if ( !v26 )
          goto LABEL_35;
        _4__this_low = SLODWORD(this->fields.__4__this);
        if ( (unsigned int)_4__this_low >= v26->fields.eventId )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            Component_object,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &v26->klass + _4__this_low;
          LODWORD(this->fields.__4__this) = _4__this_low + 1;
          v29[4] = (EventUiEntity_c *)Component_object;
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)(v29 + 4),
            (int32_t)Component_object,
            v19,
            v20,
            v21,
            v22,
            v23,
            v24);
        }
        this = (TitleInfoEventUIComponent___c__DisplayClass23_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_35;
        this = (TitleInfoEventUIComponent___c__DisplayClass23_0_o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)this,
                                                                      (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventUiValueMaster___);
        if ( this )
        {
          v30 = v4->fields.entity;
          if ( v30 )
          {
            List = EventUiValueMaster__getList((EventUiValueMaster_o *)this, v30->fields.objectId, 0);
            ((void (__fastcall *)(Il2CppObject *, EventUiValueEntity_array *, const MethodInfo *))Component_object->klass->vtable[5].methodPtr)(
              Component_object,
              List,
              Component_object->klass->vtable[5].method);
            return;
          }
LABEL_35:
          sub_2213CDC(this, prefabData);
        }
      }
    }
  }
}


void TitleInfoEventUIComponent___c__DisplayClass27_0___ctor(
        TitleInfoEventUIComponent___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void TitleInfoEventUIComponent___c__DisplayClass27_0___PlayAnim_b__0(
        TitleInfoEventUIComponent___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w8
  bool v3; // zf

  v2 = this->fields.callbackCount - 1;
  v3 = this->fields.callbackCount == 1;
  this->fields.callbackCount = v2;
  if ( v2 < 0 || v3 )
    ActionExtensions__Call(this->fields.callback, 0);
}