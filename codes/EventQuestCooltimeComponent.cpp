void __fastcall EventQuestCooltimeComponent___cctor(const MethodInfo *method)
{
  struct EventQuestCooltimeComponent_StaticFields *static_fields; // x8

  if ( (byte_4A5F0EB & 1) == 0 )
  {
    sub_1B885B0(&EventQuestCooltimeComponent_TypeInfo);
    byte_4A5F0EB = 1;
  }
  static_fields = EventQuestCooltimeComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DEFAULT_COOLTIME_POSITION_OFFSET.fields.x = 0LL;
  static_fields->DEFAULT_COOLTIME_POSITION_OFFSET.fields.z = 0.0;
}


void __fastcall EventQuestCooltimeComponent___ctor(EventQuestCooltimeComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5F0EA & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_SpotCooltimeComponent___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_SpotCooltimeComponent__TypeInfo);
    byte_4A5F0EA = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_SpotCooltimeComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_SpotCooltimeComponent___ctor__);
  this->fields.spotCooltimeList = (struct System_Collections_Generic_List_SpotCooltimeComponent__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.spotCooltimeList, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventQuestCooltimeComponent__DestroyObjects(
        EventQuestCooltimeComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *spotCooltimePrefab; // x21
  int32_t v4; // w2
  int32_t v5; // w3
  System_Collections_Generic_List_object__o *spotCooltimeList; // x0
  _BOOL8 v7; // x0
  const MethodInfo *v8; // x1
  Il2CppObject *current; // x20
  UnityEngine_Object_o *gameObject; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  struct System_Collections_Generic_List_SpotCooltimeComponent__o *v13; // x8
  int32_t size; // w2
  int v15; // w9
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v17; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A5F0E6 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SpotCooltimeComponent__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SpotCooltimeComponent__GetEnumerator__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F0E6 = 1;
  }
  memset(&v17, 0, sizeof(v17));
  spotCooltimePrefab = (UnityEngine_Object_o *)this->fields.spotCooltimePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(spotCooltimePrefab, 0LL, 0LL) )
  {
    this->fields.spotCooltimePrefab = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.spotCooltimePrefab, 0, v4, v5);
  }
  spotCooltimeList = (System_Collections_Generic_List_object__o *)this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      spotCooltimeList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_SpotCooltimeComponent__GetEnumerator__);
    v17 = v16;
    while ( 1 )
    {
      v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
             &v17,
             (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__MoveNext__);
      if ( !v7 )
        break;
      current = v17.fields._current;
      if ( !v17.fields._current )
        sub_1B8880C(v7, v8);
      SpotCooltimeComponent__OnDestroyObject((SpotCooltimeComponent_o *)v17.fields._current, v8);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)current,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v17,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__Dispose__);
    v13 = this->fields.spotCooltimeList;
    if ( !v13 )
      sub_1B8880C(v11, v12);
    size = v13->fields._size;
    v15 = v13->fields._version + 1;
    v13->fields._size = 0;
    v13->fields._version = v15;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v13->fields._items, 0, size, 0LL);
  }
}


bool __fastcall EventQuestCooltimeComponent__IsActiveEventQuestCooltime(int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5F0E9 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_1B885B0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5F0E9 = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_10;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_311D988 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
LABEL_10:
    sub_1B8880C(Instance, v4);
  return EventDetailEntity__IsQuestCooltime((EventDetailEntity_o *)entity, 0LL);
}


void __fastcall EventQuestCooltimeComponent__SetAssetData(
        EventQuestCooltimeComponent_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  EventQuestCooltimeComponent_o *v4; // x19
  Il2CppObject *Object_object__48635516; // x0
  int32_t v6; // w2
  int32_t v7; // w3

  v4 = this;
  if ( (byte_4A5F0E5 & 1) == 0 )
  {
    sub_1B885B0(&Method_AssetData_GetObject_GameObject____76085352);
    this = (EventQuestCooltimeComponent_o *)sub_1B885B0(&StringLiteral_8869/*"MapGimmickEffect_SpotCooltime"*/);
    byte_4A5F0E5 = 1;
  }
  if ( !assetData )
    sub_1B8880C(this, assetData);
  Object_object__48635516 = AssetData__GetObject_object__48635516(
                              assetData,
                              (System_String_o *)StringLiteral_8869/*"MapGimmickEffect_SpotCooltime"*/,
                              (const MethodInfo_2E61E7C *)Method_AssetData_GetObject_GameObject____76085352);
  v4->fields.spotCooltimePrefab = (struct UnityEngine_GameObject_o *)Object_object__48635516;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&v4->fields.spotCooltimePrefab,
    (int32_t)Object_object__48635516,
    v6,
    v7);
}


void __fastcall EventQuestCooltimeComponent__SetGimmickList(
        EventQuestCooltimeComponent_o *this,
        int32_t eventId,
        System_Collections_Generic_List_MapGimmickComponent__o *gimmickList,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x21
  MapGimmickComponent_o *current; // x22
  __int64 v11; // x24
  __int64 v12; // x0
  __int64 v13; // x1
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x23
  MapGimmickEntity_o *Mine; // x0
  __int64 v16; // x1
  MapGimmickEntity_o *v17; // x25
  int32_t dispTargetId; // w2
  EventQuestCooltimeEntity_o *Entity; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t ScriptIntParam; // w0
  System_Collections_Generic_List_object__o *spotCooltimeList; // x26
  int32_t v24; // w25
  System_Predicate_object__o *v25; // x27
  __int64 v26; // x0
  __int64 v27; // x1
  Il2CppObject *v28; // x24
  _BOOL8 v29; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x3
  bool v32; // w1
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A5F0E8 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_EventQuestCooltimeMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SpotCooltimeComponent__Find__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapGimmickComponent__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_MapGimmickComponent__get_Count__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&System_Predicate_SpotCooltimeComponent__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_EventQuestCooltimeComponent___c__DisplayClass11_0__SetGimmickList_b__0__);
    sub_1B885B0(&EventQuestCooltimeComponent___c__DisplayClass11_0_TypeInfo);
    sub_1B885B0(&StringLiteral_20779/*"isActiveCooltimeGimmick"*/);
    byte_4A5F0E8 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  if ( gimmickList && this->fields.spotCooltimeList && gimmickList->fields._size )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1B8880C(0LL, v8);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventQuestCooltimeMaster___);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v33,
      (System_Collections_Generic_List_object__o *)gimmickList,
      (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_MapGimmickComponent__GetEnumerator__);
    v34 = v33;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v34,
              (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__MoveNext__) )
    {
      current = (MapGimmickComponent_o *)v34.fields._current;
      v11 = sub_1B887FC(EventQuestCooltimeComponent___c__DisplayClass11_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v11, 0LL);
      if ( !current )
        sub_1B8880C(v12, v13);
      mMapCtrl_MapGimmickInfo = current->fields.mMapCtrl_MapGimmickInfo;
      if ( !mMapCtrl_MapGimmickInfo )
        sub_1B8880C(v12, v13);
      Mine = MapControl_MapGimmickInfo__GetMine(current->fields.mMapCtrl_MapGimmickInfo, 0LL);
      v17 = Mine;
      if ( !Mine )
        sub_1B8880C(0LL, v16);
      if ( Mine->fields.dispCondType == 17 )
        dispTargetId = Mine->fields.dispTargetId;
      else
        dispTargetId = 0;
      if ( Mine->fields.dispCondType2 == 17 )
        dispTargetId = Mine->fields.dispTargetId2;
      if ( dispTargetId )
      {
        if ( !MasterData_object )
          sub_1B8880C(Mine, v16);
        Entity = EventQuestCooltimeMaster__GetEntity(
                   (EventQuestCooltimeMaster_o *)MasterData_object,
                   eventId,
                   dispTargetId,
                   1,
                   0LL);
        if ( !v11 )
          sub_1B8880C(Entity, Entity);
        *(_QWORD *)(v11 + 16) = Entity;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)Entity, v20, v21);
        if ( *(_QWORD *)(v11 + 16) )
        {
          ScriptIntParam = MapGimmickEntity__getScriptIntParam(v17, (System_String_o *)StringLiteral_20779/*"isActiveCooltimeGimmick"*/, -1, 0LL);
          spotCooltimeList = (System_Collections_Generic_List_object__o *)this->fields.spotCooltimeList;
          v24 = ScriptIntParam;
          v25 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_SpotCooltimeComponent__TypeInfo);
          System_Predicate_object____ctor(
            v25,
            (Il2CppObject *)v11,
            Method_EventQuestCooltimeComponent___c__DisplayClass11_0__SetGimmickList_b__0__,
            0LL);
          if ( !spotCooltimeList )
            sub_1B8880C(v26, v27);
          v28 = System_Collections_Generic_List_object___Find(
                  spotCooltimeList,
                  (System_Predicate_T__o *)v25,
                  (const MethodInfo_34FDE9C *)Method_System_Collections_Generic_List_SpotCooltimeComponent__Find__);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          v29 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v28, 0LL, 0LL);
          if ( v29 )
          {
            if ( !v28 )
              sub_1B8880C(v29, v30);
            SpotCooltimeComponent__SetSpotActiveGimmick((SpotCooltimeComponent_o *)v28, current, v24 == 1, v31);
          }
          else
          {
            v32 = v24 != 1 && mMapCtrl_MapGimmickInfo->fields.dispType == 1;
            MapGimmickComponent__SetDispAnimQuick(current, v32, 0LL);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v34,
      (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__Dispose__);
  }
}


void __fastcall EventQuestCooltimeComponent__SetSpot(
        EventQuestCooltimeComponent_o *this,
        UserEventQuestCooltimeEntity_o *userCooltimeEntity,
        SrcSpotBasePrefab_o *targetSpot,
        const MethodInfo *method)
{
  Il2CppObject *spotCooltimePrefab; // x22
  Il2CppObject *v8; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v10; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  EventQuestCooltimeComponent_c *v14; // x0
  float *p_x; // x8
  UnityEngine_GameObject_o *gameObject; // x23
  const MethodInfo *v17; // x3
  Il2CppObject *v18; // x22
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x8
  _QWORD *v22; // x9
  __int64 klass_low; // x10
  __int64 v24; // x8
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5F0E7 & 1) == 0 )
  {
    sub_1B885B0(&EventQuestCooltimeComponent_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_SpotCooltimeComponent___);
    sub_1B885B0(&Method_System_Collections_Generic_List_SpotCooltimeComponent__Add__);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5F0E7 = 1;
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
      v8 = UnityEngine_Object__Instantiate_object_(
             spotCooltimePrefab,
             (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SetParent_33729948((UnityEngine_GameObject_o *)v8, this->fields.spotCooltimeRoot, 0LL);
      if ( !targetSpot )
        goto LABEL_23;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetSpot, 0LL);
      if ( !transform )
        goto LABEL_23;
      position = UnityEngine_Transform__get_position(transform, 0LL);
      x = position.fields.x;
      y = position.fields.y;
      z = position.fields.z;
      v14 = EventQuestCooltimeComponent_TypeInfo;
      if ( !EventQuestCooltimeComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventQuestCooltimeComponent_TypeInfo);
        v14 = EventQuestCooltimeComponent_TypeInfo;
      }
      p_x = &v14->static_fields->DEFAULT_COOLTIME_POSITION_OFFSET.fields.x;
      v26.fields.x = x + *p_x;
      v26.fields.y = y + p_x[1];
      v26.fields.z = z + p_x[2];
      GameObjectExtensions__SetPosition((UnityEngine_GameObject_o *)v8, v26, 0LL);
      if ( !v8 )
        goto LABEL_23;
      gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v8, 0LL);
      if ( !byte_4A55CE6 )
      {
        sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
        byte_4A55CE6 = 1;
      }
      GameObjectExtensions__SetLocalScale(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      transform = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)v8,
                                               (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_SpotCooltimeComponent___);
      if ( !transform
        || (v18 = (Il2CppObject *)transform,
            SpotCooltimeComponent__Setup((SpotCooltimeComponent_o *)transform, userCooltimeEntity, targetSpot, v17),
            (transform = (UnityEngine_Transform_o *)this->fields.spotCooltimeList) == 0LL)
        || (v21 = *(_QWORD *)&transform->fields.m_CachedPtr,
            v22 = Method_System_Collections_Generic_List_SpotCooltimeComponent__Add__,
            ++HIDWORD(transform[1].klass),
            !v21) )
      {
LABEL_23:
        sub_1B8880C(transform, v10);
      }
      klass_low = SLODWORD(transform[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(v21 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)transform,
          v18,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v24 = v21 + 8 * klass_low;
        LODWORD(transform[1].klass) = klass_low + 1;
        *(_QWORD *)(v24 + 32) = v18;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 32), (int32_t)v18, v19, v20);
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
    sub_1B8880C(this, spotCooltime);
  return (_DWORD)userCooltimeEntity == targetCooltimeEntity->fields.questId;
}