void __fastcall BattleRootComponent___ctor(BattleRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0LL);
}


System_Int32_array *__fastcall BattleRootComponent__GetAllFieldMotionIds(
        BattleRootComponent_o *this,
        BattleEntity_o *battleEnt,
        QuestPhaseEntity_o *questPhaseEnt,
        System_Int32_array **baseMotionIds,
        const MethodInfo *method)
{
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_Generic_IEnumerable_T__o *v23; // x21
  System_Collections_Generic_List_int__o *v24; // x20
  int myFSM; // w8
  BattleRootComponent_o *v26; // x21
  unsigned int v27; // w23
  System_Int32_array *v28; // x26
  __int64 v29; // x8
  unsigned __int64 v30; // x27
  int32_t v31; // w22
  int32_t v32; // w21
  StageEntity_o *v33; // x22
  BattleRootComponent_o *v34; // x23
  _QWORD **v35; // x24
  __int64 v36; // x23
  __int16 v37; // w8
  __int64 v38; // x23
  __int64 v39; // x23
  __int64 v40; // x23
  struct PlayMakerFSM_o *v41; // x8
  unsigned __int64 v42; // x28
  int32_t v43; // w24
  __int64 v45; // x0
  System_Int32_array *fieldMotionIds; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_42E5752 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Array_Empty_int___, (_DWORD)battleEnt, (_DWORD)questPhaseEnt, baseMotionIds);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor__, v17, v18, v19);
    this = (BattleRootComponent_o *)sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v20, v21, v22);
    byte_42E5752 = 1;
  }
  fieldMotionIds = 0LL;
  if ( !battleEnt )
    goto LABEL_52;
  this = (BattleRootComponent_o *)battleEnt->fields.battleInfo;
  if ( !this )
    goto LABEL_52;
  *baseMotionIds = BattleInfoData__GetBaseBattleFieldMotionIds((BattleInfoData_o *)this, questPhaseEnt, 0LL);
  sub_B5D560(baseMotionIds);
  v23 = (System_Collections_Generic_IEnumerable_T__o *)*baseMotionIds;
  v24 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_50870440(
    v24,
    v23,
    (const MethodInfo_30838A8 *)Method_System_Collections_Generic_List_int___ctor__);
  this = (BattleRootComponent_o *)battleEnt->fields.battleInfo;
  if ( !this )
    goto LABEL_52;
  this = (BattleRootComponent_o *)BattleInfoData__get_AllExistsScriptEnemyDeckSvtArray((BattleInfoData_o *)this, 0LL);
  if ( !this )
    goto LABEL_52;
  myFSM = (int)this->fields.myFSM;
  v26 = this;
  if ( myFSM >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      if ( v27 >= myFSM )
        goto LABEL_53;
      this = (BattleRootComponent_o *)*((_QWORD *)&v26->fields.uiRoot + (int)v27);
      if ( !this )
        goto LABEL_52;
      this = (BattleRootComponent_o *)BattleDeckServantData__TryGetAddFieldMotionIds(
                                        (BattleDeckServantData_o *)this,
                                        &fieldMotionIds,
                                        0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v28 = fieldMotionIds;
        if ( !fieldMotionIds )
          goto LABEL_52;
        v29 = *(_QWORD *)&fieldMotionIds->max_length;
        if ( (int)v29 >= 1 )
          break;
      }
LABEL_20:
      myFSM = (int)v26->fields.myFSM;
      if ( (int)++v27 >= myFSM )
        goto LABEL_21;
    }
    v30 = 0LL;
    while ( 1 )
    {
      if ( v30 >= (unsigned int)v29 )
        goto LABEL_53;
      if ( !v24 )
        break;
      v31 = v28->m_Items[v30 + 1];
      this = (BattleRootComponent_o *)System_Collections_Generic_List_int___Contains(
                                        v24,
                                        v31,
                                        (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
        System_Collections_Generic_List_int___Add(
          v24,
          v31,
          (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
      LODWORD(v29) = v28->max_length;
      if ( (__int64)++v30 >= (int)v29 )
        goto LABEL_20;
    }
LABEL_52:
    sub_B5D69C(this, battleEnt);
  }
LABEL_21:
  this = (BattleRootComponent_o *)battleEnt->fields.battleInfo;
  if ( !this )
    goto LABEL_52;
  v32 = 0;
  v33 = 0LL;
  while ( 1 )
  {
    this = (BattleRootComponent_o *)BattleInfoData__getLastWave((BattleInfoData_o *)this, 0LL);
    if ( v32 >= (int)this + 1 )
      break;
    this = (BattleRootComponent_o *)BattleEntity__GetStageEntityAtWave(battleEnt, v32, 0LL);
    if ( this )
      v33 = (StageEntity_o *)this;
    if ( !this )
      goto LABEL_56;
    if ( !v33 )
      goto LABEL_52;
    this = (BattleRootComponent_o *)StageEntity__GetWaveFieldMotionIds(v33, 0LL, 0LL);
    v34 = this;
    if ( !this )
    {
LABEL_56:
      v35 = (_QWORD **)Method_System_Array_Empty_int___;
      v36 = **((_QWORD **)Method_System_Array_Empty_int___ + 6);
      v37 = *(_WORD *)(v36 + 306);
      if ( (v37 & 1) == 0 )
      {
        this = (BattleRootComponent_o *)sub_AF52C4(**((_QWORD **)Method_System_Array_Empty_int___ + 6));
        v37 = *(_WORD *)(v36 + 306);
      }
      if ( (v37 & 0x400) != 0 )
      {
        v38 = *v35[6];
        if ( (*(_BYTE *)(v38 + 306) & 1) == 0 )
          this = (BattleRootComponent_o *)sub_AF52C4(*v35[6]);
        if ( !*(_DWORD *)(v38 + 224) )
        {
          v39 = *v35[6];
          if ( (*(_BYTE *)(v39 + 306) & 1) == 0 )
            sub_AF52C4(*v35[6]);
          j_il2cpp_runtime_class_init_0(v39);
        }
      }
      v40 = *v35[6];
      if ( (*(_BYTE *)(v40 + 306) & 1) == 0 )
        this = (BattleRootComponent_o *)sub_AF52C4(*v35[6]);
      v34 = **(BattleRootComponent_o ***)(v40 + 184);
      if ( !v34 )
        goto LABEL_52;
    }
    v41 = v34->fields.myFSM;
    if ( (int)v41 >= 1 )
    {
      v42 = 0LL;
      while ( v42 < (unsigned int)v41 )
      {
        if ( !v24 )
          goto LABEL_52;
        v43 = *((_DWORD *)&v34->fields.uiRoot + v42);
        this = (BattleRootComponent_o *)System_Collections_Generic_List_int___Contains(
                                          v24,
                                          v43,
                                          (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)this & 1) == 0 )
          System_Collections_Generic_List_int___Add(
            v24,
            v43,
            (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        LODWORD(v41) = v34->fields.myFSM;
        if ( (__int64)++v42 >= (int)v41 )
          goto LABEL_48;
      }
LABEL_53:
      v45 = sub_B5D6C8(this);
      sub_B5D668(v45, 0LL);
    }
LABEL_48:
    this = (BattleRootComponent_o *)battleEnt->fields.battleInfo;
    ++v32;
    if ( !this )
      goto LABEL_52;
  }
  if ( !v24 )
    goto LABEL_52;
  return System_Collections_Generic_List_int___ToArray(
           v24,
           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall BattleRootComponent__GetClassBoardCommandSpellEffectId(
        BattleRootComponent_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
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
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  System_Collections_Generic_HashSet_int__o *v43; // x19
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v45; // x1
  BalanceConfig_c *v46; // x8
  int32_t ClassBoardReleaseQuestId; // w21
  bool IsQuestClear_25877652; // w0
  Il2CppClass *klass; // x8
  _QWORD *data; // x8
  __int64 v51; // x9
  int v52; // w8
  ClassBoardCommandSpellMaster_o *v53; // x21
  unsigned int v54; // w10
  __int64 v55; // x8
  _QWORD *v56; // x22
  __int64 v57; // x25
  int v58; // w8
  unsigned int v59; // w23
  __int64 v60; // x8
  __int64 v61; // x8
  unsigned __int64 v62; // x24
  System_Int32_array *EffectIdArray; // x0
  __int64 v64; // x1
  __int64 v65; // x1
  System_Int32_array *v66; // x22
  int v67; // w20
  __int64 v68; // x0
  __int64 v70; // x0
  __int64 v71; // [xsp+8h] [xbp-A8h]
  Il2CppObject *SingleEntity; // [xsp+10h] [xbp-A0h]
  unsigned int v73; // [xsp+18h] [xbp-98h]
  int v74; // [xsp+1Ch] [xbp-94h]
  _BYTE v75[28]; // [xsp+20h] [xbp-90h] BYREF
  int v76; // [xsp+3Ch] [xbp-74h]
  System_Collections_Generic_List_Enumerator_T__o v77; // [xsp+40h] [xbp-70h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+58h] [xbp-58h] BYREF

  if ( (byte_42E575D & 1) == 0 )
  {
    sub_B5D5C4(&BalanceConfig_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CondType_TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Method_DataManager_GetMaster_BattleMaster___, v7, v8, v9);
    sub_B5D5C4(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v10, v11, v12);
    sub_B5D5C4(&DataManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v16, v17, v18);
    sub_B5D5C4(&Method_System_Linq_Enumerable_ToArray_int___, v19, v20, v21);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__,
      v22,
      v23,
      v24);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__,
      v25,
      v26,
      v27);
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__,
      v28,
      v29,
      v30);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Add__, v31, v32, v33);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, v34, v35, v36);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v37, v38, v39);
    sub_B5D5C4(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__, v40, v41, v42);
    byte_42E575D = 1;
  }
  entitys = 0LL;
  memset(&v77, 0, sizeof(v77));
  v76 = 0;
  v43 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v43,
    (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_57;
  SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_WarQuestSelectionMaster,
                   (const MethodInfo_23FB0FC *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
  v46 = BalanceConfig_TypeInfo;
  if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v46 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v46->static_fields->ClassBoardReleaseQuestId;
  if ( (BYTE3(CondType_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_25877652 = CondType__IsQuestClear_25877652(ClassBoardReleaseQuestId, -1, 0, 0LL);
  if ( !SingleEntity || !IsQuestClear_25877652 )
    return System_Linq_Enumerable__ToArray_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v43,
             (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  klass = SingleEntity[1].klass;
  if ( !klass || (data = klass->_1.this_arg.data) == 0LL || (v51 = data[2]) == 0 )
LABEL_57:
    sub_B5D69C(Master_WarQuestSelectionMaster, v45);
  v52 = *(_DWORD *)(v51 + 24);
  if ( v52 >= 1 )
  {
    v74 = 0;
    v53 = (ClassBoardCommandSpellMaster_o *)Master_WarQuestSelectionMaster;
    v54 = 0;
    v71 = v51;
    while ( 1 )
    {
      if ( v54 >= v52 )
        goto LABEL_58;
      v55 = *(_QWORD *)(v51 + 8LL * (int)v54 + 32);
      if ( !v55 )
        goto LABEL_57;
      v73 = v54;
      Master_WarQuestSelectionMaster = SingleEntity[1].klass;
      if ( !Master_WarQuestSelectionMaster )
        goto LABEL_57;
      Master_WarQuestSelectionMaster = BattleInfoData__getUserServantFromID(
                                         (BattleInfoData_o *)Master_WarQuestSelectionMaster,
                                         *(_QWORD *)(v55 + 24),
                                         0LL);
      if ( Master_WarQuestSelectionMaster )
      {
        v56 = Master_WarQuestSelectionMaster;
        Master_WarQuestSelectionMaster = (void *)BasicHelper__IsNullOrEmpty(
                                                   *((System_Collections_ICollection_o **)Master_WarQuestSelectionMaster
                                                   + 65),
                                                   0LL);
        if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) == 0 )
        {
          v57 = v56[65];
          if ( !v57 )
            goto LABEL_57;
          v58 = *(_DWORD *)(v57 + 24);
          if ( v58 >= 1 )
            break;
        }
      }
LABEL_55:
      v51 = v71;
      v52 = *(_DWORD *)(v71 + 24);
      v54 = v73 + 1;
      if ( (int)(v73 + 1) >= v52 )
        return System_Linq_Enumerable__ToArray_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v43,
                 (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    v59 = 0;
    while ( v59 < v58 )
    {
      v60 = *(_QWORD *)(v57 + 8LL * (int)v59 + 32);
      if ( !v60 || !v53 )
        goto LABEL_57;
      Master_WarQuestSelectionMaster = (void *)ClassBoardCommandSpellMaster__TryGetEntityList(
                                                 v53,
                                                 &entitys,
                                                 *(_DWORD *)(v60 + 16),
                                                 *(_DWORD *)(v60 + 20),
                                                 0LL);
      if ( ((unsigned __int8)Master_WarQuestSelectionMaster & 1) != 0 )
      {
        Master_WarQuestSelectionMaster = entitys;
        if ( !entitys )
          goto LABEL_57;
        System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)v75,
          (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)entitys,
          (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
        v77 = *(System_Collections_Generic_List_Enumerator_T__o *)v75;
        while ( System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
                  &v77,
                  (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__) )
        {
          if ( !v77.fields.current )
            sub_B5D69C(0LL, v65);
          EffectIdArray = ClassBoardCommandSpellEntity__GetEffectIdArray(
                            (ClassBoardCommandSpellEntity_o *)v77.fields.current,
                            0LL);
          v66 = EffectIdArray;
          if ( !EffectIdArray )
            sub_B5D69C(0LL, v64);
          v61 = *(_QWORD *)&EffectIdArray->max_length;
          if ( (int)v61 >= 1 )
          {
            v62 = 0LL;
            do
            {
              if ( v62 >= (unsigned int)v61 )
              {
                v68 = sub_B5D6C8(EffectIdArray);
                sub_B5D668(v68, 0LL);
              }
              if ( !v43 )
                sub_B5D69C(EffectIdArray, v64);
              EffectIdArray = (System_Int32_array *)System_Collections_Generic_HashSet_int___Add(
                                                      v43,
                                                      v66->m_Items[v62 + 1],
                                                      (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
              LODWORD(v61) = v66->max_length;
              ++v62;
            }
            while ( (__int64)v62 < (int)v61 );
          }
        }
        *(_DWORD *)&v75[4 * v74 + 24] = 252;
        v67 = ++v76;
        System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
          &v77,
          (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
        if ( v67 )
        {
          v74 = v67;
          if ( *(_DWORD *)&v75[4 * v67 + 20] == 252 )
          {
            v76 = v67 - 1;
            v74 = v67 - 1;
          }
        }
        else
        {
          v74 = 0;
        }
      }
      v58 = *(_DWORD *)(v57 + 24);
      if ( (int)++v59 >= v58 )
        goto LABEL_55;
    }
LABEL_58:
    v70 = sub_B5D6C8(Master_WarQuestSelectionMaster);
    sub_B5D668(v70, 0LL);
  }
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v43,
           (const MethodInfo_1CB76BC *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_Collections_Generic_List_int__o *__fastcall BattleRootComponent__GetLoadDropEffectType(
        BattleRootComponent_o *this,
        BattleEntity_o *battleEntity,
        const MethodInfo *method)
{
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v38; // x21
  System_Collections_Generic_List_int__o *v39; // x19
  _BOOL8 v40; // x0
  struct BattleInfoData_o *battleInfo; // x8
  System_Collections_Generic_IEnumerable_T__o *enemyDeck; // x1
  Il2CppClass *klass; // x24
  const char *namespaze; // x8
  int v45; // w25
  __int64 v46; // x9
  __int64 v47; // x26
  int v48; // w9
  __int64 v49; // x27
  __int64 v50; // x20
  __int64 v51; // x1
  _BOOL8 v52; // x0
  struct BattleInfoData_o *v53; // x8
  struct BattleInfoData_StageCutinInfo_array *stageCutins; // x20
  int max_length; // w8
  unsigned int v56; // w21
  BattleInfoData_StageCutinInfo_o *v57; // x8
  struct DropInfo_array *dropInfos; // x24
  int v59; // w8
  unsigned int v60; // w25
  DropInfo_o *v61; // x26
  __int64 v63; // x0
  __int64 v64; // x0
  __int64 v65; // x0
  BattleEntity_o *v66; // [xsp+0h] [xbp-90h]
  System_Collections_Generic_List_Enumerator_T__o v67; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v68; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_42E575C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_List_Enumerator_DeckData__Dispose__,
      (_DWORD)battleEntity,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_DeckData__MoveNext__, v5, v6, v7);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_DeckData__get_Current__, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DeckData__AddRange__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DeckData__Add__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Contains__, v20, v21, v22);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DeckData__GetEnumerator__, v23, v24, v25);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor___68740224, v26, v27, v28);
    sub_B5D5C4(&Method_System_Collections_Generic_List_DeckData___ctor__, v29, v30, v31);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v32, v33, v34);
    sub_B5D5C4(&System_Collections_Generic_List_DeckData__TypeInfo, v35, v36, v37);
    byte_42E575C = 1;
  }
  memset(&v68, 0, sizeof(v68));
  v38 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_DeckData__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v38,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_DeckData___ctor__);
  v39 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v39,
    (const MethodInfo_30836B0 *)Method_System_Collections_Generic_List_int___ctor___68740224);
  if ( !battleEntity )
    return v39;
  battleInfo = battleEntity->fields.battleInfo;
  if ( !battleInfo )
    return v39;
  enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.enemyDeck;
  if ( enemyDeck )
  {
    if ( !v38 )
      goto LABEL_59;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v38,
      enemyDeck,
      (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_59;
  }
  enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.callDeck;
  if ( enemyDeck )
  {
    if ( !v38 )
      goto LABEL_59;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v38,
      enemyDeck,
      (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_59;
  }
  enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.shiftDeck;
  if ( enemyDeck )
  {
    if ( !v38 )
      goto LABEL_59;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v38,
      enemyDeck,
      (const MethodInfo_3057210 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_59;
  }
  enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.transformDeck;
  v66 = battleEntity;
  if ( enemyDeck )
  {
    if ( !v38 )
      goto LABEL_59;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v38,
      (EventMissionProgressRequest_Argument_ProgressData_o *)enemyDeck,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_DeckData__Add__);
  }
  else if ( !v38 )
  {
    goto LABEL_59;
  }
  System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo___GetEnumerator(
    &v67,
    (System_Collections_Generic_List_BattleLogicBuff_ReduceHpProcess_BuffInfo__o *)v38,
    (const MethodInfo_3057E3C *)Method_System_Collections_Generic_List_DeckData__GetEnumerator__);
  v68 = v67;
  while ( 1 )
  {
    v52 = System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___MoveNext(
            &v68,
            (const MethodInfo_201EFD0 *)Method_System_Collections_Generic_List_Enumerator_DeckData__MoveNext__);
    if ( !v52 )
      break;
    if ( !v68.fields.current )
      sub_B5D69C(v52, v51);
    klass = v68.fields.current[1].klass;
    if ( klass )
    {
      namespaze = klass->_1.namespaze;
      if ( (int)namespaze >= 1 )
      {
        v45 = 0;
        do
        {
          if ( v45 >= (unsigned int)namespaze )
          {
            v65 = sub_B5D6C8(v52);
            sub_B5D668(v65, 0LL);
          }
          v46 = *((_QWORD *)&klass->_1.byval_arg.data + v45);
          if ( !v46 )
            sub_B5D69C(v52, v51);
          v47 = *(_QWORD *)(v46 + 104);
          if ( v47 )
          {
            v48 = *(_DWORD *)(v47 + 24);
            if ( v48 >= 1 )
            {
              v49 = 0LL;
              do
              {
                if ( (unsigned int)v49 >= v48 )
                {
                  v63 = sub_B5D6C8(v52);
                  sub_B5D668(v63, 0LL);
                }
                v50 = *(_QWORD *)(v47 + 32 + 8 * v49);
                if ( !v50 )
                  sub_B5D69C(v52, v51);
                v51 = *(unsigned int *)(v50 + 48);
                if ( (_DWORD)v51 )
                {
                  if ( !v39 )
                    sub_B5D69C(v52, v51);
                  v52 = System_Collections_Generic_List_int___Contains(
                          v39,
                          v51,
                          (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
                  if ( !v52 )
                    System_Collections_Generic_List_int___Add(
                      v39,
                      *(_DWORD *)(v50 + 48),
                      (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
                }
                v48 = *(_DWORD *)(v47 + 24);
                ++v49;
              }
              while ( (int)v49 < v48 );
              namespaze = klass->_1.namespaze;
            }
          }
          ++v45;
        }
        while ( v45 < (int)namespaze );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_BattleLogicBuff_ReduceHpProcess_BuffInfo___Dispose(
    &v68,
    (const MethodInfo_201EFCC *)Method_System_Collections_Generic_List_Enumerator_DeckData__Dispose__);
  v53 = v66->fields.battleInfo;
  if ( !v53 )
LABEL_59:
    sub_B5D69C(v40, enemyDeck);
  stageCutins = v53->fields.stageCutins;
  if ( stageCutins )
  {
    max_length = stageCutins->max_length;
    if ( max_length >= 1 )
    {
      v56 = 0;
      while ( 1 )
      {
        if ( v56 >= max_length )
          goto LABEL_60;
        v57 = stageCutins->m_Items[v56];
        if ( !v57 )
          goto LABEL_59;
        dropInfos = v57->fields.dropInfos;
        if ( !dropInfos )
          goto LABEL_59;
        v59 = dropInfos->max_length;
        if ( v59 >= 1 )
          break;
LABEL_54:
        max_length = stageCutins->max_length;
        if ( (int)++v56 >= max_length )
          return v39;
      }
      v60 = 0;
      while ( v60 < v59 )
      {
        v61 = dropInfos->m_Items[v60];
        if ( !v61 )
          goto LABEL_59;
        enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)(unsigned int)v61->fields.effectType;
        if ( (_DWORD)enemyDeck )
        {
          if ( !v39 )
            goto LABEL_59;
          v40 = System_Collections_Generic_List_int___Contains(
                  v39,
                  (int32_t)enemyDeck,
                  (const MethodInfo_3084860 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( !v40 )
            System_Collections_Generic_List_int___Add(
              v39,
              v61->fields.effectType,
              (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
        }
        v59 = dropInfos->max_length;
        if ( (int)++v60 >= v59 )
          goto LABEL_54;
      }
LABEL_60:
      v64 = sub_B5D6C8(v40);
      sub_B5D668(v64, 0LL);
    }
  }
  return v39;
}


System_Collections_IEnumerator_o *__fastcall BattleRootComponent__LoadAsset(
        BattleRootComponent_o *this,
        QuestPhaseEntity_o *ent,
        int32_t eventId,
        BattleEntity_o *battleEnt,
        const MethodInfo *method)
{
  BattleRootComponent__LoadAsset_d__13_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E5753 & 1) == 0 )
  {
    sub_B5D5C4(&BattleRootComponent__LoadAsset_d__13_TypeInfo, (_DWORD)ent, eventId, battleEnt);
    byte_42E5753 = 1;
  }
  v9 = (BattleRootComponent__LoadAsset_d__13_o *)sub_B5D694(BattleRootComponent__LoadAsset_d__13_TypeInfo);
  BattleRootComponent__LoadAsset_d__13___ctor(v9, 0, 0LL);
  if ( !v9 )
    sub_B5D69C(v10, v11);
  v9->fields.__4__this = this;
  sub_B5D560(&v9->fields.__4__this);
  v9->fields.ent = ent;
  sub_B5D560(&v9->fields.ent);
  v9->fields.eventId = eventId;
  v9->fields.battleEnt = battleEnt;
  sub_B5D560(&v9->fields.battleEnt);
  return (System_Collections_IEnumerator_o *)v9;
}


System_Collections_IEnumerator_o *__fastcall BattleRootComponent__LoadAssetsIndependentToMainOne(
        BattleRootComponent_o *this,
        QuestPhaseEntity_o *ent,
        int32_t eventId,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_42E5754 & 1) == 0 )
  {
    sub_B5D5C4(
      &BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_TypeInfo,
      (_DWORD)ent,
      eventId,
      finishCallback);
    byte_42E5754 = 1;
  }
  v9 = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)sub_B5D694(BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_TypeInfo);
  BattleRootComponent__LoadAssetsIndependentToMainOne_d__14___ctor(v9, 0, 0LL);
  if ( !v9 )
    sub_B5D69C(v10, v11);
  v9->fields.__4__this = this;
  sub_B5D560(&v9->fields.__4__this);
  v9->fields.ent = ent;
  sub_B5D560(&v9->fields.ent);
  v9->fields.eventId = eventId;
  v9->fields.finishCallback = finishCallback;
  sub_B5D560(&v9->fields.finishCallback);
  return (System_Collections_IEnumerator_o *)v9;
}


void __fastcall BattleRootComponent__LoadBatteBgm(
        BattleRootComponent_o *this,
        System_Collections_Generic_List_string__o *bgmList,
        System_Action_o *callback,
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
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  BattleRootComponent___c__DisplayClass17_0_o *v22; // x22
  System_Action_o *v23; // x0
  __int64 v24; // x1
  System_Action_o **p_callback; // x20
  struct System_Collections_Generic_List_string__o *v26; // x8
  int size; // w9
  System_String_o *v28; // x19
  System_Action_o *v29; // x20

  if ( (byte_42E5755 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)bgmList, (_DWORD)callback, method);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, v7, v8, v9);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Item__, v10, v11, v12);
    sub_B5D5C4(&SoundManager_TypeInfo, v13, v14, v15);
    sub_B5D5C4(&Method_BattleRootComponent___c__DisplayClass17_0__LoadBatteBgm_b__0__, v16, v17, v18);
    sub_B5D5C4(&BattleRootComponent___c__DisplayClass17_0_TypeInfo, v19, v20, v21);
    byte_42E5755 = 1;
  }
  v22 = (BattleRootComponent___c__DisplayClass17_0_o *)sub_B5D694(BattleRootComponent___c__DisplayClass17_0_TypeInfo);
  BattleRootComponent___c__DisplayClass17_0___ctor(v22, 0LL);
  if ( !v22 )
    goto LABEL_12;
  v22->fields.bgmList = bgmList;
  sub_B5D560(&v22->fields);
  v22->fields.__4__this = this;
  sub_B5D560(&v22->fields.__4__this);
  v22->fields.callback = callback;
  p_callback = &v22->fields.callback;
  sub_B5D560(&v22->fields.callback);
  v26 = v22->fields.bgmList;
  if ( !v26 )
    goto LABEL_12;
  size = v26->fields._size;
  if ( size <= 0 )
  {
    v23 = *p_callback;
    if ( *p_callback )
    {
      System_Action__Invoke(v23, 0LL);
      return;
    }
LABEL_12:
    sub_B5D69C(v23, v24);
  }
  v28 = v26->fields._items->m_Items[size - 1];
  v29 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(
    v29,
    (Il2CppObject *)v22,
    Method_BattleRootComponent___c__DisplayClass17_0__LoadBatteBgm_b__0__,
    0LL);
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__downloadAudioAssetStorage(v28, v29, 1, 0LL);
}


void __fastcall BattleRootComponent__SetupObjectsExtractedFromLoadedAssets(
        BattleRootComponent_o *this,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0

  perf = this->fields.perf;
  if ( !perf || (BattlePerformance__SetDownloadEventSprite(perf, 0LL), (perf = this->fields.perf) == 0LL) )
    sub_B5D69C(perf, method);
  BattlePerformance__SetupCommandCardCommonPrefabs(perf, 0LL);
}


void __fastcall BattleRootComponent__ShowAssetNotFoundErrorDialog(
        BattleRootComponent_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleRootComponent__TerminalTransition(
        BattleRootComponent_o *this,
        BattleScriptRootComponent_TalkScriptInfo_o *info,
        const MethodInfo *method)
{
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
  TerminalPramsManager_c *v14; // x0
  AvalonSceneManager_o *Instance; // x0
  __int64 v16; // x1

  if ( (byte_42E575A & 1) == 0 )
  {
    sub_B5D5C4(&ScriptManager_TypeInfo, (_DWORD)info, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5, v6, v7);
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v8, v9, v10);
    byte_42E575A = 1;
  }
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__DeleteTalkResumeInfo(0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B29 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v11, v12, v13);
    byte_42E4B29 = 1;
  }
  v14 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v14 = TerminalPramsManager_TypeInfo;
  }
  v14->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_B5D69C(0LL, v16);
  AvalonSceneManager__transitionSceneRefresh(Instance, 34, 1, (Il2CppObject *)info, 1, 0LL);
}


void __fastcall BattleRootComponent__TransitionPartyOrganization(BattleRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleRootComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  struct BattleData_o *data; // x8
  struct QuestEntity_o *quest_ent; // x21
  struct BattleData_o *v16; // x8
  struct BattleEntity_o *battle_ent; // x8
  int32_t questPhase; // w22
  int32_t id; // w21
  int32_t v20; // w20
  BattleSetupInfo_o *v21; // x23
  struct BattleData_o *v22; // x8
  Il2CppObject *v23; // x19
  int32_t selectedInterruptionWave; // w8
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  TerminalPramsManager_c *v28; // x0

  v4 = this;
  if ( (byte_42E575E & 1) == 0 )
  {
    sub_B5D5C4(&BattleSetupInfo_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ScriptManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v8, v9, v10);
    this = (BattleRootComponent_o *)sub_B5D5C4(&TerminalPramsManager_TypeInfo, v11, v12, v13);
    byte_42E575E = 1;
  }
  data = v4->fields.data;
  if ( !data )
    goto LABEL_23;
  quest_ent = data->fields.quest_ent;
  if ( !quest_ent )
    goto LABEL_23;
  this = (BattleRootComponent_o *)QuestEntity__GetWarId(data->fields.quest_ent, 0LL);
  v16 = v4->fields.data;
  if ( !v16 )
    goto LABEL_23;
  battle_ent = v16->fields.battle_ent;
  if ( !battle_ent )
    goto LABEL_23;
  questPhase = battle_ent->fields.questPhase;
  id = quest_ent->fields.id;
  v20 = (int)this;
  v21 = (BattleSetupInfo_o *)sub_B5D694(BattleSetupInfo_TypeInfo);
  BattleSetupInfo___ctor(v21, 0LL);
  if ( !v21 )
    goto LABEL_23;
  this = (BattleRootComponent_o *)BattleSetupInfo__ConvertBattleSetupInfo(v21, v20, id, questPhase, 0, 0, 0, 0LL);
  v22 = v4->fields.data;
  if ( !v22 )
    goto LABEL_23;
  v23 = (Il2CppObject *)this;
  if ( !this )
    goto LABEL_23;
  selectedInterruptionWave = v22->fields.selectedInterruptionWave;
  LOBYTE(this[1].fields.depth) = 1;
  this[1].fields.kind = selectedInterruptionWave;
  if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !ScriptManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  }
  ScriptManager__DeleteTalkResumeInfo(0LL);
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  }
  if ( !byte_42E4B29 )
  {
    sub_B5D5C4(&TerminalPramsManager_TypeInfo, v25, v26, v27);
    byte_42E4B29 = 1;
  }
  v28 = TerminalPramsManager_TypeInfo;
  if ( (BYTE3(TerminalPramsManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v28 = TerminalPramsManager_TypeInfo;
  }
  v28->static_fields->_IsAutoResume_k__BackingField = 1;
  this = (BattleRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_23:
    sub_B5D69C(this, method);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)this, 35, 1, v23, 1, 0LL);
}


void __fastcall BattleRootComponent__TransitionTerminalOrBattleScript(
        BattleRootComponent_o *this,
        BattleScriptRootComponent_TalkScriptInfo_o *info,
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
  int v54; // w1
  int v55; // w2
  __int64 v56; // x3
  int v57; // w1
  int v58; // w2
  __int64 v59; // x3
  BattleRootComponent___c__DisplayClass23_0_o *v60; // x20
  BattleScriptRootComponent_TalkScriptInfo_o *isLose; // x0
  const MethodInfo *v62; // x1
  BattleScriptRootComponent_TalkScriptInfo_o **p_info; // x21
  long double v64; // q0
  struct BattleData_o *data; // x8
  struct BaseBattleEvent_o *battleEvent; // x0
  const MethodInfo *v67; // x2
  struct BattleData_o *v68; // x8
  BattleScriptRootComponent_TalkScriptInfo_o *v69; // x8
  int32_t qId; // w22
  int32_t pId; // w23
  struct BattleData_o *v72; // x8
  int64_t overwriteEndScriptQuestId; // x22
  int32_t questId; // w23
  int32_t ScriptQuestId; // w22
  QuestEntity_o *QuestEntity; // x0
  int32_t questPhase; // w24
  ScriptManager_o *v78; // x23
  int32_t winResult; // w25
  int32_t v80; // w24
  ScriptManager_o *v81; // x23
  int32_t v82; // w25
  ScriptManager_c *v83; // x0
  System_String_o *textPath; // x23
  System_String_o *ScriptAssetName; // x0
  System_String_o *v86; // x22
  int32_t v87; // w19
  int32_t v88; // w21
  System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *v89; // x22
  CommonUI_o *Instance; // x19
  System_String_o *v91; // x21
  System_String_o *v92; // x22
  NotificationDialog_ClickDelegate_o *v93; // x23
  QuestPhaseDetailEntity_o *entity; // [xsp+68h] [xbp-48h] BYREF

  if ( (byte_42E575B & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_string___ctor__, (_DWORD)info, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_string__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&AssetManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&NotificationDialog_ClickDelegate_TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestMaster___, v15, v16, v17);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v18, v19, v20);
    sub_B5D5C4(&Method_DataManager_GetMasterData_QuestScriptReleaseMaster___, v21, v22, v23);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v24, v25, v26);
    sub_B5D5C4(&MyRoomStateMaterial_TypeInfo, v27, v28, v29);
    sub_B5D5C4(&ScriptManager_TypeInfo, v30, v31, v32);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v33, v34, v35);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v36, v37, v38);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v39, v40, v41);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v42, v43, v44);
    sub_B5D5C4(
      &Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__0__,
      v45,
      v46,
      v47);
    sub_B5D5C4(
      &Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__1__,
      v48,
      v49,
      v50);
    sub_B5D5C4(&BattleRootComponent___c__DisplayClass23_0_TypeInfo, v51, v52, v53);
    sub_B5D5C4(&StringLiteral_2467/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_MESSAGE"*/, v54, v55, v56);
    sub_B5D5C4(&StringLiteral_2468/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_TITLE"*/, v57, v58, v59);
    byte_42E575B = 1;
  }
  entity = 0LL;
  v60 = (BattleRootComponent___c__DisplayClass23_0_o *)sub_B5D694(BattleRootComponent___c__DisplayClass23_0_TypeInfo);
  BattleRootComponent___c__DisplayClass23_0___ctor(v60, 0LL);
  if ( !v60 )
    goto LABEL_72;
  v60->fields.__4__this = this;
  sub_B5D560(&v60->fields);
  v60->fields.info = info;
  p_info = &v60->fields.info;
  *(__n128 *)&v64 = sub_B5D560(&v60->fields.info);
  data = this->fields.data;
  if ( !data )
    goto LABEL_72;
  battleEvent = data->fields.battleEvent;
  if ( !battleEvent
    || (((__int64 (__fastcall *)(struct BaseBattleEvent_o *, Il2CppMethodPointer, long double))battleEvent->klass->vtable._16_GoNextScene.method)(
          battleEvent,
          battleEvent->klass->vtable._17_GetSaveData.methodPtr,
          v64) & 1) == 0 )
  {
    SkillLvMaster__ResetBaseTime(0LL);
    isLose = *p_info;
    if ( !*p_info )
      goto LABEL_72;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)BattleScriptRootComponent_TalkScriptInfo__isLose(isLose, 0LL);
    if ( ((unsigned __int8)isLose & 1) != 0 )
    {
      isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)this->fields.data;
      if ( isLose )
      {
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)BattleData__IsResultInterruption(
                                                                 (BattleData_o *)isLose,
                                                                 0LL);
        if ( ((unsigned __int8)isLose & 1) == 0 )
        {
LABEL_25:
          BattleRootComponent__TerminalTransition((BattleRootComponent_o *)isLose, *p_info, v67);
          return;
        }
        v68 = this->fields.data;
        if ( v68 )
        {
          if ( (v68->fields.selectedInterruptionWave & 0x80000000) == 0 )
          {
            BattleRootComponent__TransitionPartyOrganization(this, v62);
            return;
          }
          goto LABEL_25;
        }
      }
      goto LABEL_72;
    }
    v69 = *p_info;
    if ( !*p_info )
      goto LABEL_72;
    qId = v69->fields.qId;
    v60->fields.questId = qId;
    pId = v69->fields.pId;
    v60->fields.questPhase = pId;
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)ScriptManager__GetCachedSelectedBranchQuestId(qId, pId, 0LL);
    v72 = this->fields.data;
    if ( !v72 )
      goto LABEL_72;
    overwriteEndScriptQuestId = v72->fields.overwriteEndScriptQuestId;
    if ( overwriteEndScriptQuestId )
    {
      if ( !*p_info )
        goto LABEL_72;
      (*p_info)->fields.qId = overwriteEndScriptQuestId;
      questId = v60->fields.questId;
      if ( (BYTE3(MyRoomStateMaterial_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !MyRoomStateMaterial_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomStateMaterial_TypeInfo);
      }
      MyRoomStateMaterial__SetPlayedBranchQuestData(questId, overwriteEndScriptQuestId, 0LL);
    }
    else
    {
      LODWORD(overwriteEndScriptQuestId) = (_DWORD)isLose;
    }
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !isLose
      || (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)isLose,
                                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestScriptReleaseMaster___)) == 0LL
      || (ScriptQuestId = QuestScriptReleaseMaster__GetScriptQuestId(
                            (QuestScriptReleaseMaster_o *)isLose,
                            overwriteEndScriptQuestId,
                            v60->fields.questPhase,
                            2,
                            0LL),
          (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                                   (DataManager_o *)isLose,
                                                                   (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___),
          !*p_info)
      || !isLose )
    {
LABEL_72:
      sub_B5D69C(isLose, v62);
    }
    if ( !QuestPhaseDetailMaster__TryGetEntity(
            (QuestPhaseDetailMaster_o *)isLose,
            &entity,
            (*p_info)->fields.qId,
            (*p_info)->fields.pId,
            0LL) )
      goto LABEL_59;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)entity;
    if ( !entity )
      goto LABEL_72;
    if ( !QuestPhaseDetailEntity__HasFlag(entity, 0x20000000000LL, 0LL) )
      goto LABEL_59;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !isLose )
      goto LABEL_72;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_WarQuestSelectionMaster_(
                                                             (DataManager_o *)isLose,
                                                             (const MethodInfo_1AE424C *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !*p_info || !isLose )
      goto LABEL_72;
    QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)isLose, (*p_info)->fields.qId, 0LL);
    if ( !QuestEntity || !QuestEntity__IsOpenByTime(QuestEntity, 0, 0LL) )
    {
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v91 = LocalizationManager__Get((System_String_o *)StringLiteral_2468/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_TITLE"*/, 0LL);
      v92 = LocalizationManager__Get((System_String_o *)StringLiteral_2467/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_MESSAGE"*/, 0LL);
      v93 = (NotificationDialog_ClickDelegate_o *)sub_B5D694(NotificationDialog_ClickDelegate_TypeInfo);
      NotificationDialog_ClickDelegate___ctor(
        v93,
        (Il2CppObject *)v60,
        Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__1__,
        0LL);
      if ( !Instance )
        goto LABEL_72;
      CommonUI__OpenNotificationDialog_18204284(
        Instance,
        v91,
        v92,
        v93,
        -1,
        0,
        0,
        0,
        0,
        1,
        0LL,
        0LL,
        0,
        0,
        0LL,
        1,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      if ( !ScriptQuestId )
        goto LABEL_62;
LABEL_59:
      isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( !v60->fields.info )
        goto LABEL_72;
      questPhase = v60->fields.questPhase;
      v78 = (ScriptManager_o *)isLose;
      winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v60->fields.info, 0LL);
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      }
      isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)ScriptManager__GetScriptName_BattleEnd(
                                                               ScriptQuestId,
                                                               questPhase,
                                                               winResult,
                                                               0LL);
      if ( !v78 )
        goto LABEL_72;
      if ( !ScriptManager__IsExistScriptFile(v78, (System_String_o *)isLose, 0LL) )
      {
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
        if ( !v60->fields.info )
          goto LABEL_72;
        v80 = v60->fields.questPhase;
        v81 = (ScriptManager_o *)isLose;
        v82 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(v60->fields.info, 0LL);
        if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ScriptManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        }
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)ScriptManager__GetScriptName_BattleEnd2(
                                                                 ScriptQuestId,
                                                                 v80,
                                                                 v82,
                                                                 0LL);
        if ( !v81 )
          goto LABEL_72;
        if ( !ScriptManager__IsExistScriptFile(v81, (System_String_o *)isLose, 0LL) )
          goto LABEL_62;
      }
      v83 = ScriptManager_TypeInfo;
      if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        v83 = ScriptManager_TypeInfo;
      }
      textPath = v83->static_fields->textPath;
      ScriptAssetName = ScriptManager__GetScriptAssetName(ScriptQuestId, 0LL);
      v86 = System_String__Concat_44577788(textPath, ScriptAssetName, 0LL);
      if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AssetManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      }
      if ( AssetManager__isExistAssetStorage(v86, 0LL) )
      {
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !isLose )
          goto LABEL_72;
        AvalonSceneManager__transitionSceneRefresh(
          (AvalonSceneManager_o *)isLose,
          this->fields.nextscenetype,
          1,
          (Il2CppObject *)*p_info,
          0,
          0LL);
      }
      else
      {
LABEL_62:
        v87 = v60->fields.questId;
        v88 = v60->fields.questPhase;
        v89 = (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)sub_B5D694(System_Action_string__TypeInfo);
        System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
          v89,
          (Il2CppObject *)v60,
          Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__0__,
          (const MethodInfo_258B320 *)Method_System_Action_string___ctor__);
        if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !ScriptManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        }
        ScriptManager__LoadBattleEndGameDemo(v87, v88, 1, (System_Action_string__o *)v89, 0, 0LL);
      }
    }
  }
}


void __fastcall BattleRootComponent__beginInitialize(BattleRootComponent_o *this, const MethodInfo *method)
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  System_String_o *Value; // x20
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x21
  void *Master_WarQuestSelectionMaster; // x0
  __int64 v59; // x1
  BattleEntity_o *SingleEntity; // x20
  BattleFBXComponent_c *v61; // x8
  BattlePerformance_c *v62; // x0
  QuestPhaseEntity_o *QuestPhaseEntity; // x21
  BattleData_o *data; // x22
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int64_t createdAt; // x22
  System_Int32_array *v69; // x22
  const MethodInfo *v70; // x4
  System_Collections_IEnumerator_o *Asset; // x0
  UnityEngine_Object_o *debugButton; // x20
  ManagerConfig_c *v73; // x0

  if ( (byte_42E5751 & 1) == 0 )
  {
    sub_B5D5C4(&AssetStorageLoadWrapper_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&BattleActionData_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&BattleEffectUtility_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&BattleFBXComponent_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&BattlePerformance_TypeInfo, v17, v18, v19);
    sub_B5D5C4(&BuffList_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&CatAndMouseGame_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_DataManager_GetMaster_BattleBgMaster___, v26, v27, v28);
    sub_B5D5C4(&Method_DataManager_GetMaster_BattleMaster___, v29, v30, v31);
    sub_B5D5C4(&DataManager_TypeInfo, v32, v33, v34);
    sub_B5D5C4(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v35, v36, v37);
    sub_B5D5C4(&System_GC_TypeInfo, v38, v39, v40);
    sub_B5D5C4(&ManagerConfig_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v44, v45, v46);
    sub_B5D5C4(&OptionManager_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_15564/*"WINGNAME"*/, v53, v54, v55);
    byte_42E5751 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_15564/*"WINGNAME"*/, 0LL);
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
  CatAndMouseGame__SixHomeBuilding(Value, 0LL);
  if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect_43893280(0LL);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( !assetStorageLoadWrapper )
  {
    assetStorageLoadWrapper = (AssetStorageLoadWrapper_o *)sub_B5D694(AssetStorageLoadWrapper_TypeInfo);
    AssetStorageLoadWrapper___ctor(assetStorageLoadWrapper, 0LL);
  }
  this->fields.assetStorageLoadWrapper = assetStorageLoadWrapper;
  sub_B5D560(&this->fields.assetStorageLoadWrapper);
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_70;
  SingleEntity = (BattleEntity_o *)DataMasterBase_object__object__long___GetSingleEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)Master_WarQuestSelectionMaster,
                                     (const MethodInfo_23FB0FC *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
  v61 = BattleFBXComponent_TypeInfo;
  if ( (BYTE3(BattleFBXComponent_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    v61 = BattleFBXComponent_TypeInfo;
  }
  v61->static_fields->EnableEvent = 1;
  v62 = BattlePerformance_TypeInfo;
  if ( (BYTE3(BattlePerformance_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattlePerformance_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
    v62 = BattlePerformance_TypeInfo;
  }
  v62->static_fields->CameraFlip = 0;
  Master_WarQuestSelectionMaster = BattleActionData_TypeInfo;
  if ( (BYTE3(BattleActionData_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    Master_WarQuestSelectionMaster = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(*((_QWORD *)Master_WarQuestSelectionMaster + 23) + 48LL) = 0;
  if ( !SingleEntity )
    goto LABEL_70;
  QuestPhaseEntity = BattleEntity__GetQuestPhaseEntity(SingleEntity, 0LL);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__isSavedMemoryMode(0LL) )
  {
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__ReleaseFaceAtlas(0LL);
  }
  if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseBanner(0LL);
  AtlasManager__ReleaseCharaGraphOptionAtlas(0LL);
  AtlasManager__ReleaseEventUI(0LL);
  Master_WarQuestSelectionMaster = this->fields.data;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_70;
  BattleData__Initialize((BattleData_o *)Master_WarQuestSelectionMaster, 0LL);
  data = this->fields.data;
  if ( (BYTE3(BuffList_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  BuffList__SetBattleData(data, 0LL);
  Master_WarQuestSelectionMaster = this->fields.logic;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_70;
  BattleLogic__Initialize((BattleLogic_o *)Master_WarQuestSelectionMaster, 0LL);
  Master_WarQuestSelectionMaster = this->fields.data;
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_70;
  if ( !BattleData__IsWarBoard((BattleData_o *)Master_WarQuestSelectionMaster, 0LL) )
  {
    createdAt = SingleEntity->fields.createdAt;
    if ( !byte_42E536C )
    {
      sub_B5D5C4(&SkillLvMaster_TypeInfo, v65, v66, v67);
      byte_42E536C = 1;
    }
    SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime = createdAt;
  }
  if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_WarQuestSelectionMaster = DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BattleBgMaster___);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_70;
  v69 = (System_Int32_array *)*((_QWORD *)Master_WarQuestSelectionMaster + 9);
  if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  }
  BattleEffectUtility__AddNotPreloadEffectId(v69, 0LL);
  Asset = BattleRootComponent__LoadAsset(this, QuestPhaseEntity, SingleEntity->fields.eventId, SingleEntity, v70);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, Asset, 0LL);
  Master_WarQuestSelectionMaster = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_70;
  *((_DWORD *)Master_WarQuestSelectionMaster + 36) = 3;
  Master_WarQuestSelectionMaster = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Master_WarQuestSelectionMaster )
    goto LABEL_70;
  if ( *((_BYTE *)Master_WarQuestSelectionMaster + 140) )
  {
    Master_WarQuestSelectionMaster = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_70;
    *((_DWORD *)Master_WarQuestSelectionMaster + 36) = 4;
  }
  debugButton = (UnityEngine_Object_o *)this->fields.debugButton;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(debugButton, 0LL, 0LL) )
  {
    Master_WarQuestSelectionMaster = this->fields.debugButton;
    if ( !Master_WarQuestSelectionMaster )
      goto LABEL_70;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 0, 0LL);
    v73 = ManagerConfig_TypeInfo;
    if ( (BYTE3(ManagerConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v73 = ManagerConfig_TypeInfo;
    }
    if ( v73->static_fields->UseDebugCommand )
    {
      Master_WarQuestSelectionMaster = this->fields.debugButton;
      if ( Master_WarQuestSelectionMaster )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_WarQuestSelectionMaster, 1, 0LL);
        return;
      }
LABEL_70:
      sub_B5D69C(Master_WarQuestSelectionMaster, v59);
    }
  }
}


void __fastcall BattleRootComponent__beginResume(
        BattleRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  WebViewManager_o *Instance; // x0
  __int64 v9; // x1
  CommonUI_o *v10; // x20
  struct BattleRootComponent_callBackBeginResume_o **p_callbackBeginResumeFunc; // x19
  BattleRootComponent_callBackBeginResume_o *v12; // x20
  struct BattleRootComponent_callBackBeginResume_o *callbackBeginResumeFunc; // t1

  if ( (byte_42E5750 & 1) == 0 )
  {
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5, v6, v7);
    byte_42E5750 = 1;
  }
  Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)Instance;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  }
  if ( !v10 )
    sub_B5D69C(Instance, v9);
  CommonUI__maskFadein(v10, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  callbackBeginResumeFunc = this->fields.callbackBeginResumeFunc;
  p_callbackBeginResumeFunc = &this->fields.callbackBeginResumeFunc;
  v12 = callbackBeginResumeFunc;
  if ( callbackBeginResumeFunc )
  {
    *p_callbackBeginResumeFunc = 0LL;
    sub_B5D560(p_callbackBeginResumeFunc);
    BattleRootComponent_callBackBeginResume__Invoke(v12, 0LL);
  }
}


void __fastcall BattleRootComponent__beginStartUp(
        BattleRootComponent_o *this,
        Il2CppObject *data,
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
  __int64 v27; // x9
  WebViewManager_o *Instance; // x21
  __int64 Item; // x0
  __int64 v30; // x1
  WebViewManager_o *v31; // x21
  struct BattleLogic_o *logic; // x20
  struct BattleLogic_o *v33; // x8
  struct BattleLogic_LOGICTYPE_array *logiclist; // x8
  struct BattleLogic_o *v35; // x8
  struct BattleLogic_LOGICTYPE_array *v36; // x8
  AndroidBackKeyManager_c *v37; // x0
  __int64 v38; // x0

  if ( (byte_42E5756 & 1) == 0 )
  {
    sub_B5D5C4(&AndroidBackKeyManager_TypeInfo, (_DWORD)data, (_DWORD)method, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v6, v7, v8);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v9, v10, v11);
    sub_B5D5C4(&BattleLogic_LOGICTYPE___TypeInfo, v12, v13, v14);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v15, v16, v17);
    sub_B5D5C4(&StringLiteral_20477/*"limitCount"*/, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_11098/*"QUEST_START"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_22277/*"servantId"*/, v24, v25, v26);
    byte_42E5756 = 1;
  }
  if ( data )
  {
    v27 = *(&System_Collections_Generic_Dictionary_string__int__TypeInfo->_2.bitflags2 + 1);
    if ( *(&data->klass->_2.bitflags2 + 1) >= (unsigned int)v27
      && (System_Collections_Generic_Dictionary_string__int__c *)data->klass->_2.typeHierarchy[v27 - 1] == System_Collections_Generic_Dictionary_string__int__TypeInfo )
    {
      Instance = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      Item = System_Collections_Generic_Dictionary_string__int___get_Item(
               (System_Collections_Generic_Dictionary_string__int__o *)data,
               (System_String_o *)StringLiteral_22277/*"servantId"*/,
               (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !Instance )
        goto LABEL_23;
      LODWORD(Instance->fields.baseWindow) = Item;
      v31 = SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      Item = System_Collections_Generic_Dictionary_string__int___get_Item(
               (System_Collections_Generic_Dictionary_string__int__o *)data,
               (System_String_o *)StringLiteral_20477/*"limitCount"*/,
               (const MethodInfo_2F1B380 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !v31 )
        goto LABEL_23;
      HIDWORD(v31->fields.baseWindow) = Item;
      Item = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Item )
        goto LABEL_23;
      *(_BYTE *)(Item + 44) = 1;
      Item = (__int64)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Item )
        goto LABEL_23;
      *(_BYTE *)(Item + 45) = 1;
      logic = this->fields.logic;
      Item = sub_B5D5DC(BattleLogic_LOGICTYPE___TypeInfo, 2LL);
      if ( !logic )
        goto LABEL_23;
      logic->fields.logiclist = (struct BattleLogic_LOGICTYPE_array *)Item;
      sub_B5D560(&logic->fields.logiclist);
      v33 = this->fields.logic;
      if ( !v33 )
        goto LABEL_23;
      logiclist = v33->fields.logiclist;
      if ( !logiclist )
        goto LABEL_23;
      if ( logiclist->max_length )
      {
        logiclist->m_Items[1] = 18;
        v35 = this->fields.logic;
        if ( !v35 )
          goto LABEL_23;
        v36 = v35->fields.logiclist;
        if ( !v36 )
          goto LABEL_23;
        if ( v36->max_length > 1 )
        {
          v36->m_Items[2] = 21;
          goto LABEL_18;
        }
      }
    }
    else
    {
      Item = sub_B5D990(data);
    }
    v38 = sub_B5D6C8(Item);
    sub_B5D668(v38, 0LL);
  }
LABEL_18:
  SceneRootComponent__beginStartUp_17513116((SceneRootComponent_o *)this, 0LL);
  v37 = AndroidBackKeyManager_TypeInfo;
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    v37 = AndroidBackKeyManager_TypeInfo;
  }
  v37->static_fields->ToastEnabled = 1;
  Item = (__int64)this->fields.myFSM;
  if ( !Item )
LABEL_23:
    sub_B5D69C(Item, v30);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Item, (System_String_o *)StringLiteral_11098/*"QUEST_START"*/, 0LL);
}


void __fastcall BattleRootComponent__endQuest(BattleRootComponent_o *this, const MethodInfo *method)
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
  BattlePerformance_o *perf; // x0
  __int64 v18; // x20
  __int64 v19; // x20
  __int64 v20; // x20
  __int64 v21; // x20
  const MethodInfo *v22; // x1
  System_Action_o *v23; // x20
  const MethodInfo *v24; // x2
  System_Collections_IEnumerator_o *OutGameAsset; // x1

  if ( (byte_42E5757 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_BattleRootComponent_goNextScene__, v8, v9, v10);
    sub_B5D5C4(&OptionManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AtlasManager__getInstance__, v14, v15, v16);
    byte_42E5757 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_37;
  BattlePerformance__SetTimeScale(perf, 1.0, 0LL);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_37;
  BattlePerformance__procEndQuest(perf, 0LL);
  perf = (BattlePerformance_o *)this->fields.assetStorageLoadWrapper;
  if ( !perf )
    goto LABEL_37;
  AssetStorageLoadWrapper__ReleaseAll((AssetStorageLoadWrapper_o *)perf, 0LL);
  v18 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v18 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3));
  v19 = **(_QWORD **)(v18 + 192);
  if ( (*(_BYTE *)(v19 + 306) & 1) == 0 )
    sub_AF52C4(v19);
  perf = **(BattlePerformance_o ***)(v19 + 184);
  if ( !perf )
    goto LABEL_37;
  AtlasManager__UnloadBuffIconAtlas((AtlasManager_o *)perf, 0LL);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__isSavedMemoryMode(0LL) )
  {
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__ReleaseFaceBattleAtlas(0LL);
  }
  v20 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3);
  if ( (*(_BYTE *)(v20 + 306) & 1) == 0 )
    sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3));
  v21 = **(_QWORD **)(v20 + 192);
  if ( (*(_BYTE *)(v21 + 306) & 1) == 0 )
    sub_AF52C4(v21);
  perf = **(BattlePerformance_o ***)(v21 + 184);
  if ( !perf
    || (AtlasManager__UnloadWarBoardAtlas((AtlasManager_o *)perf, 0LL), (perf = this->fields.perf) == 0LL)
    || (BattlePerformance__ReleaseEventInfoPointGauge(perf, 0LL),
        (perf = (BattlePerformance_o *)this->fields.data) == 0LL) )
  {
LABEL_37:
    sub_B5D69C(perf, method);
  }
  if ( !BattleData__IsWarBoard((BattleData_o *)perf, 0LL) )
  {
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__ReleaseEventAtlas(0LL);
  }
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  if ( OptionManager__isSavedMemoryMode(0LL) )
  {
    v23 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v23, (Il2CppObject *)this, Method_BattleRootComponent_goNextScene__, 0LL);
    OutGameAsset = BattleRootComponent__loadOutGameAsset(this, v23, v24);
    UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, OutGameAsset, 0LL);
  }
  else
  {
    BattleRootComponent__goNextScene(this, v22);
  }
}


void __fastcall BattleRootComponent__goNextScene(BattleRootComponent_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleRootComponent_o *v4; // x19
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  struct BattleData_o *data; // x9
  struct BattleEntity_o *battle_ent; // x8
  struct QuestEntity_o *quest_ent; // x20
  int32_t questPhase; // w21
  struct BattleData_o *v12; // x8
  int32_t id; // w23
  int32_t win_lose; // w24
  int32_t v15; // w22
  int32_t WinResult; // w25
  BattleScriptRootComponent_TalkScriptInfo_o *v17; // x20
  const MethodInfo *v18; // x2

  v4 = this;
  if ( (byte_42E5759 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, (_DWORD)method, v2, v3);
    this = (BattleRootComponent_o *)sub_B5D5C4(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, v5, v6, v7);
    byte_42E5759 = 1;
  }
  data = v4->fields.data;
  if ( !data )
    goto LABEL_10;
  battle_ent = data->fields.battle_ent;
  if ( !battle_ent )
    goto LABEL_10;
  quest_ent = data->fields.quest_ent;
  if ( !quest_ent )
    goto LABEL_10;
  questPhase = battle_ent->fields.questPhase;
  this = (BattleRootComponent_o *)QuestEntity__GetWarId(data->fields.quest_ent, 0LL);
  v12 = v4->fields.data;
  if ( !v12 )
    goto LABEL_10;
  id = quest_ent->fields.id;
  win_lose = v12->fields.win_lose;
  v15 = (int)this;
  WinResult = BattleData__getWinResult(v4->fields.data, 0LL);
  v17 = (BattleScriptRootComponent_TalkScriptInfo_o *)sub_B5D694(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
  BattleScriptRootComponent_TalkScriptInfo___ctor_20491572(v17, v15, id, questPhase, 4, win_lose, WinResult, 0, 0LL);
  this = (BattleRootComponent_o *)v4->fields.data;
  if ( !this
    || (BattleData__release((BattleData_o *)this, 0LL),
        (this = (BattleRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_10:
    sub_B5D69C(this, method);
  }
  CommonUI__SetMaskFadeInitColor((CommonUI_o *)this, 1, 0LL);
  BattleRootComponent__TransitionTerminalOrBattleScript(v4, v17, v18);
}


System_Collections_IEnumerator_o *__fastcall BattleRootComponent__loadOutGameAsset(
        BattleRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v3; // x3
  BattleRootComponent__loadOutGameAsset_d__20_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_42E5758 & 1) == 0 )
  {
    sub_B5D5C4(&BattleRootComponent__loadOutGameAsset_d__20_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    byte_42E5758 = 1;
  }
  v6 = (BattleRootComponent__loadOutGameAsset_d__20_o *)sub_B5D694(BattleRootComponent__loadOutGameAsset_d__20_TypeInfo);
  BattleRootComponent__loadOutGameAsset_d__20___ctor(v6, 0, 0LL);
  if ( !v6 )
    sub_B5D69C(v7, v8);
  v6->fields.__4__this = this;
  sub_B5D560(&v6->fields.__4__this);
  v6->fields.callback = callback;
  sub_B5D560(&v6->fields.callback);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall BattleRootComponent__setCallbackBeginResume(
        BattleRootComponent_o *this,
        BattleRootComponent_callBackBeginResume_o *func,
        const MethodInfo *method)
{
  this->fields.callbackBeginResumeFunc = func;
  sub_B5D560(&this->fields.callbackBeginResumeFunc);
}


void __fastcall BattleRootComponent__LoadAsset_d__13___ctor(
        BattleRootComponent__LoadAsset_d__13_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleRootComponent__LoadAsset_d__13__MoveNext(
        BattleRootComponent__LoadAsset_d__13_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleRootComponent__LoadAsset_d__13_o *v4; // x27
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  struct BattleRootComponent_o *_4__this; // x26
  Il2CppObject *v60; // x22
  BattleRootComponent__LoadAsset_d__13_o **p__8__1; // x21
  UnityEngine_WaitForEndOfFrame_o *v62; // x20
  Il2CppObject **p__2__current; // x27
  bool result; // w0
  QuestPhaseEntity_o *ent; // x23
  int32_t eventId; // w22
  Il2CppObject *_8__1; // x25
  System_Action_o *v68; // x24
  System_Collections_IEnumerator_o *AssetsIndependentToMainOne; // x0
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x22
  BattleDataDefine_c *v71; // x0
  BattleRootComponent__LoadAsset_d__13_o *v72; // x25
  System_String_o *ASSET_BATTLE_COMMON; // x23
  AssetLoader_LoadEndDataHandler_o *v74; // x24
  BattleRootComponent__LoadAsset_d__13_o *v75; // x22
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v76; // x23
  struct BattleRootComponent___c__DisplayClass13_0_o *v77; // x8
  struct System_Int32_array *fieldMotionIds_5__2; // x28
  __int64 v79; // x8
  unsigned __int64 v80; // x27
  int32_t v81; // w22
  BattleRootComponent__LoadAsset_d__13_o *v82; // x25
  AssetStorageLoadWrapper_o *v83; // x23
  AssetLoader_LoadEndDataHandler_o *v84; // x24
  System_String_o *v85; // x22
  AssetManager_o *v86; // x22
  Il2CppObject **p__8__2; // x22
  Il2CppObject **v88; // x27
  int v89; // w8
  BattleRootComponent__LoadAsset_d__13_o *v90; // x8
  struct System_Int32_array *v91; // x9
  struct BattleRootComponent___c__DisplayClass13_0_o **v92; // x22
  struct BattleEntity_o *battleEnt; // x8
  Il2CppObject *v94; // x23
  System_String_o *v95; // x0
  struct BattleRootComponent___c__DisplayClass13_1_o *_8__2; // x8
  System_String_o *v97; // x23
  struct BattleRootComponent_o *v98; // x19
  AssetStorageLoadWrapper_o *v99; // x24
  Il2CppObject *v100; // x26
  AssetLoader_LoadEndDataHandler_o *v101; // x25
  struct BattleRootComponent___c__DisplayClass13_0_o *v102; // x8
  struct BattlePerformance_o *perf; // x8
  struct BattlePerformance_o *v104; // x8
  struct BattlePerformance_o *v105; // x8
  AssumedBattleAssetLoadManager_o *AssumedBattleAssetLoadManager_k__BackingField; // x21
  struct BattlePerformance_o *v107; // x8
  __int64 v108; // x0
  BattleRootComponent__LoadAsset_d__13_o *v109; // [xsp+0h] [xbp-60h]
  int v110; // [xsp+Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_42E60C1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_AssumedBattleAssetLoadManager_Release_AssumedBattleAssetSearcherBeforeBattle___, v5, v6, v7);
    sub_B5D5C4(&BattleDataDefine_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&System_GC_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssetData___ctor__, v14, v15, v16);
    sub_B5D5C4(&System_Collections_Generic_List_AssetData__TypeInfo, v17, v18, v19);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v20, v21, v22);
    sub_B5D5C4(&OptionManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v26, v27, v28);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v29, v30, v31);
    sub_B5D5C4(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__0__, v32, v33, v34);
    sub_B5D5C4(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__1__, v35, v36, v37);
    sub_B5D5C4(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__2__, v38, v39, v40);
    sub_B5D5C4(&BattleRootComponent___c__DisplayClass13_0_TypeInfo, v41, v42, v43);
    sub_B5D5C4(&Method_BattleRootComponent___c__DisplayClass13_1__LoadAsset_b__3__, v44, v45, v46);
    sub_B5D5C4(&BattleRootComponent___c__DisplayClass13_1_TypeInfo, v47, v48, v49);
    sub_B5D5C4(&UnityEngine_WaitForEndOfFrame_TypeInfo, v50, v51, v52);
    sub_B5D5C4(&StringLiteral_2822/*"Battle/UniqueCamera/"*/, v53, v54, v55);
    this = (BattleRootComponent__LoadAsset_d__13_o *)sub_B5D5C4(&StringLiteral_15090/*"UniqueCameraPrefab"*/, v56, v57, v58);
    byte_42E60C1 = 1;
  }
  v110 = 0;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v60 = (Il2CppObject *)sub_B5D694(BattleRootComponent___c__DisplayClass13_0_TypeInfo);
      System_Object___ctor(v60, 0LL);
      p__8__1 = (BattleRootComponent__LoadAsset_d__13_o **)&v4->fields.__8__1;
      v4->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass13_0_o *)v60;
      sub_B5D560(&v4->fields.__8__1);
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      this = (BattleRootComponent__LoadAsset_d__13_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_13;
      if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_43893280(0LL);
      v62 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v62, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v62;
      p__2__current = &v4->fields.__2__current;
      sub_B5D560(p__2__current);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    case 1:
      v4->fields.__1__state = -1;
      this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_105;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_105;
      v4->fields.__2__current = (Il2CppObject *)AssetManager__WaitForExecutionUnloadUnuseAssets(
                                                  (AssetManager_o *)this,
                                                  0LL);
      v88 = &v4->fields.__2__current;
      sub_B5D560(v88);
      v89 = 2;
      goto LABEL_98;
    case 2:
      p__8__1 = (BattleRootComponent__LoadAsset_d__13_o **)&v4->fields.__8__1;
      v4->fields.__1__state = -1;
LABEL_13:
      if ( !*p__8__1 )
        goto LABEL_105;
      LOBYTE((*p__8__1)->fields.__1__state) = 1;
      ent = v4->fields.ent;
      eventId = v4->fields.eventId;
      _8__1 = (Il2CppObject *)v4->fields.__8__1;
      v68 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v68, _8__1, Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__0__, 0LL);
      if ( !_4__this )
        goto LABEL_105;
      AssetsIndependentToMainOne = BattleRootComponent__LoadAssetsIndependentToMainOne(_4__this, ent, eventId, v68, 0LL);
      UnityEngine_MonoBehaviour__StartCoroutine_35615088(
        (UnityEngine_MonoBehaviour_o *)_4__this,
        AssetsIndependentToMainOne,
        0LL);
      this = *p__8__1;
      if ( !*p__8__1 )
        goto LABEL_105;
      this->fields.__2__current = 0LL;
      sub_B5D560(&this->fields.__2__current);
      assetStorageLoadWrapper = _4__this->fields.assetStorageLoadWrapper;
      v71 = BattleDataDefine_TypeInfo;
      if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !BattleDataDefine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
        v71 = BattleDataDefine_TypeInfo;
      }
      v72 = *p__8__1;
      ASSET_BATTLE_COMMON = v71->static_fields->ASSET_BATTLE_COMMON;
      v74 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v74,
        (Il2CppObject *)v72,
        Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__1__,
        0LL);
      if ( !assetStorageLoadWrapper )
        goto LABEL_105;
      AssetStorageLoadWrapper__LoadAssetStorage(assetStorageLoadWrapper, ASSET_BATTLE_COMMON, v74, 1, 0LL);
      v75 = *p__8__1;
      v76 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_AssetData__TypeInfo);
      System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
        v76,
        (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_AssetData___ctor__);
      if ( !v75 )
        goto LABEL_105;
      v75->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass13_0_o *)v76;
      sub_B5D560(&v75->fields.__8__1);
      v4->fields._fieldMotionIds_5__2 = BattleRootComponent__GetAllFieldMotionIds(
                                          _4__this,
                                          v4->fields.battleEnt,
                                          v4->fields.ent,
                                          &v4->fields._baseMotionIds_5__3,
                                          0LL);
      sub_B5D560(&v4->fields._fieldMotionIds_5__2);
      v77 = v4->fields.__8__1;
      if ( !v77 )
        goto LABEL_105;
      v77->fields.loadCompCnt = 0;
      fieldMotionIds_5__2 = v4->fields._fieldMotionIds_5__2;
      v109 = v4;
      if ( !fieldMotionIds_5__2 )
        goto LABEL_105;
      v79 = *(_QWORD *)&fieldMotionIds_5__2->max_length;
      if ( (int)v79 < 1 )
        goto LABEL_37;
      v80 = 0LL;
      break;
    case 3:
      p__8__1 = (BattleRootComponent__LoadAsset_d__13_o **)&v4->fields.__8__1;
      v4->fields.__1__state = -1;
      goto LABEL_53;
    case 4:
      p__8__2 = (Il2CppObject **)&v4->fields.__8__2;
      v4->fields.__1__state = -1;
      goto LABEL_43;
    case 5:
      v92 = &v4->fields.__8__1;
      v4->fields.__1__state = -1;
      goto LABEL_90;
    case 6:
      v4->fields.__1__state = -1;
      goto LABEL_93;
    default:
      return 0;
  }
  do
  {
    if ( v80 >= (unsigned int)v79 )
    {
      v108 = sub_B5D6C8(this);
      sub_B5D668(v108, 0LL);
    }
    v81 = fieldMotionIds_5__2->m_Items[v80 + 1];
    if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    }
    this = (BattleRootComponent__LoadAsset_d__13_o *)BattleDataDefine__FieldMotionPath(v81, 0LL);
    v82 = *p__8__1;
    if ( !*p__8__1 )
      goto LABEL_105;
    v83 = _4__this->fields.assetStorageLoadWrapper;
    v84 = (AssetLoader_LoadEndDataHandler_o *)v82->fields.ent;
    v85 = (System_String_o *)this;
    if ( !v84 )
    {
      v84 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v84,
        (Il2CppObject *)v82,
        Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__2__,
        0LL);
      v82->fields.ent = (struct QuestPhaseEntity_o *)v84;
      sub_B5D560(&v82->fields.ent);
    }
    if ( !v83 )
      goto LABEL_105;
    this = (BattleRootComponent__LoadAsset_d__13_o *)AssetStorageLoadWrapper__LoadAssetStorage(v83, v85, v84, 1, 0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !*p__8__1 )
        goto LABEL_105;
      ++LODWORD((*p__8__1)->fields.__4__this);
    }
    LODWORD(v79) = fieldMotionIds_5__2->max_length;
    ++v80;
  }
  while ( (__int64)v80 < (int)v79 );
LABEL_37:
  this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  v86 = (AssetManager_o *)this;
  if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !BattleDataDefine_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
  }
  v4 = v109;
  if ( !v86 )
    goto LABEL_105;
  AssetManager__UpdateLoadParallelMax(v86, BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX, 0LL);
LABEL_53:
  v90 = *p__8__1;
  if ( !*p__8__1 )
    goto LABEL_105;
  if ( !v90->fields.__2__current )
  {
LABEL_57:
    v4->fields.__2__current = 0LL;
    v88 = &v4->fields.__2__current;
    sub_B5D560(v88);
    v89 = 3;
LABEL_98:
    *((_DWORD *)v88 - 2) = v89;
    return 1;
  }
  v91 = v4->fields._fieldMotionIds_5__2;
  if ( !v91 )
    goto LABEL_105;
  if ( SLODWORD(v90->fields.__4__this) < (signed int)v91->max_length )
    goto LABEL_57;
  battleEnt = v4->fields.battleEnt;
  if ( !battleEnt )
    goto LABEL_105;
  this = (BattleRootComponent__LoadAsset_d__13_o *)battleEnt->fields.battleInfo;
  if ( !this )
    goto LABEL_105;
  this = (BattleRootComponent__LoadAsset_d__13_o *)BattleInfoData__GetUniqueCameraId(
                                                     (BattleInfoData_o *)this,
                                                     v4->fields.ent,
                                                     0LL);
  v110 = (int)this;
  if ( (_DWORD)this )
  {
    v94 = (Il2CppObject *)sub_B5D694(BattleRootComponent___c__DisplayClass13_1_TypeInfo);
    System_Object___ctor(v94, 0LL);
    v4->fields.__8__2 = (struct BattleRootComponent___c__DisplayClass13_1_o *)v94;
    p__8__2 = (Il2CppObject **)&v4->fields.__8__2;
    sub_B5D560(&v4->fields.__8__2);
    v95 = System_Int32__ToString((int32_t)&v110, 0LL);
    this = (BattleRootComponent__LoadAsset_d__13_o *)System_String__Concat_44577788(
                                                       (System_String_o *)StringLiteral_2822/*"Battle/UniqueCamera/"*/,
                                                       v95,
                                                       0LL);
    _8__2 = v4->fields.__8__2;
    if ( !_8__2 )
      goto LABEL_105;
    _8__2->fields.uniqueCameraData = 0LL;
    v97 = (System_String_o *)this;
    sub_B5D560(&_8__2->fields);
    if ( !_4__this )
      goto LABEL_105;
    v98 = _4__this;
    v99 = _4__this->fields.assetStorageLoadWrapper;
    v100 = *p__8__2;
    v101 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v101,
      v100,
      Method_BattleRootComponent___c__DisplayClass13_1__LoadAsset_b__3__,
      0LL);
    if ( !v99 )
      goto LABEL_105;
    this = (BattleRootComponent__LoadAsset_d__13_o *)AssetStorageLoadWrapper__LoadAssetStorage(v99, v97, v101, 1, 0LL);
    v4->fields._loadSucceeded_5__4 = (unsigned __int8)this & 1;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      _4__this = v98;
    }
    else
    {
      if ( !*p__8__1 )
        goto LABEL_105;
      this = (BattleRootComponent__LoadAsset_d__13_o *)v98->fields.perf;
      _4__this = v98;
      if ( !this )
        goto LABEL_105;
      BattlePerformance__loadStorageObjectCameraCommon(
        (BattlePerformance_o *)this,
        (AssetData_o *)(*p__8__1)->fields.__2__current,
        0LL);
    }
LABEL_43:
    if ( !*p__8__2 )
      goto LABEL_105;
    method = (const MethodInfo *)(*p__8__2)[1].klass;
    if ( !method )
    {
      v4->fields.__2__current = 0LL;
      v88 = &v4->fields.__2__current;
      sub_B5D560(v88);
      v89 = 4;
      goto LABEL_98;
    }
    if ( v4->fields._loadSucceeded_5__4 )
    {
      if ( !_4__this )
        goto LABEL_105;
      this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_105;
      BattlePerformance__loadStorageObjectCamera(
        (BattlePerformance_o *)this,
        (AssetData_o *)method,
        (System_String_o *)StringLiteral_15090/*"UniqueCameraPrefab"*/,
        0LL);
      *p__8__2 = 0LL;
      sub_B5D560(p__8__2);
    }
    else
    {
      *p__8__2 = 0LL;
      sub_B5D560(p__8__2);
      if ( !_4__this )
        goto LABEL_105;
    }
  }
  else
  {
    if ( !_4__this )
      goto LABEL_105;
    if ( !*p__8__1 )
      goto LABEL_105;
    this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
    if ( !this )
      goto LABEL_105;
    BattlePerformance__loadStorageObjectCameraCommon(
      (BattlePerformance_o *)this,
      (AssetData_o *)(*p__8__1)->fields.__2__current,
      0LL);
  }
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  v92 = &v4->fields.__8__1;
  v102 = v4->fields.__8__1;
  if ( !v102 )
    goto LABEL_105;
  if ( !this )
    goto LABEL_105;
  BattlePerformance__loadStorageObjectCommonMotion((BattlePerformance_o *)this, v102->fields.commonData, 0LL);
  if ( !*v92 )
    goto LABEL_105;
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_105;
  BattlePerformance__SetEffectControlObjectFromCommonAsset((BattlePerformance_o *)this, (*v92)->fields.commonData, 0LL);
  if ( !*v92 )
    goto LABEL_105;
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_105;
  BattlePerformance__loadFieldMotion(
    (BattlePerformance_o *)this,
    (*v92)->fields.commonData,
    (*v92)->fields.motionDataList,
    0LL);
  perf = _4__this->fields.perf;
  if ( !perf )
    goto LABEL_105;
  this = (BattleRootComponent__LoadAsset_d__13_o *)perf->fields._fmManager_k__BackingField;
  if ( !this )
    goto LABEL_105;
  FieldMotionManager__SetBaseFieldMotionIds((FieldMotionManager_o *)this, v4->fields._baseMotionIds_5__3, 0LL);
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_105;
  BattlePerformance__Initialize((BattlePerformance_o *)this, 0LL);
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.data;
  if ( !this )
    goto LABEL_105;
  BattleData__loadFsmGameObject((BattleData_o *)this, 0LL);
  v104 = _4__this->fields.perf;
  if ( !v104 )
    goto LABEL_105;
  this = (BattleRootComponent__LoadAsset_d__13_o *)v104->fields._AssumedBattleAssetLoadManager_k__BackingField;
  if ( !this )
    goto LABEL_105;
  AssumedBattleAssetLoadManager__Release_object_(
    (AssumedBattleAssetLoadManager_o *)this,
    (const MethodInfo_1AD0E58 *)Method_AssumedBattleAssetLoadManager_Release_AssumedBattleAssetSearcherBeforeBattle___);
  v105 = _4__this->fields.perf;
  if ( !v105 )
    goto LABEL_105;
  AssumedBattleAssetLoadManager_k__BackingField = v105->fields._AssumedBattleAssetLoadManager_k__BackingField;
  this = (BattleRootComponent__LoadAsset_d__13_o *)AssumedBattleAssetSearcherBeforeBattle__Create(0LL);
  if ( !AssumedBattleAssetLoadManager_k__BackingField )
    goto LABEL_105;
  AssumedBattleAssetLoadManager__Preload(
    AssumedBattleAssetLoadManager_k__BackingField,
    (AssumedBattleAssetSearcherBase_o *)this,
    0LL);
LABEL_90:
  if ( !*v92 )
    goto LABEL_105;
  if ( (*v92)->fields.isAssetsLoading )
  {
    v4->fields.__2__current = 0LL;
    v88 = &v4->fields.__2__current;
    sub_B5D560(v88);
    v89 = 5;
    goto LABEL_98;
  }
LABEL_93:
  if ( !_4__this )
    goto LABEL_105;
  v107 = _4__this->fields.perf;
  if ( !v107 )
    goto LABEL_105;
  this = (BattleRootComponent__LoadAsset_d__13_o *)v107->fields._AssumedBattleAssetLoadManager_k__BackingField;
  if ( !this )
    goto LABEL_105;
  if ( AssumedBattleAssetLoadManager__IsPreloading((AssumedBattleAssetLoadManager_o *)this, 0LL) )
  {
    v4->fields.__2__current = 0LL;
    v88 = &v4->fields.__2__current;
    sub_B5D560(v88);
    v89 = 6;
    goto LABEL_98;
  }
  BattleRootComponent__SetupObjectsExtractedFromLoadedAssets(_4__this, 0LL);
  this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_105:
    sub_B5D69C(this, method);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)this, (SceneRootComponent_o *)_4__this, 0LL);
  return 0;
}


Il2CppObject *__fastcall BattleRootComponent__LoadAsset_d__13__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleRootComponent__LoadAsset_d__13_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleRootComponent__LoadAsset_d__13__System_Collections_IEnumerator_Reset(
        BattleRootComponent__LoadAsset_d__13_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattleRootComponent__LoadAsset_d__13_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall BattleRootComponent__LoadAsset_d__13__System_Collections_IEnumerator_get_Current(
        BattleRootComponent__LoadAsset_d__13_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleRootComponent__LoadAsset_d__13__System_IDisposable_Dispose(
        BattleRootComponent__LoadAsset_d__13_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleRootComponent__LoadAssetsIndependentToMainOne_d__14___ctor(
        BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleRootComponent__LoadAssetsIndependentToMainOne_d__14__MoveNext(
        BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *v4; // x19
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  int v47; // w1
  int v48; // w2
  __int64 v49; // x3
  int v50; // w1
  int v51; // w2
  __int64 v52; // x3
  int v53; // w1
  int v54; // w2
  __int64 v55; // x3
  int v56; // w1
  int v57; // w2
  __int64 v58; // x3
  int v59; // w1
  int v60; // w2
  __int64 v61; // x3
  int v62; // w1
  int v63; // w2
  __int64 v64; // x3
  int v65; // w1
  int v66; // w2
  __int64 v67; // x3
  int v68; // w1
  int v69; // w2
  __int64 v70; // x3
  int v71; // w1
  int v72; // w2
  __int64 v73; // x3
  int v74; // w1
  int v75; // w2
  __int64 v76; // x3
  int v77; // w1
  int v78; // w2
  __int64 v79; // x3
  int v80; // w1
  int v81; // w2
  __int64 v82; // x3
  int v83; // w1
  int v84; // w2
  __int64 v85; // x3
  int v86; // w1
  int v87; // w2
  __int64 v88; // x3
  int v89; // w1
  int v90; // w2
  __int64 v91; // x3
  int v92; // w1
  int v93; // w2
  __int64 v94; // x3
  int v95; // w1
  int v96; // w2
  __int64 v97; // x3
  int v98; // w1
  int v99; // w2
  __int64 v100; // x3
  int v101; // w1
  int v102; // w2
  __int64 v103; // x3
  int v104; // w1
  int v105; // w2
  __int64 v106; // x3
  int v107; // w1
  int v108; // w2
  __int64 v109; // x3
  int v110; // w1
  int v111; // w2
  __int64 v112; // x3
  int v113; // w1
  int v114; // w2
  __int64 v115; // x3
  int v116; // w1
  int v117; // w2
  __int64 v118; // x3
  int v119; // w1
  int v120; // w2
  __int64 v121; // x3
  int v122; // w1
  int v123; // w2
  __int64 v124; // x3
  int v125; // w1
  int v126; // w2
  __int64 v127; // x3
  int v128; // w1
  int v129; // w2
  __int64 v130; // x3
  int v131; // w1
  int v132; // w2
  __int64 v133; // x3
  int v134; // w1
  int v135; // w2
  __int64 v136; // x3
  int v137; // w1
  int v138; // w2
  __int64 v139; // x3
  int v140; // w1
  int v141; // w2
  __int64 v142; // x3
  int v143; // w1
  int v144; // w2
  __int64 v145; // x3
  int v146; // w1
  int v147; // w2
  __int64 v148; // x3
  int v149; // w1
  int v150; // w2
  __int64 v151; // x3
  int32_t _1__state; // w8
  BattleRootComponent_o *_4__this; // x26
  bool result; // w0
  Il2CppObject *v155; // x22
  Il2CppObject **v156; // x21
  struct BattleRootComponent___c__DisplayClass14_0_o *v157; // x8
  int32_t BattleEffectId; // w22
  System_String_o *v159; // x0
  AssetStorageLoadWrapper_o *v160; // x23
  Il2CppObject *v161; // x25
  System_String_o *v162; // x22
  AssetLoader_LoadEndDataHandler_o *v163; // x24
  ConstantMaster_o *Master_WarQuestSelectionMaster; // x22
  System_Collections_Generic_IEnumerable_T__o *v165; // x23
  System_Collections_Generic_List_int__o *v166; // x21
  int32_t Value; // w0
  System_Collections_Generic_IEnumerable_T__o *ClassBoardCommandSpellEffectId; // x0
  System_Int32_array *v169; // x21
  AssetManager_o *v170; // x20
  Il2CppObject **v171; // x19
  Il2CppObject *SingleEntity; // x21
  System_Collections_Generic_HashSet_int__o *v173; // x23
  int32_t v174; // w22
  Il2CppObject **p__8__1; // x25
  DataMasterBase_WarMaster__WarEntity__int__o *v176; // x22
  _BOOL8 v177; // x0
  __int64 v178; // x1
  _BOOL8 v179; // x0
  __int64 v180; // x1
  Il2CppObject *v181; // x26
  System_String_o *age; // x23
  System_Action_o *monitor; // x24
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x22
  Il2CppObject *v185; // x24
  System_Action_o *v186; // x23
  Il2CppObject *v187; // x1
  System_String_o *v188; // x0
  __int64 v189; // x1
  Il2CppObject *_8__1; // x25
  AssetStorageLoadWrapper_o *v191; // x22
  AssetLoader_LoadEndDataHandler_o *klass; // x23
  System_String_o *v193; // x21
  _BOOL8 Wrapper__LoadAssetStorage; // x0
  __int64 v195; // x1
  int v196; // w20
  __int64 v197; // x21
  __int64 v198; // x21
  Il2CppObject *v199; // x23
  AtlasManager_o *v200; // x21
  System_Action_o *v201; // x22
  Il2CppObject *v202; // x22
  System_Action_o *v203; // x21
  Il2CppObject *v204; // x22
  BattlePerformance_o *perf; // x20
  System_Action_o *v206; // x21
  Il2CppObject *v207; // x20
  System_Action_o *v208; // x21
  __int64 v209; // x20
  __int64 v210; // x20
  __int64 v211; // x20
  __int64 v212; // x20
  Il2CppObject *v213; // x22
  AtlasManager_o *v214; // x20
  System_Action_o *v215; // x21
  AssetManager_o *v216; // x20
  Il2CppObject **p__2__current; // x19
  BattleRootComponent_o *v218; // [xsp+8h] [xbp-C8h]
  struct BattleRootComponent___c__DisplayClass14_0_o **v219; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_HashSet_Enumerator_T__o v220; // [xsp+18h] [xbp-B8h] BYREF
  int v221[2]; // [xsp+30h] [xbp-A0h]
  int v222; // [xsp+38h] [xbp-98h]
  System_Collections_Generic_HashSet_Enumerator_T__o v223; // [xsp+40h] [xbp-90h] BYREF
  WarEntity_o *entity; // [xsp+58h] [xbp-78h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v225; // [xsp+60h] [xbp-70h] BYREF
  int32_t v226; // [xsp+7Ch] [xbp-54h] BYREF

  v4 = this;
  if ( (byte_42E60C2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&BattleDataDefine_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&BattleEffectUtility_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_DataManager_GetMaster_BattleMaster___, v14, v15, v16);
    sub_B5D5C4(&Method_DataManager_GetMaster_BgmMaster___, v17, v18, v19);
    sub_B5D5C4(&Method_DataManager_GetMaster_BuffMaster___, v20, v21, v22);
    sub_B5D5C4(&Method_DataManager_GetMaster_ConstantMaster___, v23, v24, v25);
    sub_B5D5C4(&DataManager_TypeInfo, v26, v27, v28);
    sub_B5D5C4(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v29, v30, v31);
    sub_B5D5C4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v32, v33, v34);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v35, v36, v37);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v38, v39, v40);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v41, v42, v43);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v44, v45, v46);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v47, v48, v49);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v50, v51, v52);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__Add__, v53, v54, v55);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v56, v57, v58);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_int___ctor___68716232, v59, v60, v61);
    sub_B5D5C4(&System_Collections_Generic_HashSet_int__TypeInfo, v62, v63, v64);
    sub_B5D5C4(&int_TypeInfo, v65, v66, v67);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__AddRange__, v68, v69, v70);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__Add__, v71, v72, v73);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v74, v75, v76);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__ToArray__, v77, v78, v79);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int___ctor__, v80, v81, v82);
    sub_B5D5C4(&Method_System_Collections_Generic_List_int__get_Count__, v83, v84, v85);
    sub_B5D5C4(&System_Collections_Generic_List_int__TypeInfo, v86, v87, v88);
    sub_B5D5C4(&AssetLoader_LoadEndDataHandler_TypeInfo, v89, v90, v91);
    sub_B5D5C4(&OptionManager_TypeInfo, v92, v93, v94);
    sub_B5D5C4(&ServantAssetLoadManager_TypeInfo, v95, v96, v97);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AtlasManager__getInstance__, v98, v99, v100);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v101, v102, v103);
    sub_B5D5C4(&SoundManager_TypeInfo, v104, v105, v106);
    sub_B5D5C4(
      &Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__0__,
      v107,
      v108,
      v109);
    sub_B5D5C4(
      &Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__1__,
      v110,
      v111,
      v112);
    sub_B5D5C4(
      &Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__2__,
      v113,
      v114,
      v115);
    sub_B5D5C4(
      &Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__3__,
      v116,
      v117,
      v118);
    sub_B5D5C4(
      &Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__4__,
      v119,
      v120,
      v121);
    sub_B5D5C4(
      &Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__5__,
      v122,
      v123,
      v124);
    sub_B5D5C4(
      &Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__6__,
      v125,
      v126,
      v127);
    sub_B5D5C4(
      &Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__7__,
      v128,
      v129,
      v130);
    sub_B5D5C4(
      &Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__8__,
      v131,
      v132,
      v133);
    sub_B5D5C4(&BattleRootComponent___c__DisplayClass14_0_TypeInfo, v134, v135, v136);
    sub_B5D5C4(&StringLiteral_2481/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE"*/, v137, v138, v139);
    sub_B5D5C4(&StringLiteral_2476/*"BATTLE_EFFECT_ID_3003001"*/, v140, v141, v142);
    sub_B5D5C4(&StringLiteral_2812/*"Battle/DropEffect/{0}"*/, v143, v144, v145);
    sub_B5D5C4(&StringLiteral_2813/*"Battle/Effect/"*/, v146, v147, v148);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)sub_B5D5C4(
                                                                            &StringLiteral_2806/*"Battle"*/,
                                                                            v149,
                                                                            v150,
                                                                            v151);
    byte_42E60C2 = 1;
  }
  v226 = 0;
  memset(&v225, 0, sizeof(v225));
  entity = 0LL;
  memset(&v223, 0, sizeof(v223));
  v222 = 0;
  _1__state = v4->fields.__1__state;
  if ( _1__state == 2 )
  {
    p__8__1 = (Il2CppObject **)&v4->fields.__8__1;
    v4->fields.__1__state = -1;
LABEL_120:
    if ( !*p__8__1 )
      goto LABEL_48;
    if ( SLODWORD((*p__8__1)[1].klass) >= v4->fields._loadCntMax_5__2 )
    {
      ActionExtensions__Call(v4->fields.finishCallback, 0LL);
      return 0;
    }
    else
    {
      v4->fields.__2__current = 0LL;
      p__2__current = &v4->fields.__2__current;
      sub_B5D560(p__2__current);
      *((_DWORD *)p__2__current - 2) = 2;
      return 1;
    }
  }
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BattleMaster___);
    if ( !this )
      goto LABEL_48;
    SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                     (const MethodInfo_23FB0FC *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    v173 = (System_Collections_Generic_HashSet_int__o *)sub_B5D694(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v173,
      (const MethodInfo_24FF478 *)Method_System_Collections_Generic_HashSet_int___ctor___68716232);
    if ( !SingleEntity )
      goto LABEL_48;
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingleEntity[1].klass;
    if ( !this )
      goto LABEL_48;
    v174 = 0;
    while ( v174 < BattleInfoData__getLastWave((BattleInfoData_o *)this, 0LL) + 1 )
    {
      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattleEntity__GetStageEntityAtWave(
                                                                              (BattleEntity_o *)SingleEntity,
                                                                              v174,
                                                                              0LL);
      if ( this )
      {
        if ( !v173 )
          goto LABEL_48;
        System_Collections_Generic_HashSet_int___Add(
          v173,
          (int32_t)this->fields.__8__1,
          (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattleEntity__GetStageEntityAtWave(
                                                                              (BattleEntity_o *)SingleEntity,
                                                                              v174,
                                                                              0LL);
      if ( this )
      {
        this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)StageEntity__GetBossIdAndChangeBgmId(
                                                                                (StageEntity_o *)this,
                                                                                0LL);
        if ( this )
        {
          if ( SLODWORD(this->fields.__2__current) >= 2 )
          {
            if ( !v173 )
              goto LABEL_48;
            System_Collections_Generic_HashSet_int___Add(
              v173,
              HIDWORD(this->fields.ent),
              (const MethodInfo_2500654 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
          this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingleEntity[1].klass;
          ++v174;
          if ( this )
            continue;
        }
      }
      goto LABEL_48;
    }
    if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    v218 = _4__this;
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BgmMaster___);
    if ( !v173 )
      goto LABEL_48;
    v176 = (DataMasterBase_WarMaster__WarEntity__int__o *)this;
    System_Collections_Generic_HashSet_int___GetEnumerator(
      &v220,
      v173,
      (const MethodInfo_24FFF80 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    p__8__1 = (Il2CppObject **)&v4->fields.__8__1;
    v225 = v220;
    while ( 1 )
    {
      v177 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
               &v225,
               (const MethodInfo_201C7A8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
      if ( !v177 )
        break;
      if ( !v176 )
        sub_B5D69C(v177, v178);
      v179 = DataMasterBase_WarMaster__WarEntity__int___TryGetEntity(
               v176,
               &entity,
               (int32_t)v225.fields._current,
               (const MethodInfo_23FAE6C *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( v179 )
      {
        ++v4->fields._loadCntMax_5__2;
        if ( !entity )
          sub_B5D69C(v179, v180);
        v181 = *p__8__1;
        if ( !*p__8__1 )
          sub_B5D69C(v179, v180);
        age = entity->fields.age;
        monitor = (System_Action_o *)v181[1].monitor;
        if ( !monitor )
        {
          monitor = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(
            monitor,
            v181,
            Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__7__,
            0LL);
          v181[1].monitor = monitor;
          sub_B5D560(&v181[1].monitor);
        }
        if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        }
        SoundManager__downloadAudioAssetStorage(age, monitor, 1, 0LL);
      }
    }
    v221[0] = 575;
    v222 = 1;
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      &v225,
      (const MethodInfo_201C7A4 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    v222 = 0;
    ++v4->fields._loadCntMax_5__2;
    if ( !v218 )
      goto LABEL_48;
    assetStorageLoadWrapper = v218->fields.assetStorageLoadWrapper;
    v185 = *p__8__1;
    v186 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v186,
      v185,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__1__,
      0LL);
    if ( !assetStorageLoadWrapper )
      goto LABEL_48;
    AssetStorageLoadWrapper__LoadAudioAssetStorage(
      assetStorageLoadWrapper,
      (System_String_o *)StringLiteral_2806/*"Battle"*/,
      v186,
      1,
      0LL);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattleRootComponent__GetLoadDropEffectType(
                                                                            v218,
                                                                            (BattleEntity_o *)SingleEntity,
                                                                            0LL);
    if ( !this )
      goto LABEL_48;
    if ( SLODWORD(this->fields.__2__current) >= 1 )
    {
      v219 = &v4->fields.__8__1;
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v220,
        (System_Collections_Generic_List_int__o *)this,
        (const MethodInfo_3085250 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v223 = v220;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                (System_Collections_Generic_List_Enumerator_int__o *)&v223,
                (const MethodInfo_201CA64 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        LODWORD(v220.fields._set) = v223.fields._current;
        v187 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v220);
        v188 = System_String__Format((System_String_o *)StringLiteral_2812/*"Battle/DropEffect/{0}"*/, v187, 0LL);
        _8__1 = (Il2CppObject *)v4->fields.__8__1;
        ++v4->fields._loadCntMax_5__2;
        if ( !_8__1 )
          sub_B5D69C(v188, v189);
        v191 = v218->fields.assetStorageLoadWrapper;
        klass = (AssetLoader_LoadEndDataHandler_o *)_8__1[2].klass;
        v193 = v188;
        if ( !klass )
        {
          klass = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
          AssetLoader_LoadEndDataHandler___ctor(
            klass,
            _8__1,
            Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__8__,
            0LL);
          _8__1[2].klass = (Il2CppClass *)klass;
          sub_B5D560(&_8__1[2]);
        }
        if ( !v191 )
          sub_B5D69C(v188, v189);
        Wrapper__LoadAssetStorage = AssetStorageLoadWrapper__LoadAssetStorage(v191, v193, klass, 1, 0LL);
        if ( !Wrapper__LoadAssetStorage )
        {
          if ( !*v219 )
            sub_B5D69C(Wrapper__LoadAssetStorage, v195);
          ++(*v219)->fields.loadCnt;
        }
      }
      v221[0] = 830;
      v196 = ++v222;
      System_Collections_Generic_List_Enumerator_int___Dispose(
        (System_Collections_Generic_List_Enumerator_int__o *)&v223,
        (const MethodInfo_201CA60 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
      p__8__1 = (Il2CppObject **)&v4->fields.__8__1;
      if ( v196 && v221[v196 - 1] == 830 )
        v222 = v196 - 1;
    }
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)v218->fields.data;
    if ( !this )
      goto LABEL_48;
    if ( BattleData__IsWarBoard((BattleData_o *)this, 0LL) )
    {
      ++v4->fields._loadCntMax_5__2;
      v197 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3);
      if ( (*(_BYTE *)(v197 + 306) & 1) == 0 )
        sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3));
      v198 = **(_QWORD **)(v197 + 192);
      if ( (*(_BYTE *)(v198 + 306) & 1) == 0 )
        sub_AF52C4(v198);
      v199 = *p__8__1;
      v200 = **(AtlasManager_o ***)(v198 + 184);
      v201 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v201,
        v199,
        Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__2__,
        0LL);
      if ( !v200 )
        goto LABEL_48;
      AtlasManager__LoadWarBoardAtlas(v200, v201, 0LL);
    }
    if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !OptionManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    }
    if ( OptionManager__isSavedMemoryMode(0LL) )
    {
      v202 = (Il2CppObject *)v4->fields.__8__1;
      ++v4->fields._loadCntMax_5__2;
      v203 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(
        v203,
        v202,
        Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__3__,
        0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadFaceBattleAtlas(v203, 0LL);
    }
    v204 = (Il2CppObject *)v4->fields.__8__1;
    ++v4->fields._loadCntMax_5__2;
    perf = v218->fields.perf;
    v206 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v206,
      v204,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__4__,
      0LL);
    if ( !perf )
      goto LABEL_48;
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattlePerformance__LoadEventInfoPointGauge(
                                                                            perf,
                                                                            v206,
                                                                            v4->fields.eventId,
                                                                            0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !*p__8__1 )
        goto LABEL_48;
      ++LODWORD((*p__8__1)[1].klass);
    }
    if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AtlasManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    }
    AtlasManager__ReleaseEventAtlas(0LL);
    v207 = (Il2CppObject *)v4->fields.__8__1;
    ++v4->fields._loadCntMax_5__2;
    v208 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v208,
      v207,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__5__,
      0LL);
    AtlasManager__LoadEventAtlas(v208, 1, 0LL);
    v209 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v209 + 306) & 1) == 0 )
      sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3));
    v210 = **(_QWORD **)(v209 + 192);
    if ( (*(_BYTE *)(v210 + 306) & 1) == 0 )
      sub_AF52C4(v210);
    this = **(BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o ***)(v210 + 184);
    if ( !this )
      goto LABEL_48;
    AtlasManager__UnloadBuffIconAtlas((AtlasManager_o *)this, 0LL);
    ++v4->fields._loadCntMax_5__2;
    v211 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3);
    if ( (*(_BYTE *)(v211 + 306) & 1) == 0 )
      sub_AF52C4(*((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 3));
    v212 = **(_QWORD **)(v211 + 192);
    if ( (*(_BYTE *)(v212 + 306) & 1) == 0 )
      sub_AF52C4(v212);
    v213 = *p__8__1;
    v214 = **(AtlasManager_o ***)(v212 + 184);
    v215 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(
      v215,
      v213,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__6__,
      0LL);
    if ( !v214 )
      goto LABEL_48;
    AtlasManager__LoadBuffIconAtlas(v214, v215, 0LL);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    v216 = (AssetManager_o *)this;
    if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BattleDataDefine_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    }
    if ( !v216 )
LABEL_48:
      sub_B5D69C(this, method);
    AssetManager__UpdateLoadParallelMax(v216, BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX, 0LL);
    goto LABEL_120;
  }
  result = 0;
  if ( !_1__state )
  {
    v4->fields.__1__state = -1;
    v155 = (Il2CppObject *)sub_B5D694(BattleRootComponent___c__DisplayClass14_0_TypeInfo);
    System_Object___ctor(v155, 0LL);
    v156 = (Il2CppObject **)&v4->fields.__8__1;
    v4->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass14_0_o *)v155;
    sub_B5D560(&v4->fields.__8__1);
    v157 = v4->fields.__8__1;
    if ( v157 )
    {
      v157->fields.loadCnt = 0;
      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)v4->fields.ent;
      v4->fields._loadCntMax_5__2 = 0;
      if ( this )
      {
        BattleEffectId = QuestPhaseEntity__getBattleEffectId((QuestPhaseEntity_o *)this, 0, 0LL);
        if ( (BYTE3(BattleEffectUtility_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
        }
        v226 = BattleEffectUtility__setBattleEffectId(BattleEffectId, 0LL);
        v159 = System_Int32__ToString((int32_t)&v226, 0LL);
        this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)System_String__Concat_44577788(
                                                                                (System_String_o *)StringLiteral_2813/*"Battle/Effect/"*/,
                                                                                v159,
                                                                                0LL);
        ++v4->fields._loadCntMax_5__2;
        if ( _4__this )
        {
          v160 = _4__this->fields.assetStorageLoadWrapper;
          v161 = *v156;
          v162 = (System_String_o *)this;
          v163 = (AssetLoader_LoadEndDataHandler_o *)sub_B5D694(AssetLoader_LoadEndDataHandler_TypeInfo);
          AssetLoader_LoadEndDataHandler___ctor(
            v163,
            v161,
            Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__0__,
            0LL);
          if ( v160 )
          {
            this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)AssetStorageLoadWrapper__LoadAssetStorage(
                                                                                    v160,
                                                                                    v162,
                                                                                    v163,
                                                                                    1,
                                                                                    0LL);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !*v156 )
                goto LABEL_48;
              ++LODWORD((*v156)[1].klass);
            }
            if ( (BYTE3(DataManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !DataManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
            }
            Master_WarQuestSelectionMaster = (ConstantMaster_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_ConstantMaster___);
            this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)DataManager__GetMaster_WarQuestSelectionMaster_((const MethodInfo_1AE41EC *)Method_DataManager_GetMaster_BuffMaster___);
            if ( this )
            {
              v165 = *(System_Collections_Generic_IEnumerable_T__o **)&this->fields._loadCntMax_5__2;
              v166 = (System_Collections_Generic_List_int__o *)sub_B5D694(System_Collections_Generic_List_int__TypeInfo);
              System_Collections_Generic_List_int____ctor_50870440(
                v166,
                v165,
                (const MethodInfo_30838A8 *)Method_System_Collections_Generic_List_int___ctor__);
              if ( Master_WarQuestSelectionMaster )
              {
                this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ConstantMaster__GetValue(
                                                                                        Master_WarQuestSelectionMaster,
                                                                                        (System_String_o *)StringLiteral_2481/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE"*/,
                                                                                        0LL);
                if ( v166 )
                {
                  System_Collections_Generic_List_int___Add(
                    v166,
                    (int32_t)this,
                    (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
                  Value = ConstantMaster__GetValue(
                            Master_WarQuestSelectionMaster,
                            (System_String_o *)StringLiteral_2476/*"BATTLE_EFFECT_ID_3003001"*/,
                            0LL);
                  System_Collections_Generic_List_int___Add(
                    v166,
                    Value,
                    (const MethodInfo_308440C *)Method_System_Collections_Generic_List_int__Add__);
                  ClassBoardCommandSpellEffectId = (System_Collections_Generic_IEnumerable_T__o *)BattleRootComponent__GetClassBoardCommandSpellEffectId(
                                                                                                    _4__this,
                                                                                                    0LL);
                  System_Collections_Generic_List_int___AddRange(
                    v166,
                    ClassBoardCommandSpellEffectId,
                    (const MethodInfo_3084660 *)Method_System_Collections_Generic_List_int__AddRange__);
                  v169 = System_Collections_Generic_List_int___ToArray(
                           v166,
                           (const MethodInfo_3086518 *)Method_System_Collections_Generic_List_int__ToArray__);
                  if ( (BYTE3(ServantAssetLoadManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                    && !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                  {
                    j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
                  }
                  this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ServantAssetLoadManager__preloadBattleCommonEffect(
                                                                                          v169,
                                                                                          0LL);
                  if ( _4__this->fields.data )
                  {
                    BattleData__addLoadedCommonEffectPath(_4__this->fields.data, (System_String_array *)this, 0LL);
                    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
                    v170 = (AssetManager_o *)this;
                    if ( (BYTE3(BattleDataDefine_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                      && !BattleDataDefine_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
                    }
                    if ( v170 )
                    {
                      AssetManager__UpdateLoadParallelMax(
                        v170,
                        BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX,
                        0LL);
                      v4->fields.__2__current = 0LL;
                      v171 = &v4->fields.__2__current;
                      sub_B5D560(v171);
                      result = 1;
                      *((_DWORD *)v171 - 2) = 1;
                      return result;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LABEL_48;
  }
  return result;
}


Il2CppObject *__fastcall BattleRootComponent__LoadAssetsIndependentToMainOne_d__14__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleRootComponent__LoadAssetsIndependentToMainOne_d__14__System_Collections_IEnumerator_Reset(
        BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall BattleRootComponent__LoadAssetsIndependentToMainOne_d__14__System_Collections_IEnumerator_get_Current(
        BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleRootComponent__LoadAssetsIndependentToMainOne_d__14__System_IDisposable_Dispose(
        BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleRootComponent___c__DisplayClass13_0___ctor(
        BattleRootComponent___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRootComponent___c__DisplayClass13_0___LoadAsset_b__0(
        BattleRootComponent___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  this->fields.isAssetsLoading = 0;
}


void __fastcall BattleRootComponent___c__DisplayClass13_0___LoadAsset_b__1(
        BattleRootComponent___c__DisplayClass13_0_o *this,
        AssetData_o *common,
        const MethodInfo *method)
{
  this->fields.commonData = common;
  sub_B5D560(&this->fields.commonData);
}


void __fastcall BattleRootComponent___c__DisplayClass13_0___LoadAsset_b__2(
        BattleRootComponent___c__DisplayClass13_0_o *this,
        AssetData_o *motionData,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct System_Collections_Generic_List_AssetData__o *motionDataList; // x0

  if ( (byte_42E60BC & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_AssetData__Add__, (_DWORD)motionData, (_DWORD)method, v3);
    byte_42E60BC = 1;
  }
  motionDataList = this->fields.motionDataList;
  if ( !motionDataList )
    sub_B5D69C(0LL, motionData);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
    (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)motionDataList,
    (EventMissionProgressRequest_Argument_ProgressData_o *)motionData,
    (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_AssetData__Add__);
  ++this->fields.loadCompCnt;
}


void __fastcall BattleRootComponent___c__DisplayClass13_1___ctor(
        BattleRootComponent___c__DisplayClass13_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRootComponent___c__DisplayClass13_1___LoadAsset_b__3(
        BattleRootComponent___c__DisplayClass13_1_o *this,
        AssetData_o *cameraData,
        const MethodInfo *method)
{
  this->fields.uniqueCameraData = cameraData;
  sub_B5D560(&this->fields);
}


void __fastcall BattleRootComponent___c__DisplayClass14_0___ctor(
        BattleRootComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRootComponent___c__DisplayClass14_0___LoadAssetsIndependentToMainOne_b__0(
        BattleRootComponent___c__DisplayClass14_0_o *this,
        AssetData_o *effectData,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void __fastcall BattleRootComponent___c__DisplayClass14_0___LoadAssetsIndependentToMainOne_b__1(
        BattleRootComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void __fastcall BattleRootComponent___c__DisplayClass14_0___LoadAssetsIndependentToMainOne_b__2(
        BattleRootComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void __fastcall BattleRootComponent___c__DisplayClass14_0___LoadAssetsIndependentToMainOne_b__3(
        BattleRootComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void __fastcall BattleRootComponent___c__DisplayClass14_0___LoadAssetsIndependentToMainOne_b__4(
        BattleRootComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void __fastcall BattleRootComponent___c__DisplayClass14_0___LoadAssetsIndependentToMainOne_b__5(
        BattleRootComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void __fastcall BattleRootComponent___c__DisplayClass14_0___LoadAssetsIndependentToMainOne_b__6(
        BattleRootComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void __fastcall BattleRootComponent___c__DisplayClass14_0___LoadAssetsIndependentToMainOne_b__7(
        BattleRootComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void __fastcall BattleRootComponent___c__DisplayClass14_0___LoadAssetsIndependentToMainOne_b__8(
        BattleRootComponent___c__DisplayClass14_0_o *this,
        AssetData_o *_,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void __fastcall BattleRootComponent___c__DisplayClass17_0___ctor(
        BattleRootComponent___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRootComponent___c__DisplayClass17_0___LoadBatteBgm_b__0(
        BattleRootComponent___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_List_XWeaponTrail_Element__o *bgmList; // x0

  if ( (byte_42E60BD & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__RemoveAt__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_string__get_Count__, v5, v6, v7);
    byte_42E60BD = 1;
  }
  bgmList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.bgmList;
  if ( !bgmList
    || (System_Collections_Generic_List_XWeaponTrail_Element___RemoveAt(
          bgmList,
          bgmList->fields._size - 1,
          (const MethodInfo_3058CB0 *)Method_System_Collections_Generic_List_string__RemoveAt__),
        (bgmList = (System_Collections_Generic_List_XWeaponTrail_Element__o *)this->fields.__4__this) == 0LL) )
  {
    sub_B5D69C(bgmList, method);
  }
  BattleRootComponent__LoadBatteBgm((BattleRootComponent_o *)bgmList, this->fields.bgmList, this->fields.callback, 0LL);
}


void __fastcall BattleRootComponent___c__DisplayClass20_0___ctor(
        BattleRootComponent___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRootComponent___c__DisplayClass20_0___loadOutGameAsset_b__0(
        BattleRootComponent___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  this->fields.isCharaGraphOptionAtlasLoaded = 1;
}


void __fastcall BattleRootComponent___c__DisplayClass20_0___loadOutGameAsset_b__1(
        BattleRootComponent___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  this->fields.isBannerAtlasLoaded = 1;
}


void __fastcall BattleRootComponent___c__DisplayClass20_0___loadOutGameAsset_b__2(
        BattleRootComponent___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  this->fields.isEventUIAtlasLoaded = 1;
}


void __fastcall BattleRootComponent___c__DisplayClass20_1___ctor(
        BattleRootComponent___c__DisplayClass20_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRootComponent___c__DisplayClass20_1___loadOutGameAsset_b__3(
        BattleRootComponent___c__DisplayClass20_1_o *this,
        const MethodInfo *method)
{
  this->fields.isEventAtlasLoaded = 1;
}


void __fastcall BattleRootComponent___c__DisplayClass20_2___ctor(
        BattleRootComponent___c__DisplayClass20_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRootComponent___c__DisplayClass20_2___loadOutGameAsset_b__4(
        BattleRootComponent___c__DisplayClass20_2_o *this,
        const MethodInfo *method)
{
  this->fields.isFaceAtlasLoaded = 1;
}


void __fastcall BattleRootComponent___c__DisplayClass23_0___ctor(
        BattleRootComponent___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRootComponent___c__DisplayClass23_0___TransitionTerminalOrBattleScript_b__0(
        BattleRootComponent___c__DisplayClass23_0_o *this,
        System_String_o *demo1,
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
  struct System_Action_string__o *_9__2; // x22
  int32_t questId; // w20
  int32_t questPhase; // w21
  AvalonSceneManager_o *Instance; // x0
  __int64 v22; // x1
  struct BattleRootComponent_o *_4__this; // x8

  if ( (byte_42E60BF & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Action_string___ctor__, (_DWORD)demo1, (_DWORD)method, v3);
    sub_B5D5C4(&System_Action_string__TypeInfo, v6, v7, v8);
    sub_B5D5C4(&ScriptManager_TypeInfo, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v12, v13, v14);
    sub_B5D5C4(
      &Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__2__,
      v15,
      v16,
      v17);
    byte_42E60BF = 1;
  }
  if ( System_String__IsNullOrEmpty(demo1, 0LL) )
  {
    _9__2 = this->fields.__9__2;
    questId = this->fields.questId;
    questPhase = this->fields.questPhase;
    if ( !_9__2 )
    {
      _9__2 = (struct System_Action_string__o *)sub_B5D694(System_Action_string__TypeInfo);
      System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData____ctor(
        (System_Action_DrawLotsDisplayMessage_DisplayedInGroup_SaveData__o *)_9__2,
        (Il2CppObject *)this,
        Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__2__,
        (const MethodInfo_258B320 *)Method_System_Action_string___ctor__);
      this->fields.__9__2 = _9__2;
      sub_B5D560(&this->fields.__9__2);
    }
    if ( (BYTE3(ScriptManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ScriptManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    }
    ScriptManager__LoadBattleEndGameDemo(questId, questPhase, 0, _9__2, 0, 0LL);
  }
  else
  {
    Instance = (AvalonSceneManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    _4__this = this->fields.__4__this;
    if ( !_4__this || !Instance )
      sub_B5D69C(Instance, v22);
    AvalonSceneManager__transitionSceneRefresh(
      Instance,
      _4__this->fields.nextscenetype,
      1,
      (Il2CppObject *)this->fields.info,
      0,
      0LL);
  }
}


void __fastcall BattleRootComponent___c__DisplayClass23_0___TransitionTerminalOrBattleScript_b__1(
        BattleRootComponent___c__DisplayClass23_0_o *this,
        bool isDeside,
        const MethodInfo *method)
{
  __int64 v3; // x3
  CommonUI_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42E60BE & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDeside, (_DWORD)method, v3);
    byte_42E60BE = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0LL), (Instance = (CommonUI_o *)this->fields.__4__this) == 0LL) )
  {
    sub_B5D69C(Instance, v6);
  }
  BattleRootComponent__TerminalTransition((BattleRootComponent_o *)Instance, this->fields.info, 0LL);
}


void __fastcall BattleRootComponent___c__DisplayClass23_0___TransitionTerminalOrBattleScript_b__2(
        BattleRootComponent___c__DisplayClass23_0_o *this,
        System_String_o *demo2,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  BattleRootComponent_o *_4__this; // x0
  struct BattleRootComponent_o *v8; // x8

  if ( (byte_42E60C0 & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, (_DWORD)demo2, (_DWORD)method, v3);
    byte_42E60C0 = 1;
  }
  if ( System_String__IsNullOrEmpty(demo2, 0LL) )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      BattleRootComponent__TerminalTransition(_4__this, this->fields.info, 0LL);
      return;
    }
LABEL_9:
    sub_B5D69C(_4__this, v6);
  }
  _4__this = (BattleRootComponent_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  v8 = this->fields.__4__this;
  if ( !v8 || !_4__this )
    goto LABEL_9;
  AvalonSceneManager__transitionSceneRefresh(
    (AvalonSceneManager_o *)_4__this,
    v8->fields.nextscenetype,
    1,
    (Il2CppObject *)this->fields.info,
    0,
    0LL);
}


void __fastcall BattleRootComponent__loadOutGameAsset_d__20___ctor(
        BattleRootComponent__loadOutGameAsset_d__20_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall BattleRootComponent__loadOutGameAsset_d__20__MoveNext(
        BattleRootComponent__loadOutGameAsset_d__20_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  BattleRootComponent__loadOutGameAsset_d__20_o *v4; // x19
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
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  int v44; // w1
  int v45; // w2
  __int64 v46; // x3
  struct BattleRootComponent_o *_4__this; // x21
  Il2CppObject *v48; // x20
  UnityEngine_WaitForEndOfFrame_o *v49; // x20
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  Il2CppObject **p__8__2; // x20
  Il2CppObject **v53; // x19
  int v54; // w8
  Il2CppObject *v55; // x21
  Il2CppObject **p__8__1; // x20
  Il2CppObject *v57; // x22
  System_Action_o *v58; // x21
  Il2CppObject *v59; // x21
  Il2CppObject *v60; // x22
  System_Action_o *v61; // x21
  UnityEngine_WaitForEndOfFrame_o *v62; // x20
  Il2CppObject **p__8__3; // x22
  struct BattleRootComponent___c__DisplayClass20_0_o *_8__3; // x8
  Il2CppObject *v65; // x21
  System_Action_o *v66; // x20
  UnityEngine_WaitForEndOfFrame_o *v67; // x20
  Il2CppObject *v68; // x21
  System_Action_o *v69; // x20
  UnityEngine_WaitForEndOfFrame_o *v70; // x20
  Il2CppObject *v71; // x21
  System_Action_o *v72; // x20
  UnityEngine_WaitForEndOfFrame_o *v73; // x20
  int v74; // [xsp+Ch] [xbp-24h] BYREF

  v4 = this;
  if ( (byte_42E60C3 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AtlasManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&System_GC_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&int_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&OptionManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__0__, v20, v21, v22);
    sub_B5D5C4(&Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__1__, v23, v24, v25);
    sub_B5D5C4(&Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__2__, v26, v27, v28);
    sub_B5D5C4(&BattleRootComponent___c__DisplayClass20_0_TypeInfo, v29, v30, v31);
    sub_B5D5C4(&Method_BattleRootComponent___c__DisplayClass20_1__loadOutGameAsset_b__3__, v32, v33, v34);
    sub_B5D5C4(&BattleRootComponent___c__DisplayClass20_1_TypeInfo, v35, v36, v37);
    sub_B5D5C4(&Method_BattleRootComponent___c__DisplayClass20_2__loadOutGameAsset_b__4__, v38, v39, v40);
    sub_B5D5C4(&BattleRootComponent___c__DisplayClass20_2_TypeInfo, v41, v42, v43);
    this = (BattleRootComponent__loadOutGameAsset_d__20_o *)sub_B5D5C4(
                                                              &UnityEngine_WaitForEndOfFrame_TypeInfo,
                                                              v44,
                                                              v45,
                                                              v46);
    byte_42E60C3 = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v48 = (Il2CppObject *)sub_B5D694(BattleRootComponent___c__DisplayClass20_0_TypeInfo);
      System_Object___ctor(v48, 0LL);
      v4->fields.__8__3 = (struct BattleRootComponent___c__DisplayClass20_0_o *)v48;
      sub_B5D560(&v4->fields.__8__3);
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_18;
      if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect_43893280(0LL);
      v49 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v49, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v49;
      p__2__current = &v4->fields.__2__current;
      sub_B5D560(p__2__current);
      result = 1;
      *((_DWORD *)p__2__current - 2) = 1;
      return result;
    case 1:
      v4->fields.__1__state = -1;
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_106;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_106;
      v4->fields.__2__current = (Il2CppObject *)AssetManager__WaitForExecutionUnloadUnuseAssets(
                                                  (AssetManager_o *)this,
                                                  0LL);
      v53 = &v4->fields.__2__current;
      sub_B5D560(v53);
      v54 = 2;
      goto LABEL_104;
    case 2:
      v4->fields.__1__state = -1;
LABEL_18:
      if ( !_4__this )
        goto LABEL_106;
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_106;
      if ( BattlePerformance__isActiveEventInfoGauge((BattlePerformance_o *)this, 0LL) )
        goto LABEL_30;
      v55 = (Il2CppObject *)sub_B5D694(BattleRootComponent___c__DisplayClass20_1_TypeInfo);
      System_Object___ctor(v55, 0LL);
      v4->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass20_1_o *)v55;
      p__8__1 = (Il2CppObject **)&v4->fields.__8__1;
      sub_B5D560(&v4->fields.__8__1);
      if ( !v4->fields.__8__1 )
        goto LABEL_106;
      v4->fields.__8__1->fields.isEventAtlasLoaded = 0;
      v57 = *p__8__1;
      v58 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v58, v57, Method_BattleRootComponent___c__DisplayClass20_1__loadOutGameAsset_b__3__, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadEventAtlas(v58, 1, 0LL);
LABEL_27:
      if ( !*p__8__1 )
        goto LABEL_106;
      if ( !LOBYTE((*p__8__1)[1].klass) )
      {
        v74 = 0;
        v4->fields.__2__current = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v74);
        v53 = &v4->fields.__2__current;
        sub_B5D560(v53);
        v54 = 3;
        goto LABEL_104;
      }
      *p__8__1 = 0LL;
      sub_B5D560(p__8__1);
LABEL_30:
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v59 = (Il2CppObject *)sub_B5D694(BattleRootComponent___c__DisplayClass20_2_TypeInfo);
        System_Object___ctor(v59, 0LL);
        v4->fields.__8__2 = (struct BattleRootComponent___c__DisplayClass20_2_o *)v59;
        p__8__2 = (Il2CppObject **)&v4->fields.__8__2;
        sub_B5D560(&v4->fields.__8__2);
        if ( v4->fields.__8__2 )
        {
          v4->fields.__8__2->fields.isFaceAtlasLoaded = 0;
          v60 = *p__8__2;
          v61 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
          System_Action___ctor(v61, v60, Method_BattleRootComponent___c__DisplayClass20_2__loadOutGameAsset_b__4__, 0LL);
          if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AtlasManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          }
          AtlasManager__LoadFaceAtlas(v61, 1, 0LL);
LABEL_39:
          if ( *p__8__2 )
          {
            if ( LOBYTE((*p__8__2)[1].klass) )
            {
              if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
                && !System_GC_TypeInfo->_2.cctor_finished )
              {
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              }
              System_GC__Collect_43893280(0LL);
              v62 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v62, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v62;
              v53 = &v4->fields.__2__current;
              sub_B5D560(v53);
              v54 = 5;
            }
            else
            {
              v74 = 0;
              v4->fields.__2__current = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v74);
              v53 = &v4->fields.__2__current;
              sub_B5D560(v53);
              v54 = 4;
            }
            goto LABEL_104;
          }
        }
LABEL_106:
        sub_B5D69C(this, method);
      }
LABEL_48:
      p__8__3 = (Il2CppObject **)&v4->fields.__8__3;
      _8__3 = v4->fields.__8__3;
      if ( !_8__3 )
        goto LABEL_106;
      _8__3->fields.isCharaGraphOptionAtlasLoaded = 0;
      v65 = *p__8__3;
      v66 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v66, v65, Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__0__, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadCharaGraphOptionAtlas(v66, 1, 0LL);
LABEL_54:
      if ( !*p__8__3 )
        goto LABEL_106;
      if ( !LOBYTE((*p__8__3)[1].klass) )
      {
        v74 = 0;
        v4->fields.__2__current = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v74);
        v53 = &v4->fields.__2__current;
        sub_B5D560(v53);
        v54 = 6;
LABEL_104:
        *((_DWORD *)v53 - 2) = v54;
        return 1;
      }
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect_43893280(0LL);
        v67 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v67, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v67;
        v53 = &v4->fields.__2__current;
        sub_B5D560(v53);
        v54 = 7;
        goto LABEL_104;
      }
LABEL_64:
      if ( !*p__8__3 )
        goto LABEL_106;
      BYTE1((*p__8__3)[1].klass) = 0;
      v68 = *p__8__3;
      v69 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v69, v68, Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__1__, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadBanner(v69, 1, 0LL);
LABEL_71:
      if ( !*p__8__3 )
        goto LABEL_106;
      if ( !BYTE1((*p__8__3)[1].klass) )
      {
        v74 = 0;
        v4->fields.__2__current = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v74);
        v53 = &v4->fields.__2__current;
        sub_B5D560(v53);
        v54 = 8;
        goto LABEL_104;
      }
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect_43893280(0LL);
        v70 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v70, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v70;
        v53 = &v4->fields.__2__current;
        sub_B5D560(v53);
        v54 = 9;
        goto LABEL_104;
      }
LABEL_81:
      if ( !*p__8__3 )
        goto LABEL_106;
      BYTE2((*p__8__3)[1].klass) = 0;
      v71 = *p__8__3;
      v72 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
      System_Action___ctor(v72, v71, Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__2__, 0LL);
      if ( (BYTE3(AtlasManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AtlasManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      }
      AtlasManager__LoadEventUI(v72, 1, 0LL);
LABEL_88:
      if ( !*p__8__3 )
        goto LABEL_106;
      if ( !BYTE2((*p__8__3)[1].klass) )
      {
        v74 = 0;
        v4->fields.__2__current = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v74);
        v53 = &v4->fields.__2__current;
        sub_B5D560(v53);
        v54 = 10;
        goto LABEL_104;
      }
      if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !OptionManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      }
      if ( OptionManager__isSavedMemoryMode(0LL) )
      {
        if ( (BYTE3(System_GC_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect_43893280(0LL);
        v73 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v73, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v73;
        v53 = &v4->fields.__2__current;
        sub_B5D560(v53);
        v54 = 11;
        goto LABEL_104;
      }
LABEL_98:
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)v4->fields.callback;
      if ( !this )
        goto LABEL_106;
      System_Action__Invoke((System_Action_o *)this, 0LL);
      return 0;
    case 3:
      p__8__1 = (Il2CppObject **)&v4->fields.__8__1;
      v4->fields.__1__state = -1;
      goto LABEL_27;
    case 4:
      p__8__2 = (Il2CppObject **)&v4->fields.__8__2;
      v4->fields.__1__state = -1;
      goto LABEL_39;
    case 5:
      v4->fields.__8__2 = 0LL;
      v4->fields.__1__state = -1;
      sub_B5D560(&v4->fields.__8__2);
      goto LABEL_48;
    case 6:
      p__8__3 = (Il2CppObject **)&v4->fields.__8__3;
      v4->fields.__1__state = -1;
      goto LABEL_54;
    case 7:
      p__8__3 = (Il2CppObject **)&v4->fields.__8__3;
      v4->fields.__1__state = -1;
      goto LABEL_64;
    case 8:
      p__8__3 = (Il2CppObject **)&v4->fields.__8__3;
      v4->fields.__1__state = -1;
      goto LABEL_71;
    case 9:
      p__8__3 = (Il2CppObject **)&v4->fields.__8__3;
      v4->fields.__1__state = -1;
      goto LABEL_81;
    case 0xA:
      p__8__3 = (Il2CppObject **)&v4->fields.__8__3;
      v4->fields.__1__state = -1;
      goto LABEL_88;
    case 0xB:
      v4->fields.__1__state = -1;
      goto LABEL_98;
    default:
      return 0;
  }
}


Il2CppObject *__fastcall BattleRootComponent__loadOutGameAsset_d__20__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleRootComponent__loadOutGameAsset_d__20_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleRootComponent__loadOutGameAsset_d__20__System_Collections_IEnumerator_Reset(
        BattleRootComponent__loadOutGameAsset_d__20_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_BattleRootComponent__loadOutGameAsset_d__20_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
}


Il2CppObject *__fastcall BattleRootComponent__loadOutGameAsset_d__20__System_Collections_IEnumerator_get_Current(
        BattleRootComponent__loadOutGameAsset_d__20_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall BattleRootComponent__loadOutGameAsset_d__20__System_IDisposable_Dispose(
        BattleRootComponent__loadOutGameAsset_d__20_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleRootComponent_callBackBeginResume___ctor(
        BattleRootComponent_callBackBeginResume_o *this,
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


System_IAsyncResult_o *__fastcall BattleRootComponent_callBackBeginResume__BeginInvoke(
        BattleRootComponent_callBackBeginResume_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_B5D568(this, &v5, callback, object);
}


void __fastcall BattleRootComponent_callBackBeginResume__EndInvoke(
        BattleRootComponent_callBackBeginResume_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


void __fastcall BattleRootComponent_callBackBeginResume__Invoke(
        BattleRootComponent_callBackBeginResume_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x8
  __int64 v5; // x23
  BattleRootComponent_callBackBeginResume_o **v6; // x24
  __int64 v7; // x25
  unsigned int v8; // w22
  __int64 class_0; // x0
  __int64 v10; // x3
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD); // x0
  BattleRootComponent_callBackBeginResume_o *v18; // x8
  __int64 *v19; // x20
  __int64 v20; // x21
  void (__fastcall *v21)(__int64); // x22
  char v22; // w22
  char v23; // w0
  __int64 v24; // x3
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  BattleRootComponent_callBackBeginResume_o *v30; // [xsp+8h] [xbp-38h] BYREF

  v30 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v30;
    v5 = 1LL;
    goto LABEL_5;
  }
  v5 = *(_QWORD *)(v3 + 24);
  if ( v5 )
  {
    v6 = (BattleRootComponent_callBackBeginResume_o **)(v3 + 32);
LABEL_5:
    v7 = 0LL;
    while ( 1 )
    {
      v18 = v6[v7];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(__int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v18->fields.extra_arg, method, v2);
      if ( (sub_B5D5F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) )
        goto LABEL_35;
      v21(v20);
LABEL_36:
      if ( ++v7 == v5 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B5D5EC(v20);
      v23 = sub_B5D9F0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v25 = *v19;
          v26 = *(_QWORD *)(v20 + 24);
          v27 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_34;
            }
            v16 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_34:
            v16 = sub_AF54C0(v19, v26, v27, v24);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD))sub_B5D674(v15, v20);
        (*v17)(v19, v17);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v8) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AF54C0(v19, class_0, v8, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD))v14)(v19, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, __int64))v21)(v19, v20);
    goto LABEL_36;
  }
}