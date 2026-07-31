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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_Collections_Generic_IEnumerable_T__o *v15; // x21
  System_Collections_Generic_List_int__o *v16; // x20
  System_Collections_Generic_IEnumerable_TSource__o *AllExistsScriptEnemyDeckSvtArray; // x0
  BattleRootComponent_c *klass; // x8
  BattleRootComponent_o *v19; // x21
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 v22; // x0
  __int64 AddFieldMotionIds; // x0
  __int64 v24; // x1
  __int64 v25; // x21
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x21
  __int64 v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  BattleDeckServantData_o *v36; // x0
  __int64 v37; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v38; // x0
  __int64 v39; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x21
  System_Collections_Generic_IEnumerable_TSource__c *v41; // x8
  __int64 v42; // x9
  int32_t *v43; // x10
  __int64 v44; // x0
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x21
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  __int64 v56; // x0
  __int64 v57; // x1
  int32_t v58; // w21
  _BOOL8 v59; // x0
  __int64 v60; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v62; // x9
  __int64 size; // x10
  __int64 v64; // x8
  __int64 v65; // x9
  int *v66; // x10
  __int64 v67; // x0
  __int64 v68; // x21
  __int64 v69; // x8
  __int64 v70; // x9
  int *v71; // x10
  __int64 v72; // x0
  int32_t v73; // w21
  StageEntity_o *StageEntityAtWave; // x0
  long double v75; // q0
  System_Collections_Generic_IEnumerable_TSource__o *WaveFieldMotionIds; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v77; // x22
  _QWORD *v78; // x22
  __int64 v79; // x8
  __int64 v80; // x0
  System_Collections_Generic_IEnumerable_TSource__c *v81; // x8
  __int64 v82; // x9
  int32_t *v83; // x10
  __int64 v84; // x0
  __int64 v85; // x0
  __int64 v86; // x1
  __int64 v87; // x22
  __int64 v88; // x8
  __int64 v89; // x9
  int *v90; // x10
  __int64 v91; // x0
  __int64 v92; // x8
  __int64 v93; // x9
  int *v94; // x10
  __int64 v95; // x0
  __int64 v96; // x0
  __int64 v97; // x1
  int32_t v98; // w22
  _BOOL8 v99; // x0
  __int64 v100; // x1
  struct System_Int32_array *v101; // x8
  _QWORD *v102; // x9
  __int64 v103; // x10
  __int64 v104; // x8
  __int64 v105; // x9
  int *v106; // x10
  __int64 v107; // x0
  __int64 v110; // [xsp+28h] [xbp-78h]
  __int64 v111; // [xsp+28h] [xbp-78h]
  System_Int32_array *fieldMotionIds; // [xsp+30h] [xbp-70h] BYREF
  __int64 v113; // [xsp+38h] [xbp-68h]

  if ( (byte_593B39F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Array_Empty_int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Reverse_BattleDeckServantData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Reverse_int___);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_int__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_int__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor___91427360);
    this = (BattleRootComponent_o *)sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    byte_593B39F = 1;
  }
  fieldMotionIds = 0;
  v113 = 0;
  if ( !battleEnt )
    goto LABEL_146;
  this = (BattleRootComponent_o *)battleEnt->fields.battleInfo;
  if ( !this )
    goto LABEL_146;
  BaseBattleFieldMotionIds = BattleInfoData__GetBaseBattleFieldMotionIds((BattleInfoData_o *)this, questPhaseEnt, 0);
  *baseMotionIds = BaseBattleFieldMotionIds;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)baseMotionIds,
    (int32_t)BaseBattleFieldMotionIds,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v15 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Reverse_int_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)*baseMotionIds,
                                                         (const MethodInfo_385687C *)Method_System_Linq_Enumerable_Reverse_int___);
  v16 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_71510500(
    v16,
    v15,
    (const MethodInfo_44329E4 *)Method_System_Collections_Generic_List_int___ctor___91427360);
  this = (BattleRootComponent_o *)battleEnt->fields.battleInfo;
  if ( !this )
    goto LABEL_146;
  AllExistsScriptEnemyDeckSvtArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleInfoData__get_AllExistsScriptEnemyDeckSvtArray(
                                                                                            (BattleInfoData_o *)this,
                                                                                            0);
  this = (BattleRootComponent_o *)System_Linq_Enumerable__Reverse_object_(
                                    AllExistsScriptEnemyDeckSvtArray,
                                    (const MethodInfo_38568D4 *)Method_System_Linq_Enumerable_Reverse_BattleDeckServantData___);
  if ( !this )
    goto LABEL_146;
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
    v22 = sub_2237E2C(this, System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, 0);
  }
  AddFieldMotionIds = (*(__int64 (__fastcall **)(BattleRootComponent_o *, _QWORD))v22)(v19, *(_QWORD *)(v22 + 8));
  v113 = AddFieldMotionIds;
  if ( !AddFieldMotionIds )
LABEL_142:
    sub_21FFECC(AddFieldMotionIds, v24);
  v25 = AddFieldMotionIds;
  while ( 1 )
  {
    v26 = *(_QWORD *)v25;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v28 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_19;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_19:
      v29 = sub_2237E2C(v25, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8));
    if ( (v30 & 1) == 0 )
      break;
    v31 = v113;
    if ( !v113 )
      sub_21FFECC(v30, battleEnt);
    v32 = *(_QWORD *)v113;
    v33 = *(unsigned __int16 *)(*(_QWORD *)v113 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v113 + 302LL) )
    {
      v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleDeckServantData__c **)v34 - 1) != System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_27;
      }
      v35 = v32 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_27:
      v35 = sub_2237E2C(v113, System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo, 0);
    }
    v36 = (BattleDeckServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v31, *(_QWORD *)(v35 + 8));
    if ( !v36 )
      sub_21FFECC(0, v37);
    AddFieldMotionIds = BattleDeckServantData__TryGetAddFieldMotionIds(v36, &fieldMotionIds, 0);
    if ( (AddFieldMotionIds & 1) != 0 )
    {
      v38 = System_Linq_Enumerable__Reverse_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)fieldMotionIds,
              (const MethodInfo_385687C *)Method_System_Linq_Enumerable_Reverse_int___);
      v40 = v38;
      if ( !v38 )
        sub_21FFECC(0, v39);
      v41 = v38->klass;
      v42 = *(unsigned __int16 *)&v38->klass->_2.rank;
      if ( *(_WORD *)&v38->klass->_2.rank )
      {
        v43 = &v41->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_int__c **)v43 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
        {
          --v42;
          v43 += 4;
          if ( !v42 )
            goto LABEL_36;
        }
        v44 = (__int64)&v41->vtable[*v43];
      }
      else
      {
LABEL_36:
        v44 = sub_2237E2C(v38, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
      }
      v45 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v44)(
              v40,
              *(_QWORD *)(v44 + 8));
      v47 = v45;
      v110 = v45;
      if ( !v45 )
        sub_21FFECC(v45, v46);
      while ( 1 )
      {
        v48 = *(_QWORD *)v47;
        v49 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
        {
          v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v50 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v49;
            v50 += 4;
            if ( !v49 )
              goto LABEL_43;
          }
          v51 = v48 + 16LL * *v50 + 312;
        }
        else
        {
LABEL_43:
          v51 = sub_2237E2C(v47, System_Collections_IEnumerator_TypeInfo, 0);
        }
        AddFieldMotionIds = (*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v47, *(_QWORD *)(v51 + 8));
        if ( (AddFieldMotionIds & 1) == 0 )
          break;
        if ( !v110 )
          sub_21FFECC(AddFieldMotionIds, v24);
        v52 = *(_QWORD *)v110;
        v53 = *(unsigned __int16 *)(*(_QWORD *)v110 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v110 + 302LL) )
        {
          v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_int__c **)v54 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
          {
            --v53;
            v54 += 4;
            if ( !v53 )
              goto LABEL_51;
          }
          v55 = v52 + 16LL * *v54 + 312;
        }
        else
        {
LABEL_51:
          v55 = sub_2237E2C(v110, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
        }
        v56 = (*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v110, *(_QWORD *)(v55 + 8));
        if ( !v16 )
          sub_21FFECC(v56, v57);
        v58 = v56;
        v59 = System_Collections_Generic_List_int___Contains(
                v16,
                v56,
                (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !v59 )
        {
          items = v16->fields._items;
          v62 = Method_System_Collections_Generic_List_int__Add__;
          ++v16->fields._version;
          if ( !items )
            sub_21FFECC(v59, v60);
          size = v16->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v16,
              v58,
              *(const MethodInfo_4433138 **)(*(_QWORD *)(v62[4] + 192LL) + 112LL));
          }
          else
          {
            v16->fields._size = size + 1;
            items->m_Items[size] = v58;
          }
        }
        v47 = v110;
      }
      if ( v110 )
      {
        v64 = *(_QWORD *)v110;
        v65 = *(unsigned __int16 *)(*(_QWORD *)v110 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v110 + 302LL) )
        {
          v66 = (int *)(*(_QWORD *)(v64 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v66 - 1) != System_IDisposable_TypeInfo )
          {
            --v65;
            v66 += 4;
            if ( !v65 )
              goto LABEL_66;
          }
          v67 = v64 + 16LL * *v66 + 312;
        }
        else
        {
LABEL_66:
          v67 = sub_2237E2C(v110, System_IDisposable_TypeInfo, 0);
        }
        AddFieldMotionIds = (*(__int64 (__fastcall **)(__int64, _QWORD))v67)(v110, *(_QWORD *)(v67 + 8));
      }
    }
    v25 = v113;
    if ( !v113 )
      goto LABEL_142;
  }
  v68 = v113;
  if ( v113 )
  {
    v69 = *(_QWORD *)v113;
    v70 = *(unsigned __int16 *)(*(_QWORD *)v113 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v113 + 302LL) )
    {
      v71 = (int *)(*(_QWORD *)(v69 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v71 - 1) != System_IDisposable_TypeInfo )
      {
        --v70;
        v71 += 4;
        if ( !v70 )
          goto LABEL_79;
      }
      v72 = v69 + 16LL * *v71 + 312;
    }
    else
    {
LABEL_79:
      v72 = sub_2237E2C(v113, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v72)(v68, *(_QWORD *)(v72 + 8));
  }
  this = (BattleRootComponent_o *)battleEnt->fields.battleInfo;
  if ( !this )
LABEL_146:
    sub_21FFECC(this, battleEnt);
  this = (BattleRootComponent_o *)BattleInfoData__getLastWave((BattleInfoData_o *)this, 0);
  if ( ((unsigned int)this & 0x80000000) == 0 )
  {
    v73 = (int)this;
    do
    {
      StageEntityAtWave = BattleEntity__GetStageEntityAtWave(battleEnt, v73, 0);
      if ( !StageEntityAtWave
        || (WaveFieldMotionIds = (System_Collections_Generic_IEnumerable_TSource__o *)StageEntity__GetWaveFieldMotionIds(
                                                                                        StageEntityAtWave,
                                                                                        0,
                                                                                        0)) == 0
        || (v77 = System_Linq_Enumerable__Reverse_int_(
                    WaveFieldMotionIds,
                    (const MethodInfo_385687C *)Method_System_Linq_Enumerable_Reverse_int___)) == 0 )
      {
        v78 = Method_System_Array_Empty_int___;
        v79 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
        if ( !v79 )
        {
          sub_2237B54(Method_System_Array_Empty_int___);
          v79 = v78[7];
        }
        v80 = *(_QWORD *)(v79 + 16);
        if ( (*(_WORD *)(v80 + 309) & 1) == 0 )
          v80 = sub_2237AF8(v75);
        if ( !*(_DWORD *)(v80 + 228) )
          *(__n128 *)&v75 = j_il2cpp_runtime_class_init_0(v80, battleEnt);
        this = *(BattleRootComponent_o **)(v78[7] + 16LL);
        if ( (*(_WORD *)((_BYTE *)&this[2].fields.manualHeight + 1) & 1) == 0 )
          this = (BattleRootComponent_o *)sub_2237AF8(v75);
        v77 = **(System_Collections_Generic_IEnumerable_TSource__o ***)&this[1].fields.kind;
        if ( !v77 )
          goto LABEL_146;
      }
      v81 = v77->klass;
      v82 = *(unsigned __int16 *)&v77->klass->_2.rank;
      if ( *(_WORD *)&v77->klass->_2.rank )
      {
        v83 = &v81->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_int__c **)v83 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
        {
          --v82;
          v83 += 4;
          if ( !v82 )
            goto LABEL_101;
        }
        v84 = (__int64)&v81->vtable[*v83];
      }
      else
      {
LABEL_101:
        v84 = sub_2237E2C(v77, System_Collections_Generic_IEnumerable_int__TypeInfo, 0);
      }
      v85 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v84)(
              v77,
              *(_QWORD *)(v84 + 8));
      v87 = v85;
      v111 = v85;
      if ( !v85 )
        sub_21FFECC(v85, v86);
      while ( 1 )
      {
        v88 = *(_QWORD *)v87;
        v89 = *(unsigned __int16 *)(*(_QWORD *)v87 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v87 + 302LL) )
        {
          v90 = (int *)(*(_QWORD *)(v88 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v90 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v89;
            v90 += 4;
            if ( !v89 )
              goto LABEL_108;
          }
          v91 = v88 + 16LL * *v90 + 312;
        }
        else
        {
LABEL_108:
          v91 = sub_2237E2C(v87, System_Collections_IEnumerator_TypeInfo, 0);
        }
        this = (BattleRootComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v91)(v87, *(_QWORD *)(v91 + 8));
        if ( ((unsigned __int8)this & 1) == 0 )
          break;
        if ( !v111 )
          sub_21FFECC(this, battleEnt);
        v92 = *(_QWORD *)v111;
        v93 = *(unsigned __int16 *)(*(_QWORD *)v111 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v111 + 302LL) )
        {
          v94 = (int *)(*(_QWORD *)(v92 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_int__c **)v94 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
          {
            --v93;
            v94 += 4;
            if ( !v93 )
              goto LABEL_116;
          }
          v95 = v92 + 16LL * *v94 + 312;
        }
        else
        {
LABEL_116:
          v95 = sub_2237E2C(v111, System_Collections_Generic_IEnumerator_int__TypeInfo, 0);
        }
        v96 = (*(__int64 (__fastcall **)(__int64, _QWORD))v95)(v111, *(_QWORD *)(v95 + 8));
        if ( !v16 )
          sub_21FFECC(v96, v97);
        v98 = v96;
        v99 = System_Collections_Generic_List_int___Contains(
                v16,
                v96,
                (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !v99 )
        {
          v101 = v16->fields._items;
          v102 = Method_System_Collections_Generic_List_int__Add__;
          ++v16->fields._version;
          if ( !v101 )
            sub_21FFECC(v99, v100);
          v103 = v16->fields._size;
          if ( (unsigned int)v103 >= LODWORD(v101->max_length) )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v16,
              v98,
              *(const MethodInfo_4433138 **)(*(_QWORD *)(v102[4] + 192LL) + 112LL));
          }
          else
          {
            v16->fields._size = v103 + 1;
            v101->m_Items[v103] = v98;
          }
        }
        v87 = v111;
      }
      if ( v111 )
      {
        v104 = *(_QWORD *)v111;
        v105 = *(unsigned __int16 *)(*(_QWORD *)v111 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v111 + 302LL) )
        {
          v106 = (int *)(*(_QWORD *)(v104 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v106 - 1) != System_IDisposable_TypeInfo )
          {
            --v105;
            v106 += 4;
            if ( !v105 )
              goto LABEL_131;
          }
          v107 = v104 + 16LL * *v106 + 312;
        }
        else
        {
LABEL_131:
          v107 = sub_2237E2C(v111, System_IDisposable_TypeInfo, 0);
        }
        this = (BattleRootComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v107)(v111, *(_QWORD *)(v107 + 8));
      }
    }
    while ( v73-- > 0 );
  }
  if ( !v16 )
    goto LABEL_146;
  return System_Collections_Generic_List_int___ToArray(
           v16,
           (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *BattleRootComponent__GetClassBoardCommandSpellEffectId(
        BattleRootComponent_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v2; // x19
  __int64 v3; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *Master_object; // x0
  __int64 v5; // x1
  Il2CppObject *SingleEntity; // x0
  __int64 v7; // x1
  BalanceConfig_c *v8; // x8
  BattleEntity_o *v9; // x20
  int32_t ClassBoardReleaseQuestId; // w21
  bool IsQuestClear_47254560; // w0
  __int64 v12; // x1
  struct BattleInfoData_o *battleInfo; // x8
  struct DeckData_o *transformDeck; // x8
  ClassBoardCommandSpellMaster_o *v15; // x21
  const MethodInfo *v16; // x4
  struct BattleInfoData_o *v17; // x8
  struct DeckData_o *myDeck; // x8
  struct BattleDeckServantData_array *svts; // x26
  il2cpp_array_size_t max_length; // x8
  char v21; // w23
  System_Collections_Generic_HashSet_int__o *v22; // x22
  unsigned __int64 v23; // x27
  BattleDeckServantData_o *v24; // x25
  struct BattleInfoData_o *v25; // x8
  struct DeckData_o *v26; // x8
  struct BattleDeckServantData_array *v27; // x23
  il2cpp_array_size_t v28; // x8
  unsigned __int64 v29; // x24
  BattleDeckServantData_o *v30; // x28
  const MethodInfo *v31; // x4

  if ( (byte_593B3AA & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&CondType_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_BattleMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_21FFC50(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_593B3AA = 1;
  }
  v2 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v2,
    (const MethodInfo_4280264 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v3);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_object )
    goto LABEL_48;
  SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                   Master_object,
                   (const MethodInfo_3EDFA94 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
  v8 = BalanceConfig_TypeInfo;
  v9 = (BattleEntity_o *)SingleEntity;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v7);
    v8 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v8->static_fields->ClassBoardReleaseQuestId;
  if ( !*(&CondType_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo, v7);
  IsQuestClear_47254560 = CondType__IsQuestClear_47254560(ClassBoardReleaseQuestId, -1, 0, 0);
  if ( !v9 || !IsQuestClear_47254560 )
    return System_Linq_Enumerable__ToArray_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v2,
             (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v12);
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  battleInfo = v9->fields.battleInfo;
  if ( !battleInfo )
    goto LABEL_48;
  transformDeck = battleInfo->fields.transformDeck;
  if ( !transformDeck )
    goto LABEL_48;
  v15 = (ClassBoardCommandSpellMaster_o *)Master_object;
  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BasicHelper__IsNullOrEmpty(
                                                                  (System_Collections_ICollection_o *)transformDeck->fields.svts,
                                                                  0);
  v17 = v9->fields.battleInfo;
  if ( !v17 )
    goto LABEL_48;
  myDeck = v17->fields.myDeck;
  if ( !myDeck )
    goto LABEL_48;
  svts = myDeck->fields.svts;
  if ( !svts )
    goto LABEL_48;
  max_length = svts->max_length;
  v21 = (char)Master_object;
  if ( (int)max_length < 1 )
  {
    v22 = 0;
    if ( ((unsigned __int8)Master_object & 1) != 0 )
      return System_Linq_Enumerable__ToArray_int_(
               (System_Collections_Generic_IEnumerable_TSource__o *)v2,
               (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
LABEL_35:
    v25 = v9->fields.battleInfo;
    if ( v25 )
    {
      v26 = v25->fields.transformDeck;
      if ( v26 )
      {
        v27 = v26->fields.svts;
        if ( v27 )
        {
          v28 = v27->max_length;
          if ( (int)v28 >= 1 )
          {
            v29 = 0;
            while ( v29 < (unsigned int)v28 )
            {
              v30 = v27->m_Items[v29];
              if ( v30 )
              {
                if ( v22 )
                {
                  Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_HashSet_int___Contains(
                                                                                  v22,
                                                                                  *(&v30->fields.equipTarget2SkillChange
                                                                                  + 1),
                                                                                  (const MethodInfo_4280968 *)Method_System_Collections_Generic_HashSet_int__Contains__);
                  if ( ((unsigned __int8)Master_object & 1) != 0 )
                  {
                    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess(
                                                                                    (BattleRootComponent_o *)Master_object,
                                                                                    v9,
                                                                                    v15,
                                                                                    v30->fields.userSvtId,
                                                                                    v31);
                    if ( !v2 )
                      goto LABEL_48;
                    System_Collections_Generic_HashSet_int___UnionWith(
                      v2,
                      (System_Collections_Generic_IEnumerable_T__o *)Master_object,
                      (const MethodInfo_42814B4 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
                  }
                }
              }
              LODWORD(v28) = v27->max_length;
              if ( (__int64)++v29 >= (int)v28 )
                return System_Linq_Enumerable__ToArray_int_(
                         (System_Collections_Generic_IEnumerable_TSource__o *)v2,
                         (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
            }
LABEL_49:
            sub_21FFED4(Master_object);
          }
          return System_Linq_Enumerable__ToArray_int_(
                   (System_Collections_Generic_IEnumerable_TSource__o *)v2,
                   (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
        }
      }
    }
LABEL_48:
    sub_21FFECC(Master_object, v5);
  }
  v22 = 0;
  v23 = 0;
  do
  {
    if ( v23 >= (unsigned int)max_length )
      goto LABEL_49;
    v24 = svts->m_Items[v23];
    if ( (v21 & 1) != 0 )
    {
      if ( !v24 )
        goto LABEL_48;
    }
    else
    {
      if ( !v22 )
      {
        v22 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
        System_Collections_Generic_HashSet_int____ctor(
          v22,
          (const MethodInfo_4280264 *)Method_System_Collections_Generic_HashSet_int___ctor__);
      }
      if ( !v24 || !v22 )
        goto LABEL_48;
      Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)System_Collections_Generic_HashSet_int___Add(
                                                                      v22,
                                                                      *(&v24->fields.equipTarget2SkillChange + 1),
                                                                      (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
    }
    Master_object = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess(
                                                                    (BattleRootComponent_o *)Master_object,
                                                                    v9,
                                                                    v15,
                                                                    v24->fields.userSvtId,
                                                                    v16);
    if ( !v2 )
      goto LABEL_48;
    System_Collections_Generic_HashSet_int___UnionWith(
      v2,
      (System_Collections_Generic_IEnumerable_T__o *)Master_object,
      (const MethodInfo_42814B4 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
    LODWORD(max_length) = svts->max_length;
    ++v23;
  }
  while ( (__int64)v23 < (int)max_length );
  if ( (v21 & 1) == 0 )
    goto LABEL_35;
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v2,
           (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_Collections_Generic_IEnumerable_int__o *BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess(
        BattleRootComponent_o *this,
        BattleEntity_o *battleEntity,
        ClassBoardCommandSpellMaster_o *classBoardCSMaster,
        int64_t userSvtId,
        const MethodInfo *method)
{
  __int64 v8; // x22
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Collections_Generic_IEnumerable_int__o *result; // x0

  if ( (byte_593B3AB & 1) == 0 )
  {
    sub_21FFC50(&BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_TypeInfo);
    byte_593B3AB = 1;
  }
  v8 = sub_21FFEBC(BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0);
  *(_DWORD *)(v8 + 16) = -2;
  *(_DWORD *)(v8 + 24) = System_Environment__get_CurrentManagedThreadId(0);
  *(_QWORD *)(v8 + 40) = battleEntity;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v8 + 40), (int32_t)battleEntity, v9, v10, v11, v12, v13, v14);
  *(_QWORD *)(v8 + 72) = classBoardCSMaster;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v8 + 72), (int32_t)classBoardCSMaster, v15, v16, v17, v18, v19, v20);
  result = (System_Collections_Generic_IEnumerable_int__o *)v8;
  *(_QWORD *)(v8 + 56) = userSvtId;
  return result;
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
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
  unsigned __int64 v27; // x20
  unsigned __int64 v28; // x9
  __int64 v29; // x9
  __int64 v30; // x28
  int v31; // w9
  __int64 v32; // x25
  BattleData_o *v33; // x0
  DropInfo_o *v34; // x24
  __int64 eventId; // x0
  __int64 v36; // x1
  struct System_Int32_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  struct BattleInfoData_o *v40; // x8
  struct BattleInfoData_StageCutinInfo_array *stageCutins; // x20
  unsigned __int64 max_length_low; // x8
  unsigned __int64 v43; // x28
  BattleInfoData_StageCutinInfo_o *v44; // x8
  struct DropInfo_array *dropInfos; // x25
  int max_length; // w8
  unsigned int v47; // w26
  DropInfo_o *v48; // x24
  struct System_Int32_array *v49; // x8
  _QWORD *v50; // x9
  __int64 v51; // x10
  BattleData_c *v52; // x8
  DropAddMaster_o *v53; // x20
  __int64 v54; // x9
  int32_t *p_offset; // x10
  __int64 v56; // x0
  __int64 BattleSkillDropInfoDict; // x0
  __int64 v58; // x1
  __int64 v59; // x20
  __int64 v60; // x8
  __int64 v61; // x9
  int *v62; // x10
  __int64 v63; // x0
  __int64 v64; // x0
  __int64 v65; // x1
  __int64 v66; // x20
  __int64 v67; // x8
  __int64 v68; // x9
  int *v69; // x10
  __int64 v70; // x0
  FunctionEntity_o *v71; // x0
  __int64 v72; // x1
  struct System_Int32_array *v73; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10
  __int64 v76; // x21
  __int64 v77; // x8
  __int64 v78; // x9
  int *v79; // x10
  __int64 v80; // x0
  BattleEntity_o *v82; // [xsp+0h] [xbp-B0h]
  System_Collections_Generic_List_Enumerator_object__o v83; // [xsp+8h] [xbp-A8h] BYREF
  BattleSkillDropInfo_JsonConvertData_o *data; // [xsp+20h] [xbp-90h] BYREF
  __int64 v85; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v86; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_593B3A9 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMaster_DropAddMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_EnumUtility_CastToEnum_DropInfo_DropEffectType___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_DeckData__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_DeckData__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_DeckData__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_FunctionEntity__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_FunctionEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_DeckData__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_DeckData__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Contains__);
    sub_21FFC50(&Method_System_Collections_Generic_List_DeckData__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_DeckData___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_DeckData__TypeInfo);
    byte_593B3A9 = 1;
  }
  memset(&v86, 0, sizeof(v86));
  data = 0;
  v85 = 0;
  v7 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_DeckData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_DeckData___ctor__);
  v8 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_44328A8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !battleEntity )
    return v8;
  battleInfo = battleEntity->fields.battleInfo;
  if ( !battleInfo )
    return v8;
  enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.enemyDeck;
  if ( enemyDeck )
  {
    if ( !v7 )
      goto LABEL_125;
    System_Collections_Generic_List_object___AddRange(
      v7,
      enemyDeck,
      (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_125;
  }
  enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.callDeck;
  if ( enemyDeck )
  {
    if ( !v7 )
      goto LABEL_125;
    System_Collections_Generic_List_object___AddRange(
      v7,
      enemyDeck,
      (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_125;
  }
  enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.shiftDeck;
  if ( enemyDeck )
  {
    if ( !v7 )
      goto LABEL_125;
    System_Collections_Generic_List_object___AddRange(
      v7,
      enemyDeck,
      (const MethodInfo_444FD3C *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_125;
  }
  enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.transformDeck;
  if ( enemyDeck )
  {
    if ( !v7 )
      goto LABEL_125;
    items = v7->fields._items;
    v19 = Method_System_Collections_Generic_List_DeckData__Add__;
    ++v7->fields._version;
    if ( !items )
      goto LABEL_125;
    size = v7->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v7,
        (Il2CppObject *)enemyDeck,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v21 = &items->obj.klass + size;
      v7->fields._size = size + 1;
      v21[4] = (Il2CppClass *)enemyDeck;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)enemyDeck, v10, v11, v12, v13, v14, v15);
    }
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, enemyDeck);
  v82 = battleEntity;
  Master_object = (DropAddMaster_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_DropAddMaster___);
  if ( !v7 )
    goto LABEL_125;
  v22 = Master_object;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v83,
    v7,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_DeckData__GetEnumerator__);
  v86 = v83;
  v83.fields._list = 0;
  *(_QWORD *)&v83.fields._index = &v86;
  while ( 1 )
  {
    DropEffectId = System_Collections_Generic_List_Enumerator_object___MoveNext(
                     &v86,
                     (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_DeckData__MoveNext__);
    if ( (DropEffectId & 1) == 0 )
      break;
    if ( !v86.fields._current )
      sub_21FFECC(DropEffectId, effectType);
    klass = v86.fields._current[1].klass;
    if ( klass )
    {
      namespaze = klass->_1.namespaze;
      if ( (int)namespaze >= 1 )
      {
        v27 = 0;
        v28 = (unsigned int)klass->_1.namespaze;
        do
        {
          if ( v27 >= v28 )
            sub_21FFED4(DropEffectId);
          v29 = *((_QWORD *)&klass->_1.byval_arg.data + v27);
          if ( !v29 )
            sub_21FFECC(DropEffectId, effectType);
          v30 = *(_QWORD *)(v29 + 104);
          if ( v30 )
          {
            v31 = *(_DWORD *)(v30 + 24);
            if ( v31 >= 1 )
            {
              v32 = 0;
              do
              {
                if ( (unsigned int)v32 >= v31 )
                  sub_21FFED4(DropEffectId);
                v33 = this->fields.data;
                if ( !v33 )
                  sub_21FFECC(0, effectType);
                v34 = *(DropInfo_o **)(v30 + 32 + 8 * v32);
                eventId = BattleData__get_eventId(v33, 0);
                if ( !v34 )
                  sub_21FFECC(eventId, v36);
                DropEffectId = DropInfo__GetDropEffectId(v34, v22, eventId, 0);
                if ( (int)DropEffectId >= 1 )
                {
                  if ( !dropEffectIdHash )
                    sub_21FFECC(DropEffectId, (unsigned int)DropEffectId);
                  DropEffectId = System_Collections_Generic_HashSet_int___Add(
                                   dropEffectIdHash,
                                   DropEffectId,
                                   (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
                }
                effectType = (unsigned int)v34->fields.effectType;
                if ( (_DWORD)effectType )
                {
                  if ( !v8 )
                    sub_21FFECC(DropEffectId, effectType);
                  DropEffectId = System_Collections_Generic_List_int___Contains(
                                   v8,
                                   effectType,
                                   (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
                  if ( (DropEffectId & 1) == 0 )
                  {
                    v37 = v8->fields._items;
                    effectType = (unsigned int)v34->fields.effectType;
                    v38 = Method_System_Collections_Generic_List_int__Add__;
                    ++v8->fields._version;
                    if ( !v37 )
                      sub_21FFECC(DropEffectId, effectType);
                    v39 = v8->fields._size;
                    if ( (unsigned int)v39 >= LODWORD(v37->max_length) )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        v8,
                        effectType,
                        *(const MethodInfo_4433138 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v8->fields._size = v39 + 1;
                      v37->m_Items[v39] = effectType;
                    }
                  }
                }
                v31 = *(_DWORD *)(v30 + 24);
                ++v32;
              }
              while ( (int)v32 < v31 );
              namespaze = klass->_1.namespaze;
            }
          }
          ++v27;
          v28 = (unsigned int)namespaze;
        }
        while ( (int)v27 < (int)namespaze );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v86,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_DeckData__Dispose__);
  v40 = battleEntity->fields.battleInfo;
  if ( !v40 )
    goto LABEL_125;
  stageCutins = v40->fields.stageCutins;
  if ( stageCutins )
  {
    max_length_low = LODWORD(stageCutins->max_length);
    if ( (int)max_length_low >= 1 )
    {
      v43 = 0;
      while ( 1 )
      {
        if ( v43 >= max_length_low )
          goto LABEL_128;
        v44 = stageCutins->m_Items[v43];
        if ( !v44 )
          goto LABEL_125;
        dropInfos = v44->fields.dropInfos;
        if ( !dropInfos )
          goto LABEL_125;
        max_length = dropInfos->max_length;
        if ( max_length >= 1 )
          break;
LABEL_74:
        max_length_low = LODWORD(stageCutins->max_length);
        if ( (int)++v43 >= (int)max_length_low )
          goto LABEL_75;
      }
      v47 = 0;
      while ( v47 < max_length )
      {
        Master_object = (DropAddMaster_o *)this->fields.data;
        if ( !Master_object )
          goto LABEL_125;
        v48 = dropInfos->m_Items[v47];
        Master_object = (DropAddMaster_o *)BattleData__get_eventId((BattleData_o *)Master_object, 0);
        if ( !v48 )
          goto LABEL_125;
        Master_object = (DropAddMaster_o *)DropInfo__GetDropEffectId(v48, v22, (int32_t)Master_object, 0);
        if ( (int)Master_object >= 1 )
        {
          if ( !dropEffectIdHash )
            goto LABEL_125;
          Master_object = (DropAddMaster_o *)System_Collections_Generic_HashSet_int___Add(
                                               dropEffectIdHash,
                                               (int32_t)Master_object,
                                               (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
        }
        enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)(unsigned int)v48->fields.effectType;
        if ( (_DWORD)enemyDeck )
        {
          if ( !v8 )
            goto LABEL_125;
          Master_object = (DropAddMaster_o *)System_Collections_Generic_List_int___Contains(
                                               v8,
                                               (int32_t)enemyDeck,
                                               (const MethodInfo_44334B8 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)Master_object & 1) == 0 )
          {
            v49 = v8->fields._items;
            enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)(unsigned int)v48->fields.effectType;
            v50 = Method_System_Collections_Generic_List_int__Add__;
            ++v8->fields._version;
            if ( !v49 )
              goto LABEL_125;
            v51 = v8->fields._size;
            if ( (unsigned int)v51 >= LODWORD(v49->max_length) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v8,
                (int32_t)enemyDeck,
                *(const MethodInfo_4433138 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
            }
            else
            {
              v8->fields._size = v51 + 1;
              v49->m_Items[v51] = (int)enemyDeck;
            }
          }
        }
        max_length = dropInfos->max_length;
        if ( (int)++v47 >= max_length )
          goto LABEL_74;
      }
LABEL_128:
      sub_21FFED4(Master_object);
    }
  }
LABEL_75:
  Master_object = (DropAddMaster_o *)BattleEntity__GetQuestPhaseEntity(v82, 0);
  if ( !Master_object
    || (Master_object = (DropAddMaster_o *)QuestPhaseEntity__GetBattleSkillDropFunctionEntities(
                                             (QuestPhaseEntity_o *)Master_object,
                                             0)) == 0 )
  {
LABEL_125:
    sub_21FFECC(Master_object, enemyDeck);
  }
  v52 = (BattleData_c *)Master_object->klass;
  v53 = Master_object;
  v54 = *(unsigned __int16 *)&Master_object->klass->_2.rank;
  if ( *(_WORD *)&Master_object->klass->_2.rank )
  {
    p_offset = &v52->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_FunctionEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_FunctionEntity__TypeInfo )
    {
      --v54;
      p_offset += 4;
      if ( !v54 )
        goto LABEL_81;
    }
    v56 = (__int64)&v52->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_81:
    v56 = sub_2237E2C(Master_object, System_Collections_Generic_IEnumerable_FunctionEntity__TypeInfo, 0);
  }
  BattleSkillDropInfoDict = (*(__int64 (__fastcall **)(DropAddMaster_o *, _QWORD))v56)(v53, *(_QWORD *)(v56 + 8));
  v85 = BattleSkillDropInfoDict;
  v83.fields._list = 0;
  *(_QWORD *)&v83.fields._index = &v85;
  if ( !BattleSkillDropInfoDict )
LABEL_109:
    sub_21FFECC(BattleSkillDropInfoDict, v58);
  v59 = BattleSkillDropInfoDict;
  while ( 1 )
  {
    v60 = *(_QWORD *)v59;
    v61 = *(unsigned __int16 *)(*(_QWORD *)v59 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v59 + 302LL) )
    {
      v62 = (int *)(*(_QWORD *)(v60 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v62 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v61;
        v62 += 4;
        if ( !v61 )
          goto LABEL_89;
      }
      v63 = v60 + 16LL * *v62 + 312;
    }
    else
    {
LABEL_89:
      v63 = sub_2237E2C(v59, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v64 = (*(__int64 (__fastcall **)(__int64, _QWORD))v63)(v59, *(_QWORD *)(v63 + 8));
    if ( (v64 & 1) == 0 )
      break;
    v66 = v85;
    if ( !v85 )
      sub_21FFECC(v64, v65);
    v67 = *(_QWORD *)v85;
    v68 = *(unsigned __int16 *)(*(_QWORD *)v85 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v85 + 302LL) )
    {
      v69 = (int *)(*(_QWORD *)(v67 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_FunctionEntity__c **)v69 - 1) != System_Collections_Generic_IEnumerator_FunctionEntity__TypeInfo )
      {
        --v68;
        v69 += 4;
        if ( !v68 )
          goto LABEL_97;
      }
      v70 = v67 + 16LL * *v69 + 312;
    }
    else
    {
LABEL_97:
      v70 = sub_2237E2C(v85, System_Collections_Generic_IEnumerator_FunctionEntity__TypeInfo, 0);
    }
    v71 = (FunctionEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v70)(v66, *(_QWORD *)(v70 + 8));
    if ( !v71 )
      sub_21FFECC(0, v72);
    BattleSkillDropInfoDict = FunctionEntity__TryGetBattleSkillDropInfoDict(v71, &data, 0);
    if ( (BattleSkillDropInfoDict & 1) != 0 )
    {
      if ( !data )
        sub_21FFECC(BattleSkillDropInfoDict, v58);
      BattleSkillDropInfoDict = EnumUtility__CastToEnum_Int32Enum_(
                                  data->fields.dropEffectType,
                                  0,
                                  (const MethodInfo_382E5C0 *)Method_EnumUtility_CastToEnum_DropInfo_DropEffectType___);
      v58 = (unsigned int)BattleSkillDropInfoDict;
      if ( (_DWORD)BattleSkillDropInfoDict )
      {
        if ( !v8
          || (v73 = v8->fields._items,
              v74 = Method_System_Collections_Generic_List_int__Add__,
              ++v8->fields._version,
              !v73) )
        {
          sub_21FFECC(BattleSkillDropInfoDict, (unsigned int)BattleSkillDropInfoDict);
        }
        v75 = v8->fields._size;
        if ( (unsigned int)v75 >= LODWORD(v73->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v8,
            BattleSkillDropInfoDict,
            *(const MethodInfo_4433138 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
        }
        else
        {
          v8->fields._size = v75 + 1;
          v73->m_Items[v75] = BattleSkillDropInfoDict;
        }
      }
    }
    v59 = v85;
    if ( !v85 )
      goto LABEL_109;
  }
  v76 = v85;
  if ( v85 )
  {
    v77 = *(_QWORD *)v85;
    v78 = *(unsigned __int16 *)(*(_QWORD *)v85 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v85 + 302LL) )
    {
      v79 = (int *)(*(_QWORD *)(v77 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v79 - 1) != System_IDisposable_TypeInfo )
      {
        --v78;
        v79 += 4;
        if ( !v78 )
          goto LABEL_115;
      }
      v80 = v77 + 16LL * *v79 + 312;
    }
    else
    {
LABEL_115:
      v80 = sub_2237E2C(v85, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v80)(v76, *(_QWORD *)(v80 + 8));
  }
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7

  if ( (byte_593B3A0 & 1) == 0 )
  {
    sub_21FFC50(&BattleRootComponent__LoadAsset_d__13_TypeInfo);
    byte_593B3A0 = 1;
  }
  v9 = sub_21FFEBC(BattleRootComponent__LoadAsset_d__13_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 40) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 40), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v9 + 48) = ent;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 48), (int32_t)ent, v16, v17, v18, v19, v20, v21);
  *(_DWORD *)(v9 + 56) = eventId;
  *(_QWORD *)(v9 + 64) = battleEnt;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 64), (int32_t)battleEnt, v22, v23, v24, v25, v26, v27);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7

  if ( (byte_593B3A1 & 1) == 0 )
  {
    sub_21FFC50(&BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_TypeInfo);
    byte_593B3A1 = 1;
  }
  v9 = sub_21FFEBC(BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 40) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 40), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v9 + 32) = ent;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)ent, v16, v17, v18, v19, v20, v21);
  *(_DWORD *)(v9 + 56) = eventId;
  *(_QWORD *)(v9 + 64) = finishCallback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v9 + 64), (int32_t)finishCallback, v22, v23, v24, v25, v26, v27);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x21
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  int size; // w8
  Il2CppObject *Item; // x19
  System_Action_o *v31; // x21
  __int64 v32; // x1

  if ( (byte_593B3A2 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_21FFC50(&SoundManager_TypeInfo);
    sub_21FFC50(&Method_BattleRootComponent___c__DisplayClass17_0__LoadBatteBgm_b__0__);
    sub_21FFC50(&BattleRootComponent___c__DisplayClass17_0_TypeInfo);
    byte_593B3A2 = 1;
  }
  v7 = sub_21FFEBC(BattleRootComponent___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_11;
  *(_QWORD *)(v7 + 16) = bgmList;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)bgmList, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)this, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 32) = callback;
  v22 = v7 + 32;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)callback, v23, v24, v25, v26, v27, v28);
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
    sub_21FFECC(v8, v9);
  }
  Item = System_Collections_Generic_List_object___get_Item(
           v8,
           size - 1,
           (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_string__get_Item__);
  v31 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(
    v31,
    (Il2CppObject *)v7,
    Method_BattleRootComponent___c__DisplayClass17_0__LoadBatteBgm_b__0__,
    0);
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v32);
  SoundManager__downloadAudioAssetStorage((System_String_o *)Item, v31, 1, 0);
}


void BattleRootComponent__SetupObjectsExtractedFromLoadedAssets(BattleRootComponent_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0

  perf = this->fields.perf;
  if ( !perf || (BattlePerformance__SetDownloadEventSprite(perf, 0), (perf = this->fields.perf) == 0) )
    sub_21FFECC(perf, method);
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
  __int64 v4; // x1
  TerminalPramsManager_c *v5; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  const MethodInfo_476E8C0 *v7; // x0
  Il2CppObject *Instance; // x0
  __int64 v9; // x1

  if ( (byte_593B3A7 & 1) == 0 )
  {
    sub_21FFC50(&ScriptManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593B3A7 = 1;
  }
  if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, info);
  ScriptManager__DeleteTalkResumeInfo(0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4);
  if ( !byte_5932ADC )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932ADC = 1;
  }
  v5 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v4);
    v5 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v5->static_fields;
  v7 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
  static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance(v7);
  if ( !Instance )
    sub_21FFECC(0, v9);
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
  BattleRootComponent_o *v12; // x19
  ScriptManager_c *v13; // x0
  int v14; // w9
  __int64 v15; // x1
  TerminalPramsManager_c *v16; // x0
  struct TerminalPramsManager_StaticFields *static_fields; // x8
  const MethodInfo_476E8C0 *v18; // x0

  v2 = this;
  if ( (byte_593B3AC & 1) == 0 )
  {
    sub_21FFC50(&BattleSetupInfo_TypeInfo);
    sub_21FFC50(&ScriptManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    this = (BattleRootComponent_o *)sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_593B3AC = 1;
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
  v10 = (BattleSetupInfo_o *)sub_21FFEBC(BattleSetupInfo_TypeInfo);
  BattleSetupInfo___ctor(v10, 0);
  if ( !v10 )
    goto LABEL_20;
  this = (BattleRootComponent_o *)BattleSetupInfo__ConvertBattleSetupInfo(v10, v7, id, questPhase, 0, 0, 0, 0);
  v11 = v2->fields.data;
  if ( !v11 )
    goto LABEL_20;
  v12 = this;
  if ( !this )
    goto LABEL_20;
  v13 = ScriptManager_TypeInfo;
  LODWORD(v12[1].fields.debugButton) = v11->fields.selectedInterruptionWave;
  v14 = *(&v13->_2.cctor_finished + 1);
  BYTE4(v12[1].fields.debugButton) = 1;
  if ( !v14 )
    j_il2cpp_runtime_class_init_0(v13, method);
  ScriptManager__DeleteTalkResumeInfo(0);
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v15);
  if ( !byte_5932ADC )
  {
    sub_21FFC50(&TerminalPramsManager_TypeInfo);
    byte_5932ADC = 1;
  }
  v16 = TerminalPramsManager_TypeInfo;
  if ( !*(&TerminalPramsManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v15);
    v16 = TerminalPramsManager_TypeInfo;
  }
  static_fields = v16->static_fields;
  v18 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__;
  static_fields->_IsAutoResume_k__BackingField = 1;
  this = (BattleRootComponent_o *)SingletonMonoBehaviour_object___get_Instance(v18);
  if ( !this )
LABEL_20:
    sub_21FFECC(this, method);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)this, 35, 1, (Il2CppObject *)v12, 1, 0);
}


void BattleRootComponent__TransitionTerminalOrBattleScript(
        BattleRootComponent_o *this,
        BattleScriptRootComponent_TalkScriptInfo_o *info,
        const MethodInfo *method)
{
  __int64 v5; // x20
  BattleScriptRootComponent_TalkScriptInfo_o *isLose; // x0
  const MethodInfo *v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  BattleScriptRootComponent_TalkScriptInfo_o **v14; // x21
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  struct BattleData_o *data; // x8
  struct BaseBattleEvent_o *battleEvent; // x0
  const MethodInfo *v23; // x2
  struct BattleData_o *v24; // x8
  BattleScriptRootComponent_TalkScriptInfo_o *v25; // x8
  int32_t qId; // w22
  int32_t pId; // w23
  ScriptManager_c *v28; // x0
  int v29; // w8
  struct BattleData_o *v30; // x8
  int64_t overwriteEndScriptQuestId; // x22
  int32_t v32; // w23
  int32_t ScriptQuestId; // w22
  QuestEntity_o *QuestEntity; // x0
  ScriptManager_o *v35; // x23
  int32_t v36; // w24
  __int64 v37; // x1
  int32_t winResult; // w25
  __int64 v39; // x1
  ScriptManager_o *v40; // x23
  int32_t v41; // w24
  __int64 v42; // x1
  int32_t v43; // w25
  ScriptManager_c *v44; // x0
  System_String_o *textPath; // x23
  System_String_o *ScriptAssetName; // x0
  __int64 v47; // x1
  System_String_o *v48; // x22
  int32_t v49; // w19
  int32_t v50; // w21
  System_Action_object__o *v51; // x22
  __int64 v52; // x1
  __int64 v53; // x1
  Il2CppObject *Instance; // x19
  System_String_o *v55; // x21
  System_String_o *v56; // x22
  NotificationDialog_ClickDelegate_o *v57; // x23
  QuestPhaseDetailEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_593B3A8 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_string__TypeInfo);
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___);
    sub_21FFC50(&Method_DataManager_GetMasterData_QuestScriptReleaseMaster___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&MyRoomStateMaterial_TypeInfo);
    sub_21FFC50(&ScriptManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
    sub_21FFC50(&Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__0__);
    sub_21FFC50(&Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__1__);
    sub_21FFC50(&BattleRootComponent___c__DisplayClass23_0_TypeInfo);
    sub_21FFC50(&StringLiteral_2864/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_2865/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_TITLE"*/);
    byte_593B3A8 = 1;
  }
  entity = 0;
  v5 = sub_21FFEBC(BattleRootComponent___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_64;
  *(_QWORD *)(v5 + 16) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v5 + 24) = info;
  v14 = (BattleScriptRootComponent_TalkScriptInfo_o **)(v5 + 24);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)info, v15, v16, v17, v18, v19, v20);
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
    pId = v25->fields.pId;
    v28 = ScriptManager_TypeInfo;
    v29 = *(&ScriptManager_TypeInfo->_2.cctor_finished + 1);
    *(_DWORD *)(v5 + 32) = qId;
    *(_DWORD *)(v5 + 36) = pId;
    if ( !v29 )
      j_il2cpp_runtime_class_init_0(v28, v7);
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)ScriptManager__GetCachedSelectedBranchQuestId(qId, pId, 0);
    v30 = this->fields.data;
    if ( !v30 )
      goto LABEL_64;
    overwriteEndScriptQuestId = v30->fields.overwriteEndScriptQuestId;
    if ( overwriteEndScriptQuestId )
    {
      if ( !*v14 )
        goto LABEL_64;
      v32 = *(_DWORD *)(v5 + 32);
      (*v14)->fields.qId = overwriteEndScriptQuestId;
      if ( !*(&MyRoomStateMaterial_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(MyRoomStateMaterial_TypeInfo, v7);
      MyRoomStateMaterial__SetPlayedBranchQuestData(v32, overwriteEndScriptQuestId, 0);
    }
    else
    {
      LODWORD(overwriteEndScriptQuestId) = (_DWORD)isLose;
    }
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !isLose
      || (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_object_(
                                                                   (DataManager_o *)isLose,
                                                                   (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestScriptReleaseMaster___)) == 0
      || (ScriptQuestId = QuestScriptReleaseMaster__GetScriptQuestId(
                            (QuestScriptReleaseMaster_o *)isLose,
                            overwriteEndScriptQuestId,
                            *(_DWORD *)(v5 + 36),
                            2,
                            0),
          (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0)
      || (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_object_(
                                                                   (DataManager_o *)isLose,
                                                                   (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___),
          !*v14)
      || !isLose )
    {
LABEL_64:
      sub_21FFECC(isLose, v7);
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
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !isLose )
      goto LABEL_64;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)isLose,
                                                             (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !*v14 || !isLose )
      goto LABEL_64;
    QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)isLose, (*v14)->fields.qId, 0);
    if ( !QuestEntity || !QuestEntity__IsOpenByTime(QuestEntity, 0, 0) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v53);
      v55 = LocalizationManager__Get((System_String_o *)StringLiteral_2865/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_TITLE"*/, 0);
      v56 = LocalizationManager__Get((System_String_o *)StringLiteral_2864/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_MESSAGE"*/, 0);
      v57 = (NotificationDialog_ClickDelegate_o *)sub_21FFEBC(NotificationDialog_ClickDelegate_TypeInfo);
      NotificationDialog_ClickDelegate___ctor(
        v57,
        (Il2CppObject *)v5,
        Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__1__,
        0);
      if ( !Instance )
        goto LABEL_64;
      CommonUI__OpenNotificationDialog_37294692(
        (CommonUI_o *)Instance,
        v55,
        v56,
        v57,
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
      isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( !*(_QWORD *)(v5 + 24) )
        goto LABEL_64;
      v35 = (ScriptManager_o *)isLose;
      v36 = *(_DWORD *)(v5 + 36);
      winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(
                    *(BattleScriptRootComponent_TalkScriptInfo_o **)(v5 + 24),
                    0);
      if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v37);
      isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)ScriptManager__GetScriptName_BattleEnd(
                                                               ScriptQuestId,
                                                               v36,
                                                               winResult,
                                                               0);
      if ( !v35 )
        goto LABEL_64;
      if ( !ScriptManager__IsExistScriptFile(v35, (System_String_o *)isLose, 0) )
      {
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
        if ( !*(_QWORD *)(v5 + 24) )
          goto LABEL_64;
        v40 = (ScriptManager_o *)isLose;
        v41 = *(_DWORD *)(v5 + 36);
        v43 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(
                *(BattleScriptRootComponent_TalkScriptInfo_o **)(v5 + 24),
                0);
        if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v42);
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)ScriptManager__GetScriptName_BattleEnd2(
                                                                 ScriptQuestId,
                                                                 v41,
                                                                 v43,
                                                                 0);
        if ( !v40 )
          goto LABEL_64;
        if ( !ScriptManager__IsExistScriptFile(v40, (System_String_o *)isLose, 0) )
          goto LABEL_56;
      }
      v44 = ScriptManager_TypeInfo;
      if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v39);
        v44 = ScriptManager_TypeInfo;
      }
      textPath = v44->static_fields->textPath;
      ScriptAssetName = ScriptManager__GetScriptAssetName(ScriptQuestId, 0);
      v48 = System_String__Concat_75438412(textPath, ScriptAssetName, 0);
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v47);
      if ( AssetManager__isExistAssetStorage(v48, 0) )
      {
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
        v49 = *(_DWORD *)(v5 + 32);
        v50 = *(_DWORD *)(v5 + 36);
        v51 = (System_Action_object__o *)sub_21FFEBC(System_Action_string__TypeInfo);
        System_Action_object____ctor(
          v51,
          (Il2CppObject *)v5,
          Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__0__,
          0);
        if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v52);
        ScriptManager__LoadBattleEndGameDemo(v49, v50, 1, (System_Action_string__o *)v51, 0, 0);
      }
    }
  }
}


void BattleRootComponent__beginInitialize(BattleRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *Value; // x20
  __int64 v6; // x1
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x21
  __int64 v14; // x1
  void *Master_object; // x0
  __int64 v16; // x1
  Il2CppObject *SingleEntity; // x0
  BattleFBXComponent_c *v18; // x8
  BattleEntity_o *v19; // x20
  int v20; // w9
  BattleActionData_c *v21; // x8
  int v22; // w10
  __int64 v23; // x1
  QuestPhaseEntity_o *QuestPhaseEntity; // x21
  __int64 v25; // x1
  __int64 v26; // x1
  BattleData_o *data; // x22
  __int64 v28; // x1
  int64_t createdAt; // x22
  System_Int32_array *v30; // x22
  const MethodInfo *v31; // x4
  System_Collections_IEnumerator_o *Asset; // x0
  const MethodInfo_476E8C0 *v33; // x8
  UnityEngine_Object_o *debugButton; // x20
  ManagerConfig_c *v35; // x0

  if ( (byte_593B39E & 1) == 0 )
  {
    sub_21FFC50(&AssetStorageLoadWrapper_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&BattleActionData_TypeInfo);
    sub_21FFC50(&BattleEffectUtility_TypeInfo);
    sub_21FFC50(&BattleFBXComponent_TypeInfo);
    sub_21FFC50(&BattlePerformance_TypeInfo);
    sub_21FFC50(&BuffList_TypeInfo);
    sub_21FFC50(&CatAndMouseGame_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_BattleBgMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_BattleMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    sub_21FFC50(&System_GC_TypeInfo);
    sub_21FFC50(&ManagerConfig_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&OptionManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    sub_21FFC50(&StringLiteral_16140/*"WINGNAME"*/);
    byte_593B39E = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0);
  if ( !*(&BattlePerformance_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo, v3);
  BattlePerformance__WarmupColorMatrixVariantsOnce(0);
  Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_16140/*"WINGNAME"*/, 0);
  if ( !*(&CatAndMouseGame_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v4);
  CatAndMouseGame__SixHomeBuilding(Value, 0);
  if ( !*(&System_GC_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, v6);
  System_GC__Collect(0);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( !assetStorageLoadWrapper )
  {
    assetStorageLoadWrapper = (AssetStorageLoadWrapper_o *)sub_21FFEBC(AssetStorageLoadWrapper_TypeInfo);
    AssetStorageLoadWrapper___ctor(assetStorageLoadWrapper, 0);
  }
  this->fields.assetStorageLoadWrapper = assetStorageLoadWrapper;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.assetStorageLoadWrapper,
    (int32_t)assetStorageLoadWrapper,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v14);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_object )
    goto LABEL_58;
  SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                   (const MethodInfo_3EDFA94 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
  v18 = BattleFBXComponent_TypeInfo;
  v19 = (BattleEntity_o *)SingleEntity;
  if ( !*(&BattleFBXComponent_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo, v16);
    v18 = BattleFBXComponent_TypeInfo;
  }
  Master_object = BattlePerformance_TypeInfo;
  v20 = *(&BattlePerformance_TypeInfo->_2.cctor_finished + 1);
  v18->static_fields->EnableEvent = 1;
  if ( !v20 )
  {
    j_il2cpp_runtime_class_init_0(Master_object, v16);
    Master_object = BattlePerformance_TypeInfo;
  }
  v21 = BattleActionData_TypeInfo;
  v22 = *(&BattleActionData_TypeInfo->_2.cctor_finished + 1);
  *(_BYTE *)(*((_QWORD *)Master_object + 23) + 44LL) = 0;
  if ( !v22 )
  {
    j_il2cpp_runtime_class_init_0(v21, v16);
    v21 = BattleActionData_TypeInfo;
  }
  v21->static_fields->addActionOrder = 0;
  if ( !v19 )
    goto LABEL_58;
  QuestPhaseEntity = BattleEntity__GetQuestPhaseEntity(v19, 0);
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v23);
  if ( OptionManager__isSavedMemoryMode(0) )
  {
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v25);
    AtlasManager__ReleaseFaceAtlas(0);
  }
  if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v25);
  AtlasManager__ReleaseBanner(0);
  AtlasManager__ReleaseCharaGraphOptionAtlas(0);
  AtlasManager__ReleaseEventUI(0);
  Master_object = this->fields.data;
  if ( !Master_object )
    goto LABEL_58;
  BattleData__Initialize((BattleData_o *)Master_object, 0);
  data = this->fields.data;
  if ( !*(&BuffList_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo, v26);
  BuffList__SetBattleData(data, 0);
  Master_object = this->fields.logic;
  if ( !Master_object )
    goto LABEL_58;
  BattleLogic__Initialize((BattleLogic_o *)Master_object, 0);
  Master_object = this->fields.data;
  if ( !Master_object )
    goto LABEL_58;
  if ( !BattleData__IsWarBoard((BattleData_o *)Master_object, 0) )
  {
    createdAt = v19->fields.createdAt;
    if ( !byte_5936133 )
    {
      sub_21FFC50(&SkillLvMaster_TypeInfo);
      byte_5936133 = 1;
    }
    SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime = createdAt;
  }
  if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v28);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_BattleBgMaster___);
  if ( !Master_object )
    goto LABEL_58;
  v30 = (System_Int32_array *)*((_QWORD *)Master_object + 10);
  if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v16);
  BattleEffectUtility__AddNotPreloadEffectId(v30, 0);
  Asset = BattleRootComponent__LoadAsset(this, QuestPhaseEntity, v19->fields.eventId, v19, v31);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, Asset, 0);
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_58;
  v33 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__;
  *((_DWORD *)Master_object + 38) = 3;
  Master_object = SingletonMonoBehaviour_object___get_Instance(v33);
  if ( !Master_object )
    goto LABEL_58;
  if ( *((_BYTE *)Master_object + 148) )
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_58;
    *((_DWORD *)Master_object + 38) = 4;
  }
  debugButton = (UnityEngine_Object_o *)this->fields.debugButton;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v16);
  if ( UnityEngine_Object__op_Inequality(debugButton, 0, 0) )
  {
    Master_object = this->fields.debugButton;
    if ( !Master_object )
      goto LABEL_58;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0);
    v35 = ManagerConfig_TypeInfo;
    if ( !*(&ManagerConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo, v16);
      v35 = ManagerConfig_TypeInfo;
    }
    if ( v35->static_fields->UseDebugCommand )
    {
      Master_object = this->fields.debugButton;
      if ( Master_object )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0);
        return;
      }
LABEL_58:
      sub_21FFECC(Master_object, v16);
    }
  }
}


void BattleRootComponent__beginResume(BattleRootComponent_o *this, Il2CppObject *data, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  CommonUI_o *v6; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  MissionNaviTransitionBoardItem_o *p_callbackBeginResumeFunc; // x19
  struct BattleRootComponent_callBackBeginResume_o *v14; // x20
  struct BattleRootComponent_callBackBeginResume_o *callbackBeginResumeFunc; // t1

  if ( (byte_593B39D & 1) == 0 )
  {
    sub_21FFC50(&AvalonSceneManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593B39D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)Instance;
  if ( !*(&AvalonSceneManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v5);
  if ( !v6 )
    sub_21FFECC(Instance, v5);
  CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
  callbackBeginResumeFunc = this->fields.callbackBeginResumeFunc;
  p_callbackBeginResumeFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackBeginResumeFunc;
  v14 = callbackBeginResumeFunc;
  if ( callbackBeginResumeFunc )
  {
    p_callbackBeginResumeFunc->klass = 0;
    sub_21FFBF4(p_callbackBeginResumeFunc, 0, v7, v8, v9, v10, v11, v12);
    ((void (__fastcall *)(intptr_t, intptr_t))v14->fields.invoke_impl)(v14->fields.method_code, v14->fields.method);
  }
}


void BattleRootComponent__beginStartUp(BattleRootComponent_o *this, Il2CppObject *data, const MethodInfo *method)
{
  __int64 naturalAligment; // x9
  Il2CppObject *Instance; // x21
  __int64 Item; // x0
  __int64 v8; // x1
  const MethodInfo_476E8C0 *v9; // x8
  Il2CppObject *v10; // x21
  const MethodInfo_476E8C0 *v11; // x8
  const MethodInfo_476E8C0 *v12; // x8
  struct BattleLogic_o *logic; // x20
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct BattleLogic_o *v20; // x8
  struct BattleLogic_LOGICTYPE_array *logiclist; // x8
  int max_length; // w9

  if ( (byte_593B3A3 & 1) == 0 )
  {
    sub_21FFC50(&AndroidBackKeyManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_21FFC50(&BattleLogic_LOGICTYPE___TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
    sub_21FFC50(&StringLiteral_22260/*"limitCount"*/);
    sub_21FFC50(&StringLiteral_11360/*"QUEST_START"*/);
    sub_21FFC50(&StringLiteral_24473/*"servantId"*/);
    byte_593B3A3 = 1;
  }
  if ( data )
  {
    naturalAligment = System_Collections_Generic_Dictionary_string__int__TypeInfo->_2.naturalAligment;
    if ( data->klass->_2.naturalAligment >= (unsigned int)naturalAligment
      && (System_Collections_Generic_Dictionary_string__int__c *)data->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_Dictionary_string__int__TypeInfo )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      Item = System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)data,
               (Il2CppObject *)StringLiteral_24473/*"servantId"*/,
               (const MethodInfo_3FC0874 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !Instance )
        goto LABEL_18;
      v9 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__;
      LODWORD(Instance[2].monitor) = Item;
      v10 = SingletonMonoBehaviour_object___get_Instance(v9);
      Item = System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)data,
               (Il2CppObject *)StringLiteral_22260/*"limitCount"*/,
               (const MethodInfo_3FC0874 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !v10 )
        goto LABEL_18;
      v11 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__;
      HIDWORD(v10[2].monitor) = Item;
      Item = (__int64)SingletonMonoBehaviour_object___get_Instance(v11);
      if ( !Item )
        goto LABEL_18;
      v12 = (const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__;
      *(_BYTE *)(Item + 52) = 1;
      Item = (__int64)SingletonMonoBehaviour_object___get_Instance(v12);
      if ( !Item
        || (logic = this->fields.logic,
            *(_BYTE *)(Item + 53) = 1,
            Item = sub_21FFD10(BattleLogic_LOGICTYPE___TypeInfo, 2),
            !logic)
        || (logic->fields.logiclist = (struct BattleLogic_LOGICTYPE_array *)Item,
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&logic->fields.logiclist,
              Item,
              v14,
              v15,
              v16,
              v17,
              v18,
              v19),
            (v20 = this->fields.logic) == 0)
        || (logiclist = v20->fields.logiclist) == 0 )
      {
LABEL_18:
        sub_21FFECC(Item, v8);
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
      sub_220024C(data, System_Collections_Generic_Dictionary_string__int__TypeInfo, method);
    }
    sub_21FFED4(Item);
  }
LABEL_16:
  SceneRootComponent__beginStartUp_48429240((SceneRootComponent_o *)this, 0);
  Item = (__int64)this->fields.myFSM;
  AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 1;
  if ( !Item )
    goto LABEL_18;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Item, (System_String_o *)StringLiteral_11360/*"QUEST_START"*/, 0);
}


void BattleRootComponent__endQuest(BattleRootComponent_o *this, const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0
  long double v4; // q0
  __int64 v5; // x0
  __int64 v6; // x0
  __int64 v7; // x1
  long double v8; // q0
  __int64 v9; // x0
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x1
  System_Action_o *v13; // x20
  const MethodInfo *v14; // x2
  System_Collections_IEnumerator_o *OutGameAsset; // x1

  if ( (byte_593B3A4 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_BattleRootComponent_goNextScene__);
    sub_21FFC50(&OptionManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AtlasManager__getInstance__);
    byte_593B3A4 = 1;
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
  if ( (*(_WORD *)(v5 + 309) & 1) == 0 )
    v5 = sub_2237AF8(v4);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_WORD *)(v6 + 309) & 1) == 0 )
    v6 = sub_2237AF8(v4);
  perf = **(BattlePerformance_o ***)(v6 + 184);
  if ( !perf )
    goto LABEL_33;
  AtlasManager__UnloadBuffIconAtlas((AtlasManager_o *)perf, 0);
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v7);
  if ( OptionManager__isSavedMemoryMode(0) )
  {
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method);
    AtlasManager__ReleaseFaceBattleAtlas(0);
  }
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
  if ( (*(_WORD *)(v9 + 309) & 1) == 0 )
    v9 = sub_2237AF8(v8);
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_WORD *)(v10 + 309) & 1) == 0 )
    v10 = sub_2237AF8(v8);
  perf = **(BattlePerformance_o ***)(v10 + 184);
  if ( !perf
    || (AtlasManager__UnloadWarBoardAtlas((AtlasManager_o *)perf, 0), (perf = this->fields.perf) == 0)
    || (BattlePerformance__ReleaseEventInfoPointGauge(perf, 0), (perf = (BattlePerformance_o *)this->fields.data) == 0) )
  {
LABEL_33:
    sub_21FFECC(perf, method);
  }
  if ( !BattleData__IsWarBoard((BattleData_o *)perf, 0) )
  {
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v11);
    AtlasManager__ReleaseEventAtlas(0);
  }
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v11);
  if ( OptionManager__isSavedMemoryMode(0) )
  {
    v13 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_BattleRootComponent_goNextScene__, 0);
    OutGameAsset = BattleRootComponent__loadOutGameAsset(this, v13, v14);
    UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, OutGameAsset, 0);
  }
  else
  {
    BattleRootComponent__goNextScene(this, v12);
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
  int32_t v8; // w22
  int32_t id; // w23
  int32_t win_lose; // w24
  int32_t WinResult; // w25
  BattleScriptRootComponent_TalkScriptInfo_o *v12; // x20
  const MethodInfo *v13; // x2

  v2 = this;
  if ( (byte_593B3A6 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    this = (BattleRootComponent_o *)sub_21FFC50(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
    byte_593B3A6 = 1;
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
  v8 = (int)this;
  id = quest_ent->fields.id;
  win_lose = v7->fields.win_lose;
  WinResult = BattleData__getWinResult(v2->fields.data, 0);
  v12 = (BattleScriptRootComponent_TalkScriptInfo_o *)sub_21FFEBC(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
  BattleScriptRootComponent_TalkScriptInfo___ctor_55104132(v12, v8, id, questPhase, 4, win_lose, WinResult, 0, 0);
  this = (BattleRootComponent_o *)v2->fields.data;
  if ( !this
    || (BattleData__release((BattleData_o *)this, 0),
        (this = (BattleRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
LABEL_10:
    sub_21FFECC(this, method);
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
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_593B3A5 & 1) == 0 )
  {
    sub_21FFC50(&BattleRootComponent__loadOutGameAsset_d__20_TypeInfo);
    byte_593B3A5 = 1;
  }
  v5 = sub_21FFEBC(BattleRootComponent__loadOutGameAsset_d__20_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 64) = callback;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 64), (int32_t)callback, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void BattleRootComponent__setCallbackBeginResume(
        BattleRootComponent_o *this,
        BattleRootComponent_callBackBeginResume_o *func,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.callbackBeginResumeFunc = func;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackBeginResumeFunc,
    (int32_t)func,
    (System_String_o *)method,
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *v8; // x19
  int32_t _1__state; // w8
  struct BattleEntity_o *battleEntity; // x8
  BattleInfoData_o *battleInfo; // x0
  BattleUserServantData_o *UserServantFromID; // x0
  BattleUserServantData_o *v13; // x19
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct AddSkillData_array *classBoardAddCommandSpells; // x1
  BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *v21; // x0
  __int64 v22; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *v29; // x8
  int v30; // w9
  int32_t _7__wrap5; // w8
  int32_t v32; // w8
  bool result; // w0
  MissionNaviTransitionBoardItem_o *p__7__wrap1; // x0
  struct AddSkillData_array *_7__wrap1; // x10
  int max_length; // w11
  AddSkillData_o *v37; // x9
  ClassBoardCommandSpellMaster_o *classBoardCSMaster; // x0
  Il2CppObject *current; // x8
  BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *v40; // x9
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *v47; // x8
  ClassBoardCommandSpellEntity_o *v48; // x0
  struct System_Int32_array *EffectIdArray; // x1
  BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *v50; // x0
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  MissionNaviTransitionBoardItem_o *p__7__wrap4; // x0
  struct System_Int32_array *_7__wrap4; // x9
  int32_t v59; // w10
  const MethodInfo *v60; // x1
  int32_t v61; // w8
  __int64 v62; // x19
  System_Collections_Generic_List_Enumerator_T__o v63[2]; // [xsp+8h] [xbp-78h] BYREF
  __int64 v64; // [xsp+40h] [xbp-40h]
  BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o **v65; // [xsp+48h] [xbp-38h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+50h] [xbp-30h] BYREF
  BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *v67; // [xsp+58h] [xbp-28h] BYREF

  v8 = this;
  v67 = this;
  if ( (byte_593B3B5 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__);
    this = (BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *)sub_21FFC50(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
    byte_593B3B5 = 1;
  }
  _1__state = v8->fields.__1__state;
  v64 = 0;
  v65 = &v67;
  entitys = 0;
  if ( _1__state == 1 )
  {
    _7__wrap5 = v8->fields.__7__wrap5;
    v8->fields.__1__state = -3;
    v32 = _7__wrap5 + 1;
    v8->fields.__7__wrap5 = v32;
    goto LABEL_32;
  }
  if ( _1__state )
    goto LABEL_13;
  battleEntity = v8->fields.battleEntity;
  v8->fields.__1__state = -1;
  if ( !battleEntity )
    sub_21FFECC(this, method);
  battleInfo = battleEntity->fields.battleInfo;
  if ( !battleInfo )
    sub_21FFECC(0, method);
  UserServantFromID = BattleInfoData__getUserServantFromID(battleInfo, v8->fields.userSvtId, 0);
  v13 = UserServantFromID;
  if ( !UserServantFromID
    || BasicHelper__IsNullOrEmpty(
         (System_Collections_ICollection_o *)UserServantFromID->fields.classBoardAddCommandSpells,
         0) )
  {
LABEL_13:
    result = 0;
  }
  else
  {
    classBoardAddCommandSpells = v13->fields.classBoardAddCommandSpells;
    v21 = v67;
    v67->fields.__7__wrap1 = classBoardAddCommandSpells;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v21->fields.__7__wrap1,
      (int32_t)classBoardAddCommandSpells,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    v29 = v67;
    v30 = 0;
    v67->fields.__7__wrap2 = 0;
    while ( 1 )
    {
      p__7__wrap1 = (MissionNaviTransitionBoardItem_o *)&v29->fields.__7__wrap1;
      _7__wrap1 = v29->fields.__7__wrap1;
      if ( !_7__wrap1 )
        sub_21FFECC(p__7__wrap1, v22);
      max_length = _7__wrap1->max_length;
      if ( v30 >= max_length )
      {
        p__7__wrap1->klass = 0;
        sub_21FFBF4(p__7__wrap1, 0, v23, v24, v25, v26, v27, v28);
        goto LABEL_13;
      }
      if ( v30 >= (unsigned int)max_length )
        sub_21FFED4(p__7__wrap1);
      v37 = _7__wrap1->m_Items[v30];
      if ( !v37 )
        sub_21FFECC(p__7__wrap1, v22);
      classBoardCSMaster = v29->fields.classBoardCSMaster;
      if ( !classBoardCSMaster )
        sub_21FFECC(0, v22);
      if ( ClassBoardCommandSpellMaster__TryGetEntityList(
             classBoardCSMaster,
             &entitys,
             v37->fields.id,
             v37->fields.lv,
             0) )
      {
        break;
      }
      v29 = v67;
LABEL_29:
      v30 = v29->fields.__7__wrap2 + 1;
      v29->fields.__7__wrap2 = v30;
    }
    if ( !entitys )
      sub_21FFECC(0, v22);
    System_Collections_Generic_List_object___GetEnumerator(
      v63,
      (System_Collections_Generic_List_object__o *)entitys,
      (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
    current = v63[0].fields._current;
    v40 = v67;
    v63[1] = v63[0];
    *(_OWORD *)&v67->fields.__7__wrap3.fields._list = *(_OWORD *)&v63[0].fields._list;
    v40->fields.__7__wrap3.fields._current = (struct ClassBoardCommandSpellEntity_o *)current;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v40->fields.__7__wrap3, 0, v41, v42, v43, v44, v45, v46);
    v47 = v67;
    v67->fields.__1__state = -3;
    while ( 1 )
    {
      if ( !System_Collections_Generic_List_Enumerator_object___MoveNext(
              (System_Collections_Generic_List_Enumerator_object__o *)&v47->fields.__7__wrap3,
              (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__) )
      {
        BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26____m__Finally1(v67, v60);
        v29 = v67;
        *(_QWORD *)&v67->fields.__7__wrap3.fields._index = 0;
        v29->fields.__7__wrap3.fields._current = 0;
        v29->fields.__7__wrap3.fields._list = 0;
        goto LABEL_29;
      }
      v48 = v67->fields.__7__wrap3.fields._current;
      if ( !v48 )
        sub_21FFECC(0, v60);
      EffectIdArray = ClassBoardCommandSpellEntity__GetEffectIdArray(v48, 0);
      v50 = v67;
      v67->fields.__7__wrap4 = EffectIdArray;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v50->fields.__7__wrap4,
        (int32_t)EffectIdArray,
        v51,
        v52,
        v53,
        v54,
        v55,
        v56);
      v8 = v67;
      v32 = 0;
      v67->fields.__7__wrap5 = 0;
LABEL_32:
      p__7__wrap4 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__7__wrap4;
      _7__wrap4 = v8->fields.__7__wrap4;
      if ( !_7__wrap4 )
        sub_21FFECC(p__7__wrap4, method);
      v59 = _7__wrap4->max_length;
      if ( v32 < v59 )
        break;
      p__7__wrap4->klass = 0;
      sub_21FFBF4(p__7__wrap4, 0, v2, v3, v4, v5, v6, v7);
      v47 = v67;
    }
    if ( v32 >= (unsigned int)v59 )
      sub_21FFED4(p__7__wrap4);
    result = 1;
    v61 = _7__wrap4->m_Items[v32];
    v8->fields.__1__state = 1;
    v8->fields.__2__current = v61;
  }
  v62 = v64;
  if ( v64 )
  {
    sub_1FFEC08(&v65, method);
    sub_21FFEC4(v62);
  }
  return result;
}


System_Collections_Generic_IEnumerator_int__o *BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26__System_Collections_Generic_IEnumerable_System_Int32__GetEnumerator(
        BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *v10; // x20
  struct BattleEntity_o *_3__battleEntity; // x1
  struct ClassBoardCommandSpellMaster_o *_3__classBoardCSMaster; // x1
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  System_Collections_Generic_IEnumerator_int__o *result; // x0

  if ( (byte_593B3B7 & 1) == 0 )
  {
    sub_21FFC50(&BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_TypeInfo);
    byte_593B3B7 = 1;
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
    v10 = (BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *)sub_21FFEBC(BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_TypeInfo);
    System_Object___ctor((Il2CppObject *)v10, 0);
    v10->fields.__1__state = 0;
    v10->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0);
  }
  _3__battleEntity = this->fields.__3__battleEntity;
  v10->fields.battleEntity = _3__battleEntity;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v10->fields.battleEntity,
    (int32_t)_3__battleEntity,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  _3__classBoardCSMaster = this->fields.__3__classBoardCSMaster;
  v10->fields.classBoardCSMaster = _3__classBoardCSMaster;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&v10->fields.classBoardCSMaster,
    (int32_t)_3__classBoardCSMaster,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  result = (System_Collections_Generic_IEnumerator_int__o *)v10;
  v10->fields.userSvtId = this->fields.__3__userSvtId;
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26__System_Collections_IEnumerator_get_Current(
        BattleRootComponent__GetClassBoardCommandSpellEffectIdCommonProccess_d__26_o *this,
        const MethodInfo *method)
{
  int32_t _2__current; // [xsp+Ch] [xbp-4h] BYREF

  _2__current = this->fields.__2__current;
  return (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &_2__current);
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
  const MethodInfo_40C7F48 *v3; // x1

  if ( (byte_593B3B6 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
    byte_593B3B6 = 1;
  }
  v3 = (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__;
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap3,
    v3);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  struct BattleRootComponent_o *_4__this; // x25
  void *AssumedBattleAssetLoadManager_k__BackingField; // x0
  struct BattleRootComponent___c__DisplayClass13_2_o *_8__2; // x8
  struct BattleRootComponent___c__DisplayClass13_2_o **p__8__2; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  Il2CppObject *v20; // x21
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  __int64 v27; // x1
  UnityEngine_WaitForEndOfFrame_o *v28; // x20
  Il2CppObject **v29; // x19
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct BattleRootComponent___c__DisplayClass13_0_o *v36; // x23
  QuestPhaseEntity_o *ent; // x21
  int32_t eventId; // w22
  System_Action_o *v39; // x24
  const MethodInfo *v40; // x4
  System_Collections_IEnumerator_o *AssetsIndependentToMainOne; // x0
  System_String_o *v42; // x2
  System_String_o *v43; // x3
  int32_t v44; // w4
  int32_t v45; // w5
  bool v46; // w6
  bool v47; // w7
  __int64 v48; // x1
  AssetStorageLoadWrapper_o *v49; // x21
  BattleDataDefine_c *v50; // x0
  Il2CppObject *v51; // x24
  System_String_o *ASSET_BATTLE_COMMON; // x22
  AssetLoader_LoadEndDataHandler_o *v53; // x23
  System_Collections_Generic_List_object__o *v54; // x21
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  BattleRootComponent_o *v61; // x0
  const MethodInfo *v62; // x4
  struct System_Int32_array *AllFieldMotionIds; // x0
  struct System_Int32_array **p_fieldMotionIds_5__3; // x21
  System_String_o *v65; // x2
  System_String_o *v66; // x3
  int32_t v67; // w4
  int32_t v68; // w5
  bool v69; // w6
  bool v70; // w7
  struct BattleRootComponent___c__DisplayClass13_0_o *v71; // x22
  System_Collections_Generic_Dictionary_int__object__o *v72; // x23
  System_String_o *v73; // x2
  System_String_o *v74; // x3
  int32_t v75; // w4
  int32_t v76; // w5
  bool v77; // w6
  bool v78; // w7
  struct System_Int32_array *v79; // x28
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v81; // x29
  int32_t v82; // w23
  __int64 v83; // x22
  System_String_o *v84; // x2
  System_String_o *v85; // x3
  int32_t v86; // w4
  int32_t v87; // w5
  bool v88; // w6
  bool v89; // w7
  struct BattleRootComponent___c__DisplayClass13_0_o *v90; // x1
  BattleRootComponent__LoadAsset_d__13_o *v91; // x20
  __int64 v92; // x21
  __int64 v93; // x1
  System_String_o *v94; // x0
  AssetStorageLoadWrapper_o *v95; // x23
  System_String_o *v96; // x24
  struct BattleRootComponent_o *v97; // x19
  AssetLoader_LoadEndDataHandler_o *v98; // x25
  AssetManager_o *v99; // x21
  struct BattleRootComponent___c__DisplayClass13_0_o *v100; // x8
  struct System_Int32_array *fieldMotionIds_5__3; // x9
  Il2CppObject **p__2__current; // x19
  int v103; // w8
  Il2CppObject *v104; // x0
  System_String_o *v105; // x2
  System_String_o *v106; // x3
  int32_t v107; // w4
  int32_t v108; // w5
  bool v109; // w6
  bool v110; // w7
  System_Collections_Generic_IEnumerable_TSource__o *assetDataByIndex; // x21
  BattleRootComponent___c_c *v112; // x0
  struct BattleRootComponent___c_StaticFields *static_fields; // x8
  System_Func_T__TResult__o *_9__13_2; // x22
  Il2CppObject *v115; // x23
  struct BattleRootComponent___c_StaticFields *v116; // x0
  System_String_o *v117; // x2
  System_String_o *v118; // x3
  int32_t v119; // w4
  int32_t v120; // w5
  bool v121; // w6
  bool v122; // w7
  System_Linq_IOrderedEnumerable_TSource__o *v123; // x0
  __int64 v124; // x1
  BattleRootComponent___c_c *v125; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v126; // x21
  struct BattleRootComponent___c_StaticFields *v127; // x9
  System_Func_T__TResult__o *_9__13_3; // x22
  Il2CppObject *v129; // x23
  struct BattleRootComponent___c_StaticFields *v130; // x0
  System_String_o *v131; // x2
  System_String_o *v132; // x3
  int32_t v133; // w4
  int32_t v134; // w5
  bool v135; // w6
  bool v136; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v137; // x0
  struct System_Collections_Generic_List_AssetData__o *v138; // x0
  System_String_o *v139; // x2
  System_String_o *v140; // x3
  int32_t v141; // w4
  int32_t v142; // w5
  bool v143; // w6
  bool v144; // w7
  struct BattleEntity_o *battleEnt; // x8
  Il2CppObject *v146; // x21
  System_String_o *v147; // x2
  System_String_o *v148; // x3
  int32_t v149; // w4
  int32_t v150; // w5
  bool v151; // w6
  bool v152; // w7
  System_String_o *v153; // x0
  System_String_o *v154; // x2
  System_String_o *v155; // x3
  int32_t v156; // w4
  int32_t v157; // w5
  bool v158; // w6
  bool v159; // w7
  struct BattleRootComponent___c__DisplayClass13_2_o *v160; // x8
  System_String_o *v161; // x21
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x23
  Il2CppObject *v163; // x24
  AssetLoader_LoadEndDataHandler_o *v164; // x22
  struct BattleRootComponent___c__DisplayClass13_0_o *v165; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v166; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v167; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v168; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v169; // x8
  struct BattlePerformance_o *v170; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v171; // x8
  struct BattlePerformance_o *v172; // x8
  struct BattlePerformance_o *v173; // x8
  AssumedBattleAssetLoadManager_o *v174; // x21
  struct BattleRootComponent___c__DisplayClass13_0_o *_8__1; // x8
  struct BattlePerformance_o *perf; // x8
  const MethodInfo *v177; // x1
  System_String_o *v178; // x2
  System_String_o *v179; // x3
  int32_t v180; // w4
  int32_t v181; // w5
  bool v182; // w6
  bool v183; // w7
  int v185; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_593B3B8 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_AssumedBattleAssetLoadManager_Release_AssumedBattleAssetSearcherBeforeBattle___);
    sub_21FFC50(&BattleDataDefine_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__AssetData___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_int__AssetData__TypeInfo);
    sub_21FFC50(&Method_System_Linq_Enumerable_OrderBy_KeyValuePair_int__AssetData___int___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_KeyValuePair_int__AssetData___AssetData___);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToList_AssetData___);
    sub_21FFC50(&System_Func_KeyValuePair_int__AssetData___int__TypeInfo);
    sub_21FFC50(&System_Func_KeyValuePair_int__AssetData___AssetData__TypeInfo);
    sub_21FFC50(&System_GC_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_AssetData___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_AssetData__TypeInfo);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&OptionManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_21FFC50(&Method_BattleRootComponent___c__LoadAsset_b__13_2__);
    sub_21FFC50(&Method_BattleRootComponent___c__LoadAsset_b__13_3__);
    sub_21FFC50(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__0__);
    sub_21FFC50(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__1__);
    sub_21FFC50(&BattleRootComponent___c__DisplayClass13_0_TypeInfo);
    sub_21FFC50(&Method_BattleRootComponent___c__DisplayClass13_1__LoadAsset_b__4__);
    sub_21FFC50(&BattleRootComponent___c__DisplayClass13_1_TypeInfo);
    sub_21FFC50(&Method_BattleRootComponent___c__DisplayClass13_2__LoadAsset_b__5__);
    sub_21FFC50(&BattleRootComponent___c__DisplayClass13_2_TypeInfo);
    sub_21FFC50(&BattleRootComponent___c_TypeInfo);
    sub_21FFC50(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    sub_21FFC50(&StringLiteral_3223/*"Battle/UniqueCamera/"*/);
    sub_21FFC50(&StringLiteral_15626/*"UniqueCameraPrefab"*/);
    byte_593B3B8 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  AssumedBattleAssetLoadManager_k__BackingField = 0;
  v185 = 0;
  if ( _1__state > 2 )
  {
    if ( _1__state > 4 )
    {
      if ( _1__state != 5 )
      {
        if ( _1__state != 6 )
          return (char)AssumedBattleAssetLoadManager_k__BackingField;
        this->fields.__1__state = -1;
LABEL_108:
        if ( _4__this )
        {
          perf = _4__this->fields.perf;
          if ( perf )
          {
            AssumedBattleAssetLoadManager_k__BackingField = perf->fields._AssumedBattleAssetLoadManager_k__BackingField;
            if ( AssumedBattleAssetLoadManager_k__BackingField )
            {
              if ( AssumedBattleAssetLoadManager__IsPreloading(
                     (AssumedBattleAssetLoadManager_o *)AssumedBattleAssetLoadManager_k__BackingField,
                     0) )
              {
                this->fields.__2__current = 0;
                p__2__current = &this->fields.__2__current;
                sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v178, v179, v180, v181, v182, v183);
                v103 = 6;
                goto LABEL_113;
              }
              BattleRootComponent__SetupObjectsExtractedFromLoadedAssets(_4__this, v177);
              AssumedBattleAssetLoadManager_k__BackingField = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
              if ( AssumedBattleAssetLoadManager_k__BackingField )
              {
                AvalonSceneManager__endInitialize(
                  (AvalonSceneManager_o *)AssumedBattleAssetLoadManager_k__BackingField,
                  (SceneRootComponent_o *)_4__this,
                  0);
                LOBYTE(AssumedBattleAssetLoadManager_k__BackingField) = 0;
                return (char)AssumedBattleAssetLoadManager_k__BackingField;
              }
            }
          }
        }
LABEL_117:
        sub_21FFECC(AssumedBattleAssetLoadManager_k__BackingField, method);
      }
      this->fields.__1__state = -1;
LABEL_105:
      _8__1 = this->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_117;
      if ( _8__1->fields.isAssetsLoading )
      {
        this->fields.__2__current = 0;
        p__2__current = &this->fields.__2__current;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v2, v3, v4, v5, v6, v7);
        v103 = 5;
        goto LABEL_113;
      }
      goto LABEL_108;
    }
    if ( _1__state != 3 )
    {
      this->fields.__1__state = -1;
LABEL_7:
      p__8__2 = &this->fields.__8__2;
      _8__2 = this->fields.__8__2;
      if ( !_8__2 )
        goto LABEL_117;
      method = (const MethodInfo *)_8__2->fields.uniqueCameraData;
      if ( method )
      {
        if ( this->fields._loadSucceeded_5__5 )
        {
          if ( !_4__this )
            goto LABEL_117;
          AssumedBattleAssetLoadManager_k__BackingField = _4__this->fields.perf;
          if ( !AssumedBattleAssetLoadManager_k__BackingField )
            goto LABEL_117;
          BattlePerformance__loadStorageObjectCamera(
            (BattlePerformance_o *)AssumedBattleAssetLoadManager_k__BackingField,
            (AssetData_o *)method,
            (System_String_o *)StringLiteral_15626/*"UniqueCameraPrefab"*/,
            0);
          *p__8__2 = 0;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__8__2, 0, v14, v15, v16, v17, v18, v19);
        }
        else
        {
          *p__8__2 = 0;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__8__2, 0, v2, v3, v4, v5, v6, v7);
          if ( !_4__this )
            goto LABEL_117;
        }
LABEL_88:
        v167 = this->fields.__8__1;
        if ( !v167 )
          goto LABEL_117;
        AssumedBattleAssetLoadManager_k__BackingField = _4__this->fields.perf;
        if ( !AssumedBattleAssetLoadManager_k__BackingField )
          goto LABEL_117;
        BattlePerformance__loadStorageObjectCommonMotion(
          (BattlePerformance_o *)AssumedBattleAssetLoadManager_k__BackingField,
          v167->fields.commonData,
          0);
        v168 = this->fields.__8__1;
        if ( !v168 )
          goto LABEL_117;
        AssumedBattleAssetLoadManager_k__BackingField = _4__this->fields.perf;
        if ( !AssumedBattleAssetLoadManager_k__BackingField )
          goto LABEL_117;
        BattlePerformance__SetEffectControlObjectFromCommonAsset(
          (BattlePerformance_o *)AssumedBattleAssetLoadManager_k__BackingField,
          v168->fields.commonData,
          0);
        v169 = this->fields.__8__1;
        if ( !v169 )
          goto LABEL_117;
        AssumedBattleAssetLoadManager_k__BackingField = _4__this->fields.perf;
        if ( !AssumedBattleAssetLoadManager_k__BackingField )
          goto LABEL_117;
        BattlePerformance__loadFieldMotion(
          (BattlePerformance_o *)AssumedBattleAssetLoadManager_k__BackingField,
          v169->fields.commonData,
          this->fields._motionDataList_5__2,
          0);
        v170 = _4__this->fields.perf;
        if ( !v170 )
          goto LABEL_117;
        AssumedBattleAssetLoadManager_k__BackingField = v170->fields._fmManager_k__BackingField;
        if ( !AssumedBattleAssetLoadManager_k__BackingField )
          goto LABEL_117;
        FieldMotionManager__SetBaseFieldMotionIds(
          (FieldMotionManager_o *)AssumedBattleAssetLoadManager_k__BackingField,
          this->fields._baseMotionIds_5__4,
          0);
        v171 = this->fields.__8__1;
        if ( !v171 )
          goto LABEL_117;
        AssumedBattleAssetLoadManager_k__BackingField = _4__this->fields.perf;
        if ( !AssumedBattleAssetLoadManager_k__BackingField )
          goto LABEL_117;
        BattlePerformance__SetRootCameraInfoToActionCamera(
          (BattlePerformance_o *)AssumedBattleAssetLoadManager_k__BackingField,
          v171->fields.commonData,
          0);
        AssumedBattleAssetLoadManager_k__BackingField = _4__this->fields.perf;
        if ( !AssumedBattleAssetLoadManager_k__BackingField )
          goto LABEL_117;
        BattlePerformance__Initialize((BattlePerformance_o *)AssumedBattleAssetLoadManager_k__BackingField, 0);
        AssumedBattleAssetLoadManager_k__BackingField = _4__this->fields.data;
        if ( !AssumedBattleAssetLoadManager_k__BackingField )
          goto LABEL_117;
        BattleData__loadFsmGameObject((BattleData_o *)AssumedBattleAssetLoadManager_k__BackingField, 0);
        v172 = _4__this->fields.perf;
        if ( !v172 )
          goto LABEL_117;
        AssumedBattleAssetLoadManager_k__BackingField = v172->fields._AssumedBattleAssetLoadManager_k__BackingField;
        if ( !AssumedBattleAssetLoadManager_k__BackingField )
          goto LABEL_117;
        AssumedBattleAssetLoadManager__Release_object_(
          (AssumedBattleAssetLoadManager_o *)AssumedBattleAssetLoadManager_k__BackingField,
          (const MethodInfo_379F4E4 *)Method_AssumedBattleAssetLoadManager_Release_AssumedBattleAssetSearcherBeforeBattle___);
        v173 = _4__this->fields.perf;
        if ( !v173 )
          goto LABEL_117;
        v174 = v173->fields._AssumedBattleAssetLoadManager_k__BackingField;
        AssumedBattleAssetLoadManager_k__BackingField = AssumedBattleAssetSearcherBeforeBattle__Create(0);
        if ( !v174 )
          goto LABEL_117;
        AssumedBattleAssetLoadManager__Preload(
          v174,
          (AssumedBattleAssetSearcherBase_o *)AssumedBattleAssetLoadManager_k__BackingField,
          0);
        goto LABEL_105;
      }
      this->fields.__2__current = 0;
      p__2__current = &this->fields.__2__current;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v2, v3, v4, v5, v6, v7);
      v103 = 4;
LABEL_113:
      *((_DWORD *)p__2__current - 2) = v103;
      LOBYTE(AssumedBattleAssetLoadManager_k__BackingField) = 1;
      return (char)AssumedBattleAssetLoadManager_k__BackingField;
    }
    this->fields.__1__state = -1;
LABEL_50:
    v100 = this->fields.__8__1;
    if ( !v100 )
      goto LABEL_117;
    if ( !v100->fields.commonData )
      goto LABEL_54;
    fieldMotionIds_5__3 = this->fields._fieldMotionIds_5__3;
    if ( !fieldMotionIds_5__3 )
      goto LABEL_117;
    if ( v100->fields.loadCompCnt < SLODWORD(fieldMotionIds_5__3->max_length) )
    {
LABEL_54:
      this->fields.__2__current = 0;
      p__2__current = &this->fields.__2__current;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v2, v3, v4, v5, v6, v7);
      v103 = 3;
      goto LABEL_113;
    }
    assetDataByIndex = (System_Collections_Generic_IEnumerable_TSource__o *)v100->fields.assetDataByIndex;
    v112 = BattleRootComponent___c_TypeInfo;
    if ( !*(&BattleRootComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleRootComponent___c_TypeInfo, method);
      v112 = BattleRootComponent___c_TypeInfo;
    }
    static_fields = v112->static_fields;
    _9__13_2 = (System_Func_T__TResult__o *)static_fields->__9__13_2;
    if ( !_9__13_2 )
    {
      if ( !*(&v112->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v112, method);
        static_fields = BattleRootComponent___c_TypeInfo->static_fields;
      }
      v115 = (Il2CppObject *)static_fields->__9;
      _9__13_2 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_KeyValuePair_int__AssetData___int__TypeInfo);
      System_Func_KeyValuePair_int__object___int____ctor(
        _9__13_2,
        v115,
        Method_BattleRootComponent___c__LoadAsset_b__13_2__,
        0);
      v116 = BattleRootComponent___c_TypeInfo->static_fields;
      v116->__9__13_2 = (struct System_Func_KeyValuePair_int__AssetData___int__o *)_9__13_2;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v116->__9__13_2,
        (int32_t)_9__13_2,
        v117,
        v118,
        v119,
        v120,
        v121,
        v122);
    }
    v123 = System_Linq_Enumerable__OrderBy_KeyValuePair_int__object___int_(
             assetDataByIndex,
             (System_Func_TSource__TKey__o *)_9__13_2,
             (const MethodInfo_3855208 *)Method_System_Linq_Enumerable_OrderBy_KeyValuePair_int__AssetData___int___);
    v125 = BattleRootComponent___c_TypeInfo;
    v126 = (System_Collections_Generic_IEnumerable_TSource__o *)v123;
    if ( !*(&BattleRootComponent___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleRootComponent___c_TypeInfo, v124);
      v125 = BattleRootComponent___c_TypeInfo;
    }
    v127 = v125->static_fields;
    _9__13_3 = (System_Func_T__TResult__o *)v127->__9__13_3;
    if ( !_9__13_3 )
    {
      if ( !*(&v125->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v125, v124);
        v127 = BattleRootComponent___c_TypeInfo->static_fields;
      }
      v129 = (Il2CppObject *)v127->__9;
      _9__13_3 = (System_Func_T__TResult__o *)sub_21FFEBC(System_Func_KeyValuePair_int__AssetData___AssetData__TypeInfo);
      System_Func_KeyValuePair_int__object___object____ctor(
        _9__13_3,
        v129,
        Method_BattleRootComponent___c__LoadAsset_b__13_3__,
        0);
      v130 = BattleRootComponent___c_TypeInfo->static_fields;
      v130->__9__13_3 = (struct System_Func_KeyValuePair_int__AssetData___AssetData__o *)_9__13_3;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v130->__9__13_3,
        (int32_t)_9__13_3,
        v131,
        v132,
        v133,
        v134,
        v135,
        v136);
    }
    v137 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_int__object___object_(
                                                                  v126,
                                                                  (System_Func_TSource__TResult__o *)_9__13_3,
                                                                  (const MethodInfo_385746C *)Method_System_Linq_Enumerable_Select_KeyValuePair_int__AssetData___AssetData___);
    v138 = (struct System_Collections_Generic_List_AssetData__o *)System_Linq_Enumerable__ToList_object_(
                                                                    v137,
                                                                    (const MethodInfo_386D928 *)Method_System_Linq_Enumerable_ToList_AssetData___);
    this->fields._motionDataList_5__2 = v138;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields._motionDataList_5__2,
      (int32_t)v138,
      v139,
      v140,
      v141,
      v142,
      v143,
      v144);
    battleEnt = this->fields.battleEnt;
    if ( !battleEnt )
      goto LABEL_117;
    AssumedBattleAssetLoadManager_k__BackingField = battleEnt->fields.battleInfo;
    if ( !AssumedBattleAssetLoadManager_k__BackingField )
      goto LABEL_117;
    AssumedBattleAssetLoadManager_k__BackingField = (void *)BattleInfoData__GetUniqueCameraId(
                                                              (BattleInfoData_o *)AssumedBattleAssetLoadManager_k__BackingField,
                                                              this->fields.ent,
                                                              0);
    v185 = (int)AssumedBattleAssetLoadManager_k__BackingField;
    if ( !(_DWORD)AssumedBattleAssetLoadManager_k__BackingField )
    {
      if ( !_4__this )
        goto LABEL_117;
      v166 = this->fields.__8__1;
      if ( !v166 )
        goto LABEL_117;
      AssumedBattleAssetLoadManager_k__BackingField = _4__this->fields.perf;
      if ( !AssumedBattleAssetLoadManager_k__BackingField )
        goto LABEL_117;
      BattlePerformance__loadStorageObjectCameraCommon(
        (BattlePerformance_o *)AssumedBattleAssetLoadManager_k__BackingField,
        v166->fields.commonData,
        0);
      goto LABEL_88;
    }
    v146 = (Il2CppObject *)sub_21FFEBC(BattleRootComponent___c__DisplayClass13_2_TypeInfo);
    System_Object___ctor(v146, 0);
    this->fields.__8__2 = (struct BattleRootComponent___c__DisplayClass13_2_o *)v146;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.__8__2,
      (int32_t)v146,
      v147,
      v148,
      v149,
      v150,
      v151,
      v152);
    v153 = System_Int32__ToString((int32_t)&v185, 0);
    AssumedBattleAssetLoadManager_k__BackingField = System_String__Concat_75438412(
                                                      (System_String_o *)StringLiteral_3223/*"Battle/UniqueCamera/"*/,
                                                      v153,
                                                      0);
    v160 = this->fields.__8__2;
    if ( !v160 )
      goto LABEL_117;
    v161 = (System_String_o *)AssumedBattleAssetLoadManager_k__BackingField;
    v160->fields.uniqueCameraData = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v160->fields, 0, v154, v155, v156, v157, v158, v159);
    if ( !_4__this )
      goto LABEL_117;
    assetStorageLoadWrapper = _4__this->fields.assetStorageLoadWrapper;
    v163 = (Il2CppObject *)this->fields.__8__2;
    v164 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v164,
      v163,
      Method_BattleRootComponent___c__DisplayClass13_2__LoadAsset_b__5__,
      0);
    if ( !assetStorageLoadWrapper )
      goto LABEL_117;
    AssumedBattleAssetLoadManager_k__BackingField = (void *)AssetStorageLoadWrapper__LoadAssetStorage(
                                                              assetStorageLoadWrapper,
                                                              v161,
                                                              v164,
                                                              1,
                                                              0);
    this->fields._loadSucceeded_5__5 = (unsigned __int8)AssumedBattleAssetLoadManager_k__BackingField & 1;
    if ( ((unsigned __int8)AssumedBattleAssetLoadManager_k__BackingField & 1) == 0 )
    {
      v165 = this->fields.__8__1;
      if ( !v165 )
        goto LABEL_117;
      AssumedBattleAssetLoadManager_k__BackingField = _4__this->fields.perf;
      if ( !AssumedBattleAssetLoadManager_k__BackingField )
        goto LABEL_117;
      BattlePerformance__loadStorageObjectCameraCommon(
        (BattlePerformance_o *)AssumedBattleAssetLoadManager_k__BackingField,
        v165->fields.commonData,
        0);
    }
    goto LABEL_7;
  }
  if ( _1__state )
  {
    if ( _1__state == 1 )
    {
      this->fields.__1__state = -1;
      AssumedBattleAssetLoadManager_k__BackingField = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !AssumedBattleAssetLoadManager_k__BackingField )
        goto LABEL_117;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)AssumedBattleAssetLoadManager_k__BackingField, 0, 0);
      AssumedBattleAssetLoadManager_k__BackingField = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !AssumedBattleAssetLoadManager_k__BackingField )
        goto LABEL_117;
      v104 = (Il2CppObject *)AssetManager__WaitForExecutionUnloadUnuseAssets(
                               (AssetManager_o *)AssumedBattleAssetLoadManager_k__BackingField,
                               0);
      this->fields.__2__current = v104;
      p__2__current = &this->fields.__2__current;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v104, v105, v106, v107, v108, v109, v110);
      v103 = 2;
      goto LABEL_113;
    }
    if ( _1__state != 2 )
      return (char)AssumedBattleAssetLoadManager_k__BackingField;
    this->fields.__1__state = -1;
    goto LABEL_26;
  }
  this->fields.__1__state = -1;
  v20 = (Il2CppObject *)sub_21FFEBC(BattleRootComponent___c__DisplayClass13_0_TypeInfo);
  System_Object___ctor(v20, 0);
  this->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass13_0_o *)v20;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__8__1, (int32_t)v20, v21, v22, v23, v24, v25, v26);
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v27);
  AssumedBattleAssetLoadManager_k__BackingField = (void *)OptionManager__IsSavedBattleMemoryMode(0);
  if ( ((unsigned __int8)AssumedBattleAssetLoadManager_k__BackingField & 1) == 0 )
  {
LABEL_26:
    v36 = this->fields.__8__1;
    if ( !v36 )
      goto LABEL_117;
    ent = this->fields.ent;
    eventId = this->fields.eventId;
    v36->fields.isAssetsLoading = 1;
    v39 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v39,
      (Il2CppObject *)v36,
      Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__0__,
      0);
    if ( !_4__this )
      goto LABEL_117;
    AssetsIndependentToMainOne = BattleRootComponent__LoadAssetsIndependentToMainOne(_4__this, ent, eventId, v39, v40);
    UnityEngine_MonoBehaviour__StartCoroutine_83231452(
      (UnityEngine_MonoBehaviour_o *)_4__this,
      AssetsIndependentToMainOne,
      0);
    AssumedBattleAssetLoadManager_k__BackingField = this->fields.__8__1;
    if ( !AssumedBattleAssetLoadManager_k__BackingField )
      goto LABEL_117;
    *((_QWORD *)AssumedBattleAssetLoadManager_k__BackingField + 3) = 0;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)((char *)AssumedBattleAssetLoadManager_k__BackingField + 24),
      0,
      v42,
      v43,
      v44,
      v45,
      v46,
      v47);
    v49 = _4__this->fields.assetStorageLoadWrapper;
    v50 = BattleDataDefine_TypeInfo;
    if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v48);
      v50 = BattleDataDefine_TypeInfo;
    }
    v51 = (Il2CppObject *)this->fields.__8__1;
    ASSET_BATTLE_COMMON = v50->static_fields->ASSET_BATTLE_COMMON;
    v53 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v53,
      v51,
      Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__1__,
      0);
    if ( !v49 )
      goto LABEL_117;
    AssetStorageLoadWrapper__LoadAssetStorage(v49, ASSET_BATTLE_COMMON, v53, 1, 0);
    v54 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_AssetData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v54,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_AssetData___ctor__);
    this->fields._motionDataList_5__2 = (struct System_Collections_Generic_List_AssetData__o *)v54;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields._motionDataList_5__2,
      (int32_t)v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
    AllFieldMotionIds = BattleRootComponent__GetAllFieldMotionIds(
                          v61,
                          this->fields.battleEnt,
                          this->fields.ent,
                          &this->fields._baseMotionIds_5__4,
                          v62);
    this->fields._fieldMotionIds_5__3 = AllFieldMotionIds;
    p_fieldMotionIds_5__3 = &this->fields._fieldMotionIds_5__3;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields._fieldMotionIds_5__3,
      (int32_t)AllFieldMotionIds,
      v65,
      v66,
      v67,
      v68,
      v69,
      v70);
    v71 = this->fields.__8__1;
    if ( !v71 )
      goto LABEL_117;
    v71->fields.loadCompCnt = 0;
    v72 = (System_Collections_Generic_Dictionary_int__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_int__AssetData__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v72,
      (const MethodInfo_3F68354 *)Method_System_Collections_Generic_Dictionary_int__AssetData___ctor__);
    v71->fields.assetDataByIndex = (struct System_Collections_Generic_Dictionary_int__AssetData__o *)v72;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&v71->fields.assetDataByIndex,
      (int32_t)v72,
      v73,
      v74,
      v75,
      v76,
      v77,
      v78);
    v79 = *p_fieldMotionIds_5__3;
    if ( !*p_fieldMotionIds_5__3 )
      goto LABEL_117;
    max_length = v79->max_length;
    if ( (int)max_length >= 1 )
    {
      v81 = 0;
      do
      {
        if ( v81 >= (unsigned int)max_length )
          sub_21FFED4(AssumedBattleAssetLoadManager_k__BackingField);
        v82 = v79->m_Items[v81];
        v83 = sub_21FFEBC(BattleRootComponent___c__DisplayClass13_1_TypeInfo);
        System_Object___ctor((Il2CppObject *)v83, 0);
        if ( !v83 )
          goto LABEL_117;
        v90 = this->fields.__8__1;
        v91 = this;
        *(_QWORD *)(v83 + 24) = v90;
        v92 = v83 + 24;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v83 + 24), (int32_t)v90, v84, v85, v86, v87, v88, v89);
        *(_DWORD *)(v83 + 16) = v81;
        if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, v93);
        v94 = BattleDataDefine__FieldMotionPath(v82, 0);
        v95 = _4__this->fields.assetStorageLoadWrapper;
        v96 = v94;
        v97 = _4__this;
        v98 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
        AssetLoader_LoadEndDataHandler___ctor(
          v98,
          (Il2CppObject *)v83,
          Method_BattleRootComponent___c__DisplayClass13_1__LoadAsset_b__4__,
          0);
        if ( !v95 )
          goto LABEL_117;
        AssumedBattleAssetLoadManager_k__BackingField = (void *)AssetStorageLoadWrapper__LoadAssetStorage(
                                                                  v95,
                                                                  v96,
                                                                  v98,
                                                                  1,
                                                                  0);
        _4__this = v97;
        this = v91;
        if ( ((unsigned __int8)AssumedBattleAssetLoadManager_k__BackingField & 1) == 0 )
        {
          if ( !*(_QWORD *)v92 )
            goto LABEL_117;
          ++*(_DWORD *)(*(_QWORD *)v92 + 40LL);
        }
        LODWORD(max_length) = v79->max_length;
      }
      while ( (__int64)++v81 < (int)max_length );
    }
    AssumedBattleAssetLoadManager_k__BackingField = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    v99 = (AssetManager_o *)AssumedBattleAssetLoadManager_k__BackingField;
    if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, method);
    if ( !v99 )
      goto LABEL_117;
    AssetManager__UpdateLoadParallelMax(v99, BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX, 0);
    goto LABEL_50;
  }
  if ( !*(&System_GC_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, method);
  System_GC__Collect(0);
  v28 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
  UnityEngine_WaitForEndOfFrame___ctor(v28, 0);
  this->fields.__2__current = (Il2CppObject *)v28;
  v29 = &this->fields.__2__current;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v29, (int32_t)v28, v30, v31, v32, v33, v34, v35);
  LOBYTE(AssumedBattleAssetLoadManager_k__BackingField) = 1;
  *((_DWORD *)v29 - 2) = 1;
  return (char)AssumedBattleAssetLoadManager_k__BackingField;
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_BattleRootComponent__LoadAsset_d__13_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *v8; // x19
  int32_t _1__state; // w8
  BattleRootComponent_o *_4__this; // x20
  bool result; // w0
  Il2CppObject *v12; // x22
  Il2CppObject **p__8__1; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  int32_t BattleEffectId; // w22
  System_String_o *v22; // x0
  BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *v23; // x22
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x23
  Il2CppObject *v25; // x25
  AssetLoader_LoadEndDataHandler_o *v26; // x24
  Il2CppObject *Master_object; // x22
  System_Collections_Generic_IEnumerable_T__o *v28; // x23
  System_Collections_Generic_List_int__o *v29; // x21
  struct System_Int32_array *items; // x8
  _QWORD *v31; // x9
  __int64 size; // x10
  Il2CppObject *SingleEntity; // x21
  System_Collections_Generic_HashSet_int__o *v34; // x23
  int32_t v35; // w22
  __int64 v36; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *v37; // x22
  _BOOL8 v38; // x0
  __int64 v39; // x1
  _BOOL8 v40; // x0
  __int64 v41; // x1
  Il2CppObject *v42; // x8
  struct BattleRootComponent___c__DisplayClass14_0_o *_8__1; // x26
  System_String_o *monitor; // x23
  System_Action_o *_9__8; // x24
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  AssetStorageLoadWrapper_o *v52; // x22
  Il2CppObject *v53; // x24
  System_Action_o *v54; // x23
  System_Collections_Generic_HashSet_int__o *v55; // x22
  const MethodInfo *v56; // x3
  Il2CppObject *v57; // x1
  System_String_o *v58; // x0
  __int64 v59; // x1
  struct BattleRootComponent___c__DisplayClass14_0_o *v60; // x26
  AssetStorageLoadWrapper_o *v61; // x23
  System_String_o *v62; // x21
  AssetLoader_LoadEndDataHandler_o *_9__9; // x24
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  _BOOL8 Wrapper__LoadAssetStorage; // x0
  __int64 v71; // x1
  struct BattleRootComponent___c__DisplayClass14_0_o *v72; // x8
  __int64 v73; // x1
  System_Int32_array *v74; // x21
  Il2CppObject *_2__current; // x8
  BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *v76; // x21
  unsigned __int64 v77; // x27
  struct BattleRootComponent___c__DisplayClass14_0_o *v78; // x24
  System_String_o *v79; // x22
  AssetStorageLoadWrapper_o *v80; // x23
  AssetLoader_LoadEndDataHandler_o *_9__10; // x25
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  struct BattleRootComponent___c__DisplayClass14_0_o *v88; // x8
  long double v89; // q0
  _QWORD *v90; // x9
  __int64 v91; // x0
  __int64 v92; // x0
  Il2CppObject *v93; // x23
  AtlasManager_o *v94; // x21
  System_Action_o *v95; // x22
  __int64 v96; // x1
  Il2CppObject *v97; // x22
  System_Action_c *v98; // x0
  System_Action_o *v99; // x21
  __int64 v100; // x1
  Il2CppObject *v101; // x22
  System_Action_c *v102; // x0
  System_Action_o *v103; // x21
  __int64 v104; // x1
  Il2CppObject *v105; // x22
  BattlePerformance_o *perf; // x20
  System_Action_o *v107; // x21
  struct BattleRootComponent___c__DisplayClass14_0_o *v108; // x8
  Il2CppObject *v109; // x20
  System_Action_c *v110; // x0
  System_Action_o *v111; // x21
  long double v112; // q0
  __int64 v113; // x0
  __int64 v114; // x0
  long double v115; // q0
  _QWORD *v116; // x9
  __int64 v117; // x0
  __int64 v118; // x0
  Il2CppObject *v119; // x22
  AtlasManager_o *v120; // x20
  System_Action_o *v121; // x21
  AssetManager_o *v122; // x20
  struct BattleRootComponent___c__DisplayClass14_0_o *v123; // x8
  MissionNaviTransitionBoardItem_o *v124; // x19
  struct System_Int32_array *v125; // x8
  _QWORD *v126; // x9
  __int64 v127; // x10
  struct System_Int32_array *v128; // x8
  _QWORD *v129; // x9
  __int64 v130; // x10
  const MethodInfo *v131; // x1
  System_Collections_Generic_IEnumerable_T__o *ClassBoardCommandSpellEffectId; // x0
  __int64 v133; // x1
  System_Int32_array *v134; // x21
  AssetManager_o *v135; // x20
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v137; // x2
  System_String_o *v138; // x3
  int32_t v139; // w4
  int32_t v140; // w5
  bool v141; // w6
  bool v142; // w7
  int32_t current; // [xsp+14h] [xbp-BCh] BYREF
  System_Collections_Generic_List_Enumerator_int__o v144; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v145; // [xsp+30h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+48h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v147; // [xsp+50h] [xbp-80h] BYREF
  int32_t v148; // [xsp+6Ch] [xbp-64h] BYREF

  v8 = this;
  if ( (byte_593B3B9 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&BattleDataDefine_TypeInfo);
    sub_21FFC50(&BattleEffectUtility_TypeInfo);
    sub_21FFC50(&Method_DataManager_GetMaster_BattleMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_BgmMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_BuffMaster___);
    sub_21FFC50(&Method_DataManager_GetMaster_ConstantMaster___);
    sub_21FFC50(&DataManager_TypeInfo);
    sub_21FFC50(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    sub_21FFC50(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_21FFC50(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_int__get_Count__);
    sub_21FFC50(&System_Collections_Generic_HashSet_int__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int___ctor___91427360);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_int__TypeInfo);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&OptionManager_TypeInfo);
    sub_21FFC50(&ServantAssetLoadManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AtlasManager__getInstance__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_21FFC50(&SoundManager_TypeInfo);
    sub_21FFC50(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__0__);
    sub_21FFC50(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__10__);
    sub_21FFC50(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__1__);
    sub_21FFC50(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__2__);
    sub_21FFC50(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__3__);
    sub_21FFC50(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__4__);
    sub_21FFC50(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__5__);
    sub_21FFC50(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__6__);
    sub_21FFC50(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__7__);
    sub_21FFC50(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__8__);
    sub_21FFC50(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__9__);
    sub_21FFC50(&BattleRootComponent___c__DisplayClass14_0_TypeInfo);
    sub_21FFC50(&StringLiteral_2880/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE"*/);
    sub_21FFC50(&StringLiteral_2875/*"BATTLE_EFFECT_ID_3003001"*/);
    sub_21FFC50(&StringLiteral_3208/*"Battle/DropEffect/{0}"*/);
    sub_21FFC50(&StringLiteral_3209/*"Battle/Effect/"*/);
    sub_21FFC50(&StringLiteral_2881/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE_PIERCE"*/);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)sub_21FFC50(&StringLiteral_3201/*"Battle"*/);
    byte_593B3B9 = 1;
  }
  _1__state = v8->fields.__1__state;
  v148 = 0;
  memset(&v147, 0, sizeof(v147));
  entity = 0;
  memset(&v145, 0, sizeof(v145));
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
      v12 = (Il2CppObject *)sub_21FFEBC(BattleRootComponent___c__DisplayClass14_0_TypeInfo);
      System_Object___ctor(v12, 0);
      v8->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass14_0_o *)v12;
      p__8__1 = (Il2CppObject **)&v8->fields.__8__1;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->fields.__8__1, (int32_t)v12, v14, v15, v16, v17, v18, v19);
      if ( v8->fields.__8__1 )
      {
        v8->fields.__8__1->fields.loadCnt = 0;
        this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)v8->fields.ent;
        v8->fields._loadCntMax_5__2 = 0;
        if ( this )
        {
          BattleEffectId = QuestPhaseEntity__getBattleEffectId((QuestPhaseEntity_o *)this, 0, 0);
          if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v20);
          v148 = BattleEffectUtility__setBattleEffectId(BattleEffectId, 0);
          v22 = System_Int32__ToString((int32_t)&v148, 0);
          this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)System_String__Concat_75438412(
                                                                                  (System_String_o *)StringLiteral_3209/*"Battle/Effect/"*/,
                                                                                  v22,
                                                                                  0);
          ++v8->fields._loadCntMax_5__2;
          if ( _4__this )
          {
            v23 = this;
            assetStorageLoadWrapper = _4__this->fields.assetStorageLoadWrapper;
            v25 = *p__8__1;
            v26 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
            AssetLoader_LoadEndDataHandler___ctor(
              v26,
              v25,
              Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__0__,
              0);
            if ( assetStorageLoadWrapper )
            {
              this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)AssetStorageLoadWrapper__LoadAssetStorage(
                                                                                      assetStorageLoadWrapper,
                                                                                      (System_String_o *)v23,
                                                                                      v26,
                                                                                      1,
                                                                                      0);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                if ( !*p__8__1 )
                  goto LABEL_39;
                ++LODWORD((*p__8__1)[1].klass);
              }
              if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
              Master_object = DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_ConstantMaster___);
              this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_BuffMaster___);
              if ( this )
              {
                v28 = *(System_Collections_Generic_IEnumerable_T__o **)&this->fields._loadCntMax_5__2;
                v29 = (System_Collections_Generic_List_int__o *)sub_21FFEBC(System_Collections_Generic_List_int__TypeInfo);
                System_Collections_Generic_List_int____ctor_71510500(
                  v29,
                  v28,
                  (const MethodInfo_44329E4 *)Method_System_Collections_Generic_List_int___ctor___91427360);
                if ( Master_object )
                {
                  this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ConstantMaster__GetValue(
                                                                                          (ConstantMaster_o *)Master_object,
                                                                                          (System_String_o *)StringLiteral_2880/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE"*/,
                                                                                          0);
                  if ( v29 )
                  {
                    items = v29->fields._items;
                    v31 = Method_System_Collections_Generic_List_int__Add__;
                    ++v29->fields._version;
                    if ( items )
                    {
                      size = v29->fields._size;
                      if ( (unsigned int)size >= LODWORD(items->max_length) )
                      {
                        System_Collections_Generic_List_int___AddWithResize(
                          v29,
                          (int32_t)this,
                          *(const MethodInfo_4433138 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v29->fields._size = size + 1;
                        items->m_Items[size] = (int)this;
                      }
                      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ConstantMaster__GetValue(
                                                                                              (ConstantMaster_o *)Master_object,
                                                                                              (System_String_o *)StringLiteral_2875/*"BATTLE_EFFECT_ID_3003001"*/,
                                                                                              0);
                      v125 = v29->fields._items;
                      v126 = Method_System_Collections_Generic_List_int__Add__;
                      ++v29->fields._version;
                      if ( v125 )
                      {
                        v127 = v29->fields._size;
                        if ( (unsigned int)v127 >= LODWORD(v125->max_length) )
                        {
                          System_Collections_Generic_List_int___AddWithResize(
                            v29,
                            (int32_t)this,
                            *(const MethodInfo_4433138 **)(*(_QWORD *)(v126[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v29->fields._size = v127 + 1;
                          v125->m_Items[v127] = (int)this;
                        }
                        this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ConstantMaster__GetValue(
                                                                                                (ConstantMaster_o *)Master_object,
                                                                                                (System_String_o *)StringLiteral_2881/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE_PIERCE"*/,
                                                                                                0);
                        v128 = v29->fields._items;
                        v129 = Method_System_Collections_Generic_List_int__Add__;
                        ++v29->fields._version;
                        if ( v128 )
                        {
                          v130 = v29->fields._size;
                          v131 = (const MethodInfo *)(unsigned int)this;
                          if ( (unsigned int)v130 >= LODWORD(v128->max_length) )
                          {
                            System_Collections_Generic_List_int___AddWithResize(
                              v29,
                              (int32_t)this,
                              *(const MethodInfo_4433138 **)(*(_QWORD *)(v129[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v29->fields._size = v130 + 1;
                            v128->m_Items[v130] = (int)this;
                          }
                          ClassBoardCommandSpellEffectId = (System_Collections_Generic_IEnumerable_T__o *)BattleRootComponent__GetClassBoardCommandSpellEffectId(_4__this, v131);
                          System_Collections_Generic_List_int___AddRange(
                            v29,
                            ClassBoardCommandSpellEffectId,
                            (const MethodInfo_4433344 *)Method_System_Collections_Generic_List_int__AddRange__);
                          v134 = System_Collections_Generic_List_int___ToArray(
                                   v29,
                                   (const MethodInfo_4434BB8 *)Method_System_Collections_Generic_List_int__ToArray__);
                          if ( !*(&ServantAssetLoadManager_TypeInfo->_2.cctor_finished + 1) )
                            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo, v133);
                          this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ServantAssetLoadManager__preloadBattleCommonEffect(
                                                                                                  v134,
                                                                                                  0);
                          if ( _4__this->fields.data )
                          {
                            BattleData__addLoadedCommonEffectPath(_4__this->fields.data, (System_String_array *)this, 0);
                            this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
                            v135 = (AssetManager_o *)this;
                            if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
                              j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, method);
                            if ( v135 )
                            {
                              AssetManager__UpdateLoadParallelMax(
                                v135,
                                BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX,
                                0);
                              v8->fields.__2__current = 0;
                              p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
                              sub_21FFBF4(p__2__current, 0, v137, v138, v139, v140, v141, v142);
                              result = 1;
                              p__2__current[-1].fields._BoardType_k__BackingField = 1;
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
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, method);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_BattleMaster___);
    if ( !this )
      goto LABEL_39;
    SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                     (const MethodInfo_3EDFA94 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    v34 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v34,
      (const MethodInfo_4280264 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    if ( !SingleEntity )
      goto LABEL_39;
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingleEntity[1].klass;
    if ( !this )
      goto LABEL_39;
    v35 = 0;
    while ( v35 < BattleInfoData__getLastWave((BattleInfoData_o *)this, 0) + 1 )
    {
      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattleEntity__GetStageEntityAtWave(
                                                                              (BattleEntity_o *)SingleEntity,
                                                                              v35,
                                                                              0);
      if ( this )
      {
        if ( !v34 )
          goto LABEL_39;
        System_Collections_Generic_HashSet_int___Add(
          v34,
          (int32_t)this->fields.__8__1,
          (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattleEntity__GetStageEntityAtWave(
                                                                              (BattleEntity_o *)SingleEntity,
                                                                              v35,
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
            if ( !v34 )
              goto LABEL_39;
            System_Collections_Generic_HashSet_int___Add(
              v34,
              HIDWORD(this->fields.ent),
              (const MethodInfo_42814A4 *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
          this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingleEntity[1].klass;
          ++v35;
          if ( this )
            continue;
        }
      }
      goto LABEL_39;
    }
    if ( !*(&DataManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v36);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)DataManager__GetMaster_object_((const MethodInfo_3822E50 *)Method_DataManager_GetMaster_BgmMaster___);
    if ( !v34 )
      goto LABEL_39;
    v37 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
    System_Collections_Generic_HashSet_int___GetEnumerator(
      (System_Collections_Generic_HashSet_Enumerator_T__o *)&v144,
      v34,
      (const MethodInfo_4280E28 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    v147 = v144;
    v144.fields._list = 0;
    *(_QWORD *)&v144.fields._index = &v147;
    while ( 1 )
    {
      v38 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
              (System_Collections_Generic_HashSet_Enumerator_T__o *)&v147,
              (const MethodInfo_40C1EB0 *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
      if ( !v38 )
        break;
      if ( !v37 )
        sub_21FFECC(v38, v39);
      v40 = DataMasterBase_object__object__int___TryGetEntity(
              v37,
              &entity,
              v147.fields._current,
              (const MethodInfo_3EDD3D8 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( v40 )
      {
        v42 = entity;
        ++v8->fields._loadCntMax_5__2;
        if ( !v42 )
          sub_21FFECC(v40, v41);
        _8__1 = v8->fields.__8__1;
        if ( !_8__1 )
          sub_21FFECC(v40, v41);
        monitor = (System_String_o *)v42[1].monitor;
        _9__8 = _8__1->fields.__9__8;
        if ( !_9__8 )
        {
          _9__8 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
          System_Action___ctor(
            _9__8,
            (Il2CppObject *)_8__1,
            Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__8__,
            0);
          _8__1->fields.__9__8 = _9__8;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&_8__1->fields.__9__8,
            (int32_t)_9__8,
            v46,
            v47,
            v48,
            v49,
            v50,
            v51);
        }
        if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v41);
        SoundManager__downloadAudioAssetStorage(monitor, _9__8, 1, 0);
      }
    }
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      (System_Collections_Generic_HashSet_Enumerator_T__o *)&v147,
      (const MethodInfo_40C1EAC *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    ++v8->fields._loadCntMax_5__2;
    if ( !_4__this )
      goto LABEL_39;
    v52 = _4__this->fields.assetStorageLoadWrapper;
    v53 = (Il2CppObject *)v8->fields.__8__1;
    v54 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v54,
      v53,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__1__,
      0);
    if ( !v52 )
      goto LABEL_39;
    AssetStorageLoadWrapper__LoadAudioAssetStorage(v52, (System_String_o *)StringLiteral_3201/*"Battle"*/, v54, 1, 0);
    v55 = (System_Collections_Generic_HashSet_int__o *)sub_21FFEBC(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v55,
      (const MethodInfo_4280264 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattleRootComponent__GetLoadDropEffectType(
                                                                            _4__this,
                                                                            (BattleEntity_o *)SingleEntity,
                                                                            v55,
                                                                            v56);
    if ( !this )
      goto LABEL_39;
    if ( SLODWORD(this->fields.__2__current) >= 1 )
    {
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v144,
        (System_Collections_Generic_List_int__o *)this,
        (const MethodInfo_4433BE8 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v145 = v144;
      v144.fields._list = 0;
      *(_QWORD *)&v144.fields._index = &v145;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v145,
                (const MethodInfo_40C2130 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        current = v145.fields._current;
        v57 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &current);
        v58 = System_String__Format((System_String_o *)StringLiteral_3208/*"Battle/DropEffect/{0}"*/, v57, 0);
        v60 = v8->fields.__8__1;
        ++v8->fields._loadCntMax_5__2;
        if ( !v60 )
          sub_21FFECC(v58, v59);
        v61 = _4__this->fields.assetStorageLoadWrapper;
        v62 = v58;
        _9__9 = v60->fields.__9__9;
        if ( !_9__9 )
        {
          _9__9 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
          AssetLoader_LoadEndDataHandler___ctor(
            _9__9,
            (Il2CppObject *)v60,
            Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__9__,
            0);
          v60->fields.__9__9 = _9__9;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v60->fields.__9__9,
            (int32_t)_9__9,
            v64,
            v65,
            v66,
            v67,
            v68,
            v69);
        }
        if ( !v61 )
          sub_21FFECC(v58, v59);
        Wrapper__LoadAssetStorage = AssetStorageLoadWrapper__LoadAssetStorage(v61, v62, _9__9, 1, 0);
        if ( !Wrapper__LoadAssetStorage )
        {
          v72 = v8->fields.__8__1;
          if ( !v72 )
            sub_21FFECC(Wrapper__LoadAssetStorage, v71);
          ++v72->fields.loadCnt;
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v145,
        (const MethodInfo_40C212C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    }
    if ( !v55 )
      goto LABEL_39;
    if ( v55->fields._count >= 1 )
    {
      v74 = System_Linq_Enumerable__ToArray_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)v55,
              (const MethodInfo_38684CC *)Method_System_Linq_Enumerable_ToArray_int___);
      if ( !*(&BattleEffectUtility_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo, v73);
      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattleEffectUtility__GetBattleCommonEffectPathList(
                                                                              v74,
                                                                              0);
      if ( !this )
        goto LABEL_39;
      _2__current = this->fields.__2__current;
      v76 = this;
      if ( (int)_2__current >= 1 )
      {
        v77 = 0;
        do
        {
          if ( v77 >= (unsigned int)_2__current )
            sub_21FFED4(this);
          v78 = v8->fields.__8__1;
          v79 = (System_String_o *)*((_QWORD *)&v76->fields.ent + v77);
          ++v8->fields._loadCntMax_5__2;
          if ( !v78 )
            goto LABEL_39;
          v80 = _4__this->fields.assetStorageLoadWrapper;
          _9__10 = v78->fields.__9__10;
          if ( !_9__10 )
          {
            _9__10 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
            AssetLoader_LoadEndDataHandler___ctor(
              _9__10,
              (Il2CppObject *)v78,
              Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__10__,
              0);
            v78->fields.__9__10 = _9__10;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&v78->fields.__9__10,
              (int32_t)_9__10,
              v82,
              v83,
              v84,
              v85,
              v86,
              v87);
          }
          if ( !v80 )
            goto LABEL_39;
          this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)AssetStorageLoadWrapper__LoadAssetStorage(
                                                                                  v80,
                                                                                  v79,
                                                                                  _9__10,
                                                                                  1,
                                                                                  0);
          if ( ((unsigned __int8)this & 1) == 0 )
          {
            v88 = v8->fields.__8__1;
            if ( !v88 )
              goto LABEL_39;
            ++v88->fields.loadCnt;
          }
          LODWORD(_2__current) = v76->fields.__2__current;
        }
        while ( (__int64)++v77 < (int)_2__current );
      }
    }
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)_4__this->fields.data;
    if ( !this )
      goto LABEL_39;
    if ( BattleData__IsWarBoard((BattleData_o *)this, 0) )
    {
      v90 = Method_SingletonMonoBehaviour_AtlasManager__getInstance__;
      ++v8->fields._loadCntMax_5__2;
      v91 = v90[4];
      if ( (*(_WORD *)(v91 + 309) & 1) == 0 )
        v91 = sub_2237AF8(v89);
      v92 = *(_QWORD *)(*(_QWORD *)(v91 + 192) + 16LL);
      if ( (*(_WORD *)(v92 + 309) & 1) == 0 )
        v92 = sub_2237AF8(v89);
      v93 = (Il2CppObject *)v8->fields.__8__1;
      v94 = **(AtlasManager_o ***)(v92 + 184);
      v95 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(
        v95,
        v93,
        Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__2__,
        0);
      if ( !v94 )
        goto LABEL_39;
      AtlasManager__LoadWarBoardAtlas(v94, v95, 0);
    }
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)_4__this->fields.data;
    if ( !this )
      goto LABEL_39;
    if ( BattleData__IsInterruptionQuest((BattleData_o *)this, 0) )
    {
      v97 = (Il2CppObject *)v8->fields.__8__1;
      v98 = System_Action_TypeInfo;
      ++v8->fields._loadCntMax_5__2;
      v99 = (System_Action_o *)sub_21FFEBC(v98);
      System_Action___ctor(
        v99,
        v97,
        Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__3__,
        0);
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v100);
      AtlasManager__LoadPartyOrganizationAtlas(v99, 1, 0);
    }
    if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v96);
    if ( OptionManager__isSavedMemoryMode(0) )
    {
      v101 = (Il2CppObject *)v8->fields.__8__1;
      v102 = System_Action_TypeInfo;
      ++v8->fields._loadCntMax_5__2;
      v103 = (System_Action_o *)sub_21FFEBC(v102);
      System_Action___ctor(
        v103,
        v101,
        Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__4__,
        0);
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v104);
      AtlasManager__LoadFaceBattleAtlas(v103, 0);
    }
    v105 = (Il2CppObject *)v8->fields.__8__1;
    ++v8->fields._loadCntMax_5__2;
    perf = _4__this->fields.perf;
    v107 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v107,
      v105,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__5__,
      0);
    if ( !perf )
      goto LABEL_39;
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattlePerformance__LoadEventInfoPointGauge(
                                                                            perf,
                                                                            v107,
                                                                            v8->fields.eventId,
                                                                            0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v108 = v8->fields.__8__1;
      if ( !v108 )
        goto LABEL_39;
      ++v108->fields.loadCnt;
    }
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, method);
    AtlasManager__ReleaseEventAtlas(0);
    v109 = (Il2CppObject *)v8->fields.__8__1;
    v110 = System_Action_TypeInfo;
    ++v8->fields._loadCntMax_5__2;
    v111 = (System_Action_o *)sub_21FFEBC(v110);
    System_Action___ctor(
      v111,
      v109,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__6__,
      0);
    AtlasManager__LoadEventAtlas(v111, 1, 0);
    v113 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
    if ( (*(_WORD *)(v113 + 309) & 1) == 0 )
      v113 = sub_2237AF8(v112);
    v114 = *(_QWORD *)(*(_QWORD *)(v113 + 192) + 16LL);
    if ( (*(_WORD *)(v114 + 309) & 1) == 0 )
      v114 = sub_2237AF8(v112);
    this = **(BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o ***)(v114 + 184);
    if ( !this )
      goto LABEL_39;
    AtlasManager__UnloadBuffIconAtlas((AtlasManager_o *)this, 0);
    v116 = Method_SingletonMonoBehaviour_AtlasManager__getInstance__;
    ++v8->fields._loadCntMax_5__2;
    v117 = v116[4];
    if ( (*(_WORD *)(v117 + 309) & 1) == 0 )
      v117 = sub_2237AF8(v115);
    v118 = *(_QWORD *)(*(_QWORD *)(v117 + 192) + 16LL);
    if ( (*(_WORD *)(v118 + 309) & 1) == 0 )
      v118 = sub_2237AF8(v115);
    v119 = (Il2CppObject *)v8->fields.__8__1;
    v120 = **(AtlasManager_o ***)(v118 + 184);
    v121 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v121,
      v119,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__7__,
      0);
    if ( !v120 )
      goto LABEL_39;
    AtlasManager__LoadBuffIconAtlas(v120, v121, 0);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    v122 = (AssetManager_o *)this;
    if ( !*(&BattleDataDefine_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo, method);
    if ( !v122 )
LABEL_39:
      sub_21FFECC(this, method);
    AssetManager__UpdateLoadParallelMax(v122, BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX, 0);
  }
  v123 = v8->fields.__8__1;
  if ( !v123 )
    goto LABEL_39;
  if ( v123->fields.loadCnt >= v8->fields._loadCntMax_5__2 )
  {
    ActionExtensions__Call(v8->fields.finishCallback, 0);
    return 0;
  }
  else
  {
    v8->fields.__2__current = 0;
    v124 = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
    sub_21FFBF4(v124, 0, v2, v3, v4, v5, v6, v7);
    result = 1;
    v124[-1].fields._BoardType_k__BackingField = 2;
  }
  return result;
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593B3AD & 1) == 0 )
  {
    sub_21FFC50(&BattleRootComponent___c_TypeInfo);
    byte_593B3AD = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(BattleRootComponent___c_TypeInfo);
  System_Object___ctor(v1, 0);
  BattleRootComponent___c_TypeInfo->static_fields->__9 = (struct BattleRootComponent___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)BattleRootComponent___c_TypeInfo->static_fields,
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
  if ( (byte_593B3AE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__AssetData__get_Key__);
    byte_593B3AE = 1;
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
  if ( (byte_593B3AF & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_KeyValuePair_int__AssetData__get_Value__);
    byte_593B3AF = 1;
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.commonData = common;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.commonData,
    (int32_t)common,
    (System_String_o *)method,
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
  if ( (byte_593B3B0 & 1) == 0 )
  {
    this = (BattleRootComponent___c__DisplayClass13_1_o *)sub_21FFC50(&Method_System_Collections_Generic_Dictionary_int__AssetData__Add__);
    byte_593B3B0 = 1;
  }
  CS___8__locals1 = v4->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (this = (BattleRootComponent___c__DisplayClass13_1_o *)CS___8__locals1->fields.assetDataByIndex) == 0
    || (System_Collections_Generic_Dictionary_int__object___Add(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          v4->fields.index,
          (Il2CppObject *)motionData,
          (const MethodInfo_3F68D08 *)Method_System_Collections_Generic_Dictionary_int__AssetData__Add__),
        (v6 = v4->fields.CS___8__locals1) == 0) )
  {
    sub_21FFECC(this, motionData);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields.uniqueCameraData = cameraData;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)cameraData,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  const MethodInfo *v4; // x3

  if ( (byte_593B3B1 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_string__RemoveAt__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_593B3B1 = 1;
  }
  bgmList = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
  if ( !bgmList
    || (System_Collections_Generic_List_object___RemoveAt(
          bgmList,
          bgmList->fields._size - 1,
          (const MethodInfo_44512C4 *)Method_System_Collections_Generic_List_string__RemoveAt__),
        (bgmList = (System_Collections_Generic_List_object__o *)this->fields.__4__this) == 0) )
  {
    sub_21FFECC(bgmList, method);
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
  __int64 v5; // x1
  struct System_Action_string__o *_9__2; // x22
  int32_t questId; // w20
  int32_t questPhase; // w21
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  struct BattleRootComponent_o *_4__this; // x8

  if ( (byte_593B3B3 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_string__TypeInfo);
    sub_21FFC50(&ScriptManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_21FFC50(&Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__2__);
    byte_593B3B3 = 1;
  }
  if ( System_String__IsNullOrEmpty(demo1, 0) )
  {
    _9__2 = this->fields.__9__2;
    questId = this->fields.questId;
    questPhase = this->fields.questPhase;
    if ( !_9__2 )
    {
      _9__2 = (struct System_Action_string__o *)sub_21FFEBC(System_Action_string__TypeInfo);
      System_Action_object____ctor(
        (System_Action_object__o *)_9__2,
        (Il2CppObject *)this,
        Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__2__,
        0);
      this->fields.__9__2 = _9__2;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__9__2, (int32_t)_9__2, v9, v10, v11, v12, v13, v14);
    }
    if ( !*(&ScriptManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo, v5);
    ScriptManager__LoadBattleEndGameDemo(questId, questPhase, 0, _9__2, 0, 0);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    _4__this = this->fields.__4__this;
    if ( !_4__this || !Instance )
      sub_21FFECC(Instance, v16);
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

  if ( (byte_593B3B2 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_593B3B2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0), !this->fields.__4__this) )
    sub_21FFECC(Instance, v5);
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

  if ( (byte_593B3B4 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_593B3B4 = 1;
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
    sub_21FFECC(IsNullOrEmpty, v6);
  }
  IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  int32_t _1__state; // w8
  AssetManager_o *Instance; // x0
  struct BattleRootComponent_o *_4__this; // x21
  Il2CppObject *v12; // x20
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  __int64 v19; // x1
  UnityEngine_WaitForEndOfFrame_o *v20; // x20
  Il2CppObject **v21; // x19
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  __int64 v28; // x1
  Il2CppObject *v29; // x20
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  struct BattleRootComponent___c__DisplayClass20_1_o *_8__1; // x21
  System_Action_o *v37; // x20
  __int64 v38; // x1
  struct BattleRootComponent___c__DisplayClass20_1_o *v39; // x8
  Il2CppObject *v40; // x20
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7
  struct BattleRootComponent___c__DisplayClass20_2_o *v47; // x21
  System_Action_o *v48; // x20
  __int64 v49; // x1
  struct BattleRootComponent___c__DisplayClass20_0_o *_8__3; // x21
  System_Action_o *v51; // x20
  __int64 v52; // x1
  struct BattleRootComponent___c__DisplayClass20_0_o *v53; // x8
  UnityEngine_WaitForEndOfFrame_o *v54; // x20
  Il2CppObject **p__2__current; // x19
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  int v62; // w8
  Il2CppObject *v63; // x0
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  struct BattleRootComponent___c__DisplayClass20_0_o *v70; // x21
  System_Action_o *v71; // x20
  __int64 v72; // x1
  struct BattleRootComponent___c__DisplayClass20_0_o *v73; // x8
  UnityEngine_WaitForEndOfFrame_o *v74; // x20
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  struct BattleRootComponent___c__DisplayClass20_0_o *v81; // x21
  System_Action_o *v82; // x20
  __int64 v83; // x1
  struct BattleRootComponent___c__DisplayClass20_2_o *_8__2; // x8
  UnityEngine_WaitForEndOfFrame_o *v85; // x20
  System_String_o *v86; // x2
  System_String_o *v87; // x3
  int32_t v88; // w4
  int32_t v89; // w5
  bool v90; // w6
  bool v91; // w7
  struct BattleRootComponent___c__DisplayClass20_0_o *v92; // x8
  UnityEngine_WaitForEndOfFrame_o *v93; // x20
  System_String_o *v94; // x2
  System_String_o *v95; // x3
  int32_t v96; // w4
  int32_t v97; // w5
  bool v98; // w6
  bool v99; // w7
  struct System_Action_o *callback; // x8

  if ( (byte_593B3BA & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&System_GC_TypeInfo);
    sub_21FFC50(&OptionManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_21FFC50(&Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__0__);
    sub_21FFC50(&Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__1__);
    sub_21FFC50(&Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__2__);
    sub_21FFC50(&BattleRootComponent___c__DisplayClass20_0_TypeInfo);
    sub_21FFC50(&Method_BattleRootComponent___c__DisplayClass20_1__loadOutGameAsset_b__3__);
    sub_21FFC50(&BattleRootComponent___c__DisplayClass20_1_TypeInfo);
    sub_21FFC50(&Method_BattleRootComponent___c__DisplayClass20_2__loadOutGameAsset_b__4__);
    sub_21FFC50(&BattleRootComponent___c__DisplayClass20_2_TypeInfo);
    sub_21FFC50(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_593B3BA = 1;
  }
  _1__state = this->fields.__1__state;
  Instance = 0;
  if ( _1__state <= 5 )
  {
    if ( _1__state > 2 )
    {
      if ( _1__state != 3 )
      {
        if ( _1__state == 4 )
        {
          this->fields.__1__state = -1;
LABEL_81:
          _8__2 = this->fields.__8__2;
          if ( _8__2 )
          {
            if ( _8__2->fields.isFaceAtlasLoaded )
            {
              if ( !*(&System_GC_TypeInfo->_2.cctor_finished + 1) )
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, method);
              System_GC__Collect(0);
              v85 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v85, 0);
              this->fields.__2__current = (Il2CppObject *)v85;
              p__2__current = &this->fields.__2__current;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v85, v86, v87, v88, v89, v90, v91);
              v62 = 5;
            }
            else
            {
              this->fields.__2__current = 0;
              p__2__current = &this->fields.__2__current;
              sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v2, v3, v4, v5, v6, v7);
              v62 = 4;
            }
            goto LABEL_100;
          }
LABEL_102:
          sub_21FFECC(Instance, method);
        }
        this->fields.__8__2 = 0;
        this->fields.__1__state = -1;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__8__2, 0, v2, v3, v4, v5, v6, v7);
        goto LABEL_45;
      }
      this->fields.__1__state = -1;
    }
    else
    {
      _4__this = this->fields.__4__this;
      if ( _1__state )
      {
        if ( _1__state == 1 )
        {
          this->fields.__1__state = -1;
          Instance = (AssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
          if ( !Instance )
            goto LABEL_102;
          AssetManager__RequestUnloadUnusedAssets(Instance, 0, 0);
          Instance = (AssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
          if ( !Instance )
            goto LABEL_102;
          v63 = (Il2CppObject *)AssetManager__WaitForExecutionUnloadUnuseAssets(Instance, 0);
          this->fields.__2__current = v63;
          p__2__current = &this->fields.__2__current;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v63, v64, v65, v66, v67, v68, v69);
          v62 = 2;
          goto LABEL_100;
        }
        if ( _1__state != 2 )
          return (char)Instance;
        this->fields.__1__state = -1;
      }
      else
      {
        this->fields.__1__state = -1;
        v12 = (Il2CppObject *)sub_21FFEBC(BattleRootComponent___c__DisplayClass20_0_TypeInfo);
        System_Object___ctor(v12, 0);
        this->fields.__8__3 = (struct BattleRootComponent___c__DisplayClass20_0_o *)v12;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&this->fields.__8__3,
          (int32_t)v12,
          v13,
          v14,
          v15,
          v16,
          v17,
          v18);
        if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v19);
        Instance = (AssetManager_o *)OptionManager__isSavedMemoryMode(0);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          if ( !*(&System_GC_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, method);
          System_GC__Collect(0);
          v20 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
          UnityEngine_WaitForEndOfFrame___ctor(v20, 0);
          this->fields.__2__current = (Il2CppObject *)v20;
          v21 = &this->fields.__2__current;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v21, (int32_t)v20, v22, v23, v24, v25, v26, v27);
          LOBYTE(Instance) = 1;
          *((_DWORD *)v21 - 2) = 1;
          return (char)Instance;
        }
      }
      if ( !_4__this )
        goto LABEL_102;
      Instance = (AssetManager_o *)_4__this->fields.perf;
      if ( !Instance )
        goto LABEL_102;
      if ( BattlePerformance__isActiveEventInfoGauge((BattlePerformance_o *)Instance, 0) )
        goto LABEL_38;
      v29 = (Il2CppObject *)sub_21FFEBC(BattleRootComponent___c__DisplayClass20_1_TypeInfo);
      System_Object___ctor(v29, 0);
      this->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass20_1_o *)v29;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__8__1, (int32_t)v29, v30, v31, v32, v33, v34, v35);
      _8__1 = this->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_102;
      _8__1->fields.isEventAtlasLoaded = 0;
      v37 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(
        v37,
        (Il2CppObject *)_8__1,
        Method_BattleRootComponent___c__DisplayClass20_1__loadOutGameAsset_b__3__,
        0);
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v38);
      AtlasManager__LoadEventAtlas(v37, 1, 0);
    }
    Instance = (AssetManager_o *)&this->fields.__8__1;
    v39 = this->fields.__8__1;
    if ( !v39 )
      goto LABEL_102;
    if ( !v39->fields.isEventAtlasLoaded )
    {
      this->fields.__2__current = 0;
      p__2__current = &this->fields.__2__current;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v2, v3, v4, v5, v6, v7);
      v62 = 3;
      goto LABEL_100;
    }
    Instance->klass = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)Instance, 0, v2, v3, v4, v5, v6, v7);
LABEL_38:
    if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v28);
    Instance = (AssetManager_o *)OptionManager__isSavedMemoryMode(0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      v40 = (Il2CppObject *)sub_21FFEBC(BattleRootComponent___c__DisplayClass20_2_TypeInfo);
      System_Object___ctor(v40, 0);
      this->fields.__8__2 = (struct BattleRootComponent___c__DisplayClass20_2_o *)v40;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.__8__2, (int32_t)v40, v41, v42, v43, v44, v45, v46);
      v47 = this->fields.__8__2;
      if ( !v47 )
        goto LABEL_102;
      v47->fields.isFaceAtlasLoaded = 0;
      v48 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(
        v48,
        (Il2CppObject *)v47,
        Method_BattleRootComponent___c__DisplayClass20_2__loadOutGameAsset_b__4__,
        0);
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v49);
      AtlasManager__LoadFaceAtlas(v48, 1, 0);
      goto LABEL_81;
    }
LABEL_45:
    _8__3 = this->fields.__8__3;
    if ( !_8__3 )
      goto LABEL_102;
    _8__3->fields.isCharaGraphOptionAtlasLoaded = 0;
    v51 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v51,
      (Il2CppObject *)_8__3,
      Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__0__,
      0);
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v52);
    AtlasManager__LoadCharaGraphOptionAtlas(v51, 1, 0);
    goto LABEL_49;
  }
  if ( _1__state <= 8 )
  {
    if ( _1__state != 6 )
    {
      if ( _1__state != 7 )
      {
        this->fields.__1__state = -1;
LABEL_67:
        v73 = this->fields.__8__3;
        if ( !v73 )
          goto LABEL_102;
        if ( v73->fields.isBannerAtlasLoaded )
        {
          if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method);
          Instance = (AssetManager_o *)OptionManager__isSavedMemoryMode(0);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            if ( !*(&System_GC_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, method);
            System_GC__Collect(0);
            v74 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
            UnityEngine_WaitForEndOfFrame___ctor(v74, 0);
            this->fields.__2__current = (Il2CppObject *)v74;
            p__2__current = &this->fields.__2__current;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v74, v75, v76, v77, v78, v79, v80);
            v62 = 9;
            goto LABEL_100;
          }
          goto LABEL_75;
        }
        this->fields.__2__current = 0;
        p__2__current = &this->fields.__2__current;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v2, v3, v4, v5, v6, v7);
        v62 = 8;
LABEL_100:
        *((_DWORD *)p__2__current - 2) = v62;
        LOBYTE(Instance) = 1;
        return (char)Instance;
      }
      this->fields.__1__state = -1;
LABEL_63:
      v70 = this->fields.__8__3;
      if ( !v70 )
        goto LABEL_102;
      v70->fields.isBannerAtlasLoaded = 0;
      v71 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
      System_Action___ctor(
        v71,
        (Il2CppObject *)v70,
        Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__1__,
        0);
      if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v72);
      AtlasManager__LoadBanner(v71, 1, 0);
      goto LABEL_67;
    }
    this->fields.__1__state = -1;
LABEL_49:
    v53 = this->fields.__8__3;
    if ( !v53 )
      goto LABEL_102;
    if ( !v53->fields.isCharaGraphOptionAtlasLoaded )
    {
      this->fields.__2__current = 0;
      p__2__current = &this->fields.__2__current;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v2, v3, v4, v5, v6, v7);
      v62 = 6;
      goto LABEL_100;
    }
    if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method);
    Instance = (AssetManager_o *)OptionManager__isSavedMemoryMode(0);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( !*(&System_GC_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, method);
      System_GC__Collect(0);
      v54 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v54, 0);
      this->fields.__2__current = (Il2CppObject *)v54;
      p__2__current = &this->fields.__2__current;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v54, v56, v57, v58, v59, v60, v61);
      v62 = 7;
      goto LABEL_100;
    }
    goto LABEL_63;
  }
  if ( _1__state == 9 )
  {
    this->fields.__1__state = -1;
LABEL_75:
    v81 = this->fields.__8__3;
    if ( !v81 )
      goto LABEL_102;
    v81->fields.isEventUIAtlasLoaded = 0;
    v82 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(
      v82,
      (Il2CppObject *)v81,
      Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__2__,
      0);
    if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v83);
    AtlasManager__LoadEventUI(v82, 1, 0);
    goto LABEL_87;
  }
  if ( _1__state != 10 )
  {
    if ( _1__state != 11 )
      return (char)Instance;
    this->fields.__1__state = -1;
    goto LABEL_95;
  }
  this->fields.__1__state = -1;
LABEL_87:
  v92 = this->fields.__8__3;
  if ( !v92 )
    goto LABEL_102;
  if ( !v92->fields.isEventUIAtlasLoaded )
  {
    this->fields.__2__current = 0;
    p__2__current = &this->fields.__2__current;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, 0, v2, v3, v4, v5, v6, v7);
    v62 = 10;
    goto LABEL_100;
  }
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method);
  Instance = (AssetManager_o *)OptionManager__isSavedMemoryMode(0);
  if ( ((unsigned __int8)Instance & 1) != 0 )
  {
    if ( !*(&System_GC_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_GC_TypeInfo, method);
    System_GC__Collect(0);
    v93 = (UnityEngine_WaitForEndOfFrame_o *)sub_21FFEBC(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v93, 0);
    this->fields.__2__current = (Il2CppObject *)v93;
    p__2__current = &this->fields.__2__current;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p__2__current, (int32_t)v93, v94, v95, v96, v97, v98, v99);
    v62 = 11;
    goto LABEL_100;
  }
LABEL_95:
  callback = this->fields.callback;
  if ( !callback )
    goto LABEL_102;
  ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
    callback->fields.method_code,
    callback->fields.method);
  LOBYTE(Instance) = 0;
  return (char)Instance;
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

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_BattleRootComponent__loadOutGameAsset_d__20_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
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
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FFEA34;
LABEL_6:
  this->fields.extra_arg = (intptr_t)&loc_1FFE9F4;
}


System_IAsyncResult_o *BattleRootComponent_callBackBeginResume__BeginInvoke(
        BattleRootComponent_callBackBeginResume_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  return (System_IAsyncResult_o *)sub_21FFC04(this, &v5, callback, object);
}


void BattleRootComponent_callBackBeginResume__EndInvoke(
        BattleRootComponent_callBackBeginResume_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void BattleRootComponent_callBackBeginResume__Invoke(
        BattleRootComponent_callBackBeginResume_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}