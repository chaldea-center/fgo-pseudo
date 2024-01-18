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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v29; // x21
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  ViewWaveEnemyMaster_o *Master_WarQuestSelectionMaster; // x0
  __int64 v37; // x1
  ViewWaveEnemyEntity_array *EntityListFromQuestId; // x0
  const MethodInfo *v39; // x2
  ViewWaveEnemyEntity_array *v40; // x20
  const MethodInfo *v41; // x2

  if ( (byte_4187409 & 1) == 0 )
  {
    sub_B2C35C(&Method_DataManager_GetMaster_ViewWaveEnemyMaster___, deckEntity);
    sub_B2C35C(&DataManager_TypeInfo, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent___ctor__, v14);
    sub_B2C35C(&System_Collections_Generic_List_WaveBattleWaveInfoComponent__TypeInfo, v15);
    byte_4187409 = 1;
  }
  this->fields.deckEntity = deckEntity;
  sub_B2C2F8(
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
  sub_B2C2F8(
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
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v29 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_WaveBattleWaveInfoComponent__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v29,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent___ctor__);
  this->fields.waveInfoComponentList = (struct System_Collections_Generic_List_WaveBattleWaveInfoComponent__o *)v29;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.waveInfoComponentList,
    (System_Int32_array **)v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (ViewWaveEnemyMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ViewWaveEnemyMaster___);
  if ( !*p_questRestrictionInfo || !Master_WarQuestSelectionMaster )
    sub_B2C434(Master_WarQuestSelectionMaster, v37);
  EntityListFromQuestId = ViewWaveEnemyMaster__GetEntityListFromQuestId(
                            Master_WarQuestSelectionMaster,
                            (*p_questRestrictionInfo)->fields.questId,
                            0LL);
  if ( EntityListFromQuestId && (v40 = EntityListFromQuestId, *(_QWORD *)&EntityListFromQuestId->max_length) )
  {
    WaveBattleWaveInfoListManager__SetWaveInfo(this, EntityListFromQuestId, v39);
    WaveBattleWaveInfoListManager__LoadEnemyAsset(this, v40, v41);
  }
  else
  {
    WaveBattleWaveInfoListManager__SetWaveInfo(this, 0LL, v39);
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

  if ( (byte_418740F & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    byte_418740F = 1;
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
      AssetManager__releaseAssetStorage_30161248(v4, 0LL);
      p_loadedAssets->klass = 0LL;
      sub_B2C2F8(p_loadedAssets, 0LL, v6, v7, v8, v9, v10, v11);
    }
  }
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
    sub_B2C434(scrollView, dialog);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)scrollView, 1, 0LL);
}


void __fastcall WaveBattleWaveInfoListManager__LoadEnemyAsset(
        WaveBattleWaveInfoListManager_o *this,
        ViewWaveEnemyEntity_array *viewEnemyEntities,
        const MethodInfo *method)
{
  __int64 v5; // x1
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
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x24
  EventMissionProgressRequest_Argument_ProgressData_o *klass; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  DataMasterBase_WarMaster__WarEntity__int__o *Master_WarQuestSelectionMaster; // x23
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v31; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v32; // x25
  BattleServantConfConponent_o *v33; // x24
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7
  signed int max_length; // w8
  unsigned int v41; // w28
  ViewWaveEnemyEntity_o *v42; // x27
  ViewWaveEnemyEntity_o *v43; // x25
  System_String_o *v44; // x0
  EventMissionProgressRequest_Argument_ProgressData_o *v45; // x26
  struct System_String_array *v46; // x0
  System_String_array **v47; // x2
  System_String_array **v48; // x3
  System_Boolean_array **v49; // x4
  System_Int32_array **v50; // x5
  System_Int32_array *v51; // x6
  System_Int32_array *v52; // x7
  System_Action_o *v53; // x19
  __int64 v54; // x0
  Il2CppObject *object; // [xsp+8h] [xbp-68h]
  WarEntity_o *entity; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_418740A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, viewEnemyEntities);
    sub_B2C35C(&AtlasManager_TypeInfo, v5);
    sub_B2C35C(&Method_DataManager_GetMaster_ServantMaster___, v6);
    sub_B2C35C(&DataManager_TypeInfo, v7);
    sub_B2C35C(&Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__, v8);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, v9);
    sub_B2C35C(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity__Add__, v10);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Contains__, v11);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__ToArray__, v12);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v13);
    sub_B2C35C(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity___ctor__, v14);
    sub_B2C35C(&System_Collections_Generic_List_ViewWaveEnemyEntity__TypeInfo, v15);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v16);
    sub_B2C35C(&Method_WaveBattleWaveInfoListManager___c__DisplayClass16_0__LoadEnemyAsset_b__0__, v17);
    sub_B2C35C(&WaveBattleWaveInfoListManager___c__DisplayClass16_0_TypeInfo, v18);
    sub_B2C35C(&ViewWaveEnemyEntity_TypeInfo, v19);
    sub_B2C35C(&StringLiteral_12735/*"Servants/Commands/"*/, v20);
    byte_418740A = 1;
  }
  entity = 0LL;
  v21 = sub_B2C42C(WaveBattleWaveInfoListManager___c__DisplayClass16_0_TypeInfo);
  WaveBattleWaveInfoListManager___c__DisplayClass16_0___ctor(
    (WaveBattleWaveInfoListManager___c__DisplayClass16_0_o *)v21,
    0LL);
  if ( !v21 )
    goto LABEL_30;
  *(_QWORD *)(v21 + 16) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v21 + 16), (System_Int32_array **)this, v24, v25, v26, v27, v28, v29);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = (DataMasterBase_WarMaster__WarEntity__int__o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_173398C *)Method_DataManager_GetMaster_ServantMaster___);
  v31 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v31,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
  v32 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_ViewWaveEnemyEntity__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v32,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_ViewWaveEnemyEntity___ctor__);
  object = (Il2CppObject *)v21;
  *(_QWORD *)(v21 + 24) = v32;
  v33 = (BattleServantConfConponent_o *)(v21 + 24);
  sub_B2C2F8(v33, (System_Int32_array **)v32, v34, v35, v36, v37, v38, v39);
  if ( !viewEnemyEntities )
    goto LABEL_30;
  max_length = viewEnemyEntities->max_length;
  if ( max_length >= 1 )
  {
    v41 = 0;
    while ( 1 )
    {
      if ( v41 >= max_length )
      {
        v54 = sub_B2C460(klass);
        sub_B2C400(v54, 0LL);
      }
      v42 = viewEnemyEntities->m_Items[v41];
      if ( !v42 || !Master_WarQuestSelectionMaster )
        break;
      klass = (EventMissionProgressRequest_Argument_ProgressData_o *)DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
                                                                       Master_WarQuestSelectionMaster,
                                                                       &entity,
                                                                       v42->fields.svtId,
                                                                       (const MethodInfo_24E412C *)Method_DataMasterBase_ServantMaster__ServantEntity__int__TryGetEntity__);
      if ( ((unsigned __int8)klass & 1) != 0 )
      {
        v43 = (ViewWaveEnemyEntity_o *)sub_B2C42C(ViewWaveEnemyEntity_TypeInfo);
        ViewWaveEnemyEntity___ctor_34368760(v43, v42, 0LL);
        klass = (EventMissionProgressRequest_Argument_ProgressData_o *)entity;
        if ( !entity )
          break;
        if ( ServantEntity__get_IsOrganization((ServantEntity_o *)entity, 0LL)
          && !ViewWaveEnemyEntity__IsIconIdUnique(v42, 0LL) )
        {
          v44 = System_Int32__ToString((int)v42 + 36, 0LL);
          klass = (EventMissionProgressRequest_Argument_ProgressData_o *)System_String__Concat_44305532(
                                                                           (System_String_o *)StringLiteral_12735/*"Servants/Commands/"*/,
                                                                           v44,
                                                                           0LL);
          if ( !v31 )
            break;
          v45 = klass;
          klass = (EventMissionProgressRequest_Argument_ProgressData_o *)System_Collections_Generic_List_WarBoardManager_TaskList___Contains(
                                                                           (System_Collections_Generic_List_WarBoardManager_TaskList__o *)v31,
                                                                           (WarBoardManager_TaskList_o *)klass,
                                                                           (const MethodInfo_2EF48B0 *)Method_System_Collections_Generic_List_string__Contains__);
          if ( ((unsigned __int8)klass & 1) == 0 )
            System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
              v31,
              v45,
              (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
          if ( !v43 )
            break;
          v43->fields.iconId = 0;
        }
        klass = (EventMissionProgressRequest_Argument_ProgressData_o *)v33->klass;
        if ( !v33->klass )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)klass,
          (EventMissionProgressRequest_Argument_ProgressData_o *)v43,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_ViewWaveEnemyEntity__Add__);
      }
      max_length = viewEnemyEntities->max_length;
      if ( (int)++v41 >= max_length )
        goto LABEL_25;
    }
LABEL_30:
    sub_B2C434(klass, v23);
  }
LABEL_25:
  if ( !v31 )
    goto LABEL_30;
  v46 = (struct System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                        (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v31,
                                        (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_string__ToArray__);
  this->fields.loadedAssets = v46;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.loadedAssets,
    (System_Int32_array **)v46,
    v47,
    v48,
    v49,
    v50,
    v51,
    v52);
  this->fields.loading = 1;
  v53 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(
    v53,
    object,
    Method_WaveBattleWaveInfoListManager___c__DisplayClass16_0__LoadEnemyAsset_b__0__,
    0LL);
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__LoadEnemyAtlas(v53, 0LL);
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
  WaveBattleWaveInfoListManager_o *v5; // x19
  int v6; // w20
  __int64 v7; // x21
  struct System_Collections_Generic_List_WaveBattleWaveInfoComponent__o *waveInfoComponentList; // x22
  WaveBattleWaveInfoComponent_o *v9; // x8

  v5 = this;
  if ( (byte_418740D & 1) == 0 )
  {
    this = (WaveBattleWaveInfoListManager_o *)sub_B2C35C(
                                                &Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__,
                                                *(_QWORD *)&wave);
    byte_418740D = 1;
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
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
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
    sub_B2C434(this, *(_QWORD *)&wave);
  }
  UIScrollView__UpdatePosition((UIScrollView_o *)this, 0LL);
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
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  System_Collections_Generic_List_Enumerator_T__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_418740C & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__,
      viewEnemyEntities);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__get_Current__, v6);
    sub_B2C35C(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__, v7);
    byte_418740C = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( this->fields.loading )
  {
    waveInfoComponentList = this->fields.waveInfoComponentList;
    this->fields.loading = 0;
    if ( !waveInfoComponentList )
      sub_B2C434(0LL, viewEnemyEntities);
    System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
      &v11,
      (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)waveInfoComponentList,
      (const MethodInfo_2EF52DC *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
              &v11,
              (const MethodInfo_20EA42C *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__MoveNext__) )
    {
      if ( !v11.fields.current )
        sub_B2C434(0LL, v9);
      WaveBattleWaveInfoComponent__SetEnemyInfo(
        (WaveBattleWaveInfoComponent_o *)v11.fields.current,
        viewEnemyEntities,
        v10);
    }
    System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
      &v11,
      (const MethodInfo_20EA428 *)Method_System_Collections_Generic_List_Enumerator_WaveBattleWaveInfoComponent__Dispose__);
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
  UnityEngine_GameObject_o *v13; // x22
  srcLineSprite_o *Component_srcLineSprite; // x0
  QuestRestrictionInfo_o *questRestrictionInfo; // x25
  UserEventDeckEntity_o *deckEntity; // x26
  int32_t waveCount; // w24
  WaveBattleWaveInfoComponent_o *v18; // x23
  WaveBattleWaveInfoComponent_CallbackFunc_o *v19; // x27
  const MethodInfo *v20; // x7
  float height; // s9

  if ( (byte_418740B & 1) == 0 )
  {
    sub_B2C35C(&WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo, viewEnemyEntities);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveInfoComponent___, v5);
    sub_B2C35C(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__Add__, v6);
    sub_B2C35C(&Method_WaveBattleWaveInfoListManager_OnSelectWavePartyList__, v7);
    byte_418740B = 1;
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
      waveInfoListParent = (UnityEngine_Component_o *)BaseMonoBehaviour__createObject(
                                                        (BaseMonoBehaviour_o *)this,
                                                        waveInfoPrefab,
                                                        transform,
                                                        0LL,
                                                        0LL);
      if ( !waveInfoListParent )
        break;
      v13 = (UnityEngine_GameObject_o *)waveInfoListParent;
      Component_srcLineSprite = UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                  (UnityEngine_GameObject_o *)waveInfoListParent,
                                  (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_WaveBattleWaveInfoComponent___);
      deckEntity = this->fields.deckEntity;
      questRestrictionInfo = this->fields.questRestrictionInfo;
      waveCount = this->fields.waveCount;
      v18 = (WaveBattleWaveInfoComponent_o *)Component_srcLineSprite;
      v19 = (WaveBattleWaveInfoComponent_CallbackFunc_o *)sub_B2C42C(WaveBattleWaveInfoComponent_CallbackFunc_TypeInfo);
      WaveBattleWaveInfoComponent_CallbackFunc___ctor(
        v19,
        (Il2CppObject *)this,
        Method_WaveBattleWaveInfoListManager_OnSelectWavePartyList__,
        0LL);
      if ( !v18 )
        break;
      WaveBattleWaveInfoComponent__SetWaveInfo(
        v18,
        deckEntity,
        viewEnemyEntities,
        questRestrictionInfo,
        ++v8,
        waveCount,
        v19,
        v20);
      waveInfoListParent = (UnityEngine_Component_o *)this->fields.waveInfoComponentList;
      if ( !waveInfoListParent )
        break;
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
        (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)waveInfoListParent,
        (EventMissionProgressRequest_Argument_ProgressData_o *)v18,
        (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__Add__);
      height = (float)v18->fields.height;
      GameObjectExtensions__SetLocalPosition_31326032(v13, 0.0, -v9, 0.0, 0LL);
      v9 = v9 + height;
      if ( v8 >= this->fields.waveCount )
        goto LABEL_10;
    }
LABEL_13:
    sub_B2C434(waveInfoListParent, viewEnemyEntities);
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
  WaveBattleWaveInfoComponent_o *v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  __int64 v13; // x20
  struct System_Collections_Generic_List_WaveBattleWaveInfoComponent__o *waveInfoComponentList; // x21

  if ( (byte_418740E & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_WaveBattleWaveInfoComponent__get_Item__, deckEntity);
    byte_418740E = 1;
  }
  this->fields.deckEntity = deckEntity;
  sub_B2C2F8(
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
    v13 = 0LL;
    do
    {
      waveInfoComponentList = this->fields.waveInfoComponentList;
      if ( !waveInfoComponentList )
        goto LABEL_11;
      if ( waveInfoComponentList->fields._size <= (unsigned int)v13 )
        System_ThrowHelper__ThrowArgumentOutOfRangeException_41710740(0LL);
      v10 = waveInfoComponentList->fields._items->m_Items[v13];
      if ( !v10 )
LABEL_11:
        sub_B2C434(v10, v11);
      WaveBattleWaveInfoComponent__UpdateWaveServantInfo(
        v10,
        this->fields.deckEntity,
        this->fields.questRestrictionInfo,
        v12);
      ++v13;
    }
    while ( (int)v13 < this->fields.waveCount );
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

  if ( (byte_4187407 & 1) == 0 )
  {
    sub_B2C35C(&WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo, value);
    byte_4187407 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveInfoListManager_o *)sub_B2C728(v8);
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

  if ( (byte_4187408 & 1) == 0 )
  {
    sub_B2C35C(&WaveBattleWaveInfoListManager_CallbackFunc_TypeInfo, value);
    byte_4187408 = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WaveBattleWaveInfoListManager_o *)sub_B2C728(v8);
  WaveBattleWaveInfoListManager__Init(v11, v12, v13);
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
  sub_B2C2F8(p_method, object);
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
  if ( (byte_4185566 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, v10);
    byte_4185566 = 1;
  }
  v12[3] = 0LL;
  v12[0] = j_il2cpp_value_box_0(WaveBattlePartyOrganizationMenu_ResultKind_TypeInfo, &v15);
  v12[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14);
  v12[2] = j_il2cpp_value_box_0(int_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_B2C300(this, v12, callback, object);
}


void __fastcall WaveBattleWaveInfoListManager_CallbackFunc__EndInvoke(
        WaveBattleWaveInfoListManager_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
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
        sub_B2C418(*(_QWORD *)&v23->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&n, *(_QWORD *)&m);
      if ( (sub_B2C38C(v25) & 1) == 0 )
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
      v27 = sub_B2C384(v25);
      v28 = sub_B2C788(v25);
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
            v21 = sub_AC5258(v24, v32, v33, v29);
          }
          v20 = *(_QWORD *)(v21 + 8);
        }
        else
        {
          v20 = *(_QWORD *)(*v24 + 16LL * *(unsigned __int16 *)(v25 + 72) + 320);
        }
        v22 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD, _QWORD))sub_B2C40C(v20, v25);
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
            v19 = sub_AC5258(v24, class_0, v12, v14);
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
  Il2CppObject *v2; // x20
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppClass *klass; // x8
  System_String_array *v6; // x19
  System_Action_o *v7; // x21

  v2 = (Il2CppObject *)this;
  if ( (byte_4185564 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AssetManager_TypeInfo, v3);
    this = (WaveBattleWaveInfoListManager___c__DisplayClass16_0_o *)sub_B2C35C(
                                                                      &Method_WaveBattleWaveInfoListManager___c__DisplayClass16_0__LoadEnemyAsset_b__1__,
                                                                      v4);
    byte_4185564 = 1;
  }
  klass = v2[1].klass;
  if ( !klass )
    sub_B2C434(this, method);
  v6 = *(System_String_array **)&klass->_1.this_arg.bits;
  v7 = (System_Action_o *)v2[2].klass;
  if ( !v7 )
  {
    v7 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v7, v2, Method_WaveBattleWaveInfoListManager___c__DisplayClass16_0__LoadEnemyAsset_b__1__, 0LL);
    v2[2].klass = (Il2CppClass *)v7;
    sub_B2C2F8(&v2[2], v7);
  }
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage_30159204(v6, v7, 1, 0LL);
}


void __fastcall WaveBattleWaveInfoListManager___c__DisplayClass16_0___LoadEnemyAsset_b__1(
        WaveBattleWaveInfoListManager___c__DisplayClass16_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_WarBoardUiData_SaveData__o *viewEnemyList; // x0
  WaveBattleWaveInfoListManager_o *_4__this; // x19

  if ( (byte_4185565 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_ViewWaveEnemyEntity__ToArray__, method);
    byte_4185565 = 1;
  }
  viewEnemyList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this->fields.viewEnemyList;
  if ( !viewEnemyList
    || (_4__this = this->fields.__4__this,
        viewEnemyList = (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                                                        viewEnemyList,
                                                                                        (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_ViewWaveEnemyEntity__ToArray__),
        !_4__this) )
  {
    sub_B2C434(viewEnemyList, method);
  }
  WaveBattleWaveInfoListManager__SetWaveEnemyInfo(_4__this, (ViewWaveEnemyEntity_array *)viewEnemyList, 0LL);
}