void EventQuestCooltimeComponent___cctor(const MethodInfo *method)
{
  struct EventQuestCooltimeComponent_StaticFields *static_fields; // x8

  if ( (byte_596A951 & 1) == 0 )
  {
    sub_2213A60(&EventQuestCooltimeComponent_TypeInfo);
    byte_596A951 = 1;
  }
  static_fields = EventQuestCooltimeComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DEFAULT_COOLTIME_POSITION_OFFSET.fields.x = 0;
  static_fields->DEFAULT_COOLTIME_POSITION_OFFSET.fields.z = 0.0;
}


void EventQuestCooltimeComponent___ctor(EventQuestCooltimeComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_596A950 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_SpotCooltimeComponent___ctor__);
    sub_2213A60(&System_Collections_Generic_List_SpotCooltimeComponent__TypeInfo);
    byte_596A950 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SpotCooltimeComponent__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SpotCooltimeComponent___ctor__);
  this->fields.spotCooltimeList = (struct System_Collections_Generic_List_SpotCooltimeComponent__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.spotCooltimeList, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void EventQuestCooltimeComponent__DestroyObjects(EventQuestCooltimeComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *spotCooltimePrefab; // x21
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Collections_Generic_List_object__o *spotCooltimeList; // x0
  _BOOL8 v12; // x0
  const MethodInfo *v13; // x1
  Il2CppObject *current; // x20
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Object_o *gameObject; // x20
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x0
  __int64 v21; // x1
  struct System_Collections_Generic_List_SpotCooltimeComponent__o *v22; // x8
  int32_t size; // w2
  int v24; // w9
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_596A94C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_SpotCooltimeComponent__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_List_SpotCooltimeComponent__GetEnumerator__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A94C = 1;
  }
  memset(&v26, 0, sizeof(v26));
  spotCooltimePrefab = (UnityEngine_Object_o *)this->fields.spotCooltimePrefab;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(spotCooltimePrefab, 0, 0) )
  {
    this->fields.spotCooltimePrefab = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.spotCooltimePrefab, 0, v5, v6, v7, v8, v9, v10);
  }
  spotCooltimeList = (System_Collections_Generic_List_object__o *)this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v25,
      spotCooltimeList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_SpotCooltimeComponent__GetEnumerator__);
    v26 = v25;
    v25.fields._list = 0;
    *(_QWORD *)&v25.fields._index = &v26;
    while ( 1 )
    {
      v12 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v26,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__MoveNext__);
      if ( !v12 )
        break;
      current = v26.fields._current;
      if ( !v26.fields._current )
        sub_2213CDC(v12, v13);
      SpotCooltimeComponent__OnDestroyObject((SpotCooltimeComponent_o *)v26.fields._current, v13);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)current, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15, v16);
      if ( UnityEngine_Object__op_Inequality(gameObject, 0, 0) )
      {
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18, v19);
        UnityEngine_Object__Destroy_83459800(gameObject, 0);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v26,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__Dispose__);
    v22 = this->fields.spotCooltimeList;
    if ( !v22 )
      sub_2213CDC(v20, v21);
    size = v22->fields._size;
    v24 = v22->fields._version + 1;
    v22->fields._size = 0;
    v22->fields._version = v24;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v22->fields._items, 0, size, 0);
  }
}


bool EventQuestCooltimeComponent__IsActiveEventQuestCooltime(int32_t eventId, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_596A94F & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_2213A60(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_596A94F = 1;
  }
  entity = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_10;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_3F10B80 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
LABEL_10:
    sub_2213CDC(Instance, v4);
  return EventDetailEntity__IsQuestCooltime((EventDetailEntity_o *)entity, 0);
}


void EventQuestCooltimeComponent__SetAssetData(
        EventQuestCooltimeComponent_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  EventQuestCooltimeComponent_o *v4; // x19
  Il2CppObject *Object_object__58532980; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  v4 = this;
  if ( (byte_596A94B & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData_GetObject_GameObject____91708320);
    this = (EventQuestCooltimeComponent_o *)sub_2213A60(&StringLiteral_9280/*"MapGimmickEffect_SpotCooltime"*/);
    byte_596A94B = 1;
  }
  if ( !assetData )
    sub_2213CDC(this, assetData);
  Object_object__58532980 = AssetData__GetObject_object__58532980(
                              assetData,
                              (System_String_o *)StringLiteral_9280/*"MapGimmickEffect_SpotCooltime"*/,
                              (const MethodInfo_37D2474 *)Method_AssetData_GetObject_GameObject____91708320);
  v4->fields.spotCooltimePrefab = (struct UnityEngine_GameObject_o *)Object_object__58532980;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v4->fields.spotCooltimePrefab,
    (int32_t)Object_object__58532980,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void EventQuestCooltimeComponent__SetGimmickList(
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
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  int32_t ScriptIntParam; // w0
  System_Collections_Generic_List_object__o *spotCooltimeList; // x26
  int32_t v28; // w25
  System_Predicate_object__o *v29; // x27
  __int64 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x2
  Il2CppObject *v34; // x24
  _BOOL8 v35; // x0
  __int64 v36; // x1
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  __int64 v43; // x10
  MissionNaviTransitionBoardItem_o *p_monitor; // x0
  const MethodInfo *v45; // x1
  bool v46; // w1
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_596A94E & 1) == 0 )
  {
    sub_2213A60(&Method_DataManager_GetMasterData_EventQuestCooltimeMaster___);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_SpotCooltimeComponent__Find__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapGimmickComponent__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_MapGimmickComponent__get_Count__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&System_Predicate_SpotCooltimeComponent__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_EventQuestCooltimeComponent___c__DisplayClass11_0__SetGimmickList_b__0__);
    sub_2213A60(&EventQuestCooltimeComponent___c__DisplayClass11_0_TypeInfo);
    sub_2213A60(&StringLiteral_21909/*"isActiveCooltimeGimmick"*/);
    byte_596A94E = 1;
  }
  memset(&v48, 0, sizeof(v48));
  if ( gimmickList && this->fields.spotCooltimeList && gimmickList->fields._size )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_2213CDC(0, v8);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_385636C *)Method_DataManager_GetMasterData_EventQuestCooltimeMaster___);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v47,
      (System_Collections_Generic_List_object__o *)gimmickList,
      (const MethodInfo_448473C *)Method_System_Collections_Generic_List_MapGimmickComponent__GetEnumerator__);
    v48 = v47;
    v47.fields._list = 0;
    *(_QWORD *)&v47.fields._index = &v48;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v48,
              (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__MoveNext__) )
    {
      current = (MapGimmickComponent_o *)v48.fields._current;
      v11 = sub_2213CCC(EventQuestCooltimeComponent___c__DisplayClass11_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v11, 0);
      if ( !current )
        sub_2213CDC(v12, v13);
      mMapCtrl_MapGimmickInfo = current->fields.mMapCtrl_MapGimmickInfo;
      if ( !mMapCtrl_MapGimmickInfo )
        sub_2213CDC(v12, v13);
      Mine = MapControl_MapGimmickInfo__GetMine(current->fields.mMapCtrl_MapGimmickInfo, 0);
      v17 = Mine;
      if ( !Mine )
        sub_2213CDC(0, v16);
      if ( Mine->fields.dispCondType == 17 )
        dispTargetId = Mine->fields.dispTargetId;
      else
        dispTargetId = 0;
      if ( Mine->fields.dispCondType2 == 17 )
        dispTargetId = Mine->fields.dispTargetId2;
      if ( dispTargetId )
      {
        if ( !MasterData_object )
          sub_2213CDC(Mine, v16);
        Entity = EventQuestCooltimeMaster__GetEntity(
                   (EventQuestCooltimeMaster_o *)MasterData_object,
                   eventId,
                   dispTargetId,
                   1,
                   0);
        if ( !v11 )
          sub_2213CDC(Entity, Entity);
        *(_QWORD *)(v11 + 16) = Entity;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 16), (int32_t)Entity, v20, v21, v22, v23, v24, v25);
        if ( *(_QWORD *)(v11 + 16) )
        {
          ScriptIntParam = MapGimmickEntity__getScriptIntParam(v17, (System_String_o *)StringLiteral_21909/*"isActiveCooltimeGimmick"*/, -1, 0);
          spotCooltimeList = (System_Collections_Generic_List_object__o *)this->fields.spotCooltimeList;
          v28 = ScriptIntParam;
          v29 = (System_Predicate_object__o *)sub_2213CCC(System_Predicate_SpotCooltimeComponent__TypeInfo);
          System_Predicate_object____ctor(
            v29,
            (Il2CppObject *)v11,
            Method_EventQuestCooltimeComponent___c__DisplayClass11_0__SetGimmickList_b__0__,
            0);
          if ( !spotCooltimeList )
            sub_2213CDC(v30, v31);
          v34 = System_Collections_Generic_List_object___Find(
                  spotCooltimeList,
                  (System_Predicate_T__o *)v29,
                  (const MethodInfo_44842C0 *)Method_System_Collections_Generic_List_SpotCooltimeComponent__Find__);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v32, v33);
          v35 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v34, 0, 0);
          if ( v35 )
          {
            if ( !v34 )
              sub_2213CDC(v35, v36);
            v43 = 88;
            if ( v28 == 1 )
              p_monitor = (MissionNaviTransitionBoardItem_o *)&v34[5];
            else
              p_monitor = (MissionNaviTransitionBoardItem_o *)&v34[5].monitor;
            if ( v28 == 1 )
              v43 = 80;
            *(Il2CppClass **)((char *)&v34->klass + v43) = (Il2CppClass *)current;
            sub_2213A04(p_monitor, (int32_t)current, v37, v38, v39, v40, v41, v42);
            SpotCooltimeComponent__UpdateDisp((SpotCooltimeComponent_o *)v34, v45);
          }
          else
          {
            v46 = v28 != 1 && mMapCtrl_MapGimmickInfo->fields.dispType == 1;
            MapGimmickComponent__SetDispAnimQuick(current, v46, 0);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v48,
      (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__Dispose__);
  }
}


void EventQuestCooltimeComponent__SetSpot(
        EventQuestCooltimeComponent_o *this,
        UserEventQuestCooltimeEntity_o *userCooltimeEntity,
        SrcSpotBasePrefab_o *targetSpot,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *spotCooltimePrefab; // x22
  Il2CppObject *v10; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x2
  EventQuestCooltimeComponent_c *v15; // x0
  float *p_x; // x8
  UnityEngine_GameObject_o *gameObject; // x23
  const MethodInfo *v18; // x3
  Il2CppObject *v19; // x22
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_Collections_Generic_List_object__o *spotCooltimeList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v28; // x10
  __int64 size; // x11
  Il2CppClass **v30; // x0
  UnityEngine_Vector3_o position; // 0:kr00_12.12
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_596A94D & 1) == 0 )
  {
    sub_2213A60(&EventQuestCooltimeComponent_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_SpotCooltimeComponent___);
    sub_2213A60(&Method_System_Collections_Generic_List_SpotCooltimeComponent__Add__);
    sub_2213A60(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596A94D = 1;
  }
  if ( userCooltimeEntity )
  {
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, userCooltimeEntity, targetSpot);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetSpot, 0, 0) )
    {
      spotCooltimePrefab = (Il2CppObject *)this->fields.spotCooltimePrefab;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v7, v8);
      v10 = UnityEngine_Object__Instantiate_object_(
              spotCooltimePrefab,
              (const MethodInfo_38F34CC *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SetParent_42897232((UnityEngine_GameObject_o *)v10, this->fields.spotCooltimeRoot, 0);
      if ( !targetSpot )
        goto LABEL_23;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetSpot, 0);
      if ( !transform )
        goto LABEL_23;
      position = UnityEngine_Transform__get_position(transform, 0);
      v15 = EventQuestCooltimeComponent_TypeInfo;
      if ( !*(&EventQuestCooltimeComponent_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(EventQuestCooltimeComponent_TypeInfo, v13, v14);
        v15 = EventQuestCooltimeComponent_TypeInfo;
      }
      p_x = &v15->static_fields->DEFAULT_COOLTIME_POSITION_OFFSET.fields.x;
      v32.fields.z = position.fields.z + p_x[2];
      v32.fields.x = position.fields.x + *p_x;
      v32.fields.y = position.fields.y + p_x[1];
      GameObjectExtensions__SetPosition((UnityEngine_GameObject_o *)v10, v32, 0);
      if ( !v10 )
        goto LABEL_23;
      gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v10, 0);
      if ( !byte_5969AE5 )
      {
        sub_2213A60(&UnityEngine_Vector3_TypeInfo);
        byte_5969AE5 = 1;
      }
      GameObjectExtensions__SetLocalScale(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      transform = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)v10,
                                               (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_SpotCooltimeComponent___);
      if ( !transform
        || (v19 = (Il2CppObject *)transform,
            SpotCooltimeComponent__Setup((SpotCooltimeComponent_o *)transform, userCooltimeEntity, targetSpot, v18),
            (spotCooltimeList = (System_Collections_Generic_List_object__o *)this->fields.spotCooltimeList) == 0)
        || (items = spotCooltimeList->fields._items,
            v28 = Method_System_Collections_Generic_List_SpotCooltimeComponent__Add__,
            ++spotCooltimeList->fields._version,
            !items) )
      {
LABEL_23:
        sub_2213CDC(transform, v12);
      }
      size = spotCooltimeList->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          spotCooltimeList,
          v19,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
      }
      else
      {
        v30 = &items->obj.klass + size;
        v30[4] = (Il2CppClass *)v19;
        spotCooltimeList->fields._size = size + 1;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v30 + 4), (int32_t)v19, v20, v21, v22, v23, v24, v25);
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
    sub_2213CDC(this, spotCooltime);
  return (_DWORD)userCooltimeEntity == targetCooltimeEntity->fields.questId;
}