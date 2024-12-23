void __fastcall TitleInfoEventUIComponent___ctor(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Collections_Generic_List_object__o *v15; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  System_Collections_Generic_List_object__o *v22; // x20
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7

  if ( (byte_4B65677 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent___ctor__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_AssetData___ctor__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventInfoUIBase___ctor__, v4);
    sub_1BE4ACC(&System_Collections_Generic_List_TitleInfoEventUIPartsComponent__TypeInfo, v5);
    sub_1BE4ACC(&System_Collections_Generic_List_EventInfoUIBase__TypeInfo, v6);
    sub_1BE4ACC(&System_Collections_Generic_List_AssetData__TypeInfo, v7);
    byte_4B65677 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_AssetData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_AssetData___ctor__);
  this->fields.eventInfoAssetDataList = (struct System_Collections_Generic_List_AssetData__o *)v8;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields.eventInfoAssetDataList,
    (int64_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_EventInfoUIBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_EventInfoUIBase___ctor__);
  this->fields.eventUiPrefabList = (struct System_Collections_Generic_List_EventInfoUIBase__o *)v15;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.eventUiPrefabList, (int64_t)v15, v16, v17, v18, v19, v20, v21);
  v22 = (System_Collections_Generic_List_object__o *)sub_1BE4D18(System_Collections_Generic_List_TitleInfoEventUIPartsComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_35EB9F0 *)Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent___ctor__);
  this->fields.eventUIPartsList = (struct System_Collections_Generic_List_TitleInfoEventUIPartsComponent__o *)v22;
  sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields.eventUIPartsList, (int64_t)v22, v23, v24, v25, v26, v27, v28);
  TitleInfoEventInfoComponent___ctor((TitleInfoEventInfoComponent_o *)this, 0LL);
}


void __fastcall TitleInfoEventUIComponent__AfterRedisplay(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_EventInfoUIBase__o *eventUiPrefabList; // x0
  Il2CppObject *current; // x19
  _BOOL8 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B65665 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__, v5);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v6);
    byte_4B65665 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  eventUiPrefabList = this->fields.eventUiPrefabList;
  if ( eventUiPrefabList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      (System_Collections_Generic_List_object__o *)eventUiPrefabList,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
    {
      current = v11.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( !v9 )
      {
        if ( !current )
          sub_1BE4D28(v9, v10);
        ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[11].method)(
          current,
          current->klass->vtable[12].methodPtr);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
  }
}


System_Collections_IEnumerator_o *__fastcall TitleInfoEventUIComponent__AsyncSetup(
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
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7

  if ( (byte_4B65666 & 1) == 0 )
  {
    sub_1BE4ACC(&TitleInfoEventUIComponent__AsyncSetup_d__15_TypeInfo, eventUIEntity);
    byte_4B65666 = 1;
  }
  v12 = isEventReward;
  v13 = sub_1BE4D18(TitleInfoEventUIComponent__AsyncSetup_d__15_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  *(_DWORD *)(v13 + 16) = 0;
  *(_QWORD *)(v13 + 48) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v13 + 48), (int64_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v13 + 32) = eventUIEntity;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v13 + 32), (int64_t)eventUIEntity, v20, v21, v22, v23, v24, v25);
  *(_BYTE *)(v13 + 40) = isMap;
  *(_BYTE *)(v13 + 41) = v12;
  *(_QWORD *)(v13 + 56) = callback;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v13 + 56), (int64_t)callback, v26, v27, v28, v29, v30, v31);
  return (System_Collections_IEnumerator_o *)v13;
}


System_String_o *__fastcall TitleInfoEventUIComponent__GetAssetName(
        EventUiEntity_o *eventUIEntity,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  EventUiEntity_o *v5; // x19
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *v8; // x0
  Il2CppObject *v10; // x20
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  Il2CppObject *v14; // x0
  int32_t warId; // [xsp+4h] [xbp-2Ch] BYREF
  int v16; // [xsp+8h] [xbp-28h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-24h] BYREF

  v5 = eventUIEntity;
  if ( (byte_4B65675 & 1) == 0 )
  {
    sub_1BE4ACC(&int_TypeInfo, method);
    sub_1BE4ACC(&StringLiteral_6370/*"EventUI/Prefabs/{0}"*/, v6);
    eventUIEntity = (EventUiEntity_o *)sub_1BE4ACC(&StringLiteral_6371/*"EventUI/Prefabs/{0}/{1}"*/, v7);
    byte_4B65675 = 1;
  }
  if ( !v5 )
    sub_1BE4D28(eventUIEntity, method);
  if ( v5->fields.eventId )
  {
    eventId = v5->fields.eventId;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v2, v3, v4);
    return System_String__Format((System_String_o *)StringLiteral_6370/*"EventUI/Prefabs/{0}"*/, v8, 0LL);
  }
  else
  {
    v16 = 0;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16, v2, v3, v4);
    warId = v5->fields.warId;
    v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &warId, v11, v12, v13);
    return System_String__Format_62713180((System_String_o *)StringLiteral_6371/*"EventUI/Prefabs/{0}/{1}"*/, v10, v14, 0LL);
  }
}


UnityEngine_Vector3_o __fastcall TitleInfoEventUIComponent__GetPosition(
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

  if ( (byte_4B65672 & 1) == 0 )
  {
    this = (TitleInfoEventUIComponent_o *)sub_1BE4ACC(&EventUiEntity_TypeInfo, entity);
    byte_4B65672 = 1;
  }
  if ( !entity )
    sub_1BE4D28(this, entity);
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


bool __fastcall TitleInfoEventUIComponent__IsBusy(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *eventUiPrefabList; // x0
  bool v9; // w19
  Il2CppObject *current; // x20
  _BOOL8 v11; // x0
  __int64 v12; // x1
  int v13; // w20
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B65676 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventInfoUIBase__get_Count__, v6);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v7);
    byte_4B65676 = 1;
  }
  memset(&v15, 0, sizeof(v15));
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v15,
        eventUiPrefabList,
        (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
      while ( 1 )
      {
        v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v15,
               (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__);
        if ( !v9 )
          break;
        current = v15.fields._current;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        v11 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
        if ( v11 )
        {
          if ( !current )
            sub_1BE4D28(v11, v12);
          if ( (((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[17].method)(
                  current,
                  current->klass->vtable[18].methodPtr) & 1) != 0 )
          {
            v13 = 6;
            goto LABEL_14;
          }
        }
      }
      v13 = 7;
LABEL_14:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v15,
        (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
      LOBYTE(eventUiPrefabList) = v9 && v13 == 6;
    }
  }
  return (char)eventUiPrefabList;
}


bool __fastcall TitleInfoEventUIComponent__IsDispEventUIForSpot(
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
                                              0LL);
  return (char)eventUIEntity_k__BackingField;
}


bool __fastcall TitleInfoEventUIComponent__IsDispPossible(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  return 1;
}


bool __fastcall TitleInfoEventUIComponent__IsEventRaidBoss(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall TitleInfoEventUIComponent__IsPlayAnim(
        TitleInfoEventUIComponent_o *this,
        int32_t playType,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *eventUiPrefabList; // x0
  __int64 v9; // x1
  bool v10; // w20
  int v11; // w19
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B6566F & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__, *(_QWORD *)&playType);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventInfoUIBase__get_Count__, v7);
    byte_4B6566F = 1;
  }
  memset(&v13, 0, sizeof(v13));
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v13,
        eventUiPrefabList,
        (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
      while ( 1 )
      {
        v10 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v13,
                (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__);
        if ( !v10 )
          break;
        if ( !v13.fields._current )
          sub_1BE4D28(0LL, v9);
        if ( (((__int64 (*)(void))v13.fields._current->klass->vtable[7].method)() & 1) != 0 )
        {
          v11 = 5;
          goto LABEL_12;
        }
      }
      v11 = 2;
LABEL_12:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v13,
        (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
      LOBYTE(eventUiPrefabList) = v10 && v11 == 5;
    }
  }
  return (char)eventUiPrefabList;
}


System_Collections_IEnumerator_o *__fastcall TitleInfoEventUIComponent__LoadAssetBundle(
        TitleInfoEventUIComponent_o *this,
        EventUiEntity_o *eventUIEntity,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4B65667 & 1) == 0 )
  {
    sub_1BE4ACC(&TitleInfoEventUIComponent__LoadAssetBundle_d__16_TypeInfo, eventUIEntity);
    byte_4B65667 = 1;
  }
  v7 = sub_1BE4D18(TitleInfoEventUIComponent__LoadAssetBundle_d__16_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = eventUIEntity;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)eventUIEntity, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 48) = callback;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)callback, v20, v21, v22, v23, v24, v25);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall TitleInfoEventUIComponent__OnDestroy(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventInfoUIBase__o *eventUiPrefabList; // x8
  int32_t size; // w2
  int v5; // w9

  if ( (byte_4B65674 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventInfoUIBase__Clear__, method);
    byte_4B65674 = 1;
  }
  eventUiPrefabList = this->fields.eventUiPrefabList;
  if ( eventUiPrefabList )
  {
    size = eventUiPrefabList->fields._size;
    v5 = eventUiPrefabList->fields._version + 1;
    eventUiPrefabList->fields._size = 0;
    eventUiPrefabList->fields._version = v5;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)eventUiPrefabList->fields._items, 0, size, 0LL);
  }
  TitleInfoEventUIComponent__ReleaseAsset(this, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventUIComponent__PlayAnim(
        TitleInfoEventUIComponent_o *this,
        int32_t playType,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x23
  struct System_Collections_Generic_List_EventInfoUIBase__o *v16; // x0
  __int64 v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct System_Collections_Generic_List_EventInfoUIBase__o *eventUiPrefabList; // x8
  int size; // w8
  System_Action_o *v26; // x22
  Il2CppObject *current; // x21
  _BOOL8 v28; // x0
  __int64 v29; // x1
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B65670 & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, *(_QWORD *)&playType);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__, v8);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventInfoUIBase__get_Count__, v11);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v12);
    sub_1BE4ACC(&Method_TitleInfoEventUIComponent___c__DisplayClass27_0__PlayAnim_b__0__, v13);
    sub_1BE4ACC(&TitleInfoEventUIComponent___c__DisplayClass27_0_TypeInfo, v14);
    byte_4B65670 = 1;
  }
  memset(&v31, 0, sizeof(v31));
  v15 = sub_1BE4D18(TitleInfoEventUIComponent___c__DisplayClass27_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  if ( !v15 )
    goto LABEL_17;
  *(_QWORD *)(v15 + 16) = callback;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v15 + 16), (int64_t)callback, v18, v19, v20, v21, v22, v23);
  eventUiPrefabList = this->fields.eventUiPrefabList;
  if ( !eventUiPrefabList || (size = eventUiPrefabList->fields._size, size < 1) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v15 + 16), 0LL);
    return;
  }
  *(_DWORD *)(v15 + 24) = size;
  v26 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
  System_Action___ctor(
    v26,
    (Il2CppObject *)v15,
    Method_TitleInfoEventUIComponent___c__DisplayClass27_0__PlayAnim_b__0__,
    0LL);
  v16 = this->fields.eventUiPrefabList;
  if ( !v16 )
LABEL_17:
    sub_1BE4D28(v16, v17);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    (System_Collections_Generic_List_object__o *)v16,
    (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
  v31 = v30;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
  {
    current = v31.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v28 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v28 )
    {
      ActionExtensions__Call(v26, 0LL);
    }
    else
    {
      if ( !current )
        sub_1BE4D28(v28, v29);
      ((void (__fastcall *)(Il2CppObject *, _QWORD, System_Action_o *, Il2CppMethodPointer))current->klass->vtable[8].method)(
        current,
        (unsigned int)playType,
        v26,
        current->klass->vtable[9].methodPtr);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
}


void __fastcall TitleInfoEventUIComponent__Redisplay(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_List_EventInfoUIBase__o *eventUiPrefabList; // x0
  Il2CppObject *current; // x19
  _BOOL8 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B65664 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__, v5);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v6);
    byte_4B65664 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  eventUiPrefabList = this->fields.eventUiPrefabList;
  if ( eventUiPrefabList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v11,
      (System_Collections_Generic_List_object__o *)eventUiPrefabList,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v11,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
    {
      current = v11.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v9 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( !v9 )
      {
        if ( !current )
          sub_1BE4D28(v9, v10);
        ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[10].method)(
          current,
          current->klass->vtable[11].methodPtr);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v11,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
  }
}


void __fastcall TitleInfoEventUIComponent__ReleaseAsset(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_AssetData__o *eventInfoAssetDataList; // x0
  Il2CppObject *current; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  struct System_Collections_Generic_List_AssetData__o *v12; // x8
  int32_t size; // w2
  int v14; // w9
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B65673 & 1) == 0 )
  {
    sub_1BE4ACC(&AssetManager_TypeInfo, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_AssetData__Clear__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__, v7);
    byte_4B65673 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  eventInfoAssetDataList = this->fields.eventInfoAssetDataList;
  if ( eventInfoAssetDataList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      (System_Collections_Generic_List_object__o *)eventInfoAssetDataList,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__) )
    {
      current = v15.fields._current;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_38697776((AssetData_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    v12 = this->fields.eventInfoAssetDataList;
    if ( !v12 )
      sub_1BE4D28(v10, v11);
    size = v12->fields._size;
    v14 = v12->fields._version + 1;
    v12->fields._size = 0;
    v12->fields._version = v14;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v12->fields._items, 0, size, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventUIComponent__SetActiveChildren(
        TitleInfoEventUIComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  UnityEngine_Transform_o *transform; // x0
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  bool i; // w20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v13; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v16; // x8
  __int64 v17; // x9
  System_Collections_IEnumerator_c **v18; // x10
  __int64 v19; // x0
  UnityEngine_Component_o *v20; // x0
  __int64 v21; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x19
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0

  if ( (byte_4B65669 & 1) == 0 )
  {
    sub_1BE4ACC(&System_IDisposable_TypeInfo, isActive);
    sub_1BE4ACC(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_1BE4ACC(&UnityEngine_Transform_TypeInfo, v6);
    byte_4B65669 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1BE4D28(0LL, v8);
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
  if ( !Enumerator )
    sub_1BE4D28(0LL, v9);
  for ( i = isActive; ; UnityEngine_GameObject__SetActive(gameObject, i, 0LL) )
  {
    klass = Enumerator->klass;
    v13 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v13;
        p_offset += 4;
        if ( !v13 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v16 = Enumerator->klass;
    v17 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v18 = (System_Collections_IEnumerator_c **)&v16->_1.interfaceOffsets->offset;
      while ( *(v18 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v17;
        v18 += 2;
        if ( !v17 )
          goto LABEL_17;
      }
      v19 = (__int64)&v16->vtable[*(_DWORD *)v18 + 1].method;
    }
    else
    {
LABEL_17:
      v19 = sub_1C36AAC(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v20 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v19)(
                                       Enumerator,
                                       *(_QWORD *)(v19 + 8));
    if ( !v20 )
      goto LABEL_34;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v20->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v20->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1BE4FE8(v20);
LABEL_34:
      sub_1BE4D28(v20, v21);
    }
    gameObject = UnityEngine_Component__get_gameObject(v20, 0LL);
    if ( !gameObject )
      sub_1BE4D28(0LL, v24);
  }
  v25 = sub_1BE4C08(Enumerator, System_IDisposable_TypeInfo);
  if ( v25 )
  {
    v26 = *(_QWORD *)v25;
    v27 = v25;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v29 - 1) != System_IDisposable_TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_29;
      }
      v30 = v26 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_29:
      v30 = sub_1C36AAC(v25, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v30)(v27, *(_QWORD *)(v30 + 8));
  }
}


void __fastcall TitleInfoEventUIComponent__SetDispEventUIForSpot(
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
    if ( EventUiEntity__IsDispArea(eventUIEntity_k__BackingField, 8, 0LL) )
    {
      v8 = this->fields._eventUIEntity_k__BackingField;
      v9 = v8 && EventUiEntity__IsDispEventUIForSpot(v8, spotId, 0LL);
      TitleInfoEventUIComponent__SetActiveChildren(this, v9, v7);
    }
    v10 = this->fields._eventUIEntity_k__BackingField;
    if ( !v10 )
      sub_1BE4D28(0LL, v6);
    if ( EventUiEntity__IsDispArea(v10, 1, 0LL) )
      TitleInfoEventUIComponent__SwitchSpotState(this, spotId > 0, v11);
  }
}


void __fastcall TitleInfoEventUIComponent__SetGameObject(
        TitleInfoEventUIComponent_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  const MethodInfo *v23; // x1
  System_String_o *AssetName; // x19
  AssetLoader_LoadEndDataHandler_o *v25; // x20

  if ( (byte_4B6566C & 1) == 0 )
  {
    sub_1BE4ACC(&AssetManager_TypeInfo, entity);
    sub_1BE4ACC(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1BE4ACC(&Method_TitleInfoEventUIComponent___c__DisplayClass23_0__SetGameObject_b__0__, v6);
    sub_1BE4ACC(&TitleInfoEventUIComponent___c__DisplayClass23_0_TypeInfo, v7);
    byte_4B6566C = 1;
  }
  v8 = sub_1BE4D18(TitleInfoEventUIComponent___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1BE4D28(v9, v10);
  *(_QWORD *)(v8 + 16) = entity;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v8 + 16), (int64_t)entity, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 24) = this;
  sub_1BE4A70((PartyOrganizationUtility_o *)(v8 + 24), (int64_t)this, v17, v18, v19, v20, v21, v22);
  AssetName = TitleInfoEventUIComponent__GetAssetName(*(EventUiEntity_o **)(v8 + 16), v23);
  v25 = (AssetLoader_LoadEndDataHandler_o *)sub_1BE4D18(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v25,
    (Il2CppObject *)v8,
    Method_TitleInfoEventUIComponent___c__DisplayClass23_0__SetGameObject_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(AssetName, v25, 1, 0LL);
}


void __fastcall TitleInfoEventUIComponent__SetImage(
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
  if ( (byte_4B6566D & 1) == 0 )
  {
    this = (TitleInfoEventUIComponent_o *)sub_1BE4ACC(&AtlasManager_TypeInfo, entity);
    byte_4B6566D = 1;
  }
  if ( !entity )
    goto LABEL_10;
  v5 = System_Int32__ToString((int)entity + 52, 0LL);
  imageSprite = v4->fields.imageSprite;
  v7 = v5;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventUI(imageSprite, v7, 0LL);
  this = (TitleInfoEventUIComponent_o *)v4->fields.imageSprite;
  if ( !this
    || (((void (__fastcall *)(TitleInfoEventUIComponent_o *, const char *))this->klass[2]._1.gc_desc)(
          this,
          this->klass[2]._1.name),
        (this = (TitleInfoEventUIComponent_o *)v4->fields.imageSprite) == 0LL)
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL),
        GameObjectExtensions__ResetLocalScale(gameObject, 0LL),
        (this = (TitleInfoEventUIComponent_o *)v4->fields.imageSprite) == 0LL) )
  {
LABEL_10:
    sub_1BE4D28(this, entity);
  }
  v9 = (TitleInfoEventUIComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Position = TitleInfoEventUIComponent__GetPosition(v9, entity, v10);
  GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v9, Position, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventUIComponent__SetUIDisp(
        TitleInfoEventUIComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *eventUiPrefabList; // x0
  _BOOL4 v11; // w19
  Il2CppObject *current; // x20
  _BOOL8 v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_Enumerator_object__o v15; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B65671 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__, isDisp);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__, v7);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventInfoUIBase__get_Count__, v8);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v9);
    byte_4B65671 = 1;
  }
  memset(&v15, 0, sizeof(v15));
  eventUiPrefabList = (System_Collections_Generic_List_object__o *)this->fields.eventUiPrefabList;
  if ( eventUiPrefabList && eventUiPrefabList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v15,
      eventUiPrefabList,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    v11 = isDisp;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v15,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
    {
      current = v15.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v13 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( !v13 )
      {
        if ( !current )
          sub_1BE4D28(v13, v14);
        ((void (__fastcall *)(Il2CppObject *, _BOOL4, Il2CppMethodPointer))current->klass->vtable[12].method)(
          current,
          v11,
          current->klass->vtable[13].methodPtr);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v15,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventUIComponent__SetValue(
        TitleInfoEventUIComponent_o *this,
        int32_t valueType,
        Il2CppObject *val,
        int32_t setType,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct System_Collections_Generic_List_EventInfoUIBase__o *eventUiPrefabList; // x0
  Il2CppObject *current; // x22
  _BOOL8 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B6566E & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__, *(_QWORD *)&valueType);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__, v9);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__, v10);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__, v11);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v12);
    byte_4B6566E = 1;
  }
  memset(&v17, 0, sizeof(v17));
  eventUiPrefabList = this->fields.eventUiPrefabList;
  if ( eventUiPrefabList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      (System_Collections_Generic_List_object__o *)eventUiPrefabList,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
    {
      current = v17.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v15 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( !v15 )
      {
        if ( !current )
          sub_1BE4D28(v15, v16);
        ((void (__fastcall *)(Il2CppObject *, _QWORD, Il2CppObject *, _QWORD, Il2CppMethodPointer))current->klass->vtable[6].method)(
          current,
          (unsigned int)valueType,
          val,
          (unsigned int)setType,
          current->klass->vtable[7].methodPtr);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventUIComponent__SwitchSpotState(
        TitleInfoEventUIComponent_o *this,
        bool isOpen,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_EventInfoUIBase__o *eventUiPrefabList; // x0
  _BOOL4 v10; // w19
  Il2CppObject *current; // x20
  _BOOL8 v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B6566A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__, isOpen);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__, v7);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v8);
    byte_4B6566A = 1;
  }
  memset(&v14, 0, sizeof(v14));
  eventUiPrefabList = this->fields.eventUiPrefabList;
  if ( eventUiPrefabList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      (System_Collections_Generic_List_object__o *)eventUiPrefabList,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    v10 = isOpen;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
    {
      current = v14.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v12 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( !v12 )
      {
        if ( !current )
          sub_1BE4D28(v12, v13);
        ((void (__fastcall *)(Il2CppObject *, _BOOL4, Il2CppMethodPointer))current->klass->vtable[13].method)(
          current,
          v10,
          current->klass->vtable[14].methodPtr);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
  }
}


void __fastcall TitleInfoEventUIComponent__UpdateDisp(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoEventUIComponent__UpdateEventUI(
        TitleInfoEventUIComponent_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  UnityEngine_Object_o *imageSprite; // x21
  _BOOL8 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  int32_t objectType; // w8

  if ( (byte_4B65668 & 1) == 0 )
  {
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, entity);
    byte_4B65668 = 1;
  }
  imageSprite = (UnityEngine_Object_o *)this->fields.imageSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(imageSprite, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !entity )
      sub_1BE4D28(v6, v7);
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


void __fastcall TitleInfoEventUIComponent__UpdatePartsDisp(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *eventUIPartsList; // x0
  const MethodInfo *v8; // x1
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B6566B & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__Dispose__, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__MoveNext__, v3);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__get_Current__, v4);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__GetEnumerator__, v5);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__get_Count__, v6);
    byte_4B6566B = 1;
  }
  memset(&v9, 0, sizeof(v9));
  eventUIPartsList = (System_Collections_Generic_List_object__o *)this->fields.eventUIPartsList;
  if ( eventUIPartsList && eventUIPartsList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v9,
      eventUIPartsList,
      (const MethodInfo_35ECD1C *)Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v9,
              (const MethodInfo_3361CE0 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__MoveNext__) )
    {
      if ( !v9.fields._current )
        sub_1BE4D28(0LL, v8);
      TitleInfoEventUIPartsComponent__UpdateDisp((TitleInfoEventUIPartsComponent_o *)v9.fields._current, v8);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v9,
      (const MethodInfo_3361CDC *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__Dispose__);
  }
}


System_Collections_Generic_List_EventInfoUIBase__o *__fastcall TitleInfoEventUIComponent__get_EventUiPrefabList(
        TitleInfoEventUIComponent_o *this,
        const MethodInfo *method)
{
  return this->fields.eventUiPrefabList;
}


EventUiEntity_o *__fastcall TitleInfoEventUIComponent__get_eventUIEntity(
        TitleInfoEventUIComponent_o *this,
        const MethodInfo *method)
{
  return this->fields._eventUIEntity_k__BackingField;
}


void __fastcall TitleInfoEventUIComponent__set_eventUIEntity(
        TitleInfoEventUIComponent_o *this,
        EventUiEntity_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._eventUIEntity_k__BackingField = value;
  sub_1BE4A70(
    (PartyOrganizationUtility_o *)&this->fields._eventUIEntity_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall TitleInfoEventUIComponent__AsyncSetup_d__15___ctor(
        TitleInfoEventUIComponent__AsyncSetup_d__15_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TitleInfoEventUIComponent__AsyncSetup_d__15__MoveNext(
        TitleInfoEventUIComponent__AsyncSetup_d__15_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  struct TitleInfoEventUIComponent_o *_4__this; // x20
  __int64 v7; // x21
  __int64 v8; // x0
  int64_t v9; // x1
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  struct EventUiEntity_o *eventUIEntity; // x1
  struct TitleInfoEventUIComponent_o *v17; // x1
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct System_Action_o *callback; // x1
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  EventUiEntity_o *v37; // x22
  System_Action_o *v38; // x23
  const MethodInfo *v39; // x3
  Il2CppObject *AssetBundle; // x0
  Il2CppObject **p__2__current; // x19
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  bool result; // w0

  if ( (byte_4B6567B & 1) == 0 )
  {
    sub_1BE4ACC(&System_Action_TypeInfo, method);
    sub_1BE4ACC(&Method_TitleInfoEventUIComponent___c__DisplayClass15_0__AsyncSetup_b__0__, v3);
    sub_1BE4ACC(&TitleInfoEventUIComponent___c__DisplayClass15_0_TypeInfo, v4);
    byte_4B6567B = 1;
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
      v7 = sub_1BE4D18(TitleInfoEventUIComponent___c__DisplayClass15_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v7, 0LL);
      if ( !v7 )
        goto LABEL_11;
      eventUIEntity = this->fields.eventUIEntity;
      *(_QWORD *)(v7 + 16) = eventUIEntity;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v7 + 16), (int64_t)eventUIEntity, v10, v11, v12, v13, v14, v15);
      *(_BYTE *)(v7 + 24) = this->fields.isMap;
      *(_BYTE *)(v7 + 25) = this->fields.isEventReward;
      v17 = this->fields.__4__this;
      *(_QWORD *)(v7 + 32) = v17;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)v17, v18, v19, v20, v21, v22, v23);
      callback = this->fields.callback;
      *(_QWORD *)(v7 + 40) = callback;
      sub_1BE4A70((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)callback, v25, v26, v27, v28, v29, v30);
      v9 = *(_QWORD *)(v7 + 16);
      if ( v9 )
      {
        if ( _4__this )
        {
          _4__this->fields._eventUIEntity_k__BackingField = (struct EventUiEntity_o *)v9;
          sub_1BE4A70(
            (PartyOrganizationUtility_o *)&_4__this->fields._eventUIEntity_k__BackingField,
            v9,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36);
          v37 = *(EventUiEntity_o **)(v7 + 16);
          v38 = (System_Action_o *)sub_1BE4D18(System_Action_TypeInfo);
          System_Action___ctor(
            v38,
            (Il2CppObject *)v7,
            Method_TitleInfoEventUIComponent___c__DisplayClass15_0__AsyncSetup_b__0__,
            0LL);
          AssetBundle = (Il2CppObject *)TitleInfoEventUIComponent__LoadAssetBundle(_4__this, v37, v38, v39);
          this->fields.__2__current = AssetBundle;
          p__2__current = &this->fields.__2__current;
          sub_1BE4A70((PartyOrganizationUtility_o *)p__2__current, (int64_t)AssetBundle, v42, v43, v44, v45, v46, v47);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
LABEL_11:
        sub_1BE4D28(v8, v9);
      }
    }
    return 0;
  }
  return result;
}


Il2CppObject *__fastcall TitleInfoEventUIComponent__AsyncSetup_d__15__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TitleInfoEventUIComponent__AsyncSetup_d__15_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TitleInfoEventUIComponent__AsyncSetup_d__15__System_Collections_IEnumerator_Reset(
        TitleInfoEventUIComponent__AsyncSetup_d__15_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_TitleInfoEventUIComponent__AsyncSetup_d__15_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
}


Il2CppObject *__fastcall TitleInfoEventUIComponent__AsyncSetup_d__15__System_Collections_IEnumerator_get_Current(
        TitleInfoEventUIComponent__AsyncSetup_d__15_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TitleInfoEventUIComponent__AsyncSetup_d__15__System_IDisposable_Dispose(
        TitleInfoEventUIComponent__AsyncSetup_d__15_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoEventUIComponent__LoadAssetBundle_d__16___ctor(
        TitleInfoEventUIComponent__LoadAssetBundle_d__16_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TitleInfoEventUIComponent__LoadAssetBundle_d__16__MoveNext(
        TitleInfoEventUIComponent__LoadAssetBundle_d__16_o *this,
        const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TitleInfoEventUIComponent__LoadAssetBundle_d__16_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t _1__state; // w8
  Il2CppObject *v13; // x21
  Il2CppObject **p__8__1; // x20
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t _4__this; // x1
  System_String_o *AssetName; // x0
  Il2CppObject *v29; // x22
  System_String_o *v30; // x20
  AssetLoader_LoadEndDataHandler_o *v31; // x21
  struct TitleInfoEventUIComponent___c__DisplayClass16_0_o *_8__1; // x8
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0

  v8 = this;
  if ( (byte_4B6567C & 1) == 0 )
  {
    sub_1BE4ACC(&AssetManager_TypeInfo, method);
    sub_1BE4ACC(&AssetLoader_LoadEndDataHandler_TypeInfo, v9);
    sub_1BE4ACC(&Method_TitleInfoEventUIComponent___c__DisplayClass16_0__LoadAssetBundle_b__0__, v10);
    this = (TitleInfoEventUIComponent__LoadAssetBundle_d__16_o *)sub_1BE4ACC(
                                                                   &TitleInfoEventUIComponent___c__DisplayClass16_0_TypeInfo,
                                                                   v11);
    byte_4B6567C = 1;
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
    v13 = (Il2CppObject *)sub_1BE4D18(TitleInfoEventUIComponent___c__DisplayClass16_0_TypeInfo);
    System_Object___ctor(v13, 0LL);
    v8->fields.__8__1 = (struct TitleInfoEventUIComponent___c__DisplayClass16_0_o *)v13;
    p__8__1 = (Il2CppObject **)&v8->fields.__8__1;
    sub_1BE4A70((PartyOrganizationUtility_o *)&v8->fields.__8__1, (int64_t)v13, v15, v16, v17, v18, v19, v20);
    this = (TitleInfoEventUIComponent__LoadAssetBundle_d__16_o *)v8->fields.__8__1;
    if ( !this )
      goto LABEL_17;
    _4__this = (int64_t)v8->fields.__4__this;
    *(_QWORD *)&this->fields.__1__state = _4__this;
    sub_1BE4A70((PartyOrganizationUtility_o *)&this->fields, _4__this, v21, v22, v23, v24, v25, v26);
    this = (TitleInfoEventUIComponent__LoadAssetBundle_d__16_o *)v8->fields.eventUIEntity;
    if ( !this )
    {
LABEL_15:
      ActionExtensions__Call(v8->fields.callback, 0LL);
      return 0;
    }
    if ( !*p__8__1 )
LABEL_17:
      sub_1BE4D28(this, method);
    LOBYTE((*p__8__1)[1].monitor) = 0;
    AssetName = TitleInfoEventUIComponent__GetAssetName((EventUiEntity_o *)this, method);
    v29 = *p__8__1;
    v30 = AssetName;
    v31 = (AssetLoader_LoadEndDataHandler_o *)sub_1BE4D18(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v31,
      v29,
      Method_TitleInfoEventUIComponent___c__DisplayClass16_0__LoadAssetBundle_b__0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    this = (TitleInfoEventUIComponent__LoadAssetBundle_d__16_o *)AssetManager__loadAssetStorage(v30, v31, 1, 0LL);
    v8->fields._isAssetFound_5__2 = (unsigned __int8)this & 1;
LABEL_12:
    _8__1 = v8->fields.__8__1;
    if ( _8__1 )
    {
      if ( (v8->fields._isAssetFound_5__2 & (_8__1->fields.isAssetLoaded ^ 0xFF)) != 0 )
      {
        v8->fields.__2__current = 0LL;
        p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BE4A70(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
        return result;
      }
      goto LABEL_15;
    }
    goto LABEL_17;
  }
  return 0;
}


Il2CppObject *__fastcall TitleInfoEventUIComponent__LoadAssetBundle_d__16__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TitleInfoEventUIComponent__LoadAssetBundle_d__16_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TitleInfoEventUIComponent__LoadAssetBundle_d__16__System_Collections_IEnumerator_Reset(
        TitleInfoEventUIComponent__LoadAssetBundle_d__16_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BE4AE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BE4D18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BE4AE0(&Method_TitleInfoEventUIComponent__LoadAssetBundle_d__16_System_Collections_IEnumerator_Reset__);
  sub_1BE4BF4(v3, v4);
}


Il2CppObject *__fastcall TitleInfoEventUIComponent__LoadAssetBundle_d__16__System_Collections_IEnumerator_get_Current(
        TitleInfoEventUIComponent__LoadAssetBundle_d__16_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TitleInfoEventUIComponent__LoadAssetBundle_d__16__System_IDisposable_Dispose(
        TitleInfoEventUIComponent__LoadAssetBundle_d__16_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoEventUIComponent___c__DisplayClass15_0___ctor(
        TitleInfoEventUIComponent___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventUIComponent___c__DisplayClass15_0___AsyncSetup_b__0(
        TitleInfoEventUIComponent___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  EventUiEntity_o *eventUIEntity; // x0
  const MethodInfo *v5; // x2
  struct TitleInfoEventUIComponent_o *_4__this; // x8
  const MethodInfo *v7; // x2

  if ( (byte_4B65678 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_UnityEngine_Component_GetComponentsInChildren_TitleInfoEventUIPartsComponent___, method);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__AddRange__, v3);
    byte_4B65678 = 1;
  }
  eventUIEntity = this->fields.eventUIEntity;
  if ( !eventUIEntity )
    goto LABEL_23;
  if ( EventUiEntity__IsDispArea(eventUIEntity, 1, 0LL) && this->fields.isMap )
    goto LABEL_11;
  eventUIEntity = this->fields.eventUIEntity;
  if ( !eventUIEntity )
    goto LABEL_23;
  if ( EventUiEntity__IsDispArea(eventUIEntity, 2, 0LL) && this->fields.isEventReward )
    goto LABEL_11;
  eventUIEntity = this->fields.eventUIEntity;
  if ( !eventUIEntity )
    goto LABEL_23;
  if ( EventUiEntity__IsDispArea(eventUIEntity, 4, 0LL) )
    goto LABEL_11;
  eventUIEntity = this->fields.eventUIEntity;
  if ( !eventUIEntity )
    goto LABEL_23;
  if ( EventUiEntity__IsDispArea(eventUIEntity, 8, 0LL) && this->fields.isMap )
  {
LABEL_11:
    eventUIEntity = (EventUiEntity_o *)this->fields.__4__this;
    if ( !eventUIEntity )
      goto LABEL_23;
    TitleInfoEventUIComponent__UpdateEventUI(
      (TitleInfoEventUIComponent_o *)eventUIEntity,
      this->fields.eventUIEntity,
      v5);
  }
  eventUIEntity = (EventUiEntity_o *)this->fields.__4__this;
  if ( !eventUIEntity )
    goto LABEL_23;
  eventUIEntity = (EventUiEntity_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)eventUIEntity, 0LL);
  if ( !eventUIEntity )
    goto LABEL_23;
  eventUIEntity = (EventUiEntity_o *)UnityEngine_Component__GetComponentsInChildren_object_(
                                       (UnityEngine_Component_o *)eventUIEntity,
                                       1,
                                       (const MethodInfo_2F506A0 *)Method_UnityEngine_Component_GetComponentsInChildren_TitleInfoEventUIPartsComponent___);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (method = (const MethodInfo *)eventUIEntity,
        (eventUIEntity = (EventUiEntity_o *)_4__this->fields.eventUIPartsList) == 0LL)
    || (System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)eventUIEntity,
          (System_Collections_Generic_IEnumerable_T__o *)method,
          (const MethodInfo_35EC430 *)Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__AddRange__),
        (eventUIEntity = (EventUiEntity_o *)this->fields.__4__this) == 0LL)
    || (TitleInfoEventUIComponent__UpdatePartsDisp((TitleInfoEventUIComponent_o *)eventUIEntity, method),
        (eventUIEntity = this->fields.eventUIEntity) == 0LL) )
  {
LABEL_23:
    sub_1BE4D28(eventUIEntity, method);
  }
  if ( EventUiEntity__IsDispArea(eventUIEntity, 8, 0LL) )
  {
    eventUIEntity = (EventUiEntity_o *)this->fields.__4__this;
    if ( eventUIEntity )
    {
      TitleInfoEventUIComponent__SetActiveChildren((TitleInfoEventUIComponent_o *)eventUIEntity, 0, v7);
      goto LABEL_22;
    }
    goto LABEL_23;
  }
LABEL_22:
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall TitleInfoEventUIComponent___c__DisplayClass16_0___ctor(
        TitleInfoEventUIComponent___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventUIComponent___c__DisplayClass16_0___LoadAssetBundle_b__0(
        TitleInfoEventUIComponent___c__DisplayClass16_0_o *this,
        AssetData_o *asset,
        const MethodInfo *method)
{
  TitleInfoEventUIComponent___c__DisplayClass16_0_o *v4; // x19
  __int64 v5; // x1
  struct TitleInfoEventUIComponent_o *_4__this; // x8
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  struct TitleInfoEventUIComponent_o *v13; // x8
  struct TitleInfoEventUIComponent_o *v14; // x8
  _QWORD *v15; // x9
  __int64 v16; // x10
  TitleInfoEventUIComponent_c **v17; // x8

  v4 = this;
  if ( (byte_4B65679 & 1) == 0 )
  {
    sub_1BE4ACC(&Method_System_Collections_Generic_List_AssetData__Add__, asset);
    this = (TitleInfoEventUIComponent___c__DisplayClass16_0_o *)sub_1BE4ACC(
                                                                  &Method_System_Collections_Generic_List_AssetData__Contains__,
                                                                  v5);
    byte_4B65679 = 1;
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
                                                                (const MethodInfo_35EC5B4 *)Method_System_Collections_Generic_List_AssetData__Contains__);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_12;
  v13 = v4->fields.__4__this;
  if ( !v13
    || (this = (TitleInfoEventUIComponent___c__DisplayClass16_0_o *)v13->fields.eventInfoAssetDataList) == 0LL
    || (v14 = this->fields.__4__this,
        v15 = Method_System_Collections_Generic_List_AssetData__Add__,
        ++*((_DWORD *)&this->fields.isAssetLoaded + 1),
        !v14) )
  {
LABEL_13:
    sub_1BE4D28(this, asset);
  }
  v16 = *(int *)&this->fields.isAssetLoaded;
  if ( (unsigned int)v16 >= LODWORD(v14->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)asset,
      *(const MethodInfo_35EC224 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = &v14->klass + v16;
    *(_DWORD *)&this->fields.isAssetLoaded = v16 + 1;
    v17[4] = (TitleInfoEventUIComponent_c *)asset;
    sub_1BE4A70((PartyOrganizationUtility_o *)(v17 + 4), (int64_t)asset, v7, v8, v9, v10, v11, v12);
  }
LABEL_12:
  v4->fields.isAssetLoaded = 1;
}


void __fastcall TitleInfoEventUIComponent___c__DisplayClass23_0___ctor(
        TitleInfoEventUIComponent___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventUIComponent___c__DisplayClass23_0___SetGameObject_b__0(
        TitleInfoEventUIComponent___c__DisplayClass23_0_o *this,
        AssetData_o *prefabData,
        const MethodInfo *method)
{
  TitleInfoEventUIComponent___c__DisplayClass23_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  struct EventUiEntity_o *entity; // x8
  UnityEngine_Object_o *Object_38675904; // x20
  UnityEngine_Object_o *v12; // x0
  UnityEngine_GameObject_o *v13; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v15; // x2
  struct EventUiEntity_o *v16; // x8
  Il2CppObject *Component_object; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  struct TitleInfoEventUIComponent_o *_4__this; // x8
  struct EventUiEntity_o *v25; // x8
  _QWORD *v26; // x9
  __int64 _4__this_low; // x10
  EventUiEntity_c **v28; // x8
  struct EventUiEntity_o *v29; // x8
  EventUiValueEntity_array *List; // x0
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4B6567A & 1) == 0 )
  {
    sub_1BE4ACC(&Method_DataManager_GetMasterData_EventUiValueMaster___, prefabData);
    sub_1BE4ACC(&Method_UnityEngine_GameObject_GetComponent_EventInfoUIBase___, v5);
    sub_1BE4ACC(&UnityEngine_GameObject_TypeInfo, v6);
    sub_1BE4ACC(&Method_System_Collections_Generic_List_EventInfoUIBase__Add__, v7);
    sub_1BE4ACC(&UnityEngine_Object_TypeInfo, v8);
    this = (TitleInfoEventUIComponent___c__DisplayClass23_0_o *)sub_1BE4ACC(
                                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                                  v9);
    byte_4B6567A = 1;
  }
  entity = v4->fields.entity;
  if ( !entity )
    goto LABEL_35;
  this = (TitleInfoEventUIComponent___c__DisplayClass23_0_o *)System_Int32__ToString((int)entity + 52, 0LL);
  if ( !prefabData )
    goto LABEL_35;
  Object_38675904 = AssetData__GetObject_38675904(prefabData, (System_String_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(Object_38675904, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v12 = UnityEngine_Object__Instantiate_70451204(Object_38675904, 0LL);
    if ( v12 )
      v13 = (UnityEngine_GameObject_c *)v12->klass == UnityEngine_GameObject_TypeInfo
          ? (UnityEngine_GameObject_o *)v12
          : 0LL;
    else
      v13 = 0LL;
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0LL, 0LL) )
    {
      this = (TitleInfoEventUIComponent___c__DisplayClass23_0_o *)v4->fields.__4__this;
      if ( !this )
        goto LABEL_35;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SafeSetParent_34492740(v13, gameObject, 0LL);
      GameObjectExtensions__ResetLocalScale(v13, 0LL);
      if ( !v4->fields.__4__this )
        goto LABEL_35;
      Position = TitleInfoEventUIComponent__GetPosition((TitleInfoEventUIComponent_o *)this, v4->fields.entity, v15);
      GameObjectExtensions__SetLocalPosition(v13, Position, 0LL);
      v16 = v4->fields.entity;
      if ( !v16 )
        goto LABEL_35;
      this = (TitleInfoEventUIComponent___c__DisplayClass23_0_o *)System_Int32__ToString((int)v16 + 16, 0LL);
      if ( !v13 )
        goto LABEL_35;
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v13, (System_String_o *)this, 0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v13,
                           (const MethodInfo_2FA979C *)Method_UnityEngine_GameObject_GetComponent_EventInfoUIBase___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (TitleInfoEventUIComponent___c__DisplayClass23_0_o *)UnityEngine_Object__op_Inequality(
                                                                    (UnityEngine_Object_o *)Component_object,
                                                                    0LL,
                                                                    0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_35;
        this = (TitleInfoEventUIComponent___c__DisplayClass23_0_o *)((__int64 (__fastcall *)(Il2CppObject *, struct EventUiEntity_o *, Il2CppMethodPointer))Component_object->klass->vtable[4].method)(
                                                                      Component_object,
                                                                      v4->fields.entity,
                                                                      Component_object->klass->vtable[5].methodPtr);
        _4__this = v4->fields.__4__this;
        if ( !_4__this )
          goto LABEL_35;
        this = (TitleInfoEventUIComponent___c__DisplayClass23_0_o *)_4__this->fields.eventUiPrefabList;
        if ( !this )
          goto LABEL_35;
        v25 = this->fields.entity;
        v26 = Method_System_Collections_Generic_List_EventInfoUIBase__Add__;
        ++HIDWORD(this->fields.__4__this);
        if ( !v25 )
          goto LABEL_35;
        _4__this_low = SLODWORD(this->fields.__4__this);
        if ( (unsigned int)_4__this_low >= v25->fields.eventId )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            Component_object,
            *(const MethodInfo_35EC224 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
        }
        else
        {
          v28 = &v25->klass + _4__this_low;
          LODWORD(this->fields.__4__this) = _4__this_low + 1;
          v28[4] = (EventUiEntity_c *)Component_object;
          sub_1BE4A70((PartyOrganizationUtility_o *)(v28 + 4), (int64_t)Component_object, v18, v19, v20, v21, v22, v23);
        }
        this = (TitleInfoEventUIComponent___c__DisplayClass23_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3828DC8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_35;
        this = (TitleInfoEventUIComponent___c__DisplayClass23_0_o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)this,
                                                                      (const MethodInfo_2F59110 *)Method_DataManager_GetMasterData_EventUiValueMaster___);
        if ( this )
        {
          v29 = v4->fields.entity;
          if ( v29 )
          {
            List = EventUiValueMaster__getList((EventUiValueMaster_o *)this, v29->fields.objectId, 0LL);
            ((void (__fastcall *)(Il2CppObject *, EventUiValueEntity_array *, Il2CppMethodPointer))Component_object->klass->vtable[5].method)(
              Component_object,
              List,
              Component_object->klass->vtable[6].methodPtr);
            return;
          }
LABEL_35:
          sub_1BE4D28(this, prefabData);
        }
      }
    }
  }
}


void __fastcall TitleInfoEventUIComponent___c__DisplayClass27_0___ctor(
        TitleInfoEventUIComponent___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventUIComponent___c__DisplayClass27_0___PlayAnim_b__0(
        TitleInfoEventUIComponent___c__DisplayClass27_0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w8
  bool v3; // zf

  v2 = this->fields.callbackCount - 1;
  v3 = this->fields.callbackCount == 1;
  this->fields.callbackCount = v2;
  if ( v2 < 0 || v3 )
    ActionExtensions__Call(this->fields.callback, 0LL);
}