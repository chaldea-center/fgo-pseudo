void __fastcall EventQuestCooltimeComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct EventQuestCooltimeComponent_StaticFields *static_fields; // x8

  if ( (byte_418791E & 1) == 0 )
  {
    sub_B2C35C(&EventQuestCooltimeComponent_TypeInfo, v1);
    byte_418791E = 1;
  }
  static_fields = EventQuestCooltimeComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DEFAULT_COOLTIME_POSITION_OFFSET.fields.x = 0LL;
  static_fields->DEFAULT_COOLTIME_POSITION_OFFSET.fields.z = 0.0;
}


void __fastcall EventQuestCooltimeComponent___ctor(EventQuestCooltimeComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v4; // x20
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7

  if ( (byte_418791D & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_SpotCooltimeComponent___ctor__, method);
    sub_B2C35C(&System_Collections_Generic_List_SpotCooltimeComponent__TypeInfo, v3);
    byte_418791D = 1;
  }
  v4 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_SpotCooltimeComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v4,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_SpotCooltimeComponent___ctor__);
  this->fields.spotCooltimeList = (struct System_Collections_Generic_List_SpotCooltimeComponent__o *)v4;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.spotCooltimeList,
    (System_Int32_array **)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  struct System_Collections_Generic_List_SpotCooltimeComponent__o *spotCooltimeList; // x0
  _BOOL8 v16; // x0
  __int64 v17; // x1
  Il2CppObject *current; // x20
  UnityEngine_Object_o *gameObject; // x20
  __int64 v20; // x1
  struct System_Collections_Generic_List_SpotCooltimeComponent__o *v21; // x0
  System_Collections_Generic_List_Enumerator_T__o v22; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4187919 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__Dispose__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__MoveNext__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__get_Current__, v4);
    sub_B2C35C(&Method_System_Collections_Generic_List_SpotCooltimeComponent__Clear__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_SpotCooltimeComponent__GetEnumerator__, v6);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v7);
    byte_4187919 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  spotCooltimePrefab = (UnityEngine_Object_o *)this->fields.spotCooltimePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(spotCooltimePrefab, 0LL, 0LL) )
  {
    this->fields.spotCooltimePrefab = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.spotCooltimePrefab, 0LL, v9, v10, v11, v12, v13, v14);
  }
  spotCooltimeList = this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v22,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)spotCooltimeList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_SpotCooltimeComponent__GetEnumerator__);
    v23 = v22;
    while ( 1 )
    {
      v16 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v23,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__MoveNext__);
      if ( !v16 )
        break;
      current = v23.fields.current;
      if ( !v23.fields.current )
        sub_B2C434(v16, v17);
      SpotCooltimeComponent__OnDestroyObject((SpotCooltimeComponent_o *)v23.fields.current, 0LL);
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
        UnityEngine_Object__Destroy_35314896(gameObject, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v23,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__Dispose__);
    v21 = this->fields.spotCooltimeList;
    if ( !v21 )
      sub_B2C434(0LL, v20);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v21,
      (const MethodInfo_2EF4868 *)Method_System_Collections_Generic_List_SpotCooltimeComponent__Clear__);
  }
}


bool __fastcall EventQuestCooltimeComponent__IsActiveEventQuestCooltime(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  __int64 v6; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_418791C & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_B2C35C(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_418791C = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_10;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_24E412C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_10:
    sub_B2C434(Instance, v6);
  return EventDetailEntity__IsQuestCooltime((EventDetailEntity_o *)entity, 0LL);
}


void __fastcall EventQuestCooltimeComponent__SetAssetData(
        EventQuestCooltimeComponent_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  EventQuestCooltimeComponent_o *v4; // x19
  __int64 v5; // x1
  System_Int32_array **Object_WarBoardWaitTimeSetting; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  v4 = this;
  if ( (byte_4187918 & 1) == 0 )
  {
    sub_B2C35C(&Method_AssetData_GetObject_GameObject____67377624, assetData);
    this = (EventQuestCooltimeComponent_o *)sub_B2C35C(&StringLiteral_8937/*"MapGimmickEffect_SpotCooltime"*/, v5);
    byte_4187918 = 1;
  }
  if ( !assetData )
    sub_B2C434(this, assetData);
  Object_WarBoardWaitTimeSetting = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                            assetData,
                                                            (System_String_o *)StringLiteral_8937/*"MapGimmickEffect_SpotCooltime"*/,
                                                            (const MethodInfo_1720344 *)Method_AssetData_GetObject_GameObject____67377624);
  v4->fields.spotCooltimePrefab = (struct UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v4->fields.spotCooltimePrefab,
    Object_WarBoardWaitTimeSetting,
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
  __int64 v6; // x1
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
  WebViewManager_o *Instance; // x0
  __int64 v20; // x1
  EventQuestCooltimeMaster_o *MasterData_WarQuestSelectionMaster; // x21
  MapGimmickComponent_o *current; // x22
  __int64 v23; // x24
  __int64 v24; // x0
  __int64 v25; // x1
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x23
  MapGimmickEntity_o *Mine; // x0
  __int64 v28; // x1
  MapGimmickEntity_o *v29; // x25
  int32_t dispTargetId; // w2
  System_Int32_array **Entity; // x0
  System_String_array **v32; // x2
  System_String_array **v33; // x3
  System_Boolean_array **v34; // x4
  System_Int32_array **v35; // x5
  System_Int32_array *v36; // x6
  System_Int32_array *v37; // x7
  int32_t ScriptIntParam; // w25
  struct System_Collections_Generic_List_SpotCooltimeComponent__o *spotCooltimeList; // x26
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v40; // x27
  __int64 v41; // x0
  __int64 v42; // x1
  UnityEngine_Object_o *v43; // x24
  _BOOL8 v44; // x0
  __int64 v45; // x1
  bool v46; // w1
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v49; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_418791B & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMasterData_EventQuestCooltimeMaster___, *(_QWORD *)&eventId);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__Dispose__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__MoveNext__, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__get_Current__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_SpotCooltimeComponent__Find__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapGimmickComponent__GetEnumerator__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_MapGimmickComponent__get_Count__, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    sub_B2C35C(&Method_System_Predicate_SpotCooltimeComponent___ctor__, v13);
    sub_B2C35C(&System_Predicate_SpotCooltimeComponent__TypeInfo, v14);
    sub_B2C35C(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B2C35C(&Method_EventQuestCooltimeComponent___c__DisplayClass11_0__SetGimmickList_b__0__, v16);
    sub_B2C35C(&EventQuestCooltimeComponent___c__DisplayClass11_0_TypeInfo, v17);
    sub_B2C35C(&StringLiteral_19921/*"isActiveCooltimeGimmick"*/, v18);
    byte_418791B = 1;
  }
  memset(&v49, 0, sizeof(v49));
  if ( gimmickList && this->fields.spotCooltimeList && gimmickList->fields._size )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B2C434(0LL, v20);
    MasterData_WarQuestSelectionMaster = (EventQuestCooltimeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         (DataManager_o *)Instance,
                                                                         (const MethodInfo_17339EC *)Method_DataManager_GetMasterData_EventQuestCooltimeMaster___);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v48,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)gimmickList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_MapGimmickComponent__GetEnumerator__);
    v49 = v48;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v49,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__MoveNext__) )
    {
      current = (MapGimmickComponent_o *)v49.fields.current;
      v23 = sub_B2C42C(EventQuestCooltimeComponent___c__DisplayClass11_0_TypeInfo);
      EventQuestCooltimeComponent___c__DisplayClass11_0___ctor(
        (EventQuestCooltimeComponent___c__DisplayClass11_0_o *)v23,
        0LL);
      if ( !current )
        sub_B2C434(v24, v25);
      mMapCtrl_MapGimmickInfo = current->fields.mMapCtrl_MapGimmickInfo;
      if ( !mMapCtrl_MapGimmickInfo )
        sub_B2C434(v24, v25);
      Mine = MapControl_MapGimmickInfo__GetMine(current->fields.mMapCtrl_MapGimmickInfo, 0LL);
      v29 = Mine;
      if ( !Mine )
        sub_B2C434(0LL, v28);
      if ( Mine->fields.dispCondType == 17 )
        dispTargetId = Mine->fields.dispTargetId;
      else
        dispTargetId = 0;
      if ( Mine->fields.dispCondType2 == 17 )
        dispTargetId = Mine->fields.dispTargetId2;
      if ( dispTargetId )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          sub_B2C434(Mine, v28);
        Entity = (System_Int32_array **)EventQuestCooltimeMaster__GetEntity(
                                          MasterData_WarQuestSelectionMaster,
                                          eventId,
                                          dispTargetId,
                                          1,
                                          0LL);
        if ( !v23 )
          sub_B2C434(Entity, Entity);
        *(_QWORD *)(v23 + 16) = Entity;
        sub_B2C2F8((BattleServantConfConponent_o *)(v23 + 16), Entity, v32, v33, v34, v35, v36, v37);
        if ( *(_QWORD *)(v23 + 16) )
        {
          ScriptIntParam = MapGimmickEntity__getScriptIntParam(v29, (System_String_o *)StringLiteral_19921/*"isActiveCooltimeGimmick"*/, -1, 0LL);
          spotCooltimeList = this->fields.spotCooltimeList;
          v40 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B2C42C(System_Predicate_SpotCooltimeComponent__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v40,
            (Il2CppObject *)v23,
            Method_EventQuestCooltimeComponent___c__DisplayClass11_0__SetGimmickList_b__0__,
            (const MethodInfo_2952BE4 *)Method_System_Predicate_SpotCooltimeComponent___ctor__);
          if ( !spotCooltimeList )
            sub_B2C434(v41, v42);
          v43 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)spotCooltimeList,
                                          (System_Predicate_T__o *)v40,
                                          (const MethodInfo_2EF4D20 *)Method_System_Collections_Generic_List_SpotCooltimeComponent__Find__);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v44 = UnityEngine_Object__op_Inequality(v43, 0LL, 0LL);
          if ( v44 )
          {
            if ( !v43 )
              sub_B2C434(v44, v45);
            SpotCooltimeComponent__SetSpotActiveGimmick(
              (SpotCooltimeComponent_o *)v43,
              current,
              ScriptIntParam == 1,
              0LL);
          }
          else
          {
            v46 = ScriptIntParam != 1 && mMapCtrl_MapGimmickInfo->fields.dispType == 1;
            MapGimmickComponent__SetDispAnimQuick(current, v46, 0LL);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v49,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__Dispose__);
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
  struct UnityEngine_GameObject_o *spotCooltimePrefab; // x22
  UnityEngine_GameObject_o *v12; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v14; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  EventQuestCooltimeComponent_c *v18; // x0
  float *p_x; // x8
  UnityEngine_GameObject_o *gameObject; // x23
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x22
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418791A & 1) == 0 )
  {
    sub_B2C35C(&EventQuestCooltimeComponent_TypeInfo, userCooltimeEntity);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_SpotCooltimeComponent___, v7);
    sub_B2C35C(&Method_System_Collections_Generic_List_SpotCooltimeComponent__Add__, v8);
    sub_B2C35C(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v10);
    byte_418791A = 1;
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
      v12 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)spotCooltimePrefab,
                                          (const MethodInfo_2095E38 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SetParent_31331816(v12, this->fields.spotCooltimeRoot, 0LL);
      if ( !targetSpot )
        goto LABEL_21;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetSpot, 0LL);
      if ( !transform )
        goto LABEL_21;
      position = UnityEngine_Transform__get_position(transform, 0LL);
      x = position.fields.x;
      y = position.fields.y;
      z = position.fields.z;
      v18 = EventQuestCooltimeComponent_TypeInfo;
      if ( (BYTE3(EventQuestCooltimeComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventQuestCooltimeComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventQuestCooltimeComponent_TypeInfo);
        v18 = EventQuestCooltimeComponent_TypeInfo;
      }
      p_x = &v18->static_fields->DEFAULT_COOLTIME_POSITION_OFFSET.fields.x;
      v23.fields.x = x + *p_x;
      v23.fields.y = y + p_x[1];
      v23.fields.z = z + p_x[2];
      GameObjectExtensions__SetPosition(v12, v23, 0LL);
      if ( !v12
        || (gameObject = UnityEngine_GameObject__get_gameObject(v12, 0LL),
            one = UnityEngine_Vector3__get_one(0LL),
            GameObjectExtensions__SetLocalScale(gameObject, one, 0LL),
            (transform = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v12,
                                                      (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_SpotCooltimeComponent___)) == 0LL)
        || (v21 = (EventMissionProgressRequest_Argument_ProgressData_o *)transform,
            SpotCooltimeComponent__Setup((SpotCooltimeComponent_o *)transform, userCooltimeEntity, targetSpot, 0LL),
            (transform = (UnityEngine_Transform_o *)this->fields.spotCooltimeList) == 0LL) )
      {
LABEL_21:
        sub_B2C434(transform, v14);
      }
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transform,
        v21,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_SpotCooltimeComponent__Add__);
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
    sub_B2C434(this, spotCooltime);
  }
  return (_DWORD)this == targetCooltimeEntity->fields.questId;
}