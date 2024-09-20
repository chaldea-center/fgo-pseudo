void __fastcall TitleInfoEventUIComponent___ctor(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A59C79 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_AssetData___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoUIBase___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_TitleInfoEventUIPartsComponent__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_EventInfoUIBase__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_AssetData__TypeInfo);
    byte_4A59C79 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_AssetData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_AssetData___ctor__);
  this->fields.eventInfoAssetDataList = (struct System_Collections_Generic_List_AssetData__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventInfoAssetDataList, (int32_t)v3, v4, v5);
  v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_EventInfoUIBase__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_EventInfoUIBase___ctor__);
  this->fields.eventUiPrefabList = (struct System_Collections_Generic_List_EventInfoUIBase__o *)v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventUiPrefabList, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_TitleInfoEventUIPartsComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent___ctor__);
  this->fields.eventUIPartsList = (struct System_Collections_Generic_List_TitleInfoEventUIPartsComponent__o *)v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.eventUIPartsList, (int32_t)v9, v10, v11);
  TitleInfoEventInfoComponent___ctor((TitleInfoEventInfoComponent_o *)this, 0LL);
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
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_4A59C69 & 1) == 0 )
  {
    sub_1B885B0(&TitleInfoEventUIComponent__AsyncSetup_d__14_TypeInfo);
    byte_4A59C69 = 1;
  }
  v12 = isEventReward;
  v13 = sub_1B887FC(TitleInfoEventUIComponent__AsyncSetup_d__14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v13, 0LL);
  *(_DWORD *)(v13 + 16) = 0;
  *(_QWORD *)(v13 + 48) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 48), (int32_t)this, v14, v15);
  *(_QWORD *)(v13 + 32) = eventUIEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 32), (int32_t)eventUIEntity, v16, v17);
  *(_BYTE *)(v13 + 40) = isMap;
  *(_BYTE *)(v13 + 41) = v12;
  *(_QWORD *)(v13 + 56) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 56), (int32_t)callback, v18, v19);
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
  Il2CppObject *v6; // x0
  Il2CppObject *v8; // x20
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  Il2CppObject *v12; // x0
  int32_t warId; // [xsp+4h] [xbp-2Ch] BYREF
  int v14; // [xsp+8h] [xbp-28h] BYREF
  int32_t eventId; // [xsp+Ch] [xbp-24h] BYREF

  v5 = eventUIEntity;
  if ( (byte_4A59C78 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_6234/*"EventUI/Prefabs/{0}"*/);
    eventUIEntity = (EventUiEntity_o *)sub_1B885B0(&StringLiteral_6235/*"EventUI/Prefabs/{0}/{1}"*/);
    byte_4A59C78 = 1;
  }
  if ( !v5 )
    sub_1B8880C(eventUIEntity, method);
  if ( v5->fields.eventId )
  {
    eventId = v5->fields.eventId;
    v6 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &eventId, v2, v3, v4);
    return System_String__Format((System_String_o *)StringLiteral_6234/*"EventUI/Prefabs/{0}"*/, v6, 0LL);
  }
  else
  {
    v14 = 0;
    v8 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v2, v3, v4);
    warId = v5->fields.warId;
    v12 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &warId, v9, v10, v11);
    return System_String__Format_61721404((System_String_o *)StringLiteral_6235/*"EventUI/Prefabs/{0}/{1}"*/, v8, v12, 0LL);
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

  if ( (byte_4A59C75 & 1) == 0 )
  {
    this = (TitleInfoEventUIComponent_o *)sub_1B885B0(&EventUiEntity_TypeInfo);
    byte_4A59C75 = 1;
  }
  if ( !entity )
    sub_1B8880C(this, entity);
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


bool __fastcall TitleInfoEventUIComponent__IsPlayAnim(
        TitleInfoEventUIComponent_o *this,
        int32_t playType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *eventUiPrefabList; // x0
  __int64 v5; // x1
  bool v6; // w20
  int v7; // w19
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A59C72 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoUIBase__get_Count__);
    byte_4A59C72 = 1;
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
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
      while ( 1 )
      {
        v6 = System_Collections_Generic_List_Enumerator_object___MoveNext(
               &v9,
               (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__);
        if ( !v6 )
          break;
        if ( !v9.fields._current )
          sub_1B8880C(0LL, v5);
        if ( (((__int64 (*)(void))v9.fields._current->klass->vtable[7].method)() & 1) != 0 )
        {
          v7 = 5;
          goto LABEL_12;
        }
      }
      v7 = 2;
LABEL_12:
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v9,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
      LOBYTE(eventUiPrefabList) = v6 && v7 == 5;
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
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_4A59C6A & 1) == 0 )
  {
    sub_1B885B0(&TitleInfoEventUIComponent__LoadAssetBundle_d__15_TypeInfo);
    byte_4A59C6A = 1;
  }
  v7 = sub_1B887FC(TitleInfoEventUIComponent__LoadAssetBundle_d__15_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 40) = eventUIEntity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)eventUIEntity, v10, v11);
  *(_QWORD *)(v7 + 48) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)callback, v12, v13);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall TitleInfoEventUIComponent__OnDestroy(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventInfoUIBase__o *eventUiPrefabList; // x8
  int32_t size; // w2
  int v5; // w9

  if ( (byte_4A59C77 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoUIBase__Clear__);
    byte_4A59C77 = 1;
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


void __fastcall TitleInfoEventUIComponent__PlayAnim(
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
  struct System_Collections_Generic_List_EventInfoUIBase__o *eventUiPrefabList; // x8
  int size; // w8
  System_Action_o *v14; // x22
  Il2CppObject *current; // x21
  _BOOL8 v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_List_Enumerator_object__o v18; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4A59C73 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoUIBase__get_Count__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_TitleInfoEventUIComponent___c__DisplayClass26_0__PlayAnim_b__0__);
    sub_1B885B0(&TitleInfoEventUIComponent___c__DisplayClass26_0_TypeInfo);
    byte_4A59C73 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v7 = sub_1B887FC(TitleInfoEventUIComponent___c__DisplayClass26_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_17;
  *(_QWORD *)(v7 + 16) = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)callback, v10, v11);
  eventUiPrefabList = this->fields.eventUiPrefabList;
  if ( !eventUiPrefabList || (size = eventUiPrefabList->fields._size, size < 1) )
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 16), 0LL);
    return;
  }
  *(_DWORD *)(v7 + 24) = size;
  v14 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v7,
    Method_TitleInfoEventUIComponent___c__DisplayClass26_0__PlayAnim_b__0__,
    0LL);
  v8 = this->fields.eventUiPrefabList;
  if ( !v8 )
LABEL_17:
    sub_1B8880C(v8, v9);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v18,
    (System_Collections_Generic_List_object__o *)v8,
    (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
  v19 = v18;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
  {
    current = v19.fields._current;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v16 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
    if ( v16 )
    {
      ActionExtensions__Call(v14, 0LL);
    }
    else
    {
      if ( !current )
        sub_1B8880C(v16, v17);
      ((void (__fastcall *)(Il2CppObject *, _QWORD, System_Action_o *, Il2CppMethodPointer))current->klass->vtable[8].method)(
        current,
        (unsigned int)playType,
        v14,
        current->klass->vtable[9].methodPtr);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
}


void __fastcall TitleInfoEventUIComponent__Redisplay(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_EventInfoUIBase__o *eventUiPrefabList; // x0
  Il2CppObject *current; // x19
  _BOOL8 v5; // x0
  __int64 v6; // x1
  System_Collections_Generic_List_Enumerator_object__o v7; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A59C68 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59C68 = 1;
  }
  memset(&v7, 0, sizeof(v7));
  eventUiPrefabList = this->fields.eventUiPrefabList;
  if ( eventUiPrefabList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v7,
      (System_Collections_Generic_List_object__o *)eventUiPrefabList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v7,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
    {
      current = v7.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v5 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( !v5 )
      {
        if ( !current )
          sub_1B8880C(v5, v6);
        ((void (__fastcall *)(Il2CppObject *, Il2CppMethodPointer))current->klass->vtable[10].method)(
          current,
          current->klass->vtable[11].methodPtr);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v7,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
  }
}


void __fastcall TitleInfoEventUIComponent__ReleaseAsset(TitleInfoEventUIComponent_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_List_AssetData__o *eventInfoAssetDataList; // x0
  Il2CppObject *current; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  struct System_Collections_Generic_List_AssetData__o *v7; // x8
  int32_t size; // w2
  int v9; // w9
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A59C76 & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_AssetData__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_AssetData__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    byte_4A59C76 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  eventInfoAssetDataList = this->fields.eventInfoAssetDataList;
  if ( eventInfoAssetDataList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      (System_Collections_Generic_List_object__o *)eventInfoAssetDataList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_AssetData__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_AssetData__MoveNext__) )
    {
      current = v10.fields._current;
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      AssetManager__releaseAsset_37790656((AssetData_o *)current, 0LL);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_AssetData__Dispose__);
    v7 = this->fields.eventInfoAssetDataList;
    if ( !v7 )
      sub_1B8880C(v5, v6);
    size = v7->fields._size;
    v9 = v7->fields._version + 1;
    v7->fields._size = 0;
    v7->fields._version = v9;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v7->fields._items, 0, size, 0LL);
  }
}


void __fastcall TitleInfoEventUIComponent__SetActiveChildren(
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
  __int64 p_method; // x0
  System_Collections_IEnumerator_c *v14; // x8
  __int64 v15; // x9
  System_Collections_IEnumerator_c **v16; // x10
  __int64 v17; // x0
  UnityEngine_Component_o *v18; // x0
  __int64 v19; // x1
  __int64 methodPtr_low; // x9
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  __int64 v23; // x0
  __int64 v24; // x8
  __int64 v25; // x19
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0

  if ( (byte_4A59C6C & 1) == 0 )
  {
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&UnityEngine_Transform_TypeInfo);
    byte_4A59C6C = 1;
  }
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !transform )
    sub_1B8880C(0LL, v6);
  Enumerator = UnityEngine_Transform__GetEnumerator(transform, 0LL);
  if ( !Enumerator )
    sub_1B8880C(0LL, v7);
  for ( i = isActive; ; UnityEngine_GameObject__SetActive(gameObject, i, 0LL) )
  {
    klass = Enumerator->klass;
    v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_10;
      }
      p_method = (__int64)&klass->vtable[*p_offset].method;
    }
    else
    {
LABEL_10:
      p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))p_method)(
            Enumerator,
            *(_QWORD *)(p_method + 8)) & 1) == 0 )
      break;
    v14 = Enumerator->klass;
    v15 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v16 = (System_Collections_IEnumerator_c **)&v14->_1.interfaceOffsets->offset;
      while ( *(v16 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v15;
        v16 += 2;
        if ( !v15 )
          goto LABEL_17;
      }
      v17 = (__int64)&v14->vtable[*(_DWORD *)v16 + 1].method;
    }
    else
    {
LABEL_17:
      v17 = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 1LL);
    }
    v18 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(System_Collections_IEnumerator_o *, _QWORD))v17)(
                                       Enumerator,
                                       *(_QWORD *)(v17 + 8));
    if ( !v18 )
      goto LABEL_34;
    methodPtr_low = LOBYTE(UnityEngine_Transform_TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(v18->klass->vtable._0_Equals.methodPtr) < (unsigned int)methodPtr_low
      || (UnityEngine_Transform_c *)v18->klass->_2.typeHierarchy[methodPtr_low - 1] != UnityEngine_Transform_TypeInfo )
    {
      sub_1B88ACC(v18);
LABEL_34:
      sub_1B8880C(v18, v19);
    }
    gameObject = UnityEngine_Component__get_gameObject(v18, 0LL);
    if ( !gameObject )
      sub_1B8880C(0LL, v22);
  }
  v23 = sub_1B886EC(Enumerator, System_IDisposable_TypeInfo);
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
      v28 = sub_1BDA590(v23, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v28)(v25, *(_QWORD *)(v28 + 8));
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
      sub_1B8880C(0LL, v6);
    if ( EventUiEntity__IsDispArea(v10, 1, 0LL) )
      TitleInfoEventUIComponent__SwitchSpotState(this, spotId > 0, v11);
  }
}


void __fastcall TitleInfoEventUIComponent__SetGameObject(
        TitleInfoEventUIComponent_o *this,
        EventUiEntity_o *entity,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  const MethodInfo *v12; // x1
  System_String_o *AssetName; // x19
  AssetLoader_LoadEndDataHandler_o *v14; // x20

  if ( (byte_4A59C6F & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_TitleInfoEventUIComponent___c__DisplayClass22_0__SetGameObject_b__0__);
    sub_1B885B0(&TitleInfoEventUIComponent___c__DisplayClass22_0_TypeInfo);
    byte_4A59C6F = 1;
  }
  v5 = sub_1B887FC(TitleInfoEventUIComponent___c__DisplayClass22_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5 )
    sub_1B8880C(v6, v7);
  *(_QWORD *)(v5 + 16) = entity;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)entity, v8, v9);
  *(_QWORD *)(v5 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)this, v10, v11);
  AssetName = TitleInfoEventUIComponent__GetAssetName(*(EventUiEntity_o **)(v5 + 16), v12);
  v14 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v14,
    (Il2CppObject *)v5,
    Method_TitleInfoEventUIComponent___c__DisplayClass22_0__SetGameObject_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(AssetName, v14, 1, 0LL);
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
  if ( (byte_4A59C70 & 1) == 0 )
  {
    this = (TitleInfoEventUIComponent_o *)sub_1B885B0(&AtlasManager_TypeInfo);
    byte_4A59C70 = 1;
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
    sub_1B8880C(this, entity);
  }
  v9 = (TitleInfoEventUIComponent_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Position = TitleInfoEventUIComponent__GetPosition(v9, entity, v10);
  GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v9, Position, 0LL);
}


void __fastcall TitleInfoEventUIComponent__SetUIDisp(
        TitleInfoEventUIComponent_o *this,
        bool isDisp,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *eventUiPrefabList; // x0
  _BOOL4 v6; // w19
  Il2CppObject *current; // x20
  _BOOL8 v8; // x0
  __int64 v9; // x1
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A59C74 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoUIBase__get_Count__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59C74 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  eventUiPrefabList = (System_Collections_Generic_List_object__o *)this->fields.eventUiPrefabList;
  if ( eventUiPrefabList && eventUiPrefabList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      eventUiPrefabList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    v6 = isDisp;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
    {
      current = v10.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( !v8 )
      {
        if ( !current )
          sub_1B8880C(v8, v9);
        ((void (__fastcall *)(Il2CppObject *, _BOOL4, Il2CppMethodPointer))current->klass->vtable[11].method)(
          current,
          v6,
          current->klass->vtable[12].methodPtr);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
  }
}


void __fastcall TitleInfoEventUIComponent__SetValue(
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

  if ( (byte_4A59C71 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59C71 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  eventUiPrefabList = this->fields.eventUiPrefabList;
  if ( eventUiPrefabList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      (System_Collections_Generic_List_object__o *)eventUiPrefabList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v13,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
    {
      current = v13.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v11 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( !v11 )
      {
        if ( !current )
          sub_1B8880C(v11, v12);
        ((void (__fastcall *)(Il2CppObject *, _QWORD, Il2CppObject *, _QWORD, Il2CppMethodPointer))current->klass->vtable[6].method)(
          current,
          (unsigned int)valueType,
          val,
          (unsigned int)setType,
          current->klass->vtable[7].methodPtr);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v13,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
  }
}


void __fastcall TitleInfoEventUIComponent__SwitchSpotState(
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

  if ( (byte_4A59C6D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59C6D = 1;
  }
  memset(&v10, 0, sizeof(v10));
  eventUiPrefabList = this->fields.eventUiPrefabList;
  if ( eventUiPrefabList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v10,
      (System_Collections_Generic_List_object__o *)eventUiPrefabList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_EventInfoUIBase__GetEnumerator__);
    v6 = isOpen;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v10,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__MoveNext__) )
    {
      current = v10.fields._current;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v8 = UnityEngine_Object__op_Equality((UnityEngine_Object_o *)current, 0LL, 0LL);
      if ( !v8 )
      {
        if ( !current )
          sub_1B8880C(v8, v9);
        ((void (__fastcall *)(Il2CppObject *, _BOOL4, Il2CppMethodPointer))current->klass->vtable[12].method)(
          current,
          v6,
          current->klass->vtable[13].methodPtr);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v10,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_EventInfoUIBase__Dispose__);
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

  if ( (byte_4A59C6B & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A59C6B = 1;
  }
  imageSprite = (UnityEngine_Object_o *)this->fields.imageSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v6 = UnityEngine_Object__op_Equality(imageSprite, 0LL, 0LL);
  if ( !v6 )
  {
    if ( !entity )
      sub_1B8880C(v6, v7);
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
  System_Collections_Generic_List_object__o *eventUIPartsList; // x0
  const MethodInfo *v4; // x1
  System_Collections_Generic_List_Enumerator_object__o v5; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4A59C6E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__get_Count__);
    byte_4A59C6E = 1;
  }
  memset(&v5, 0, sizeof(v5));
  eventUIPartsList = (System_Collections_Generic_List_object__o *)this->fields.eventUIPartsList;
  if ( eventUIPartsList && eventUIPartsList->fields._size >= 1 )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v5,
      eventUIPartsList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v5,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__MoveNext__) )
    {
      if ( !v5.fields._current )
        sub_1B8880C(0LL, v4);
      TitleInfoEventUIPartsComponent__UpdateDisp((TitleInfoEventUIPartsComponent_o *)v5.fields._current, v4);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v5,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_TitleInfoEventUIPartsComponent__Dispose__);
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

  this->fields._eventUIEntity_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._eventUIEntity_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall TitleInfoEventUIComponent__AsyncSetup_d__14___ctor(
        TitleInfoEventUIComponent__AsyncSetup_d__14_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TitleInfoEventUIComponent__AsyncSetup_d__14__MoveNext(
        TitleInfoEventUIComponent__AsyncSetup_d__14_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct TitleInfoEventUIComponent_o *_4__this; // x20
  __int64 v5; // x21
  __int64 v6; // x0
  struct EventUiEntity_o *v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  struct EventUiEntity_o *eventUIEntity; // x1
  struct TitleInfoEventUIComponent_o *v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  struct System_Action_o *callback; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  EventUiEntity_o *v19; // x22
  System_Action_o *v20; // x23
  const MethodInfo *v21; // x3
  Il2CppObject *AssetBundle; // x0
  Il2CppObject **p__2__current; // x19
  int32_t v24; // w2
  int32_t v25; // w3
  bool result; // w0

  if ( (byte_4A59C7D & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_TitleInfoEventUIComponent___c__DisplayClass14_0__AsyncSetup_b__0__);
    sub_1B885B0(&TitleInfoEventUIComponent___c__DisplayClass14_0_TypeInfo);
    byte_4A59C7D = 1;
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
      v5 = sub_1B887FC(TitleInfoEventUIComponent___c__DisplayClass14_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v5, 0LL);
      if ( !v5 )
        goto LABEL_11;
      eventUIEntity = this->fields.eventUIEntity;
      *(_QWORD *)(v5 + 16) = eventUIEntity;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)eventUIEntity, v8, v9);
      *(_BYTE *)(v5 + 24) = this->fields.isMap;
      *(_BYTE *)(v5 + 25) = this->fields.isEventReward;
      v11 = this->fields.__4__this;
      *(_QWORD *)(v5 + 32) = v11;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 32), (int32_t)v11, v12, v13);
      callback = this->fields.callback;
      *(_QWORD *)(v5 + 40) = callback;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)callback, v15, v16);
      v7 = *(struct EventUiEntity_o **)(v5 + 16);
      if ( v7 )
      {
        if ( _4__this )
        {
          _4__this->fields._eventUIEntity_k__BackingField = v7;
          sub_1B88554(
            (ServantStatusBattleListViewItem_o *)&_4__this->fields._eventUIEntity_k__BackingField,
            (int32_t)v7,
            v17,
            v18);
          v19 = *(EventUiEntity_o **)(v5 + 16);
          v20 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
          System_Action___ctor(
            v20,
            (Il2CppObject *)v5,
            Method_TitleInfoEventUIComponent___c__DisplayClass14_0__AsyncSetup_b__0__,
            0LL);
          AssetBundle = (Il2CppObject *)TitleInfoEventUIComponent__LoadAssetBundle(_4__this, v19, v20, v21);
          this->fields.__2__current = AssetBundle;
          p__2__current = &this->fields.__2__current;
          sub_1B88554((ServantStatusBattleListViewItem_o *)p__2__current, (int32_t)AssetBundle, v24, v25);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
LABEL_11:
        sub_1B8880C(v6, v7);
      }
    }
    return 0;
  }
  return result;
}


Il2CppObject *__fastcall TitleInfoEventUIComponent__AsyncSetup_d__14__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TitleInfoEventUIComponent__AsyncSetup_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TitleInfoEventUIComponent__AsyncSetup_d__14__System_Collections_IEnumerator_Reset(
        TitleInfoEventUIComponent__AsyncSetup_d__14_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_TitleInfoEventUIComponent__AsyncSetup_d__14_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall TitleInfoEventUIComponent__AsyncSetup_d__14__System_Collections_IEnumerator_get_Current(
        TitleInfoEventUIComponent__AsyncSetup_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TitleInfoEventUIComponent__AsyncSetup_d__14__System_IDisposable_Dispose(
        TitleInfoEventUIComponent__AsyncSetup_d__14_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoEventUIComponent__LoadAssetBundle_d__15___ctor(
        TitleInfoEventUIComponent__LoadAssetBundle_d__15_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall TitleInfoEventUIComponent__LoadAssetBundle_d__15__MoveNext(
        TitleInfoEventUIComponent__LoadAssetBundle_d__15_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  TitleInfoEventUIComponent__LoadAssetBundle_d__15_o *v4; // x19
  int32_t _1__state; // w8
  Il2CppObject *v6; // x21
  Il2CppObject **p__8__1; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  struct TitleInfoEventUIComponent_o *_4__this; // x1
  System_String_o *AssetName; // x0
  Il2CppObject *v14; // x22
  System_String_o *v15; // x20
  AssetLoader_LoadEndDataHandler_o *v16; // x21
  struct TitleInfoEventUIComponent___c__DisplayClass15_0_o *_8__1; // x8
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0

  v4 = this;
  if ( (byte_4A59C7E & 1) == 0 )
  {
    sub_1B885B0(&AssetManager_TypeInfo);
    sub_1B885B0(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1B885B0(&Method_TitleInfoEventUIComponent___c__DisplayClass15_0__LoadAssetBundle_b__0__);
    this = (TitleInfoEventUIComponent__LoadAssetBundle_d__15_o *)sub_1B885B0(&TitleInfoEventUIComponent___c__DisplayClass15_0_TypeInfo);
    byte_4A59C7E = 1;
  }
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    goto LABEL_12;
  }
  if ( !_1__state )
  {
    v4->fields.__1__state = -1;
    v6 = (Il2CppObject *)sub_1B887FC(TitleInfoEventUIComponent___c__DisplayClass15_0_TypeInfo);
    System_Object___ctor(v6, 0LL);
    v4->fields.__8__1 = (struct TitleInfoEventUIComponent___c__DisplayClass15_0_o *)v6;
    p__8__1 = (Il2CppObject **)&v4->fields.__8__1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields.__8__1, (int32_t)v6, v8, v9);
    this = (TitleInfoEventUIComponent__LoadAssetBundle_d__15_o *)v4->fields.__8__1;
    if ( !this )
      goto LABEL_17;
    _4__this = v4->fields.__4__this;
    *(_QWORD *)&this->fields.__1__state = _4__this;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)_4__this, v10, v11);
    this = (TitleInfoEventUIComponent__LoadAssetBundle_d__15_o *)v4->fields.eventUIEntity;
    if ( !this )
    {
LABEL_15:
      ActionExtensions__Call(v4->fields.callback, 0LL);
      return 0;
    }
    if ( !*p__8__1 )
LABEL_17:
      sub_1B8880C(this, method);
    LOBYTE((*p__8__1)[1].monitor) = 0;
    AssetName = TitleInfoEventUIComponent__GetAssetName((EventUiEntity_o *)this, method);
    v14 = *p__8__1;
    v15 = AssetName;
    v16 = (AssetLoader_LoadEndDataHandler_o *)sub_1B887FC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v16,
      v14,
      Method_TitleInfoEventUIComponent___c__DisplayClass15_0__LoadAssetBundle_b__0__,
      0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    this = (TitleInfoEventUIComponent__LoadAssetBundle_d__15_o *)AssetManager__loadAssetStorage(v15, v16, 1, 0LL);
    v4->fields._isAssetFound_5__2 = (unsigned __int8)this & 1;
LABEL_12:
    _8__1 = v4->fields.__8__1;
    if ( _8__1 )
    {
      if ( (v4->fields._isAssetFound_5__2 & (_8__1->fields.isAssetLoaded ^ 0xFF)) != 0 )
      {
        v4->fields.__2__current = 0LL;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
        sub_1B88554(p__2__current, 0, v2, v3);
        result = 1;
        *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
        return result;
      }
      goto LABEL_15;
    }
    goto LABEL_17;
  }
  return 0;
}


Il2CppObject *__fastcall TitleInfoEventUIComponent__LoadAssetBundle_d__15__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        TitleInfoEventUIComponent__LoadAssetBundle_d__15_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn TitleInfoEventUIComponent__LoadAssetBundle_d__15__System_Collections_IEnumerator_Reset(
        TitleInfoEventUIComponent__LoadAssetBundle_d__15_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_TitleInfoEventUIComponent__LoadAssetBundle_d__15_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
}


Il2CppObject *__fastcall TitleInfoEventUIComponent__LoadAssetBundle_d__15__System_Collections_IEnumerator_get_Current(
        TitleInfoEventUIComponent__LoadAssetBundle_d__15_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall TitleInfoEventUIComponent__LoadAssetBundle_d__15__System_IDisposable_Dispose(
        TitleInfoEventUIComponent__LoadAssetBundle_d__15_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall TitleInfoEventUIComponent___c__DisplayClass14_0___ctor(
        TitleInfoEventUIComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventUIComponent___c__DisplayClass14_0___AsyncSetup_b__0(
        TitleInfoEventUIComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  EventUiEntity_o *eventUIEntity; // x0
  const MethodInfo *v4; // x2
  struct TitleInfoEventUIComponent_o *_4__this; // x8
  const MethodInfo *v6; // x2

  if ( (byte_4A59C7A & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_GetComponentsInChildren_TitleInfoEventUIPartsComponent___);
    sub_1B885B0(&Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__AddRange__);
    byte_4A59C7A = 1;
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
      v4);
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
                                       (const MethodInfo_2E76E98 *)Method_UnityEngine_Component_GetComponentsInChildren_TitleInfoEventUIPartsComponent___);
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (method = (const MethodInfo *)eventUIEntity,
        (eventUIEntity = (EventUiEntity_o *)_4__this->fields.eventUIPartsList) == 0LL)
    || (System_Collections_Generic_List_object___AddRange(
          (System_Collections_Generic_List_object__o *)eventUIEntity,
          (System_Collections_Generic_IEnumerable_T__o *)method,
          (const MethodInfo_34FDA40 *)Method_System_Collections_Generic_List_TitleInfoEventUIPartsComponent__AddRange__),
        (eventUIEntity = (EventUiEntity_o *)this->fields.__4__this) == 0LL)
    || (TitleInfoEventUIComponent__UpdatePartsDisp((TitleInfoEventUIComponent_o *)eventUIEntity, method),
        (eventUIEntity = this->fields.eventUIEntity) == 0LL) )
  {
LABEL_23:
    sub_1B8880C(eventUIEntity, method);
  }
  if ( EventUiEntity__IsDispArea(eventUIEntity, 8, 0LL) )
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
  ActionExtensions__Call(this->fields.callback, 0LL);
}


void __fastcall TitleInfoEventUIComponent___c__DisplayClass15_0___ctor(
        TitleInfoEventUIComponent___c__DisplayClass15_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventUIComponent___c__DisplayClass15_0___LoadAssetBundle_b__0(
        TitleInfoEventUIComponent___c__DisplayClass15_0_o *this,
        AssetData_o *asset,
        const MethodInfo *method)
{
  TitleInfoEventUIComponent___c__DisplayClass15_0_o *v4; // x19
  struct TitleInfoEventUIComponent_o *_4__this; // x8
  int32_t v6; // w2
  int32_t v7; // w3
  struct TitleInfoEventUIComponent_o *v8; // x8
  struct TitleInfoEventUIComponent_o *v9; // x8
  _QWORD *v10; // x9
  __int64 v11; // x10
  TitleInfoEventUIComponent_c **v12; // x8

  v4 = this;
  if ( (byte_4A59C7B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_AssetData__Add__);
    this = (TitleInfoEventUIComponent___c__DisplayClass15_0_o *)sub_1B885B0(&Method_System_Collections_Generic_List_AssetData__Contains__);
    byte_4A59C7B = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  this = (TitleInfoEventUIComponent___c__DisplayClass15_0_o *)_4__this->fields.eventInfoAssetDataList;
  if ( !this )
    goto LABEL_13;
  this = (TitleInfoEventUIComponent___c__DisplayClass15_0_o *)System_Collections_Generic_List_object___Contains(
                                                                (System_Collections_Generic_List_object__o *)this,
                                                                (Il2CppObject *)asset,
                                                                (const MethodInfo_34FDBC4 *)Method_System_Collections_Generic_List_AssetData__Contains__);
  if ( ((unsigned __int8)this & 1) != 0 )
    goto LABEL_12;
  v8 = v4->fields.__4__this;
  if ( !v8
    || (this = (TitleInfoEventUIComponent___c__DisplayClass15_0_o *)v8->fields.eventInfoAssetDataList) == 0LL
    || (v9 = this->fields.__4__this,
        v10 = Method_System_Collections_Generic_List_AssetData__Add__,
        ++*((_DWORD *)&this->fields.isAssetLoaded + 1),
        !v9) )
  {
LABEL_13:
    sub_1B8880C(this, asset);
  }
  v11 = *(int *)&this->fields.isAssetLoaded;
  if ( (unsigned int)v11 >= LODWORD(v9->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)asset,
      *(const MethodInfo_34FD834 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    v12 = &v9->klass + v11;
    *(_DWORD *)&this->fields.isAssetLoaded = v11 + 1;
    v12[4] = (TitleInfoEventUIComponent_c *)asset;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 4), (int32_t)asset, v6, v7);
  }
LABEL_12:
  v4->fields.isAssetLoaded = 1;
}


void __fastcall TitleInfoEventUIComponent___c__DisplayClass22_0___ctor(
        TitleInfoEventUIComponent___c__DisplayClass22_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventUIComponent___c__DisplayClass22_0___SetGameObject_b__0(
        TitleInfoEventUIComponent___c__DisplayClass22_0_o *this,
        AssetData_o *prefabData,
        const MethodInfo *method)
{
  TitleInfoEventUIComponent___c__DisplayClass22_0_o *v4; // x19
  struct EventUiEntity_o *entity; // x8
  UnityEngine_Object_o *Object_37768612; // x20
  UnityEngine_Object_o *v7; // x0
  UnityEngine_GameObject_o *v8; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v10; // x2
  struct EventUiEntity_o *v11; // x8
  Il2CppObject *Component_object; // x20
  int32_t v13; // w2
  int32_t v14; // w3
  struct TitleInfoEventUIComponent_o *_4__this; // x8
  struct EventUiEntity_o *v16; // x8
  _QWORD *v17; // x9
  __int64 _4__this_low; // x10
  EventUiEntity_c **v19; // x8
  struct EventUiEntity_o *v20; // x8
  EventUiValueEntity_array *List; // x0
  UnityEngine_Vector3_o Position; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4A59C7C & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventUiValueMaster___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_EventInfoUIBase___);
    sub_1B885B0(&UnityEngine_GameObject_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_EventInfoUIBase__Add__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    this = (TitleInfoEventUIComponent___c__DisplayClass22_0_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A59C7C = 1;
  }
  entity = v4->fields.entity;
  if ( !entity )
    goto LABEL_35;
  this = (TitleInfoEventUIComponent___c__DisplayClass22_0_o *)System_Int32__ToString((int)entity + 52, 0LL);
  if ( !prefabData )
    goto LABEL_35;
  Object_37768612 = AssetData__GetObject_37768612(prefabData, (System_String_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(Object_37768612, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v7 = UnityEngine_Object__Instantiate_69458584(Object_37768612, 0LL);
    if ( v7 )
      v8 = (UnityEngine_GameObject_c *)v7->klass == UnityEngine_GameObject_TypeInfo
         ? (UnityEngine_GameObject_o *)v7
         : 0LL;
    else
      v8 = 0LL;
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0LL, 0LL) )
    {
      this = (TitleInfoEventUIComponent___c__DisplayClass22_0_o *)v4->fields.__4__this;
      if ( !this )
        goto LABEL_35;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      GameObjectExtensions__SafeSetParent_33730068(v8, gameObject, 0LL);
      GameObjectExtensions__ResetLocalScale(v8, 0LL);
      if ( !v4->fields.__4__this )
        goto LABEL_35;
      Position = TitleInfoEventUIComponent__GetPosition((TitleInfoEventUIComponent_o *)this, v4->fields.entity, v10);
      GameObjectExtensions__SetLocalPosition(v8, Position, 0LL);
      v11 = v4->fields.entity;
      if ( !v11 )
        goto LABEL_35;
      this = (TitleInfoEventUIComponent___c__DisplayClass22_0_o *)System_Int32__ToString((int)v11 + 16, 0LL);
      if ( !v8 )
        goto LABEL_35;
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v8, (System_String_o *)this, 0LL);
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           v8,
                           (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_EventInfoUIBase___);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (TitleInfoEventUIComponent___c__DisplayClass22_0_o *)UnityEngine_Object__op_Inequality(
                                                                    (UnityEngine_Object_o *)Component_object,
                                                                    0LL,
                                                                    0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_35;
        this = (TitleInfoEventUIComponent___c__DisplayClass22_0_o *)((__int64 (__fastcall *)(Il2CppObject *, struct EventUiEntity_o *, Il2CppMethodPointer))Component_object->klass->vtable[4].method)(
                                                                      Component_object,
                                                                      v4->fields.entity,
                                                                      Component_object->klass->vtable[5].methodPtr);
        _4__this = v4->fields.__4__this;
        if ( !_4__this )
          goto LABEL_35;
        this = (TitleInfoEventUIComponent___c__DisplayClass22_0_o *)_4__this->fields.eventUiPrefabList;
        if ( !this )
          goto LABEL_35;
        v16 = this->fields.entity;
        v17 = Method_System_Collections_Generic_List_EventInfoUIBase__Add__;
        ++HIDWORD(this->fields.__4__this);
        if ( !v16 )
          goto LABEL_35;
        _4__this_low = SLODWORD(this->fields.__4__this);
        if ( (unsigned int)_4__this_low >= v16->fields.eventId )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            Component_object,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &v16->klass + _4__this_low;
          LODWORD(this->fields.__4__this) = _4__this_low + 1;
          v19[4] = (EventUiEntity_c *)Component_object;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)Component_object, v13, v14);
        }
        this = (TitleInfoEventUIComponent___c__DisplayClass22_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
        if ( !this )
          goto LABEL_35;
        this = (TitleInfoEventUIComponent___c__DisplayClass22_0_o *)DataManager__GetMasterData_object_(
                                                                      (DataManager_o *)this,
                                                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventUiValueMaster___);
        if ( this )
        {
          v20 = v4->fields.entity;
          if ( v20 )
          {
            List = EventUiValueMaster__getList((EventUiValueMaster_o *)this, v20->fields.objectId, 0LL);
            ((void (__fastcall *)(Il2CppObject *, EventUiValueEntity_array *, Il2CppMethodPointer))Component_object->klass->vtable[5].method)(
              Component_object,
              List,
              Component_object->klass->vtable[6].methodPtr);
            return;
          }
LABEL_35:
          sub_1B8880C(this, prefabData);
        }
      }
    }
  }
}


void __fastcall TitleInfoEventUIComponent___c__DisplayClass26_0___ctor(
        TitleInfoEventUIComponent___c__DisplayClass26_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall TitleInfoEventUIComponent___c__DisplayClass26_0___PlayAnim_b__0(
        TitleInfoEventUIComponent___c__DisplayClass26_0_o *this,
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