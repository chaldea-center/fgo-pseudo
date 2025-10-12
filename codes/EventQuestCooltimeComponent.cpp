void EventQuestCooltimeComponent___cctor(const MethodInfo *method)
{
  struct EventQuestCooltimeComponent_StaticFields *static_fields; // x8

  if ( (byte_4C31F60 & 1) == 0 )
  {
    sub_1C32C20(&EventQuestCooltimeComponent_TypeInfo);
    byte_4C31F60 = 1;
  }
  static_fields = EventQuestCooltimeComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DEFAULT_COOLTIME_POSITION_OFFSET.fields.x = 0;
  static_fields->DEFAULT_COOLTIME_POSITION_OFFSET.fields.z = 0.0;
}


void EventQuestCooltimeComponent___ctor(EventQuestCooltimeComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20

  if ( (byte_4C31F5F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_SpotCooltimeComponent___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_SpotCooltimeComponent__TypeInfo);
    byte_4C31F5F = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_SpotCooltimeComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_SpotCooltimeComponent___ctor__);
  this->fields.spotCooltimeList = (struct System_Collections_Generic_List_SpotCooltimeComponent__o *)v3;
  sub_1C32BC4(&this->fields.spotCooltimeList, v3);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventQuestCooltimeComponent__DestroyObjects(EventQuestCooltimeComponent_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *spotCooltimePrefab; // x21
  System_Collections_Generic_List_object__o *spotCooltimeList; // x0
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  Il2CppObject *current; // x20
  UnityEngine_Object_o *gameObject; // x20
  __int64 v9; // x0
  struct System_Collections_Generic_List_SpotCooltimeComponent__o *v10; // x8
  int32_t size; // w2
  int v12; // w9
  System_Collections_Generic_List_Enumerator_object__o v13; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4C31F5B & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SpotCooltimeComponent__Clear__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SpotCooltimeComponent__GetEnumerator__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31F5B = 1;
  }
  memset(&v14, 0, sizeof(v14));
  spotCooltimePrefab = (UnityEngine_Object_o *)this->fields.spotCooltimePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(spotCooltimePrefab, 0, 0) )
  {
    this->fields.spotCooltimePrefab = 0;
    sub_1C32BC4(&this->fields.spotCooltimePrefab, 0);
  }
  spotCooltimeList = (System_Collections_Generic_List_object__o *)this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v13,
      spotCooltimeList,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_SpotCooltimeComponent__GetEnumerator__);
    v14 = v13;
    while ( 1 )
    {
      v5 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v14,
             (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__MoveNext__);
      if ( !v5 )
        break;
      current = v14.fields._current;
      if ( !v14.fields._current )
        sub_1C32E7C(v5);
      SpotCooltimeComponent__OnDestroyObject((SpotCooltimeComponent_o *)v14.fields._current, v6);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_71223640(gameObject, 0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v14,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__Dispose__);
    v10 = this->fields.spotCooltimeList;
    if ( !v10 )
      sub_1C32E7C(v9);
    size = v10->fields._size;
    v12 = v10->fields._version + 1;
    v10->fields._size = 0;
    v10->fields._version = v12;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v10->fields._items, 0, size, 0);
  }
}


bool EventQuestCooltimeComponent__IsActiveEventQuestCooltime(int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C31F5E & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1C32C20(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C31F5E = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_10;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_3396884 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
LABEL_10:
    sub_1C32E7C(Instance);
  return EventDetailEntity__IsQuestCooltime((EventDetailEntity_o *)entity, 0);
}


void EventQuestCooltimeComponent__SetAssetData(
        EventQuestCooltimeComponent_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  EventQuestCooltimeComponent_o *v4; // x19
  Il2CppObject *Object_object__51111776; // x0

  v4 = this;
  if ( (byte_4C31F5A & 1) == 0 )
  {
    sub_1C32C20(&Method_AssetData_GetObject_GameObject____78059392);
    this = (EventQuestCooltimeComponent_o *)sub_1C32C20(&StringLiteral_8911/*"MapGimmickEffect_SpotCooltime"*/);
    byte_4C31F5A = 1;
  }
  if ( !assetData )
    sub_1C32E7C(this);
  Object_object__51111776 = AssetData__GetObject_object__51111776(
                              assetData,
                              (System_String_o *)StringLiteral_8911/*"MapGimmickEffect_SpotCooltime"*/,
                              (const MethodInfo_30BE760 *)Method_AssetData_GetObject_GameObject____78059392);
  v4->fields.spotCooltimePrefab = (struct UnityEngine_GameObject_o *)Object_object__51111776;
  sub_1C32BC4(&v4->fields.spotCooltimePrefab, Object_object__51111776);
}


void EventQuestCooltimeComponent__SetGimmickList(
        EventQuestCooltimeComponent_o *this,
        int32_t eventId,
        System_Collections_Generic_List_MapGimmickComponent__o *gimmickList,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x21
  MapGimmickComponent_o *current; // x22
  Il2CppObject *v10; // x24
  __int64 v11; // x0
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x23
  MapGimmickEntity_o *Mine; // x0
  MapGimmickEntity_o *v14; // x25
  int32_t dispTargetId; // w2
  EventQuestCooltimeEntity_o *Entity; // x0
  int32_t ScriptIntParam; // w0
  System_Collections_Generic_List_object__o *spotCooltimeList; // x26
  int32_t v19; // w25
  System_Predicate_object__o *v20; // x27
  __int64 v21; // x0
  Il2CppObject *v22; // x24
  _BOOL8 v23; // x0
  const MethodInfo *v24; // x3
  bool v25; // w1
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C31F5D & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_EventQuestCooltimeMaster___);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_SpotCooltimeComponent__Find__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapGimmickComponent__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_MapGimmickComponent__get_Count__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&System_Predicate_SpotCooltimeComponent__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C32C20(&Method_EventQuestCooltimeComponent___c__DisplayClass11_0__SetGimmickList_b__0__);
    sub_1C32C20(&EventQuestCooltimeComponent___c__DisplayClass11_0_TypeInfo);
    sub_1C32C20(&StringLiteral_20900/*"isActiveCooltimeGimmick"*/);
    byte_4C31F5D = 1;
  }
  memset(&v27, 0, sizeof(v27));
  if ( gimmickList && this->fields.spotCooltimeList && gimmickList->fields._size )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1C32E7C(0);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_EventQuestCooltimeMaster___);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v26,
      (System_Collections_Generic_List_object__o *)gimmickList,
      (const MethodInfo_37992B4 *)Method_System_Collections_Generic_List_MapGimmickComponent__GetEnumerator__);
    v27 = v26;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v27,
              (const MethodInfo_3522FA8 *)Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__MoveNext__) )
    {
      current = (MapGimmickComponent_o *)v27.fields._current;
      v10 = (Il2CppObject *)sub_1C32E6C(EventQuestCooltimeComponent___c__DisplayClass11_0_TypeInfo);
      System_Object___ctor(v10, 0);
      if ( !current )
        sub_1C32E7C(v11);
      mMapCtrl_MapGimmickInfo = current->fields.mMapCtrl_MapGimmickInfo;
      if ( !mMapCtrl_MapGimmickInfo )
        sub_1C32E7C(v11);
      Mine = MapControl_MapGimmickInfo__GetMine(current->fields.mMapCtrl_MapGimmickInfo, 0);
      v14 = Mine;
      if ( !Mine )
        sub_1C32E7C(0);
      if ( Mine->fields.dispCondType == 17 )
        dispTargetId = Mine->fields.dispTargetId;
      else
        dispTargetId = 0;
      if ( Mine->fields.dispCondType2 == 17 )
        dispTargetId = Mine->fields.dispTargetId2;
      if ( dispTargetId )
      {
        if ( !MasterData_object )
          sub_1C32E7C(Mine);
        Entity = EventQuestCooltimeMaster__GetEntity(
                   (EventQuestCooltimeMaster_o *)MasterData_object,
                   eventId,
                   dispTargetId,
                   1,
                   0);
        if ( !v10 )
          sub_1C32E7C(Entity);
        v10[1].klass = (Il2CppClass *)Entity;
        sub_1C32BC4(&v10[1], Entity);
        if ( v10[1].klass )
        {
          ScriptIntParam = MapGimmickEntity__getScriptIntParam(v14, (System_String_o *)StringLiteral_20900/*"isActiveCooltimeGimmick"*/, -1, 0);
          spotCooltimeList = (System_Collections_Generic_List_object__o *)this->fields.spotCooltimeList;
          v19 = ScriptIntParam;
          v20 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_SpotCooltimeComponent__TypeInfo);
          System_Predicate_object____ctor(
            v20,
            v10,
            Method_EventQuestCooltimeComponent___c__DisplayClass11_0__SetGimmickList_b__0__,
            0);
          if ( !spotCooltimeList )
            sub_1C32E7C(v21);
          v22 = System_Collections_Generic_List_object___Find(
                  spotCooltimeList,
                  (System_Predicate_T__o *)v20,
                  (const MethodInfo_3798E24 *)Method_System_Collections_Generic_List_SpotCooltimeComponent__Find__);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v23 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v22, 0, 0);
          if ( v23 )
          {
            if ( !v22 )
              sub_1C32E7C(v23);
            SpotCooltimeComponent__SetSpotActiveGimmick((SpotCooltimeComponent_o *)v22, current, v19 == 1, v24);
          }
          else
          {
            v25 = v19 != 1 && mMapCtrl_MapGimmickInfo->fields.dispType == 1;
            MapGimmickComponent__SetDispAnimQuick(current, v25, 0);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v27,
      (const MethodInfo_3522FA4 *)Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__Dispose__);
  }
}


void EventQuestCooltimeComponent__SetSpot(
        EventQuestCooltimeComponent_o *this,
        UserEventQuestCooltimeEntity_o *userCooltimeEntity,
        SrcSpotBasePrefab_o *targetSpot,
        const MethodInfo *method)
{
  Il2CppObject *spotCooltimePrefab; // x22
  Il2CppObject *v8; // x22
  UnityEngine_Transform_o *transform; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  EventQuestCooltimeComponent_c *v13; // x0
  float *p_x; // x8
  UnityEngine_GameObject_o *gameObject; // x23
  const MethodInfo *v16; // x3
  Il2CppObject *v17; // x22
  intptr_t m_CachedPtr; // x8
  _QWORD *v19; // x9
  __int64 klass_low; // x10
  intptr_t v21; // x8
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C31F5C & 1) == 0 )
  {
    sub_1C32C20(&EventQuestCooltimeComponent_TypeInfo);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_SpotCooltimeComponent___);
    sub_1C32C20(&Method_System_Collections_Generic_List_SpotCooltimeComponent__Add__);
    sub_1C32C20(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C31F5C = 1;
  }
  if ( userCooltimeEntity )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetSpot, 0, 0) )
    {
      spotCooltimePrefab = (Il2CppObject *)this->fields.spotCooltimePrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v8 = UnityEngine_Object__Instantiate_object_(
             spotCooltimePrefab,
             (const MethodInfo_3169758 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SetParent_36042476((UnityEngine_GameObject_o *)v8, this->fields.spotCooltimeRoot, 0);
      if ( !targetSpot )
        goto LABEL_23;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetSpot, 0);
      if ( !transform )
        goto LABEL_23;
      position = UnityEngine_Transform__get_position(transform, 0);
      x = position.fields.x;
      y = position.fields.y;
      z = position.fields.z;
      v13 = EventQuestCooltimeComponent_TypeInfo;
      if ( !EventQuestCooltimeComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventQuestCooltimeComponent_TypeInfo);
        v13 = EventQuestCooltimeComponent_TypeInfo;
      }
      p_x = &v13->static_fields->DEFAULT_COOLTIME_POSITION_OFFSET.fields.x;
      v23.fields.x = x + *p_x;
      v23.fields.y = y + p_x[1];
      v23.fields.z = z + p_x[2];
      GameObjectExtensions__SetPosition((UnityEngine_GameObject_o *)v8, v23, 0);
      if ( !v8 )
        goto LABEL_23;
      gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v8, 0);
      if ( !byte_4C313D6 )
      {
        sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
        byte_4C313D6 = 1;
      }
      GameObjectExtensions__SetLocalScale(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      transform = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)v8,
                                               (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_SpotCooltimeComponent___);
      if ( !transform
        || (v17 = (Il2CppObject *)transform,
            SpotCooltimeComponent__Setup((SpotCooltimeComponent_o *)transform, userCooltimeEntity, targetSpot, v16),
            (transform = (UnityEngine_Transform_o *)this->fields.spotCooltimeList) == 0)
        || (m_CachedPtr = transform->fields.m_CachedPtr,
            v19 = Method_System_Collections_Generic_List_SpotCooltimeComponent__Add__,
            ++HIDWORD(transform[1].klass),
            !m_CachedPtr) )
      {
LABEL_23:
        sub_1C32E7C(transform);
      }
      klass_low = SLODWORD(transform[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(m_CachedPtr + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)transform,
          v17,
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = m_CachedPtr + 8 * klass_low;
        LODWORD(transform[1].klass) = klass_low + 1;
        *(_QWORD *)(v21 + 32) = v17;
        sub_1C32BC4(v21 + 32, v17);
      }
    }
  }
}


void EventQuestCooltimeComponent___c__DisplayClass11_0___ctor(
        EventQuestCooltimeComponent___c__DisplayClass11_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool EventQuestCooltimeComponent___c__DisplayClass11_0___SetGimmickList_b__0(
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
    sub_1C32E7C(this);
  return (_DWORD)userCooltimeEntity == targetCooltimeEntity->fields.questId;
}