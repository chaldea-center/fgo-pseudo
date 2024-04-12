void __fastcall EventQuestCooltimeComponent___cctor(const MethodInfo *method)
{
  struct EventQuestCooltimeComponent_StaticFields *static_fields; // x8

  if ( (byte_42B03F9 & 1) == 0 )
  {
    sub_B52984(&EventQuestCooltimeComponent_TypeInfo);
    byte_42B03F9 = 1;
  }
  static_fields = EventQuestCooltimeComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DEFAULT_COOLTIME_POSITION_OFFSET.fields.x = 0LL;
  static_fields->DEFAULT_COOLTIME_POSITION_OFFSET.fields.z = 0.0;
}


void __fastcall EventQuestCooltimeComponent___ctor(EventQuestCooltimeComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_42B03F8 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_SpotCooltimeComponent___ctor__);
    sub_B52984(&System_Collections_Generic_List_SpotCooltimeComponent__TypeInfo);
    byte_42B03F8 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B52A54(System_Collections_Generic_List_SpotCooltimeComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_2FF0940 *)Method_System_Collections_Generic_List_SpotCooltimeComponent___ctor__);
  this->fields.spotCooltimeList = (struct System_Collections_Generic_List_SpotCooltimeComponent__o *)v3;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.spotCooltimeList,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventQuestCooltimeComponent__DestroyObjects(
        EventQuestCooltimeComponent_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *spotCooltimePrefab; // x21
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  struct System_Collections_Generic_List_SpotCooltimeComponent__o *spotCooltimeList; // x0
  _BOOL8 v11; // x0
  __int64 v12; // x1
  Il2CppObject *current; // x20
  UnityEngine_Object_o *gameObject; // x20
  __int64 v15; // x1
  struct System_Collections_Generic_List_SpotCooltimeComponent__o *v16; // x0
  System_Collections_Generic_List_Enumerator_T__o v17; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42B03F4 & 1) == 0 )
  {
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_SpotCooltimeComponent__Clear__);
    sub_B52984(&Method_System_Collections_Generic_List_SpotCooltimeComponent__GetEnumerator__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B03F4 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  spotCooltimePrefab = (UnityEngine_Object_o *)this->fields.spotCooltimePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(spotCooltimePrefab, 0LL, 0LL) )
  {
    this->fields.spotCooltimePrefab = 0LL;
    sub_B52920((BattleServantConfConponent_o *)&this->fields.spotCooltimePrefab, 0LL, v4, v5, v6, v7, v8, v9);
  }
  spotCooltimeList = this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v17,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)spotCooltimeList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_SpotCooltimeComponent__GetEnumerator__);
    v18 = v17;
    while ( 1 )
    {
      v11 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v18,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__MoveNext__);
      if ( !v11 )
        break;
      current = v18.fields.current;
      if ( !v18.fields.current )
        sub_B52A5C(v11, v12);
      SpotCooltimeComponent__OnDestroyObject((SpotCooltimeComponent_o *)v18.fields.current, 0LL);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)current,
                                             0LL);
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
      {
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        UnityEngine_Object__Destroy_35616956(gameObject, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v18,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__Dispose__);
    v16 = this->fields.spotCooltimeList;
    if ( !v16 )
      sub_B52A5C(0LL, v15);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v16,
      (const MethodInfo_2FF1A0C *)Method_System_Collections_Generic_List_SpotCooltimeComponent__Clear__);
  }
}


bool __fastcall EventQuestCooltimeComponent__IsActiveEventQuestCooltime(int32_t eventId, const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v4; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42B03F7 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventDetailMaster___);
    sub_B52984(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_42B03F7 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_10;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_23E2334 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_10:
    sub_B52A5C(Instance, v4);
  return EventDetailEntity__IsQuestCooltime((EventDetailEntity_o *)entity, 0LL);
}


void __fastcall EventQuestCooltimeComponent__SetAssetData(
        EventQuestCooltimeComponent_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  EventQuestCooltimeComponent_o *v4; // x19
  System_Int32_array **Object_WarBoardWaitTimeSetting; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  v4 = this;
  if ( (byte_42B03F3 & 1) == 0 )
  {
    sub_B52984(&Method_AssetData_GetObject_GameObject____68579952);
    this = (EventQuestCooltimeComponent_o *)sub_B52984(&StringLiteral_8992/*"MapGimmickEffect_SpotCooltime"*/);
    byte_42B03F3 = 1;
  }
  if ( !assetData )
    sub_B52A5C(this, assetData);
  Object_WarBoardWaitTimeSetting = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                            assetData,
                                                            (System_String_o *)StringLiteral_8992/*"MapGimmickEffect_SpotCooltime"*/,
                                                            (const MethodInfo_1A3B904 *)Method_AssetData_GetObject_GameObject____68579952);
  v4->fields.spotCooltimePrefab = (struct UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting;
  sub_B52920(
    (BattleServantConfConponent_o *)&v4->fields.spotCooltimePrefab,
    Object_WarBoardWaitTimeSetting,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
}


void __fastcall EventQuestCooltimeComponent__SetGimmickList(
        EventQuestCooltimeComponent_o *this,
        int32_t eventId,
        System_Collections_Generic_List_MapGimmickComponent__o *gimmickList,
        const MethodInfo *method)
{
  WebViewManager_o *Instance; // x0
  __int64 v7; // x1
  EventQuestCooltimeMaster_o *MasterData_WarQuestSelectionMaster; // x21
  MapGimmickComponent_o *current; // x22
  __int64 v10; // x24
  __int64 v11; // x0
  __int64 v12; // x1
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x23
  MapGimmickEntity_o *Mine; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x4
  MapGimmickEntity_o *v17; // x25
  int32_t dispTargetId; // w2
  System_Int32_array **Entity; // x0
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  int32_t ScriptIntParam; // w25
  struct System_Collections_Generic_List_SpotCooltimeComponent__o *spotCooltimeList; // x26
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v28; // x27
  __int64 v29; // x0
  __int64 v30; // x1
  UnityEngine_Object_o *v31; // x24
  _BOOL8 v32; // x0
  __int64 v33; // x1
  bool v34; // w1
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42B03F6 & 1) == 0 )
  {
    sub_B52984(&Method_DataManager_GetMasterData_EventQuestCooltimeMaster___);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__Dispose__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__MoveNext__);
    sub_B52984(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__get_Current__);
    sub_B52984(&Method_System_Collections_Generic_List_SpotCooltimeComponent__Find__);
    sub_B52984(&Method_System_Collections_Generic_List_MapGimmickComponent__GetEnumerator__);
    sub_B52984(&Method_System_Collections_Generic_List_MapGimmickComponent__get_Count__);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    sub_B52984(&Method_System_Predicate_SpotCooltimeComponent___ctor__);
    sub_B52984(&System_Predicate_SpotCooltimeComponent__TypeInfo);
    sub_B52984(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_B52984(&Method_EventQuestCooltimeComponent___c__DisplayClass11_0__SetGimmickList_b__0__);
    sub_B52984(&EventQuestCooltimeComponent___c__DisplayClass11_0_TypeInfo);
    sub_B52984(&StringLiteral_20070/*"isActiveCooltimeGimmick"*/);
    byte_42B03F6 = 1;
  }
  memset(&v37, 0, sizeof(v37));
  if ( gimmickList && this->fields.spotCooltimeList && gimmickList->fields._size )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2B75DB0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B52A5C(0LL, v7);
    MasterData_WarQuestSelectionMaster = (EventQuestCooltimeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         (DataManager_o *)Instance,
                                                                         (const MethodInfo_1A4F184 *)Method_DataManager_GetMasterData_EventQuestCooltimeMaster___);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v36,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)gimmickList,
      (const MethodInfo_2FF2480 *)Method_System_Collections_Generic_List_MapGimmickComponent__GetEnumerator__);
    v37 = v36;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v37,
              (const MethodInfo_201195C *)Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__MoveNext__) )
    {
      current = (MapGimmickComponent_o *)v37.fields.current;
      v10 = sub_B52A54(EventQuestCooltimeComponent___c__DisplayClass11_0_TypeInfo);
      EventQuestCooltimeComponent___c__DisplayClass11_0___ctor(
        (EventQuestCooltimeComponent___c__DisplayClass11_0_o *)v10,
        0LL);
      if ( !current )
        sub_B52A5C(v11, v12);
      mMapCtrl_MapGimmickInfo = current->fields.mMapCtrl_MapGimmickInfo;
      if ( !mMapCtrl_MapGimmickInfo )
        sub_B52A5C(v11, v12);
      Mine = MapControl_MapGimmickInfo__GetMine(current->fields.mMapCtrl_MapGimmickInfo, 0LL);
      v17 = Mine;
      if ( !Mine )
        sub_B52A5C(0LL, v15);
      if ( Mine->fields.dispCondType == 17 )
        dispTargetId = Mine->fields.dispTargetId;
      else
        dispTargetId = 0;
      if ( Mine->fields.dispCondType2 == 17 )
        dispTargetId = Mine->fields.dispTargetId2;
      if ( dispTargetId )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          sub_B52A5C(Mine, v15);
        Entity = (System_Int32_array **)EventQuestCooltimeMaster__GetEntity(
                                          MasterData_WarQuestSelectionMaster,
                                          eventId,
                                          dispTargetId,
                                          1,
                                          v16);
        if ( !v10 )
          sub_B52A5C(Entity, Entity);
        *(_QWORD *)(v10 + 16) = Entity;
        sub_B52920((BattleServantConfConponent_o *)(v10 + 16), Entity, v20, v21, v22, v23, v24, v25);
        if ( *(_QWORD *)(v10 + 16) )
        {
          ScriptIntParam = MapGimmickEntity__getScriptIntParam(v17, (System_String_o *)StringLiteral_20070/*"isActiveCooltimeGimmick"*/, -1, 0LL);
          spotCooltimeList = this->fields.spotCooltimeList;
          v28 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B52A54(System_Predicate_SpotCooltimeComponent__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v28,
            (Il2CppObject *)v10,
            Method_EventQuestCooltimeComponent___c__DisplayClass11_0__SetGimmickList_b__0__,
            (const MethodInfo_28D2DBC *)Method_System_Predicate_SpotCooltimeComponent___ctor__);
          if ( !spotCooltimeList )
            sub_B52A5C(v29, v30);
          v31 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)spotCooltimeList,
                                          (System_Predicate_T__o *)v28,
                                          (const MethodInfo_2FF1EC4 *)Method_System_Collections_Generic_List_SpotCooltimeComponent__Find__);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v32 = UnityEngine_Object__op_Inequality(v31, 0LL, 0LL);
          if ( v32 )
          {
            if ( !v31 )
              sub_B52A5C(v32, v33);
            SpotCooltimeComponent__SetSpotActiveGimmick(
              (SpotCooltimeComponent_o *)v31,
              current,
              ScriptIntParam == 1,
              0LL);
          }
          else
          {
            v34 = ScriptIntParam != 1 && mMapCtrl_MapGimmickInfo->fields.dispType == 1;
            MapGimmickComponent__SetDispAnimQuick(current, v34, 0LL);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v37,
      (const MethodInfo_2011958 *)Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__Dispose__);
  }
}


void __fastcall EventQuestCooltimeComponent__SetSpot(
        EventQuestCooltimeComponent_o *this,
        UserEventQuestCooltimeEntity_o *userCooltimeEntity,
        SrcSpotBasePrefab_o *targetSpot,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_o *spotCooltimePrefab; // x22
  UnityEngine_GameObject_o *v8; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v10; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  EventQuestCooltimeComponent_c *v14; // x0
  float *p_x; // x8
  UnityEngine_GameObject_o *gameObject; // x23
  EventMissionProgressRequest_Argument_ProgressData_o *v17; // x22
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42B03F5 & 1) == 0 )
  {
    sub_B52984(&EventQuestCooltimeComponent_TypeInfo);
    sub_B52984(&Method_UnityEngine_GameObject_GetComponent_SpotCooltimeComponent___);
    sub_B52984(&Method_System_Collections_Generic_List_SpotCooltimeComponent__Add__);
    sub_B52984(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_B52984(&UnityEngine_Object_TypeInfo);
    byte_42B03F5 = 1;
  }
  if ( userCooltimeEntity )
  {
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetSpot, 0LL, 0LL) )
    {
      spotCooltimePrefab = this->fields.spotCooltimePrefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v8 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                         (UnityEngine_UI_Dropdown_DropdownItem_o *)spotCooltimePrefab,
                                         (const MethodInfo_1F711B8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SetParent_32090952(v8, this->fields.spotCooltimeRoot, 0LL);
      if ( !targetSpot )
        goto LABEL_21;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetSpot, 0LL);
      if ( !transform )
        goto LABEL_21;
      position = UnityEngine_Transform__get_position(transform, 0LL);
      x = position.fields.x;
      y = position.fields.y;
      z = position.fields.z;
      v14 = EventQuestCooltimeComponent_TypeInfo;
      if ( (BYTE3(EventQuestCooltimeComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventQuestCooltimeComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventQuestCooltimeComponent_TypeInfo);
        v14 = EventQuestCooltimeComponent_TypeInfo;
      }
      p_x = &v14->static_fields->DEFAULT_COOLTIME_POSITION_OFFSET.fields.x;
      v19.fields.x = x + *p_x;
      v19.fields.y = y + p_x[1];
      v19.fields.z = z + p_x[2];
      GameObjectExtensions__SetPosition(v8, v19, 0LL);
      if ( !v8
        || (gameObject = UnityEngine_GameObject__get_gameObject(v8, 0LL),
            one = UnityEngine_Vector3__get_one(0LL),
            GameObjectExtensions__SetLocalScale(gameObject, one, 0LL),
            (transform = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v8,
                                                      (const MethodInfo_1B7B1B8 *)Method_UnityEngine_GameObject_GetComponent_SpotCooltimeComponent___)) == 0LL)
        || (v17 = (EventMissionProgressRequest_Argument_ProgressData_o *)transform,
            SpotCooltimeComponent__Setup((SpotCooltimeComponent_o *)transform, userCooltimeEntity, targetSpot, 0LL),
            (transform = (UnityEngine_Transform_o *)this->fields.spotCooltimeList) == 0LL) )
      {
LABEL_21:
        sub_B52A5C(transform, v10);
      }
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transform,
        v17,
        (const MethodInfo_2FF1604 *)Method_System_Collections_Generic_List_SpotCooltimeComponent__Add__);
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
  EventQuestCooltimeComponent___c__DisplayClass11_0_o *v3; // x19
  struct EventQuestCooltimeEntity_o *targetCooltimeEntity; // x8

  if ( !spotCooltime
    || (v3 = this,
        this = (EventQuestCooltimeComponent___c__DisplayClass11_0_o *)SpotCooltimeComponent__get_QuestId(
                                                                        spotCooltime,
                                                                        0LL),
        (targetCooltimeEntity = v3->fields.targetCooltimeEntity) == 0LL) )
  {
    sub_B52A5C(this, spotCooltime);
  }
  return (_DWORD)this == targetCooltimeEntity->fields.questId;
}