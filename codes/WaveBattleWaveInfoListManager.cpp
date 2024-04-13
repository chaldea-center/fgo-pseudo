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
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  struct QuestRestrictionInfo_o **p_questRestrictionInfo; // x20
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v37; // x1
  const MethodInfo *v38; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v39; // x21
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  ViewWaveEnemyEntity_array *EntityListFromQuestId; // x0
  const MethodInfo *v47; // x2
  ViewWaveEnemyEntity_array *v48; // x20
  const MethodInfo *v49; // x2

  if ( (byte_42E738A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_DataManager_GetMaster_ViewWaveEnemyMaster___,
      (_DWORD)deckEntity,
      (_DWORD)questRestrictionInfo,
      *(_QWORD *)&waveCount);
    sub_B5D5C4(&DataManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent___ctor__, v17, v18, v19);
    sub_B5D5C4(&System_Collections_Generic_List_WaveBattleWaveInfoComponent__TypeInfo, v20, v21, v22);
    byte_42E738A = 1;
  }
  this->fields.deckEntity = deckEntity;
  sub_B5D560(
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
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.questRestrictionInfo,
    (System_Int32_array **)questRestrictionInfo,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  this->fields.callbackFunc = callback;
  this->fields.waveCount = waveCount;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  this->fields.restartWaveNum = restartWave;
  if ( !questRestrictionInfo )
    goto LABEL_13;
  this->fields.restartWaveNumSelectMax = WaveBattleWaveInfoListManager__interruptedQuestGetRestartWave(
                                           (WaveBattleWaveInfoListManager_o *)Master_WarQuestSelectionMaster,
                                           questRestrictionInfo->fields.questId,
                                           questRestrictionInfo->fields.questPhase,
                                           v38);
  v39 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_WaveBattleWaveInfoComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v39,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent___ctor__);
  this->fields.waveInfoComponentList = (struct System_Collections_Generic_List_WaveBattleWaveInfoComponent__o *)v39;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.waveInfoComponentList,
    (System_Int32_array **)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
  if ( !*p_questRestrictionInfo || !Master_WarQuestSelectionMaster )
LABEL_13:
    sub_B5D69C(Master_WarQuestSelectionMaster, v37);
  EntityListFromQuestId = ViewWaveEnemyMaster__GetEntityListFromQuestId(
                            (ViewWaveEnemyMaster_o *)Master_WarQuestSelectionMaster,
                            (*p_questRestrictionInfo)->fields.questId,
                            0LL);
  if ( EntityListFromQuestId && (v48 = EntityListFromQuestId, *(_QWORD *)&EntityListFromQuestId->max_length) )
  {
    WaveBattleWaveInfoListManager__SetWaveInfo(this, EntityListFromQuestId, v47);
    WaveBattleWaveInfoListManager__LoadEnemyAsset(this, v48, v49);
  }
  else
  {
    WaveBattleWaveInfoListManager__SetWaveInfo(this, 0LL, v47);
  }
}


void __fastcall WaveBattleWaveInfoListManager__DestroyList(
        WaveBattleWaveInfoListManager_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleServantConfConponent_o *p_loadedAssets; // x19
  System_String_array *v6; // x20
  struct System_String_array *loadedAssets; // t1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42E7390 & 1) == 0 )
  {
    sub_B5D5C4(&AssetManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E7390 = 1;
  }
  if ( this->fields.loading )
  {
    this->fields.loading = 0;
  }
  else
  {
    loadedAssets = this->fields.loadedAssets;
    p_loadedAssets = (BattleServantConfConponent_o *)&this->fields.loadedAssets;
    v6 = loadedAssets;
    if ( loadedAssets )
    {
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      AssetManager__releaseAssetStorage_30666128(v6, 0LL);
      p_loadedAssets->klass = 0LL;
      sub_B5D560(p_loadedAssets, 0LL, v8, v9, v10, v11, v12, v13);
    }
  }
}


void __fastcall WaveBattleWaveInfoListManager__DestroyWaveInfoObj(
        WaveBattleWaveInfoListManager_o *this,
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
  struct System_Collections_Generic_List_WaveBattleWaveInfoComponent__o *waveInfoComponentList; // x0
  __int64 v21; // x1
  UnityEngine_Object_o *gameObject; // x20
  System_Collections_Generic_List_Enumerator_T__o v23; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E7394 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__, v5, v6, v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__get_Current__,
      v8,
      v9,
      v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__Clear__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__, v14, v15, v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    byte_42E7394 = 1;
  }
  memset(&v23, 0, sizeof(v23));
  waveInfoComponentList = this->fields.waveInfoComponentList;
  if ( !waveInfoComponentList )
    goto LABEL_14;
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v23,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)waveInfoComponentList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v23,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__) )
  {
    if ( !v23.fields.current )
      sub_B5D69C(0LL, v21);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)v23.fields.current,
                                           0LL);
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    UnityEngine_Object__Destroy_35620236(gameObject, 0LL);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v23,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
  waveInfoComponentList = this->fields.waveInfoComponentList;
  if ( !waveInfoComponentList )
LABEL_14:
    sub_B5D69C(waveInfoComponentList, method);
  System_Collections_Generic_List_XWeaponTrail_Element___Clear(
    (System_Collections_Generic_List_XWeaponTrail_Element__o *)waveInfoComponentList,
    (const MethodInfo_30573C8 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__Clear__);
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
    sub_B5D69C(scrollView, dialog);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 1, 0LL);
}


void __fastcall WaveBattleWaveInfoListManager__LoadEnemyAsset(
        WaveBattleWaveInfoListManager_o *this,
        ViewWaveEnemyEntity_array *viewEnemyEntities,
        const MethodInfo *method)
{
  __int64 v3; // x3
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
  int v45; // w1
  int v46; // w2
  __int64 v47; // x3
  int v48; // w1
  int v49; // w2
  __int64 v50; // x3
  int v51; // w1
  int v52; // w2
  __int64 v53; // x3
  __int64 v54; // x24
  EventMissionProgressRequest_Argument_ProgressData_o *klass; // x0
  __int64 v56; // x1
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v64; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v65; // x25
  BattleServantConfConponent_o *v66; // x24
  System_String_array **v67; // x2
  System_String_array **v68; // x3
  System_Boolean_array **v69; // x4
  System_Int32_array **v70; // x5
  System_Int32_array *v71; // x6
  System_Int32_array *v72; // x7
  signed int max_length; // w8
  unsigned int v74; // w28
  ViewWaveEnemyEntity_o *v75; // x27
  ViewWaveEnemyEntity_o *v76; // x25
  System_String_o *v77; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v78; // x26
  struct System_String_array *v79; // x0
  System_String_array **v80; // x2
  System_String_array **v81; // x3
  System_Boolean_array **v82; // x4
  System_Int32_array **v83; // x5
  System_Int32_array *v84; // x6
  System_Int32_array *v85; // x7
  System_Action_o *v86; // x19
  __int64 v87; // x0
  Il2CppObject *object; // [xsp+8h] [xbp-68h]
  WarEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_42E738B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)viewEnemyEntities, (_DWORD)method, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&Method_DataManager_GetMaster_ServantMaster___, v9, v10, v11);
    sub_B5D5C4(&DataManager_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v15, v16, v17);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Add__, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity__Add__, v21, v22, v23);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__Contains__, v24, v25, v26);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__ToArray__, v27, v28, v29);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string___ctor__, v30, v31, v32);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity___ctor__, v33, v34, v35);
    sub_B5D5C4(&System_Collections_Generic_List_ViewWaveEnemyEntity__TypeInfo, v36, v37, v38);
    sub_B5D5C4(&System_Collections_Generic_List_string__TypeInfo, v39, v40, v41);
    sub_B5D5C4(&Method_WaveBattleWaveInfoListManager___c__DisplayClass18_0__LoadEnemyAsset_b__0__, v42, v43, v44);
    sub_B5D5C4(&WaveBattleWaveInfoListManager___c__DisplayClass18_0_TypeInfo, v45, v46, v47);
    sub_B5D5C4(&ViewWaveEnemyEntity_TypeInfo, v48, v49, v50);
    sub_B5D5C4(&StringLiteral_12891/*"Servants/Commands/"*/, v51, v52, v53);
    byte_42E738B = 1;
  }
  entity = 0LL;
  v54 = sub_B5D694(WaveBattleWaveInfoListManager___c__DisplayClass18_0_TypeInfo);
  WaveBattleWaveInfoListManager___c__DisplayClass18_0___ctor(
    (WaveBattleWaveInfoListManager___c__DisplayClass18_0_o *)v54,
    0LL);
  if ( !v54 )
    goto LABEL_30;
  *(_QWORD *)(v54 + 16) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v54 + 16), (System_Int32_array **)this, v57, v58, v59, v60, v61, v62);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ServantMaster___);
  v64 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v64,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_string___ctor__);
  v65 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_ViewWaveEnemyEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v65,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_ViewWaveEnemyEntity___ctor__);
  object = (Il2CppObject *)v54;
  *(_QWORD *)(v54 + 24) = v65;
  v66 = (BattleServantConfConponent_o *)(v54 + 24);
  sub_B5D560(v66, (System_Int32_array **)v65, v67, v68, v69, v70, v71, v72);
  if ( !viewEnemyEntities )
    goto LABEL_30;
  max_length = viewEnemyEntities->max_length;
  if ( max_length >= 1 )
  {
    v74 = 0;
    while ( 1 )
    {
      if ( v74 >= max_length )
      {
        v87 = sub_B5D6C8(klass);
        sub_B5D668(v87, 0LL);
      }
      v75 = viewEnemyEntities->m_Items[v74];
      if ( !v75 || !Master_WarQuestSelectionMaster )
        break;
      klass = (EventMissionProgressRequest_Argument_ProgressData_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                       Master_WarQuestSelectionMaster,
                                                                       &entity,
                                                                       v75->fields.svtId,
                                                                       (const MethodInfo_23FAE6C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)klass & 1) != 0 )
      {
        v76 = (ViewWaveEnemyEntity_o *)sub_B5D694(ViewWaveEnemyEntity_TypeInfo);
        ViewWaveEnemyEntity___ctor_35270216(v76, v75, 0LL);
        klass = (EventMissionProgressRequest_Argument_ProgressData_o *)entity;
        if ( !entity )
          break;
        if ( ServantEntity__get_IsOrganization((ServantEntity_o *)entity, 0LL)
          && !ViewWaveEnemyEntity__IsIconIdUnique(v75, 0LL) )
        {
          v77 = System_Int32__ToString((int)v75 + 36, 0LL);
          klass = (EventMissionProgressRequest_Argument_ProgressData_o *)System_String__Concat_44577788(
                                                                           (System_String_o *)StringLiteral_12891/*"Servants/Commands/"*/,
                                                                           v77,
                                                                           0LL);
          if ( !v64 )
            break;
          v78 = klass;
          klass = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                                           (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v64,
                                                                           (WarBoardManager_TaskList_o *)klass,
                                                                           (const MethodInfo_3057410 *)Method_System_Collections_Generic_List_string__Contains__);
          if ( ((unsigned __int8)klass & 1) == 0 )
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v64,
              v78,
              (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_string__Add__);
          if ( !v76 )
            break;
          v76->fields.iconId = 0;
        }
        klass = (EventMissionProgressRequest_Argument_ProgressData_o *)v66->klass;
        if ( !v66->klass )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)klass,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v76,
          (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_ViewWaveEnemyEntity__Add__);
      }
      max_length = viewEnemyEntities->max_length;
      if ( (int)++v74 >= max_length )
        goto LABEL_25;
    }
LABEL_30:
    sub_B5D69C(klass, v56);
  }
LABEL_25:
  if ( !v64 )
    goto LABEL_30;
  v79 = (struct System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v64,
                                        (const MethodInfo_305910C *)Method_System_Collections_Generic_List_string__ToArray__);
  this->fields.loadedAssets = v79;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.loadedAssets,
    (System_Int32_array **)v79,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  this->fields.loading = 1;
  v86 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v86,
    object,
    Method_WaveBattleWaveInfoListManager___c__DisplayClass18_0__LoadEnemyAsset_b__0__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEnemyAtlas(v86, 0LL);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct System_Collections_Generic_List_WaveBattleWaveInfoComponent__o *waveInfoComponentList; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E7392 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__,
      (_DWORD)callback,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__, v6, v7, v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__get_Current__,
      v9,
      v10,
      v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__, v12, v13, v14);
    byte_42E7392 = 1;
  }
  memset(&v18, 0, sizeof(v18));
  waveInfoComponentList = this->fields.waveInfoComponentList;
  if ( !waveInfoComponentList )
    sub_B5D69C(0LL, callback);
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v18,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)waveInfoComponentList,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v18,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__) )
  {
    if ( !v18.fields.current )
      sub_B5D69C(0LL, v16);
    WaveBattleWaveInfoComponent__OverwriteMoveToPartyButton(
      (WaveBattleWaveInfoComponent_o *)v18.fields.current,
      callback,
      v17);
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v18,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveInfoListManager__SetScrollPos(
        WaveBattleWaveInfoListManager_o *this,
        int32_t wave,
        const MethodInfo *method)
{
  __int64 v3; // x3
  long double v4; // q8
  WaveBattleWaveInfoListManager_o *v6; // x19
  int v7; // w20
  __int64 v8; // x21
  struct System_Collections_Generic_List_WaveBattleWaveInfoComponent__o *waveInfoComponentList; // x22
  WaveBattleWaveInfoComponent_o *v10; // x8

  v6 = this;
  if ( (byte_42E738E & 1) == 0 )
  {
    this = (WaveBattleWaveInfoListManager_o *)sub_B5D5C4(
                                                &Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__,
                                                wave,
                                                (_DWORD)method,
                                                v3);
    byte_42E738E = 1;
  }
  v7 = wave - 1;
  if ( v7 >= 1 )
  {
    v8 = 0LL;
    LODWORD(v4) = 0;
    while ( 1 )
    {
      waveInfoComponentList = v6->fields.waveInfoComponentList;
      if ( !waveInfoComponentList )
        goto LABEL_16;
      if ( waveInfoComponentList->fields._size <= (unsigned int)v8 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v10 = waveInfoComponentList->fields._items->m_Items[v8];
      if ( !v10 )
        goto LABEL_16;
      ++v8;
      *(float *)&v4 = *(float *)&v4 + (float)v10->fields.height;
      if ( (int)v8 >= v7 )
        goto LABEL_12;
    }
  }
  LODWORD(v4) = 0;
LABEL_12:
  this = (WaveBattleWaveInfoListManager_o *)v6->fields.scrollView;
  if ( !this
    || (UIScrollView__ResetPosition((UIScrollView_o *)this, 0LL),
        (this = (WaveBattleWaveInfoListManager_o *)v6->fields.scrollView) == 0LL)
    || (((void (__fastcall *)(WaveBattleWaveInfoListManager_o *, void *, float, long double, float))this->klass[1]._1.typeMetadataHandle)(
          this,
          this->klass[1]._1.interopData,
          0.0,
          v4,
          0.0),
        (this = (WaveBattleWaveInfoListManager_o *)v6->fields.scrollView) == 0LL) )
  {
LABEL_16:
    sub_B5D69C(this, *(_QWORD *)&wave);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)this, 0LL);
}


void __fastcall WaveBattleWaveInfoListManager__SetWaveEnemyInfo(
        WaveBattleWaveInfoListManager_o *this,
        ViewWaveEnemyEntity_array *viewEnemyEntities,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  struct System_Collections_Generic_List_WaveBattleWaveInfoComponent__o *waveInfoComponentList; // x0
  __int64 v16; // x1
  const MethodInfo *v17; // x2
  System_Collections_Generic_List_Enumerator_T__o v18; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E738D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__,
      (_DWORD)viewEnemyEntities,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__, v6, v7, v8);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__get_Current__,
      v9,
      v10,
      v11);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__, v12, v13, v14);
    byte_42E738D = 1;
  }
  memset(&v18, 0, sizeof(v18));
  if ( this->fields.loading )
  {
    waveInfoComponentList = this->fields.waveInfoComponentList;
    this->fields.loading = 0;
    if ( !waveInfoComponentList )
      sub_B5D69C(0LL, viewEnemyEntities);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v18,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)waveInfoComponentList,
      (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v18,
              (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__) )
    {
      if ( !v18.fields.current )
        sub_B5D69C(0LL, v16);
      WaveBattleWaveInfoComponent__SetEnemyInfo(
        (WaveBattleWaveInfoComponent_o *)v18.fields.current,
        viewEnemyEntities,
        v17);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v18,
      (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int32_t v15; // w21
  float v16; // s8
  UnityEngine_Component_o *waveInfoListParent; // x0
  UnityEngine_GameObject_o *waveInfoPrefab; // x22
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v20; // x22
  srcLineSprite_o *Component_srcLineSprite; // x0
  QuestRestrictionInfo_o *questRestrictionInfo; // x25
  UserEventDeckEntity_o *deckEntity; // x26
  int32_t waveCount; // w24
  WaveBattleWaveInfoComponent_o *v25; // x23
  WaveBattleWaveInfoComponent_CallbackFunc_o *v26; // x27
  float height; // s9
  const MethodInfo *v28; // [xsp+8h] [xbp-68h]

  if ( (byte_42E738C & 1) == 0 )
  {
    sub_B5D5C4(&WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo, (_DWORD)viewEnemyEntities, (_DWORD)method, v3);
    sub_B5D5C4(&Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveInfoComponent___, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__Add__, v9, v10, v11);
    sub_B5D5C4(&Method_WaveBattleWaveInfoListManager_OnSelectWavePartyList__, v12, v13, v14);
    byte_42E738C = 1;
  }
  if ( this->fields.waveCount >= 1 )
  {
    v15 = 0;
    v16 = 0.0;
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
      v20 = (UnityEngine_GameObject_o *)waveInfoListParent;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)waveInfoListParent,
                                  (const MethodInfo_1CC439C *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveInfoComponent___);
      deckEntity = this->fields.deckEntity;
      questRestrictionInfo = this->fields.questRestrictionInfo;
      waveCount = this->fields.waveCount;
      v25 = (WaveBattleWaveInfoComponent_o *)Component_srcLineSprite;
      v26 = (WaveBattleWaveInfoComponent_CallbackFunc_o *)sub_B5D694(WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo);
      WaveBattleWaveInfoComponent_CallbackFunc___ctor(
        v26,
        (Il2CppObject *)this,
        Method_WaveBattleWaveInfoListManager_OnSelectWavePartyList__,
        0LL);
      if ( !v25 )
        break;
      WaveBattleWaveInfoComponent__SetWaveInfo(
        v25,
        deckEntity,
        viewEnemyEntities,
        questRestrictionInfo,
        ++v15,
        waveCount,
        v26,
        this->fields.restartWaveNum,
        this->fields.restartWaveNumSelectMax,
        v28);
      waveInfoListParent = (UnityEngine_Component_o *)this->fields.waveInfoComponentList;
      if ( !waveInfoListParent )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)waveInfoListParent,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v25,
        (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__Add__);
      height = (float)v25->fields.height;
      GameObjectExtensions__SetLocalPosition_32430604(v20, 0.0, -v16, 0.0, 0LL);
      v16 = v16 + height;
      if ( v15 >= this->fields.waveCount )
        goto LABEL_10;
    }
LABEL_13:
    sub_B5D69C(waveInfoListParent, viewEnemyEntities);
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
  __int64 v3; // x3
  WaveBattleWaveInfoListManager_o *v5; // x20
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_List_WaveBattleWaveInfoComponent__o *waveInfoComponentList; // x23
  __int64 v10; // x21
  int size; // w8
  int32_t v12; // w22
  __int64 v13; // x8
  struct System_Collections_Generic_List_WaveBattleWaveInfoComponent__o *v14; // x23
  __int64 v15; // x8

  v5 = this;
  if ( (byte_42E7391 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Count__,
      currentWave,
      (_DWORD)method,
      v3);
    this = (WaveBattleWaveInfoListManager_o *)sub_B5D5C4(
                                                &Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__,
                                                v6,
                                                v7,
                                                v8);
    byte_42E7391 = 1;
  }
  waveInfoComponentList = v5->fields.waveInfoComponentList;
  if ( !waveInfoComponentList )
LABEL_16:
    sub_B5D69C(this, *(_QWORD *)&currentWave);
  v10 = 4LL;
  while ( 1 )
  {
    size = waveInfoComponentList->fields._size;
    v12 = v10 - 4;
    if ( (int)v10 - 4 >= size )
      break;
    if ( size <= (unsigned int)v12 )
      System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
    v13 = *((_QWORD *)&waveInfoComponentList->fields._items->obj.klass + v10);
    if ( v13 )
    {
      this = *(WaveBattleWaveInfoListManager_o **)(v13 + 112);
      if ( this )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v12 > currentWave, 0LL);
        v14 = v5->fields.waveInfoComponentList;
        if ( v14 )
        {
          if ( v14->fields._size <= (unsigned int)v12 )
            System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
          v15 = *((_QWORD *)&v14->fields._items->obj.klass + v10);
          if ( v15 )
          {
            this = *(WaveBattleWaveInfoListManager_o **)(v15 + 184);
            if ( this )
            {
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, v12 <= currentWave, 0LL);
              waveInfoComponentList = v5->fields.waveInfoComponentList;
              ++v10;
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

  if ( (byte_42E738F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__,
      (_DWORD)deckEntity,
      isInterruption,
      method);
    byte_42E738F = 1;
  }
  this->fields.deckEntity = deckEntity;
  sub_B5D560(
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_42302284(0LL);
      v11 = waveInfoComponentList->fields._items->m_Items[v14];
      if ( !v11 )
LABEL_11:
        sub_B5D69C(v11, v12);
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
  __int64 v3; // x3
  struct WaveBattleWaveInfoListManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct WaveBattleWaveInfoListManager_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  WaveBattleWaveInfoListManager_o *v12; // x0
  WaveBattleWaveInfoListManager_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E7388 & 1) == 0 )
  {
    sub_B5D5C4(&WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E7388 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (WaveBattleWaveInfoListManager_CallbackFunc_c *)v9->klass != WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (WaveBattleWaveInfoListManager_o *)sub_B5D990(v9);
  WaveBattleWaveInfoListManager__remove_callbackFunc(v12, v13, v14);
}


int32_t __fastcall WaveBattleWaveInfoListManager__interruptedQuestGetRestartWave(
        WaveBattleWaveInfoListManager_o *this,
        int32_t questId,
        int32_t phase,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  WarQuestSelectionMaster_o *Master_WarQuestSelectionMaster; // x21
  int64_t UserId; // x0
  __int64 v14; // x1
  UserInterruptionQuestEntity_o *entity; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E7393 & 1) == 0 )
  {
    sub_B5D5C4(&Method_DataManager_GetMaster_UserInterruptionQuestMaster___, questId, phase, method);
    sub_B5D5C4(&DataManager_TypeInfo, v6, v7, v8);
    sub_B5D5C4(&NetworkManager_TypeInfo, v9, v10, v11);
    byte_42E7393 = 1;
  }
  entity = 0LL;
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_UserInterruptionQuestMaster___);
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
    sub_B5D69C(UserId, v14);
  }
  return 0;
}


void __fastcall WaveBattleWaveInfoListManager__remove_callbackFunc(
        WaveBattleWaveInfoListManager_o *this,
        WaveBattleWaveInfoListManager_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct WaveBattleWaveInfoListManager_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct WaveBattleWaveInfoListManager_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  WaveBattleWaveInfoListManager_o *v12; // x0
  ClassBoardEffectListDialog_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E7389 & 1) == 0 )
  {
    sub_B5D5C4(&WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E7389 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (WaveBattleWaveInfoListManager_CallbackFunc_c *)v9->klass != WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (WaveBattleWaveInfoListManager_o *)sub_B5D990(v9);
  WaveBattleWaveInfoListManager__Init(v12, v13, v14);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WaveBattleWaveInfoListManager_CallbackFunc___ctor(
        WaveBattleWaveInfoListManager_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
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
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  __int64 v14[4]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v15; // [xsp+24h] [xbp-2Ch] BYREF
  int32_t v16; // [xsp+28h] [xbp-28h] BYREF
  int32_t v17; // [xsp+2Ch] [xbp-24h] BYREF

  v17 = result;
  v15 = m;
  v16 = n;
  if ( (byte_42E6005 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, result, n, *(_QWORD *)&m);
    sub_B5D5C4(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, v10, v11, v12);
    byte_42E6005 = 1;
  }
  v14[3] = 0LL;
  v14[0] = j_il2cpp_value_box_0(WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, &v17);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v16);
  v14[2] = j_il2cpp_value_box_0(int_TypeInfo, &v15);
  return (System_IAsyncResult_o *)sub_B5D568(this, v14, callback, object);
}


void __fastcall WaveBattleWaveInfoListManager_CallbackFunc__EndInvoke(
        WaveBattleWaveInfoListManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
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
  __int64 v14; // x3
  __int64 v15; // x8
  unsigned int v16; // w24
  unsigned __int64 v17; // x10
  _DWORD *v18; // x11
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x0
  void (__fastcall **v22)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD); // x0
  WaveBattleWaveInfoListManager_CallbackFunc_o *v23; // x8
  __int64 *v24; // x23
  __int64 v25; // x24
  void (__fastcall *v26)(unsigned int *, _QWORD, _QWORD, __int64); // x25
  char v27; // w25
  char v28; // w0
  __int64 v29; // x3
  unsigned int v30; // w25
  __int64 v31; // x8
  __int64 v32; // x1
  __int64 v33; // x2
  unsigned __int64 v34; // x10
  _DWORD *v35; // x11
  unsigned int v36; // [xsp+4h] [xbp-5Ch] BYREF
  WaveBattleWaveInfoListManager_CallbackFunc_o *v37; // [xsp+8h] [xbp-58h] BYREF

  v37 = this;
  v36 = result;
  v5 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v5 )
  {
    v10 = &v37;
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
      v23 = v10[v11];
      v24 = *(__int64 **)&v23->fields.method;
      v25 = *(_QWORD *)&v23->fields.extra_arg;
      v26 = *(void (__fastcall **)(unsigned int *, _QWORD, _QWORD, __int64))&v23->fields.method_ptr;
      if ( *(__int16 *)(v25 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v23->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&n);
      if ( (sub_B5D5F4(v25) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v25 + 74) != 3 )
        goto LABEL_36;
      v26((unsigned int *)v36, (unsigned int)n, (unsigned int)m, v25);
LABEL_38:
      if ( ++v11 == v9 )
        return;
    }
    if ( !v24 )
    {
      v26(&v36 - 4, (unsigned int)n, (unsigned int)m, v25);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v25 + 72) != -1 && (*(_BYTE *)(*v24 + 277) & 1) == 0 && this->fields.m_target )
    {
      v27 = sub_B5D5EC(v25);
      v28 = sub_B5D9F0(v25);
      if ( (v27 & 1) != 0 )
      {
        v30 = v36;
        if ( (v28 & 1) != 0 )
        {
          v31 = *v24;
          v32 = *(_QWORD *)(v25 + 24);
          v33 = *(unsigned __int16 *)(v25 + 72);
          if ( *(_WORD *)(*v24 + 298) )
          {
            v34 = 0LL;
            v35 = (_DWORD *)(*(_QWORD *)(v31 + 176) + 8LL);
            while ( *((_QWORD *)v35 - 1) != v32 )
            {
              ++v34;
              v35 += 4;
              if ( v34 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_35;
            }
            v21 = v31 + 16LL * (*v35 + (int)v33) + 312;
          }
          else
          {
LABEL_35:
            v21 = sub_AF54C0(v24, v32, v33, v29);
          }
          v20 = *(_QWORD *)(v21 + 8);
        }
        else
        {
          v20 = *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320);
        }
        v22 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))sub_B5D674(v20, v25);
        (*v22)(v24, v30, (unsigned int)n, (unsigned int)m, v22);
      }
      else
      {
        v12 = *(unsigned __int16 *)(v25 + 72);
        if ( (v28 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v25);
          v15 = *v24;
          v16 = v36;
          if ( *(_WORD *)(*v24 + 298) )
          {
            v17 = 0LL;
            v18 = (_DWORD *)(*(_QWORD *)(v15 + 176) + 8LL);
            while ( *((_QWORD *)v18 - 1) != class_0 )
            {
              ++v17;
              v18 += 4;
              if ( v17 >= *(unsigned __int16 *)(*v24 + 298) )
                goto LABEL_11;
            }
            v19 = v15 + 16LL * (int)(*v18 + v12) + 312;
          }
          else
          {
LABEL_11:
            v19 = sub_AF54C0(v24, class_0, v12, v14);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))v19)(
            v24,
            v16,
            (unsigned int)n,
            (unsigned int)m,
            *(_QWORD *)(v19 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))(*v24
                                                                            + 16LL * *(unsigned __int16 *)(v25 + 72)
                                                                            + 312))(
            v24,
            v36,
            (unsigned int)n,
            (unsigned int)m,
            *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, _QWORD, __int64))v26)(
      v24,
      v36,
      (unsigned int)n,
      (unsigned int)m,
      v25);
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
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x20
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  Il2CppClass *klass; // x8
  System_String_array *v12; // x19
  System_Action_o *v13; // x21

  v4 = (Il2CppObject *)this;
  if ( (byte_42E6003 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AssetManager_TypeInfo, v5, v6, v7);
    this = (WaveBattleWaveInfoListManager___c__DisplayClass18_0_o *)sub_B5D5C4(
                                                                      &Method_WaveBattleWaveInfoListManager___c__DisplayClass18_0__LoadEnemyAsset_b__1__,
                                                                      v8,
                                                                      v9,
                                                                      v10);
    byte_42E6003 = 1;
  }
  klass = v4[1].klass;
  if ( !klass )
    sub_B5D69C(this, method);
  v12 = *(System_String_array **)&klass->_1.this_arg.bits;
  v13 = (System_Action_o *)v4[2].klass;
  if ( !v13 )
  {
    v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v13,
      v4,
      Method_WaveBattleWaveInfoListManager___c__DisplayClass18_0__LoadEnemyAsset_b__1__,
      0LL);
    v4[2].klass = (Il2CppClass *)v13;
    sub_B5D560(&v4[2]);
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_30664084(v12, v13, 1, 0LL);
}


void __fastcall WaveBattleWaveInfoListManager___c__DisplayClass18_0___LoadEnemyAsset_b__1(
        WaveBattleWaveInfoListManager___c__DisplayClass18_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *viewEnemyList; // x0
  WaveBattleWaveInfoListManager_o *_4__this; // x19

  if ( (byte_42E6004 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity__ToArray__, (_DWORD)method, v2, v3);
    byte_42E6004 = 1;
  }
  viewEnemyList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this->fields.viewEnemyList;
  if ( !viewEnemyList
    || (_4__this = this->fields.__4__this,
        viewEnemyList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                                        viewEnemyList,
                                                                                        (const MethodInfo_305910C *)Method_System_Collections_Generic_List_ViewWaveEnemyEntity__ToArray__),
        !_4__this) )
  {
    sub_B5D69C(viewEnemyList, method);
  }
  WaveBattleWaveInfoListManager__SetWaveEnemyInfo(_4__this, (ViewWaveEnemyEntity_array *)viewEnemyList, 0LL);
}