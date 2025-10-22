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
  __int64 v19; // x1
  __int64 v20; // x21
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  BattleDeckServantData_o *v29; // x0
  __int64 v30; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  __int64 v32; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v33; // x22
  System_Collections_Generic_IEnumerable_TSource__c *v34; // x8
  __int64 v35; // x9
  int32_t *v36; // x10
  __int64 v37; // x0
  __int64 v38; // x1
  __int64 v39; // x22
  __int64 v40; // x8
  __int64 v41; // x9
  int *v42; // x10
  __int64 v43; // x0
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  __int64 v48; // x0
  __int64 v49; // x1
  int32_t v50; // w23
  _BOOL8 v51; // x0
  __int64 v52; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v54; // x9
  __int64 size; // x10
  __int64 v56; // x8
  __int64 v57; // x9
  int *v58; // x10
  __int64 v59; // x0
  __int64 v60; // x8
  __int64 v61; // x9
  int *v62; // x10
  __int64 v63; // x0
  int32_t v64; // w21
  StageEntity_o *StageEntityAtWave; // x0
  long double inited; // q0
  System_Collections_Generic_IEnumerable_TSource__o *WaveFieldMotionIds; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v68; // x23
  _QWORD *v69; // x23
  __int64 v70; // x8
  __int64 v71; // x0
  System_Collections_Generic_IEnumerable_TSource__c *v72; // x8
  __int64 v73; // x9
  int32_t *v74; // x10
  __int64 v75; // x0
  __int64 v76; // x1
  __int64 v77; // x23
  __int64 v78; // x8
  __int64 v79; // x9
  int *v80; // x10
  __int64 v81; // x0
  __int64 v82; // x8
  __int64 v83; // x9
  int *v84; // x10
  __int64 v85; // x0
  __int64 v86; // x0
  __int64 v87; // x1
  int32_t v88; // w24
  _BOOL8 v89; // x0
  __int64 v90; // x1
  struct System_Int32_array *v91; // x8
  _QWORD *v92; // x9
  __int64 v93; // x10
  __int64 v94; // x8
  __int64 v95; // x9
  int *v96; // x10
  __int64 v97; // x0
  BattleEntity_o *v100; // [xsp+10h] [xbp-70h]
  System_Int32_array *fieldMotionIds; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4C598FC & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Array_Empty_int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Reverse_BattleDeckServantData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Reverse_int___);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor___78135936);
    this = (BattleRootComponent_o *)sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C598FC = 1;
  }
  fieldMotionIds = 0;
  if ( !battleEnt )
    goto LABEL_128;
  this = (BattleRootComponent_o *)battleEnt->fields.battleInfo;
  if ( !this )
    goto LABEL_128;
  BaseBattleFieldMotionIds = BattleInfoData__GetBaseBattleFieldMotionIds((BattleInfoData_o *)this, questPhaseEnt, 0);
  *baseMotionIds = BaseBattleFieldMotionIds;
  sub_1C3E508((CGThumbnailListItem_o *)baseMotionIds, (int32_t)BaseBattleFieldMotionIds, v9, v10);
  v11 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Reverse_int_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)*baseMotionIds,
                                                         (const MethodInfo_312A334 *)Method_System_Linq_Enumerable_Reverse_int___);
  v12 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_58293520(
    v12,
    v11,
    (const MethodInfo_3797D10 *)Method_System_Collections_Generic_List_int___ctor___78135936);
  this = (BattleRootComponent_o *)battleEnt->fields.battleInfo;
  if ( !this )
    goto LABEL_128;
  AllExistsScriptEnemyDeckSvtArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleInfoData__get_AllExistsScriptEnemyDeckSvtArray(
                                                                                            (BattleInfoData_o *)this,
                                                                                            0);
  this = (BattleRootComponent_o *)System_Linq_Enumerable__Reverse_object_(
                                    AllExistsScriptEnemyDeckSvtArray,
                                    (const MethodInfo_312A38C *)Method_System_Linq_Enumerable_Reverse_BattleDeckServantData___);
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
    v18 = sub_1C8ED7C(this, System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, 0);
  }
  v100 = battleEnt;
  v20 = (*(__int64 (__fastcall **)(BattleRootComponent_o *, _QWORD))v18)(v15, *(_QWORD *)(v18 + 8));
  if ( !v20 )
    sub_1C3E7C0(0, v19);
  while ( 1 )
  {
    v21 = *(_QWORD *)v20;
    v22 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v23 = (int *)(*(_QWORD *)(v21 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v23 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v22;
        v23 += 4;
        if ( !v22 )
          goto LABEL_18;
      }
      v24 = v21 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_18:
      v24 = sub_1C8ED7C(v20, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8)) & 1) == 0 )
      break;
    v25 = *(_QWORD *)v20;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleDeckServantData__c **)v27 - 1) != System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_25;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_25:
      v28 = sub_1C8ED7C(v20, System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo, 0);
    }
    v29 = (BattleDeckServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v20, *(_QWORD *)(v28 + 8));
    if ( !v29 )
      sub_1C3E7C0(0, v30);
    if ( BattleDeckServantData__TryGetAddFieldMotionIds(v29, &fieldMotionIds, 0) )
    {
      v31 = System_Linq_Enumerable__Reverse_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)fieldMotionIds,
              (const MethodInfo_312A334 *)Method_System_Linq_Enumerable_Reverse_int___);
      v33 = v31;
      if ( !v31 )
        sub_1C3E7C0(0, v32);
      v34 = v31->klass;
      v35 = *(unsigned __int16 *)&v31->klass->_2.rank;
      if ( *(_WORD *)&v31->klass->_2.rank )
      {
        v36 = &v34->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_int__c **)v36 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
        {
          --v35;
          v36 += 4;
          if ( !v35 )
            goto LABEL_34;
        }
        v37 = (__int64)&v34->vtable[*v36];
      }
      else
      {
LABEL_34:
        v37 = sub_1C8ED7C(v31, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
      }
      v39 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v37)(
              v33,
              *(_QWORD *)(v37 + 8));
      if ( !v39 )
        sub_1C3E7C0(0, v38);
      while ( 1 )
      {
        v40 = *(_QWORD *)v39;
        v41 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
        {
          v42 = (int *)(*(_QWORD *)(v40 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v42 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v41;
            v42 += 4;
            if ( !v41 )
              goto LABEL_41;
          }
          v43 = v40 + 16LL * *v42 + 312;
        }
        else
        {
LABEL_41:
          v43 = sub_1C8ED7C(v39, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v43)(v39, *(_QWORD *)(v43 + 8)) & 1) == 0 )
          break;
        v44 = *(_QWORD *)v39;
        v45 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
        {
          v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_int__c **)v46 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
          {
            --v45;
            v46 += 4;
            if ( !v45 )
              goto LABEL_48;
          }
          v47 = v44 + 16LL * *v46 + 312;
        }
        else
        {
LABEL_48:
          v47 = sub_1C8ED7C(v39, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
        }
        v48 = (*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v39, *(_QWORD *)(v47 + 8));
        if ( !v12 )
          sub_1C3E7C0(v48, v49);
        v50 = v48;
        v51 = System_Collections_Generic_List_int___Contains(
                v12,
                v48,
                (const MethodInfo_37987B4 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !v51 )
        {
          items = v12->fields._items;
          v54 = Method_System_Collections_Generic_List_int__Add__;
          ++v12->fields._version;
          if ( !items )
            sub_1C3E7C0(v51, v52);
          size = v12->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v12,
              v50,
              *(const MethodInfo_379843C **)(*(_QWORD *)(v54[4] + 192LL) + 112LL));
          }
          else
          {
            v12->fields._size = size + 1;
            items->m_Items[size] = v50;
          }
        }
      }
      v56 = *(_QWORD *)v39;
      v57 = *(unsigned __int16 *)(*(_QWORD *)v39 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v39 + 302LL) )
      {
        v58 = (int *)(*(_QWORD *)(v56 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v58 - 1) != System_IDisposable_TypeInfo )
        {
          --v57;
          v58 += 4;
          if ( !v57 )
            goto LABEL_60;
        }
        v59 = v56 + 16LL * *v58 + 312;
      }
      else
      {
LABEL_60:
        v59 = sub_1C8ED7C(v39, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v59)(v39, *(_QWORD *)(v59 + 8));
    }
  }
  v60 = *(_QWORD *)v20;
  v61 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
  {
    v62 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v62 - 1) != System_IDisposable_TypeInfo )
    {
      --v61;
      v62 += 4;
      if ( !v61 )
        goto LABEL_70;
    }
    v63 = v60 + 16LL * *v62 + 312;
  }
  else
  {
LABEL_70:
    v63 = sub_1C8ED7C(v20, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v63)(v20, *(_QWORD *)(v63 + 8));
  this = (BattleRootComponent_o *)v100->fields.battleInfo;
  if ( !this )
LABEL_128:
    sub_1C3E7C0(this, battleEnt);
  this = (BattleRootComponent_o *)BattleInfoData__getLastWave((BattleInfoData_o *)this, 0);
  if ( ((unsigned int)this & 0x80000000) == 0 )
  {
    v64 = (int)this;
    do
    {
      StageEntityAtWave = BattleEntity__GetStageEntityAtWave(v100, v64, 0);
      if ( !StageEntityAtWave
        || (WaveFieldMotionIds = (System_Collections_Generic_IEnumerable_TSource__o *)StageEntity__GetWaveFieldMotionIds(
                                                                                        StageEntityAtWave,
                                                                                        0,
                                                                                        0)) == 0
        || (v68 = System_Linq_Enumerable__Reverse_int_(
                    WaveFieldMotionIds,
                    (const MethodInfo_312A334 *)Method_System_Linq_Enumerable_Reverse_int___)) == 0 )
      {
        v69 = Method_System_Array_Empty_int___;
        v70 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
        if ( !v70 )
        {
          sub_1C8ECD4(Method_System_Array_Empty_int___);
          v70 = v69[7];
        }
        v71 = *(_QWORD *)(v70 + 16);
        if ( (*(_BYTE *)(v71 + 309) & 1) == 0 )
          v71 = sub_1C8EC78(inited);
        if ( !*(_DWORD *)(v71 + 224) )
          inited = j_il2cpp_runtime_class_init_0(v71);
        this = *(BattleRootComponent_o **)(v69[7] + 16LL);
        if ( (this[2].fields.manualHeight & 0x100) == 0 )
          this = (BattleRootComponent_o *)sub_1C8EC78(inited);
        v68 = **(System_Collections_Generic_IEnumerable_TSource__o ***)&this[1].fields.kind;
        if ( !v68 )
          goto LABEL_128;
      }
      v72 = v68->klass;
      v73 = *(unsigned __int16 *)&v68->klass->_2.rank;
      if ( *(_WORD *)&v68->klass->_2.rank )
      {
        v74 = &v72->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_int__c **)v74 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
        {
          --v73;
          v74 += 4;
          if ( !v73 )
            goto LABEL_91;
        }
        v75 = (__int64)&v72->vtable[*v74];
      }
      else
      {
LABEL_91:
        v75 = sub_1C8ED7C(v68, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
      }
      v77 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v75)(
              v68,
              *(_QWORD *)(v75 + 8));
      if ( !v77 )
        sub_1C3E7C0(0, v76);
      while ( 1 )
      {
        v78 = *(_QWORD *)v77;
        v79 = *(unsigned __int16 *)(*(_QWORD *)v77 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v77 + 302LL) )
        {
          v80 = (int *)(*(_QWORD *)(v78 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v80 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v79;
            v80 += 4;
            if ( !v79 )
              goto LABEL_98;
          }
          v81 = v78 + 16LL * *v80 + 312;
        }
        else
        {
LABEL_98:
          v81 = sub_1C8ED7C(v77, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v81)(v77, *(_QWORD *)(v81 + 8)) & 1) == 0 )
          break;
        v82 = *(_QWORD *)v77;
        v83 = *(unsigned __int16 *)(*(_QWORD *)v77 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v77 + 302LL) )
        {
          v84 = (int *)(*(_QWORD *)(v82 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_int__c **)v84 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
          {
            --v83;
            v84 += 4;
            if ( !v83 )
              goto LABEL_105;
          }
          v85 = v82 + 16LL * *v84 + 312;
        }
        else
        {
LABEL_105:
          v85 = sub_1C8ED7C(v77, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
        }
        v86 = (*(__int64 (__fastcall **)(__int64, _QWORD))v85)(v77, *(_QWORD *)(v85 + 8));
        if ( !v12 )
          sub_1C3E7C0(v86, v87);
        v88 = v86;
        v89 = System_Collections_Generic_List_int___Contains(
                v12,
                v86,
                (const MethodInfo_37987B4 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !v89 )
        {
          v91 = v12->fields._items;
          v92 = Method_System_Collections_Generic_List_int__Add__;
          ++v12->fields._version;
          if ( !v91 )
            sub_1C3E7C0(v89, v90);
          v93 = v12->fields._size;
          if ( (unsigned int)v93 >= LODWORD(v91->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v12,
              v88,
              *(const MethodInfo_379843C **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
          }
          else
          {
            v12->fields._size = v93 + 1;
            v91->m_Items[v93] = v88;
          }
        }
      }
      v94 = *(_QWORD *)v77;
      v95 = *(unsigned __int16 *)(*(_QWORD *)v77 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v77 + 302LL) )
      {
        v96 = (int *)(*(_QWORD *)(v94 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v96 - 1) != System_IDisposable_TypeInfo )
        {
          --v95;
          v96 += 4;
          if ( !v95 )
            goto LABEL_117;
        }
        v97 = v94 + 16LL * *v96 + 312;
      }
      else
      {
LABEL_117:
        v97 = sub_1C8ED7C(v77, System_IDisposable_TypeInfo, 0);
      }
      this = (BattleRootComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v97)(v77, *(_QWORD *)(v97 + 8));
    }
    while ( v64-- > 0 );
  }
  if ( !v12 )
    goto LABEL_128;
  return System_Collections_Generic_List_int___ToArray(
           v12,
           (const MethodInfo_3799EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *BattleRootComponent__GetClassBoardCommandSpellEffectId(
        BattleRootComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v2; // x19
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v4; // x1
  Il2CppObject *SingleEntity; // x0
  BalanceConfig_c *v6; // x8
  BattleEntity_o *v7; // x20
  int32_t ClassBoardReleaseQuestId; // w21
  bool IsQuestClear_40371188; // w0
  struct BattleInfoData_o *battleInfo; // x8
  struct DeckData_o *transformDeck; // x8
  ClassBoardCommandSpellMaster_o *v12; // x21
  const MethodInfo *v13; // x4
  struct BattleInfoData_o *v14; // x8
  struct DeckData_o *myDeck; // x8
  struct BattleDeckServantData_array *svts; // x26
  int max_length; // w8
  char v18; // w23
  __int64 v19; // x27
  System_Collections_Generic_HashSet_int__o *v20; // x22
  BattleDeckServantData_o *v21; // x25
  struct BattleInfoData_o *v22; // x8
  struct DeckData_o *v23; // x8
  struct BattleDeckServantData_array *v24; // x23
  il2cpp_array_size_t v25; // x8
  unsigned __int64 v26; // x24
  BattleDeckServantData_o *v27; // x28
  const MethodInfo *v28; // x4

  if ( (byte_4C59907 & 1) == 0 )
  {
    sub_1C3E564(&BalanceConfig_TypeInfo);
    sub_1C3E564(&CondType_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_BattleMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C3E564(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_4C59907 = 1;
  }
  v2 = (System_Collections_Generic_HashSet_int__o *)sub_1C3E7B0(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v2,
    (const MethodInfo_3665EC4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_object )
    goto LABEL_48;
  SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                   Master_object,
                   (const MethodInfo_33B5560 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
  v6 = BalanceConfig_TypeInfo;
  v7 = (BattleEntity_o *)SingleEntity;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v6 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v6->static_fields->ClassBoardReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_40371188 = CondType__IsQuestClear_40371188(ClassBoardReleaseQuestId, -1, 0, 0);
  if ( !v7 || !IsQuestClear_40371188 )
    return System_Linq_Enumerable__ToArray_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v2,
             (const MethodInfo_3139050 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  battleInfo = v7->fields.battleInfo;
  if ( !battleInfo )
    goto LABEL_48;
  transformDeck = battleInfo->fields.transformDeck;
  if ( !transformDeck )
    goto LABEL_48;
  v12 = (ClassBoardCommandSpellMaster_o *)Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BasicHelper__IsNullOrEmpty(
                                                                  (System_Collections_ICollection_o *)transformDeck->fields.svts,
                                                                  0);
  v14 = v7->fields.battleInfo;
  if ( !v14 )
    goto LABEL_48;
  myDeck = v14->fields.myDeck;
  if ( !myDeck )
    goto LABEL_48;
  svts = myDeck->fields.svts;
  if ( !svts )
    goto LABEL_48;
  max_length = svts->max_length;
  v18 = (char)Master_object;
  if ( max_length < 1 )
  {
    v20 = 0;
    if ( ((unsigned __int8)Master_object & 1) != 0 )
      return System_Linq_Enumerable__ToArray_int_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v2,
               (const MethodInfo_3139050 *)Method_System_Linq_Enumerable_ToArray_int___);
LABEL_35:
    v22 = v7->fields.battleInfo;
    if ( v22 )
    {
      v23 = v22->fields.transformDeck;
      if ( v23 )
      {
        v24 = v23->fields.svts;
        if ( v24 )
        {
          v25 = v24->max_length;
          if ( (int)v25 >= 1 )
          {
            v26 = 0;
            while ( v26 < (unsigned int)v25 )
            {
              if ( v20 )
              {
                v27 = v24->m_Items[v26];
                if ( v27 )
                {
                  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_HashSet_int___Contains(
                                                                                  v20,
                                                                                  *(&v27->fields.equipTarget2SkillChange
                                                                                  + 1),
                                                                                  (const MethodInfo_36665B8 *)Method_System_Collections_Generic_HashSet_int__Contains__);
                  if ( ((unsigned __int8)Master_object & 1) != 0 )
                  {
                    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess(
                                                                                    (BattleRootComponent_o *)Master_object,
                                                                                    v7,
                                                                                    v12,
                                                                                    v27->fields.userSvtId,
                                                                                    v28);
                    if ( !v2 )
                      goto LABEL_48;
                    System_Collections_Generic_HashSet_int___UnionWith(
                      v2,
                      (System_Collections_Generic_IEnumerable_T__o *)Master_object,
                      (const MethodInfo_36670D8 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
                  }
                }
              }
              LODWORD(v25) = v24->max_length;
              if ( (__int64)++v26 >= (int)v25 )
                return System_Linq_Enumerable__ToArray_int_(
                         (System_Collections_Generic_IEnumerable_TSource__o *)v2,
                         (const MethodInfo_3139050 *)Method_System_Linq_Enumerable_ToArray_int___);
            }
LABEL_49:
            sub_1C3E7C8(Master_object, v4);
          }
          return System_Linq_Enumerable__ToArray_int_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v2,
                   (const MethodInfo_3139050 *)Method_System_Linq_Enumerable_ToArray_int___);
        }
      }
    }
LABEL_48:
    sub_1C3E7C0(Master_object, v4);
  }
  v19 = 0;
  v20 = 0;
  do
  {
    if ( (unsigned int)v19 >= max_length )
      goto LABEL_49;
    v21 = svts->m_Items[v19];
    if ( (v18 & 1) != 0 )
    {
      if ( !v21 )
        goto LABEL_48;
    }
    else
    {
      if ( !v20 )
      {
        v20 = (System_Collections_Generic_HashSet_int__o *)sub_1C3E7B0(System_Collections_Generic_HashSet_int__TypeInfo);
        System_Collections_Generic_HashSet_int____ctor(
          v20,
          (const MethodInfo_3665EC4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
      }
      if ( !v21 || !v20 )
        goto LABEL_48;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_HashSet_int___Add(
                                                                      v20,
                                                                      *(&v21->fields.equipTarget2SkillChange + 1),
                                                                      (const MethodInfo_36670C8 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess(
                                                                    (BattleRootComponent_o *)Master_object,
                                                                    v7,
                                                                    v12,
                                                                    v21->fields.userSvtId,
                                                                    v13);
    if ( !v2 )
      goto LABEL_48;
    System_Collections_Generic_HashSet_int___UnionWith(
      v2,
      (System_Collections_Generic_IEnumerable_T__o *)Master_object,
      (const MethodInfo_36670D8 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    max_length = svts->max_length;
    ++v19;
  }
  while ( (int)v19 < max_length );
  if ( (v18 & 1) == 0 )
    goto LABEL_35;
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v2,
           (const MethodInfo_3139050 *)Method_System_Linq_Enumerable_ToArray_int___);
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

  if ( (byte_4C59908 & 1) == 0 )
  {
    sub_1C3E564(&BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_TypeInfo);
    byte_4C59908 = 1;
  }
  v8 = sub_1C3E7B0(BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  *(_DWORD *)(v8 + 16) = -2;
  *(_DWORD *)(v8 + 24) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v8 + 40) = battleEntity;
  sub_1C3E508((CGThumbnailListItem_o *)(v8 + 40), (int32_t)battleEntity, v9, v10);
  *(_QWORD *)(v8 + 72) = classBoardCSMaster;
  sub_1C3E508((CGThumbnailListItem_o *)(v8 + 72), (int32_t)classBoardCSMaster, v11, v12);
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
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  _BOOL8 v15; // x0
  __int64 v16; // x1
  Il2CppClass *klass; // x24
  const char *namespaze; // x8
  int v19; // w25
  __int64 v20; // x9
  __int64 v21; // x26
  int v22; // w9
  __int64 v23; // x27
  __int64 v24; // x29
  struct System_Int32_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  struct BattleInfoData_o *v28; // x8
  struct BattleInfoData_StageCutinInfo_array *stageCutins; // x21
  int max_length; // w8
  unsigned int v31; // w24
  BattleInfoData_StageCutinInfo_o *v32; // x8
  struct DropInfo_array *dropInfos; // x25
  int v34; // w8
  unsigned int v35; // w26
  DropInfo_o *v36; // x27
  struct System_Int32_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  QuestPhaseEntity_c *v40; // x8
  QuestPhaseEntity_o *v41; // x20
  __int64 v42; // x9
  int32_t *p_offset; // x10
  __int64 v44; // x0
  __int64 v45; // x1
  __int64 v46; // x20
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  __int64 v51; // x8
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0
  FunctionEntity_o *v55; // x0
  __int64 v56; // x1
  _BOOL8 BattleSkillDropInfoDict; // x0
  __int64 v58; // x1
  __int64 v59; // x0
  struct System_Int32_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  __int64 v63; // x8
  __int64 v64; // x9
  int *v65; // x10
  __int64 v66; // x0
  System_Collections_Generic_List_Enumerator_object__o v68; // [xsp+10h] [xbp-A0h] BYREF
  BattleSkillDropInfo_JsonConvertData_o *data; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v70; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4C59906 & 1) == 0 )
  {
    sub_1C3E564(&Method_EnumUtility_CastToEnum_DropInfo_DropEffectType___);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_DeckData__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_DeckData__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_DeckData__get_Current__);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerable_FunctionEntity__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerator_FunctionEntity__TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_DeckData__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_DeckData__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C3E564(&Method_System_Collections_Generic_List_DeckData__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C3E564(&Method_System_Collections_Generic_List_DeckData___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_List_DeckData__TypeInfo);
    byte_4C59906 = 1;
  }
  memset(&v70, 0, sizeof(v70));
  data = 0;
  v4 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_DeckData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v4,
    (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_DeckData___ctor__);
  v5 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v5,
    (const MethodInfo_3797BE8 *)Method_System_Collections_Generic_List_int___ctor__);
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
      (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_109;
  }
  enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.callDeck;
  if ( enemyDeck )
  {
    if ( !v4 )
      goto LABEL_109;
    System_Collections_Generic_List_object___AddRange(
      v4,
      enemyDeck,
      (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_109;
  }
  enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.shiftDeck;
  if ( enemyDeck )
  {
    if ( !v4 )
      goto LABEL_109;
    System_Collections_Generic_List_object___AddRange(
      v4,
      enemyDeck,
      (const MethodInfo_37B566C *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_109;
  }
  enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.transformDeck;
  if ( enemyDeck )
  {
    if ( !v4 )
      goto LABEL_109;
    items = v4->fields._items;
    v12 = Method_System_Collections_Generic_List_DeckData__Add__;
    ++v4->fields._version;
    if ( !items )
      goto LABEL_109;
    size = v4->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v4,
        (Il2CppObject *)enemyDeck,
        *(const MethodInfo_37B5460 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    }
    else
    {
      v14 = &items->obj.klass + size;
      v4->fields._size = size + 1;
      v14[4] = (Il2CppClass *)enemyDeck;
      sub_1C3E508((CGThumbnailListItem_o *)(v14 + 4), (int32_t)enemyDeck, v7, v8);
    }
  }
  else if ( !v4 )
  {
    goto LABEL_109;
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v68,
    v4,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_DeckData__GetEnumerator__);
  v70 = v68;
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v70,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_DeckData__MoveNext__);
    if ( !v15 )
      break;
    if ( !v70.fields._current )
      sub_1C3E7C0(v15, v16);
    klass = v70.fields._current[1].klass;
    if ( klass )
    {
      namespaze = klass->_1.namespaze;
      if ( (int)namespaze >= 1 )
      {
        v19 = 0;
        do
        {
          if ( v19 >= (unsigned int)namespaze )
            sub_1C3E7C8(v15, v16);
          v20 = *((_QWORD *)&klass->_1.byval_arg.data + v19);
          if ( !v20 )
            sub_1C3E7C0(v15, v16);
          v21 = *(_QWORD *)(v20 + 104);
          if ( v21 )
          {
            v22 = *(_DWORD *)(v21 + 24);
            if ( v22 >= 1 )
            {
              v23 = 0;
              do
              {
                if ( (unsigned int)v23 >= v22 )
                  sub_1C3E7C8(v15, v16);
                v24 = *(_QWORD *)(v21 + 32 + 8 * v23);
                if ( !v24 )
                  sub_1C3E7C0(v15, v16);
                v16 = *(unsigned int *)(v24 + 48);
                if ( (_DWORD)v16 )
                {
                  if ( !v5 )
                    sub_1C3E7C0(v15, v16);
                  v15 = System_Collections_Generic_List_int___Contains(
                          v5,
                          v16,
                          (const MethodInfo_37987B4 *)Method_System_Collections_Generic_List_int__Contains__);
                  if ( !v15 )
                  {
                    v16 = *(unsigned int *)(v24 + 48);
                    v25 = v5->fields._items;
                    v26 = Method_System_Collections_Generic_List_int__Add__;
                    ++v5->fields._version;
                    if ( !v25 )
                      sub_1C3E7C0(v15, v16);
                    v27 = v5->fields._size;
                    if ( (unsigned int)v27 >= LODWORD(v25->max_length) )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        v5,
                        v16,
                        *(const MethodInfo_379843C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v5->fields._size = v27 + 1;
                      v25->m_Items[v27] = v16;
                    }
                  }
                }
                v22 = *(_DWORD *)(v21 + 24);
                ++v23;
              }
              while ( (int)v23 < v22 );
              namespaze = klass->_1.namespaze;
            }
          }
          ++v19;
        }
        while ( v19 < (int)namespaze );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v70,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_DeckData__Dispose__);
  v28 = battleEntity->fields.battleInfo;
  if ( !v28 )
    goto LABEL_109;
  stageCutins = v28->fields.stageCutins;
  if ( stageCutins )
  {
    max_length = stageCutins->max_length;
    if ( max_length >= 1 )
    {
      v31 = 0;
      while ( 1 )
      {
        if ( v31 >= max_length )
          goto LABEL_112;
        v32 = stageCutins->m_Items[v31];
        if ( !v32 )
          goto LABEL_109;
        dropInfos = v32->fields.dropInfos;
        if ( !dropInfos )
          goto LABEL_109;
        v34 = dropInfos->max_length;
        if ( v34 >= 1 )
          break;
LABEL_65:
        max_length = stageCutins->max_length;
        if ( (int)++v31 >= max_length )
          goto LABEL_66;
      }
      v35 = 0;
      while ( v35 < v34 )
      {
        v36 = dropInfos->m_Items[v35];
        if ( !v36 )
          goto LABEL_109;
        enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)(unsigned int)v36->fields.effectType;
        if ( (_DWORD)enemyDeck )
        {
          if ( !v5 )
            goto LABEL_109;
          QuestPhaseEntity = (QuestPhaseEntity_o *)System_Collections_Generic_List_int___Contains(
                                                     v5,
                                                     (int32_t)enemyDeck,
                                                     (const MethodInfo_37987B4 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)QuestPhaseEntity & 1) == 0 )
          {
            enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)(unsigned int)v36->fields.effectType;
            v37 = v5->fields._items;
            v38 = Method_System_Collections_Generic_List_int__Add__;
            ++v5->fields._version;
            if ( !v37 )
              goto LABEL_109;
            v39 = v5->fields._size;
            if ( (unsigned int)v39 >= LODWORD(v37->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v5,
                (int32_t)enemyDeck,
                *(const MethodInfo_379843C **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
            }
            else
            {
              v5->fields._size = v39 + 1;
              v37->m_Items[v39] = (int)enemyDeck;
            }
          }
        }
        v34 = dropInfos->max_length;
        if ( (int)++v35 >= v34 )
          goto LABEL_65;
      }
LABEL_112:
      sub_1C3E7C8(QuestPhaseEntity, enemyDeck);
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
    sub_1C3E7C0(QuestPhaseEntity, enemyDeck);
  }
  v40 = QuestPhaseEntity->klass;
  v41 = QuestPhaseEntity;
  v42 = *(unsigned __int16 *)&QuestPhaseEntity->klass->_2.rank;
  if ( *(_WORD *)&QuestPhaseEntity->klass->_2.rank )
  {
    p_offset = &v40->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_FunctionEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_FunctionEntity__TypeInfo )
    {
      --v42;
      p_offset += 4;
      if ( !v42 )
        goto LABEL_72;
    }
    v44 = (__int64)&v40->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_72:
    v44 = sub_1C8ED7C(QuestPhaseEntity, System_Collections_Generic_IEnumerable_FunctionEntity__TypeInfo, 0);
  }
  v46 = (*(__int64 (__fastcall **)(QuestPhaseEntity_o *, _QWORD))v44)(v41, *(_QWORD *)(v44 + 8));
  if ( !v46 )
    sub_1C3E7C0(0, v45);
  while ( 1 )
  {
    v47 = *(_QWORD *)v46;
    v48 = *(unsigned __int16 *)(*(_QWORD *)v46 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v46 + 302LL) )
    {
      v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v49 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v48;
        v49 += 4;
        if ( !v48 )
          goto LABEL_79;
      }
      v50 = v47 + 16LL * *v49 + 312;
    }
    else
    {
LABEL_79:
      v50 = sub_1C8ED7C(v46, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v46, *(_QWORD *)(v50 + 8)) & 1) == 0 )
      break;
    v51 = *(_QWORD *)v46;
    v52 = *(unsigned __int16 *)(*(_QWORD *)v46 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v46 + 302LL) )
    {
      v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_FunctionEntity__c **)v53 - 1) != System_Collections_Generic_IEnumerator_FunctionEntity__TypeInfo )
      {
        --v52;
        v53 += 4;
        if ( !v52 )
          goto LABEL_86;
      }
      v54 = v51 + 16LL * *v53 + 312;
    }
    else
    {
LABEL_86:
      v54 = sub_1C8ED7C(v46, System_Collections_Generic_IEnumerator_FunctionEntity__TypeInfo, 0);
    }
    v55 = (FunctionEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v46, *(_QWORD *)(v54 + 8));
    if ( !v55 )
      sub_1C3E7C0(0, v56);
    BattleSkillDropInfoDict = FunctionEntity__TryGetBattleSkillDropInfoDict(v55, &data, 0);
    if ( BattleSkillDropInfoDict )
    {
      if ( !data )
        sub_1C3E7C0(BattleSkillDropInfoDict, v58);
      v59 = EnumUtility__CastToEnum_Int32Enum_(
              data->fields.dropEffectType,
              0,
              (const MethodInfo_3100A34 *)Method_EnumUtility_CastToEnum_DropInfo_DropEffectType___);
      if ( (_DWORD)v59 )
      {
        if ( !v5 )
          sub_1C3E7C0(v59, (unsigned int)v59);
        v60 = v5->fields._items;
        v61 = Method_System_Collections_Generic_List_int__Add__;
        ++v5->fields._version;
        if ( !v60 )
          sub_1C3E7C0(v59, (unsigned int)v59);
        v62 = v5->fields._size;
        if ( (unsigned int)v62 >= LODWORD(v60->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v5,
            v59,
            *(const MethodInfo_379843C **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
        }
        else
        {
          v5->fields._size = v62 + 1;
          v60->m_Items[v62] = v59;
        }
      }
    }
  }
  v63 = *(_QWORD *)v46;
  v64 = *(unsigned __int16 *)(*(_QWORD *)v46 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v46 + 302LL) )
  {
    v65 = (int *)(*(_QWORD *)(v63 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v65 - 1) != System_IDisposable_TypeInfo )
    {
      --v64;
      v65 += 4;
      if ( !v64 )
        goto LABEL_101;
    }
    v66 = v63 + 16LL * *v65 + 312;
  }
  else
  {
LABEL_101:
    v66 = sub_1C8ED7C(v46, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v66)(v46, *(_QWORD *)(v66 + 8));
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

  if ( (byte_4C598FD & 1) == 0 )
  {
    sub_1C3E564(&BattleRootComponent__LoadAsset_d__13_TypeInfo);
    byte_4C598FD = 1;
  }
  v9 = sub_1C3E7B0(BattleRootComponent__LoadAsset_d__13_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 40) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 40), (int32_t)this, v10, v11);
  *(_QWORD *)(v9 + 48) = ent;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 48), (int32_t)ent, v12, v13);
  *(_DWORD *)(v9 + 56) = eventId;
  *(_QWORD *)(v9 + 64) = battleEnt;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 64), (int32_t)battleEnt, v14, v15);
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

  if ( (byte_4C598FE & 1) == 0 )
  {
    sub_1C3E564(&BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_TypeInfo);
    byte_4C598FE = 1;
  }
  v9 = sub_1C3E7B0(BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 40) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 40), (int32_t)this, v10, v11);
  *(_QWORD *)(v9 + 32) = ent;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 32), (int32_t)ent, v12, v13);
  *(_DWORD *)(v9 + 56) = eventId;
  *(_QWORD *)(v9 + 64) = finishCallback;
  sub_1C3E508((CGThumbnailListItem_o *)(v9 + 64), (int32_t)finishCallback, v14, v15);
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
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int size; // w8
  Il2CppObject *Item; // x19
  System_Action_o *v19; // x21

  if ( (byte_4C598FF & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C3E564(&SoundManager_TypeInfo);
    sub_1C3E564(&Method_BattleRootComponent___c__DisplayClass17_0__LoadBatteBgm_b__0__);
    sub_1C3E564(&BattleRootComponent___c__DisplayClass17_0_TypeInfo);
    byte_4C598FF = 1;
  }
  v7 = sub_1C3E7B0(BattleRootComponent___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_11;
  *(_QWORD *)(v7 + 16) = bgmList;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 16), (int32_t)bgmList, v10, v11);
  *(_QWORD *)(v7 + 24) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 24), (int32_t)this, v12, v13);
  *(_QWORD *)(v7 + 32) = callback;
  v14 = v7 + 32;
  sub_1C3E508((CGThumbnailListItem_o *)(v7 + 32), (int32_t)callback, v15, v16);
  v8 = *(System_Collections_Generic_List_object__o **)(v7 + 16);
  if ( !v8 )
    goto LABEL_11;
  size = v8->fields._size;
  if ( size <= 0 )
  {
    if ( *(_QWORD *)v14 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v14 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v14 + 64LL),
        *(_QWORD *)(*(_QWORD *)v14 + 40LL));
      return;
    }
LABEL_11:
    sub_1C3E7C0(v8, v9);
  }
  Item = System_Collections_Generic_List_object___get_Item(
           v8,
           size - 1,
           (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_string__get_Item__);
  v19 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v7,
    Method_BattleRootComponent___c__DisplayClass17_0__LoadBatteBgm_b__0__,
    0);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__downloadAudioAssetStorage((System_String_o *)Item, v19, 1, 0);
}


void BattleRootComponent__SetupObjectsExtractedFromLoadedAssets(BattleRootComponent_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0

  perf = this->fields.perf;
  if ( !perf || (BattlePerformance__SetDownloadEventSprite(perf, 0), (perf = this->fields.perf) == 0) )
    sub_1C3E7C0(perf, method);
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
  __int64 v6; // x1

  if ( (byte_4C59904 & 1) == 0 )
  {
    sub_1C3E564(&ScriptManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C59904 = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C51506 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C51506 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C3E7C0(0, v6);
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
  if ( (byte_4C59909 & 1) == 0 )
  {
    sub_1C3E564(&BattleSetupInfo_TypeInfo);
    sub_1C3E564(&ScriptManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    this = (BattleRootComponent_o *)sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C59909 = 1;
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
  v10 = (BattleSetupInfo_o *)sub_1C3E7B0(BattleSetupInfo_TypeInfo);
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
  if ( !byte_4C51506 )
  {
    sub_1C3E564(&TerminalPramsManager_TypeInfo);
    byte_4C51506 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  v13->static_fields->_IsAutoResume_k__BackingField = 1;
  this = (BattleRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_20:
    sub_1C3E7C0(this, method);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)this, 35, 1, v12, 1, 0);
}


void BattleRootComponent__TransitionTerminalOrBattleScript(
        BattleRootComponent_o *this,
        BattleScriptRootComponent_TalkScriptInfo_o *info,
        const MethodInfo *method)
{
  __int64 v5; // x20
  BattleScriptRootComponent_TalkScriptInfo_o *isLose; // x0
  const MethodInfo *v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  BattleScriptRootComponent_TalkScriptInfo_o **v10; // x21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct BattleData_o *data; // x8
  struct BaseBattleEvent_o *battleEvent; // x0
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

  if ( (byte_4C59905 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_string__TypeInfo);
    sub_1C3E564(&AssetManager_TypeInfo);
    sub_1C3E564(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1C3E564(&Method_DataManager_GetMasterData_QuestScriptReleaseMaster___);
    sub_1C3E564(&LocalizationManager_TypeInfo);
    sub_1C3E564(&MyRoomStateMaterial_TypeInfo);
    sub_1C3E564(&ScriptManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C3E564(&Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__0__);
    sub_1C3E564(&Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__1__);
    sub_1C3E564(&BattleRootComponent___c__DisplayClass23_0_TypeInfo);
    sub_1C3E564(&StringLiteral_2752/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_MESSAGE"*/);
    sub_1C3E564(&StringLiteral_2753/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_TITLE"*/);
    byte_4C59905 = 1;
  }
  entity = 0;
  v5 = sub_1C3E7B0(BattleRootComponent___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_64;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 24) = info;
  v10 = (BattleScriptRootComponent_TalkScriptInfo_o **)(v5 + 24);
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 24), (int32_t)info, v11, v12);
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
    isLose = *v10;
    if ( !*v10 )
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
          BattleRootComponent__TerminalTransition((BattleRootComponent_o *)isLose, *v10, v15);
          return;
        }
        v16 = this->fields.data;
        if ( v16 )
        {
          if ( (v16->fields.selectedInterruptionWave & 0x80000000) == 0 )
          {
            BattleRootComponent__TransitionPartyOrganization(this, v7);
            return;
          }
          goto LABEL_23;
        }
      }
      goto LABEL_64;
    }
    v17 = *v10;
    if ( !*v10 )
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
      if ( !*v10 )
        goto LABEL_64;
      (*v10)->fields.qId = overwriteEndScriptQuestId;
      v22 = *(_DWORD *)(v5 + 32);
      if ( !MyRoomStateMaterial_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomStateMaterial_TypeInfo);
      MyRoomStateMaterial__SetPlayedBranchQuestData(v22, overwriteEndScriptQuestId, 0);
    }
    else
    {
      LODWORD(overwriteEndScriptQuestId) = (_DWORD)isLose;
    }
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !isLose
      || (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_object_(
                                                                   (DataManager_o *)isLose,
                                                                   (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestScriptReleaseMaster___)) == 0
      || (ScriptQuestId = QuestScriptReleaseMaster__GetScriptQuestId(
                            (QuestScriptReleaseMaster_o *)isLose,
                            overwriteEndScriptQuestId,
                            *(_DWORD *)(v5 + 36),
                            2,
                            0),
          (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
      || (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_object_(
                                                                   (DataManager_o *)isLose,
                                                                   (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___),
          !*v10)
      || !isLose )
    {
LABEL_64:
      sub_1C3E7C0(isLose, v7);
    }
    if ( !QuestPhaseDetailMaster__TryGetEntity(
            (QuestPhaseDetailMaster_o *)isLose,
            &entity,
            (*v10)->fields.qId,
            (*v10)->fields.pId,
            0) )
      goto LABEL_53;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)entity;
    if ( !entity )
      goto LABEL_64;
    if ( !QuestPhaseDetailEntity__HasFlag(entity, 0x20000000000LL, 0) )
      goto LABEL_53;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !isLose )
      goto LABEL_64;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)isLose,
                                                             (const MethodInfo_30F9A70 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !*v10 || !isLose )
      goto LABEL_64;
    QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)isLose, (*v10)->fields.qId, 0);
    if ( !QuestEntity || !QuestEntity__IsOpenByTime(QuestEntity, 0, 0) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v39 = LocalizationManager__Get((System_String_o *)StringLiteral_2753/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_TITLE"*/, 0);
      v40 = LocalizationManager__Get((System_String_o *)StringLiteral_2752/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_MESSAGE"*/, 0);
      v41 = (NotificationDialog_ClickDelegate_o *)sub_1C3E7B0(NotificationDialog_ClickDelegate_TypeInfo);
      NotificationDialog_ClickDelegate___ctor(
        v41,
        (Il2CppObject *)v5,
        Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__1__,
        0);
      if ( !Instance )
        goto LABEL_64;
      CommonUI__OpenNotificationDialog_31240556(
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
      isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
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
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
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
      v34 = System_String__Concat_63636468(textPath, ScriptAssetName, 0);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__isExistAssetStorage(v34, 0) )
      {
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !isLose )
          goto LABEL_64;
        AvalonSceneManager__transitionSceneRefresh(
          (AvalonSceneManager_o *)isLose,
          this->fields.nextscenetype,
          1,
          (Il2CppObject *)*v10,
          0,
          0);
      }
      else
      {
LABEL_56:
        v35 = *(_DWORD *)(v5 + 32);
        v36 = *(_DWORD *)(v5 + 36);
        v37 = (System_Action_object__o *)sub_1C3E7B0(System_Action_string__TypeInfo);
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
  __int64 v8; // x1
  Il2CppObject *SingleEntity; // x0
  BattleFBXComponent_c *v10; // x8
  BattleEntity_o *v11; // x20
  BattlePerformance_c *v12; // x0
  QuestPhaseEntity_o *QuestPhaseEntity; // x21
  BattleData_o *data; // x22
  int64_t createdAt; // x22
  System_Int32_array *v16; // x22
  const MethodInfo *v17; // x4
  System_Collections_IEnumerator_o *Asset; // x0
  UnityEngine_Object_o *debugButton; // x20
  ManagerConfig_c *v20; // x0

  if ( (byte_4C598FB & 1) == 0 )
  {
    sub_1C3E564(&AssetStorageLoadWrapper_TypeInfo);
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&BattleActionData_TypeInfo);
    sub_1C3E564(&BattleEffectUtility_TypeInfo);
    sub_1C3E564(&BattleFBXComponent_TypeInfo);
    sub_1C3E564(&BattlePerformance_TypeInfo);
    sub_1C3E564(&BuffList_TypeInfo);
    sub_1C3E564(&CatAndMouseGame_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_BattleBgMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_BattleMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    sub_1C3E564(&System_GC_TypeInfo);
    sub_1C3E564(&ManagerConfig_TypeInfo);
    sub_1C3E564(&UnityEngine_Object_TypeInfo);
    sub_1C3E564(&OptionManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C3E564(&StringLiteral_15570/*"WINGNAME"*/);
    byte_4C598FB = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_15570/*"WINGNAME"*/, 0);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  CatAndMouseGame__SixHomeBuilding(Value, 0);
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect(0);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( !assetStorageLoadWrapper )
  {
    assetStorageLoadWrapper = (AssetStorageLoadWrapper_o *)sub_1C3E7B0(AssetStorageLoadWrapper_TypeInfo);
    AssetStorageLoadWrapper___ctor(assetStorageLoadWrapper, 0);
  }
  this->fields.assetStorageLoadWrapper = assetStorageLoadWrapper;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.assetStorageLoadWrapper, (int32_t)assetStorageLoadWrapper, v4, v5);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_object )
    goto LABEL_56;
  SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                   (const MethodInfo_33B5560 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
  v10 = BattleFBXComponent_TypeInfo;
  v11 = (BattleEntity_o *)SingleEntity;
  if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    v10 = BattleFBXComponent_TypeInfo;
  }
  v10->static_fields->EnableEvent = 1;
  v12 = BattlePerformance_TypeInfo;
  if ( !BattlePerformance_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
    v12 = BattlePerformance_TypeInfo;
  }
  v12->static_fields->CameraFlip = 0;
  Master_object = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    Master_object = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(*((_QWORD *)Master_object + 23) + 48LL) = 0;
  if ( !v11 )
    goto LABEL_56;
  QuestPhaseEntity = BattleEntity__GetQuestPhaseEntity(v11, 0);
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
    createdAt = v11->fields.createdAt;
    if ( !byte_4C548C0 )
    {
      sub_1C3E564(&SkillLvMaster_TypeInfo);
      byte_4C548C0 = 1;
    }
    SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime = createdAt;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_BattleBgMaster___);
  if ( !Master_object )
    goto LABEL_56;
  v16 = (System_Int32_array *)*((_QWORD *)Master_object + 10);
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  BattleEffectUtility__AddNotPreloadEffectId(v16, 0);
  Asset = BattleRootComponent__LoadAsset(this, QuestPhaseEntity, v11->fields.eventId, v11, v17);
  UnityEngine_MonoBehaviour__StartCoroutine_71327136((UnityEngine_MonoBehaviour_o *)this, Asset, 0);
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_56;
  *((_DWORD *)Master_object + 38) = 3;
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_56;
  if ( *((_BYTE *)Master_object + 148) )
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
    v20 = ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v20 = ManagerConfig_TypeInfo;
    }
    if ( v20->static_fields->UseDebugCommand )
    {
      Master_object = this->fields.debugButton;
      if ( Master_object )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
        return;
      }
LABEL_56:
      sub_1C3E7C0(Master_object, v8);
    }
  }
}


void BattleRootComponent__beginResume(BattleRootComponent_o *this, Il2CppObject *data, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  CommonUI_o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  CGThumbnailListItem_o *p_callbackBeginResumeFunc; // x19
  struct BattleRootComponent_callBackBeginResume_o *v10; // x20
  struct BattleRootComponent_callBackBeginResume_o *callbackBeginResumeFunc; // t1

  if ( (byte_4C598FA & 1) == 0 )
  {
    sub_1C3E564(&AvalonSceneManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C598FA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v6 )
    sub_1C3E7C0(Instance, v5);
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
  callbackBeginResumeFunc = this->fields.callbackBeginResumeFunc;
  p_callbackBeginResumeFunc = (CGThumbnailListItem_o *)&this->fields.callbackBeginResumeFunc;
  v10 = callbackBeginResumeFunc;
  if ( callbackBeginResumeFunc )
  {
    p_callbackBeginResumeFunc->klass = 0;
    sub_1C3E508(p_callbackBeginResumeFunc, 0, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void BattleRootComponent__beginStartUp(BattleRootComponent_o *this, Il2CppObject *data, const MethodInfo *method)
{
  __int64 naturalAligment; // x9
  Il2CppObject *Instance; // x21
  __int64 Item; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x21
  struct BattleLogic_o *logic; // x20
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct BattleLogic_o *v13; // x8
  struct BattleLogic_LOGICTYPE_array *logiclist; // x8
  int max_length; // w9

  if ( (byte_4C59900 & 1) == 0 )
  {
    sub_1C3E564(&AndroidBackKeyManager_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C3E564(&BattleLogic_LOGICTYPE___TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_1C3E564(&StringLiteral_21248/*"limitCount"*/);
    sub_1C3E564(&StringLiteral_10908/*"QUEST_START"*/);
    sub_1C3E564(&StringLiteral_23302/*"servantId"*/);
    byte_4C59900 = 1;
  }
  if ( data )
  {
    naturalAligment = System_Collections_Generic_Dictionary_string__int__TypeInfo->_2.naturalAligment;
    if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (System_Collections_Generic_Dictionary_string__int__c *)data->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_Dictionary_string__int__TypeInfo )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      Item = System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)data,
               (Il2CppObject *)StringLiteral_23302/*"servantId"*/,
               (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !Instance )
        goto LABEL_18;
      LODWORD(Instance[2].monitor) = Item;
      v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      Item = System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)data,
               (Il2CppObject *)StringLiteral_21248/*"limitCount"*/,
               (const MethodInfo_346CA30 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !v9 )
        goto LABEL_18;
      HIDWORD(v9[2].monitor) = Item;
      Item = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Item )
        goto LABEL_18;
      *(_BYTE *)(Item + 52) = 1;
      Item = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Item
        || (*(_BYTE *)(Item + 53) = 1,
            logic = this->fields.logic,
            Item = sub_1C3E60C(BattleLogic_LOGICTYPE___TypeInfo, 2),
            !logic)
        || (logic->fields.logiclist = (struct BattleLogic_LOGICTYPE_array *)Item,
            sub_1C3E508((CGThumbnailListItem_o *)&logic->fields.logiclist, Item, v11, v12),
            (v13 = this->fields.logic) == 0)
        || (logiclist = v13->fields.logiclist) == 0 )
      {
LABEL_18:
        sub_1C3E7C0(Item, v8);
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
      sub_1C3EA80(data);
    }
    sub_1C3E7C8(Item, v8);
  }
LABEL_16:
  SceneRootComponent__beginStartUp_41529716((SceneRootComponent_o *)this, 0);
  AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 1;
  Item = (__int64)this->fields.myFSM;
  if ( !Item )
    goto LABEL_18;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Item, (System_String_o *)StringLiteral_10908/*"QUEST_START"*/, 0);
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

  if ( (byte_4C59901 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&Method_BattleRootComponent_goNextScene__);
    sub_1C3E564(&OptionManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_AtlasManager__getInstance__);
    byte_4C59901 = 1;
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
    v5 = sub_1C8EC78(v4);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C8EC78(v4);
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
    v8 = sub_1C8EC78(v7);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C8EC78(v7);
  perf = **(BattlePerformance_o ***)(v9 + 184);
  if ( !perf
    || (AtlasManager__UnloadWarBoardAtlas((AtlasManager_o *)perf, 0), (perf = this->fields.perf) == 0)
    || (BattlePerformance__ReleaseEventInfoPointGauge(perf, 0), (perf = (BattlePerformance_o *)this->fields.data) == 0) )
  {
LABEL_33:
    sub_1C3E7C0(perf, method);
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
    v11 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_BattleRootComponent_goNextScene__, 0);
    OutGameAsset = BattleRootComponent__loadOutGameAsset(this, v11, v12);
    UnityEngine_MonoBehaviour__StartCoroutine_71327136((UnityEngine_MonoBehaviour_o *)this, OutGameAsset, 0);
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
  if ( (byte_4C59903 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (BattleRootComponent_o *)sub_1C3E564(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    byte_4C59903 = 1;
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
  v12 = (BattleScriptRootComponent_TalkScriptInfo_o *)sub_1C3E7B0(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
  BattleScriptRootComponent_TalkScriptInfo___ctor_47900748(v12, v10, id, questPhase, 4, win_lose, WinResult, 0, 0);
  this = (BattleRootComponent_o *)v2->fields.data;
  if ( !this
    || (BattleData__release((BattleData_o *)this, 0),
        (this = (BattleRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
LABEL_10:
    sub_1C3E7C0(this, method);
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

  if ( (byte_4C59902 & 1) == 0 )
  {
    sub_1C3E564(&BattleRootComponent__loadOutGameAsset_d__20_TypeInfo);
    byte_4C59902 = 1;
  }
  v5 = sub_1C3E7B0(BattleRootComponent__loadOutGameAsset_d__20_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 64) = callback;
  sub_1C3E508((CGThumbnailListItem_o *)(v5 + 64), (int32_t)callback, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void BattleRootComponent__setCallbackBeginResume(
        BattleRootComponent_o *this,
        BattleRootComponent_callBackBeginResume_o *func,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.callbackBeginResumeFunc = func;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.callbackBeginResumeFunc, (int32_t)func, (int32_t)method, v3);
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
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *v18; // x9
  int v19; // w10
  int32_t _7__wrap5; // w8
  int v21; // w9
  bool result; // w0
  struct AddSkillData_array *_7__wrap1; // x11
  int max_length; // w12
  AddSkillData_o *v25; // x8
  ClassBoardCommandSpellMaster_o *classBoardCSMaster; // x0
  BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *v27; // x9
  __int128 v28; // q0
  struct System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__o *p__7__wrap3; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *v32; // x8
  ClassBoardCommandSpellEntity_o *current; // x0
  struct System_Int32_array *EffectIdArray; // x1
  BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct System_Int32_array *_7__wrap4; // x10
  unsigned int v39; // w11
  const MethodInfo *v40; // x1
  int32_t v41; // w8
  System_Collections_Generic_List_Enumerator_T__o v42[2]; // [xsp+8h] [xbp-68h] BYREF
  BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o **v43; // [xsp+40h] [xbp-30h]
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+48h] [xbp-28h] BYREF
  BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *v45; // [xsp+58h] [xbp-18h] BYREF

  v45 = this;
  v4 = this;
  if ( (byte_4C59912 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__);
    this = (BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *)sub_1C3E564(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
    byte_4C59912 = 1;
  }
  v43 = &v45;
  entitys = 0;
  _1__state = v4->fields.__1__state;
  if ( _1__state == 1 )
  {
    _7__wrap5 = v4->fields.__7__wrap5;
    v4->fields.__1__state = -3;
    v21 = _7__wrap5 + 1;
    v4->fields.__7__wrap5 = _7__wrap5 + 1;
    goto LABEL_32;
  }
  if ( _1__state )
    return 0;
  battleEntity = v4->fields.battleEntity;
  v4->fields.__1__state = -1;
  if ( !battleEntity )
    sub_1C3E7C0(this, method);
  battleInfo = battleEntity->fields.battleInfo;
  if ( !battleInfo )
    sub_1C3E7C0(0, method);
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
  v13 = v45;
  v45->fields.__7__wrap1 = classBoardAddCommandSpells;
  sub_1C3E508((CGThumbnailListItem_o *)&v13->fields.__7__wrap1, (int32_t)classBoardAddCommandSpells, v10, v11);
  v18 = v45;
  v19 = 0;
  v45->fields.__7__wrap2 = 0;
  while ( 1 )
  {
    _7__wrap1 = v18->fields.__7__wrap1;
    if ( !_7__wrap1 )
      sub_1C3E7C0(EntityList, v15);
    max_length = _7__wrap1->max_length;
    if ( v19 >= max_length )
    {
      v18->fields.__7__wrap1 = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&v18->fields.__7__wrap1, 0, v16, v17);
      return 0;
    }
    if ( v19 >= (unsigned int)max_length )
      sub_1C3E7C8(EntityList, v15);
    v25 = _7__wrap1->m_Items[v19];
    if ( !v25 )
      sub_1C3E7C0(EntityList, v15);
    classBoardCSMaster = v18->fields.classBoardCSMaster;
    if ( !classBoardCSMaster )
      sub_1C3E7C0(0, v15);
    EntityList = ClassBoardCommandSpellMaster__TryGetEntityList(
                   classBoardCSMaster,
                   &entitys,
                   v25->fields.id,
                   v25->fields.lv,
                   0);
    if ( EntityList )
      break;
    v18 = v45;
LABEL_29:
    v19 = v18->fields.__7__wrap2 + 1;
    v18->fields.__7__wrap2 = v19;
  }
  if ( !entitys )
    sub_1C3E7C0(0, v15);
  System_Collections_Generic_List_object___GetEnumerator(
    v42,
    (System_Collections_Generic_List_object__o *)entitys,
    (const MethodInfo_37B5F58 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
  v27 = v45;
  v28 = *(_OWORD *)&v42[0].fields._list;
  p__7__wrap3 = &v45->fields.__7__wrap3;
  v42[1] = v42[0];
  v45->fields.__7__wrap3.fields._current = (struct ClassBoardCommandSpellEntity_o *)v42[0].fields._current;
  *(_OWORD *)&v27->fields.__7__wrap3.fields._list = v28;
  sub_1C3E508((CGThumbnailListItem_o *)p__7__wrap3, 0, v30, v31);
  v32 = v45;
  v45->fields.__1__state = -3;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v32->fields.__7__wrap3,
            (const MethodInfo_353FC4C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__) )
    {
      BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26____m__Finally1(v45, v40);
      v18 = v45;
      v45->fields.__7__wrap3.fields._list = 0;
      *(_QWORD *)&v18->fields.__7__wrap3.fields._index = 0;
      v18->fields.__7__wrap3.fields._current = 0;
      goto LABEL_29;
    }
    current = v45->fields.__7__wrap3.fields._current;
    if ( !current )
      sub_1C3E7C0(0, v40);
    EffectIdArray = ClassBoardCommandSpellEntity__GetEffectIdArray(current, 0);
    v35 = v45;
    v45->fields.__7__wrap4 = EffectIdArray;
    sub_1C3E508((CGThumbnailListItem_o *)&v35->fields.__7__wrap4, (int32_t)EffectIdArray, v36, v37);
    v4 = v45;
    v21 = 0;
    v45->fields.__7__wrap5 = 0;
LABEL_32:
    _7__wrap4 = v4->fields.__7__wrap4;
    if ( !_7__wrap4 )
      sub_1C3E7C0(this, method);
    v39 = _7__wrap4->max_length;
    if ( v21 < (int)v39 )
      break;
    v4->fields.__7__wrap4 = 0;
    sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.__7__wrap4, 0, v2, v3);
    v32 = v45;
  }
  if ( v21 >= v39 )
    sub_1C3E7C8(this, method);
  v41 = _7__wrap4->m_Items[v21];
  result = 1;
  v4->fields.__1__state = 1;
  v4->fields.__2__current = v41;
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

  if ( (byte_4C59915 & 1) == 0 )
  {
    sub_1C3E564(&BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_TypeInfo);
    byte_4C59915 = 1;
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
    v6 = (BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *)sub_1C3E7B0(BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0);
    v6->fields.__1__state = 0;
    v6->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
  }
  _3__battleEntity = this->fields.__3__battleEntity;
  v6->fields.battleEntity = _3__battleEntity;
  sub_1C3E508((CGThumbnailListItem_o *)&v6->fields.battleEntity, (int32_t)_3__battleEntity, v4, v5);
  _3__classBoardCSMaster = this->fields.__3__classBoardCSMaster;
  v6->fields.classBoardCSMaster = _3__classBoardCSMaster;
  sub_1C3E508((CGThumbnailListItem_o *)&v6->fields.classBoardCSMaster, (int32_t)_3__classBoardCSMaster, v9, v10);
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

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
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

  if ( (byte_4C59914 & 1) == 0 )
  {
    sub_1C3E564(&int_TypeInfo);
    byte_4C59914 = 1;
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
  if ( (byte_4C59913 & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
    byte_4C59913 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap3,
    (const MethodInfo_353FC48 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
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
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  System_Collections_Generic_IEnumerable_TSource__o *assetDataByIndex; // x21
  BattleRootComponent___c_c *v68; // x0
  System_Func_T__TResult__o *_9__13_2; // x22
  Il2CppObject *v70; // x23
  struct BattleRootComponent___c_StaticFields *static_fields; // x0
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v74; // x0
  BattleRootComponent___c_c *v75; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v76; // x21
  System_Func_T__TResult__o *_9__13_3; // x22
  Il2CppObject *v78; // x23
  struct BattleRootComponent___c_StaticFields *v79; // x0
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v82; // x0
  System_Collections_Generic_List_TSource__o *v83; // x0
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  struct BattleEntity_o *battleEnt; // x8
  Il2CppObject *v87; // x21
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  System_String_o *v90; // x0
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  struct BattleRootComponent___c__DisplayClass13_2_o *_8__2; // x8
  BattleRootComponent__LoadAsset_d__13_o *v94; // x21
  AssetStorageLoadWrapper_o *v95; // x23
  Il2CppObject *v96; // x24
  AssetLoader_LoadEndDataHandler_o *v97; // x22
  struct BattleRootComponent___c__DisplayClass13_0_o *v98; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v99; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v100; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v101; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v102; // x8
  struct BattlePerformance_o *perf; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v104; // x8
  struct BattlePerformance_o *v105; // x8
  struct BattlePerformance_o *v106; // x8
  AssumedBattleAssetLoadManager_o *AssumedBattleAssetLoadManager_k__BackingField; // x21
  struct BattleRootComponent___c__DisplayClass13_0_o *v108; // x8
  struct BattlePerformance_o *v109; // x8
  const MethodInfo *v110; // x1
  int32_t v111; // w2
  const MethodInfo *v112; // x3
  int v113; // [xsp+Ch] [xbp-64h] BYREF

  v4 = this;
  if ( (byte_4C59916 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&Method_AssumedBattleAssetLoadManager_Release_AssumedBattleAssetSearcherBeforeBattle___);
    sub_1C3E564(&BattleDataDefine_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__AssetData___ctor__);
    sub_1C3E564(&System_Collections_Generic_Dictionary_int__AssetData__TypeInfo);
    sub_1C3E564(&Method_System_Linq_Enumerable_OrderBy_KeyValuePair_int__AssetData___int___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Select_KeyValuePair_int__AssetData___AssetData___);
    sub_1C3E564(&Method_System_Linq_Enumerable_ToList_AssetData___);
    sub_1C3E564(&System_Func_KeyValuePair_int__AssetData___int__TypeInfo);
    sub_1C3E564(&System_Func_KeyValuePair_int__AssetData___AssetData__TypeInfo);
    sub_1C3E564(&System_GC_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_AssetData___ctor__);
    sub_1C3E564(&System_Collections_Generic_List_AssetData__TypeInfo);
    sub_1C3E564(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C3E564(&OptionManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C3E564(&Method_BattleRootComponent___c__LoadAsset_b__13_2__);
    sub_1C3E564(&Method_BattleRootComponent___c__LoadAsset_b__13_3__);
    sub_1C3E564(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__0__);
    sub_1C3E564(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__1__);
    sub_1C3E564(&BattleRootComponent___c__DisplayClass13_0_TypeInfo);
    sub_1C3E564(&Method_BattleRootComponent___c__DisplayClass13_1__LoadAsset_b__4__);
    sub_1C3E564(&BattleRootComponent___c__DisplayClass13_1_TypeInfo);
    sub_1C3E564(&Method_BattleRootComponent___c__DisplayClass13_2__LoadAsset_b__5__);
    sub_1C3E564(&BattleRootComponent___c__DisplayClass13_2_TypeInfo);
    sub_1C3E564(&BattleRootComponent___c_TypeInfo);
    sub_1C3E564(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C3E564(&StringLiteral_3104/*"Battle/UniqueCamera/"*/);
    this = (BattleRootComponent__LoadAsset_d__13_o *)sub_1C3E564(&StringLiteral_15069/*"UniqueCameraPrefab"*/);
    byte_4C59916 = 1;
  }
  v113 = 0;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v6 = (Il2CppObject *)sub_1C3E7B0(BattleRootComponent___c__DisplayClass13_0_TypeInfo);
      System_Object___ctor(v6, 0);
      v4->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass13_0_o *)v6;
      sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v6, v7, v8);
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__LoadAsset_d__13_o *)OptionManager__IsSavedBattleMemoryMode(0);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_14;
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect(0);
      v9 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v9, 0);
      v4->fields.__2__current = (Il2CppObject *)v9;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C3E508(p__2__current, (int32_t)v9, v11, v12);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    case 1:
      v4->fields.__1__state = -1;
      this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_110;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0, 0);
      this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_110;
      v14 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0);
      v4->fields.__2__current = (Il2CppObject *)v14;
      v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C3E508(v15, (int32_t)v14, v16, v17);
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
      v22 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(
        v22,
        (Il2CppObject *)_8__1,
        Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__0__,
        0);
      if ( !_4__this )
        goto LABEL_110;
      AssetsIndependentToMainOne = BattleRootComponent__LoadAssetsIndependentToMainOne(_4__this, ent, eventId, v22, v23);
      UnityEngine_MonoBehaviour__StartCoroutine_71327136(
        (UnityEngine_MonoBehaviour_o *)_4__this,
        AssetsIndependentToMainOne,
        0);
      this = (BattleRootComponent__LoadAsset_d__13_o *)v4->fields.__8__1;
      if ( !this )
        goto LABEL_110;
      this->fields.__2__current = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.__2__current, 0, v25, v26);
      assetStorageLoadWrapper = _4__this->fields.assetStorageLoadWrapper;
      v28 = BattleDataDefine_TypeInfo;
      if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
        v28 = BattleDataDefine_TypeInfo;
      }
      v29 = (Il2CppObject *)v4->fields.__8__1;
      ASSET_BATTLE_COMMON = v28->static_fields->ASSET_BATTLE_COMMON;
      v31 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3E7B0(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v31,
        v29,
        Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__1__,
        0);
      if ( !assetStorageLoadWrapper )
        goto LABEL_110;
      AssetStorageLoadWrapper__LoadAssetStorage(assetStorageLoadWrapper, ASSET_BATTLE_COMMON, v31, 1, 0);
      v32 = (System_Collections_Generic_List_object__o *)sub_1C3E7B0(System_Collections_Generic_List_AssetData__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v32,
        (const MethodInfo_37B4C2C *)Method_System_Collections_Generic_List_AssetData___ctor__);
      v4->fields._motionDataList_5__2 = (struct System_Collections_Generic_List_AssetData__o *)v32;
      sub_1C3E508((CGThumbnailListItem_o *)&v4->fields._motionDataList_5__2, (int32_t)v32, v33, v34);
      AllFieldMotionIds = BattleRootComponent__GetAllFieldMotionIds(
                            v35,
                            v4->fields.battleEnt,
                            v4->fields.ent,
                            &v4->fields._baseMotionIds_5__4,
                            v36);
      v4->fields._fieldMotionIds_5__3 = AllFieldMotionIds;
      p_fieldMotionIds_5__3 = &v4->fields._fieldMotionIds_5__3;
      sub_1C3E508((CGThumbnailListItem_o *)&v4->fields._fieldMotionIds_5__3, (int32_t)AllFieldMotionIds, v39, v40);
      v41 = v4->fields.__8__1;
      if ( !v41 )
        goto LABEL_110;
      v41->fields.loadCompCnt = 0;
      v42 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C3E7B0(System_Collections_Generic_Dictionary_int__AssetData__TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v42,
        (const MethodInfo_340BA68 *)Method_System_Collections_Generic_Dictionary_int__AssetData___ctor__);
      v41->fields.assetDataByIndex = (struct System_Collections_Generic_Dictionary_int__AssetData__o *)v42;
      sub_1C3E508((CGThumbnailListItem_o *)&v41->fields.assetDataByIndex, (int32_t)v42, v43, v44);
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
      sub_1C3E7C8(this, method);
    v48 = v45->m_Items[v47];
    v49 = sub_1C3E7B0(BattleRootComponent___c__DisplayClass13_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v49, 0);
    if ( !v49 )
      goto LABEL_110;
    v52 = v4->fields.__8__1;
    v53 = v4;
    *(_QWORD *)(v49 + 24) = v52;
    v54 = v49 + 24;
    sub_1C3E508((CGThumbnailListItem_o *)(v49 + 24), (int32_t)v52, v50, v51);
    *(_DWORD *)(v49 + 16) = v47;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v55 = BattleDataDefine__FieldMotionPath(v48, 0);
    v56 = _4__this->fields.assetStorageLoadWrapper;
    v57 = v55;
    v58 = _4__this;
    v59 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3E7B0(AssetLoader_LoadEndDataHandler_TypeInfo);
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
  this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
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
    sub_1C3E508(v15, 0, v2, v3);
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
  v68 = BattleRootComponent___c_TypeInfo;
  if ( !BattleRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleRootComponent___c_TypeInfo);
    v68 = BattleRootComponent___c_TypeInfo;
  }
  _9__13_2 = (System_Func_T__TResult__o *)v68->static_fields->__9__13_2;
  if ( !_9__13_2 )
  {
    if ( !v68->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v68);
      v68 = BattleRootComponent___c_TypeInfo;
    }
    v70 = (Il2CppObject *)v68->static_fields->__9;
    _9__13_2 = (System_Func_T__TResult__o *)sub_1C3E7B0(System_Func_KeyValuePair_int__AssetData___int__TypeInfo);
    System_Func_KeyValuePair_int__object___int____ctor(
      _9__13_2,
      v70,
      Method_BattleRootComponent___c__LoadAsset_b__13_2__,
      0);
    static_fields = BattleRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__13_2 = (struct System_Func_KeyValuePair_int__AssetData___int__o *)_9__13_2;
    sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__13_2, (int32_t)_9__13_2, v72, v73);
  }
  v74 = System_Linq_Enumerable__OrderBy_KeyValuePair_int__object___int_(
          assetDataByIndex,
          (System_Func_TSource__TKey__o *)_9__13_2,
          (const MethodInfo_3128ED4 *)Method_System_Linq_Enumerable_OrderBy_KeyValuePair_int__AssetData___int___);
  v75 = BattleRootComponent___c_TypeInfo;
  v76 = (System_Collections_Generic_IEnumerable_TSource__o *)v74;
  if ( !BattleRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleRootComponent___c_TypeInfo);
    v75 = BattleRootComponent___c_TypeInfo;
  }
  _9__13_3 = (System_Func_T__TResult__o *)v75->static_fields->__9__13_3;
  if ( !_9__13_3 )
  {
    if ( !v75->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v75);
      v75 = BattleRootComponent___c_TypeInfo;
    }
    v78 = (Il2CppObject *)v75->static_fields->__9;
    _9__13_3 = (System_Func_T__TResult__o *)sub_1C3E7B0(System_Func_KeyValuePair_int__AssetData___AssetData__TypeInfo);
    System_Func_KeyValuePair_int__object___object____ctor(
      _9__13_3,
      v78,
      Method_BattleRootComponent___c__LoadAsset_b__13_3__,
      0);
    v79 = BattleRootComponent___c_TypeInfo->static_fields;
    v79->__9__13_3 = (struct System_Func_KeyValuePair_int__AssetData___AssetData__o *)_9__13_3;
    sub_1C3E508((CGThumbnailListItem_o *)&v79->__9__13_3, (int32_t)_9__13_3, v80, v81);
  }
  v82 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_int__object___object_(
                                                               v76,
                                                               (System_Func_TSource__TResult__o *)_9__13_3,
                                                               (const MethodInfo_312A8A0 *)Method_System_Linq_Enumerable_Select_KeyValuePair_int__AssetData___AssetData___);
  v83 = System_Linq_Enumerable__ToList_object_(
          v82,
          (const MethodInfo_313DE84 *)Method_System_Linq_Enumerable_ToList_AssetData___);
  v4->fields._motionDataList_5__2 = (struct System_Collections_Generic_List_AssetData__o *)v83;
  sub_1C3E508((CGThumbnailListItem_o *)&v4->fields._motionDataList_5__2, (int32_t)v83, v84, v85);
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
  v113 = (int)this;
  if ( (_DWORD)this )
  {
    v87 = (Il2CppObject *)sub_1C3E7B0(BattleRootComponent___c__DisplayClass13_2_TypeInfo);
    System_Object___ctor(v87, 0);
    v4->fields.__8__2 = (struct BattleRootComponent___c__DisplayClass13_2_o *)v87;
    sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.__8__2, (int32_t)v87, v88, v89);
    v90 = System_Int32__ToString((int32_t)&v113, 0);
    this = (BattleRootComponent__LoadAsset_d__13_o *)System_String__Concat_63636468(
                                                       (System_String_o *)StringLiteral_3104/*"Battle/UniqueCamera/"*/,
                                                       v90,
                                                       0);
    _8__2 = v4->fields.__8__2;
    if ( !_8__2 )
      goto LABEL_110;
    _8__2->fields.uniqueCameraData = 0;
    v94 = this;
    sub_1C3E508((CGThumbnailListItem_o *)&_8__2->fields, 0, v91, v92);
    if ( !_4__this )
      goto LABEL_110;
    v95 = _4__this->fields.assetStorageLoadWrapper;
    v96 = (Il2CppObject *)v4->fields.__8__2;
    v97 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3E7B0(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v97,
      v96,
      Method_BattleRootComponent___c__DisplayClass13_2__LoadAsset_b__5__,
      0);
    if ( !v95 )
      goto LABEL_110;
    this = (BattleRootComponent__LoadAsset_d__13_o *)AssetStorageLoadWrapper__LoadAssetStorage(
                                                       v95,
                                                       (System_String_o *)v94,
                                                       v97,
                                                       1,
                                                       0);
    v4->fields._loadSucceeded_5__5 = (unsigned __int8)this & 1;
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v98 = v4->fields.__8__1;
      if ( !v98 )
        goto LABEL_110;
      this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_110;
      BattlePerformance__loadStorageObjectCameraCommon((BattlePerformance_o *)this, v98->fields.commonData, 0);
    }
LABEL_44:
    p__8__2 = &v4->fields.__8__2;
    v63 = v4->fields.__8__2;
    if ( !v63 )
      goto LABEL_110;
    method = (const MethodInfo *)v63->fields.uniqueCameraData;
    if ( !method )
    {
      v4->fields.__2__current = 0;
      v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C3E508(v15, 0, v2, v3);
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
        (AssetData_o *)method,
        (System_String_o *)StringLiteral_15069/*"UniqueCameraPrefab"*/,
        0);
      *p__8__2 = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.__8__2, 0, v65, v66);
    }
    else
    {
      *p__8__2 = 0;
      sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.__8__2, 0, v2, v3);
      if ( !_4__this )
        goto LABEL_110;
    }
  }
  else
  {
    if ( !_4__this )
      goto LABEL_110;
    v99 = v4->fields.__8__1;
    if ( !v99 )
      goto LABEL_110;
    this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
    if ( !this )
      goto LABEL_110;
    BattlePerformance__loadStorageObjectCameraCommon((BattlePerformance_o *)this, v99->fields.commonData, 0);
  }
  v100 = v4->fields.__8__1;
  if ( !v100 )
    goto LABEL_110;
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_110;
  BattlePerformance__loadStorageObjectCommonMotion((BattlePerformance_o *)this, v100->fields.commonData, 0);
  v101 = v4->fields.__8__1;
  if ( !v101 )
    goto LABEL_110;
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_110;
  BattlePerformance__SetEffectControlObjectFromCommonAsset((BattlePerformance_o *)this, v101->fields.commonData, 0);
  v102 = v4->fields.__8__1;
  if ( !v102 )
    goto LABEL_110;
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_110;
  BattlePerformance__loadFieldMotion(
    (BattlePerformance_o *)this,
    v102->fields.commonData,
    v4->fields._motionDataList_5__2,
    0);
  perf = _4__this->fields.perf;
  if ( !perf )
    goto LABEL_110;
  this = (BattleRootComponent__LoadAsset_d__13_o *)perf->fields._fmManager_k__BackingField;
  if ( !this )
    goto LABEL_110;
  FieldMotionManager__SetBaseFieldMotionIds((FieldMotionManager_o *)this, v4->fields._baseMotionIds_5__4, 0);
  v104 = v4->fields.__8__1;
  if ( !v104 )
    goto LABEL_110;
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_110;
  BattlePerformance__SetRootCameraInfoToActionCamera((BattlePerformance_o *)this, v104->fields.commonData, 0);
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_110;
  BattlePerformance__Initialize((BattlePerformance_o *)this, 0);
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.data;
  if ( !this )
    goto LABEL_110;
  BattleData__loadFsmGameObject((BattleData_o *)this, 0);
  v105 = _4__this->fields.perf;
  if ( !v105 )
    goto LABEL_110;
  this = (BattleRootComponent__LoadAsset_d__13_o *)v105->fields._AssumedBattleAssetLoadManager_k__BackingField;
  if ( !this )
    goto LABEL_110;
  AssumedBattleAssetLoadManager__Release_object_(
    (AssumedBattleAssetLoadManager_o *)this,
    (const MethodInfo_30DB254 *)Method_AssumedBattleAssetLoadManager_Release_AssumedBattleAssetSearcherBeforeBattle___);
  v106 = _4__this->fields.perf;
  if ( !v106 )
    goto LABEL_110;
  AssumedBattleAssetLoadManager_k__BackingField = v106->fields._AssumedBattleAssetLoadManager_k__BackingField;
  this = (BattleRootComponent__LoadAsset_d__13_o *)AssumedBattleAssetSearcherBeforeBattle__Create(0);
  if ( !AssumedBattleAssetLoadManager_k__BackingField )
    goto LABEL_110;
  AssumedBattleAssetLoadManager__Preload(
    AssumedBattleAssetLoadManager_k__BackingField,
    (AssumedBattleAssetSearcherBase_o *)this,
    0);
LABEL_98:
  v108 = v4->fields.__8__1;
  if ( !v108 )
    goto LABEL_110;
  if ( v108->fields.isAssetsLoading )
  {
    v4->fields.__2__current = 0;
    v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
    sub_1C3E508(v15, 0, v2, v3);
    v18 = 5;
    goto LABEL_106;
  }
LABEL_101:
  if ( !_4__this )
    goto LABEL_110;
  v109 = _4__this->fields.perf;
  if ( !v109 )
    goto LABEL_110;
  this = (BattleRootComponent__LoadAsset_d__13_o *)v109->fields._AssumedBattleAssetLoadManager_k__BackingField;
  if ( !this )
    goto LABEL_110;
  if ( AssumedBattleAssetLoadManager__IsPreloading((AssumedBattleAssetLoadManager_o *)this, 0) )
  {
    v4->fields.__2__current = 0;
    v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
    sub_1C3E508(v15, 0, v111, v112);
    v18 = 6;
    goto LABEL_106;
  }
  BattleRootComponent__SetupObjectsExtractedFromLoadedAssets(_4__this, v110);
  this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_110:
    sub_1C3E7C0(this, method);
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

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_BattleRootComponent__LoadAsset_d__13_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
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
  __int64 v28; // x1
  _BOOL8 v29; // x0
  __int64 v30; // x1
  struct BattleRootComponent___c__DisplayClass14_0_o *_8__1; // x26
  System_String_o *monitor; // x23
  System_Action_o *_9__8; // x24
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  AssetStorageLoadWrapper_o *v36; // x22
  Il2CppObject *v37; // x24
  System_Action_o *v38; // x23
  BattleRootComponent_o *v39; // x0
  const MethodInfo *v40; // x2
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  __int64 v44; // x5
  __int64 v45; // x6
  __int64 v46; // x7
  Il2CppObject *v47; // x1
  System_String_o *v48; // x0
  __int64 v49; // x1
  struct BattleRootComponent___c__DisplayClass14_0_o *v50; // x25
  System_String_o *v51; // x21
  AssetStorageLoadWrapper_o *v52; // x22
  AssetLoader_LoadEndDataHandler_o *_9__9; // x23
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  _BOOL8 Wrapper__LoadAssetStorage; // x0
  __int64 v57; // x1
  struct BattleRootComponent___c__DisplayClass14_0_o *v58; // x8
  long double v59; // q0
  __int64 v60; // x0
  __int64 v61; // x0
  Il2CppObject *v62; // x23
  AtlasManager_o *v63; // x21
  System_Action_o *v64; // x22
  Il2CppObject *v65; // x22
  System_Action_o *v66; // x21
  Il2CppObject *v67; // x22
  System_Action_o *v68; // x21
  Il2CppObject *v69; // x22
  BattlePerformance_o *perf; // x20
  System_Action_o *v71; // x21
  struct BattleRootComponent___c__DisplayClass14_0_o *v72; // x8
  Il2CppObject *v73; // x20
  System_Action_o *v74; // x21
  long double v75; // q0
  __int64 v76; // x0
  __int64 v77; // x0
  long double v78; // q0
  __int64 v79; // x0
  __int64 v80; // x0
  Il2CppObject *v81; // x22
  AtlasManager_o *v82; // x20
  System_Action_o *v83; // x21
  AssetManager_o *v84; // x20
  struct BattleRootComponent___c__DisplayClass14_0_o *v85; // x8
  CGThumbnailListItem_o *v86; // x19
  struct System_Int32_array *v87; // x8
  _QWORD *v88; // x9
  __int64 v89; // x10
  struct System_Int32_array *v90; // x8
  _QWORD *v91; // x9
  __int64 v92; // x10
  const MethodInfo *v93; // x1
  System_Collections_Generic_IEnumerable_T__o *ClassBoardCommandSpellEffectId; // x0
  System_Int32_array *v95; // x21
  AssetManager_o *v96; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  BattleRootComponent_o *_4__this; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_int__o v101; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v102; // [xsp+20h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v104; // [xsp+40h] [xbp-80h] BYREF
  int32_t v105; // [xsp+5Ch] [xbp-64h] BYREF

  v4 = this;
  if ( (byte_4C59917 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&BattleDataDefine_TypeInfo);
    sub_1C3E564(&BattleEffectUtility_TypeInfo);
    sub_1C3E564(&Method_DataManager_GetMaster_BattleMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_BgmMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_BuffMaster___);
    sub_1C3E564(&Method_DataManager_GetMaster_ConstantMaster___);
    sub_1C3E564(&DataManager_TypeInfo);
    sub_1C3E564(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    sub_1C3E564(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C3E564(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C3E564(&int_TypeInfo);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C3E564(&Method_System_Collections_Generic_List_int___ctor___78135936);
    sub_1C3E564(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C3E564(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C3E564(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C3E564(&OptionManager_TypeInfo);
    sub_1C3E564(&ServantAssetLoadManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_AtlasManager__getInstance__);
    sub_1C3E564(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C3E564(&SoundManager_TypeInfo);
    sub_1C3E564(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__0__);
    sub_1C3E564(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__1__);
    sub_1C3E564(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__2__);
    sub_1C3E564(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__3__);
    sub_1C3E564(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__4__);
    sub_1C3E564(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__5__);
    sub_1C3E564(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__6__);
    sub_1C3E564(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__7__);
    sub_1C3E564(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__8__);
    sub_1C3E564(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__9__);
    sub_1C3E564(&BattleRootComponent___c__DisplayClass14_0_TypeInfo);
    sub_1C3E564(&StringLiteral_2768/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE"*/);
    sub_1C3E564(&StringLiteral_2763/*"BATTLE_EFFECT_ID_3003001"*/);
    sub_1C3E564(&StringLiteral_3091/*"Battle/DropEffect/{0}"*/);
    sub_1C3E564(&StringLiteral_3092/*"Battle/Effect/"*/);
    sub_1C3E564(&StringLiteral_2769/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE_PIERCE"*/);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)sub_1C3E564(&StringLiteral_3084/*"Battle"*/);
    byte_4C59917 = 1;
  }
  v105 = 0;
  memset(&v104, 0, sizeof(v104));
  entity = 0;
  memset(&v102, 0, sizeof(v102));
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
      v7 = (Il2CppObject *)sub_1C3E7B0(BattleRootComponent___c__DisplayClass14_0_TypeInfo);
      System_Object___ctor(v7, 0);
      v4->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass14_0_o *)v7;
      p__8__1 = (Il2CppObject **)&v4->fields.__8__1;
      sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v7, v9, v10);
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
          v105 = BattleEffectUtility__setBattleEffectId(BattleEffectId, 0);
          v12 = System_Int32__ToString((int32_t)&v105, 0);
          this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)System_String__Concat_63636468(
                                                                                  (System_String_o *)StringLiteral_3092/*"Battle/Effect/"*/,
                                                                                  v12,
                                                                                  0);
          ++v4->fields._loadCntMax_5__2;
          if ( _4__this )
          {
            assetStorageLoadWrapper = _4__this->fields.assetStorageLoadWrapper;
            v14 = *p__8__1;
            v15 = this;
            v16 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3E7B0(AssetLoader_LoadEndDataHandler_TypeInfo);
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
              Master_object = DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_ConstantMaster___);
              this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_BuffMaster___);
              if ( this )
              {
                v18 = *(System_Collections_Generic_IEnumerable_T__o **)&this->fields._loadCntMax_5__2;
                v19 = (System_Collections_Generic_List_int__o *)sub_1C3E7B0(System_Collections_Generic_List_int__TypeInfo);
                System_Collections_Generic_List_int____ctor_58293520(
                  v19,
                  v18,
                  (const MethodInfo_3797D10 *)Method_System_Collections_Generic_List_int___ctor___78135936);
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
                          *(const MethodInfo_379843C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
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
                      v87 = v19->fields._items;
                      v88 = Method_System_Collections_Generic_List_int__Add__;
                      ++v19->fields._version;
                      if ( v87 )
                      {
                        v89 = v19->fields._size;
                        if ( (unsigned int)v89 >= LODWORD(v87->max_length) )
                        {
                          System_Collections_Generic_List_int___AddWithResize(
                            v19,
                            (int32_t)this,
                            *(const MethodInfo_379843C **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v19->fields._size = v89 + 1;
                          v87->m_Items[v89] = (int)this;
                        }
                        this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ConstantMaster__GetValue(
                                                                                                (ConstantMaster_o *)Master_object,
                                                                                                (System_String_o *)StringLiteral_2769/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE_PIERCE"*/,
                                                                                                0);
                        v90 = v19->fields._items;
                        v91 = Method_System_Collections_Generic_List_int__Add__;
                        ++v19->fields._version;
                        if ( v90 )
                        {
                          v92 = v19->fields._size;
                          v93 = (const MethodInfo *)(unsigned int)this;
                          if ( (unsigned int)v92 >= LODWORD(v90->max_length) )
                          {
                            System_Collections_Generic_List_int___AddWithResize(
                              v19,
                              (int32_t)this,
                              *(const MethodInfo_379843C **)(*(_QWORD *)(v91[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v19->fields._size = v92 + 1;
                            v90->m_Items[v92] = (int)this;
                          }
                          ClassBoardCommandSpellEffectId = (System_Collections_Generic_IEnumerable_T__o *)BattleRootComponent__GetClassBoardCommandSpellEffectId(_4__this, v93);
                          System_Collections_Generic_List_int___AddRange(
                            v19,
                            ClassBoardCommandSpellEffectId,
                            (const MethodInfo_3798648 *)Method_System_Collections_Generic_List_int__AddRange__);
                          v95 = System_Collections_Generic_List_int___ToArray(
                                  v19,
                                  (const MethodInfo_3799EF4 *)Method_System_Collections_Generic_List_int__ToArray__);
                          if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
                          this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ServantAssetLoadManager__preloadBattleCommonEffect(
                                                                                                  v95,
                                                                                                  0);
                          if ( _4__this->fields.data )
                          {
                            BattleData__addLoadedCommonEffectPath(_4__this->fields.data, (System_String_array *)this, 0);
                            this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
                            v96 = (AssetManager_o *)this;
                            if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
                            if ( v96 )
                            {
                              AssetManager__UpdateLoadParallelMax(
                                v96,
                                BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX,
                                0);
                              v4->fields.__2__current = 0;
                              p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
                              sub_1C3E508(p__2__current, 0, v98, v99);
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
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_BattleMaster___);
    if ( !this )
      goto LABEL_39;
    SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                     (const MethodInfo_33B5560 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    v24 = (System_Collections_Generic_HashSet_int__o *)sub_1C3E7B0(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v24,
      (const MethodInfo_3665EC4 *)Method_System_Collections_Generic_HashSet_int___ctor__);
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
          (const MethodInfo_36670C8 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
              (const MethodInfo_36670C8 *)Method_System_Collections_Generic_HashSet_int__Add__);
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
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)DataManager__GetMaster_object_((const MethodInfo_30F9A1C *)Method_DataManager_GetMaster_BgmMaster___);
    if ( !v24 )
      goto LABEL_39;
    v26 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
    System_Collections_Generic_HashSet_int___GetEnumerator(
      (System_Collections_Generic_HashSet_Enumerator_T__o *)&v101,
      v24,
      (const MethodInfo_3666A4C *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    v104 = v101;
    while ( 1 )
    {
      v27 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
              (System_Collections_Generic_HashSet_Enumerator_T__o *)&v104,
              (const MethodInfo_353BBCC *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
      if ( !v27 )
        break;
      if ( !v26 )
        sub_1C3E7C0(v27, v28);
      v29 = DataMasterBase_object__object__int___TryGetEntity(
              v26,
              &entity,
              v104.fields._current,
              (const MethodInfo_33B2FA4 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( v29 )
      {
        ++v4->fields._loadCntMax_5__2;
        if ( !entity )
          sub_1C3E7C0(v29, v30);
        _8__1 = v4->fields.__8__1;
        if ( !_8__1 )
          sub_1C3E7C0(v29, v30);
        monitor = (System_String_o *)entity[1].monitor;
        _9__8 = _8__1->fields.__9__8;
        if ( !_9__8 )
        {
          _9__8 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
          System_Action___ctor(
            _9__8,
            (Il2CppObject *)_8__1,
            Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__8__,
            0);
          _8__1->fields.__9__8 = _9__8;
          sub_1C3E508((CGThumbnailListItem_o *)&_8__1->fields.__9__8, (int32_t)_9__8, v34, v35);
        }
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__downloadAudioAssetStorage(monitor, _9__8, 1, 0);
      }
    }
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      (System_Collections_Generic_HashSet_Enumerator_T__o *)&v104,
      (const MethodInfo_353BBC8 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    ++v4->fields._loadCntMax_5__2;
    if ( !_4__this )
      goto LABEL_39;
    v36 = _4__this->fields.assetStorageLoadWrapper;
    v37 = (Il2CppObject *)v4->fields.__8__1;
    v38 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(
      v38,
      v37,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__1__,
      0);
    if ( !v36 )
      goto LABEL_39;
    AssetStorageLoadWrapper__LoadAudioAssetStorage(v36, (System_String_o *)StringLiteral_3084/*"Battle"*/, v38, 1, 0);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattleRootComponent__GetLoadDropEffectType(
                                                                            v39,
                                                                            (BattleEntity_o *)SingleEntity,
                                                                            v40);
    if ( !this )
      goto LABEL_39;
    if ( SLODWORD(this->fields.__2__current) >= 1 )
    {
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v101,
        (System_Collections_Generic_List_int__o *)this,
        (const MethodInfo_3798F10 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v102 = v101;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v102,
                (const MethodInfo_353BE34 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        LODWORD(v101.fields._list) = v102.fields._current;
        v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v101, v41, v42, v43, v44, v45, v46);
        v48 = System_String__Format((System_String_o *)StringLiteral_3091/*"Battle/DropEffect/{0}"*/, v47, 0);
        v50 = v4->fields.__8__1;
        ++v4->fields._loadCntMax_5__2;
        if ( !v50 )
          sub_1C3E7C0(v48, v49);
        v51 = v48;
        v52 = _4__this->fields.assetStorageLoadWrapper;
        _9__9 = v50->fields.__9__9;
        if ( !_9__9 )
        {
          _9__9 = (AssetLoader_LoadEndDataHandler_o *)sub_1C3E7B0(AssetLoader_LoadEndDataHandler_TypeInfo);
          AssetLoader_LoadEndDataHandler___ctor(
            _9__9,
            (Il2CppObject *)v50,
            Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__9__,
            0);
          v50->fields.__9__9 = _9__9;
          sub_1C3E508((CGThumbnailListItem_o *)&v50->fields.__9__9, (int32_t)_9__9, v54, v55);
        }
        if ( !v52 )
          sub_1C3E7C0(v48, v49);
        Wrapper__LoadAssetStorage = AssetStorageLoadWrapper__LoadAssetStorage(v52, v51, _9__9, 1, 0);
        if ( !Wrapper__LoadAssetStorage )
        {
          v58 = v4->fields.__8__1;
          if ( !v58 )
            sub_1C3E7C0(Wrapper__LoadAssetStorage, v57);
          ++v58->fields.loadCnt;
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v102,
        (const MethodInfo_353BE30 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    }
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)_4__this->fields.data;
    if ( !this )
      goto LABEL_39;
    if ( BattleData__IsWarBoard((BattleData_o *)this, 0) )
    {
      ++v4->fields._loadCntMax_5__2;
      v60 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v60 + 309) & 1) == 0 )
        v60 = sub_1C8EC78(v59);
      v61 = *(_QWORD *)(*(_QWORD *)(v60 + 192) + 16LL);
      if ( (*(_BYTE *)(v61 + 309) & 1) == 0 )
        v61 = sub_1C8EC78(v59);
      v62 = (Il2CppObject *)v4->fields.__8__1;
      v63 = **(AtlasManager_o ***)(v61 + 184);
      v64 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(
        v64,
        v62,
        Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__2__,
        0);
      if ( !v63 )
        goto LABEL_39;
      AtlasManager__LoadWarBoardAtlas(v63, v64, 0);
    }
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)_4__this->fields.data;
    if ( !this )
      goto LABEL_39;
    if ( BattleData__IsInterruptionQuest((BattleData_o *)this, 0) )
    {
      v65 = (Il2CppObject *)v4->fields.__8__1;
      ++v4->fields._loadCntMax_5__2;
      v66 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(
        v66,
        v65,
        Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__3__,
        0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadPartyOrganizationAtlas(v66, 1, 0);
    }
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    if ( OptionManager__isSavedMemoryMode(0) )
    {
      v67 = (Il2CppObject *)v4->fields.__8__1;
      ++v4->fields._loadCntMax_5__2;
      v68 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
      System_Action___ctor(
        v68,
        v67,
        Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__4__,
        0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadFaceBattleAtlas(v68, 0);
    }
    v69 = (Il2CppObject *)v4->fields.__8__1;
    ++v4->fields._loadCntMax_5__2;
    perf = _4__this->fields.perf;
    v71 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(
      v71,
      v69,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__5__,
      0);
    if ( !perf )
      goto LABEL_39;
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattlePerformance__LoadEventInfoPointGauge(
                                                                            perf,
                                                                            v71,
                                                                            v4->fields.eventId,
                                                                            0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v72 = v4->fields.__8__1;
      if ( !v72 )
        goto LABEL_39;
      ++v72->fields.loadCnt;
    }
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__ReleaseEventAtlas(0);
    v73 = (Il2CppObject *)v4->fields.__8__1;
    ++v4->fields._loadCntMax_5__2;
    v74 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(
      v74,
      v73,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__6__,
      0);
    AtlasManager__LoadEventAtlas(v74, 1, 0);
    v76 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v76 + 309) & 1) == 0 )
      v76 = sub_1C8EC78(v75);
    v77 = *(_QWORD *)(*(_QWORD *)(v76 + 192) + 16LL);
    if ( (*(_BYTE *)(v77 + 309) & 1) == 0 )
      v77 = sub_1C8EC78(v75);
    this = **(BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o ***)(v77 + 184);
    if ( !this )
      goto LABEL_39;
    AtlasManager__UnloadBuffIconAtlas((AtlasManager_o *)this, 0);
    ++v4->fields._loadCntMax_5__2;
    v79 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v79 + 309) & 1) == 0 )
      v79 = sub_1C8EC78(v78);
    v80 = *(_QWORD *)(*(_QWORD *)(v79 + 192) + 16LL);
    if ( (*(_BYTE *)(v80 + 309) & 1) == 0 )
      v80 = sub_1C8EC78(v78);
    v81 = (Il2CppObject *)v4->fields.__8__1;
    v82 = **(AtlasManager_o ***)(v80 + 184);
    v83 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
    System_Action___ctor(
      v83,
      v81,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__7__,
      0);
    if ( !v82 )
      goto LABEL_39;
    AtlasManager__LoadBuffIconAtlas(v82, v83, 0);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    v84 = (AssetManager_o *)this;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    if ( !v84 )
LABEL_39:
      sub_1C3E7C0(this, method);
    AssetManager__UpdateLoadParallelMax(v84, BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX, 0);
  }
  v85 = v4->fields.__8__1;
  if ( !v85 )
    goto LABEL_39;
  if ( v85->fields.loadCnt >= v4->fields._loadCntMax_5__2 )
  {
    ActionExtensions__Call(v4->fields.finishCallback, 0);
    return 0;
  }
  else
  {
    v4->fields.__2__current = 0;
    v86 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
    sub_1C3E508(v86, 0, v2, v3);
    LODWORD(v86[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
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

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
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

  if ( (byte_4C5990A & 1) == 0 )
  {
    sub_1C3E564(&BattleRootComponent___c_TypeInfo);
    byte_4C5990A = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(BattleRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleRootComponent___c_TypeInfo->static_fields->__9 = (struct BattleRootComponent___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)BattleRootComponent___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
  if ( (byte_4C5990B & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__AssetData__get_Key__);
    byte_4C5990B = 1;
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
  if ( (byte_4C5990C & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_KeyValuePair_int__AssetData__get_Value__);
    byte_4C5990C = 1;
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.commonData, (int32_t)common, (int32_t)method, v3);
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
  if ( (byte_4C5990D & 1) == 0 )
  {
    this = (BattleRootComponent___c__DisplayClass13_1_o *)sub_1C3E564(&Method_System_Collections_Generic_Dictionary_int__AssetData__Add__);
    byte_4C5990D = 1;
  }
  CS___8__locals1 = v4->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (this = (BattleRootComponent___c__DisplayClass13_1_o *)CS___8__locals1->fields.assetDataByIndex) == 0
    || (System_Collections_Generic_Dictionary_int__object___Add(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          v4->fields.index,
          (Il2CppObject *)motionData,
          (const MethodInfo_340C43C *)Method_System_Collections_Generic_Dictionary_int__AssetData__Add__),
        (v6 = v4->fields.CS___8__locals1) == 0) )
  {
    sub_1C3E7C0(this, motionData);
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)cameraData, (int32_t)method, v3);
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

  if ( (byte_4C5990E & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_1C3E564(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_4C5990E = 1;
  }
  bgmList = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
  if ( !bgmList
    || (System_Collections_Generic_List_object___RemoveAt(
          bgmList,
          bgmList->fields._size - 1,
          (const MethodInfo_37B6C34 *)Method_System_Collections_Generic_List_string__RemoveAt__),
        (bgmList = (System_Collections_Generic_List_object__o *)this->fields.__4__this) == 0) )
  {
    sub_1C3E7C0(bgmList, method);
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
  __int64 v11; // x1
  struct BattleRootComponent_o *_4__this; // x8

  if ( (byte_4C59910 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_string__TypeInfo);
    sub_1C3E564(&ScriptManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C3E564(&Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__2__);
    byte_4C59910 = 1;
  }
  if ( System_String__IsNullOrEmpty(demo1, 0) )
  {
    _9__2 = this->fields.__9__2;
    questId = this->fields.questId;
    questPhase = this->fields.questPhase;
    if ( !_9__2 )
    {
      _9__2 = (struct System_Action_string__o *)sub_1C3E7B0(System_Action_string__TypeInfo);
      System_Action_object____ctor(
        (System_Action_object__o *)_9__2,
        (Il2CppObject *)this,
        Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__2__,
        0);
      this->fields.__9__2 = _9__2;
      sub_1C3E508((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v8, v9);
    }
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__LoadBattleEndGameDemo(questId, questPhase, 0, _9__2, 0, 0);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    _4__this = this->fields.__4__this;
    if ( !_4__this || !Instance )
      sub_1C3E7C0(Instance, v11);
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
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4C5990F & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C5990F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0), !this->fields.__4__this) )
    sub_1C3E7C0(Instance, v5);
  BattleRootComponent__TerminalTransition((BattleRootComponent_o *)Instance, this->fields.info, v6);
}


void BattleRootComponent___c__DisplayClass23_0___TransitionTerminalOrBattleScript_b__2(
        BattleRootComponent___c__DisplayClass23_0_o *this,
        System_String_o *demo2,
        const MethodInfo *method)
{
  Il2CppObject *IsNullOrEmpty; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct BattleRootComponent_o *_4__this; // x8

  if ( (byte_4C59911 & 1) == 0 )
  {
    sub_1C3E564(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C59911 = 1;
  }
  IsNullOrEmpty = (Il2CppObject *)System_String__IsNullOrEmpty(demo2, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    if ( this->fields.__4__this )
    {
      BattleRootComponent__TerminalTransition((BattleRootComponent_o *)IsNullOrEmpty, this->fields.info, v7);
      return;
    }
LABEL_9:
    sub_1C3E7C0(IsNullOrEmpty, v6);
  }
  IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  if ( (byte_4C59918 & 1) == 0 )
  {
    sub_1C3E564(&System_Action_TypeInfo);
    sub_1C3E564(&AtlasManager_TypeInfo);
    sub_1C3E564(&System_GC_TypeInfo);
    sub_1C3E564(&OptionManager_TypeInfo);
    sub_1C3E564(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C3E564(&Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__0__);
    sub_1C3E564(&Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__1__);
    sub_1C3E564(&Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__2__);
    sub_1C3E564(&BattleRootComponent___c__DisplayClass20_0_TypeInfo);
    sub_1C3E564(&Method_BattleRootComponent___c__DisplayClass20_1__loadOutGameAsset_b__3__);
    sub_1C3E564(&BattleRootComponent___c__DisplayClass20_1_TypeInfo);
    sub_1C3E564(&Method_BattleRootComponent___c__DisplayClass20_2__loadOutGameAsset_b__4__);
    sub_1C3E564(&BattleRootComponent___c__DisplayClass20_2_TypeInfo);
    this = (BattleRootComponent__loadOutGameAsset_d__20_o *)sub_1C3E564(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4C59918 = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v6 = (Il2CppObject *)sub_1C3E7B0(BattleRootComponent___c__DisplayClass20_0_TypeInfo);
      System_Object___ctor(v6, 0);
      v4->fields.__8__3 = (struct BattleRootComponent___c__DisplayClass20_0_o *)v6;
      sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.__8__3, (int32_t)v6, v7, v8);
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_14;
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect(0);
      v9 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v9, 0);
      v4->fields.__2__current = (Il2CppObject *)v9;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C3E508(p__2__current, (int32_t)v9, v11, v12);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    case 1:
      v4->fields.__1__state = -1;
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_90;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0, 0);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39FF5A8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_90;
      v14 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0);
      v4->fields.__2__current = (Il2CppObject *)v14;
      v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C3E508(v15, (int32_t)v14, v16, v17);
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
      v19 = (Il2CppObject *)sub_1C3E7B0(BattleRootComponent___c__DisplayClass20_1_TypeInfo);
      System_Object___ctor(v19, 0);
      v4->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass20_1_o *)v19;
      sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v19, v20, v21);
      _8__1 = v4->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_90;
      _8__1->fields.isEventAtlasLoaded = 0;
      v23 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
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
        sub_1C3E508(v15, 0, v2, v3);
        v18 = 3;
        goto LABEL_89;
      }
      this->klass = 0;
      sub_1C3E508((CGThumbnailListItem_o *)this, 0, v2, v3);
LABEL_25:
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v25 = (Il2CppObject *)sub_1C3E7B0(BattleRootComponent___c__DisplayClass20_2_TypeInfo);
        System_Object___ctor(v25, 0);
        v4->fields.__8__2 = (struct BattleRootComponent___c__DisplayClass20_2_o *)v25;
        sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.__8__2, (int32_t)v25, v26, v27);
        _8__2 = v4->fields.__8__2;
        if ( _8__2 )
        {
          _8__2->fields.isFaceAtlasLoaded = 0;
          v29 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
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
              v31 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v31, 0);
              v4->fields.__2__current = (Il2CppObject *)v31;
              v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1C3E508(v15, (int32_t)v31, v32, v33);
              v18 = 5;
            }
            else
            {
              v4->fields.__2__current = 0;
              v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1C3E508(v15, 0, v2, v3);
              v18 = 4;
            }
            goto LABEL_89;
          }
        }
LABEL_90:
        sub_1C3E7C0(this, method);
      }
LABEL_39:
      _8__3 = v4->fields.__8__3;
      if ( !_8__3 )
        goto LABEL_90;
      _8__3->fields.isCharaGraphOptionAtlasLoaded = 0;
      v35 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
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
        sub_1C3E508(v15, 0, v2, v3);
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
        v37 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v37, 0);
        v4->fields.__2__current = (Il2CppObject *)v37;
        v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C3E508(v15, (int32_t)v37, v38, v39);
        v18 = 7;
        goto LABEL_89;
      }
LABEL_54:
      v40 = v4->fields.__8__3;
      if ( !v40 )
        goto LABEL_90;
      v40->fields.isBannerAtlasLoaded = 0;
      v41 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
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
        sub_1C3E508(v15, 0, v2, v3);
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
        v43 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v43, 0);
        v4->fields.__2__current = (Il2CppObject *)v43;
        v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C3E508(v15, (int32_t)v43, v44, v45);
        v18 = 9;
        goto LABEL_89;
      }
LABEL_69:
      v46 = v4->fields.__8__3;
      if ( !v46 )
        goto LABEL_90;
      v46->fields.isEventUIAtlasLoaded = 0;
      v47 = (System_Action_o *)sub_1C3E7B0(System_Action_TypeInfo);
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
        sub_1C3E508(v15, 0, v2, v3);
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
        v49 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C3E7B0(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v49, 0);
        v4->fields.__2__current = (Il2CppObject *)v49;
        v15 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C3E508(v15, (int32_t)v49, v50, v51);
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
      sub_1C3E508((CGThumbnailListItem_o *)&v4->fields.__8__2, 0, v2, v3);
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

  v2 = sub_1C3E578(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C3E7B0(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3E578(&Method_BattleRootComponent__loadOutGameAsset_d__20_System_Collections_IEnumerator_Reset__);
  sub_1C3E68C(v3, v4);
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
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A8557C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A8553C;
}


System_IAsyncResult_o *BattleRootComponent_callBackBeginResume__BeginInvoke(
        BattleRootComponent_callBackBeginResume_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C3E518(this, &v5, callback, object);
}


void BattleRootComponent_callBackBeginResume__EndInvoke(
        BattleRootComponent_callBackBeginResume_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3E51C(result, 0, method);
}


void BattleRootComponent_callBackBeginResume__Invoke(
        BattleRootComponent_callBackBeginResume_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}