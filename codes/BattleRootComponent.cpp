void BattleRootComponent___ctor(BattleRootComponent_o *this, const MethodInfo *method)
{
  SceneRootComponent___ctor((SceneRootComponent_o *)this, 0);
}


System_Int32_array *BattleRootComponent__GetAllFieldMotionIds(
        BattleRootComponent_o *this,
        BattleEntity_o *battleEnt,
        QuestPhaseEntity_o *questPhaseEnt,
        System_Int32_array **baseMotionIds,
        const MethodInfo *method)
{
  System_Int32_array *BaseBattleFieldMotionIds; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_IEnumerable_T__o *v11; // x21
  System_Collections_Generic_List_int__o *v12; // x20
  System_Collections_Generic_IEnumerable_TSource__o *AllExistsScriptEnemyDeckSvtArray; // x0
  BattleRootComponent_c *klass; // x8
  BattleRootComponent_o *v15; // x21
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 v18; // x0
  __int64 v19; // x21
  __int64 v20; // x8
  __int64 v21; // x9
  int *v22; // x10
  __int64 v23; // x0
  __int64 v24; // x8
  __int64 v25; // x9
  int *v26; // x10
  __int64 v27; // x0
  BattleDeckServantData_o *v28; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x22
  System_Collections_Generic_IEnumerable_TSource__c *v31; // x8
  __int64 v32; // x9
  int32_t *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x22
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  __int64 v44; // x0
  int32_t v45; // w23
  _BOOL8 v46; // x0
  struct System_Int32_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  __int64 v50; // x8
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0
  __int64 v54; // x8
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0
  int32_t v58; // w21
  StageEntity_o *StageEntityAtWave; // x0
  long double inited; // q0
  System_Collections_Generic_IEnumerable_TSource__o *WaveFieldMotionIds; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v62; // x23
  _QWORD *v63; // x23
  __int64 v64; // x8
  __int64 v65; // x0
  System_Collections_Generic_IEnumerable_TSource__c *v66; // x8
  __int64 v67; // x9
  int32_t *v68; // x10
  __int64 v69; // x0
  __int64 v70; // x23
  __int64 v71; // x8
  __int64 v72; // x9
  int *v73; // x10
  __int64 v74; // x0
  __int64 v75; // x8
  __int64 v76; // x9
  int *v77; // x10
  __int64 v78; // x0
  __int64 v79; // x0
  int32_t v80; // w24
  _BOOL8 v81; // x0
  struct System_Int32_array *v82; // x8
  _QWORD *v83; // x9
  __int64 v84; // x10
  __int64 v85; // x8
  __int64 v86; // x9
  int *v87; // x10
  __int64 v88; // x0
  BattleEntity_o *v91; // [xsp+10h] [xbp-70h]
  System_Int32_array *fieldMotionIds; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C45B1F & 1) == 0 )
  {
    sub_1C37058(&Method_System_Array_Empty_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Reverse_BattleDeckServantData___);
    sub_1C37058(&Method_System_Linq_Enumerable_Reverse_int___);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor___78055976);
    this = (BattleRootComponent_o *)sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C45B1F = 1;
  }
  fieldMotionIds = 0;
  if ( !battleEnt )
    goto LABEL_128;
  this = (BattleRootComponent_o *)battleEnt->fields.battleInfo;
  if ( !this )
    goto LABEL_128;
  BaseBattleFieldMotionIds = BattleInfoData__GetBaseBattleFieldMotionIds((BattleInfoData_o *)this, questPhaseEnt, 0);
  *baseMotionIds = BaseBattleFieldMotionIds;
  sub_1C36FFC((CGThumbnailListItem_o *)baseMotionIds, (int32_t)BaseBattleFieldMotionIds, v9, v10);
  v11 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Reverse_int_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)*baseMotionIds,
                                                         (const MethodInfo_3118440 *)Method_System_Linq_Enumerable_Reverse_int___);
  v12 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_58218708(
    v12,
    v11,
    (const MethodInfo_37858D4 *)Method_System_Collections_Generic_List_int___ctor___78055976);
  this = (BattleRootComponent_o *)battleEnt->fields.battleInfo;
  if ( !this )
    goto LABEL_128;
  AllExistsScriptEnemyDeckSvtArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleInfoData__get_AllExistsScriptEnemyDeckSvtArray(
                                                                                            (BattleInfoData_o *)this,
                                                                                            0);
  this = (BattleRootComponent_o *)System_Linq_Enumerable__Reverse_object_(
                                    AllExistsScriptEnemyDeckSvtArray,
                                    (const MethodInfo_3118498 *)Method_System_Linq_Enumerable_Reverse_BattleDeckServantData___);
  if ( !this )
    goto LABEL_128;
  klass = this->klass;
  v15 = this;
  v16 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleDeckServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo )
    {
      --v16;
      p_offset += 4;
      if ( !v16 )
        goto LABEL_11;
    }
    v18 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_11:
    v18 = sub_1C87870(this, System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, 0);
  }
  v91 = battleEnt;
  v19 = (*(__int64 (__fastcall **)(BattleRootComponent_o *, _QWORD))v18)(v15, *(_QWORD *)(v18 + 8));
  if ( !v19 )
    sub_1C372B4(0);
  while ( 1 )
  {
    v20 = *(_QWORD *)v19;
    v21 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v22 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v22 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v21;
        v22 += 4;
        if ( !v21 )
          goto LABEL_18;
      }
      v23 = v20 + 16LL * *v22 + 312;
    }
    else
    {
LABEL_18:
      v23 = sub_1C87870(v19, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v23)(v19, *(_QWORD *)(v23 + 8)) & 1) == 0 )
      break;
    v24 = *(_QWORD *)v19;
    v25 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
    {
      v26 = (int *)(*(_QWORD *)(v24 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleDeckServantData__c **)v26 - 1) != System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo )
      {
        --v25;
        v26 += 4;
        if ( !v25 )
          goto LABEL_25;
      }
      v27 = v24 + 16LL * *v26 + 312;
    }
    else
    {
LABEL_25:
      v27 = sub_1C87870(v19, System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo, 0);
    }
    v28 = (BattleDeckServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v27)(v19, *(_QWORD *)(v27 + 8));
    if ( !v28 )
      sub_1C372B4(0);
    if ( BattleDeckServantData__TryGetAddFieldMotionIds(v28, &fieldMotionIds, 0) )
    {
      v29 = System_Linq_Enumerable__Reverse_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)fieldMotionIds,
              (const MethodInfo_3118440 *)Method_System_Linq_Enumerable_Reverse_int___);
      v30 = v29;
      if ( !v29 )
        sub_1C372B4(0);
      v31 = v29->klass;
      v32 = *(unsigned __int16 *)&v29->klass->_2.rank;
      if ( *(_WORD *)&v29->klass->_2.rank )
      {
        v33 = &v31->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_int__c **)v33 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
        {
          --v32;
          v33 += 4;
          if ( !v32 )
            goto LABEL_34;
        }
        v34 = (__int64)&v31->vtable[*v33];
      }
      else
      {
LABEL_34:
        v34 = sub_1C87870(v29, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
      }
      v35 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v34)(
              v30,
              *(_QWORD *)(v34 + 8));
      if ( !v35 )
        sub_1C372B4(0);
      while ( 1 )
      {
        v36 = *(_QWORD *)v35;
        v37 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
        {
          v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v38 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v37;
            v38 += 4;
            if ( !v37 )
              goto LABEL_41;
          }
          v39 = v36 + 16LL * *v38 + 312;
        }
        else
        {
LABEL_41:
          v39 = sub_1C87870(v35, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v35, *(_QWORD *)(v39 + 8)) & 1) == 0 )
          break;
        v40 = *(_QWORD *)v35;
        v41 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
        {
          v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_int__c **)v42 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
          {
            --v41;
            v42 += 4;
            if ( !v41 )
              goto LABEL_48;
          }
          v43 = v40 + 16LL * *v42 + 312;
        }
        else
        {
LABEL_48:
          v43 = sub_1C87870(v35, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
        }
        v44 = (*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v35, *(_QWORD *)(v43 + 8));
        if ( !v12 )
          sub_1C372B4(v44);
        v45 = v44;
        v46 = System_Collections_Generic_List_int___Contains(
                v12,
                v44,
                (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !v46 )
        {
          items = v12->fields._items;
          v48 = Method_System_Collections_Generic_List_int__Add__;
          ++v12->fields._version;
          if ( !items )
            sub_1C372B4(v46);
          size = v12->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v12,
              v45,
              *(const MethodInfo_3786000 **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
          }
          else
          {
            v12->fields._size = size + 1;
            items->m_Items[size] = v45;
          }
        }
      }
      v50 = *(_QWORD *)v35;
      v51 = *(unsigned __int16 *)(*(_QWORD *)v35 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v35 + 302LL) )
      {
        v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
        {
          --v51;
          v52 += 4;
          if ( !v51 )
            goto LABEL_60;
        }
        v53 = v50 + 16LL * *v52 + 312;
      }
      else
      {
LABEL_60:
        v53 = sub_1C87870(v35, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v53)(v35, *(_QWORD *)(v53 + 8));
    }
  }
  v54 = *(_QWORD *)v19;
  v55 = *(unsigned __int16 *)(*(_QWORD *)v19 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v19 + 302LL) )
  {
    v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
    {
      --v55;
      v56 += 4;
      if ( !v55 )
        goto LABEL_70;
    }
    v57 = v54 + 16LL * *v56 + 312;
  }
  else
  {
LABEL_70:
    v57 = sub_1C87870(v19, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v57)(v19, *(_QWORD *)(v57 + 8));
  this = (BattleRootComponent_o *)v91->fields.battleInfo;
  if ( !this )
LABEL_128:
    sub_1C372B4(this);
  this = (BattleRootComponent_o *)BattleInfoData__getLastWave((BattleInfoData_o *)this, 0);
  if ( ((unsigned int)this & 0x80000000) == 0 )
  {
    v58 = (int)this;
    do
    {
      StageEntityAtWave = BattleEntity__GetStageEntityAtWave(v91, v58, 0);
      if ( !StageEntityAtWave
        || (WaveFieldMotionIds = (System_Collections_Generic_IEnumerable_TSource__o *)StageEntity__GetWaveFieldMotionIds(
                                                                                        StageEntityAtWave,
                                                                                        0,
                                                                                        0)) == 0
        || (v62 = System_Linq_Enumerable__Reverse_int_(
                    WaveFieldMotionIds,
                    (const MethodInfo_3118440 *)Method_System_Linq_Enumerable_Reverse_int___)) == 0 )
      {
        v63 = Method_System_Array_Empty_int___;
        v64 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
        if ( !v64 )
        {
          sub_1C877C8(Method_System_Array_Empty_int___);
          v64 = v63[7];
        }
        v65 = *(_QWORD *)(v64 + 16);
        if ( (*(_BYTE *)(v65 + 309) & 1) == 0 )
          v65 = sub_1C8776C(inited);
        if ( !*(_DWORD *)(v65 + 224) )
          inited = j_il2cpp_runtime_class_init_0(v65);
        this = *(BattleRootComponent_o **)(v63[7] + 16LL);
        if ( (this[2].fields.manualHeight & 0x100) == 0 )
          this = (BattleRootComponent_o *)sub_1C8776C(inited);
        v62 = **(System_Collections_Generic_IEnumerable_TSource__o ***)&this[1].fields.kind;
        if ( !v62 )
          goto LABEL_128;
      }
      v66 = v62->klass;
      v67 = *(unsigned __int16 *)&v62->klass->_2.rank;
      if ( *(_WORD *)&v62->klass->_2.rank )
      {
        v68 = &v66->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_int__c **)v68 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
        {
          --v67;
          v68 += 4;
          if ( !v67 )
            goto LABEL_91;
        }
        v69 = (__int64)&v66->vtable[*v68];
      }
      else
      {
LABEL_91:
        v69 = sub_1C87870(v62, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
      }
      v70 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v69)(
              v62,
              *(_QWORD *)(v69 + 8));
      if ( !v70 )
        sub_1C372B4(0);
      while ( 1 )
      {
        v71 = *(_QWORD *)v70;
        v72 = *(unsigned __int16 *)(*(_QWORD *)v70 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v70 + 302LL) )
        {
          v73 = (int *)(*(_QWORD *)(v71 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v73 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v72;
            v73 += 4;
            if ( !v72 )
              goto LABEL_98;
          }
          v74 = v71 + 16LL * *v73 + 312;
        }
        else
        {
LABEL_98:
          v74 = sub_1C87870(v70, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v74)(v70, *(_QWORD *)(v74 + 8)) & 1) == 0 )
          break;
        v75 = *(_QWORD *)v70;
        v76 = *(unsigned __int16 *)(*(_QWORD *)v70 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v70 + 302LL) )
        {
          v77 = (int *)(*(_QWORD *)(v75 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_int__c **)v77 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
          {
            --v76;
            v77 += 4;
            if ( !v76 )
              goto LABEL_105;
          }
          v78 = v75 + 16LL * *v77 + 312;
        }
        else
        {
LABEL_105:
          v78 = sub_1C87870(v70, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
        }
        v79 = (*(__int64 (__fastcall **)(__int64, _QWORD))v78)(v70, *(_QWORD *)(v78 + 8));
        if ( !v12 )
          sub_1C372B4(v79);
        v80 = v79;
        v81 = System_Collections_Generic_List_int___Contains(
                v12,
                v79,
                (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !v81 )
        {
          v82 = v12->fields._items;
          v83 = Method_System_Collections_Generic_List_int__Add__;
          ++v12->fields._version;
          if ( !v82 )
            sub_1C372B4(v81);
          v84 = v12->fields._size;
          if ( (unsigned int)v84 >= LODWORD(v82->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v12,
              v80,
              *(const MethodInfo_3786000 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
          }
          else
          {
            v12->fields._size = v84 + 1;
            v82->m_Items[v84] = v80;
          }
        }
      }
      v85 = *(_QWORD *)v70;
      v86 = *(unsigned __int16 *)(*(_QWORD *)v70 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v70 + 302LL) )
      {
        v87 = (int *)(*(_QWORD *)(v85 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v87 - 1) != System_IDisposable_TypeInfo )
        {
          --v86;
          v87 += 4;
          if ( !v86 )
            goto LABEL_117;
        }
        v88 = v85 + 16LL * *v87 + 312;
      }
      else
      {
LABEL_117:
        v88 = sub_1C87870(v70, System_IDisposable_TypeInfo, 0);
      }
      this = (BattleRootComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v88)(v70, *(_QWORD *)(v88 + 8));
    }
    while ( v58-- > 0 );
  }
  if ( !v12 )
    goto LABEL_128;
  return System_Collections_Generic_List_int___ToArray(
           v12,
           (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *BattleRootComponent__GetClassBoardCommandSpellEffectId(
        BattleRootComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v2; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  Il2CppObject *SingleEntity; // x0
  BalanceConfig_c *v5; // x8
  BattleEntity_o *v6; // x20
  int32_t ClassBoardReleaseQuestId; // w21
  bool IsQuestClear_40324848; // w0
  struct BattleInfoData_o *battleInfo; // x8
  struct DeckData_o *transformDeck; // x8
  ClassBoardCommandSpellMaster_o *v11; // x21
  const MethodInfo *v12; // x4
  struct BattleInfoData_o *v13; // x8
  struct DeckData_o *myDeck; // x8
  struct BattleDeckServantData_array *svts; // x26
  int max_length; // w8
  char v17; // w23
  __int64 v18; // x27
  System_Collections_Generic_HashSet_int__o *v19; // x22
  BattleDeckServantData_o *v20; // x25
  struct BattleInfoData_o *v21; // x8
  struct DeckData_o *v22; // x8
  struct BattleDeckServantData_array *v23; // x23
  il2cpp_array_size_t v24; // x8
  unsigned __int64 v25; // x24
  BattleDeckServantData_o *v26; // x28
  const MethodInfo *v27; // x4

  if ( (byte_4C45B2A & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&CondType_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_BattleMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C37058(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_4C45B2A = 1;
  }
  v2 = (System_Collections_Generic_HashSet_int__o *)sub_1C372A4(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v2,
    (const MethodInfo_3653A88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_object )
    goto LABEL_48;
  SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                   Master_object,
                   (const MethodInfo_33A36A8 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
  v5 = BalanceConfig_TypeInfo;
  v6 = (BattleEntity_o *)SingleEntity;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v5->static_fields->ClassBoardReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_40324848 = CondType__IsQuestClear_40324848(ClassBoardReleaseQuestId, -1, 0, 0);
  if ( !v6 || !IsQuestClear_40324848 )
    return System_Linq_Enumerable__ToArray_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v2,
             (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  battleInfo = v6->fields.battleInfo;
  if ( !battleInfo )
    goto LABEL_48;
  transformDeck = battleInfo->fields.transformDeck;
  if ( !transformDeck )
    goto LABEL_48;
  v11 = (ClassBoardCommandSpellMaster_o *)Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BasicHelper__IsNullOrEmpty(
                                                                  (System_Collections_ICollection_o *)transformDeck->fields.svts,
                                                                  0);
  v13 = v6->fields.battleInfo;
  if ( !v13 )
    goto LABEL_48;
  myDeck = v13->fields.myDeck;
  if ( !myDeck )
    goto LABEL_48;
  svts = myDeck->fields.svts;
  if ( !svts )
    goto LABEL_48;
  max_length = svts->max_length;
  v17 = (char)Master_object;
  if ( max_length < 1 )
  {
    v19 = 0;
    if ( ((unsigned __int8)Master_object & 1) != 0 )
      return System_Linq_Enumerable__ToArray_int_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v2,
               (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
LABEL_35:
    v21 = v6->fields.battleInfo;
    if ( v21 )
    {
      v22 = v21->fields.transformDeck;
      if ( v22 )
      {
        v23 = v22->fields.svts;
        if ( v23 )
        {
          v24 = v23->max_length;
          if ( (int)v24 >= 1 )
          {
            v25 = 0;
            while ( v25 < (unsigned int)v24 )
            {
              if ( v19 )
              {
                v26 = v23->m_Items[v25];
                if ( v26 )
                {
                  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_HashSet_int___Contains(
                                                                                  v19,
                                                                                  *(&v26->fields.equipTarget2SkillChange
                                                                                  + 1),
                                                                                  (const MethodInfo_365417C *)Method_System_Collections_Generic_HashSet_int__Contains__);
                  if ( ((unsigned __int8)Master_object & 1) != 0 )
                  {
                    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess(
                                                                                    (BattleRootComponent_o *)Master_object,
                                                                                    v6,
                                                                                    v11,
                                                                                    v26->fields.userSvtId,
                                                                                    v27);
                    if ( !v2 )
                      goto LABEL_48;
                    System_Collections_Generic_HashSet_int___UnionWith(
                      v2,
                      (System_Collections_Generic_IEnumerable_T__o *)Master_object,
                      (const MethodInfo_3654C9C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
                  }
                }
              }
              LODWORD(v24) = v23->max_length;
              if ( (__int64)++v25 >= (int)v24 )
                return System_Linq_Enumerable__ToArray_int_(
                         (System_Collections_Generic_IEnumerable_TSource__o *)v2,
                         (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
            }
LABEL_49:
            sub_1C372BC(Master_object);
          }
          return System_Linq_Enumerable__ToArray_int_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v2,
                   (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
        }
      }
    }
LABEL_48:
    sub_1C372B4(Master_object);
  }
  v18 = 0;
  v19 = 0;
  do
  {
    if ( (unsigned int)v18 >= max_length )
      goto LABEL_49;
    v20 = svts->m_Items[v18];
    if ( (v17 & 1) != 0 )
    {
      if ( !v20 )
        goto LABEL_48;
    }
    else
    {
      if ( !v19 )
      {
        v19 = (System_Collections_Generic_HashSet_int__o *)sub_1C372A4(System_Collections_Generic_HashSet_int__TypeInfo);
        System_Collections_Generic_HashSet_int____ctor(
          v19,
          (const MethodInfo_3653A88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
      }
      if ( !v20 || !v19 )
        goto LABEL_48;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_HashSet_int___Add(
                                                                      v19,
                                                                      *(&v20->fields.equipTarget2SkillChange + 1),
                                                                      (const MethodInfo_3654C8C *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess(
                                                                    (BattleRootComponent_o *)Master_object,
                                                                    v6,
                                                                    v11,
                                                                    v20->fields.userSvtId,
                                                                    v12);
    if ( !v2 )
      goto LABEL_48;
    System_Collections_Generic_HashSet_int___UnionWith(
      v2,
      (System_Collections_Generic_IEnumerable_T__o *)Master_object,
      (const MethodInfo_3654C9C *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    max_length = svts->max_length;
    ++v18;
  }
  while ( (int)v18 < max_length );
  if ( (v17 & 1) == 0 )
    goto LABEL_35;
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v2,
           (const MethodInfo_312715C *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_Collections_Generic_IEnumerable_int__o *BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess(
        BattleRootComponent_o *this,
        BattleEntity_o *battleEntity,
        ClassBoardCommandSpellMaster_o *classBoardCSMaster,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v8; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C45B2B & 1) == 0 )
  {
    sub_1C37058(&BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_TypeInfo);
    byte_4C45B2B = 1;
  }
  v8 = sub_1C372A4(BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  *(_DWORD *)(v8 + 16) = -2;
  *(_DWORD *)(v8 + 24) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v8 + 40) = battleEntity;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 40), (int32_t)battleEntity, v9, v10);
  *(_QWORD *)(v8 + 72) = classBoardCSMaster;
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 72), (int32_t)classBoardCSMaster, v11, v12);
  *(_QWORD *)(v8 + 56) = userSvtId;
  return (System_Collections_Generic_IEnumerable_int__o *)v8;
}


System_Collections_Generic_List_int__o *BattleRootComponent__GetLoadDropEffectType(
        BattleRootComponent_o *this,
        BattleEntity_o *battleEntity,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v4; // x21
  System_Collections_Generic_List_int__o *v5; // x19
  QuestPhaseEntity_o *QuestPhaseEntity; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct BattleInfoData_o *battleInfo; // x8
  System_Collections_Generic_IEnumerable_T__o *enemyDeck; // x1
  System_Collections_Generic_IEnumerable_T__o *callDeck; // x1
  System_Collections_Generic_IEnumerable_T__o *shiftDeck; // x1
  Il2CppObject *transformDeck; // x1
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  _BOOL8 v18; // x0
  Il2CppClass *klass; // x24
  const char *namespaze; // x8
  int v21; // w25
  __int64 v22; // x9
  __int64 v23; // x26
  int v24; // w9
  __int64 v25; // x27
  __int64 v26; // x29
  int32_t v27; // w1
  int32_t v28; // w1
  struct System_Int32_array *v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  struct BattleInfoData_o *v32; // x8
  struct BattleInfoData_StageCutinInfo_array *stageCutins; // x21
  int max_length; // w8
  unsigned int v35; // w24
  BattleInfoData_StageCutinInfo_o *v36; // x8
  struct DropInfo_array *dropInfos; // x25
  int v38; // w8
  unsigned int v39; // w26
  DropInfo_o *v40; // x27
  int32_t effectType; // w1
  int32_t v42; // w1
  struct System_Int32_array *v43; // x8
  _QWORD *v44; // x9
  __int64 v45; // x10
  QuestPhaseEntity_c *v46; // x8
  QuestPhaseEntity_o *v47; // x20
  __int64 v48; // x9
  int32_t *p_offset; // x10
  __int64 v50; // x0
  __int64 v51; // x20
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  __int64 v56; // x8
  __int64 v57; // x9
  int *v58; // x10
  __int64 v59; // x0
  FunctionEntity_o *v60; // x0
  _BOOL8 BattleSkillDropInfoDict; // x0
  __int64 v62; // x0
  struct System_Int32_array *v63; // x8
  _QWORD *v64; // x9
  __int64 v65; // x10
  __int64 v66; // x8
  __int64 v67; // x9
  int *v68; // x10
  __int64 v69; // x0
  System_Collections_Generic_List_Enumerator_object__o v71; // [xsp+10h] [xbp-A0h] BYREF
  BattleSkillDropInfo_JsonConvertData_o *data; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v73; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4C45B29 & 1) == 0 )
  {
    sub_1C37058(&Method_EnumUtility_CastToEnum_DropInfo_DropEffectType___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_DeckData__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_DeckData__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_DeckData__get_Current__);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_FunctionEntity__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_FunctionEntity__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_DeckData__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_DeckData__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_DeckData__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_DeckData___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_DeckData__TypeInfo);
    byte_4C45B29 = 1;
  }
  memset(&v73, 0, sizeof(v73));
  data = 0;
  v4 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_DeckData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_DeckData___ctor__);
  v5 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !battleEntity )
    return v5;
  battleInfo = battleEntity->fields.battleInfo;
  if ( !battleInfo )
    return v5;
  enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.enemyDeck;
  if ( enemyDeck )
  {
    if ( !v4 )
      goto LABEL_109;
    System_Collections_Generic_List_object___AddRange(
      v4,
      enemyDeck,
      (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_109;
  }
  callDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.callDeck;
  if ( callDeck )
  {
    if ( !v4 )
      goto LABEL_109;
    System_Collections_Generic_List_object___AddRange(
      v4,
      callDeck,
      (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_109;
  }
  shiftDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.shiftDeck;
  if ( shiftDeck )
  {
    if ( !v4 )
      goto LABEL_109;
    System_Collections_Generic_List_object___AddRange(
      v4,
      shiftDeck,
      (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_109;
  }
  transformDeck = (Il2CppObject *)battleInfo->fields.transformDeck;
  if ( transformDeck )
  {
    if ( !v4 )
      goto LABEL_109;
    items = v4->fields._items;
    v15 = Method_System_Collections_Generic_List_DeckData__Add__;
    ++v4->fields._version;
    if ( !items )
      goto LABEL_109;
    size = v4->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v4,
        transformDeck,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    }
    else
    {
      v17 = &items->obj.klass + size;
      v4->fields._size = size + 1;
      v17[4] = (Il2CppClass *)transformDeck;
      sub_1C36FFC((CGThumbnailListItem_o *)(v17 + 4), (int32_t)transformDeck, v7, v8);
    }
  }
  else if ( !v4 )
  {
    goto LABEL_109;
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v71,
    v4,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_DeckData__GetEnumerator__);
  v73 = v71;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v73,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_DeckData__MoveNext__);
    if ( !v18 )
      break;
    if ( !v73.fields._current )
      sub_1C372B4(v18);
    klass = v73.fields._current[1].klass;
    if ( klass )
    {
      namespaze = klass->_1.namespaze;
      if ( (int)namespaze >= 1 )
      {
        v21 = 0;
        do
        {
          if ( v21 >= (unsigned int)namespaze )
            sub_1C372BC(v18);
          v22 = *((_QWORD *)&klass->_1.byval_arg.data + v21);
          if ( !v22 )
            sub_1C372B4(v18);
          v23 = *(_QWORD *)(v22 + 104);
          if ( v23 )
          {
            v24 = *(_DWORD *)(v23 + 24);
            if ( v24 >= 1 )
            {
              v25 = 0;
              do
              {
                if ( (unsigned int)v25 >= v24 )
                  sub_1C372BC(v18);
                v26 = *(_QWORD *)(v23 + 32 + 8 * v25);
                if ( !v26 )
                  sub_1C372B4(v18);
                v27 = *(_DWORD *)(v26 + 48);
                if ( v27 )
                {
                  if ( !v5 )
                    sub_1C372B4(v18);
                  v18 = System_Collections_Generic_List_int___Contains(
                          v5,
                          v27,
                          (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__);
                  if ( !v18 )
                  {
                    v28 = *(_DWORD *)(v26 + 48);
                    v29 = v5->fields._items;
                    v30 = Method_System_Collections_Generic_List_int__Add__;
                    ++v5->fields._version;
                    if ( !v29 )
                      sub_1C372B4(v18);
                    v31 = v5->fields._size;
                    if ( (unsigned int)v31 >= LODWORD(v29->max_length) )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        v5,
                        v28,
                        *(const MethodInfo_3786000 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v5->fields._size = v31 + 1;
                      v29->m_Items[v31] = v28;
                    }
                  }
                }
                v24 = *(_DWORD *)(v23 + 24);
                ++v25;
              }
              while ( (int)v25 < v24 );
              namespaze = klass->_1.namespaze;
            }
          }
          ++v21;
        }
        while ( v21 < (int)namespaze );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v73,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_DeckData__Dispose__);
  v32 = battleEntity->fields.battleInfo;
  if ( !v32 )
    goto LABEL_109;
  stageCutins = v32->fields.stageCutins;
  if ( stageCutins )
  {
    max_length = stageCutins->max_length;
    if ( max_length >= 1 )
    {
      v35 = 0;
      while ( 1 )
      {
        if ( v35 >= max_length )
          goto LABEL_112;
        v36 = stageCutins->m_Items[v35];
        if ( !v36 )
          goto LABEL_109;
        dropInfos = v36->fields.dropInfos;
        if ( !dropInfos )
          goto LABEL_109;
        v38 = dropInfos->max_length;
        if ( v38 >= 1 )
          break;
LABEL_65:
        max_length = stageCutins->max_length;
        if ( (int)++v35 >= max_length )
          goto LABEL_66;
      }
      v39 = 0;
      while ( v39 < v38 )
      {
        v40 = dropInfos->m_Items[v39];
        if ( !v40 )
          goto LABEL_109;
        effectType = v40->fields.effectType;
        if ( effectType )
        {
          if ( !v5 )
            goto LABEL_109;
          QuestPhaseEntity = (QuestPhaseEntity_o *)System_Collections_Generic_List_int___Contains(
                                                     v5,
                                                     effectType,
                                                     (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)QuestPhaseEntity & 1) == 0 )
          {
            v42 = v40->fields.effectType;
            v43 = v5->fields._items;
            v44 = Method_System_Collections_Generic_List_int__Add__;
            ++v5->fields._version;
            if ( !v43 )
              goto LABEL_109;
            v45 = v5->fields._size;
            if ( (unsigned int)v45 >= LODWORD(v43->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v5,
                v42,
                *(const MethodInfo_3786000 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
            }
            else
            {
              v5->fields._size = v45 + 1;
              v43->m_Items[v45] = v42;
            }
          }
        }
        v38 = dropInfos->max_length;
        if ( (int)++v39 >= v38 )
          goto LABEL_65;
      }
LABEL_112:
      sub_1C372BC(QuestPhaseEntity);
    }
  }
LABEL_66:
  QuestPhaseEntity = BattleEntity__GetQuestPhaseEntity(battleEntity, 0);
  if ( !QuestPhaseEntity
    || (QuestPhaseEntity = (QuestPhaseEntity_o *)QuestPhaseEntity__GetBattleSkillDropFunctionEntities(
                                                   QuestPhaseEntity,
                                                   0)) == 0 )
  {
LABEL_109:
    sub_1C372B4(QuestPhaseEntity);
  }
  v46 = QuestPhaseEntity->klass;
  v47 = QuestPhaseEntity;
  v48 = *(unsigned __int16 *)&QuestPhaseEntity->klass->_2.rank;
  if ( *(_WORD *)&QuestPhaseEntity->klass->_2.rank )
  {
    p_offset = &v46->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_FunctionEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_FunctionEntity__TypeInfo )
    {
      --v48;
      p_offset += 4;
      if ( !v48 )
        goto LABEL_72;
    }
    v50 = (__int64)&v46->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_72:
    v50 = sub_1C87870(QuestPhaseEntity, System_Collections_Generic_IEnumerable_FunctionEntity__TypeInfo, 0);
  }
  v51 = (*(__int64 (__fastcall **)(QuestPhaseEntity_o *, _QWORD))v50)(v47, *(_QWORD *)(v50 + 8));
  if ( !v51 )
    sub_1C372B4(0);
  while ( 1 )
  {
    v52 = *(_QWORD *)v51;
    v53 = *(unsigned __int16 *)(*(_QWORD *)v51 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v51 + 302LL) )
    {
      v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v54 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v53;
        v54 += 4;
        if ( !v53 )
          goto LABEL_79;
      }
      v55 = v52 + 16LL * *v54 + 312;
    }
    else
    {
LABEL_79:
      v55 = sub_1C87870(v51, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v51, *(_QWORD *)(v55 + 8)) & 1) == 0 )
      break;
    v56 = *(_QWORD *)v51;
    v57 = *(unsigned __int16 *)(*(_QWORD *)v51 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v51 + 302LL) )
    {
      v58 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_FunctionEntity__c **)v58 - 1) != System_Collections_Generic_IEnumerator_FunctionEntity__TypeInfo )
      {
        --v57;
        v58 += 4;
        if ( !v57 )
          goto LABEL_86;
      }
      v59 = v56 + 16LL * *v58 + 312;
    }
    else
    {
LABEL_86:
      v59 = sub_1C87870(v51, System_Collections_Generic_IEnumerator_FunctionEntity__TypeInfo, 0);
    }
    v60 = (FunctionEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v59)(v51, *(_QWORD *)(v59 + 8));
    if ( !v60 )
      sub_1C372B4(0);
    BattleSkillDropInfoDict = FunctionEntity__TryGetBattleSkillDropInfoDict(v60, &data, 0);
    if ( BattleSkillDropInfoDict )
    {
      if ( !data )
        sub_1C372B4(BattleSkillDropInfoDict);
      v62 = EnumUtility__CastToEnum_Int32Enum_(
              data->fields.dropEffectType,
              0,
              (const MethodInfo_30EEC1C *)Method_EnumUtility_CastToEnum_DropInfo_DropEffectType___);
      if ( (_DWORD)v62 )
      {
        if ( !v5 )
          sub_1C372B4(v62);
        v63 = v5->fields._items;
        v64 = Method_System_Collections_Generic_List_int__Add__;
        ++v5->fields._version;
        if ( !v63 )
          sub_1C372B4(v62);
        v65 = v5->fields._size;
        if ( (unsigned int)v65 >= LODWORD(v63->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v5,
            v62,
            *(const MethodInfo_3786000 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
        }
        else
        {
          v5->fields._size = v65 + 1;
          v63->m_Items[v65] = v62;
        }
      }
    }
  }
  v66 = *(_QWORD *)v51;
  v67 = *(unsigned __int16 *)(*(_QWORD *)v51 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v51 + 302LL) )
  {
    v68 = (int *)(*(_QWORD *)(v66 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v68 - 1) != System_IDisposable_TypeInfo )
    {
      --v67;
      v68 += 4;
      if ( !v67 )
        goto LABEL_101;
    }
    v69 = v66 + 16LL * *v68 + 312;
  }
  else
  {
LABEL_101:
    v69 = sub_1C87870(v51, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v69)(v51, *(_QWORD *)(v69 + 8));
  return v5;
}


System_Collections_IEnumerator_o *BattleRootComponent__LoadAsset(
        BattleRootComponent_o *this,
        QuestPhaseEntity_o *ent,
        int32_t eventId,
        BattleEntity_o *battleEnt,
        const MethodInfo *method)
{
  __int64 v9; // x23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C45B20 & 1) == 0 )
  {
    sub_1C37058(&BattleRootComponent__LoadAsset_d__13_TypeInfo);
    byte_4C45B20 = 1;
  }
  v9 = sub_1C372A4(BattleRootComponent__LoadAsset_d__13_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 40) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 40), (int32_t)this, v10, v11);
  *(_QWORD *)(v9 + 48) = ent;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 48), (int32_t)ent, v12, v13);
  *(_DWORD *)(v9 + 56) = eventId;
  *(_QWORD *)(v9 + 64) = battleEnt;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 64), (int32_t)battleEnt, v14, v15);
  return (System_Collections_IEnumerator_o *)v9;
}


System_Collections_IEnumerator_o *BattleRootComponent__LoadAssetsIndependentToMainOne(
        BattleRootComponent_o *this,
        QuestPhaseEntity_o *ent,
        int32_t eventId,
        System_Action_o *finishCallback,
        const MethodInfo *method)
{
  __int64 v9; // x23
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C45B21 & 1) == 0 )
  {
    sub_1C37058(&BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_TypeInfo);
    byte_4C45B21 = 1;
  }
  v9 = sub_1C372A4(BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 40) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 40), (int32_t)this, v10, v11);
  *(_QWORD *)(v9 + 32) = ent;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 32), (int32_t)ent, v12, v13);
  *(_DWORD *)(v9 + 56) = eventId;
  *(_QWORD *)(v9 + 64) = finishCallback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 64), (int32_t)finishCallback, v14, v15);
  return (System_Collections_IEnumerator_o *)v9;
}


void BattleRootComponent__LoadBatteBgm(
        BattleRootComponent_o *this,
        System_Collections_Generic_List_string__o *bgmList,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  System_Collections_Generic_List_object__o *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 v13; // x21
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int size; // w8
  Il2CppObject *Item; // x19
  System_Action_o *v18; // x21

  if ( (byte_4C45B22 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C37058(&SoundManager_TypeInfo);
    sub_1C37058(&Method_BattleRootComponent___c__DisplayClass17_0__LoadBatteBgm_b__0__);
    sub_1C37058(&BattleRootComponent___c__DisplayClass17_0_TypeInfo);
    byte_4C45B22 = 1;
  }
  v7 = sub_1C372A4(BattleRootComponent___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_11;
  *(_QWORD *)(v7 + 16) = bgmList;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)bgmList, v9, v10);
  *(_QWORD *)(v7 + 24) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)this, v11, v12);
  *(_QWORD *)(v7 + 32) = callback;
  v13 = v7 + 32;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)callback, v14, v15);
  v8 = *(System_Collections_Generic_List_object__o **)(v7 + 16);
  if ( !v8 )
    goto LABEL_11;
  size = v8->fields._size;
  if ( size <= 0 )
  {
    if ( *(_QWORD *)v13 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v13 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v13 + 64LL),
        *(_QWORD *)(*(_QWORD *)v13 + 40LL));
      return;
    }
LABEL_11:
    sub_1C372B4(v8);
  }
  Item = System_Collections_Generic_List_object___get_Item(
           v8,
           size - 1,
           (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_string__get_Item__);
  v18 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v7,
    Method_BattleRootComponent___c__DisplayClass17_0__LoadBatteBgm_b__0__,
    0);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__downloadAudioAssetStorage((System_String_o *)Item, v18, 1, 0);
}


void BattleRootComponent__SetupObjectsExtractedFromLoadedAssets(BattleRootComponent_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0

  perf = this->fields.perf;
  if ( !perf || (BattlePerformance__SetDownloadEventSprite(perf, 0), (perf = this->fields.perf) == 0) )
    sub_1C372B4(perf);
  BattlePerformance__SetupCommandCardCommonPrefabs(perf, 0);
}


void BattleRootComponent__ShowAssetNotFoundErrorDialog(
        BattleRootComponent_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  ;
}


void BattleRootComponent__TerminalTransition(
        BattleRootComponent_o *this,
        BattleScriptRootComponent_TalkScriptInfo_o *info,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0
  Il2CppObject *Instance; // x0

  if ( (byte_4C45B27 & 1) == 0 )
  {
    sub_1C37058(&ScriptManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C45B27 = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3D786 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3D786 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, (Il2CppObject *)info, 1, 0);
}


void BattleRootComponent__TransitionPartyOrganization(BattleRootComponent_o *this, const MethodInfo *method)
{
  BattleRootComponent_o *v2; // x19
  struct BattleData_o *data; // x8
  struct QuestEntity_o *quest_ent; // x21
  struct BattleData_o *v5; // x8
  struct BattleEntity_o *battle_ent; // x8
  int32_t v7; // w20
  int32_t id; // w21
  int32_t questPhase; // w22
  BattleSetupInfo_o *v10; // x23
  struct BattleData_o *v11; // x8
  Il2CppObject *v12; // x19
  TerminalPramsManager_c *v13; // x0

  v2 = this;
  if ( (byte_4C45B2C & 1) == 0 )
  {
    sub_1C37058(&BattleSetupInfo_TypeInfo);
    sub_1C37058(&ScriptManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    this = (BattleRootComponent_o *)sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C45B2C = 1;
  }
  data = v2->fields.data;
  if ( !data )
    goto LABEL_20;
  quest_ent = data->fields.quest_ent;
  if ( !quest_ent )
    goto LABEL_20;
  this = (BattleRootComponent_o *)QuestEntity__GetWarId(data->fields.quest_ent, 0);
  v5 = v2->fields.data;
  if ( !v5 )
    goto LABEL_20;
  battle_ent = v5->fields.battle_ent;
  if ( !battle_ent )
    goto LABEL_20;
  v7 = (int)this;
  id = quest_ent->fields.id;
  questPhase = battle_ent->fields.questPhase;
  v10 = (BattleSetupInfo_o *)sub_1C372A4(BattleSetupInfo_TypeInfo);
  BattleSetupInfo___ctor(v10, 0);
  if ( !v10 )
    goto LABEL_20;
  this = (BattleRootComponent_o *)BattleSetupInfo__ConvertBattleSetupInfo(v10, v7, id, questPhase, 0, 0, 0, 0);
  v11 = v2->fields.data;
  if ( !v11 )
    goto LABEL_20;
  v12 = (Il2CppObject *)this;
  if ( !this )
    goto LABEL_20;
  this[1].fields.kind = v11->fields.selectedInterruptionWave;
  LOBYTE(this[1].fields.depth) = 1;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C3D786 )
  {
    sub_1C37058(&TerminalPramsManager_TypeInfo);
    byte_4C3D786 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  v13->static_fields->_IsAutoResume_k__BackingField = 1;
  this = (BattleRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_20:
    sub_1C372B4(this);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)this, 35, 1, v12, 1, 0);
}


void BattleRootComponent__TransitionTerminalOrBattleScript(
        BattleRootComponent_o *this,
        BattleScriptRootComponent_TalkScriptInfo_o *info,
        const MethodInfo *method)
{
  __int64 v5; // x20
  BattleScriptRootComponent_TalkScriptInfo_o *isLose; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  BattleScriptRootComponent_TalkScriptInfo_o **v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct BattleData_o *data; // x8
  struct BaseBattleEvent_o *battleEvent; // x0
  const MethodInfo *v14; // x1
  const MethodInfo *v15; // x2
  struct BattleData_o *v16; // x8
  BattleScriptRootComponent_TalkScriptInfo_o *v17; // x8
  int32_t qId; // w22
  int32_t pId; // w23
  struct BattleData_o *v20; // x8
  int64_t overwriteEndScriptQuestId; // x22
  int32_t v22; // w23
  int32_t ScriptQuestId; // w22
  QuestEntity_o *QuestEntity; // x0
  int32_t v25; // w24
  ScriptManager_o *v26; // x23
  int32_t winResult; // w25
  int32_t v28; // w24
  ScriptManager_o *v29; // x23
  int32_t v30; // w25
  ScriptManager_c *v31; // x0
  System_String_o *textPath; // x23
  System_String_o *ScriptAssetName; // x0
  System_String_o *v34; // x22
  int32_t v35; // w19
  int32_t v36; // w21
  System_Action_object__o *v37; // x22
  Il2CppObject *Instance; // x19
  System_String_o *v39; // x21
  System_String_o *v40; // x22
  NotificationDialog_ClickDelegate_o *v41; // x23
  QuestPhaseDetailEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_4C45B28 & 1) == 0 )
  {
    sub_1C37058(&System_Action_string__TypeInfo);
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_QuestScriptReleaseMaster___);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&MyRoomStateMaterial_TypeInfo);
    sub_1C37058(&ScriptManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C37058(&Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__0__);
    sub_1C37058(&Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__1__);
    sub_1C37058(&BattleRootComponent___c__DisplayClass23_0_TypeInfo);
    sub_1C37058(&StringLiteral_2752/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_MESSAGE"*/);
    sub_1C37058(&StringLiteral_2753/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_TITLE"*/);
    byte_4C45B28 = 1;
  }
  entity = 0;
  v5 = sub_1C372A4(BattleRootComponent___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_64;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = info;
  v9 = (BattleScriptRootComponent_TalkScriptInfo_o **)(v5 + 24);
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)info, v10, v11);
  data = this->fields.data;
  if ( !data )
    goto LABEL_64;
  battleEvent = data->fields.battleEvent;
  if ( !battleEvent
    || (((__int64 (__fastcall *)(struct BaseBattleEvent_o *, const MethodInfo *))battleEvent->klass->vtable._16_GoNextScene.methodPtr)(
          battleEvent,
          battleEvent->klass->vtable._16_GoNextScene.method)
      & 1) == 0 )
  {
    SkillLvMaster__ResetBaseTime(0);
    isLose = *v9;
    if ( !*v9 )
      goto LABEL_64;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)BattleScriptRootComponent_TalkScriptInfo__isLose(isLose, 0);
    if ( ((unsigned __int8)isLose & 1) != 0 )
    {
      isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)this->fields.data;
      if ( isLose )
      {
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)BattleData__IsResultInterruption(
                                                                 (BattleData_o *)isLose,
                                                                 0);
        if ( ((unsigned __int8)isLose & 1) == 0 )
        {
LABEL_23:
          BattleRootComponent__TerminalTransition((BattleRootComponent_o *)isLose, *v9, v15);
          return;
        }
        v16 = this->fields.data;
        if ( v16 )
        {
          if ( (v16->fields.selectedInterruptionWave & 0x80000000) == 0 )
          {
            BattleRootComponent__TransitionPartyOrganization(this, v14);
            return;
          }
          goto LABEL_23;
        }
      }
      goto LABEL_64;
    }
    v17 = *v9;
    if ( !*v9 )
      goto LABEL_64;
    qId = v17->fields.qId;
    *(_DWORD *)(v5 + 32) = qId;
    pId = v17->fields.pId;
    *(_DWORD *)(v5 + 36) = pId;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)ScriptManager__GetCachedSelectedBranchQuestId(qId, pId, 0);
    v20 = this->fields.data;
    if ( !v20 )
      goto LABEL_64;
    overwriteEndScriptQuestId = v20->fields.overwriteEndScriptQuestId;
    if ( overwriteEndScriptQuestId )
    {
      if ( !*v9 )
        goto LABEL_64;
      (*v9)->fields.qId = overwriteEndScriptQuestId;
      v22 = *(_DWORD *)(v5 + 32);
      if ( !MyRoomStateMaterial_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomStateMaterial_TypeInfo);
      MyRoomStateMaterial__SetPlayedBranchQuestData(v22, overwriteEndScriptQuestId, 0);
    }
    else
    {
      LODWORD(overwriteEndScriptQuestId) = (_DWORD)isLose;
    }
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !isLose
      || (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_object_(
                                                                   (DataManager_o *)isLose,
                                                                   (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestScriptReleaseMaster___)) == 0
      || (ScriptQuestId = QuestScriptReleaseMaster__GetScriptQuestId(
                            (QuestScriptReleaseMaster_o *)isLose,
                            overwriteEndScriptQuestId,
                            *(_DWORD *)(v5 + 36),
                            2,
                            0),
          (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
      || (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_object_(
                                                                   (DataManager_o *)isLose,
                                                                   (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___),
          !*v9)
      || !isLose )
    {
LABEL_64:
      sub_1C372B4(isLose);
    }
    if ( !QuestPhaseDetailMaster__TryGetEntity(
            (QuestPhaseDetailMaster_o *)isLose,
            &entity,
            (*v9)->fields.qId,
            (*v9)->fields.pId,
            0) )
      goto LABEL_53;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)entity;
    if ( !entity )
      goto LABEL_64;
    if ( !QuestPhaseDetailEntity__HasFlag(entity, 0x20000000000LL, 0) )
      goto LABEL_53;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !isLose )
      goto LABEL_64;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)isLose,
                                                             (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !*v9 || !isLose )
      goto LABEL_64;
    QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)isLose, (*v9)->fields.qId, 0);
    if ( !QuestEntity || !QuestEntity__IsOpenByTime(QuestEntity, 0, 0) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v39 = LocalizationManager__Get((System_String_o *)StringLiteral_2753/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_TITLE"*/, 0);
      v40 = LocalizationManager__Get((System_String_o *)StringLiteral_2752/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_MESSAGE"*/, 0);
      v41 = (NotificationDialog_ClickDelegate_o *)sub_1C372A4(NotificationDialog_ClickDelegate_TypeInfo);
      NotificationDialog_ClickDelegate___ctor(
        v41,
        (Il2CppObject *)v5,
        Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__1__,
        0);
      if ( !Instance )
        goto LABEL_64;
      CommonUI__OpenNotificationDialog_31210584(
        (CommonUI_o *)Instance,
        v39,
        v40,
        v41,
        -1,
        0,
        0,
        0,
        0,
        1,
        0,
        0,
        0,
        0,
        0,
        1,
        0,
        0,
        0,
        0);
    }
    else
    {
LABEL_53:
      if ( !ScriptQuestId )
        goto LABEL_56;
      isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( !*(_QWORD *)(v5 + 24) )
        goto LABEL_64;
      v25 = *(_DWORD *)(v5 + 36);
      v26 = (ScriptManager_o *)isLose;
      winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(
                    *(BattleScriptRootComponent_TalkScriptInfo_o **)(v5 + 24),
                    0);
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)ScriptManager__GetScriptName_BattleEnd(
                                                               ScriptQuestId,
                                                               v25,
                                                               winResult,
                                                               0);
      if ( !v26 )
        goto LABEL_64;
      if ( !ScriptManager__IsExistScriptFile(v26, (System_String_o *)isLose, 0) )
      {
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
        if ( !*(_QWORD *)(v5 + 24) )
          goto LABEL_64;
        v28 = *(_DWORD *)(v5 + 36);
        v29 = (ScriptManager_o *)isLose;
        v30 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(
                *(BattleScriptRootComponent_TalkScriptInfo_o **)(v5 + 24),
                0);
        if ( !ScriptManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)ScriptManager__GetScriptName_BattleEnd2(
                                                                 ScriptQuestId,
                                                                 v28,
                                                                 v30,
                                                                 0);
        if ( !v29 )
          goto LABEL_64;
        if ( !ScriptManager__IsExistScriptFile(v29, (System_String_o *)isLose, 0) )
          goto LABEL_56;
      }
      v31 = ScriptManager_TypeInfo;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        v31 = ScriptManager_TypeInfo;
      }
      textPath = v31->static_fields->textPath;
      ScriptAssetName = ScriptManager__GetScriptAssetName(ScriptQuestId, 0);
      v34 = System_String__Concat_63561656(textPath, ScriptAssetName, 0);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__isExistAssetStorage(v34, 0) )
      {
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !isLose )
          goto LABEL_64;
        AvalonSceneManager__transitionSceneRefresh(
          (AvalonSceneManager_o *)isLose,
          this->fields.nextscenetype,
          1,
          (Il2CppObject *)*v9,
          0,
          0);
      }
      else
      {
LABEL_56:
        v35 = *(_DWORD *)(v5 + 32);
        v36 = *(_DWORD *)(v5 + 36);
        v37 = (System_Action_object__o *)sub_1C372A4(System_Action_string__TypeInfo);
        System_Action_object____ctor(
          v37,
          (Il2CppObject *)v5,
          Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__0__,
          0);
        if ( !ScriptManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        ScriptManager__LoadBattleEndGameDemo(v35, v36, 1, (System_Action_string__o *)v37, 0, 0);
      }
    }
  }
}


void BattleRootComponent__beginInitialize(BattleRootComponent_o *this, const MethodInfo *method)
{
  System_String_o *Value; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x21
  void *Master_object; // x0
  Il2CppObject *SingleEntity; // x0
  BattleFBXComponent_c *v9; // x8
  BattleEntity_o *v10; // x20
  BattlePerformance_c *v11; // x0
  QuestPhaseEntity_o *QuestPhaseEntity; // x21
  BattleData_o *data; // x22
  int64_t createdAt; // x22
  System_Int32_array *v15; // x22
  const MethodInfo *v16; // x4
  System_Collections_IEnumerator_o *Asset; // x0
  UnityEngine_Object_o *debugButton; // x20
  ManagerConfig_c *v19; // x0

  if ( (byte_4C45B1E & 1) == 0 )
  {
    sub_1C37058(&AssetStorageLoadWrapper_TypeInfo);
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&BattleActionData_TypeInfo);
    sub_1C37058(&BattleEffectUtility_TypeInfo);
    sub_1C37058(&BattleFBXComponent_TypeInfo);
    sub_1C37058(&BattlePerformance_TypeInfo);
    sub_1C37058(&BuffList_TypeInfo);
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_BattleBgMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_BattleMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    sub_1C37058(&System_GC_TypeInfo);
    sub_1C37058(&ManagerConfig_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&OptionManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C37058(&StringLiteral_15560/*"WINGNAME"*/);
    byte_4C45B1E = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_15560/*"WINGNAME"*/, 0);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  CatAndMouseGame__SixHomeBuilding(Value, 0);
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect(0);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( !assetStorageLoadWrapper )
  {
    assetStorageLoadWrapper = (AssetStorageLoadWrapper_o *)sub_1C372A4(AssetStorageLoadWrapper_TypeInfo);
    AssetStorageLoadWrapper___ctor(assetStorageLoadWrapper, 0);
  }
  this->fields.assetStorageLoadWrapper = assetStorageLoadWrapper;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.assetStorageLoadWrapper, (int32_t)assetStorageLoadWrapper, v4, v5);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_object )
    goto LABEL_56;
  SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                   (const MethodInfo_33A36A8 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
  v9 = BattleFBXComponent_TypeInfo;
  v10 = (BattleEntity_o *)SingleEntity;
  if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    v9 = BattleFBXComponent_TypeInfo;
  }
  v9->static_fields->EnableEvent = 1;
  v11 = BattlePerformance_TypeInfo;
  if ( !BattlePerformance_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
    v11 = BattlePerformance_TypeInfo;
  }
  v11->static_fields->CameraFlip = 0;
  Master_object = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    Master_object = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(*((_QWORD *)Master_object + 23) + 48LL) = 0;
  if ( !v10 )
    goto LABEL_56;
  QuestPhaseEntity = BattleEntity__GetQuestPhaseEntity(v10, 0);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__isSavedMemoryMode(0) )
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__ReleaseFaceAtlas(0);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseBanner(0);
  AtlasManager__ReleaseCharaGraphOptionAtlas(0);
  AtlasManager__ReleaseEventUI(0);
  Master_object = this->fields.data;
  if ( !Master_object )
    goto LABEL_56;
  BattleData__Initialize((BattleData_o *)Master_object, 0);
  data = this->fields.data;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  BuffList__SetBattleData(data, 0);
  Master_object = this->fields.logic;
  if ( !Master_object )
    goto LABEL_56;
  BattleLogic__Initialize((BattleLogic_o *)Master_object, 0);
  Master_object = this->fields.data;
  if ( !Master_object )
    goto LABEL_56;
  if ( !BattleData__IsWarBoard((BattleData_o *)Master_object, 0) )
  {
    createdAt = v10->fields.createdAt;
    if ( !byte_4C40B23 )
    {
      sub_1C37058(&SkillLvMaster_TypeInfo);
      byte_4C40B23 = 1;
    }
    SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime = createdAt;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_BattleBgMaster___);
  if ( !Master_object )
    goto LABEL_56;
  v15 = (System_Int32_array *)*((_QWORD *)Master_object + 10);
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  BattleEffectUtility__AddNotPreloadEffectId(v15, 0);
  Asset = BattleRootComponent__LoadAsset(this, QuestPhaseEntity, v10->fields.eventId, v10, v16);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, Asset, 0);
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_56;
  *((_DWORD *)Master_object + 38) = 3;
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_56;
  if ( *((_BYTE *)Master_object + 148) )
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_56;
    *((_DWORD *)Master_object + 38) = 4;
  }
  debugButton = (UnityEngine_Object_o *)this->fields.debugButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(debugButton, 0, 0) )
  {
    Master_object = this->fields.debugButton;
    if ( !Master_object )
      goto LABEL_56;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
    v19 = ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v19 = ManagerConfig_TypeInfo;
    }
    if ( v19->static_fields->UseDebugCommand )
    {
      Master_object = this->fields.debugButton;
      if ( Master_object )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
        return;
      }
LABEL_56:
      sub_1C372B4(Master_object);
    }
  }
}


void BattleRootComponent__beginResume(BattleRootComponent_o *this, Il2CppObject *data, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  CommonUI_o *v5; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  CGThumbnailListItem_o *p_callbackBeginResumeFunc; // x19
  struct BattleRootComponent_callBackBeginResume_o *v9; // x20
  struct BattleRootComponent_callBackBeginResume_o *callbackBeginResumeFunc; // t1

  if ( (byte_4C45B1D & 1) == 0 )
  {
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C45B1D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v5 )
    sub_1C372B4(Instance);
  CommonUI__maskFadein(v5, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
  callbackBeginResumeFunc = this->fields.callbackBeginResumeFunc;
  p_callbackBeginResumeFunc = (CGThumbnailListItem_o *)&this->fields.callbackBeginResumeFunc;
  v9 = callbackBeginResumeFunc;
  if ( callbackBeginResumeFunc )
  {
    p_callbackBeginResumeFunc->klass = 0;
    sub_1C36FFC(p_callbackBeginResumeFunc, 0, v6, v7);
    ((void (__fastcall *)(intptr_t, intptr_t))v9->fields.invoke_impl)(v9->fields.method_code, v9->fields.method);
  }
}


void BattleRootComponent__beginStartUp(BattleRootComponent_o *this, Il2CppObject *data, const MethodInfo *method)
{
  __int64 naturalAligment; // x9
  Il2CppObject *Instance; // x21
  __int64 Item; // x0
  Il2CppObject *v8; // x21
  struct BattleLogic_o *logic; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct BattleLogic_o *v12; // x8
  struct BattleLogic_LOGICTYPE_array *logiclist; // x8
  int max_length; // w9

  if ( (byte_4C45B23 & 1) == 0 )
  {
    sub_1C37058(&AndroidBackKeyManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C37058(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C37058(&BattleLogic_LOGICTYPE___TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_1C37058(&StringLiteral_21230/*"limitCount"*/);
    sub_1C37058(&StringLiteral_10906/*"QUEST_START"*/);
    sub_1C37058(&StringLiteral_23283/*"servantId"*/);
    byte_4C45B23 = 1;
  }
  if ( data )
  {
    naturalAligment = System_Collections_Generic_Dictionary_string__int__TypeInfo->_2.naturalAligment;
    if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (System_Collections_Generic_Dictionary_string__int__c *)data->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_Dictionary_string__int__TypeInfo )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      Item = System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)data,
               (Il2CppObject *)StringLiteral_23283/*"servantId"*/,
               (const MethodInfo_345A880 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !Instance )
        goto LABEL_18;
      LODWORD(Instance[2].monitor) = Item;
      v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      Item = System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)data,
               (Il2CppObject *)StringLiteral_21230/*"limitCount"*/,
               (const MethodInfo_345A880 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !v8 )
        goto LABEL_18;
      HIDWORD(v8[2].monitor) = Item;
      Item = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Item )
        goto LABEL_18;
      *(_BYTE *)(Item + 52) = 1;
      Item = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Item
        || (*(_BYTE *)(Item + 53) = 1,
            logic = this->fields.logic,
            Item = sub_1C37100(BattleLogic_LOGICTYPE___TypeInfo, 2),
            !logic)
        || (logic->fields.logiclist = (struct BattleLogic_LOGICTYPE_array *)Item,
            sub_1C36FFC((CGThumbnailListItem_o *)&logic->fields.logiclist, Item, v10, v11),
            (v12 = this->fields.logic) == 0)
        || (logiclist = v12->fields.logiclist) == 0 )
      {
LABEL_18:
        sub_1C372B4(Item);
      }
      max_length = logiclist->max_length;
      if ( max_length )
      {
        logiclist->m_Items[0] = 18;
        if ( max_length != 1 )
        {
          logiclist->m_Items[1] = 21;
          goto LABEL_16;
        }
      }
    }
    else
    {
      sub_1C37574(data);
    }
    sub_1C372BC(Item);
  }
LABEL_16:
  SceneRootComponent__beginStartUp_41481188((SceneRootComponent_o *)this, 0);
  AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 1;
  Item = (__int64)this->fields.myFSM;
  if ( !Item )
    goto LABEL_18;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Item, (System_String_o *)StringLiteral_10906/*"QUEST_START"*/, 0);
}


void BattleRootComponent__endQuest(BattleRootComponent_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  long double v4; // q0
  __int64 v5; // x0
  __int64 v6; // x0
  long double v7; // q0
  __int64 v8; // x0
  __int64 v9; // x0
  const MethodInfo *v10; // x1
  System_Action_o *v11; // x20
  const MethodInfo *v12; // x2
  System_Collections_IEnumerator_o *OutGameAsset; // x1

  if ( (byte_4C45B24 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_BattleRootComponent_goNextScene__);
    sub_1C37058(&OptionManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AtlasManager__getInstance__);
    byte_4C45B24 = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_33;
  BattlePerformance__SetTimeScale(perf, 1.0, 0);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_33;
  BattlePerformance__procEndQuest(perf, 0);
  perf = (BattlePerformance_o *)this->fields.assetStorageLoadWrapper;
  if ( !perf )
    goto LABEL_33;
  AssetStorageLoadWrapper__ReleaseAll((AssetStorageLoadWrapper_o *)perf, 0);
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1C8776C(v4);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C8776C(v4);
  perf = **(BattlePerformance_o ***)(v6 + 184);
  if ( !perf )
    goto LABEL_33;
  AtlasManager__UnloadBuffIconAtlas((AtlasManager_o *)perf, 0);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__isSavedMemoryMode(0) )
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__ReleaseFaceBattleAtlas(0);
  }
  v8 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1C8776C(v7);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C8776C(v7);
  perf = **(BattlePerformance_o ***)(v9 + 184);
  if ( !perf
    || (AtlasManager__UnloadWarBoardAtlas((AtlasManager_o *)perf, 0), (perf = this->fields.perf) == 0)
    || (BattlePerformance__ReleaseEventInfoPointGauge(perf, 0), (perf = (BattlePerformance_o *)this->fields.data) == 0) )
  {
LABEL_33:
    sub_1C372B4(perf);
  }
  if ( !BattleData__IsWarBoard((BattleData_o *)perf, 0) )
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__ReleaseEventAtlas(0);
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__isSavedMemoryMode(0) )
  {
    v11 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_BattleRootComponent_goNextScene__, 0);
    OutGameAsset = BattleRootComponent__loadOutGameAsset(this, v11, v12);
    UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, OutGameAsset, 0);
  }
  else
  {
    BattleRootComponent__goNextScene(this, v10);
  }
}


void BattleRootComponent__goNextScene(BattleRootComponent_o *this, const MethodInfo *method)
{
  BattleRootComponent_o *v2; // x19
  struct BattleData_o *data; // x9
  struct BattleEntity_o *battle_ent; // x8
  struct QuestEntity_o *quest_ent; // x20
  int32_t questPhase; // w21
  struct BattleData_o *v7; // x8
  int32_t id; // w23
  int32_t win_lose; // w24
  int32_t v10; // w22
  int32_t WinResult; // w25
  BattleScriptRootComponent_TalkScriptInfo_o *v12; // x20
  const MethodInfo *v13; // x2

  v2 = this;
  if ( (byte_4C45B26 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (BattleRootComponent_o *)sub_1C37058(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    byte_4C45B26 = 1;
  }
  data = v2->fields.data;
  if ( !data )
    goto LABEL_10;
  battle_ent = data->fields.battle_ent;
  if ( !battle_ent )
    goto LABEL_10;
  quest_ent = data->fields.quest_ent;
  if ( !quest_ent )
    goto LABEL_10;
  questPhase = battle_ent->fields.questPhase;
  this = (BattleRootComponent_o *)QuestEntity__GetWarId(data->fields.quest_ent, 0);
  v7 = v2->fields.data;
  if ( !v7 )
    goto LABEL_10;
  id = quest_ent->fields.id;
  win_lose = v7->fields.win_lose;
  v10 = (int)this;
  WinResult = BattleData__getWinResult(v2->fields.data, 0);
  v12 = (BattleScriptRootComponent_TalkScriptInfo_o *)sub_1C372A4(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
  BattleScriptRootComponent_TalkScriptInfo___ctor_47827504(v12, v10, id, questPhase, 4, win_lose, WinResult, 0, 0);
  this = (BattleRootComponent_o *)v2->fields.data;
  if ( !this
    || (BattleData__release((BattleData_o *)this, 0),
        (this = (BattleRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
LABEL_10:
    sub_1C372B4(this);
  }
  CommonUI__SetMaskFadeInitColor((CommonUI_o *)this, 1, 0);
  BattleRootComponent__TransitionTerminalOrBattleScript(v2, v12, v13);
}


System_Collections_IEnumerator_o *BattleRootComponent__loadOutGameAsset(
        BattleRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4C45B25 & 1) == 0 )
  {
    sub_1C37058(&BattleRootComponent__loadOutGameAsset_d__20_TypeInfo);
    byte_4C45B25 = 1;
  }
  v5 = sub_1C372A4(BattleRootComponent__loadOutGameAsset_d__20_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 64) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 64), (int32_t)callback, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void BattleRootComponent__setCallbackBeginResume(
        BattleRootComponent_o *this,
        BattleRootComponent_callBackBeginResume_o *func,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.callbackBeginResumeFunc = func;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.callbackBeginResumeFunc, (int32_t)func, (int32_t)method, v3);
}


void BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26___ctor(
        BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
}


bool BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26__MoveNext(
        BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *v4; // x19
  int32_t _1__state; // w8
  struct BattleEntity_o *battleEntity; // x8
  BattleInfoData_o *battleInfo; // x0
  BattleUserServantData_o *UserServantFromID; // x0
  BattleUserServantData_o *v9; // x19
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct AddSkillData_array *classBoardAddCommandSpells; // x1
  BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *v13; // x0
  _BOOL8 EntityList; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *v17; // x9
  int v18; // w10
  int32_t _7__wrap5; // w8
  int v20; // w9
  bool result; // w0
  struct AddSkillData_array *_7__wrap1; // x11
  int max_length; // w12
  AddSkillData_o *v24; // x8
  ClassBoardCommandSpellMaster_o *classBoardCSMaster; // x0
  BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *v26; // x9
  __int128 v27; // q0
  struct System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__o *p__7__wrap3; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *v31; // x8
  ClassBoardCommandSpellEntity_o *current; // x0
  struct System_Int32_array *EffectIdArray; // x1
  BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct System_Int32_array *_7__wrap4; // x10
  unsigned int v38; // w11
  const MethodInfo *v39; // x1
  int32_t v40; // w8
  System_Collections_Generic_List_Enumerator_T__o v41[2]; // [xsp+8h] [xbp-68h] BYREF
  BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o **v42; // [xsp+40h] [xbp-30h]
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+48h] [xbp-28h] BYREF
  BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *v44; // [xsp+58h] [xbp-18h] BYREF

  v44 = this;
  v4 = this;
  if ( (byte_4C45B35 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__);
    this = (BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *)sub_1C37058(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
    byte_4C45B35 = 1;
  }
  v42 = &v44;
  entitys = 0;
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    _7__wrap5 = v4->fields.__7__wrap5;
    v4->fields.__1__state = -3;
    v20 = _7__wrap5 + 1;
    v4->fields.__7__wrap5 = _7__wrap5 + 1;
    goto LABEL_32;
  }
  if ( _1__state )
    return 0;
  battleEntity = v4->fields.battleEntity;
  v4->fields.__1__state = -1;
  if ( !battleEntity )
    sub_1C372B4(this);
  battleInfo = battleEntity->fields.battleInfo;
  if ( !battleInfo )
    sub_1C372B4(0);
  UserServantFromID = BattleInfoData__getUserServantFromID(battleInfo, v4->fields.userSvtId, 0);
  v9 = UserServantFromID;
  if ( !UserServantFromID
    || BasicHelper__IsNullOrEmpty(
         (System_Collections_ICollection_o *)UserServantFromID->fields.classBoardAddCommandSpells,
         0) )
  {
    return 0;
  }
  classBoardAddCommandSpells = v9->fields.classBoardAddCommandSpells;
  v13 = v44;
  v44->fields.__7__wrap1 = classBoardAddCommandSpells;
  sub_1C36FFC((CGThumbnailListItem_o *)&v13->fields.__7__wrap1, (int32_t)classBoardAddCommandSpells, v10, v11);
  v17 = v44;
  v18 = 0;
  v44->fields.__7__wrap2 = 0;
  while ( 1 )
  {
    _7__wrap1 = v17->fields.__7__wrap1;
    if ( !_7__wrap1 )
      sub_1C372B4(EntityList);
    max_length = _7__wrap1->max_length;
    if ( v18 >= max_length )
    {
      v17->fields.__7__wrap1 = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&v17->fields.__7__wrap1, 0, v15, v16);
      return 0;
    }
    if ( v18 >= (unsigned int)max_length )
      sub_1C372BC(EntityList);
    v24 = _7__wrap1->m_Items[v18];
    if ( !v24 )
      sub_1C372B4(EntityList);
    classBoardCSMaster = v17->fields.classBoardCSMaster;
    if ( !classBoardCSMaster )
      sub_1C372B4(0);
    EntityList = ClassBoardCommandSpellMaster__TryGetEntityList(
                   classBoardCSMaster,
                   &entitys,
                   v24->fields.id,
                   v24->fields.lv,
                   0);
    if ( EntityList )
      break;
    v17 = v44;
LABEL_29:
    v18 = v17->fields.__7__wrap2 + 1;
    v17->fields.__7__wrap2 = v18;
  }
  if ( !entitys )
    sub_1C372B4(0);
  System_Collections_Generic_List_object___GetEnumerator(
    v41,
    (System_Collections_Generic_List_object__o *)entitys,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
  v26 = v44;
  v27 = *(_OWORD *)&v41[0].fields._list;
  p__7__wrap3 = &v44->fields.__7__wrap3;
  v41[1] = v41[0];
  v44->fields.__7__wrap3.fields._current = (struct ClassBoardCommandSpellEntity_o *)v41[0].fields._current;
  *(_OWORD *)&v26->fields.__7__wrap3.fields._list = v27;
  sub_1C36FFC((CGThumbnailListItem_o *)p__7__wrap3, 0, v29, v30);
  v31 = v44;
  v44->fields.__1__state = -3;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v31->fields.__7__wrap3,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__) )
    {
      BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26____m__Finally1(v44, v39);
      v17 = v44;
      v44->fields.__7__wrap3.fields._list = 0;
      *(_QWORD *)&v17->fields.__7__wrap3.fields._index = 0;
      v17->fields.__7__wrap3.fields._current = 0;
      goto LABEL_29;
    }
    current = v44->fields.__7__wrap3.fields._current;
    if ( !current )
      sub_1C372B4(0);
    EffectIdArray = ClassBoardCommandSpellEntity__GetEffectIdArray(current, 0);
    v34 = v44;
    v44->fields.__7__wrap4 = EffectIdArray;
    sub_1C36FFC((CGThumbnailListItem_o *)&v34->fields.__7__wrap4, (int32_t)EffectIdArray, v35, v36);
    v4 = v44;
    v20 = 0;
    v44->fields.__7__wrap5 = 0;
LABEL_32:
    _7__wrap4 = v4->fields.__7__wrap4;
    if ( !_7__wrap4 )
      sub_1C372B4(this);
    v38 = _7__wrap4->max_length;
    if ( v20 < (int)v38 )
      break;
    v4->fields.__7__wrap4 = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.__7__wrap4, 0, v2, v3);
    v31 = v44;
  }
  if ( v20 >= v38 )
    sub_1C372BC(this);
  v40 = _7__wrap4->m_Items[v20];
  result = 1;
  v4->fields.__1__state = 1;
  v4->fields.__2__current = v40;
  return result;
}


System_Collections_Generic_IEnumerator_int__o *BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26__System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator(
        BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *v6; // x20
  struct BattleEntity_o *_3__battleEntity; // x1
  struct ClassBoardCommandSpellMaster_o *_3__classBoardCSMaster; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  System_Collections_Generic_IEnumerator_int__o *result; // x0

  if ( (byte_4C45B38 & 1) == 0 )
  {
    sub_1C37058(&BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_TypeInfo);
    byte_4C45B38 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
    v6 = this;
  }
  else
  {
    v6 = (BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *)sub_1C372A4(BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
  }
  _3__battleEntity = this->fields.__3__battleEntity;
  v6->fields.battleEntity = _3__battleEntity;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6->fields.battleEntity, (int32_t)_3__battleEntity, v4, v5);
  _3__classBoardCSMaster = this->fields.__3__classBoardCSMaster;
  v6->fields.classBoardCSMaster = _3__classBoardCSMaster;
  sub_1C36FFC((CGThumbnailListItem_o *)&v6->fields.classBoardCSMaster, (int32_t)_3__classBoardCSMaster, v9, v10);
  result = (System_Collections_Generic_IEnumerator_int__o *)v6;
  v6->fields.userSvtId = this->fields.__3__userSvtId;
  return result;
}


int32_t BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26__System_Collections_Generic_IEnumerator_System_Int32__get_Current(
        BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26__System_Collections_IEnumerator_Reset(
        BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26__System_Collections_IEnumerator_get_Current(
        BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  int32_t _2__current; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4C45B37 & 1) == 0 )
  {
    sub_1C37058(&int_TypeInfo);
    byte_4C45B37 = 1;
  }
  _2__current = this->fields.__2__current;
  return (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &_2__current, v2, v3, v4, v5, v6, v7);
}


void BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26__System_IDisposable_Dispose(
        BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26____m__Finally1(this, method);
}


void BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26____m__Finally1(
        BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C45B36 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
    byte_4C45B36 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap3,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
}


void BattleRootComponent__LoadAsset_d__13___ctor(
        BattleRootComponent__LoadAsset_d__13_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleRootComponent__LoadAsset_d__13__MoveNext(
        BattleRootComponent__LoadAsset_d__13_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  BattleRootComponent__LoadAsset_d__13_o *v4; // x19
  struct BattleRootComponent_o *_4__this; // x25
  Il2CppObject *v6; // x21
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_WaitForEndOfFrame_o *v9; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  bool result; // w0
  System_Collections_IEnumerator_o *v14; // x0
  CGThumbnailListItem_o *v15; // x19
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int v18; // w8
  struct BattleRootComponent___c__DisplayClass13_0_o *_8__1; // x23
  QuestPhaseEntity_o *ent; // x22
  int32_t eventId; // w21
  System_Action_o *v22; // x24
  const MethodInfo *v23; // x4
  System_Collections_IEnumerator_o *AssetsIndependentToMainOne; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x21
  BattleDataDefine_c *v28; // x0
  Il2CppObject *v29; // x24
  System_String_o *ASSET_BATTLE_COMMON; // x22
  AssetLoader_LoadEndDataHandler_o *v31; // x23
  System_Collections_Generic_List_object__o *v32; // x21
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  BattleRootComponent_o *v35; // x0
  const MethodInfo *v36; // x4
  System_Int32_array *AllFieldMotionIds; // x0
  struct System_Int32_array **p_fieldMotionIds_5__3; // x21
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct BattleRootComponent___c__DisplayClass13_0_o *v41; // x22
  System_Collections_Generic_Dictionary_int__object__o *v42; // x23
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  struct System_Int32_array *v45; // x28
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v47; // x29
  int32_t v48; // w23
  __int64 v49; // x22
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  struct BattleRootComponent___c__DisplayClass13_0_o *v52; // x1
  BattleRootComponent__LoadAsset_d__13_o *v53; // x26
  __int64 v54; // x21
  System_String_o *v55; // x0
  AssetStorageLoadWrapper_o *v56; // x23
  System_String_o *v57; // x24
  struct BattleRootComponent_o *v58; // x19
  AssetLoader_LoadEndDataHandler_o *v59; // x25
  AssetManager_o *v60; // x21
  struct BattleRootComponent___c__DisplayClass13_0_o *v61; // x8
  struct System_Int32_array *fieldMotionIds_5__3; // x9
  struct BattleRootComponent___c__DisplayClass13_2_o *v63; // x8
  struct BattleRootComponent___c__DisplayClass13_2_o **p__8__2; // x21
  AssetData_o *uniqueCameraData; // x1
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  System_Collections_Generic_IEnumerable_TSource__o *assetDataByIndex; // x21
  BattleRootComponent___c_c *v69; // x0
  System_Func_T__TResult__o *_9__13_2; // x22
  Il2CppObject *v71; // x23
  struct BattleRootComponent___c_StaticFields *static_fields; // x0
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v75; // x0
  BattleRootComponent___c_c *v76; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x21
  System_Func_T__TResult__o *_9__13_3; // x22
  Il2CppObject *v79; // x23
  struct BattleRootComponent___c_StaticFields *v80; // x0
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v83; // x0
  System_Collections_Generic_List_TSource__o *v84; // x0
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  struct BattleEntity_o *battleEnt; // x8
  Il2CppObject *v88; // x21
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  System_String_o *v91; // x0
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  struct BattleRootComponent___c__DisplayClass13_2_o *_8__2; // x8
  BattleRootComponent__LoadAsset_d__13_o *v95; // x21
  AssetStorageLoadWrapper_o *v96; // x23
  Il2CppObject *v97; // x24
  AssetLoader_LoadEndDataHandler_o *v98; // x22
  struct BattleRootComponent___c__DisplayClass13_0_o *v99; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v100; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v101; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v102; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v103; // x8
  struct BattlePerformance_o *perf; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v105; // x8
  struct BattlePerformance_o *v106; // x8
  struct BattlePerformance_o *v107; // x8
  AssumedBattleAssetLoadManager_o *AssumedBattleAssetLoadManager_k__BackingField; // x21
  struct BattleRootComponent___c__DisplayClass13_0_o *v109; // x8
  struct BattlePerformance_o *v110; // x8
  const MethodInfo *v111; // x1
  int32_t v112; // w2
  const MethodInfo *v113; // x3
  int v114; // [xsp+Ch] [xbp-64h] BYREF

  v4 = this;
  if ( (byte_4C45B39 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_AssumedBattleAssetLoadManager_Release_AssumedBattleAssetSearcherBeforeBattle___);
    sub_1C37058(&BattleDataDefine_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__AssetData___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__AssetData__TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_OrderBy_KeyValuePair_int__AssetData___int___);
    sub_1C37058(&Method_System_Linq_Enumerable_Select_KeyValuePair_int__AssetData___AssetData___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_AssetData___);
    sub_1C37058(&System_Func_KeyValuePair_int__AssetData___int__TypeInfo);
    sub_1C37058(&System_Func_KeyValuePair_int__AssetData___AssetData__TypeInfo);
    sub_1C37058(&System_GC_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_AssetData___ctor__);
    sub_1C37058(&System_Collections_Generic_List_AssetData__TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&OptionManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C37058(&Method_BattleRootComponent___c__LoadAsset_b__13_2__);
    sub_1C37058(&Method_BattleRootComponent___c__LoadAsset_b__13_3__);
    sub_1C37058(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__0__);
    sub_1C37058(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__1__);
    sub_1C37058(&BattleRootComponent___c__DisplayClass13_0_TypeInfo);
    sub_1C37058(&Method_BattleRootComponent___c__DisplayClass13_1__LoadAsset_b__4__);
    sub_1C37058(&BattleRootComponent___c__DisplayClass13_1_TypeInfo);
    sub_1C37058(&Method_BattleRootComponent___c__DisplayClass13_2__LoadAsset_b__5__);
    sub_1C37058(&BattleRootComponent___c__DisplayClass13_2_TypeInfo);
    sub_1C37058(&BattleRootComponent___c_TypeInfo);
    sub_1C37058(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C37058(&StringLiteral_3104/*"Battle/UniqueCamera/"*/);
    this = (BattleRootComponent__LoadAsset_d__13_o *)sub_1C37058(&StringLiteral_15059/*"UniqueCameraPrefab"*/);
    byte_4C45B39 = 1;
  }
  v114 = 0;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v6 = (Il2CppObject *)sub_1C372A4(BattleRootComponent___c__DisplayClass13_0_TypeInfo);
      System_Object___ctor(v6, 0);
      v4->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass13_0_o *)v6;
      sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v6, v7, v8);
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__LoadAsset_d__13_o *)OptionManager__IsSavedBattleMemoryMode(0);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_14;
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect(0);
      v9 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C372A4(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v9, 0);
      v4->fields.__2__current = (Il2CppObject *)v9;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C36FFC(p__2__current, (int32_t)v9, v11, v12);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    case 1:
      v4->fields.__1__state = -1;
      this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_110;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0, 0);
      this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_110;
      v14 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0);
      v4->fields.__2__current = (Il2CppObject *)v14;
      v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C36FFC(v15, (int32_t)v14, v16, v17);
      v18 = 2;
      goto LABEL_106;
    case 2:
      v4->fields.__1__state = -1;
LABEL_14:
      _8__1 = v4->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_110;
      _8__1->fields.isAssetsLoading = 1;
      ent = v4->fields.ent;
      eventId = v4->fields.eventId;
      v22 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        v22,
        (Il2CppObject *)_8__1,
        Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__0__,
        0);
      if ( !_4__this )
        goto LABEL_110;
      AssetsIndependentToMainOne = BattleRootComponent__LoadAssetsIndependentToMainOne(_4__this, ent, eventId, v22, v23);
      UnityEngine_MonoBehaviour__StartCoroutine_71252324(
        (UnityEngine_MonoBehaviour_o *)_4__this,
        AssetsIndependentToMainOne,
        0);
      this = (BattleRootComponent__LoadAsset_d__13_o *)v4->fields.__8__1;
      if ( !this )
        goto LABEL_110;
      this->fields.__2__current = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__2__current, 0, v25, v26);
      assetStorageLoadWrapper = _4__this->fields.assetStorageLoadWrapper;
      v28 = BattleDataDefine_TypeInfo;
      if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
        v28 = BattleDataDefine_TypeInfo;
      }
      v29 = (Il2CppObject *)v4->fields.__8__1;
      ASSET_BATTLE_COMMON = v28->static_fields->ASSET_BATTLE_COMMON;
      v31 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v31,
        v29,
        Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__1__,
        0);
      if ( !assetStorageLoadWrapper )
        goto LABEL_110;
      AssetStorageLoadWrapper__LoadAssetStorage(assetStorageLoadWrapper, ASSET_BATTLE_COMMON, v31, 1, 0);
      v32 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_AssetData__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v32,
        (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_AssetData___ctor__);
      v4->fields._motionDataList_5__2 = (struct System_Collections_Generic_List_AssetData__o *)v32;
      sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields._motionDataList_5__2, (int32_t)v32, v33, v34);
      AllFieldMotionIds = BattleRootComponent__GetAllFieldMotionIds(
                            v35,
                            v4->fields.battleEnt,
                            v4->fields.ent,
                            &v4->fields._baseMotionIds_5__4,
                            v36);
      v4->fields._fieldMotionIds_5__3 = AllFieldMotionIds;
      p_fieldMotionIds_5__3 = &v4->fields._fieldMotionIds_5__3;
      sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields._fieldMotionIds_5__3, (int32_t)AllFieldMotionIds, v39, v40);
      v41 = v4->fields.__8__1;
      if ( !v41 )
        goto LABEL_110;
      v41->fields.loadCompCnt = 0;
      v42 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__AssetData__TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v42,
        (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__AssetData___ctor__);
      v41->fields.assetDataByIndex = (struct System_Collections_Generic_Dictionary_int__AssetData__o *)v42;
      sub_1C36FFC((CGThumbnailListItem_o *)&v41->fields.assetDataByIndex, (int32_t)v42, v43, v44);
      v45 = *p_fieldMotionIds_5__3;
      if ( !*p_fieldMotionIds_5__3 )
        goto LABEL_110;
      max_length = v45->max_length;
      if ( (int)max_length < 1 )
        goto LABEL_33;
      v47 = 0;
      break;
    case 3:
      v4->fields.__1__state = -1;
      goto LABEL_38;
    case 4:
      v4->fields.__1__state = -1;
      goto LABEL_44;
    case 5:
      v4->fields.__1__state = -1;
      goto LABEL_98;
    case 6:
      v4->fields.__1__state = -1;
      goto LABEL_101;
    default:
      return 0;
  }
  do
  {
    if ( v47 >= (unsigned int)max_length )
      sub_1C372BC(this);
    v48 = v45->m_Items[v47];
    v49 = sub_1C372A4(BattleRootComponent___c__DisplayClass13_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v49, 0);
    if ( !v49 )
      goto LABEL_110;
    v52 = v4->fields.__8__1;
    v53 = v4;
    *(_QWORD *)(v49 + 24) = v52;
    v54 = v49 + 24;
    sub_1C36FFC((CGThumbnailListItem_o *)(v49 + 24), (int32_t)v52, v50, v51);
    *(_DWORD *)(v49 + 16) = v47;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v55 = BattleDataDefine__FieldMotionPath(v48, 0);
    v56 = _4__this->fields.assetStorageLoadWrapper;
    v57 = v55;
    v58 = _4__this;
    v59 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v59,
      (Il2CppObject *)v49,
      Method_BattleRootComponent___c__DisplayClass13_1__LoadAsset_b__4__,
      0);
    if ( !v56 )
      goto LABEL_110;
    this = (BattleRootComponent__LoadAsset_d__13_o *)AssetStorageLoadWrapper__LoadAssetStorage(v56, v57, v59, 1, 0);
    _4__this = v58;
    v4 = v53;
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !*(_QWORD *)v54 )
        goto LABEL_110;
      ++*(_DWORD *)(*(_QWORD *)v54 + 40LL);
    }
    LODWORD(max_length) = v45->max_length;
    ++v47;
  }
  while ( (__int64)v47 < (int)max_length );
LABEL_33:
  this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  v60 = (AssetManager_o *)this;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
  if ( !v60 )
    goto LABEL_110;
  AssetManager__UpdateLoadParallelMax(v60, BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX, 0);
LABEL_38:
  v61 = v4->fields.__8__1;
  if ( !v61 )
    goto LABEL_110;
  if ( !v61->fields.commonData )
  {
LABEL_42:
    v4->fields.__2__current = 0;
    v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
    sub_1C36FFC(v15, 0, v2, v3);
    v18 = 3;
LABEL_106:
    LODWORD(v15[-1].fields._ThumbnailSpritePath_k__BackingField) = v18;
    return 1;
  }
  fieldMotionIds_5__3 = v4->fields._fieldMotionIds_5__3;
  if ( !fieldMotionIds_5__3 )
    goto LABEL_110;
  if ( v61->fields.loadCompCnt < SLODWORD(fieldMotionIds_5__3->max_length) )
    goto LABEL_42;
  assetDataByIndex = (System_Collections_Generic_IEnumerable_TSource__o *)v61->fields.assetDataByIndex;
  v69 = BattleRootComponent___c_TypeInfo;
  if ( !BattleRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleRootComponent___c_TypeInfo);
    v69 = BattleRootComponent___c_TypeInfo;
  }
  _9__13_2 = (System_Func_T__TResult__o *)v69->static_fields->__9__13_2;
  if ( !_9__13_2 )
  {
    if ( !v69->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v69);
      v69 = BattleRootComponent___c_TypeInfo;
    }
    v71 = (Il2CppObject *)v69->static_fields->__9;
    _9__13_2 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_KeyValuePair_int__AssetData___int__TypeInfo);
    System_Func_KeyValuePair_int__object___int____ctor(
      _9__13_2,
      v71,
      Method_BattleRootComponent___c__LoadAsset_b__13_2__,
      0);
    static_fields = BattleRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__13_2 = (struct System_Func_KeyValuePair_int__AssetData___int__o *)_9__13_2;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__13_2, (int32_t)_9__13_2, v73, v74);
  }
  v75 = System_Linq_Enumerable__OrderBy_KeyValuePair_int__object___int_(
          assetDataByIndex,
          (System_Func_TSource__TKey__o *)_9__13_2,
          (const MethodInfo_3116FE0 *)Method_System_Linq_Enumerable_OrderBy_KeyValuePair_int__AssetData___int___);
  v76 = BattleRootComponent___c_TypeInfo;
  v77 = (System_Collections_Generic_IEnumerable_TSource__o *)v75;
  if ( !BattleRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleRootComponent___c_TypeInfo);
    v76 = BattleRootComponent___c_TypeInfo;
  }
  _9__13_3 = (System_Func_T__TResult__o *)v76->static_fields->__9__13_3;
  if ( !_9__13_3 )
  {
    if ( !v76->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v76);
      v76 = BattleRootComponent___c_TypeInfo;
    }
    v79 = (Il2CppObject *)v76->static_fields->__9;
    _9__13_3 = (System_Func_T__TResult__o *)sub_1C372A4(System_Func_KeyValuePair_int__AssetData___AssetData__TypeInfo);
    System_Func_KeyValuePair_int__object___object____ctor(
      _9__13_3,
      v79,
      Method_BattleRootComponent___c__LoadAsset_b__13_3__,
      0);
    v80 = BattleRootComponent___c_TypeInfo->static_fields;
    v80->__9__13_3 = (struct System_Func_KeyValuePair_int__AssetData___AssetData__o *)_9__13_3;
    sub_1C36FFC((CGThumbnailListItem_o *)&v80->__9__13_3, (int32_t)_9__13_3, v81, v82);
  }
  v83 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_int__object___object_(
                                                               v77,
                                                               (System_Func_TSource__TResult__o *)_9__13_3,
                                                               (const MethodInfo_31189AC *)Method_System_Linq_Enumerable_Select_KeyValuePair_int__AssetData___AssetData___);
  v84 = System_Linq_Enumerable__ToList_object_(
          v83,
          (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_AssetData___);
  v4->fields._motionDataList_5__2 = (struct System_Collections_Generic_List_AssetData__o *)v84;
  sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields._motionDataList_5__2, (int32_t)v84, v85, v86);
  battleEnt = v4->fields.battleEnt;
  if ( !battleEnt )
    goto LABEL_110;
  this = (BattleRootComponent__LoadAsset_d__13_o *)battleEnt->fields.battleInfo;
  if ( !this )
    goto LABEL_110;
  this = (BattleRootComponent__LoadAsset_d__13_o *)BattleInfoData__GetUniqueCameraId(
                                                     (BattleInfoData_o *)this,
                                                     v4->fields.ent,
                                                     0);
  v114 = (int)this;
  if ( (_DWORD)this )
  {
    v88 = (Il2CppObject *)sub_1C372A4(BattleRootComponent___c__DisplayClass13_2_TypeInfo);
    System_Object___ctor(v88, 0);
    v4->fields.__8__2 = (struct BattleRootComponent___c__DisplayClass13_2_o *)v88;
    sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.__8__2, (int32_t)v88, v89, v90);
    v91 = System_Int32__ToString((int32_t)&v114, 0);
    this = (BattleRootComponent__LoadAsset_d__13_o *)System_String__Concat_63561656(
                                                       (System_String_o *)StringLiteral_3104/*"Battle/UniqueCamera/"*/,
                                                       v91,
                                                       0);
    _8__2 = v4->fields.__8__2;
    if ( !_8__2 )
      goto LABEL_110;
    _8__2->fields.uniqueCameraData = 0;
    v95 = this;
    sub_1C36FFC((CGThumbnailListItem_o *)&_8__2->fields, 0, v92, v93);
    if ( !_4__this )
      goto LABEL_110;
    v96 = _4__this->fields.assetStorageLoadWrapper;
    v97 = (Il2CppObject *)v4->fields.__8__2;
    v98 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v98,
      v97,
      Method_BattleRootComponent___c__DisplayClass13_2__LoadAsset_b__5__,
      0);
    if ( !v96 )
      goto LABEL_110;
    this = (BattleRootComponent__LoadAsset_d__13_o *)AssetStorageLoadWrapper__LoadAssetStorage(
                                                       v96,
                                                       (System_String_o *)v95,
                                                       v98,
                                                       1,
                                                       0);
    v4->fields._loadSucceeded_5__5 = (unsigned __int8)this & 1;
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v99 = v4->fields.__8__1;
      if ( !v99 )
        goto LABEL_110;
      this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_110;
      BattlePerformance__loadStorageObjectCameraCommon((BattlePerformance_o *)this, v99->fields.commonData, 0);
    }
LABEL_44:
    p__8__2 = &v4->fields.__8__2;
    v63 = v4->fields.__8__2;
    if ( !v63 )
      goto LABEL_110;
    uniqueCameraData = v63->fields.uniqueCameraData;
    if ( !uniqueCameraData )
    {
      v4->fields.__2__current = 0;
      v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C36FFC(v15, 0, v2, v3);
      v18 = 4;
      goto LABEL_106;
    }
    if ( v4->fields._loadSucceeded_5__5 )
    {
      if ( !_4__this )
        goto LABEL_110;
      this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_110;
      BattlePerformance__loadStorageObjectCamera(
        (BattlePerformance_o *)this,
        uniqueCameraData,
        (System_String_o *)StringLiteral_15059/*"UniqueCameraPrefab"*/,
        0);
      *p__8__2 = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.__8__2, 0, v66, v67);
    }
    else
    {
      *p__8__2 = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.__8__2, 0, v2, v3);
      if ( !_4__this )
        goto LABEL_110;
    }
  }
  else
  {
    if ( !_4__this )
      goto LABEL_110;
    v100 = v4->fields.__8__1;
    if ( !v100 )
      goto LABEL_110;
    this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
    if ( !this )
      goto LABEL_110;
    BattlePerformance__loadStorageObjectCameraCommon((BattlePerformance_o *)this, v100->fields.commonData, 0);
  }
  v101 = v4->fields.__8__1;
  if ( !v101 )
    goto LABEL_110;
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_110;
  BattlePerformance__loadStorageObjectCommonMotion((BattlePerformance_o *)this, v101->fields.commonData, 0);
  v102 = v4->fields.__8__1;
  if ( !v102 )
    goto LABEL_110;
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_110;
  BattlePerformance__SetEffectControlObjectFromCommonAsset((BattlePerformance_o *)this, v102->fields.commonData, 0);
  v103 = v4->fields.__8__1;
  if ( !v103 )
    goto LABEL_110;
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_110;
  BattlePerformance__loadFieldMotion(
    (BattlePerformance_o *)this,
    v103->fields.commonData,
    v4->fields._motionDataList_5__2,
    0);
  perf = _4__this->fields.perf;
  if ( !perf )
    goto LABEL_110;
  this = (BattleRootComponent__LoadAsset_d__13_o *)perf->fields._fmManager_k__BackingField;
  if ( !this )
    goto LABEL_110;
  FieldMotionManager__SetBaseFieldMotionIds((FieldMotionManager_o *)this, v4->fields._baseMotionIds_5__4, 0);
  v105 = v4->fields.__8__1;
  if ( !v105 )
    goto LABEL_110;
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_110;
  BattlePerformance__SetRootCameraInfoToActionCamera((BattlePerformance_o *)this, v105->fields.commonData, 0);
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_110;
  BattlePerformance__Initialize((BattlePerformance_o *)this, 0);
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.data;
  if ( !this )
    goto LABEL_110;
  BattleData__loadFsmGameObject((BattleData_o *)this, 0);
  v106 = _4__this->fields.perf;
  if ( !v106 )
    goto LABEL_110;
  this = (BattleRootComponent__LoadAsset_d__13_o *)v106->fields._AssumedBattleAssetLoadManager_k__BackingField;
  if ( !this )
    goto LABEL_110;
  AssumedBattleAssetLoadManager__Release_object_(
    (AssumedBattleAssetLoadManager_o *)this,
    (const MethodInfo_30C943C *)Method_AssumedBattleAssetLoadManager_Release_AssumedBattleAssetSearcherBeforeBattle___);
  v107 = _4__this->fields.perf;
  if ( !v107 )
    goto LABEL_110;
  AssumedBattleAssetLoadManager_k__BackingField = v107->fields._AssumedBattleAssetLoadManager_k__BackingField;
  this = (BattleRootComponent__LoadAsset_d__13_o *)AssumedBattleAssetSearcherBeforeBattle__Create(0);
  if ( !AssumedBattleAssetLoadManager_k__BackingField )
    goto LABEL_110;
  AssumedBattleAssetLoadManager__Preload(
    AssumedBattleAssetLoadManager_k__BackingField,
    (AssumedBattleAssetSearcherBase_o *)this,
    0);
LABEL_98:
  v109 = v4->fields.__8__1;
  if ( !v109 )
    goto LABEL_110;
  if ( v109->fields.isAssetsLoading )
  {
    v4->fields.__2__current = 0;
    v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
    sub_1C36FFC(v15, 0, v2, v3);
    v18 = 5;
    goto LABEL_106;
  }
LABEL_101:
  if ( !_4__this )
    goto LABEL_110;
  v110 = _4__this->fields.perf;
  if ( !v110 )
    goto LABEL_110;
  this = (BattleRootComponent__LoadAsset_d__13_o *)v110->fields._AssumedBattleAssetLoadManager_k__BackingField;
  if ( !this )
    goto LABEL_110;
  if ( AssumedBattleAssetLoadManager__IsPreloading((AssumedBattleAssetLoadManager_o *)this, 0) )
  {
    v4->fields.__2__current = 0;
    v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
    sub_1C36FFC(v15, 0, v112, v113);
    v18 = 6;
    goto LABEL_106;
  }
  BattleRootComponent__SetupObjectsExtractedFromLoadedAssets(_4__this, v111);
  this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_110:
    sub_1C372B4(this);
  AvalonSceneManager__endInitialize((AvalonSceneManager_o *)this, (SceneRootComponent_o *)_4__this, 0);
  return 0;
}


Il2CppObject *BattleRootComponent__LoadAsset_d__13__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleRootComponent__LoadAsset_d__13_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleRootComponent__LoadAsset_d__13__System_Collections_IEnumerator_Reset(
        BattleRootComponent__LoadAsset_d__13_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_BattleRootComponent__LoadAsset_d__13_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *BattleRootComponent__LoadAsset_d__13__System_Collections_IEnumerator_get_Current(
        BattleRootComponent__LoadAsset_d__13_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleRootComponent__LoadAsset_d__13__System_IDisposable_Dispose(
        BattleRootComponent__LoadAsset_d__13_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleRootComponent__LoadAssetsIndependentToMainOne_d__14___ctor(
        BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleRootComponent__LoadAssetsIndependentToMainOne_d__14__MoveNext(
        BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *v4; // x19
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *v7; // x22
  Il2CppObject **p__8__1; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t BattleEffectId; // w22
  System_String_o *v12; // x0
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x23
  Il2CppObject *v14; // x25
  BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *v15; // x22
  AssetLoader_LoadEndDataHandler_o *v16; // x24
  Il2CppObject *Master_object; // x22
  System_Collections_Generic_IEnumerable_T__o *v18; // x23
  System_Collections_Generic_List_int__o *v19; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppObject *SingleEntity; // x21
  System_Collections_Generic_HashSet_int__o *v24; // x23
  int32_t v25; // w22
  DataMasterBase_TMaster__TEntity__PKType__o *v26; // x22
  _BOOL8 v27; // x0
  _BOOL8 v28; // x0
  struct BattleRootComponent___c__DisplayClass14_0_o *_8__1; // x26
  System_String_o *monitor; // x23
  System_Action_o *_9__8; // x24
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  AssetStorageLoadWrapper_o *v34; // x22
  Il2CppObject *v35; // x24
  System_Action_o *v36; // x23
  BattleRootComponent_o *v37; // x0
  const MethodInfo *v38; // x2
  __int64 v39; // x2
  __int64 v40; // x3
  __int64 v41; // x4
  __int64 v42; // x5
  __int64 v43; // x6
  __int64 v44; // x7
  Il2CppObject *v45; // x1
  System_String_o *v46; // x0
  struct BattleRootComponent___c__DisplayClass14_0_o *v47; // x25
  System_String_o *v48; // x21
  AssetStorageLoadWrapper_o *v49; // x22
  AssetLoader_LoadEndDataHandler_o *_9__9; // x23
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  _BOOL8 Wrapper__LoadAssetStorage; // x0
  struct BattleRootComponent___c__DisplayClass14_0_o *v54; // x8
  long double v55; // q0
  __int64 v56; // x0
  __int64 v57; // x0
  Il2CppObject *v58; // x23
  AtlasManager_o *v59; // x21
  System_Action_o *v60; // x22
  Il2CppObject *v61; // x22
  System_Action_o *v62; // x21
  Il2CppObject *v63; // x22
  System_Action_o *v64; // x21
  Il2CppObject *v65; // x22
  BattlePerformance_o *perf; // x20
  System_Action_o *v67; // x21
  struct BattleRootComponent___c__DisplayClass14_0_o *v68; // x8
  Il2CppObject *v69; // x20
  System_Action_o *v70; // x21
  long double v71; // q0
  __int64 v72; // x0
  __int64 v73; // x0
  long double v74; // q0
  __int64 v75; // x0
  __int64 v76; // x0
  Il2CppObject *v77; // x22
  AtlasManager_o *v78; // x20
  System_Action_o *v79; // x21
  AssetManager_o *v80; // x20
  struct BattleRootComponent___c__DisplayClass14_0_o *v81; // x8
  CGThumbnailListItem_o *v82; // x19
  struct System_Int32_array *v83; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  struct System_Int32_array *v86; // x8
  _QWORD *v87; // x9
  __int64 v88; // x10
  const MethodInfo *v89; // x1
  System_Collections_Generic_IEnumerable_T__o *ClassBoardCommandSpellEffectId; // x0
  System_Int32_array *v91; // x21
  AssetManager_o *v92; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v94; // w2
  const MethodInfo *v95; // x3
  BattleRootComponent_o *_4__this; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_int__o v97; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v98; // [xsp+20h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v100; // [xsp+40h] [xbp-80h] BYREF
  int32_t v101; // [xsp+5Ch] [xbp-64h] BYREF

  v4 = this;
  if ( (byte_4C45B3A & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&BattleDataDefine_TypeInfo);
    sub_1C37058(&BattleEffectUtility_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_BattleMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_BgmMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_BuffMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ConstantMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    sub_1C37058(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C37058(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C37058(&int_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor___78055976);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&OptionManager_TypeInfo);
    sub_1C37058(&ServantAssetLoadManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AtlasManager__getInstance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C37058(&SoundManager_TypeInfo);
    sub_1C37058(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__0__);
    sub_1C37058(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__1__);
    sub_1C37058(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__2__);
    sub_1C37058(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__3__);
    sub_1C37058(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__4__);
    sub_1C37058(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__5__);
    sub_1C37058(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__6__);
    sub_1C37058(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__7__);
    sub_1C37058(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__8__);
    sub_1C37058(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__9__);
    sub_1C37058(&BattleRootComponent___c__DisplayClass14_0_TypeInfo);
    sub_1C37058(&StringLiteral_2768/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE"*/);
    sub_1C37058(&StringLiteral_2763/*"BATTLE_EFFECT_ID_3003001"*/);
    sub_1C37058(&StringLiteral_3091/*"Battle/DropEffect/{0}"*/);
    sub_1C37058(&StringLiteral_3092/*"Battle/Effect/"*/);
    sub_1C37058(&StringLiteral_2769/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE_PIERCE"*/);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)sub_1C37058(&StringLiteral_3084/*"Battle"*/);
    byte_4C45B3A = 1;
  }
  v101 = 0;
  memset(&v100, 0, sizeof(v100));
  entity = 0;
  memset(&v98, 0, sizeof(v98));
  _1__state = v4->fields.__1__state;
  if ( _1__state == 2 )
  {
    v4->fields.__1__state = -1;
  }
  else
  {
    _4__this = v4->fields.__4__this;
    if ( _1__state != 1 )
    {
      result = 0;
      if ( _1__state )
        return result;
      v4->fields.__1__state = -1;
      v7 = (Il2CppObject *)sub_1C372A4(BattleRootComponent___c__DisplayClass14_0_TypeInfo);
      System_Object___ctor(v7, 0);
      v4->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass14_0_o *)v7;
      p__8__1 = (Il2CppObject **)&v4->fields.__8__1;
      sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v7, v9, v10);
      if ( v4->fields.__8__1 )
      {
        v4->fields.__8__1->fields.loadCnt = 0;
        this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)v4->fields.ent;
        v4->fields._loadCntMax_5__2 = 0;
        if ( this )
        {
          BattleEffectId = QuestPhaseEntity__getBattleEffectId((QuestPhaseEntity_o *)this, 0, 0);
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          v101 = BattleEffectUtility__setBattleEffectId(BattleEffectId, 0);
          v12 = System_Int32__ToString((int32_t)&v101, 0);
          this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)System_String__Concat_63561656(
                                                                                  (System_String_o *)StringLiteral_3092/*"Battle/Effect/"*/,
                                                                                  v12,
                                                                                  0);
          ++v4->fields._loadCntMax_5__2;
          if ( _4__this )
          {
            assetStorageLoadWrapper = _4__this->fields.assetStorageLoadWrapper;
            v14 = *p__8__1;
            v15 = this;
            v16 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
            AssetLoader_LoadEndDataHandler___ctor(
              v16,
              v14,
              Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__0__,
              0);
            if ( assetStorageLoadWrapper )
            {
              this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)AssetStorageLoadWrapper__LoadAssetStorage(
                                                                                      assetStorageLoadWrapper,
                                                                                      (System_String_o *)v15,
                                                                                      v16,
                                                                                      1,
                                                                                      0);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                if ( !*p__8__1 )
                  goto LABEL_39;
                ++LODWORD((*p__8__1)[1].klass);
              }
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ConstantMaster___);
              this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_BuffMaster___);
              if ( this )
              {
                v18 = *(System_Collections_Generic_IEnumerable_T__o **)&this->fields._loadCntMax_5__2;
                v19 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
                System_Collections_Generic_List_int____ctor_58218708(
                  v19,
                  v18,
                  (const MethodInfo_37858D4 *)Method_System_Collections_Generic_List_int___ctor___78055976);
                if ( Master_object )
                {
                  this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ConstantMaster__GetValue(
                                                                                          (ConstantMaster_o *)Master_object,
                                                                                          (System_String_o *)StringLiteral_2768/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE"*/,
                                                                                          0);
                  if ( v19 )
                  {
                    items = v19->fields._items;
                    v21 = Method_System_Collections_Generic_List_int__Add__;
                    ++v19->fields._version;
                    if ( items )
                    {
                      size = v19->fields._size;
                      if ( (unsigned int)size >= LODWORD(items->max_length) )
                      {
                        System_Collections_Generic_List_int___AddWithResize(
                          v19,
                          (int32_t)this,
                          *(const MethodInfo_3786000 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v19->fields._size = size + 1;
                        items->m_Items[size] = (int)this;
                      }
                      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ConstantMaster__GetValue(
                                                                                              (ConstantMaster_o *)Master_object,
                                                                                              (System_String_o *)StringLiteral_2763/*"BATTLE_EFFECT_ID_3003001"*/,
                                                                                              0);
                      v83 = v19->fields._items;
                      v84 = Method_System_Collections_Generic_List_int__Add__;
                      ++v19->fields._version;
                      if ( v83 )
                      {
                        v85 = v19->fields._size;
                        if ( (unsigned int)v85 >= LODWORD(v83->max_length) )
                        {
                          System_Collections_Generic_List_int___AddWithResize(
                            v19,
                            (int32_t)this,
                            *(const MethodInfo_3786000 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v19->fields._size = v85 + 1;
                          v83->m_Items[v85] = (int)this;
                        }
                        this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ConstantMaster__GetValue(
                                                                                                (ConstantMaster_o *)Master_object,
                                                                                                (System_String_o *)StringLiteral_2769/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE_PIERCE"*/,
                                                                                                0);
                        v86 = v19->fields._items;
                        v87 = Method_System_Collections_Generic_List_int__Add__;
                        ++v19->fields._version;
                        if ( v86 )
                        {
                          v88 = v19->fields._size;
                          v89 = (const MethodInfo *)(unsigned int)this;
                          if ( (unsigned int)v88 >= LODWORD(v86->max_length) )
                          {
                            System_Collections_Generic_List_int___AddWithResize(
                              v19,
                              (int32_t)this,
                              *(const MethodInfo_3786000 **)(*(_QWORD *)(v87[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v19->fields._size = v88 + 1;
                            v86->m_Items[v88] = (int)this;
                          }
                          ClassBoardCommandSpellEffectId = (System_Collections_Generic_IEnumerable_T__o *)BattleRootComponent__GetClassBoardCommandSpellEffectId(_4__this, v89);
                          System_Collections_Generic_List_int___AddRange(
                            v19,
                            ClassBoardCommandSpellEffectId,
                            (const MethodInfo_378620C *)Method_System_Collections_Generic_List_int__AddRange__);
                          v91 = System_Collections_Generic_List_int___ToArray(
                                  v19,
                                  (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
                          if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
                          this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ServantAssetLoadManager__preloadBattleCommonEffect(
                                                                                                  v91,
                                                                                                  0);
                          if ( _4__this->fields.data )
                          {
                            BattleData__addLoadedCommonEffectPath(_4__this->fields.data, (System_String_array *)this, 0);
                            this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
                            v92 = (AssetManager_o *)this;
                            if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
                            if ( v92 )
                            {
                              AssetManager__UpdateLoadParallelMax(
                                v92,
                                BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX,
                                0);
                              v4->fields.__2__current = 0;
                              p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
                              sub_1C36FFC(p__2__current, 0, v94, v95);
                              result = 1;
                              LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
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
          }
        }
      }
      goto LABEL_39;
    }
    v4->fields.__1__state = -1;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_BattleMaster___);
    if ( !this )
      goto LABEL_39;
    SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                     (const MethodInfo_33A36A8 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    v24 = (System_Collections_Generic_HashSet_int__o *)sub_1C372A4(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v24,
      (const MethodInfo_3653A88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    if ( !SingleEntity )
      goto LABEL_39;
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingleEntity[1].klass;
    if ( !this )
      goto LABEL_39;
    v25 = 0;
    while ( v25 < BattleInfoData__getLastWave((BattleInfoData_o *)this, 0) + 1 )
    {
      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattleEntity__GetStageEntityAtWave(
                                                                              (BattleEntity_o *)SingleEntity,
                                                                              v25,
                                                                              0);
      if ( this )
      {
        if ( !v24 )
          goto LABEL_39;
        System_Collections_Generic_HashSet_int___Add(
          v24,
          (int32_t)this->fields.__8__1,
          (const MethodInfo_3654C8C *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattleEntity__GetStageEntityAtWave(
                                                                              (BattleEntity_o *)SingleEntity,
                                                                              v25,
                                                                              0);
      if ( this )
      {
        this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)StageEntity__GetBossIdAndChangeBgmId(
                                                                                (StageEntity_o *)this,
                                                                                0);
        if ( this )
        {
          if ( SLODWORD(this->fields.__2__current) >= 2 )
          {
            if ( !v24 )
              goto LABEL_39;
            System_Collections_Generic_HashSet_int___Add(
              v24,
              HIDWORD(this->fields.ent),
              (const MethodInfo_3654C8C *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
          this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingleEntity[1].klass;
          ++v25;
          if ( this )
            continue;
        }
      }
      goto LABEL_39;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_BgmMaster___);
    if ( !v24 )
      goto LABEL_39;
    v26 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
    System_Collections_Generic_HashSet_int___GetEnumerator(
      (System_Collections_Generic_HashSet_Enumerator_T__o *)&v97,
      v24,
      (const MethodInfo_3654610 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    v100 = v97;
    while ( 1 )
    {
      v27 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
              (System_Collections_Generic_HashSet_Enumerator_T__o *)&v100,
              (const MethodInfo_3529790 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
      if ( !v27 )
        break;
      if ( !v26 )
        sub_1C372B4(v27);
      v28 = DataMasterBase_object__object__int___TryGetEntity(
              v26,
              &entity,
              v100.fields._current,
              (const MethodInfo_33A10EC *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( v28 )
      {
        ++v4->fields._loadCntMax_5__2;
        if ( !entity )
          sub_1C372B4(v28);
        _8__1 = v4->fields.__8__1;
        if ( !_8__1 )
          sub_1C372B4(v28);
        monitor = (System_String_o *)entity[1].monitor;
        _9__8 = _8__1->fields.__9__8;
        if ( !_9__8 )
        {
          _9__8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
          System_Action___ctor(
            _9__8,
            (Il2CppObject *)_8__1,
            Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__8__,
            0);
          _8__1->fields.__9__8 = _9__8;
          sub_1C36FFC((CGThumbnailListItem_o *)&_8__1->fields.__9__8, (int32_t)_9__8, v32, v33);
        }
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__downloadAudioAssetStorage(monitor, _9__8, 1, 0);
      }
    }
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      (System_Collections_Generic_HashSet_Enumerator_T__o *)&v100,
      (const MethodInfo_352978C *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    ++v4->fields._loadCntMax_5__2;
    if ( !_4__this )
      goto LABEL_39;
    v34 = _4__this->fields.assetStorageLoadWrapper;
    v35 = (Il2CppObject *)v4->fields.__8__1;
    v36 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v36,
      v35,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__1__,
      0);
    if ( !v34 )
      goto LABEL_39;
    AssetStorageLoadWrapper__LoadAudioAssetStorage(v34, (System_String_o *)StringLiteral_3084/*"Battle"*/, v36, 1, 0);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattleRootComponent__GetLoadDropEffectType(
                                                                            v37,
                                                                            (BattleEntity_o *)SingleEntity,
                                                                            v38);
    if ( !this )
      goto LABEL_39;
    if ( SLODWORD(this->fields.__2__current) >= 1 )
    {
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v97,
        (System_Collections_Generic_List_int__o *)this,
        (const MethodInfo_3786AD4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v98 = v97;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v98,
                (const MethodInfo_35299F8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        LODWORD(v97.fields._list) = v98.fields._current;
        v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v97, v39, v40, v41, v42, v43, v44);
        v46 = System_String__Format((System_String_o *)StringLiteral_3091/*"Battle/DropEffect/{0}"*/, v45, 0);
        v47 = v4->fields.__8__1;
        ++v4->fields._loadCntMax_5__2;
        if ( !v47 )
          sub_1C372B4(v46);
        v48 = v46;
        v49 = _4__this->fields.assetStorageLoadWrapper;
        _9__9 = v47->fields.__9__9;
        if ( !_9__9 )
        {
          _9__9 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
          AssetLoader_LoadEndDataHandler___ctor(
            _9__9,
            (Il2CppObject *)v47,
            Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__9__,
            0);
          v47->fields.__9__9 = _9__9;
          sub_1C36FFC((CGThumbnailListItem_o *)&v47->fields.__9__9, (int32_t)_9__9, v51, v52);
        }
        if ( !v49 )
          sub_1C372B4(v46);
        Wrapper__LoadAssetStorage = AssetStorageLoadWrapper__LoadAssetStorage(v49, v48, _9__9, 1, 0);
        if ( !Wrapper__LoadAssetStorage )
        {
          v54 = v4->fields.__8__1;
          if ( !v54 )
            sub_1C372B4(Wrapper__LoadAssetStorage);
          ++v54->fields.loadCnt;
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v98,
        (const MethodInfo_35299F4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    }
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)_4__this->fields.data;
    if ( !this )
      goto LABEL_39;
    if ( BattleData__IsWarBoard((BattleData_o *)this, 0) )
    {
      ++v4->fields._loadCntMax_5__2;
      v56 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v56 + 309) & 1) == 0 )
        v56 = sub_1C8776C(v55);
      v57 = *(_QWORD *)(*(_QWORD *)(v56 + 192) + 16LL);
      if ( (*(_BYTE *)(v57 + 309) & 1) == 0 )
        v57 = sub_1C8776C(v55);
      v58 = (Il2CppObject *)v4->fields.__8__1;
      v59 = **(AtlasManager_o ***)(v57 + 184);
      v60 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        v60,
        v58,
        Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__2__,
        0);
      if ( !v59 )
        goto LABEL_39;
      AtlasManager__LoadWarBoardAtlas(v59, v60, 0);
    }
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)_4__this->fields.data;
    if ( !this )
      goto LABEL_39;
    if ( BattleData__IsInterruptionQuest((BattleData_o *)this, 0) )
    {
      v61 = (Il2CppObject *)v4->fields.__8__1;
      ++v4->fields._loadCntMax_5__2;
      v62 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        v62,
        v61,
        Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__3__,
        0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadPartyOrganizationAtlas(v62, 1, 0);
    }
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    if ( OptionManager__isSavedMemoryMode(0) )
    {
      v63 = (Il2CppObject *)v4->fields.__8__1;
      ++v4->fields._loadCntMax_5__2;
      v64 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        v64,
        v63,
        Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__4__,
        0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadFaceBattleAtlas(v64, 0);
    }
    v65 = (Il2CppObject *)v4->fields.__8__1;
    ++v4->fields._loadCntMax_5__2;
    perf = _4__this->fields.perf;
    v67 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v67,
      v65,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__5__,
      0);
    if ( !perf )
      goto LABEL_39;
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattlePerformance__LoadEventInfoPointGauge(
                                                                            perf,
                                                                            v67,
                                                                            v4->fields.eventId,
                                                                            0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v68 = v4->fields.__8__1;
      if ( !v68 )
        goto LABEL_39;
      ++v68->fields.loadCnt;
    }
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__ReleaseEventAtlas(0);
    v69 = (Il2CppObject *)v4->fields.__8__1;
    ++v4->fields._loadCntMax_5__2;
    v70 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v70,
      v69,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__6__,
      0);
    AtlasManager__LoadEventAtlas(v70, 1, 0);
    v72 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v72 + 309) & 1) == 0 )
      v72 = sub_1C8776C(v71);
    v73 = *(_QWORD *)(*(_QWORD *)(v72 + 192) + 16LL);
    if ( (*(_BYTE *)(v73 + 309) & 1) == 0 )
      v73 = sub_1C8776C(v71);
    this = **(BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o ***)(v73 + 184);
    if ( !this )
      goto LABEL_39;
    AtlasManager__UnloadBuffIconAtlas((AtlasManager_o *)this, 0);
    ++v4->fields._loadCntMax_5__2;
    v75 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v75 + 309) & 1) == 0 )
      v75 = sub_1C8776C(v74);
    v76 = *(_QWORD *)(*(_QWORD *)(v75 + 192) + 16LL);
    if ( (*(_BYTE *)(v76 + 309) & 1) == 0 )
      v76 = sub_1C8776C(v74);
    v77 = (Il2CppObject *)v4->fields.__8__1;
    v78 = **(AtlasManager_o ***)(v76 + 184);
    v79 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v79,
      v77,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__7__,
      0);
    if ( !v78 )
      goto LABEL_39;
    AtlasManager__LoadBuffIconAtlas(v78, v79, 0);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    v80 = (AssetManager_o *)this;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    if ( !v80 )
LABEL_39:
      sub_1C372B4(this);
    AssetManager__UpdateLoadParallelMax(v80, BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX, 0);
  }
  v81 = v4->fields.__8__1;
  if ( !v81 )
    goto LABEL_39;
  if ( v81->fields.loadCnt >= v4->fields._loadCntMax_5__2 )
  {
    ActionExtensions__Call(v4->fields.finishCallback, 0);
    return 0;
  }
  else
  {
    v4->fields.__2__current = 0;
    v82 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
    sub_1C36FFC(v82, 0, v2, v3);
    LODWORD(v82[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
    return 1;
  }
}


Il2CppObject *BattleRootComponent__LoadAssetsIndependentToMainOne_d__14__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleRootComponent__LoadAssetsIndependentToMainOne_d__14__System_Collections_IEnumerator_Reset(
        BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *BattleRootComponent__LoadAssetsIndependentToMainOne_d__14__System_Collections_IEnumerator_get_Current(
        BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleRootComponent__LoadAssetsIndependentToMainOne_d__14__System_IDisposable_Dispose(
        BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleRootComponent___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C45B2D & 1) == 0 )
  {
    sub_1C37058(&BattleRootComponent___c_TypeInfo);
    byte_4C45B2D = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(BattleRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleRootComponent___c_TypeInfo->static_fields->__9 = (struct BattleRootComponent___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)BattleRootComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void BattleRootComponent___c___ctor(BattleRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t BattleRootComponent___c___LoadAsset_b__13_2(
        BattleRootComponent___c_o *this,
        System_Collections_Generic_KeyValuePair_int__AssetData__o x,
        const MethodInfo *method)
{
  int32_t key; // w19

  key = x.fields.key;
  if ( (byte_4C45B2E & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__AssetData__get_Key__);
    byte_4C45B2E = 1;
  }
  return key;
}


AssetData_o *BattleRootComponent___c___LoadAsset_b__13_3(
        BattleRootComponent___c_o *this,
        System_Collections_Generic_KeyValuePair_int__AssetData__o x,
        const MethodInfo *method)
{
  AssetData_o *value; // x19

  value = x.fields.value;
  if ( (byte_4C45B2F & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_KeyValuePair_int__AssetData__get_Value__);
    byte_4C45B2F = 1;
  }
  return value;
}


void BattleRootComponent___c__DisplayClass13_0___ctor(
        BattleRootComponent___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleRootComponent___c__DisplayClass13_0___LoadAsset_b__0(
        BattleRootComponent___c__DisplayClass13_0_o *this,
        const MethodInfo *method)
{
  this->fields.isAssetsLoading = 0;
}


void BattleRootComponent___c__DisplayClass13_0___LoadAsset_b__1(
        BattleRootComponent___c__DisplayClass13_0_o *this,
        AssetData_o *common,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.commonData = common;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.commonData, (int32_t)common, (int32_t)method, v3);
}


void BattleRootComponent___c__DisplayClass13_1___ctor(
        BattleRootComponent___c__DisplayClass13_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleRootComponent___c__DisplayClass13_1___LoadAsset_b__4(
        BattleRootComponent___c__DisplayClass13_1_o *this,
        AssetData_o *motionData,
        const MethodInfo *method)
{
  BattleRootComponent___c__DisplayClass13_1_o *v4; // x19
  struct BattleRootComponent___c__DisplayClass13_0_o *CS___8__locals1; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v6; // x8

  v4 = this;
  if ( (byte_4C45B30 & 1) == 0 )
  {
    this = (BattleRootComponent___c__DisplayClass13_1_o *)sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__AssetData__Add__);
    byte_4C45B30 = 1;
  }
  CS___8__locals1 = v4->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (this = (BattleRootComponent___c__DisplayClass13_1_o *)CS___8__locals1->fields.assetDataByIndex) == 0
    || (System_Collections_Generic_Dictionary_int__object___Add(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          v4->fields.index,
          (Il2CppObject *)motionData,
          (const MethodInfo_33FA584 *)Method_System_Collections_Generic_Dictionary_int__AssetData__Add__),
        (v6 = v4->fields.CS___8__locals1) == 0) )
  {
    sub_1C372B4(this);
  }
  ++v6->fields.loadCompCnt;
}


void BattleRootComponent___c__DisplayClass13_2___ctor(
        BattleRootComponent___c__DisplayClass13_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleRootComponent___c__DisplayClass13_2___LoadAsset_b__5(
        BattleRootComponent___c__DisplayClass13_2_o *this,
        AssetData_o *cameraData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.uniqueCameraData = cameraData;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)cameraData, (int32_t)method, v3);
}


void BattleRootComponent___c__DisplayClass14_0___ctor(
        BattleRootComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleRootComponent___c__DisplayClass14_0___LoadAssetsIndependentToMainOne_b__0(
        BattleRootComponent___c__DisplayClass14_0_o *this,
        AssetData_o *effectData,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void BattleRootComponent___c__DisplayClass14_0___LoadAssetsIndependentToMainOne_b__1(
        BattleRootComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void BattleRootComponent___c__DisplayClass14_0___LoadAssetsIndependentToMainOne_b__2(
        BattleRootComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void BattleRootComponent___c__DisplayClass14_0___LoadAssetsIndependentToMainOne_b__3(
        BattleRootComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void BattleRootComponent___c__DisplayClass14_0___LoadAssetsIndependentToMainOne_b__4(
        BattleRootComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void BattleRootComponent___c__DisplayClass14_0___LoadAssetsIndependentToMainOne_b__5(
        BattleRootComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void BattleRootComponent___c__DisplayClass14_0___LoadAssetsIndependentToMainOne_b__6(
        BattleRootComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void BattleRootComponent___c__DisplayClass14_0___LoadAssetsIndependentToMainOne_b__7(
        BattleRootComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void BattleRootComponent___c__DisplayClass14_0___LoadAssetsIndependentToMainOne_b__8(
        BattleRootComponent___c__DisplayClass14_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void BattleRootComponent___c__DisplayClass14_0___LoadAssetsIndependentToMainOne_b__9(
        BattleRootComponent___c__DisplayClass14_0_o *this,
        AssetData_o *_,
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void BattleRootComponent___c__DisplayClass17_0___ctor(
        BattleRootComponent___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleRootComponent___c__DisplayClass17_0___LoadBatteBgm_b__0(
        BattleRootComponent___c__DisplayClass17_0_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *bgmList; // x0
  const MethodInfo *v4; // x3

  if ( (byte_4C45B31 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_4C45B31 = 1;
  }
  bgmList = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
  if ( !bgmList
    || (System_Collections_Generic_List_object___RemoveAt(
          bgmList,
          bgmList->fields._size - 1,
          (const MethodInfo_37A47F8 *)Method_System_Collections_Generic_List_string__RemoveAt__),
        (bgmList = (System_Collections_Generic_List_object__o *)this->fields.__4__this) == 0) )
  {
    sub_1C372B4(bgmList);
  }
  BattleRootComponent__LoadBatteBgm((BattleRootComponent_o *)bgmList, this->fields.bgmList, this->fields.callback, v4);
}


void BattleRootComponent___c__DisplayClass20_0___ctor(
        BattleRootComponent___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleRootComponent___c__DisplayClass20_0___loadOutGameAsset_b__0(
        BattleRootComponent___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  this->fields.isCharaGraphOptionAtlasLoaded = 1;
}


void BattleRootComponent___c__DisplayClass20_0___loadOutGameAsset_b__1(
        BattleRootComponent___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  this->fields.isBannerAtlasLoaded = 1;
}


void BattleRootComponent___c__DisplayClass20_0___loadOutGameAsset_b__2(
        BattleRootComponent___c__DisplayClass20_0_o *this,
        const MethodInfo *method)
{
  this->fields.isEventUIAtlasLoaded = 1;
}


void BattleRootComponent___c__DisplayClass20_1___ctor(
        BattleRootComponent___c__DisplayClass20_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleRootComponent___c__DisplayClass20_1___loadOutGameAsset_b__3(
        BattleRootComponent___c__DisplayClass20_1_o *this,
        const MethodInfo *method)
{
  this->fields.isEventAtlasLoaded = 1;
}


void BattleRootComponent___c__DisplayClass20_2___ctor(
        BattleRootComponent___c__DisplayClass20_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleRootComponent___c__DisplayClass20_2___loadOutGameAsset_b__4(
        BattleRootComponent___c__DisplayClass20_2_o *this,
        const MethodInfo *method)
{
  this->fields.isFaceAtlasLoaded = 1;
}


void BattleRootComponent___c__DisplayClass23_0___ctor(
        BattleRootComponent___c__DisplayClass23_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void BattleRootComponent___c__DisplayClass23_0___TransitionTerminalOrBattleScript_b__0(
        BattleRootComponent___c__DisplayClass23_0_o *this,
        System_String_o *demo1,
        const MethodInfo *method)
{
  struct System_Action_string__o *_9__2; // x22
  int32_t questId; // w20
  int32_t questPhase; // w21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *Instance; // x0
  struct BattleRootComponent_o *_4__this; // x8

  if ( (byte_4C45B33 & 1) == 0 )
  {
    sub_1C37058(&System_Action_string__TypeInfo);
    sub_1C37058(&ScriptManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C37058(&Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__2__);
    byte_4C45B33 = 1;
  }
  if ( System_String__IsNullOrEmpty(demo1, 0) )
  {
    _9__2 = this->fields.__9__2;
    questId = this->fields.questId;
    questPhase = this->fields.questPhase;
    if ( !_9__2 )
    {
      _9__2 = (struct System_Action_string__o *)sub_1C372A4(System_Action_string__TypeInfo);
      System_Action_object____ctor(
        (System_Action_object__o *)_9__2,
        (Il2CppObject *)this,
        Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__2__,
        0);
      this->fields.__9__2 = _9__2;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v8, v9);
    }
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__LoadBattleEndGameDemo(questId, questPhase, 0, _9__2, 0, 0);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    _4__this = this->fields.__4__this;
    if ( !_4__this || !Instance )
      sub_1C372B4(Instance);
    AvalonSceneManager__transitionSceneRefresh(
      (AvalonSceneManager_o *)Instance,
      _4__this->fields.nextscenetype,
      1,
      (Il2CppObject *)this->fields.info,
      0,
      0);
  }
}


void BattleRootComponent___c__DisplayClass23_0___TransitionTerminalOrBattleScript_b__1(
        BattleRootComponent___c__DisplayClass23_0_o *this,
        bool isDeside,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C45B32 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C45B32 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0), !this->fields.__4__this) )
    sub_1C372B4(Instance);
  BattleRootComponent__TerminalTransition((BattleRootComponent_o *)Instance, this->fields.info, v5);
}


void BattleRootComponent___c__DisplayClass23_0___TransitionTerminalOrBattleScript_b__2(
        BattleRootComponent___c__DisplayClass23_0_o *this,
        System_String_o *demo2,
        const MethodInfo *method)
{
  Il2CppObject *IsNullOrEmpty; // x0
  const MethodInfo *v6; // x2
  struct BattleRootComponent_o *_4__this; // x8

  if ( (byte_4C45B34 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C45B34 = 1;
  }
  IsNullOrEmpty = (Il2CppObject *)System_String__IsNullOrEmpty(demo2, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    if ( this->fields.__4__this )
    {
      BattleRootComponent__TerminalTransition((BattleRootComponent_o *)IsNullOrEmpty, this->fields.info, v6);
      return;
    }
LABEL_9:
    sub_1C372B4(IsNullOrEmpty);
  }
  IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  _4__this = this->fields.__4__this;
  if ( !_4__this || !IsNullOrEmpty )
    goto LABEL_9;
  AvalonSceneManager__transitionSceneRefresh(
    (AvalonSceneManager_o *)IsNullOrEmpty,
    _4__this->fields.nextscenetype,
    1,
    (Il2CppObject *)this->fields.info,
    0,
    0);
}


void BattleRootComponent__loadOutGameAsset_d__20___ctor(
        BattleRootComponent__loadOutGameAsset_d__20_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool BattleRootComponent__loadOutGameAsset_d__20__MoveNext(
        BattleRootComponent__loadOutGameAsset_d__20_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  BattleRootComponent__loadOutGameAsset_d__20_o *v4; // x19
  struct BattleRootComponent_o *_4__this; // x21
  Il2CppObject *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UnityEngine_WaitForEndOfFrame_o *v9; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  bool result; // w0
  System_Collections_IEnumerator_o *v14; // x0
  CGThumbnailListItem_o *v15; // x19
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int v18; // w8
  Il2CppObject *v19; // x20
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct BattleRootComponent___c__DisplayClass20_1_o *_8__1; // x21
  System_Action_o *v23; // x20
  struct BattleRootComponent___c__DisplayClass20_1_o *v24; // x8
  Il2CppObject *v25; // x20
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct BattleRootComponent___c__DisplayClass20_2_o *_8__2; // x21
  System_Action_o *v29; // x20
  struct BattleRootComponent___c__DisplayClass20_2_o *v30; // x8
  UnityEngine_WaitForEndOfFrame_o *v31; // x20
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct BattleRootComponent___c__DisplayClass20_0_o *_8__3; // x21
  System_Action_o *v35; // x20
  struct BattleRootComponent___c__DisplayClass20_0_o *v36; // x8
  UnityEngine_WaitForEndOfFrame_o *v37; // x20
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  struct BattleRootComponent___c__DisplayClass20_0_o *v40; // x21
  System_Action_o *v41; // x20
  struct BattleRootComponent___c__DisplayClass20_0_o *v42; // x8
  UnityEngine_WaitForEndOfFrame_o *v43; // x20
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  struct BattleRootComponent___c__DisplayClass20_0_o *v46; // x21
  System_Action_o *v47; // x20
  struct BattleRootComponent___c__DisplayClass20_0_o *v48; // x8
  UnityEngine_WaitForEndOfFrame_o *v49; // x20
  int32_t v50; // w2
  const MethodInfo *v51; // x3
  struct System_Action_o *callback; // x8

  v4 = this;
  if ( (byte_4C45B3B & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&System_GC_TypeInfo);
    sub_1C37058(&OptionManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C37058(&Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__0__);
    sub_1C37058(&Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__1__);
    sub_1C37058(&Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__2__);
    sub_1C37058(&BattleRootComponent___c__DisplayClass20_0_TypeInfo);
    sub_1C37058(&Method_BattleRootComponent___c__DisplayClass20_1__loadOutGameAsset_b__3__);
    sub_1C37058(&BattleRootComponent___c__DisplayClass20_1_TypeInfo);
    sub_1C37058(&Method_BattleRootComponent___c__DisplayClass20_2__loadOutGameAsset_b__4__);
    sub_1C37058(&BattleRootComponent___c__DisplayClass20_2_TypeInfo);
    this = (BattleRootComponent__loadOutGameAsset_d__20_o *)sub_1C37058(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4C45B3B = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v6 = (Il2CppObject *)sub_1C372A4(BattleRootComponent___c__DisplayClass20_0_TypeInfo);
      System_Object___ctor(v6, 0);
      v4->fields.__8__3 = (struct BattleRootComponent___c__DisplayClass20_0_o *)v6;
      sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.__8__3, (int32_t)v6, v7, v8);
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_14;
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect(0);
      v9 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C372A4(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v9, 0);
      v4->fields.__2__current = (Il2CppObject *)v9;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C36FFC(p__2__current, (int32_t)v9, v11, v12);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    case 1:
      v4->fields.__1__state = -1;
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_90;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0, 0);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_90;
      v14 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0);
      v4->fields.__2__current = (Il2CppObject *)v14;
      v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C36FFC(v15, (int32_t)v14, v16, v17);
      v18 = 2;
      goto LABEL_89;
    case 2:
      v4->fields.__1__state = -1;
LABEL_14:
      if ( !_4__this )
        goto LABEL_90;
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_90;
      if ( BattlePerformance__isActiveEventInfoGauge((BattlePerformance_o *)this, 0) )
        goto LABEL_25;
      v19 = (Il2CppObject *)sub_1C372A4(BattleRootComponent___c__DisplayClass20_1_TypeInfo);
      System_Object___ctor(v19, 0);
      v4->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass20_1_o *)v19;
      sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v19, v20, v21);
      _8__1 = v4->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_90;
      _8__1->fields.isEventAtlasLoaded = 0;
      v23 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        v23,
        (Il2CppObject *)_8__1,
        Method_BattleRootComponent___c__DisplayClass20_1__loadOutGameAsset_b__3__,
        0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadEventAtlas(v23, 1, 0);
LABEL_22:
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)&v4->fields.__8__1;
      v24 = v4->fields.__8__1;
      if ( !v24 )
        goto LABEL_90;
      if ( !v24->fields.isEventAtlasLoaded )
      {
        v4->fields.__2__current = 0;
        v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C36FFC(v15, 0, v2, v3);
        v18 = 3;
        goto LABEL_89;
      }
      this->klass = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)this, 0, v2, v3);
LABEL_25:
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v25 = (Il2CppObject *)sub_1C372A4(BattleRootComponent___c__DisplayClass20_2_TypeInfo);
        System_Object___ctor(v25, 0);
        v4->fields.__8__2 = (struct BattleRootComponent___c__DisplayClass20_2_o *)v25;
        sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.__8__2, (int32_t)v25, v26, v27);
        _8__2 = v4->fields.__8__2;
        if ( _8__2 )
        {
          _8__2->fields.isFaceAtlasLoaded = 0;
          v29 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
          System_Action___ctor(
            v29,
            (Il2CppObject *)_8__2,
            Method_BattleRootComponent___c__DisplayClass20_2__loadOutGameAsset_b__4__,
            0);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__LoadFaceAtlas(v29, 1, 0);
LABEL_33:
          v30 = v4->fields.__8__2;
          if ( v30 )
          {
            if ( v30->fields.isFaceAtlasLoaded )
            {
              if ( !System_GC_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              System_GC__Collect(0);
              v31 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C372A4(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v31, 0);
              v4->fields.__2__current = (Il2CppObject *)v31;
              v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1C36FFC(v15, (int32_t)v31, v32, v33);
              v18 = 5;
            }
            else
            {
              v4->fields.__2__current = 0;
              v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1C36FFC(v15, 0, v2, v3);
              v18 = 4;
            }
            goto LABEL_89;
          }
        }
LABEL_90:
        sub_1C372B4(this);
      }
LABEL_39:
      _8__3 = v4->fields.__8__3;
      if ( !_8__3 )
        goto LABEL_90;
      _8__3->fields.isCharaGraphOptionAtlasLoaded = 0;
      v35 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        v35,
        (Il2CppObject *)_8__3,
        Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__0__,
        0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadCharaGraphOptionAtlas(v35, 1, 0);
LABEL_44:
      v36 = v4->fields.__8__3;
      if ( !v36 )
        goto LABEL_90;
      if ( !v36->fields.isCharaGraphOptionAtlasLoaded )
      {
        v4->fields.__2__current = 0;
        v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C36FFC(v15, 0, v2, v3);
        v18 = 6;
LABEL_89:
        LODWORD(v15[-1].fields._ThumbnailSpritePath_k__BackingField) = v18;
        return 1;
      }
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect(0);
        v37 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C372A4(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v37, 0);
        v4->fields.__2__current = (Il2CppObject *)v37;
        v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C36FFC(v15, (int32_t)v37, v38, v39);
        v18 = 7;
        goto LABEL_89;
      }
LABEL_54:
      v40 = v4->fields.__8__3;
      if ( !v40 )
        goto LABEL_90;
      v40->fields.isBannerAtlasLoaded = 0;
      v41 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        v41,
        (Il2CppObject *)v40,
        Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__1__,
        0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadBanner(v41, 1, 0);
LABEL_59:
      v42 = v4->fields.__8__3;
      if ( !v42 )
        goto LABEL_90;
      if ( !v42->fields.isBannerAtlasLoaded )
      {
        v4->fields.__2__current = 0;
        v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C36FFC(v15, 0, v2, v3);
        v18 = 8;
        goto LABEL_89;
      }
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect(0);
        v43 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C372A4(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v43, 0);
        v4->fields.__2__current = (Il2CppObject *)v43;
        v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C36FFC(v15, (int32_t)v43, v44, v45);
        v18 = 9;
        goto LABEL_89;
      }
LABEL_69:
      v46 = v4->fields.__8__3;
      if ( !v46 )
        goto LABEL_90;
      v46->fields.isEventUIAtlasLoaded = 0;
      v47 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        v47,
        (Il2CppObject *)v46,
        Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__2__,
        0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadEventUI(v47, 1, 0);
LABEL_74:
      v48 = v4->fields.__8__3;
      if ( !v48 )
        goto LABEL_90;
      if ( !v48->fields.isEventUIAtlasLoaded )
      {
        v4->fields.__2__current = 0;
        v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C36FFC(v15, 0, v2, v3);
        v18 = 10;
        goto LABEL_89;
      }
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect(0);
        v49 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C372A4(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v49, 0);
        v4->fields.__2__current = (Il2CppObject *)v49;
        v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C36FFC(v15, (int32_t)v49, v50, v51);
        v18 = 11;
        goto LABEL_89;
      }
LABEL_84:
      callback = v4->fields.callback;
      if ( !callback )
        goto LABEL_90;
      ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
        callback->fields.method_code,
        callback->fields.method);
      return 0;
    case 3:
      v4->fields.__1__state = -1;
      goto LABEL_22;
    case 4:
      v4->fields.__1__state = -1;
      goto LABEL_33;
    case 5:
      v4->fields.__8__2 = 0;
      v4->fields.__1__state = -1;
      sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.__8__2, 0, v2, v3);
      goto LABEL_39;
    case 6:
      v4->fields.__1__state = -1;
      goto LABEL_44;
    case 7:
      v4->fields.__1__state = -1;
      goto LABEL_54;
    case 8:
      v4->fields.__1__state = -1;
      goto LABEL_59;
    case 9:
      v4->fields.__1__state = -1;
      goto LABEL_69;
    case 0xA:
      v4->fields.__1__state = -1;
      goto LABEL_74;
    case 0xB:
      v4->fields.__1__state = -1;
      goto LABEL_84;
    default:
      return 0;
  }
}


Il2CppObject *BattleRootComponent__loadOutGameAsset_d__20__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        BattleRootComponent__loadOutGameAsset_d__20_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn BattleRootComponent__loadOutGameAsset_d__20__System_Collections_IEnumerator_Reset(
        BattleRootComponent__loadOutGameAsset_d__20_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_BattleRootComponent__loadOutGameAsset_d__20_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *BattleRootComponent__loadOutGameAsset_d__20__System_Collections_IEnumerator_get_Current(
        BattleRootComponent__loadOutGameAsset_d__20_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void BattleRootComponent__loadOutGameAsset_d__20__System_IDisposable_Dispose(
        BattleRootComponent__loadOutGameAsset_d__20_o *this,
        const MethodInfo *method)
{
  ;
}


void BattleRootComponent_callBackBeginResume___ctor(
        BattleRootComponent_callBackBeginResume_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A7E1D4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7E194;
}


System_IAsyncResult_o *BattleRootComponent_callBackBeginResume__BeginInvoke(
        BattleRootComponent_callBackBeginResume_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C3700C(this, &v5, callback, object);
}


void BattleRootComponent_callBackBeginResume__EndInvoke(
        BattleRootComponent_callBackBeginResume_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
}


void BattleRootComponent_callBackBeginResume__Invoke(
        BattleRootComponent_callBackBeginResume_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}