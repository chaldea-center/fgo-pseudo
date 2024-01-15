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
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x20
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  ViewWaveEnemyMaster_o *Master_WarQuestSelectionMaster; // x0
  ViewWaveEnemyEntity_array *EntityListFromQuestId; // x0
  const MethodInfo *v42; // x2
  ViewWaveEnemyEntity_array *v43; // x20
  const MethodInfo *v44; // x2

  if ( (byte_40F676B & 1) == 0 )
  {
    sub_B16FFC(&Method_DataManager_GetMaster_ViewWaveEnemyMaster___, deckEntity);
    sub_B16FFC(&DataManager_TypeInfo, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent___ctor__, v14);
    sub_B16FFC(&System_Collections_Generic_List_WaveBattleWaveInfoComponent__TypeInfo, v15);
    byte_40F676B = 1;
  }
  this->fields.deckEntity = deckEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.deckEntity,
    (System_Int32_array **)deckEntity,
    (System_String_array **)questRestrictionInfo,
    *(System_String_array ***)&waveCount,
    (System_Boolean_array **)callback,
    (System_Int32_array **)method,
    v6,
    v7);
  this->fields.questRestrictionInfo = questRestrictionInfo;
  p_questRestrictionInfo = &this->fields.questRestrictionInfo;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  this->fields.callbackFunc = callback;
  this->fields.waveCount = waveCount;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v33 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_WaveBattleWaveInfoComponent__TypeInfo,
                                                                                                  v29,
                                                                                                  v30,
                                                                                                  v31,
                                                                                                  v32);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v33,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent___ctor__);
  this->fields.waveInfoComponentList = (struct System_Collections_Generic_List_WaveBattleWaveInfoComponent__o *)v33;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.waveInfoComponentList,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ViewWaveEnemyMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
  if ( !*p_questRestrictionInfo || !Master_WarQuestSelectionMaster )
    sub_B170D4();
  EntityListFromQuestId = ViewWaveEnemyMaster__GetEntityListFromQuestId(
                            Master_WarQuestSelectionMaster,
                            (*p_questRestrictionInfo)->fields.questId,
                            0LL);
  if ( EntityListFromQuestId && (v43 = EntityListFromQuestId, *(_QWORD *)&EntityListFromQuestId->max_length) )
  {
    WaveBattleWaveInfoListManager__SetWaveInfo(this, EntityListFromQuestId, v42);
    WaveBattleWaveInfoListManager__LoadEnemyAsset(this, v43, v44);
  }
  else
  {
    WaveBattleWaveInfoListManager__SetWaveInfo(this, 0LL, v42);
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

  if ( (byte_40F6771 & 1) == 0 )
  {
    sub_B16FFC(&AssetManager_TypeInfo, method);
    byte_40F6771 = 1;
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
      AssetManager__releaseAssetStorage_29955940(v4, 0LL);
      p_loadedAssets->klass = 0LL;
      sub_B16F98(p_loadedAssets, 0LL, v6, v7, v8, v9, v10, v11);
    }
  }
}


void __fastcall WaveBattleWaveInfoListManager__Init(
        WaveBattleWaveInfoListManager_o *this,
        ClassBoardEffectListDialog_o *dialog,
        const MethodInfo *method)
{
  UnityEngine_Component_o *scrollView; // x0
  UnityEngine_GameObject_o *gameObject; // x0

  scrollView = (UnityEngine_Component_o *)this->fields.scrollView;
  if ( !scrollView || (gameObject = UnityEngine_Component__get_gameObject(scrollView, 0LL)) == 0LL )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
}


void __fastcall WaveBattleWaveInfoListManager__LoadEnemyAsset(
        WaveBattleWaveInfoListManager_o *this,
        ViewWaveEnemyEntity_array *viewEnemyEntities,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x4
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x24
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x23
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  __int64 v34; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v35; // x22
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v40; // x25
  BattleServantConfConponent_o *v41; // x24
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  _BOOL8 v48; // x0
  __int64 v49; // x1
  __int64 v50; // x2
  signed int max_length; // w8
  unsigned int v52; // w28
  ViewWaveEnemyEntity_o *v53; // x27
  __int64 v54; // x3
  __int64 v55; // x4
  ViewWaveEnemyEntity_o *v56; // x25
  System_String_o *v57; // x0
  System_String_o *v58; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v59; // x26
  struct System_String_array *v60; // x0
  System_String_array **v61; // x2
  System_String_array **v62; // x3
  System_Boolean_array **v63; // x4
  System_Int32_array **v64; // x5
  System_Int32_array *v65; // x6
  System_Int32_array *v66; // x7
  __int64 v67; // x1
  __int64 v68; // x2
  __int64 v69; // x3
  __int64 v70; // x4
  System_Action_o *v71; // x19
  Il2CppObject *object; // [xsp+8h] [xbp-68h]
  WarEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_40F676C & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, viewEnemyEntities);
    sub_B16FFC(&AtlasManager_TypeInfo, v7);
    sub_B16FFC(&Method_DataManager_GetMaster_ServantMaster___, v8);
    sub_B16FFC(&DataManager_TypeInfo, v9);
    sub_B16FFC(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Add__, v11);
    sub_B16FFC(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity__Add__, v12);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__Contains__, v13);
    sub_B16FFC(&Method_System_Collections_Generic_List_string__ToArray__, v14);
    sub_B16FFC(&Method_System_Collections_Generic_List_string___ctor__, v15);
    sub_B16FFC(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity___ctor__, v16);
    sub_B16FFC(&System_Collections_Generic_List_ViewWaveEnemyEntity__TypeInfo, v17);
    sub_B16FFC(&System_Collections_Generic_List_string__TypeInfo, v18);
    sub_B16FFC(&Method_WaveBattleWaveInfoListManager___c__DisplayClass16_0__LoadEnemyAsset_b__0__, v19);
    sub_B16FFC(&WaveBattleWaveInfoListManager___c__DisplayClass16_0_TypeInfo, v20);
    sub_B16FFC(&ViewWaveEnemyEntity_TypeInfo, v21);
    sub_B16FFC(&StringLiteral_12679/*"Servants/Commands/"*/, v22);
    byte_40F676C = 1;
  }
  entity = 0LL;
  v23 = sub_B170CC(WaveBattleWaveInfoListManager___c__DisplayClass16_0_TypeInfo, viewEnemyEntities, method, v3, v4);
  WaveBattleWaveInfoListManager___c__DisplayClass16_0___ctor(
    (WaveBattleWaveInfoListManager___c__DisplayClass16_0_o *)v23,
    0LL);
  if ( !v23 )
    goto LABEL_30;
  *(_QWORD *)(v23 + 16) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v23 + 16), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_18C3224 *)Method_DataManager_GetMaster_ServantMaster___);
  v35 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_string__TypeInfo,
                                                                                                  v31,
                                                                                                  v32,
                                                                                                  v33,
                                                                                                  v34);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v35,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_string___ctor__);
  v40 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_ViewWaveEnemyEntity__TypeInfo,
                                                                                                  v36,
                                                                                                  v37,
                                                                                                  v38,
                                                                                                  v39);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v40,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_ViewWaveEnemyEntity___ctor__);
  object = (Il2CppObject *)v23;
  *(_QWORD *)(v23 + 24) = v40;
  v41 = (BattleServantConfConponent_o *)(v23 + 24);
  sub_B16F98(v41, (System_Int32_array **)v40, v42, v43, v44, v45, v46, v47);
  if ( !viewEnemyEntities )
    goto LABEL_30;
  max_length = viewEnemyEntities->max_length;
  if ( max_length >= 1 )
  {
    v52 = 0;
    while ( 1 )
    {
      if ( v52 >= max_length )
      {
        sub_B17100(v48, v49, v50);
        sub_B170A0();
      }
      v53 = viewEnemyEntities->m_Items[v52];
      if ( !v53 || !Master_WarQuestSelectionMaster )
        break;
      v48 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
              Master_WarQuestSelectionMaster,
              &entity,
              v53->fields.svtId,
              (const MethodInfo_266F3E4 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( v48 )
      {
        v56 = (ViewWaveEnemyEntity_o *)sub_B170CC(ViewWaveEnemyEntity_TypeInfo, v49, v50, v54, v55);
        ViewWaveEnemyEntity___ctor_34377224(v56, v53, 0LL);
        if ( !entity )
          break;
        if ( ServantEntity__get_IsOrganization((ServantEntity_o *)entity, 0LL)
          && !ViewWaveEnemyEntity__IsIconIdUnique(v53, 0LL) )
        {
          v57 = System_Int32__ToString((int)v53 + 36, 0LL);
          v58 = System_String__Concat_43743732((System_String_o *)StringLiteral_12679/*"Servants/Commands/"*/, v57, 0LL);
          if ( !v35 )
            break;
          v59 = (EventMissionProgressRequest_Argument_ProgressData_o *)v58;
          if ( !System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                  (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v35,
                  (WarBoardManager_TaskList_o *)v58,
                  (const MethodInfo_2F26128 *)Method_System_Collections_Generic_List_string__Contains__) )
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v35,
              v59,
              (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_string__Add__);
          if ( !v56 )
            break;
          v56->fields.iconId = 0;
        }
        if ( !v41->klass )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)v41->klass,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v56,
          (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_ViewWaveEnemyEntity__Add__);
      }
      max_length = viewEnemyEntities->max_length;
      if ( (int)++v52 >= max_length )
        goto LABEL_25;
    }
LABEL_30:
    sub_B170D4();
  }
LABEL_25:
  if ( !v35 )
    goto LABEL_30;
  v60 = (struct System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v35,
                                        (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_string__ToArray__);
  this->fields.loadedAssets = v60;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.loadedAssets,
    (System_Int32_array **)v60,
    v61,
    v62,
    v63,
    v64,
    v65,
    v66);
  this->fields.loading = 1;
  v71 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v67, v68, v69, v70);
  System_Action___ctor(
    v71,
    object,
    Method_WaveBattleWaveInfoListManager___c__DisplayClass16_0__LoadEnemyAsset_b__0__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEnemyAtlas(v71, 0LL);
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


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveInfoListManager__SetScrollPos(
        WaveBattleWaveInfoListManager_o *this,
        int32_t wave,
        const MethodInfo *method)
{
  long double v3; // q8
  int v6; // w20
  __int64 v7; // x21
  struct System_Collections_Generic_List_WaveBattleWaveInfoComponent__o *waveInfoComponentList; // x22
  WaveBattleWaveInfoComponent_o *v9; // x8
  UIScrollView_o *scrollView; // x0
  struct UIScrollView_o *v11; // x0
  UIScrollView_o *v12; // x0

  if ( (byte_40F676F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__, *(_QWORD *)&wave);
    byte_40F676F = 1;
  }
  v6 = wave - 1;
  if ( v6 >= 1 )
  {
    v7 = 0LL;
    LODWORD(v3) = 0;
    while ( 1 )
    {
      waveInfoComponentList = this->fields.waveInfoComponentList;
      if ( !waveInfoComponentList )
        goto LABEL_16;
      if ( waveInfoComponentList->fields._size <= (unsigned int)v7 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
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
  scrollView = this->fields.scrollView;
  if ( !scrollView
    || (UIScrollView__ResetPosition(scrollView, 0LL), (v11 = this->fields.scrollView) == 0LL)
    || (((void (__fastcall *)(struct UIScrollView_o *, void *, float, long double, float))v11->klass->vtable._10_MoveRelative.method)(
          v11,
          v11->klass[1]._1.image,
          0.0,
          v3,
          0.0),
        (v12 = this->fields.scrollView) == 0LL) )
  {
LABEL_16:
    sub_B170D4();
  }
  UIScrollView__UpdatePosition(v12, 0LL);
}


void __fastcall WaveBattleWaveInfoListManager__SetWaveEnemyInfo(
        WaveBattleWaveInfoListManager_o *this,
        ViewWaveEnemyEntity_array *viewEnemyEntities,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Collections_Generic_List_WaveBattleWaveInfoComponent__o *waveInfoComponentList; // x0
  const MethodInfo *v9; // x2
  System_Collections_Generic_List_Enumerator_T__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F676E & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__,
      viewEnemyEntities);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__get_Current__, v6);
    sub_B16FFC(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__, v7);
    byte_40F676E = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( this->fields.loading )
  {
    waveInfoComponentList = this->fields.waveInfoComponentList;
    this->fields.loading = 0;
    if ( !waveInfoComponentList )
      sub_B170D4();
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v10,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)waveInfoComponentList,
      (const MethodInfo_2F26B54 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v10,
              (const MethodInfo_2074054 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__) )
    {
      if ( !v10.fields.current )
        sub_B170D4();
      WaveBattleWaveInfoComponent__SetEnemyInfo(
        (WaveBattleWaveInfoComponent_o *)v10.fields.current,
        viewEnemyEntities,
        v9);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v10,
      (const MethodInfo_2074050 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t v8; // w21
  float v9; // s8
  UnityEngine_Component_o *waveInfoListParent; // x0
  UnityEngine_GameObject_o *waveInfoPrefab; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *Object; // x0
  UnityEngine_GameObject_o *v14; // x22
  srcLineSprite_o *Component_srcLineSprite; // x0
  QuestRestrictionInfo_o *questRestrictionInfo; // x25
  UserEventDeckEntity_o *deckEntity; // x26
  int32_t waveCount; // w24
  WaveBattleWaveInfoComponent_o *v19; // x23
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x3
  __int64 v23; // x4
  WaveBattleWaveInfoComponent_CallbackFunc_o *v24; // x27
  const MethodInfo *v25; // x7
  struct System_Collections_Generic_List_WaveBattleWaveInfoComponent__o *waveInfoComponentList; // x0
  float height; // s9
  UIScrollView_o *scrollView; // x0
  UIScrollView_o *v29; // x0

  if ( (byte_40F676D & 1) == 0 )
  {
    sub_B16FFC(&WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo, viewEnemyEntities);
    sub_B16FFC(&Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveInfoComponent___, v5);
    sub_B16FFC(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__Add__, v6);
    sub_B16FFC(&Method_WaveBattleWaveInfoListManager_OnSelectWavePartyList__, v7);
    byte_40F676D = 1;
  }
  if ( this->fields.waveCount >= 1 )
  {
    v8 = 0;
    v9 = 0.0;
    while ( 1 )
    {
      waveInfoListParent = (UnityEngine_Component_o *)this->fields.waveInfoListParent;
      if ( !waveInfoListParent )
        break;
      waveInfoPrefab = this->fields.waveInfoPrefab;
      transform = UnityEngine_Component__get_transform(waveInfoListParent, 0LL);
      Object = BaseMonoBehaviour__createObject((BaseMonoBehaviour_o *)this, waveInfoPrefab, transform, 0LL, 0LL);
      if ( !Object )
        break;
      v14 = Object;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  Object,
                                  (const MethodInfo_19D14E0 *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveInfoComponent___);
      deckEntity = this->fields.deckEntity;
      questRestrictionInfo = this->fields.questRestrictionInfo;
      waveCount = this->fields.waveCount;
      v19 = (WaveBattleWaveInfoComponent_o *)Component_srcLineSprite;
      v24 = (WaveBattleWaveInfoComponent_CallbackFunc_o *)sub_B170CC(
                                                            WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo,
                                                            v20,
                                                            v21,
                                                            v22,
                                                            v23);
      WaveBattleWaveInfoComponent_CallbackFunc___ctor(
        v24,
        (Il2CppObject *)this,
        Method_WaveBattleWaveInfoListManager_OnSelectWavePartyList__,
        0LL);
      if ( !v19 )
        break;
      WaveBattleWaveInfoComponent__SetWaveInfo(
        v19,
        deckEntity,
        viewEnemyEntities,
        questRestrictionInfo,
        ++v8,
        waveCount,
        v24,
        v25);
      waveInfoComponentList = this->fields.waveInfoComponentList;
      if ( !waveInfoComponentList )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)waveInfoComponentList,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v19,
        (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__Add__);
      height = (float)v19->fields.height;
      GameObjectExtensions__SetLocalPosition_27420076(v14, 0.0, -v9, 0.0, 0LL);
      v9 = v9 + height;
      if ( v8 >= this->fields.waveCount )
        goto LABEL_10;
    }
LABEL_13:
    sub_B170D4();
  }
LABEL_10:
  scrollView = this->fields.scrollView;
  if ( !scrollView )
    goto LABEL_13;
  UIScrollView__ResetPosition(scrollView, 0LL);
  v29 = this->fields.scrollView;
  if ( !v29 )
    goto LABEL_13;
  UIScrollView__UpdatePosition(v29, 0LL);
}


void __fastcall WaveBattleWaveInfoListManager__UpdateWaveServantInfo(
        WaveBattleWaveInfoListManager_o *this,
        UserEventDeckEntity_o *deckEntity,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  const MethodInfo *v10; // x3
  __int64 v11; // x20
  struct System_Collections_Generic_List_WaveBattleWaveInfoComponent__o *waveInfoComponentList; // x21
  WaveBattleWaveInfoComponent_o *v13; // x0

  if ( (byte_40F6770 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__, deckEntity);
    byte_40F6770 = 1;
  }
  this->fields.deckEntity = deckEntity;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.deckEntity,
    (System_Int32_array **)deckEntity,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( this->fields.waveCount >= 1 )
  {
    v11 = 0LL;
    do
    {
      waveInfoComponentList = this->fields.waveInfoComponentList;
      if ( !waveInfoComponentList )
        goto LABEL_11;
      if ( waveInfoComponentList->fields._size <= (unsigned int)v11 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41329284(0LL);
      v13 = waveInfoComponentList->fields._items->m_Items[v11];
      if ( !v13 )
LABEL_11:
        sub_B170D4();
      WaveBattleWaveInfoComponent__UpdateWaveServantInfo(
        v13,
        this->fields.deckEntity,
        this->fields.questRestrictionInfo,
        v10);
      ++v11;
    }
    while ( (int)v11 < this->fields.waveCount );
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

  if ( (byte_40F6769 & 1) == 0 )
  {
    sub_B16FFC(&WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo, value);
    byte_40F6769 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveInfoListManager_o *)sub_B173C8(v8);
  WaveBattleWaveInfoListManager__remove_callbackFunc(v11, v12, v13);
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

  if ( (byte_40F676A & 1) == 0 )
  {
    sub_B16FFC(&WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo, value);
    byte_40F676A = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveInfoListManager_o *)sub_B173C8(v8);
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
  sub_B16F98(
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
  __int64 v10; // x1
  __int64 v12[4]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v13; // [xsp+24h] [xbp-2Ch] BYREF
  int32_t v14; // [xsp+28h] [xbp-28h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-24h] BYREF

  v15 = result;
  v13 = m;
  v14 = n;
  if ( (byte_40F78A0 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&result);
    sub_B16FFC(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, v10);
    byte_40F78A0 = 1;
  }
  v12[3] = 0LL;
  v12[0] = j_il2cpp_value_box_0(WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, &v15);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v12[2] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v12, callback, object);
}


void __fastcall WaveBattleWaveInfoListManager_CallbackFunc__EndInvoke(
        WaveBattleWaveInfoListManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
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
        sub_B170B8(*(_QWORD *)&v22->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&n);
      if ( (sub_B1702C(v24) & 1) == 0 )
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
      v26 = sub_B17024(v24);
      v27 = sub_B17428(v24);
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
            v20 = sub_AAFEF8(v23, v30, v31);
          }
          v19 = *(_QWORD *)(v20 + 8);
        }
        else
        {
          v19 = *(_QWORD *)(*v23 + 16LL * *(unsigned __int16 *)(v24 + 72) + 320);
        }
        v21 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))sub_B170AC(v19, v24);
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
            v18 = sub_AAFEF8(v23, class_0, v12);
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


void __fastcall WaveBattleWaveInfoListManager___c__DisplayClass16_0___ctor(
        WaveBattleWaveInfoListManager___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall WaveBattleWaveInfoListManager___c__DisplayClass16_0___LoadEnemyAsset_b__0(
        WaveBattleWaveInfoListManager___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  struct WaveBattleWaveInfoListManager_o *_4__this; // x8
  System_String_array *loadedAssets; // x19
  System_Action_o *_9__1; // x21
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7

  if ( (byte_40F789E & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AssetManager_TypeInfo, v6);
    sub_B16FFC(&Method_WaveBattleWaveInfoListManager___c__DisplayClass16_0__LoadEnemyAsset_b__1__, v7);
    byte_40F789E = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_B170D4();
  loadedAssets = _4__this->fields.loadedAssets;
  _9__1 = this->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, method, v2, v3, v4);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)this,
      Method_WaveBattleWaveInfoListManager___c__DisplayClass16_0__LoadEnemyAsset_b__1__,
      0LL);
    this->fields.__9__1 = _9__1;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.__9__1,
      (System_Int32_array **)_9__1,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_29953896(loadedAssets, _9__1, 1, 0LL);
}


void __fastcall WaveBattleWaveInfoListManager___c__DisplayClass16_0___LoadEnemyAsset_b__1(
        WaveBattleWaveInfoListManager___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_List_ViewWaveEnemyEntity__o *viewEnemyList; // x0
  WaveBattleWaveInfoListManager_o *_4__this; // x19
  ViewWaveEnemyEntity_array *v5; // x0

  if ( (byte_40F789F & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity__ToArray__, method);
    byte_40F789F = 1;
  }
  viewEnemyList = this->fields.viewEnemyList;
  if ( !viewEnemyList
    || (_4__this = this->fields.__4__this,
        v5 = (ViewWaveEnemyEntity_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                            (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)viewEnemyList,
                                            (const MethodInfo_2F27E24 *)Method_System_Collections_Generic_List_ViewWaveEnemyEntity__ToArray__),
        !_4__this) )
  {
    sub_B170D4();
  }
  WaveBattleWaveInfoListManager__SetWaveEnemyInfo(_4__this, v5, 0LL);
}