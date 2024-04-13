void __fastcall EventQuestCooltimeComponent___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  struct EventQuestCooltimeComponent_StaticFields *static_fields; // x8

  if ( (byte_42E8E04 & 1) == 0 )
  {
    sub_B5D5C4(&EventQuestCooltimeComponent_TypeInfo, v1, v2, v3);
    byte_42E8E04 = 1;
  }
  static_fields = EventQuestCooltimeComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DEFAULT_COOLTIME_POSITION_OFFSET.fields.x = 0LL;
  static_fields->DEFAULT_COOLTIME_POSITION_OFFSET.fields.z = 0.0;
}


void __fastcall EventQuestCooltimeComponent___ctor(EventQuestCooltimeComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_42E8E03 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_SpotCooltimeComponent___ctor__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_List_SpotCooltimeComponent__TypeInfo, v5, v6, v7);
    byte_42E8E03 = 1;
  }
  v8 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_SpotCooltimeComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v8,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_SpotCooltimeComponent___ctor__);
  this->fields.spotCooltimeList = (struct System_Collections_Generic_List_SpotCooltimeComponent__o *)v8;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.spotCooltimeList,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventQuestCooltimeComponent__DestroyObjects(
        EventQuestCooltimeComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  UnityEngine_Object_o *spotCooltimePrefab; // x21
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  struct System_Collections_Generic_List_SpotCooltimeComponent__o *spotCooltimeList; // x0
  _BOOL8 v28; // x0
  __int64 v29; // x1
  Il2CppObject *current; // x20
  UnityEngine_Object_o *gameObject; // x20
  __int64 v32; // x1
  struct System_Collections_Generic_List_SpotCooltimeComponent__o *v33; // x0
  System_Collections_Generic_List_Enumerator_T__o v34; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v35; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42E8DFF & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SpotCooltimeComponent__Clear__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SpotCooltimeComponent__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    byte_42E8DFF = 1;
  }
  memset(&v35, 0, sizeof(v35));
  spotCooltimePrefab = (UnityEngine_Object_o *)this->fields.spotCooltimePrefab;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(spotCooltimePrefab, 0LL, 0LL) )
  {
    this->fields.spotCooltimePrefab = 0LL;
    sub_B5D560((BattleServantConfConponent_o *)&this->fields.spotCooltimePrefab, 0LL, v21, v22, v23, v24, v25, v26);
  }
  spotCooltimeList = this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v34,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)spotCooltimeList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_SpotCooltimeComponent__GetEnumerator__);
    v35 = v34;
    while ( 1 )
    {
      v28 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v35,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__MoveNext__);
      if ( !v28 )
        break;
      current = v35.fields.current;
      if ( !v35.fields.current )
        sub_B5D69C(v28, v29);
      SpotCooltimeComponent__OnDestroyObject((SpotCooltimeComponent_o *)v35.fields.current, 0LL);
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
        UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v35,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__Dispose__);
    v33 = this->fields.spotCooltimeList;
    if ( !v33 )
      sub_B5D69C(0LL, v32);
    System_Collections_Generic_List_XWeaponTrail_Element___Clear(
      (System_Collections_Generic_List_XWeaponTrail_Element__o *)v33,
      (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_SpotCooltimeComponent__Clear__);
  }
}


bool __fastcall EventQuestCooltimeComponent__IsActiveEventQuestCooltime(int32_t eventId, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  WarEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E8E02 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventDetailMaster___, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8, v9, v10);
    byte_42E8E02 = 1;
  }
  entity = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = (DataManager_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                Instance,
                                (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_10;
  if ( !DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
          (DataMasterBase_WarMaster__WarEntity__int__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_23FAE6C *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = (DataManager_o *)entity;
  if ( !entity )
LABEL_10:
    sub_B5D69C(Instance, v12);
  return EventDetailEntity__IsQuestCooltime((EventDetailEntity_o *)entity, 0LL);
}


void __fastcall EventQuestCooltimeComponent__SetAssetData(
        EventQuestCooltimeComponent_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  EventQuestCooltimeComponent_o *v5; // x19
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Int32_array **Object_WarBoardWaitTimeSetting; // x0
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7

  v5 = this;
  if ( (byte_42E8DFE & 1) == 0 )
  {
    sub_B5D5C4(&Method_AssetData_GetObject_GameObject____68807504, (_DWORD)assetData, (_DWORD)method, v3);
    this = (EventQuestCooltimeComponent_o *)sub_B5D5C4(&StringLiteral_9030/*"MapGimmickEffect_SpotCooltime"*/, v6, v7, v8);
    byte_42E8DFE = 1;
  }
  if ( !assetData )
    sub_B5D69C(this, assetData);
  Object_WarBoardWaitTimeSetting = (System_Int32_array **)AssetData__GetObject_WarBoardWaitTimeSetting_(
                                                            assetData,
                                                            (System_String_o *)StringLiteral_9030/*"MapGimmickEffect_SpotCooltime"*/,
                                                            (const MethodInfo_1AD09CC *)Method_AssetData_GetObject_GameObject____68807504);
  v5->fields.spotCooltimePrefab = (struct UnityEngine_GameObject_o *)Object_WarBoardWaitTimeSetting;
  sub_B5D560(
    (BattleServantConfConponent_o *)&v5->fields.spotCooltimePrefab,
    Object_WarBoardWaitTimeSetting,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15);
}


void __fastcall EventQuestCooltimeComponent__SetGimmickList(
        EventQuestCooltimeComponent_o *this,
        int32_t eventId,
        System_Collections_Generic_List_MapGimmickComponent__o *gimmickList,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  int v27; // w1
  int v28; // w2
  __int64 v29; // x3
  int v30; // w1
  int v31; // w2
  __int64 v32; // x3
  int v33; // w1
  int v34; // w2
  __int64 v35; // x3
  int v36; // w1
  int v37; // w2
  __int64 v38; // x3
  int v39; // w1
  int v40; // w2
  __int64 v41; // x3
  int v42; // w1
  int v43; // w2
  __int64 v44; // x3
  WebViewManager_o *Instance; // x0
  __int64 v46; // x1
  EventQuestCooltimeMaster_o *MasterData_WarQuestSelectionMaster; // x21
  MapGimmickComponent_o *current; // x22
  __int64 v49; // x24
  __int64 v50; // x0
  __int64 v51; // x1
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x23
  MapGimmickEntity_o *Mine; // x0
  __int64 v54; // x1
  const MethodInfo *v55; // x4
  MapGimmickEntity_o *v56; // x25
  int32_t dispTargetId; // w2
  System_Int32_array **Entity; // x0
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  int32_t ScriptIntParam; // w25
  struct System_Collections_Generic_List_SpotCooltimeComponent__o *spotCooltimeList; // x26
  System_Predicate_peRenderTexture_ChangeLayerObject__o *v67; // x27
  __int64 v68; // x0
  __int64 v69; // x1
  UnityEngine_Object_o *v70; // x24
  _BOOL8 v71; // x0
  __int64 v72; // x1
  bool v73; // w1
  System_Collections_Generic_List_Enumerator_T__o v75; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v76; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42E8E01 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMasterData_EventQuestCooltimeMaster___, eventId, (_DWORD)gimmickList, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__Dispose__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__MoveNext__, v9, v10, v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__get_Current__, v12, v13, v14);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SpotCooltimeComponent__Find__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapGimmickComponent__GetEnumerator__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_MapGimmickComponent__get_Count__, v21, v22, v23);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&Method_System_Predicate_SpotCooltimeComponent___ctor__, v27, v28, v29);
    sub_B5D5C4(&System_Predicate_SpotCooltimeComponent__TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v33, v34, v35);
    sub_B5D5C4(&Method_EventQuestCooltimeComponent___c__DisplayClass11_0__SetGimmickList_b__0__, v36, v37, v38);
    sub_B5D5C4(&EventQuestCooltimeComponent___c__DisplayClass11_0_TypeInfo, v39, v40, v41);
    sub_B5D5C4(&StringLiteral_20173/*"isActiveCooltimeGimmick"*/, v42, v43, v44);
    byte_42E8E01 = 1;
  }
  memset(&v76, 0, sizeof(v76));
  if ( gimmickList && this->fields.spotCooltimeList && gimmickList->fields._size )
  {
    Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_B5D69C(0LL, v46);
    MasterData_WarQuestSelectionMaster = (EventQuestCooltimeMaster_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                         (DataManager_o *)Instance,
                                                                         (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_EventQuestCooltimeMaster___);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v75,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)gimmickList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_MapGimmickComponent__GetEnumerator__);
    v76 = v75;
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v76,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__MoveNext__) )
    {
      current = (MapGimmickComponent_o *)v76.fields.current;
      v49 = sub_B5D694(EventQuestCooltimeComponent___c__DisplayClass11_0_TypeInfo);
      EventQuestCooltimeComponent___c__DisplayClass11_0___ctor(
        (EventQuestCooltimeComponent___c__DisplayClass11_0_o *)v49,
        0LL);
      if ( !current )
        sub_B5D69C(v50, v51);
      mMapCtrl_MapGimmickInfo = current->fields.mMapCtrl_MapGimmickInfo;
      if ( !mMapCtrl_MapGimmickInfo )
        sub_B5D69C(v50, v51);
      Mine = MapControl_MapGimmickInfo__GetMine(current->fields.mMapCtrl_MapGimmickInfo, 0LL);
      v56 = Mine;
      if ( !Mine )
        sub_B5D69C(0LL, v54);
      if ( Mine->fields.dispCondType == 17 )
        dispTargetId = Mine->fields.dispTargetId;
      else
        dispTargetId = 0;
      if ( Mine->fields.dispCondType2 == 17 )
        dispTargetId = Mine->fields.dispTargetId2;
      if ( dispTargetId )
      {
        if ( !MasterData_WarQuestSelectionMaster )
          sub_B5D69C(Mine, v54);
        Entity = (System_Int32_array **)EventQuestCooltimeMaster__GetEntity(
                                          MasterData_WarQuestSelectionMaster,
                                          eventId,
                                          dispTargetId,
                                          1,
                                          v55);
        if ( !v49 )
          sub_B5D69C(Entity, Entity);
        *(_QWORD *)(v49 + 16) = Entity;
        sub_B5D560((BattleServantConfConponent_o *)(v49 + 16), Entity, v59, v60, v61, v62, v63, v64);
        if ( *(_QWORD *)(v49 + 16) )
        {
          ScriptIntParam = MapGimmickEntity__getScriptIntParam(v56, (System_String_o *)StringLiteral_20173/*"isActiveCooltimeGimmick"*/, -1, 0LL);
          spotCooltimeList = this->fields.spotCooltimeList;
          v67 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_SpotCooltimeComponent__TypeInfo);
          System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
            v67,
            (Il2CppObject *)v49,
            Method_EventQuestCooltimeComponent___c__DisplayClass11_0__SetGimmickList_b__0__,
            (const MethodInfo_2B9320C *)Method_System_Predicate_SpotCooltimeComponent___ctor__);
          if ( !spotCooltimeList )
            sub_B5D69C(v68, v69);
          v70 = (UnityEngine_Object_o *)System_Collections_Generic_List_peRenderTexture_ChangeLayerObject___Find(
                                          (System_Collections_Generic_List_peRenderTexture_ChangeLayerObject__o *)spotCooltimeList,
                                          (System_Predicate_T__o *)v67,
                                          (const MethodInfo_3057880 *)Method_System_Collections_Generic_List_SpotCooltimeComponent__Find__);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          v71 = UnityEngine_Object__op_Inequality(v70, 0LL, 0LL);
          if ( v71 )
          {
            if ( !v70 )
              sub_B5D69C(v71, v72);
            SpotCooltimeComponent__SetSpotActiveGimmick(
              (SpotCooltimeComponent_o *)v70,
              current,
              ScriptIntParam == 1,
              0LL);
          }
          else
          {
            v73 = ScriptIntParam != 1 && mMapCtrl_MapGimmickInfo->fields.dispType == 1;
            MapGimmickComponent__SetDispAnimQuick(current, v73, 0LL);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v76,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__Dispose__);
  }
}


void __fastcall EventQuestCooltimeComponent__SetSpot(
        EventQuestCooltimeComponent_o *this,
        UserEventQuestCooltimeEntity_o *userCooltimeEntity,
        SrcSpotBasePrefab_o *targetSpot,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  struct UnityEngine_GameObject_o *spotCooltimePrefab; // x22
  UnityEngine_GameObject_o *v20; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v22; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  EventQuestCooltimeComponent_c *v26; // x0
  float *p_x; // x8
  UnityEngine_GameObject_o *gameObject; // x23
  EventMissionProgressRequest_Argument_ProgressData_o *v29; // x22
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o one; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_42E8E00 & 1) == 0 )
  {
    sub_B5D5C4(&EventQuestCooltimeComponent_TypeInfo, (_DWORD)userCooltimeEntity, (_DWORD)targetSpot, method);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_SpotCooltimeComponent___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_SpotCooltimeComponent__Add__, v10, v11, v12);
    sub_B5D5C4(&Method_UnityEngine_Object_Instantiate_GameObject___, v13, v14, v15);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v16, v17, v18);
    byte_42E8E00 = 1;
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
      v20 = (UnityEngine_GameObject_o *)UnityEngine_Object__Instantiate_Dropdown_DropdownItem_(
                                          (UnityEngine_UI_Dropdown_DropdownItem_o *)spotCooltimePrefab,
                                          (const MethodInfo_1E662D8 *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SetParent_32436388(v20, this->fields.spotCooltimeRoot, 0LL);
      if ( !targetSpot )
        goto LABEL_21;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetSpot, 0LL);
      if ( !transform )
        goto LABEL_21;
      position = UnityEngine_Transform__get_position(transform, 0LL);
      x = position.fields.x;
      y = position.fields.y;
      z = position.fields.z;
      v26 = EventQuestCooltimeComponent_TypeInfo;
      if ( (BYTE3(EventQuestCooltimeComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !EventQuestCooltimeComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventQuestCooltimeComponent_TypeInfo);
        v26 = EventQuestCooltimeComponent_TypeInfo;
      }
      p_x = &v26->static_fields->DEFAULT_COOLTIME_POSITION_OFFSET.fields.x;
      v31.fields.x = x + *p_x;
      v31.fields.y = y + p_x[1];
      v31.fields.z = z + p_x[2];
      GameObjectExtensions__SetPosition(v20, v31, 0LL);
      if ( !v20
        || (gameObject = UnityEngine_GameObject__get_gameObject(v20, 0LL),
            one = UnityEngine_Vector3__get_one(0LL),
            GameObjectExtensions__SetLocalScale(gameObject, one, 0LL),
            (transform = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                      v20,
                                                      (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_SpotCooltimeComponent___)) == 0LL)
        || (v29 = (EventMissionProgressRequest_Argument_ProgressData_o *)transform,
            SpotCooltimeComponent__Setup((SpotCooltimeComponent_o *)transform, userCooltimeEntity, targetSpot, 0LL),
            (transform = (UnityEngine_Transform_o *)this->fields.spotCooltimeList) == 0LL) )
      {
LABEL_21:
        sub_B5D69C(transform, v22);
      }
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)transform,
        v29,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_SpotCooltimeComponent__Add__);
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
    sub_B5D69C(this, spotCooltime);
  }
  return (_DWORD)this == targetCooltimeEntity->fields.questId;
}