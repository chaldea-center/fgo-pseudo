void TitleInfoEventUIComponent___ctor(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  System_Collections_Generic_List_object__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  System_Collections_Generic_List_object__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7

  if ( (byte_4CC5F4C & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_AssetData___ctor__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventInfoUIBase___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_TitleInfoEventUIPartsComponent__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_EventInfoUIBase__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_List_AssetData__TypeInfo);
    byte_4CC5F4C = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_AssetData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_AssetData___ctor__);
  this->fields.eventInfoAssetDataList = (struct System_Collections_Generic_List_AssetData__o *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.eventInfoAssetDataList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_EventInfoUIBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_EventInfoUIBase___ctor__);
  this->fields.eventUiPrefabList = (struct System_Collections_Generic_List_EventInfoUIBase__o *)v10;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields.eventUiPrefabList,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_TitleInfoEventUIPartsComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent___ctor__);
  this->fields.eventUIPartsList = (struct System_Collections_Generic_List_TitleInfoEventUIPartsComponent__o *)v17;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.eventUIPartsList, (int32_t)v17, v18, v19, v20, v21, v22, v23);
  TitleInfoEventInfoComponent___ctor((TitleInfoEventInfoComponent_o *)this, 0);
}


void TitleInfoEventUIComponent__AfterRedisplay(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventInfoUIBase__o *eventUiPrefabList; // x0
  Il2CppObject *current; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CC5F3A & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC5F3A = 1;
  }
  memset(&v7, 0, sizeof(v7));
  eventUiPrefabList = this->fields.eventUiPrefabList;
  if ( eventUiPrefabList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v7,
      (System_Collections_Generic_List_object__o *)eventUiPrefabList,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v7,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
    {
      current = v7.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
      if ( !v5 )
      {
        if ( !current )
          sub_1C71608(v5, v6);
        ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))current->klass->vtable[11].methodPtr)(
          current,
          current->klass->vtable[11].method);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v7,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
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
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7

  if ( (byte_4CC5F3B & 1) == 0 )
  {
    sub_1C713B0(&TitleInfoEventUIComponent__AsyncSetup_d__15_TypeInfo);
    byte_4CC5F3B = 1;
  }
  v12 = isEventReward;
  v13 = sub_1C715FC(TitleInfoEventUIComponent__AsyncSetup_d__15_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0);
  *(_DWORD *)(v13 + 16) = 0;
  *(_QWORD *)(v13 + 48) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v13 + 48), (int32_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v13 + 32) = eventUIEntity;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v13 + 32), (int32_t)eventUIEntity, v20, v21, v22, v23, v24, v25);
  *(_BYTE *)(v13 + 40) = isMap;
  *(_BYTE *)(v13 + 41) = v12;
  *(_QWORD *)(v13 + 56) = callback;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v13 + 56), (int32_t)callback, v26, v27, v28, v29, v30, v31);
  return (System_Collections_IEnumerator_o *)v13;
}


System_String_o *TitleInfoEventUIComponent__GetAssetName(EventUiEntity_o *eventUIEntity, const MethodInfo *method)
{
  EventUiEntity_o *v2; // x19
  Il2CppObject *v3; // x0
  Il2CppObject *v5; // x20
  Il2CppObject *v6; // x0
  int32_t warId; // [xsp+4h] [xbp-2Ch] BYREF
  int v8; // [xsp+8h] [xbp-28h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-24h] BYREF

  v2 = eventUIEntity;
  if ( (byte_4CC5F4A & 1) == 0 )
  {
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&StringLiteral_6266/*"EventUI/Prefabs/{0}"*/);
    eventUIEntity = (EventUiEntity_o *)sub_1C713B0(&StringLiteral_6267/*"EventUI/Prefabs/{0}/{1}"*/);
    byte_4CC5F4A = 1;
  }
  if ( !v2 )
    sub_1C71608(eventUIEntity, method);
  if ( v2->fields.eventId )
  {
    eventId = v2->fields.eventId;
    v3 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
    return System_String__Format((System_String_o *)StringLiteral_6266/*"EventUI/Prefabs/{0}"*/, v3, 0);
  }
  else
  {
    v8 = 0;
    v5 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v8);
    warId = v2->fields.warId;
    v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &warId);
    return System_String__Format_64073032((System_String_o *)StringLiteral_6267/*"EventUI/Prefabs/{0}/{1}"*/, v5, v6, 0);
  }
}


UnityEngine_Vector3_o TitleInfoEventUIComponent__GetPosition(
        TitleInfoEventUIComponent_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  int32_t x; // w20
  EventUiEntity_c *v5; // x0
  float *p_EVNET_UI_POSITION_MAGNIFICATION; // x8
  float v7; // s0
  float v8; // s1
  float v9; // s2
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4CC5F47 & 1) == 0 )
  {
    this = (TitleInfoEventUIComponent_o *)sub_1C713B0(&EventUiEntity_TypeInfo);
    byte_4CC5F47 = 1;
  }
  if ( !entity )
    sub_1C71608(this, entity);
  x = entity->fields.x;
  v5 = EventUiEntity_TypeInfo;
  if ( !EventUiEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventUiEntity_TypeInfo);
    v5 = EventUiEntity_TypeInfo;
  }
  p_EVNET_UI_POSITION_MAGNIFICATION = &v5->static_fields->EVNET_UI_POSITION_MAGNIFICATION;
  v7 = *p_EVNET_UI_POSITION_MAGNIFICATION * (float)x;
  v8 = (float)-*p_EVNET_UI_POSITION_MAGNIFICATION * (float)entity->fields.y;
  v9 = 0.0;
  result.fields.z = v9;
  result.fields.y = v8;
  result.fields.x = v7;
  return result;
}


bool TitleInfoEventUIComponent__IsBusy(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *eventUiPrefabList; // x0
  bool v4; // w19
  Il2CppObject *current; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  int v8; // w20
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CC5F4B & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventInfoUIBase__get_Count__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC5F4B = 1;
  }
  memset(&v10, 0, sizeof(v10));
  eventUiPrefabList = (System_Collections_Generic_List_object__o *)this->fields.eventUiPrefabList;
  if ( eventUiPrefabList )
  {
    if ( eventUiPrefabList->fields._size < 1 )
    {
      LOBYTE(eventUiPrefabList) = 0;
    }
    else
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v10,
        eventUiPrefabList,
        (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
      while ( 1 )
      {
        v4 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v10,
               (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__);
        if ( !v4 )
          break;
        current = v10.fields._current;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v6 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0, 0);
        if ( v6 )
        {
          if ( !current )
            sub_1C71608(v6, v7);
          if ( (((__int64 (__fastcall *)(Il2CppObject *, const MethodInfo *))current->klass->vtable[17].methodPtr)(
                  current,
                  current->klass->vtable[17].method)
              & 1) != 0 )
          {
            v8 = 6;
            goto LABEL_14;
          }
        }
      }
      v8 = 7;
LABEL_14:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v10,
        (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
      LOBYTE(eventUiPrefabList) = v4 && v8 == 6;
    }
  }
  return (char)eventUiPrefabList;
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
  int v7; // w19
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CC5F44 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventInfoUIBase__get_Count__);
    byte_4CC5F44 = 1;
  }
  memset(&v9, 0, sizeof(v9));
  eventUiPrefabList = (System_Collections_Generic_List_object__o *)this->fields.eventUiPrefabList;
  if ( eventUiPrefabList )
  {
    if ( eventUiPrefabList->fields._size < 1 )
    {
      LOBYTE(eventUiPrefabList) = 0;
    }
    else
    {
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v9,
        eventUiPrefabList,
        (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
      while ( 1 )
      {
        v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v9,
               (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__);
        if ( !v6 )
          break;
        if ( !v9.fields._current )
          sub_1C71608(0, v5);
        if ( (((__int64 (*)(void))v9.fields._current->klass->vtable[7].methodPtr)() & 1) != 0 )
        {
          v7 = 5;
          goto LABEL_12;
        }
      }
      v7 = 2;
LABEL_12:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v9,
        (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
      LOBYTE(eventUiPrefabList) = v6 && v7 == 5;
    }
  }
  return (char)eventUiPrefabList;
}


System_Collections_IEnumerator_o *TitleInfoEventUIComponent__LoadAssetBundle(
        TitleInfoEventUIComponent_o *this,
        EventUiEntity_o *eventUIEntity,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7

  if ( (byte_4CC5F3C & 1) == 0 )
  {
    sub_1C713B0(&TitleInfoEventUIComponent__LoadAssetBundle_d__16_TypeInfo);
    byte_4CC5F3C = 1;
  }
  v7 = sub_1C715FC(TitleInfoEventUIComponent__LoadAssetBundle_d__16_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = eventUIEntity;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 40), (int32_t)eventUIEntity, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 48) = callback;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 48), (int32_t)callback, v20, v21, v22, v23, v24, v25);
  return (System_Collections_IEnumerator_o *)v7;
}


void TitleInfoEventUIComponent__OnDestroy(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventInfoUIBase__o *eventUiPrefabList; // x8
  int32_t size; // w2
  int v5; // w9

  if ( (byte_4CC5F49 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_EventInfoUIBase__Clear__);
    byte_4CC5F49 = 1;
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
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct System_Collections_Generic_List_EventInfoUIBase__o *eventUiPrefabList; // x8
  int size; // w8
  System_Action_o *v18; // x22
  Il2CppObject *current; // x21
  _BOOL8 v20; // x0
  __int64 v21; // x1
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CC5F45 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventInfoUIBase__get_Count__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    sub_1C713B0(&Method_TitleInfoEventUIComponent___c__DisplayClass27_0__PlayAnim_b__0__);
    sub_1C713B0(&TitleInfoEventUIComponent___c__DisplayClass27_0_TypeInfo);
    byte_4CC5F45 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  v7 = sub_1C715FC(TitleInfoEventUIComponent___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_17;
  *(_QWORD *)(v7 + 16) = callback;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)callback, v10, v11, v12, v13, v14, v15);
  eventUiPrefabList = this->fields.eventUiPrefabList;
  if ( !eventUiPrefabList || (size = eventUiPrefabList->fields._size, size < 1) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 16), 0);
    return;
  }
  *(_DWORD *)(v7 + 24) = size;
  v18 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v7,
    Method_TitleInfoEventUIComponent___c__DisplayClass27_0__PlayAnim_b__0__,
    0);
  v8 = this->fields.eventUiPrefabList;
  if ( !v8 )
LABEL_17:
    sub_1C71608(v8, v9);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v22,
    (System_Collections_Generic_List_object__o *)v8,
    (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
  v23 = v22;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v23,
            (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
  {
    current = v23.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v20 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
    if ( v20 )
    {
      ActionExtensions__Call(v18, 0);
    }
    else
    {
      if ( !current )
        sub_1C71608(v20, v21);
      ((void (__fastcall *)(Il2CppObject *, _QWORD, System_Action_o *, const MethodInfo *))current->klass->vtable[8].methodPtr)(
        current,
        (unsigned int)playType,
        v18,
        current->klass->vtable[8].method);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v23,
    (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
}


void TitleInfoEventUIComponent__Redisplay(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventInfoUIBase__o *eventUiPrefabList; // x0
  Il2CppObject *current; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CC5F39 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC5F39 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  eventUiPrefabList = this->fields.eventUiPrefabList;
  if ( eventUiPrefabList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v7,
      (System_Collections_Generic_List_object__o *)eventUiPrefabList,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v7,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
    {
      current = v7.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
      if ( !v5 )
      {
        if ( !current )
          sub_1C71608(v5, v6);
        ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))current->klass->vtable[10].methodPtr)(
          current,
          current->klass->vtable[10].method);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v7,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
  }
}


void TitleInfoEventUIComponent__ReleaseAsset(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_AssetData__o *eventInfoAssetDataList; // x0
  Il2CppObject *current; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_AssetData__o *v7; // x8
  int32_t size; // w2
  int v9; // w9
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CC5F48 & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_AssetData__Clear__);
    sub_1C713B0(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    byte_4CC5F48 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  eventInfoAssetDataList = this->fields.eventInfoAssetDataList;
  if ( eventInfoAssetDataList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      (System_Collections_Generic_List_object__o *)eventInfoAssetDataList,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__) )
    {
      current = v10.fields._current;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_40808072((AssetData_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    v7 = this->fields.eventInfoAssetDataList;
    if ( !v7 )
      sub_1C71608(v5, v6);
    size = v7->fields._size;
    v9 = v7->fields._version + 1;
    v7->fields._size = 0;
    v7->fields._version = v9;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v7->fields._items, 0, size, 0);
  }
}


void TitleInfoEventUIComponent__SetActiveChildren(
        TitleInfoEventUIComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  UnityEngine_Transform_o *transform; // x0
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  bool i; // w20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  System_Collections_IEnumerator_c *v14; // x8
  __int64 v15; // x9
  System_Collections_IEnumerator_c **v16; // x10
  __int64 v17; // x0
  UnityEngine_Component_o *v18; // x0
  __int64 v19; // x1
  __int64 naturalAligment; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  __int64 v23; // x0
  __int64 v24; // x8
  __int64 v25; // x19
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0

  if ( (byte_4CC5F3E & 1) == 0 )
  {
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&UnityEngine_Transform_TypeInfo);
    byte_4CC5F3E = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !transform )
    sub_1C71608(0, v6);
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0);
  if ( !Enumerator )
    sub_1C71608(0, v7);
  for ( i = isActive; ; UnityEngine_GameObject__SetActive(gameObject, i, 0) )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_10;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v13 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v13)(Enumerator, *(_QWORD *)(v13 + 8))
        & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v16 = (System_Collections_IEnumerator_c **)&v14->_1.interfaceOffsets->offset;
      while ( *(v16 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        v16 += 2;
        if ( !v15 )
          goto LABEL_17;
      }
      v17 = (__int64)&v14->vtable[*(_DWORD *)v16 + 1];
    }
    else
    {
LABEL_17:
      v17 = sub_1C47738(Enumerator, System_Collections_IEnumerator_TypeInfo, 1);
    }
    v18 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v17)(
                                       Enumerator,
                                       *(_QWORD *)(v17 + 8));
    if ( !v18 )
      goto LABEL_34;
    naturalAligment = UnityEngine_Transform_TypeInfo->_2.naturalAligment;
    if ( v18->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (UnityEngine_Transform_c *)v18->klass->_2.typeHierarchy[naturalAligment - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1C719A4(v18);
LABEL_34:
      sub_1C71608(v18, v19);
    }
    gameObject = UnityEngine_Component__get_gameObject(v18, 0);
    if ( !gameObject )
      sub_1C71608(0, v22);
  }
  v23 = sub_1C714EC(Enumerator, System_IDisposable_TypeInfo);
  if ( v23 )
  {
    v24 = *(_QWORD *)v23;
    v25 = v23;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v27 - 1) != System_IDisposable_TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_29;
      }
      v28 = v24 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_29:
      v28 = sub_1C47738(v23, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v28)(v25, *(_QWORD *)(v28 + 8));
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
      sub_1C71608(0, v6);
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  const MethodInfo *v20; // x1
  System_String_o *AssetName; // x19
  AssetLoader_LoadEndDataHandler_o *v22; // x20

  if ( (byte_4CC5F41 & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C713B0(&Method_TitleInfoEventUIComponent___c__DisplayClass23_0__SetGameObject_b__0__);
    sub_1C713B0(&TitleInfoEventUIComponent___c__DisplayClass23_0_TypeInfo);
    byte_4CC5F41 = 1;
  }
  v5 = sub_1C715FC(TitleInfoEventUIComponent___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    sub_1C71608(v6, v7);
  *(_QWORD *)(v5 + 16) = entity;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)entity, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)this, v14, v15, v16, v17, v18, v19);
  AssetName = TitleInfoEventUIComponent__GetAssetName(*(EventUiEntity_o **)(v5 + 16), v20);
  v22 = (AssetLoader_LoadEndDataHandler_o *)sub_1C715FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v22,
    (Il2CppObject *)v5,
    Method_TitleInfoEventUIComponent___c__DisplayClass23_0__SetGameObject_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(AssetName, v22, 1, 0);
}


void TitleInfoEventUIComponent__SetImage(
        TitleInfoEventUIComponent_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  TitleInfoEventUIComponent_o *v4; // x20
  System_String_o *v5; // x0
  UISprite_o *imageSprite; // x22
  System_String_o *v7; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoEventUIComponent_o *v9; // x20
  const MethodInfo *v10; // x2
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4CC5F42 & 1) == 0 )
  {
    this = (TitleInfoEventUIComponent_o *)sub_1C713B0(&AtlasManager_TypeInfo);
    byte_4CC5F42 = 1;
  }
  if ( !entity )
    goto LABEL_10;
  v5 = System_Int32__ToString((int)entity + 52, 0);
  imageSprite = v4->fields.imageSprite;
  v7 = v5;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(imageSprite, v7, 0);
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
    sub_1C71608(this, entity);
  }
  v9 = (TitleInfoEventUIComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Position = TitleInfoEventUIComponent__GetPosition(v9, entity, v10);
  GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v9, Position, 0);
}


void TitleInfoEventUIComponent__SetUIDisp(TitleInfoEventUIComponent_o *this, bool isDisp, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *eventUiPrefabList; // x0
  _BOOL4 v6; // w19
  Il2CppObject *current; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CC5F46 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventInfoUIBase__get_Count__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC5F46 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  eventUiPrefabList = (System_Collections_Generic_List_object__o *)this->fields.eventUiPrefabList;
  if ( eventUiPrefabList && eventUiPrefabList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      eventUiPrefabList,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    v6 = isDisp;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
    {
      current = v10.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
      if ( !v8 )
      {
        if ( !current )
          sub_1C71608(v8, v9);
        ((void (__fastcall *)(Il2CppObject *, _BOOL4, const MethodInfo *))current->klass->vtable[12].methodPtr)(
          current,
          v6,
          current->klass->vtable[12].method);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
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
  Il2CppObject *current; // x22
  _BOOL8 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4CC5F43 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC5F43 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  eventUiPrefabList = this->fields.eventUiPrefabList;
  if ( eventUiPrefabList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      (System_Collections_Generic_List_object__o *)eventUiPrefabList,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
    {
      current = v13.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
      if ( !v11 )
      {
        if ( !current )
          sub_1C71608(v11, v12);
        ((void (__fastcall *)(Il2CppObject *, _QWORD, Il2CppObject *, _QWORD, const MethodInfo *))current->klass->vtable[6].methodPtr)(
          current,
          (unsigned int)valueType,
          val,
          (unsigned int)setType,
          current->klass->vtable[6].method);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
  }
}


void TitleInfoEventUIComponent__SwitchSpotState(
        TitleInfoEventUIComponent_o *this,
        bool isOpen,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventInfoUIBase__o *eventUiPrefabList; // x0
  _BOOL4 v6; // w19
  Il2CppObject *current; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CC5F3F & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC5F3F = 1;
  }
  memset(&v10, 0, sizeof(v10));
  eventUiPrefabList = this->fields.eventUiPrefabList;
  if ( eventUiPrefabList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      (System_Collections_Generic_List_object__o *)eventUiPrefabList,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    v6 = isOpen;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
    {
      current = v10.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0, 0);
      if ( !v8 )
      {
        if ( !current )
          sub_1C71608(v8, v9);
        ((void (__fastcall *)(Il2CppObject *, _BOOL4, const MethodInfo *))current->klass->vtable[13].methodPtr)(
          current,
          v6,
          current->klass->vtable[13].method);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
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

  if ( (byte_4CC5F3D & 1) == 0 )
  {
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    byte_4CC5F3D = 1;
  }
  imageSprite = (UnityEngine_Object_o *)this->fields.imageSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(imageSprite, 0, 0);
  if ( !v6 )
  {
    if ( !entity )
      sub_1C71608(v6, v7);
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
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CC5F40 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__get_Count__);
    byte_4CC5F40 = 1;
  }
  memset(&v5, 0, sizeof(v5));
  eventUIPartsList = (System_Collections_Generic_List_object__o *)this->fields.eventUIPartsList;
  if ( eventUIPartsList && eventUIPartsList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v5,
      eventUIPartsList,
      (const MethodInfo_3811210 *)Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v5,
              (const MethodInfo_35962C8 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__MoveNext__) )
    {
      if ( !v5.fields._current )
        sub_1C71608(0, v4);
      TitleInfoEventUIPartsComponent__UpdateDisp((TitleInfoEventUIPartsComponent_o *)v5.fields._current, v4);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v5,
      (const MethodInfo_35962C4 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__Dispose__);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._eventUIEntity_k__BackingField = value;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields._eventUIEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
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
  struct TitleInfoEventUIComponent_o *_4__this; // x20
  __int64 v5; // x21
  __int64 v6; // x0
  struct EventUiEntity_o *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  struct EventUiEntity_o *eventUIEntity; // x1
  struct TitleInfoEventUIComponent_o *v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  struct System_Action_o *callback; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  EventUiEntity_o *v35; // x22
  System_Action_o *v36; // x23
  const MethodInfo *v37; // x3
  Il2CppObject *AssetBundle; // x0
  Il2CppObject **p__2__current; // x19
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  bool result; // w0

  if ( (byte_4CC5F50 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_TitleInfoEventUIComponent___c__DisplayClass15_0__AsyncSetup_b__0__);
    sub_1C713B0(&TitleInfoEventUIComponent___c__DisplayClass15_0_TypeInfo);
    byte_4CC5F50 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    result = 0;
    this->fields.__1__state = -1;
  }
  else
  {
    if ( !_1__state )
    {
      this->fields.__1__state = -1;
      _4__this = this->fields.__4__this;
      v5 = sub_1C715FC(TitleInfoEventUIComponent___c__DisplayClass15_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v5, 0);
      if ( !v5 )
        goto LABEL_11;
      eventUIEntity = this->fields.eventUIEntity;
      *(_QWORD *)(v5 + 16) = eventUIEntity;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)eventUIEntity, v8, v9, v10, v11, v12, v13);
      *(_BYTE *)(v5 + 24) = this->fields.isMap;
      *(_BYTE *)(v5 + 25) = this->fields.isEventReward;
      v15 = this->fields.__4__this;
      *(_QWORD *)(v5 + 32) = v15;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)v15, v16, v17, v18, v19, v20, v21);
      callback = this->fields.callback;
      *(_QWORD *)(v5 + 40) = callback;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)callback, v23, v24, v25, v26, v27, v28);
      v7 = *(struct EventUiEntity_o **)(v5 + 16);
      if ( v7 )
      {
        if ( _4__this )
        {
          _4__this->fields._eventUIEntity_k__BackingField = v7;
          sub_1C71354(
            (GrandQuestFolderBoardItem_o *)&_4__this->fields._eventUIEntity_k__BackingField,
            (int32_t)v7,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34);
          v35 = *(EventUiEntity_o **)(v5 + 16);
          v36 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
          System_Action___ctor(
            v36,
            (Il2CppObject *)v5,
            Method_TitleInfoEventUIComponent___c__DisplayClass15_0__AsyncSetup_b__0__,
            0);
          AssetBundle = (Il2CppObject *)TitleInfoEventUIComponent__LoadAssetBundle(_4__this, v35, v36, v37);
          this->fields.__2__current = AssetBundle;
          p__2__current = &this->fields.__2__current;
          sub_1C71354((GrandQuestFolderBoardItem_o *)p__2__current, (int32_t)AssetBundle, v40, v41, v42, v43, v44, v45);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
LABEL_11:
        sub_1C71608(v6, v7);
      }
    }
    return 0;
  }
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

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_TitleInfoEventUIComponent__AsyncSetup_d__15_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  TitleInfoEventUIComponent__LoadAssetBundle_d__16_o *v8; // x19
  int32_t _1__state; // w8
  Il2CppObject *v10; // x21
  Il2CppObject **p__8__1; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  struct TitleInfoEventUIComponent_o *_4__this; // x1
  System_String_o *AssetName; // x0
  Il2CppObject *v26; // x22
  System_String_o *v27; // x20
  AssetLoader_LoadEndDataHandler_o *v28; // x21
  struct TitleInfoEventUIComponent___c__DisplayClass16_0_o *_8__1; // x8
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  bool result; // w0

  v8 = this;
  if ( (byte_4CC5F51 & 1) == 0 )
  {
    sub_1C713B0(&AssetManager_TypeInfo);
    sub_1C713B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C713B0(&Method_TitleInfoEventUIComponent___c__DisplayClass16_0__LoadAssetBundle_b__0__);
    this = (TitleInfoEventUIComponent__LoadAssetBundle_d__16_o *)sub_1C713B0(&TitleInfoEventUIComponent___c__DisplayClass16_0_TypeInfo);
    byte_4CC5F51 = 1;
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
    v10 = (Il2CppObject *)sub_1C715FC(TitleInfoEventUIComponent___c__DisplayClass16_0_TypeInfo);
    System_Object___ctor(v10, 0);
    v8->fields.__8__1 = (struct TitleInfoEventUIComponent___c__DisplayClass16_0_o *)v10;
    p__8__1 = (Il2CppObject **)&v8->fields.__8__1;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&v8->fields.__8__1, (int32_t)v10, v12, v13, v14, v15, v16, v17);
    this = (TitleInfoEventUIComponent__LoadAssetBundle_d__16_o *)v8->fields.__8__1;
    if ( !this )
      goto LABEL_17;
    _4__this = v8->fields.__4__this;
    *(_QWORD *)&this->fields.__1__state = _4__this;
    sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)_4__this, v18, v19, v20, v21, v22, v23);
    this = (TitleInfoEventUIComponent__LoadAssetBundle_d__16_o *)v8->fields.eventUIEntity;
    if ( !this )
    {
LABEL_15:
      ActionExtensions__Call(v8->fields.callback, 0);
      return 0;
    }
    if ( !*p__8__1 )
LABEL_17:
      sub_1C71608(this, method);
    LOBYTE((*p__8__1)[1].monitor) = 0;
    AssetName = TitleInfoEventUIComponent__GetAssetName((EventUiEntity_o *)this, method);
    v26 = *p__8__1;
    v27 = AssetName;
    v28 = (AssetLoader_LoadEndDataHandler_o *)sub_1C715FC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v28,
      v26,
      Method_TitleInfoEventUIComponent___c__DisplayClass16_0__LoadAssetBundle_b__0__,
      0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    this = (TitleInfoEventUIComponent__LoadAssetBundle_d__16_o *)AssetManager__loadAssetStorage(v27, v28, 1, 0);
    v8->fields._isAssetFound_5__2 = (unsigned __int8)this & 1;
LABEL_12:
    _8__1 = v8->fields.__8__1;
    if ( _8__1 )
    {
      if ( (v8->fields._isAssetFound_5__2 & (_8__1->fields.isAssetLoaded ^ 0xFF)) != 0 )
      {
        v8->fields.__2__current = 0;
        p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1C71354(p__2__current, 0, v2, v3, v4, v5, v6, v7);
        result = 1;
        LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
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

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_TitleInfoEventUIComponent__LoadAssetBundle_d__16_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
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

  if ( (byte_4CC5F4D & 1) == 0 )
  {
    sub_1C713B0(&Method_UnityEngine_Component_GetComponentsInChildren_TitleInfoEventUIPartsComponent___);
    sub_1C713B0(&Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__AddRange__);
    byte_4CC5F4D = 1;
  }
  eventUIEntity = this->fields.eventUIEntity;
  if ( !eventUIEntity )
    goto LABEL_23;
  if ( EventUiEntity__IsDispArea(eventUIEntity, 1, 0) && this->fields.isMap )
    goto LABEL_11;
  eventUIEntity = this->fields.eventUIEntity;
  if ( !eventUIEntity )
    goto LABEL_23;
  if ( EventUiEntity__IsDispArea(eventUIEntity, 2, 0) && this->fields.isEventReward )
    goto LABEL_11;
  eventUIEntity = this->fields.eventUIEntity;
  if ( !eventUIEntity )
    goto LABEL_23;
  if ( EventUiEntity__IsDispArea(eventUIEntity, 4, 0) )
    goto LABEL_11;
  eventUIEntity = this->fields.eventUIEntity;
  if ( !eventUIEntity )
    goto LABEL_23;
  if ( EventUiEntity__IsDispArea(eventUIEntity, 8, 0) && this->fields.isMap )
  {
LABEL_11:
    eventUIEntity = (EventUiEntity_o *)this->fields.__4__this;
    if ( !eventUIEntity )
      goto LABEL_23;
    TitleInfoEventUIComponent__UpdateEventUI(
      (TitleInfoEventUIComponent_o *)eventUIEntity,
      this->fields.eventUIEntity,
      v4);
  }
  eventUIEntity = (EventUiEntity_o *)this->fields.__4__this;
  if ( !eventUIEntity )
    goto LABEL_23;
  eventUIEntity = (EventUiEntity_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)eventUIEntity, 0);
  if ( !eventUIEntity )
    goto LABEL_23;
  eventUIEntity = (EventUiEntity_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                       (UnityEngine_Component_o *)eventUIEntity,
                                       1,
                                       (const MethodInfo_3142600 *)Method_UnityEngine_Component_GetComponentsInChildren_TitleInfoEventUIPartsComponent___);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (method = (const MethodInfo *)eventUIEntity,
        (eventUIEntity = (EventUiEntity_o *)_4__this->fields.eventUIPartsList) == 0)
    || (System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)eventUIEntity,
          (System_Collections_Generic_IEnumerable_T__o *)method,
          (const MethodInfo_3810924 *)Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__AddRange__),
        (eventUIEntity = (EventUiEntity_o *)this->fields.__4__this) == 0)
    || (TitleInfoEventUIComponent__UpdatePartsDisp((TitleInfoEventUIComponent_o *)eventUIEntity, method),
        (eventUIEntity = this->fields.eventUIEntity) == 0) )
  {
LABEL_23:
    sub_1C71608(eventUIEntity, method);
  }
  if ( EventUiEntity__IsDispArea(eventUIEntity, 8, 0) )
  {
    eventUIEntity = (EventUiEntity_o *)this->fields.__4__this;
    if ( eventUIEntity )
    {
      TitleInfoEventUIComponent__SetActiveChildren((TitleInfoEventUIComponent_o *)eventUIEntity, 0, v6);
      goto LABEL_22;
    }
    goto LABEL_23;
  }
LABEL_22:
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
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct TitleInfoEventUIComponent_o *v12; // x8
  struct TitleInfoEventUIComponent_o *v13; // x8
  _QWORD *v14; // x9
  __int64 v15; // x10
  TitleInfoEventUIComponent_c **v16; // x8

  v4 = this;
  if ( (byte_4CC5F4E & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_AssetData__Add__);
    this = (TitleInfoEventUIComponent___c__DisplayClass16_0_o *)sub_1C713B0(&Method_System_Collections_Generic_List_AssetData__Contains__);
    byte_4CC5F4E = 1;
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
                                                                (const MethodInfo_3810AA8 *)Method_System_Collections_Generic_List_AssetData__Contains__);
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
    sub_1C71608(this, asset);
  }
  v15 = *(int *)&this->fields.isAssetLoaded;
  if ( (unsigned int)v15 >= LODWORD(v13->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)asset,
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &v13->klass + v15;
    *(_DWORD *)&this->fields.isAssetLoaded = v15 + 1;
    v16[4] = (TitleInfoEventUIComponent_c *)asset;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v16 + 4), (int32_t)asset, v6, v7, v8, v9, v10, v11);
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
  UnityEngine_Object_o *Object_40783956; // x20
  UnityEngine_Object_o *v7; // x0
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v10; // x2
  struct EventUiEntity_o *v11; // x8
  Il2CppObject *Component_object; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  struct TitleInfoEventUIComponent_o *_4__this; // x8
  struct EventUiEntity_o *v20; // x8
  _QWORD *v21; // x9
  __int64 _4__this_low; // x10
  EventUiEntity_c **v23; // x8
  struct EventUiEntity_o *v24; // x8
  EventUiValueEntity_array *List; // x0
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4CC5F4F & 1) == 0 )
  {
    sub_1C713B0(&Method_DataManager_GetMasterData_EventUiValueMaster___);
    sub_1C713B0(&Method_UnityEngine_GameObject_GetComponent_EventInfoUIBase___);
    sub_1C713B0(&UnityEngine_GameObject_TypeInfo);
    sub_1C713B0(&Method_System_Collections_Generic_List_EventInfoUIBase__Add__);
    sub_1C713B0(&UnityEngine_Object_TypeInfo);
    this = (TitleInfoEventUIComponent___c__DisplayClass23_0_o *)sub_1C713B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4CC5F4F = 1;
  }
  entity = v4->fields.entity;
  if ( !entity )
    goto LABEL_35;
  this = (TitleInfoEventUIComponent___c__DisplayClass23_0_o *)System_Int32__ToString((int)entity + 52, 0);
  if ( !prefabData )
    goto LABEL_35;
  Object_40783956 = AssetData__GetObject_40783956(prefabData, (System_String_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(Object_40783956, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__Instantiate_71723820(Object_40783956, 0);
    if ( v7 )
      v8 = (UnityEngine_GameObject_c *)v7->klass == UnityEngine_GameObject_TypeInfo
         ? (UnityEngine_GameObject_o *)v7
         : 0LL;
    else
      v8 = 0;
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0, 0) )
    {
      this = (TitleInfoEventUIComponent___c__DisplayClass23_0_o *)v4->fields.__4__this;
      if ( !this )
        goto LABEL_35;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      GameObjectExtensions__SafeSetParent_36395768(v8, gameObject, 0);
      GameObjectExtensions__ResetLocalScale(v8, 0);
      if ( !v4->fields.__4__this )
        goto LABEL_35;
      Position = TitleInfoEventUIComponent__GetPosition((TitleInfoEventUIComponent_o *)this, v4->fields.entity, v10);
      GameObjectExtensions__SetLocalPosition(v8, Position, 0);
      v11 = v4->fields.entity;
      if ( !v11 )
        goto LABEL_35;
      this = (TitleInfoEventUIComponent___c__DisplayClass23_0_o *)System_Int32__ToString((int)v11 + 16, 0);
      if ( !v8 )
        goto LABEL_35;
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v8, (System_String_o *)this, 0);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v8,
                           (const MethodInfo_31A2ED0 *)Method_UnityEngine_GameObject_GetComponent_EventInfoUIBase___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
        v20 = this->fields.entity;
        v21 = Method_System_Collections_Generic_List_EventInfoUIBase__Add__;
        ++HIDWORD(this->fields.__4__this);
        if ( !v20 )
          goto LABEL_35;
        _4__this_low = SLODWORD(this->fields.__4__this);
        if ( (unsigned int)_4__this_low >= v20->fields.eventId )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            Component_object,
            *(const MethodInfo_3810718 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v23 = &v20->klass + _4__this_low;
          LODWORD(this->fields.__4__this) = _4__this_low + 1;
          v23[4] = (EventUiEntity_c *)Component_object;
          sub_1C71354((GrandQuestFolderBoardItem_o *)(v23 + 4), (int32_t)Component_object, v13, v14, v15, v16, v17, v18);
        }
        this = (TitleInfoEventUIComponent___c__DisplayClass23_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_35;
        this = (TitleInfoEventUIComponent___c__DisplayClass23_0_o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)this,
                                                                      (const MethodInfo_314B10C *)Method_DataManager_GetMasterData_EventUiValueMaster___);
        if ( this )
        {
          v24 = v4->fields.entity;
          if ( v24 )
          {
            List = EventUiValueMaster__getList((EventUiValueMaster_o *)this, v24->fields.objectId, 0);
            ((void (__fastcall *)(Il2CppObject *, EventUiValueEntity_array *, const MethodInfo *))Component_object->klass->vtable[5].methodPtr)(
              Component_object,
              List,
              Component_object->klass->vtable[5].method);
            return;
          }
LABEL_35:
          sub_1C71608(this, prefabData);
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