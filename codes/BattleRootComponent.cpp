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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  System_Collections_Generic_IEnumerable_T__o *v15; // x21
  System_Collections_Generic_List_int__o *v16; // x20
  System_Collections_Generic_IEnumerable_TSource__o *AllExistsScriptEnemyDeckSvtArray; // x0
  BattleRootComponent_c *klass; // x8
  BattleRootComponent_o *v19; // x21
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x21
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  BattleDeckServantData_o *v33; // x0
  __int64 v34; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0
  __int64 v36; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x22
  System_Collections_Generic_IEnumerable_TSource__c *v38; // x8
  __int64 v39; // x9
  int32_t *v40; // x10
  __int64 v41; // x0
  __int64 v42; // x1
  __int64 v43; // x22
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  __int64 v52; // x0
  __int64 v53; // x1
  int32_t v54; // w23
  _BOOL8 v55; // x0
  __int64 v56; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v58; // x9
  __int64 size; // x10
  __int64 v60; // x8
  __int64 v61; // x9
  int *v62; // x10
  __int64 v63; // x0
  __int64 v64; // x8
  __int64 v65; // x9
  int *v66; // x10
  __int64 v67; // x0
  int32_t v68; // w21
  StageEntity_o *StageEntityAtWave; // x0
  long double inited; // q0
  System_Collections_Generic_IEnumerable_TSource__o *WaveFieldMotionIds; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v72; // x23
  _QWORD *v73; // x23
  __int64 v74; // x8
  __int64 v75; // x0
  System_Collections_Generic_IEnumerable_TSource__c *v76; // x8
  __int64 v77; // x9
  int32_t *v78; // x10
  __int64 v79; // x0
  __int64 v80; // x1
  __int64 v81; // x23
  __int64 v82; // x8
  __int64 v83; // x9
  int *v84; // x10
  __int64 v85; // x0
  __int64 v86; // x8
  __int64 v87; // x9
  int *v88; // x10
  __int64 v89; // x0
  __int64 v90; // x0
  __int64 v91; // x1
  int32_t v92; // w24
  _BOOL8 v93; // x0
  __int64 v94; // x1
  struct System_Int32_array *v95; // x8
  _QWORD *v96; // x9
  __int64 v97; // x10
  __int64 v98; // x8
  __int64 v99; // x9
  int *v100; // x10
  __int64 v101; // x0
  BattleEntity_o *v104; // [xsp+10h] [xbp-70h]
  System_Int32_array *fieldMotionIds; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4D335E5 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_Empty_int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Reverse_BattleDeckServantData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Reverse_int___);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor___79008552);
    this = (BattleRootComponent_o *)sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    byte_4D335E5 = 1;
  }
  fieldMotionIds = 0;
  if ( !battleEnt )
    goto LABEL_128;
  this = (BattleRootComponent_o *)battleEnt->fields.battleInfo;
  if ( !this )
    goto LABEL_128;
  BaseBattleFieldMotionIds = BattleInfoData__GetBaseBattleFieldMotionIds((BattleInfoData_o *)this, questPhaseEnt, 0);
  *baseMotionIds = BaseBattleFieldMotionIds;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)baseMotionIds,
    (int32_t)BaseBattleFieldMotionIds,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Reverse_int_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)*baseMotionIds,
                                                         (const MethodInfo_31D48F8 *)Method_System_Linq_Enumerable_Reverse_int___);
  v16 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_59097676(
    v16,
    v15,
    (const MethodInfo_385C24C *)Method_System_Collections_Generic_List_int___ctor___79008552);
  this = (BattleRootComponent_o *)battleEnt->fields.battleInfo;
  if ( !this )
    goto LABEL_128;
  AllExistsScriptEnemyDeckSvtArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleInfoData__get_AllExistsScriptEnemyDeckSvtArray(
                                                                                            (BattleInfoData_o *)this,
                                                                                            0);
  this = (BattleRootComponent_o *)System_Linq_Enumerable__Reverse_object_(
                                    AllExistsScriptEnemyDeckSvtArray,
                                    (const MethodInfo_31D4950 *)Method_System_Linq_Enumerable_Reverse_BattleDeckServantData___);
  if ( !this )
    goto LABEL_128;
  klass = this->klass;
  v19 = this;
  v20 = *(unsigned __int16 *)&this->klass->_2.rank;
  if ( *(_WORD *)&this->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleDeckServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo )
    {
      --v20;
      p_offset += 4;
      if ( !v20 )
        goto LABEL_11;
    }
    v22 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_11:
    v22 = sub_1C69E5C(this, System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, 0);
  }
  v104 = battleEnt;
  v24 = (*(__int64 (__fastcall **)(BattleRootComponent_o *, _QWORD))v22)(v19, *(_QWORD *)(v22 + 8));
  if ( !v24 )
    sub_1C93D2C(0, v23);
  while ( 1 )
  {
    v25 = *(_QWORD *)v24;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v27 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_18;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_18:
      v28 = sub_1C69E5C(v24, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8)) & 1) == 0 )
      break;
    v29 = *(_QWORD *)v24;
    v30 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
    {
      v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleDeckServantData__c **)v31 - 1) != System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_25;
      }
      v32 = v29 + 16LL * *v31 + 312;
    }
    else
    {
LABEL_25:
      v32 = sub_1C69E5C(v24, System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo, 0);
    }
    v33 = (BattleDeckServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v24, *(_QWORD *)(v32 + 8));
    if ( !v33 )
      sub_1C93D2C(0, v34);
    if ( BattleDeckServantData__TryGetAddFieldMotionIds(v33, &fieldMotionIds, 0) )
    {
      v35 = System_Linq_Enumerable__Reverse_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)fieldMotionIds,
              (const MethodInfo_31D48F8 *)Method_System_Linq_Enumerable_Reverse_int___);
      v37 = v35;
      if ( !v35 )
        sub_1C93D2C(0, v36);
      v38 = v35->klass;
      v39 = *(unsigned __int16 *)&v35->klass->_2.rank;
      if ( *(_WORD *)&v35->klass->_2.rank )
      {
        v40 = &v38->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_int__c **)v40 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
        {
          --v39;
          v40 += 4;
          if ( !v39 )
            goto LABEL_34;
        }
        v41 = (__int64)&v38->vtable[*v40];
      }
      else
      {
LABEL_34:
        v41 = sub_1C69E5C(v35, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
      }
      v43 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v41)(
              v37,
              *(_QWORD *)(v41 + 8));
      if ( !v43 )
        sub_1C93D2C(0, v42);
      while ( 1 )
      {
        v44 = *(_QWORD *)v43;
        v45 = *(unsigned __int16 *)(*(_QWORD *)v43 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v43 + 302LL) )
        {
          v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v46 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v45;
            v46 += 4;
            if ( !v45 )
              goto LABEL_41;
          }
          v47 = v44 + 16LL * *v46 + 312;
        }
        else
        {
LABEL_41:
          v47 = sub_1C69E5C(v43, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v43, *(_QWORD *)(v47 + 8)) & 1) == 0 )
          break;
        v48 = *(_QWORD *)v43;
        v49 = *(unsigned __int16 *)(*(_QWORD *)v43 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v43 + 302LL) )
        {
          v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_int__c **)v50 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
          {
            --v49;
            v50 += 4;
            if ( !v49 )
              goto LABEL_48;
          }
          v51 = v48 + 16LL * *v50 + 312;
        }
        else
        {
LABEL_48:
          v51 = sub_1C69E5C(v43, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
        }
        v52 = (*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v43, *(_QWORD *)(v51 + 8));
        if ( !v16 )
          sub_1C93D2C(v52, v53);
        v54 = v52;
        v55 = System_Collections_Generic_List_int___Contains(
                v16,
                v52,
                (const MethodInfo_385CCF0 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !v55 )
        {
          items = v16->fields._items;
          v58 = Method_System_Collections_Generic_List_int__Add__;
          ++v16->fields._version;
          if ( !items )
            sub_1C93D2C(v55, v56);
          size = v16->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v16,
              v54,
              *(const MethodInfo_385C978 **)(*(_QWORD *)(v58[4] + 192LL) + 112LL));
          }
          else
          {
            v16->fields._size = size + 1;
            items->m_Items[size] = v54;
          }
        }
      }
      v60 = *(_QWORD *)v43;
      v61 = *(unsigned __int16 *)(*(_QWORD *)v43 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v43 + 302LL) )
      {
        v62 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v62 - 1) != System_IDisposable_TypeInfo )
        {
          --v61;
          v62 += 4;
          if ( !v61 )
            goto LABEL_60;
        }
        v63 = v60 + 16LL * *v62 + 312;
      }
      else
      {
LABEL_60:
        v63 = sub_1C69E5C(v43, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v63)(v43, *(_QWORD *)(v63 + 8));
    }
  }
  v64 = *(_QWORD *)v24;
  v65 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
  {
    v66 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v66 - 1) != System_IDisposable_TypeInfo )
    {
      --v65;
      v66 += 4;
      if ( !v65 )
        goto LABEL_70;
    }
    v67 = v64 + 16LL * *v66 + 312;
  }
  else
  {
LABEL_70:
    v67 = sub_1C69E5C(v24, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v67)(v24, *(_QWORD *)(v67 + 8));
  this = (BattleRootComponent_o *)v104->fields.battleInfo;
  if ( !this )
LABEL_128:
    sub_1C93D2C(this, battleEnt);
  this = (BattleRootComponent_o *)BattleInfoData__getLastWave((BattleInfoData_o *)this, 0);
  if ( ((unsigned int)this & 0x80000000) == 0 )
  {
    v68 = (int)this;
    do
    {
      StageEntityAtWave = BattleEntity__GetStageEntityAtWave(v104, v68, 0);
      if ( !StageEntityAtWave
        || (WaveFieldMotionIds = (System_Collections_Generic_IEnumerable_TSource__o *)StageEntity__GetWaveFieldMotionIds(
                                                                                        StageEntityAtWave,
                                                                                        0,
                                                                                        0)) == 0
        || (v72 = System_Linq_Enumerable__Reverse_int_(
                    WaveFieldMotionIds,
                    (const MethodInfo_31D48F8 *)Method_System_Linq_Enumerable_Reverse_int___)) == 0 )
      {
        v73 = Method_System_Array_Empty_int___;
        v74 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
        if ( !v74 )
        {
          sub_1C69BC4(Method_System_Array_Empty_int___);
          v74 = v73[7];
        }
        v75 = *(_QWORD *)(v74 + 16);
        if ( (*(_BYTE *)(v75 + 309) & 1) == 0 )
          v75 = sub_1C69B68(inited);
        if ( !*(_DWORD *)(v75 + 224) )
          inited = j_il2cpp_runtime_class_init_0(v75);
        this = *(BattleRootComponent_o **)(v73[7] + 16LL);
        if ( (*((_BYTE *)this + 309) & 1) == 0 )
          this = (BattleRootComponent_o *)sub_1C69B68(inited);
        v72 = (System_Collections_Generic_IEnumerable_TSource__o *)**((_QWORD **)this + 23);
        if ( !v72 )
          goto LABEL_128;
      }
      v76 = v72->klass;
      v77 = *(unsigned __int16 *)&v72->klass->_2.rank;
      if ( *(_WORD *)&v72->klass->_2.rank )
      {
        v78 = &v76->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_int__c **)v78 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
        {
          --v77;
          v78 += 4;
          if ( !v77 )
            goto LABEL_91;
        }
        v79 = (__int64)&v76->vtable[*v78];
      }
      else
      {
LABEL_91:
        v79 = sub_1C69E5C(v72, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
      }
      v81 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v79)(
              v72,
              *(_QWORD *)(v79 + 8));
      if ( !v81 )
        sub_1C93D2C(0, v80);
      while ( 1 )
      {
        v82 = *(_QWORD *)v81;
        v83 = *(unsigned __int16 *)(*(_QWORD *)v81 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v81 + 302LL) )
        {
          v84 = (int *)(*(_QWORD *)(v82 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v84 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v83;
            v84 += 4;
            if ( !v83 )
              goto LABEL_98;
          }
          v85 = v82 + 16LL * *v84 + 312;
        }
        else
        {
LABEL_98:
          v85 = sub_1C69E5C(v81, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v85)(v81, *(_QWORD *)(v85 + 8)) & 1) == 0 )
          break;
        v86 = *(_QWORD *)v81;
        v87 = *(unsigned __int16 *)(*(_QWORD *)v81 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v81 + 302LL) )
        {
          v88 = (int *)(*(_QWORD *)(v86 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_int__c **)v88 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
          {
            --v87;
            v88 += 4;
            if ( !v87 )
              goto LABEL_105;
          }
          v89 = v86 + 16LL * *v88 + 312;
        }
        else
        {
LABEL_105:
          v89 = sub_1C69E5C(v81, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
        }
        v90 = (*(__int64 (__fastcall **)(__int64, _QWORD))v89)(v81, *(_QWORD *)(v89 + 8));
        if ( !v16 )
          sub_1C93D2C(v90, v91);
        v92 = v90;
        v93 = System_Collections_Generic_List_int___Contains(
                v16,
                v90,
                (const MethodInfo_385CCF0 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !v93 )
        {
          v95 = v16->fields._items;
          v96 = Method_System_Collections_Generic_List_int__Add__;
          ++v16->fields._version;
          if ( !v95 )
            sub_1C93D2C(v93, v94);
          v97 = v16->fields._size;
          if ( (unsigned int)v97 >= LODWORD(v95->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v16,
              v92,
              *(const MethodInfo_385C978 **)(*(_QWORD *)(v96[4] + 192LL) + 112LL));
          }
          else
          {
            v16->fields._size = v97 + 1;
            v95->m_Items[v97] = v92;
          }
        }
      }
      v98 = *(_QWORD *)v81;
      v99 = *(unsigned __int16 *)(*(_QWORD *)v81 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v81 + 302LL) )
      {
        v100 = (int *)(*(_QWORD *)(v98 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v100 - 1) != System_IDisposable_TypeInfo )
        {
          --v99;
          v100 += 4;
          if ( !v99 )
            goto LABEL_117;
        }
        v101 = v98 + 16LL * *v100 + 312;
      }
      else
      {
LABEL_117:
        v101 = sub_1C69E5C(v81, System_IDisposable_TypeInfo, 0);
      }
      this = (BattleRootComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v101)(v81, *(_QWORD *)(v101 + 8));
    }
    while ( v68-- > 0 );
  }
  if ( !v16 )
    goto LABEL_128;
  return System_Collections_Generic_List_int___ToArray(
           v16,
           (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
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
  bool IsQuestClear_41038904; // w0
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

  if ( (byte_4D335F0 & 1) == 0 )
  {
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&CondType_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_BattleMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C93AD4(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_4D335F0 = 1;
  }
  v2 = (System_Collections_Generic_HashSet_int__o *)sub_1C93D20(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v2,
    (const MethodInfo_37253A8 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_object )
    goto LABEL_48;
  SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                   Master_object,
                   (const MethodInfo_3465AD0 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
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
  IsQuestClear_41038904 = CondType__IsQuestClear_41038904(ClassBoardReleaseQuestId, -1, 0, 0);
  if ( !v7 || !IsQuestClear_41038904 )
    return System_Linq_Enumerable__ToArray_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v2,
             (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
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
               (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___);
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
                                                                                  (const MethodInfo_3725A9C *)Method_System_Collections_Generic_HashSet_int__Contains__);
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
                      (const MethodInfo_37265BC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
                  }
                }
              }
              LODWORD(v25) = v24->max_length;
              if ( (__int64)++v26 >= (int)v25 )
                return System_Linq_Enumerable__ToArray_int_(
                         (System_Collections_Generic_IEnumerable_TSource__o *)v2,
                         (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___);
            }
LABEL_49:
            sub_1C93D34(Master_object);
          }
          return System_Linq_Enumerable__ToArray_int_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v2,
                   (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___);
        }
      }
    }
LABEL_48:
    sub_1C93D2C(Master_object, v4);
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
        v20 = (System_Collections_Generic_HashSet_int__o *)sub_1C93D20(System_Collections_Generic_HashSet_int__TypeInfo);
        System_Collections_Generic_HashSet_int____ctor(
          v20,
          (const MethodInfo_37253A8 *)Method_System_Collections_Generic_HashSet_int___ctor__);
      }
      if ( !v21 || !v20 )
        goto LABEL_48;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_HashSet_int___Add(
                                                                      v20,
                                                                      *(&v21->fields.equipTarget2SkillChange + 1),
                                                                      (const MethodInfo_37265AC *)Method_System_Collections_Generic_HashSet_int__Add__);
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
      (const MethodInfo_37265BC *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    max_length = svts->max_length;
    ++v19;
  }
  while ( (int)v19 < max_length );
  if ( (v18 & 1) == 0 )
    goto LABEL_35;
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v2,
           (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_Collections_Generic_IEnumerable_int__o *BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess(
        BattleRootComponent_o *this,
        BattleEntity_o *battleEntity,
        ClassBoardCommandSpellMaster_o *classBoardCSMaster,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v8; // x22
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  if ( (byte_4D335F1 & 1) == 0 )
  {
    sub_1C93AD4(&BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_TypeInfo);
    byte_4D335F1 = 1;
  }
  v8 = sub_1C93D20(BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_TypeInfo);
  BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26___ctor(
    (BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *)v8,
    -2,
    0);
  if ( !v8 )
    sub_1C93D2C(v9, v10);
  *(_QWORD *)(v8 + 40) = battleEntity;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v8 + 40), (int32_t)battleEntity, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)(v8 + 72) = classBoardCSMaster;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v8 + 72), (int32_t)classBoardCSMaster, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)(v8 + 56) = userSvtId;
  return (System_Collections_Generic_IEnumerable_int__o *)v8;
}


System_Collections_Generic_List_int__o *BattleRootComponent__GetLoadDropEffectType(
        BattleRootComponent_o *this,
        BattleEntity_o *battleEntity,
        System_Collections_Generic_HashSet_int__o *dropEffectIdHash,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v7; // x24
  System_Collections_Generic_List_int__o *v8; // x19
  DropAddMaster_o *Master_object; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  struct BattleInfoData_o *battleInfo; // x8
  System_Collections_Generic_IEnumerable_T__o *enemyDeck; // x1
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0
  DropAddMaster_o *v22; // x23
  __int64 DropEffectId; // x0
  __int64 effectType; // x1
  Il2CppClass *klass; // x29
  const char *namespaze; // x8
  int v27; // w20
  __int64 v28; // x9
  __int64 v29; // x28
  int v30; // w9
  __int64 v31; // x25
  BattleData_o *v32; // x0
  DropInfo_o *v33; // x24
  __int64 eventId; // x0
  __int64 v35; // x1
  struct System_Int32_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  struct BattleInfoData_o *v39; // x8
  struct BattleInfoData_StageCutinInfo_array *stageCutins; // x20
  int max_length; // w8
  unsigned int v42; // w28
  BattleInfoData_StageCutinInfo_o *v43; // x8
  struct DropInfo_array *dropInfos; // x25
  int v45; // w8
  unsigned int v46; // w26
  DropInfo_o *v47; // x24
  struct System_Int32_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  BattleData_c *v51; // x8
  DropAddMaster_o *v52; // x20
  __int64 v53; // x9
  int32_t *p_offset; // x10
  __int64 v55; // x0
  __int64 v56; // x1
  __int64 v57; // x20
  __int64 v58; // x8
  __int64 v59; // x9
  int *v60; // x10
  __int64 v61; // x0
  __int64 v62; // x8
  __int64 v63; // x9
  int *v64; // x10
  __int64 v65; // x0
  FunctionEntity_o *v66; // x0
  __int64 v67; // x1
  _BOOL8 BattleSkillDropInfoDict; // x0
  __int64 v69; // x1
  __int64 v70; // x0
  struct System_Int32_array *v71; // x8
  _QWORD *v72; // x9
  __int64 v73; // x10
  __int64 v74; // x8
  __int64 v75; // x9
  int *v76; // x10
  __int64 v77; // x0
  BattleEntity_o *v79; // [xsp+8h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v80; // [xsp+10h] [xbp-A0h] BYREF
  BattleSkillDropInfo_JsonConvertData_o *data; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v82; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4D335EF & 1) == 0 )
  {
    sub_1C93AD4(&Method_DataManager_GetMaster_DropAddMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_EnumUtility_CastToEnum_DropInfo_DropEffectType___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_DeckData__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_DeckData__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_DeckData__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerable_FunctionEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_IEnumerator_FunctionEntity__TypeInfo);
    sub_1C93AD4(&System_Collections_IEnumerator_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_DeckData__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_DeckData__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_DeckData__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_DeckData___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&System_Collections_Generic_List_DeckData__TypeInfo);
    byte_4D335EF = 1;
  }
  memset(&v82, 0, sizeof(v82));
  data = 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_DeckData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_DeckData___ctor__);
  v8 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_385C124 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !battleEntity )
    return v8;
  battleInfo = battleEntity->fields.battleInfo;
  if ( !battleInfo )
    return v8;
  enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.enemyDeck;
  if ( enemyDeck )
  {
    if ( !v7 )
      goto LABEL_120;
    System_Collections_Generic_List_object___AddRange(
      v7,
      enemyDeck,
      (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_120;
  }
  enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.callDeck;
  if ( enemyDeck )
  {
    if ( !v7 )
      goto LABEL_120;
    System_Collections_Generic_List_object___AddRange(
      v7,
      enemyDeck,
      (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_120;
  }
  enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.shiftDeck;
  if ( enemyDeck )
  {
    if ( !v7 )
      goto LABEL_120;
    System_Collections_Generic_List_object___AddRange(
      v7,
      enemyDeck,
      (const MethodInfo_3879BA8 *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_120;
  }
  enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.transformDeck;
  if ( enemyDeck )
  {
    if ( !v7 )
      goto LABEL_120;
    items = v7->fields._items;
    v19 = Method_System_Collections_Generic_List_DeckData__Add__;
    ++v7->fields._version;
    if ( !items )
      goto LABEL_120;
    size = v7->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v7,
        (Il2CppObject *)enemyDeck,
        *(const MethodInfo_387999C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v21 = &items->obj.klass + size;
      v7->fields._size = size + 1;
      v21[4] = (Il2CppClass *)enemyDeck;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)(v21 + 4), (int32_t)enemyDeck, v10, v11, v12, v13, v14, v15);
    }
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  v79 = battleEntity;
  Master_object = (DropAddMaster_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_DropAddMaster___);
  if ( !v7 )
    goto LABEL_120;
  v22 = Master_object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v80,
    v7,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_DeckData__GetEnumerator__);
  v82 = v80;
  while ( 1 )
  {
    DropEffectId = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v82,
                     (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_DeckData__MoveNext__);
    if ( (DropEffectId & 1) == 0 )
      break;
    if ( !v82.fields._current )
      sub_1C93D2C(DropEffectId, effectType);
    klass = v82.fields._current[1].klass;
    if ( klass )
    {
      namespaze = klass->_1.namespaze;
      if ( (int)namespaze >= 1 )
      {
        v27 = 0;
        do
        {
          if ( v27 >= (unsigned int)namespaze )
            sub_1C93D34(DropEffectId);
          v28 = *((_QWORD *)&klass->_1.byval_arg.data + v27);
          if ( !v28 )
            sub_1C93D2C(DropEffectId, effectType);
          v29 = *(_QWORD *)(v28 + 104);
          if ( v29 )
          {
            v30 = *(_DWORD *)(v29 + 24);
            if ( v30 >= 1 )
            {
              v31 = 0;
              do
              {
                if ( (unsigned int)v31 >= v30 )
                  sub_1C93D34(DropEffectId);
                v32 = this->fields.data;
                if ( !v32 )
                  sub_1C93D2C(0, effectType);
                v33 = *(DropInfo_o **)(v29 + 32 + 8 * v31);
                eventId = BattleData__get_eventId(v32, 0);
                if ( !v33 )
                  sub_1C93D2C(eventId, v35);
                DropEffectId = DropInfo__GetDropEffectId(v33, v22, eventId, 0);
                if ( (int)DropEffectId >= 1 )
                {
                  if ( !dropEffectIdHash )
                    sub_1C93D2C(DropEffectId, (unsigned int)DropEffectId);
                  DropEffectId = System_Collections_Generic_HashSet_int___Add(
                                   dropEffectIdHash,
                                   DropEffectId,
                                   (const MethodInfo_37265AC *)Method_System_Collections_Generic_HashSet_int__Add__);
                }
                effectType = (unsigned int)v33->fields.effectType;
                if ( (_DWORD)effectType )
                {
                  if ( !v8 )
                    sub_1C93D2C(DropEffectId, effectType);
                  DropEffectId = System_Collections_Generic_List_int___Contains(
                                   v8,
                                   effectType,
                                   (const MethodInfo_385CCF0 *)Method_System_Collections_Generic_List_int__Contains__);
                  if ( (DropEffectId & 1) == 0 )
                  {
                    effectType = (unsigned int)v33->fields.effectType;
                    v36 = v8->fields._items;
                    v37 = Method_System_Collections_Generic_List_int__Add__;
                    ++v8->fields._version;
                    if ( !v36 )
                      sub_1C93D2C(DropEffectId, effectType);
                    v38 = v8->fields._size;
                    if ( (unsigned int)v38 >= LODWORD(v36->max_length) )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        v8,
                        effectType,
                        *(const MethodInfo_385C978 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v8->fields._size = v38 + 1;
                      v36->m_Items[v38] = effectType;
                    }
                  }
                }
                v30 = *(_DWORD *)(v29 + 24);
                ++v31;
              }
              while ( (int)v31 < v30 );
              namespaze = klass->_1.namespaze;
            }
          }
          ++v27;
        }
        while ( v27 < (int)namespaze );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v82,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_DeckData__Dispose__);
  v39 = battleEntity->fields.battleInfo;
  if ( !v39 )
    goto LABEL_120;
  stageCutins = v39->fields.stageCutins;
  if ( stageCutins )
  {
    max_length = stageCutins->max_length;
    if ( max_length >= 1 )
    {
      v42 = 0;
      while ( 1 )
      {
        if ( v42 >= max_length )
          goto LABEL_123;
        v43 = stageCutins->m_Items[v42];
        if ( !v43 )
          goto LABEL_120;
        dropInfos = v43->fields.dropInfos;
        if ( !dropInfos )
          goto LABEL_120;
        v45 = dropInfos->max_length;
        if ( v45 >= 1 )
          break;
LABEL_74:
        max_length = stageCutins->max_length;
        if ( (int)++v42 >= max_length )
          goto LABEL_75;
      }
      v46 = 0;
      while ( v46 < v45 )
      {
        Master_object = (DropAddMaster_o *)this->fields.data;
        if ( !Master_object )
          goto LABEL_120;
        v47 = dropInfos->m_Items[v46];
        Master_object = (DropAddMaster_o *)BattleData__get_eventId((BattleData_o *)Master_object, 0);
        if ( !v47 )
          goto LABEL_120;
        Master_object = (DropAddMaster_o *)DropInfo__GetDropEffectId(v47, v22, (int32_t)Master_object, 0);
        if ( (int)Master_object >= 1 )
        {
          if ( !dropEffectIdHash )
            goto LABEL_120;
          Master_object = (DropAddMaster_o *)System_Collections_Generic_HashSet_int___Add(
                                               dropEffectIdHash,
                                               (int32_t)Master_object,
                                               (const MethodInfo_37265AC *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
        enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)(unsigned int)v47->fields.effectType;
        if ( (_DWORD)enemyDeck )
        {
          if ( !v8 )
            goto LABEL_120;
          Master_object = (DropAddMaster_o *)System_Collections_Generic_List_int___Contains(
                                               v8,
                                               (int32_t)enemyDeck,
                                               (const MethodInfo_385CCF0 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)Master_object & 1) == 0 )
          {
            enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)(unsigned int)v47->fields.effectType;
            v48 = v8->fields._items;
            v49 = Method_System_Collections_Generic_List_int__Add__;
            ++v8->fields._version;
            if ( !v48 )
              goto LABEL_120;
            v50 = v8->fields._size;
            if ( (unsigned int)v50 >= LODWORD(v48->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v8,
                (int32_t)enemyDeck,
                *(const MethodInfo_385C978 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
            }
            else
            {
              v8->fields._size = v50 + 1;
              v48->m_Items[v50] = (int)enemyDeck;
            }
          }
        }
        v45 = dropInfos->max_length;
        if ( (int)++v46 >= v45 )
          goto LABEL_74;
      }
LABEL_123:
      sub_1C93D34(Master_object);
    }
  }
LABEL_75:
  Master_object = (DropAddMaster_o *)BattleEntity__GetQuestPhaseEntity(v79, 0);
  if ( !Master_object
    || (Master_object = (DropAddMaster_o *)QuestPhaseEntity__GetBattleSkillDropFunctionEntities(
                                             (QuestPhaseEntity_o *)Master_object,
                                             0)) == 0 )
  {
LABEL_120:
    sub_1C93D2C(Master_object, enemyDeck);
  }
  v51 = (BattleData_c *)Master_object->klass;
  v52 = Master_object;
  v53 = *(unsigned __int16 *)&Master_object->klass->_2.rank;
  if ( *(_WORD *)&Master_object->klass->_2.rank )
  {
    p_offset = &v51->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_FunctionEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_FunctionEntity__TypeInfo )
    {
      --v53;
      p_offset += 4;
      if ( !v53 )
        goto LABEL_81;
    }
    v55 = (__int64)&v51->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_81:
    v55 = sub_1C69E5C(Master_object, System_Collections_Generic_IEnumerable_FunctionEntity__TypeInfo, 0);
  }
  v57 = (*(__int64 (__fastcall **)(DropAddMaster_o *, _QWORD))v55)(v52, *(_QWORD *)(v55 + 8));
  if ( !v57 )
    sub_1C93D2C(0, v56);
  while ( 1 )
  {
    v58 = *(_QWORD *)v57;
    v59 = *(unsigned __int16 *)(*(_QWORD *)v57 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v57 + 302LL) )
    {
      v60 = (int *)(*(_QWORD *)(v58 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v60 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v59;
        v60 += 4;
        if ( !v59 )
          goto LABEL_88;
      }
      v61 = v58 + 16LL * *v60 + 312;
    }
    else
    {
LABEL_88:
      v61 = sub_1C69E5C(v57, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v61)(v57, *(_QWORD *)(v61 + 8)) & 1) == 0 )
      break;
    v62 = *(_QWORD *)v57;
    v63 = *(unsigned __int16 *)(*(_QWORD *)v57 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v57 + 302LL) )
    {
      v64 = (int *)(*(_QWORD *)(v62 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_FunctionEntity__c **)v64 - 1) != System_Collections_Generic_IEnumerator_FunctionEntity__TypeInfo )
      {
        --v63;
        v64 += 4;
        if ( !v63 )
          goto LABEL_95;
      }
      v65 = v62 + 16LL * *v64 + 312;
    }
    else
    {
LABEL_95:
      v65 = sub_1C69E5C(v57, System_Collections_Generic_IEnumerator_FunctionEntity__TypeInfo, 0);
    }
    v66 = (FunctionEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v65)(v57, *(_QWORD *)(v65 + 8));
    if ( !v66 )
      sub_1C93D2C(0, v67);
    BattleSkillDropInfoDict = FunctionEntity__TryGetBattleSkillDropInfoDict(v66, &data, 0);
    if ( BattleSkillDropInfoDict )
    {
      if ( !data )
        sub_1C93D2C(BattleSkillDropInfoDict, v69);
      v70 = EnumUtility__CastToEnum_Int32Enum_(
              data->fields.dropEffectType,
              0,
              (const MethodInfo_31ABB60 *)Method_EnumUtility_CastToEnum_DropInfo_DropEffectType___);
      if ( (_DWORD)v70 )
      {
        if ( !v8 )
          sub_1C93D2C(v70, (unsigned int)v70);
        v71 = v8->fields._items;
        v72 = Method_System_Collections_Generic_List_int__Add__;
        ++v8->fields._version;
        if ( !v71 )
          sub_1C93D2C(v70, (unsigned int)v70);
        v73 = v8->fields._size;
        if ( (unsigned int)v73 >= LODWORD(v71->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v8,
            v70,
            *(const MethodInfo_385C978 **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
        }
        else
        {
          v8->fields._size = v73 + 1;
          v71->m_Items[v73] = v70;
        }
      }
    }
  }
  v74 = *(_QWORD *)v57;
  v75 = *(unsigned __int16 *)(*(_QWORD *)v57 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v57 + 302LL) )
  {
    v76 = (int *)(*(_QWORD *)(v74 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v76 - 1) != System_IDisposable_TypeInfo )
    {
      --v75;
      v76 += 4;
      if ( !v75 )
        goto LABEL_110;
    }
    v77 = v74 + 16LL * *v76 + 312;
  }
  else
  {
LABEL_110:
    v77 = sub_1C69E5C(v57, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v77)(v57, *(_QWORD *)(v77 + 8));
  return v8;
}


System_Collections_IEnumerator_o *BattleRootComponent__LoadAsset(
        BattleRootComponent_o *this,
        QuestPhaseEntity_o *ent,
        int32_t eventId,
        BattleEntity_o *battleEnt,
        const MethodInfo *method)
{
  __int64 v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7

  if ( (byte_4D335E6 & 1) == 0 )
  {
    sub_1C93AD4(&BattleRootComponent__LoadAsset_d__13_TypeInfo);
    byte_4D335E6 = 1;
  }
  v9 = sub_1C93D20(BattleRootComponent__LoadAsset_d__13_TypeInfo);
  BattleRootComponent__LoadAsset_d__13___ctor((BattleRootComponent__LoadAsset_d__13_o *)v9, 0, 0);
  if ( !v9 )
    sub_1C93D2C(v10, v11);
  *(_QWORD *)(v9 + 40) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 40), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 48) = ent;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 48), (int32_t)ent, v18, v19, v20, v21, v22, v23);
  *(_DWORD *)(v9 + 56) = eventId;
  *(_QWORD *)(v9 + 64) = battleEnt;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 64), (int32_t)battleEnt, v24, v25, v26, v27, v28, v29);
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
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7

  if ( (byte_4D335E7 & 1) == 0 )
  {
    sub_1C93AD4(&BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_TypeInfo);
    byte_4D335E7 = 1;
  }
  v9 = sub_1C93D20(BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_TypeInfo);
  BattleRootComponent__LoadAssetsIndependentToMainOne_d__14___ctor(
    (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)v9,
    0,
    0);
  if ( !v9 )
    sub_1C93D2C(v10, v11);
  *(_QWORD *)(v9 + 40) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 40), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v9 + 32) = ent;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 32), (int32_t)ent, v18, v19, v20, v21, v22, v23);
  *(_DWORD *)(v9 + 56) = eventId;
  *(_QWORD *)(v9 + 64) = finishCallback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v9 + 64), (int32_t)finishCallback, v24, v25, v26, v27, v28, v29);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  __int64 v22; // x21
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  int size; // w8
  Il2CppObject *Item; // x19
  System_Action_o *v31; // x21

  if ( (byte_4D335E8 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C93AD4(&SoundManager_TypeInfo);
    sub_1C93AD4(&Method_BattleRootComponent___c__DisplayClass17_0__LoadBatteBgm_b__0__);
    sub_1C93AD4(&BattleRootComponent___c__DisplayClass17_0_TypeInfo);
    byte_4D335E8 = 1;
  }
  v7 = sub_1C93D20(BattleRootComponent___c__DisplayClass17_0_TypeInfo);
  BattleRootComponent___c__DisplayClass17_0___ctor((BattleRootComponent___c__DisplayClass17_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_11;
  *(_QWORD *)(v7 + 16) = bgmList;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)bgmList, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 24), (int32_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 32) = callback;
  v22 = v7 + 32;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)callback, v23, v24, v25, v26, v27, v28);
  v8 = *(System_Collections_Generic_List_object__o **)(v7 + 16);
  if ( !v8 )
    goto LABEL_11;
  size = v8->fields._size;
  if ( size <= 0 )
  {
    if ( *(_QWORD *)v22 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v22 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v22 + 64LL),
        *(_QWORD *)(*(_QWORD *)v22 + 40LL));
      return;
    }
LABEL_11:
    sub_1C93D2C(v8, v9);
  }
  Item = System_Collections_Generic_List_object___get_Item(
           v8,
           size - 1,
           (const MethodInfo_38796CC *)Method_System_Collections_Generic_List_string__get_Item__);
  v31 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v7,
    Method_BattleRootComponent___c__DisplayClass17_0__LoadBatteBgm_b__0__,
    0);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__downloadAudioAssetStorage((System_String_o *)Item, v31, 1, 0);
}


void BattleRootComponent__SetupObjectsExtractedFromLoadedAssets(BattleRootComponent_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0

  perf = this->fields.perf;
  if ( !perf || (BattlePerformance__SetDownloadEventSprite(perf, 0), (perf = this->fields.perf) == 0) )
    sub_1C93D2C(perf, method);
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

  if ( (byte_4D335ED & 1) == 0 )
  {
    sub_1C93AD4(&ScriptManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D335ED = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2AFE8 )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2AFE8 = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v6);
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
  if ( (byte_4D335F2 & 1) == 0 )
  {
    sub_1C93AD4(&BattleSetupInfo_TypeInfo);
    sub_1C93AD4(&ScriptManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    this = (BattleRootComponent_o *)sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D335F2 = 1;
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
  v10 = (BattleSetupInfo_o *)sub_1C93D20(BattleSetupInfo_TypeInfo);
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
  *((_DWORD *)this + 46) = v11->fields.selectedInterruptionWave;
  *((_BYTE *)this + 188) = 1;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4D2AFE8 )
  {
    sub_1C93AD4(&TerminalPramsManager_TypeInfo);
    byte_4D2AFE8 = 1;
  }
  v13 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v13 = TerminalPramsManager_TypeInfo;
  }
  v13->static_fields->_IsAutoResume_k__BackingField = 1;
  this = (BattleRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_20:
    sub_1C93D2C(this, method);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  BattleScriptRootComponent_TalkScriptInfo_o **v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct BattleData_o *data; // x8
  struct BaseBattleEvent_o *battleEvent; // x0
  const MethodInfo *v23; // x2
  struct BattleData_o *v24; // x8
  BattleScriptRootComponent_TalkScriptInfo_o *v25; // x8
  int32_t qId; // w22
  int32_t pId; // w23
  struct BattleData_o *v28; // x8
  int64_t overwriteEndScriptQuestId; // x22
  int32_t v30; // w23
  int32_t ScriptQuestId; // w22
  QuestEntity_o *QuestEntity; // x0
  int32_t v33; // w24
  ScriptManager_o *v34; // x23
  int32_t winResult; // w25
  int32_t v36; // w24
  ScriptManager_o *v37; // x23
  int32_t v38; // w25
  ScriptManager_c *v39; // x0
  System_String_o *textPath; // x23
  System_String_o *ScriptAssetName; // x0
  System_String_o *v42; // x22
  int32_t v43; // w19
  int32_t v44; // w21
  System_Action_object__o *v45; // x22
  Il2CppObject *Instance; // x19
  System_String_o *v47; // x21
  System_String_o *v48; // x22
  NotificationDialog_ClickDelegate_o *v49; // x23
  QuestPhaseDetailEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_4D335EE & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_string__TypeInfo);
    sub_1C93AD4(&AssetManager_TypeInfo);
    sub_1C93AD4(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_1C93AD4(&Method_DataManager_GetMasterData_QuestScriptReleaseMaster___);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&MyRoomStateMaterial_TypeInfo);
    sub_1C93AD4(&ScriptManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_1C93AD4(&Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__0__);
    sub_1C93AD4(&Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__1__);
    sub_1C93AD4(&BattleRootComponent___c__DisplayClass23_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_2761/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_2762/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_TITLE"*/);
    byte_4D335EE = 1;
  }
  entity = 0;
  v5 = sub_1C93D20(BattleRootComponent___c__DisplayClass23_0_TypeInfo);
  BattleRootComponent___c__DisplayClass23_0___ctor((BattleRootComponent___c__DisplayClass23_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_64;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = info;
  v14 = (BattleScriptRootComponent_TalkScriptInfo_o **)(v5 + 24);
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)info, v15, v16, v17, v18, v19, v20);
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
    isLose = *v14;
    if ( !*v14 )
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
          BattleRootComponent__TerminalTransition((BattleRootComponent_o *)isLose, *v14, v23);
          return;
        }
        v24 = this->fields.data;
        if ( v24 )
        {
          if ( (v24->fields.selectedInterruptionWave & 0x80000000) == 0 )
          {
            BattleRootComponent__TransitionPartyOrganization(this, v7);
            return;
          }
          goto LABEL_23;
        }
      }
      goto LABEL_64;
    }
    v25 = *v14;
    if ( !*v14 )
      goto LABEL_64;
    qId = v25->fields.qId;
    *(_DWORD *)(v5 + 32) = qId;
    pId = v25->fields.pId;
    *(_DWORD *)(v5 + 36) = pId;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)ScriptManager__GetCachedSelectedBranchQuestId(qId, pId, 0);
    v28 = this->fields.data;
    if ( !v28 )
      goto LABEL_64;
    overwriteEndScriptQuestId = v28->fields.overwriteEndScriptQuestId;
    if ( overwriteEndScriptQuestId )
    {
      if ( !*v14 )
        goto LABEL_64;
      (*v14)->fields.qId = overwriteEndScriptQuestId;
      v30 = *(_DWORD *)(v5 + 32);
      if ( !MyRoomStateMaterial_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomStateMaterial_TypeInfo);
      MyRoomStateMaterial__SetPlayedBranchQuestData(v30, overwriteEndScriptQuestId, 0);
    }
    else
    {
      LODWORD(overwriteEndScriptQuestId) = (_DWORD)isLose;
    }
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !isLose
      || (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_object_(
                                                                   (DataManager_o *)isLose,
                                                                   (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_QuestScriptReleaseMaster___)) == 0
      || (ScriptQuestId = QuestScriptReleaseMaster__GetScriptQuestId(
                            (QuestScriptReleaseMaster_o *)isLose,
                            overwriteEndScriptQuestId,
                            *(_DWORD *)(v5 + 36),
                            2,
                            0),
          (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
      || (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_object_(
                                                                   (DataManager_o *)isLose,
                                                                   (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___),
          !*v14)
      || !isLose )
    {
LABEL_64:
      sub_1C93D2C(isLose, v7);
    }
    if ( !QuestPhaseDetailMaster__TryGetEntity(
            (QuestPhaseDetailMaster_o *)isLose,
            &entity,
            (*v14)->fields.qId,
            (*v14)->fields.pId,
            0) )
      goto LABEL_53;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)entity;
    if ( !entity )
      goto LABEL_64;
    if ( !QuestPhaseDetailEntity__HasFlag(entity, 0x20000000000LL, 0) )
      goto LABEL_53;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !isLose )
      goto LABEL_64;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)isLose,
                                                             (const MethodInfo_31A4A3C *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !*v14 || !isLose )
      goto LABEL_64;
    QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)isLose, (*v14)->fields.qId, 0);
    if ( !QuestEntity || !QuestEntity__IsOpenByTime(QuestEntity, 0, 0) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v47 = LocalizationManager__Get((System_String_o *)StringLiteral_2762/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_TITLE"*/, 0);
      v48 = LocalizationManager__Get((System_String_o *)StringLiteral_2761/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_MESSAGE"*/, 0);
      v49 = (NotificationDialog_ClickDelegate_o *)sub_1C93D20(NotificationDialog_ClickDelegate_TypeInfo);
      NotificationDialog_ClickDelegate___ctor(
        v49,
        (Il2CppObject *)v5,
        Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__1__,
        0);
      if ( !Instance )
        goto LABEL_64;
      CommonUI__OpenNotificationDialog_31583416(
        (CommonUI_o *)Instance,
        v47,
        v48,
        v49,
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
      isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( !*(_QWORD *)(v5 + 24) )
        goto LABEL_64;
      v33 = *(_DWORD *)(v5 + 36);
      v34 = (ScriptManager_o *)isLose;
      winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(
                    *(BattleScriptRootComponent_TalkScriptInfo_o **)(v5 + 24),
                    0);
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)ScriptManager__GetScriptName_BattleEnd(
                                                               ScriptQuestId,
                                                               v33,
                                                               winResult,
                                                               0);
      if ( !v34 )
        goto LABEL_64;
      if ( !ScriptManager__IsExistScriptFile(v34, (System_String_o *)isLose, 0) )
      {
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
        if ( !*(_QWORD *)(v5 + 24) )
          goto LABEL_64;
        v36 = *(_DWORD *)(v5 + 36);
        v37 = (ScriptManager_o *)isLose;
        v38 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(
                *(BattleScriptRootComponent_TalkScriptInfo_o **)(v5 + 24),
                0);
        if ( !ScriptManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)ScriptManager__GetScriptName_BattleEnd2(
                                                                 ScriptQuestId,
                                                                 v36,
                                                                 v38,
                                                                 0);
        if ( !v37 )
          goto LABEL_64;
        if ( !ScriptManager__IsExistScriptFile(v37, (System_String_o *)isLose, 0) )
          goto LABEL_56;
      }
      v39 = ScriptManager_TypeInfo;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        v39 = ScriptManager_TypeInfo;
      }
      textPath = v39->static_fields->textPath;
      ScriptAssetName = ScriptManager__GetScriptAssetName(ScriptQuestId, 0);
      v42 = System_String__Concat_64425724(textPath, ScriptAssetName, 0);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__isExistAssetStorage(v42, 0) )
      {
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !isLose )
          goto LABEL_64;
        AvalonSceneManager__transitionSceneRefresh(
          (AvalonSceneManager_o *)isLose,
          this->fields.nextscenetype,
          1,
          (Il2CppObject *)*v14,
          0,
          0);
      }
      else
      {
LABEL_56:
        v43 = *(_DWORD *)(v5 + 32);
        v44 = *(_DWORD *)(v5 + 36);
        v45 = (System_Action_object__o *)sub_1C93D20(System_Action_string__TypeInfo);
        System_Action_object____ctor(
          v45,
          (Il2CppObject *)v5,
          Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__0__,
          0);
        if ( !ScriptManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        ScriptManager__LoadBattleEndGameDemo(v43, v44, 1, (System_Action_string__o *)v45, 0, 0);
      }
    }
  }
}


void BattleRootComponent__beginInitialize(BattleRootComponent_o *this, const MethodInfo *method)
{
  System_String_o *Value; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x21
  void *Master_object; // x0
  __int64 v12; // x1
  Il2CppObject *SingleEntity; // x0
  BattleFBXComponent_c *v14; // x8
  BattleEntity_o *v15; // x20
  BattlePerformance_c *v16; // x0
  QuestPhaseEntity_o *QuestPhaseEntity; // x21
  BattleData_o *data; // x22
  int64_t createdAt; // x22
  System_Int32_array *v20; // x22
  const MethodInfo *v21; // x4
  System_Collections_IEnumerator_o *Asset; // x0
  UnityEngine_Object_o *debugButton; // x20
  ManagerConfig_c *v24; // x0

  if ( (byte_4D335E4 & 1) == 0 )
  {
    sub_1C93AD4(&AssetStorageLoadWrapper_TypeInfo);
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&BattleActionData_TypeInfo);
    sub_1C93AD4(&BattleEffectUtility_TypeInfo);
    sub_1C93AD4(&BattleFBXComponent_TypeInfo);
    sub_1C93AD4(&BattlePerformance_TypeInfo);
    sub_1C93AD4(&BuffList_TypeInfo);
    sub_1C93AD4(&CatAndMouseGame_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_BattleBgMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_BattleMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    sub_1C93AD4(&System_GC_TypeInfo);
    sub_1C93AD4(&ManagerConfig_TypeInfo);
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    sub_1C93AD4(&OptionManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_15659/*"WINGNAME"*/);
    byte_4D335E4 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_15659/*"WINGNAME"*/, 0);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  CatAndMouseGame__SixHomeBuilding(Value, 0);
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect(0);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( !assetStorageLoadWrapper )
  {
    assetStorageLoadWrapper = (AssetStorageLoadWrapper_o *)sub_1C93D20(AssetStorageLoadWrapper_TypeInfo);
    AssetStorageLoadWrapper___ctor(assetStorageLoadWrapper, 0);
  }
  this->fields.assetStorageLoadWrapper = assetStorageLoadWrapper;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.assetStorageLoadWrapper,
    (int32_t)assetStorageLoadWrapper,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_object )
    goto LABEL_56;
  SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                   (const MethodInfo_3465AD0 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
  v14 = BattleFBXComponent_TypeInfo;
  v15 = (BattleEntity_o *)SingleEntity;
  if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    v14 = BattleFBXComponent_TypeInfo;
  }
  v14->static_fields->EnableEvent = 1;
  v16 = BattlePerformance_TypeInfo;
  if ( !BattlePerformance_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
    v16 = BattlePerformance_TypeInfo;
  }
  v16->static_fields->CameraFlip = 0;
  Master_object = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    Master_object = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(*((_QWORD *)Master_object + 23) + 48LL) = 0;
  if ( !v15 )
    goto LABEL_56;
  QuestPhaseEntity = BattleEntity__GetQuestPhaseEntity(v15, 0);
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
    createdAt = v15->fields.createdAt;
    if ( !byte_4D2E47E )
    {
      sub_1C93AD4(&SkillLvMaster_TypeInfo);
      byte_4D2E47E = 1;
    }
    SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime = createdAt;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_BattleBgMaster___);
  if ( !Master_object )
    goto LABEL_56;
  v20 = (System_Int32_array *)*((_QWORD *)Master_object + 10);
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  BattleEffectUtility__AddNotPreloadEffectId(v20, 0);
  Asset = BattleRootComponent__LoadAsset(this, QuestPhaseEntity, v15->fields.eventId, v15, v21);
  UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)this, Asset, 0);
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_56;
  *((_DWORD *)Master_object + 38) = 3;
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_56;
  if ( *((_BYTE *)Master_object + 148) )
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
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
    v24 = ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v24 = ManagerConfig_TypeInfo;
    }
    if ( v24->static_fields->UseDebugCommand )
    {
      Master_object = this->fields.debugButton;
      if ( Master_object )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
        return;
      }
LABEL_56:
      sub_1C93D2C(Master_object, v12);
    }
  }
}


void BattleRootComponent__beginResume(BattleRootComponent_o *this, Il2CppObject *data, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  CommonUI_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  GrandQuestFolderBoardItem_o *p_callbackBeginResumeFunc; // x19
  struct BattleRootComponent_callBackBeginResume_o *v14; // x20
  struct BattleRootComponent_callBackBeginResume_o *callbackBeginResumeFunc; // t1

  if ( (byte_4D335E3 & 1) == 0 )
  {
    sub_1C93AD4(&AvalonSceneManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D335E3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v6 )
    sub_1C93D2C(Instance, v5);
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
  callbackBeginResumeFunc = this->fields.callbackBeginResumeFunc;
  p_callbackBeginResumeFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackBeginResumeFunc;
  v14 = callbackBeginResumeFunc;
  if ( callbackBeginResumeFunc )
  {
    p_callbackBeginResumeFunc->klass = 0;
    sub_1C93A78(p_callbackBeginResumeFunc, 0, v7, v8, v9, v10, v11, v12);
    ((void (__fastcall *)(intptr_t, intptr_t))v14->fields.invoke_impl)(v14->fields.method_code, v14->fields.method);
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  struct BattleLogic_o *v17; // x8
  struct BattleLogic_LOGICTYPE_array *logiclist; // x8
  int max_length; // w9

  if ( (byte_4D335E9 & 1) == 0 )
  {
    sub_1C93AD4(&AndroidBackKeyManager_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C93AD4(&BattleLogic_LOGICTYPE___TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_1C93AD4(&StringLiteral_21492/*"limitCount"*/);
    sub_1C93AD4(&StringLiteral_10984/*"QUEST_START"*/);
    sub_1C93AD4(&StringLiteral_23581/*"servantId"*/);
    byte_4D335E9 = 1;
  }
  if ( data )
  {
    naturalAligment = System_Collections_Generic_Dictionary_string__int__TypeInfo->_2.naturalAligment;
    if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (System_Collections_Generic_Dictionary_string__int__c *)data->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_Dictionary_string__int__TypeInfo )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      Item = System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)data,
               (Il2CppObject *)StringLiteral_23581/*"servantId"*/,
               (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !Instance )
        goto LABEL_18;
      LODWORD(Instance[2].monitor) = Item;
      v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      Item = System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)data,
               (Il2CppObject *)StringLiteral_21492/*"limitCount"*/,
               (const MethodInfo_3525C58 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !v9 )
        goto LABEL_18;
      HIDWORD(v9[2].monitor) = Item;
      Item = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Item )
        goto LABEL_18;
      *(_BYTE *)(Item + 52) = 1;
      Item = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Item
        || (*(_BYTE *)(Item + 53) = 1,
            logic = this->fields.logic,
            Item = sub_1C93B7C(BattleLogic_LOGICTYPE___TypeInfo, 2),
            !logic)
        || (logic->fields.logiclist = (struct BattleLogic_LOGICTYPE_array *)Item,
            sub_1C93A78((GrandQuestFolderBoardItem_o *)&logic->fields.logiclist, Item, v11, v12, v13, v14, v15, v16),
            (v17 = this->fields.logic) == 0)
        || (logiclist = v17->fields.logiclist) == 0 )
      {
LABEL_18:
        sub_1C93D2C(Item, v8);
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
      sub_1C940C8(data);
    }
    sub_1C93D34(Item);
  }
LABEL_16:
  SceneRootComponent__beginStartUp_42213664((SceneRootComponent_o *)this, 0);
  AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 1;
  Item = (__int64)this->fields.myFSM;
  if ( !Item )
    goto LABEL_18;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Item, (System_String_o *)StringLiteral_10984/*"QUEST_START"*/, 0);
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

  if ( (byte_4D335EA & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&Method_BattleRootComponent_goNextScene__);
    sub_1C93AD4(&OptionManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AtlasManager__getInstance__);
    byte_4D335EA = 1;
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
    v5 = sub_1C69B68(v4);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C69B68(v4);
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
    v8 = sub_1C69B68(v7);
  v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C69B68(v7);
  perf = **(BattlePerformance_o ***)(v9 + 184);
  if ( !perf
    || (AtlasManager__UnloadWarBoardAtlas((AtlasManager_o *)perf, 0), (perf = this->fields.perf) == 0)
    || (BattlePerformance__ReleaseEventInfoPointGauge(perf, 0), (perf = (BattlePerformance_o *)this->fields.data) == 0) )
  {
LABEL_33:
    sub_1C93D2C(perf, method);
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
    v11 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_BattleRootComponent_goNextScene__, 0);
    OutGameAsset = BattleRootComponent__loadOutGameAsset(this, v11, v12);
    UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)this, OutGameAsset, 0);
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
  if ( (byte_4D335EC & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (BattleRootComponent_o *)sub_1C93AD4(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    byte_4D335EC = 1;
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
  v12 = (BattleScriptRootComponent_TalkScriptInfo_o *)sub_1C93D20(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
  BattleScriptRootComponent_TalkScriptInfo___ctor_48738512(v12, v10, id, questPhase, 4, win_lose, WinResult, 0, 0);
  this = (BattleRootComponent_o *)v2->fields.data;
  if ( !this
    || (BattleData__release((BattleData_o *)this, 0),
        (this = (BattleRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
LABEL_10:
    sub_1C93D2C(this, method);
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
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7

  if ( (byte_4D335EB & 1) == 0 )
  {
    sub_1C93AD4(&BattleRootComponent__loadOutGameAsset_d__20_TypeInfo);
    byte_4D335EB = 1;
  }
  v5 = sub_1C93D20(BattleRootComponent__loadOutGameAsset_d__20_TypeInfo);
  BattleRootComponent__loadOutGameAsset_d__20___ctor((BattleRootComponent__loadOutGameAsset_d__20_o *)v5, 0, 0);
  if ( !v5 )
    sub_1C93D2C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 64) = callback;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v5 + 64), (int32_t)callback, v14, v15, v16, v17, v18, v19);
  return (System_Collections_IEnumerator_o *)v5;
}


void BattleRootComponent__setCallbackBeginResume(
        BattleRootComponent_o *this,
        BattleRootComponent_callBackBeginResume_o *func,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.callbackBeginResumeFunc = func;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackBeginResumeFunc,
    (int32_t)func,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *v8; // x19
  int32_t _1__state; // w8
  struct BattleEntity_o *battleEntity; // x8
  BattleInfoData_o *battleInfo; // x0
  BattleUserServantData_o *UserServantFromID; // x0
  BattleUserServantData_o *v13; // x19
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct AddSkillData_array *classBoardAddCommandSpells; // x1
  BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *v21; // x0
  _BOOL8 EntityList; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *v30; // x9
  int v31; // w10
  int32_t _7__wrap5; // w8
  int v33; // w9
  bool result; // w0
  struct AddSkillData_array *_7__wrap1; // x11
  int max_length; // w12
  AddSkillData_o *v37; // x8
  ClassBoardCommandSpellMaster_o *classBoardCSMaster; // x0
  BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *v39; // x9
  __int128 v40; // q0
  struct System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__o *p__7__wrap3; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_String_o *v44; // x4
  int32_t v45; // w5
  int64_t v46; // x6
  System_String_o *v47; // x7
  BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *v48; // x8
  ClassBoardCommandSpellEntity_o *current; // x0
  struct System_Int32_array *EffectIdArray; // x1
  BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *v51; // x0
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  struct System_Int32_array *_7__wrap4; // x10
  unsigned int v59; // w11
  const MethodInfo *v60; // x1
  int32_t v61; // w8
  System_Collections_Generic_List_Enumerator_T__o v62[2]; // [xsp+8h] [xbp-68h] BYREF
  BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o **v63; // [xsp+40h] [xbp-30h]
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+48h] [xbp-28h] BYREF
  BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *v65; // [xsp+58h] [xbp-18h] BYREF

  v65 = this;
  v8 = this;
  if ( (byte_4D3373E & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__);
    this = (BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *)sub_1C93AD4(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
    byte_4D3373E = 1;
  }
  v63 = &v65;
  entitys = 0;
  _1__state = v8->fields.__1__state;
  if ( _1__state == 1 )
  {
    _7__wrap5 = v8->fields.__7__wrap5;
    v8->fields.__1__state = -3;
    v33 = _7__wrap5 + 1;
    v8->fields.__7__wrap5 = _7__wrap5 + 1;
    goto LABEL_32;
  }
  if ( _1__state )
    return 0;
  battleEntity = v8->fields.battleEntity;
  v8->fields.__1__state = -1;
  if ( !battleEntity )
    sub_1C93D2C(this, method);
  battleInfo = battleEntity->fields.battleInfo;
  if ( !battleInfo )
    sub_1C93D2C(0, method);
  UserServantFromID = BattleInfoData__getUserServantFromID(battleInfo, v8->fields.userSvtId, 0);
  v13 = UserServantFromID;
  if ( !UserServantFromID
    || BasicHelper__IsNullOrEmpty(
         (System_Collections_ICollection_o *)UserServantFromID->fields.classBoardAddCommandSpells,
         0) )
  {
    return 0;
  }
  classBoardAddCommandSpells = v13->fields.classBoardAddCommandSpells;
  v21 = v65;
  v65->fields.__7__wrap1 = classBoardAddCommandSpells;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v21->fields.__7__wrap1,
    (int32_t)classBoardAddCommandSpells,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  v30 = v65;
  v31 = 0;
  v65->fields.__7__wrap2 = 0;
  while ( 1 )
  {
    _7__wrap1 = v30->fields.__7__wrap1;
    if ( !_7__wrap1 )
      sub_1C93D2C(EntityList, v23);
    max_length = _7__wrap1->max_length;
    if ( v31 >= max_length )
    {
      v30->fields.__7__wrap1 = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v30->fields.__7__wrap1, 0, v24, v25, v26, v27, v28, v29);
      return 0;
    }
    if ( v31 >= (unsigned int)max_length )
      sub_1C93D34(EntityList);
    v37 = _7__wrap1->m_Items[v31];
    if ( !v37 )
      sub_1C93D2C(EntityList, v23);
    classBoardCSMaster = v30->fields.classBoardCSMaster;
    if ( !classBoardCSMaster )
      sub_1C93D2C(0, v23);
    EntityList = ClassBoardCommandSpellMaster__TryGetEntityList(
                   classBoardCSMaster,
                   &entitys,
                   v37->fields.id,
                   v37->fields.lv,
                   0);
    if ( EntityList )
      break;
    v30 = v65;
LABEL_29:
    v31 = v30->fields.__7__wrap2 + 1;
    v30->fields.__7__wrap2 = v31;
  }
  if ( !entitys )
    sub_1C93D2C(0, v23);
  System_Collections_Generic_List_object___GetEnumerator(
    v62,
    (System_Collections_Generic_List_object__o *)entitys,
    (const MethodInfo_387A494 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
  v39 = v65;
  v40 = *(_OWORD *)&v62[0].fields._list;
  p__7__wrap3 = &v65->fields.__7__wrap3;
  v62[1] = v62[0];
  v65->fields.__7__wrap3.fields._current = (struct ClassBoardCommandSpellEntity_o *)v62[0].fields._current;
  *(_OWORD *)&v39->fields.__7__wrap3.fields._list = v40;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)p__7__wrap3, 0, v42, v43, v44, v45, v46, v47);
  v48 = v65;
  v65->fields.__1__state = -3;
  while ( 1 )
  {
    if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v48->fields.__7__wrap3,
            (const MethodInfo_35FA018 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__) )
    {
      BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26____m__Finally1(v65, v60);
      v30 = v65;
      v65->fields.__7__wrap3.fields._list = 0;
      *(_QWORD *)&v30->fields.__7__wrap3.fields._index = 0;
      v30->fields.__7__wrap3.fields._current = 0;
      goto LABEL_29;
    }
    current = v65->fields.__7__wrap3.fields._current;
    if ( !current )
      sub_1C93D2C(0, v60);
    EffectIdArray = ClassBoardCommandSpellEntity__GetEffectIdArray(current, 0);
    v51 = v65;
    v65->fields.__7__wrap4 = EffectIdArray;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&v51->fields.__7__wrap4,
      (int32_t)EffectIdArray,
      v52,
      v53,
      v54,
      v55,
      v56,
      v57);
    v8 = v65;
    v33 = 0;
    v65->fields.__7__wrap5 = 0;
LABEL_32:
    _7__wrap4 = v8->fields.__7__wrap4;
    if ( !_7__wrap4 )
      sub_1C93D2C(this, method);
    v59 = _7__wrap4->max_length;
    if ( v33 < (int)v59 )
      break;
    v8->fields.__7__wrap4 = 0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v8->fields.__7__wrap4, 0, v2, v3, v4, v5, v6, v7);
    v48 = v65;
  }
  if ( v33 >= v59 )
    sub_1C93D34(this);
  v61 = _7__wrap4->m_Items[v33];
  result = 1;
  v8->fields.__1__state = 1;
  v8->fields.__2__current = v61;
  return result;
}


System_Collections_Generic_IEnumerator_int__o *BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26__System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator(
        BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *v10; // x20
  struct BattleEntity_o *_3__battleEntity; // x1
  struct ClassBoardCommandSpellMaster_o *_3__classBoardCSMaster; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7

  if ( (byte_4D33741 & 1) == 0 )
  {
    sub_1C93AD4(&BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_TypeInfo);
    byte_4D33741 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0)) )
  {
    this->fields.__1__state = 0;
    v10 = this;
  }
  else
  {
    v10 = (BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *)sub_1C93D20(BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0);
    v10->fields.__1__state = 0;
    v10->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
  }
  _3__battleEntity = this->fields.__3__battleEntity;
  v10->fields.battleEntity = _3__battleEntity;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v10->fields.battleEntity,
    (int32_t)_3__battleEntity,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  _3__classBoardCSMaster = this->fields.__3__classBoardCSMaster;
  v10->fields.classBoardCSMaster = _3__classBoardCSMaster;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v10->fields.classBoardCSMaster,
    (int32_t)_3__classBoardCSMaster,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v10->fields.userSvtId = this->fields.__3__userSvtId;
  return (System_Collections_Generic_IEnumerator_int__o *)v10;
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

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
}


Il2CppObject *BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26__System_Collections_IEnumerator_get_Current(
        BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *this,
        const MethodInfo *method)
{
  int32_t _2__current; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D33740 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    byte_4D33740 = 1;
  }
  _2__current = this->fields.__2__current;
  return (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &_2__current);
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
  if ( (byte_4D3373F & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
    byte_4D3373F = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap3,
    (const MethodInfo_35FA014 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  BattleRootComponent__LoadAsset_d__13_o *v8; // x19
  struct BattleRootComponent_o *_4__this; // x25
  Il2CppObject *v10; // x21
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  UnityEngine_WaitForEndOfFrame_o *v17; // x20
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  System_Collections_IEnumerator_o *v26; // x0
  GrandQuestFolderBoardItem_o *v27; // x19
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  int v34; // w8
  struct BattleRootComponent___c__DisplayClass13_0_o *_8__1; // x23
  QuestPhaseEntity_o *ent; // x22
  int32_t eventId; // w21
  System_Action_o *v38; // x24
  System_Collections_IEnumerator_o *AssetsIndependentToMainOne; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x21
  BattleDataDefine_c *v47; // x0
  Il2CppObject *v48; // x24
  System_String_o *ASSET_BATTLE_COMMON; // x22
  AssetLoader_LoadEndDataHandler_o *v50; // x23
  System_Collections_Generic_List_object__o *v51; // x21
  int32_t v52; // w2
  int32_t v53; // w3
  System_String_o *v54; // x4
  int32_t v55; // w5
  int64_t v56; // x6
  System_String_o *v57; // x7
  System_Int32_array *AllFieldMotionIds; // x0
  struct System_Int32_array **p_fieldMotionIds_5__3; // x21
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  struct BattleRootComponent___c__DisplayClass13_0_o *v66; // x22
  System_Collections_Generic_Dictionary_int__object__o *v67; // x23
  int32_t v68; // w2
  int32_t v69; // w3
  System_String_o *v70; // x4
  int32_t v71; // w5
  int64_t v72; // x6
  System_String_o *v73; // x7
  struct System_Int32_array *v74; // x28
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v76; // x29
  int32_t v77; // w23
  __int64 v78; // x22
  int32_t v79; // w2
  int32_t v80; // w3
  System_String_o *v81; // x4
  int32_t v82; // w5
  int64_t v83; // x6
  System_String_o *v84; // x7
  struct BattleRootComponent___c__DisplayClass13_0_o *v85; // x1
  BattleRootComponent__LoadAsset_d__13_o *v86; // x20
  __int64 v87; // x21
  System_String_o *v88; // x0
  AssetStorageLoadWrapper_o *v89; // x23
  System_String_o *v90; // x24
  struct BattleRootComponent_o *v91; // x19
  AssetLoader_LoadEndDataHandler_o *v92; // x25
  AssetManager_o *v93; // x21
  struct BattleRootComponent___c__DisplayClass13_0_o *v94; // x8
  struct System_Int32_array *fieldMotionIds_5__3; // x9
  struct BattleRootComponent___c__DisplayClass13_2_o *v96; // x8
  struct BattleRootComponent___c__DisplayClass13_2_o **p__8__2; // x21
  int32_t v98; // w2
  int32_t v99; // w3
  System_String_o *v100; // x4
  int32_t v101; // w5
  int64_t v102; // x6
  System_String_o *v103; // x7
  System_Collections_Generic_IEnumerable_TSource__o *assetDataByIndex; // x21
  BattleRootComponent___c_c *v105; // x0
  System_Func_T__TResult__o *_9__13_2; // x22
  Il2CppObject *v107; // x23
  struct BattleRootComponent___c_StaticFields *static_fields; // x0
  int32_t v109; // w2
  int32_t v110; // w3
  System_String_o *v111; // x4
  int32_t v112; // w5
  int64_t v113; // x6
  System_String_o *v114; // x7
  System_Linq_IOrderedEnumerable_TSource__o *v115; // x0
  BattleRootComponent___c_c *v116; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v117; // x21
  System_Func_T__TResult__o *_9__13_3; // x22
  Il2CppObject *v119; // x23
  struct BattleRootComponent___c_StaticFields *v120; // x0
  int32_t v121; // w2
  int32_t v122; // w3
  System_String_o *v123; // x4
  int32_t v124; // w5
  int64_t v125; // x6
  System_String_o *v126; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v127; // x0
  System_Collections_Generic_List_TSource__o *v128; // x0
  int32_t v129; // w2
  int32_t v130; // w3
  System_String_o *v131; // x4
  int32_t v132; // w5
  int64_t v133; // x6
  System_String_o *v134; // x7
  struct BattleEntity_o *battleEnt; // x8
  Il2CppObject *v136; // x21
  int32_t v137; // w2
  int32_t v138; // w3
  System_String_o *v139; // x4
  int32_t v140; // w5
  int64_t v141; // x6
  System_String_o *v142; // x7
  System_String_o *v143; // x0
  int32_t v144; // w2
  int32_t v145; // w3
  System_String_o *v146; // x4
  int32_t v147; // w5
  int64_t v148; // x6
  System_String_o *v149; // x7
  struct BattleRootComponent___c__DisplayClass13_2_o *_8__2; // x8
  BattleRootComponent__LoadAsset_d__13_o *v151; // x21
  AssetStorageLoadWrapper_o *v152; // x23
  Il2CppObject *v153; // x24
  AssetLoader_LoadEndDataHandler_o *v154; // x22
  struct BattleRootComponent___c__DisplayClass13_0_o *v155; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v156; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v157; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v158; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v159; // x8
  struct BattlePerformance_o *perf; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v161; // x8
  struct BattlePerformance_o *v162; // x8
  struct BattlePerformance_o *v163; // x8
  AssumedBattleAssetLoadManager_o *AssumedBattleAssetLoadManager_k__BackingField; // x21
  struct BattleRootComponent___c__DisplayClass13_0_o *v165; // x8
  struct BattlePerformance_o *v166; // x8
  int32_t v167; // w2
  int32_t v168; // w3
  System_String_o *v169; // x4
  int32_t v170; // w5
  int64_t v171; // x6
  System_String_o *v172; // x7
  int v173; // [xsp+Ch] [xbp-64h] BYREF

  v8 = this;
  if ( (byte_4D33742 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_AssumedBattleAssetLoadManager_Release_AssumedBattleAssetSearcherBeforeBattle___);
    sub_1C93AD4(&BattleDataDefine_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__AssetData___ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_int__AssetData__TypeInfo);
    sub_1C93AD4(&Method_System_Linq_Enumerable_OrderBy_KeyValuePair_int__AssetData___int___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_KeyValuePair_int__AssetData___AssetData___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToList_AssetData___);
    sub_1C93AD4(&System_Func_KeyValuePair_int__AssetData___int__TypeInfo);
    sub_1C93AD4(&System_Func_KeyValuePair_int__AssetData___AssetData__TypeInfo);
    sub_1C93AD4(&System_GC_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_AssetData___ctor__);
    sub_1C93AD4(&System_Collections_Generic_List_AssetData__TypeInfo);
    sub_1C93AD4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C93AD4(&OptionManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C93AD4(&Method_BattleRootComponent___c__LoadAsset_b__13_2__);
    sub_1C93AD4(&Method_BattleRootComponent___c__LoadAsset_b__13_3__);
    sub_1C93AD4(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__0__);
    sub_1C93AD4(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__1__);
    sub_1C93AD4(&BattleRootComponent___c__DisplayClass13_0_TypeInfo);
    sub_1C93AD4(&Method_BattleRootComponent___c__DisplayClass13_1__LoadAsset_b__4__);
    sub_1C93AD4(&BattleRootComponent___c__DisplayClass13_1_TypeInfo);
    sub_1C93AD4(&Method_BattleRootComponent___c__DisplayClass13_2__LoadAsset_b__5__);
    sub_1C93AD4(&BattleRootComponent___c__DisplayClass13_2_TypeInfo);
    sub_1C93AD4(&BattleRootComponent___c_TypeInfo);
    sub_1C93AD4(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_1C93AD4(&StringLiteral_3119/*"Battle/UniqueCamera/"*/);
    this = (BattleRootComponent__LoadAsset_d__13_o *)sub_1C93AD4(&StringLiteral_15159/*"UniqueCameraPrefab"*/);
    byte_4D33742 = 1;
  }
  v173 = 0;
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v10 = (Il2CppObject *)sub_1C93D20(BattleRootComponent___c__DisplayClass13_0_TypeInfo);
      System_Object___ctor(v10, 0);
      v8->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass13_0_o *)v10;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v8->fields.__8__1, (int32_t)v10, v11, v12, v13, v14, v15, v16);
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__LoadAsset_d__13_o *)OptionManager__IsSavedBattleMemoryMode(0);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_14;
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect(0);
      v17 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C93D20(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v17, 0);
      v8->fields.__2__current = (Il2CppObject *)v17;
      p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
      sub_1C93A78(p__2__current, (int32_t)v17, v19, v20, v21, v22, v23, v24);
      LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
      return 1;
    case 1:
      v8->fields.__1__state = -1;
      this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_110;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0, 0);
      this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_110;
      v26 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0);
      v8->fields.__2__current = (Il2CppObject *)v26;
      v27 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
      sub_1C93A78(v27, (int32_t)v26, v28, v29, v30, v31, v32, v33);
      v34 = 2;
      goto LABEL_106;
    case 2:
      v8->fields.__1__state = -1;
LABEL_14:
      _8__1 = v8->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_110;
      _8__1->fields.isAssetsLoading = 1;
      ent = v8->fields.ent;
      eventId = v8->fields.eventId;
      v38 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(
        v38,
        (Il2CppObject *)_8__1,
        Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__0__,
        0);
      if ( !_4__this )
        goto LABEL_110;
      AssetsIndependentToMainOne = BattleRootComponent__LoadAssetsIndependentToMainOne(_4__this, ent, eventId, v38, 0);
      UnityEngine_MonoBehaviour__StartCoroutine_72105100(
        (UnityEngine_MonoBehaviour_o *)_4__this,
        AssetsIndependentToMainOne,
        0);
      this = (BattleRootComponent__LoadAsset_d__13_o *)v8->fields.__8__1;
      if ( !this )
        goto LABEL_110;
      this->fields.__2__current = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__2__current, 0, v40, v41, v42, v43, v44, v45);
      assetStorageLoadWrapper = _4__this->fields.assetStorageLoadWrapper;
      v47 = BattleDataDefine_TypeInfo;
      if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
        v47 = BattleDataDefine_TypeInfo;
      }
      v48 = (Il2CppObject *)v8->fields.__8__1;
      ASSET_BATTLE_COMMON = v47->static_fields->ASSET_BATTLE_COMMON;
      v50 = (AssetLoader_LoadEndDataHandler_o *)sub_1C93D20(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v50,
        v48,
        Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__1__,
        0);
      if ( !assetStorageLoadWrapper )
        goto LABEL_110;
      AssetStorageLoadWrapper__LoadAssetStorage(assetStorageLoadWrapper, ASSET_BATTLE_COMMON, v50, 1, 0);
      v51 = (System_Collections_Generic_List_object__o *)sub_1C93D20(System_Collections_Generic_List_AssetData__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v51,
        (const MethodInfo_3879168 *)Method_System_Collections_Generic_List_AssetData___ctor__);
      v8->fields._motionDataList_5__2 = (struct System_Collections_Generic_List_AssetData__o *)v51;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&v8->fields._motionDataList_5__2,
        (int32_t)v51,
        v52,
        v53,
        v54,
        v55,
        v56,
        v57);
      AllFieldMotionIds = BattleRootComponent__GetAllFieldMotionIds(
                            _4__this,
                            v8->fields.battleEnt,
                            v8->fields.ent,
                            &v8->fields._baseMotionIds_5__4,
                            0);
      v8->fields._fieldMotionIds_5__3 = AllFieldMotionIds;
      p_fieldMotionIds_5__3 = &v8->fields._fieldMotionIds_5__3;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&v8->fields._fieldMotionIds_5__3,
        (int32_t)AllFieldMotionIds,
        v60,
        v61,
        v62,
        v63,
        v64,
        v65);
      v66 = v8->fields.__8__1;
      if ( !v66 )
        goto LABEL_110;
      v66->fields.loadCompCnt = 0;
      v67 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_int__AssetData__TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v67,
        (const MethodInfo_34BC3B0 *)Method_System_Collections_Generic_Dictionary_int__AssetData___ctor__);
      v66->fields.assetDataByIndex = (struct System_Collections_Generic_Dictionary_int__AssetData__o *)v67;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&v66->fields.assetDataByIndex,
        (int32_t)v67,
        v68,
        v69,
        v70,
        v71,
        v72,
        v73);
      v74 = *p_fieldMotionIds_5__3;
      if ( !*p_fieldMotionIds_5__3 )
        goto LABEL_110;
      max_length = v74->max_length;
      if ( (int)max_length < 1 )
        goto LABEL_33;
      v76 = 0;
      break;
    case 3:
      v8->fields.__1__state = -1;
      goto LABEL_38;
    case 4:
      v8->fields.__1__state = -1;
      goto LABEL_44;
    case 5:
      v8->fields.__1__state = -1;
      goto LABEL_98;
    case 6:
      v8->fields.__1__state = -1;
      goto LABEL_101;
    default:
      return 0;
  }
  do
  {
    if ( v76 >= (unsigned int)max_length )
      sub_1C93D34(this);
    v77 = v74->m_Items[v76];
    v78 = sub_1C93D20(BattleRootComponent___c__DisplayClass13_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v78, 0);
    if ( !v78 )
      goto LABEL_110;
    v85 = v8->fields.__8__1;
    v86 = v8;
    *(_QWORD *)(v78 + 24) = v85;
    v87 = v78 + 24;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)(v78 + 24), (int32_t)v85, v79, v80, v81, v82, v83, v84);
    *(_DWORD *)(v78 + 16) = v76;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v88 = BattleDataDefine__FieldMotionPath(v77, 0);
    v89 = _4__this->fields.assetStorageLoadWrapper;
    v90 = v88;
    v91 = _4__this;
    v92 = (AssetLoader_LoadEndDataHandler_o *)sub_1C93D20(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v92,
      (Il2CppObject *)v78,
      Method_BattleRootComponent___c__DisplayClass13_1__LoadAsset_b__4__,
      0);
    if ( !v89 )
      goto LABEL_110;
    this = (BattleRootComponent__LoadAsset_d__13_o *)AssetStorageLoadWrapper__LoadAssetStorage(v89, v90, v92, 1, 0);
    _4__this = v91;
    v8 = v86;
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !*(_QWORD *)v87 )
        goto LABEL_110;
      ++*(_DWORD *)(*(_QWORD *)v87 + 40LL);
    }
    LODWORD(max_length) = v74->max_length;
    ++v76;
  }
  while ( (__int64)v76 < (int)max_length );
LABEL_33:
  this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  v93 = (AssetManager_o *)this;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
  if ( !v93 )
    goto LABEL_110;
  AssetManager__UpdateLoadParallelMax(v93, BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX, 0);
LABEL_38:
  v94 = v8->fields.__8__1;
  if ( !v94 )
    goto LABEL_110;
  if ( !v94->fields.commonData )
  {
LABEL_42:
    v8->fields.__2__current = 0;
    v27 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
    sub_1C93A78(v27, 0, v2, v3, v4, v5, v6, v7);
    v34 = 3;
LABEL_106:
    LODWORD(v27[-1].fields._ClosedMessage_k__BackingField) = v34;
    return 1;
  }
  fieldMotionIds_5__3 = v8->fields._fieldMotionIds_5__3;
  if ( !fieldMotionIds_5__3 )
    goto LABEL_110;
  if ( v94->fields.loadCompCnt < SLODWORD(fieldMotionIds_5__3->max_length) )
    goto LABEL_42;
  assetDataByIndex = (System_Collections_Generic_IEnumerable_TSource__o *)v94->fields.assetDataByIndex;
  v105 = BattleRootComponent___c_TypeInfo;
  if ( !BattleRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleRootComponent___c_TypeInfo);
    v105 = BattleRootComponent___c_TypeInfo;
  }
  _9__13_2 = (System_Func_T__TResult__o *)v105->static_fields->__9__13_2;
  if ( !_9__13_2 )
  {
    if ( !v105->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v105);
      v105 = BattleRootComponent___c_TypeInfo;
    }
    v107 = (Il2CppObject *)v105->static_fields->__9;
    _9__13_2 = (System_Func_T__TResult__o *)sub_1C93D20(System_Func_KeyValuePair_int__AssetData___int__TypeInfo);
    System_Func_KeyValuePair_int__object___int____ctor(
      _9__13_2,
      v107,
      Method_BattleRootComponent___c__LoadAsset_b__13_2__,
      0);
    static_fields = BattleRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__13_2 = (struct System_Func_KeyValuePair_int__AssetData___int__o *)_9__13_2;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&static_fields->__9__13_2,
      (int32_t)_9__13_2,
      v109,
      v110,
      v111,
      v112,
      v113,
      v114);
  }
  v115 = System_Linq_Enumerable__OrderBy_KeyValuePair_int__object___int_(
           assetDataByIndex,
           (System_Func_TSource__TKey__o *)_9__13_2,
           (const MethodInfo_31D3504 *)Method_System_Linq_Enumerable_OrderBy_KeyValuePair_int__AssetData___int___);
  v116 = BattleRootComponent___c_TypeInfo;
  v117 = (System_Collections_Generic_IEnumerable_TSource__o *)v115;
  if ( !BattleRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleRootComponent___c_TypeInfo);
    v116 = BattleRootComponent___c_TypeInfo;
  }
  _9__13_3 = (System_Func_T__TResult__o *)v116->static_fields->__9__13_3;
  if ( !_9__13_3 )
  {
    if ( !v116->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v116);
      v116 = BattleRootComponent___c_TypeInfo;
    }
    v119 = (Il2CppObject *)v116->static_fields->__9;
    _9__13_3 = (System_Func_T__TResult__o *)sub_1C93D20(System_Func_KeyValuePair_int__AssetData___AssetData__TypeInfo);
    System_Func_KeyValuePair_int__object___object____ctor(
      _9__13_3,
      v119,
      Method_BattleRootComponent___c__LoadAsset_b__13_3__,
      0);
    v120 = BattleRootComponent___c_TypeInfo->static_fields;
    v120->__9__13_3 = (struct System_Func_KeyValuePair_int__AssetData___AssetData__o *)_9__13_3;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v120->__9__13_3, (int32_t)_9__13_3, v121, v122, v123, v124, v125, v126);
  }
  v127 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_int__object___object_(
                                                                v117,
                                                                (System_Func_TSource__TResult__o *)_9__13_3,
                                                                (const MethodInfo_31D4E64 *)Method_System_Linq_Enumerable_Select_KeyValuePair_int__AssetData___AssetData___);
  v128 = System_Linq_Enumerable__ToList_object_(
           v127,
           (const MethodInfo_31E8E3C *)Method_System_Linq_Enumerable_ToList_AssetData___);
  v8->fields._motionDataList_5__2 = (struct System_Collections_Generic_List_AssetData__o *)v128;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&v8->fields._motionDataList_5__2,
    (int32_t)v128,
    v129,
    v130,
    v131,
    v132,
    v133,
    v134);
  battleEnt = v8->fields.battleEnt;
  if ( !battleEnt )
    goto LABEL_110;
  this = (BattleRootComponent__LoadAsset_d__13_o *)battleEnt->fields.battleInfo;
  if ( !this )
    goto LABEL_110;
  this = (BattleRootComponent__LoadAsset_d__13_o *)BattleInfoData__GetUniqueCameraId(
                                                     (BattleInfoData_o *)this,
                                                     v8->fields.ent,
                                                     0);
  v173 = (int)this;
  if ( (_DWORD)this )
  {
    v136 = (Il2CppObject *)sub_1C93D20(BattleRootComponent___c__DisplayClass13_2_TypeInfo);
    System_Object___ctor(v136, 0);
    v8->fields.__8__2 = (struct BattleRootComponent___c__DisplayClass13_2_o *)v136;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v8->fields.__8__2, (int32_t)v136, v137, v138, v139, v140, v141, v142);
    v143 = System_Int32__ToString((int32_t)&v173, 0);
    this = (BattleRootComponent__LoadAsset_d__13_o *)System_String__Concat_64425724(
                                                       (System_String_o *)StringLiteral_3119/*"Battle/UniqueCamera/"*/,
                                                       v143,
                                                       0);
    _8__2 = v8->fields.__8__2;
    if ( !_8__2 )
      goto LABEL_110;
    _8__2->fields.uniqueCameraData = 0;
    v151 = this;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&_8__2->fields, 0, v144, v145, v146, v147, v148, v149);
    if ( !_4__this )
      goto LABEL_110;
    v152 = _4__this->fields.assetStorageLoadWrapper;
    v153 = (Il2CppObject *)v8->fields.__8__2;
    v154 = (AssetLoader_LoadEndDataHandler_o *)sub_1C93D20(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v154,
      v153,
      Method_BattleRootComponent___c__DisplayClass13_2__LoadAsset_b__5__,
      0);
    if ( !v152 )
      goto LABEL_110;
    this = (BattleRootComponent__LoadAsset_d__13_o *)AssetStorageLoadWrapper__LoadAssetStorage(
                                                       v152,
                                                       (System_String_o *)v151,
                                                       v154,
                                                       1,
                                                       0);
    v8->fields._loadSucceeded_5__5 = (unsigned __int8)this & 1;
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v155 = v8->fields.__8__1;
      if ( !v155 )
        goto LABEL_110;
      this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_110;
      BattlePerformance__loadStorageObjectCameraCommon((BattlePerformance_o *)this, v155->fields.commonData, 0);
    }
LABEL_44:
    p__8__2 = &v8->fields.__8__2;
    v96 = v8->fields.__8__2;
    if ( !v96 )
      goto LABEL_110;
    method = (const MethodInfo *)v96->fields.uniqueCameraData;
    if ( !method )
    {
      v8->fields.__2__current = 0;
      v27 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
      sub_1C93A78(v27, 0, v2, v3, v4, v5, v6, v7);
      v34 = 4;
      goto LABEL_106;
    }
    if ( v8->fields._loadSucceeded_5__5 )
    {
      if ( !_4__this )
        goto LABEL_110;
      this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_110;
      BattlePerformance__loadStorageObjectCamera(
        (BattlePerformance_o *)this,
        (AssetData_o *)method,
        (System_String_o *)StringLiteral_15159/*"UniqueCameraPrefab"*/,
        0);
      *p__8__2 = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v8->fields.__8__2, 0, v98, v99, v100, v101, v102, v103);
    }
    else
    {
      *p__8__2 = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v8->fields.__8__2, 0, v2, v3, v4, v5, v6, v7);
      if ( !_4__this )
        goto LABEL_110;
    }
  }
  else
  {
    if ( !_4__this )
      goto LABEL_110;
    v156 = v8->fields.__8__1;
    if ( !v156 )
      goto LABEL_110;
    this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
    if ( !this )
      goto LABEL_110;
    BattlePerformance__loadStorageObjectCameraCommon((BattlePerformance_o *)this, v156->fields.commonData, 0);
  }
  v157 = v8->fields.__8__1;
  if ( !v157 )
    goto LABEL_110;
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_110;
  BattlePerformance__loadStorageObjectCommonMotion((BattlePerformance_o *)this, v157->fields.commonData, 0);
  v158 = v8->fields.__8__1;
  if ( !v158 )
    goto LABEL_110;
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_110;
  BattlePerformance__SetEffectControlObjectFromCommonAsset((BattlePerformance_o *)this, v158->fields.commonData, 0);
  v159 = v8->fields.__8__1;
  if ( !v159 )
    goto LABEL_110;
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_110;
  BattlePerformance__loadFieldMotion(
    (BattlePerformance_o *)this,
    v159->fields.commonData,
    v8->fields._motionDataList_5__2,
    0);
  perf = _4__this->fields.perf;
  if ( !perf )
    goto LABEL_110;
  this = (BattleRootComponent__LoadAsset_d__13_o *)perf->fields._fmManager_k__BackingField;
  if ( !this )
    goto LABEL_110;
  FieldMotionManager__SetBaseFieldMotionIds((FieldMotionManager_o *)this, v8->fields._baseMotionIds_5__4, 0);
  v161 = v8->fields.__8__1;
  if ( !v161 )
    goto LABEL_110;
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_110;
  BattlePerformance__SetRootCameraInfoToActionCamera((BattlePerformance_o *)this, v161->fields.commonData, 0);
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_110;
  BattlePerformance__Initialize((BattlePerformance_o *)this, 0);
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.data;
  if ( !this )
    goto LABEL_110;
  BattleData__loadFsmGameObject((BattleData_o *)this, 0);
  v162 = _4__this->fields.perf;
  if ( !v162 )
    goto LABEL_110;
  this = (BattleRootComponent__LoadAsset_d__13_o *)v162->fields._AssumedBattleAssetLoadManager_k__BackingField;
  if ( !this )
    goto LABEL_110;
  AssumedBattleAssetLoadManager__Release_object_(
    (AssumedBattleAssetLoadManager_o *)this,
    (const MethodInfo_3185F10 *)Method_AssumedBattleAssetLoadManager_Release_AssumedBattleAssetSearcherBeforeBattle___);
  v163 = _4__this->fields.perf;
  if ( !v163 )
    goto LABEL_110;
  AssumedBattleAssetLoadManager_k__BackingField = v163->fields._AssumedBattleAssetLoadManager_k__BackingField;
  this = (BattleRootComponent__LoadAsset_d__13_o *)AssumedBattleAssetSearcherBeforeBattle__Create(0);
  if ( !AssumedBattleAssetLoadManager_k__BackingField )
    goto LABEL_110;
  AssumedBattleAssetLoadManager__Preload(
    AssumedBattleAssetLoadManager_k__BackingField,
    (AssumedBattleAssetSearcherBase_o *)this,
    0);
LABEL_98:
  v165 = v8->fields.__8__1;
  if ( !v165 )
    goto LABEL_110;
  if ( v165->fields.isAssetsLoading )
  {
    v8->fields.__2__current = 0;
    v27 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
    sub_1C93A78(v27, 0, v2, v3, v4, v5, v6, v7);
    v34 = 5;
    goto LABEL_106;
  }
LABEL_101:
  if ( !_4__this )
    goto LABEL_110;
  v166 = _4__this->fields.perf;
  if ( !v166 )
    goto LABEL_110;
  this = (BattleRootComponent__LoadAsset_d__13_o *)v166->fields._AssumedBattleAssetLoadManager_k__BackingField;
  if ( !this )
    goto LABEL_110;
  if ( AssumedBattleAssetLoadManager__IsPreloading((AssumedBattleAssetLoadManager_o *)this, 0) )
  {
    v8->fields.__2__current = 0;
    v27 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
    sub_1C93A78(v27, 0, v167, v168, v169, v170, v171, v172);
    v34 = 6;
    goto LABEL_106;
  }
  BattleRootComponent__SetupObjectsExtractedFromLoadedAssets(_4__this, 0);
  this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_110:
    sub_1C93D2C(this, method);
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

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_BattleRootComponent__LoadAsset_d__13_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *v8; // x19
  int32_t _1__state; // w8
  BattleRootComponent_o *_4__this; // x20
  bool result; // w0
  Il2CppObject *v12; // x22
  Il2CppObject **p__8__1; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t BattleEffectId; // w22
  System_String_o *v21; // x0
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x23
  Il2CppObject *v23; // x25
  BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *v24; // x22
  AssetLoader_LoadEndDataHandler_o *v25; // x24
  Il2CppObject *Master_object; // x22
  System_Collections_Generic_IEnumerable_T__o *v27; // x23
  System_Collections_Generic_List_int__o *v28; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v30; // x9
  __int64 size; // x10
  Il2CppObject *SingleEntity; // x21
  System_Collections_Generic_HashSet_int__o *v33; // x23
  int32_t v34; // w22
  DataMasterBase_TMaster__TEntity__PKType__o *v35; // x22
  _BOOL8 v36; // x0
  __int64 v37; // x1
  _BOOL8 v38; // x0
  __int64 v39; // x1
  struct BattleRootComponent___c__DisplayClass14_0_o *_8__1; // x26
  System_String_o *monitor; // x23
  System_Action_o *_9__8; // x24
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  AssetStorageLoadWrapper_o *v49; // x22
  Il2CppObject *v50; // x24
  System_Action_o *v51; // x23
  System_Collections_Generic_HashSet_int__o *v52; // x22
  Il2CppObject *v53; // x1
  System_String_o *v54; // x0
  __int64 v55; // x1
  struct BattleRootComponent___c__DisplayClass14_0_o *v56; // x26
  AssetStorageLoadWrapper_o *v57; // x23
  AssetLoader_LoadEndDataHandler_o *_9__9; // x24
  System_String_o *v59; // x21
  int32_t v60; // w2
  int32_t v61; // w3
  System_String_o *v62; // x4
  int32_t v63; // w5
  int64_t v64; // x6
  System_String_o *v65; // x7
  _BOOL8 Wrapper__LoadAssetStorage; // x0
  __int64 v67; // x1
  struct BattleRootComponent___c__DisplayClass14_0_o *v68; // x8
  System_Int32_array *v69; // x21
  Il2CppObject *_2__current; // x8
  BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *v71; // x21
  unsigned __int64 v72; // x27
  struct BattleRootComponent___c__DisplayClass14_0_o *v73; // x25
  System_String_o *v74; // x22
  AssetStorageLoadWrapper_o *v75; // x23
  AssetLoader_LoadEndDataHandler_o *_9__10; // x24
  int32_t v77; // w2
  int32_t v78; // w3
  System_String_o *v79; // x4
  int32_t v80; // w5
  int64_t v81; // x6
  System_String_o *v82; // x7
  struct BattleRootComponent___c__DisplayClass14_0_o *v83; // x8
  long double v84; // q0
  __int64 v85; // x0
  __int64 v86; // x0
  Il2CppObject *v87; // x23
  AtlasManager_o *v88; // x21
  System_Action_o *v89; // x22
  Il2CppObject *v90; // x22
  System_Action_o *v91; // x21
  Il2CppObject *v92; // x22
  System_Action_o *v93; // x21
  Il2CppObject *v94; // x22
  BattlePerformance_o *perf; // x20
  System_Action_o *v96; // x21
  struct BattleRootComponent___c__DisplayClass14_0_o *v97; // x8
  Il2CppObject *v98; // x20
  System_Action_o *v99; // x21
  long double v100; // q0
  __int64 v101; // x0
  __int64 v102; // x0
  long double v103; // q0
  __int64 v104; // x0
  __int64 v105; // x0
  Il2CppObject *v106; // x22
  AtlasManager_o *v107; // x20
  System_Action_o *v108; // x21
  AssetManager_o *v109; // x20
  struct BattleRootComponent___c__DisplayClass14_0_o *v110; // x8
  GrandQuestFolderBoardItem_o *v111; // x19
  struct System_Int32_array *v112; // x8
  _QWORD *v113; // x9
  __int64 v114; // x10
  struct System_Int32_array *v115; // x8
  _QWORD *v116; // x9
  __int64 v117; // x10
  System_Collections_Generic_IEnumerable_T__o *ClassBoardCommandSpellEffectId; // x0
  System_Int32_array *v119; // x21
  AssetManager_o *v120; // x20
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v122; // w2
  int32_t v123; // w3
  System_String_o *v124; // x4
  int32_t v125; // w5
  int64_t v126; // x6
  System_String_o *v127; // x7
  System_Collections_Generic_List_Enumerator_int__o v128; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v129; // [xsp+20h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_HashSet_Enumerator_T__o v131; // [xsp+40h] [xbp-80h] BYREF
  int32_t v132; // [xsp+5Ch] [xbp-64h] BYREF

  v8 = this;
  if ( (byte_4D33743 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&BattleDataDefine_TypeInfo);
    sub_1C93AD4(&BattleEffectUtility_TypeInfo);
    sub_1C93AD4(&Method_DataManager_GetMaster_BattleMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_BgmMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_BuffMaster___);
    sub_1C93AD4(&Method_DataManager_GetMaster_ConstantMaster___);
    sub_1C93AD4(&DataManager_TypeInfo);
    sub_1C93AD4(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    sub_1C93AD4(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1C93AD4(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_1C93AD4(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_1C93AD4(&int_TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int___ctor___79008552);
    sub_1C93AD4(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C93AD4(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C93AD4(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C93AD4(&OptionManager_TypeInfo);
    sub_1C93AD4(&ServantAssetLoadManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AtlasManager__getInstance__);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C93AD4(&SoundManager_TypeInfo);
    sub_1C93AD4(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__0__);
    sub_1C93AD4(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__10__);
    sub_1C93AD4(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__1__);
    sub_1C93AD4(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__2__);
    sub_1C93AD4(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__3__);
    sub_1C93AD4(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__4__);
    sub_1C93AD4(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__5__);
    sub_1C93AD4(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__6__);
    sub_1C93AD4(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__7__);
    sub_1C93AD4(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__8__);
    sub_1C93AD4(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__9__);
    sub_1C93AD4(&BattleRootComponent___c__DisplayClass14_0_TypeInfo);
    sub_1C93AD4(&StringLiteral_2777/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE"*/);
    sub_1C93AD4(&StringLiteral_2772/*"BATTLE_EFFECT_ID_3003001"*/);
    sub_1C93AD4(&StringLiteral_3105/*"Battle/DropEffect/{0}"*/);
    sub_1C93AD4(&StringLiteral_3106/*"Battle/Effect/"*/);
    sub_1C93AD4(&StringLiteral_2778/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE_PIERCE"*/);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)sub_1C93AD4(&StringLiteral_3098/*"Battle"*/);
    byte_4D33743 = 1;
  }
  v132 = 0;
  memset(&v131, 0, sizeof(v131));
  entity = 0;
  memset(&v129, 0, sizeof(v129));
  _1__state = v8->fields.__1__state;
  if ( _1__state == 2 )
  {
    v8->fields.__1__state = -1;
  }
  else
  {
    _4__this = v8->fields.__4__this;
    if ( _1__state != 1 )
    {
      result = 0;
      if ( _1__state )
        return result;
      v8->fields.__1__state = -1;
      v12 = (Il2CppObject *)sub_1C93D20(BattleRootComponent___c__DisplayClass14_0_TypeInfo);
      System_Object___ctor(v12, 0);
      v8->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass14_0_o *)v12;
      p__8__1 = (Il2CppObject **)&v8->fields.__8__1;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v8->fields.__8__1, (int32_t)v12, v14, v15, v16, v17, v18, v19);
      if ( v8->fields.__8__1 )
      {
        v8->fields.__8__1->fields.loadCnt = 0;
        this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)v8->fields.ent;
        v8->fields._loadCntMax_5__2 = 0;
        if ( this )
        {
          BattleEffectId = QuestPhaseEntity__getBattleEffectId((QuestPhaseEntity_o *)this, 0, 0);
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          v132 = BattleEffectUtility__setBattleEffectId(BattleEffectId, 0);
          v21 = System_Int32__ToString((int32_t)&v132, 0);
          this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)System_String__Concat_64425724(
                                                                                  (System_String_o *)StringLiteral_3106/*"Battle/Effect/"*/,
                                                                                  v21,
                                                                                  0);
          ++v8->fields._loadCntMax_5__2;
          if ( _4__this )
          {
            assetStorageLoadWrapper = _4__this->fields.assetStorageLoadWrapper;
            v23 = *p__8__1;
            v24 = this;
            v25 = (AssetLoader_LoadEndDataHandler_o *)sub_1C93D20(AssetLoader_LoadEndDataHandler_TypeInfo);
            AssetLoader_LoadEndDataHandler___ctor(
              v25,
              v23,
              Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__0__,
              0);
            if ( assetStorageLoadWrapper )
            {
              this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)AssetStorageLoadWrapper__LoadAssetStorage(
                                                                                      assetStorageLoadWrapper,
                                                                                      (System_String_o *)v24,
                                                                                      v25,
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
              Master_object = DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_ConstantMaster___);
              this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_BuffMaster___);
              if ( this )
              {
                v27 = *(System_Collections_Generic_IEnumerable_T__o **)&this->fields._loadCntMax_5__2;
                v28 = (System_Collections_Generic_List_int__o *)sub_1C93D20(System_Collections_Generic_List_int__TypeInfo);
                System_Collections_Generic_List_int____ctor_59097676(
                  v28,
                  v27,
                  (const MethodInfo_385C24C *)Method_System_Collections_Generic_List_int___ctor___79008552);
                if ( Master_object )
                {
                  this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ConstantMaster__GetValue(
                                                                                          (ConstantMaster_o *)Master_object,
                                                                                          (System_String_o *)StringLiteral_2777/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE"*/,
                                                                                          0);
                  if ( v28 )
                  {
                    items = v28->fields._items;
                    v30 = Method_System_Collections_Generic_List_int__Add__;
                    ++v28->fields._version;
                    if ( items )
                    {
                      size = v28->fields._size;
                      if ( (unsigned int)size >= LODWORD(items->max_length) )
                      {
                        System_Collections_Generic_List_int___AddWithResize(
                          v28,
                          (int32_t)this,
                          *(const MethodInfo_385C978 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v28->fields._size = size + 1;
                        items->m_Items[size] = (int)this;
                      }
                      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ConstantMaster__GetValue(
                                                                                              (ConstantMaster_o *)Master_object,
                                                                                              (System_String_o *)StringLiteral_2772/*"BATTLE_EFFECT_ID_3003001"*/,
                                                                                              0);
                      v112 = v28->fields._items;
                      v113 = Method_System_Collections_Generic_List_int__Add__;
                      ++v28->fields._version;
                      if ( v112 )
                      {
                        v114 = v28->fields._size;
                        if ( (unsigned int)v114 >= LODWORD(v112->max_length) )
                        {
                          System_Collections_Generic_List_int___AddWithResize(
                            v28,
                            (int32_t)this,
                            *(const MethodInfo_385C978 **)(*(_QWORD *)(v113[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v28->fields._size = v114 + 1;
                          v112->m_Items[v114] = (int)this;
                        }
                        this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ConstantMaster__GetValue(
                                                                                                (ConstantMaster_o *)Master_object,
                                                                                                (System_String_o *)StringLiteral_2778/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE_PIERCE"*/,
                                                                                                0);
                        v115 = v28->fields._items;
                        v116 = Method_System_Collections_Generic_List_int__Add__;
                        ++v28->fields._version;
                        if ( v115 )
                        {
                          v117 = v28->fields._size;
                          if ( (unsigned int)v117 >= LODWORD(v115->max_length) )
                          {
                            System_Collections_Generic_List_int___AddWithResize(
                              v28,
                              (int32_t)this,
                              *(const MethodInfo_385C978 **)(*(_QWORD *)(v116[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v28->fields._size = v117 + 1;
                            v115->m_Items[v117] = (int)this;
                          }
                          ClassBoardCommandSpellEffectId = (System_Collections_Generic_IEnumerable_T__o *)BattleRootComponent__GetClassBoardCommandSpellEffectId(_4__this, 0);
                          System_Collections_Generic_List_int___AddRange(
                            v28,
                            ClassBoardCommandSpellEffectId,
                            (const MethodInfo_385CB84 *)Method_System_Collections_Generic_List_int__AddRange__);
                          v119 = System_Collections_Generic_List_int___ToArray(
                                   v28,
                                   (const MethodInfo_385E430 *)Method_System_Collections_Generic_List_int__ToArray__);
                          if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
                          this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ServantAssetLoadManager__preloadBattleCommonEffect(
                                                                                                  v119,
                                                                                                  0);
                          if ( _4__this->fields.data )
                          {
                            BattleData__addLoadedCommonEffectPath(_4__this->fields.data, (System_String_array *)this, 0);
                            this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
                            v120 = (AssetManager_o *)this;
                            if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
                            if ( v120 )
                            {
                              AssetManager__UpdateLoadParallelMax(
                                v120,
                                BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX,
                                0);
                              v8->fields.__2__current = 0;
                              p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
                              sub_1C93A78(p__2__current, 0, v122, v123, v124, v125, v126, v127);
                              result = 1;
                              LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
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
    v8->fields.__1__state = -1;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_BattleMaster___);
    if ( !this )
      goto LABEL_39;
    SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                     (const MethodInfo_3465AD0 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    v33 = (System_Collections_Generic_HashSet_int__o *)sub_1C93D20(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v33,
      (const MethodInfo_37253A8 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    if ( !SingleEntity )
      goto LABEL_39;
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingleEntity[1].klass;
    if ( !this )
      goto LABEL_39;
    v34 = 0;
    while ( v34 < BattleInfoData__getLastWave((BattleInfoData_o *)this, 0) + 1 )
    {
      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattleEntity__GetStageEntityAtWave(
                                                                              (BattleEntity_o *)SingleEntity,
                                                                              v34,
                                                                              0);
      if ( this )
      {
        if ( !v33 )
          goto LABEL_39;
        System_Collections_Generic_HashSet_int___Add(
          v33,
          (int32_t)this->fields.__8__1,
          (const MethodInfo_37265AC *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattleEntity__GetStageEntityAtWave(
                                                                              (BattleEntity_o *)SingleEntity,
                                                                              v34,
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
            if ( !v33 )
              goto LABEL_39;
            System_Collections_Generic_HashSet_int___Add(
              v33,
              HIDWORD(this->fields.ent),
              (const MethodInfo_37265AC *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
          this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingleEntity[1].klass;
          ++v34;
          if ( this )
            continue;
        }
      }
      goto LABEL_39;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)DataManager__GetMaster_object_((const MethodInfo_31A49E8 *)Method_DataManager_GetMaster_BgmMaster___);
    if ( !v33 )
      goto LABEL_39;
    v35 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
    System_Collections_Generic_HashSet_int___GetEnumerator(
      (System_Collections_Generic_HashSet_Enumerator_T__o *)&v128,
      v33,
      (const MethodInfo_3725F30 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    v131 = (System_Collections_Generic_HashSet_Enumerator_T__o)v128;
    while ( 1 )
    {
      v36 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
              &v131,
              (const MethodInfo_35F5F98 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
      if ( !v36 )
        break;
      if ( !v35 )
        sub_1C93D2C(v36, v37);
      v38 = DataMasterBase_object__object__int___TryGetEntity(
              v35,
              &entity,
              (int32_t)v131.fields._current,
              (const MethodInfo_34632C0 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( v38 )
      {
        ++v8->fields._loadCntMax_5__2;
        if ( !entity )
          sub_1C93D2C(v38, v39);
        _8__1 = v8->fields.__8__1;
        if ( !_8__1 )
          sub_1C93D2C(v38, v39);
        monitor = (System_String_o *)entity[1].monitor;
        _9__8 = _8__1->fields.__9__8;
        if ( !_9__8 )
        {
          _9__8 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
          System_Action___ctor(
            _9__8,
            (Il2CppObject *)_8__1,
            Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__8__,
            0);
          _8__1->fields.__9__8 = _9__8;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&_8__1->fields.__9__8,
            (int32_t)_9__8,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48);
        }
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__downloadAudioAssetStorage(monitor, _9__8, 1, 0);
      }
    }
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      &v131,
      (const MethodInfo_35F5F94 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    ++v8->fields._loadCntMax_5__2;
    if ( !_4__this )
      goto LABEL_39;
    v49 = _4__this->fields.assetStorageLoadWrapper;
    v50 = (Il2CppObject *)v8->fields.__8__1;
    v51 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      v51,
      v50,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__1__,
      0);
    if ( !v49 )
      goto LABEL_39;
    AssetStorageLoadWrapper__LoadAudioAssetStorage(v49, (System_String_o *)StringLiteral_3098/*"Battle"*/, v51, 1, 0);
    v52 = (System_Collections_Generic_HashSet_int__o *)sub_1C93D20(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v52,
      (const MethodInfo_37253A8 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattleRootComponent__GetLoadDropEffectType(
                                                                            _4__this,
                                                                            (BattleEntity_o *)SingleEntity,
                                                                            v52,
                                                                            0);
    if ( !this )
      goto LABEL_39;
    if ( SLODWORD(this->fields.__2__current) >= 1 )
    {
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v128,
        (System_Collections_Generic_List_int__o *)this,
        (const MethodInfo_385D44C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v129 = v128;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v129,
                (const MethodInfo_35F6200 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        LODWORD(v128.fields._list) = v129.fields._current;
        v53 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v128);
        v54 = System_String__Format((System_String_o *)StringLiteral_3105/*"Battle/DropEffect/{0}"*/, v53, 0);
        v56 = v8->fields.__8__1;
        ++v8->fields._loadCntMax_5__2;
        if ( !v56 )
          sub_1C93D2C(v54, v55);
        v57 = _4__this->fields.assetStorageLoadWrapper;
        _9__9 = v56->fields.__9__9;
        v59 = v54;
        if ( !_9__9 )
        {
          _9__9 = (AssetLoader_LoadEndDataHandler_o *)sub_1C93D20(AssetLoader_LoadEndDataHandler_TypeInfo);
          AssetLoader_LoadEndDataHandler___ctor(
            _9__9,
            (Il2CppObject *)v56,
            Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__9__,
            0);
          v56->fields.__9__9 = _9__9;
          sub_1C93A78((GrandQuestFolderBoardItem_o *)&v56->fields.__9__9, (int32_t)_9__9, v60, v61, v62, v63, v64, v65);
        }
        if ( !v57 )
          sub_1C93D2C(v54, v55);
        Wrapper__LoadAssetStorage = AssetStorageLoadWrapper__LoadAssetStorage(v57, v59, _9__9, 1, 0);
        if ( !Wrapper__LoadAssetStorage )
        {
          v68 = v8->fields.__8__1;
          if ( !v68 )
            sub_1C93D2C(Wrapper__LoadAssetStorage, v67);
          ++v68->fields.loadCnt;
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v129,
        (const MethodInfo_35F61FC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    }
    if ( !v52 )
      goto LABEL_39;
    if ( v52->fields._count >= 1 )
    {
      v69 = System_Linq_Enumerable__ToArray_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v52,
              (const MethodInfo_31E3B80 *)Method_System_Linq_Enumerable_ToArray_int___);
      if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattleEffectUtility__GetBattleCommonEffectPathList(
                                                                              v69,
                                                                              0);
      if ( !this )
        goto LABEL_39;
      _2__current = this->fields.__2__current;
      v71 = this;
      if ( (int)_2__current >= 1 )
      {
        v72 = 0;
        do
        {
          if ( v72 >= (unsigned int)_2__current )
            sub_1C93D34(this);
          v73 = v8->fields.__8__1;
          v74 = (System_String_o *)*((_QWORD *)&v71->fields.ent + v72);
          ++v8->fields._loadCntMax_5__2;
          if ( !v73 )
            goto LABEL_39;
          v75 = _4__this->fields.assetStorageLoadWrapper;
          _9__10 = v73->fields.__9__10;
          if ( !_9__10 )
          {
            _9__10 = (AssetLoader_LoadEndDataHandler_o *)sub_1C93D20(AssetLoader_LoadEndDataHandler_TypeInfo);
            AssetLoader_LoadEndDataHandler___ctor(
              _9__10,
              (Il2CppObject *)v73,
              Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__10__,
              0);
            v73->fields.__9__10 = _9__10;
            sub_1C93A78(
              (GrandQuestFolderBoardItem_o *)&v73->fields.__9__10,
              (int32_t)_9__10,
              v77,
              v78,
              v79,
              v80,
              v81,
              v82);
          }
          if ( !v75 )
            goto LABEL_39;
          this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)AssetStorageLoadWrapper__LoadAssetStorage(
                                                                                  v75,
                                                                                  v74,
                                                                                  _9__10,
                                                                                  1,
                                                                                  0);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v83 = v8->fields.__8__1;
            if ( !v83 )
              goto LABEL_39;
            ++v83->fields.loadCnt;
          }
          LODWORD(_2__current) = v71->fields.__2__current;
        }
        while ( (__int64)++v72 < (int)_2__current );
      }
    }
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)_4__this->fields.data;
    if ( !this )
      goto LABEL_39;
    if ( BattleData__IsWarBoard((BattleData_o *)this, 0) )
    {
      ++v8->fields._loadCntMax_5__2;
      v85 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v85 + 309) & 1) == 0 )
        v85 = sub_1C69B68(v84);
      v86 = *(_QWORD *)(*(_QWORD *)(v85 + 192) + 16LL);
      if ( (*(_BYTE *)(v86 + 309) & 1) == 0 )
        v86 = sub_1C69B68(v84);
      v87 = (Il2CppObject *)v8->fields.__8__1;
      v88 = **(AtlasManager_o ***)(v86 + 184);
      v89 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(
        v89,
        v87,
        Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__2__,
        0);
      if ( !v88 )
        goto LABEL_39;
      AtlasManager__LoadWarBoardAtlas(v88, v89, 0);
    }
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)_4__this->fields.data;
    if ( !this )
      goto LABEL_39;
    if ( BattleData__IsInterruptionQuest((BattleData_o *)this, 0) )
    {
      v90 = (Il2CppObject *)v8->fields.__8__1;
      ++v8->fields._loadCntMax_5__2;
      v91 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(
        v91,
        v90,
        Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__3__,
        0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadPartyOrganizationAtlas(v91, 1, 0);
    }
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    if ( OptionManager__isSavedMemoryMode(0) )
    {
      v92 = (Il2CppObject *)v8->fields.__8__1;
      ++v8->fields._loadCntMax_5__2;
      v93 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(
        v93,
        v92,
        Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__4__,
        0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadFaceBattleAtlas(v93, 0);
    }
    v94 = (Il2CppObject *)v8->fields.__8__1;
    ++v8->fields._loadCntMax_5__2;
    perf = _4__this->fields.perf;
    v96 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      v96,
      v94,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__5__,
      0);
    if ( !perf )
      goto LABEL_39;
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattlePerformance__LoadEventInfoPointGauge(
                                                                            perf,
                                                                            v96,
                                                                            v8->fields.eventId,
                                                                            0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v97 = v8->fields.__8__1;
      if ( !v97 )
        goto LABEL_39;
      ++v97->fields.loadCnt;
    }
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__ReleaseEventAtlas(0);
    v98 = (Il2CppObject *)v8->fields.__8__1;
    ++v8->fields._loadCntMax_5__2;
    v99 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      v99,
      v98,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__6__,
      0);
    AtlasManager__LoadEventAtlas(v99, 1, 0);
    v101 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v101 + 309) & 1) == 0 )
      v101 = sub_1C69B68(v100);
    v102 = *(_QWORD *)(*(_QWORD *)(v101 + 192) + 16LL);
    if ( (*(_BYTE *)(v102 + 309) & 1) == 0 )
      v102 = sub_1C69B68(v100);
    this = **(BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o ***)(v102 + 184);
    if ( !this )
      goto LABEL_39;
    AtlasManager__UnloadBuffIconAtlas((AtlasManager_o *)this, 0);
    ++v8->fields._loadCntMax_5__2;
    v104 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v104 + 309) & 1) == 0 )
      v104 = sub_1C69B68(v103);
    v105 = *(_QWORD *)(*(_QWORD *)(v104 + 192) + 16LL);
    if ( (*(_BYTE *)(v105 + 309) & 1) == 0 )
      v105 = sub_1C69B68(v103);
    v106 = (Il2CppObject *)v8->fields.__8__1;
    v107 = **(AtlasManager_o ***)(v105 + 184);
    v108 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(
      v108,
      v106,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__7__,
      0);
    if ( !v107 )
      goto LABEL_39;
    AtlasManager__LoadBuffIconAtlas(v107, v108, 0);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    v109 = (AssetManager_o *)this;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    if ( !v109 )
LABEL_39:
      sub_1C93D2C(this, method);
    AssetManager__UpdateLoadParallelMax(v109, BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX, 0);
  }
  v110 = v8->fields.__8__1;
  if ( !v110 )
    goto LABEL_39;
  if ( v110->fields.loadCnt >= v8->fields._loadCntMax_5__2 )
  {
    ActionExtensions__Call(v8->fields.finishCallback, 0);
    return 0;
  }
  else
  {
    v8->fields.__2__current = 0;
    v111 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
    sub_1C93A78(v111, 0, v2, v3, v4, v5, v6, v7);
    LODWORD(v111[-1].fields._ClosedMessage_k__BackingField) = 2;
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

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D33736 & 1) == 0 )
  {
    sub_1C93AD4(&BattleRootComponent___c_TypeInfo);
    byte_4D33736 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(BattleRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleRootComponent___c_TypeInfo->static_fields->__9 = (struct BattleRootComponent___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)BattleRootComponent___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_4D33737 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__AssetData__get_Key__);
    byte_4D33737 = 1;
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
  if ( (byte_4D33738 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_int__AssetData__get_Value__);
    byte_4D33738 = 1;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.commonData = common;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.commonData,
    (int32_t)common,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_4D33739 & 1) == 0 )
  {
    this = (BattleRootComponent___c__DisplayClass13_1_o *)sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_int__AssetData__Add__);
    byte_4D33739 = 1;
  }
  CS___8__locals1 = v4->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (this = (BattleRootComponent___c__DisplayClass13_1_o *)CS___8__locals1->fields.assetDataByIndex) == 0
    || (System_Collections_Generic_Dictionary_int__object___Add(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          v4->fields.index,
          (Il2CppObject *)motionData,
          (const MethodInfo_34BCD84 *)Method_System_Collections_Generic_Dictionary_int__AssetData__Add__),
        (v6 = v4->fields.CS___8__locals1) == 0) )
  {
    sub_1C93D2C(this, motionData);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.uniqueCameraData = cameraData;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)cameraData, (int32_t)method, v3, v4, v5, v6, v7);
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


void BattleRootComponent___c__DisplayClass14_0___LoadAssetsIndependentToMainOne_b__10(
        BattleRootComponent___c__DisplayClass14_0_o *this,
        AssetData_o *_,
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

  if ( (byte_4D3373A & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_1C93AD4(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_4D3373A = 1;
  }
  bgmList = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
  if ( !bgmList
    || (System_Collections_Generic_List_object___RemoveAt(
          bgmList,
          bgmList->fields._size - 1,
          (const MethodInfo_387B170 *)Method_System_Collections_Generic_List_string__RemoveAt__),
        (bgmList = (System_Collections_Generic_List_object__o *)this->fields.__4__this) == 0) )
  {
    sub_1C93D2C(bgmList, method);
  }
  BattleRootComponent__LoadBatteBgm((BattleRootComponent_o *)bgmList, this->fields.bgmList, this->fields.callback, 0);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  struct BattleRootComponent_o *_4__this; // x8

  if ( (byte_4D3373C & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_string__TypeInfo);
    sub_1C93AD4(&ScriptManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C93AD4(&Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__2__);
    byte_4D3373C = 1;
  }
  if ( System_String__IsNullOrEmpty(demo1, 0) )
  {
    _9__2 = this->fields.__9__2;
    questId = this->fields.questId;
    questPhase = this->fields.questPhase;
    if ( !_9__2 )
    {
      _9__2 = (struct System_Action_string__o *)sub_1C93D20(System_Action_string__TypeInfo);
      System_Action_object____ctor(
        (System_Action_object__o *)_9__2,
        (Il2CppObject *)this,
        Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__2__,
        0);
      this->fields.__9__2 = _9__2;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v8, v9, v10, v11, v12, v13);
    }
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__LoadBattleEndGameDemo(questId, questPhase, 0, _9__2, 0, 0);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    _4__this = this->fields.__4__this;
    if ( !_4__this || !Instance )
      sub_1C93D2C(Instance, v15);
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
  CommonUI_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4D3373B & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4D3373B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseNotificationDialog(Instance, 0), (Instance = (CommonUI_o *)this->fields.__4__this) == 0) )
  {
    sub_1C93D2C(Instance, v5);
  }
  BattleRootComponent__TerminalTransition((BattleRootComponent_o *)Instance, this->fields.info, 0);
}


void BattleRootComponent___c__DisplayClass23_0___TransitionTerminalOrBattleScript_b__2(
        BattleRootComponent___c__DisplayClass23_0_o *this,
        System_String_o *demo2,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BattleRootComponent_o *_4__this; // x0
  struct BattleRootComponent_o *v7; // x8

  if ( (byte_4D3373D & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4D3373D = 1;
  }
  if ( System_String__IsNullOrEmpty(demo2, 0) )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      BattleRootComponent__TerminalTransition(_4__this, this->fields.info, 0);
      return;
    }
LABEL_9:
    sub_1C93D2C(_4__this, v5);
  }
  _4__this = (BattleRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  v7 = this->fields.__4__this;
  if ( !v7 || !_4__this )
    goto LABEL_9;
  AvalonSceneManager__transitionSceneRefresh(
    (AvalonSceneManager_o *)_4__this,
    v7->fields.nextscenetype,
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  BattleRootComponent__loadOutGameAsset_d__20_o *v8; // x19
  struct BattleRootComponent_o *_4__this; // x21
  Il2CppObject *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  UnityEngine_WaitForEndOfFrame_o *v17; // x20
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  System_Collections_IEnumerator_o *v26; // x0
  GrandQuestFolderBoardItem_o *v27; // x19
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  int v34; // w8
  Il2CppObject *v35; // x20
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7
  struct BattleRootComponent___c__DisplayClass20_1_o *_8__1; // x21
  System_Action_o *v43; // x20
  struct BattleRootComponent___c__DisplayClass20_1_o *v44; // x8
  Il2CppObject *v45; // x20
  int32_t v46; // w2
  int32_t v47; // w3
  System_String_o *v48; // x4
  int32_t v49; // w5
  int64_t v50; // x6
  System_String_o *v51; // x7
  struct BattleRootComponent___c__DisplayClass20_2_o *_8__2; // x21
  System_Action_o *v53; // x20
  struct BattleRootComponent___c__DisplayClass20_2_o *v54; // x8
  UnityEngine_WaitForEndOfFrame_o *v55; // x20
  int32_t v56; // w2
  int32_t v57; // w3
  System_String_o *v58; // x4
  int32_t v59; // w5
  int64_t v60; // x6
  System_String_o *v61; // x7
  struct BattleRootComponent___c__DisplayClass20_0_o *_8__3; // x21
  System_Action_o *v63; // x20
  struct BattleRootComponent___c__DisplayClass20_0_o *v64; // x8
  UnityEngine_WaitForEndOfFrame_o *v65; // x20
  int32_t v66; // w2
  int32_t v67; // w3
  System_String_o *v68; // x4
  int32_t v69; // w5
  int64_t v70; // x6
  System_String_o *v71; // x7
  struct BattleRootComponent___c__DisplayClass20_0_o *v72; // x21
  System_Action_o *v73; // x20
  struct BattleRootComponent___c__DisplayClass20_0_o *v74; // x8
  UnityEngine_WaitForEndOfFrame_o *v75; // x20
  int32_t v76; // w2
  int32_t v77; // w3
  System_String_o *v78; // x4
  int32_t v79; // w5
  int64_t v80; // x6
  System_String_o *v81; // x7
  struct BattleRootComponent___c__DisplayClass20_0_o *v82; // x21
  System_Action_o *v83; // x20
  struct BattleRootComponent___c__DisplayClass20_0_o *v84; // x8
  UnityEngine_WaitForEndOfFrame_o *v85; // x20
  int32_t v86; // w2
  int32_t v87; // w3
  System_String_o *v88; // x4
  int32_t v89; // w5
  int64_t v90; // x6
  System_String_o *v91; // x7
  struct System_Action_o *callback; // x8

  v8 = this;
  if ( (byte_4D33744 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&AtlasManager_TypeInfo);
    sub_1C93AD4(&System_GC_TypeInfo);
    sub_1C93AD4(&OptionManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C93AD4(&Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__0__);
    sub_1C93AD4(&Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__1__);
    sub_1C93AD4(&Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__2__);
    sub_1C93AD4(&BattleRootComponent___c__DisplayClass20_0_TypeInfo);
    sub_1C93AD4(&Method_BattleRootComponent___c__DisplayClass20_1__loadOutGameAsset_b__3__);
    sub_1C93AD4(&BattleRootComponent___c__DisplayClass20_1_TypeInfo);
    sub_1C93AD4(&Method_BattleRootComponent___c__DisplayClass20_2__loadOutGameAsset_b__4__);
    sub_1C93AD4(&BattleRootComponent___c__DisplayClass20_2_TypeInfo);
    this = (BattleRootComponent__loadOutGameAsset_d__20_o *)sub_1C93AD4(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4D33744 = 1;
  }
  _4__this = v8->fields.__4__this;
  switch ( v8->fields.__1__state )
  {
    case 0:
      v8->fields.__1__state = -1;
      v10 = (Il2CppObject *)sub_1C93D20(BattleRootComponent___c__DisplayClass20_0_TypeInfo);
      System_Object___ctor(v10, 0);
      v8->fields.__8__3 = (struct BattleRootComponent___c__DisplayClass20_0_o *)v10;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v8->fields.__8__3, (int32_t)v10, v11, v12, v13, v14, v15, v16);
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_14;
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect(0);
      v17 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C93D20(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v17, 0);
      v8->fields.__2__current = (Il2CppObject *)v17;
      p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
      sub_1C93A78(p__2__current, (int32_t)v17, v19, v20, v21, v22, v23, v24);
      LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
      return 1;
    case 1:
      v8->fields.__1__state = -1;
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_90;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0, 0);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_90;
      v26 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0);
      v8->fields.__2__current = (Il2CppObject *)v26;
      v27 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
      sub_1C93A78(v27, (int32_t)v26, v28, v29, v30, v31, v32, v33);
      v34 = 2;
      goto LABEL_89;
    case 2:
      v8->fields.__1__state = -1;
LABEL_14:
      if ( !_4__this )
        goto LABEL_90;
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_90;
      if ( BattlePerformance__isActiveEventInfoGauge((BattlePerformance_o *)this, 0) )
        goto LABEL_25;
      v35 = (Il2CppObject *)sub_1C93D20(BattleRootComponent___c__DisplayClass20_1_TypeInfo);
      System_Object___ctor(v35, 0);
      v8->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass20_1_o *)v35;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v8->fields.__8__1, (int32_t)v35, v36, v37, v38, v39, v40, v41);
      _8__1 = v8->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_90;
      _8__1->fields.isEventAtlasLoaded = 0;
      v43 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(
        v43,
        (Il2CppObject *)_8__1,
        Method_BattleRootComponent___c__DisplayClass20_1__loadOutGameAsset_b__3__,
        0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadEventAtlas(v43, 1, 0);
LABEL_22:
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)&v8->fields.__8__1;
      v44 = v8->fields.__8__1;
      if ( !v44 )
        goto LABEL_90;
      if ( !v44->fields.isEventAtlasLoaded )
      {
        v8->fields.__2__current = 0;
        v27 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1C93A78(v27, 0, v2, v3, v4, v5, v6, v7);
        v34 = 3;
        goto LABEL_89;
      }
      this->klass = 0;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)this, 0, v2, v3, v4, v5, v6, v7);
LABEL_25:
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v45 = (Il2CppObject *)sub_1C93D20(BattleRootComponent___c__DisplayClass20_2_TypeInfo);
        System_Object___ctor(v45, 0);
        v8->fields.__8__2 = (struct BattleRootComponent___c__DisplayClass20_2_o *)v45;
        sub_1C93A78((GrandQuestFolderBoardItem_o *)&v8->fields.__8__2, (int32_t)v45, v46, v47, v48, v49, v50, v51);
        _8__2 = v8->fields.__8__2;
        if ( _8__2 )
        {
          _8__2->fields.isFaceAtlasLoaded = 0;
          v53 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
          System_Action___ctor(
            v53,
            (Il2CppObject *)_8__2,
            Method_BattleRootComponent___c__DisplayClass20_2__loadOutGameAsset_b__4__,
            0);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__LoadFaceAtlas(v53, 1, 0);
LABEL_33:
          v54 = v8->fields.__8__2;
          if ( v54 )
          {
            if ( v54->fields.isFaceAtlasLoaded )
            {
              if ( !System_GC_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              System_GC__Collect(0);
              v55 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C93D20(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v55, 0);
              v8->fields.__2__current = (Il2CppObject *)v55;
              v27 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
              sub_1C93A78(v27, (int32_t)v55, v56, v57, v58, v59, v60, v61);
              v34 = 5;
            }
            else
            {
              v8->fields.__2__current = 0;
              v27 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
              sub_1C93A78(v27, 0, v2, v3, v4, v5, v6, v7);
              v34 = 4;
            }
            goto LABEL_89;
          }
        }
LABEL_90:
        sub_1C93D2C(this, method);
      }
LABEL_39:
      _8__3 = v8->fields.__8__3;
      if ( !_8__3 )
        goto LABEL_90;
      _8__3->fields.isCharaGraphOptionAtlasLoaded = 0;
      v63 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(
        v63,
        (Il2CppObject *)_8__3,
        Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__0__,
        0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadCharaGraphOptionAtlas(v63, 1, 0);
LABEL_44:
      v64 = v8->fields.__8__3;
      if ( !v64 )
        goto LABEL_90;
      if ( !v64->fields.isCharaGraphOptionAtlasLoaded )
      {
        v8->fields.__2__current = 0;
        v27 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1C93A78(v27, 0, v2, v3, v4, v5, v6, v7);
        v34 = 6;
LABEL_89:
        LODWORD(v27[-1].fields._ClosedMessage_k__BackingField) = v34;
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
        v65 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C93D20(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v65, 0);
        v8->fields.__2__current = (Il2CppObject *)v65;
        v27 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1C93A78(v27, (int32_t)v65, v66, v67, v68, v69, v70, v71);
        v34 = 7;
        goto LABEL_89;
      }
LABEL_54:
      v72 = v8->fields.__8__3;
      if ( !v72 )
        goto LABEL_90;
      v72->fields.isBannerAtlasLoaded = 0;
      v73 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(
        v73,
        (Il2CppObject *)v72,
        Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__1__,
        0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadBanner(v73, 1, 0);
LABEL_59:
      v74 = v8->fields.__8__3;
      if ( !v74 )
        goto LABEL_90;
      if ( !v74->fields.isBannerAtlasLoaded )
      {
        v8->fields.__2__current = 0;
        v27 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1C93A78(v27, 0, v2, v3, v4, v5, v6, v7);
        v34 = 8;
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
        v75 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C93D20(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v75, 0);
        v8->fields.__2__current = (Il2CppObject *)v75;
        v27 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1C93A78(v27, (int32_t)v75, v76, v77, v78, v79, v80, v81);
        v34 = 9;
        goto LABEL_89;
      }
LABEL_69:
      v82 = v8->fields.__8__3;
      if ( !v82 )
        goto LABEL_90;
      v82->fields.isEventUIAtlasLoaded = 0;
      v83 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
      System_Action___ctor(
        v83,
        (Il2CppObject *)v82,
        Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__2__,
        0);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadEventUI(v83, 1, 0);
LABEL_74:
      v84 = v8->fields.__8__3;
      if ( !v84 )
        goto LABEL_90;
      if ( !v84->fields.isEventUIAtlasLoaded )
      {
        v8->fields.__2__current = 0;
        v27 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1C93A78(v27, 0, v2, v3, v4, v5, v6, v7);
        v34 = 10;
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
        v85 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C93D20(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v85, 0);
        v8->fields.__2__current = (Il2CppObject *)v85;
        v27 = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1C93A78(v27, (int32_t)v85, v86, v87, v88, v89, v90, v91);
        v34 = 11;
        goto LABEL_89;
      }
LABEL_84:
      callback = v8->fields.callback;
      if ( !callback )
        goto LABEL_90;
      ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
        callback->fields.method_code,
        callback->fields.method);
      return 0;
    case 3:
      v8->fields.__1__state = -1;
      goto LABEL_22;
    case 4:
      v8->fields.__1__state = -1;
      goto LABEL_33;
    case 5:
      v8->fields.__8__2 = 0;
      v8->fields.__1__state = -1;
      sub_1C93A78((GrandQuestFolderBoardItem_o *)&v8->fields.__8__2, 0, v2, v3, v4, v5, v6, v7);
      goto LABEL_39;
    case 6:
      v8->fields.__1__state = -1;
      goto LABEL_44;
    case 7:
      v8->fields.__1__state = -1;
      goto LABEL_54;
    case 8:
      v8->fields.__1__state = -1;
      goto LABEL_59;
    case 9:
      v8->fields.__1__state = -1;
      goto LABEL_69;
    case 0xA:
      v8->fields.__1__state = -1;
      goto LABEL_74;
    case 0xB:
      v8->fields.__1__state = -1;
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

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_BattleRootComponent__loadOutGameAsset_d__20_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
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
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1ACB984;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1ACB944;
}


System_IAsyncResult_o *BattleRootComponent_callBackBeginResume__BeginInvoke(
        BattleRootComponent_callBackBeginResume_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return sub_1C93A88(this, &v5, callback, object);
}


void BattleRootComponent_callBackBeginResume__EndInvoke(
        BattleRootComponent_callBackBeginResume_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
}


void BattleRootComponent_callBackBeginResume__Invoke(
        BattleRootComponent_callBackBeginResume_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}