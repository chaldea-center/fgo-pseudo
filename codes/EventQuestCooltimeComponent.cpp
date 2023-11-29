void __fastcall EventQuestCooltimeComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct EventQuestCooltimeComponent_StaticFields *static_fields; // x8

  if ( (byte_40FAC8D & 1) == 0 )
  {
    sub_B16FFC(&EventQuestCooltimeComponent_TypeInfo, v1);
    byte_40FAC8D = 1;
  }
  static_fields = EventQuestCooltimeComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DEFAULT_COOLTIME_POSITION_OFFSET.fields.x = 0LL;
  static_fields->DEFAULT_COOLTIME_POSITION_OFFSET.fields.z = 0.0;
}


void __fastcall EventQuestCooltimeComponent___ctor(EventQuestCooltimeComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40FAC8C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_SpotCooltimeComponent___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_List_SpotCooltimeComponent__TypeInfo, v6);
    byte_40FAC8C = 1;
  }
  v7 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                 System_Collections_Generic_List_SpotCooltimeComponent__TypeInfo,
                                                                                                 method,
                                                                                                 v2,
                                                                                                 v3,
                                                                                                 v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v7,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_SpotCooltimeComponent___ctor__);
  this->fields.spotCooltimeList = (struct System_Collections_Generic_List_SpotCooltimeComponent__o *)v7;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.spotCooltimeList,
    (System_Int32_array **)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
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
  Il2CppObject *current; // x20
  UnityEngine_Object_o *gameObject; // x20
  struct System_Collections_Generic_List_SpotCooltimeComponent__o *v18; // x0
  System_Collections_Generic_List_Enumerator_T__o v19; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v20; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40FAC88 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__Dispose__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__MoveNext__, v3);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__get_Current__, v4);
    sub_B16FFC(&Method_System_Collections_Generic_List_SpotCooltimeComponent__Clear__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_SpotCooltimeComponent__GetEnumerator__, v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    byte_40FAC88 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  spotCooltimePrefab = (UnityEngine_Object_o *)this->fields.spotCooltimePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(spotCooltimePrefab, 0LL, 0LL) )
  {
    this->fields.spotCooltimePrefab = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)&this->fields.spotCooltimePrefab, 0LL, v9, v10, v11, v12, v13, v14);
  }
  spotCooltimeList = this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v19,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)spotCooltimeList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_SpotCooltimeComponent__GetEnumerator__);
    v20 = v19;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v20,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__MoveNext__) )
    {
      current = v20.fields.current;
      if ( !v20.fields.current )
        sub_B170D4();
      SpotCooltimeComponent__OnDestroyObject((SpotCooltimeComponent_o *)v20.fields.current, 0LL);
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
        UnityEngine_Object__Destroy_34809464(gameObject, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v20,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__Dispose__);
    v18 = this->fields.spotCooltimeList;
    if ( !v18 )
      sub_B170D4();
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v18,
      (const MethodInfo_2F260E0 *)Method_System_Collections_Generic_List_SpotCooltimeComponent__Clear__);
  }
}


bool __fastcall EventQuestCooltimeComponent__IsActiveEventQuestCooltime(int32_t eventId, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  WebViewManager_o *Instance; // x0
  DataMasterBase_WarMaster__WarEntity__int__o *MasterData_WarQuestSelectionMaster; // x0
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40FAC8B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventDetailMaster___, method);
    sub_B16FFC(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_40FAC8B = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MasterData_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                                        (DataManager_o *)Instance,
                                                                                        (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !MasterData_WarQuestSelectionMaster )
    goto LABEL_10;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          MasterData_WarQuestSelectionMaster,
          &entity,
          eventId,
          (const MethodInfo_266F3E4 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  if ( !entity )
LABEL_10:
    sub_B170D4();
  return EventDetailEntity__IsQuestCooltime((EventDetailEntity_o *)entity, 0LL);
}


void __fastcall EventQuestCooltimeComponent__SetAssetData(
        EventQuestCooltimeComponent_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct UnityEngine_GameObject_o *Object_WarBoardWaitTimeSetting; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FAC87 & 1) == 0 )
  {
    sub_B16FFC(&Method_AssetData_GetObject_GameObject____66802784, assetData);
    sub_B16FFC(&StringLiteral_8908, v5);
    byte_40FAC87 = 1;
  }
  if ( !assetData )
    sub_B170D4();
  Object_WarBoardWaitTimeSetting = (struct UnityEngine_GameObject_o *)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                                        assetData,
                                                                        (System_String_o *)StringLiteral_8908,
                                                                        (const MethodInfo_18AFC60 *)Method_AssetData_GetObject_GameObject____66802784);
  this->fields.spotCooltimePrefab = Object_WarBoardWaitTimeSetting;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.spotCooltimePrefab,
    (System_Int32_array **)Object_WarBoardWaitTimeSetting,
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
  __int64 v23; // x3
  __int64 v24; // x4
  MapGimmickComponent_o *current; // x22
  __int64 v26; // x24
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x23
  MapGimmickEntity_o *Mine; // x0
  const MethodInfo *v29; // x4
  MapGimmickEntity_o *v30; // x25
  int32_t dispTargetId; // w2
  System_Int32_array **Entity; // x0
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  int32_t ScriptIntParam; // w25
  struct System_Collections_Generic_List_SpotCooltimeComponent__o *spotCooltimeList; // x26
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v45; // x27
  peRenderTexture_ChangeLayerObject_o *v46; // x24
  bool v47; // w1
  System_Collections_Generic_List_Enumerator_T__o v49; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v50; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_40FAC8A & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMasterData_EventQuestCooltimeMaster___, *(_QWORD *)&eventId);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__Dispose__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__MoveNext__, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__get_Current__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_List_SpotCooltimeComponent__Find__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapGimmickComponent__GetEnumerator__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_MapGimmickComponent__get_Count__, v11);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v12);
    sub_B16FFC(&Method_System_Predicate_SpotCooltimeComponent___ctor__, v13);
    sub_B16FFC(&System_Predicate_SpotCooltimeComponent__TypeInfo, v14);
    sub_B16FFC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_B16FFC(&Method_EventQuestCooltimeComponent___c__DisplayClass11_0__SetGimmickList_b__0__, v16);
    sub_B16FFC(&EventQuestCooltimeComponent___c__DisplayClass11_0_TypeInfo, v17);
    sub_B16FFC(&StringLiteral_19840, v18);
    byte_40FAC8A = 1;
  }
  memset(&v50, 0, sizeof(v50));
  if ( gimmickList && this->fields.spotCooltimeList && gimmickList->fields._size )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B170D4();
    MasterData_WarQuestSelectionMaster = (EventQuestCooltimeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         (DataManager_o *)Instance,
                                                                         (const MethodInfo_18C3284 *)Method_DataManager_GetMasterData_EventQuestCooltimeMaster___);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v49,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)gimmickList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_MapGimmickComponent__GetEnumerator__);
    v50 = v49;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v50,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__MoveNext__) )
    {
      current = (MapGimmickComponent_o *)v50.fields.current;
      v26 = sub_B170CC(EventQuestCooltimeComponent___c__DisplayClass11_0_TypeInfo, v21, v22, v23, v24);
      EventQuestCooltimeComponent___c__DisplayClass11_0___ctor(
        (EventQuestCooltimeComponent___c__DisplayClass11_0_o *)v26,
        0LL);
      if ( !current )
        sub_B170D4();
      mMapCtrl_MapGimmickInfo = current->fields.mMapCtrl_MapGimmickInfo;
      if ( !mMapCtrl_MapGimmickInfo )
        sub_B170D4();
      Mine = MapControl_MapGimmickInfo__GetMine(current->fields.mMapCtrl_MapGimmickInfo, 0LL);
      v30 = Mine;
      if ( !Mine )
        sub_B170D4();
      if ( Mine->fields.dispCondType == 17 )
        dispTargetId = Mine->fields.dispTargetId;
      else
        dispTargetId = 0;
      if ( Mine->fields.dispCondType2 == 17 )
        dispTargetId = Mine->fields.dispTargetId2;
      if ( dispTargetId )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          sub_B170D4();
        Entity = (System_Int32_array **)EventQuestCooltimeMaster__GetEntity(
                                          MasterData_WarQuestSelectionMaster,
                                          eventId,
                                          dispTargetId,
                                          1,
                                          v29);
        if ( !v26 )
          sub_B170D4();
        *(_QWORD *)(v26 + 16) = Entity;
        sub_B16F98((BattleServantConfConponent_o *)(v26 + 16), Entity, v33, v34, v35, v36, v37, v38);
        if ( *(_QWORD *)(v26 + 16) )
        {
          ScriptIntParam = MapGimmickEntity__getScriptIntParam(v30, (System_String_o *)StringLiteral_19840, -1, 0LL);
          spotCooltimeList = this->fields.spotCooltimeList;
          v45 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                           System_Predicate_SpotCooltimeComponent__TypeInfo,
                                                                           v41,
                                                                           v42,
                                                                           v43,
                                                                           v44);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v45,
            (Il2CppObject *)v26,
            Method_EventQuestCooltimeComponent___c__DisplayClass11_0__SetGimmickList_b__0__,
            (const MethodInfo_2B0B204 *)Method_System_Predicate_SpotCooltimeComponent___ctor__);
          if ( !spotCooltimeList )
            sub_B170D4();
          v46 = System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                  (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)spotCooltimeList,
                  (System_Predicate_T__o *)v45,
                  (const MethodInfo_2F26598 *)Method_System_Collections_Generic_List_SpotCooltimeComponent__Find__);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v46, 0LL, 0LL) )
          {
            if ( !v46 )
              sub_B170D4();
            SpotCooltimeComponent__SetSpotActiveGimmick(
              (SpotCooltimeComponent_o *)v46,
              current,
              ScriptIntParam == 1,
              0LL);
          }
          else
          {
            v47 = ScriptIntParam != 1 && mMapCtrl_MapGimmickInfo->fields.dispType == 1;
            MapGimmickComponent__SetDispAnimQuick(current, v47, 0LL);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v50,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__Dispose__);
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
  SpotCooltimeComponent_o *Component_srcLineSprite; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v21; // x22
  struct System_Collections_Generic_List_SpotCooltimeComponent__o *spotCooltimeList; // x0
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FAC89 & 1) == 0 )
  {
    sub_B16FFC(&EventQuestCooltimeComponent_TypeInfo, userCooltimeEntity);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_SpotCooltimeComponent___, v7);
    sub_B16FFC(&Method_System_Collections_Generic_List_SpotCooltimeComponent__Add__, v8);
    sub_B16FFC(&Method_UnityEngine_Object_Instantiate_GameObject___, v9);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v10);
    byte_40FAC89 = 1;
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
                                          (const MethodInfo_19DE20C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SetParent_27425860(v12, this->fields.spotCooltimeRoot, 0LL);
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
      v24.fields.x = x + *p_x;
      v24.fields.y = y + p_x[1];
      v24.fields.z = z + p_x[2];
      GameObjectExtensions__SetPosition(v12, v24, 0LL);
      if ( !v12
        || (gameObject = UnityEngine_GameObject__get_gameObject(v12, 0LL),
            one = UnityEngine_Vector3__get_one(0LL),
            GameObjectExtensions__SetLocalScale(gameObject, one, 0LL),
            (Component_srcLineSprite = (SpotCooltimeComponent_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                                    v12,
                                                                    (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_SpotCooltimeComponent___)) == 0LL)
        || (v21 = (EventMissionProgressRequest_Argument_ProgressData_o *)Component_srcLineSprite,
            SpotCooltimeComponent__Setup(Component_srcLineSprite, userCooltimeEntity, targetSpot, 0LL),
            (spotCooltimeList = this->fields.spotCooltimeList) == 0LL) )
      {
LABEL_21:
        sub_B170D4();
      }
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)spotCooltimeList,
        v21,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_SpotCooltimeComponent__Add__);
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
  int32_t QuestId; // w0
  struct EventQuestCooltimeEntity_o *targetCooltimeEntity; // x8

  if ( !spotCooltime
    || (QuestId = SpotCooltimeComponent__get_QuestId(spotCooltime, 0LL),
        (targetCooltimeEntity = this->fields.targetCooltimeEntity) == 0LL) )
  {
    sub_B170D4();
  }
  return QuestId == targetCooltimeEntity->fields.questId;
}