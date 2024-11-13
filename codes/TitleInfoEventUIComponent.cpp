void __fastcall TitleInfoEventUIComponent___ctor(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
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
  System_Collections_Generic_List_object__o *v15; // x20
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Collections_Generic_List_object__o *v25; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  System_Collections_Generic_List_object__o *v35; // x20
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7

  if ( (byte_4B14CD3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent___ctor__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssetData___ctor__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoUIBase___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_TitleInfoEventUIPartsComponent__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_List_EventInfoUIBase__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_List_AssetData__TypeInfo, v13, v14);
    byte_4B14CD3 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_AssetData__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_AssetData___ctor__);
  this->fields.eventInfoAssetDataList = (struct System_Collections_Generic_List_AssetData__o *)v15;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.eventInfoAssetDataList,
    (int64_t)v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21);
  v25 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_EventInfoUIBase__TypeInfo,
                                                       v22,
                                                       v23,
                                                       v24);
  System_Collections_Generic_List_object____ctor(
    v25,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_EventInfoUIBase___ctor__);
  this->fields.eventUiPrefabList = (struct System_Collections_Generic_List_EventInfoUIBase__o *)v25;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.eventUiPrefabList, (int64_t)v25, v26, v27, v28, v29, v30, v31);
  v35 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_TitleInfoEventUIPartsComponent__TypeInfo,
                                                       v32,
                                                       v33,
                                                       v34);
  System_Collections_Generic_List_object____ctor(
    v35,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent___ctor__);
  this->fields.eventUIPartsList = (struct System_Collections_Generic_List_TitleInfoEventUIPartsComponent__o *)v35;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.eventUIPartsList, (int64_t)v35, v36, v37, v38, v39, v40, v41);
  TitleInfoEventInfoComponent___ctor((TitleInfoEventInfoComponent_o *)this, 0LL);
}


void __fastcall TitleInfoEventUIComponent__AfterRedisplay(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct System_Collections_Generic_List_EventInfoUIBase__o *eventUiPrefabList; // x0
  __int64 v13; // x1
  Il2CppObject *current; // x19
  _BOOL8 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B14CC1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    byte_4B14CC1 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  eventUiPrefabList = this->fields.eventUiPrefabList;
  if ( eventUiPrefabList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      (System_Collections_Generic_List_object__o *)eventUiPrefabList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
    {
      current = v17.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
      v15 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( !v15 )
      {
        if ( !current )
          sub_1BCAA3C(v15, v16);
        ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[11].method)(
          current,
          current->klass->vtable[12].methodPtr);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4B14CC2 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventUIComponent__AsyncSetup_d__15_TypeInfo, eventUIEntity, isMap);
    byte_4B14CC2 = 1;
  }
  v12 = isEventReward;
  v13 = sub_1BCAA2C(TitleInfoEventUIComponent__AsyncSetup_d__15_TypeInfo, eventUIEntity, isMap, isEventReward);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  *(_DWORD *)(v13 + 16) = 0;
  *(_QWORD *)(v13 + 48) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 48), (int64_t)this, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v13 + 32) = eventUIEntity;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 32), (int64_t)eventUIEntity, v20, v21, v22, v23, v24, v25);
  *(_BYTE *)(v13 + 40) = isMap;
  *(_BYTE *)(v13 + 41) = v12;
  *(_QWORD *)(v13 + 56) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v13 + 56), (int64_t)callback, v26, v27, v28, v29, v30, v31);
  return (System_Collections_IEnumerator_o *)v13;
}


System_String_o *__fastcall TitleInfoEventUIComponent__GetAssetName(
        EventUiEntity_o *eventUIEntity,
        const MethodInfo *method)
{
  __int64 v2; // x2
  EventUiEntity_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *v8; // x0
  Il2CppObject *v10; // x20
  Il2CppObject *v11; // x0
  int32_t warId; // [xsp+4h] [xbp-2Ch] BYREF
  int v13; // [xsp+8h] [xbp-28h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-24h] BYREF

  v3 = eventUIEntity;
  if ( (byte_4B14CD1 & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_6355/*"EventUI/Prefabs/{0}"*/, v4, v5);
    eventUIEntity = (EventUiEntity_o *)sub_1BCA7E0(&StringLiteral_6356/*"EventUI/Prefabs/{0}/{1}"*/, v6, v7);
    byte_4B14CD1 = 1;
  }
  if ( !v3 )
    sub_1BCAA3C(eventUIEntity, method);
  if ( v3->fields.eventId )
  {
    eventId = v3->fields.eventId;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId);
    return System_String__Format((System_String_o *)StringLiteral_6355/*"EventUI/Prefabs/{0}"*/, v8, 0LL);
  }
  else
  {
    v13 = 0;
    v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v13);
    warId = v3->fields.warId;
    v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &warId);
    return System_String__Format_62415592((System_String_o *)StringLiteral_6356/*"EventUI/Prefabs/{0}/{1}"*/, v10, v11, 0LL);
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

  if ( (byte_4B14CCE & 1) == 0 )
  {
    this = (TitleInfoEventUIComponent_o *)sub_1BCA7E0(&EventUiEntity_TypeInfo, entity, method);
    byte_4B14CCE = 1;
  }
  if ( !entity )
    sub_1BCAA3C(this, entity);
  x = entity->fields.x;
  v5 = EventUiEntity_TypeInfo;
  if ( !EventUiEntity_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(EventUiEntity_TypeInfo, entity);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *eventUiPrefabList; // x0
  __int64 v15; // x1
  bool v16; // w19
  Il2CppObject *current; // x20
  _BOOL8 v18; // x0
  __int64 v19; // x1
  int v20; // w20
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B14CD2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoUIBase__get_Count__, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    byte_4B14CD2 = 1;
  }
  memset(&v22, 0, sizeof(v22));
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v22,
        eventUiPrefabList,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
      while ( 1 )
      {
        v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v22,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__);
        if ( !v16 )
          break;
        current = v22.fields._current;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
        v18 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)current, 0LL, 0LL);
        if ( v18 )
        {
          if ( !current )
            sub_1BCAA3C(v18, v19);
          if ( (((__int64 (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[17].method)(
                  current,
                  current->klass->vtable[18].methodPtr) & 1) != 0 )
          {
            v20 = 6;
            goto LABEL_14;
          }
        }
      }
      v20 = 7;
LABEL_14:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v22,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
      LOBYTE(eventUiPrefabList) = v16 && v20 == 6;
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *eventUiPrefabList; // x0
  __int64 v13; // x1
  bool v14; // w20
  int v15; // w19
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B14CCB & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__,
      *(_QWORD *)&playType,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoUIBase__get_Count__, v10, v11);
    byte_4B14CCB = 1;
  }
  memset(&v17, 0, sizeof(v17));
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
        (System_Collections_Generic_List_Enumerator_T__o *)&v17,
        eventUiPrefabList,
        (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
      while ( 1 )
      {
        v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v17,
                (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__);
        if ( !v14 )
          break;
        if ( !v17.fields._current )
          sub_1BCAA3C(0LL, v13);
        if ( (((__int64 (*)(void))v17.fields._current->klass->vtable[7].method)() & 1) != 0 )
        {
          v15 = 5;
          goto LABEL_12;
        }
      }
      v15 = 2;
LABEL_12:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v17,
        (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
      LOBYTE(eventUiPrefabList) = v14 && v15 == 5;
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

  if ( (byte_4B14CC3 & 1) == 0 )
  {
    sub_1BCA7E0(&TitleInfoEventUIComponent__LoadAssetBundle_d__16_TypeInfo, eventUIEntity, callback);
    byte_4B14CC3 = 1;
  }
  v7 = sub_1BCAA2C(TitleInfoEventUIComponent__LoadAssetBundle_d__16_TypeInfo, eventUIEntity, callback, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = eventUIEntity;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)eventUIEntity, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 48) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)callback, v20, v21, v22, v23, v24, v25);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall TitleInfoEventUIComponent__OnDestroy(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Collections_Generic_List_EventInfoUIBase__o *eventUiPrefabList; // x8
  int32_t size; // w2
  int v6; // w9

  if ( (byte_4B14CD0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoUIBase__Clear__, method, v2);
    byte_4B14CD0 = 1;
  }
  eventUiPrefabList = this->fields.eventUiPrefabList;
  if ( eventUiPrefabList )
  {
    size = eventUiPrefabList->fields._size;
    v6 = eventUiPrefabList->fields._version + 1;
    eventUiPrefabList->fields._size = 0;
    eventUiPrefabList->fields._version = v6;
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
  __int64 v23; // x23
  struct System_Collections_Generic_List_EventInfoUIBase__o *v24; // x0
  __int64 v25; // x1
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  struct System_Collections_Generic_List_EventInfoUIBase__o *eventUiPrefabList; // x8
  int size; // w8
  System_Action_o *v37; // x22
  __int64 v38; // x1
  Il2CppObject *current; // x21
  _BOOL8 v40; // x0
  __int64 v41; // x1
  System_Collections_Generic_List_Enumerator_object__o v42; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v43; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4B14CCC & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&playType, callback);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoUIBase__get_Count__, v15, v16);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_TitleInfoEventUIComponent___c__DisplayClass27_0__PlayAnim_b__0__, v19, v20);
    sub_1BCA7E0(&TitleInfoEventUIComponent___c__DisplayClass27_0_TypeInfo, v21, v22);
    byte_4B14CCC = 1;
  }
  memset(&v43, 0, sizeof(v43));
  v23 = sub_1BCAA2C(TitleInfoEventUIComponent___c__DisplayClass27_0_TypeInfo, *(_QWORD *)&playType, callback, method);
  System_Object___ctor((Il2CppObject *)v23, 0LL);
  if ( !v23 )
    goto LABEL_17;
  *(_QWORD *)(v23 + 16) = callback;
  sub_1BCA784((PartyOrganizationUtility_o *)(v23 + 16), (int64_t)callback, v26, v27, v28, v29, v30, v31);
  eventUiPrefabList = this->fields.eventUiPrefabList;
  if ( !eventUiPrefabList || (size = eventUiPrefabList->fields._size, size < 1) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v23 + 16), 0LL);
    return;
  }
  *(_DWORD *)(v23 + 24) = size;
  v37 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v32, v33, v34);
  System_Action___ctor(
    v37,
    (Il2CppObject *)v23,
    Method_TitleInfoEventUIComponent___c__DisplayClass27_0__PlayAnim_b__0__,
    0LL);
  v24 = this->fields.eventUiPrefabList;
  if ( !v24 )
LABEL_17:
    sub_1BCAA3C(v24, v25);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v42,
    (System_Collections_Generic_List_object__o *)v24,
    (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
  v43 = v42;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v43,
            (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
  {
    current = v43.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v38);
    v40 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v40 )
    {
      ActionExtensions__Call(v37, 0LL);
    }
    else
    {
      if ( !current )
        sub_1BCAA3C(v40, v41);
      ((void (__fastcall *)(Il2CppObject *, _QWORD, System_Action_o *, Il2CppMethodPointer))current->klass->vtable[8].method)(
        current,
        (unsigned int)playType,
        v37,
        current->klass->vtable[9].methodPtr);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v43,
    (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
}


void __fastcall TitleInfoEventUIComponent__Redisplay(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct System_Collections_Generic_List_EventInfoUIBase__o *eventUiPrefabList; // x0
  __int64 v13; // x1
  Il2CppObject *current; // x19
  _BOOL8 v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B14CC0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    byte_4B14CC0 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  eventUiPrefabList = this->fields.eventUiPrefabList;
  if ( eventUiPrefabList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v17,
      (System_Collections_Generic_List_object__o *)eventUiPrefabList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v17,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
    {
      current = v17.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
      v15 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( !v15 )
      {
        if ( !current )
          sub_1BCAA3C(v15, v16);
        ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[10].method)(
          current,
          current->klass->vtable[11].methodPtr);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
  }
}


void __fastcall TitleInfoEventUIComponent__ReleaseAsset(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  struct System_Collections_Generic_List_AssetData__o *eventInfoAssetDataList; // x0
  __int64 v15; // x1
  Il2CppObject *current; // x20
  __int64 v17; // x0
  __int64 v18; // x1
  struct System_Collections_Generic_List_AssetData__o *v19; // x8
  int32_t size; // w2
  int v21; // w9
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B14CCF & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssetData__Clear__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__, v12, v13);
    byte_4B14CCF = 1;
  }
  memset(&v22, 0, sizeof(v22));
  eventInfoAssetDataList = this->fields.eventInfoAssetDataList;
  if ( eventInfoAssetDataList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      (System_Collections_Generic_List_object__o *)eventInfoAssetDataList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__) )
    {
      current = v22.fields._current;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v15);
      AssetManager__releaseAsset_38505704((AssetData_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    v19 = this->fields.eventInfoAssetDataList;
    if ( !v19 )
      sub_1BCAA3C(v17, v18);
    size = v19->fields._size;
    v21 = v19->fields._version + 1;
    v19->fields._size = 0;
    v19->fields._version = v21;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v19->fields._items, 0, size, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventUIComponent__SetActiveChildren(
        TitleInfoEventUIComponent_o *this,
        bool isActive,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  UnityEngine_Transform_o *transform; // x0
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_IEnumerator_o *Enumerator; // x19
  bool i; // w20
  System_Collections_IEnumerator_c *klass; // x8
  __int64 v15; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v18; // x8
  __int64 v19; // x9
  System_Collections_IEnumerator_c **v20; // x10
  __int64 v21; // x0
  UnityEngine_Component_o *v22; // x0
  __int64 v23; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v26; // x1
  __int64 v27; // x0
  __int64 v28; // x8
  __int64 v29; // x19
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0

  if ( (byte_4B14CC5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IDisposable_TypeInfo, isActive, method);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Transform_TypeInfo, v7, v8);
    byte_4B14CC5 = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1BCAA3C(0LL, v10);
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
  if ( !Enumerator )
    sub_1BCAA3C(0LL, v11);
  for ( i = isActive; ; UnityEngine_GameObject__SetActive(gameObject, i, 0LL) )
  {
    klass = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        p_offset += 4;
        if ( !v15 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v18 = Enumerator->klass;
    v19 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v20 = (System_Collections_IEnumerator_c **)&v18->_1.interfaceOffsets->offset;
      while ( *(v20 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v19;
        v20 += 2;
        if ( !v19 )
          goto LABEL_17;
      }
      v21 = (__int64)&v18->vtable[*(_DWORD *)v20 + 1].method;
    }
    else
    {
LABEL_17:
      v21 = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v22 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v21)(
                                       Enumerator,
                                       *(_QWORD *)(v21 + 8));
    if ( !v22 )
      goto LABEL_34;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v22->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v22->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1BCACFC(v22);
LABEL_34:
      sub_1BCAA3C(v22, v23);
    }
    gameObject = UnityEngine_Component__get_gameObject(v22, 0LL);
    if ( !gameObject )
      sub_1BCAA3C(0LL, v26);
  }
  v27 = sub_1BCA91C(Enumerator, System_IDisposable_TypeInfo);
  if ( v27 )
  {
    v28 = *(_QWORD *)v27;
    v29 = v27;
    v30 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
    {
      v31 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_29;
      }
      v32 = v28 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_29:
      v32 = sub_1C1C7C0(v27, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v32)(v29, *(_QWORD *)(v32 + 8));
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
      sub_1BCAA3C(0LL, v6);
    if ( EventUiEntity__IsDispArea(v10, 1, 0LL) )
      TitleInfoEventUIComponent__SwitchSpotState(this, spotId > 0, v11);
  }
}


void __fastcall TitleInfoEventUIComponent__SetGameObject(
        TitleInfoEventUIComponent_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x1
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
  const MethodInfo *v27; // x1
  System_String_o *AssetName; // x19
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  AssetLoader_LoadEndDataHandler_o *v32; // x20
  __int64 v33; // x1

  if ( (byte_4B14CC8 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, entity, method);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_TitleInfoEventUIComponent___c__DisplayClass23_0__SetGameObject_b__0__, v8, v9);
    sub_1BCA7E0(&TitleInfoEventUIComponent___c__DisplayClass23_0_TypeInfo, v10, v11);
    byte_4B14CC8 = 1;
  }
  v12 = sub_1BCAA2C(TitleInfoEventUIComponent___c__DisplayClass23_0_TypeInfo, entity, method, v3);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BCAA3C(v13, v14);
  *(_QWORD *)(v12 + 16) = entity;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 16), (int64_t)entity, v15, v16, v17, v18, v19, v20);
  *(_QWORD *)(v12 + 24) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v12 + 24), (int64_t)this, v21, v22, v23, v24, v25, v26);
  AssetName = TitleInfoEventUIComponent__GetAssetName(*(EventUiEntity_o **)(v12 + 16), v27);
  v32 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v29, v30, v31);
  AssetLoader_LoadEndDataHandler___ctor(
    v32,
    (Il2CppObject *)v12,
    Method_TitleInfoEventUIComponent___c__DisplayClass23_0__SetGameObject_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v33);
  AssetManager__loadAssetStorage(AssetName, v32, 1, 0LL);
}


void __fastcall TitleInfoEventUIComponent__SetImage(
        TitleInfoEventUIComponent_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  TitleInfoEventUIComponent_o *v4; // x20
  System_String_o *v5; // x0
  __int64 v6; // x1
  UISprite_o *imageSprite; // x22
  System_String_o *v8; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  TitleInfoEventUIComponent_o *v10; // x20
  const MethodInfo *v11; // x2
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4B14CC9 & 1) == 0 )
  {
    this = (TitleInfoEventUIComponent_o *)sub_1BCA7E0(&AtlasManager_TypeInfo, entity, method);
    byte_4B14CC9 = 1;
  }
  if ( !entity )
    goto LABEL_10;
  v5 = System_Int32__ToString((int)entity + 52, 0LL);
  imageSprite = v4->fields.imageSprite;
  v8 = v5;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v6);
  AtlasManager__SetEventUI(imageSprite, v8, 0LL);
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
    sub_1BCAA3C(this, entity);
  }
  v10 = (TitleInfoEventUIComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Position = TitleInfoEventUIComponent__GetPosition(v10, entity, v11);
  GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v10, Position, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventUIComponent__SetUIDisp(
        TitleInfoEventUIComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_object__o *eventUiPrefabList; // x0
  _BOOL4 v16; // w19
  __int64 v17; // x1
  Il2CppObject *current; // x20
  _BOOL8 v19; // x0
  __int64 v20; // x1
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B14CCD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__, isDisp, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoUIBase__get_Count__, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    byte_4B14CCD = 1;
  }
  memset(&v21, 0, sizeof(v21));
  eventUiPrefabList = (System_Collections_Generic_List_object__o *)this->fields.eventUiPrefabList;
  if ( eventUiPrefabList && eventUiPrefabList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v21,
      eventUiPrefabList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    v16 = isDisp;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v21,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
    {
      current = v21.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v17);
      v19 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( !v19 )
      {
        if ( !current )
          sub_1BCAA3C(v19, v20);
        ((void (__fastcall *)(Il2CppObject *, _BOOL4, Il2CppMethodPointer))current->klass->vtable[12].method)(
          current,
          v16,
          current->klass->vtable[13].methodPtr);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v21,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
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
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  struct System_Collections_Generic_List_EventInfoUIBase__o *eventUiPrefabList; // x0
  __int64 v18; // x1
  Il2CppObject *current; // x22
  _BOOL8 v20; // x0
  __int64 v21; // x1
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B14CCA & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__,
      *(_QWORD *)&valueType,
      val);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B14CCA = 1;
  }
  memset(&v22, 0, sizeof(v22));
  eventUiPrefabList = this->fields.eventUiPrefabList;
  if ( eventUiPrefabList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v22,
      (System_Collections_Generic_List_object__o *)eventUiPrefabList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
    {
      current = v22.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
      v20 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( !v20 )
      {
        if ( !current )
          sub_1BCAA3C(v20, v21);
        ((void (__fastcall *)(Il2CppObject *, _QWORD, Il2CppObject *, _QWORD, Il2CppMethodPointer))current->klass->vtable[6].method)(
          current,
          (unsigned int)valueType,
          val,
          (unsigned int)setType,
          current->klass->vtable[7].methodPtr);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall TitleInfoEventUIComponent__SwitchSpotState(
        TitleInfoEventUIComponent_o *this,
        bool isOpen,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_Collections_Generic_List_EventInfoUIBase__o *eventUiPrefabList; // x0
  _BOOL4 v14; // w19
  __int64 v15; // x1
  Il2CppObject *current; // x20
  _BOOL8 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B14CC6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__, isOpen, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    byte_4B14CC6 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  eventUiPrefabList = this->fields.eventUiPrefabList;
  if ( eventUiPrefabList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v19,
      (System_Collections_Generic_List_object__o *)eventUiPrefabList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    v14 = isOpen;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v19,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
    {
      current = v19.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
      v17 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( !v17 )
      {
        if ( !current )
          sub_1BCAA3C(v17, v18);
        ((void (__fastcall *)(Il2CppObject *, _BOOL4, Il2CppMethodPointer))current->klass->vtable[13].method)(
          current,
          v14,
          current->klass->vtable[14].methodPtr);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v19,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
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

  if ( (byte_4B14CC4 & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, entity, method);
    byte_4B14CC4 = 1;
  }
  imageSprite = (UnityEngine_Object_o *)this->fields.imageSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, entity);
  v6 = UnityEngine_Object__op_Equality(imageSprite, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !entity )
      sub_1BCAA3C(v6, v7);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *eventUIPartsList; // x0
  const MethodInfo *v13; // x1
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4B14CC7 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__Dispose__,
      method,
      v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__MoveNext__, v4, v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__get_Current__,
      v6,
      v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__GetEnumerator__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__get_Count__, v10, v11);
    byte_4B14CC7 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  eventUIPartsList = (System_Collections_Generic_List_object__o *)this->fields.eventUIPartsList;
  if ( eventUIPartsList && eventUIPartsList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v14,
      eventUIPartsList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v14,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__MoveNext__) )
    {
      if ( !v14.fields._current )
        sub_1BCAA3C(0LL, v13);
      TitleInfoEventUIPartsComponent__UpdateDisp((TitleInfoEventUIPartsComponent_o *)v14.fields._current, v13);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__Dispose__);
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
  sub_1BCA784(
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  int32_t _1__state; // w8
  struct TitleInfoEventUIComponent_o *_4__this; // x20
  __int64 v11; // x21
  __int64 v12; // x0
  int64_t v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct EventUiEntity_o *eventUIEntity; // x1
  struct TitleInfoEventUIComponent_o *v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  struct System_Action_o *callback; // x1
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  EventUiEntity_o *v41; // x22
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  System_Action_o *v45; // x23
  const MethodInfo *v46; // x3
  Il2CppObject *AssetBundle; // x0
  Il2CppObject **p__2__current; // x19
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  bool result; // w0

  if ( (byte_4B14CD7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_TitleInfoEventUIComponent___c__DisplayClass15_0__AsyncSetup_b__0__, v5, v6);
    sub_1BCA7E0(&TitleInfoEventUIComponent___c__DisplayClass15_0_TypeInfo, v7, v8);
    byte_4B14CD7 = 1;
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
      v11 = sub_1BCAA2C(TitleInfoEventUIComponent___c__DisplayClass15_0_TypeInfo, method, v2, v3);
      System_Object___ctor((Il2CppObject *)v11, 0LL);
      if ( !v11 )
        goto LABEL_11;
      eventUIEntity = this->fields.eventUIEntity;
      *(_QWORD *)(v11 + 16) = eventUIEntity;
      sub_1BCA784((PartyOrganizationUtility_o *)(v11 + 16), (int64_t)eventUIEntity, v14, v15, v16, v17, v18, v19);
      *(_BYTE *)(v11 + 24) = this->fields.isMap;
      *(_BYTE *)(v11 + 25) = this->fields.isEventReward;
      v21 = this->fields.__4__this;
      *(_QWORD *)(v11 + 32) = v21;
      sub_1BCA784((PartyOrganizationUtility_o *)(v11 + 32), (int64_t)v21, v22, v23, v24, v25, v26, v27);
      callback = this->fields.callback;
      *(_QWORD *)(v11 + 40) = callback;
      sub_1BCA784((PartyOrganizationUtility_o *)(v11 + 40), (int64_t)callback, v29, v30, v31, v32, v33, v34);
      v13 = *(_QWORD *)(v11 + 16);
      if ( v13 )
      {
        if ( _4__this )
        {
          _4__this->fields._eventUIEntity_k__BackingField = (struct EventUiEntity_o *)v13;
          sub_1BCA784(
            (PartyOrganizationUtility_o *)&_4__this->fields._eventUIEntity_k__BackingField,
            v13,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40);
          v41 = *(EventUiEntity_o **)(v11 + 16);
          v45 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v42, v43, v44);
          System_Action___ctor(
            v45,
            (Il2CppObject *)v11,
            Method_TitleInfoEventUIComponent___c__DisplayClass15_0__AsyncSetup_b__0__,
            0LL);
          AssetBundle = (Il2CppObject *)TitleInfoEventUIComponent__LoadAssetBundle(_4__this, v41, v45, v46);
          this->fields.__2__current = AssetBundle;
          p__2__current = &this->fields.__2__current;
          sub_1BCA784((PartyOrganizationUtility_o *)p__2__current, (int64_t)AssetBundle, v49, v50, v51, v52, v53, v54);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
LABEL_11:
        sub_1BCAA3C(v12, v13);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_TitleInfoEventUIComponent__AsyncSetup_d__15_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v3; // x3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  TitleInfoEventUIComponent__LoadAssetBundle_d__16_o *v8; // x19
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  int32_t _1__state; // w8
  Il2CppObject *v16; // x21
  Il2CppObject **p__8__1; // x20
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t _4__this; // x1
  System_String_o *AssetName; // x0
  Il2CppObject *v32; // x22
  System_String_o *v33; // x20
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  AssetLoader_LoadEndDataHandler_o *v37; // x21
  __int64 v38; // x1
  struct TitleInfoEventUIComponent___c__DisplayClass16_0_o *_8__1; // x8
  PartyOrganizationUtility_o *p__2__current; // x19
  bool result; // w0

  v8 = this;
  if ( (byte_4B14CD8 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&AssetLoader_LoadEndDataHandler_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_TitleInfoEventUIComponent___c__DisplayClass16_0__LoadAssetBundle_b__0__, v11, v12);
    this = (TitleInfoEventUIComponent__LoadAssetBundle_d__16_o *)sub_1BCA7E0(
                                                                   &TitleInfoEventUIComponent___c__DisplayClass16_0_TypeInfo,
                                                                   v13,
                                                                   v14);
    byte_4B14CD8 = 1;
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
    v16 = (Il2CppObject *)sub_1BCAA2C(TitleInfoEventUIComponent___c__DisplayClass16_0_TypeInfo, method, v2, v3);
    System_Object___ctor(v16, 0LL);
    v8->fields.__8__1 = (struct TitleInfoEventUIComponent___c__DisplayClass16_0_o *)v16;
    p__8__1 = (Il2CppObject **)&v8->fields.__8__1;
    sub_1BCA784((PartyOrganizationUtility_o *)&v8->fields.__8__1, (int64_t)v16, v18, v19, v20, v21, v22, v23);
    this = (TitleInfoEventUIComponent__LoadAssetBundle_d__16_o *)v8->fields.__8__1;
    if ( !this )
      goto LABEL_17;
    _4__this = (int64_t)v8->fields.__4__this;
    *(_QWORD *)&this->fields.__1__state = _4__this;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, _4__this, v24, v25, v26, v27, v28, v29);
    this = (TitleInfoEventUIComponent__LoadAssetBundle_d__16_o *)v8->fields.eventUIEntity;
    if ( !this )
    {
LABEL_15:
      ActionExtensions__Call(v8->fields.callback, 0LL);
      return 0;
    }
    if ( !*p__8__1 )
LABEL_17:
      sub_1BCAA3C(this, method);
    LOBYTE((*p__8__1)[1].monitor) = 0;
    AssetName = TitleInfoEventUIComponent__GetAssetName((EventUiEntity_o *)this, method);
    v32 = *p__8__1;
    v33 = AssetName;
    v37 = (AssetLoader_LoadEndDataHandler_o *)sub_1BCAA2C(AssetLoader_LoadEndDataHandler_TypeInfo, v34, v35, v36);
    AssetLoader_LoadEndDataHandler___ctor(
      v37,
      v32,
      Method_TitleInfoEventUIComponent___c__DisplayClass16_0__LoadAssetBundle_b__0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v38);
    this = (TitleInfoEventUIComponent__LoadAssetBundle_d__16_o *)AssetManager__loadAssetStorage(v33, v37, 1, 0LL);
    v8->fields._isAssetFound_5__2 = (unsigned __int8)this & 1;
LABEL_12:
    _8__1 = v8->fields.__8__1;
    if ( _8__1 )
    {
      if ( (v8->fields._isAssetFound_5__2 & (_8__1->fields.isAssetLoaded ^ 0xFF)) != 0 )
      {
        v8->fields.__2__current = 0LL;
        p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
        sub_1BCA784(p__2__current, 0LL, v2, v3, v4, v5, v6, v7);
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_TitleInfoEventUIComponent__LoadAssetBundle_d__16_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  EventUiEntity_o *eventUIEntity; // x0
  const MethodInfo *v7; // x2
  struct TitleInfoEventUIComponent_o *_4__this; // x8
  const MethodInfo *v9; // x2

  if ( (byte_4B14CD4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_GetComponentsInChildren_TitleInfoEventUIPartsComponent___, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__AddRange__, v4, v5);
    byte_4B14CD4 = 1;
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
      v7);
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
                                       (const MethodInfo_2F0A220 *)Method_UnityEngine_Component_GetComponentsInChildren_TitleInfoEventUIPartsComponent___);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (method = (const MethodInfo *)eventUIEntity,
        (eventUIEntity = (EventUiEntity_o *)_4__this->fields.eventUIPartsList) == 0LL)
    || (System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)eventUIEntity,
          (System_Collections_Generic_IEnumerable_T__o *)method,
          (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__AddRange__),
        (eventUIEntity = (EventUiEntity_o *)this->fields.__4__this) == 0LL)
    || (TitleInfoEventUIComponent__UpdatePartsDisp((TitleInfoEventUIComponent_o *)eventUIEntity, method),
        (eventUIEntity = this->fields.eventUIEntity) == 0LL) )
  {
LABEL_23:
    sub_1BCAA3C(eventUIEntity, method);
  }
  if ( EventUiEntity__IsDispArea(eventUIEntity, 8, 0LL) )
  {
    eventUIEntity = (EventUiEntity_o *)this->fields.__4__this;
    if ( eventUIEntity )
    {
      TitleInfoEventUIComponent__SetActiveChildren((TitleInfoEventUIComponent_o *)eventUIEntity, 0, v9);
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
  __int64 v6; // x2
  struct TitleInfoEventUIComponent_o *_4__this; // x8
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  struct TitleInfoEventUIComponent_o *v14; // x8
  struct TitleInfoEventUIComponent_o *v15; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  TitleInfoEventUIComponent_c **v18; // x8

  v4 = this;
  if ( (byte_4B14CD5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_AssetData__Add__, asset, method);
    this = (TitleInfoEventUIComponent___c__DisplayClass16_0_o *)sub_1BCA7E0(
                                                                  &Method_System_Collections_Generic_List_AssetData__Contains__,
                                                                  v5,
                                                                  v6);
    byte_4B14CD5 = 1;
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
                                                                (const MethodInfo_35A1FEC *)Method_System_Collections_Generic_List_AssetData__Contains__);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_12;
  v14 = v4->fields.__4__this;
  if ( !v14
    || (this = (TitleInfoEventUIComponent___c__DisplayClass16_0_o *)v14->fields.eventInfoAssetDataList) == 0LL
    || (v15 = this->fields.__4__this,
        v16 = Method_System_Collections_Generic_List_AssetData__Add__,
        ++*((_DWORD *)&this->fields.isAssetLoaded + 1),
        !v15) )
  {
LABEL_13:
    sub_1BCAA3C(this, asset);
  }
  v17 = *(int *)&this->fields.isAssetLoaded;
  if ( (unsigned int)v17 >= LODWORD(v15->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)asset,
      *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
  }
  else
  {
    v18 = &v15->klass + v17;
    *(_DWORD *)&this->fields.isAssetLoaded = v17 + 1;
    v18[4] = (TitleInfoEventUIComponent_c *)asset;
    sub_1BCA784((PartyOrganizationUtility_o *)(v18 + 4), (int64_t)asset, v8, v9, v10, v11, v12, v13);
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  struct EventUiEntity_o *entity; // x8
  __int64 v16; // x1
  UnityEngine_Object_o *Object_38483832; // x20
  __int64 v18; // x1
  UnityEngine_Object_o *v19; // x0
  UnityEngine_GameObject_o *v20; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v22; // x2
  struct EventUiEntity_o *v23; // x8
  __int64 v24; // x1
  Il2CppObject *Component_object; // x20
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  struct TitleInfoEventUIComponent_o *_4__this; // x8
  struct EventUiEntity_o *v33; // x8
  _QWORD *v34; // x9
  __int64 _4__this_low; // x10
  EventUiEntity_c **v36; // x8
  struct EventUiEntity_o *v37; // x8
  EventUiValueEntity_array *List; // x0
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4B14CD6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventUiValueMaster___, prefabData, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_EventInfoUIBase___, v5, v6);
    sub_1BCA7E0(&UnityEngine_GameObject_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_EventInfoUIBase__Add__, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    this = (TitleInfoEventUIComponent___c__DisplayClass23_0_o *)sub_1BCA7E0(
                                                                  &Method_SingletonMonoBehaviour_DataManager__get_Instance__,
                                                                  v13,
                                                                  v14);
    byte_4B14CD6 = 1;
  }
  entity = v4->fields.entity;
  if ( !entity )
    goto LABEL_35;
  this = (TitleInfoEventUIComponent___c__DisplayClass23_0_o *)System_Int32__ToString((int)entity + 52, 0LL);
  if ( !prefabData )
    goto LABEL_35;
  Object_38483832 = AssetData__GetObject_38483832(prefabData, (System_String_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  if ( UnityEngine_Object__op_Inequality(Object_38483832, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    v19 = UnityEngine_Object__Instantiate_70153448(Object_38483832, 0LL);
    if ( v19 )
      v20 = (UnityEngine_GameObject_c *)v19->klass == UnityEngine_GameObject_TypeInfo
          ? (UnityEngine_GameObject_o *)v19
          : 0LL;
    else
      v20 = 0LL;
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0LL, 0LL) )
    {
      this = (TitleInfoEventUIComponent___c__DisplayClass23_0_o *)v4->fields.__4__this;
      if ( !this )
        goto LABEL_35;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SafeSetParent_34336992(v20, gameObject, 0LL);
      GameObjectExtensions__ResetLocalScale(v20, 0LL);
      if ( !v4->fields.__4__this )
        goto LABEL_35;
      Position = TitleInfoEventUIComponent__GetPosition((TitleInfoEventUIComponent_o *)this, v4->fields.entity, v22);
      GameObjectExtensions__SetLocalPosition(v20, Position, 0LL);
      v23 = v4->fields.entity;
      if ( !v23 )
        goto LABEL_35;
      this = (TitleInfoEventUIComponent___c__DisplayClass23_0_o *)System_Int32__ToString((int)v23 + 16, 0LL);
      if ( !v20 )
        goto LABEL_35;
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v20, (System_String_o *)this, 0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v20,
                           (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_EventInfoUIBase___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
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
        v33 = this->fields.entity;
        v34 = Method_System_Collections_Generic_List_EventInfoUIBase__Add__;
        ++HIDWORD(this->fields.__4__this);
        if ( !v33 )
          goto LABEL_35;
        _4__this_low = SLODWORD(this->fields.__4__this);
        if ( (unsigned int)_4__this_low >= v33->fields.eventId )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            Component_object,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
        }
        else
        {
          v36 = &v33->klass + _4__this_low;
          LODWORD(this->fields.__4__this) = _4__this_low + 1;
          v36[4] = (EventUiEntity_c *)Component_object;
          sub_1BCA784((PartyOrganizationUtility_o *)(v36 + 4), (int64_t)Component_object, v26, v27, v28, v29, v30, v31);
        }
        this = (TitleInfoEventUIComponent___c__DisplayClass23_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_35;
        this = (TitleInfoEventUIComponent___c__DisplayClass23_0_o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)this,
                                                                      (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventUiValueMaster___);
        if ( this )
        {
          v37 = v4->fields.entity;
          if ( v37 )
          {
            List = EventUiValueMaster__getList((EventUiValueMaster_o *)this, v37->fields.objectId, 0LL);
            ((void (__fastcall *)(Il2CppObject *, EventUiValueEntity_array *, Il2CppMethodPointer))Component_object->klass->vtable[5].method)(
              Component_object,
              List,
              Component_object->klass->vtable[6].methodPtr);
            return;
          }
LABEL_35:
          sub_1BCAA3C(this, prefabData);
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