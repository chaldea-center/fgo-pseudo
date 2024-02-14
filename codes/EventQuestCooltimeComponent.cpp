void __fastcall EventQuestCooltimeComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct EventQuestCooltimeComponent_StaticFields *static_fields; // x8

  if ( (byte_4214995 & 1) == 0 )
  {
    sub_B0D8A4(&EventQuestCooltimeComponent_TypeInfo, v1);
    byte_4214995 = 1;
  }
  static_fields = EventQuestCooltimeComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DEFAULT_COOLTIME_POSITION_OFFSET.fields.x = 0LL;
  static_fields->DEFAULT_COOLTIME_POSITION_OFFSET.fields.z = 0.0;
}


void __fastcall EventQuestCooltimeComponent___ctor(EventQuestCooltimeComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v5; // x20
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4214994 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_SpotCooltimeComponent___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_List_SpotCooltimeComponent__TypeInfo, v4);
    byte_4214994 = 1;
  }
  v5 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                 System_Collections_Generic_List_SpotCooltimeComponent__TypeInfo,
                                                                                                 method,
                                                                                                 v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v5,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_SpotCooltimeComponent___ctor__);
  this->fields.spotCooltimeList = (struct System_Collections_Generic_List_SpotCooltimeComponent__o *)v5;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.spotCooltimeList,
    (System_Int32_array **)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
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
  Il2CppObject *current; // x20
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_SpotCooltimeComponent__o *v19; // x0
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v21; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4214990 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__Dispose__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__MoveNext__, v3);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__get_Current__, v4);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SpotCooltimeComponent__Clear__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SpotCooltimeComponent__GetEnumerator__, v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    byte_4214990 = 1;
  }
  memset(&v21, 0, sizeof(v21));
  spotCooltimePrefab = (UnityEngine_Object_o *)this->fields.spotCooltimePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(spotCooltimePrefab, 0LL, 0LL) )
  {
    this->fields.spotCooltimePrefab = 0LL;
    sub_B0D840((BattleServantConfConponent_o *)&this->fields.spotCooltimePrefab, 0LL, v9, v10, v11, v12, v13, v14);
  }
  spotCooltimeList = this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v20,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)spotCooltimeList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_SpotCooltimeComponent__GetEnumerator__);
    v21 = v20;
    while ( 1 )
    {
      v16 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v21,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__MoveNext__);
      if ( !v16 )
        break;
      current = v21.fields.current;
      if ( !v21.fields.current )
        sub_B0D97C(v16);
      SpotCooltimeComponent__OnDestroyObject((SpotCooltimeComponent_o *)v21.fields.current, 0LL);
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
        UnityEngine_Object__Destroy_34935276(gameObject, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v21,
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__Dispose__);
    v19 = this->fields.spotCooltimeList;
    if ( !v19 )
      sub_B0D97C(0LL);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v19,
      (const MethodInfo_2FC5AF0 *)Method_System_Collections_Generic_List_SpotCooltimeComponent__Clear__);
  }
}


bool __fastcall EventQuestCooltimeComponent__IsActiveEventQuestCooltime(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  DataManager_o *Instance; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4214993 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_B0D8A4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4214993 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_10;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_2669C30 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_10:
    sub_B0D97C(Instance);
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
  if ( (byte_421498F & 1) == 0 )
  {
    sub_B0D8A4(&Method_AssetData_GetObject_GameObject____67951440, assetData);
    this = (EventQuestCooltimeComponent_o *)sub_B0D8A4(&StringLiteral_8960/*"MapGimmickEffect_SpotCooltime"*/, v5);
    byte_421498F = 1;
  }
  if ( !assetData )
    sub_B0D97C(this);
  Object_WarBoardWaitTimeSetting = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                            assetData,
                                                            (System_String_o *)StringLiteral_8960/*"MapGimmickEffect_SpotCooltime"*/,
                                                            (const MethodInfo_1700DD0 *)Method_AssetData_GetObject_GameObject____67951440);
  v4->fields.spotCooltimePrefab = (struct UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting;
  sub_B0D840(
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
  EventQuestCooltimeMaster_o *MasterData_WarQuestSelectionMaster; // x21
  __int64 v21; // x1
  __int64 v22; // x2
  MapGimmickComponent_o *current; // x22
  __int64 v24; // x24
  __int64 v25; // x0
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x23
  MapGimmickEntity_o *Mine; // x0
  const MethodInfo *v28; // x4
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
  __int64 v40; // x1
  __int64 v41; // x2
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v42; // x27
  __int64 v43; // x0
  UnityEngine_Object_o *v44; // x24
  _BOOL8 v45; // x0
  bool v46; // w1
  System_Collections_Generic_List_Enumerator_T__o v48; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v49; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4214992 & 1) == 0 )
  {
    sub_B0D8A4(&Method_DataManager_GetMasterData_EventQuestCooltimeMaster___, *(_QWORD *)&eventId);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__Dispose__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__MoveNext__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__get_Current__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SpotCooltimeComponent__Find__, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapGimmickComponent__GetEnumerator__, v10);
    sub_B0D8A4(&Method_System_Collections_Generic_List_MapGimmickComponent__get_Count__, v11);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v12);
    sub_B0D8A4(&Method_System_Predicate_SpotCooltimeComponent___ctor__, v13);
    sub_B0D8A4(&System_Predicate_SpotCooltimeComponent__TypeInfo, v14);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B0D8A4(&Method_EventQuestCooltimeComponent___c__DisplayClass11_0__SetGimmickList_b__0__, v16);
    sub_B0D8A4(&EventQuestCooltimeComponent___c__DisplayClass11_0_TypeInfo, v17);
    sub_B0D8A4(&StringLiteral_19983/*"isActiveCooltimeGimmick"*/, v18);
    byte_4214992 = 1;
  }
  memset(&v49, 0, sizeof(v49));
  if ( gimmickList && this->fields.spotCooltimeList && gimmickList->fields._size )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B0D97C(0LL);
    MasterData_WarQuestSelectionMaster = (EventQuestCooltimeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         (DataManager_o *)Instance,
                                                                         (const MethodInfo_17145A8 *)Method_DataManager_GetMasterData_EventQuestCooltimeMaster___);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v48,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)gimmickList,
      (const MethodInfo_2FC6564 *)Method_System_Collections_Generic_List_MapGimmickComponent__GetEnumerator__);
    v49 = v48;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v49,
              (const MethodInfo_2112550 *)Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__MoveNext__) )
    {
      current = (MapGimmickComponent_o *)v49.fields.current;
      v24 = sub_B0D974(EventQuestCooltimeComponent___c__DisplayClass11_0_TypeInfo, v21, v22);
      EventQuestCooltimeComponent___c__DisplayClass11_0___ctor(
        (EventQuestCooltimeComponent___c__DisplayClass11_0_o *)v24,
        0LL);
      if ( !current )
        sub_B0D97C(v25);
      mMapCtrl_MapGimmickInfo = current->fields.mMapCtrl_MapGimmickInfo;
      if ( !mMapCtrl_MapGimmickInfo )
        sub_B0D97C(v25);
      Mine = MapControl_MapGimmickInfo__GetMine(current->fields.mMapCtrl_MapGimmickInfo, 0LL);
      v29 = Mine;
      if ( !Mine )
        sub_B0D97C(0LL);
      if ( Mine->fields.dispCondType == 17 )
        dispTargetId = Mine->fields.dispTargetId;
      else
        dispTargetId = 0;
      if ( Mine->fields.dispCondType2 == 17 )
        dispTargetId = Mine->fields.dispTargetId2;
      if ( dispTargetId )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          sub_B0D97C(Mine);
        Entity = (System_Int32_array **)EventQuestCooltimeMaster__GetEntity(
                                          MasterData_WarQuestSelectionMaster,
                                          eventId,
                                          dispTargetId,
                                          1,
                                          v28);
        if ( !v24 )
          sub_B0D97C(Entity);
        *(_QWORD *)(v24 + 16) = Entity;
        sub_B0D840((BattleServantConfConponent_o *)(v24 + 16), Entity, v32, v33, v34, v35, v36, v37);
        if ( *(_QWORD *)(v24 + 16) )
        {
          ScriptIntParam = MapGimmickEntity__getScriptIntParam(v29, (System_String_o *)StringLiteral_19983/*"isActiveCooltimeGimmick"*/, -1, 0LL);
          spotCooltimeList = this->fields.spotCooltimeList;
          v42 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                           System_Predicate_SpotCooltimeComponent__TypeInfo,
                                                                           v40,
                                                                           v41);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v42,
            (Il2CppObject *)v24,
            Method_EventQuestCooltimeComponent___c__DisplayClass11_0__SetGimmickList_b__0__,
            (const MethodInfo_2AF7E30 *)Method_System_Predicate_SpotCooltimeComponent___ctor__);
          if ( !spotCooltimeList )
            sub_B0D97C(v43);
          v44 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)spotCooltimeList,
                                          (System_Predicate_T__o *)v42,
                                          (const MethodInfo_2FC5FA8 *)Method_System_Collections_Generic_List_SpotCooltimeComponent__Find__);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v45 = UnityEngine_Object__op_Inequality(v44, 0LL, 0LL);
          if ( v45 )
          {
            if ( !v44 )
              sub_B0D97C(v45);
            SpotCooltimeComponent__SetSpotActiveGimmick(
              (SpotCooltimeComponent_o *)v44,
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
      (const MethodInfo_211254C *)Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__Dispose__);
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
  float x; // s8
  float y; // s9
  float z; // s10
  EventQuestCooltimeComponent_c *v17; // x0
  float *p_x; // x8
  UnityEngine_GameObject_o *gameObject; // x23
  EventMissionProgressRequest_Argument_ProgressData_o *v20; // x22
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4214991 & 1) == 0 )
  {
    sub_B0D8A4(&EventQuestCooltimeComponent_TypeInfo, userCooltimeEntity);
    sub_B0D8A4(&Method_UnityEngine_GameObject_GetComponent_SpotCooltimeComponent___, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_List_SpotCooltimeComponent__Add__, v8);
    sub_B0D8A4(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v10);
    byte_4214991 = 1;
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
                                          (const MethodInfo_204A984 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SetParent_31184580(v12, this->fields.spotCooltimeRoot, 0LL);
      if ( !targetSpot )
        goto LABEL_21;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetSpot, 0LL);
      if ( !transform )
        goto LABEL_21;
      position = UnityEngine_Transform__get_position(transform, 0LL);
      x = position.fields.x;
      y = position.fields.y;
      z = position.fields.z;
      v17 = EventQuestCooltimeComponent_TypeInfo;
      if ( (BYTE3(EventQuestCooltimeComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventQuestCooltimeComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventQuestCooltimeComponent_TypeInfo);
        v17 = EventQuestCooltimeComponent_TypeInfo;
      }
      p_x = &v17->static_fields->DEFAULT_COOLTIME_POSITION_OFFSET.fields.x;
      v22.fields.x = x + *p_x;
      v22.fields.y = y + p_x[1];
      v22.fields.z = z + p_x[2];
      GameObjectExtensions__SetPosition(v12, v22, 0LL);
      if ( !v12
        || (gameObject = UnityEngine_GameObject__get_gameObject(v12, 0LL),
            one = UnityEngine_Vector3__get_one(0LL),
            GameObjectExtensions__SetLocalScale(gameObject, one, 0LL),
            (transform = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v12,
                                                      (const MethodInfo_1B62BA8 *)Method_UnityEngine_GameObject_GetComponent_SpotCooltimeComponent___)) == 0LL)
        || (v20 = (EventMissionProgressRequest_Argument_ProgressData_o *)transform,
            SpotCooltimeComponent__Setup((SpotCooltimeComponent_o *)transform, userCooltimeEntity, targetSpot, 0LL),
            (transform = (UnityEngine_Transform_o *)this->fields.spotCooltimeList) == 0LL) )
      {
LABEL_21:
        sub_B0D97C(transform);
      }
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transform,
        v20,
        (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_SpotCooltimeComponent__Add__);
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
    sub_B0D97C(this);
  }
  return (_DWORD)this == targetCooltimeEntity->fields.questId;
}