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
  System_Int32_array *BaseBattleFieldMotionIds; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_Collections_Generic_IEnumerable_T__o *v24; // x21
  System_Collections_Generic_List_int__o *v25; // x20
  System_Collections_Generic_IEnumerable_TSource__o *AllExistsScriptEnemyDeckSvtArray; // x0
  BattleRootComponent_c *klass; // x8
  BattleRootComponent_o *v28; // x21
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x21
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  BattleDeckServantData_o *v42; // x0
  __int64 v43; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v44; // x0
  __int64 v45; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v46; // x22
  System_Collections_Generic_IEnumerable_TSource__c *v47; // x8
  __int64 v48; // x9
  int32_t *v49; // x10
  __int64 p_method; // x0
  __int64 v51; // x1
  __int64 v52; // x22
  __int64 v53; // x8
  __int64 v54; // x9
  int *v55; // x10
  __int64 v56; // x0
  __int64 v57; // x8
  __int64 v58; // x9
  int *v59; // x10
  __int64 v60; // x0
  __int64 v61; // x0
  __int64 v62; // x1
  int32_t v63; // w23
  _BOOL8 v64; // x0
  __int64 v65; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v67; // x9
  __int64 size; // x10
  __int64 v69; // x8
  __int64 v70; // x9
  int *v71; // x10
  __int64 v72; // x0
  __int64 v73; // x8
  __int64 v74; // x9
  int *v75; // x10
  __int64 v76; // x0
  int32_t v77; // w21
  StageEntity_o *v78; // x22
  long double inited; // q0
  System_Collections_Generic_IEnumerable_TSource__o *WaveFieldMotionIds; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v81; // x23
  _QWORD *v82; // x23
  __int64 v83; // x8
  __int64 v84; // x0
  System_Collections_Generic_IEnumerable_TSource__c *v85; // x8
  __int64 v86; // x9
  int32_t *v87; // x10
  __int64 v88; // x0
  __int64 v89; // x1
  __int64 v90; // x23
  __int64 v91; // x8
  __int64 v92; // x9
  int *v93; // x10
  __int64 v94; // x0
  __int64 v95; // x8
  __int64 v96; // x9
  int *v97; // x10
  __int64 v98; // x0
  __int64 v99; // x0
  __int64 v100; // x1
  int32_t v101; // w24
  _BOOL8 v102; // x0
  __int64 v103; // x1
  struct System_Int32_array *v104; // x8
  _QWORD *v105; // x9
  __int64 v106; // x10
  __int64 v107; // x8
  __int64 v108; // x9
  int *v109; // x10
  __int64 v110; // x0
  BattleEntity_o *v113; // [xsp+10h] [xbp-70h]
  System_Int32_array *fieldMotionIds; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4B04987 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Array_Empty_int___, battleEnt);
    sub_1BC3008(&Method_System_Linq_Enumerable_Reverse_BattleDeckServantData___, v8);
    sub_1BC3008(&Method_System_Linq_Enumerable_Reverse_int___, v9);
    sub_1BC3008(&System_IDisposable_TypeInfo, v10);
    sub_1BC3008(&System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, v11);
    sub_1BC3008(&System_Collections_Generic_IEnumerable_int__TypeInfo, v12);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo, v13);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_int__TypeInfo, v14);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Contains__, v17);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__ToArray__, v18);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor___76760816, v19);
    this = (BattleRootComponent_o *)sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v20);
    byte_4B04987 = 1;
  }
  fieldMotionIds = 0LL;
  if ( !battleEnt )
    goto LABEL_131;
  this = (BattleRootComponent_o *)battleEnt->fields.battleInfo;
  if ( !this )
    goto LABEL_131;
  BaseBattleFieldMotionIds = BattleInfoData__GetBaseBattleFieldMotionIds((BattleInfoData_o *)this, questPhaseEnt, 0LL);
  *baseMotionIds = BaseBattleFieldMotionIds;
  sub_1BC2FAC((CGThumbnailListItem_o *)baseMotionIds, (int32_t)BaseBattleFieldMotionIds, v22, v23);
  v24 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Reverse_int_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)*baseMotionIds,
                                                         (const MethodInfo_302E530 *)Method_System_Linq_Enumerable_Reverse_int___);
  v25 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_57161456(
    v25,
    v24,
    (const MethodInfo_36836F0 *)Method_System_Collections_Generic_List_int___ctor___76760816);
  this = (BattleRootComponent_o *)battleEnt->fields.battleInfo;
  if ( !this )
    goto LABEL_131;
  AllExistsScriptEnemyDeckSvtArray = (System_Collections_Generic_IEnumerable_TSource__o *)BattleInfoData__get_AllExistsScriptEnemyDeckSvtArray(
                                                                                            (BattleInfoData_o *)this,
                                                                                            0LL);
  this = (BattleRootComponent_o *)System_Linq_Enumerable__Reverse_object_(
                                    AllExistsScriptEnemyDeckSvtArray,
                                    (const MethodInfo_302E588 *)Method_System_Linq_Enumerable_Reverse_BattleDeckServantData___);
  if ( !this )
    goto LABEL_131;
  klass = this->klass;
  v28 = this;
  v29 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleDeckServantData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo )
    {
      --v29;
      p_offset += 4;
      if ( !v29 )
        goto LABEL_11;
    }
    v31 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_11:
    v31 = sub_1C13570(this, System_Collections_Generic_IEnumerable_BattleDeckServantData__TypeInfo, 0LL);
  }
  v113 = battleEnt;
  v33 = (*(__int64 (__fastcall **)(BattleRootComponent_o *, _QWORD))v31)(v28, *(_QWORD *)(v31 + 8));
  if ( !v33 )
    sub_1BC3264(0LL, v32);
  while ( 1 )
  {
    v34 = *(_QWORD *)v33;
    v35 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
    {
      v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v36 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_18;
      }
      v37 = v34 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_18:
      v37 = sub_1C13570(v33, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v33, *(_QWORD *)(v37 + 8)) & 1) == 0 )
      break;
    v38 = *(_QWORD *)v33;
    v39 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
    {
      v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleDeckServantData__c **)v40 - 1) != System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo )
      {
        --v39;
        v40 += 4;
        if ( !v39 )
          goto LABEL_25;
      }
      v41 = v38 + 16LL * *v40 + 312;
    }
    else
    {
LABEL_25:
      v41 = sub_1C13570(v33, System_Collections_Generic_IEnumerator_BattleDeckServantData__TypeInfo, 0LL);
    }
    v42 = (BattleDeckServantData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v33, *(_QWORD *)(v41 + 8));
    if ( !v42 )
      sub_1BC3264(0LL, v43);
    if ( BattleDeckServantData__TryGetAddFieldMotionIds(v42, &fieldMotionIds, 0LL) )
    {
      v44 = System_Linq_Enumerable__Reverse_int_(
              (System_Collections_Generic_IEnumerable_TSource__o *)fieldMotionIds,
              (const MethodInfo_302E530 *)Method_System_Linq_Enumerable_Reverse_int___);
      v46 = v44;
      if ( !v44 )
        sub_1BC3264(0LL, v45);
      v47 = v44->klass;
      v48 = *(unsigned __int16 *)(&v44->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v44->klass->_2.bitflags2 + 3) )
      {
        v49 = &v47->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_int__c **)v49 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
        {
          --v48;
          v49 += 4;
          if ( !v48 )
            goto LABEL_34;
        }
        p_method = (__int64)&v47->vtable[*v49].method;
      }
      else
      {
LABEL_34:
        p_method = sub_1C13570(v44, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
      }
      v52 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
              v46,
              *(_QWORD *)(p_method + 8));
      if ( !v52 )
        sub_1BC3264(0LL, v51);
      while ( 1 )
      {
        v53 = *(_QWORD *)v52;
        v54 = *(unsigned __int16 *)(*(_QWORD *)v52 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v52 + 302LL) )
        {
          v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v55 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v54;
            v55 += 4;
            if ( !v54 )
              goto LABEL_41;
          }
          v56 = v53 + 16LL * *v55 + 312;
        }
        else
        {
LABEL_41:
          v56 = sub_1C13570(v52, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v56)(v52, *(_QWORD *)(v56 + 8)) & 1) == 0 )
          break;
        v57 = *(_QWORD *)v52;
        v58 = *(unsigned __int16 *)(*(_QWORD *)v52 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v52 + 302LL) )
        {
          v59 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_int__c **)v59 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
          {
            --v58;
            v59 += 4;
            if ( !v58 )
              goto LABEL_48;
          }
          v60 = v57 + 16LL * *v59 + 312;
        }
        else
        {
LABEL_48:
          v60 = sub_1C13570(v52, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
        }
        v61 = (*(__int64 (__fastcall **)(__int64, _QWORD))v60)(v52, *(_QWORD *)(v60 + 8));
        if ( !v25 )
          sub_1BC3264(v61, v62);
        v63 = v61;
        v64 = System_Collections_Generic_List_int___Contains(
                v25,
                v61,
                (const MethodInfo_3684194 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !v64 )
        {
          items = v25->fields._items;
          v67 = Method_System_Collections_Generic_List_int__Add__;
          ++v25->fields._version;
          if ( !items )
            sub_1BC3264(v64, v65);
          size = v25->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v25,
              v63,
              *(const MethodInfo_3683E1C **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
          }
          else
          {
            v25->fields._size = size + 1;
            items->m_Items[size + 1] = v63;
          }
        }
      }
      v69 = *(_QWORD *)v52;
      v70 = *(unsigned __int16 *)(*(_QWORD *)v52 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v52 + 302LL) )
      {
        v71 = (int *)(*(_QWORD *)(v69 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v71 - 1) != System_IDisposable_TypeInfo )
        {
          --v70;
          v71 += 4;
          if ( !v70 )
            goto LABEL_60;
        }
        v72 = v69 + 16LL * *v71 + 312;
      }
      else
      {
LABEL_60:
        v72 = sub_1C13570(v52, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v72)(v52, *(_QWORD *)(v72 + 8));
    }
  }
  v73 = *(_QWORD *)v33;
  v74 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
  {
    v75 = (int *)(*(_QWORD *)(v73 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v75 - 1) != System_IDisposable_TypeInfo )
    {
      --v74;
      v75 += 4;
      if ( !v74 )
        goto LABEL_70;
    }
    v76 = v73 + 16LL * *v75 + 312;
  }
  else
  {
LABEL_70:
    v76 = sub_1C13570(v33, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v76)(v33, *(_QWORD *)(v76 + 8));
  this = (BattleRootComponent_o *)v113->fields.battleInfo;
  if ( !this )
LABEL_131:
    sub_1BC3264(this, battleEnt);
  this = (BattleRootComponent_o *)BattleInfoData__getLastWave((BattleInfoData_o *)this, 0LL);
  if ( ((unsigned int)this & 0x80000000) == 0 )
  {
    v77 = (int)this;
    v78 = 0LL;
    do
    {
      this = (BattleRootComponent_o *)BattleEntity__GetStageEntityAtWave(v113, v77, 0LL);
      if ( this )
        v78 = (StageEntity_o *)this;
      if ( !this )
        goto LABEL_136;
      if ( !v78 )
        goto LABEL_131;
      WaveFieldMotionIds = (System_Collections_Generic_IEnumerable_TSource__o *)StageEntity__GetWaveFieldMotionIds(
                                                                                  v78,
                                                                                  0LL,
                                                                                  0LL);
      if ( !WaveFieldMotionIds
        || (v81 = System_Linq_Enumerable__Reverse_int_(
                    WaveFieldMotionIds,
                    (const MethodInfo_302E530 *)Method_System_Linq_Enumerable_Reverse_int___)) == 0LL )
      {
LABEL_136:
        v82 = Method_System_Array_Empty_int___;
        v83 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
        if ( !v83 )
        {
          sub_1C134C8(Method_System_Array_Empty_int___);
          v83 = v82[7];
        }
        v84 = *(_QWORD *)(v83 + 16);
        if ( (*(_BYTE *)(v84 + 309) & 1) == 0 )
          v84 = sub_1C1346C(inited);
        if ( !*(_DWORD *)(v84 + 224) )
          inited = j_il2cpp_runtime_class_init_0(v84);
        this = *(BattleRootComponent_o **)(v82[7] + 16LL);
        if ( (this[2].fields.manualHeight & 0x100) == 0 )
          this = (BattleRootComponent_o *)sub_1C1346C(inited);
        v81 = **(System_Collections_Generic_IEnumerable_TSource__o ***)&this[1].fields.kind;
        if ( !v81 )
          goto LABEL_131;
      }
      v85 = v81->klass;
      v86 = *(unsigned __int16 *)(&v81->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&v81->klass->_2.bitflags2 + 3) )
      {
        v87 = &v85->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_int__c **)v87 - 1) != System_Collections_Generic_IEnumerable_int__TypeInfo )
        {
          --v86;
          v87 += 4;
          if ( !v86 )
            goto LABEL_94;
        }
        v88 = (__int64)&v85->vtable[*v87].method;
      }
      else
      {
LABEL_94:
        v88 = sub_1C13570(v81, System_Collections_Generic_IEnumerable_int__TypeInfo, 0LL);
      }
      v90 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v88)(
              v81,
              *(_QWORD *)(v88 + 8));
      if ( !v90 )
        sub_1BC3264(0LL, v89);
      while ( 1 )
      {
        v91 = *(_QWORD *)v90;
        v92 = *(unsigned __int16 *)(*(_QWORD *)v90 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v90 + 302LL) )
        {
          v93 = (int *)(*(_QWORD *)(v91 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v93 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v92;
            v93 += 4;
            if ( !v92 )
              goto LABEL_101;
          }
          v94 = v91 + 16LL * *v93 + 312;
        }
        else
        {
LABEL_101:
          v94 = sub_1C13570(v90, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v94)(v90, *(_QWORD *)(v94 + 8)) & 1) == 0 )
          break;
        v95 = *(_QWORD *)v90;
        v96 = *(unsigned __int16 *)(*(_QWORD *)v90 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v90 + 302LL) )
        {
          v97 = (int *)(*(_QWORD *)(v95 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_int__c **)v97 - 1) != System_Collections_Generic_IEnumerator_int__TypeInfo )
          {
            --v96;
            v97 += 4;
            if ( !v96 )
              goto LABEL_108;
          }
          v98 = v95 + 16LL * *v97 + 312;
        }
        else
        {
LABEL_108:
          v98 = sub_1C13570(v90, System_Collections_Generic_IEnumerator_int__TypeInfo, 0LL);
        }
        v99 = (*(__int64 (__fastcall **)(__int64, _QWORD))v98)(v90, *(_QWORD *)(v98 + 8));
        if ( !v25 )
          sub_1BC3264(v99, v100);
        v101 = v99;
        v102 = System_Collections_Generic_List_int___Contains(
                 v25,
                 v99,
                 (const MethodInfo_3684194 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( !v102 )
        {
          v104 = v25->fields._items;
          v105 = Method_System_Collections_Generic_List_int__Add__;
          ++v25->fields._version;
          if ( !v104 )
            sub_1BC3264(v102, v103);
          v106 = v25->fields._size;
          if ( (unsigned int)v106 >= v104->max_length )
          {
            System_Collections_Generic_List_int___AddWithResize(
              v25,
              v101,
              *(const MethodInfo_3683E1C **)(*(_QWORD *)(v105[4] + 192LL) + 112LL));
          }
          else
          {
            v25->fields._size = v106 + 1;
            v104->m_Items[v106 + 1] = v101;
          }
        }
      }
      v107 = *(_QWORD *)v90;
      v108 = *(unsigned __int16 *)(*(_QWORD *)v90 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v90 + 302LL) )
      {
        v109 = (int *)(*(_QWORD *)(v107 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v109 - 1) != System_IDisposable_TypeInfo )
        {
          --v108;
          v109 += 4;
          if ( !v108 )
            goto LABEL_120;
        }
        v110 = v107 + 16LL * *v109 + 312;
      }
      else
      {
LABEL_120:
        v110 = sub_1C13570(v90, System_IDisposable_TypeInfo, 0LL);
      }
      this = (BattleRootComponent_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v110)(v90, *(_QWORD *)(v110 + 8));
    }
    while ( v77-- > 0 );
  }
  if ( !v25 )
    goto LABEL_131;
  return System_Collections_Generic_List_int___ToArray(
           v25,
           (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall BattleRootComponent__GetClassBoardCommandSpellEffectId(
        BattleRootComponent_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
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
  System_Collections_Generic_HashSet_int__o *v15; // x19
  void *Master_object; // x0
  __int64 v17; // x1
  Il2CppObject *SingleEntity; // x0
  BalanceConfig_c *v19; // x8
  int32_t ClassBoardReleaseQuestId; // w21
  bool IsQuestClear_39366056; // w0
  __int64 v22; // x2
  Il2CppClass *klass; // x8
  _QWORD *data; // x8
  __int64 v25; // x23
  int v26; // w8
  ClassBoardCommandSpellMaster_o *v27; // x21
  unsigned int v28; // w25
  __int64 v29; // x8
  _QWORD *v30; // x22
  __int64 v31; // x29
  int v32; // w8
  unsigned int v33; // w20
  __int64 v34; // x8
  __int64 v35; // x1
  System_Int32_array *EffectIdArray; // x0
  __int64 v37; // x1
  __int64 v38; // x2
  System_Int32_array *v39; // x22
  __int64 v40; // x8
  unsigned __int64 v41; // x24
  Il2CppObject *v43; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v44; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+20h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+38h] [xbp-68h] BYREF

  if ( (byte_4B04992 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&CondType_TypeInfo, v2);
    sub_1BC3008(&Method_DataManager_GetMaster_BattleMaster___, v3);
    sub_1BC3008(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, v4);
    sub_1BC3008(&DataManager_TypeInfo, v5);
    sub_1BC3008(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v6);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToArray_int___, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__, v8);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__, v9);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__, v10);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_int__Add__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_int___ctor__, v12);
    sub_1BC3008(&System_Collections_Generic_HashSet_int__TypeInfo, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__, v14);
    byte_4B04992 = 1;
  }
  entitys = 0LL;
  memset(&v45, 0, sizeof(v45));
  v15 = (System_Collections_Generic_HashSet_int__o *)sub_1BC3254(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v15,
    (const MethodInfo_3557E88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_object )
    goto LABEL_51;
  SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                   (const MethodInfo_32B1678 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
  v19 = BalanceConfig_TypeInfo;
  v43 = SingleEntity;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v19 = BalanceConfig_TypeInfo;
  }
  ClassBoardReleaseQuestId = v19->static_fields->ClassBoardReleaseQuestId;
  if ( !CondType_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
  IsQuestClear_39366056 = CondType__IsQuestClear_39366056(ClassBoardReleaseQuestId, -1, 0, 0LL);
  if ( !v43 || !IsQuestClear_39366056 )
    return System_Linq_Enumerable__ToArray_int_(
             (System_Collections_Generic_IEnumerable_TSource__o *)v15,
             (const MethodInfo_303E3B4 *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  klass = v43[1].klass;
  if ( !klass || (data = klass->_1.this_arg.data) == 0LL || (v25 = data[2]) == 0 )
LABEL_51:
    sub_1BC3264(Master_object, v17);
  v26 = *(_DWORD *)(v25 + 24);
  if ( v26 >= 1 )
  {
    v27 = (ClassBoardCommandSpellMaster_o *)Master_object;
    v28 = 0;
    while ( 1 )
    {
      if ( v28 >= v26 )
        goto LABEL_52;
      v29 = *(_QWORD *)(v25 + 8LL * (int)v28 + 32);
      if ( !v29 )
        goto LABEL_51;
      Master_object = v43[1].klass;
      if ( !Master_object )
        goto LABEL_51;
      Master_object = BattleInfoData__getUserServantFromID(
                        (BattleInfoData_o *)Master_object,
                        *(_QWORD *)(v29 + 24),
                        0LL);
      if ( Master_object )
      {
        v30 = Master_object;
        Master_object = (void *)BasicHelper__IsNullOrEmpty(
                                  *((System_Collections_ICollection_o **)Master_object + 70),
                                  0LL);
        if ( ((unsigned __int8)Master_object & 1) == 0 )
        {
          v31 = v30[70];
          if ( !v31 )
            goto LABEL_51;
          v32 = *(_DWORD *)(v31 + 24);
          if ( v32 >= 1 )
            break;
        }
      }
LABEL_49:
      v26 = *(_DWORD *)(v25 + 24);
      if ( (int)++v28 >= v26 )
        return System_Linq_Enumerable__ToArray_int_(
                 (System_Collections_Generic_IEnumerable_TSource__o *)v15,
                 (const MethodInfo_303E3B4 *)Method_System_Linq_Enumerable_ToArray_int___);
    }
    v33 = 0;
    while ( v33 < v32 )
    {
      v34 = *(_QWORD *)(v31 + 8LL * (int)v33 + 32);
      if ( !v34 || !v27 )
        goto LABEL_51;
      Master_object = (void *)ClassBoardCommandSpellMaster__TryGetEntityList(
                                v27,
                                &entitys,
                                *(_DWORD *)(v34 + 16),
                                *(_DWORD *)(v34 + 20),
                                0LL);
      if ( ((unsigned __int8)Master_object & 1) != 0 )
      {
        Master_object = entitys;
        if ( !entitys )
          goto LABEL_51;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v44,
          (System_Collections_Generic_List_object__o *)entitys,
          (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
        v45 = v44;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v45,
                  (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__) )
        {
          if ( !v45.fields._current )
            sub_1BC3264(0LL, v35);
          EffectIdArray = ClassBoardCommandSpellEntity__GetEffectIdArray(
                            (ClassBoardCommandSpellEntity_o *)v45.fields._current,
                            0LL);
          v39 = EffectIdArray;
          if ( !EffectIdArray )
            sub_1BC3264(0LL, v37);
          v40 = *(_QWORD *)&EffectIdArray->max_length;
          if ( (int)v40 >= 1 )
          {
            v41 = 0LL;
            do
            {
              if ( v41 >= (unsigned int)v40 )
                sub_1BC326C(EffectIdArray, v37, v38);
              if ( !v15 )
                sub_1BC3264(EffectIdArray, v37);
              EffectIdArray = (System_Int32_array *)System_Collections_Generic_HashSet_int___Add(
                                                      v15,
                                                      v39->m_Items[v41 + 1],
                                                      (const MethodInfo_355908C *)Method_System_Collections_Generic_HashSet_int__Add__);
              LODWORD(v40) = v39->max_length;
              ++v41;
            }
            while ( (__int64)v41 < (int)v40 );
          }
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v45,
          (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
      }
      v32 = *(_DWORD *)(v31 + 24);
      if ( (int)++v33 >= v32 )
        goto LABEL_49;
    }
LABEL_52:
    sub_1BC326C(Master_object, v17, v22);
  }
  return System_Linq_Enumerable__ToArray_int_(
           (System_Collections_Generic_IEnumerable_TSource__o *)v15,
           (const MethodInfo_303E3B4 *)Method_System_Linq_Enumerable_ToArray_int___);
}


System_Collections_Generic_List_int__o *__fastcall BattleRootComponent__GetLoadDropEffectType(
        BattleRootComponent_o *this,
        BattleEntity_o *battleEntity,
        const MethodInfo *method)
{
  __int64 v4; // x1
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
  System_Collections_Generic_List_object__o *v20; // x21
  System_Collections_Generic_List_int__o *v21; // x19
  QuestPhaseEntity_o *QuestPhaseEntity; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct BattleInfoData_o *battleInfo; // x8
  System_Collections_Generic_IEnumerable_T__o *enemyDeck; // x1
  struct System_Object_array *items; // x8
  _QWORD *v28; // x9
  __int64 size; // x10
  Il2CppClass **v30; // x0
  _BOOL8 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  Il2CppClass *klass; // x24
  const char *namespaze; // x8
  int v36; // w25
  __int64 v37; // x9
  __int64 v38; // x26
  int v39; // w9
  __int64 v40; // x27
  __int64 v41; // x29
  struct System_Int32_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  __int64 v45; // x2
  struct BattleInfoData_o *v46; // x8
  struct BattleInfoData_StageCutinInfo_array *stageCutins; // x21
  int max_length; // w8
  unsigned int v49; // w24
  BattleInfoData_StageCutinInfo_o *v50; // x8
  struct DropInfo_array *dropInfos; // x25
  int v52; // w8
  unsigned int v53; // w26
  DropInfo_o *v54; // x27
  struct System_Int32_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  QuestPhaseEntity_c *v58; // x8
  QuestPhaseEntity_o *v59; // x20
  __int64 v60; // x9
  int32_t *p_offset; // x10
  __int64 v62; // x0
  __int64 v63; // x1
  __int64 v64; // x20
  __int64 v65; // x8
  __int64 v66; // x9
  int *v67; // x10
  __int64 v68; // x0
  __int64 v69; // x8
  __int64 v70; // x9
  int *v71; // x10
  __int64 v72; // x0
  FunctionEntity_o *v73; // x0
  __int64 v74; // x1
  _BOOL8 BattleSkillDropInfoDict; // x0
  __int64 v76; // x1
  __int64 v77; // x0
  struct System_Int32_array *v78; // x8
  _QWORD *v79; // x9
  __int64 v80; // x10
  __int64 v81; // x8
  __int64 v82; // x9
  int *v83; // x10
  __int64 v84; // x0
  System_Collections_Generic_List_Enumerator_object__o v86; // [xsp+10h] [xbp-A0h] BYREF
  BattleSkillDropInfo_JsonConvertData_o *data; // [xsp+28h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v88; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4B04991 & 1) == 0 )
  {
    sub_1BC3008(&Method_EnumUtility_CastToEnum_DropInfo_DropEffectType___, battleEntity);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_DeckData__Dispose__, v4);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_DeckData__MoveNext__, v5);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_DeckData__get_Current__, v6);
    sub_1BC3008(&System_IDisposable_TypeInfo, v7);
    sub_1BC3008(&System_Collections_Generic_IEnumerable_FunctionEntity__TypeInfo, v8);
    sub_1BC3008(&System_Collections_Generic_IEnumerator_FunctionEntity__TypeInfo, v9);
    sub_1BC3008(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1BC3008(&Method_System_Collections_Generic_List_DeckData__AddRange__, v11);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_1BC3008(&Method_System_Collections_Generic_List_DeckData__Add__, v13);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Contains__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_DeckData__GetEnumerator__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_List_DeckData___ctor__, v17);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v18);
    sub_1BC3008(&System_Collections_Generic_List_DeckData__TypeInfo, v19);
    byte_4B04991 = 1;
  }
  memset(&v88, 0, sizeof(v88));
  data = 0LL;
  v20 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_DeckData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v20,
    (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_DeckData___ctor__);
  v21 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v21,
    (const MethodInfo_36835C8 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !battleEntity )
    return v21;
  battleInfo = battleEntity->fields.battleInfo;
  if ( !battleInfo )
    return v21;
  enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.enemyDeck;
  if ( enemyDeck )
  {
    if ( !v20 )
      goto LABEL_109;
    System_Collections_Generic_List_object___AddRange(
      v20,
      enemyDeck,
      (const MethodInfo_36A104C *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_109;
  }
  enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.callDeck;
  if ( enemyDeck )
  {
    if ( !v20 )
      goto LABEL_109;
    System_Collections_Generic_List_object___AddRange(
      v20,
      enemyDeck,
      (const MethodInfo_36A104C *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_109;
  }
  enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.shiftDeck;
  if ( enemyDeck )
  {
    if ( !v20 )
      goto LABEL_109;
    System_Collections_Generic_List_object___AddRange(
      v20,
      enemyDeck,
      (const MethodInfo_36A104C *)Method_System_Collections_Generic_List_DeckData__AddRange__);
    battleInfo = battleEntity->fields.battleInfo;
    if ( !battleInfo )
      goto LABEL_109;
  }
  enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)battleInfo->fields.transformDeck;
  if ( enemyDeck )
  {
    if ( !v20 )
      goto LABEL_109;
    items = v20->fields._items;
    v28 = Method_System_Collections_Generic_List_DeckData__Add__;
    ++v20->fields._version;
    if ( !items )
      goto LABEL_109;
    size = v20->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v20,
        (Il2CppObject *)enemyDeck,
        *(const MethodInfo_36A0E40 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
    }
    else
    {
      v30 = &items->obj.klass + size;
      v20->fields._size = size + 1;
      v30[4] = (Il2CppClass *)enemyDeck;
      sub_1BC2FAC((CGThumbnailListItem_o *)(v30 + 4), (int32_t)enemyDeck, v23, v24);
    }
  }
  else if ( !v20 )
  {
    goto LABEL_109;
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v86,
    v20,
    (const MethodInfo_36A1938 *)Method_System_Collections_Generic_List_DeckData__GetEnumerator__);
  v88 = v86;
  while ( 1 )
  {
    v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v88,
            (const MethodInfo_343678C *)Method_System_Collections_Generic_List_Enumerator_DeckData__MoveNext__);
    if ( !v31 )
      break;
    if ( !v88.fields._current )
      sub_1BC3264(v31, v32);
    klass = v88.fields._current[1].klass;
    if ( klass )
    {
      namespaze = klass->_1.namespaze;
      if ( (int)namespaze >= 1 )
      {
        v36 = 0;
        do
        {
          if ( v36 >= (unsigned int)namespaze )
            sub_1BC326C(v31, v32, v33);
          v37 = *((_QWORD *)&klass->_1.byval_arg.data + v36);
          if ( !v37 )
            sub_1BC3264(v31, v32);
          v38 = *(_QWORD *)(v37 + 104);
          if ( v38 )
          {
            v39 = *(_DWORD *)(v38 + 24);
            if ( v39 >= 1 )
            {
              v40 = 0LL;
              do
              {
                if ( (unsigned int)v40 >= v39 )
                  sub_1BC326C(v31, v32, v33);
                v41 = *(_QWORD *)(v38 + 32 + 8 * v40);
                if ( !v41 )
                  sub_1BC3264(v31, v32);
                v32 = *(unsigned int *)(v41 + 48);
                if ( (_DWORD)v32 )
                {
                  if ( !v21 )
                    sub_1BC3264(v31, v32);
                  v31 = System_Collections_Generic_List_int___Contains(
                          v21,
                          v32,
                          (const MethodInfo_3684194 *)Method_System_Collections_Generic_List_int__Contains__);
                  if ( !v31 )
                  {
                    v32 = *(unsigned int *)(v41 + 48);
                    v42 = v21->fields._items;
                    v43 = Method_System_Collections_Generic_List_int__Add__;
                    ++v21->fields._version;
                    if ( !v42 )
                      sub_1BC3264(v31, v32);
                    v44 = v21->fields._size;
                    if ( (unsigned int)v44 >= v42->max_length )
                    {
                      System_Collections_Generic_List_int___AddWithResize(
                        v21,
                        v32,
                        *(const MethodInfo_3683E1C **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
                    }
                    else
                    {
                      v21->fields._size = v44 + 1;
                      v42->m_Items[v44 + 1] = v32;
                    }
                  }
                }
                v39 = *(_DWORD *)(v38 + 24);
                ++v40;
              }
              while ( (int)v40 < v39 );
              namespaze = klass->_1.namespaze;
            }
          }
          ++v36;
        }
        while ( v36 < (int)namespaze );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v88,
    (const MethodInfo_3436788 *)Method_System_Collections_Generic_List_Enumerator_DeckData__Dispose__);
  v46 = battleEntity->fields.battleInfo;
  if ( !v46 )
    goto LABEL_109;
  stageCutins = v46->fields.stageCutins;
  if ( stageCutins )
  {
    max_length = stageCutins->max_length;
    if ( max_length >= 1 )
    {
      v49 = 0;
      while ( 1 )
      {
        if ( v49 >= max_length )
          goto LABEL_112;
        v50 = stageCutins->m_Items[v49];
        if ( !v50 )
          goto LABEL_109;
        dropInfos = v50->fields.dropInfos;
        if ( !dropInfos )
          goto LABEL_109;
        v52 = dropInfos->max_length;
        if ( v52 >= 1 )
          break;
LABEL_65:
        max_length = stageCutins->max_length;
        if ( (int)++v49 >= max_length )
          goto LABEL_66;
      }
      v53 = 0;
      while ( v53 < v52 )
      {
        v54 = dropInfos->m_Items[v53];
        if ( !v54 )
          goto LABEL_109;
        enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)(unsigned int)v54->fields.effectType;
        if ( (_DWORD)enemyDeck )
        {
          if ( !v21 )
            goto LABEL_109;
          QuestPhaseEntity = (QuestPhaseEntity_o *)System_Collections_Generic_List_int___Contains(
                                                     v21,
                                                     (int32_t)enemyDeck,
                                                     (const MethodInfo_3684194 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( ((unsigned __int8)QuestPhaseEntity & 1) == 0 )
          {
            enemyDeck = (System_Collections_Generic_IEnumerable_T__o *)(unsigned int)v54->fields.effectType;
            v55 = v21->fields._items;
            v56 = Method_System_Collections_Generic_List_int__Add__;
            ++v21->fields._version;
            if ( !v55 )
              goto LABEL_109;
            v57 = v21->fields._size;
            if ( (unsigned int)v57 >= v55->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v21,
                (int32_t)enemyDeck,
                *(const MethodInfo_3683E1C **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
            }
            else
            {
              v21->fields._size = v57 + 1;
              v55->m_Items[v57 + 1] = (int)enemyDeck;
            }
          }
        }
        v52 = dropInfos->max_length;
        if ( (int)++v53 >= v52 )
          goto LABEL_65;
      }
LABEL_112:
      sub_1BC326C(QuestPhaseEntity, enemyDeck, v45);
    }
  }
LABEL_66:
  QuestPhaseEntity = BattleEntity__GetQuestPhaseEntity(battleEntity, 0LL);
  if ( !QuestPhaseEntity
    || (QuestPhaseEntity = (QuestPhaseEntity_o *)QuestPhaseEntity__GetBattleSkillDropFunctionEntities(
                                                   QuestPhaseEntity,
                                                   0LL)) == 0LL )
  {
LABEL_109:
    sub_1BC3264(QuestPhaseEntity, enemyDeck);
  }
  v58 = QuestPhaseEntity->klass;
  v59 = QuestPhaseEntity;
  v60 = *(unsigned __int16 *)(&QuestPhaseEntity->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&QuestPhaseEntity->klass->_2.bitflags2 + 3) )
  {
    p_offset = &v58->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_FunctionEntity__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_FunctionEntity__TypeInfo )
    {
      --v60;
      p_offset += 4;
      if ( !v60 )
        goto LABEL_72;
    }
    v62 = (__int64)(&v58->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_72:
    v62 = sub_1C13570(QuestPhaseEntity, System_Collections_Generic_IEnumerable_FunctionEntity__TypeInfo, 0LL);
  }
  v64 = (*(__int64 (__fastcall **)(QuestPhaseEntity_o *, _QWORD))v62)(v59, *(_QWORD *)(v62 + 8));
  if ( !v64 )
    sub_1BC3264(0LL, v63);
  while ( 1 )
  {
    v65 = *(_QWORD *)v64;
    v66 = *(unsigned __int16 *)(*(_QWORD *)v64 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v64 + 302LL) )
    {
      v67 = (int *)(*(_QWORD *)(v65 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v67 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v66;
        v67 += 4;
        if ( !v66 )
          goto LABEL_79;
      }
      v68 = v65 + 16LL * *v67 + 312;
    }
    else
    {
LABEL_79:
      v68 = sub_1C13570(v64, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v68)(v64, *(_QWORD *)(v68 + 8)) & 1) == 0 )
      break;
    v69 = *(_QWORD *)v64;
    v70 = *(unsigned __int16 *)(*(_QWORD *)v64 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v64 + 302LL) )
    {
      v71 = (int *)(*(_QWORD *)(v69 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_FunctionEntity__c **)v71 - 1) != System_Collections_Generic_IEnumerator_FunctionEntity__TypeInfo )
      {
        --v70;
        v71 += 4;
        if ( !v70 )
          goto LABEL_86;
      }
      v72 = v69 + 16LL * *v71 + 312;
    }
    else
    {
LABEL_86:
      v72 = sub_1C13570(v64, System_Collections_Generic_IEnumerator_FunctionEntity__TypeInfo, 0LL);
    }
    v73 = (FunctionEntity_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v72)(v64, *(_QWORD *)(v72 + 8));
    if ( !v73 )
      sub_1BC3264(0LL, v74);
    BattleSkillDropInfoDict = FunctionEntity__TryGetBattleSkillDropInfoDict(v73, &data, 0LL);
    if ( BattleSkillDropInfoDict )
    {
      if ( !data )
        sub_1BC3264(BattleSkillDropInfoDict, v76);
      v77 = EnumUtility__CastToEnum_Int32Enum_(
              data->fields.dropEffectType,
              0,
              (const MethodInfo_3008E28 *)Method_EnumUtility_CastToEnum_DropInfo_DropEffectType___);
      if ( (_DWORD)v77 )
      {
        if ( !v21 )
          sub_1BC3264(v77, (unsigned int)v77);
        v78 = v21->fields._items;
        v79 = Method_System_Collections_Generic_List_int__Add__;
        ++v21->fields._version;
        if ( !v78 )
          sub_1BC3264(v77, (unsigned int)v77);
        v80 = v21->fields._size;
        if ( (unsigned int)v80 >= v78->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v21,
            v77,
            *(const MethodInfo_3683E1C **)(*(_QWORD *)(v79[4] + 192LL) + 112LL));
        }
        else
        {
          v21->fields._size = v80 + 1;
          v78->m_Items[v80 + 1] = v77;
        }
      }
    }
  }
  v81 = *(_QWORD *)v64;
  v82 = *(unsigned __int16 *)(*(_QWORD *)v64 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v64 + 302LL) )
  {
    v83 = (int *)(*(_QWORD *)(v81 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v83 - 1) != System_IDisposable_TypeInfo )
    {
      --v82;
      v83 += 4;
      if ( !v82 )
        goto LABEL_101;
    }
    v84 = v81 + 16LL * *v83 + 312;
  }
  else
  {
LABEL_101:
    v84 = sub_1C13570(v64, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v84)(v64, *(_QWORD *)(v84 + 8));
  return v21;
}


System_Collections_IEnumerator_o *__fastcall BattleRootComponent__LoadAsset(
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

  if ( (byte_4B04988 & 1) == 0 )
  {
    sub_1BC3008(&BattleRootComponent__LoadAsset_d__13_TypeInfo, ent);
    byte_4B04988 = 1;
  }
  v9 = sub_1BC3254(BattleRootComponent__LoadAsset_d__13_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 40) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v9 + 40), (int32_t)this, v10, v11);
  *(_QWORD *)(v9 + 48) = ent;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v9 + 48), (int32_t)ent, v12, v13);
  *(_DWORD *)(v9 + 56) = eventId;
  *(_QWORD *)(v9 + 64) = battleEnt;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v9 + 64), (int32_t)battleEnt, v14, v15);
  return (System_Collections_IEnumerator_o *)v9;
}


System_Collections_IEnumerator_o *__fastcall BattleRootComponent__LoadAssetsIndependentToMainOne(
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

  if ( (byte_4B04989 & 1) == 0 )
  {
    sub_1BC3008(&BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_TypeInfo, ent);
    byte_4B04989 = 1;
  }
  v9 = sub_1BC3254(BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  *(_DWORD *)(v9 + 16) = 0;
  *(_QWORD *)(v9 + 40) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v9 + 40), (int32_t)this, v10, v11);
  *(_QWORD *)(v9 + 32) = ent;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v9 + 32), (int32_t)ent, v12, v13);
  *(_DWORD *)(v9 + 56) = eventId;
  *(_QWORD *)(v9 + 64) = finishCallback;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v9 + 64), (int32_t)finishCallback, v14, v15);
  return (System_Collections_IEnumerator_o *)v9;
}


void __fastcall BattleRootComponent__LoadBatteBgm(
        BattleRootComponent_o *this,
        System_Collections_Generic_List_string__o *bgmList,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x20
  System_Collections_Generic_List_object__o *v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int size; // w8
  Il2CppObject *Item; // x19
  System_Action_o *v24; // x21

  if ( (byte_4B0498A & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, bgmList);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__get_Count__, v7);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__get_Item__, v8);
    sub_1BC3008(&SoundManager_TypeInfo, v9);
    sub_1BC3008(&Method_BattleRootComponent___c__DisplayClass17_0__LoadBatteBgm_b__0__, v10);
    sub_1BC3008(&BattleRootComponent___c__DisplayClass17_0_TypeInfo, v11);
    byte_4B0498A = 1;
  }
  v12 = sub_1BC3254(BattleRootComponent___c__DisplayClass17_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    goto LABEL_11;
  *(_QWORD *)(v12 + 16) = bgmList;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v12 + 16), (int32_t)bgmList, v15, v16);
  *(_QWORD *)(v12 + 24) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v12 + 24), (int32_t)this, v17, v18);
  *(_QWORD *)(v12 + 32) = callback;
  v19 = v12 + 32;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v12 + 32), (int32_t)callback, v20, v21);
  v13 = *(System_Collections_Generic_List_object__o **)(v12 + 16);
  if ( !v13 )
    goto LABEL_11;
  size = v13->fields._size;
  if ( size <= 0 )
  {
    if ( *(_QWORD *)v19 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v19 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v19 + 64LL),
        *(_QWORD *)(*(_QWORD *)v19 + 40LL));
      return;
    }
LABEL_11:
    sub_1BC3264(v13, v14);
  }
  Item = System_Collections_Generic_List_object___get_Item(
           v13,
           size - 1,
           (const MethodInfo_36A0B70 *)Method_System_Collections_Generic_List_string__get_Item__);
  v24 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v12,
    Method_BattleRootComponent___c__DisplayClass17_0__LoadBatteBgm_b__0__,
    0LL);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__downloadAudioAssetStorage((System_String_o *)Item, v24, 1, 0LL);
}


void __fastcall BattleRootComponent__SetupObjectsExtractedFromLoadedAssets(
        BattleRootComponent_o *this,
        const MethodInfo *method)
{
  BattlePerformance_o *perf; // x0

  perf = this->fields.perf;
  if ( !perf || (BattlePerformance__SetDownloadEventSprite(perf, 0LL), (perf = this->fields.perf) == 0LL) )
    sub_1BC3264(perf, method);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  TerminalPramsManager_c *v7; // x0
  Il2CppObject *Instance; // x0
  __int64 v9; // x1

  if ( (byte_4B0498F & 1) == 0 )
  {
    sub_1BC3008(&ScriptManager_TypeInfo, info);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v5);
    byte_4B0498F = 1;
  }
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4AFC911 )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v6);
    byte_4AFC911 = 1;
  }
  v7 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v7 = TerminalPramsManager_TypeInfo;
  }
  v7->static_fields->_IsAutoResume_k__BackingField = 1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BC3264(0LL, v9);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, (Il2CppObject *)info, 1, 0LL);
}


void __fastcall BattleRootComponent__TransitionPartyOrganization(BattleRootComponent_o *this, const MethodInfo *method)
{
  BattleRootComponent_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct BattleData_o *data; // x8
  struct QuestEntity_o *quest_ent; // x21
  struct BattleData_o *v8; // x8
  struct BattleEntity_o *battle_ent; // x8
  int32_t v10; // w20
  int32_t id; // w21
  int32_t questPhase; // w22
  BattleSetupInfo_o *v13; // x23
  struct BattleData_o *v14; // x8
  Il2CppObject *v15; // x19
  __int64 v16; // x1
  TerminalPramsManager_c *v17; // x0

  v2 = this;
  if ( (byte_4B04993 & 1) == 0 )
  {
    sub_1BC3008(&BattleSetupInfo_TypeInfo, method);
    sub_1BC3008(&ScriptManager_TypeInfo, v3);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v4);
    this = (BattleRootComponent_o *)sub_1BC3008(&TerminalPramsManager_TypeInfo, v5);
    byte_4B04993 = 1;
  }
  data = v2->fields.data;
  if ( !data )
    goto LABEL_20;
  quest_ent = data->fields.quest_ent;
  if ( !quest_ent )
    goto LABEL_20;
  this = (BattleRootComponent_o *)QuestEntity__GetWarId(data->fields.quest_ent, 0LL);
  v8 = v2->fields.data;
  if ( !v8 )
    goto LABEL_20;
  battle_ent = v8->fields.battle_ent;
  if ( !battle_ent )
    goto LABEL_20;
  v10 = (int)this;
  id = quest_ent->fields.id;
  questPhase = battle_ent->fields.questPhase;
  v13 = (BattleSetupInfo_o *)sub_1BC3254(BattleSetupInfo_TypeInfo);
  BattleSetupInfo___ctor(v13, 0LL);
  if ( !v13 )
    goto LABEL_20;
  this = (BattleRootComponent_o *)BattleSetupInfo__ConvertBattleSetupInfo(v13, v10, id, questPhase, 0, 0, 0, 0LL);
  v14 = v2->fields.data;
  if ( !v14 )
    goto LABEL_20;
  v15 = (Il2CppObject *)this;
  if ( !this )
    goto LABEL_20;
  this[1].fields.kind = v14->fields.selectedInterruptionWave;
  LOBYTE(this[1].fields.depth) = 1;
  if ( !ScriptManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
  ScriptManager__DeleteTalkResumeInfo(0LL);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4AFC911 )
  {
    sub_1BC3008(&TerminalPramsManager_TypeInfo, v16);
    byte_4AFC911 = 1;
  }
  v17 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v17 = TerminalPramsManager_TypeInfo;
  }
  v17->static_fields->_IsAutoResume_k__BackingField = 1;
  this = (BattleRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_20:
    sub_1BC3264(this, method);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)this, 35, 1, v15, 1, 0LL);
}


void __fastcall BattleRootComponent__TransitionTerminalOrBattleScript(
        BattleRootComponent_o *this,
        BattleScriptRootComponent_TalkScriptInfo_o *info,
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
  __int64 v21; // x1
  __int64 v22; // x20
  BattleScriptRootComponent_TalkScriptInfo_o *isLose; // x0
  const MethodInfo *v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  BattleScriptRootComponent_TalkScriptInfo_o **v27; // x21
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct BattleData_o *data; // x8
  struct BaseBattleEvent_o *battleEvent; // x0
  const MethodInfo *v32; // x2
  struct BattleData_o *v33; // x8
  BattleScriptRootComponent_TalkScriptInfo_o *v34; // x8
  int32_t qId; // w22
  int32_t pId; // w23
  struct BattleData_o *v37; // x8
  int64_t overwriteEndScriptQuestId; // x22
  int32_t v39; // w23
  int32_t ScriptQuestId; // w22
  QuestEntity_o *QuestEntity; // x0
  int32_t v42; // w24
  ScriptManager_o *v43; // x23
  int32_t winResult; // w25
  int32_t v45; // w24
  ScriptManager_o *v46; // x23
  int32_t v47; // w25
  ScriptManager_c *v48; // x0
  System_String_o *textPath; // x23
  System_String_o *ScriptAssetName; // x0
  System_String_o *v51; // x22
  int32_t v52; // w19
  int32_t v53; // w21
  System_Action_object__o *v54; // x22
  Il2CppObject *Instance; // x19
  System_String_o *v56; // x21
  System_String_o *v57; // x22
  NotificationDialog_ClickDelegate_o *v58; // x23
  QuestPhaseDetailEntity_o *entity; // [xsp+68h] [xbp-58h] BYREF

  if ( (byte_4B04990 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_string__TypeInfo, info);
    sub_1BC3008(&AssetManager_TypeInfo, v5);
    sub_1BC3008(&NotificationDialog_ClickDelegate_TypeInfo, v6);
    sub_1BC3008(&Method_DataManager_GetMasterData_QuestMaster___, v7);
    sub_1BC3008(&Method_DataManager_GetMasterData_QuestPhaseDetailMaster___, v8);
    sub_1BC3008(&Method_DataManager_GetMasterData_QuestScriptReleaseMaster___, v9);
    sub_1BC3008(&LocalizationManager_TypeInfo, v10);
    sub_1BC3008(&MyRoomStateMaterial_TypeInfo, v11);
    sub_1BC3008(&ScriptManager_TypeInfo, v12);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v13);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v14);
    sub_1BC3008(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1BC3008(&Method_SingletonMonoBehaviour_ScriptManager__get_Instance__, v16);
    sub_1BC3008(&Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__0__, v17);
    sub_1BC3008(&Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__1__, v18);
    sub_1BC3008(&BattleRootComponent___c__DisplayClass23_0_TypeInfo, v19);
    sub_1BC3008(&StringLiteral_2734/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_MESSAGE"*/, v20);
    sub_1BC3008(&StringLiteral_2735/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_TITLE"*/, v21);
    byte_4B04990 = 1;
  }
  entity = 0LL;
  v22 = sub_1BC3254(BattleRootComponent___c__DisplayClass23_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v22, 0LL);
  if ( !v22 )
    goto LABEL_64;
  *(_QWORD *)(v22 + 16) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v22 + 16), (int32_t)this, v25, v26);
  *(_QWORD *)(v22 + 24) = info;
  v27 = (BattleScriptRootComponent_TalkScriptInfo_o **)(v22 + 24);
  sub_1BC2FAC((CGThumbnailListItem_o *)(v22 + 24), (int32_t)info, v28, v29);
  data = this->fields.data;
  if ( !data )
    goto LABEL_64;
  battleEvent = data->fields.battleEvent;
  if ( !battleEvent
    || (((__int64 (__fastcall *)(struct BaseBattleEvent_o *, Il2CppMethodPointer))battleEvent->klass->vtable._16_GoNextScene.method)(
          battleEvent,
          battleEvent->klass->vtable._17_GetSaveData.methodPtr) & 1) == 0 )
  {
    SkillLvMaster__ResetBaseTime(0LL);
    isLose = *v27;
    if ( !*v27 )
      goto LABEL_64;
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
LABEL_23:
          BattleRootComponent__TerminalTransition((BattleRootComponent_o *)isLose, *v27, v32);
          return;
        }
        v33 = this->fields.data;
        if ( v33 )
        {
          if ( (v33->fields.selectedInterruptionWave & 0x80000000) == 0 )
          {
            BattleRootComponent__TransitionPartyOrganization(this, v24);
            return;
          }
          goto LABEL_23;
        }
      }
      goto LABEL_64;
    }
    v34 = *v27;
    if ( !*v27 )
      goto LABEL_64;
    qId = v34->fields.qId;
    *(_DWORD *)(v22 + 32) = qId;
    pId = v34->fields.pId;
    *(_DWORD *)(v22 + 36) = pId;
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)ScriptManager__GetCachedSelectedBranchQuestId(qId, pId, 0LL);
    v37 = this->fields.data;
    if ( !v37 )
      goto LABEL_64;
    overwriteEndScriptQuestId = v37->fields.overwriteEndScriptQuestId;
    if ( overwriteEndScriptQuestId )
    {
      if ( !*v27 )
        goto LABEL_64;
      (*v27)->fields.qId = overwriteEndScriptQuestId;
      v39 = *(_DWORD *)(v22 + 32);
      if ( !MyRoomStateMaterial_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomStateMaterial_TypeInfo);
      MyRoomStateMaterial__SetPlayedBranchQuestData(v39, overwriteEndScriptQuestId, 0LL);
    }
    else
    {
      LODWORD(overwriteEndScriptQuestId) = (_DWORD)isLose;
    }
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !isLose
      || (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_object_(
                                                                   (DataManager_o *)isLose,
                                                                   (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_QuestScriptReleaseMaster___)) == 0LL
      || (ScriptQuestId = QuestScriptReleaseMaster__GetScriptQuestId(
                            (QuestScriptReleaseMaster_o *)isLose,
                            overwriteEndScriptQuestId,
                            *(_DWORD *)(v22 + 36),
                            2,
                            0LL),
          (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) == 0LL)
      || (isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_object_(
                                                                   (DataManager_o *)isLose,
                                                                   (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_QuestPhaseDetailMaster___),
          !*v27)
      || !isLose )
    {
LABEL_64:
      sub_1BC3264(isLose, v24);
    }
    if ( !QuestPhaseDetailMaster__TryGetEntity(
            (QuestPhaseDetailMaster_o *)isLose,
            &entity,
            (*v27)->fields.qId,
            (*v27)->fields.pId,
            0LL) )
      goto LABEL_53;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)entity;
    if ( !entity )
      goto LABEL_64;
    if ( !QuestPhaseDetailEntity__HasFlag(entity, 0x20000000000LL, 0LL) )
      goto LABEL_53;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !isLose )
      goto LABEL_64;
    isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)DataManager__GetMasterData_object_(
                                                             (DataManager_o *)isLose,
                                                             (const MethodInfo_3001E64 *)Method_DataManager_GetMasterData_QuestMaster___);
    if ( !*v27 || !isLose )
      goto LABEL_64;
    QuestEntity = QuestMaster__getQuestEntity((QuestMaster_o *)isLose, (*v27)->fields.qId, 0LL);
    if ( !QuestEntity || !QuestEntity__IsOpenByTime(QuestEntity, 0, 0LL) )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v56 = LocalizationManager__Get((System_String_o *)StringLiteral_2735/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_TITLE"*/, 0LL);
      v57 = LocalizationManager__Get((System_String_o *)StringLiteral_2734/*"BATTLE_DIALOG_SKIP_SCENARIO_WITH_MAPSCREEN_MESSAGE"*/, 0LL);
      v58 = (NotificationDialog_ClickDelegate_o *)sub_1BC3254(NotificationDialog_ClickDelegate_TypeInfo);
      NotificationDialog_ClickDelegate___ctor(
        v58,
        (Il2CppObject *)v22,
        Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__1__,
        0LL);
      if ( !Instance )
        goto LABEL_64;
      CommonUI__OpenNotificationDialog_30733364(
        (CommonUI_o *)Instance,
        v56,
        v57,
        v58,
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
        goto LABEL_56;
LABEL_53:
      isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
      if ( !*(_QWORD *)(v22 + 24) )
        goto LABEL_64;
      v42 = *(_DWORD *)(v22 + 36);
      v43 = (ScriptManager_o *)isLose;
      winResult = BattleScriptRootComponent_TalkScriptInfo__get_winResult(
                    *(BattleScriptRootComponent_TalkScriptInfo_o **)(v22 + 24),
                    0LL);
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
      isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)ScriptManager__GetScriptName_BattleEnd(
                                                               ScriptQuestId,
                                                               v42,
                                                               winResult,
                                                               0LL);
      if ( !v43 )
        goto LABEL_64;
      if ( !ScriptManager__IsExistScriptFile(v43, (System_String_o *)isLose, 0LL) )
      {
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_ScriptManager__get_Instance__);
        if ( !*(_QWORD *)(v22 + 24) )
          goto LABEL_64;
        v45 = *(_DWORD *)(v22 + 36);
        v46 = (ScriptManager_o *)isLose;
        v47 = BattleScriptRootComponent_TalkScriptInfo__get_winResult(
                *(BattleScriptRootComponent_TalkScriptInfo_o **)(v22 + 24),
                0LL);
        if ( !ScriptManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)ScriptManager__GetScriptName_BattleEnd2(
                                                                 ScriptQuestId,
                                                                 v45,
                                                                 v47,
                                                                 0LL);
        if ( !v46 )
          goto LABEL_64;
        if ( !ScriptManager__IsExistScriptFile(v46, (System_String_o *)isLose, 0LL) )
          goto LABEL_56;
      }
      v48 = ScriptManager_TypeInfo;
      if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        v48 = ScriptManager_TypeInfo;
      }
      textPath = v48->static_fields->textPath;
      ScriptAssetName = ScriptManager__GetScriptAssetName(ScriptQuestId, 0LL);
      v51 = System_String__Concat_62348648(textPath, ScriptAssetName, 0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      if ( AssetManager__isExistAssetStorage(v51, 0LL) )
      {
        isLose = (BattleScriptRootComponent_TalkScriptInfo_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
        if ( !isLose )
          goto LABEL_64;
        AvalonSceneManager__transitionSceneRefresh(
          (AvalonSceneManager_o *)isLose,
          this->fields.nextscenetype,
          1,
          (Il2CppObject *)*v27,
          0,
          0LL);
      }
      else
      {
LABEL_56:
        v52 = *(_DWORD *)(v22 + 32);
        v53 = *(_DWORD *)(v22 + 36);
        v54 = (System_Action_object__o *)sub_1BC3254(System_Action_string__TypeInfo);
        System_Action_object____ctor(
          v54,
          (Il2CppObject *)v22,
          Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__0__,
          0LL);
        if ( !ScriptManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
        ScriptManager__LoadBattleEndGameDemo(v52, v53, 1, (System_Action_string__o *)v54, 0, 0LL);
      }
    }
  }
}


void __fastcall BattleRootComponent__beginInitialize(BattleRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
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
  System_String_o *Value; // x20
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x21
  void *Master_object; // x0
  __int64 v25; // x1
  Il2CppObject *SingleEntity; // x0
  BattleFBXComponent_c *v27; // x8
  BattleEntity_o *v28; // x20
  BattlePerformance_c *v29; // x0
  QuestPhaseEntity_o *QuestPhaseEntity; // x21
  BattleData_o *data; // x22
  __int64 v32; // x1
  int64_t createdAt; // x22
  System_Int32_array *v34; // x22
  const MethodInfo *v35; // x4
  System_Collections_IEnumerator_o *Asset; // x0
  UnityEngine_Object_o *debugButton; // x20
  ManagerConfig_c *v38; // x0

  if ( (byte_4B04986 & 1) == 0 )
  {
    sub_1BC3008(&AssetStorageLoadWrapper_TypeInfo, method);
    sub_1BC3008(&AtlasManager_TypeInfo, v3);
    sub_1BC3008(&BattleActionData_TypeInfo, v4);
    sub_1BC3008(&BattleEffectUtility_TypeInfo, v5);
    sub_1BC3008(&BattleFBXComponent_TypeInfo, v6);
    sub_1BC3008(&BattlePerformance_TypeInfo, v7);
    sub_1BC3008(&BuffList_TypeInfo, v8);
    sub_1BC3008(&CatAndMouseGame_TypeInfo, v9);
    sub_1BC3008(&Method_DataManager_GetMaster_BattleBgMaster___, v10);
    sub_1BC3008(&Method_DataManager_GetMaster_BattleMaster___, v11);
    sub_1BC3008(&DataManager_TypeInfo, v12);
    sub_1BC3008(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v13);
    sub_1BC3008(&System_GC_TypeInfo, v14);
    sub_1BC3008(&ManagerConfig_TypeInfo, v15);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v16);
    sub_1BC3008(&OptionManager_TypeInfo, v17);
    sub_1BC3008(&Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__, v18);
    sub_1BC3008(&StringLiteral_15414/*"WINGNAME"*/, v19);
    byte_4B04986 = 1;
  }
  SceneRootComponent__beginInitialize((SceneRootComponent_o *)this, 0LL);
  Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_15414/*"WINGNAME"*/, 0LL);
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  CatAndMouseGame__SixHomeBuilding(Value, 0LL);
  if ( !System_GC_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
  System_GC__Collect(0LL);
  assetStorageLoadWrapper = this->fields.assetStorageLoadWrapper;
  if ( !assetStorageLoadWrapper )
  {
    assetStorageLoadWrapper = (AssetStorageLoadWrapper_o *)sub_1BC3254(AssetStorageLoadWrapper_TypeInfo);
    AssetStorageLoadWrapper___ctor(assetStorageLoadWrapper, 0LL);
  }
  this->fields.assetStorageLoadWrapper = assetStorageLoadWrapper;
  sub_1BC2FAC(
    (CGThumbnailListItem_o *)&this->fields.assetStorageLoadWrapper,
    (int32_t)assetStorageLoadWrapper,
    v21,
    v22);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_BattleMaster___);
  if ( !Master_object )
    goto LABEL_56;
  SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                   (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                   (const MethodInfo_32B1678 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
  v27 = BattleFBXComponent_TypeInfo;
  v28 = (BattleEntity_o *)SingleEntity;
  if ( !BattleFBXComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleFBXComponent_TypeInfo);
    v27 = BattleFBXComponent_TypeInfo;
  }
  v27->static_fields->EnableEvent = 1;
  v29 = BattlePerformance_TypeInfo;
  if ( !BattlePerformance_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattlePerformance_TypeInfo);
    v29 = BattlePerformance_TypeInfo;
  }
  v29->static_fields->CameraFlip = 0;
  Master_object = BattleActionData_TypeInfo;
  if ( !BattleActionData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleActionData_TypeInfo);
    Master_object = BattleActionData_TypeInfo;
  }
  *(_DWORD *)(*((_QWORD *)Master_object + 23) + 48LL) = 0;
  if ( !v28 )
    goto LABEL_56;
  QuestPhaseEntity = BattleEntity__GetQuestPhaseEntity(v28, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__isSavedMemoryMode(0LL) )
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__ReleaseFaceAtlas(0LL);
  }
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__ReleaseBanner(0LL);
  AtlasManager__ReleaseCharaGraphOptionAtlas(0LL);
  AtlasManager__ReleaseEventUI(0LL);
  Master_object = this->fields.data;
  if ( !Master_object )
    goto LABEL_56;
  BattleData__Initialize((BattleData_o *)Master_object, 0LL);
  data = this->fields.data;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  BuffList__SetBattleData(data, 0LL);
  Master_object = this->fields.logic;
  if ( !Master_object )
    goto LABEL_56;
  BattleLogic__Initialize((BattleLogic_o *)Master_object, 0LL);
  Master_object = this->fields.data;
  if ( !Master_object )
    goto LABEL_56;
  if ( !BattleData__IsWarBoard((BattleData_o *)Master_object, 0LL) )
  {
    createdAt = v28->fields.createdAt;
    if ( !byte_4AFFB67 )
    {
      sub_1BC3008(&SkillLvMaster_TypeInfo, v32);
      byte_4AFFB67 = 1;
    }
    SkillLvMaster_TypeInfo->static_fields->propertyOverwriteBaseTime = createdAt;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_BattleBgMaster___);
  if ( !Master_object )
    goto LABEL_56;
  v34 = (System_Int32_array *)*((_QWORD *)Master_object + 10);
  if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
  BattleEffectUtility__AddNotPreloadEffectId(v34, 0LL);
  Asset = BattleRootComponent__LoadAsset(this, QuestPhaseEntity, v28->fields.eventId, v28, v35);
  UnityEngine_MonoBehaviour__StartCoroutine_70019872((UnityEngine_MonoBehaviour_o *)this, Asset, 0LL);
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_56;
  *((_DWORD *)Master_object + 38) = 3;
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
  if ( !Master_object )
    goto LABEL_56;
  if ( *((_BYTE *)Master_object + 148) )
  {
    Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_ServantAssetLoadManager__get_Instance__);
    if ( !Master_object )
      goto LABEL_56;
    *((_DWORD *)Master_object + 38) = 4;
  }
  debugButton = (UnityEngine_Object_o *)this->fields.debugButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(debugButton, 0LL, 0LL) )
  {
    Master_object = this->fields.debugButton;
    if ( !Master_object )
      goto LABEL_56;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 0, 0LL);
    v38 = ManagerConfig_TypeInfo;
    if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
      v38 = ManagerConfig_TypeInfo;
    }
    if ( v38->static_fields->UseDebugCommand )
    {
      Master_object = this->fields.debugButton;
      if ( Master_object )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Master_object, 1, 0LL);
        return;
      }
LABEL_56:
      sub_1BC3264(Master_object, v25);
    }
  }
}


void __fastcall BattleRootComponent__beginResume(
        BattleRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  CommonUI_o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  CGThumbnailListItem_o *p_callbackBeginResumeFunc; // x19
  struct BattleRootComponent_callBackBeginResume_o *v11; // x20
  struct BattleRootComponent_callBackBeginResume_o *callbackBeginResumeFunc; // t1

  if ( (byte_4B04985 & 1) == 0 )
  {
    sub_1BC3008(&AvalonSceneManager_TypeInfo, data);
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4B04985 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v7 )
    sub_1BC3264(Instance, v6);
  CommonUI__maskFadein(v7, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  callbackBeginResumeFunc = this->fields.callbackBeginResumeFunc;
  p_callbackBeginResumeFunc = (CGThumbnailListItem_o *)&this->fields.callbackBeginResumeFunc;
  v11 = callbackBeginResumeFunc;
  if ( callbackBeginResumeFunc )
  {
    p_callbackBeginResumeFunc->klass = 0LL;
    sub_1BC2FAC(p_callbackBeginResumeFunc, 0, v8, v9);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v11->fields.m_target)(
      v11->fields.original_method_info,
      *(_QWORD *)&v11->fields.extra_arg);
  }
}


void __fastcall BattleRootComponent__beginStartUp(
        BattleRootComponent_o *this,
        Il2CppObject *data,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 methodPtr_low; // x9
  Il2CppObject *Instance; // x21
  __int64 Item; // x0
  __int64 v15; // x1
  Il2CppObject *v16; // x21
  struct BattleLogic_o *logic; // x20
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 v20; // x2
  struct BattleLogic_o *v21; // x8
  struct BattleLogic_LOGICTYPE_array *logiclist; // x8
  il2cpp_array_size_t max_length; // w9

  if ( (byte_4B0498B & 1) == 0 )
  {
    sub_1BC3008(&AndroidBackKeyManager_TypeInfo, data);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__, v5);
    sub_1BC3008(&System_Collections_Generic_Dictionary_string__int__TypeInfo, v6);
    sub_1BC3008(&BattleLogic_LOGICTYPE___TypeInfo, v7);
    sub_1BC3008(&Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__, v8);
    sub_1BC3008(&StringLiteral_21020/*"limitCount"*/, v9);
    sub_1BC3008(&StringLiteral_10813/*"QUEST_START"*/, v10);
    sub_1BC3008(&StringLiteral_23051/*"servantId"*/, v11);
    byte_4B0498B = 1;
  }
  if ( data )
  {
    methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__int__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(data->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low
      && (System_Collections_Generic_Dictionary_string__int__c *)data->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_Dictionary_string__int__TypeInfo )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      Item = System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)data,
               (Il2CppObject *)StringLiteral_23051/*"servantId"*/,
               (const MethodInfo_3363FC8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !Instance )
        goto LABEL_18;
      LODWORD(Instance[2].monitor) = Item;
      v16 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      Item = System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)data,
               (Il2CppObject *)StringLiteral_21020/*"limitCount"*/,
               (const MethodInfo_3363FC8 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
      if ( !v16 )
        goto LABEL_18;
      HIDWORD(v16[2].monitor) = Item;
      Item = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Item )
        goto LABEL_18;
      *(_BYTE *)(Item + 52) = 1;
      Item = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_BattleSequenceManager__get_Instance__);
      if ( !Item
        || (*(_BYTE *)(Item + 53) = 1,
            logic = this->fields.logic,
            Item = sub_1BC30B0(BattleLogic_LOGICTYPE___TypeInfo, 2LL),
            !logic)
        || (logic->fields.logiclist = (struct BattleLogic_LOGICTYPE_array *)Item,
            sub_1BC2FAC((CGThumbnailListItem_o *)&logic->fields.logiclist, Item, v18, v19),
            (v21 = this->fields.logic) == 0LL)
        || (logiclist = v21->fields.logiclist) == 0LL )
      {
LABEL_18:
        sub_1BC3264(Item, v15);
      }
      max_length = logiclist->max_length;
      if ( max_length )
      {
        logiclist->m_Items[1] = 18;
        if ( max_length != 1 )
        {
          logiclist->m_Items[2] = 21;
          goto LABEL_16;
        }
      }
    }
    else
    {
      sub_1BC3524(data);
    }
    sub_1BC326C(Item, v15, v20);
  }
LABEL_16:
  SceneRootComponent__beginStartUp_40503008((SceneRootComponent_o *)this, 0LL);
  AndroidBackKeyManager_TypeInfo->static_fields->ToastEnabled = 1;
  Item = (__int64)this->fields.myFSM;
  if ( !Item )
    goto LABEL_18;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Item, (System_String_o *)StringLiteral_10813/*"QUEST_START"*/, 0LL);
}


void __fastcall BattleRootComponent__endQuest(BattleRootComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BattlePerformance_o *perf; // x0
  long double v8; // q0
  __int64 v9; // x0
  __int64 v10; // x0
  long double v11; // q0
  __int64 v12; // x0
  __int64 v13; // x0
  const MethodInfo *v14; // x1
  System_Action_o *v15; // x20
  const MethodInfo *v16; // x2
  System_Collections_IEnumerator_o *OutGameAsset; // x1

  if ( (byte_4B0498C & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&AtlasManager_TypeInfo, v3);
    sub_1BC3008(&Method_BattleRootComponent_goNextScene__, v4);
    sub_1BC3008(&OptionManager_TypeInfo, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AtlasManager__getInstance__, v6);
    byte_4B0498C = 1;
  }
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_33;
  BattlePerformance__SetTimeScale(perf, 1.0, 0LL);
  perf = this->fields.perf;
  if ( !perf )
    goto LABEL_33;
  BattlePerformance__procEndQuest(perf, 0LL);
  perf = (BattlePerformance_o *)this->fields.assetStorageLoadWrapper;
  if ( !perf )
    goto LABEL_33;
  AssetStorageLoadWrapper__ReleaseAll((AssetStorageLoadWrapper_o *)perf, 0LL);
  v9 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
    v9 = sub_1C1346C(v8);
  v10 = *(_QWORD *)(*(_QWORD *)(v9 + 192) + 16LL);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C1346C(v8);
  perf = **(BattlePerformance_o ***)(v10 + 184);
  if ( !perf )
    goto LABEL_33;
  AtlasManager__UnloadBuffIconAtlas((AtlasManager_o *)perf, 0LL);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__isSavedMemoryMode(0LL) )
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__ReleaseFaceBattleAtlas(0LL);
  }
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1C1346C(v11);
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 192) + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C1346C(v11);
  perf = **(BattlePerformance_o ***)(v13 + 184);
  if ( !perf
    || (AtlasManager__UnloadWarBoardAtlas((AtlasManager_o *)perf, 0LL), (perf = this->fields.perf) == 0LL)
    || (BattlePerformance__ReleaseEventInfoPointGauge(perf, 0LL),
        (perf = (BattlePerformance_o *)this->fields.data) == 0LL) )
  {
LABEL_33:
    sub_1BC3264(perf, method);
  }
  if ( !BattleData__IsWarBoard((BattleData_o *)perf, 0LL) )
  {
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__ReleaseEventAtlas(0LL);
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( OptionManager__isSavedMemoryMode(0LL) )
  {
    v15 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(v15, (Il2CppObject *)this, Method_BattleRootComponent_goNextScene__, 0LL);
    OutGameAsset = BattleRootComponent__loadOutGameAsset(this, v15, v16);
    UnityEngine_MonoBehaviour__StartCoroutine_70019872((UnityEngine_MonoBehaviour_o *)this, OutGameAsset, 0LL);
  }
  else
  {
    BattleRootComponent__goNextScene(this, v14);
  }
}


void __fastcall BattleRootComponent__goNextScene(BattleRootComponent_o *this, const MethodInfo *method)
{
  BattleRootComponent_o *v2; // x19
  __int64 v3; // x1
  struct BattleData_o *data; // x9
  struct BattleEntity_o *battle_ent; // x8
  struct QuestEntity_o *quest_ent; // x20
  int32_t questPhase; // w21
  struct BattleData_o *v8; // x8
  int32_t id; // w23
  int32_t win_lose; // w24
  int32_t v11; // w22
  int32_t WinResult; // w25
  BattleScriptRootComponent_TalkScriptInfo_o *v13; // x20
  const MethodInfo *v14; // x2

  v2 = this;
  if ( (byte_4B0498E & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    this = (BattleRootComponent_o *)sub_1BC3008(&BattleScriptRootComponent_TalkScriptInfo_TypeInfo, v3);
    byte_4B0498E = 1;
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
  this = (BattleRootComponent_o *)QuestEntity__GetWarId(data->fields.quest_ent, 0LL);
  v8 = v2->fields.data;
  if ( !v8 )
    goto LABEL_10;
  id = quest_ent->fields.id;
  win_lose = v8->fields.win_lose;
  v11 = (int)this;
  WinResult = BattleData__getWinResult(v2->fields.data, 0LL);
  v13 = (BattleScriptRootComponent_TalkScriptInfo_o *)sub_1BC3254(BattleScriptRootComponent_TalkScriptInfo_TypeInfo);
  BattleScriptRootComponent_TalkScriptInfo___ctor_46625052(v13, v11, id, questPhase, 4, win_lose, WinResult, 0, 0LL);
  this = (BattleRootComponent_o *)v2->fields.data;
  if ( !this
    || (BattleData__release((BattleData_o *)this, 0LL),
        (this = (BattleRootComponent_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_10:
    sub_1BC3264(this, method);
  }
  CommonUI__SetMaskFadeInitColor((CommonUI_o *)this, 1, 0LL);
  BattleRootComponent__TransitionTerminalOrBattleScript(v2, v13, v14);
}


System_Collections_IEnumerator_o *__fastcall BattleRootComponent__loadOutGameAsset(
        BattleRootComponent_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4B0498D & 1) == 0 )
  {
    sub_1BC3008(&BattleRootComponent__loadOutGameAsset_d__20_TypeInfo, callback);
    byte_4B0498D = 1;
  }
  v5 = sub_1BC3254(BattleRootComponent__loadOutGameAsset_d__20_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 64) = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)(v5 + 64), (int32_t)callback, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall BattleRootComponent__setCallbackBeginResume(
        BattleRootComponent_o *this,
        BattleRootComponent_callBackBeginResume_o *func,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.callbackBeginResumeFunc = func;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackBeginResumeFunc, (int32_t)func, (int32_t)method, v3);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  BattleRootComponent__LoadAsset_d__13_o *v4; // x19
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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  struct BattleRootComponent_o *_4__this; // x25
  Il2CppObject *v35; // x21
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  UnityEngine_WaitForEndOfFrame_o *v38; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  bool result; // w0
  System_Collections_IEnumerator_o *v43; // x0
  CGThumbnailListItem_o *v44; // x19
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  int v47; // w8
  struct BattleRootComponent___c__DisplayClass13_0_o *_8__1; // x23
  QuestPhaseEntity_o *ent; // x22
  int32_t eventId; // w21
  System_Action_o *v51; // x24
  const MethodInfo *v52; // x4
  System_Collections_IEnumerator_o *AssetsIndependentToMainOne; // x0
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x21
  BattleDataDefine_c *v57; // x0
  Il2CppObject *v58; // x24
  System_String_o *ASSET_BATTLE_COMMON; // x22
  AssetLoader_LoadEndDataHandler_o *v60; // x23
  System_Collections_Generic_List_object__o *v61; // x21
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  BattleRootComponent_o *v64; // x0
  const MethodInfo *v65; // x4
  System_Int32_array *AllFieldMotionIds; // x0
  struct System_Int32_array **p_fieldMotionIds_5__3; // x21
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  struct BattleRootComponent___c__DisplayClass13_0_o *v70; // x22
  System_Collections_Generic_Dictionary_int__object__o *v71; // x23
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  __int64 v74; // x2
  struct System_Int32_array *v75; // x28
  __int64 v76; // x8
  unsigned __int64 v77; // x29
  int32_t v78; // w23
  __int64 v79; // x22
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  struct BattleRootComponent___c__DisplayClass13_0_o *v82; // x1
  BattleRootComponent__LoadAsset_d__13_o *v83; // x26
  __int64 v84; // x21
  System_String_o *v85; // x0
  AssetStorageLoadWrapper_o *v86; // x23
  System_String_o *v87; // x24
  struct BattleRootComponent_o *v88; // x19
  AssetLoader_LoadEndDataHandler_o *v89; // x25
  AssetManager_o *v90; // x21
  struct BattleRootComponent___c__DisplayClass13_0_o *v91; // x8
  struct System_Int32_array *fieldMotionIds_5__3; // x9
  struct BattleRootComponent___c__DisplayClass13_2_o *v93; // x8
  struct BattleRootComponent___c__DisplayClass13_2_o **p__8__2; // x21
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  System_Collections_Generic_IEnumerable_TSource__o *assetDataByIndex; // x21
  BattleRootComponent___c_c *v98; // x0
  System_Func_T__TResult__o *_9__13_2; // x22
  Il2CppObject *v100; // x23
  struct BattleRootComponent___c_StaticFields *static_fields; // x0
  int32_t v102; // w2
  const MethodInfo *v103; // x3
  System_Linq_IOrderedEnumerable_TSource__o *v104; // x0
  BattleRootComponent___c_c *v105; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v106; // x21
  System_Func_T__TResult__o *_9__13_3; // x22
  Il2CppObject *v108; // x23
  struct BattleRootComponent___c_StaticFields *v109; // x0
  int32_t v110; // w2
  const MethodInfo *v111; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v112; // x0
  System_Collections_Generic_List_TSource__o *v113; // x0
  int32_t v114; // w2
  const MethodInfo *v115; // x3
  struct BattleEntity_o *battleEnt; // x8
  Il2CppObject *v117; // x21
  int32_t v118; // w2
  const MethodInfo *v119; // x3
  System_String_o *v120; // x0
  int32_t v121; // w2
  const MethodInfo *v122; // x3
  struct BattleRootComponent___c__DisplayClass13_2_o *_8__2; // x8
  BattleRootComponent__LoadAsset_d__13_o *v124; // x21
  AssetStorageLoadWrapper_o *v125; // x23
  Il2CppObject *v126; // x24
  AssetLoader_LoadEndDataHandler_o *v127; // x22
  struct BattleRootComponent___c__DisplayClass13_0_o *v128; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v129; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v130; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v131; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v132; // x8
  struct BattlePerformance_o *perf; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v134; // x8
  struct BattlePerformance_o *v135; // x8
  struct BattlePerformance_o *v136; // x8
  AssumedBattleAssetLoadManager_o *AssumedBattleAssetLoadManager_k__BackingField; // x21
  struct BattleRootComponent___c__DisplayClass13_0_o *v138; // x8
  struct BattlePerformance_o *v139; // x8
  const MethodInfo *v140; // x1
  int32_t v141; // w2
  const MethodInfo *v142; // x3
  int v143; // [xsp+Ch] [xbp-64h] BYREF

  v4 = this;
  if ( (byte_4B0499C & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&Method_AssumedBattleAssetLoadManager_Release_AssumedBattleAssetSearcherBeforeBattle___, v5);
    sub_1BC3008(&BattleDataDefine_TypeInfo, v6);
    sub_1BC3008(&Method_System_Collections_Generic_Dictionary_int__AssetData___ctor__, v7);
    sub_1BC3008(&System_Collections_Generic_Dictionary_int__AssetData__TypeInfo, v8);
    sub_1BC3008(&Method_System_Linq_Enumerable_OrderBy_KeyValuePair_int__AssetData___int___, v9);
    sub_1BC3008(&Method_System_Linq_Enumerable_Select_KeyValuePair_int__AssetData___AssetData___, v10);
    sub_1BC3008(&Method_System_Linq_Enumerable_ToList_AssetData___, v11);
    sub_1BC3008(&System_Func_KeyValuePair_int__AssetData___int__TypeInfo, v12);
    sub_1BC3008(&System_Func_KeyValuePair_int__AssetData___AssetData__TypeInfo, v13);
    sub_1BC3008(&System_GC_TypeInfo, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_AssetData___ctor__, v15);
    sub_1BC3008(&System_Collections_Generic_List_AssetData__TypeInfo, v16);
    sub_1BC3008(&AssetLoader_LoadEndDataHandler_TypeInfo, v17);
    sub_1BC3008(&OptionManager_TypeInfo, v18);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v19);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v20);
    sub_1BC3008(&Method_BattleRootComponent___c__LoadAsset_b__13_2__, v21);
    sub_1BC3008(&Method_BattleRootComponent___c__LoadAsset_b__13_3__, v22);
    sub_1BC3008(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__0__, v23);
    sub_1BC3008(&Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__1__, v24);
    sub_1BC3008(&BattleRootComponent___c__DisplayClass13_0_TypeInfo, v25);
    sub_1BC3008(&Method_BattleRootComponent___c__DisplayClass13_1__LoadAsset_b__4__, v26);
    sub_1BC3008(&BattleRootComponent___c__DisplayClass13_1_TypeInfo, v27);
    sub_1BC3008(&Method_BattleRootComponent___c__DisplayClass13_2__LoadAsset_b__5__, v28);
    sub_1BC3008(&BattleRootComponent___c__DisplayClass13_2_TypeInfo, v29);
    sub_1BC3008(&BattleRootComponent___c_TypeInfo, v30);
    sub_1BC3008(&UnityEngine_WaitForEndOfFrame_TypeInfo, v31);
    sub_1BC3008(&StringLiteral_3081/*"Battle/UniqueCamera/"*/, v32);
    this = (BattleRootComponent__LoadAsset_d__13_o *)sub_1BC3008(&StringLiteral_14925/*"UniqueCameraPrefab"*/, v33);
    byte_4B0499C = 1;
  }
  v143 = 0;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v35 = (Il2CppObject *)sub_1BC3254(BattleRootComponent___c__DisplayClass13_0_TypeInfo);
      System_Object___ctor(v35, 0LL);
      v4->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass13_0_o *)v35;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v35, v36, v37);
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__LoadAsset_d__13_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_14;
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect(0LL);
      v38 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BC3254(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v38, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v38;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1BC2FAC(p__2__current, (int32_t)v38, v40, v41);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    case 1:
      v4->fields.__1__state = -1;
      this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_110;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_110;
      v43 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v43;
      v44 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1BC2FAC(v44, (int32_t)v43, v45, v46);
      v47 = 2;
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
      v51 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(
        v51,
        (Il2CppObject *)_8__1,
        Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__0__,
        0LL);
      if ( !_4__this )
        goto LABEL_110;
      AssetsIndependentToMainOne = BattleRootComponent__LoadAssetsIndependentToMainOne(_4__this, ent, eventId, v51, v52);
      UnityEngine_MonoBehaviour__StartCoroutine_70019872(
        (UnityEngine_MonoBehaviour_o *)_4__this,
        AssetsIndependentToMainOne,
        0LL);
      this = (BattleRootComponent__LoadAsset_d__13_o *)v4->fields.__8__1;
      if ( !this )
        goto LABEL_110;
      this->fields.__2__current = 0LL;
      sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.__2__current, 0, v54, v55);
      assetStorageLoadWrapper = _4__this->fields.assetStorageLoadWrapper;
      v57 = BattleDataDefine_TypeInfo;
      if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
        v57 = BattleDataDefine_TypeInfo;
      }
      v58 = (Il2CppObject *)v4->fields.__8__1;
      ASSET_BATTLE_COMMON = v57->static_fields->ASSET_BATTLE_COMMON;
      v60 = (AssetLoader_LoadEndDataHandler_o *)sub_1BC3254(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v60,
        v58,
        Method_BattleRootComponent___c__DisplayClass13_0__LoadAsset_b__1__,
        0LL);
      if ( !assetStorageLoadWrapper )
        goto LABEL_110;
      AssetStorageLoadWrapper__LoadAssetStorage(assetStorageLoadWrapper, ASSET_BATTLE_COMMON, v60, 1, 0LL);
      v61 = (System_Collections_Generic_List_object__o *)sub_1BC3254(System_Collections_Generic_List_AssetData__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v61,
        (const MethodInfo_36A060C *)Method_System_Collections_Generic_List_AssetData___ctor__);
      v4->fields._motionDataList_5__2 = (struct System_Collections_Generic_List_AssetData__o *)v61;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._motionDataList_5__2, (int32_t)v61, v62, v63);
      AllFieldMotionIds = BattleRootComponent__GetAllFieldMotionIds(
                            v64,
                            v4->fields.battleEnt,
                            v4->fields.ent,
                            &v4->fields._baseMotionIds_5__4,
                            v65);
      v4->fields._fieldMotionIds_5__3 = AllFieldMotionIds;
      p_fieldMotionIds_5__3 = &v4->fields._fieldMotionIds_5__3;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._fieldMotionIds_5__3, (int32_t)AllFieldMotionIds, v68, v69);
      v70 = v4->fields.__8__1;
      if ( !v70 )
        goto LABEL_110;
      v70->fields.loadCompCnt = 0;
      v71 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1BC3254(System_Collections_Generic_Dictionary_int__AssetData__TypeInfo);
      System_Collections_Generic_Dictionary_int__object____ctor(
        v71,
        (const MethodInfo_3307B80 *)Method_System_Collections_Generic_Dictionary_int__AssetData___ctor__);
      v70->fields.assetDataByIndex = (struct System_Collections_Generic_Dictionary_int__AssetData__o *)v71;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v70->fields.assetDataByIndex, (int32_t)v71, v72, v73);
      v75 = *p_fieldMotionIds_5__3;
      if ( !*p_fieldMotionIds_5__3 )
        goto LABEL_110;
      v76 = *(_QWORD *)&v75->max_length;
      if ( (int)v76 < 1 )
        goto LABEL_33;
      v77 = 0LL;
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
    if ( v77 >= (unsigned int)v76 )
      sub_1BC326C(this, method, v74);
    v78 = v75->m_Items[v77 + 1];
    v79 = sub_1BC3254(BattleRootComponent___c__DisplayClass13_1_TypeInfo);
    System_Object___ctor((Il2CppObject *)v79, 0LL);
    if ( !v79 )
      goto LABEL_110;
    v82 = v4->fields.__8__1;
    v83 = v4;
    *(_QWORD *)(v79 + 24) = v82;
    v84 = v79 + 24;
    sub_1BC2FAC((CGThumbnailListItem_o *)(v79 + 24), (int32_t)v82, v80, v81);
    *(_DWORD *)(v79 + 16) = v77;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    v85 = BattleDataDefine__FieldMotionPath(v78, 0LL);
    v86 = _4__this->fields.assetStorageLoadWrapper;
    v87 = v85;
    v88 = _4__this;
    v89 = (AssetLoader_LoadEndDataHandler_o *)sub_1BC3254(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v89,
      (Il2CppObject *)v79,
      Method_BattleRootComponent___c__DisplayClass13_1__LoadAsset_b__4__,
      0LL);
    if ( !v86 )
      goto LABEL_110;
    this = (BattleRootComponent__LoadAsset_d__13_o *)AssetStorageLoadWrapper__LoadAssetStorage(v86, v87, v89, 1, 0LL);
    _4__this = v88;
    v4 = v83;
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !*(_QWORD *)v84 )
        goto LABEL_110;
      ++*(_DWORD *)(*(_QWORD *)v84 + 40LL);
    }
    LODWORD(v76) = v75->max_length;
    ++v77;
  }
  while ( (__int64)v77 < (int)v76 );
LABEL_33:
  this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  v90 = (AssetManager_o *)this;
  if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
  if ( !v90 )
    goto LABEL_110;
  AssetManager__UpdateLoadParallelMax(v90, BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX, 0LL);
LABEL_38:
  v91 = v4->fields.__8__1;
  if ( !v91 )
    goto LABEL_110;
  if ( !v91->fields.commonData )
  {
LABEL_42:
    v4->fields.__2__current = 0LL;
    v44 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
    sub_1BC2FAC(v44, 0, v2, v3);
    v47 = 3;
LABEL_106:
    LODWORD(v44[-1].fields._ThumbnailSpritePath_k__BackingField) = v47;
    return 1;
  }
  fieldMotionIds_5__3 = v4->fields._fieldMotionIds_5__3;
  if ( !fieldMotionIds_5__3 )
    goto LABEL_110;
  if ( v91->fields.loadCompCnt < (signed int)fieldMotionIds_5__3->max_length )
    goto LABEL_42;
  assetDataByIndex = (System_Collections_Generic_IEnumerable_TSource__o *)v91->fields.assetDataByIndex;
  v98 = BattleRootComponent___c_TypeInfo;
  if ( !BattleRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleRootComponent___c_TypeInfo);
    v98 = BattleRootComponent___c_TypeInfo;
  }
  _9__13_2 = (System_Func_T__TResult__o *)v98->static_fields->__9__13_2;
  if ( !_9__13_2 )
  {
    if ( !v98->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v98);
      v98 = BattleRootComponent___c_TypeInfo;
    }
    v100 = (Il2CppObject *)v98->static_fields->__9;
    _9__13_2 = (System_Func_T__TResult__o *)sub_1BC3254(System_Func_KeyValuePair_int__AssetData___int__TypeInfo);
    System_Func_KeyValuePair_int__object___int____ctor(
      _9__13_2,
      v100,
      Method_BattleRootComponent___c__LoadAsset_b__13_2__,
      0LL);
    static_fields = BattleRootComponent___c_TypeInfo->static_fields;
    static_fields->__9__13_2 = (struct System_Func_KeyValuePair_int__AssetData___int__o *)_9__13_2;
    sub_1BC2FAC((CGThumbnailListItem_o *)&static_fields->__9__13_2, (int32_t)_9__13_2, v102, v103);
  }
  v104 = System_Linq_Enumerable__OrderBy_KeyValuePair_int__object___int_(
           assetDataByIndex,
           (System_Func_TSource__TKey__o *)_9__13_2,
           (const MethodInfo_302D214 *)Method_System_Linq_Enumerable_OrderBy_KeyValuePair_int__AssetData___int___);
  v105 = BattleRootComponent___c_TypeInfo;
  v106 = (System_Collections_Generic_IEnumerable_TSource__o *)v104;
  if ( !BattleRootComponent___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleRootComponent___c_TypeInfo);
    v105 = BattleRootComponent___c_TypeInfo;
  }
  _9__13_3 = (System_Func_T__TResult__o *)v105->static_fields->__9__13_3;
  if ( !_9__13_3 )
  {
    if ( !v105->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v105);
      v105 = BattleRootComponent___c_TypeInfo;
    }
    v108 = (Il2CppObject *)v105->static_fields->__9;
    _9__13_3 = (System_Func_T__TResult__o *)sub_1BC3254(System_Func_KeyValuePair_int__AssetData___AssetData__TypeInfo);
    System_Func_KeyValuePair_int__object___object____ctor(
      _9__13_3,
      v108,
      Method_BattleRootComponent___c__LoadAsset_b__13_3__,
      0LL);
    v109 = BattleRootComponent___c_TypeInfo->static_fields;
    v109->__9__13_3 = (struct System_Func_KeyValuePair_int__AssetData___AssetData__o *)_9__13_3;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v109->__9__13_3, (int32_t)_9__13_3, v110, v111);
  }
  v112 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_KeyValuePair_int__object___object_(
                                                                v106,
                                                                (System_Func_TSource__TResult__o *)_9__13_3,
                                                                (const MethodInfo_302EA9C *)Method_System_Linq_Enumerable_Select_KeyValuePair_int__AssetData___AssetData___);
  v113 = System_Linq_Enumerable__ToList_object_(
           v112,
           (const MethodInfo_3042DE0 *)Method_System_Linq_Enumerable_ToList_AssetData___);
  v4->fields._motionDataList_5__2 = (struct System_Collections_Generic_List_AssetData__o *)v113;
  sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields._motionDataList_5__2, (int32_t)v113, v114, v115);
  battleEnt = v4->fields.battleEnt;
  if ( !battleEnt )
    goto LABEL_110;
  this = (BattleRootComponent__LoadAsset_d__13_o *)battleEnt->fields.battleInfo;
  if ( !this )
    goto LABEL_110;
  this = (BattleRootComponent__LoadAsset_d__13_o *)BattleInfoData__GetUniqueCameraId(
                                                     (BattleInfoData_o *)this,
                                                     v4->fields.ent,
                                                     0LL);
  v143 = (int)this;
  if ( (_DWORD)this )
  {
    v117 = (Il2CppObject *)sub_1BC3254(BattleRootComponent___c__DisplayClass13_2_TypeInfo);
    System_Object___ctor(v117, 0LL);
    v4->fields.__8__2 = (struct BattleRootComponent___c__DisplayClass13_2_o *)v117;
    sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.__8__2, (int32_t)v117, v118, v119);
    v120 = System_Int32__ToString((int32_t)&v143, 0LL);
    this = (BattleRootComponent__LoadAsset_d__13_o *)System_String__Concat_62348648(
                                                       (System_String_o *)StringLiteral_3081/*"Battle/UniqueCamera/"*/,
                                                       v120,
                                                       0LL);
    _8__2 = v4->fields.__8__2;
    if ( !_8__2 )
      goto LABEL_110;
    _8__2->fields.uniqueCameraData = 0LL;
    v124 = this;
    sub_1BC2FAC((CGThumbnailListItem_o *)&_8__2->fields, 0, v121, v122);
    if ( !_4__this )
      goto LABEL_110;
    v125 = _4__this->fields.assetStorageLoadWrapper;
    v126 = (Il2CppObject *)v4->fields.__8__2;
    v127 = (AssetLoader_LoadEndDataHandler_o *)sub_1BC3254(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(
      v127,
      v126,
      Method_BattleRootComponent___c__DisplayClass13_2__LoadAsset_b__5__,
      0LL);
    if ( !v125 )
      goto LABEL_110;
    this = (BattleRootComponent__LoadAsset_d__13_o *)AssetStorageLoadWrapper__LoadAssetStorage(
                                                       v125,
                                                       (System_String_o *)v124,
                                                       v127,
                                                       1,
                                                       0LL);
    v4->fields._loadSucceeded_5__5 = (unsigned __int8)this & 1;
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v128 = v4->fields.__8__1;
      if ( !v128 )
        goto LABEL_110;
      this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_110;
      BattlePerformance__loadStorageObjectCameraCommon((BattlePerformance_o *)this, v128->fields.commonData, 0LL);
    }
LABEL_44:
    p__8__2 = &v4->fields.__8__2;
    v93 = v4->fields.__8__2;
    if ( !v93 )
      goto LABEL_110;
    method = (const MethodInfo *)v93->fields.uniqueCameraData;
    if ( !method )
    {
      v4->fields.__2__current = 0LL;
      v44 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1BC2FAC(v44, 0, v2, v3);
      v47 = 4;
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
        (System_String_o *)StringLiteral_14925/*"UniqueCameraPrefab"*/,
        0LL);
      *p__8__2 = 0LL;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.__8__2, 0, v95, v96);
    }
    else
    {
      *p__8__2 = 0LL;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.__8__2, 0, v2, v3);
      if ( !_4__this )
        goto LABEL_110;
    }
  }
  else
  {
    if ( !_4__this )
      goto LABEL_110;
    v129 = v4->fields.__8__1;
    if ( !v129 )
      goto LABEL_110;
    this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
    if ( !this )
      goto LABEL_110;
    BattlePerformance__loadStorageObjectCameraCommon((BattlePerformance_o *)this, v129->fields.commonData, 0LL);
  }
  v130 = v4->fields.__8__1;
  if ( !v130 )
    goto LABEL_110;
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_110;
  BattlePerformance__loadStorageObjectCommonMotion((BattlePerformance_o *)this, v130->fields.commonData, 0LL);
  v131 = v4->fields.__8__1;
  if ( !v131 )
    goto LABEL_110;
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_110;
  BattlePerformance__SetEffectControlObjectFromCommonAsset((BattlePerformance_o *)this, v131->fields.commonData, 0LL);
  v132 = v4->fields.__8__1;
  if ( !v132 )
    goto LABEL_110;
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_110;
  BattlePerformance__loadFieldMotion(
    (BattlePerformance_o *)this,
    v132->fields.commonData,
    v4->fields._motionDataList_5__2,
    0LL);
  perf = _4__this->fields.perf;
  if ( !perf )
    goto LABEL_110;
  this = (BattleRootComponent__LoadAsset_d__13_o *)perf->fields._fmManager_k__BackingField;
  if ( !this )
    goto LABEL_110;
  FieldMotionManager__SetBaseFieldMotionIds((FieldMotionManager_o *)this, v4->fields._baseMotionIds_5__4, 0LL);
  v134 = v4->fields.__8__1;
  if ( !v134 )
    goto LABEL_110;
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_110;
  BattlePerformance__SetRootCameraInfoToActionCamera((BattlePerformance_o *)this, v134->fields.commonData, 0LL);
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.perf;
  if ( !this )
    goto LABEL_110;
  BattlePerformance__Initialize((BattlePerformance_o *)this, 0LL);
  this = (BattleRootComponent__LoadAsset_d__13_o *)_4__this->fields.data;
  if ( !this )
    goto LABEL_110;
  BattleData__loadFsmGameObject((BattleData_o *)this, 0LL);
  v135 = _4__this->fields.perf;
  if ( !v135 )
    goto LABEL_110;
  this = (BattleRootComponent__LoadAsset_d__13_o *)v135->fields._AssumedBattleAssetLoadManager_k__BackingField;
  if ( !this )
    goto LABEL_110;
  AssumedBattleAssetLoadManager__Release_object_(
    (AssumedBattleAssetLoadManager_o *)this,
    (const MethodInfo_2FE3804 *)Method_AssumedBattleAssetLoadManager_Release_AssumedBattleAssetSearcherBeforeBattle___);
  v136 = _4__this->fields.perf;
  if ( !v136 )
    goto LABEL_110;
  AssumedBattleAssetLoadManager_k__BackingField = v136->fields._AssumedBattleAssetLoadManager_k__BackingField;
  this = (BattleRootComponent__LoadAsset_d__13_o *)AssumedBattleAssetSearcherBeforeBattle__Create(0LL);
  if ( !AssumedBattleAssetLoadManager_k__BackingField )
    goto LABEL_110;
  AssumedBattleAssetLoadManager__Preload(
    AssumedBattleAssetLoadManager_k__BackingField,
    (AssumedBattleAssetSearcherBase_o *)this,
    0LL);
LABEL_98:
  v138 = v4->fields.__8__1;
  if ( !v138 )
    goto LABEL_110;
  if ( v138->fields.isAssetsLoading )
  {
    v4->fields.__2__current = 0LL;
    v44 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
    sub_1BC2FAC(v44, 0, v2, v3);
    v47 = 5;
    goto LABEL_106;
  }
LABEL_101:
  if ( !_4__this )
    goto LABEL_110;
  v139 = _4__this->fields.perf;
  if ( !v139 )
    goto LABEL_110;
  this = (BattleRootComponent__LoadAsset_d__13_o *)v139->fields._AssumedBattleAssetLoadManager_k__BackingField;
  if ( !this )
    goto LABEL_110;
  if ( AssumedBattleAssetLoadManager__IsPreloading((AssumedBattleAssetLoadManager_o *)this, 0LL) )
  {
    v4->fields.__2__current = 0LL;
    v44 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
    sub_1BC2FAC(v44, 0, v141, v142);
    v47 = 6;
    goto LABEL_106;
  }
  BattleRootComponent__SetupObjectsExtractedFromLoadedAssets(_4__this, v140);
  this = (BattleRootComponent__LoadAsset_d__13_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !this )
LABEL_110:
    sub_1BC3264(this, method);
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

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_BattleRootComponent__LoadAsset_d__13_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *v4; // x19
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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x1
  __int64 v51; // x1
  __int64 v52; // x1
  __int64 v53; // x1
  __int64 v54; // x1
  __int64 v55; // x1
  int32_t _1__state; // w8
  bool result; // w0
  Il2CppObject *v58; // x21
  Il2CppObject **p__8__1; // x20
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  int32_t BattleEffectId; // w21
  System_String_o *v63; // x0
  AssetStorageLoadWrapper_o *assetStorageLoadWrapper; // x22
  Il2CppObject *v65; // x24
  BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *v66; // x21
  AssetLoader_LoadEndDataHandler_o *v67; // x23
  Il2CppObject *Master_object; // x21
  System_Collections_Generic_IEnumerable_T__o *v69; // x22
  System_Collections_Generic_List_int__o *v70; // x20
  struct System_Int32_array *items; // x8
  _QWORD *v72; // x9
  __int64 size; // x10
  Il2CppObject *SingleEntity; // x20
  System_Collections_Generic_HashSet_int__o *v75; // x22
  int32_t v76; // w21
  DataMasterBase_TMaster__TEntity__PKType__o *v77; // x21
  _BOOL8 v78; // x0
  __int64 v79; // x1
  _BOOL8 v80; // x0
  __int64 v81; // x1
  struct BattleRootComponent___c__DisplayClass14_0_o *_8__1; // x25
  System_String_o *monitor; // x22
  System_Action_o *_9__8; // x23
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  AssetStorageLoadWrapper_o *v87; // x21
  Il2CppObject *v88; // x23
  System_Action_o *v89; // x22
  BattleRootComponent_o *v90; // x0
  const MethodInfo *v91; // x2
  __int64 v92; // x2
  __int64 v93; // x3
  __int64 v94; // x4
  Il2CppObject *v95; // x1
  System_String_o *v96; // x0
  __int64 v97; // x1
  struct BattleRootComponent___c__DisplayClass14_0_o *v98; // x24
  System_String_o *v99; // x20
  AssetStorageLoadWrapper_o *v100; // x21
  AssetLoader_LoadEndDataHandler_o *_9__9; // x22
  int32_t v102; // w2
  const MethodInfo *v103; // x3
  _BOOL8 Wrapper__LoadAssetStorage; // x0
  __int64 v105; // x1
  struct BattleRootComponent___c__DisplayClass14_0_o *v106; // x8
  long double v107; // q0
  __int64 v108; // x0
  __int64 v109; // x0
  Il2CppObject *v110; // x22
  AtlasManager_o *v111; // x20
  System_Action_o *v112; // x21
  Il2CppObject *v113; // x21
  System_Action_o *v114; // x20
  Il2CppObject *v115; // x21
  System_Action_o *v116; // x20
  Il2CppObject *v117; // x22
  BattlePerformance_o *perf; // x20
  System_Action_o *v119; // x21
  struct BattleRootComponent___c__DisplayClass14_0_o *v120; // x8
  Il2CppObject *v121; // x20
  System_Action_o *v122; // x21
  long double v123; // q0
  __int64 v124; // x0
  __int64 v125; // x0
  long double v126; // q0
  __int64 v127; // x0
  __int64 v128; // x0
  Il2CppObject *v129; // x22
  AtlasManager_o *v130; // x20
  System_Action_o *v131; // x21
  AssetManager_o *v132; // x20
  struct BattleRootComponent___c__DisplayClass14_0_o *v133; // x8
  CGThumbnailListItem_o *v134; // x19
  struct System_Int32_array *v135; // x8
  _QWORD *v136; // x9
  __int64 v137; // x10
  struct System_Int32_array *v138; // x8
  _QWORD *v139; // x9
  __int64 v140; // x10
  const MethodInfo *v141; // x1
  System_Collections_Generic_IEnumerable_T__o *ClassBoardCommandSpellEffectId; // x0
  System_Int32_array *v143; // x20
  AssetManager_o *v144; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v146; // w2
  const MethodInfo *v147; // x3
  struct BattleRootComponent_o *_4__this; // [xsp+0h] [xbp-C0h]
  System_Collections_Generic_List_Enumerator_int__o v149; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v150; // [xsp+20h] [xbp-A0h] BYREF
  Il2CppObject *entity; // [xsp+38h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v152; // [xsp+40h] [xbp-80h] BYREF
  int32_t v153; // [xsp+5Ch] [xbp-64h] BYREF

  v4 = this;
  if ( (byte_4B0499D & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&AtlasManager_TypeInfo, v5);
    sub_1BC3008(&BattleDataDefine_TypeInfo, v6);
    sub_1BC3008(&BattleEffectUtility_TypeInfo, v7);
    sub_1BC3008(&Method_DataManager_GetMaster_BattleMaster___, v8);
    sub_1BC3008(&Method_DataManager_GetMaster_BgmMaster___, v9);
    sub_1BC3008(&Method_DataManager_GetMaster_BuffMaster___, v10);
    sub_1BC3008(&Method_DataManager_GetMaster_ConstantMaster___, v11);
    sub_1BC3008(&DataManager_TypeInfo, v12);
    sub_1BC3008(&Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__, v13);
    sub_1BC3008(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v14);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v15);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__, v16);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__, v17);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v18);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_Enumerator_int__get_Current__, v19);
    sub_1BC3008(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v20);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_int__Add__, v21);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_int__GetEnumerator__, v22);
    sub_1BC3008(&Method_System_Collections_Generic_HashSet_int___ctor__, v23);
    sub_1BC3008(&System_Collections_Generic_HashSet_int__TypeInfo, v24);
    sub_1BC3008(&int_TypeInfo, v25);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__AddRange__, v26);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__Add__, v27);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__GetEnumerator__, v28);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__ToArray__, v29);
    sub_1BC3008(&Method_System_Collections_Generic_List_int___ctor___76760816, v30);
    sub_1BC3008(&Method_System_Collections_Generic_List_int__get_Count__, v31);
    sub_1BC3008(&System_Collections_Generic_List_int__TypeInfo, v32);
    sub_1BC3008(&AssetLoader_LoadEndDataHandler_TypeInfo, v33);
    sub_1BC3008(&OptionManager_TypeInfo, v34);
    sub_1BC3008(&ServantAssetLoadManager_TypeInfo, v35);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AtlasManager__getInstance__, v36);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v37);
    sub_1BC3008(&SoundManager_TypeInfo, v38);
    sub_1BC3008(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__0__, v39);
    sub_1BC3008(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__1__, v40);
    sub_1BC3008(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__2__, v41);
    sub_1BC3008(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__3__, v42);
    sub_1BC3008(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__4__, v43);
    sub_1BC3008(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__5__, v44);
    sub_1BC3008(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__6__, v45);
    sub_1BC3008(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__7__, v46);
    sub_1BC3008(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__8__, v47);
    sub_1BC3008(&Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__9__, v48);
    sub_1BC3008(&BattleRootComponent___c__DisplayClass14_0_TypeInfo, v49);
    sub_1BC3008(&StringLiteral_2750/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE"*/, v50);
    sub_1BC3008(&StringLiteral_2745/*"BATTLE_EFFECT_ID_3003001"*/, v51);
    sub_1BC3008(&StringLiteral_3070/*"Battle/DropEffect/{0}"*/, v52);
    sub_1BC3008(&StringLiteral_3071/*"Battle/Effect/"*/, v53);
    sub_1BC3008(&StringLiteral_2751/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE_PIERCE"*/, v54);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)sub_1BC3008(&StringLiteral_3063/*"Battle"*/, v55);
    byte_4B0499D = 1;
  }
  v153 = 0;
  memset(&v152, 0, sizeof(v152));
  entity = 0LL;
  memset(&v150, 0, sizeof(v150));
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
      v58 = (Il2CppObject *)sub_1BC3254(BattleRootComponent___c__DisplayClass14_0_TypeInfo);
      System_Object___ctor(v58, 0LL);
      v4->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass14_0_o *)v58;
      p__8__1 = (Il2CppObject **)&v4->fields.__8__1;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v58, v60, v61);
      if ( v4->fields.__8__1 )
      {
        v4->fields.__8__1->fields.loadCnt = 0;
        this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)v4->fields.ent;
        v4->fields._loadCntMax_5__2 = 0;
        if ( this )
        {
          BattleEffectId = QuestPhaseEntity__getBattleEffectId((QuestPhaseEntity_o *)this, 0, 0LL);
          if ( !BattleEffectUtility_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BattleEffectUtility_TypeInfo);
          v153 = BattleEffectUtility__setBattleEffectId(BattleEffectId, 0LL);
          v63 = System_Int32__ToString((int32_t)&v153, 0LL);
          this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)System_String__Concat_62348648(
                                                                                  (System_String_o *)StringLiteral_3071/*"Battle/Effect/"*/,
                                                                                  v63,
                                                                                  0LL);
          ++v4->fields._loadCntMax_5__2;
          if ( _4__this )
          {
            assetStorageLoadWrapper = _4__this->fields.assetStorageLoadWrapper;
            v65 = *p__8__1;
            v66 = this;
            v67 = (AssetLoader_LoadEndDataHandler_o *)sub_1BC3254(AssetLoader_LoadEndDataHandler_TypeInfo);
            AssetLoader_LoadEndDataHandler___ctor(
              v67,
              v65,
              Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__0__,
              0LL);
            if ( assetStorageLoadWrapper )
            {
              this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)AssetStorageLoadWrapper__LoadAssetStorage(
                                                                                      assetStorageLoadWrapper,
                                                                                      (System_String_o *)v66,
                                                                                      v67,
                                                                                      1,
                                                                                      0LL);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                if ( !*p__8__1 )
                  goto LABEL_39;
                ++LODWORD((*p__8__1)[1].klass);
              }
              if ( !DataManager_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
              Master_object = DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_ConstantMaster___);
              this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_BuffMaster___);
              if ( this )
              {
                v69 = *(System_Collections_Generic_IEnumerable_T__o **)&this->fields._loadCntMax_5__2;
                v70 = (System_Collections_Generic_List_int__o *)sub_1BC3254(System_Collections_Generic_List_int__TypeInfo);
                System_Collections_Generic_List_int____ctor_57161456(
                  v70,
                  v69,
                  (const MethodInfo_36836F0 *)Method_System_Collections_Generic_List_int___ctor___76760816);
                if ( Master_object )
                {
                  this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ConstantMaster__GetValue(
                                                                                          (ConstantMaster_o *)Master_object,
                                                                                          (System_String_o *)StringLiteral_2750/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE"*/,
                                                                                          0LL);
                  if ( v70 )
                  {
                    items = v70->fields._items;
                    v72 = Method_System_Collections_Generic_List_int__Add__;
                    ++v70->fields._version;
                    if ( items )
                    {
                      size = v70->fields._size;
                      if ( (unsigned int)size >= items->max_length )
                      {
                        System_Collections_Generic_List_int___AddWithResize(
                          v70,
                          (int32_t)this,
                          *(const MethodInfo_3683E1C **)(*(_QWORD *)(v72[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v70->fields._size = size + 1;
                        items->m_Items[size + 1] = (int)this;
                      }
                      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ConstantMaster__GetValue(
                                                                                              (ConstantMaster_o *)Master_object,
                                                                                              (System_String_o *)StringLiteral_2745/*"BATTLE_EFFECT_ID_3003001"*/,
                                                                                              0LL);
                      v135 = v70->fields._items;
                      v136 = Method_System_Collections_Generic_List_int__Add__;
                      ++v70->fields._version;
                      if ( v135 )
                      {
                        v137 = v70->fields._size;
                        if ( (unsigned int)v137 >= v135->max_length )
                        {
                          System_Collections_Generic_List_int___AddWithResize(
                            v70,
                            (int32_t)this,
                            *(const MethodInfo_3683E1C **)(*(_QWORD *)(v136[4] + 192LL) + 112LL));
                        }
                        else
                        {
                          v70->fields._size = v137 + 1;
                          v135->m_Items[v137 + 1] = (int)this;
                        }
                        this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ConstantMaster__GetValue(
                                                                                                (ConstantMaster_o *)Master_object,
                                                                                                (System_String_o *)StringLiteral_2751/*"BATTLE_EFFECT_ID_SPECIAL_INVINCIBLE_PIERCE"*/,
                                                                                                0LL);
                        v138 = v70->fields._items;
                        v139 = Method_System_Collections_Generic_List_int__Add__;
                        ++v70->fields._version;
                        if ( v138 )
                        {
                          v140 = v70->fields._size;
                          v141 = (const MethodInfo *)(unsigned int)this;
                          if ( (unsigned int)v140 >= v138->max_length )
                          {
                            System_Collections_Generic_List_int___AddWithResize(
                              v70,
                              (int32_t)this,
                              *(const MethodInfo_3683E1C **)(*(_QWORD *)(v139[4] + 192LL) + 112LL));
                          }
                          else
                          {
                            v70->fields._size = v140 + 1;
                            v138->m_Items[v140 + 1] = (int)this;
                          }
                          ClassBoardCommandSpellEffectId = (System_Collections_Generic_IEnumerable_T__o *)BattleRootComponent__GetClassBoardCommandSpellEffectId((BattleRootComponent_o *)this, v141);
                          System_Collections_Generic_List_int___AddRange(
                            v70,
                            ClassBoardCommandSpellEffectId,
                            (const MethodInfo_3684028 *)Method_System_Collections_Generic_List_int__AddRange__);
                          v143 = System_Collections_Generic_List_int___ToArray(
                                   v70,
                                   (const MethodInfo_36858D4 *)Method_System_Collections_Generic_List_int__ToArray__);
                          if ( !ServantAssetLoadManager_TypeInfo->_2.cctor_finished )
                            j_il2cpp_runtime_class_init_0(ServantAssetLoadManager_TypeInfo);
                          this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)ServantAssetLoadManager__preloadBattleCommonEffect(
                                                                                                  v143,
                                                                                                  0LL);
                          if ( _4__this->fields.data )
                          {
                            BattleData__addLoadedCommonEffectPath(
                              _4__this->fields.data,
                              (System_String_array *)this,
                              0LL);
                            this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
                            v144 = (AssetManager_o *)this;
                            if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
                              j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
                            if ( v144 )
                            {
                              AssetManager__UpdateLoadParallelMax(
                                v144,
                                BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX,
                                0LL);
                              v4->fields.__2__current = 0LL;
                              p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
                              sub_1BC2FAC(p__2__current, 0, v146, v147);
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
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_BattleMaster___);
    if ( !this )
      goto LABEL_39;
    SingleEntity = DataMasterBase_object__object__long___GetSingleEntity(
                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                     (const MethodInfo_32B1678 *)Method_DataMasterBase_BattleMaster__BattleEntity__long__GetSingleEntity__);
    v75 = (System_Collections_Generic_HashSet_int__o *)sub_1BC3254(System_Collections_Generic_HashSet_int__TypeInfo);
    System_Collections_Generic_HashSet_int____ctor(
      v75,
      (const MethodInfo_3557E88 *)Method_System_Collections_Generic_HashSet_int___ctor__);
    if ( !SingleEntity )
      goto LABEL_39;
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingleEntity[1].klass;
    if ( !this )
      goto LABEL_39;
    v76 = 0;
    while ( v76 < BattleInfoData__getLastWave((BattleInfoData_o *)this, 0LL) + 1 )
    {
      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattleEntity__GetStageEntityAtWave(
                                                                              (BattleEntity_o *)SingleEntity,
                                                                              v76,
                                                                              0LL);
      if ( this )
      {
        if ( !v75 )
          goto LABEL_39;
        System_Collections_Generic_HashSet_int___Add(
          v75,
          (int32_t)this->fields.__8__1,
          (const MethodInfo_355908C *)Method_System_Collections_Generic_HashSet_int__Add__);
      }
      this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattleEntity__GetStageEntityAtWave(
                                                                              (BattleEntity_o *)SingleEntity,
                                                                              v76,
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
            if ( !v75 )
              goto LABEL_39;
            System_Collections_Generic_HashSet_int___Add(
              v75,
              HIDWORD(this->fields.ent),
              (const MethodInfo_355908C *)Method_System_Collections_Generic_HashSet_int__Add__);
          }
          this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingleEntity[1].klass;
          ++v76;
          if ( this )
            continue;
        }
      }
      goto LABEL_39;
    }
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)DataManager__GetMaster_object_((const MethodInfo_3001E10 *)Method_DataManager_GetMaster_BgmMaster___);
    if ( !v75 )
      goto LABEL_39;
    v77 = (DataMasterBase_TMaster__TEntity__PKType__o *)this;
    System_Collections_Generic_HashSet_int___GetEnumerator(
      (System_Collections_Generic_HashSet_Enumerator_T__o *)&v149,
      v75,
      (const MethodInfo_3558A10 *)Method_System_Collections_Generic_HashSet_int__GetEnumerator__);
    v152 = v149;
    while ( 1 )
    {
      v78 = System_Collections_Generic_HashSet_Enumerator_int___MoveNext(
              (System_Collections_Generic_HashSet_Enumerator_T__o *)&v152,
              (const MethodInfo_343270C *)Method_System_Collections_Generic_HashSet_Enumerator_int__MoveNext__);
      if ( !v78 )
        break;
      if ( !v77 )
        sub_1BC3264(v78, v79);
      v80 = DataMasterBase_object__object__int___TryGetEntity(
              v77,
              &entity,
              v152.fields._current,
              (const MethodInfo_32AF0BC *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
      if ( v80 )
      {
        ++v4->fields._loadCntMax_5__2;
        if ( !entity )
          sub_1BC3264(v80, v81);
        _8__1 = v4->fields.__8__1;
        if ( !_8__1 )
          sub_1BC3264(v80, v81);
        monitor = (System_String_o *)entity[1].monitor;
        _9__8 = _8__1->fields.__9__8;
        if ( !_9__8 )
        {
          _9__8 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
          System_Action___ctor(
            _9__8,
            (Il2CppObject *)_8__1,
            Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__8__,
            0LL);
          _8__1->fields.__9__8 = _9__8;
          sub_1BC2FAC((CGThumbnailListItem_o *)&_8__1->fields.__9__8, (int32_t)_9__8, v85, v86);
        }
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        SoundManager__downloadAudioAssetStorage(monitor, _9__8, 1, 0LL);
      }
    }
    System_Collections_Generic_HashSet_Enumerator_int___Dispose(
      (System_Collections_Generic_HashSet_Enumerator_T__o *)&v152,
      (const MethodInfo_3432708 *)Method_System_Collections_Generic_HashSet_Enumerator_int__Dispose__);
    ++v4->fields._loadCntMax_5__2;
    if ( !_4__this )
      goto LABEL_39;
    v87 = _4__this->fields.assetStorageLoadWrapper;
    v88 = (Il2CppObject *)v4->fields.__8__1;
    v89 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      v89,
      v88,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__1__,
      0LL);
    if ( !v87 )
      goto LABEL_39;
    AssetStorageLoadWrapper__LoadAudioAssetStorage(v87, (System_String_o *)StringLiteral_3063/*"Battle"*/, v89, 1, 0LL);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattleRootComponent__GetLoadDropEffectType(
                                                                            v90,
                                                                            (BattleEntity_o *)SingleEntity,
                                                                            v91);
    if ( !this )
      goto LABEL_39;
    if ( SLODWORD(this->fields.__2__current) >= 1 )
    {
      System_Collections_Generic_List_int___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v149,
        (System_Collections_Generic_List_int__o *)this,
        (const MethodInfo_36848F0 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
      v150 = v149;
      while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
                &v150,
                (const MethodInfo_3432974 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
      {
        LODWORD(v149.fields._list) = v150.fields._current;
        v95 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v149, v92, v93, v94);
        v96 = System_String__Format((System_String_o *)StringLiteral_3070/*"Battle/DropEffect/{0}"*/, v95, 0LL);
        v98 = v4->fields.__8__1;
        ++v4->fields._loadCntMax_5__2;
        if ( !v98 )
          sub_1BC3264(v96, v97);
        v99 = v96;
        v100 = _4__this->fields.assetStorageLoadWrapper;
        _9__9 = v98->fields.__9__9;
        if ( !_9__9 )
        {
          _9__9 = (AssetLoader_LoadEndDataHandler_o *)sub_1BC3254(AssetLoader_LoadEndDataHandler_TypeInfo);
          AssetLoader_LoadEndDataHandler___ctor(
            _9__9,
            (Il2CppObject *)v98,
            Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__9__,
            0LL);
          v98->fields.__9__9 = _9__9;
          sub_1BC2FAC((CGThumbnailListItem_o *)&v98->fields.__9__9, (int32_t)_9__9, v102, v103);
        }
        if ( !v100 )
          sub_1BC3264(v96, v97);
        Wrapper__LoadAssetStorage = AssetStorageLoadWrapper__LoadAssetStorage(v100, v99, _9__9, 1, 0LL);
        if ( !Wrapper__LoadAssetStorage )
        {
          v106 = v4->fields.__8__1;
          if ( !v106 )
            sub_1BC3264(Wrapper__LoadAssetStorage, v105);
          ++v106->fields.loadCnt;
        }
      }
      System_Collections_Generic_List_Enumerator_int___Dispose(
        &v150,
        (const MethodInfo_3432970 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    }
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)_4__this->fields.data;
    if ( !this )
      goto LABEL_39;
    if ( BattleData__IsWarBoard((BattleData_o *)this, 0LL) )
    {
      ++v4->fields._loadCntMax_5__2;
      v108 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
      if ( (*(_BYTE *)(v108 + 309) & 1) == 0 )
        v108 = sub_1C1346C(v107);
      v109 = *(_QWORD *)(*(_QWORD *)(v108 + 192) + 16LL);
      if ( (*(_BYTE *)(v109 + 309) & 1) == 0 )
        v109 = sub_1C1346C(v107);
      v110 = (Il2CppObject *)v4->fields.__8__1;
      v111 = **(AtlasManager_o ***)(v109 + 184);
      v112 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(
        v112,
        v110,
        Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__2__,
        0LL);
      if ( !v111 )
        goto LABEL_39;
      AtlasManager__LoadWarBoardAtlas(v111, v112, 0LL);
    }
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)_4__this->fields.data;
    if ( !this )
      goto LABEL_39;
    if ( BattleData__IsInterruptionQuest((BattleData_o *)this, 0LL) )
    {
      v113 = (Il2CppObject *)v4->fields.__8__1;
      ++v4->fields._loadCntMax_5__2;
      v114 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(
        v114,
        v113,
        Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__3__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadPartyOrganizationAtlas(v114, 1, 0LL);
    }
    if ( !OptionManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
    if ( OptionManager__isSavedMemoryMode(0LL) )
    {
      v115 = (Il2CppObject *)v4->fields.__8__1;
      ++v4->fields._loadCntMax_5__2;
      v116 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(
        v116,
        v115,
        Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__4__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadFaceBattleAtlas(v116, 0LL);
    }
    v117 = (Il2CppObject *)v4->fields.__8__1;
    ++v4->fields._loadCntMax_5__2;
    perf = _4__this->fields.perf;
    v119 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      v119,
      v117,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__5__,
      0LL);
    if ( !perf )
      goto LABEL_39;
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)BattlePerformance__LoadEventInfoPointGauge(
                                                                            perf,
                                                                            v119,
                                                                            v4->fields.eventId,
                                                                            0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      v120 = v4->fields.__8__1;
      if ( !v120 )
        goto LABEL_39;
      ++v120->fields.loadCnt;
    }
    if ( !AtlasManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
    AtlasManager__ReleaseEventAtlas(0LL);
    v121 = (Il2CppObject *)v4->fields.__8__1;
    ++v4->fields._loadCntMax_5__2;
    v122 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      v122,
      v121,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__6__,
      0LL);
    AtlasManager__LoadEventAtlas(v122, 1, 0LL);
    v124 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v124 + 309) & 1) == 0 )
      v124 = sub_1C1346C(v123);
    v125 = *(_QWORD *)(*(_QWORD *)(v124 + 192) + 16LL);
    if ( (*(_BYTE *)(v125 + 309) & 1) == 0 )
      v125 = sub_1C1346C(v123);
    this = **(BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o ***)(v125 + 184);
    if ( !this )
      goto LABEL_39;
    AtlasManager__UnloadBuffIconAtlas((AtlasManager_o *)this, 0LL);
    ++v4->fields._loadCntMax_5__2;
    v127 = *((_QWORD *)Method_SingletonMonoBehaviour_AtlasManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v127 + 309) & 1) == 0 )
      v127 = sub_1C1346C(v126);
    v128 = *(_QWORD *)(*(_QWORD *)(v127 + 192) + 16LL);
    if ( (*(_BYTE *)(v128 + 309) & 1) == 0 )
      v128 = sub_1C1346C(v126);
    v129 = (Il2CppObject *)v4->fields.__8__1;
    v130 = **(AtlasManager_o ***)(v128 + 184);
    v131 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
    System_Action___ctor(
      v131,
      v129,
      Method_BattleRootComponent___c__DisplayClass14_0__LoadAssetsIndependentToMainOne_b__7__,
      0LL);
    if ( !v130 )
      goto LABEL_39;
    AtlasManager__LoadBuffIconAtlas(v130, v131, 0LL);
    this = (BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    v132 = (AssetManager_o *)this;
    if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
    if ( !v132 )
LABEL_39:
      sub_1BC3264(this, method);
    AssetManager__UpdateLoadParallelMax(v132, BattleDataDefine_TypeInfo->static_fields->ASSET_PARALLEL_LOAD_MAX, 0LL);
  }
  v133 = v4->fields.__8__1;
  if ( !v133 )
    goto LABEL_39;
  if ( v133->fields.loadCnt >= v4->fields._loadCntMax_5__2 )
  {
    ActionExtensions__Call(v4->fields.finishCallback, 0LL);
    return 0;
  }
  else
  {
    v4->fields.__2__current = 0LL;
    v134 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
    sub_1BC2FAC(v134, 0, v2, v3);
    LODWORD(v134[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
    return 1;
  }
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

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_BattleRootComponent__LoadAssetsIndependentToMainOne_d__14_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
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


void __fastcall BattleRootComponent___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B04994 & 1) == 0 )
  {
    sub_1BC3008(&BattleRootComponent___c_TypeInfo, v1);
    byte_4B04994 = 1;
  }
  v2 = (Il2CppObject *)sub_1BC3254(BattleRootComponent___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleRootComponent___c_TypeInfo->static_fields->__9 = (struct BattleRootComponent___c_o *)v2;
  sub_1BC2FAC((CGThumbnailListItem_o *)BattleRootComponent___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall BattleRootComponent___c___ctor(BattleRootComponent___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleRootComponent___c___LoadAsset_b__13_2(
        BattleRootComponent___c_o *this,
        System_Collections_Generic_KeyValuePair_int__AssetData__o x,
        const MethodInfo *method)
{
  int32_t key; // w19

  key = x.fields.key;
  if ( (byte_4B04995 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_int__AssetData__get_Key__, *(_QWORD *)&x.fields.key);
    byte_4B04995 = 1;
  }
  return key;
}


AssetData_o *__fastcall BattleRootComponent___c___LoadAsset_b__13_3(
        BattleRootComponent___c_o *this,
        System_Collections_Generic_KeyValuePair_int__AssetData__o x,
        const MethodInfo *method)
{
  AssetData_o *value; // x19

  value = x.fields.value;
  if ( (byte_4B04996 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_KeyValuePair_int__AssetData__get_Value__, *(_QWORD *)&x.fields.key);
    byte_4B04996 = 1;
  }
  return value;
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
  const MethodInfo *v3; // x3

  this->fields.commonData = common;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.commonData, (int32_t)common, (int32_t)method, v3);
}


void __fastcall BattleRootComponent___c__DisplayClass13_1___ctor(
        BattleRootComponent___c__DisplayClass13_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRootComponent___c__DisplayClass13_1___LoadAsset_b__4(
        BattleRootComponent___c__DisplayClass13_1_o *this,
        AssetData_o *motionData,
        const MethodInfo *method)
{
  BattleRootComponent___c__DisplayClass13_1_o *v4; // x19
  struct BattleRootComponent___c__DisplayClass13_0_o *CS___8__locals1; // x8
  struct BattleRootComponent___c__DisplayClass13_0_o *v6; // x8

  v4 = this;
  if ( (byte_4B04997 & 1) == 0 )
  {
    this = (BattleRootComponent___c__DisplayClass13_1_o *)sub_1BC3008(
                                                            &Method_System_Collections_Generic_Dictionary_int__AssetData__Add__,
                                                            motionData);
    byte_4B04997 = 1;
  }
  CS___8__locals1 = v4->fields.CS___8__locals1;
  if ( !CS___8__locals1
    || (this = (BattleRootComponent___c__DisplayClass13_1_o *)CS___8__locals1->fields.assetDataByIndex) == 0LL
    || (System_Collections_Generic_Dictionary_int__object___Add(
          (System_Collections_Generic_Dictionary_int__object__o *)this,
          v4->fields.index,
          (Il2CppObject *)motionData,
          (const MethodInfo_3308554 *)Method_System_Collections_Generic_Dictionary_int__AssetData__Add__),
        (v6 = v4->fields.CS___8__locals1) == 0LL) )
  {
    sub_1BC3264(this, motionData);
  }
  ++v6->fields.loadCompCnt;
}


void __fastcall BattleRootComponent___c__DisplayClass13_2___ctor(
        BattleRootComponent___c__DisplayClass13_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleRootComponent___c__DisplayClass13_2___LoadAsset_b__5(
        BattleRootComponent___c__DisplayClass13_2_o *this,
        AssetData_o *cameraData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.uniqueCameraData = cameraData;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields, (int32_t)cameraData, (int32_t)method, v3);
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
        const MethodInfo *method)
{
  ++this->fields.loadCnt;
}


void __fastcall BattleRootComponent___c__DisplayClass14_0___LoadAssetsIndependentToMainOne_b__9(
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
  __int64 v3; // x1
  System_Collections_Generic_List_object__o *bgmList; // x0
  const MethodInfo *v5; // x3

  if ( (byte_4B04998 & 1) == 0 )
  {
    sub_1BC3008(&Method_System_Collections_Generic_List_string__RemoveAt__, method);
    sub_1BC3008(&Method_System_Collections_Generic_List_string__get_Count__, v3);
    byte_4B04998 = 1;
  }
  bgmList = (System_Collections_Generic_List_object__o *)this->fields.bgmList;
  if ( !bgmList
    || (System_Collections_Generic_List_object___RemoveAt(
          bgmList,
          bgmList->fields._size - 1,
          (const MethodInfo_36A2614 *)Method_System_Collections_Generic_List_string__RemoveAt__),
        (bgmList = (System_Collections_Generic_List_object__o *)this->fields.__4__this) == 0LL) )
  {
    sub_1BC3264(bgmList, method);
  }
  BattleRootComponent__LoadBatteBgm((BattleRootComponent_o *)bgmList, this->fields.bgmList, this->fields.callback, v5);
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
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  struct System_Action_string__o *_9__2; // x22
  int32_t questId; // w20
  int32_t questPhase; // w21
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  struct BattleRootComponent_o *_4__this; // x8

  if ( (byte_4B0499A & 1) == 0 )
  {
    sub_1BC3008(&System_Action_string__TypeInfo, demo1);
    sub_1BC3008(&ScriptManager_TypeInfo, v5);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1BC3008(&Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__2__, v7);
    byte_4B0499A = 1;
  }
  if ( System_String__IsNullOrEmpty(demo1, 0LL) )
  {
    _9__2 = this->fields.__9__2;
    questId = this->fields.questId;
    questPhase = this->fields.questPhase;
    if ( !_9__2 )
    {
      _9__2 = (struct System_Action_string__o *)sub_1BC3254(System_Action_string__TypeInfo);
      System_Action_object____ctor(
        (System_Action_object__o *)_9__2,
        (Il2CppObject *)this,
        Method_BattleRootComponent___c__DisplayClass23_0__TransitionTerminalOrBattleScript_b__2__,
        0LL);
      this->fields.__9__2 = _9__2;
      sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v11, v12);
    }
    if ( !ScriptManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ScriptManager_TypeInfo);
    ScriptManager__LoadBattleEndGameDemo(questId, questPhase, 0, _9__2, 0, 0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    _4__this = this->fields.__4__this;
    if ( !_4__this || !Instance )
      sub_1BC3264(Instance, v14);
    AvalonSceneManager__transitionSceneRefresh(
      (AvalonSceneManager_o *)Instance,
      _4__this->fields.nextscenetype,
      1,
      (Il2CppObject *)this->fields.info,
      0,
      0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleRootComponent___c__DisplayClass23_0___TransitionTerminalOrBattleScript_b__1(
        BattleRootComponent___c__DisplayClass23_0_o *this,
        bool isDeside,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4B04999 & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, isDeside);
    byte_4B04999 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance || (CommonUI__CloseNotificationDialog((CommonUI_o *)Instance, 0LL), !this->fields.__4__this) )
    sub_1BC3264(Instance, v5);
  BattleRootComponent__TerminalTransition((BattleRootComponent_o *)Instance, this->fields.info, v6);
}


void __fastcall BattleRootComponent___c__DisplayClass23_0___TransitionTerminalOrBattleScript_b__2(
        BattleRootComponent___c__DisplayClass23_0_o *this,
        System_String_o *demo2,
        const MethodInfo *method)
{
  Il2CppObject *IsNullOrEmpty; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct BattleRootComponent_o *_4__this; // x8

  if ( (byte_4B0499B & 1) == 0 )
  {
    sub_1BC3008(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, demo2);
    byte_4B0499B = 1;
  }
  IsNullOrEmpty = (Il2CppObject *)System_String__IsNullOrEmpty(demo2, 0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    if ( this->fields.__4__this )
    {
      BattleRootComponent__TerminalTransition((BattleRootComponent_o *)IsNullOrEmpty, this->fields.info, v7);
      return;
    }
LABEL_9:
    sub_1BC3264(IsNullOrEmpty, v6);
  }
  IsNullOrEmpty = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  _4__this = this->fields.__4__this;
  if ( !_4__this || !IsNullOrEmpty )
    goto LABEL_9;
  AvalonSceneManager__transitionSceneRefresh(
    (AvalonSceneManager_o *)IsNullOrEmpty,
    _4__this->fields.nextscenetype,
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  BattleRootComponent__loadOutGameAsset_d__20_o *v4; // x19
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
  struct BattleRootComponent_o *_4__this; // x21
  Il2CppObject *v19; // x20
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  UnityEngine_WaitForEndOfFrame_o *v22; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  bool result; // w0
  System_Collections_IEnumerator_o *v27; // x0
  CGThumbnailListItem_o *v28; // x19
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  int v31; // w8
  Il2CppObject *v32; // x20
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct BattleRootComponent___c__DisplayClass20_1_o *_8__1; // x21
  System_Action_o *v36; // x20
  struct BattleRootComponent___c__DisplayClass20_1_o *v37; // x8
  Il2CppObject *v38; // x20
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct BattleRootComponent___c__DisplayClass20_2_o *_8__2; // x21
  System_Action_o *v42; // x20
  struct BattleRootComponent___c__DisplayClass20_2_o *v43; // x8
  UnityEngine_WaitForEndOfFrame_o *v44; // x20
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct BattleRootComponent___c__DisplayClass20_0_o *_8__3; // x21
  System_Action_o *v48; // x20
  struct BattleRootComponent___c__DisplayClass20_0_o *v49; // x8
  UnityEngine_WaitForEndOfFrame_o *v50; // x20
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  struct BattleRootComponent___c__DisplayClass20_0_o *v53; // x21
  System_Action_o *v54; // x20
  struct BattleRootComponent___c__DisplayClass20_0_o *v55; // x8
  UnityEngine_WaitForEndOfFrame_o *v56; // x20
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  struct BattleRootComponent___c__DisplayClass20_0_o *v59; // x21
  System_Action_o *v60; // x20
  struct BattleRootComponent___c__DisplayClass20_0_o *v61; // x8
  UnityEngine_WaitForEndOfFrame_o *v62; // x20
  int32_t v63; // w2
  const MethodInfo *v64; // x3
  struct System_Action_o *callback; // x8

  v4 = this;
  if ( (byte_4B0499E & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, method);
    sub_1BC3008(&AtlasManager_TypeInfo, v5);
    sub_1BC3008(&System_GC_TypeInfo, v6);
    sub_1BC3008(&OptionManager_TypeInfo, v7);
    sub_1BC3008(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v8);
    sub_1BC3008(&Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__0__, v9);
    sub_1BC3008(&Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__1__, v10);
    sub_1BC3008(&Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__2__, v11);
    sub_1BC3008(&BattleRootComponent___c__DisplayClass20_0_TypeInfo, v12);
    sub_1BC3008(&Method_BattleRootComponent___c__DisplayClass20_1__loadOutGameAsset_b__3__, v13);
    sub_1BC3008(&BattleRootComponent___c__DisplayClass20_1_TypeInfo, v14);
    sub_1BC3008(&Method_BattleRootComponent___c__DisplayClass20_2__loadOutGameAsset_b__4__, v15);
    sub_1BC3008(&BattleRootComponent___c__DisplayClass20_2_TypeInfo, v16);
    this = (BattleRootComponent__loadOutGameAsset_d__20_o *)sub_1BC3008(&UnityEngine_WaitForEndOfFrame_TypeInfo, v17);
    byte_4B0499E = 1;
  }
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v19 = (Il2CppObject *)sub_1BC3254(BattleRootComponent___c__DisplayClass20_0_TypeInfo);
      System_Object___ctor(v19, 0LL);
      v4->fields.__8__3 = (struct BattleRootComponent___c__DisplayClass20_0_o *)v19;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.__8__3, (int32_t)v19, v20, v21);
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_14;
      if ( !System_GC_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
      System_GC__Collect(0LL);
      v22 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BC3254(UnityEngine_WaitForEndOfFrame_TypeInfo);
      UnityEngine_WaitForEndOfFrame___ctor(v22, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v22;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1BC2FAC(p__2__current, (int32_t)v22, v24, v25);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    case 1:
      v4->fields.__1__state = -1;
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_90;
      AssetManager__RequestUnloadUnusedAssets((AssetManager_o *)this, 0LL, 0LL);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_38DFD48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
      if ( !this )
        goto LABEL_90;
      v27 = AssetManager__WaitForExecutionUnloadUnuseAssets((AssetManager_o *)this, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v27;
      v28 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1BC2FAC(v28, (int32_t)v27, v29, v30);
      v31 = 2;
      goto LABEL_89;
    case 2:
      v4->fields.__1__state = -1;
LABEL_14:
      if ( !_4__this )
        goto LABEL_90;
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)_4__this->fields.perf;
      if ( !this )
        goto LABEL_90;
      if ( BattlePerformance__isActiveEventInfoGauge((BattlePerformance_o *)this, 0LL) )
        goto LABEL_25;
      v32 = (Il2CppObject *)sub_1BC3254(BattleRootComponent___c__DisplayClass20_1_TypeInfo);
      System_Object___ctor(v32, 0LL);
      v4->fields.__8__1 = (struct BattleRootComponent___c__DisplayClass20_1_o *)v32;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v32, v33, v34);
      _8__1 = v4->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_90;
      _8__1->fields.isEventAtlasLoaded = 0;
      v36 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(
        v36,
        (Il2CppObject *)_8__1,
        Method_BattleRootComponent___c__DisplayClass20_1__loadOutGameAsset_b__3__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadEventAtlas(v36, 1, 0LL);
LABEL_22:
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)&v4->fields.__8__1;
      v37 = v4->fields.__8__1;
      if ( !v37 )
        goto LABEL_90;
      if ( !v37->fields.isEventAtlasLoaded )
      {
        v4->fields.__2__current = 0LL;
        v28 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1BC2FAC(v28, 0, v2, v3);
        v31 = 3;
        goto LABEL_89;
      }
      this->klass = 0LL;
      sub_1BC2FAC((CGThumbnailListItem_o *)this, 0, v2, v3);
LABEL_25:
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v38 = (Il2CppObject *)sub_1BC3254(BattleRootComponent___c__DisplayClass20_2_TypeInfo);
        System_Object___ctor(v38, 0LL);
        v4->fields.__8__2 = (struct BattleRootComponent___c__DisplayClass20_2_o *)v38;
        sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.__8__2, (int32_t)v38, v39, v40);
        _8__2 = v4->fields.__8__2;
        if ( _8__2 )
        {
          _8__2->fields.isFaceAtlasLoaded = 0;
          v42 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
          System_Action___ctor(
            v42,
            (Il2CppObject *)_8__2,
            Method_BattleRootComponent___c__DisplayClass20_2__loadOutGameAsset_b__4__,
            0LL);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          AtlasManager__LoadFaceAtlas(v42, 1, 0LL);
LABEL_33:
          v43 = v4->fields.__8__2;
          if ( v43 )
          {
            if ( v43->fields.isFaceAtlasLoaded )
            {
              if ( !System_GC_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
              System_GC__Collect(0LL);
              v44 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BC3254(UnityEngine_WaitForEndOfFrame_TypeInfo);
              UnityEngine_WaitForEndOfFrame___ctor(v44, 0LL);
              v4->fields.__2__current = (Il2CppObject *)v44;
              v28 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1BC2FAC(v28, (int32_t)v44, v45, v46);
              v31 = 5;
            }
            else
            {
              v4->fields.__2__current = 0LL;
              v28 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
              sub_1BC2FAC(v28, 0, v2, v3);
              v31 = 4;
            }
            goto LABEL_89;
          }
        }
LABEL_90:
        sub_1BC3264(this, method);
      }
LABEL_39:
      _8__3 = v4->fields.__8__3;
      if ( !_8__3 )
        goto LABEL_90;
      _8__3->fields.isCharaGraphOptionAtlasLoaded = 0;
      v48 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(
        v48,
        (Il2CppObject *)_8__3,
        Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__0__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadCharaGraphOptionAtlas(v48, 1, 0LL);
LABEL_44:
      v49 = v4->fields.__8__3;
      if ( !v49 )
        goto LABEL_90;
      if ( !v49->fields.isCharaGraphOptionAtlasLoaded )
      {
        v4->fields.__2__current = 0LL;
        v28 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1BC2FAC(v28, 0, v2, v3);
        v31 = 6;
LABEL_89:
        LODWORD(v28[-1].fields._ThumbnailSpritePath_k__BackingField) = v31;
        return 1;
      }
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect(0LL);
        v50 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BC3254(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v50, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v50;
        v28 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1BC2FAC(v28, (int32_t)v50, v51, v52);
        v31 = 7;
        goto LABEL_89;
      }
LABEL_54:
      v53 = v4->fields.__8__3;
      if ( !v53 )
        goto LABEL_90;
      v53->fields.isBannerAtlasLoaded = 0;
      v54 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(
        v54,
        (Il2CppObject *)v53,
        Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__1__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadBanner(v54, 1, 0LL);
LABEL_59:
      v55 = v4->fields.__8__3;
      if ( !v55 )
        goto LABEL_90;
      if ( !v55->fields.isBannerAtlasLoaded )
      {
        v4->fields.__2__current = 0LL;
        v28 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1BC2FAC(v28, 0, v2, v3);
        v31 = 8;
        goto LABEL_89;
      }
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect(0LL);
        v56 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BC3254(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v56, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v56;
        v28 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1BC2FAC(v28, (int32_t)v56, v57, v58);
        v31 = 9;
        goto LABEL_89;
      }
LABEL_69:
      v59 = v4->fields.__8__3;
      if ( !v59 )
        goto LABEL_90;
      v59->fields.isEventUIAtlasLoaded = 0;
      v60 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
      System_Action___ctor(
        v60,
        (Il2CppObject *)v59,
        Method_BattleRootComponent___c__DisplayClass20_0__loadOutGameAsset_b__2__,
        0LL);
      if ( !AtlasManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
      AtlasManager__LoadEventUI(v60, 1, 0LL);
LABEL_74:
      v61 = v4->fields.__8__3;
      if ( !v61 )
        goto LABEL_90;
      if ( !v61->fields.isEventUIAtlasLoaded )
      {
        v4->fields.__2__current = 0LL;
        v28 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1BC2FAC(v28, 0, v2, v3);
        v31 = 10;
        goto LABEL_89;
      }
      if ( !OptionManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
      this = (BattleRootComponent__loadOutGameAsset_d__20_o *)OptionManager__isSavedMemoryMode(0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !System_GC_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_GC_TypeInfo);
        System_GC__Collect(0LL);
        v62 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BC3254(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v62, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v62;
        v28 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1BC2FAC(v28, (int32_t)v62, v63, v64);
        v31 = 11;
        goto LABEL_89;
      }
LABEL_84:
      callback = v4->fields.callback;
      if ( !callback )
        goto LABEL_90;
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
        callback->fields.original_method_info,
        *(_QWORD *)&callback->fields.extra_arg);
      return 0;
    case 3:
      v4->fields.__1__state = -1;
      goto LABEL_22;
    case 4:
      v4->fields.__1__state = -1;
      goto LABEL_33;
    case 5:
      v4->fields.__8__2 = 0LL;
      v4->fields.__1__state = -1;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v4->fields.__8__2, 0, v2, v3);
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

  v2 = sub_1BC301C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BC3254(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BC301C(&Method_BattleRootComponent__loadOutGameAsset_d__20_System_Collections_IEnumerator_Reset__);
  sub_1BC3130(v3, v4);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0FC38;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0FBF8;
}


System_IAsyncResult_o *__fastcall BattleRootComponent_callBackBeginResume__BeginInvoke(
        BattleRootComponent_callBackBeginResume_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0LL;
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, &v5, callback, object);
}


void __fastcall BattleRootComponent_callBackBeginResume__EndInvoke(
        BattleRootComponent_callBackBeginResume_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
}


void __fastcall BattleRootComponent_callBackBeginResume__Invoke(
        BattleRootComponent_callBackBeginResume_o *this,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    *(_QWORD *)&this->fields.extra_arg);
}