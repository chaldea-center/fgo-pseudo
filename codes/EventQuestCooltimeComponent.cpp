void __fastcall EventQuestCooltimeComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct EventQuestCooltimeComponent_StaticFields *static_fields; // x8

  if ( (byte_4A52885 & 1) == 0 )
  {
    sub_1B863B8(&EventQuestCooltimeComponent_TypeInfo, v1);
    byte_4A52885 = 1;
  }
  static_fields = EventQuestCooltimeComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DEFAULT_COOLTIME_POSITION_OFFSET.fields.x = 0LL;
  static_fields->DEFAULT_COOLTIME_POSITION_OFFSET.fields.z = 0.0;
}


void __fastcall EventQuestCooltimeComponent___ctor(EventQuestCooltimeComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4A52884 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_SpotCooltimeComponent___ctor__, method);
    sub_1B863B8(&System_Collections_Generic_List_SpotCooltimeComponent__TypeInfo, v3);
    byte_4A52884 = 1;
  }
  v4 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_SpotCooltimeComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_SpotCooltimeComponent___ctor__);
  this->fields.spotCooltimeList = (struct System_Collections_Generic_List_SpotCooltimeComponent__o *)v4;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.spotCooltimeList, (int32_t)v4, v5, v6);
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
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_List_object__o *spotCooltimeList; // x0
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x1
  Il2CppObject *current; // x20
  UnityEngine_Object_o *gameObject; // x20
  __int64 v16; // x0
  __int64 v17; // x1
  struct System_Collections_Generic_List_SpotCooltimeComponent__o *v18; // x8
  int32_t size; // w2
  int v20; // w9
  System_Collections_Generic_List_Enumerator_object__o v21; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v22; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A52880 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__Dispose__, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__MoveNext__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__get_Current__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_SpotCooltimeComponent__Clear__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_SpotCooltimeComponent__GetEnumerator__, v6);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v7);
    byte_4A52880 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  spotCooltimePrefab = (UnityEngine_Object_o *)this->fields.spotCooltimePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(spotCooltimePrefab, 0LL, 0LL) )
  {
    this->fields.spotCooltimePrefab = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.spotCooltimePrefab, 0, v9, v10);
  }
  spotCooltimeList = (System_Collections_Generic_List_object__o *)this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v21,
      spotCooltimeList,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_SpotCooltimeComponent__GetEnumerator__);
    v22 = v21;
    while ( 1 )
    {
      v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v22,
              (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__MoveNext__);
      if ( !v12 )
        break;
      current = v22.fields._current;
      if ( !v22.fields._current )
        sub_1B86614(v12, v13);
      SpotCooltimeComponent__OnDestroyObject((SpotCooltimeComponent_o *)v22.fields._current, v13);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)current,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69356292(gameObject, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v22,
      (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__Dispose__);
    v18 = this->fields.spotCooltimeList;
    if ( !v18 )
      sub_1B86614(v16, v17);
    size = v18->fields._size;
    v20 = v18->fields._version + 1;
    v18->fields._size = 0;
    v18->fields._version = v20;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v18->fields._items, 0, size, 0LL);
  }
}


bool __fastcall EventQuestCooltimeComponent__IsActiveEventQuestCooltime(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A52883 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_1B863B8(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v3);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4A52883 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_10;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_32142CC *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
LABEL_10:
    sub_1B86614(Instance, v6);
  return EventDetailEntity__IsQuestCooltime((EventDetailEntity_o *)entity, 0LL);
}


void __fastcall EventQuestCooltimeComponent__SetAssetData(
        EventQuestCooltimeComponent_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  EventQuestCooltimeComponent_o *v4; // x19
  __int64 v5; // x1
  Il2CppObject *Object_object__49610244; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  v4 = this;
  if ( (byte_4A5287F & 1) == 0 )
  {
    sub_1B863B8(&Method_AssetData_GetObject_GameObject____76085296, assetData);
    this = (EventQuestCooltimeComponent_o *)sub_1B863B8(&StringLiteral_8759/*"MapGimmickEffect_SpotCooltime"*/, v5);
    byte_4A5287F = 1;
  }
  if ( !assetData )
    sub_1B86614(this, assetData);
  Object_object__49610244 = AssetData__GetObject_object__49610244(
                              assetData,
                              (System_String_o *)StringLiteral_8759/*"MapGimmickEffect_SpotCooltime"*/,
                              (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296);
  v4->fields.spotCooltimePrefab = (struct UnityEngine_GameObject_o *)Object_object__49610244;
  sub_1B8635C((CGThumbnailListItem_o *)&v4->fields.spotCooltimePrefab, (int32_t)Object_object__49610244, v7, v8);
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
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t ScriptIntParam; // w0
  System_Collections_Generic_List_object__o *spotCooltimeList; // x26
  int32_t v36; // w25
  System_Predicate_object__o *v37; // x27
  __int64 v38; // x0
  __int64 v39; // x1
  Il2CppObject *v40; // x24
  _BOOL8 v41; // x0
  __int64 v42; // x1
  const MethodInfo *v43; // x3
  bool v44; // w1
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A52882 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_EventQuestCooltimeMaster___, *(_QWORD *)&eventId);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__Dispose__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__MoveNext__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__get_Current__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_SpotCooltimeComponent__Find__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_MapGimmickComponent__GetEnumerator__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_MapGimmickComponent__get_Count__, v12);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v13);
    sub_1B863B8(&System_Predicate_SpotCooltimeComponent__TypeInfo, v14);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B863B8(&Method_EventQuestCooltimeComponent___c__DisplayClass11_0__SetGimmickList_b__0__, v16);
    sub_1B863B8(&EventQuestCooltimeComponent___c__DisplayClass11_0_TypeInfo, v17);
    sub_1B863B8(&StringLiteral_20590/*"isActiveCooltimeGimmick"*/, v18);
    byte_4A52882 = 1;
  }
  memset(&v46, 0, sizeof(v46));
  if ( gimmickList && this->fields.spotCooltimeList && gimmickList->fields._size )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1B86614(0LL, v20);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventQuestCooltimeMaster___);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v45,
      (System_Collections_Generic_List_object__o *)gimmickList,
      (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_MapGimmickComponent__GetEnumerator__);
    v46 = v45;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v46,
              (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__MoveNext__) )
    {
      current = (MapGimmickComponent_o *)v46.fields._current;
      v23 = sub_1B86604(EventQuestCooltimeComponent___c__DisplayClass11_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v23, 0LL);
      if ( !current )
        sub_1B86614(v24, v25);
      mMapCtrl_MapGimmickInfo = current->fields.mMapCtrl_MapGimmickInfo;
      if ( !mMapCtrl_MapGimmickInfo )
        sub_1B86614(v24, v25);
      Mine = MapControl_MapGimmickInfo__GetMine(current->fields.mMapCtrl_MapGimmickInfo, 0LL);
      v29 = Mine;
      if ( !Mine )
        sub_1B86614(0LL, v28);
      if ( Mine->fields.dispCondType == 17 )
        dispTargetId = Mine->fields.dispTargetId;
      else
        dispTargetId = 0;
      if ( Mine->fields.dispCondType2 == 17 )
        dispTargetId = Mine->fields.dispTargetId2;
      if ( dispTargetId )
      {
        if ( !MasterData_object )
          sub_1B86614(Mine, v28);
        Entity = EventQuestCooltimeMaster__GetEntity(
                   (EventQuestCooltimeMaster_o *)MasterData_object,
                   eventId,
                   dispTargetId,
                   1,
                   0LL);
        if ( !v23 )
          sub_1B86614(Entity, Entity);
        *(_QWORD *)(v23 + 16) = Entity;
        sub_1B8635C((CGThumbnailListItem_o *)(v23 + 16), (int32_t)Entity, v32, v33);
        if ( *(_QWORD *)(v23 + 16) )
        {
          ScriptIntParam = MapGimmickEntity__getScriptIntParam(v29, (System_String_o *)StringLiteral_20590/*"isActiveCooltimeGimmick"*/, -1, 0LL);
          spotCooltimeList = (System_Collections_Generic_List_object__o *)this->fields.spotCooltimeList;
          v36 = ScriptIntParam;
          v37 = (System_Predicate_object__o *)sub_1B86604(System_Predicate_SpotCooltimeComponent__TypeInfo);
          System_Predicate_object____ctor(
            v37,
            (Il2CppObject *)v23,
            Method_EventQuestCooltimeComponent___c__DisplayClass11_0__SetGimmickList_b__0__,
            0LL);
          if ( !spotCooltimeList )
            sub_1B86614(v38, v39);
          v40 = System_Collections_Generic_List_object___Find(
                  spotCooltimeList,
                  (System_Predicate_T__o *)v37,
                  (const MethodInfo_35FCFC0 *)Method_System_Collections_Generic_List_SpotCooltimeComponent__Find__);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v41 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v40, 0LL, 0LL);
          if ( v41 )
          {
            if ( !v40 )
              sub_1B86614(v41, v42);
            SpotCooltimeComponent__SetSpotActiveGimmick((SpotCooltimeComponent_o *)v40, current, v36 == 1, v43);
          }
          else
          {
            v44 = v36 != 1 && mMapCtrl_MapGimmickInfo->fields.dispType == 1;
            MapGimmickComponent__SetDispAnimQuick(current, v44, 0LL);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v46,
      (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__Dispose__);
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
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  __int64 v26; // x8
  _QWORD *v27; // x9
  __int64 klass_low; // x10
  __int64 v29; // x8
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A52881 & 1) == 0 )
  {
    sub_1B863B8(&EventQuestCooltimeComponent_TypeInfo, userCooltimeEntity);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_SpotCooltimeComponent___, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_SpotCooltimeComponent__Add__, v8);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v10);
    byte_4A52881 = 1;
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
              (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SetParent_34388108((UnityEngine_GameObject_o *)v12, this->fields.spotCooltimeRoot, 0LL);
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
      v31.fields.x = x + *p_x;
      v31.fields.y = y + p_x[1];
      v31.fields.z = z + p_x[2];
      GameObjectExtensions__SetPosition((UnityEngine_GameObject_o *)v12, v31, 0LL);
      if ( !v12 )
        goto LABEL_23;
      gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v12, 0LL);
      if ( !byte_4A487E6 )
      {
        sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v20);
        byte_4A487E6 = 1;
      }
      GameObjectExtensions__SetLocalScale(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      transform = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)v12,
                                               (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_SpotCooltimeComponent___);
      if ( !transform
        || (v23 = (Il2CppObject *)transform,
            SpotCooltimeComponent__Setup((SpotCooltimeComponent_o *)transform, userCooltimeEntity, targetSpot, v22),
            (transform = (UnityEngine_Transform_o *)this->fields.spotCooltimeList) == 0LL)
        || (v26 = *(_QWORD *)&transform->fields.m_CachedPtr,
            v27 = Method_System_Collections_Generic_List_SpotCooltimeComponent__Add__,
            ++HIDWORD(transform[1].klass),
            !v26) )
      {
LABEL_23:
        sub_1B86614(transform, v14);
      }
      klass_low = SLODWORD(transform[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(v26 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)transform,
          v23,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = v26 + 8 * klass_low;
        LODWORD(transform[1].klass) = klass_low + 1;
        *(_QWORD *)(v29 + 32) = v23;
        sub_1B8635C((CGThumbnailListItem_o *)(v29 + 32), (int32_t)v23, v24, v25);
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
    sub_1B86614(this, spotCooltime);
  return (_DWORD)userCooltimeEntity == targetCooltimeEntity->fields.questId;
}