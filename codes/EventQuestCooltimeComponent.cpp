void __fastcall EventQuestCooltimeComponent___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct EventQuestCooltimeComponent_StaticFields *static_fields; // x8

  if ( (byte_4B1A2DE & 1) == 0 )
  {
    sub_1BCA7E0(&EventQuestCooltimeComponent_TypeInfo, v1, v2);
    byte_4B1A2DE = 1;
  }
  static_fields = EventQuestCooltimeComponent_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->DEFAULT_COOLTIME_POSITION_OFFSET.fields.x = 0LL;
  static_fields->DEFAULT_COOLTIME_POSITION_OFFSET.fields.z = 0.0;
}


void __fastcall EventQuestCooltimeComponent___ctor(EventQuestCooltimeComponent_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_List_object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B1A2DD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SpotCooltimeComponent___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_List_SpotCooltimeComponent__TypeInfo, v5, v6);
    byte_4B1A2DD = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                      System_Collections_Generic_List_SpotCooltimeComponent__TypeInfo,
                                                      method,
                                                      v2,
                                                      v3);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SpotCooltimeComponent___ctor__);
  this->fields.spotCooltimeList = (struct System_Collections_Generic_List_SpotCooltimeComponent__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.spotCooltimeList, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall EventQuestCooltimeComponent__DestroyObjects(
        EventQuestCooltimeComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  UnityEngine_Object_o *spotCooltimePrefab; // x21
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  System_Collections_Generic_List_object__o *spotCooltimeList; // x0
  _BOOL8 v22; // x0
  const MethodInfo *v23; // x1
  Il2CppObject *current; // x20
  __int64 v25; // x1
  UnityEngine_Object_o *gameObject; // x20
  __int64 v27; // x1
  __int64 v28; // x0
  __int64 v29; // x1
  struct System_Collections_Generic_List_SpotCooltimeComponent__o *v30; // x8
  int32_t size; // w2
  int v32; // w9
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v34; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B1A2D9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__Dispose__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__MoveNext__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__get_Current__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SpotCooltimeComponent__Clear__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SpotCooltimeComponent__GetEnumerator__, v10, v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    byte_4B1A2D9 = 1;
  }
  memset(&v34, 0, sizeof(v34));
  spotCooltimePrefab = (UnityEngine_Object_o *)this->fields.spotCooltimePrefab;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Inequality(spotCooltimePrefab, 0LL, 0LL) )
  {
    this->fields.spotCooltimePrefab = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.spotCooltimePrefab, 0LL, v15, v16, v17, v18, v19, v20);
  }
  spotCooltimeList = (System_Collections_Generic_List_object__o *)this->fields.spotCooltimeList;
  if ( spotCooltimeList )
  {
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v33,
      spotCooltimeList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_SpotCooltimeComponent__GetEnumerator__);
    v34 = v33;
    while ( 1 )
    {
      v22 = System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v34,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__MoveNext__);
      if ( !v22 )
        break;
      current = v34.fields._current;
      if ( !v34.fields._current )
        sub_1BCAA3C(v22, v23);
      SpotCooltimeComponent__OnDestroyObject((SpotCooltimeComponent_o *)v34.fields._current, v23);
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                             (UnityEngine_Component_o *)current,
                                             0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
      if ( UnityEngine_Object__op_Inequality(gameObject, 0LL, 0LL) )
      {
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
        UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v34,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_SpotCooltimeComponent__Dispose__);
    v30 = this->fields.spotCooltimeList;
    if ( !v30 )
      sub_1BCAA3C(v28, v29);
    size = v30->fields._size;
    v32 = v30->fields._version + 1;
    v30->fields._size = 0;
    v30->fields._version = v32;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v30->fields._items, 0, size, 0LL);
  }
}


bool __fastcall EventQuestCooltimeComponent__IsActiveEventQuestCooltime(int32_t eventId, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1A2DC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventDetailMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6, v7);
    byte_4B1A2DC = 1;
  }
  entity = 0LL;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventDetailMaster___);
  if ( !Instance )
    goto LABEL_10;
  if ( !DataMasterBase_object__object__int___TryGetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
          &entity,
          eventId,
          (const MethodInfo_31B2E94 *)Method_DataMasterBase_EventDetailMaster__EventDetailEntity__int__TryGetEntity__) )
    return 0;
  Instance = entity;
  if ( !entity )
LABEL_10:
    sub_1BCAA3C(Instance, v9);
  return EventDetailEntity__IsQuestCooltime((EventDetailEntity_o *)entity, 0LL);
}


void __fastcall EventQuestCooltimeComponent__SetAssetData(
        EventQuestCooltimeComponent_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  EventQuestCooltimeComponent_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *Object_object__49237568; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  v4 = this;
  if ( (byte_4B1A2D8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_AssetData_GetObject_GameObject____76836696, assetData, method);
    this = (EventQuestCooltimeComponent_o *)sub_1BCA7E0(&StringLiteral_8998/*"MapGimmickEffect_SpotCooltime"*/, v5, v6);
    byte_4B1A2D8 = 1;
  }
  if ( !assetData )
    sub_1BCAA3C(this, assetData);
  Object_object__49237568 = AssetData__GetObject_object__49237568(
                              assetData,
                              (System_String_o *)StringLiteral_8998/*"MapGimmickEffect_SpotCooltime"*/,
                              (const MethodInfo_2EF4E40 *)Method_AssetData_GetObject_GameObject____76836696);
  v4->fields.spotCooltimePrefab = (struct UnityEngine_GameObject_o *)Object_object__49237568;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v4->fields.spotCooltimePrefab,
    (int64_t)Object_object__49237568,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall EventQuestCooltimeComponent__SetGimmickList(
        EventQuestCooltimeComponent_o *this,
        int32_t eventId,
        System_Collections_Generic_List_MapGimmickComponent__o *gimmickList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  Il2CppObject *Instance; // x0
  __int64 v32; // x1
  Il2CppObject *MasterData_object; // x21
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x3
  MapGimmickComponent_o *current; // x22
  __int64 v38; // x24
  __int64 v39; // x0
  __int64 v40; // x1
  struct MapControl_MapGimmickInfo_o *mMapCtrl_MapGimmickInfo; // x23
  MapGimmickEntity_o *Mine; // x0
  __int64 v43; // x1
  MapGimmickEntity_o *v44; // x25
  int32_t dispTargetId; // w2
  EventQuestCooltimeEntity_o *Entity; // x0
  int64_t v47; // x2
  int32_t v48; // w3
  System_String_o *v49; // x4
  BattleSetupInfo_o *v50; // x5
  FollowerInfo_o *v51; // x6
  PartyListViewItem_o *v52; // x7
  int32_t ScriptIntParam; // w0
  System_Collections_Generic_List_object__o *spotCooltimeList; // x26
  int32_t v55; // w25
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x3
  System_Predicate_object__o *v59; // x27
  __int64 v60; // x0
  __int64 v61; // x1
  __int64 v62; // x1
  Il2CppObject *v63; // x24
  _BOOL8 v64; // x0
  __int64 v65; // x1
  const MethodInfo *v66; // x3
  bool v67; // w1
  System_Collections_Generic_List_Enumerator_object__o v68; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v69; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4B1A2DB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_EventQuestCooltimeMaster___, *(_QWORD *)&eventId, gimmickList);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SpotCooltimeComponent__Find__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapGimmickComponent__GetEnumerator__, v15, v16);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_MapGimmickComponent__get_Count__, v17, v18);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v19, v20);
    sub_1BCA7E0(&System_Predicate_SpotCooltimeComponent__TypeInfo, v21, v22);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v23, v24);
    sub_1BCA7E0(&Method_EventQuestCooltimeComponent___c__DisplayClass11_0__SetGimmickList_b__0__, v25, v26);
    sub_1BCA7E0(&EventQuestCooltimeComponent___c__DisplayClass11_0_TypeInfo, v27, v28);
    sub_1BCA7E0(&StringLiteral_21004/*"isActiveCooltimeGimmick"*/, v29, v30);
    byte_4B1A2DB = 1;
  }
  memset(&v69, 0, sizeof(v69));
  if ( gimmickList && this->fields.spotCooltimeList && gimmickList->fields._size )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1BCAA3C(0LL, v32);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_EventQuestCooltimeMaster___);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v68,
      (System_Collections_Generic_List_object__o *)gimmickList,
      (const MethodInfo_35A2754 *)Method_System_Collections_Generic_List_MapGimmickComponent__GetEnumerator__);
    v69 = v68;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v69,
              (const MethodInfo_3316D1C *)Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__MoveNext__) )
    {
      current = (MapGimmickComponent_o *)v69.fields._current;
      v38 = sub_1BCAA2C(EventQuestCooltimeComponent___c__DisplayClass11_0_TypeInfo, v34, v35, v36);
      System_Object___ctor((Il2CppObject *)v38, 0LL);
      if ( !current )
        sub_1BCAA3C(v39, v40);
      mMapCtrl_MapGimmickInfo = current->fields.mMapCtrl_MapGimmickInfo;
      if ( !mMapCtrl_MapGimmickInfo )
        sub_1BCAA3C(v39, v40);
      Mine = MapControl_MapGimmickInfo__GetMine(current->fields.mMapCtrl_MapGimmickInfo, 0LL);
      v44 = Mine;
      if ( !Mine )
        sub_1BCAA3C(0LL, v43);
      if ( Mine->fields.dispCondType == 17 )
        dispTargetId = Mine->fields.dispTargetId;
      else
        dispTargetId = 0;
      if ( Mine->fields.dispCondType2 == 17 )
        dispTargetId = Mine->fields.dispTargetId2;
      if ( dispTargetId )
      {
        if ( !MasterData_object )
          sub_1BCAA3C(Mine, v43);
        Entity = EventQuestCooltimeMaster__GetEntity(
                   (EventQuestCooltimeMaster_o *)MasterData_object,
                   eventId,
                   dispTargetId,
                   1,
                   0LL);
        if ( !v38 )
          sub_1BCAA3C(Entity, Entity);
        *(_QWORD *)(v38 + 16) = Entity;
        sub_1BCA784((PartyOrganizationUtility_o *)(v38 + 16), (int64_t)Entity, v47, v48, v49, v50, v51, v52);
        if ( *(_QWORD *)(v38 + 16) )
        {
          ScriptIntParam = MapGimmickEntity__getScriptIntParam(v44, (System_String_o *)StringLiteral_21004/*"isActiveCooltimeGimmick"*/, -1, 0LL);
          spotCooltimeList = (System_Collections_Generic_List_object__o *)this->fields.spotCooltimeList;
          v55 = ScriptIntParam;
          v59 = (System_Predicate_object__o *)sub_1BCAA2C(
                                                System_Predicate_SpotCooltimeComponent__TypeInfo,
                                                v56,
                                                v57,
                                                v58);
          System_Predicate_object____ctor(
            v59,
            (Il2CppObject *)v38,
            Method_EventQuestCooltimeComponent___c__DisplayClass11_0__SetGimmickList_b__0__,
            0LL);
          if ( !spotCooltimeList )
            sub_1BCAA3C(v60, v61);
          v63 = System_Collections_Generic_List_object___Find(
                  spotCooltimeList,
                  (System_Predicate_T__o *)v59,
                  (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_SpotCooltimeComponent__Find__);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v62);
          v64 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v63, 0LL, 0LL);
          if ( v64 )
          {
            if ( !v63 )
              sub_1BCAA3C(v64, v65);
            SpotCooltimeComponent__SetSpotActiveGimmick((SpotCooltimeComponent_o *)v63, current, v55 == 1, v66);
          }
          else
          {
            v67 = v55 != 1 && mMapCtrl_MapGimmickInfo->fields.dispType == 1;
            MapGimmickComponent__SetDispAnimQuick(current, v67, 0LL);
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v69,
      (const MethodInfo_3316D18 *)Method_System_Collections_Generic_List_Enumerator_MapGimmickComponent__Dispose__);
  }
}


void __fastcall EventQuestCooltimeComponent__SetSpot(
        EventQuestCooltimeComponent_o *this,
        UserEventQuestCooltimeEntity_o *userCooltimeEntity,
        SrcSpotBasePrefab_o *targetSpot,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  Il2CppObject *spotCooltimePrefab; // x22
  Il2CppObject *v17; // x22
  UnityEngine_Transform_o *transform; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  EventQuestCooltimeComponent_c *v24; // x0
  float *p_x; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  UnityEngine_GameObject_o *gameObject; // x23
  const MethodInfo *v29; // x3
  Il2CppObject *v30; // x22
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  __int64 v37; // x8
  _QWORD *v38; // x9
  __int64 klass_low; // x10
  __int64 v40; // x8
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1A2DA & 1) == 0 )
  {
    sub_1BCA7E0(&EventQuestCooltimeComponent_TypeInfo, userCooltimeEntity, targetSpot);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_SpotCooltimeComponent___, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SpotCooltimeComponent__Add__, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v11, v12);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v13, v14);
    byte_4B1A2DA = 1;
  }
  if ( userCooltimeEntity )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, userCooltimeEntity);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)targetSpot, 0LL, 0LL) )
    {
      spotCooltimePrefab = (Il2CppObject *)this->fields.spotCooltimePrefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
      v17 = UnityEngine_Object__Instantiate_object_(
              spotCooltimePrefab,
              (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
      GameObjectExtensions__SetParent_34336872((UnityEngine_GameObject_o *)v17, this->fields.spotCooltimeRoot, 0LL);
      if ( !targetSpot )
        goto LABEL_23;
      transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)targetSpot, 0LL);
      if ( !transform )
        goto LABEL_23;
      position = UnityEngine_Transform__get_position(transform, 0LL);
      x = position.fields.x;
      y = position.fields.y;
      z = position.fields.z;
      v24 = EventQuestCooltimeComponent_TypeInfo;
      if ( !EventQuestCooltimeComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(EventQuestCooltimeComponent_TypeInfo, v20);
        v24 = EventQuestCooltimeComponent_TypeInfo;
      }
      p_x = &v24->static_fields->DEFAULT_COOLTIME_POSITION_OFFSET.fields.x;
      v42.fields.x = x + *p_x;
      v42.fields.y = y + p_x[1];
      v42.fields.z = z + p_x[2];
      GameObjectExtensions__SetPosition((UnityEngine_GameObject_o *)v17, v42, 0LL);
      if ( !v17 )
        goto LABEL_23;
      gameObject = UnityEngine_GameObject__get_gameObject((UnityEngine_GameObject_o *)v17, 0LL);
      if ( !byte_4B109C6 )
      {
        sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v26, v27);
        byte_4B109C6 = 1;
      }
      GameObjectExtensions__SetLocalScale(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
      transform = (UnityEngine_Transform_o *)UnityEngine_GameObject__GetComponent_object_(
                                               (UnityEngine_GameObject_o *)v17,
                                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_SpotCooltimeComponent___);
      if ( !transform
        || (v30 = (Il2CppObject *)transform,
            SpotCooltimeComponent__Setup((SpotCooltimeComponent_o *)transform, userCooltimeEntity, targetSpot, v29),
            (transform = (UnityEngine_Transform_o *)this->fields.spotCooltimeList) == 0LL)
        || (v37 = *(_QWORD *)&transform->fields.m_CachedPtr,
            v38 = Method_System_Collections_Generic_List_SpotCooltimeComponent__Add__,
            ++HIDWORD(transform[1].klass),
            !v37) )
      {
LABEL_23:
        sub_1BCAA3C(transform, v19);
      }
      klass_low = SLODWORD(transform[1].klass);
      if ( (unsigned int)klass_low >= *(_DWORD *)(v37 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)transform,
          v30,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
      }
      else
      {
        v40 = v37 + 8 * klass_low;
        LODWORD(transform[1].klass) = klass_low + 1;
        *(_QWORD *)(v40 + 32) = v30;
        sub_1BCA784((PartyOrganizationUtility_o *)(v40 + 32), (int64_t)v30, v31, v32, v33, v34, v35, v36);
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
    sub_1BCAA3C(this, spotCooltime);
  return (_DWORD)userCooltimeEntity == targetCooltimeEntity->fields.questId;
}