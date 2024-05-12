void __fastcall WaveBattleWaveInfoListManager___ctor(WaveBattleWaveInfoListManager_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveInfoListManager__CreateList(
        WaveBattleWaveInfoListManager_o *this,
        UserEventDeckEntity_o *deckEntity,
        QuestRestrictionInfo_o *questRestrictionInfo,
        int32_t waveCount,
        WaveBattleWaveInfoListManager_CallbackFunc_o *callback,
        int32_t restartWave,
        const MethodInfo *method)
{
  System_Int32_array *v7; // x7
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x20
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v30; // x21
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  ViewWaveEnemyEntity_array *EntityListFromQuestId; // x0
  const MethodInfo *v38; // x2
  ViewWaveEnemyEntity_array *v39; // x20
  const MethodInfo *v40; // x2

  if ( (byte_43894F4 & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent___ctor__);
    sub_B775C4(&System_Collections_Generic_List_WaveBattleWaveInfoComponent__TypeInfo);
    byte_43894F4 = 1;
  }
  this->fields.deckEntity = deckEntity;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.deckEntity,
    (System_Int32_array **)deckEntity,
    (System_String_array **)questRestrictionInfo,
    *(System_String_array ***)&waveCount,
    (System_Boolean_array **)callback,
    *(System_Int32_array ***)&restartWave,
    (System_Int32_array *)method,
    v7);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.callbackFunc = callback;
  this->fields.waveCount = waveCount;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  this->fields.restartWaveNum = restartWave;
  if ( !questRestrictionInfo )
    goto LABEL_13;
  this->fields.restartWaveNumSelectMax = WaveBattleWaveInfoListManager__interruptedQuestGetRestartWave(
                                           (WaveBattleWaveInfoListManager_o *)Master_WarQuestSelectionMaster,
                                           questRestrictionInfo->fields.questId,
                                           questRestrictionInfo->fields.questPhase,
                                           v29);
  v30 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_WaveBattleWaveInfoComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v30,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent___ctor__);
  this->fields.waveInfoComponentList = (struct System_Collections_Generic_List_WaveBattleWaveInfoComponent__o *)v30;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.waveInfoComponentList,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
  if ( !*p_questRestrictionInfo || !Master_WarQuestSelectionMaster )
LABEL_13:
    sub_B7769C(Master_WarQuestSelectionMaster, v28);
  EntityListFromQuestId = ViewWaveEnemyMaster__GetEntityListFromQuestId(
                            (ViewWaveEnemyMaster_o *)Master_WarQuestSelectionMaster,
                            (*p_questRestrictionInfo)->fields.questId,
                            0LL);
  if ( EntityListFromQuestId && (v39 = EntityListFromQuestId, *(_QWORD *)&EntityListFromQuestId->max_length) )
  {
    WaveBattleWaveInfoListManager__SetWaveInfo(this, EntityListFromQuestId, v38);
    WaveBattleWaveInfoListManager__LoadEnemyAsset(this, v39, v40);
  }
  else
  {
    WaveBattleWaveInfoListManager__SetWaveInfo(this, 0LL, v38);
  }
}


void __fastcall WaveBattleWaveInfoListManager__DestroyList(
        WaveBattleWaveInfoListManager_o *this,
        const MethodInfo *method)
{
  BattleServantConfConponent_o *p_loadedAssets; // x19
  System_String_array *v4; // x20
  struct System_String_array *loadedAssets; // t1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_43894FA & 1) == 0 )
  {
    sub_B775C4(&AssetManager_TypeInfo);
    byte_43894FA = 1;
  }
  if ( this->fields.loading )
  {
    this->fields.loading = 0;
  }
  else
  {
    loadedAssets = this->fields.loadedAssets;
    p_loadedAssets = (BattleServantConfConponent_o *)&this->fields.loadedAssets;
    v4 = loadedAssets;
    if ( loadedAssets )
    {
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__releaseAssetStorage_24411040(v4, 0LL);
      p_loadedAssets->klass = 0LL;
      sub_B77560(p_loadedAssets, 0LL, v6, v7, v8, v9, v10, v11);
    }
  }
}


void __fastcall WaveBattleWaveInfoListManager__DestroyWaveInfoObj(
        WaveBattleWaveInfoListManager_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_WaveBattleWaveInfoComponent__o *waveInfoComponentList; // x0
  __int64 v4; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_Collections_Generic_List_Enumerator_T__o v6; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_43894FE & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__Clear__);
    sub_B775C4(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    byte_43894FE = 1;
  }
  memset(&v6, 0, sizeof(v6));
  waveInfoComponentList = this->fields.waveInfoComponentList;
  if ( !waveInfoComponentList )
    goto LABEL_14;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v6,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)waveInfoComponentList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v6,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__) )
  {
    if ( !v6.fields.current )
      sub_B7769C(0LL, v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v6.fields.current,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_36309980(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v6,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
  waveInfoComponentList = this->fields.waveInfoComponentList;
  if ( !waveInfoComponentList )
LABEL_14:
    sub_B7769C(waveInfoComponentList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)waveInfoComponentList,
    (const MethodInfo_30536A0 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__Clear__);
}


void __fastcall WaveBattleWaveInfoListManager__Init(
        WaveBattleWaveInfoListManager_o *this,
        ClassBoardEffectListDialog_o *dialog,
        const MethodInfo *method)
{
  UnityEngine_Component_o *scrollView; // x0

  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView
    || (scrollView = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(scrollView, 0LL)) == 0LL )
  {
    sub_B7769C(scrollView, dialog);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 1, 0LL);
}


void __fastcall WaveBattleWaveInfoListManager__LoadEnemyAsset(
        WaveBattleWaveInfoListManager_o *this,
        ViewWaveEnemyEntity_array *viewEnemyEntities,
        const MethodInfo *method)
{
  __int64 v5; // x24
  EventMissionProgressRequest_Argument_ProgressData_o *klass; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v15; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v16; // x25
  BattleServantConfConponent_o *v17; // x24
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  signed int max_length; // w8
  unsigned int v25; // w28
  ViewWaveEnemyEntity_o *v26; // x27
  ViewWaveEnemyEntity_o *v27; // x25
  System_String_o *v28; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v29; // x26
  struct System_String_array *v30; // x0
  System_String_array **v31; // x2
  System_String_array **v32; // x3
  System_Boolean_array **v33; // x4
  System_Int32_array **v34; // x5
  System_Int32_array *v35; // x6
  System_Int32_array *v36; // x7
  System_Action_o *v37; // x19
  __int64 v38; // x0
  Il2CppObject *object; // [xsp+8h] [xbp-68h]
  WarEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_43894F5 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AtlasManager_TypeInfo);
    sub_B775C4(&Method_DataManager_GetMaster_ServantMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity__Add__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__Contains__);
    sub_B775C4(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_B775C4(&Method_System_Collections_Generic_List_string___ctor___69407008);
    sub_B775C4(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity___ctor__);
    sub_B775C4(&System_Collections_Generic_List_ViewWaveEnemyEntity__TypeInfo);
    sub_B775C4(&System_Collections_Generic_List_string__TypeInfo);
    sub_B775C4(&Method_WaveBattleWaveInfoListManager___c__DisplayClass18_0__LoadEnemyAsset_b__0__);
    sub_B775C4(&WaveBattleWaveInfoListManager___c__DisplayClass18_0_TypeInfo);
    sub_B775C4(&ViewWaveEnemyEntity_TypeInfo);
    sub_B775C4(&StringLiteral_12976/*"Servants/Commands/"*/);
    byte_43894F5 = 1;
  }
  entity = 0LL;
  v5 = sub_B77694(WaveBattleWaveInfoListManager___c__DisplayClass18_0_TypeInfo);
  WaveBattleWaveInfoListManager___c__DisplayClass18_0___ctor(
    (WaveBattleWaveInfoListManager___c__DisplayClass18_0_o *)v5,
    0LL);
  if ( !v5 )
    goto LABEL_30;
  *(_QWORD *)(v5 + 16) = this;
  sub_B77560((BattleServantConfConponent_o *)(v5 + 16), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_ServantMaster___);
  v15 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v15,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_string___ctor___69407008);
  v16 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B77694(System_Collections_Generic_List_ViewWaveEnemyEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v16,
    (const MethodInfo_30525D4 *)Method_System_Collections_Generic_List_ViewWaveEnemyEntity___ctor__);
  object = (Il2CppObject *)v5;
  *(_QWORD *)(v5 + 24) = v16;
  v17 = (BattleServantConfConponent_o *)(v5 + 24);
  sub_B77560(v17, (System_Int32_array **)v16, v18, v19, v20, v21, v22, v23);
  if ( !viewEnemyEntities )
    goto LABEL_30;
  max_length = viewEnemyEntities->max_length;
  if ( max_length >= 1 )
  {
    v25 = 0;
    while ( 1 )
    {
      if ( v25 >= max_length )
      {
        v38 = sub_B776C8(klass);
        sub_B77668(v38, 0LL);
      }
      v26 = viewEnemyEntities->m_Items[v25];
      if ( !v26 || !Master_WarQuestSelectionMaster )
        break;
      klass = (EventMissionProgressRequest_Argument_ProgressData_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                       Master_WarQuestSelectionMaster,
                                                                       &entity,
                                                                       v26->fields.svtId,
                                                                       (const MethodInfo_21FB8F0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)klass & 1) != 0 )
      {
        v27 = (ViewWaveEnemyEntity_o *)sub_B77694(ViewWaveEnemyEntity_TypeInfo);
        ViewWaveEnemyEntity___ctor_35730568(v27, v26, 0LL);
        klass = (EventMissionProgressRequest_Argument_ProgressData_o *)entity;
        if ( !entity )
          break;
        if ( ServantEntity__get_IsOrganization((ServantEntity_o *)entity, 0LL)
          && !ViewWaveEnemyEntity__IsIconIdUnique(v26, 0LL) )
        {
          v28 = System_Int32__ToString((int)v26 + 36, 0LL);
          klass = (EventMissionProgressRequest_Argument_ProgressData_o *)System_String__Concat_44901936(
                                                                           (System_String_o *)StringLiteral_12976/*"Servants/Commands/"*/,
                                                                           v28,
                                                                           0LL);
          if ( !v15 )
            break;
          v29 = klass;
          klass = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                                           (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v15,
                                                                           (WarBoardManager_TaskList_o *)klass,
                                                                           (const MethodInfo_30536E8 *)Method_System_Collections_Generic_List_string__Contains__);
          if ( ((unsigned __int8)klass & 1) == 0 )
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v15,
              v29,
              (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_string__Add__);
          if ( !v27 )
            break;
          v27->fields.iconId = 0;
        }
        klass = (EventMissionProgressRequest_Argument_ProgressData_o *)v17->klass;
        if ( !v17->klass )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)klass,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v27,
          (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_ViewWaveEnemyEntity__Add__);
      }
      max_length = viewEnemyEntities->max_length;
      if ( (int)++v25 >= max_length )
        goto LABEL_25;
    }
LABEL_30:
    sub_B7769C(klass, v7);
  }
LABEL_25:
  if ( !v15 )
    goto LABEL_30;
  v30 = (struct System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v15,
                                        (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_string__ToArray__);
  this->fields.loadedAssets = v30;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.loadedAssets,
    (System_Int32_array **)v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36);
  this->fields.loading = 1;
  v37 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(
    v37,
    object,
    Method_WaveBattleWaveInfoListManager___c__DisplayClass18_0__LoadEnemyAsset_b__0__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEnemyAtlas(v37, 0LL);
}


void __fastcall WaveBattleWaveInfoListManager__OnSelectWavePartyList(
        WaveBattleWaveInfoListManager_o *this,
        int32_t result,
        int32_t wave,
        int32_t idx,
        const MethodInfo *method)
{
  WaveBattleWaveInfoListManager_CallbackFunc_o *callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( callbackFunc )
    WaveBattleWaveInfoListManager_CallbackFunc__Invoke(callbackFunc, result, wave, idx, 0LL);
}


void __fastcall WaveBattleWaveInfoListManager__OverwriteMoveToPartyButton(
        WaveBattleWaveInfoListManager_o *this,
        System_Action_int__o *callback,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_WaveBattleWaveInfoComponent__o *waveInfoComponentList; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_43894FC & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
    byte_43894FC = 1;
  }
  memset(&v8, 0, sizeof(v8));
  waveInfoComponentList = this->fields.waveInfoComponentList;
  if ( !waveInfoComponentList )
    sub_B7769C(0LL, callback);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v8,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)waveInfoComponentList,
    (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v8,
            (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__) )
  {
    if ( !v8.fields.current )
      sub_B7769C(0LL, v6);
    WaveBattleWaveInfoComponent__OverwriteMoveToPartyButton(
      (WaveBattleWaveInfoComponent_o *)v8.fields.current,
      callback,
      v7);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v8,
    (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveInfoListManager__SetScrollPos(
        WaveBattleWaveInfoListManager_o *this,
        int32_t wave,
        const MethodInfo *method)
{
  long double v3; // q8
  WaveBattleWaveInfoListManager_o *v5; // x19
  int v6; // w20
  __int64 v7; // x21
  struct System_Collections_Generic_List_WaveBattleWaveInfoComponent__o *waveInfoComponentList; // x22
  WaveBattleWaveInfoComponent_o *v9; // x8

  v5 = this;
  if ( (byte_43894F8 & 1) == 0 )
  {
    this = (WaveBattleWaveInfoListManager_o *)sub_B775C4(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__);
    byte_43894F8 = 1;
  }
  v6 = wave - 1;
  if ( v6 >= 1 )
  {
    v7 = 0LL;
    LODWORD(v3) = 0;
    while ( 1 )
    {
      waveInfoComponentList = v5->fields.waveInfoComponentList;
      if ( !waveInfoComponentList )
        goto LABEL_16;
      if ( waveInfoComponentList->fields._size <= (unsigned int)v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v9 = waveInfoComponentList->fields._items->m_Items[v7];
      if ( !v9 )
        goto LABEL_16;
      ++v7;
      *(float *)&v3 = *(float *)&v3 + (float)v9->fields.height;
      if ( (int)v7 >= v6 )
        goto LABEL_12;
    }
  }
  LODWORD(v3) = 0;
LABEL_12:
  this = (WaveBattleWaveInfoListManager_o *)v5->fields.scrollView;
  if ( !this
    || (UIScrollView__ResetPosition((UIScrollView_o *)this, 0LL),
        (this = (WaveBattleWaveInfoListManager_o *)v5->fields.scrollView) == 0LL)
    || (((void (__fastcall *)(WaveBattleWaveInfoListManager_o *, void *, float, long double, float))this->klass[1]._1.typeMetadataHandle)(
          this,
          this->klass[1]._1.interopData,
          0.0,
          v3,
          0.0),
        (this = (WaveBattleWaveInfoListManager_o *)v5->fields.scrollView) == 0LL) )
  {
LABEL_16:
    sub_B7769C(this, *(_QWORD *)&wave);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)this, 0LL);
}


void __fastcall WaveBattleWaveInfoListManager__SetWaveEnemyInfo(
        WaveBattleWaveInfoListManager_o *this,
        ViewWaveEnemyEntity_array *viewEnemyEntities,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_WaveBattleWaveInfoComponent__o *waveInfoComponentList; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  System_Collections_Generic_List_Enumerator_T__o v8; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_43894F7 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__);
    sub_B775C4(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__get_Current__);
    sub_B775C4(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
    byte_43894F7 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  if ( this->fields.loading )
  {
    waveInfoComponentList = this->fields.waveInfoComponentList;
    this->fields.loading = 0;
    if ( !waveInfoComponentList )
      sub_B7769C(0LL, viewEnemyEntities);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v8,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)waveInfoComponentList,
      (const MethodInfo_3054114 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v8,
              (const MethodInfo_225C720 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__) )
    {
      if ( !v8.fields.current )
        sub_B7769C(0LL, v6);
      WaveBattleWaveInfoComponent__SetEnemyInfo(
        (WaveBattleWaveInfoComponent_o *)v8.fields.current,
        viewEnemyEntities,
        v7);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v8,
      (const MethodInfo_225C71C *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
  }
  else
  {
    WaveBattleWaveInfoListManager__DestroyList(this, (const MethodInfo *)viewEnemyEntities);
  }
}


void __fastcall WaveBattleWaveInfoListManager__SetWaveInfo(
        WaveBattleWaveInfoListManager_o *this,
        ViewWaveEnemyEntity_array *viewEnemyEntities,
        const MethodInfo *method)
{
  int32_t v5; // w21
  float v6; // s8
  UnityEngine_Component_o *waveInfoListParent; // x0
  UnityEngine_GameObject_o *waveInfoPrefab; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v10; // x22
  srcLineSprite_o *Component_srcLineSprite; // x0
  QuestRestrictionInfo_o *questRestrictionInfo; // x25
  UserEventDeckEntity_o *deckEntity; // x26
  int32_t waveCount; // w24
  WaveBattleWaveInfoComponent_o *v15; // x23
  WaveBattleWaveInfoComponent_CallbackFunc_o *v16; // x27
  float height; // s9
  const MethodInfo *v18; // [xsp+8h] [xbp-68h]

  if ( (byte_43894F6 & 1) == 0 )
  {
    sub_B775C4(&WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveInfoComponent___);
    sub_B775C4(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__Add__);
    sub_B775C4(&Method_WaveBattleWaveInfoListManager_OnSelectWavePartyList__);
    byte_43894F6 = 1;
  }
  if ( this->fields.waveCount >= 1 )
  {
    v5 = 0;
    v6 = 0.0;
    while ( 1 )
    {
      waveInfoListParent = (UnityEngine_Component_o *)this->fields.waveInfoListParent;
      if ( !waveInfoListParent )
        break;
      waveInfoPrefab = this->fields.waveInfoPrefab;
      transform = UnityEngine_Component__get_transform(waveInfoListParent, 0LL);
      waveInfoListParent = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject(
                                                        (BaseMonoBehaviour_o *)this,
                                                        waveInfoPrefab,
                                                        transform,
                                                        0LL,
                                                        0LL);
      if ( !waveInfoListParent )
        break;
      v10 = (UnityEngine_GameObject_o *)waveInfoListParent;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)waveInfoListParent,
                                  (const MethodInfo_1DEBFC4 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveInfoComponent___);
      deckEntity = this->fields.deckEntity;
      questRestrictionInfo = this->fields.questRestrictionInfo;
      waveCount = this->fields.waveCount;
      v15 = (WaveBattleWaveInfoComponent_o *)Component_srcLineSprite;
      v16 = (WaveBattleWaveInfoComponent_CallbackFunc_o *)sub_B77694(WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo);
      WaveBattleWaveInfoComponent_CallbackFunc___ctor(
        v16,
        (Il2CppObject *)this,
        Method_WaveBattleWaveInfoListManager_OnSelectWavePartyList__,
        0LL);
      if ( !v15 )
        break;
      WaveBattleWaveInfoComponent__SetWaveInfo(
        v15,
        deckEntity,
        viewEnemyEntities,
        questRestrictionInfo,
        ++v5,
        waveCount,
        v16,
        this->fields.restartWaveNum,
        this->fields.restartWaveNumSelectMax,
        v18);
      waveInfoListParent = (UnityEngine_Component_o *)this->fields.waveInfoComponentList;
      if ( !waveInfoListParent )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)waveInfoListParent,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v15,
        (const MethodInfo_3053298 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__Add__);
      height = (float)v15->fields.height;
      GameObjectExtensions__SetLocalPosition_32807768(v10, 0.0, -v6, 0.0, 0LL);
      v6 = v6 + height;
      if ( v5 >= this->fields.waveCount )
        goto LABEL_10;
    }
LABEL_13:
    sub_B7769C(waveInfoListParent, viewEnemyEntities);
  }
LABEL_10:
  waveInfoListParent = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !waveInfoListParent )
    goto LABEL_13;
  UIScrollView__ResetPosition((UIScrollView_o *)waveInfoListParent, 0LL);
  waveInfoListParent = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !waveInfoListParent )
    goto LABEL_13;
  UIScrollView__UpdatePosition((UIScrollView_o *)waveInfoListParent, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveInfoListManager__SetWaveInfoMaskActive(
        WaveBattleWaveInfoListManager_o *this,
        int32_t currentWave,
        const MethodInfo *method)
{
  WaveBattleWaveInfoListManager_o *v4; // x20
  struct System_Collections_Generic_List_WaveBattleWaveInfoComponent__o *waveInfoComponentList; // x23
  __int64 v6; // x21
  int size; // w8
  int32_t v8; // w22
  __int64 v9; // x8
  struct System_Collections_Generic_List_WaveBattleWaveInfoComponent__o *v10; // x23
  __int64 v11; // x8

  v4 = this;
  if ( (byte_43894FB & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Count__);
    this = (WaveBattleWaveInfoListManager_o *)sub_B775C4(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__);
    byte_43894FB = 1;
  }
  waveInfoComponentList = v4->fields.waveInfoComponentList;
  if ( !waveInfoComponentList )
LABEL_16:
    sub_B7769C(this, *(_QWORD *)&currentWave);
  v6 = 4LL;
  while ( 1 )
  {
    size = waveInfoComponentList->fields._size;
    v8 = v6 - 4;
    if ( (int)v6 - 4 >= size )
      break;
    if ( size <= (unsigned int)v8 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
    v9 = *((_QWORD *)&waveInfoComponentList->fields._items->obj.klass + v6);
    if ( v9 )
    {
      this = *(WaveBattleWaveInfoListManager_o **)(v9 + 112);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v8 > currentWave, 0LL);
        v10 = v4->fields.waveInfoComponentList;
        if ( v10 )
        {
          if ( v10->fields._size <= (unsigned int)v8 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
          v11 = *((_QWORD *)&v10->fields._items->obj.klass + v6);
          if ( v11 )
          {
            this = *(WaveBattleWaveInfoListManager_o **)(v11 + 184);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v8 <= currentWave, 0LL);
              waveInfoComponentList = v4->fields.waveInfoComponentList;
              ++v6;
              if ( waveInfoComponentList )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_16;
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveInfoListManager__UpdateWaveServantInfo(
        WaveBattleWaveInfoListManager_o *this,
        UserEventDeckEntity_o *deckEntity,
        bool isInterruption,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  WaveBattleWaveInfoComponent_o *v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4
  __int64 v14; // x21
  bool v15; // w20
  struct System_Collections_Generic_List_WaveBattleWaveInfoComponent__o *waveInfoComponentList; // x22

  if ( (byte_43894F9 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__);
    byte_43894F9 = 1;
  }
  this->fields.deckEntity = deckEntity;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.deckEntity,
    (System_Int32_array **)deckEntity,
    (System_String_array **)isInterruption,
    (System_String_array **)method,
    v4,
    v5,
    v6,
    v7);
  if ( this->fields.waveCount >= 1 )
  {
    v14 = 0LL;
    v15 = isInterruption;
    do
    {
      waveInfoComponentList = this->fields.waveInfoComponentList;
      if ( !waveInfoComponentList )
        goto LABEL_11;
      if ( waveInfoComponentList->fields._size <= (unsigned int)v14 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42293568(0LL);
      v11 = waveInfoComponentList->fields._items->m_Items[v14];
      if ( !v11 )
LABEL_11:
        sub_B7769C(v11, v12);
      WaveBattleWaveInfoComponent__UpdateWaveServantInfo(
        v11,
        this->fields.deckEntity,
        this->fields.questRestrictionInfo,
        v15,
        v13);
      ++v14;
    }
    while ( (int)v14 < this->fields.waveCount );
  }
}


void __fastcall WaveBattleWaveInfoListManager__add_callbackFunc(
        WaveBattleWaveInfoListManager_o *this,
        WaveBattleWaveInfoListManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct WaveBattleWaveInfoListManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct WaveBattleWaveInfoListManager_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  WaveBattleWaveInfoListManager_o *v11; // x0
  WaveBattleWaveInfoListManager_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_43894F2 & 1) == 0 )
  {
    sub_B775C4(&WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo);
    byte_43894F2 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (WaveBattleWaveInfoListManager_CallbackFunc_c *)v8->klass != WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveInfoListManager_o *)sub_B77990(v8);
  WaveBattleWaveInfoListManager__remove_callbackFunc(v11, v12, v13);
}


int32_t __fastcall WaveBattleWaveInfoListManager__interruptedQuestGetRestartWave(
        WaveBattleWaveInfoListManager_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  __int64 v8; // x1
  UserInterruptionQuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_43894FD & 1) == 0 )
  {
    sub_B775C4(&Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
    sub_B775C4(&DataManager_TypeInfo);
    sub_B775C4(&NetworkManager_TypeInfo);
    byte_43894FD = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1D18390 *)Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  }
  UserId = NetworkManager__get_UserId(0LL);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_14;
  if ( UserInterruptionQuestMaster__TryGetEntity(
         (UserInterruptionQuestMaster_o *)Master_WarQuestSelectionMaster,
         &entity,
         UserId,
         questId,
         phase,
         0LL) )
  {
    UserId = (int64_t)entity;
    if ( entity )
      return UserInterruptionQuestEntity__GetRestartWave(entity, 0LL);
LABEL_14:
    sub_B7769C(UserId, v8);
  }
  return 0;
}


void __fastcall WaveBattleWaveInfoListManager__remove_callbackFunc(
        WaveBattleWaveInfoListManager_o *this,
        WaveBattleWaveInfoListManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct WaveBattleWaveInfoListManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct WaveBattleWaveInfoListManager_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  WaveBattleWaveInfoListManager_o *v11; // x0
  ClassBoardEffectListDialog_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_43894F3 & 1) == 0 )
  {
    sub_B775C4(&WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo);
    byte_43894F3 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (WaveBattleWaveInfoListManager_CallbackFunc_c *)v8->klass != WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveInfoListManager_o *)sub_B77990(v8);
  WaveBattleWaveInfoListManager__Init(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveInfoListManager_CallbackFunc___ctor(
        WaveBattleWaveInfoListManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B77560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall WaveBattleWaveInfoListManager_CallbackFunc__BeginInvoke(
        WaveBattleWaveInfoListManager_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        int32_t m,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v10; // x2
  __int64 v11; // x2
  __int64 v13[4]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v14; // [xsp+24h] [xbp-2Ch] BYREF
  int32_t v15; // [xsp+28h] [xbp-28h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-24h] BYREF

  v16 = result;
  v14 = m;
  v15 = n;
  if ( (byte_43892B9 & 1) == 0 )
  {
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo);
    byte_43892B9 = 1;
  }
  v13[3] = 0LL;
  v13[0] = j_il2cpp_value_box_0(WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, &v16, *(_QWORD *)&n);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10);
  v13[2] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v11);
  return (System_IAsyncResult_o *)sub_B77568(this, v13, callback, object);
}


void __fastcall WaveBattleWaveInfoListManager_CallbackFunc__EndInvoke(
        WaveBattleWaveInfoListManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveInfoListManager_CallbackFunc__Invoke(
        WaveBattleWaveInfoListManager_CallbackFunc_o *this,
        int32_t result,
        int32_t n,
        int32_t m,
        const MethodInfo *method)
{
  __int64 v5; // x8
  __int64 v9; // x26
  WaveBattleWaveInfoListManager_CallbackFunc_o **v10; // x27
  __int64 v11; // x28
  unsigned int v12; // w25
  __int64 class_0; // x0
  __int64 v14; // x8
  unsigned int v15; // w24
  unsigned __int64 v16; // x10
  _DWORD *v17; // x11
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x0
  void (__fastcall **v21)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD); // x0
  WaveBattleWaveInfoListManager_CallbackFunc_o *v22; // x8
  __int64 *v23; // x23
  __int64 v24; // x24
  void (__fastcall *v25)(unsigned int *, _QWORD, _QWORD, __int64); // x25
  char v26; // w25
  char v27; // w0
  unsigned int v28; // w25
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+4h] [xbp-5Ch] BYREF
  WaveBattleWaveInfoListManager_CallbackFunc_o *v35; // [xsp+8h] [xbp-58h] BYREF

  v35 = this;
  v34 = result;
  v5 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v5 )
  {
    v10 = &v35;
    v9 = 1LL;
    goto LABEL_5;
  }
  v9 = *(_QWORD *)(v5 + 24);
  if ( v9 )
  {
    v10 = (WaveBattleWaveInfoListManager_CallbackFunc_o **)(v5 + 32);
LABEL_5:
    v11 = 0LL;
    while ( 1 )
    {
      v22 = v10[v11];
      v23 = *(__int64 **)&v22->fields.method;
      v24 = *(_QWORD *)&v22->fields.extra_arg;
      v25 = *(void (__fastcall **)(unsigned int *, _QWORD, _QWORD, __int64))&v22->fields.method_ptr;
      if ( *(__int16 *)(v24 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v22->fields.extra_arg, *(_QWORD *)&result);
      if ( (sub_B775F4(v24) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v24 + 74) != 3 )
        goto LABEL_36;
      v25((unsigned int *)v34, (unsigned int)n, (unsigned int)m, v24);
LABEL_38:
      if ( ++v11 == v9 )
        return;
    }
    if ( !v23 )
    {
      v25(&v34 - 4, (unsigned int)n, (unsigned int)m, v24);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v24 + 72) != -1 && (*(_BYTE *)(*v23 + 277) & 1) == 0 && this->fields.m_target )
    {
      v26 = sub_B775EC(v24);
      v27 = sub_B779F0(v24);
      if ( (v26 & 1) != 0 )
      {
        v28 = v34;
        if ( (v27 & 1) != 0 )
        {
          v29 = *v23;
          v30 = *(_QWORD *)(v24 + 24);
          v31 = *(unsigned __int16 *)(v24 + 72);
          if ( *(_WORD *)(*v23 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v23 + 298) )
                goto LABEL_35;
            }
            v20 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v20 = sub_B0F4C0(v23, v30, v31);
          }
          v19 = *(_QWORD *)(v20 + 8);
        }
        else
        {
          v19 = *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320);
        }
        v21 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))sub_B77674(v19, v24);
        (*v21)(v23, v28, (unsigned int)n, (unsigned int)m, v21);
      }
      else
      {
        v12 = *(unsigned __int16 *)(v24 + 72);
        if ( (v27 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v24);
          v14 = *v23;
          v15 = v34;
          if ( *(_WORD *)(*v23 + 298) )
          {
            v16 = 0LL;
            v17 = (_DWORD *)(*(_QWORD *)(v14 + 176) + 8LL);
            while ( *((_QWORD *)v17 - 1) != class_0 )
            {
              ++v16;
              v17 += 4;
              if ( v16 >= *(unsigned __int16 *)(*v23 + 298) )
                goto LABEL_11;
            }
            v18 = v14 + 16LL * (int)(*v17 + v12) + 312;
          }
          else
          {
LABEL_11:
            v18 = sub_B0F4C0(v23, class_0, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))v18)(
            v23,
            v15,
            (unsigned int)n,
            (unsigned int)m,
            *(_QWORD *)(v18 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))(*v23
                                                                            + 16LL * *(unsigned __int16 *)(v24 + 72)
                                                                            + 312))(
            v23,
            v34,
            (unsigned int)n,
            (unsigned int)m,
            *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, _QWORD, __int64))v25)(
      v23,
      v34,
      (unsigned int)n,
      (unsigned int)m,
      v24);
    goto LABEL_38;
  }
}


void __fastcall WaveBattleWaveInfoListManager___c__DisplayClass18_0___ctor(
        WaveBattleWaveInfoListManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WaveBattleWaveInfoListManager___c__DisplayClass18_0___LoadEnemyAsset_b__0(
        WaveBattleWaveInfoListManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  WaveBattleWaveInfoListManager___c__DisplayClass18_0_o *v2; // x20
  struct WaveBattleWaveInfoListManager_o *_4__this; // x8
  System_String_array *loadedAssets; // x19
  System_Action_o *_9__1; // x21
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  v2 = this;
  if ( (byte_43892B7 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AssetManager_TypeInfo);
    this = (WaveBattleWaveInfoListManager___c__DisplayClass18_0_o *)sub_B775C4(&Method_WaveBattleWaveInfoListManager___c__DisplayClass18_0__LoadEnemyAsset_b__1__);
    byte_43892B7 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    sub_B7769C(this, method);
  loadedAssets = _4__this->fields.loadedAssets;
  _9__1 = v2->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v2,
      Method_WaveBattleWaveInfoListManager___c__DisplayClass18_0__LoadEnemyAsset_b__1__,
      0LL);
    v2->fields.__9__1 = _9__1;
    sub_B77560(
      (BattleServantConfConponent_o *)&v2->fields.__9__1,
      (System_Int32_array **)_9__1,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_24408996(loadedAssets, _9__1, 1, 0LL);
}


void __fastcall WaveBattleWaveInfoListManager___c__DisplayClass18_0___LoadEnemyAsset_b__1(
        WaveBattleWaveInfoListManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *viewEnemyList; // x0
  WaveBattleWaveInfoListManager_o *_4__this; // x19

  if ( (byte_43892B8 & 1) == 0 )
  {
    sub_B775C4(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity__ToArray__);
    byte_43892B8 = 1;
  }
  viewEnemyList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this->fields.viewEnemyList;
  if ( !viewEnemyList
    || (_4__this = this->fields.__4__this,
        viewEnemyList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                                        viewEnemyList,
                                                                                        (const MethodInfo_30553E4 *)Method_System_Collections_Generic_List_ViewWaveEnemyEntity__ToArray__),
        !_4__this) )
  {
    sub_B7769C(viewEnemyList, method);
  }
  WaveBattleWaveInfoListManager__SetWaveEnemyInfo(_4__this, (ViewWaveEnemyEntity_array *)viewEnemyList, 0LL);
}