void __fastcall EventQuestCooltimeComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct EventQuestCooltimeComponent_StaticFields *static_fields; // x8

  if ( (byte_4B3B2DC & 1) == 0 )
  {
    sub_1BD3458(&EventQuestCooltimeComponent_TypeInfo, v1);
    byte_4B3B2DC = 1;
  }
  static_fields = EventQuestCooltimeComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DEFAULT_COOLTIME_POSITION_OFFSET.fields.x = 0LL;
  static_fields->DEFAULT_COOLTIME_POSITION_OFFSET.fields.z = 0.0;
}


void __fastcall EventQuestCooltimeComponent___ctor(EventQuestCooltimeComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B3B2DB & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_SpotCooltimeComponent___ctor__, method);
    sub_1BD3458(&System_Collections_Generic_List_SpotCooltimeComponent__TypeInfo, v3);
    byte_4B3B2DB = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_SpotCooltimeComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_SpotCooltimeComponent___ctor__);
  this->fields.spotCooltimeList = (struct System_Collections_Generic_List_SpotCooltimeComponent__o *)v4;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.spotCooltimeList, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventQuestCooltimeComponent__DestroyObjects(
        EventQuestCooltimeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Object_o *spotCooltimePrefab; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  System_Collections_Generic_List_object__o *spotCooltimeList; // x0
  _BOOL8 v16; // x0
  const MethodInfo *v17; // x1
  Il2CppObject *current; // x20
  UnityEngine_Object_o *gameObject; // x20
  __int64 v20; // x0
  __int64 v21; // x1
  struct System_Collections_Generic_List_SpotCooltimeComponent__o *v22; // x8
  int32_t size; // w2
  int v24; // w9
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B3B2D7 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__Dispose__, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__MoveNext__, v3);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__get_Current__, v4);
    sub_1BD3458(&Method_System_Collections_Generic_List_SpotCooltimeComponent__Clear__, v5);
    sub_1BD3458(&Method_System_Collections_Generic_List_SpotCooltimeComponent__GetEnumerator__, v6);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v7);
    byte_4B3B2D7 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  spotCooltimePrefab = (UnityEngine_Object_o *)this->fields.spotCooltimePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(spotCooltimePrefab, 0LL, 0LL) )
  {
    this->fields.spotCooltimePrefab = 0LL;
    sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.spotCooltimePrefab, 0LL, v9, v10, v11, v12, v13, v14);
  }
  spotCooltimeList = (System_Collections_Generic_List_object__o *)this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v25,
      spotCooltimeList,
      (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_SpotCooltimeComponent__GetEnumerator__);
    v26 = v25;
    while ( 1 )
    {
      v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v26,
              (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__MoveNext__);
      if ( !v16 )
        break;
      current = v26.fields._current;
      if ( !v26.fields._current )
        sub_1BD36B4(v16, v17);
      SpotCooltimeComponent__OnDestroyObject((SpotCooltimeComponent_o *)v26.fields._current, v17);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)current,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_70278272(gameObject, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v26,
      (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__Dispose__);
    v22 = this->fields.spotCooltimeList;
    if ( !v22 )
      sub_1BD36B4(v20, v21);
    size = v22->fields._size;
    v24 = v22->fields._version + 1;
    v22->fields._size = 0;
    v22->fields._version = v24;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v22->fields._items, 0, size, 0LL);
  }
}


bool __fastcall EventQuestCooltimeComponent__IsActiveEventQuestCooltime(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B3B2DA & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_1BD3458(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v3);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4B3B2DA = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_10;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_31D1F44 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
LABEL_10:
    sub_1BD36B4(Instance, v6);
  return EventDetailEntity__IsQuestCooltime((EventDetailEntity_o *)entity, 0LL);
}


void __fastcall EventQuestCooltimeComponent__SetAssetData(
        EventQuestCooltimeComponent_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  EventQuestCooltimeComponent_o *v4; // x19
  __int64 v5; // x1
  Il2CppObject *Object_object__49362760; // x0
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7

  v4 = this;
  if ( (byte_4B3B2D6 & 1) == 0 )
  {
    sub_1BD3458(&Method_AssetData_GetObject_GameObject____76969040, assetData);
    this = (EventQuestCooltimeComponent_o *)sub_1BD3458(&StringLiteral_9012/*"MapGimmickEffect_SpotCooltime"*/, v5);
    byte_4B3B2D6 = 1;
  }
  if ( !assetData )
    sub_1BD36B4(this, assetData);
  Object_object__49362760 = AssetData__GetObject_object__49362760(
                              assetData,
                              (System_String_o *)StringLiteral_9012/*"MapGimmickEffect_SpotCooltime"*/,
                              (const MethodInfo_2F13748 *)Method_AssetData_GetObject_GameObject____76969040);
  v4->fields.spotCooltimePrefab = (struct UnityEngine_GameObject_o *)Object_object__49362760;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&v4->fields.spotCooltimePrefab,
    (int64_t)Object_object__49362760,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventQuestCooltimeComponent__SetGimmickList(
        EventQuestCooltimeComponent_o *this,
        int32_t eventId,
        System_Collections_Generic_List_MapGimmickComponent__o *gimmickList,
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
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  Il2CppObject *Instance; // x0
  __int64 v20; // x1
  Il2CppObject *MasterData_object; // x21
  MapGimmickComponent_o *current; // x22
  __int64 v23; // x24
  __int64 v24; // x0
  __int64 v25; // x1
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x23
  MapGimmickEntity_o *Mine; // x0
  __int64 v28; // x1
  MapGimmickEntity_o *v29; // x25
  int32_t dispTargetId; // w2
  EventQuestCooltimeEntity_o *Entity; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  int32_t ScriptIntParam; // w0
  System_Collections_Generic_List_object__o *spotCooltimeList; // x26
  int32_t v40; // w25
  System_Predicate_object__o *v41; // x27
  __int64 v42; // x0
  __int64 v43; // x1
  Il2CppObject *v44; // x24
  _BOOL8 v45; // x0
  __int64 v46; // x1
  const MethodInfo *v47; // x3
  bool v48; // w1
  System_Collections_Generic_List_Enumerator_object__o v49; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v50; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B3B2D9 & 1) == 0 )
  {
    sub_1BD3458(&Method_DataManager_GetMasterData_EventQuestCooltimeMaster___, *(_QWORD *)&eventId);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__Dispose__, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__MoveNext__, v8);
    sub_1BD3458(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__get_Current__, v9);
    sub_1BD3458(&Method_System_Collections_Generic_List_SpotCooltimeComponent__Find__, v10);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapGimmickComponent__GetEnumerator__, v11);
    sub_1BD3458(&Method_System_Collections_Generic_List_MapGimmickComponent__get_Count__, v12);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v13);
    sub_1BD3458(&System_Predicate_SpotCooltimeComponent__TypeInfo, v14);
    sub_1BD3458(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1BD3458(&Method_EventQuestCooltimeComponent___c__DisplayClass11_0__SetGimmickList_b__0__, v16);
    sub_1BD3458(&EventQuestCooltimeComponent___c__DisplayClass11_0_TypeInfo, v17);
    sub_1BD3458(&StringLiteral_21034/*"isActiveCooltimeGimmick"*/, v18);
    byte_4B3B2D9 = 1;
  }
  memset(&v50, 0, sizeof(v50));
  if ( gimmickList && this->fields.spotCooltimeList && gimmickList->fields._size )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1BD36B4(0LL, v20);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F31684 *)Method_DataManager_GetMasterData_EventQuestCooltimeMaster___);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v49,
      (System_Collections_Generic_List_object__o *)gimmickList,
      (const MethodInfo_35C1888 *)Method_System_Collections_Generic_List_MapGimmickComponent__GetEnumerator__);
    v50 = v49;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v50,
              (const MethodInfo_3335E50 *)Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__MoveNext__) )
    {
      current = (MapGimmickComponent_o *)v50.fields._current;
      v23 = sub_1BD36A4(EventQuestCooltimeComponent___c__DisplayClass11_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v23, 0LL);
      if ( !current )
        sub_1BD36B4(v24, v25);
      mMapCtrl_MapGimmickInfo = current->fields.mMapCtrl_MapGimmickInfo;
      if ( !mMapCtrl_MapGimmickInfo )
        sub_1BD36B4(v24, v25);
      Mine = MapControl_MapGimmickInfo__GetMine(current->fields.mMapCtrl_MapGimmickInfo, 0LL);
      v29 = Mine;
      if ( !Mine )
        sub_1BD36B4(0LL, v28);
      if ( Mine->fields.dispCondType == 17 )
        dispTargetId = Mine->fields.dispTargetId;
      else
        dispTargetId = 0;
      if ( Mine->fields.dispCondType2 == 17 )
        dispTargetId = Mine->fields.dispTargetId2;
      if ( dispTargetId )
      {
        if ( !MasterData_object )
          sub_1BD36B4(Mine, v28);
        Entity = EventQuestCooltimeMaster__GetEntity(
                   (EventQuestCooltimeMaster_o *)MasterData_object,
                   eventId,
                   dispTargetId,
                   1,
                   0LL);
        if ( !v23 )
          sub_1BD36B4(Entity, Entity);
        *(_QWORD *)(v23 + 16) = Entity;
        sub_1BD33FC((PartyOrganizationUtility_o *)(v23 + 16), (int64_t)Entity, v32, v33, v34, v35, v36, v37);
        if ( *(_QWORD *)(v23 + 16) )
        {
          ScriptIntParam = MapGimmickEntity__getScriptIntParam(v29, (System_String_o *)StringLiteral_21034/*"isActiveCooltimeGimmick"*/, -1, 0LL);
          spotCooltimeList = (System_Collections_Generic_List_object__o *)this->fields.spotCooltimeList;
          v40 = ScriptIntParam;
          v41 = (System_Predicate_object__o *)sub_1BD36A4(System_Predicate_SpotCooltimeComponent__TypeInfo);
          System_Predicate_object____ctor(
            v41,
            (Il2CppObject *)v23,
            Method_EventQuestCooltimeComponent___c__DisplayClass11_0__SetGimmickList_b__0__,
            0LL);
          if ( !spotCooltimeList )
            sub_1BD36B4(v42, v43);
          v44 = System_Collections_Generic_List_object___Find(
                  spotCooltimeList,
                  (System_Predicate_T__o *)v41,
                  (const MethodInfo_35C13F8 *)Method_System_Collections_Generic_List_SpotCooltimeComponent__Find__);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v45 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v44, 0LL, 0LL);
          if ( v45 )
          {
            if ( !v44 )
              sub_1BD36B4(v45, v46);
            SpotCooltimeComponent__SetSpotActiveGimmick((SpotCooltimeComponent_o *)v44, current, v40 == 1, v47);
          }
          else
          {
            v48 = v40 != 1 && mMapCtrl_MapGimmickInfo->fields.dispType == 1;
            MapGimmickComponent__SetDispAnimQuick(current, v48, 0LL);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v50,
      (const MethodInfo_3335E4C *)Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__Dispose__);
  }
}


void __fastcall EventQuestCooltimeComponent__SetSpot(
        EventQuestCooltimeComponent_o *this,
        UserEventQuestCooltimeEntity_o *userCooltimeEntity,
        SrcSpotBasePrefab_o *targetSpot,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *spotCooltimePrefab; // x22
  Il2CppObject *v12; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v14; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  EventQuestCooltimeComponent_c *v18; // x0
  float *p_x; // x8
  __int64 v20; // x1
  UnityEngine_GameObject_o *gameObject; // x23
  const MethodInfo *v22; // x3
  Il2CppObject *v23; // x22
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  __int64 v30; // x8
  _QWORD *v31; // x9
  __int64 klass_low; // x10
  __int64 v33; // x8
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B3B2D8 & 1) == 0 )
  {
    sub_1BD3458(&EventQuestCooltimeComponent_TypeInfo, userCooltimeEntity);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_SpotCooltimeComponent___, v7);
    sub_1BD3458(&Method_System_Collections_Generic_List_SpotCooltimeComponent__Add__, v8);
    sub_1BD3458(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v10);
    byte_4B3B2D8 = 1;
  }
  if ( userCooltimeEntity )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetSpot, 0LL, 0LL) )
    {
      spotCooltimePrefab = (Il2CppObject *)this->fields.spotCooltimePrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v12 = UnityEngine_Object__Instantiate_object_(
              spotCooltimePrefab,
              (const MethodInfo_2FB6C24 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SetParent_34386732((UnityEngine_GameObject_o *)v12, this->fields.spotCooltimeRoot, 0LL);
      if ( !targetSpot )
        goto LABEL_23;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetSpot, 0LL);
      if ( !transform )
        goto LABEL_23;
      position = UnityEngine_Transform__get_position(transform, 0LL);
      x = position.fields.x;
      y = position.fields.y;
      z = position.fields.z;
      v18 = EventQuestCooltimeComponent_TypeInfo;
      if ( !EventQuestCooltimeComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventQuestCooltimeComponent_TypeInfo);
        v18 = EventQuestCooltimeComponent_TypeInfo;
      }
      p_x = &v18->static_fields->DEFAULT_COOLTIME_POSITION_OFFSET.fields.x;
      v35.fields.x = x + *p_x;
      v35.fields.y = y + p_x[1];
      v35.fields.z = z + p_x[2];
      GameObjectExtensions__SetPosition((UnityEngine_GameObject_o *)v12, v35, 0LL);
      if ( !v12 )
        goto LABEL_23;
      gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v12, 0LL);
      if ( !byte_4B31946 )
      {
        sub_1BD3458(&UnityEngine_Vector3_TypeInfo, v20);
        byte_4B31946 = 1;
      }
      GameObjectExtensions__SetLocalScale(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      transform = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)v12,
                                               (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_SpotCooltimeComponent___);
      if ( !transform
        || (v23 = (Il2CppObject *)transform,
            SpotCooltimeComponent__Setup((SpotCooltimeComponent_o *)transform, userCooltimeEntity, targetSpot, v22),
            (transform = (UnityEngine_Transform_o *)this->fields.spotCooltimeList) == 0LL)
        || (v30 = *(_QWORD *)&transform->fields.m_CachedPtr,
            v31 = Method_System_Collections_Generic_List_SpotCooltimeComponent__Add__,
            ++HIDWORD(transform[1].klass),
            !v30) )
      {
LABEL_23:
        sub_1BD36B4(transform, v14);
      }
      klass_low = SLODWORD(transform[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(v30 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)transform,
          v23,
          *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v33 = v30 + 8 * klass_low;
        LODWORD(transform[1].klass) = klass_low + 1;
        *(_QWORD *)(v33 + 32) = v23;
        sub_1BD33FC((PartyOrganizationUtility_o *)(v33 + 32), (int64_t)v23, v24, v25, v26, v27, v28, v29);
      }
    }
  }
}


void __fastcall EventQuestCooltimeComponent___c__DisplayClass11_0___ctor(
        EventQuestCooltimeComponent___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall EventQuestCooltimeComponent___c__DisplayClass11_0___SetGimmickList_b__0(
        EventQuestCooltimeComponent___c__DisplayClass11_0_o *this,
        SpotCooltimeComponent_o *spotCooltime,
        const MethodInfo *method)
{
  struct UserEventQuestCooltimeEntity_o *userCooltimeEntity; // x8
  struct EventQuestCooltimeEntity_o *targetCooltimeEntity; // x9

  if ( !spotCooltime )
    goto LABEL_6;
  userCooltimeEntity = spotCooltime->fields.userCooltimeEntity;
  if ( userCooltimeEntity )
    LODWORD(userCooltimeEntity) = userCooltimeEntity->fields.questId;
  targetCooltimeEntity = this->fields.targetCooltimeEntity;
  if ( !targetCooltimeEntity )
LABEL_6:
    sub_1BD36B4(this, spotCooltime);
  return (_DWORD)userCooltimeEntity == targetCooltimeEntity->fields.questId;
}