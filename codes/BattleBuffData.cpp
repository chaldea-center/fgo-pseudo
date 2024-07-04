void __fastcall BattleBuffData___ctor(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x20
  int32_t v9; // w2
  int32_t v10; // w3
  System_Collections_Generic_List_object__o *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_List_object__o *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_List_object__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_List_int__o *v20; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_Generic_List_object__o *v23; // x20
  int32_t v24; // w2
  int32_t v25; // w3
  System_Collections_Generic_List_object__o *v26; // x20
  int32_t v27; // w2
  int32_t v28; // w3
  struct System_Int32_array *v29; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  BattleBuffData_SkillRankChangeData_o *v32; // x20
  int32_t v33; // w2
  int32_t v34; // w3

  if ( (byte_48E48C9 & 1) == 0 )
  {
    sub_1B00CCC(&int___TypeInfo, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v4);
    sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v6);
    sub_1B00CCC(&BattleBuffData_SkillRankChangeData_TypeInfo, v7);
    byte_48E48C9 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields.passiveList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v8;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.passiveList, (int32_t)v8, v9, v10);
  v11 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields.activeList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v11;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.activeList, (int32_t)v11, v12, v13);
  v14 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields.conditionalAuraBuff = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v14;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.conditionalAuraBuff, (int32_t)v14, v15, v16);
  v17 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields.auraBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v17;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.auraBuffList, (int32_t)v17, v18, v19);
  this->fields.addBuffOrder = 1;
  v20 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.unfixedBuffList = v20;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.unfixedBuffList, (int32_t)v20, v21, v22);
  v23 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields.classIconAuraEffectBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v23;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.classIconAuraEffectBuffList, (int32_t)v23, v24, v25);
  v26 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this->fields.updateWaitIntervalBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)v26;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.updateWaitIntervalBuffList, (int32_t)v26, v27, v28);
  v29 = (struct System_Int32_array *)sub_1B00D74(int___TypeInfo, 0LL);
  this->fields.wkzero = v29;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.wkzero, (int32_t)v29, v30, v31);
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v32 = (BattleBuffData_SkillRankChangeData_o *)sub_1B00F18(BattleBuffData_SkillRankChangeData_TypeInfo);
  BattleBuffData_SkillRankChangeData___ctor(v32, this, 0LL);
  this->fields.skillChangeData = v32;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.skillChangeData, (int32_t)v32, v33, v34);
}


void __fastcall BattleBuffData__AddEffectBuffList(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_o *v4; // x20
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x8
  _QWORD *v9; // x9
  __int64 passiveList_low; // x10
  __int64 v11; // x8
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x8
  _QWORD *v15; // x9
  __int64 v16; // x10
  __int64 v17; // x8

  v4 = this;
  if ( (byte_48E4910 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, buff);
    this = (BattleBuffData_o *)sub_1B00CCC(
                                 &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__,
                                 v5);
    byte_48E4910 = 1;
  }
  if ( !buff )
    goto LABEL_21;
  if ( buff->fields.auraEffectId )
  {
    this = (BattleBuffData_o *)v4->fields.auraBuffList;
    if ( !this )
      goto LABEL_21;
    if ( !System_Collections_Generic_List_object___Contains(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)buff,
            (const MethodInfo_33C1D60 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
    {
      this = (BattleBuffData_o *)v4->fields.auraBuffList;
      if ( !this )
        goto LABEL_21;
      v8 = *(_QWORD *)&this->fields.resumptionHpFromLossMaxHp;
      v9 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
      ++HIDWORD(this->fields.passiveList);
      if ( !v8 )
        goto LABEL_21;
      passiveList_low = SLODWORD(this->fields.passiveList);
      if ( (unsigned int)passiveList_low >= *(_DWORD *)(v8 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)buff,
          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
      }
      else
      {
        v11 = v8 + 8 * passiveList_low;
        LODWORD(this->fields.passiveList) = passiveList_low + 1;
        *(_QWORD *)(v11 + 32) = buff;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v11 + 32), (int32_t)buff, v6, v7);
      }
    }
  }
  if ( !buff->fields.classIconAuraEffectId )
    return;
  this = (BattleBuffData_o *)v4->fields.classIconAuraEffectBuffList;
  if ( !this )
    goto LABEL_21;
  if ( System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)this,
         (Il2CppObject *)buff,
         (const MethodInfo_33C1D60 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
  {
    return;
  }
  this = (BattleBuffData_o *)v4->fields.classIconAuraEffectBuffList;
  if ( !this
    || (v14 = *(_QWORD *)&this->fields.resumptionHpFromLossMaxHp,
        v15 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__,
        ++HIDWORD(this->fields.passiveList),
        !v14) )
  {
LABEL_21:
    sub_1B00F28(this, buff);
  }
  v16 = SLODWORD(this->fields.passiveList);
  if ( (unsigned int)v16 >= *(_DWORD *)(v14 + 24) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)buff,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v17 = v14 + 8 * v16;
    LODWORD(this->fields.passiveList) = v16 + 1;
    *(_QWORD *)(v17 + 32) = buff;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v17 + 32), (int32_t)buff, v12, v13);
  }
}


void __fastcall BattleBuffData__AddForceBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_array *buffArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Action_object__o *v7; // x21

  if ( (byte_48E48F4 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_BattleBuffData_BuffData__TypeInfo, buffArray);
    sub_1B00CCC(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v5);
    sub_1B00CCC(&Method_BattleBuffData__AddForceBuff_b__90_0__, v6);
    byte_48E48F4 = 1;
  }
  v7 = (System_Action_object__o *)sub_1B00F18(System_Action_BattleBuffData_BuffData__TypeInfo);
  System_Action_object____ctor(v7, (Il2CppObject *)this, Method_BattleBuffData__AddForceBuff_b__90_0__, 0LL);
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)buffArray,
    (System_Action_T__o *)v7,
    (const MethodInfo_2D50464 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
}


void __fastcall BattleBuffData__AddGetSkillTypeBuff(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *addBuffList,
        const MethodInfo *method)
{
  BattleBuffData_o *v4; // x19
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
  BattleBuffData___c_c *v19; // x0
  System_Func_object__int__o *_9__216_0; // x21
  Il2CppObject *v21; // x22
  struct BattleBuffData___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w1
  _BOOL8 v26; // x0
  __int64 v27; // x1
  int32_t v28; // w2
  int32_t v29; // w3
  Il2CppObject *current; // x20
  System_Collections_Generic_List_object__o *auraBuffList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  Il2CppClass **v35; // x8
  System_Collections_Generic_List_object__o *passiveList; // x0
  struct System_Object_array *v37; // x8
  _QWORD *v38; // x9
  __int64 v39; // x10
  Il2CppClass **v40; // x8
  System_Collections_Generic_List_object__o *v41; // x20
  System_Comparison_T__o *v42; // x21
  Il2CppObject *klass; // x22
  struct BattleBuffData___c_StaticFields *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_Collections_Generic_List_object__o *activeList; // x20
  Il2CppObject *syncRoot; // x21
  Il2CppObject *v49; // x22
  struct BattleBuffData___c_StaticFields *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  System_Collections_Generic_List_object__o *v53; // x19
  System_Comparison_T__o *v54; // x20
  Il2CppObject *v55; // x21
  struct BattleBuffData___c_StaticFields *v56; // x0
  int32_t v57; // w2
  int32_t v58; // w3
  System_Collections_Generic_List_Enumerator_object__o v59; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v60; // [xsp+20h] [xbp-70h] BYREF

  v4 = this;
  if ( (byte_48E4948 & 1) == 0 )
  {
    sub_1B00CCC(&System_Comparison_BattleBuffData_BuffData__TypeInfo, addBuffList);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Max_BattleBuffData_BuffData___, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v8);
    sub_1B00CCC(&System_Func_BattleBuffData_BuffData__int__TypeInfo, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v13);
    sub_1B00CCC(&Method_BattleBuffData___c__AddGetSkillTypeBuff_b__216_0__, v14);
    sub_1B00CCC(&Method_BattleBuffData___c__AddGetSkillTypeBuff_b__216_1__, v15);
    sub_1B00CCC(&Method_BattleBuffData___c__AddGetSkillTypeBuff_b__216_2__, v16);
    sub_1B00CCC(&Method_BattleBuffData___c__AddGetSkillTypeBuff_b__216_3__, v17);
    this = (BattleBuffData_o *)sub_1B00CCC(&BattleBuffData___c_TypeInfo, v18);
    byte_48E4948 = 1;
  }
  memset(&v60, 0, sizeof(v60));
  if ( !addBuffList )
    goto LABEL_62;
  if ( addBuffList->fields._size < 1 )
  {
    v25 = 0;
  }
  else
  {
    v19 = BattleBuffData___c_TypeInfo;
    if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      v19 = BattleBuffData___c_TypeInfo;
    }
    _9__216_0 = (System_Func_object__int__o *)v19->static_fields->__9__216_0;
    if ( !_9__216_0 )
    {
      if ( !v19->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v19);
        v19 = BattleBuffData___c_TypeInfo;
      }
      v21 = (Il2CppObject *)v19->static_fields->__9;
      _9__216_0 = (System_Func_object__int__o *)sub_1B00F18(System_Func_BattleBuffData_BuffData__int__TypeInfo);
      System_Func_object__int____ctor(_9__216_0, v21, Method_BattleBuffData___c__AddGetSkillTypeBuff_b__216_0__, 0LL);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
      static_fields->__9__216_0 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__216_0;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__216_0, (int32_t)_9__216_0, v23, v24);
    }
    v25 = System_Linq_Enumerable__Max_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)addBuffList,
            (System_Func_TSource__int__o *)_9__216_0,
            (const MethodInfo_2D88A2C *)Method_System_Linq_Enumerable_Max_BattleBuffData_BuffData___);
  }
  BattleBuffData__UpdateBuffAddOrder(v4, v25, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v59,
    (System_Collections_Generic_List_object__o *)addBuffList,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v60 = v59;
  while ( 1 )
  {
    v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v60,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v26 )
      break;
    current = v60.fields._current;
    if ( !v60.fields._current )
      sub_1B00F28(v26, v27);
    if ( LODWORD(v60.fields._current[4].klass) )
    {
      auraBuffList = (System_Collections_Generic_List_object__o *)v4->fields.auraBuffList;
      if ( !auraBuffList )
        sub_1B00F28(0LL, v27);
      items = auraBuffList->fields._items;
      v33 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
      ++auraBuffList->fields._version;
      if ( !items )
        sub_1B00F28(auraBuffList, v27);
      size = auraBuffList->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          auraBuffList,
          current,
          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v35 = &items->obj.klass + size;
        auraBuffList->fields._size = size + 1;
        v35[4] = (Il2CppClass *)current;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v35 + 4), (int32_t)current, v28, v29);
      }
    }
    if ( BYTE1(current[2].klass) )
    {
      passiveList = (System_Collections_Generic_List_object__o *)v4->fields.passiveList;
      if ( !passiveList )
        sub_1B00F28(0LL, v27);
      v37 = passiveList->fields._items;
      v38 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
      ++passiveList->fields._version;
      if ( !v37 )
        sub_1B00F28(passiveList, v27);
      v39 = passiveList->fields._size;
      if ( (unsigned int)v39 < v37->max_length )
        goto LABEL_26;
LABEL_31:
      System_Collections_Generic_List_object___AddWithResize(
        passiveList,
        current,
        *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v38[4] + 192LL) + 112LL));
    }
    else
    {
      passiveList = (System_Collections_Generic_List_object__o *)v4->fields.activeList;
      if ( !passiveList )
        sub_1B00F28(0LL, v27);
      v37 = passiveList->fields._items;
      v38 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
      ++passiveList->fields._version;
      if ( !v37 )
        sub_1B00F28(passiveList, v27);
      v39 = passiveList->fields._size;
      if ( (unsigned int)v39 >= v37->max_length )
        goto LABEL_31;
LABEL_26:
      v40 = &v37->obj.klass + v39;
      passiveList->fields._size = v39 + 1;
      v40[4] = (Il2CppClass *)current;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v40 + 4), (int32_t)current, v28, v29);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v60,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  v41 = (System_Collections_Generic_List_object__o *)v4->fields.passiveList;
  if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  }
  v42 = *(System_Comparison_T__o **)&this[1].fields.passiveList[5].fields._size;
  if ( !v42 )
  {
    if ( !this[1].fields.addBuffOrder )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
    }
    klass = (Il2CppObject *)this[1].fields.passiveList->klass;
    v42 = (System_Comparison_T__o *)sub_1B00F18(System_Comparison_BattleBuffData_BuffData__TypeInfo);
    System_Comparison_object____ctor(v42, klass, Method_BattleBuffData___c__AddGetSkillTypeBuff_b__216_1__, 0LL);
    v44 = BattleBuffData___c_TypeInfo->static_fields;
    v44->__9__216_1 = (struct System_Comparison_BattleBuffData_BuffData__o *)v42;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v44->__9__216_1, (int32_t)v42, v45, v46);
  }
  if ( !v41 )
    goto LABEL_62;
  System_Collections_Generic_List_object___Sort_54277268(
    v41,
    v42,
    (const MethodInfo_33C3494 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
  this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  activeList = (System_Collections_Generic_List_object__o *)v4->fields.activeList;
  if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  }
  syncRoot = this[1].fields.passiveList[5].fields._syncRoot;
  if ( !syncRoot )
  {
    if ( !this[1].fields.addBuffOrder )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
    }
    v49 = (Il2CppObject *)this[1].fields.passiveList->klass;
    syncRoot = (Il2CppObject *)sub_1B00F18(System_Comparison_BattleBuffData_BuffData__TypeInfo);
    System_Comparison_object____ctor(
      (System_Comparison_T__o *)syncRoot,
      v49,
      Method_BattleBuffData___c__AddGetSkillTypeBuff_b__216_2__,
      0LL);
    v50 = BattleBuffData___c_TypeInfo->static_fields;
    v50->__9__216_2 = (struct System_Comparison_BattleBuffData_BuffData__o *)syncRoot;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v50->__9__216_2, (int32_t)syncRoot, v51, v52);
  }
  if ( !activeList )
    goto LABEL_62;
  System_Collections_Generic_List_object___Sort_54277268(
    activeList,
    (System_Comparison_T__o *)syncRoot,
    (const MethodInfo_33C3494 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
  this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  v53 = (System_Collections_Generic_List_object__o *)v4->fields.auraBuffList;
  if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  }
  v54 = (System_Comparison_T__o *)this[1].fields.passiveList[6].klass;
  if ( !v54 )
  {
    if ( !this[1].fields.addBuffOrder )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
    }
    v55 = (Il2CppObject *)this[1].fields.passiveList->klass;
    v54 = (System_Comparison_T__o *)sub_1B00F18(System_Comparison_BattleBuffData_BuffData__TypeInfo);
    System_Comparison_object____ctor(v54, v55, Method_BattleBuffData___c__AddGetSkillTypeBuff_b__216_3__, 0LL);
    v56 = BattleBuffData___c_TypeInfo->static_fields;
    v56->__9__216_3 = (struct System_Comparison_BattleBuffData_BuffData__o *)v54;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v56->__9__216_3, (int32_t)v54, v57, v58);
  }
  if ( !v53 )
LABEL_62:
    sub_1B00F28(this, addBuffList);
  System_Collections_Generic_List_object___Sort_54277268(
    v53,
    v54,
    (const MethodInfo_33C3494 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
}


void __fastcall BattleBuffData__AddResumptionHpFromLossMaxHp(
        BattleBuffData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields.resumptionHpFromLossMaxHp += value;
}


void __fastcall BattleBuffData__AddUpdateWaitIntervalBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Collections_Generic_List_object__o *updateWaitIntervalBuffList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10
  Il2CppClass **v10; // x8

  if ( (byte_48E48C6 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, buff);
    byte_48E48C6 = 1;
  }
  updateWaitIntervalBuffList = (System_Collections_Generic_List_object__o *)this->fields.updateWaitIntervalBuffList;
  if ( !updateWaitIntervalBuffList
    || (items = updateWaitIntervalBuffList->fields._items,
        v8 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__,
        ++updateWaitIntervalBuffList->fields._version,
        !items) )
  {
    sub_1B00F28(updateWaitIntervalBuffList, buff);
  }
  size = updateWaitIntervalBuffList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      updateWaitIntervalBuffList,
      (Il2CppObject *)buff,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    v10 = &items->obj.klass + size;
    updateWaitIntervalBuffList->fields._size = size + 1;
    v10[4] = (Il2CppClass *)buff;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v10 + 4), (int32_t)buff, (int32_t)method, v3);
  }
}


System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *__fastcall BattleBuffData__AllBuffEnumerable(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_48E495A & 1) == 0 )
  {
    sub_1B00CCC(&BattleBuffData__AllBuffEnumerable_d__244_TypeInfo, method);
    byte_48E495A = 1;
  }
  v3 = sub_1B00F18(BattleBuffData__AllBuffEnumerable_d__244_TypeInfo);
  BattleBuffData__AllBuffEnumerable_d__244___ctor((BattleBuffData__AllBuffEnumerable_d__244_o *)v3, -2, 0LL);
  if ( !v3 )
    sub_1B00F28(v4, v5);
  *(_QWORD *)(v3 + 40) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v3 + 40), (int32_t)this, v6, v7);
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)v3;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *__fastcall BattleBuffData__AllBuffValidEnumerable(
        BattleBuffData_o *this,
        bool isCheckInterval,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_48E495C & 1) == 0 )
  {
    sub_1B00CCC(&BattleBuffData__AllBuffValidEnumerable_d__246_TypeInfo, isCheckInterval);
    byte_48E495C = 1;
  }
  v5 = sub_1B00F18(BattleBuffData__AllBuffValidEnumerable_d__246_TypeInfo);
  BattleBuffData__AllBuffValidEnumerable_d__246___ctor((BattleBuffData__AllBuffValidEnumerable_d__246_o *)v5, -2, 0LL);
  if ( !v5 )
    sub_1B00F28(v6, v7);
  *(_QWORD *)(v5 + 40) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)this, v8, v9);
  *(_BYTE *)(v5 + 49) = isCheckInterval;
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)v5;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *__fastcall BattleBuffData__AllBuffValidEnumerablePriorActive(
        BattleBuffData_o *this,
        bool isCheckInterval,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_48E495B & 1) == 0 )
  {
    sub_1B00CCC(&BattleBuffData__AllBuffValidEnumerablePriorActive_d__245_TypeInfo, isCheckInterval);
    byte_48E495B = 1;
  }
  v5 = sub_1B00F18(BattleBuffData__AllBuffValidEnumerablePriorActive_d__245_TypeInfo);
  BattleBuffData__AllBuffValidEnumerablePriorActive_d__245___ctor(
    (BattleBuffData__AllBuffValidEnumerablePriorActive_d__245_o *)v5,
    -2,
    0LL);
  if ( !v5 )
    sub_1B00F28(v6, v7);
  *(_QWORD *)(v5 + 40) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v5 + 40), (int32_t)this, v8, v9);
  *(_BYTE *)(v5 + 49) = isCheckInterval;
  return (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)v5;
}


void __fastcall BattleBuffData__ApplyBuffData(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        System_Collections_Generic_List_BattleBuffData_BuffData__o **dataList,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  _BOOL8 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_48E4945 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, buff);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v8);
    byte_48E4945 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  if ( !*dataList )
    sub_1B00F28(0LL, buff);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    (System_Collections_Generic_List_object__o *)*dataList,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v9 )
      break;
    if ( !v11.fields._current )
      sub_1B00F28(v9, v10);
    if ( !buff )
      sub_1B00F28(v9, v10);
    if ( LODWORD(v11.fields._current[4].klass) == buff->fields.auraEffectId
      && LODWORD(v11.fields._current[1].klass) == buff->fields.buffId )
    {
      *(void **)((char *)&v11.fields._current[8].monitor + 4) = *(void **)&buff->fields.addOrder;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__BoardTurnProgressing(
        BattleBuffData_o *this,
        const MethodInfo *method)
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
  System_Collections_Generic_List_object__o *v17; // x20
  __int64 v18; // x1
  void *passiveList; // x0
  _BOOL8 v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  System_Collections_Generic_List_object__o *v23; // x21
  System_Predicate_object__o *v24; // x22
  Il2CppObject *v25; // x23
  struct BattleBuffData___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_Collections_Generic_List_object__o *v29; // x21
  System_Predicate_object__o *v30; // x22
  _BOOL8 v31; // x0
  __int64 v32; // x1
  const MethodInfo *v33; // x2
  System_Collections_Generic_List_object__o *activeList; // x21
  System_Predicate_object__o *v35; // x22
  Il2CppObject *v36; // x23
  struct BattleBuffData___c_StaticFields *v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_Collections_Generic_IEnumerable_T__o *All; // x0
  System_Collections_Generic_List_object__o *v41; // x21
  System_Predicate_object__o *v42; // x22
  const MethodInfo *v43; // x3
  System_Collections_Generic_IEnumerable_T__o *v44; // x0
  const MethodInfo *v45; // x2
  System_Collections_Generic_List_Enumerator_object__o v47; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v48; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_48E48E2 & 1) == 0 )
  {
    sub_1B00CCC(&Method_BattleBuffData_checkBuffClear__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v11);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v12);
    sub_1B00CCC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v13);
    sub_1B00CCC(&Method_BattleBuffData___c__BoardTurnProgressing_b__69_0__, v14);
    sub_1B00CCC(&Method_BattleBuffData___c__BoardTurnProgressing_b__69_1__, v15);
    sub_1B00CCC(&BattleBuffData___c_TypeInfo, v16);
    byte_48E48E2 = 1;
  }
  memset(&v48, 0, sizeof(v48));
  v17 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  passiveList = this->fields.passiveList;
  if ( !passiveList )
    goto LABEL_35;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v47,
    (System_Collections_Generic_List_object__o *)passiveList,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v48 = v47;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v48,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v20 )
      break;
    if ( !v48.fields._current )
      sub_1B00F28(v20, v21);
    if ( LOBYTE(v48.fields._current[23].klass) )
      BattleBuffData__ProgressBuffTurn((BattleBuffData_o *)v20, (BattleBuffData_BuffData_o *)v48.fields._current, v22);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v48,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  v23 = (System_Collections_Generic_List_object__o *)this->fields.passiveList;
  passiveList = BattleBuffData___c_TypeInfo;
  if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    passiveList = BattleBuffData___c_TypeInfo;
  }
  v24 = *(System_Predicate_object__o **)(*((_QWORD *)passiveList + 23) + 48LL);
  if ( !v24 )
  {
    if ( !*((_DWORD *)passiveList + 56) )
    {
      j_il2cpp_runtime_class_init_0(passiveList);
      passiveList = BattleBuffData___c_TypeInfo;
    }
    v25 = (Il2CppObject *)**((_QWORD **)passiveList + 23);
    v24 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_object____ctor(v24, v25, Method_BattleBuffData___c__BoardTurnProgressing_b__69_0__, 0LL);
    static_fields = BattleBuffData___c_TypeInfo->static_fields;
    static_fields->__9__69_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)v24;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__69_0, (int32_t)v24, v27, v28);
  }
  if ( !v23 )
    goto LABEL_35;
  passiveList = System_Collections_Generic_List_object___FindAll(
                  v23,
                  (System_Predicate_T__o *)v24,
                  (const MethodInfo_33C20E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  if ( !v17 )
    goto LABEL_35;
  System_Collections_Generic_List_object___AddRange(
    v17,
    (System_Collections_Generic_IEnumerable_T__o *)passiveList,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v29 = (System_Collections_Generic_List_object__o *)this->fields.passiveList;
  v30 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_object____ctor(v30, (Il2CppObject *)this, Method_BattleBuffData_checkBuffClear__, 0LL);
  if ( !v29 )
    goto LABEL_35;
  System_Collections_Generic_List_object___RemoveAll(
    v29,
    (System_Predicate_T__o *)v30,
    (const MethodInfo_33C302C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  passiveList = this->fields.activeList;
  if ( !passiveList )
    goto LABEL_35;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v47,
    (System_Collections_Generic_List_object__o *)passiveList,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v48 = v47;
  while ( 1 )
  {
    v31 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v48,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v31 )
      break;
    if ( !v48.fields._current )
      sub_1B00F28(v31, v32);
    if ( LOBYTE(v48.fields._current[23].klass) )
      BattleBuffData__ProgressBuffTurn((BattleBuffData_o *)v31, (BattleBuffData_BuffData_o *)v48.fields._current, v33);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v48,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  activeList = (System_Collections_Generic_List_object__o *)this->fields.activeList;
  passiveList = BattleBuffData___c_TypeInfo;
  if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    passiveList = BattleBuffData___c_TypeInfo;
  }
  v35 = *(System_Predicate_object__o **)(*((_QWORD *)passiveList + 23) + 56LL);
  if ( !v35 )
  {
    if ( !*((_DWORD *)passiveList + 56) )
    {
      j_il2cpp_runtime_class_init_0(passiveList);
      passiveList = BattleBuffData___c_TypeInfo;
    }
    v36 = (Il2CppObject *)**((_QWORD **)passiveList + 23);
    v35 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_object____ctor(v35, v36, Method_BattleBuffData___c__BoardTurnProgressing_b__69_1__, 0LL);
    v37 = BattleBuffData___c_TypeInfo->static_fields;
    v37->__9__69_1 = (struct System_Predicate_BattleBuffData_BuffData__o *)v35;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v37->__9__69_1, (int32_t)v35, v38, v39);
  }
  if ( !activeList
    || (All = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_object___FindAll(
                                                               activeList,
                                                               (System_Predicate_T__o *)v35,
                                                               (const MethodInfo_33C20E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__),
        System_Collections_Generic_List_object___AddRange(
          v17,
          All,
          (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__),
        v41 = (System_Collections_Generic_List_object__o *)this->fields.activeList,
        v42 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo),
        System_Predicate_object____ctor(v42, (Il2CppObject *)this, Method_BattleBuffData_checkBuffClear__, 0LL),
        !v41) )
  {
LABEL_35:
    sub_1B00F28(passiveList, v18);
  }
  System_Collections_Generic_List_object___RemoveAll(
    v41,
    (System_Predicate_T__o *)v42,
    (const MethodInfo_33C302C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v44 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__removeLinkageBuff(
                                                         this,
                                                         (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v17,
                                                         0,
                                                         v43);
  System_Collections_Generic_List_object___AddRange(
    v17,
    v44,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  BattleBuffData__checkAndAddResumptionHpFromLossMaxHp(
    this,
    (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v17,
    v45);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_object___ToArray(
                                            v17,
                                            (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


bool __fastcall BattleBuffData__CancelExtendingLife(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v10; // x0
  BattleBuffData___c_c *v11; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x19
  System_Func_object__bool__o *_9__72_0; // x20
  Il2CppObject *v14; // x21
  struct BattleBuffData___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0
  System_Object_array *v19; // x0
  BattleBuffData___c_c *v20; // x8
  System_Collections_Generic_IEnumerable_T__o *v21; // x19
  System_Action_object__o *_9__72_1; // x20
  Il2CppObject *v23; // x21
  struct BattleBuffData___c_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3

  if ( (byte_48E48E5 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_BattleBuffData_BuffData__TypeInfo, method);
    sub_1B00CCC(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v3);
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, v4);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v5);
    sub_1B00CCC(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v6);
    sub_1B00CCC(&Method_BattleBuffData___c__CancelExtendingLife_b__72_0__, v7);
    sub_1B00CCC(&Method_BattleBuffData___c__CancelExtendingLife_b__72_1__, v8);
    sub_1B00CCC(&BattleBuffData___c_TypeInfo, v9);
    byte_48E48E5 = 1;
  }
  v10 = BattleBuffData__AllBuffEnumerable(this, method);
  v11 = BattleBuffData___c_TypeInfo;
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)v10;
  if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v11 = BattleBuffData___c_TypeInfo;
  }
  _9__72_0 = (System_Func_object__bool__o *)v11->static_fields->__9__72_0;
  if ( !_9__72_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = BattleBuffData___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__72_0 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__72_0, v14, Method_BattleBuffData___c__CancelExtendingLife_b__72_0__, 0LL);
    static_fields = BattleBuffData___c_TypeInfo->static_fields;
    static_fields->__9__72_0 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__72_0;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__72_0, (int32_t)_9__72_0, v16, v17);
  }
  v18 = System_Linq_Enumerable__Where_object_(
          v12,
          (System_Func_TSource__bool__o *)_9__72_0,
          (const MethodInfo_2D9D054 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v19 = System_Linq_Enumerable__ToArray_object_(
          v18,
          (const MethodInfo_2D976BC *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  v20 = BattleBuffData___c_TypeInfo;
  v21 = (System_Collections_Generic_IEnumerable_T__o *)v19;
  if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v20 = BattleBuffData___c_TypeInfo;
  }
  _9__72_1 = (System_Action_object__o *)v20->static_fields->__9__72_1;
  if ( !_9__72_1 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = BattleBuffData___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__72_1 = (System_Action_object__o *)sub_1B00F18(System_Action_BattleBuffData_BuffData__TypeInfo);
    System_Action_object____ctor(_9__72_1, v23, Method_BattleBuffData___c__CancelExtendingLife_b__72_1__, 0LL);
    v24 = BattleBuffData___c_TypeInfo->static_fields;
    v24->__9__72_1 = (struct System_Action_BattleBuffData_BuffData__o *)_9__72_1;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v24->__9__72_1, (int32_t)_9__72_1, v25, v26);
  }
  BasicHelper__ForEach_object_(
    v21,
    (System_Action_T__o *)_9__72_1,
    (const MethodInfo_2D50464 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
  return !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v21, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleBuffData__ChangeBuffState(
        BattleBuffData_o *this,
        int32_t now,
        int32_t max,
        System_Int32_array *servantIndv,
        System_Int32_array *buffIndv,
        System_Int32_array *fieldIndiv,
        System_Int32_array *canSubStateBuffIndv,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x20
  System_Collections_Generic_List_object__o *passiveList; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w2
  int32_t v28; // w3
  int32_t v29; // w2
  int32_t v30; // w3
  System_Action_object__o *v31; // x21

  if ( (byte_48E491A & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_BattleBuffData_BuffData__TypeInfo, *(_QWORD *)&now);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__, v15);
    sub_1B00CCC(&Method_BattleBuffData___c__DisplayClass148_0__ChangeBuffState_b__0__, v16);
    sub_1B00CCC(&BattleBuffData___c__DisplayClass148_0_TypeInfo, v17);
    byte_48E491A = 1;
  }
  v18 = sub_1B00F18(BattleBuffData___c__DisplayClass148_0_TypeInfo);
  BattleBuffData___c__DisplayClass148_0___ctor((BattleBuffData___c__DisplayClass148_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_7;
  *(_QWORD *)(v18 + 16) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v18 + 16), (int32_t)this, v21, v22);
  *(_DWORD *)(v18 + 24) = now;
  *(_DWORD *)(v18 + 28) = max;
  *(_QWORD *)(v18 + 32) = servantIndv;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v18 + 32), (int32_t)servantIndv, v23, v24);
  *(_QWORD *)(v18 + 40) = buffIndv;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v18 + 40), (int32_t)buffIndv, v25, v26);
  *(_QWORD *)(v18 + 48) = fieldIndiv;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v18 + 48), (int32_t)fieldIndiv, v27, v28);
  *(_QWORD *)(v18 + 56) = canSubStateBuffIndv;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v18 + 56), (int32_t)canSubStateBuffIndv, v29, v30);
  *(_BYTE *)(v18 + 64) = 0;
  v31 = (System_Action_object__o *)sub_1B00F18(System_Action_BattleBuffData_BuffData__TypeInfo);
  System_Action_object____ctor(
    v31,
    (Il2CppObject *)v18,
    Method_BattleBuffData___c__DisplayClass148_0__ChangeBuffState_b__0__,
    0LL);
  passiveList = (System_Collections_Generic_List_object__o *)this->fields.passiveList;
  if ( !passiveList
    || (System_Collections_Generic_List_object___ForEach(
          passiveList,
          (System_Action_T__o *)v31,
          (const MethodInfo_33C2410 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
        (passiveList = (System_Collections_Generic_List_object__o *)this->fields.activeList) == 0LL) )
  {
LABEL_7:
    sub_1B00F28(passiveList, v20);
  }
  System_Collections_Generic_List_object___ForEach(
    passiveList,
    (System_Action_T__o *)v31,
    (const MethodInfo_33C2410 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
  return *(_BYTE *)(v18 + 64);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__CheckAndGetFixedBuffArray(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_array *checkBuffArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x21
  _BOOL8 IsUnfix; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x2
  __int64 v12; // x8
  unsigned __int64 v13; // x23
  BattleBuffData_BuffData_o *v14; // x22
  int32_t v15; // w3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_48E494C & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, checkBuffArray);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v6);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v7);
    byte_48E494C = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !checkBuffArray )
    goto LABEL_17;
  v12 = *(_QWORD *)&checkBuffArray->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = 0LL;
    do
    {
      if ( v13 >= (unsigned int)v12 )
        sub_1B00F30(IsUnfix, v10);
      v14 = checkBuffArray->m_Items[v13];
      IsUnfix = BattleBuffData__IsUnfix(this, v14, v11);
      if ( !IsUnfix )
      {
        if ( !v8 )
          goto LABEL_17;
        items = v8->fields._items;
        v17 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
        ++v8->fields._version;
        if ( !items )
          goto LABEL_17;
        size = v8->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            (Il2CppObject *)v14,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v14;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)v14, (int32_t)v11, v15);
        }
      }
      LODWORD(v12) = checkBuffArray->max_length;
    }
    while ( (__int64)++v13 < (int)v12 );
  }
  if ( !v8 )
LABEL_17:
    sub_1B00F28(IsUnfix, v10);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_object___ToArray(
                                            v8,
                                            (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


void __fastcall BattleBuffData__CheckAndUpdateFieldIndividualityBuff(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *buffList,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  Il2CppObject *MasterData_object; // x20
  BuffEntity_o *v17; // x0
  int v18; // w23
  _BOOL8 v19; // x0
  __int64 v20; // x1
  Il2CppObject *Entity; // x0
  int32_t klass_high; // w21
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_48E48C4 & 1) == 0 )
  {
    sub_1B00CCC(&BuffEntity_TypeInfo, buffList);
    sub_1B00CCC(&BuffList_TypeInfo, v6);
    sub_1B00CCC(&Method_DataManager_GetMasterData_BuffMaster___, v7);
    sub_1B00CCC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v12);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_48E48C4 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_20;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_BuffMaster___);
  v17 = (BuffEntity_o *)sub_1B00F18(BuffEntity_TypeInfo);
  BuffEntity___ctor(v17, 0LL);
  if ( !buffList )
    goto LABEL_20;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    (System_Collections_Generic_List_object__o *)buffList,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v18 = 0;
  v24 = v23;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v19 )
      break;
    if ( !v24.fields._current )
      sub_1B00F28(v19, v20);
    if ( !BYTE1(v24.fields._current[24].klass) )
    {
      if ( !MasterData_object )
        sub_1B00F28(v19, v20);
      Entity = DataMasterBase_object__object__int___GetEntity(
                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                 (int32_t)v24.fields._current[1].klass,
                 (const MethodInfo_2FE6A4C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( Entity )
      {
        klass_high = HIDWORD(Entity[1].klass);
        if ( !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        v18 |= BuffList__CheckType(133, klass_high, 0LL);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( (v18 & 1) != 0 )
  {
    if ( logic )
    {
      BattleLogic__updateConditionsBuffAll(logic, 0LL);
      return;
    }
LABEL_20:
    sub_1B00F28(Instance, v15);
  }
}


bool __fastcall BattleBuffData__CheckBuffGroup(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *buffList,
        int32_t groupId,
        int32_t attachTarget,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x21
  __int64 v17; // x0
  __int64 v18; // x1
  System_Func_int__bool__o **v19; // x23
  _BOOL8 v20; // x0
  const MethodInfo *v21; // x1
  bool v22; // w22
  Il2CppObject *current; // x24
  BuffMaster_o *buffMst; // x0
  __int64 v25; // x1
  System_Int32_array *monitor; // x24
  System_Func_int__bool__o *v27; // x25
  int32_t v28; // w2
  int32_t v29; // w3
  int v30; // w19
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_48E48F7 & 1) == 0 )
  {
    sub_1B00CCC(&Method_BasicHelper_Any_int____74581360, buffList);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v11);
    sub_1B00CCC(&System_Func_int__bool__TypeInfo, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v13);
    sub_1B00CCC(&Method_BattleBuffData___c__DisplayClass94_0__CheckBuffGroup_b__0__, v14);
    sub_1B00CCC(&BattleBuffData___c__DisplayClass94_0_TypeInfo, v15);
    byte_48E48F7 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  v16 = sub_1B00F18(BattleBuffData___c__DisplayClass94_0_TypeInfo);
  BattleBuffData___c__DisplayClass94_0___ctor((BattleBuffData___c__DisplayClass94_0_o *)v16, 0LL);
  if ( !v16 || (*(_DWORD *)(v16 + 16) = attachTarget, !buffList) )
    sub_1B00F28(v17, v18);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v32,
    (System_Collections_Generic_List_object__o *)buffList,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v19 = (System_Func_int__bool__o **)(v16 + 24);
  v33 = v32;
  while ( 1 )
  {
    v20 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    v22 = v20;
    if ( !v20 )
      break;
    current = v33.fields._current;
    if ( !v33.fields._current )
      sub_1B00F28(v20, v21);
    if ( !BYTE1(v33.fields._current[24].klass) )
    {
      buffMst = BattleBuffData__get_buffMst(this, v21);
      if ( !buffMst )
        sub_1B00F28(0LL, v25);
      if ( BuffMaster__GetBuffGroup(buffMst, (int32_t)current[1].klass, -1, 0LL) == groupId )
      {
        monitor = (System_Int32_array *)current[13].monitor;
        if ( monitor )
        {
          v27 = *v19;
          if ( !*v19 )
          {
            v27 = (System_Func_int__bool__o *)sub_1B00F18(System_Func_int__bool__TypeInfo);
            System_Func_int__bool____ctor(
              v27,
              (Il2CppObject *)v16,
              Method_BattleBuffData___c__DisplayClass94_0__CheckBuffGroup_b__0__,
              0LL);
            *v19 = v27;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)(v16 + 24), (int32_t)v27, v28, v29);
          }
          if ( BasicHelper__Any_int__47506688(
                 monitor,
                 (System_Func_T__bool__o *)v27,
                 (const MethodInfo_2D4E500 *)Method_BasicHelper_Any_int____74581360) )
          {
            v30 = 5;
            goto LABEL_17;
          }
        }
      }
    }
  }
  v30 = 6;
LABEL_17:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  return v22 && v30 == 5;
}


bool __fastcall BattleBuffData__CheckBuffRateTypeOrIndiv(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buffData,
        int32_t *value,
        int32_t *maxBuffRate,
        int32_t upperParam,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 BuffList; // x0
  BuffList_TYPE_array *v14; // x1
  const MethodInfo *v15; // x3
  il2cpp_array_size_t v16; // w8
  const MethodInfo *v17; // x4
  const MethodInfo *v18; // x3
  int v19; // w8
  __int64 v20; // x23
  unsigned int v21; // w25
  bool v22; // w27
  __int64 v23; // x28
  __int64 v24; // x8
  BattleBuffData_BuffData_o **v25; // x28
  __int64 v26; // t1
  const MethodInfo *v27; // x3
  System_Int32_array *v28; // x24
  BattleBuffData_o *UpBuffRateBuffIndivList; // x0
  const MethodInfo *v30; // x5
  BattleBuffData_BuffData_o *v31; // x8
  int32_t v32; // w8
  Il2CppObject *entity; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_48E4924 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, buffData);
    sub_1B00CCC(&int___TypeInfo, v11);
    sub_1B00CCC(&BuffList_TYPE___TypeInfo, v12);
    byte_48E4924 = 1;
  }
  entity = 0LL;
  *value = 0;
  *maxBuffRate = upperParam;
  BuffList = sub_1B00D74(int___TypeInfo, 2LL);
  if ( !BuffList )
    goto LABEL_39;
  v16 = *(_DWORD *)(BuffList + 24);
  v14 = (BuffList_TYPE_array *)BuffList;
  if ( !v16 )
    goto LABEL_40;
  *(_DWORD *)(BuffList + 32) = 162;
  if ( v16 == 1 )
    goto LABEL_40;
  *(_DWORD *)(BuffList + 36) = 161;
  if ( !BattleBuffData__CheckBuffType(this, (System_Int32_array *)BuffList, buffData, v15) )
  {
    BuffList = sub_1B00D74(BuffList_TYPE___TypeInfo, 1LL);
    if ( BuffList )
    {
      v14 = (BuffList_TYPE_array *)BuffList;
      if ( !*(_DWORD *)(BuffList + 24) )
        goto LABEL_40;
      *(_DWORD *)(BuffList + 32) = 162;
      BuffList = (__int64)BattleBuffData__GetBuffList(this, (BuffList_TYPE_array *)BuffList, 0LL, 0, v17);
      if ( BuffList )
      {
        v19 = *(_DWORD *)(BuffList + 24);
        v20 = BuffList;
        if ( v19 >= 1 )
        {
          v21 = 0;
          v22 = 0;
          while ( v21 < v19 )
          {
            v23 = v20 + 8LL * (int)v21;
            v26 = *(_QWORD *)(v23 + 32);
            v25 = (BattleBuffData_BuffData_o **)(v23 + 32);
            v24 = v26;
            if ( !v26 )
              goto LABEL_39;
            v14 = *(BuffList_TYPE_array **)(v24 + 256);
            if ( v14 )
            {
              if ( *(_QWORD *)&v14->max_length )
              {
                BuffList = BattleBuffData__CheckBuffType(this, (System_Int32_array *)v14, buffData, v18);
                if ( (BuffList & 1) != 0 )
                {
                  if ( v21 >= *(_DWORD *)(v20 + 24) )
                    break;
                  BuffList = BattleBuffData__checkBuffSuccessful(this, *v25, 1, v27);
                  if ( (BuffList & 1) != 0 )
                    goto LABEL_30;
                }
              }
            }
            entity = 0LL;
            BuffList = (__int64)BattleBuffData__get_buffMst(this, (const MethodInfo *)v14);
            if ( v21 >= *(_DWORD *)(v20 + 24) )
              break;
            if ( !*v25 || !BuffList )
              goto LABEL_39;
            BuffList = DataMasterBase_object__object__int___TryGetEntity(
                         (DataMasterBase_TMaster__TEntity__PKType__o *)BuffList,
                         &entity,
                         (*v25)->fields.buffId,
                         (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
            if ( (BuffList & 1) != 0 )
            {
              BuffList = (__int64)entity;
              if ( !entity )
                goto LABEL_39;
              BuffList = (__int64)BuffEntity__GetUpBuffRateBuffIndivList((BuffEntity_o *)entity, 0LL);
              if ( BuffList )
              {
                if ( !buffData )
                  goto LABEL_39;
                BuffList = (__int64)BattleBuffData_BuffData__GetIndividualty(buffData, 0, 0, 0, 0LL);
                if ( !entity )
                  goto LABEL_39;
                v28 = (System_Int32_array *)BuffList;
                UpBuffRateBuffIndivList = (BattleBuffData_o *)BuffEntity__GetUpBuffRateBuffIndivList(
                                                                (BuffEntity_o *)entity,
                                                                0LL);
                BuffList = BattleBuffData__checkBuffTypeIndiviuality(
                             UpBuffRateBuffIndivList,
                             v28,
                             (System_Int32_array *)UpBuffRateBuffIndivList,
                             (BuffEntity_o *)entity,
                             0LL,
                             v30);
                if ( (BuffList & 1) != 0 )
                {
                  if ( v21 >= *(_DWORD *)(v20 + 24) )
                    break;
                  BuffList = BattleBuffData__checkBuffSuccessful(this, *v25, 1, v18);
                  if ( (BuffList & 1) != 0 )
                  {
LABEL_30:
                    if ( v21 >= *(_DWORD *)(v20 + 24) )
                      break;
                    v31 = *v25;
                    if ( !*v25 )
                      goto LABEL_39;
                    v22 = 1;
                    *value += v31->fields.param;
                    v32 = v31->fields.maxBuffRate;
                    if ( *maxBuffRate >= v32 )
                      v32 = *maxBuffRate;
                    *maxBuffRate = v32;
                  }
                }
              }
            }
            v19 = *(_DWORD *)(v20 + 24);
            if ( (int)++v21 >= v19 )
              return v22;
          }
LABEL_40:
          sub_1B00F30(BuffList, v14);
        }
        return 0;
      }
    }
LABEL_39:
    sub_1B00F28(BuffList, v14);
  }
  return 0;
}


bool __fastcall BattleBuffData__CheckBuffType(
        BattleBuffData_o *this,
        System_Int32_array *types,
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *buffMst; // x0
  const MethodInfo *v13; // x1
  System_Func_int__bool__o *v14; // x20

  if ( (byte_48E4936 & 1) == 0 )
  {
    sub_1B00CCC(&Method_BasicHelper_Any_int____74581360, types);
    sub_1B00CCC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v7);
    sub_1B00CCC(&System_Func_int__bool__TypeInfo, v8);
    sub_1B00CCC(&Method_BattleBuffData___c__DisplayClass192_0__CheckBuffType_b__0__, v9);
    sub_1B00CCC(&BattleBuffData___c__DisplayClass192_0_TypeInfo, v10);
    byte_48E4936 = 1;
  }
  v11 = sub_1B00F18(BattleBuffData___c__DisplayClass192_0_TypeInfo);
  BattleBuffData___c__DisplayClass192_0___ctor((BattleBuffData___c__DisplayClass192_0_o *)v11, 0LL);
  if ( !buffData )
    goto LABEL_10;
  if ( buffData->fields._isRemove )
    return 0;
  buffMst = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleBuffData__get_buffMst(this, v13);
  if ( !v11 || !buffMst )
LABEL_10:
    sub_1B00F28(buffMst, v13);
  if ( DataMasterBase_object__object__int___TryGetEntity(
         buffMst,
         (Il2CppObject **)(v11 + 16),
         buffData->fields.buffId,
         (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
  {
    v14 = (System_Func_int__bool__o *)sub_1B00F18(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      v14,
      (Il2CppObject *)v11,
      Method_BattleBuffData___c__DisplayClass192_0__CheckBuffType_b__0__,
      0LL);
    return BasicHelper__Any_int__47506688(
             types,
             (System_Func_T__bool__o *)v14,
             (const MethodInfo_2D4E500 *)Method_BasicHelper_Any_int____74581360);
  }
  return 0;
}


bool __fastcall BattleBuffData__CheckCommandCardBuffActive(
        BattleBuffData_o *this,
        BattleCommandData_o *commandData,
        BattleBuffData_BuffData_o *buff,
        bool isCheckBuffSuccess,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x3
  bool isEnableCommandCardBuff; // w8
  bool result; // w0

  if ( !buff )
    sub_1B00F28(this, commandData);
  if ( !buff->fields._isRemove && BattleBuffData_BuffData__isCommandCardBuff(buff, 0LL) )
  {
    buff->fields.isActiveCC = 0;
    isEnableCommandCardBuff = BattleBuffData_BuffData__isEnableCommandCardBuff(buff, commandData, 0LL);
    result = 0;
    if ( !isEnableCommandCardBuff )
      return result;
    if ( !isCheckBuffSuccess || BattleBuffData__checkBuffSuccessful(this, buff, 1, v9) )
    {
      result = 1;
      buff->fields.isActiveCC = 1;
      return result;
    }
  }
  return 0;
}


bool __fastcall BattleBuffData__CheckDisableForciblyAddStateBuffAvoid(
        BattleBuffData_o *this,
        System_Int32_array *selfIndiv,
        System_Int32_array *opponentIndiv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  Il2CppObject *Master_object; // x23
  BuffList_ActInfo_o *ActInfo; // x24
  const MethodInfo *v16; // x2
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v20; // x19
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v24; // x1
  __int64 v25; // x19
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  char v30; // w25
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  BattleBuffData_BuffData_o *v35; // x0
  __int64 v36; // x1
  BattleBuffData_BuffData_o *v37; // x26
  _BOOL8 IsCommandAssistBuff; // x0
  __int64 v39; // x1
  __int64 v40; // x1
  const MethodInfo *v41; // x3
  __int64 v42; // x8
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  const MethodInfo *v47; // [xsp+0h] [xbp-80h]
  Il2CppObject *entity; // [xsp+10h] [xbp-70h] BYREF
  int32_t plusMinus; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_48E4967 & 1) == 0 )
  {
    sub_1B00CCC(&BuffList_TypeInfo, selfIndiv);
    sub_1B00CCC(&Method_DataManager_GetMaster_BuffMaster___, v7);
    sub_1B00CCC(&DataManager_TypeInfo, v8);
    sub_1B00CCC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v9);
    sub_1B00CCC(&System_IDisposable_TypeInfo, v10);
    sub_1B00CCC(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v11);
    sub_1B00CCC(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v12);
    sub_1B00CCC(&System_Collections_IEnumerator_TypeInfo, v13);
    byte_48E4967 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  plusMinus = 0;
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(38, 0LL, 0LL);
  v17 = BattleBuffData__AllBuffValidEnumerable(this, 0, v16);
  if ( !v17 )
    sub_1B00F28(0LL, v18);
  klass = v17->klass;
  v20 = v17;
  v21 = *(unsigned __int16 *)(&v17->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v17->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      --v21;
      p_offset += 4;
      if ( !v21 )
        goto LABEL_12;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_12:
    p_method = sub_1B52CAC(v17, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v25 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))p_method)(
          v20,
          *(_QWORD *)(p_method + 8));
  if ( !v25 )
    sub_1B00F28(0LL, v24);
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
      v29 = sub_1B52CAC(v25, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v30 = (*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8));
    if ( (v30 & 1) == 0 )
      break;
    v31 = *(_QWORD *)v25;
    v32 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
    {
      v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v33 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_26;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_26:
      v34 = sub_1B52CAC(v25, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v35 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v25, *(_QWORD *)(v34 + 8));
    v37 = v35;
    if ( !v35 )
      sub_1B00F28(0LL, v36);
    if ( (!BattleBuffData_BuffData__isCommandCodeBuff(v35, 0LL) || BattleBuffData_BuffData__isActiveCommandCode(
                                                                     v37,
                                                                     0LL))
      && (!BattleBuffData_BuffData__isCommandCardBuff(v37, 0LL) || v37->fields.isActiveCC) )
    {
      IsCommandAssistBuff = BattleBuffData_BuffData__IsCommandAssistBuff(v37, 0LL);
      if ( !IsCommandAssistBuff || (IsCommandAssistBuff = BattleBuffData_BuffData__IsActiveCommandAssist(v37, 0LL)) )
      {
        if ( !Master_object )
          sub_1B00F28(IsCommandAssistBuff, v39);
        if ( DataMasterBase_object__object__int___TryGetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
               &entity,
               v37->fields.buffId,
               (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__) )
        {
          if ( !entity )
            sub_1B00F28(0LL, v40);
          if ( BuffEntity__IsDisableForciblyAddState((BuffEntity_o *)entity, 0LL)
            && BattleBuffData__checkIndiviuality_41045640(
                 this,
                 ActInfo,
                 v37,
                 selfIndiv,
                 opponentIndiv,
                 0LL,
                 0LL,
                 &plusMinus,
                 v47)
            && BattleBuffData__checkBuffSuccessful(this, v37, 0, v41) )
          {
            goto LABEL_43;
          }
        }
      }
    }
  }
  v30 = 0;
LABEL_43:
  v42 = *(_QWORD *)v25;
  v43 = *(unsigned __int16 *)(*(_QWORD *)v25 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v25 + 302LL) )
  {
    v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
    {
      --v43;
      v44 += 4;
      if ( !v43 )
        goto LABEL_47;
    }
    v45 = v42 + 16LL * *v44 + 312;
  }
  else
  {
LABEL_47:
    v45 = sub_1B52CAC(v25, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v45)(v25, *(_QWORD *)(v45 + 8));
  return v30 & 1;
}


void __fastcall BattleBuffData__CheckDummyBuffData(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_ShowBuffData__o *reList,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t size; // w22
  int32_t v7; // w20
  int32_t v8; // w8
  int32_t v9; // w25
  int32_t v10; // w21
  int32_t v11; // w8
  int activeList_high; // w26
  bool v13; // nf

  if ( (byte_48E48D5 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__RemoveAt__, reList);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__get_Count__, v4);
    this = (BattleBuffData_o *)sub_1B00CCC(
                                 &Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__get_Item__,
                                 v5);
    byte_48E48D5 = 1;
  }
  if ( !reList )
LABEL_24:
    sub_1B00F28(this, reList);
  size = reList->fields._size;
  v7 = size - 1;
  if ( size - 1 >= 0 )
  {
    v8 = reList->fields._size;
    while ( 1 )
    {
      if ( v7 < v8 )
      {
        this = (BattleBuffData_o *)System_Collections_Generic_List_object___get_Item(
                                     (System_Collections_Generic_List_object__o *)reList,
                                     v7,
                                     (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__get_Item__);
        if ( !this )
          goto LABEL_24;
        if ( !LOBYTE(this->fields.conditionalAuraBuff) )
        {
          v9 = reList->fields._size;
          if ( v9 - 1 >= 0 )
          {
            do
            {
              v10 = v9 - 1;
              if ( size != v9 )
              {
                v11 = reList->fields._size;
                if ( v7 < v11 && v10 < v11 )
                {
                  this = (BattleBuffData_o *)System_Collections_Generic_List_object___get_Item(
                                               (System_Collections_Generic_List_object__o *)reList,
                                               v10,
                                               (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__get_Item__);
                  if ( !this )
                    goto LABEL_24;
                  if ( LOBYTE(this->fields.conditionalAuraBuff) )
                  {
                    this = (BattleBuffData_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)reList,
                                                 v7,
                                                 (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__get_Item__);
                    if ( !this )
                      goto LABEL_24;
                    activeList_high = HIDWORD(this->fields.activeList);
                    this = (BattleBuffData_o *)System_Collections_Generic_List_object___get_Item(
                                                 (System_Collections_Generic_List_object__o *)reList,
                                                 v10,
                                                 (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__get_Item__);
                    if ( !this )
                      goto LABEL_24;
                    if ( activeList_high == HIDWORD(this->fields.activeList) )
                      System_Collections_Generic_List_object___RemoveAt(
                        (System_Collections_Generic_List_object__o *)reList,
                        v10,
                        (const MethodInfo_33C31A4 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__RemoveAt__);
                  }
                }
              }
              v13 = v9 - 2 < 0;
              --v9;
            }
            while ( !v13 );
          }
        }
      }
      if ( --v7 < 0 )
        break;
      v8 = reList->fields._size;
      --size;
    }
  }
}


BattleServantData_array *__fastcall BattleBuffData__CheckIndivSvtDataList(
        System_Collections_Generic_List_BattleServantData__o *svtDataList,
        System_Int32_array *tvals,
        bool isIncludeIgnoreIndiv,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_object__o *v14; // x19
  __int64 v15; // x0
  __int64 v16; // x1
  bool v17; // w21
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppObject *current; // x22
  System_Int32_array *ConcatServantAndBuffIndividualityies; // x0
  _BOOL8 v22; // x0
  __int64 v23; // x1
  int32_t v24; // w2
  int32_t v25; // w3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_48E48FA & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__, tvals);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleServantData__get_Current__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleServantData__Add__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleServantData__ToArray__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleServantData___ctor__, v12);
    sub_1B00CCC(&System_Collections_Generic_List_BattleServantData__TypeInfo, v13);
    byte_48E48FA = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v14 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleServantData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleServantData___ctor__);
  if ( !svtDataList )
    goto LABEL_18;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    (System_Collections_Generic_List_object__o *)svtDataList,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_BattleServantData__GetEnumerator__);
  v17 = isIncludeIgnoreIndiv;
  v32 = v31;
  while ( 1 )
  {
    v18 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__MoveNext__);
    if ( !v18 )
      break;
    current = v32.fields._current;
    if ( !v32.fields._current )
      sub_1B00F28(v18, v19);
    ConcatServantAndBuffIndividualityies = BattleServantData__getConcatServantAndBuffIndividualityies(
                                             (BattleServantData_o *)v32.fields._current,
                                             0LL,
                                             v17,
                                             0,
                                             0,
                                             0LL);
    v22 = Individuality__CheckSignedIndividualities(ConcatServantAndBuffIndividualityies, tvals, 0LL);
    if ( v22 )
    {
      if ( !v14 )
        sub_1B00F28(v22, v23);
      items = v14->fields._items;
      v27 = Method_System_Collections_Generic_List_BattleServantData__Add__;
      ++v14->fields._version;
      if ( !items )
        sub_1B00F28(v22, v23);
      size = v14->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v14,
          current,
          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = &items->obj.klass + size;
        v14->fields._size = size + 1;
        v29[4] = (Il2CppClass *)current;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)current, v24, v25);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_BattleServantData__Dispose__);
  if ( !v14 )
LABEL_18:
    sub_1B00F28(v15, v16);
  return (BattleServantData_array *)System_Collections_Generic_List_object___ToArray(
                                      v14,
                                      (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleServantData__ToArray__);
}


bool __fastcall BattleBuffData__CheckInvalidSacrificeIndiv(
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 InvalidSacrificeIndividualities; // x0
  __int64 v9; // x1
  System_Int32_array *v10; // x20
  bool v11; // w21
  System_Int32_array *Individualty; // x0
  Il2CppObject *Master_object; // x0
  struct BattleBuffData_StaticFields *static_fields; // x8
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t klass_high; // w21
  int32_t v18; // w21
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  v2 = buffData;
  if ( (byte_48E4965 & 1) == 0 )
  {
    sub_1B00CCC(&BattleBuffData_TypeInfo, method);
    sub_1B00CCC(&BuffList_TypeInfo, v3);
    sub_1B00CCC(&Method_DataManager_GetMaster_BuffMaster___, v4);
    sub_1B00CCC(&DataManager_TypeInfo, v5);
    sub_1B00CCC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v6);
    buffData = (BattleBuffData_BuffData_o *)sub_1B00CCC(&int___TypeInfo, v7);
    byte_48E4965 = 1;
  }
  entity = 0LL;
  InvalidSacrificeIndividualities = (__int64)BattleBuffData__GetInvalidSacrificeIndividualities((const MethodInfo *)buffData);
  if ( !v2 )
    goto LABEL_24;
  v10 = (System_Int32_array *)InvalidSacrificeIndividualities;
  v11 = 1;
  Individualty = BattleBuffData_BuffData__GetIndividualty(v2, 1, 0, 0, 0LL);
  if ( !Individuality__CheckIndividualities(Individualty, v10, 0LL) )
  {
    InvalidSacrificeIndividualities = (__int64)BattleBuffData_TypeInfo->static_fields->s_buffMst;
    if ( InvalidSacrificeIndividualities )
      goto LABEL_10;
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_BuffMaster___);
    static_fields = BattleBuffData_TypeInfo->static_fields;
    static_fields->s_buffMst = (struct BuffMaster_o *)Master_object;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->s_buffMst, (int32_t)Master_object, v15, v16);
    InvalidSacrificeIndividualities = (__int64)BattleBuffData_TypeInfo->static_fields->s_buffMst;
    if ( InvalidSacrificeIndividualities )
    {
LABEL_10:
      InvalidSacrificeIndividualities = DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)InvalidSacrificeIndividualities,
                                          &entity,
                                          v2->fields.buffId,
                                          (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
      if ( (InvalidSacrificeIndividualities & 1) == 0 )
        return 0;
      if ( entity )
      {
        klass_high = HIDWORD(entity[1].klass);
        if ( !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        InvalidSacrificeIndividualities = BuffList__CheckType(40, klass_high, 0LL);
        if ( (InvalidSacrificeIndividualities & 1) == 0 )
        {
          if ( !entity )
            goto LABEL_24;
          v18 = HIDWORD(entity[1].klass);
          if ( !BuffList_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
          if ( !BuffList__CheckType(41, v18, 0LL) )
            return 0;
        }
        InvalidSacrificeIndividualities = sub_1B00D74(int___TypeInfo, 1LL);
        if ( InvalidSacrificeIndividualities )
        {
          if ( !*(_DWORD *)(InvalidSacrificeIndividualities + 24) )
            sub_1B00F30(InvalidSacrificeIndividualities, v9);
          *(_DWORD *)(InvalidSacrificeIndividualities + 32) = v2->fields.param;
          return Individuality__CheckIndividualities((System_Int32_array *)InvalidSacrificeIndividualities, v10, 0LL);
        }
      }
    }
LABEL_24:
    sub_1B00F28(InvalidSacrificeIndividualities, v9);
  }
  return v11;
}


bool __fastcall BattleBuffData__CheckInvalidSacrificeIndivArray(
        System_Collections_Generic_List_BattleBuffData_BuffData__o *buffDataList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  const MethodInfo *v6; // x1
  bool v7; // w19
  int v8; // w20
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+8h] [xbp-38h] BYREF

  v2 = (System_Collections_Generic_List_object__o *)buffDataList;
  if ( (byte_48E4966 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v4);
    buffDataList = (System_Collections_Generic_List_BattleBuffData_BuffData__o *)sub_1B00CCC(
                                                                                   &Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__,
                                                                                   v5);
    byte_48E4966 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  if ( !v2 )
    sub_1B00F28(buffDataList, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v10,
    v2,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( 1 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v10,
           (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v7 )
      break;
    if ( BattleBuffData__CheckInvalidSacrificeIndiv((BattleBuffData_BuffData_o *)v10.fields._current, v6) )
    {
      v8 = 4;
      goto LABEL_9;
    }
  }
  v8 = 5;
LABEL_9:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  return v7 && v8 == 4;
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__CommonTurnProgressing(
        BattleBuffData_o *this,
        BattleLogic_o *logic,
        bool isEndEnemyTurn,
        int32_t defCondState,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_object__o *v23; // x21
  __int64 v24; // x1
  void *passiveList; // x0
  _BOOL8 v26; // x0
  __int64 v27; // x1
  struct BattleData_o *data; // x8
  struct BaseBattleEvent_o *battleEvent; // x0
  System_Collections_Generic_List_object__o *v30; // x24
  System_Predicate_object__o *v31; // x25
  Il2CppObject *v32; // x26
  struct BattleBuffData___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_Collections_Generic_List_object__o *v36; // x24
  System_Predicate_object__o *v37; // x25
  _BOOL8 v38; // x0
  __int64 v39; // x1
  struct BattleData_o *v40; // x8
  struct BaseBattleEvent_o *v41; // x0
  System_Collections_Generic_List_object__o *activeList; // x22
  System_Predicate_object__o *v43; // x23
  Il2CppObject *v44; // x24
  struct BattleBuffData___c_StaticFields *v45; // x0
  int32_t v46; // w2
  int32_t v47; // w3
  System_Collections_Generic_IEnumerable_T__o *All; // x0
  System_Collections_Generic_List_object__o *v49; // x22
  System_Predicate_object__o *v50; // x23
  const MethodInfo *v51; // x3
  System_Collections_Generic_IEnumerable_T__o *v52; // x0
  const MethodInfo *v53; // x2
  BattleBuffData_o *v54; // x0
  const MethodInfo *v55; // x3
  const MethodInfo *v56; // x1
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_48E48E1 & 1) == 0 )
  {
    sub_1B00CCC(&Method_BattleBuffData_checkBuffClear__, logic);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, v13);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v14);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__, v15);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v16);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v17);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v18);
    sub_1B00CCC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v19);
    sub_1B00CCC(&Method_BattleBuffData___c__CommonTurnProgressing_b__68_0__, v20);
    sub_1B00CCC(&Method_BattleBuffData___c__CommonTurnProgressing_b__68_1__, v21);
    sub_1B00CCC(&BattleBuffData___c_TypeInfo, v22);
    byte_48E48E1 = 1;
  }
  memset(&i, 0, sizeof(i));
  v23 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v23,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  passiveList = this->fields.passiveList;
  if ( !passiveList )
    goto LABEL_44;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v58,
    (System_Collections_Generic_List_object__o *)passiveList,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  for ( i = v58;
        ;
        ((void (__fastcall *)(struct BaseBattleEvent_o *, BattleBuffData_o *, Il2CppObject *, bool, _QWORD, Il2CppMethodPointer))battleEvent->klass->vtable._32_ProgressBuffTurn.method)(
          battleEvent,
          this,
          i.fields._current,
          isEndEnemyTurn,
          (unsigned int)defCondState,
          battleEvent->klass->vtable._33_MakeTurnCondStateByServant.methodPtr) )
  {
    v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v26 )
      break;
    if ( !logic )
      sub_1B00F28(v26, v27);
    data = logic->fields.data;
    if ( !data )
      sub_1B00F28(v26, v27);
    battleEvent = data->fields.battleEvent;
    if ( !battleEvent )
      sub_1B00F28(0LL, v27);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  passiveList = BattleBuffData___c_TypeInfo;
  v30 = (System_Collections_Generic_List_object__o *)this->fields.passiveList;
  if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    passiveList = BattleBuffData___c_TypeInfo;
  }
  v31 = *(System_Predicate_object__o **)(*((_QWORD *)passiveList + 23) + 32LL);
  if ( !v31 )
  {
    if ( !*((_DWORD *)passiveList + 56) )
    {
      j_il2cpp_runtime_class_init_0(passiveList);
      passiveList = BattleBuffData___c_TypeInfo;
    }
    v32 = (Il2CppObject *)**((_QWORD **)passiveList + 23);
    v31 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_object____ctor(v31, v32, Method_BattleBuffData___c__CommonTurnProgressing_b__68_0__, 0LL);
    static_fields = BattleBuffData___c_TypeInfo->static_fields;
    static_fields->__9__68_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)v31;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__68_0, (int32_t)v31, v34, v35);
  }
  if ( !v30 )
    goto LABEL_44;
  passiveList = System_Collections_Generic_List_object___FindAll(
                  v30,
                  (System_Predicate_T__o *)v31,
                  (const MethodInfo_33C20E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  if ( !v23 )
    goto LABEL_44;
  System_Collections_Generic_List_object___AddRange(
    v23,
    (System_Collections_Generic_IEnumerable_T__o *)passiveList,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v36 = (System_Collections_Generic_List_object__o *)this->fields.passiveList;
  v37 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_object____ctor(v37, (Il2CppObject *)this, Method_BattleBuffData_checkBuffClear__, 0LL);
  if ( !v36 )
    goto LABEL_44;
  System_Collections_Generic_List_object___RemoveAll(
    v36,
    (System_Predicate_T__o *)v37,
    (const MethodInfo_33C302C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  passiveList = this->fields.activeList;
  if ( !passiveList )
    goto LABEL_44;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v58,
    (System_Collections_Generic_List_object__o *)passiveList,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  for ( i = v58;
        ;
        ((void (__fastcall *)(struct BaseBattleEvent_o *, BattleBuffData_o *, Il2CppObject *, bool, _QWORD, Il2CppMethodPointer))v41->klass->vtable._32_ProgressBuffTurn.method)(
          v41,
          this,
          i.fields._current,
          isEndEnemyTurn,
          (unsigned int)defCondState,
          v41->klass->vtable._33_MakeTurnCondStateByServant.methodPtr) )
  {
    v38 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &i,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v38 )
      break;
    if ( !logic )
      sub_1B00F28(v38, v39);
    v40 = logic->fields.data;
    if ( !v40 )
      sub_1B00F28(v38, v39);
    v41 = v40->fields.battleEvent;
    if ( !v41 )
      sub_1B00F28(0LL, v39);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  passiveList = BattleBuffData___c_TypeInfo;
  activeList = (System_Collections_Generic_List_object__o *)this->fields.activeList;
  if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    passiveList = BattleBuffData___c_TypeInfo;
  }
  v43 = *(System_Predicate_object__o **)(*((_QWORD *)passiveList + 23) + 40LL);
  if ( !v43 )
  {
    if ( !*((_DWORD *)passiveList + 56) )
    {
      j_il2cpp_runtime_class_init_0(passiveList);
      passiveList = BattleBuffData___c_TypeInfo;
    }
    v44 = (Il2CppObject *)**((_QWORD **)passiveList + 23);
    v43 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_object____ctor(v43, v44, Method_BattleBuffData___c__CommonTurnProgressing_b__68_1__, 0LL);
    v45 = BattleBuffData___c_TypeInfo->static_fields;
    v45->__9__68_1 = (struct System_Predicate_BattleBuffData_BuffData__o *)v43;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v45->__9__68_1, (int32_t)v43, v46, v47);
  }
  if ( !activeList )
    goto LABEL_44;
  All = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_object___FindAll(
                                                         activeList,
                                                         (System_Predicate_T__o *)v43,
                                                         (const MethodInfo_33C20E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  System_Collections_Generic_List_object___AddRange(
    v23,
    All,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v49 = (System_Collections_Generic_List_object__o *)this->fields.activeList;
  v50 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_object____ctor(v50, (Il2CppObject *)this, Method_BattleBuffData_checkBuffClear__, 0LL);
  if ( !v49 )
    goto LABEL_44;
  System_Collections_Generic_List_object___RemoveAll(
    v49,
    (System_Predicate_T__o *)v50,
    (const MethodInfo_33C302C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v52 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__removeLinkageBuff(
                                                         this,
                                                         (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v23,
                                                         0,
                                                         v51);
  System_Collections_Generic_List_object___AddRange(
    v23,
    v52,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  BattleBuffData__checkAndAddResumptionHpFromLossMaxHp(
    this,
    (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v23,
    v53);
  BattleBuffData__CheckAndUpdateFieldIndividualityBuff(
    v54,
    (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v23,
    logic,
    v55);
  passiveList = (void *)BattleBuffData__CheckInvalidSacrificeIndivArray(
                          (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v23,
                          v56);
  if ( ((unsigned __int8)passiveList & 1) != 0 )
  {
    if ( logic )
    {
      BattleLogic__updateFieldBuff(logic, 0LL);
      return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_object___ToArray(
                                                v23,
                                                (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    }
LABEL_44:
    sub_1B00F28(passiveList, v24);
  }
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_object___ToArray(
                                            v23,
                                            (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


bool __fastcall BattleBuffData__ConfirmationBuff(
        BattleBuffData_o *this,
        BuffList_ActInfo_o *actInfo,
        System_Int32_array *selfIndv,
        System_Int32_array *opIndv,
        bool isRect,
        BattleBuffData_BuffData_o **targetBuff,
        System_Int32_array *selfIndvAll,
        System_Int32_array *opIndvAll,
        const MethodInfo *method)
{
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v21; // x0
  __int64 v22; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v24; // x19
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v28; // x1
  __int64 v29; // x19
  bool v30; // w27
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  BattleBuffData_BuffData_o *v39; // x0
  __int64 v40; // x1
  BattleBuffData_BuffData_o *v41; // x28
  const MethodInfo *v42; // x3
  int32_t v43; // w2
  int32_t v44; // w3
  bool v45; // w21
  __int64 v46; // x8
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  const MethodInfo *v51; // [xsp+0h] [xbp-80h]
  int32_t plusMinus; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_48E4929 & 1) == 0 )
  {
    sub_1B00CCC(&System_IDisposable_TypeInfo, actInfo);
    sub_1B00CCC(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v17);
    sub_1B00CCC(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v18);
    sub_1B00CCC(&System_Collections_IEnumerator_TypeInfo, v19);
    byte_48E4929 = 1;
  }
  *targetBuff = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)targetBuff, 0, (int32_t)selfIndv, (int32_t)opIndv);
  plusMinus = 0;
  v21 = BattleBuffData__AllBuffValidEnumerablePriorActive(this, 0, v20);
  if ( !v21 )
    sub_1B00F28(0LL, v22);
  klass = v21->klass;
  v24 = v21;
  v25 = *(unsigned __int16 *)(&v21->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v21->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      --v25;
      p_offset += 4;
      if ( !v25 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1B52CAC(v21, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v29 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))p_method)(
          v24,
          *(_QWORD *)(p_method + 8));
  if ( !v29 )
    sub_1B00F28(0LL, v28);
  v30 = isRect;
  while ( 1 )
  {
    v31 = *(_QWORD *)v29;
    v32 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
    {
      v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v33 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_16;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_16:
      v34 = sub_1B52CAC(v29, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v29, *(_QWORD *)(v34 + 8)) & 1) == 0 )
      break;
    v35 = *(_QWORD *)v29;
    v36 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
    {
      v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v37 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_23;
      }
      v38 = v35 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_23:
      v38 = sub_1B52CAC(v29, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v39 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v29, *(_QWORD *)(v38 + 8));
    v41 = v39;
    if ( !v39 )
      sub_1B00F28(0LL, v40);
    if ( (!BattleBuffData_BuffData__isCommandCodeBuff(v39, 0LL) || BattleBuffData_BuffData__isActiveCommandCode(
                                                                     v41,
                                                                     0LL))
      && (!BattleBuffData_BuffData__isCommandCardBuff(v41, 0LL) || v41->fields.isActiveCC)
      && (!BattleBuffData_BuffData__IsCommandAssistBuff(v41, 0LL)
       || BattleBuffData_BuffData__IsActiveCommandAssist(v41, 0LL))
      && BattleBuffData__checkIndiviuality_41045640(
           this,
           actInfo,
           v41,
           selfIndv,
           opIndv,
           selfIndvAll,
           opIndvAll,
           &plusMinus,
           v51)
      && BattleBuffData__checkBuffSuccessful(this, v41, v30, v42) )
    {
      *targetBuff = v41;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)targetBuff, (int32_t)v41, v43, v44);
      v45 = 1;
      goto LABEL_36;
    }
  }
  v45 = 0;
LABEL_36:
  v46 = *(_QWORD *)v29;
  v47 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
  {
    v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
    {
      --v47;
      v48 += 4;
      if ( !v47 )
        goto LABEL_40;
    }
    v49 = v46 + 16LL * *v48 + 312;
  }
  else
  {
LABEL_40:
    v49 = sub_1B52CAC(v29, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v49)(v29, *(_QWORD *)(v49 + 8));
  return v45;
}


BattleBuffData_BuffData_o *__fastcall BattleBuffData__CreateDummyBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  __int64 v4; // x20
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  struct BattleBuffData_IntervalData_o *intervalData; // x1

  if ( (byte_48E4905 & 1) == 0 )
  {
    sub_1B00CCC(&BattleBuffData_BuffData_TypeInfo, buff);
    byte_48E4905 = 1;
  }
  v4 = sub_1B00F18(BattleBuffData_BuffData_TypeInfo);
  BattleBuffData_BuffData___ctor((BattleBuffData_BuffData_o *)v4, 0LL);
  if ( !buff || !v4 )
    sub_1B00F28(v5, v6);
  *(_BYTE *)(v4 + 385) = 1;
  *(_DWORD *)(v4 + 400) = buff->fields.buffId;
  *(_BYTE *)(v4 + 33) = buff->fields.passive;
  *(_QWORD *)(v4 + 140) = *(_QWORD *)&buff->fields.addOrder;
  intervalData = buff->fields.intervalData;
  *(_QWORD *)(v4 + 360) = intervalData;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v4 + 360), (int32_t)intervalData, v7, v8);
  return (BattleBuffData_BuffData_o *)v4;
}


BattleBuffData_ShowBuffData_array *__fastcall BattleBuffData__DebugGetShowServantParamAll(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x21
  System_Collections_Generic_List_object__o *v10; // x22
  System_Collections_Generic_List_object__o *passiveList; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_List_object__o **v15; // x20
  System_Action_object__o *v16; // x22

  if ( (byte_48E48D9 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_BattleBuffData_BuffData__TypeInfo, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__, v5);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo, v6);
    sub_1B00CCC(&Method_BattleBuffData___c__DisplayClass46_0__DebugGetShowServantParamAll_b__0__, v7);
    sub_1B00CCC(&BattleBuffData___c__DisplayClass46_0_TypeInfo, v8);
    byte_48E48D9 = 1;
  }
  v9 = sub_1B00F18(BattleBuffData___c__DisplayClass46_0_TypeInfo);
  BattleBuffData___c__DisplayClass46_0___ctor((BattleBuffData___c__DisplayClass46_0_o *)v9, 0LL);
  v10 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__);
  if ( !v9 )
    goto LABEL_8;
  *(_QWORD *)(v9 + 16) = v10;
  v15 = (System_Collections_Generic_List_object__o **)(v9 + 16);
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)v10, v13, v14);
  v16 = (System_Action_object__o *)sub_1B00F18(System_Action_BattleBuffData_BuffData__TypeInfo);
  System_Action_object____ctor(
    v16,
    (Il2CppObject *)v9,
    Method_BattleBuffData___c__DisplayClass46_0__DebugGetShowServantParamAll_b__0__,
    0LL);
  passiveList = (System_Collections_Generic_List_object__o *)this->fields.passiveList;
  if ( !passiveList
    || (System_Collections_Generic_List_object___ForEach(
          passiveList,
          (System_Action_T__o *)v16,
          (const MethodInfo_33C2410 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
        (passiveList = (System_Collections_Generic_List_object__o *)this->fields.activeList) == 0LL)
    || (System_Collections_Generic_List_object___ForEach(
          passiveList,
          (System_Action_T__o *)v16,
          (const MethodInfo_33C2410 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
        (passiveList = *v15) == 0LL) )
  {
LABEL_8:
    sub_1B00F28(passiveList, v12);
  }
  return (BattleBuffData_ShowBuffData_array *)System_Collections_Generic_List_object___ToArray(
                                                passiveList,
                                                (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__);
}


void __fastcall BattleBuffData__DelForceBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_array *buffArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Action_object__o *v7; // x21

  if ( (byte_48E48F5 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_BattleBuffData_BuffData__TypeInfo, buffArray);
    sub_1B00CCC(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v5);
    sub_1B00CCC(&Method_BattleBuffData__DelForceBuff_b__91_0__, v6);
    byte_48E48F5 = 1;
  }
  v7 = (System_Action_object__o *)sub_1B00F18(System_Action_BattleBuffData_BuffData__TypeInfo);
  System_Action_object____ctor(v7, (Il2CppObject *)this, Method_BattleBuffData__DelForceBuff_b__91_0__, 0LL);
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)buffArray,
    (System_Action_T__o *)v7,
    (const MethodInfo_2D50464 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
}


void __fastcall BattleBuffData__DeleteDummyBuff(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *activeList; // x0
  int32_t v6; // w20
  int32_t v7; // w20

  if ( (byte_48E494F & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__, v4);
    byte_48E494F = 1;
  }
  activeList = (System_Collections_Generic_List_object__o *)this->fields.activeList;
  if ( !activeList )
    goto LABEL_20;
  v6 = activeList->fields._size - 1;
  if ( v6 >= 0 )
  {
    do
    {
      activeList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  activeList,
                                                                  v6,
                                                                  (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
      if ( !activeList )
        break;
      if ( BYTE1(activeList[9].fields._size) )
      {
        activeList = (System_Collections_Generic_List_object__o *)this->fields.activeList;
        if ( !activeList )
          break;
        System_Collections_Generic_List_object___RemoveAt(
          activeList,
          v6,
          (const MethodInfo_33C31A4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__);
      }
      if ( --v6 < 0 )
        goto LABEL_12;
      activeList = (System_Collections_Generic_List_object__o *)this->fields.activeList;
    }
    while ( activeList );
LABEL_20:
    sub_1B00F28(activeList, method);
  }
LABEL_12:
  activeList = (System_Collections_Generic_List_object__o *)this->fields.passiveList;
  if ( !activeList )
    goto LABEL_20;
  v7 = activeList->fields._size - 1;
  if ( v7 >= 0 )
  {
    while ( 1 )
    {
      activeList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  activeList,
                                                                  v7,
                                                                  (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
      if ( !activeList )
        goto LABEL_20;
      if ( BYTE1(activeList[9].fields._size) )
      {
        activeList = (System_Collections_Generic_List_object__o *)this->fields.passiveList;
        if ( !activeList )
          goto LABEL_20;
        System_Collections_Generic_List_object___RemoveAt(
          activeList,
          v7,
          (const MethodInfo_33C31A4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__);
      }
      if ( --v7 < 0 )
        return;
      activeList = (System_Collections_Generic_List_object__o *)this->fields.passiveList;
      if ( !activeList )
        goto LABEL_20;
    }
  }
}


void __fastcall BattleBuffData__DirectUpdateWaitIntervalBuff(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *updateWaitIntervalBuffList; // x20
  BattleBuffData___c_c *v9; // x0
  System_Action_object__o *_9__28_0; // x21
  Il2CppObject *v11; // x22
  struct BattleBuffData___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v15; // x8
  int32_t size; // w2
  int v17; // w9

  if ( (byte_48E48C8 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_BattleBuffData_BuffData__TypeInfo, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__, v4);
    sub_1B00CCC(&Method_BattleBuffData___c__DirectUpdateWaitIntervalBuff_b__28_0__, v5);
    sub_1B00CCC(&BattleBuffData___c_TypeInfo, v6);
    byte_48E48C8 = 1;
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.updateWaitIntervalBuffList, 0LL) )
  {
    updateWaitIntervalBuffList = (System_Collections_Generic_List_object__o *)this->fields.updateWaitIntervalBuffList;
    v9 = BattleBuffData___c_TypeInfo;
    if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      v9 = BattleBuffData___c_TypeInfo;
    }
    _9__28_0 = (System_Action_object__o *)v9->static_fields->__9__28_0;
    if ( !_9__28_0 )
    {
      if ( !v9->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v9);
        v9 = BattleBuffData___c_TypeInfo;
      }
      v11 = (Il2CppObject *)v9->static_fields->__9;
      _9__28_0 = (System_Action_object__o *)sub_1B00F18(System_Action_BattleBuffData_BuffData__TypeInfo);
      System_Action_object____ctor(
        _9__28_0,
        v11,
        Method_BattleBuffData___c__DirectUpdateWaitIntervalBuff_b__28_0__,
        0LL);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
      static_fields->__9__28_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__28_0;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__28_0, (int32_t)_9__28_0, v13, v14);
    }
    if ( !updateWaitIntervalBuffList
      || (System_Collections_Generic_List_object___ForEach(
            updateWaitIntervalBuffList,
            (System_Action_T__o *)_9__28_0,
            (const MethodInfo_33C2410 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
          (v15 = this->fields.updateWaitIntervalBuffList) == 0LL) )
    {
      sub_1B00F28(v9, v7);
    }
    size = v15->fields._size;
    v17 = v15->fields._version + 1;
    v15->fields._size = 0;
    v15->fields._version = v17;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v15->fields._items, 0, size, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleBuffData__ExistsTargetIntervalBuff(
        BattleBuffData_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x1
  System_Object_array *AllIntervalBuffArray; // x19
  System_Func_object__bool__o *v15; // x20

  if ( (byte_48E4962 & 1) == 0 )
  {
    sub_1B00CCC(&Method_BasicHelper_Any_BattleBuffData_BuffData____74581688, *(_QWORD *)&targetType);
    sub_1B00CCC(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v5);
    sub_1B00CCC(&Method_BattleBuffData___c__DisplayClass252_0__ExistsTargetIntervalBuff_b__0__, v6);
    sub_1B00CCC(&BattleBuffData___c__DisplayClass252_0_TypeInfo, v7);
    byte_48E4962 = 1;
  }
  v8 = sub_1B00F18(BattleBuffData___c__DisplayClass252_0_TypeInfo);
  BattleBuffData___c__DisplayClass252_0___ctor((BattleBuffData___c__DisplayClass252_0_o *)v8, 0LL);
  if ( !v8 )
    sub_1B00F28(v9, v10);
  *(_QWORD *)(v8 + 16) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)this, v11, v12);
  *(_DWORD *)(v8 + 24) = targetType;
  AllIntervalBuffArray = (System_Object_array *)BattleBuffData__GetAllIntervalBuffArray(this, v13);
  v15 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v8,
    Method_BattleBuffData___c__DisplayClass252_0__ExistsTargetIntervalBuff_b__0__,
    0LL);
  return BasicHelper__Any_object__47507500(
           AllIntervalBuffArray,
           (System_Func_T__bool__o *)v15,
           (const MethodInfo_2D4E82C *)Method_BasicHelper_Any_BattleBuffData_BuffData____74581688);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleBuffData__GetActBuffDamageBuffTargetIndivArray(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  BattleBuffData_o *v6; // x20
  System_Int32_array **p_skillChangeData; // x8

  v6 = this;
  if ( (byte_48E492A & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_1B00CCC(
                                 &Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__,
                                 *(_QWORD *)&act);
    byte_48E492A = 1;
  }
  if ( act != 107 )
  {
    this = (BattleBuffData_o *)BattleBuffData__get_buffMst(v6, *(const MethodInfo **)&act);
    if ( buffData )
    {
      if ( this )
      {
        this = (BattleBuffData_o *)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     buffData->fields.buffId,
                                     (const MethodInfo_2FE6A4C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        if ( this )
        {
          p_skillChangeData = (System_Int32_array **)&this->fields.skillChangeData;
          return *p_skillChangeData;
        }
      }
    }
LABEL_11:
    sub_1B00F28(this, *(_QWORD *)&act);
  }
  if ( !buffData )
    goto LABEL_11;
  p_skillChangeData = &buffData->fields.hpReduceToRegainIndiv;
  return *p_skillChangeData;
}


BattleBuffData_ActValueResponse_o *__fastcall BattleBuffData__GetActValueDetail(
        BattleBuffData_o *this,
        BattleBuffData_ActValueRequest_o *actValueRequest,
        const MethodInfo *method)
{
  BattleBuffData_o *v4; // x20
  struct BattleBuffData_CheckIndividualitiesData_o *CheckIndividualitiesData_k__BackingField; // x8
  BattleBuffData_o *v6; // x21
  int conditionalAuraBuff; // w9
  int32_t v8; // w20
  int32_t v9; // w21
  System_String_o *v10; // x22
  int32_t v11; // w23
  BattleBuffData_ActValueResponse_o *v12; // x24
  const MethodInfo *v14; // [xsp+18h] [xbp-58h]
  System_String_o *missText; // [xsp+28h] [xbp-48h] BYREF
  int32_t upperParam[2]; // [xsp+38h] [xbp-38h] BYREF

  v4 = this;
  if ( (byte_48E4921 & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_1B00CCC(&BattleBuffData_ActValueResponse_TypeInfo, actValueRequest);
    byte_48E4921 = 1;
  }
  *(_QWORD *)upperParam = 0LL;
  missText = 0LL;
  if ( !actValueRequest
    || (this = (BattleBuffData_o *)BattleBuffData_ActValueRequest__get_ActInfo(actValueRequest, 0LL),
        (CheckIndividualitiesData_k__BackingField = actValueRequest->fields._CheckIndividualitiesData_k__BackingField) == 0LL)
    || (v6 = this,
        this = (BattleBuffData_o *)BattleBuffData__getCalculationParam(
                                     v4,
                                     (BuffList_ActInfo_o *)this,
                                     CheckIndividualitiesData_k__BackingField->fields._selfConcatSvtIndividualities_k__BackingField,
                                     actValueRequest->fields._BuffIf_k__BackingField,
                                     CheckIndividualitiesData_k__BackingField->fields._opponentConcatSvtIndividualities_k__BackingField,
                                     &upperParam[1],
                                     &v4->fields.wkflg,
                                     &missText,
                                     upperParam,
                                     actValueRequest->fields._CheckIndividualitiesData_k__BackingField,
                                     0LL,
                                     v14),
        !v6) )
  {
    sub_1B00F28(this, actValueRequest);
  }
  conditionalAuraBuff = (int)v6->fields.conditionalAuraBuff;
  v9 = upperParam[0];
  v8 = upperParam[1];
  v10 = missText;
  v11 = (_DWORD)this - conditionalAuraBuff;
  v12 = (BattleBuffData_ActValueResponse_o *)sub_1B00F18(BattleBuffData_ActValueResponse_TypeInfo);
  BattleBuffData_ActValueResponse___ctor(v12, actValueRequest, v11, v8, v9, v10, 0LL);
  return v12;
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__GetAllBGMChangeBuffArray(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v7; // x0
  BattleBuffData___c_c *v8; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x19
  System_Func_object__bool__o *_9__249_0; // x20
  Il2CppObject *v11; // x21
  ServantStatusBattleListViewItem_o *p__9__249_0; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_48E495F & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, method);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v3);
    sub_1B00CCC(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v4);
    sub_1B00CCC(&Method_BattleBuffData___c__GetAllBGMChangeBuffArray_b__249_0__, v5);
    sub_1B00CCC(&BattleBuffData___c_TypeInfo, v6);
    byte_48E495F = 1;
  }
  v7 = BattleBuffData__AllBuffEnumerable(this, method);
  v8 = BattleBuffData___c_TypeInfo;
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)v7;
  if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v8 = BattleBuffData___c_TypeInfo;
  }
  _9__249_0 = (System_Func_object__bool__o *)v8->static_fields->__9__249_0;
  if ( !_9__249_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = BattleBuffData___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__249_0 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__249_0,
      v11,
      Method_BattleBuffData___c__GetAllBGMChangeBuffArray_b__249_0__,
      0LL);
    p__9__249_0 = (ServantStatusBattleListViewItem_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__249_0;
    p__9__249_0->klass = (ServantStatusBattleListViewItem_c *)_9__249_0;
    sub_1B00C70(p__9__249_0, (int32_t)_9__249_0, v13, v14);
  }
  v15 = System_Linq_Enumerable__Where_object_(
          v9,
          (System_Func_TSource__bool__o *)_9__249_0,
          (const MethodInfo_2D9D054 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  return (BattleBuffData_BuffData_array *)System_Linq_Enumerable__ToArray_object_(
                                            v15,
                                            (const MethodInfo_2D976BC *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__GetAllCommandAssistBuff(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattleBuffData___c_c *v6; // x0
  System_Collections_Generic_List_object__o *passiveList; // x19
  System_Predicate_object__o *_9__206_0; // x20
  Il2CppObject *v9; // x21
  struct BattleBuffData___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_48E4941 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, method);
    sub_1B00CCC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v3);
    sub_1B00CCC(&Method_BattleBuffData___c__GetAllCommandAssistBuff_b__206_0__, v4);
    sub_1B00CCC(&BattleBuffData___c_TypeInfo, v5);
    byte_48E4941 = 1;
  }
  v6 = BattleBuffData___c_TypeInfo;
  passiveList = (System_Collections_Generic_List_object__o *)this->fields.passiveList;
  if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v6 = BattleBuffData___c_TypeInfo;
  }
  _9__206_0 = (System_Predicate_object__o *)v6->static_fields->__9__206_0;
  if ( !_9__206_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = BattleBuffData___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__206_0 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_object____ctor(_9__206_0, v9, Method_BattleBuffData___c__GetAllCommandAssistBuff_b__206_0__, 0LL);
    static_fields = BattleBuffData___c_TypeInfo->static_fields;
    static_fields->__9__206_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__206_0;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__206_0, (int32_t)_9__206_0, v11, v12);
  }
  if ( !passiveList )
    sub_1B00F28(v6, method);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)System_Collections_Generic_List_object___FindAll(
                                                                         passiveList,
                                                                         (System_Predicate_T__o *)_9__206_0,
                                                                         (const MethodInfo_33C20E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__GetAllCommandCodeBuff(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattleBuffData___c_c *v6; // x0
  System_Collections_Generic_List_object__o *passiveList; // x19
  System_Predicate_object__o *_9__205_0; // x20
  Il2CppObject *v9; // x21
  struct BattleBuffData___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_48E4940 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, method);
    sub_1B00CCC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v3);
    sub_1B00CCC(&Method_BattleBuffData___c__GetAllCommandCodeBuff_b__205_0__, v4);
    sub_1B00CCC(&BattleBuffData___c_TypeInfo, v5);
    byte_48E4940 = 1;
  }
  v6 = BattleBuffData___c_TypeInfo;
  passiveList = (System_Collections_Generic_List_object__o *)this->fields.passiveList;
  if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v6 = BattleBuffData___c_TypeInfo;
  }
  _9__205_0 = (System_Predicate_object__o *)v6->static_fields->__9__205_0;
  if ( !_9__205_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = BattleBuffData___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__205_0 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_object____ctor(_9__205_0, v9, Method_BattleBuffData___c__GetAllCommandCodeBuff_b__205_0__, 0LL);
    static_fields = BattleBuffData___c_TypeInfo->static_fields;
    static_fields->__9__205_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__205_0;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__205_0, (int32_t)_9__205_0, v11, v12);
  }
  if ( !passiveList )
    sub_1B00F28(v6, method);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)System_Collections_Generic_List_object___FindAll(
                                                                         passiveList,
                                                                         (System_Predicate_T__o *)_9__205_0,
                                                                         (const MethodInfo_33C20E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__GetAllConnectedCommandCardBuff(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x19
  __int64 v12; // x1
  void *All; // x0
  System_Collections_Generic_List_object__o *activeList; // x21
  System_Predicate_object__o *v15; // x22
  Il2CppObject *v16; // x23
  ServantStatusBattleListViewItem_o *p__9__233_0; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_List_object__o *passiveList; // x20
  System_Predicate_object__o *v21; // x21
  Il2CppObject *v22; // x22
  ServantStatusBattleListViewItem_o *p__9__233_1; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  System_Collections_Generic_IEnumerable_T__o *v26; // x0

  if ( (byte_48E4953 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v5);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v6);
    sub_1B00CCC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v7);
    sub_1B00CCC(&Method_BattleBuffData___c__GetAllConnectedCommandCardBuff_b__233_0__, v8);
    sub_1B00CCC(&Method_BattleBuffData___c__GetAllConnectedCommandCardBuff_b__233_1__, v9);
    sub_1B00CCC(&BattleBuffData___c_TypeInfo, v10);
    byte_48E4953 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  All = BattleBuffData___c_TypeInfo;
  activeList = (System_Collections_Generic_List_object__o *)this->fields.activeList;
  if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    All = BattleBuffData___c_TypeInfo;
  }
  v15 = *(System_Predicate_object__o **)(*((_QWORD *)All + 23) + 328LL);
  if ( !v15 )
  {
    if ( !*((_DWORD *)All + 56) )
    {
      j_il2cpp_runtime_class_init_0(All);
      All = BattleBuffData___c_TypeInfo;
    }
    v16 = (Il2CppObject *)**((_QWORD **)All + 23);
    v15 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_object____ctor(v15, v16, Method_BattleBuffData___c__GetAllConnectedCommandCardBuff_b__233_0__, 0LL);
    p__9__233_0 = (ServantStatusBattleListViewItem_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__233_0;
    p__9__233_0->klass = (ServantStatusBattleListViewItem_c *)v15;
    sub_1B00C70(p__9__233_0, (int32_t)v15, v18, v19);
  }
  if ( !activeList )
    goto LABEL_19;
  All = System_Collections_Generic_List_object___FindAll(
          activeList,
          (System_Predicate_T__o *)v15,
          (const MethodInfo_33C20E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  if ( !v11 )
    goto LABEL_19;
  System_Collections_Generic_List_object___AddRange(
    v11,
    (System_Collections_Generic_IEnumerable_T__o *)All,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  All = BattleBuffData___c_TypeInfo;
  passiveList = (System_Collections_Generic_List_object__o *)this->fields.passiveList;
  if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    All = BattleBuffData___c_TypeInfo;
  }
  v21 = *(System_Predicate_object__o **)(*((_QWORD *)All + 23) + 336LL);
  if ( !v21 )
  {
    if ( !*((_DWORD *)All + 56) )
    {
      j_il2cpp_runtime_class_init_0(All);
      All = BattleBuffData___c_TypeInfo;
    }
    v22 = (Il2CppObject *)**((_QWORD **)All + 23);
    v21 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_object____ctor(v21, v22, Method_BattleBuffData___c__GetAllConnectedCommandCardBuff_b__233_1__, 0LL);
    p__9__233_1 = (ServantStatusBattleListViewItem_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__233_1;
    p__9__233_1->klass = (ServantStatusBattleListViewItem_c *)v21;
    sub_1B00C70(p__9__233_1, (int32_t)v21, v24, v25);
  }
  if ( !passiveList )
LABEL_19:
    sub_1B00F28(All, v12);
  v26 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_object___FindAll(
                                                         passiveList,
                                                         (System_Predicate_T__o *)v21,
                                                         (const MethodInfo_33C20E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  System_Collections_Generic_List_object___AddRange(
    v11,
    v26,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_object___ToArray(
                                            v11,
                                            (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__GetAllIntervalBuffArray(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v7; // x0
  BattleBuffData___c_c *v8; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v9; // x19
  System_Func_object__bool__o *_9__251_0; // x20
  Il2CppObject *v11; // x21
  ServantStatusBattleListViewItem_o *p__9__251_0; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0

  if ( (byte_48E4961 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, method);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v3);
    sub_1B00CCC(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v4);
    sub_1B00CCC(&Method_BattleBuffData___c__GetAllIntervalBuffArray_b__251_0__, v5);
    sub_1B00CCC(&BattleBuffData___c_TypeInfo, v6);
    byte_48E4961 = 1;
  }
  v7 = BattleBuffData__AllBuffEnumerable(this, method);
  v8 = BattleBuffData___c_TypeInfo;
  v9 = (System_Collections_Generic_IEnumerable_TSource__o *)v7;
  if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v8 = BattleBuffData___c_TypeInfo;
  }
  _9__251_0 = (System_Func_object__bool__o *)v8->static_fields->__9__251_0;
  if ( !_9__251_0 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = BattleBuffData___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__251_0 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__251_0, v11, Method_BattleBuffData___c__GetAllIntervalBuffArray_b__251_0__, 0LL);
    p__9__251_0 = (ServantStatusBattleListViewItem_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__251_0;
    p__9__251_0->klass = (ServantStatusBattleListViewItem_c *)_9__251_0;
    sub_1B00C70(p__9__251_0, (int32_t)_9__251_0, v13, v14);
  }
  v15 = System_Linq_Enumerable__Where_object_(
          v9,
          (System_Func_TSource__bool__o *)_9__251_0,
          (const MethodInfo_2D9D054 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  return (BattleBuffData_BuffData_array *)System_Linq_Enumerable__ToArray_object_(
                                            v15,
                                            (const MethodInfo_2D976BC *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__GetAllValidBGMChangeBuffArray(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v8; // x0
  BattleBuffData___c_c *v9; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x19
  System_Func_object__bool__o *_9__250_0; // x20
  Il2CppObject *v12; // x21
  ServantStatusBattleListViewItem_o *p__9__250_0; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0

  if ( (byte_48E4960 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, method);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v4);
    sub_1B00CCC(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v5);
    sub_1B00CCC(&Method_BattleBuffData___c__GetAllValidBGMChangeBuffArray_b__250_0__, v6);
    sub_1B00CCC(&BattleBuffData___c_TypeInfo, v7);
    byte_48E4960 = 1;
  }
  v8 = BattleBuffData__AllBuffValidEnumerable(this, 1, v2);
  v9 = BattleBuffData___c_TypeInfo;
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)v8;
  if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v9 = BattleBuffData___c_TypeInfo;
  }
  _9__250_0 = (System_Func_object__bool__o *)v9->static_fields->__9__250_0;
  if ( !_9__250_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = BattleBuffData___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__250_0 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__250_0,
      v12,
      Method_BattleBuffData___c__GetAllValidBGMChangeBuffArray_b__250_0__,
      0LL);
    p__9__250_0 = (ServantStatusBattleListViewItem_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__250_0;
    p__9__250_0->klass = (ServantStatusBattleListViewItem_c *)_9__250_0;
    sub_1B00C70(p__9__250_0, (int32_t)_9__250_0, v14, v15);
  }
  v16 = System_Linq_Enumerable__Where_object_(
          v10,
          (System_Func_TSource__bool__o *)_9__250_0,
          (const MethodInfo_2D9D054 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  return (BattleBuffData_BuffData_array *)System_Linq_Enumerable__ToArray_object_(
                                            v16,
                                            (const MethodInfo_2D976BC *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__GetAvaliableActiveBuffArray(
        BattleBuffData_o *this,
        System_Predicate_BattleBuffData_BuffData__o *conditionsToAdd,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  void *All; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_Generic_List_object__o *activeList; // x19
  System_Predicate_object__o *v17; // x20
  Il2CppObject *v18; // x21
  struct BattleBuffData___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3

  if ( (byte_48E48FC & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, conditionsToAdd);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v5);
    sub_1B00CCC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v6);
    sub_1B00CCC(&Method_BattleBuffData___c__GetAvaliableActiveBuffArray_b__104_0__, v7);
    sub_1B00CCC(&Method_BattleBuffData___c__DisplayClass104_0__GetAvaliableActiveBuffArray_b__1__, v8);
    sub_1B00CCC(&BattleBuffData___c__DisplayClass104_0_TypeInfo, v9);
    sub_1B00CCC(&BattleBuffData___c_TypeInfo, v10);
    byte_48E48FC = 1;
  }
  v11 = sub_1B00F18(BattleBuffData___c__DisplayClass104_0_TypeInfo);
  BattleBuffData___c__DisplayClass104_0___ctor((BattleBuffData___c__DisplayClass104_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_15;
  *(_QWORD *)(v11 + 16) = conditionsToAdd;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)conditionsToAdd, v14, v15);
  activeList = (System_Collections_Generic_List_object__o *)this->fields.activeList;
  if ( *(_QWORD *)(v11 + 16) )
  {
    v17 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_object____ctor(
      v17,
      (Il2CppObject *)v11,
      Method_BattleBuffData___c__DisplayClass104_0__GetAvaliableActiveBuffArray_b__1__,
      0LL);
  }
  else
  {
    All = BattleBuffData___c_TypeInfo;
    if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      All = BattleBuffData___c_TypeInfo;
    }
    v17 = *(System_Predicate_object__o **)(*((_QWORD *)All + 23) + 152LL);
    if ( !v17 )
    {
      if ( !*((_DWORD *)All + 56) )
      {
        j_il2cpp_runtime_class_init_0(All);
        All = BattleBuffData___c_TypeInfo;
      }
      v18 = (Il2CppObject *)**((_QWORD **)All + 23);
      v17 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
      System_Predicate_object____ctor(v17, v18, Method_BattleBuffData___c__GetAvaliableActiveBuffArray_b__104_0__, 0LL);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
      static_fields->__9__104_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)v17;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__104_0, (int32_t)v17, v20, v21);
    }
  }
  if ( !activeList
    || (All = System_Collections_Generic_List_object___FindAll(
                activeList,
                (System_Predicate_T__o *)v17,
                (const MethodInfo_33C20E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__)) == 0LL )
  {
LABEL_15:
    sub_1B00F28(All, v13);
  }
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_object___ToArray(
                                            (System_Collections_Generic_List_object__o *)All,
                                            (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_int__o *__fastcall BattleBuffData__GetBuffGeneralParamList(
        BattleBuffData_o *this,
        int32_t act,
        System_Int32_array *selfArray,
        System_Int32_array *opArray,
        bool isRec,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  System_Collections_Generic_List_int__o *v18; // x19
  BuffList_ActInfo_o *ActInfo; // x24
  const MethodInfo *v20; // x2
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v21; // x0
  __int64 v22; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v24; // x20
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v28; // x1
  __int64 v29; // x20
  bool v30; // w25
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  BattleBuffData_BuffData_o *v39; // x0
  __int64 v40; // x1
  BattleBuffData_BuffData_o *v41; // x26
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v43; // x1
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0

  if ( (byte_48E4930 & 1) == 0 )
  {
    sub_1B00CCC(&BuffList_TypeInfo, *(_QWORD *)&act);
    sub_1B00CCC(&System_IDisposable_TypeInfo, v11);
    sub_1B00CCC(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v12);
    sub_1B00CCC(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v13);
    sub_1B00CCC(&System_Collections_IEnumerator_TypeInfo, v14);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__AddRange__, v15);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor__, v16);
    sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v17);
    byte_48E4930 = 1;
  }
  v18 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  v21 = BattleBuffData__AllBuffValidEnumerable(this, 1, v20);
  if ( !v21 )
    sub_1B00F28(0LL, v22);
  klass = v21->klass;
  v24 = v21;
  v25 = *(unsigned __int16 *)(&v21->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v21->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      --v25;
      p_offset += 4;
      if ( !v25 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1B52CAC(v21, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v29 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))p_method)(
          v24,
          *(_QWORD *)(p_method + 8));
  if ( !v29 )
    sub_1B00F28(0LL, v28);
  v30 = isRec;
  while ( 1 )
  {
    v31 = *(_QWORD *)v29;
    v32 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
    {
      v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v33 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v32;
        v33 += 4;
        if ( !v32 )
          goto LABEL_18;
      }
      v34 = v31 + 16LL * *v33 + 312;
    }
    else
    {
LABEL_18:
      v34 = sub_1B52CAC(v29, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v29, *(_QWORD *)(v34 + 8)) & 1) == 0 )
      break;
    v35 = *(_QWORD *)v29;
    v36 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
    {
      v37 = (int *)(*(_QWORD *)(v35 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v37 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_25;
      }
      v38 = v35 + 16LL * *v37 + 312;
    }
    else
    {
LABEL_25:
      v38 = sub_1B52CAC(v29, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v39 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v38)(v29, *(_QWORD *)(v38 + 8));
    v41 = v39;
    if ( !v39 )
      sub_1B00F28(0LL, v40);
    if ( !v39->fields._isRemove
      && BattleBuffData_BuffData__CheckCond_41313968(v39, this, ActInfo, selfArray, opArray, v30, 0LL) )
    {
      IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v41->fields.generalParams, 0LL);
      if ( !IsNullOrEmpty )
      {
        if ( !v18 )
          sub_1B00F28(IsNullOrEmpty, v43);
        System_Collections_Generic_List_int___AddRange(
          v18,
          (System_Collections_Generic_IEnumerable_T__o *)v41->fields.generalParams,
          (const MethodInfo_33A4BB8 *)Method_System_Collections_Generic_List_int__AddRange__);
      }
    }
  }
  v44 = *(_QWORD *)v29;
  v45 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
  {
    v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
    {
      --v45;
      v46 += 4;
      if ( !v45 )
        goto LABEL_37;
    }
    v47 = v44 + 16LL * *v46 + 312;
  }
  else
  {
LABEL_37:
    v47 = sub_1B52CAC(v29, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v47)(v29, *(_QWORD *)(v47 + 8));
  return v18;
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__GetBuffList(
        BattleBuffData_o *this,
        BuffList_TYPE_array *types,
        System_Int32_array *checkIndividuality,
        bool isExcludeInterval,
        const MethodInfo *method)
{
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v9; // x0
  System_Object_array *v10; // x3
  const MethodInfo *v11; // x4

  if ( (byte_48E4906 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, types);
    byte_48E4906 = 1;
  }
  v9 = BattleBuffData__AllBuffValidEnumerablePriorActive(
         this,
         isExcludeInterval,
         (const MethodInfo *)checkIndividuality);
  v10 = System_Linq_Enumerable__ToArray_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v9,
          (const MethodInfo_2D976BC *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  return BattleBuffData__getBuffList_41011768(
           this,
           types,
           checkIndividuality,
           (BattleBuffData_BuffData_array *)v10,
           v11);
}


// local variable allocation has failed, the output may be wrong!
BattleBuffData_BuffData_array *__fastcall BattleBuffData__GetBuffListMatchingLastAttackOpponentIndividuality(
        BattleBuffData_o *this,
        int32_t act,
        BattleData_o *data,
        BattleServantData_o *svtData,
        bool isRec,
        const MethodInfo *method)
{
  BattleBuffData_o *v10; // x21
  BattleServantData_o *ServantData; // x23
  BattleBuffData_CheckIndividualitiesData_o *v12; // x24
  const MethodInfo *v13; // x6

  v10 = this;
  if ( (byte_48E4933 & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_1B00CCC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, *(_QWORD *)&act);
    byte_48E4933 = 1;
  }
  if ( !svtData || (this = (BattleBuffData_o *)BattleServantData__getRevengeTargetUniqueId(svtData, 0LL), !data) )
    sub_1B00F28(this, *(_QWORD *)&act);
  ServantData = BattleData__getServantData(data, (int32_t)this, 0LL);
  v12 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B00F18(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v12, svtData, ServantData, 0LL, 0LL, 0LL, 0LL);
  return BattleBuffData__getBuffList_41032464(v10, act, v12, isRec, 0, 0LL, v13);
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__GetClassIconEffectBuffList(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattleBuffData___c_c *v6; // x0
  System_Collections_Generic_List_object__o *classIconAuraEffectBuffList; // x19
  System_Predicate_object__o *_9__261_0; // x20
  Il2CppObject *v9; // x21
  ServantStatusBattleListViewItem_o *p__9__261_0; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_48E4969 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, method);
    sub_1B00CCC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v3);
    sub_1B00CCC(&Method_BattleBuffData___c__GetClassIconEffectBuffList_b__261_0__, v4);
    sub_1B00CCC(&BattleBuffData___c_TypeInfo, v5);
    byte_48E4969 = 1;
  }
  v6 = BattleBuffData___c_TypeInfo;
  classIconAuraEffectBuffList = (System_Collections_Generic_List_object__o *)this->fields.classIconAuraEffectBuffList;
  if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v6 = BattleBuffData___c_TypeInfo;
  }
  _9__261_0 = (System_Predicate_object__o *)v6->static_fields->__9__261_0;
  if ( !_9__261_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = BattleBuffData___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__261_0 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_object____ctor(
      _9__261_0,
      v9,
      Method_BattleBuffData___c__GetClassIconEffectBuffList_b__261_0__,
      0LL);
    p__9__261_0 = (ServantStatusBattleListViewItem_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__261_0;
    p__9__261_0->klass = (ServantStatusBattleListViewItem_c *)_9__261_0;
    sub_1B00C70(p__9__261_0, (int32_t)_9__261_0, v11, v12);
  }
  if ( !classIconAuraEffectBuffList )
    sub_1B00F28(v6, method);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)System_Collections_Generic_List_object___FindAll(
                                                                         classIconAuraEffectBuffList,
                                                                         (System_Predicate_T__o *)_9__261_0,
                                                                         (const MethodInfo_33C20E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__GetCommandCardBuffArray(
        BattleBuffData_o *this,
        BattleCommandData_o *commandData,
        int32_t targetBuffType,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_object__o *v18; // x19
  DataManager_o *Instance; // x0
  __int64 v20; // x1
  Il2CppObject *MasterData_object; // x24
  const MethodInfo *v22; // x2
  DataManager_c *klass; // x8
  DataManager_o *v24; // x20
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 v27; // x0
  __int64 v28; // x1
  __int64 v29; // x20
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  BattleBuffData_BuffData_o *v38; // x25
  const MethodInfo *v39; // x4
  _BOOL8 v40; // x0
  __int64 v41; // x1
  _BOOL8 v42; // x0
  __int64 v43; // x1
  int32_t klass_high; // w26
  _BOOL8 v45; // x0
  __int64 v46; // x1
  int32_t v47; // w2
  int32_t v48; // w3
  struct System_Object_array *items; // x8
  _QWORD *v50; // x9
  __int64 size; // x10
  Il2CppClass **v52; // x0
  __int64 v53; // x8
  __int64 v54; // x9
  int *v55; // x10
  __int64 v56; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_48E4951 & 1) == 0 )
  {
    sub_1B00CCC(&BuffList_TypeInfo, commandData);
    sub_1B00CCC(&Method_DataManager_GetMasterData_BuffMaster___, v7);
    sub_1B00CCC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v8);
    sub_1B00CCC(&System_IDisposable_TypeInfo, v9);
    sub_1B00CCC(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v10);
    sub_1B00CCC(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v11);
    sub_1B00CCC(&System_Collections_IEnumerator_TypeInfo, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v13);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v14);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v15);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v16);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    byte_48E4951 = 1;
  }
  entity = 0LL;
  v18 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_51;
  MasterData_object = DataManager__GetMasterData_object_(
                        Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_BuffMaster___);
  Instance = (DataManager_o *)BattleBuffData__AllBuffValidEnumerablePriorActive(this, 0, v22);
  if ( !Instance )
    goto LABEL_51;
  klass = Instance->klass;
  v24 = Instance;
  v25 = *(unsigned __int16 *)(&Instance->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Instance->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      --v25;
      p_offset += 4;
      if ( !v25 )
        goto LABEL_9;
    }
    v27 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_9:
    v27 = sub_1B52CAC(Instance, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v29 = (*(__int64 (__fastcall **)(DataManager_o *, _QWORD))v27)(v24, *(_QWORD *)(v27 + 8));
  if ( !v29 )
    sub_1B00F28(0LL, v28);
  while ( 1 )
  {
    v30 = *(_QWORD *)v29;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v32 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_16;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_16:
      v33 = sub_1B52CAC(v29, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v29, *(_QWORD *)(v33 + 8)) & 1) == 0 )
      break;
    v34 = *(_QWORD *)v29;
    v35 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
    {
      v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v36 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_23;
      }
      v37 = v34 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_23:
      v37 = sub_1B52CAC(v29, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v38 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v29, *(_QWORD *)(v37 + 8));
    v40 = BattleBuffData__CheckCommandCardBuffActive(this, commandData, v38, 1, v39);
    if ( v40 )
    {
      entity = 0LL;
      if ( !v38 )
        sub_1B00F28(v40, v41);
      if ( !MasterData_object )
        sub_1B00F28(v40, v41);
      v42 = DataMasterBase_object__object__int___TryGetEntity(
              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
              &entity,
              v38->fields.buffId,
              (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
      if ( v42 )
      {
        if ( !entity )
          sub_1B00F28(v42, v43);
        klass_high = HIDWORD(entity[1].klass);
        if ( !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        v45 = BuffList__CheckType(targetBuffType, klass_high, 0LL);
        if ( v45 )
        {
          if ( !v18 )
            sub_1B00F28(v45, v46);
          items = v18->fields._items;
          v50 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
          ++v18->fields._version;
          if ( !items )
            sub_1B00F28(v45, v46);
          size = v18->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v18,
              (Il2CppObject *)v38,
              *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v50[4] + 192LL) + 112LL));
          }
          else
          {
            v52 = &items->obj.klass + size;
            v18->fields._size = size + 1;
            v52[4] = (Il2CppClass *)v38;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)(v52 + 4), (int32_t)v38, v47, v48);
          }
        }
      }
    }
  }
  v53 = *(_QWORD *)v29;
  v54 = *(unsigned __int16 *)(*(_QWORD *)v29 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v29 + 302LL) )
  {
    v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
    {
      --v54;
      v55 += 4;
      if ( !v54 )
        goto LABEL_42;
    }
    v56 = v53 + 16LL * *v55 + 312;
  }
  else
  {
LABEL_42:
    v56 = sub_1B52CAC(v29, System_IDisposable_TypeInfo, 0LL);
  }
  Instance = (DataManager_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v56)(v29, *(_QWORD *)(v56 + 8));
  if ( !v18 )
LABEL_51:
    sub_1B00F28(Instance, v20);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_object___ToArray(
                                            v18,
                                            (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


BattleBuffData_BuffData_o *__fastcall BattleBuffData__GetCommandCardTypeChangeBuff(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_o *result; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x4
  BattleBuffData_BuffData_o *v6; // x1
  BattleBuffData_BuffData_array *BuffList_41011768; // x0
  const MethodInfo *v8; // x2
  __int64 v9; // x8

  if ( (byte_48E494D & 1) == 0 )
  {
    sub_1B00CCC(&BuffList_TYPE___TypeInfo, method);
    byte_48E494D = 1;
  }
  result = (BattleBuffData_BuffData_o *)sub_1B00D74(BuffList_TYPE___TypeInfo, 1LL);
  if ( !result )
    sub_1B00F28(0LL, v4);
  v6 = result;
  if ( !result->fields.count )
    goto LABEL_11;
  *(_DWORD *)&result->fields.isUse = 156;
  BuffList_41011768 = BattleBuffData__getBuffList_41011768(this, (BuffList_TYPE_array *)result, 0LL, 0LL, v5);
  result = (BattleBuffData_BuffData_o *)BattleBuffData__CheckAndGetFixedBuffArray(this, BuffList_41011768, v8);
  if ( result )
  {
    v9 = *(_QWORD *)&result->fields.count;
    if ( v9 )
    {
      if ( (_DWORD)v9 )
        return *(BattleBuffData_BuffData_o **)&result->fields.isUse;
LABEL_11:
      sub_1B00F30(result, v6);
    }
    return 0LL;
  }
  return result;
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__GetCounterFuncBuffDataList(
        BattleBuffData_o *this,
        BattleServantData_o *selfSvt,
        BattleServantData_o *targetSvt,
        bool checkOnly,
        const MethodInfo *method)
{
  __int64 v9; // x1
  bool IsConstantMasterIndvAddBuffActive; // w24
  BattleBuffData_CheckIndividualitiesData_o *v11; // x0
  BattleBuffData_CheckIndividualitiesData_o *v12; // x23
  BattleServantData_o *v13; // x1
  BattleServantData_o *v14; // x2
  const MethodInfo *v15; // x6

  if ( (byte_48E4958 & 1) == 0 )
  {
    sub_1B00CCC(&BuffList_TypeInfo, selfSvt);
    sub_1B00CCC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v9);
    byte_48E4958 = 1;
  }
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  IsConstantMasterIndvAddBuffActive = BuffList__IsConstantMasterIndvAddBuffActive(0LL);
  v11 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B00F18(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  v12 = v11;
  if ( IsConstantMasterIndvAddBuffActive )
  {
    v13 = selfSvt;
    v14 = targetSvt;
  }
  else
  {
    v13 = 0LL;
    v14 = 0LL;
  }
  BattleBuffData_CheckIndividualitiesData___ctor(v11, v13, v14, 0LL, 0LL, 0LL, 0LL);
  return BattleBuffData__getBuffList_41032464(this, 102, v12, 0, checkOnly, 0LL, v15);
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__GetCurrentWarBoardNotAttackedBuff(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_BattleBuffData_BuffData__o *CurrentAllBaffList; // x0
  BattleBuffData___c_c *v9; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x19
  System_Func_object__bool__o *_9__239_0; // x20
  Il2CppObject *v12; // x21
  ServantStatusBattleListViewItem_o *p__9__239_0; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0

  if ( (byte_48E4956 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___, method);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v4);
    sub_1B00CCC(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v5);
    sub_1B00CCC(&Method_BattleBuffData___c__GetCurrentWarBoardNotAttackedBuff_b__239_0__, v6);
    sub_1B00CCC(&BattleBuffData___c_TypeInfo, v7);
    byte_48E4956 = 1;
  }
  CurrentAllBaffList = BattleBuffData__getCurrentAllBaffList(this, 1, v2);
  v9 = BattleBuffData___c_TypeInfo;
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)CurrentAllBaffList;
  if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v9 = BattleBuffData___c_TypeInfo;
  }
  _9__239_0 = (System_Func_object__bool__o *)v9->static_fields->__9__239_0;
  if ( !_9__239_0 )
  {
    if ( !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      v9 = BattleBuffData___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v9->static_fields->__9;
    _9__239_0 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__239_0,
      v12,
      Method_BattleBuffData___c__GetCurrentWarBoardNotAttackedBuff_b__239_0__,
      0LL);
    p__9__239_0 = (ServantStatusBattleListViewItem_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__239_0;
    p__9__239_0->klass = (ServantStatusBattleListViewItem_c *)_9__239_0;
    sub_1B00C70(p__9__239_0, (int32_t)_9__239_0, v14, v15);
  }
  v16 = System_Linq_Enumerable__Where_object_(
          v10,
          (System_Func_TSource__bool__o *)_9__239_0,
          (const MethodInfo_2D9D054 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)System_Linq_Enumerable__ToList_object_(
                                                                         v16,
                                                                         (const MethodInfo_2D9AFD4 *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__GetEffectBuffList(
        BattleBuffData_o *this,
        const MethodInfo *method)
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
  System_Collections_Generic_List_object__o *v15; // x19
  __int64 v16; // x1
  void *All; // x0
  System_Collections_Generic_List_object__o *passiveList; // x21
  System_Predicate_object__o *v19; // x22
  Il2CppObject *v20; // x23
  ServantStatusBattleListViewItem_o *p__9__223_0; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  System_Collections_Generic_List_object__o *activeList; // x20
  System_Predicate_object__o *v25; // x21
  Il2CppObject *v26; // x22
  ServantStatusBattleListViewItem_o *p__9__223_1; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  System_Collections_Generic_IEnumerable_T__o *v30; // x0
  BattleBuffData___c_c *v31; // x0
  System_Comparison_T__o *_9__223_2; // x20
  Il2CppObject *v33; // x21
  ServantStatusBattleListViewItem_o *p__9__223_2; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  BattleBuffData___c_c *v37; // x0
  System_Predicate_object__o *_9__223_3; // x20
  Il2CppObject *v39; // x21
  ServantStatusBattleListViewItem_o *p__9__223_3; // x0
  int32_t v41; // w2
  int32_t v42; // w3

  if ( (byte_48E494B & 1) == 0 )
  {
    sub_1B00CCC(&System_Comparison_BattleBuffData_BuffData__TypeInfo, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v7);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v8);
    sub_1B00CCC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v9);
    sub_1B00CCC(&Method_BattleBuffData___c__GetEffectBuffList_b__223_0__, v10);
    sub_1B00CCC(&Method_BattleBuffData___c__GetEffectBuffList_b__223_1__, v11);
    sub_1B00CCC(&Method_BattleBuffData___c__GetEffectBuffList_b__223_2__, v12);
    sub_1B00CCC(&Method_BattleBuffData___c__GetEffectBuffList_b__223_3__, v13);
    sub_1B00CCC(&BattleBuffData___c_TypeInfo, v14);
    byte_48E494B = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  All = BattleBuffData___c_TypeInfo;
  passiveList = (System_Collections_Generic_List_object__o *)this->fields.passiveList;
  if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    All = BattleBuffData___c_TypeInfo;
  }
  v19 = *(System_Predicate_object__o **)(*((_QWORD *)All + 23) + 288LL);
  if ( !v19 )
  {
    if ( !*((_DWORD *)All + 56) )
    {
      j_il2cpp_runtime_class_init_0(All);
      All = BattleBuffData___c_TypeInfo;
    }
    v20 = (Il2CppObject *)**((_QWORD **)All + 23);
    v19 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_object____ctor(v19, v20, Method_BattleBuffData___c__GetEffectBuffList_b__223_0__, 0LL);
    p__9__223_0 = (ServantStatusBattleListViewItem_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__223_0;
    p__9__223_0->klass = (ServantStatusBattleListViewItem_c *)v19;
    sub_1B00C70(p__9__223_0, (int32_t)v19, v22, v23);
  }
  if ( !passiveList )
    goto LABEL_31;
  All = System_Collections_Generic_List_object___FindAll(
          passiveList,
          (System_Predicate_T__o *)v19,
          (const MethodInfo_33C20E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  if ( !v15 )
    goto LABEL_31;
  System_Collections_Generic_List_object___AddRange(
    v15,
    (System_Collections_Generic_IEnumerable_T__o *)All,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  All = BattleBuffData___c_TypeInfo;
  activeList = (System_Collections_Generic_List_object__o *)this->fields.activeList;
  if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    All = BattleBuffData___c_TypeInfo;
  }
  v25 = *(System_Predicate_object__o **)(*((_QWORD *)All + 23) + 296LL);
  if ( !v25 )
  {
    if ( !*((_DWORD *)All + 56) )
    {
      j_il2cpp_runtime_class_init_0(All);
      All = BattleBuffData___c_TypeInfo;
    }
    v26 = (Il2CppObject *)**((_QWORD **)All + 23);
    v25 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_object____ctor(v25, v26, Method_BattleBuffData___c__GetEffectBuffList_b__223_1__, 0LL);
    p__9__223_1 = (ServantStatusBattleListViewItem_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__223_1;
    p__9__223_1->klass = (ServantStatusBattleListViewItem_c *)v25;
    sub_1B00C70(p__9__223_1, (int32_t)v25, v28, v29);
  }
  if ( !activeList )
LABEL_31:
    sub_1B00F28(All, v16);
  v30 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_object___FindAll(
                                                         activeList,
                                                         (System_Predicate_T__o *)v25,
                                                         (const MethodInfo_33C20E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  System_Collections_Generic_List_object___AddRange(
    v15,
    v30,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v31 = BattleBuffData___c_TypeInfo;
  if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v31 = BattleBuffData___c_TypeInfo;
  }
  _9__223_2 = (System_Comparison_T__o *)v31->static_fields->__9__223_2;
  if ( !_9__223_2 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = BattleBuffData___c_TypeInfo;
    }
    v33 = (Il2CppObject *)v31->static_fields->__9;
    _9__223_2 = (System_Comparison_T__o *)sub_1B00F18(System_Comparison_BattleBuffData_BuffData__TypeInfo);
    System_Comparison_object____ctor(_9__223_2, v33, Method_BattleBuffData___c__GetEffectBuffList_b__223_2__, 0LL);
    p__9__223_2 = (ServantStatusBattleListViewItem_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__223_2;
    p__9__223_2->klass = (ServantStatusBattleListViewItem_c *)_9__223_2;
    sub_1B00C70(p__9__223_2, (int32_t)_9__223_2, v35, v36);
  }
  System_Collections_Generic_List_object___Sort_54277268(
    v15,
    _9__223_2,
    (const MethodInfo_33C3494 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
  v37 = BattleBuffData___c_TypeInfo;
  if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v37 = BattleBuffData___c_TypeInfo;
  }
  _9__223_3 = (System_Predicate_object__o *)v37->static_fields->__9__223_3;
  if ( !_9__223_3 )
  {
    if ( !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      v37 = BattleBuffData___c_TypeInfo;
    }
    v39 = (Il2CppObject *)v37->static_fields->__9;
    _9__223_3 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_object____ctor(_9__223_3, v39, Method_BattleBuffData___c__GetEffectBuffList_b__223_3__, 0LL);
    p__9__223_3 = (ServantStatusBattleListViewItem_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__223_3;
    p__9__223_3->klass = (ServantStatusBattleListViewItem_c *)_9__223_3;
    sub_1B00C70(p__9__223_3, (int32_t)_9__223_3, v41, v42);
  }
  System_Collections_Generic_List_object___RemoveAll(
    v15,
    (System_Predicate_T__o *)_9__223_3,
    (const MethodInfo_33C302C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v15;
}


int32_t __fastcall BattleBuffData__GetFamilyLinkageIdMax(BattleBuffData_o *this, const MethodInfo *method)
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
  __int64 v14; // x21
  System_Collections_Generic_HashSet_int__o *v15; // x22
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  const MethodInfo *v20; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v22; // x20
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v26; // x1
  __int64 v27; // x20
  System_Action_int__o **v28; // x22
  System_Action_int__o **v29; // x23
  __int64 v30; // x8
  __int64 v31; // x9
  int *v32; // x10
  __int64 v33; // x0
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  BattleBuffData_BuffData_o *v38; // x0
  __int64 v39; // x1
  BattleBuffData_BuffData_o *v40; // x24
  System_Int32_array *FamilyLinkageTargetIdArray; // x0
  System_Action_int__o *v42; // x26
  System_Collections_Generic_IEnumerable_T__o *v43; // x25
  int32_t v44; // w2
  int32_t v45; // w3
  System_Int32_array *FamilyLinkageIdArray; // x0
  System_Action_int__o *v47; // x25
  System_Collections_Generic_IEnumerable_T__o *v48; // x24
  int32_t v49; // w2
  int32_t v50; // w3
  __int64 v51; // x8
  __int64 v52; // x9
  int *v53; // x10
  __int64 v54; // x0
  System_Collections_Generic_IEnumerable_int__o **v56; // [xsp+8h] [xbp-68h]

  if ( (byte_48E4959 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_int__TypeInfo, method);
    sub_1B00CCC(&Method_BasicHelper_ForEach_int___, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_int___ctor__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_int__get_Count__, v5);
    sub_1B00CCC(&System_Collections_Generic_HashSet_int__TypeInfo, v6);
    sub_1B00CCC(&System_IDisposable_TypeInfo, v7);
    sub_1B00CCC(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v8);
    sub_1B00CCC(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v9);
    sub_1B00CCC(&System_Collections_IEnumerator_TypeInfo, v10);
    sub_1B00CCC(&Method_BattleBuffData___c__DisplayClass243_0__GetFamilyLinkageIdMax_b__0__, v11);
    sub_1B00CCC(&Method_BattleBuffData___c__DisplayClass243_0__GetFamilyLinkageIdMax_b__1__, v12);
    sub_1B00CCC(&BattleBuffData___c__DisplayClass243_0_TypeInfo, v13);
    byte_48E4959 = 1;
  }
  v14 = sub_1B00F18(BattleBuffData___c__DisplayClass243_0_TypeInfo);
  BattleBuffData___c__DisplayClass243_0___ctor((BattleBuffData___c__DisplayClass243_0_o *)v14, 0LL);
  v15 = (System_Collections_Generic_HashSet_int__o *)sub_1B00F18(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v15,
    (const MethodInfo_3279E3C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  if ( !v14 )
    goto LABEL_43;
  *(_QWORD *)(v14 + 16) = v15;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)v15, v18, v19);
  v16 = BattleBuffData__AllBuffEnumerable(this, v20);
  if ( !v16 )
    goto LABEL_43;
  klass = v16->klass;
  v22 = v16;
  v23 = *(unsigned __int16 *)(&v16->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v16->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      --v23;
      p_offset += 4;
      if ( !v23 )
        goto LABEL_9;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_9:
    p_method = sub_1B52CAC(v16, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v56 = (System_Collections_Generic_IEnumerable_int__o **)(v14 + 16);
  v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))p_method)(
          v22,
          *(_QWORD *)(p_method + 8));
  if ( !v27 )
    sub_1B00F28(0LL, v26);
  v28 = (System_Action_int__o **)(v14 + 24);
  v29 = (System_Action_int__o **)(v14 + 32);
  while ( 1 )
  {
    v30 = *(_QWORD *)v27;
    v31 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
    {
      v32 = (int *)(*(_QWORD *)(v30 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v32 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v31;
        v32 += 4;
        if ( !v31 )
          goto LABEL_17;
      }
      v33 = v30 + 16LL * *v32 + 312;
    }
    else
    {
LABEL_17:
      v33 = sub_1B52CAC(v27, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v33)(v27, *(_QWORD *)(v33 + 8)) & 1) == 0 )
      break;
    v34 = *(_QWORD *)v27;
    v35 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
    {
      v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v36 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        --v35;
        v36 += 4;
        if ( !v35 )
          goto LABEL_24;
      }
      v37 = v34 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_24:
      v37 = sub_1B52CAC(v27, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v38 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v27, *(_QWORD *)(v37 + 8));
    v40 = v38;
    if ( !v38 )
      sub_1B00F28(0LL, v39);
    FamilyLinkageTargetIdArray = BattleBuffData_BuffData__get_FamilyLinkageTargetIdArray(v38, 0LL);
    v42 = *v28;
    v43 = (System_Collections_Generic_IEnumerable_T__o *)FamilyLinkageTargetIdArray;
    if ( !*v28 )
    {
      v42 = (System_Action_int__o *)sub_1B00F18(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v42,
        (Il2CppObject *)v14,
        Method_BattleBuffData___c__DisplayClass243_0__GetFamilyLinkageIdMax_b__0__,
        0LL);
      *v28 = v42;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v14 + 24), (int32_t)v42, v44, v45);
    }
    BasicHelper__ForEach_int_(
      v43,
      (System_Action_T__o *)v42,
      (const MethodInfo_2D4FB4C *)Method_BasicHelper_ForEach_int___);
    FamilyLinkageIdArray = BattleBuffData_BuffData__get_FamilyLinkageIdArray(v40, 0LL);
    v47 = *v29;
    v48 = (System_Collections_Generic_IEnumerable_T__o *)FamilyLinkageIdArray;
    if ( !*v29 )
    {
      v47 = (System_Action_int__o *)sub_1B00F18(System_Action_int__TypeInfo);
      System_Action_int____ctor(
        v47,
        (Il2CppObject *)v14,
        Method_BattleBuffData___c__DisplayClass243_0__GetFamilyLinkageIdMax_b__1__,
        0LL);
      *v29 = v47;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v14 + 32), (int32_t)v47, v49, v50);
    }
    BasicHelper__ForEach_int_(
      v48,
      (System_Action_T__o *)v47,
      (const MethodInfo_2D4FB4C *)Method_BasicHelper_ForEach_int___);
  }
  v51 = *(_QWORD *)v27;
  v52 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
  {
    v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
    {
      --v52;
      v53 += 4;
      if ( !v52 )
        goto LABEL_36;
    }
    v54 = v51 + 16LL * *v53 + 312;
  }
  else
  {
LABEL_36:
    v54 = sub_1B52CAC(v27, System_IDisposable_TypeInfo, 0LL);
  }
  v16 = (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v54)(
                                                                               v27,
                                                                               *(_QWORD *)(v54 + 8));
  if ( !*v56 )
LABEL_43:
    sub_1B00F28(v16, v17);
  if ( SLODWORD((*v56)[2].klass) <= 0 )
    return 0;
  else
    return System_Linq_Enumerable__Max(*v56, 0LL);
}


BattleBuffData_FieldChangeData_array *__fastcall BattleBuffData__GetFieldChangeArray(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x19
  const MethodInfo *v11; // x2
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v12; // x0
  __int64 v13; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v15; // x20
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v19; // x1
  __int64 v20; // x20
  __int64 v21; // x8
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x0
  __int64 v30; // x1
  int32_t v31; // w2
  int32_t v32; // w3
  Il2CppObject *v33; // x1
  struct System_Object_array *items; // x8
  _QWORD *v35; // x9
  __int64 size; // x10
  Il2CppClass **v37; // x0
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0

  if ( (byte_48E495E & 1) == 0 )
  {
    sub_1B00CCC(&System_IDisposable_TypeInfo, method);
    sub_1B00CCC(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v3);
    sub_1B00CCC(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v4);
    sub_1B00CCC(&System_Collections_IEnumerator_TypeInfo, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_FieldChangeData__Add__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_FieldChangeData__ToArray__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_FieldChangeData___ctor__, v8);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_FieldChangeData__TypeInfo, v9);
    byte_48E495E = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_FieldChangeData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_FieldChangeData___ctor__);
  v12 = BattleBuffData__AllBuffValidEnumerable(this, 1, v11);
  if ( !v12 )
    goto LABEL_42;
  klass = v12->klass;
  v15 = v12;
  v16 = *(unsigned __int16 *)(&v12->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v12->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      --v16;
      p_offset += 4;
      if ( !v16 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1B52CAC(v12, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v20 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))p_method)(
          v15,
          *(_QWORD *)(p_method + 8));
  if ( !v20 )
    sub_1B00F28(0LL, v19);
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
          goto LABEL_15;
      }
      v24 = v21 + 16LL * *v23 + 312;
    }
    else
    {
LABEL_15:
      v24 = sub_1B52CAC(v20, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v24)(v20, *(_QWORD *)(v24 + 8)) & 1) == 0 )
      break;
    v25 = *(_QWORD *)v20;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v27 = (int *)(*(_QWORD *)(v25 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v27 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        --v26;
        v27 += 4;
        if ( !v26 )
          goto LABEL_22;
      }
      v28 = v25 + 16LL * *v27 + 312;
    }
    else
    {
LABEL_22:
      v28 = sub_1B52CAC(v20, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v29 = (*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v20, *(_QWORD *)(v28 + 8));
    if ( !v29 )
      sub_1B00F28(0LL, v30);
    v33 = *(Il2CppObject **)(v29 + 312);
    if ( v33 )
    {
      if ( !v10 )
        sub_1B00F28(v29, v33);
      items = v10->fields._items;
      v35 = Method_System_Collections_Generic_List_BattleBuffData_FieldChangeData__Add__;
      ++v10->fields._version;
      if ( !items )
        sub_1B00F28(v29, v33);
      size = v10->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v10,
          v33,
          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v35[4] + 192LL) + 112LL));
      }
      else
      {
        v37 = &items->obj.klass + size;
        v10->fields._size = size + 1;
        v37[4] = (Il2CppClass *)v33;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v37 + 4), (int32_t)v33, v31, v32);
      }
    }
  }
  v38 = *(_QWORD *)v20;
  v39 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
  {
    v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v40 - 1) != System_IDisposable_TypeInfo )
    {
      --v39;
      v40 += 4;
      if ( !v39 )
        goto LABEL_35;
    }
    v41 = v38 + 16LL * *v40 + 312;
  }
  else
  {
LABEL_35:
    v41 = sub_1B52CAC(v20, System_IDisposable_TypeInfo, 0LL);
  }
  v12 = (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v41)(
                                                                               v20,
                                                                               *(_QWORD *)(v41 + 8));
  if ( !v10 )
LABEL_42:
    sub_1B00F28(v12, v13);
  return (BattleBuffData_FieldChangeData_array *)System_Collections_Generic_List_object___ToArray(
                                                   v10,
                                                   (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleBuffData_FieldChangeData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleBuffData_BuffData_o *__fastcall BattleBuffData__GetFirstMatchCondBuff(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        bool isRec,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  BuffList_ActInfo_o *ActInfo; // x22
  const MethodInfo *v14; // x2
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v15; // x0
  __int64 v16; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v18; // x19
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v22; // x1
  __int64 v23; // x19
  bool v24; // w23
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  BattleBuffData_BuffData_o *v33; // x0
  __int64 v34; // x1
  BattleBuffData_BuffData_o *v35; // x24
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0

  if ( (byte_48E4935 & 1) == 0 )
  {
    sub_1B00CCC(&BuffList_TypeInfo, *(_QWORD *)&act);
    sub_1B00CCC(&System_IDisposable_TypeInfo, v9);
    sub_1B00CCC(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v10);
    sub_1B00CCC(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v11);
    sub_1B00CCC(&System_Collections_IEnumerator_TypeInfo, v12);
    byte_48E4935 = 1;
  }
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  v15 = BattleBuffData__AllBuffValidEnumerablePriorActive(this, 0, v14);
  if ( !v15 )
    sub_1B00F28(0LL, v16);
  klass = v15->klass;
  v18 = v15;
  v19 = *(unsigned __int16 *)(&v15->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v15->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      --v19;
      p_offset += 4;
      if ( !v19 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1B52CAC(v15, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v23 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))p_method)(
          v18,
          *(_QWORD *)(p_method + 8));
  if ( !v23 )
    sub_1B00F28(0LL, v22);
  v24 = isRec;
  while ( 1 )
  {
    v25 = *(_QWORD *)v23;
    v26 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
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
      v28 = sub_1B52CAC(v23, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v23, *(_QWORD *)(v28 + 8)) & 1) == 0 )
      break;
    v29 = *(_QWORD *)v23;
    v30 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
    {
      v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v31 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
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
      v32 = sub_1B52CAC(v23, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v33 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v23, *(_QWORD *)(v32 + 8));
    v35 = v33;
    if ( !v33 )
      sub_1B00F28(0LL, v34);
    if ( BattleBuffData_BuffData__CheckCond(v33, this, ActInfo, checkIndividualities, v24, 0LL) )
      goto LABEL_31;
  }
  v35 = 0LL;
LABEL_31:
  v36 = *(_QWORD *)v23;
  v37 = *(unsigned __int16 *)(*(_QWORD *)v23 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v23 + 302LL) )
  {
    v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_35;
    }
    v39 = v36 + 16LL * *v38 + 312;
  }
  else
  {
LABEL_35:
    v39 = sub_1B52CAC(v23, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v39)(v23, *(_QWORD *)(v39 + 8));
  return v35;
}


// local variable allocation has failed, the output may be wrong!
BattleBuffData_BuffData_array *__fastcall BattleBuffData__GetFixBuffArray(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        bool isRec,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  System_Func_object__bool__o *v11; // x23
  const MethodInfo *v12; // x6
  System_Collections_Generic_IEnumerable_TSource__o *BuffList_41032464; // x0

  if ( (byte_48E4934 & 1) == 0 )
  {
    sub_1B00CCC(&Method_BattleBuffData_IsFixBuff__, *(_QWORD *)&act);
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___, v9);
    sub_1B00CCC(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v10);
    byte_48E4934 = 1;
  }
  v11 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(v11, (Il2CppObject *)this, Method_BattleBuffData_IsFixBuff__, 0LL);
  BuffList_41032464 = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__getBuffList_41032464(
                                                                             this,
                                                                             act,
                                                                             checkIndividualities,
                                                                             isRec,
                                                                             0,
                                                                             (System_Func_BattleBuffData_BuffData__bool__o *)v11,
                                                                             v12);
  return (BattleBuffData_BuffData_array *)System_Linq_Enumerable__ToArray_object_(
                                            BuffList_41032464,
                                            (const MethodInfo_2D976BC *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__GetFixedBuffArray(
        BattleBuffData_o *this,
        BuffList_TYPE_array *types,
        System_Int32_array *targetIndividualities,
        BattleBuffData_BuffData_array *checklist,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_array *BuffList_41011768; // x1
  const MethodInfo *v7; // x2

  BuffList_41011768 = BattleBuffData__getBuffList_41011768(this, types, targetIndividualities, checklist, method);
  return BattleBuffData__CheckAndGetFixedBuffArray(this, BuffList_41011768, v7);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleBuffData__GetGrantBuffTypeArray(
        BattleBuffData_o *this,
        bool isIncludePassive,
        bool isIncludeActive,
        const MethodInfo *method)
{
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
  __int64 v18; // x24
  System_Collections_Generic_List_int__o *v19; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_Generic_List_int__o *v23; // x22
  System_Collections_Generic_List_int__o **v24; // x21
  int32_t v25; // w2
  int32_t v26; // w3
  System_Action_object__o *v27; // x22
  const MethodInfo *v28; // x2
  System_Collections_Generic_IEnumerable_TSource__o *PassiveList; // x23
  BattleBuffData___c_c *v30; // x8
  System_Func_object__bool__o *_9__118_1; // x24
  Il2CppObject *v32; // x25
  struct BattleBuffData___c_StaticFields *static_fields; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  System_Collections_Generic_IEnumerable_T__o *v36; // x0
  System_Collections_Generic_IEnumerable_TSource__o *ActiveList; // x19
  BattleBuffData___c_c *v38; // x8
  System_Func_object__bool__o *_9__118_2; // x20
  Il2CppObject *v40; // x23
  struct BattleBuffData___c_StaticFields *v41; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  System_Collections_Generic_IEnumerable_T__o *v44; // x0

  if ( (byte_48E4908 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_BattleBuffData_BuffData__TypeInfo, isIncludePassive);
    sub_1B00CCC(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v7);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, v8);
    sub_1B00CCC(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__ToArray__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor__, v11);
    sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v12);
    sub_1B00CCC(&Method_BattleBuffData___c__GetGrantBuffTypeArray_b__118_1__, v13);
    sub_1B00CCC(&Method_BattleBuffData___c__GetGrantBuffTypeArray_b__118_2__, v14);
    sub_1B00CCC(&Method_BattleBuffData___c__DisplayClass118_0__GetGrantBuffTypeArray_b__0__, v15);
    sub_1B00CCC(&BattleBuffData___c__DisplayClass118_0_TypeInfo, v16);
    sub_1B00CCC(&BattleBuffData___c_TypeInfo, v17);
    byte_48E4908 = 1;
  }
  v18 = sub_1B00F18(BattleBuffData___c__DisplayClass118_0_TypeInfo);
  BattleBuffData___c__DisplayClass118_0___ctor((BattleBuffData___c__DisplayClass118_0_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_22;
  *(_QWORD *)(v18 + 24) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v18 + 24), (int32_t)this, v21, v22);
  v23 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
  *(_QWORD *)(v18 + 16) = v23;
  v24 = (System_Collections_Generic_List_int__o **)(v18 + 16);
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v18 + 16), (int32_t)v23, v25, v26);
  v27 = (System_Action_object__o *)sub_1B00F18(System_Action_BattleBuffData_BuffData__TypeInfo);
  System_Action_object____ctor(
    v27,
    (Il2CppObject *)v18,
    Method_BattleBuffData___c__DisplayClass118_0__GetGrantBuffTypeArray_b__0__,
    0LL);
  if ( isIncludePassive )
  {
    PassiveList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__getPassiveList(this, 1, v28);
    v30 = BattleBuffData___c_TypeInfo;
    if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      v30 = BattleBuffData___c_TypeInfo;
    }
    _9__118_1 = (System_Func_object__bool__o *)v30->static_fields->__9__118_1;
    if ( !_9__118_1 )
    {
      if ( !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30);
        v30 = BattleBuffData___c_TypeInfo;
      }
      v32 = (Il2CppObject *)v30->static_fields->__9;
      _9__118_1 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__118_1, v32, Method_BattleBuffData___c__GetGrantBuffTypeArray_b__118_1__, 0LL);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
      static_fields->__9__118_1 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__118_1;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__118_1, (int32_t)_9__118_1, v34, v35);
    }
    v36 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                           PassiveList,
                                                           (System_Func_TSource__bool__o *)_9__118_1,
                                                           (const MethodInfo_2D9D054 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    BasicHelper__ForEach_object_(
      v36,
      (System_Action_T__o *)v27,
      (const MethodInfo_2D50464 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
  }
  if ( isIncludeActive )
  {
    ActiveList = (System_Collections_Generic_IEnumerable_TSource__o *)BattleBuffData__getActiveList(this, 1, v28);
    v38 = BattleBuffData___c_TypeInfo;
    if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      v38 = BattleBuffData___c_TypeInfo;
    }
    _9__118_2 = (System_Func_object__bool__o *)v38->static_fields->__9__118_2;
    if ( !_9__118_2 )
    {
      if ( !v38->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v38);
        v38 = BattleBuffData___c_TypeInfo;
      }
      v40 = (Il2CppObject *)v38->static_fields->__9;
      _9__118_2 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__118_2, v40, Method_BattleBuffData___c__GetGrantBuffTypeArray_b__118_2__, 0LL);
      v41 = BattleBuffData___c_TypeInfo->static_fields;
      v41->__9__118_2 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__118_2;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v41->__9__118_2, (int32_t)_9__118_2, v42, v43);
    }
    v44 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                           ActiveList,
                                                           (System_Func_TSource__bool__o *)_9__118_2,
                                                           (const MethodInfo_2D9D054 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    BasicHelper__ForEach_object_(
      v44,
      (System_Action_T__o *)v27,
      (const MethodInfo_2D50464 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
  }
  v19 = *v24;
  if ( !*v24 )
LABEL_22:
    sub_1B00F28(v19, v20);
  return System_Collections_Generic_List_int___ToArray(
           v19,
           (const MethodInfo_33A6464 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Int32_array *__fastcall BattleBuffData__GetIgnoreAuraBuffIds(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Int32_array *result; // x0
  ServantStatusBattleListViewItem_o *p_ignoreAuraBuffIds; // x19
  System_Int32_array *ignoreAuraBuffIds; // t1
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  System_Int32_array *ValueArray; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_48E4942 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_ConstantStrMaster___, method);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    sub_1B00CCC(&StringLiteral_7263/*"IGNORE_AURA_BUFF"*/, v4);
    byte_48E4942 = 1;
  }
  ignoreAuraBuffIds = this->fields.ignoreAuraBuffIds;
  p_ignoreAuraBuffIds = (ServantStatusBattleListViewItem_o *)&this->fields.ignoreAuraBuffIds;
  result = ignoreAuraBuffIds;
  if ( !ignoreAuraBuffIds )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ConstantStrMaster___)) == 0LL )
    {
      sub_1B00F28(Instance, v9);
    }
    ValueArray = ConstantStrMaster__GetValueArray(
                   (ConstantStrMaster_o *)Instance,
                   (System_String_o *)StringLiteral_7263/*"IGNORE_AURA_BUFF"*/,
                   0LL,
                   0LL);
    p_ignoreAuraBuffIds->klass = (ServantStatusBattleListViewItem_c *)ValueArray;
    sub_1B00C70(p_ignoreAuraBuffIds, (int32_t)ValueArray, v11, v12);
    return (System_Int32_array *)p_ignoreAuraBuffIds->klass;
  }
  return result;
}


System_Int32_array *__fastcall BattleBuffData__GetInvalidSacrificeIndividualities(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  ConstantStrMaster_o *constantStrMaster; // x0
  Il2CppObject *Master_object; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x1

  if ( (byte_48E4964 & 1) == 0 )
  {
    sub_1B00CCC(&BattleBuffData_TypeInfo, v1);
    sub_1B00CCC(&Method_DataManager_GetMaster_ConstantStrMaster___, v2);
    sub_1B00CCC(&DataManager_TypeInfo, v3);
    sub_1B00CCC(&StringLiteral_7309/*"INVALID_SACRIFICE_INDIV"*/, v4);
    byte_48E4964 = 1;
  }
  constantStrMaster = BattleBuffData_TypeInfo->static_fields->constantStrMaster;
  if ( !constantStrMaster )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_ConstantStrMaster___);
    BattleBuffData_TypeInfo->static_fields->constantStrMaster = (struct ConstantStrMaster_o *)Master_object;
    sub_1B00C70(
      (ServantStatusBattleListViewItem_o *)BattleBuffData_TypeInfo->static_fields,
      (int32_t)Master_object,
      v7,
      v8);
    constantStrMaster = BattleBuffData_TypeInfo->static_fields->constantStrMaster;
    if ( !constantStrMaster )
      sub_1B00F28(0LL, v9);
  }
  return ConstantStrMaster__GetValueArray(constantStrMaster, (System_String_o *)StringLiteral_7309/*"INVALID_SACRIFICE_INDIV"*/, 0LL, 0LL);
}


int32_t __fastcall BattleBuffData__GetMotionChange(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x20
  const MethodInfo *v10; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  _BOOL8 v15; // x0
  __int64 v16; // x1
  int32_t klass; // w19
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_48E494E & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v7);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v8);
    byte_48E494E = 1;
  }
  memset(&v19, 0, sizeof(v19));
  v9 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v10);
  if ( !v9 )
    sub_1B00F28(PassiveList, v12);
  System_Collections_Generic_List_object___AddRange(
    v9,
    PassiveList,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v13);
  System_Collections_Generic_List_object___AddRange(
    v9,
    ActiveList,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    v9,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( 1 )
  {
    v15 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v19,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v15 )
      break;
    if ( !v19.fields._current )
      sub_1B00F28(v15, v16);
    klass = (int32_t)v19.fields._current[11].klass;
    if ( klass )
      goto LABEL_10;
  }
  klass = 0;
LABEL_10:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v19,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  return klass;
}


System_Int32_array *__fastcall BattleBuffData__GetNotTargetSkillIdArray(
        BattleBuffData_o *this,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
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
  BuffList_ActInfo_o *ActInfo; // x22
  System_Collections_Generic_List_object__o *v17; // x23
  const MethodInfo *v18; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  System_Collections_Generic_List_int__o *v23; // x21
  const MethodInfo *v24; // x5
  Il2CppObject *current; // x23
  _BOOL8 v26; // x0
  __int64 v27; // x1
  System_Collections_Generic_IEnumerable_T__o *klass; // x1
  System_Collections_Generic_List_Enumerator_object__o v30; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+20h] [xbp-80h] BYREF
  int32_t plusMinus; // [xsp+3Ch] [xbp-64h] BYREF

  if ( (byte_48E492E & 1) == 0 )
  {
    sub_1B00CCC(&BuffList_TypeInfo, checkIndividualities);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__AddRange__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v13);
    sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v14);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v15);
    byte_48E492E = 1;
  }
  memset(&v31, 0, sizeof(v31));
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(103, 0LL, 0LL);
  plusMinus = 0;
  v17 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v18);
  if ( !v17 )
    goto LABEL_17;
  System_Collections_Generic_List_object___AddRange(
    v17,
    ActiveList,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v21);
  System_Collections_Generic_List_object___AddRange(
    v17,
    PassiveList,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v23 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v23,
    (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v30,
    v17,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v31 = v30;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v31,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    current = v31.fields._current;
    v26 = BattleBuffData__checkIndiviuality(
            this,
            ActInfo,
            (BattleBuffData_BuffData_o *)v31.fields._current,
            checkIndividualities,
            &plusMinus,
            v24);
    if ( v26 )
    {
      if ( !current )
        sub_1B00F28(v26, v27);
      klass = (System_Collections_Generic_IEnumerable_T__o *)current[19].klass;
      if ( klass )
      {
        if ( !v23 )
          sub_1B00F28(v26, klass);
        System_Collections_Generic_List_int___AddRange(
          v23,
          klass,
          (const MethodInfo_33A4BB8 *)Method_System_Collections_Generic_List_int__AddRange__);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v31,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( !v23 )
LABEL_17:
    sub_1B00F28(ActiveList, v20);
  return System_Collections_Generic_List_int___ToArray(
           v23,
           (const MethodInfo_33A6464 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall BattleBuffData__GetParamAddCount(
        System_Int32_array *checkIndividuality,
        System_Int32_array *paramAddIndividuality,
        const MethodInfo *method)
{
  int32_t result; // w0
  __int64 v5; // x11
  __int64 v6; // x10
  __int64 v7; // x9
  int32_t *v8; // x8
  __int64 v9; // x13
  int32_t *v10; // x14
  int v11; // t1

  result = 0;
  if ( checkIndividuality && paramAddIndividuality )
  {
    v5 = *(_QWORD *)&checkIndividuality->max_length;
    if ( v5 )
    {
      v6 = *(_QWORD *)&paramAddIndividuality->max_length;
      result = 0;
      if ( v6 && (int)v6 >= 1 )
      {
        v7 = 0LL;
        result = 0;
        v8 = &checkIndividuality->m_Items[1];
        do
        {
          if ( (int)v5 >= 1 )
          {
            v9 = (int)v5;
            v10 = v8;
            do
            {
              v11 = *v10++;
              if ( v11 == paramAddIndividuality->m_Items[v7 + 1] )
                ++result;
              --v9;
            }
            while ( v9 );
          }
          ++v7;
        }
        while ( v7 != (unsigned int)*(_QWORD *)&paramAddIndividuality->max_length );
      }
    }
    else
    {
      return 0;
    }
  }
  return result;
}


int32_t __fastcall BattleBuffData__GetShiftGuts(
        BattleBuffData_o *this,
        BattleServantData_o *servantData,
        BattleBuffData_CheckIndividualitiesData_array *checkIndividualitiesDataArray,
        BuffEntity_o **buffEntity,
        const MethodInfo *method)
{
  __int64 v9; // x1
  BattleBuffData_BuffData_o *ShiftGutsBuff; // x0
  const MethodInfo *v11; // x1
  BattleBuffData_BuffData_o *v12; // x20
  BuffMaster_o *buffMst; // x0
  __int64 v14; // x1
  Il2CppObject *Entity; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t type; // w21

  if ( (byte_48E490C & 1) == 0 )
  {
    sub_1B00CCC(&BuffList_TypeInfo, servantData);
    sub_1B00CCC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v9);
    byte_48E490C = 1;
  }
  ShiftGutsBuff = BattleBuffData__GetShiftGutsBuff(
                    this,
                    servantData,
                    checkIndividualitiesDataArray,
                    (const MethodInfo *)buffEntity);
  if ( ShiftGutsBuff )
  {
    v12 = ShiftGutsBuff;
    buffMst = BattleBuffData__get_buffMst(this, v11);
    if ( !buffMst )
      goto LABEL_13;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)buffMst,
               v12->fields.buffId,
               (const MethodInfo_2FE6A4C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    *buffEntity = (BuffEntity_o *)Entity;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)buffEntity, (int32_t)Entity, v16, v17);
    if ( !*buffEntity )
      goto LABEL_13;
    type = (*buffEntity)->fields.type;
    if ( !BuffList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    buffMst = (BuffMaster_o *)BuffList__CheckType(173, type, 0LL);
    if ( ((unsigned __int8)buffMst & 1) == 0 )
    {
      LODWORD(ShiftGutsBuff) = v12->fields.param;
      return (int)ShiftGutsBuff;
    }
    if ( !servantData )
LABEL_13:
      sub_1B00F28(buffMst, v14);
    LODWORD(ShiftGutsBuff) = v12->fields.param * servantData->fields.maxhp / 1000;
  }
  return (int)ShiftGutsBuff;
}


BattleBuffData_BuffData_o *__fastcall BattleBuffData__GetShiftGutsBuff(
        BattleBuffData_o *this,
        BattleServantData_o *servantData,
        BattleBuffData_CheckIndividualitiesData_array *checkIndividualitiesDataArray,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6
  BattleBuffData_o *v6; // x20
  const MethodInfo *v7; // x5
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x8
  BattleBuffData_o *v9; // x21
  unsigned __int64 v10; // x23
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o **p_activeList; // x24
  BattleBuffData_BuffData_o *v12; // x22

  if ( !checkIndividualitiesDataArray )
    goto LABEL_12;
  if ( !checkIndividualitiesDataArray->max_length )
    goto LABEL_11;
  v6 = this;
  this = (BattleBuffData_o *)BattleBuffData__getBuffList_41032464(
                               this,
                               111,
                               checkIndividualitiesDataArray->m_Items[0],
                               1,
                               1,
                               0LL,
                               v4);
  if ( !this )
LABEL_12:
    sub_1B00F28(this, servantData);
  passiveList = this->fields.passiveList;
  v9 = this;
  if ( (int)passiveList >= 1 )
  {
    v10 = 0LL;
    p_activeList = &this->fields.activeList;
    while ( v10 < (unsigned int)passiveList )
    {
      v12 = (BattleBuffData_BuffData_o *)p_activeList[v10];
      this = (BattleBuffData_o *)BattleBuffData__checkGutsBuffSuccessful(
                                   v6,
                                   v12,
                                   111,
                                   checkIndividualitiesDataArray,
                                   0,
                                   v7);
      if ( ((unsigned __int8)this & 1) != 0 )
        return v12;
      LODWORD(passiveList) = v9->fields.passiveList;
      if ( (__int64)++v10 >= (int)passiveList )
        return 0LL;
    }
LABEL_11:
    sub_1B00F30(this, servantData);
  }
  return 0LL;
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__GetSkillTypeBuff(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *buffList,
        System_Int32_array *skillTypes,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  System_Collections_Generic_List_int__o *v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  System_Predicate_object__o *v17; // x20

  if ( (byte_48E4947 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, buffList);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor___74529920, v6);
    sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_1B00CCC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v8);
    sub_1B00CCC(&Method_BattleBuffData___c__DisplayClass215_0__GetSkillTypeBuff_b__0__, v9);
    sub_1B00CCC(&BattleBuffData___c__DisplayClass215_0_TypeInfo, v10);
    byte_48E4947 = 1;
  }
  v11 = sub_1B00F18(BattleBuffData___c__DisplayClass215_0_TypeInfo);
  BattleBuffData___c__DisplayClass215_0___ctor((BattleBuffData___c__DisplayClass215_0_o *)v11, 0LL);
  v12 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_54149760(
    v12,
    (System_Collections_Generic_IEnumerable_T__o *)skillTypes,
    (const MethodInfo_33A4280 *)Method_System_Collections_Generic_List_int___ctor___74529920);
  if ( !v11
    || (*(_QWORD *)(v11 + 16) = v12,
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)v12, v15, v16),
        v17 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo),
        System_Predicate_object____ctor(
          v17,
          (Il2CppObject *)v11,
          Method_BattleBuffData___c__DisplayClass215_0__GetSkillTypeBuff_b__0__,
          0LL),
        !buffList) )
  {
    sub_1B00F28(v13, v14);
  }
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)System_Collections_Generic_List_object___FindAll(
                                                                         (System_Collections_Generic_List_object__o *)buffList,
                                                                         (System_Predicate_T__o *)v17,
                                                                         (const MethodInfo_33C20E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__GetSkillTypePassiveBuff(
        BattleBuffData_o *this,
        System_Int32_array *skillTypes,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  return BattleBuffData__GetSkillTypeBuff(this, this->fields.passiveList, skillTypes, v3);
}


int32_t __fastcall BattleBuffData__GetTotalParamAddValue(
        BattleBuffData_BuffData_o *buffData,
        BattleData_o *battleData,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        BattleBuffData_ParamAdd_o *paramAdd,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_o *v8; // x22
  const MethodInfo *v9; // x2
  BattleBuffData_CheckIndividualitiesData_Fields *p_selfIndividualityCanRelease_k__BackingField; // x8
  int32_t ParamAddCount; // w23
  bool v12; // w0
  const MethodInfo *v13; // x2
  __int64 v14; // x8
  int v15; // w21
  System_Int32_array *QuestIndividualities; // x0
  const MethodInfo *v17; // x2
  int32_t v18; // w0
  int32_t maxValue; // w8
  int32_t maxCount; // w9
  int32_t result; // w0

  if ( !buffData )
    goto LABEL_20;
  v8 = buffData;
  buffData = (BattleBuffData_BuffData_o *)BattleBuffData_BuffData__checkState(buffData, 0x100000, 0LL);
  if ( !checkIndividualities )
    goto LABEL_20;
  if ( ((unsigned __int8)buffData & 1) != 0 )
  {
    if ( !paramAdd )
      goto LABEL_20;
    p_selfIndividualityCanRelease_k__BackingField = (BattleBuffData_CheckIndividualitiesData_Fields *)&checkIndividualities->fields._selfIndividualityCanRelease_k__BackingField;
  }
  else
  {
    if ( !paramAdd )
      goto LABEL_20;
    p_selfIndividualityCanRelease_k__BackingField = &checkIndividualities->fields;
  }
  ParamAddCount = BattleBuffData__GetParamAddCount(
                    p_selfIndividualityCanRelease_k__BackingField->_selfIndividuality_k__BackingField,
                    paramAdd->fields.selfIndv,
                    v9);
  v12 = BattleBuffData_BuffData__checkState(v8, 0x100000, 0LL);
  v14 = 24LL;
  if ( v12 )
    v14 = 40LL;
  buffData = (BattleBuffData_BuffData_o *)BattleBuffData__GetParamAddCount(
                                            *(System_Int32_array **)((char *)&checkIndividualities->klass + v14),
                                            paramAdd->fields.opIndv,
                                            v13);
  if ( !battleData )
LABEL_20:
    sub_1B00F28(buffData, battleData);
  v15 = (_DWORD)buffData + ParamAddCount;
  QuestIndividualities = BattleData__getQuestIndividualities(battleData, 0LL);
  v18 = BattleBuffData__GetParamAddCount(QuestIndividualities, paramAdd->fields.fieldIndv, v17);
  maxValue = paramAdd->fields.maxValue;
  maxCount = paramAdd->fields.maxCount;
  if ( maxCount > v15 + v18 || maxCount < 1 )
    maxCount = v15 + v18;
  result = maxCount * paramAdd->fields.value;
  if ( maxValue >= 1 && maxValue <= result )
    return paramAdd->fields.maxValue;
  return result;
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__GetUpdateWaitIntervalBuffArray(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BattleBuffData_BuffData_array *v5; // x20
  System_Collections_Generic_List_object__o *updateWaitIntervalBuffList; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v7; // x8
  int32_t size; // w2
  int v9; // w9

  if ( (byte_48E48C5 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v3);
    byte_48E48C5 = 1;
  }
  v5 = 0LL;
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.updateWaitIntervalBuffList, 0LL) )
  {
    updateWaitIntervalBuffList = (System_Collections_Generic_List_object__o *)this->fields.updateWaitIntervalBuffList;
    if ( !updateWaitIntervalBuffList
      || (updateWaitIntervalBuffList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                                      updateWaitIntervalBuffList,
                                                                                      (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__),
          (v7 = this->fields.updateWaitIntervalBuffList) == 0LL) )
    {
      sub_1B00F28(updateWaitIntervalBuffList, v4);
    }
    size = v7->fields._size;
    v5 = (BattleBuffData_BuffData_array *)updateWaitIntervalBuffList;
    v9 = v7->fields._version + 1;
    v7->fields._size = 0;
    v7->fields._version = v9;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)v7->fields._items, 0, size, 0LL);
  }
  return v5;
}


void __fastcall BattleBuffData__Initialize(BattleBuffData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *v2; // x19
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x8
  int32_t size; // w2
  int v5; // w9
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x8
  int32_t v7; // w2
  int v8; // w9
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *conditionalAuraBuff; // x8
  int32_t v10; // w2
  int v11; // w9

  v2 = this;
  if ( (byte_48E48CA & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_1B00CCC(
                                 &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__,
                                 method);
    byte_48E48CA = 1;
  }
  passiveList = v2->fields.passiveList;
  if ( !passiveList )
    goto LABEL_13;
  size = passiveList->fields._size;
  v5 = passiveList->fields._version + 1;
  passiveList->fields._size = 0;
  passiveList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)passiveList->fields._items, 0, size, 0LL);
  activeList = v2->fields.activeList;
  if ( !activeList )
    goto LABEL_13;
  v7 = activeList->fields._size;
  v8 = activeList->fields._version + 1;
  activeList->fields._size = 0;
  activeList->fields._version = v8;
  if ( v7 >= 1 )
    System_Array__Clear((System_Array_o *)activeList->fields._items, 0, v7, 0LL);
  conditionalAuraBuff = v2->fields.conditionalAuraBuff;
  if ( !conditionalAuraBuff )
LABEL_13:
    sub_1B00F28(this, method);
  v10 = conditionalAuraBuff->fields._size;
  v11 = conditionalAuraBuff->fields._version + 1;
  conditionalAuraBuff->fields._size = 0;
  conditionalAuraBuff->fields._version = v11;
  if ( v10 >= 1 )
    System_Array__Clear((System_Array_o *)conditionalAuraBuff->fields._items, 0, v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleBuffData__InitializeShift(
        BattleBuffData_o *this,
        int32_t actorId,
        System_Int32_array *buffindivs,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x20
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x22
  int32_t v17; // w2
  int32_t v18; // w3
  System_Collections_Generic_List_object__o *passiveList; // x21
  System_Predicate_object__o *v20; // x23
  System_Collections_Generic_List_object__o *activeList; // x19
  System_Predicate_object__o *v22; // x21

  if ( (byte_48E493A & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__, *(_QWORD *)&actorId);
    sub_1B00CCC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v7);
    sub_1B00CCC(&Method_BattleBuffData___c__DisplayClass197_0__InitializeShift_b__0__, v8);
    sub_1B00CCC(&Method_BattleBuffData___c__DisplayClass197_0__InitializeShift_b__1__, v9);
    sub_1B00CCC(&BattleBuffData___c__DisplayClass197_0_TypeInfo, v10);
    byte_48E493A = 1;
  }
  v11 = sub_1B00F18(BattleBuffData___c__DisplayClass197_0_TypeInfo);
  BattleBuffData___c__DisplayClass197_0___ctor((BattleBuffData___c__DisplayClass197_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_10;
  *(_DWORD *)(v11 + 16) = actorId;
  *(_QWORD *)(v11 + 24) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 32) = buffindivs;
  v16 = v11 + 32;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v11 + 32), (int32_t)buffindivs, v17, v18);
  passiveList = (System_Collections_Generic_List_object__o *)this->fields.passiveList;
  v20 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_object____ctor(
    v20,
    (Il2CppObject *)v11,
    Method_BattleBuffData___c__DisplayClass197_0__InitializeShift_b__0__,
    0LL);
  if ( !passiveList )
    goto LABEL_10;
  v12 = System_Collections_Generic_List_object___RemoveAll(
          passiveList,
          (System_Predicate_T__o *)v20,
          (const MethodInfo_33C302C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  if ( !*(_QWORD *)v16 )
    goto LABEL_10;
  if ( *(_QWORD *)(*(_QWORD *)v16 + 24LL) )
  {
    activeList = (System_Collections_Generic_List_object__o *)this->fields.activeList;
    v22 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_object____ctor(
      v22,
      (Il2CppObject *)v11,
      Method_BattleBuffData___c__DisplayClass197_0__InitializeShift_b__1__,
      0LL);
    if ( activeList )
    {
      System_Collections_Generic_List_object___RemoveAll(
        activeList,
        (System_Predicate_T__o *)v22,
        (const MethodInfo_33C302C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
      return;
    }
LABEL_10:
    sub_1B00F28(v12, v13);
  }
}


bool __fastcall BattleBuffData__IsCheckActState(BattleBuffData_o *this, int32_t state, const MethodInfo *method)
{
  bool result; // w0

  result = 1;
  if ( state >= 0x4000 )
  {
    if ( state == 0x4000 || state == 0x20000 || state == 0x200000 )
      return result;
    return 0;
  }
  if ( state != 1 && state != 16 )
    return 0;
  return result;
}


bool __fastcall BattleBuffData__IsCounterFunc(
        BattleBuffData_o *this,
        BattleServantData_o *selfSvt,
        BattleServantData_o *targetSvt,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  BattleBuffData_BuffData_array *CounterFuncBuffDataList; // x0
  __int64 v6; // x1

  CounterFuncBuffDataList = BattleBuffData__GetCounterFuncBuffDataList(this, selfSvt, targetSvt, 1, v4);
  if ( !CounterFuncBuffDataList )
    sub_1B00F28(0LL, v6);
  return CounterFuncBuffDataList->max_length != 0;
}


bool __fastcall BattleBuffData__IsFixBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  return !BattleBuffData__IsUnfix(this, buff, method);
}


bool __fastcall BattleBuffData__IsGutsKeepUsableByFollowingAttackIndividuality(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buffData,
        int32_t actionType,
        BattleBuffData_CheckIndividualitiesData_array *checkIndividualitiesDataArray,
        const MethodInfo *method)
{
  BattleBuffData_o *v8; // x21
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  BuffList_ActInfo_o *ActInfo; // x22
  BattleBuffData_c *klass; // x8
  BattleBuffData_o *v16; // x19
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 v19; // x0
  char v20; // w21
  __int64 v21; // x1
  __int64 v22; // x19
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  char v27; // w23
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  BattleBuffData_CheckIndividualitiesData_o *v32; // x3
  const MethodInfo *v33; // x5
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  int32_t plusMinus; // [xsp+Ch] [xbp-44h] BYREF

  v8 = this;
  if ( (byte_48E490A & 1) == 0 )
  {
    sub_1B00CCC(&BuffList_TypeInfo, buffData);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Skip_BattleBuffData_CheckIndividualitiesData___, v9);
    sub_1B00CCC(&System_IDisposable_TypeInfo, v10);
    sub_1B00CCC(&System_Collections_Generic_IEnumerable_BattleBuffData_CheckIndividualitiesData__TypeInfo, v11);
    sub_1B00CCC(&System_Collections_Generic_IEnumerator_BattleBuffData_CheckIndividualitiesData__TypeInfo, v12);
    this = (BattleBuffData_o *)sub_1B00CCC(&System_Collections_IEnumerator_TypeInfo, v13);
    byte_48E490A = 1;
  }
  plusMinus = 0;
  if ( !buffData )
    goto LABEL_39;
  this = (BattleBuffData_o *)BattleBuffData_BuffData__get_Entity(buffData, 0LL);
  if ( !this )
    goto LABEL_39;
  if ( !BuffEntity__IsCheckIndividualityForEachDamage((BuffEntity_o *)this, 0LL) )
  {
    v20 = 1;
    return v20 & 1;
  }
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(actionType, 0LL, 0LL);
  this = (BattleBuffData_o *)System_Linq_Enumerable__Skip_object_(
                               (System_Collections_Generic_IEnumerable_TSource__o *)checkIndividualitiesDataArray,
                               1,
                               (const MethodInfo_2D96124 *)Method_System_Linq_Enumerable_Skip_BattleBuffData_CheckIndividualitiesData___);
  if ( !this )
LABEL_39:
    sub_1B00F28(this, buffData);
  klass = this->klass;
  v16 = this;
  v17 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_CheckIndividualitiesData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_CheckIndividualitiesData__TypeInfo )
    {
      --v17;
      p_offset += 4;
      if ( !v17 )
        goto LABEL_13;
    }
    v19 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_13:
    v19 = sub_1B52CAC(
            this,
            System_Collections_Generic_IEnumerable_BattleBuffData_CheckIndividualitiesData__TypeInfo,
            0LL);
  }
  v22 = (*(__int64 (__fastcall **)(BattleBuffData_o *, _QWORD))v19)(v16, *(_QWORD *)(v19 + 8));
  if ( !v22 )
    sub_1B00F28(0LL, v21);
  do
  {
    v23 = *(_QWORD *)v22;
    v24 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
    {
      v25 = (int *)(*(_QWORD *)(v23 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v25 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v24;
        v25 += 4;
        if ( !v24 )
          goto LABEL_21;
      }
      v26 = v23 + 16LL * *v25 + 312;
    }
    else
    {
LABEL_21:
      v26 = sub_1B52CAC(v22, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v27 = (*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v22, *(_QWORD *)(v26 + 8));
    if ( (v27 & 1) == 0 )
      break;
    v28 = *(_QWORD *)v22;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_CheckIndividualitiesData__c **)v30 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_CheckIndividualitiesData__TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_28;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_28:
      v31 = sub_1B52CAC(
              v22,
              System_Collections_Generic_IEnumerator_BattleBuffData_CheckIndividualitiesData__TypeInfo,
              0LL);
    }
    v32 = (BattleBuffData_CheckIndividualitiesData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v31)(
                                                         v22,
                                                         *(_QWORD *)(v31 + 8));
  }
  while ( BattleBuffData__checkIndiviuality(v8, ActInfo, buffData, v32, &plusMinus, v33) );
  v20 = v27 ^ 1;
  v34 = *(_QWORD *)v22;
  v35 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
  {
    v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v36 - 1) != System_IDisposable_TypeInfo )
    {
      --v35;
      v36 += 4;
      if ( !v35 )
        goto LABEL_35;
    }
    v37 = v34 + 16LL * *v36 + 312;
  }
  else
  {
LABEL_35:
    v37 = sub_1B52CAC(v22, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v37)(v22, *(_QWORD *)(v37 + 8));
  return v20 & 1;
}


bool __fastcall BattleBuffData__IsIgnoreIndividuality(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1B00F28(this, 0LL);
  return BattleBuffData_BuffData__checkState(buff, 0x10000, 0LL);
}


bool __fastcall BattleBuffData__IsPermanentSleep(
        BattleBuffData_o *this,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x21
  const MethodInfo *v13; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  BuffList_ActInfo_o *ActInfo; // x22
  _BOOL8 v19; // x0
  __int64 v20; // x1
  bool v21; // w21
  Il2CppObject *current; // x23
  const MethodInfo *v23; // x5
  int v24; // w19
  int32_t plusMinus; // [xsp+4h] [xbp-5Ch] BYREF
  System_Collections_Generic_List_Enumerator_object__o v27; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_48E4954 & 1) == 0 )
  {
    sub_1B00CCC(&BuffList_TypeInfo, checkIndividualities);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v10);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v11);
    byte_48E4954 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  plusMinus = 0;
  v12 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v13);
  if ( !v12 )
    sub_1B00F28(PassiveList, v15);
  System_Collections_Generic_List_object___AddRange(
    v12,
    PassiveList,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v16);
  System_Collections_Generic_List_object___AddRange(
    v12,
    ActiveList,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(39, 0LL, 0LL);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v27,
    v12,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v27,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    v21 = v19;
    if ( !v19 )
      break;
    current = v27.fields._current;
    if ( !v27.fields._current )
      sub_1B00F28(v19, v20);
    if ( !BYTE1(v27.fields._current[24].klass)
      && BattleBuffData_BuffData__IsPermanentSleep((BattleBuffData_BuffData_o *)v27.fields._current, 0LL)
      && BattleBuffData__checkIndiviuality(
           this,
           ActInfo,
           (BattleBuffData_BuffData_o *)current,
           checkIndividualities,
           &plusMinus,
           v23) )
    {
      v24 = 4;
      goto LABEL_14;
    }
  }
  v24 = 5;
LABEL_14:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v27,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  return v21 && v24 == 4;
}


bool __fastcall BattleBuffData__IsShiftGuts(
        BattleBuffData_o *this,
        BattleServantData_o *servantData,
        BattleBuffData_CheckIndividualitiesData_array *checkIndividualitiesDataArray,
        const MethodInfo *method)
{
  return BattleBuffData__GetShiftGutsBuff(this, servantData, checkIndividualitiesDataArray, method) != 0LL;
}


bool __fastcall BattleBuffData__IsUnfix(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_List_int__o *unfixedBuffList; // x0
  int32_t v7; // w21
  int32_t size; // w23

  if ( (byte_48E48D6 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__get_Count__, buff);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    byte_48E48D6 = 1;
  }
  unfixedBuffList = this->fields.unfixedBuffList;
  if ( !unfixedBuffList )
LABEL_9:
    sub_1B00F28(unfixedBuffList, buff);
  v7 = 0;
  while ( 1 )
  {
    size = unfixedBuffList->fields._size;
    if ( v7 >= size )
      break;
    unfixedBuffList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___get_Item(
                                                                  unfixedBuffList,
                                                                  v7,
                                                                  (const MethodInfo_33A46BC *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !buff )
      goto LABEL_9;
    if ( (_DWORD)unfixedBuffList == buff->fields.addOrder )
      break;
    unfixedBuffList = this->fields.unfixedBuffList;
    ++v7;
    if ( !unfixedBuffList )
      goto LABEL_9;
  }
  return v7 < size;
}


bool __fastcall BattleBuffData__IsWarBoardNotAttacked(BattleBuffData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *CurrentAllBaffList; // x0
  __int64 v8; // x1
  _BOOL8 v9; // x0
  __int64 v10; // x1
  bool v11; // w19
  int v12; // w21
  System_Collections_Generic_List_Enumerator_object__o v14; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_48E4955 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v6);
    byte_48E4955 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  CurrentAllBaffList = (System_Collections_Generic_List_object__o *)BattleBuffData__getCurrentAllBaffList(this, 1, v2);
  if ( !CurrentAllBaffList )
    sub_1B00F28(0LL, v8);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v14,
    CurrentAllBaffList,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v14,
           (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    v11 = v9;
    if ( !v9 )
      break;
    if ( !v14.fields._current )
      sub_1B00F28(v9, v10);
    if ( !BYTE1(v14.fields._current[24].klass)
      && BattleBuffData_BuffData__IsWarBoardNotAttacked((BattleBuffData_BuffData_o *)v14.fields._current, 0LL) )
    {
      v12 = 4;
      goto LABEL_11;
    }
  }
  v12 = 5;
LABEL_11:
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v14,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  return v11 && v12 == 4;
}


RemovedBuffInfo_o *__fastcall BattleBuffData__MakeRemoveBuffInfo(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *endList,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *removedLinkedBuffs,
        const MethodInfo *method)
{
  RemovedBuffInfo_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_48E4904 & 1) == 0 )
  {
    sub_1B00CCC(&RemovedBuffInfo_TypeInfo, endList);
    byte_48E4904 = 1;
  }
  v6 = (RemovedBuffInfo_o *)sub_1B00F18(RemovedBuffInfo_TypeInfo);
  RemovedBuffInfo___ctor(v6, 0LL);
  if ( !v6 )
    sub_1B00F28(v7, v8);
  RemovedBuffInfo__AddBuffs(v6, (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)endList, 0, 0LL);
  RemovedBuffInfo__AddBuffs(
    v6,
    (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)removedLinkedBuffs,
    1,
    0LL);
  return v6;
}


bool __fastcall BattleBuffData__OffStateWithAuraConditionCheck(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        int32_t state,
        const MethodInfo *method)
{
  BattleBuffData_o *v6; // x20
  __int64 v7; // x1
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x3
  bool v10; // w21
  int32_t v11; // w2
  int32_t v12; // w3
  __int64 v13; // x8
  _QWORD *v14; // x9
  __int64 passiveList_low; // x10
  __int64 v16; // x8
  int32_t v17; // w2
  __int64 v18; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  __int64 v21; // x8
  BattleBuffData_o *v22; // x0
  const MethodInfo *v23; // x3

  v6 = this;
  if ( (byte_48E4944 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, buff);
    this = (BattleBuffData_o *)sub_1B00CCC(
                                 &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__,
                                 v7);
    byte_48E4944 = 1;
  }
  if ( !buff )
    goto LABEL_32;
  BattleBuffData_BuffData__offState(buff, state, 0LL);
  v10 = 0;
  if ( state >= 0x4000 )
  {
    if ( state != 0x4000 && state != 0x200000 && state != 0x20000 )
      return v10;
LABEL_11:
    if ( buff->fields.auraEffectId )
    {
      this = (BattleBuffData_o *)v6->fields.auraBuffList;
      if ( !this )
        goto LABEL_32;
      if ( System_Collections_Generic_List_object___Contains(
             (System_Collections_Generic_List_object__o *)this,
             (Il2CppObject *)buff,
             (const MethodInfo_33C1D60 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
      {
        v10 = 0;
      }
      else
      {
        this = (BattleBuffData_o *)v6->fields.auraBuffList;
        if ( !this )
          goto LABEL_32;
        v13 = *(_QWORD *)&this->fields.resumptionHpFromLossMaxHp;
        v14 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
        ++HIDWORD(this->fields.passiveList);
        if ( !v13 )
          goto LABEL_32;
        passiveList_low = SLODWORD(this->fields.passiveList);
        if ( (unsigned int)passiveList_low >= *(_DWORD *)(v13 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)buff,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          v16 = v13 + 8 * passiveList_low;
          LODWORD(this->fields.passiveList) = passiveList_low + 1;
          *(_QWORD *)(v16 + 32) = buff;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v16 + 32), (int32_t)buff, v11, v12);
        }
        v10 = 1;
      }
      this = (BattleBuffData_o *)v6->fields.conditionalAuraBuff;
      if ( !this )
        goto LABEL_32;
      v8 = System_Collections_Generic_List_object___Contains(
             (System_Collections_Generic_List_object__o *)this,
             (Il2CppObject *)buff,
             (const MethodInfo_33C1D60 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
      if ( !v8 )
      {
        this = (BattleBuffData_o *)v6->fields.conditionalAuraBuff;
        if ( this )
        {
          v18 = *(_QWORD *)&this->fields.resumptionHpFromLossMaxHp;
          v19 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
          ++HIDWORD(this->fields.passiveList);
          if ( v18 )
          {
            v20 = SLODWORD(this->fields.passiveList);
            if ( (unsigned int)v20 >= *(_DWORD *)(v18 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)buff,
                *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
            }
            else
            {
              v21 = v18 + 8 * v20;
              LODWORD(this->fields.passiveList) = v20 + 1;
              *(_QWORD *)(v21 + 32) = buff;
              sub_1B00C70((ServantStatusBattleListViewItem_o *)(v21 + 32), (int32_t)buff, v17, (int32_t)v9);
            }
            v10 = 1;
            goto LABEL_30;
          }
        }
LABEL_32:
        sub_1B00F28(this, buff);
      }
    }
    else
    {
      v10 = 0;
    }
LABEL_30:
    BattleBuffData__ApplyBuffData((BattleBuffData_o *)v8, buff, &v6->fields.auraBuffList, v9);
    BattleBuffData__ApplyBuffData(v22, buff, &v6->fields.conditionalAuraBuff, v23);
    return v10;
  }
  if ( state == 1 || state == 16 )
    goto LABEL_11;
  return v10;
}


bool __fastcall BattleBuffData__OnStateWithAuraConditionCheck(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        int32_t state,
        const MethodInfo *method)
{
  BattleBuffData_o *v6; // x20
  __int64 v7; // x1
  _BOOL8 v8; // x0
  const MethodInfo *v9; // x3
  bool v10; // w21
  BattleBuffData_o *v11; // x0
  const MethodInfo *v12; // x3

  v6 = this;
  if ( (byte_48E4943 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__, buff);
    this = (BattleBuffData_o *)sub_1B00CCC(
                                 &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__,
                                 v7);
    byte_48E4943 = 1;
  }
  if ( !buff )
    goto LABEL_23;
  BattleBuffData_BuffData__onState(buff, state, 0LL);
  v10 = 0;
  if ( state >= 0x4000 )
  {
    if ( state != 0x4000 && state != 0x200000 && state != 0x20000 )
      return v10;
LABEL_11:
    if ( !buff->fields.auraEffectId )
    {
      v10 = 0;
      goto LABEL_21;
    }
    this = (BattleBuffData_o *)v6->fields.auraBuffList;
    if ( this )
    {
      v10 = System_Collections_Generic_List_object___Contains(
              (System_Collections_Generic_List_object__o *)this,
              (Il2CppObject *)buff,
              (const MethodInfo_33C1D60 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
      if ( v10 )
      {
        this = (BattleBuffData_o *)v6->fields.auraBuffList;
        if ( !this )
          goto LABEL_23;
        System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)buff,
          (const MethodInfo_33C2EF8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
      }
      this = (BattleBuffData_o *)v6->fields.conditionalAuraBuff;
      if ( this )
      {
        v8 = System_Collections_Generic_List_object___Contains(
               (System_Collections_Generic_List_object__o *)this,
               (Il2CppObject *)buff,
               (const MethodInfo_33C1D60 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
        if ( !v8 )
        {
LABEL_21:
          BattleBuffData__ApplyBuffData((BattleBuffData_o *)v8, buff, &v6->fields.auraBuffList, v9);
          BattleBuffData__ApplyBuffData(v11, buff, &v6->fields.conditionalAuraBuff, v12);
          return v10;
        }
        this = (BattleBuffData_o *)v6->fields.conditionalAuraBuff;
        if ( this )
        {
          v8 = System_Collections_Generic_List_object___Remove(
                 (System_Collections_Generic_List_object__o *)this,
                 (Il2CppObject *)buff,
                 (const MethodInfo_33C2EF8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
          v10 = 1;
          goto LABEL_21;
        }
      }
    }
LABEL_23:
    sub_1B00F28(this, buff);
  }
  if ( state == 1 || state == 16 )
    goto LABEL_11;
  return v10;
}


bool __fastcall BattleBuffData__ProgressBuffTurn(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  bool v4; // w0

  if ( !buff )
    sub_1B00F28(this, 0LL);
  v4 = BattleBuffData_BuffData__checkProgressTurn(buff, 0LL);
  if ( v4 )
    --buff->fields.turn;
  return v4;
}


void __fastcall BattleBuffData__RechargeCommandAssistBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Master_object; // x20
  Il2CppObject *EventId; // x0
  __int64 v10; // x1
  EventCommandAssistEntity_o *CurrentEntity; // x20
  __int64 v12; // x8
  __int64 v13; // x0
  int chargeTurn; // w8
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_48E493F & 1) == 0 )
  {
    sub_1B00CCC(&BattleData_TypeInfo, buff);
    sub_1B00CCC(&Method_DataManager_GetMasterData_SkillLvMaster___, v4);
    sub_1B00CCC(&Method_DataManager_GetMaster_EventCommandAssistMaster___, v5);
    sub_1B00CCC(&DataManager_TypeInfo, v6);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v7);
    byte_48E493F = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_EventCommandAssistMaster___);
  if ( !BattleData_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BattleData_TypeInfo);
  EventId = (Il2CppObject *)BattleData__GetEventId(0LL);
  if ( !buff || !Master_object )
    goto LABEL_21;
  CurrentEntity = EventCommandAssistMaster__GetCurrentEntity(
                    (EventCommandAssistMaster_o *)Master_object,
                    (int32_t)EventId,
                    buff->fields.commandAssistId,
                    -1,
                    0,
                    0LL);
  v12 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
    v12 = sub_1B52BA8(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4));
  v13 = *(_QWORD *)(*(_QWORD *)(v12 + 192) + 16LL);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1B52BA8(v13);
  EventId = **(Il2CppObject ***)(v13 + 184);
  if ( !EventId )
    goto LABEL_21;
  EventId = DataManager__GetMasterData_object_(
              (DataManager_o *)EventId,
              (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  entity = 0LL;
  if ( !CurrentEntity || !EventId )
    goto LABEL_21;
  EventId = (Il2CppObject *)SkillLvMaster__TryGetEntity(
                              (SkillLvMaster_o *)EventId,
                              &entity,
                              CurrentEntity->fields.skillId,
                              CurrentEntity->fields.skillLv,
                              0LL);
  if ( ((unsigned __int8)EventId & 1) == 0 )
    return;
  if ( !entity )
LABEL_21:
    sub_1B00F28(EventId, v10);
  chargeTurn = entity->fields.chargeTurn;
  if ( chargeTurn >= 1 )
    buff->fields.reCharge = chargeTurn;
}


void __fastcall BattleBuffData__RechargeCommandCodeBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  CommandCodeSkillEntity_array *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x21
  __int64 v10; // x8
  __int64 v11; // x0
  SkillLvMaster_o *v12; // x20
  int max_length; // w8
  CommandCodeSkillEntity_array *v14; // x21
  unsigned int v15; // w22
  CommandCodeSkillEntity_o *v16; // x8
  int chargeTurn; // w8
  SkillLvEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_48E493D & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_CommandCodeSkillMaster___, buff);
    sub_1B00CCC(&Method_DataManager_GetMasterData_SkillLvMaster___, v4);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v5);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v6);
    byte_48E493D = 1;
  }
  entity = 0LL;
  Instance = (CommandCodeSkillEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_CommandCodeSkillMaster___);
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1B52BA8(*((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4));
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1B52BA8(v11);
  Instance = **(CommandCodeSkillEntity_array ***)(v11 + 184);
  if ( !Instance
    || (Instance = (CommandCodeSkillEntity_array *)DataManager__GetMasterData_object_(
                                                     (DataManager_o *)Instance,
                                                     (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        !buff)
    || !MasterData_object
    || (v12 = (SkillLvMaster_o *)Instance,
        (Instance = CommandCodeSkillMaster__getCommandCodeActiveSkillList(
                      (CommandCodeSkillMaster_o *)MasterData_object,
                      buff->fields.masterCommandCodeId,
                      0LL)) == 0LL) )
  {
LABEL_24:
    sub_1B00F28(Instance, v8);
  }
  max_length = Instance->max_length;
  v14 = Instance;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
        sub_1B00F30(Instance, v8);
      v16 = v14->m_Items[v15];
      entity = 0LL;
      if ( !v16 || !v12 )
        goto LABEL_24;
      Instance = (CommandCodeSkillEntity_array *)SkillLvMaster__TryGetEntity(v12, &entity, v16->fields.skillId, 1, 0LL);
      if ( ((unsigned __int8)Instance & 1) != 0 )
      {
        if ( !entity )
          goto LABEL_24;
        chargeTurn = entity->fields.chargeTurn;
        if ( chargeTurn >= 1 )
          break;
      }
      max_length = v14->max_length;
      if ( (int)++v15 >= max_length )
        return;
    }
    buff->fields.reCharge = chargeTurn;
  }
}


void __fastcall BattleBuffData__RemoveActiveBuffWithCondition(
        BattleBuffData_o *this,
        System_Func_BattleBuffData_BuffData__bool__o *condition,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *activeList; // x0
  int32_t v8; // w21

  if ( (byte_48E48D8 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__, condition);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__, v6);
    byte_48E48D8 = 1;
  }
  activeList = (System_Collections_Generic_List_object__o *)this->fields.activeList;
  if ( !activeList )
LABEL_11:
    sub_1B00F28(activeList, condition);
  v8 = 0;
  while ( v8 < activeList->fields._size )
  {
    activeList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                activeList,
                                                                v8,
                                                                (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
    if ( !condition )
      goto LABEL_11;
    if ( (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, System_Collections_Generic_List_object__o *, _QWORD))condition->fields.m_target)(
            condition->fields.original_method_info,
            activeList,
            *(_QWORD *)&condition->fields.extra_arg) & 1) != 0 )
    {
      activeList = (System_Collections_Generic_List_object__o *)this->fields.activeList;
      if ( !activeList )
        goto LABEL_11;
      System_Collections_Generic_List_object___RemoveAt(
        activeList,
        v8--,
        (const MethodInfo_33C31A4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__);
    }
    activeList = (System_Collections_Generic_List_object__o *)this->fields.activeList;
    ++v8;
    if ( !activeList )
      goto LABEL_11;
  }
}


void __fastcall BattleBuffData__RemoveBuff(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *removeBuffList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *activeList; // x0
  int32_t v8; // w21
  int32_t v9; // w22
  int items_high; // w25

  if ( (byte_48E48D7 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__, removeBuffList);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__, v6);
    byte_48E48D7 = 1;
  }
  activeList = (System_Collections_Generic_List_object__o *)this->fields.activeList;
  if ( !activeList )
LABEL_20:
    sub_1B00F28(activeList, removeBuffList);
  v8 = 0;
  while ( v8 < activeList->fields._size )
  {
    activeList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                activeList,
                                                                v8,
                                                                (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
    if ( !activeList )
      goto LABEL_20;
    if ( BYTE1(activeList[9].fields._size) )
    {
      if ( !removeBuffList )
        goto LABEL_20;
      if ( removeBuffList->fields._size >= 1 )
      {
        v9 = 0;
        while ( 1 )
        {
          activeList = (System_Collections_Generic_List_object__o *)this->fields.activeList;
          if ( !activeList )
            goto LABEL_20;
          activeList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      activeList,
                                                                      v8,
                                                                      (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
          if ( !activeList )
            goto LABEL_20;
          items_high = HIDWORD(activeList[3].fields._items);
          activeList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      (System_Collections_Generic_List_object__o *)removeBuffList,
                                                                      v9,
                                                                      (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
          if ( !activeList )
            goto LABEL_20;
          if ( items_high == HIDWORD(activeList[3].fields._items) )
            break;
          if ( ++v9 >= removeBuffList->fields._size )
            goto LABEL_19;
        }
        activeList = (System_Collections_Generic_List_object__o *)this->fields.activeList;
        if ( !activeList )
          goto LABEL_20;
        System_Collections_Generic_List_object___RemoveAt(
          activeList,
          v8--,
          (const MethodInfo_33C31A4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__);
      }
    }
LABEL_19:
    activeList = (System_Collections_Generic_List_object__o *)this->fields.activeList;
    ++v8;
    if ( !activeList )
      goto LABEL_20;
  }
}


void __fastcall BattleBuffData__RemoveClassBoardCommandSpellBuff(
        BattleBuffData_o *this,
        AddSkillData_array *classBoardCommandSpellArray,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  AddSkillData_array *v5; // x24
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
  System_Collections_Generic_List_object__o *v23; // x22
  ClassBoardCommandSpellMaster_o *Master_object; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x3
  int max_length; // w8
  int v28; // w27
  AddSkillData_o *v29; // x8
  __int64 v30; // x24
  __int64 v31; // x0
  __int64 v32; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t current; // w1
  System_Collections_Generic_List_object__o *passiveList; // x25
  System_Predicate_object__o *v37; // x26
  __int64 v38; // x0
  __int64 v39; // x1
  System_Collections_Generic_IEnumerable_T__o *All; // x0
  System_Collections_Generic_List_object__o *v41; // x25
  System_Predicate_object__o *v42; // x26
  __int64 v43; // x0
  __int64 v44; // x1
  System_Collections_Generic_List_object__o *activeList; // x25
  System_Predicate_object__o *v46; // x26
  __int64 v47; // x0
  __int64 v48; // x1
  System_Collections_Generic_IEnumerable_T__o *v49; // x0
  System_Collections_Generic_List_object__o *v50; // x25
  System_Predicate_object__o *v51; // x26
  __int64 v52; // x0
  __int64 v53; // x1
  ClassBoardCommandSpellMaster_o *v54; // [xsp+8h] [xbp-A8h]
  AddSkillData_array *v55; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+30h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+48h] [xbp-68h] BYREF

  v5 = classBoardCommandSpellArray;
  if ( (byte_48E496B & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, classBoardCommandSpellArray);
    sub_1B00CCC(&DataManager_TypeInfo, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__, v13);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__, v14);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v15);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v16);
    sub_1B00CCC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v17);
    sub_1B00CCC(&Method_BattleBuffData___c__DisplayClass263_0__RemoveClassBoardCommandSpellBuff_b__0__, v18);
    sub_1B00CCC(&Method_BattleBuffData___c__DisplayClass263_0__RemoveClassBoardCommandSpellBuff_b__1__, v19);
    sub_1B00CCC(&Method_BattleBuffData___c__DisplayClass263_0__RemoveClassBoardCommandSpellBuff_b__2__, v20);
    sub_1B00CCC(&Method_BattleBuffData___c__DisplayClass263_0__RemoveClassBoardCommandSpellBuff_b__3__, v21);
    sub_1B00CCC(&BattleBuffData___c__DisplayClass263_0_TypeInfo, v22);
    byte_48E496B = 1;
  }
  entitys = 0LL;
  memset(&v57, 0, sizeof(v57));
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)v5, 0LL) )
  {
    v23 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v23,
      (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = (ClassBoardCommandSpellMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
    if ( !v5 )
      goto LABEL_34;
    max_length = v5->max_length;
    if ( max_length >= 1 )
    {
      v28 = 0;
      v54 = Master_object;
      v55 = v5;
      while ( 1 )
      {
        if ( v28 >= (unsigned int)max_length )
          sub_1B00F30(Master_object, v25);
        v29 = v5->m_Items[v28];
        if ( !v29 || !Master_object )
          break;
        if ( ClassBoardCommandSpellMaster__TryGetEntityList(
               Master_object,
               &entitys,
               v29->fields.id,
               v29->fields.lv,
               0LL) )
        {
          Master_object = (ClassBoardCommandSpellMaster_o *)entitys;
          if ( !entitys )
            break;
          System_Collections_Generic_List_object___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v56,
            (System_Collections_Generic_List_object__o *)entitys,
            (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
          v57 = v56;
          while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                    &v57,
                    (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__) )
          {
            v30 = sub_1B00F18(BattleBuffData___c__DisplayClass263_0_TypeInfo);
            BattleBuffData___c__DisplayClass263_0___ctor((BattleBuffData___c__DisplayClass263_0_o *)v30, 0LL);
            if ( !v30 )
              sub_1B00F28(v31, v32);
            current = (int32_t)v57.fields._current;
            *(_QWORD *)(v30 + 16) = v57.fields._current;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)(v30 + 16), current, v33, v34);
            passiveList = (System_Collections_Generic_List_object__o *)this->fields.passiveList;
            v37 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
            System_Predicate_object____ctor(
              v37,
              (Il2CppObject *)v30,
              Method_BattleBuffData___c__DisplayClass263_0__RemoveClassBoardCommandSpellBuff_b__0__,
              0LL);
            if ( !passiveList )
              sub_1B00F28(v38, v39);
            All = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_object___FindAll(
                                                                   passiveList,
                                                                   (System_Predicate_T__o *)v37,
                                                                   (const MethodInfo_33C20E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
            if ( !v23 )
              sub_1B00F28(All, All);
            System_Collections_Generic_List_object___AddRange(
              v23,
              All,
              (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
            v41 = (System_Collections_Generic_List_object__o *)this->fields.passiveList;
            v42 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
            System_Predicate_object____ctor(
              v42,
              (Il2CppObject *)v30,
              Method_BattleBuffData___c__DisplayClass263_0__RemoveClassBoardCommandSpellBuff_b__1__,
              0LL);
            if ( !v41 )
              sub_1B00F28(v43, v44);
            System_Collections_Generic_List_object___RemoveAll(
              v41,
              (System_Predicate_T__o *)v42,
              (const MethodInfo_33C302C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
            activeList = (System_Collections_Generic_List_object__o *)this->fields.activeList;
            v46 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
            System_Predicate_object____ctor(
              v46,
              (Il2CppObject *)v30,
              Method_BattleBuffData___c__DisplayClass263_0__RemoveClassBoardCommandSpellBuff_b__2__,
              0LL);
            if ( !activeList )
              sub_1B00F28(v47, v48);
            v49 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_object___FindAll(
                                                                   activeList,
                                                                   (System_Predicate_T__o *)v46,
                                                                   (const MethodInfo_33C20E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
            System_Collections_Generic_List_object___AddRange(
              v23,
              v49,
              (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
            v50 = (System_Collections_Generic_List_object__o *)this->fields.activeList;
            v51 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
            System_Predicate_object____ctor(
              v51,
              (Il2CppObject *)v30,
              Method_BattleBuffData___c__DisplayClass263_0__RemoveClassBoardCommandSpellBuff_b__3__,
              0LL);
            if ( !v50 )
              sub_1B00F28(v52, v53);
            System_Collections_Generic_List_object___RemoveAll(
              v50,
              (System_Predicate_T__o *)v51,
              (const MethodInfo_33C302C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
          }
          System_Collections_Generic_List_Enumerator_object___Dispose(
            &v57,
            (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
        }
        Master_object = v54;
        v5 = v55;
        ++v28;
        max_length = v55->max_length;
        if ( v28 >= max_length )
          goto LABEL_32;
      }
LABEL_34:
      sub_1B00F28(Master_object, v25);
    }
LABEL_32:
    BattleBuffData__RemoveLinkageAndUpdateRemoveBuffInfluence(
      this,
      (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v23,
      logic,
      v26);
  }
}


void __fastcall BattleBuffData__RemoveClassBoardSkillBuff(
        BattleBuffData_o *this,
        AddSkillData_array *classBoardSkillArray,
        AddSkillData_array *classBoardCommandSpellArray,
        bool isDifferentClass,
        BattleLogic_o *logic,
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
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  System_Collections_Generic_List_object__o *v29; // x22
  System_Collections_Generic_IEnumerable_T__o *IsNullOrEmpty; // x0
  __int64 v31; // x1
  unsigned __int64 v32; // x19
  __int64 v33; // x25
  int32_t v34; // w2
  int32_t v35; // w3
  AddSkillData_o *v36; // x1
  System_Collections_Generic_List_object__o *passiveList; // x26
  System_Predicate_object__o *v38; // x27
  System_Collections_Generic_List_object__o *v39; // x26
  System_Predicate_object__o *v40; // x27
  System_Collections_Generic_List_object__o *activeList; // x26
  System_Predicate_object__o *v42; // x27
  System_Collections_Generic_IEnumerable_T__o *All; // x0
  System_Collections_Generic_List_object__o *v44; // x26
  System_Predicate_object__o *v45; // x27
  AddSkillData_array *v46; // x24
  const MethodInfo *v47; // x3
  signed int max_length; // w8
  signed int v49; // w27
  AddSkillData_o *v50; // x8
  __int64 v51; // x24
  __int64 v52; // x0
  __int64 v53; // x1
  int32_t v54; // w2
  int32_t v55; // w3
  int32_t current; // w1
  System_Collections_Generic_List_object__o *v57; // x25
  System_Predicate_object__o *v58; // x26
  __int64 v59; // x0
  __int64 v60; // x1
  System_Collections_Generic_IEnumerable_T__o *v61; // x0
  System_Collections_Generic_List_object__o *v62; // x25
  System_Predicate_object__o *v63; // x26
  __int64 v64; // x0
  __int64 v65; // x1
  System_Collections_Generic_List_object__o *v66; // x25
  System_Predicate_object__o *v67; // x26
  __int64 v68; // x0
  __int64 v69; // x1
  System_Collections_Generic_IEnumerable_T__o *v70; // x0
  System_Collections_Generic_List_object__o *v71; // x25
  System_Predicate_object__o *v72; // x26
  __int64 v73; // x0
  __int64 v74; // x1
  System_Collections_Generic_IEnumerable_T__o *v77; // [xsp+18h] [xbp-A8h]
  System_Collections_Generic_List_Enumerator_object__o v79; // [xsp+28h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v80; // [xsp+40h] [xbp-80h] BYREF
  System_Collections_Generic_List_ClassBoardCommandSpellEntity__o *entitys; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_48E496A & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___, classBoardSkillArray);
    sub_1B00CCC(&DataManager_TypeInfo, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__get_Current__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, v13);
    sub_1B00CCC(&Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__, v14);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__, v15);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v16);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v17);
    sub_1B00CCC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v18);
    sub_1B00CCC(&Method_BattleBuffData___c__DisplayClass262_0__RemoveClassBoardSkillBuff_b__0__, v19);
    sub_1B00CCC(&Method_BattleBuffData___c__DisplayClass262_0__RemoveClassBoardSkillBuff_b__1__, v20);
    sub_1B00CCC(&Method_BattleBuffData___c__DisplayClass262_0__RemoveClassBoardSkillBuff_b__2__, v21);
    sub_1B00CCC(&Method_BattleBuffData___c__DisplayClass262_0__RemoveClassBoardSkillBuff_b__3__, v22);
    sub_1B00CCC(&BattleBuffData___c__DisplayClass262_0_TypeInfo, v23);
    sub_1B00CCC(&Method_BattleBuffData___c__DisplayClass262_1__RemoveClassBoardSkillBuff_b__4__, v24);
    sub_1B00CCC(&Method_BattleBuffData___c__DisplayClass262_1__RemoveClassBoardSkillBuff_b__5__, v25);
    sub_1B00CCC(&Method_BattleBuffData___c__DisplayClass262_1__RemoveClassBoardSkillBuff_b__6__, v26);
    sub_1B00CCC(&Method_BattleBuffData___c__DisplayClass262_1__RemoveClassBoardSkillBuff_b__7__, v27);
    sub_1B00CCC(&BattleBuffData___c__DisplayClass262_1_TypeInfo, v28);
    byte_48E496A = 1;
  }
  entitys = 0LL;
  memset(&v80, 0, sizeof(v80));
  v29 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v29,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  IsNullOrEmpty = (System_Collections_Generic_IEnumerable_T__o *)BasicHelper__IsNullOrEmpty(
                                                                   (System_Collections_ICollection_o *)classBoardSkillArray,
                                                                   0LL);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) == 0 )
  {
    if ( !classBoardSkillArray )
      goto LABEL_46;
    if ( (int)classBoardSkillArray->max_length >= 1 )
    {
      v32 = 0LL;
      while ( 1 )
      {
        v33 = sub_1B00F18(BattleBuffData___c__DisplayClass262_0_TypeInfo);
        BattleBuffData___c__DisplayClass262_0___ctor((BattleBuffData___c__DisplayClass262_0_o *)v33, 0LL);
        if ( v32 >= classBoardSkillArray->max_length )
          break;
        if ( !v33 )
          goto LABEL_46;
        v36 = classBoardSkillArray->m_Items[v32];
        *(_QWORD *)(v33 + 16) = v36;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v33 + 16), (int32_t)v36, v34, v35);
        passiveList = (System_Collections_Generic_List_object__o *)this->fields.passiveList;
        v38 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
        System_Predicate_object____ctor(
          v38,
          (Il2CppObject *)v33,
          Method_BattleBuffData___c__DisplayClass262_0__RemoveClassBoardSkillBuff_b__0__,
          0LL);
        if ( !passiveList )
          goto LABEL_46;
        IsNullOrEmpty = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_object___FindAll(
                                                                         passiveList,
                                                                         (System_Predicate_T__o *)v38,
                                                                         (const MethodInfo_33C20E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
        if ( !v29 )
          goto LABEL_46;
        System_Collections_Generic_List_object___AddRange(
          v29,
          IsNullOrEmpty,
          (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
        v39 = (System_Collections_Generic_List_object__o *)this->fields.passiveList;
        v40 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
        System_Predicate_object____ctor(
          v40,
          (Il2CppObject *)v33,
          Method_BattleBuffData___c__DisplayClass262_0__RemoveClassBoardSkillBuff_b__1__,
          0LL);
        if ( !v39 )
          goto LABEL_46;
        System_Collections_Generic_List_object___RemoveAll(
          v39,
          (System_Predicate_T__o *)v40,
          (const MethodInfo_33C302C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
        activeList = (System_Collections_Generic_List_object__o *)this->fields.activeList;
        v42 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
        System_Predicate_object____ctor(
          v42,
          (Il2CppObject *)v33,
          Method_BattleBuffData___c__DisplayClass262_0__RemoveClassBoardSkillBuff_b__2__,
          0LL);
        if ( !activeList )
          goto LABEL_46;
        All = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_object___FindAll(
                                                               activeList,
                                                               (System_Predicate_T__o *)v42,
                                                               (const MethodInfo_33C20E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
        System_Collections_Generic_List_object___AddRange(
          v29,
          All,
          (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
        v44 = (System_Collections_Generic_List_object__o *)this->fields.activeList;
        v45 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
        System_Predicate_object____ctor(
          v45,
          (Il2CppObject *)v33,
          Method_BattleBuffData___c__DisplayClass262_0__RemoveClassBoardSkillBuff_b__3__,
          0LL);
        if ( !v44 )
          goto LABEL_46;
        System_Collections_Generic_List_object___RemoveAll(
          v44,
          (System_Predicate_T__o *)v45,
          (const MethodInfo_33C302C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
        if ( (__int64)++v32 >= (int)classBoardSkillArray->max_length )
          goto LABEL_15;
      }
LABEL_47:
      sub_1B00F30(IsNullOrEmpty, v31);
    }
  }
LABEL_15:
  v46 = classBoardCommandSpellArray;
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)classBoardCommandSpellArray, 0LL)
    || !isDifferentClass )
  {
    goto LABEL_45;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  IsNullOrEmpty = (System_Collections_Generic_IEnumerable_T__o *)DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_ClassBoardCommandSpellMaster___);
  if ( !classBoardCommandSpellArray )
LABEL_46:
    sub_1B00F28(IsNullOrEmpty, v31);
  max_length = classBoardCommandSpellArray->max_length;
  if ( max_length >= 1 )
  {
    v49 = 0;
    v77 = IsNullOrEmpty;
    while ( v49 < (unsigned int)max_length )
    {
      v50 = v46->m_Items[v49];
      if ( !v50 || !IsNullOrEmpty )
        goto LABEL_46;
      if ( ClassBoardCommandSpellMaster__TryGetEntityList(
             (ClassBoardCommandSpellMaster_o *)IsNullOrEmpty,
             &entitys,
             v50->fields.id,
             v50->fields.lv,
             0LL) )
      {
        IsNullOrEmpty = (System_Collections_Generic_IEnumerable_T__o *)entitys;
        if ( !entitys )
          goto LABEL_46;
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v79,
          (System_Collections_Generic_List_object__o *)entitys,
          (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_ClassBoardCommandSpellEntity__GetEnumerator__);
        v80 = v79;
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v80,
                  (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__MoveNext__) )
        {
          v51 = sub_1B00F18(BattleBuffData___c__DisplayClass262_1_TypeInfo);
          BattleBuffData___c__DisplayClass262_1___ctor((BattleBuffData___c__DisplayClass262_1_o *)v51, 0LL);
          if ( !v51 )
            sub_1B00F28(v52, v53);
          current = (int32_t)v80.fields._current;
          *(_QWORD *)(v51 + 16) = v80.fields._current;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v51 + 16), current, v54, v55);
          v57 = (System_Collections_Generic_List_object__o *)this->fields.passiveList;
          v58 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
          System_Predicate_object____ctor(
            v58,
            (Il2CppObject *)v51,
            Method_BattleBuffData___c__DisplayClass262_1__RemoveClassBoardSkillBuff_b__4__,
            0LL);
          if ( !v57 )
            sub_1B00F28(v59, v60);
          v61 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_object___FindAll(
                                                                 v57,
                                                                 (System_Predicate_T__o *)v58,
                                                                 (const MethodInfo_33C20E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
          if ( !v29 )
            sub_1B00F28(v61, v61);
          System_Collections_Generic_List_object___AddRange(
            v29,
            v61,
            (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
          v62 = (System_Collections_Generic_List_object__o *)this->fields.passiveList;
          v63 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
          System_Predicate_object____ctor(
            v63,
            (Il2CppObject *)v51,
            Method_BattleBuffData___c__DisplayClass262_1__RemoveClassBoardSkillBuff_b__5__,
            0LL);
          if ( !v62 )
            sub_1B00F28(v64, v65);
          System_Collections_Generic_List_object___RemoveAll(
            v62,
            (System_Predicate_T__o *)v63,
            (const MethodInfo_33C302C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
          v66 = (System_Collections_Generic_List_object__o *)this->fields.activeList;
          v67 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
          System_Predicate_object____ctor(
            v67,
            (Il2CppObject *)v51,
            Method_BattleBuffData___c__DisplayClass262_1__RemoveClassBoardSkillBuff_b__6__,
            0LL);
          if ( !v66 )
            sub_1B00F28(v68, v69);
          v70 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_object___FindAll(
                                                                 v66,
                                                                 (System_Predicate_T__o *)v67,
                                                                 (const MethodInfo_33C20E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
          System_Collections_Generic_List_object___AddRange(
            v29,
            v70,
            (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
          v71 = (System_Collections_Generic_List_object__o *)this->fields.activeList;
          v72 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
          System_Predicate_object____ctor(
            v72,
            (Il2CppObject *)v51,
            Method_BattleBuffData___c__DisplayClass262_1__RemoveClassBoardSkillBuff_b__7__,
            0LL);
          if ( !v71 )
            sub_1B00F28(v73, v74);
          System_Collections_Generic_List_object___RemoveAll(
            v71,
            (System_Predicate_T__o *)v72,
            (const MethodInfo_33C302C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
        }
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v80,
          (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_ClassBoardCommandSpellEntity__Dispose__);
      }
      IsNullOrEmpty = v77;
      v46 = classBoardCommandSpellArray;
      ++v49;
      max_length = classBoardCommandSpellArray->max_length;
      if ( v49 >= max_length )
        goto LABEL_45;
    }
    goto LABEL_47;
  }
LABEL_45:
  BattleBuffData__RemoveLinkageAndUpdateRemoveBuffInfluence(
    this,
    (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v29,
    logic,
    v47);
}


void __fastcall BattleBuffData__RemoveClassIconEffectBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *effectBuff,
        const MethodInfo *method)
{
  BattleBuffData_o *v4; // x20
  __int64 v5; // x1

  v4 = this;
  if ( (byte_48E4968 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__, effectBuff);
    this = (BattleBuffData_o *)sub_1B00CCC(
                                 &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__,
                                 v5);
    byte_48E4968 = 1;
  }
  if ( !effectBuff )
    goto LABEL_10;
  if ( effectBuff->fields.classIconAuraEffectId )
  {
    this = (BattleBuffData_o *)v4->fields.classIconAuraEffectBuffList;
    if ( !this )
      goto LABEL_10;
    if ( System_Collections_Generic_List_object___Contains(
           (System_Collections_Generic_List_object__o *)this,
           (Il2CppObject *)effectBuff,
           (const MethodInfo_33C1D60 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
    {
      this = (BattleBuffData_o *)v4->fields.classIconAuraEffectBuffList;
      if ( this )
      {
        System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)effectBuff,
          (const MethodInfo_33C2EF8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
        return;
      }
LABEL_10:
      sub_1B00F28(this, effectBuff);
    }
  }
}


void __fastcall BattleBuffData__RemoveLinkageAndUpdateRemoveBuffInfluence(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *removeBuffList,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x2
  BattleBuffData_o *v15; // x0
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x2
  System_Collections_Generic_List_Enumerator_object__o v19; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_48E496C & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, removeBuffList);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v10);
    byte_48E496C = 1;
  }
  memset(&v19, 0, sizeof(v19));
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)removeBuffList, 0LL) )
  {
    v12 = BattleBuffData__removeLinkageBuff(this, removeBuffList, 0, v11);
    if ( removeBuffList )
    {
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)removeBuffList,
        (System_Collections_Generic_IEnumerable_T__o *)v12,
        (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
      BattleBuffData__checkAndAddResumptionHpFromLossMaxHp(this, removeBuffList, v14);
      BattleBuffData__CheckAndUpdateFieldIndividualityBuff(v15, removeBuffList, logic, v16);
      v12 = (System_Collections_Generic_List_BattleBuffData_BuffData__o *)BattleBuffData__CheckInvalidSacrificeIndivArray(
                                                                            removeBuffList,
                                                                            v17);
      if ( ((unsigned __int8)v12 & 1) == 0 )
        goto LABEL_8;
      if ( logic )
      {
        BattleLogic__updateFieldBuff(logic, 0LL);
LABEL_8:
        System_Collections_Generic_List_object___GetEnumerator(
          (System_Collections_Generic_List_Enumerator_T__o *)&v19,
          (System_Collections_Generic_List_object__o *)removeBuffList,
          (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
        while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
                  &v19,
                  (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
          BattleBuffData__RemoveClassIconEffectBuff(this, (BattleBuffData_BuffData_o *)v19.fields._current, v18);
        System_Collections_Generic_List_Enumerator_object___Dispose(
          &v19,
          (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
        return;
      }
    }
    sub_1B00F28(v12, v13);
  }
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__RemoveLinkageBuff(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *endBuffs,
        bool isCreateDummy,
        bool isFamily,
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
  __int64 v31; // x24
  System_Collections_Generic_List_object__o *Item; // x0
  System_Collections_Generic_IEnumerable_T__o *monitor; // x1
  int32_t v34; // w2
  int32_t v35; // w3
  System_Collections_Generic_List_object__o *v36; // x22
  System_Collections_Generic_List_int__o *v37; // x28
  System_Func_object__bool__o *v38; // x26
  int32_t v39; // w2
  int32_t v40; // w3
  System_Collections_Generic_List_object__c *klass; // x8
  System_Collections_Generic_List_object__o *v42; // x25
  __int64 v43; // x9
  int32_t *p_offset; // x10
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x25
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
  System_Collections_Generic_IEnumerable_T__o *v58; // x1
  __int64 v59; // x8
  __int64 v60; // x9
  int *v61; // x10
  __int64 v62; // x0
  __int64 v63; // x25
  System_Collections_Generic_List_int__o *v64; // x0
  int32_t v65; // w24
  System_Collections_Generic_List_object__o *activeList; // x8
  unsigned int v67; // w26
  int32_t v68; // w27
  System_Collections_Generic_List_object__o *v69; // x28
  const MethodInfo *v70; // x2
  int32_t v71; // w2
  int32_t v72; // w3
  struct System_Object_array *v73; // x8
  _QWORD *v74; // x9
  __int64 v75; // x10
  Il2CppClass **v76; // x0
  const MethodInfo *v77; // x2
  int32_t v78; // w2
  int32_t v79; // w3
  System_Collections_Generic_List_object__o *v80; // x8
  __int64 v81; // x10
  System_Collections_Generic_List_object__o *v82; // x9
  struct System_Object_array *v83; // x11
  _QWORD *v84; // x12
  Il2CppClass **v85; // x0
  int32_t v86; // w27
  System_Collections_Generic_List_object__o *v87; // x28
  const MethodInfo *v88; // x2
  int32_t v89; // w2
  int32_t v90; // w3
  struct System_Object_array *items; // x8
  _QWORD *v92; // x9
  __int64 size; // x10
  Il2CppClass **v94; // x0
  System_Collections_Generic_List_int__o *v96; // [xsp+0h] [xbp-70h]

  if ( (byte_48E48E7 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, endBuffs);
    sub_1B00CCC(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v8);
    sub_1B00CCC(&System_Func_BattleBuffData_BuffData__int__bool__TypeInfo, v9);
    sub_1B00CCC(&System_IDisposable_TypeInfo, v10);
    sub_1B00CCC(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v11);
    sub_1B00CCC(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v12);
    sub_1B00CCC(&System_Collections_IEnumerator_TypeInfo, v13);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__AddRange__, v14);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v15);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__, v16);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Insert__, v17);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__, v18);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__, v19);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor__, v20);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v21);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v22);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__get_Count__, v23);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__, v24);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__get_Item__, v25);
    sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v26);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v27);
    sub_1B00CCC(&Method_BattleBuffData___c__DisplayClass74_0__RemoveLinkageBuff_b__0__, v28);
    sub_1B00CCC(&Method_BattleBuffData___c__DisplayClass74_0__RemoveLinkageBuff_b__1__, v29);
    sub_1B00CCC(&BattleBuffData___c__DisplayClass74_0_TypeInfo, v30);
    byte_48E48E7 = 1;
  }
  v31 = sub_1B00F18(BattleBuffData___c__DisplayClass74_0_TypeInfo);
  BattleBuffData___c__DisplayClass74_0___ctor((BattleBuffData___c__DisplayClass74_0_o *)v31, 0LL);
  if ( !v31 )
    goto LABEL_100;
  *(_BYTE *)(v31 + 16) = isFamily;
  *(_QWORD *)(v31 + 24) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v31 + 24), (int32_t)this, v34, v35);
  v36 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v36,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v37 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v37,
    (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
  v38 = *(System_Func_object__bool__o **)(v31 + 32);
  if ( !v38 )
  {
    v38 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v38,
      (Il2CppObject *)v31,
      Method_BattleBuffData___c__DisplayClass74_0__RemoveLinkageBuff_b__1__,
      0LL);
    *(_QWORD *)(v31 + 32) = v38;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v31 + 32), (int32_t)v38, v39, v40);
  }
  Item = (System_Collections_Generic_List_object__o *)System_Linq_Enumerable__Where_object_(
                                                        (System_Collections_Generic_IEnumerable_TSource__o *)endBuffs,
                                                        (System_Func_TSource__bool__o *)v38,
                                                        (const MethodInfo_2D9D054 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  if ( !Item )
    goto LABEL_100;
  klass = Item->klass;
  v42 = Item;
  v43 = *(unsigned __int16 *)(&Item->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&Item->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      --v43;
      p_offset += 4;
      if ( !v43 )
        goto LABEL_11;
    }
    v45 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_11:
    v45 = sub_1B52CAC(Item, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v47 = (*(__int64 (__fastcall **)(System_Collections_Generic_List_object__o *, _QWORD))v45)(v42, *(_QWORD *)(v45 + 8));
  v96 = v37;
  if ( !v47 )
    sub_1B00F28(0LL, v46);
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
          goto LABEL_18;
      }
      v51 = v48 + 16LL * *v50 + 312;
    }
    else
    {
LABEL_18:
      v51 = sub_1B52CAC(v47, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v47, *(_QWORD *)(v51 + 8)) & 1) == 0 )
      break;
    v52 = *(_QWORD *)v47;
    v53 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
    {
      v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v54 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        --v53;
        v54 += 4;
        if ( !v53 )
          goto LABEL_25;
      }
      v55 = v52 + 16LL * *v54 + 312;
    }
    else
    {
LABEL_25:
      v55 = sub_1B52CAC(v47, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v56 = (*(__int64 (__fastcall **)(__int64, _QWORD))v55)(v47, *(_QWORD *)(v55 + 8));
    if ( !v56 )
      sub_1B00F28(0LL, v57);
    v58 = *(System_Collections_Generic_IEnumerable_T__o **)(v56 + 128);
    if ( v58 && v58[1].monitor )
    {
      if ( !v37 )
        sub_1B00F28(v56, v58);
      System_Collections_Generic_List_int___AddRange(
        v37,
        v58,
        (const MethodInfo_33A4BB8 *)Method_System_Collections_Generic_List_int__AddRange__);
    }
  }
  v59 = *(_QWORD *)v47;
  v60 = *(unsigned __int16 *)(*(_QWORD *)v47 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v47 + 302LL) )
  {
    v61 = (int *)(*(_QWORD *)(v59 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v61 - 1) != System_IDisposable_TypeInfo )
    {
      --v60;
      v61 += 4;
      if ( !v60 )
        goto LABEL_36;
    }
    v62 = v59 + 16LL * *v61 + 312;
  }
  else
  {
LABEL_36:
    v62 = sub_1B52CAC(v47, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v62)(v47, *(_QWORD *)(v62 + 8));
  v63 = sub_1B00F18(System_Func_BattleBuffData_BuffData__int__bool__TypeInfo);
  System_Func_object__int__bool____ctor(
    (System_Func_T1__T2__TResult__o *)v63,
    (Il2CppObject *)v31,
    Method_BattleBuffData___c__DisplayClass74_0__RemoveLinkageBuff_b__0__,
    0LL);
  if ( !v37 )
    goto LABEL_100;
  if ( v37->fields._size >= 1 )
  {
    v64 = v37;
    v65 = 0;
    while ( 1 )
    {
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_int___get_Item(
                                                            v64,
                                                            v65,
                                                            (const MethodInfo_33A46BC *)Method_System_Collections_Generic_List_int__get_Item__);
      activeList = (System_Collections_Generic_List_object__o *)this->fields.activeList;
      if ( !activeList )
        goto LABEL_100;
      v67 = (unsigned int)Item;
      v68 = activeList->fields._size - 1;
      if ( v68 >= 0 )
        break;
LABEL_73:
      Item = (System_Collections_Generic_List_object__o *)this->fields.passiveList;
      if ( !Item )
        goto LABEL_100;
      v86 = Item->fields._size - 1;
      if ( v86 >= 0 )
      {
        do
        {
          Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                Item,
                                                                v86,
                                                                (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
          if ( !v63 )
            break;
          v87 = Item;
          Item = (System_Collections_Generic_List_object__o *)(*(__int64 (__fastcall **)(_QWORD, System_Collections_Generic_List_object__o *, _QWORD, _QWORD))(v63 + 24))(
                                                                *(_QWORD *)(v63 + 64),
                                                                Item,
                                                                v67,
                                                                *(_QWORD *)(v63 + 40));
          if ( ((unsigned __int8)Item & 1) != 0 )
          {
            if ( !v87 )
              goto LABEL_100;
            monitor = (System_Collections_Generic_IEnumerable_T__o *)v87[3].monitor;
            if ( monitor && monitor[1].monitor )
              System_Collections_Generic_List_int___AddRange(
                v96,
                monitor,
                (const MethodInfo_33A4BB8 *)Method_System_Collections_Generic_List_int__AddRange__);
            if ( v87[1].fields._size )
            {
              Item = (System_Collections_Generic_List_object__o *)this->fields.auraBuffList;
              if ( !Item )
                goto LABEL_100;
              if ( System_Collections_Generic_List_object___Contains(
                     Item,
                     (Il2CppObject *)v87,
                     (const MethodInfo_33C1D60 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
              {
                Item = (System_Collections_Generic_List_object__o *)this->fields.auraBuffList;
                if ( !Item )
                  goto LABEL_100;
                System_Collections_Generic_List_object___Remove(
                  Item,
                  (Il2CppObject *)v87,
                  (const MethodInfo_33C2EF8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
              }
            }
            BattleBuffData__RemoveClassIconEffectBuff(this, (BattleBuffData_BuffData_o *)v87, v88);
            if ( !endBuffs )
              goto LABEL_100;
            Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Contains(
                                                                  (System_Collections_Generic_List_object__o *)endBuffs,
                                                                  (Il2CppObject *)v87,
                                                                  (const MethodInfo_33C1D60 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
            if ( ((unsigned __int8)Item & 1) == 0 )
            {
              if ( !v36 )
                goto LABEL_100;
              items = v36->fields._items;
              v92 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
              ++v36->fields._version;
              if ( !items )
                goto LABEL_100;
              size = v36->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v36,
                  (Il2CppObject *)v87,
                  *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
              }
              else
              {
                v94 = &items->obj.klass + size;
                v36->fields._size = size + 1;
                v94[4] = (Il2CppClass *)v87;
                sub_1B00C70((ServantStatusBattleListViewItem_o *)(v94 + 4), (int32_t)v87, v89, v90);
              }
            }
            Item = (System_Collections_Generic_List_object__o *)this->fields.passiveList;
            if ( !Item )
              goto LABEL_100;
            System_Collections_Generic_List_object___RemoveAt(
              Item,
              v86,
              (const MethodInfo_33C31A4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__);
          }
          if ( --v86 < 0 )
            goto LABEL_98;
          Item = (System_Collections_Generic_List_object__o *)this->fields.passiveList;
        }
        while ( Item );
        goto LABEL_100;
      }
LABEL_98:
      v64 = v96;
      if ( ++v65 >= v96->fields._size )
        return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v36;
    }
    do
    {
      Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                            activeList,
                                                            v68,
                                                            (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
      if ( !v63 )
        break;
      v69 = Item;
      Item = (System_Collections_Generic_List_object__o *)(*(__int64 (__fastcall **)(_QWORD, System_Collections_Generic_List_object__o *, _QWORD, _QWORD))(v63 + 24))(
                                                            *(_QWORD *)(v63 + 64),
                                                            Item,
                                                            v67,
                                                            *(_QWORD *)(v63 + 40));
      if ( ((unsigned __int8)Item & 1) != 0 )
      {
        if ( !v69 )
          break;
        monitor = (System_Collections_Generic_IEnumerable_T__o *)v69[3].monitor;
        if ( monitor && monitor[1].monitor )
          System_Collections_Generic_List_int___AddRange(
            v96,
            monitor,
            (const MethodInfo_33A4BB8 *)Method_System_Collections_Generic_List_int__AddRange__);
        if ( v69[1].fields._size )
        {
          Item = (System_Collections_Generic_List_object__o *)this->fields.auraBuffList;
          if ( !Item )
            break;
          if ( System_Collections_Generic_List_object___Contains(
                 Item,
                 (Il2CppObject *)v69,
                 (const MethodInfo_33C1D60 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
          {
            Item = (System_Collections_Generic_List_object__o *)this->fields.auraBuffList;
            if ( !Item )
              break;
            System_Collections_Generic_List_object___Remove(
              Item,
              (Il2CppObject *)v69,
              (const MethodInfo_33C2EF8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
          }
        }
        BattleBuffData__RemoveClassIconEffectBuff(this, (BattleBuffData_BuffData_o *)v69, v70);
        if ( !endBuffs )
          break;
        Item = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___Contains(
                                                              (System_Collections_Generic_List_object__o *)endBuffs,
                                                              (Il2CppObject *)v69,
                                                              (const MethodInfo_33C1D60 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
        if ( ((unsigned __int8)Item & 1) == 0 )
        {
          if ( !v36 )
            break;
          v73 = v36->fields._items;
          v74 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
          ++v36->fields._version;
          if ( !v73 )
            break;
          v75 = v36->fields._size;
          if ( (unsigned int)v75 >= v73->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v36,
              (Il2CppObject *)v69,
              *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v74[4] + 192LL) + 112LL));
          }
          else
          {
            v76 = &v73->obj.klass + v75;
            v36->fields._size = v75 + 1;
            v76[4] = (Il2CppClass *)v69;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)(v76 + 4), (int32_t)v69, v71, v72);
          }
        }
        Item = (System_Collections_Generic_List_object__o *)this->fields.activeList;
        if ( !Item )
          break;
        System_Collections_Generic_List_object___RemoveAt(
          Item,
          v68,
          (const MethodInfo_33C31A4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAt__);
        if ( isCreateDummy )
        {
          Item = (System_Collections_Generic_List_object__o *)BattleBuffData__CreateDummyBuff(
                                                                (BattleBuffData_o *)Item,
                                                                (BattleBuffData_BuffData_o *)v69,
                                                                v77);
          v80 = (System_Collections_Generic_List_object__o *)this->fields.activeList;
          if ( !v80 )
            break;
          v81 = v80->fields._size;
          v82 = Item;
          if ( (int)v81 <= v68 )
          {
            v83 = v80->fields._items;
            v84 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
            ++v80->fields._version;
            if ( !v83 )
              break;
            if ( (unsigned int)v81 >= v83->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v80,
                (Il2CppObject *)Item,
                *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
            }
            else
            {
              v85 = &v83->obj.klass + v81;
              v80->fields._size = v81 + 1;
              v85[4] = (Il2CppClass *)v82;
              sub_1B00C70((ServantStatusBattleListViewItem_o *)(v85 + 4), (int32_t)v82, v78, v79);
            }
          }
          else
          {
            System_Collections_Generic_List_object___Insert(
              (System_Collections_Generic_List_object__o *)this->fields.activeList,
              v68,
              (Il2CppObject *)Item,
              (const MethodInfo_33C2780 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Insert__);
          }
        }
      }
      if ( --v68 < 0 )
        goto LABEL_73;
      activeList = (System_Collections_Generic_List_object__o *)this->fields.activeList;
    }
    while ( activeList );
LABEL_100:
    sub_1B00F28(Item, monitor);
  }
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v36;
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__RemoveNoTurnBuff(
        BattleBuffData_o *this,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  BattleLogic_o *v3; // x24
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
  System_Collections_Generic_List_object__o *v15; // x21
  __int64 v16; // x1
  void *All; // x0
  System_Collections_Generic_List_object__o *passiveList; // x22
  System_Predicate_object__o *v19; // x23
  BattleLogic_o *v20; // x19
  Il2CppObject *v21; // x24
  struct BattleBuffData___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_Collections_Generic_List_object__o *v25; // x22
  System_Predicate_object__o *v26; // x23
  System_Collections_Generic_List_object__o *activeList; // x22
  System_Predicate_object__o *v28; // x23
  BattleLogic_o *v29; // x25
  Il2CppObject *v30; // x24
  struct BattleBuffData___c_StaticFields *v31; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_Collections_Generic_IEnumerable_T__o *v34; // x0
  System_Collections_Generic_List_object__o *v35; // x22
  System_Predicate_object__o *v36; // x23
  const MethodInfo *v37; // x3
  System_Collections_Generic_IEnumerable_T__o *v38; // x0
  const MethodInfo *v39; // x2
  BattleBuffData_o *v40; // x0
  const MethodInfo *v41; // x3
  const MethodInfo *v42; // x1

  v3 = logic;
  if ( (byte_48E48E3 & 1) == 0 )
  {
    sub_1B00CCC(&Method_BattleBuffData_checkBuffClear__, logic);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v9);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v10);
    sub_1B00CCC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v11);
    sub_1B00CCC(&Method_BattleBuffData___c__RemoveNoTurnBuff_b__70_0__, v12);
    sub_1B00CCC(&Method_BattleBuffData___c__RemoveNoTurnBuff_b__70_1__, v13);
    sub_1B00CCC(&BattleBuffData___c_TypeInfo, v14);
    byte_48E48E3 = 1;
  }
  v15 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  All = BattleBuffData___c_TypeInfo;
  passiveList = (System_Collections_Generic_List_object__o *)this->fields.passiveList;
  if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    All = BattleBuffData___c_TypeInfo;
  }
  v19 = *(System_Predicate_object__o **)(*((_QWORD *)All + 23) + 64LL);
  if ( !v19 )
  {
    v20 = v3;
    if ( !*((_DWORD *)All + 56) )
    {
      j_il2cpp_runtime_class_init_0(All);
      All = BattleBuffData___c_TypeInfo;
    }
    v21 = (Il2CppObject *)**((_QWORD **)All + 23);
    v19 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_object____ctor(v19, v21, Method_BattleBuffData___c__RemoveNoTurnBuff_b__70_0__, 0LL);
    static_fields = BattleBuffData___c_TypeInfo->static_fields;
    static_fields->__9__70_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)v19;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__70_0, (int32_t)v19, v23, v24);
    v3 = v20;
  }
  if ( !passiveList )
    goto LABEL_24;
  All = System_Collections_Generic_List_object___FindAll(
          passiveList,
          (System_Predicate_T__o *)v19,
          (const MethodInfo_33C20E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  if ( !v15 )
    goto LABEL_24;
  System_Collections_Generic_List_object___AddRange(
    v15,
    (System_Collections_Generic_IEnumerable_T__o *)All,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v25 = (System_Collections_Generic_List_object__o *)this->fields.passiveList;
  v26 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_object____ctor(v26, (Il2CppObject *)this, Method_BattleBuffData_checkBuffClear__, 0LL);
  if ( !v25 )
    goto LABEL_24;
  System_Collections_Generic_List_object___RemoveAll(
    v25,
    (System_Predicate_T__o *)v26,
    (const MethodInfo_33C302C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  All = BattleBuffData___c_TypeInfo;
  activeList = (System_Collections_Generic_List_object__o *)this->fields.activeList;
  if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    All = BattleBuffData___c_TypeInfo;
  }
  v28 = *(System_Predicate_object__o **)(*((_QWORD *)All + 23) + 72LL);
  if ( !v28 )
  {
    v29 = v3;
    if ( !*((_DWORD *)All + 56) )
    {
      j_il2cpp_runtime_class_init_0(All);
      All = BattleBuffData___c_TypeInfo;
    }
    v30 = (Il2CppObject *)**((_QWORD **)All + 23);
    v28 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_object____ctor(v28, v30, Method_BattleBuffData___c__RemoveNoTurnBuff_b__70_1__, 0LL);
    v31 = BattleBuffData___c_TypeInfo->static_fields;
    v31->__9__70_1 = (struct System_Predicate_BattleBuffData_BuffData__o *)v28;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v31->__9__70_1, (int32_t)v28, v32, v33);
    v3 = v29;
  }
  if ( !activeList )
    goto LABEL_24;
  v34 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_object___FindAll(
                                                         activeList,
                                                         (System_Predicate_T__o *)v28,
                                                         (const MethodInfo_33C20E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  System_Collections_Generic_List_object___AddRange(
    v15,
    v34,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v35 = (System_Collections_Generic_List_object__o *)this->fields.activeList;
  v36 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_object____ctor(v36, (Il2CppObject *)this, Method_BattleBuffData_checkBuffClear__, 0LL);
  if ( !v35 )
    goto LABEL_24;
  System_Collections_Generic_List_object___RemoveAll(
    v35,
    (System_Predicate_T__o *)v36,
    (const MethodInfo_33C302C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v38 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__removeLinkageBuff(
                                                         this,
                                                         (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v15,
                                                         0,
                                                         v37);
  System_Collections_Generic_List_object___AddRange(
    v15,
    v38,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  BattleBuffData__checkAndAddResumptionHpFromLossMaxHp(
    this,
    (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v15,
    v39);
  BattleBuffData__CheckAndUpdateFieldIndividualityBuff(
    v40,
    (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v15,
    v3,
    v41);
  All = (void *)BattleBuffData__CheckInvalidSacrificeIndivArray(
                  (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v15,
                  v42);
  if ( ((unsigned __int8)All & 1) != 0 )
  {
    if ( v3 )
    {
      BattleLogic__updateFieldBuff(v3, 0LL);
      return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_object___ToArray(
                                                v15,
                                                (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    }
LABEL_24:
    sub_1B00F28(All, v16);
  }
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_object___ToArray(
                                            v15,
                                            (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleBuffData__RemovePassiveReplacedOnTransform(
        BattleBuffData_o *this,
        int32_t actorId,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BattleBuffData___c__DisplayClass247_0_o *v12; // x21
  System_Collections_Generic_IEnumerable_T__o *v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *passiveList; // x22
  System_Predicate_object__o *v16; // x23
  System_Collections_Generic_List_T__o *All; // x0
  System_Collections_Generic_List_object__o *activeList; // x23
  System_Collections_Generic_List_object__o *v19; // x22
  System_Predicate_object__o *v20; // x24
  System_Collections_Generic_List_object__o *v21; // x23
  System_Predicate_object__o *v22; // x24
  System_Collections_Generic_List_object__o *v23; // x23
  System_Predicate_object__o *v24; // x24
  const MethodInfo *v25; // x3

  if ( (byte_48E495D & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, *(_QWORD *)&actorId);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__, v8);
    sub_1B00CCC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v9);
    sub_1B00CCC(
      &Method_BattleBuffData___c__DisplayClass247_0__RemovePassiveReplacedOnTransform_g__IsRemovableBuff_0__,
      v10);
    sub_1B00CCC(&BattleBuffData___c__DisplayClass247_0_TypeInfo, v11);
    byte_48E495D = 1;
  }
  v12 = (BattleBuffData___c__DisplayClass247_0_o *)sub_1B00F18(BattleBuffData___c__DisplayClass247_0_TypeInfo);
  BattleBuffData___c__DisplayClass247_0___ctor(v12, 0LL);
  if ( !v12 )
    goto LABEL_10;
  v12->fields.actorId = actorId;
  passiveList = (System_Collections_Generic_List_object__o *)this->fields.passiveList;
  v16 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_object____ctor(
    v16,
    (Il2CppObject *)v12,
    Method_BattleBuffData___c__DisplayClass247_0__RemovePassiveReplacedOnTransform_g__IsRemovableBuff_0__,
    0LL);
  if ( !passiveList )
    goto LABEL_10;
  All = System_Collections_Generic_List_object___FindAll(
          passiveList,
          (System_Predicate_T__o *)v16,
          (const MethodInfo_33C20E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  activeList = (System_Collections_Generic_List_object__o *)this->fields.activeList;
  v19 = (System_Collections_Generic_List_object__o *)All;
  v20 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_object____ctor(
    v20,
    (Il2CppObject *)v12,
    Method_BattleBuffData___c__DisplayClass247_0__RemovePassiveReplacedOnTransform_g__IsRemovableBuff_0__,
    0LL);
  if ( !activeList )
    goto LABEL_10;
  v13 = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_object___FindAll(
                                                         activeList,
                                                         (System_Predicate_T__o *)v20,
                                                         (const MethodInfo_33C20E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  if ( !v19 )
    goto LABEL_10;
  System_Collections_Generic_List_object___AddRange(
    v19,
    v13,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v21 = (System_Collections_Generic_List_object__o *)this->fields.passiveList;
  v22 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_object____ctor(
    v22,
    (Il2CppObject *)v12,
    Method_BattleBuffData___c__DisplayClass247_0__RemovePassiveReplacedOnTransform_g__IsRemovableBuff_0__,
    0LL);
  if ( !v21
    || (System_Collections_Generic_List_object___RemoveAll(
          v21,
          (System_Predicate_T__o *)v22,
          (const MethodInfo_33C302C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__),
        v23 = (System_Collections_Generic_List_object__o *)this->fields.activeList,
        v24 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo),
        System_Predicate_object____ctor(
          v24,
          (Il2CppObject *)v12,
          Method_BattleBuffData___c__DisplayClass247_0__RemovePassiveReplacedOnTransform_g__IsRemovableBuff_0__,
          0LL),
        !v23) )
  {
LABEL_10:
    sub_1B00F28(v13, v14);
  }
  System_Collections_Generic_List_object___RemoveAll(
    v23,
    (System_Predicate_T__o *)v24,
    (const MethodInfo_33C302C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  BattleBuffData__RemoveLinkageAndUpdateRemoveBuffInfluence(
    this,
    (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v19,
    logic,
    v25);
}


RemovedBuffInfo_o *__fastcall BattleBuffData__RemoveProgressingBuffList(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *linkedBuffList,
        const MethodInfo *method)
{
  BattleBuffData_o *v4; // x19
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
  System_Object_array *v16; // x0
  const MethodInfo *v17; // x2
  System_Collections_Generic_List_object__o *v18; // x20
  System_Collections_Generic_List_object__o *passiveList; // x21
  System_Collections_Generic_List_BattleBuffData_BuffData__c *klass; // x22
  Il2CppObject *v21; // x23
  struct BattleBuffData___c_StaticFields *static_fields; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  System_Collections_Generic_List_object__o *activeList; // x21
  System_Predicate_object__o *monitor; // x22
  Il2CppObject *v27; // x23
  struct BattleBuffData___c_StaticFields *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_Collections_Generic_IEnumerable_T__o *All; // x0
  System_Collections_Generic_List_object__o *v32; // x21
  System_Predicate_object__o *v33; // x22
  System_Collections_Generic_List_object__o *v34; // x21
  System_Predicate_object__o *v35; // x22
  const MethodInfo *v36; // x3
  System_Collections_Generic_List_BattleBuffData_BuffData__o *v37; // x19
  const MethodInfo *v38; // x1
  const MethodInfo *v39; // x1
  _BOOL8 v40; // x0
  const MethodInfo *v41; // x3

  v4 = this;
  if ( (byte_48E48F2 & 1) == 0 )
  {
    sub_1B00CCC(&Method_BattleBuffData_checkBuffClear__, linkedBuffList);
    sub_1B00CCC(&BattleLogic_TypeInfo, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v10);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v11);
    sub_1B00CCC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v12);
    sub_1B00CCC(&Method_BattleBuffData___c__RemoveProgressingBuffList_b__88_0__, v13);
    sub_1B00CCC(&Method_BattleBuffData___c__RemoveProgressingBuffList_b__88_1__, v14);
    this = (BattleBuffData_o *)sub_1B00CCC(&BattleBuffData___c_TypeInfo, v15);
    byte_48E48F2 = 1;
  }
  if ( !linkedBuffList )
    goto LABEL_27;
  v16 = System_Collections_Generic_List_object___ToArray(
          (System_Collections_Generic_List_object__o *)linkedBuffList,
          (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  BattleBuffData__syncLinkageBuffChangeParam(v4, (BattleBuffData_BuffData_array *)v16, v17);
  v18 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  passiveList = (System_Collections_Generic_List_object__o *)v4->fields.passiveList;
  if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  }
  klass = this[1].fields.passiveList[3].klass;
  if ( !klass )
  {
    if ( !this[1].fields.addBuffOrder )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
    }
    v21 = (Il2CppObject *)this[1].fields.passiveList->klass;
    klass = (System_Collections_Generic_List_BattleBuffData_BuffData__c *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_object____ctor(
      (System_Predicate_object__o *)klass,
      v21,
      Method_BattleBuffData___c__RemoveProgressingBuffList_b__88_0__,
      0LL);
    static_fields = BattleBuffData___c_TypeInfo->static_fields;
    static_fields->__9__88_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)klass;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__88_0, (int32_t)klass, v23, v24);
  }
  if ( !passiveList )
    goto LABEL_27;
  this = (BattleBuffData_o *)System_Collections_Generic_List_object___FindAll(
                               passiveList,
                               (System_Predicate_T__o *)klass,
                               (const MethodInfo_33C20E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  if ( !v18 )
    goto LABEL_27;
  System_Collections_Generic_List_object___AddRange(
    v18,
    (System_Collections_Generic_IEnumerable_T__o *)this,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  activeList = (System_Collections_Generic_List_object__o *)v4->fields.activeList;
  if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  }
  monitor = (System_Predicate_object__o *)this[1].fields.passiveList[3].monitor;
  if ( !monitor )
  {
    if ( !this[1].fields.addBuffOrder )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
    }
    v27 = (Il2CppObject *)this[1].fields.passiveList->klass;
    monitor = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_object____ctor(monitor, v27, Method_BattleBuffData___c__RemoveProgressingBuffList_b__88_1__, 0LL);
    v28 = BattleBuffData___c_TypeInfo->static_fields;
    v28->__9__88_1 = (struct System_Predicate_BattleBuffData_BuffData__o *)monitor;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v28->__9__88_1, (int32_t)monitor, v29, v30);
  }
  if ( !activeList )
    goto LABEL_27;
  All = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_object___FindAll(
                                                         activeList,
                                                         (System_Predicate_T__o *)monitor,
                                                         (const MethodInfo_33C20E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  System_Collections_Generic_List_object___AddRange(
    v18,
    All,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v32 = (System_Collections_Generic_List_object__o *)v4->fields.passiveList;
  v33 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_object____ctor(v33, (Il2CppObject *)v4, Method_BattleBuffData_checkBuffClear__, 0LL);
  if ( !v32
    || (System_Collections_Generic_List_object___RemoveAll(
          v32,
          (System_Predicate_T__o *)v33,
          (const MethodInfo_33C302C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__),
        v34 = (System_Collections_Generic_List_object__o *)v4->fields.activeList,
        v35 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo),
        System_Predicate_object____ctor(v35, (Il2CppObject *)v4, Method_BattleBuffData_checkBuffClear__, 0LL),
        !v34) )
  {
LABEL_27:
    sub_1B00F28(this, linkedBuffList);
  }
  System_Collections_Generic_List_object___RemoveAll(
    v34,
    (System_Predicate_T__o *)v35,
    (const MethodInfo_33C302C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
  v37 = BattleBuffData__removeLinkageBuff(v4, (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v18, 0, v36);
  if ( BattleBuffData__CheckInvalidSacrificeIndivArray(
         (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v18,
         v38)
    || (v40 = BattleBuffData__CheckInvalidSacrificeIndivArray(v37, v39)) )
  {
    if ( !BattleLogic_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BattleLogic_TypeInfo);
    BattleLogic__DoUpdateFieldBuff(0LL);
  }
  return BattleBuffData__MakeRemoveBuffInfo(
           (BattleBuffData_o *)v40,
           (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v18,
           v37,
           v41);
}


void __fastcall BattleBuffData__RemoveSkillTypeBuff(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *buffList,
        System_Int32_array *skillTypes,
        const MethodInfo *method)
{
  BattleBuffData_o *v6; // x20
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *SkillTypeBuff; // x0
  __int64 v13; // x1
  _BOOL8 v14; // x0
  __int64 v15; // x1
  Il2CppObject *current; // x21
  _BOOL8 v17; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  System_Collections_Generic_List_object__o *auraBuffList; // x0
  __int64 v21; // x1
  System_Collections_Generic_List_object__o *v22; // x0
  System_Collections_Generic_List_Enumerator_object__o v23; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v24; // [xsp+20h] [xbp-60h] BYREF

  v6 = this;
  if ( (byte_48E4946 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, buffList);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v10);
    this = (BattleBuffData_o *)sub_1B00CCC(
                                 &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__,
                                 v11);
    byte_48E4946 = 1;
  }
  memset(&v24, 0, sizeof(v24));
  SkillTypeBuff = (System_Collections_Generic_List_object__o *)BattleBuffData__GetSkillTypeBuff(
                                                                 this,
                                                                 buffList,
                                                                 skillTypes,
                                                                 method);
  if ( !SkillTypeBuff )
    sub_1B00F28(0LL, v13);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v23,
    SkillTypeBuff,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v24 = v23;
  while ( 1 )
  {
    v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v24,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v14 )
      break;
    if ( !buffList )
      sub_1B00F28(v14, v15);
    current = v24.fields._current;
    v17 = System_Collections_Generic_List_object___Remove(
            (System_Collections_Generic_List_object__o *)buffList,
            v24.fields._current,
            (const MethodInfo_33C2EF8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
    if ( !current )
      sub_1B00F28(v17, v18);
    if ( LODWORD(current[4].klass) )
    {
      auraBuffList = (System_Collections_Generic_List_object__o *)v6->fields.auraBuffList;
      if ( !auraBuffList )
        sub_1B00F28(0LL, v18);
      if ( System_Collections_Generic_List_object___Contains(
             auraBuffList,
             current,
             (const MethodInfo_33C1D60 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
      {
        v22 = (System_Collections_Generic_List_object__o *)v6->fields.auraBuffList;
        if ( !v22 )
          sub_1B00F28(0LL, v21);
        System_Collections_Generic_List_object___Remove(
          v22,
          current,
          (const MethodInfo_33C2EF8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
      }
    }
    BattleBuffData__RemoveClassIconEffectBuff(v6, (BattleBuffData_BuffData_o *)current, v19);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v24,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
}


void __fastcall BattleBuffData__RemoveSkillTypePassiveBuff(
        BattleBuffData_o *this,
        System_Int32_array *skillTypes,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleBuffData__RemoveSkillTypeBuff(this, this->fields.passiveList, skillTypes, v3);
}


void __fastcall BattleBuffData__RemoveUpdateWaitIntervalBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *updateWaitIntervalBuffList; // x0

  if ( (byte_48E48C7 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__, buff);
    byte_48E48C7 = 1;
  }
  updateWaitIntervalBuffList = (System_Collections_Generic_List_object__o *)this->fields.updateWaitIntervalBuffList;
  if ( !updateWaitIntervalBuffList )
    sub_1B00F28(0LL, buff);
  System_Collections_Generic_List_object___Remove(
    updateWaitIntervalBuffList,
    (Il2CppObject *)buff,
    (const MethodInfo_33C2EF8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
}


void __fastcall BattleBuffData__ResetCommandAssistBuffActiveFlg(BattleBuffData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleBuffData_BuffData_array *PassiveList; // x0
  __int64 v4; // x1
  int max_length; // w8
  BattleBuffData_BuffData_array *v6; // x19
  unsigned int v7; // w21
  Il2CppClass **v8; // x8
  Il2CppClass *v9; // x20

  PassiveList = BattleBuffData__getPassiveList(this, 1, v2);
  if ( !PassiveList )
    goto LABEL_11;
  max_length = PassiveList->max_length;
  v6 = PassiveList;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
        sub_1B00F30(PassiveList, v4);
      v8 = &v6->obj.klass + (int)v7;
      v9 = v8[4];
      if ( !v9 )
        break;
      PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__IsCommandAssistBuff(
                                                       (BattleBuffData_BuffData_o *)v8[4],
                                                       0LL);
      if ( ((unsigned __int8)PassiveList & 1) != 0 )
        LOBYTE(v9->vtable[5].methodPtr) = 0;
      max_length = v6->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
LABEL_11:
    sub_1B00F28(PassiveList, v4);
  }
}


void __fastcall BattleBuffData__ResetCommandCodeBuffActiveFlg(BattleBuffData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleBuffData_BuffData_array *PassiveList; // x0
  __int64 v4; // x1
  int max_length; // w8
  BattleBuffData_BuffData_array *v6; // x19
  unsigned int v7; // w21
  Il2CppClass **v8; // x8
  Il2CppClass *v9; // x20

  PassiveList = BattleBuffData__getPassiveList(this, 1, v2);
  if ( !PassiveList )
    goto LABEL_11;
  max_length = PassiveList->max_length;
  v6 = PassiveList;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
        sub_1B00F30(PassiveList, v4);
      v8 = &v6->obj.klass + (int)v7;
      v9 = v8[4];
      if ( !v9 )
        break;
      PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__isCommandCodeBuff(
                                                       (BattleBuffData_BuffData_o *)v8[4],
                                                       0LL);
      if ( ((unsigned __int8)PassiveList & 1) != 0 )
        LOBYTE(v9->_1.generic_class) = 0;
      max_length = v6->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
LABEL_11:
    sub_1B00F28(PassiveList, v4);
  }
}


void __fastcall BattleBuffData__ResetNotTakeOverBuff(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattleBuffData___c_c *v6; // x0
  System_Action_object__o *_9__71_0; // x20
  Il2CppObject *v8; // x21
  struct BattleBuffData___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_List_object__o *activeList; // x0

  if ( (byte_48E48E4 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_BattleBuffData_BuffData__TypeInfo, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__, v3);
    sub_1B00CCC(&Method_BattleBuffData___c__ResetNotTakeOverBuff_b__71_0__, v4);
    sub_1B00CCC(&BattleBuffData___c_TypeInfo, v5);
    byte_48E48E4 = 1;
  }
  v6 = BattleBuffData___c_TypeInfo;
  if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v6 = BattleBuffData___c_TypeInfo;
  }
  _9__71_0 = (System_Action_object__o *)v6->static_fields->__9__71_0;
  if ( !_9__71_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = BattleBuffData___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v6->static_fields->__9;
    _9__71_0 = (System_Action_object__o *)sub_1B00F18(System_Action_BattleBuffData_BuffData__TypeInfo);
    System_Action_object____ctor(_9__71_0, v8, Method_BattleBuffData___c__ResetNotTakeOverBuff_b__71_0__, 0LL);
    static_fields = BattleBuffData___c_TypeInfo->static_fields;
    static_fields->__9__71_0 = (struct System_Action_BattleBuffData_BuffData__o *)_9__71_0;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__71_0, (int32_t)_9__71_0, v10, v11);
  }
  activeList = (System_Collections_Generic_List_object__o *)this->fields.activeList;
  if ( !activeList
    || (System_Collections_Generic_List_object___ForEach(
          activeList,
          (System_Action_T__o *)_9__71_0,
          (const MethodInfo_33C2410 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
        (activeList = (System_Collections_Generic_List_object__o *)this->fields.passiveList) == 0LL) )
  {
    sub_1B00F28(activeList, method);
  }
  System_Collections_Generic_List_object___ForEach(
    activeList,
    (System_Action_T__o *)_9__71_0,
    (const MethodInfo_33C2410 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleBuffData__ResetTargetUseBuff(
        BattleBuffData_o *this,
        int32_t targetType,
        bool isIntervalOnly,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x0
  __int64 v16; // x1
  int32_t v17; // w2
  int32_t v18; // w3
  const MethodInfo *v19; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v20; // x0
  System_Func_object__bool__o *v21; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x19
  int32_t v23; // w2
  int32_t v24; // w3
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x19
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v30; // x1
  __int64 v31; // x19
  __int64 v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  BattleBuffData_BuffData_o *v40; // x22
  const MethodInfo *v41; // x2
  __int64 v42; // x0
  __int64 v43; // x1
  BattleBuffData_IntervalData_o *intervalData; // x0
  __int64 v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0

  if ( (byte_48E4963 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___, *(_QWORD *)&targetType);
    sub_1B00CCC(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, v7);
    sub_1B00CCC(&System_IDisposable_TypeInfo, v8);
    sub_1B00CCC(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v9);
    sub_1B00CCC(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v10);
    sub_1B00CCC(&System_Collections_IEnumerator_TypeInfo, v11);
    sub_1B00CCC(&Method_BattleBuffData___c__DisplayClass253_0__ResetTargetUseBuff_b__0__, v12);
    sub_1B00CCC(&BattleBuffData___c__DisplayClass253_0_TypeInfo, v13);
    byte_48E4963 = 1;
  }
  v14 = sub_1B00F18(BattleBuffData___c__DisplayClass253_0_TypeInfo);
  BattleBuffData___c__DisplayClass253_0___ctor((BattleBuffData___c__DisplayClass253_0_o *)v14, 0LL);
  if ( !v14 )
    goto LABEL_42;
  *(_QWORD *)(v14 + 16) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v14 + 16), (int32_t)this, v17, v18);
  *(_DWORD *)(v14 + 24) = targetType;
  v20 = BattleBuffData__AllBuffEnumerable(this, v19);
  v21 = *(System_Func_object__bool__o **)(v14 + 32);
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)v20;
  if ( !v21 )
  {
    v21 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v21,
      (Il2CppObject *)v14,
      Method_BattleBuffData___c__DisplayClass253_0__ResetTargetUseBuff_b__0__,
      0LL);
    *(_QWORD *)(v14 + 32) = v21;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v14 + 32), (int32_t)v21, v23, v24);
  }
  v15 = System_Linq_Enumerable__Where_object_(
          v22,
          (System_Func_TSource__bool__o *)v21,
          (const MethodInfo_2D9D054 *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  if ( !v15 )
LABEL_42:
    sub_1B00F28(v15, v16);
  klass = v15->klass;
  v26 = v15;
  v27 = *(unsigned __int16 *)(&v15->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v15->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      --v27;
      p_offset += 4;
      if ( !v27 )
        goto LABEL_11;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_11:
    p_method = sub_1B52CAC(v15, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v31 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v26,
          *(_QWORD *)(p_method + 8));
  if ( !v31 )
    sub_1B00F28(0LL, v30);
  while ( 1 )
  {
    v32 = *(_QWORD *)v31;
    v33 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
    {
      v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v34 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_18;
      }
      v35 = v32 + 16LL * *v34 + 312;
    }
    else
    {
LABEL_18:
      v35 = sub_1B52CAC(v31, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v31, *(_QWORD *)(v35 + 8)) & 1) == 0 )
      break;
    v36 = *(_QWORD *)v31;
    v37 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
    {
      v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v38 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        --v37;
        v38 += 4;
        if ( !v37 )
          goto LABEL_25;
      }
      v39 = v36 + 16LL * *v38 + 312;
    }
    else
    {
LABEL_25:
      v39 = sub_1B52CAC(v31, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v40 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v39)(v31, *(_QWORD *)(v39 + 8));
    BattleBuffData__RemoveUpdateWaitIntervalBuff(this, v40, v41);
    if ( isIntervalOnly )
    {
      if ( !v40 )
        sub_1B00F28(v42, v43);
      intervalData = v40->fields.intervalData;
      if ( intervalData )
        BattleBuffData_IntervalData__Reset(intervalData, 0LL);
    }
    else
    {
      if ( !v40 )
        sub_1B00F28(v42, v43);
      BattleBuffData_BuffData__RevertUnused(v40, 1, 0LL);
    }
  }
  v45 = *(_QWORD *)v31;
  v46 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
  {
    v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
    {
      --v46;
      v47 += 4;
      if ( !v46 )
        goto LABEL_37;
    }
    v48 = v45 + 16LL * *v47 + 312;
  }
  else
  {
LABEL_37:
    v48 = sub_1B52CAC(v31, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v48)(v31, *(_QWORD *)(v48 + 8));
}


void __fastcall BattleBuffData__SetCommandAssistBuffActiveFlg(
        BattleBuffData_o *this,
        int64_t selectCommandAssistId,
        System_Action_BuffEntity__BattleBuffData_BuffData__o *setBuffAction,
        bool isRecharge,
        int32_t cardIndex,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  BattleBuffData_BuffData_array *PassiveList; // x24
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v18; // x25
  unsigned int v19; // w27
  BattleBuffData_BuffData_o *v20; // x26
  const MethodInfo *v21; // x3
  __int64 commandAssistId; // x8
  const MethodInfo *v23; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_48E493E & 1) == 0 )
  {
    sub_1B00CCC(&Method_ActionExtensions_Call_BuffEntity__BattleBuffData_BuffData___, selectCommandAssistId);
    sub_1B00CCC(&Method_DataManager_GetMasterData_BuffMaster___, v11);
    sub_1B00CCC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v12);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v13);
    byte_48E493E = 1;
  }
  entity = 0LL;
  PassiveList = BattleBuffData__getPassiveList(this, 1, (const MethodInfo *)setBuffAction);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_24;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !PassiveList )
    goto LABEL_24;
  max_length = PassiveList->max_length;
  if ( max_length >= 1 )
  {
    v18 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= max_length )
        sub_1B00F30(Instance, v16);
      v20 = PassiveList->m_Items[v19];
      if ( !v20 )
        break;
      if ( !v20->fields._isRemove )
      {
        Instance = (Il2CppObject *)BattleBuffData_BuffData__IsCommandAssistBuff(v20, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          commandAssistId = v20->fields.commandAssistId;
          v20->fields.isActiveCA = 0;
          if ( commandAssistId == selectCommandAssistId && (cardIndex == -1 || v20->fields.cardIndex == cardIndex) )
          {
            Instance = (Il2CppObject *)BattleBuffData__checkBuffSuccessful(this, v20, 1, v21);
            if ( ((unsigned __int8)Instance & 1) != 0 && v20->fields.reCharge <= 0 )
            {
              v20->fields.isActiveCA = 1;
              if ( isRecharge )
                BattleBuffData__RechargeCommandAssistBuff((BattleBuffData_o *)Instance, v20, v23);
              if ( !v18 )
                break;
              Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                           v18,
                                           &entity,
                                           v20->fields.buffId,
                                           (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                ActionExtensions__Call_object__object_(
                  (System_Action_T1__T2__o *)setBuffAction,
                  entity,
                  (Il2CppObject *)v20,
                  (const MethodInfo_2CBB7A0 *)Method_ActionExtensions_Call_BuffEntity__BattleBuffData_BuffData___);
            }
          }
        }
      }
      max_length = PassiveList->max_length;
      if ( (int)++v19 >= max_length )
        return;
    }
LABEL_24:
    sub_1B00F28(Instance, v16);
  }
}


void __fastcall BattleBuffData__SetCommandCardBuffActive(
        BattleBuffData_o *this,
        BattleCommandData_o *commandData,
        bool isCheckBuffSuccess,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x22
  const MethodInfo *v12; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  __int64 v14; // x1
  const MethodInfo *v15; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  int32_t v17; // w23
  bool v18; // w21
  Il2CppObject *Item; // x0
  const MethodInfo *v20; // x4

  if ( (byte_48E4952 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, commandData);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__, v9);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v10);
    byte_48E4952 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v12);
  if ( !v11 )
    sub_1B00F28(ActiveList, v14);
  System_Collections_Generic_List_object___AddRange(
    v11,
    ActiveList,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v15);
  System_Collections_Generic_List_object___AddRange(
    v11,
    PassiveList,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  if ( v11->fields._size >= 1 )
  {
    v17 = 0;
    v18 = isCheckBuffSuccess;
    do
    {
      Item = System_Collections_Generic_List_object___get_Item(
               v11,
               v17,
               (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
      BattleBuffData__CheckCommandCardBuffActive(this, commandData, (BattleBuffData_BuffData_o *)Item, v18, v20);
      ++v17;
    }
    while ( v17 < v11->fields._size );
  }
}


void __fastcall BattleBuffData__SetCommandCodeBuffActiveFlg(
        BattleBuffData_o *this,
        int64_t selectUserCCId,
        System_Action_BuffEntity__BattleBuffData_BuffData__o *setBuffAction,
        bool isRecharge,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  BattleBuffData_BuffData_array *PassiveList; // x23
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  int max_length; // w8
  DataMasterBase_TMaster__TEntity__PKType__o *v16; // x24
  unsigned int v17; // w26
  BattleBuffData_BuffData_o *v18; // x25
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x2
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_48E493C & 1) == 0 )
  {
    sub_1B00CCC(&Method_ActionExtensions_Call_BuffEntity__BattleBuffData_BuffData___, selectUserCCId);
    sub_1B00CCC(&Method_DataManager_GetMasterData_BuffMaster___, v9);
    sub_1B00CCC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__, v10);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_48E493C = 1;
  }
  entity = 0LL;
  PassiveList = BattleBuffData__getPassiveList(this, 1, (const MethodInfo *)setBuffAction);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_22;
  Instance = DataManager__GetMasterData_object_(
               (DataManager_o *)Instance,
               (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !PassiveList )
    goto LABEL_22;
  max_length = PassiveList->max_length;
  if ( max_length >= 1 )
  {
    v16 = (DataMasterBase_TMaster__TEntity__PKType__o *)Instance;
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= max_length )
        sub_1B00F30(Instance, v14);
      v18 = PassiveList->m_Items[v17];
      if ( !v18 )
        break;
      if ( !v18->fields._isRemove )
      {
        Instance = (Il2CppObject *)BattleBuffData_BuffData__isCommandCodeBuff(v18, 0LL);
        if ( ((unsigned __int8)Instance & 1) != 0 )
        {
          v18->fields.isActiveCC = 0;
          Instance = (Il2CppObject *)BattleBuffData_BuffData__IsMineCommandCode(v18, selectUserCCId, 0LL);
          if ( ((unsigned __int8)Instance & 1) != 0 )
          {
            Instance = (Il2CppObject *)BattleBuffData__checkBuffSuccessful(this, v18, 1, v19);
            if ( ((unsigned __int8)Instance & 1) != 0 && v18->fields.reCharge <= 0 )
            {
              v18->fields.isActiveCC = 1;
              if ( isRecharge )
                BattleBuffData__RechargeCommandCodeBuff((BattleBuffData_o *)Instance, v18, v20);
              if ( !v16 )
                break;
              Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                           v16,
                                           &entity,
                                           v18->fields.buffId,
                                           (const MethodInfo_2FE6AA0 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
              if ( ((unsigned __int8)Instance & 1) != 0 )
                ActionExtensions__Call_object__object_(
                  (System_Action_T1__T2__o *)setBuffAction,
                  entity,
                  (Il2CppObject *)v18,
                  (const MethodInfo_2CBB7A0 *)Method_ActionExtensions_Call_BuffEntity__BattleBuffData_BuffData___);
            }
          }
        }
      }
      max_length = PassiveList->max_length;
      if ( (int)++v17 >= max_length )
        return;
    }
LABEL_22:
    sub_1B00F28(Instance, v14);
  }
}


void __fastcall BattleBuffData__SetNoActBuffWithoutExecuteServant(
        BattleBuffData_o *this,
        BattleServantData_array *servantArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *passiveList; // x0
  _BOOL8 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_48E4957 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, servantArray);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v7);
    byte_48E4957 = 1;
  }
  memset(&v11, 0, sizeof(v11));
  passiveList = (System_Collections_Generic_List_object__o *)this->fields.passiveList;
  if ( !passiveList )
    sub_1B00F28(0LL, servantArray);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    passiveList,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &v11,
           (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v9 )
      break;
    if ( !v11.fields._current )
      sub_1B00F28(v9, v10);
    if ( SLODWORD(v11.fields._current[17].klass) >= 1 )
      BattleBuffData_BuffData__SetBuffNoActState((BattleBuffData_BuffData_o *)v11.fields._current, servantArray, 0LL);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v11,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
}


RemovedBuffInfo_o *__fastcall BattleBuffData__SubBuffFromCheckFunc(
        BattleBuffData_o *this,
        System_Func_BattleBuffData_BuffData__bool__o *checkFunc,
        bool isCreateDummy,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 activeList; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v14; // x8
  int32_t size; // w2
  __int64 v16; // x22
  int v17; // w9
  System_Collections_Generic_List_object__o *v18; // x23
  const MethodInfo *v19; // x3
  __int64 v20; // x8
  unsigned __int64 v21; // x26
  __int64 v22; // x24
  int32_t v23; // w2
  int32_t v24; // w3
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x0
  const MethodInfo *v29; // x2
  __int64 v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  __int64 v33; // x8
  ServantStatusBattleListViewItem_o *v34; // x0
  Il2CppObject *v35; // x1
  const MethodInfo *v36; // x2
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v37; // x25
  struct BattleBuffData_BuffData_array *v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  Il2CppClass **v41; // x0
  __int64 v42; // x8
  BattleBuffData_o *v43; // x0
  const MethodInfo *v44; // x3
  const MethodInfo *v45; // x2
  RemovedBuffInfo_o *v46; // x20

  if ( (byte_48E4903 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, checkFunc);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v11);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v12);
    byte_48E4903 = 1;
  }
  activeList = (__int64)this->fields.activeList;
  if ( !activeList )
    goto LABEL_40;
  activeList = (__int64)System_Collections_Generic_List_object___ToArray(
                          (System_Collections_Generic_List_object__o *)activeList,
                          (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  v14 = this->fields.activeList;
  if ( !v14 )
    goto LABEL_40;
  size = v14->fields._size;
  v16 = activeList;
  v17 = v14->fields._version + 1;
  v14->fields._size = 0;
  v14->fields._version = v17;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v14->fields._items, 0, size, 0LL);
  v18 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !v16 )
    goto LABEL_40;
  v20 = *(_QWORD *)(v16 + 24);
  if ( (int)v20 >= 1 )
  {
    v21 = 0LL;
    while ( 1 )
    {
      if ( v21 >= (unsigned int)v20 )
        sub_1B00F30(activeList, checkFunc);
      if ( !checkFunc )
        goto LABEL_40;
      v22 = *(_QWORD *)(v16 + 32 + 8 * v21);
      activeList = ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))checkFunc->fields.m_target)(
                     checkFunc->fields.original_method_info,
                     v22,
                     *(_QWORD *)&checkFunc->fields.extra_arg);
      if ( (activeList & 1) == 0 )
        break;
      if ( !v18 )
        goto LABEL_40;
      items = v18->fields._items;
      v26 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
      ++v18->fields._version;
      if ( !items )
        goto LABEL_40;
      v27 = v18->fields._size;
      if ( (unsigned int)v27 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v18,
          (Il2CppObject *)v22,
          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &items->obj.klass + v27;
        v18->fields._size = v27 + 1;
        v28[4] = (Il2CppClass *)v22;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v28 + 4), v22, v23, v24);
      }
      if ( !v22 )
        goto LABEL_40;
      if ( *(_DWORD *)(v22 + 64) )
      {
        activeList = (__int64)this->fields.auraBuffList;
        if ( !activeList )
          goto LABEL_40;
        if ( System_Collections_Generic_List_object___Contains(
               (System_Collections_Generic_List_object__o *)activeList,
               (Il2CppObject *)v22,
               (const MethodInfo_33C1D60 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
        {
          activeList = (__int64)this->fields.auraBuffList;
          if ( !activeList )
            goto LABEL_40;
          System_Collections_Generic_List_object___Remove(
            (System_Collections_Generic_List_object__o *)activeList,
            (Il2CppObject *)v22,
            (const MethodInfo_33C2EF8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
        }
      }
      BattleBuffData__RemoveClassIconEffectBuff(this, (BattleBuffData_BuffData_o *)v22, v29);
      if ( isCreateDummy )
      {
        v37 = this->fields.activeList;
        activeList = (__int64)BattleBuffData__CreateDummyBuff(
                                (BattleBuffData_o *)activeList,
                                (BattleBuffData_BuffData_o *)v22,
                                v36);
        if ( !v37 )
          goto LABEL_40;
        v38 = v37->fields._items;
        v39 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
        ++v37->fields._version;
        if ( !v38 )
          goto LABEL_40;
        v40 = v37->fields._size;
        v35 = (Il2CppObject *)activeList;
        if ( (unsigned int)v40 >= v38->max_length )
        {
          v42 = v39[4];
          activeList = (__int64)v37;
          goto LABEL_36;
        }
        v41 = &v38->obj.klass + v40;
        v37->fields._size = v40 + 1;
        v41[4] = (Il2CppClass *)v35;
        v34 = (ServantStatusBattleListViewItem_o *)(v41 + 4);
LABEL_33:
        sub_1B00C70(v34, (int32_t)v35, v23, v24);
      }
LABEL_37:
      LODWORD(v20) = *(_DWORD *)(v16 + 24);
      if ( (__int64)++v21 >= (int)v20 )
        goto LABEL_38;
    }
    activeList = (__int64)this->fields.activeList;
    if ( !activeList )
      goto LABEL_40;
    v30 = *(_QWORD *)(activeList + 16);
    v31 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
    ++*(_DWORD *)(activeList + 28);
    if ( !v30 )
      goto LABEL_40;
    v32 = *(int *)(activeList + 24);
    if ( (unsigned int)v32 >= *(_DWORD *)(v30 + 24) )
    {
      v42 = v31[4];
      v35 = (Il2CppObject *)v22;
LABEL_36:
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)activeList,
        v35,
        *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v42 + 192) + 112LL));
      goto LABEL_37;
    }
    v33 = v30 + 8 * v32;
    *(_DWORD *)(activeList + 24) = v32 + 1;
    *(_QWORD *)(v33 + 32) = v22;
    v34 = (ServantStatusBattleListViewItem_o *)(v33 + 32);
    LODWORD(v35) = v22;
    goto LABEL_33;
  }
LABEL_38:
  v43 = (BattleBuffData_o *)BattleBuffData__removeLinkageBuff(
                              this,
                              (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v18,
                              isCreateDummy,
                              v19);
  activeList = (__int64)BattleBuffData__MakeRemoveBuffInfo(
                          v43,
                          (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v18,
                          (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v43,
                          v44);
  if ( !activeList )
LABEL_40:
    sub_1B00F28(activeList, checkFunc);
  v46 = (RemovedBuffInfo_o *)activeList;
  BattleBuffData__checkAndAddResumptionHpFromLossMaxHp(
    this,
    *(System_Collections_Generic_List_BattleBuffData_BuffData__o **)(activeList + 16),
    v45);
  return v46;
}


// local variable allocation has failed, the output may be wrong!
RemovedBuffInfo_o *__fastcall BattleBuffData__SubBuffFromDeadActorId(
        BattleBuffData_o *this,
        int32_t actorId,
        bool isCreateDummy,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  BattleBuffData___c__DisplayClass110_0_o *v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  System_Func_object__bool__o *v12; // x21
  const MethodInfo *v13; // x3

  if ( (byte_48E4901 & 1) == 0 )
  {
    sub_1B00CCC(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, *(_QWORD *)&actorId);
    sub_1B00CCC(&Method_BattleBuffData___c__DisplayClass110_0__SubBuffFromDeadActorId_b__0__, v7);
    sub_1B00CCC(&BattleBuffData___c__DisplayClass110_0_TypeInfo, v8);
    byte_48E4901 = 1;
  }
  v9 = (BattleBuffData___c__DisplayClass110_0_o *)sub_1B00F18(BattleBuffData___c__DisplayClass110_0_TypeInfo);
  BattleBuffData___c__DisplayClass110_0___ctor(v9, 0LL);
  if ( !v9 )
    sub_1B00F28(v10, v11);
  v9->fields.actorId = actorId;
  v12 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v9,
    Method_BattleBuffData___c__DisplayClass110_0__SubBuffFromDeadActorId_b__0__,
    0LL);
  return BattleBuffData__SubBuffFromCheckFunc(
           this,
           (System_Func_BattleBuffData_BuffData__bool__o *)v12,
           isCreateDummy,
           v13);
}


// local variable allocation has failed, the output may be wrong!
RemovedBuffInfo_o *__fastcall BattleBuffData__SubBuffFromType(
        BattleBuffData_o *this,
        int32_t buffId,
        bool isCreateDummy,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x22
  BuffMaster_o *buffMst; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  const MethodInfo *v14; // x1
  System_Func_object__bool__o *v15; // x21
  const MethodInfo *v16; // x3

  if ( (byte_48E4900 & 1) == 0 )
  {
    sub_1B00CCC(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, *(_QWORD *)&buffId);
    sub_1B00CCC(&Method_BattleBuffData___c__DisplayClass109_0__SubBuffFromType_b__0__, v7);
    sub_1B00CCC(&BattleBuffData___c__DisplayClass109_0_TypeInfo, v8);
    byte_48E4900 = 1;
  }
  v9 = sub_1B00F18(BattleBuffData___c__DisplayClass109_0_TypeInfo);
  BattleBuffData___c__DisplayClass109_0___ctor((BattleBuffData___c__DisplayClass109_0_o *)v9, 0LL);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = this,
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)this, v12, v13),
        (buffMst = BattleBuffData__get_buffMst(this, v14)) == 0LL) )
  {
    sub_1B00F28(buffMst, v11);
  }
  *(_DWORD *)(v9 + 24) = BuffMaster__GetBuffType(buffMst, buffId, -1, 0LL);
  v15 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v15,
    (Il2CppObject *)v9,
    Method_BattleBuffData___c__DisplayClass109_0__SubBuffFromType_b__0__,
    0LL);
  return BattleBuffData__SubBuffFromCheckFunc(
           this,
           (System_Func_BattleBuffData_BuffData__bool__o *)v15,
           isCreateDummy,
           v16);
}


RemovedBuffInfo_o *__fastcall BattleBuffData__SubBuffSpecified(
        BattleBuffData_o *this,
        System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *toRemove,
        bool isCreateDummy,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  System_Func_object__bool__o *v14; // x21
  const MethodInfo *v15; // x3

  if ( (byte_48E4902 & 1) == 0 )
  {
    sub_1B00CCC(&System_Func_BattleBuffData_BuffData__bool__TypeInfo, toRemove);
    sub_1B00CCC(&Method_BattleBuffData___c__DisplayClass111_0__SubBuffSpecified_g__CheckFunc_0__, v7);
    sub_1B00CCC(&BattleBuffData___c__DisplayClass111_0_TypeInfo, v8);
    byte_48E4902 = 1;
  }
  v9 = sub_1B00F18(BattleBuffData___c__DisplayClass111_0_TypeInfo);
  BattleBuffData___c__DisplayClass111_0___ctor((BattleBuffData___c__DisplayClass111_0_o *)v9, 0LL);
  if ( !v9 )
    sub_1B00F28(v10, v11);
  *(_QWORD *)(v9 + 16) = toRemove;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v9 + 16), (int32_t)toRemove, v12, v13);
  v14 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v14,
    (Il2CppObject *)v9,
    Method_BattleBuffData___c__DisplayClass111_0__SubBuffSpecified_g__CheckFunc_0__,
    0LL);
  return BattleBuffData__SubBuffFromCheckFunc(
           this,
           (System_Func_BattleBuffData_BuffData__bool__o *)v14,
           isCreateDummy,
           v15);
}


void __fastcall BattleBuffData__UpdateBaseAddOrder(BattleBuffData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x20
  BattleBuffData___c_c *v10; // x0
  System_Func_object__int__o *_9__218_0; // x21
  Il2CppObject *v12; // x22
  ServantStatusBattleListViewItem_o *p__9__218_0; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w20
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x21
  BattleBuffData___c_c *v18; // x0
  System_Func_object__int__o *_9__218_1; // x22
  Il2CppObject *v20; // x23
  ServantStatusBattleListViewItem_o *p__9__218_1; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  int32_t v24; // w21

  v2 = this;
  if ( (byte_48E494A & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Linq_Enumerable_Max_BattleBuffData_BuffData___, method);
    sub_1B00CCC(&System_Func_BattleBuffData_BuffData__int__TypeInfo, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v4);
    sub_1B00CCC(&System_Math_TypeInfo, v5);
    sub_1B00CCC(&Method_BattleBuffData___c__UpdateBaseAddOrder_b__218_0__, v6);
    sub_1B00CCC(&Method_BattleBuffData___c__UpdateBaseAddOrder_b__218_1__, v7);
    this = (BattleBuffData_o *)sub_1B00CCC(&BattleBuffData___c_TypeInfo, v8);
    byte_48E494A = 1;
  }
  activeList = v2->fields.activeList;
  if ( !activeList )
    goto LABEL_26;
  if ( activeList->fields._size < 1 )
  {
    v16 = 0;
  }
  else
  {
    v10 = BattleBuffData___c_TypeInfo;
    if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      v10 = BattleBuffData___c_TypeInfo;
    }
    _9__218_0 = (System_Func_object__int__o *)v10->static_fields->__9__218_0;
    if ( !_9__218_0 )
    {
      if ( !v10->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v10);
        v10 = BattleBuffData___c_TypeInfo;
      }
      v12 = (Il2CppObject *)v10->static_fields->__9;
      _9__218_0 = (System_Func_object__int__o *)sub_1B00F18(System_Func_BattleBuffData_BuffData__int__TypeInfo);
      System_Func_object__int____ctor(_9__218_0, v12, Method_BattleBuffData___c__UpdateBaseAddOrder_b__218_0__, 0LL);
      p__9__218_0 = (ServantStatusBattleListViewItem_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__218_0;
      p__9__218_0->klass = (ServantStatusBattleListViewItem_c *)_9__218_0;
      sub_1B00C70(p__9__218_0, (int32_t)_9__218_0, v14, v15);
    }
    this = (BattleBuffData_o *)System_Linq_Enumerable__Max_object_(
                                 (System_Collections_Generic_IEnumerable_TSource__o *)activeList,
                                 (System_Func_TSource__int__o *)_9__218_0,
                                 (const MethodInfo_2D88A2C *)Method_System_Linq_Enumerable_Max_BattleBuffData_BuffData___);
    v16 = (int)this;
  }
  passiveList = v2->fields.passiveList;
  if ( !passiveList )
LABEL_26:
    sub_1B00F28(this, method);
  if ( passiveList->fields._size < 1 )
  {
    v24 = 0;
  }
  else
  {
    v18 = BattleBuffData___c_TypeInfo;
    if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      v18 = BattleBuffData___c_TypeInfo;
    }
    _9__218_1 = (System_Func_object__int__o *)v18->static_fields->__9__218_1;
    if ( !_9__218_1 )
    {
      if ( !v18->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v18);
        v18 = BattleBuffData___c_TypeInfo;
      }
      v20 = (Il2CppObject *)v18->static_fields->__9;
      _9__218_1 = (System_Func_object__int__o *)sub_1B00F18(System_Func_BattleBuffData_BuffData__int__TypeInfo);
      System_Func_object__int____ctor(_9__218_1, v20, Method_BattleBuffData___c__UpdateBaseAddOrder_b__218_1__, 0LL);
      p__9__218_1 = (ServantStatusBattleListViewItem_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__218_1;
      p__9__218_1->klass = (ServantStatusBattleListViewItem_c *)_9__218_1;
      sub_1B00C70(p__9__218_1, (int32_t)_9__218_1, v22, v23);
    }
    v24 = System_Linq_Enumerable__Max_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)passiveList,
            (System_Func_TSource__int__o *)_9__218_1,
            (const MethodInfo_2D88A2C *)Method_System_Linq_Enumerable_Max_BattleBuffData_BuffData___);
  }
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v2->fields.addBuffOrder = System_Math__Max_61144256(v16, v24, 0LL) + 1;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleBuffData__UpdateBuffAddOrder(
        BattleBuffData_o *this,
        int32_t addPassiveMaxOrder,
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
  BattleBuffData___c__DisplayClass217_0_o *v17; // x20
  __int64 v18; // x0
  __int64 v19; // x1
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x21
  BattleBuffData___c_c *v21; // x0
  System_Func_object__int__o *_9__217_0; // x22
  Il2CppObject *v23; // x23
  struct BattleBuffData___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *passiveList; // x21
  int32_t v28; // w22
  BattleBuffData___c_c *v29; // x0
  struct BattleBuffData___c_StaticFields *v30; // x8
  System_Func_object__int__o *_9__217_1; // x23
  Il2CppObject *v32; // x24
  ServantStatusBattleListViewItem_o *p__9__217_1; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  int32_t v36; // w21
  int32_t v37; // w0
  System_Func_object__int__o *_9__217_2; // x22
  Il2CppObject *v39; // x23
  ServantStatusBattleListViewItem_o *p__9__217_2; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  System_Collections_Generic_List_object__o *v43; // x21
  System_Action_object__o *v44; // x22
  System_Collections_Generic_List_object__o *v45; // x19
  System_Action_object__o *v46; // x21

  if ( (byte_48E4949 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_BattleBuffData_BuffData__TypeInfo, *(_QWORD *)&addPassiveMaxOrder);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Min_BattleBuffData_BuffData___, v5);
    sub_1B00CCC(&System_Func_BattleBuffData_BuffData__int__TypeInfo, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v8);
    sub_1B00CCC(&System_Math_TypeInfo, v9);
    sub_1B00CCC(&Method_BattleBuffData___c__UpdateBuffAddOrder_b__217_0__, v10);
    sub_1B00CCC(&Method_BattleBuffData___c__UpdateBuffAddOrder_b__217_1__, v11);
    sub_1B00CCC(&Method_BattleBuffData___c__UpdateBuffAddOrder_b__217_2__, v12);
    sub_1B00CCC(&Method_BattleBuffData___c__DisplayClass217_0__UpdateBuffAddOrder_b__3__, v13);
    sub_1B00CCC(&Method_BattleBuffData___c__DisplayClass217_0__UpdateBuffAddOrder_b__4__, v14);
    sub_1B00CCC(&BattleBuffData___c__DisplayClass217_0_TypeInfo, v15);
    sub_1B00CCC(&BattleBuffData___c_TypeInfo, v16);
    byte_48E4949 = 1;
  }
  v17 = (BattleBuffData___c__DisplayClass217_0_o *)sub_1B00F18(BattleBuffData___c__DisplayClass217_0_TypeInfo);
  BattleBuffData___c__DisplayClass217_0___ctor(v17, 0LL);
  if ( !v17 )
    goto LABEL_39;
  v17->fields.addPassiveMaxOrder = addPassiveMaxOrder;
  activeList = this->fields.activeList;
  if ( !activeList )
    goto LABEL_39;
  if ( activeList->fields._size <= 0 )
  {
    passiveList = this->fields.passiveList;
    if ( !passiveList )
      goto LABEL_39;
    if ( passiveList->fields._size <= 0 )
      return;
    v28 = 0;
  }
  else
  {
    v21 = BattleBuffData___c_TypeInfo;
    if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      v21 = BattleBuffData___c_TypeInfo;
    }
    _9__217_0 = (System_Func_object__int__o *)v21->static_fields->__9__217_0;
    if ( !_9__217_0 )
    {
      if ( !v21->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v21);
        v21 = BattleBuffData___c_TypeInfo;
      }
      v23 = (Il2CppObject *)v21->static_fields->__9;
      _9__217_0 = (System_Func_object__int__o *)sub_1B00F18(System_Func_BattleBuffData_BuffData__int__TypeInfo);
      System_Func_object__int____ctor(_9__217_0, v23, Method_BattleBuffData___c__UpdateBuffAddOrder_b__217_0__, 0LL);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
      static_fields->__9__217_0 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__217_0;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__217_0, (int32_t)_9__217_0, v25, v26);
    }
    v18 = System_Linq_Enumerable__Min_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)activeList,
            (System_Func_TSource__int__o *)_9__217_0,
            (const MethodInfo_2D897B0 *)Method_System_Linq_Enumerable_Min_BattleBuffData_BuffData___);
    passiveList = this->fields.passiveList;
    if ( !passiveList )
      goto LABEL_39;
    v28 = v18;
  }
  if ( passiveList->fields._size >= 1 )
  {
    v29 = BattleBuffData___c_TypeInfo;
    if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      v29 = BattleBuffData___c_TypeInfo;
    }
    v30 = v29->static_fields;
    if ( v28 <= 0 )
    {
      _9__217_2 = (System_Func_object__int__o *)v30->__9__217_2;
      if ( !_9__217_2 )
      {
        if ( !v29->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v29);
          v29 = BattleBuffData___c_TypeInfo;
        }
        v39 = (Il2CppObject *)v29->static_fields->__9;
        _9__217_2 = (System_Func_object__int__o *)sub_1B00F18(System_Func_BattleBuffData_BuffData__int__TypeInfo);
        System_Func_object__int____ctor(_9__217_2, v39, Method_BattleBuffData___c__UpdateBuffAddOrder_b__217_2__, 0LL);
        p__9__217_2 = (ServantStatusBattleListViewItem_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__217_2;
        p__9__217_2->klass = (ServantStatusBattleListViewItem_c *)_9__217_2;
        sub_1B00C70(p__9__217_2, (int32_t)_9__217_2, v41, v42);
      }
      v37 = System_Linq_Enumerable__Min_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)passiveList,
              (System_Func_TSource__int__o *)_9__217_2,
              (const MethodInfo_2D897B0 *)Method_System_Linq_Enumerable_Min_BattleBuffData_BuffData___);
    }
    else
    {
      _9__217_1 = (System_Func_object__int__o *)v30->__9__217_1;
      if ( !_9__217_1 )
      {
        if ( !v29->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v29);
          v29 = BattleBuffData___c_TypeInfo;
        }
        v32 = (Il2CppObject *)v29->static_fields->__9;
        _9__217_1 = (System_Func_object__int__o *)sub_1B00F18(System_Func_BattleBuffData_BuffData__int__TypeInfo);
        System_Func_object__int____ctor(_9__217_1, v32, Method_BattleBuffData___c__UpdateBuffAddOrder_b__217_1__, 0LL);
        p__9__217_1 = (ServantStatusBattleListViewItem_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__217_1;
        p__9__217_1->klass = (ServantStatusBattleListViewItem_c *)_9__217_1;
        sub_1B00C70(p__9__217_1, (int32_t)_9__217_1, v34, v35);
      }
      v36 = System_Linq_Enumerable__Min_object_(
              (System_Collections_Generic_IEnumerable_TSource__o *)passiveList,
              (System_Func_TSource__int__o *)_9__217_1,
              (const MethodInfo_2D897B0 *)Method_System_Linq_Enumerable_Min_BattleBuffData_BuffData___);
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      v37 = System_Math__Min_61144584(v28, v36, 0LL);
    }
    v28 = v37;
  }
  if ( v28 <= v17->fields.addPassiveMaxOrder )
  {
    v43 = (System_Collections_Generic_List_object__o *)this->fields.activeList;
    v44 = (System_Action_object__o *)sub_1B00F18(System_Action_BattleBuffData_BuffData__TypeInfo);
    System_Action_object____ctor(
      v44,
      (Il2CppObject *)v17,
      Method_BattleBuffData___c__DisplayClass217_0__UpdateBuffAddOrder_b__3__,
      0LL);
    if ( v43 )
    {
      System_Collections_Generic_List_object___ForEach(
        v43,
        (System_Action_T__o *)v44,
        (const MethodInfo_33C2410 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
      v45 = (System_Collections_Generic_List_object__o *)this->fields.passiveList;
      v46 = (System_Action_object__o *)sub_1B00F18(System_Action_BattleBuffData_BuffData__TypeInfo);
      System_Action_object____ctor(
        v46,
        (Il2CppObject *)v17,
        Method_BattleBuffData___c__DisplayClass217_0__UpdateBuffAddOrder_b__4__,
        0LL);
      if ( v45 )
      {
        System_Collections_Generic_List_object___ForEach(
          v45,
          (System_Action_T__o *)v46,
          (const MethodInfo_33C2410 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
        return;
      }
    }
LABEL_39:
    sub_1B00F28(v18, v19);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleBuffData__UpdateForceAllBuffNoAct(
        BattleBuffData_o *this,
        int32_t showState,
        System_Int32_array *targets,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x22
  System_Collections_Generic_List_object__o *passiveList; // x0
  __int64 v12; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  System_Action_object__o *v15; // x20

  if ( (byte_48E491B & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_BattleBuffData_BuffData__TypeInfo, *(_QWORD *)&showState);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__, v7);
    sub_1B00CCC(&Method_BattleBuffData___c__DisplayClass149_0__UpdateForceAllBuffNoAct_b__0__, v8);
    sub_1B00CCC(&BattleBuffData___c__DisplayClass149_0_TypeInfo, v9);
    byte_48E491B = 1;
  }
  v10 = sub_1B00F18(BattleBuffData___c__DisplayClass149_0_TypeInfo);
  BattleBuffData___c__DisplayClass149_0___ctor((BattleBuffData___c__DisplayClass149_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_7;
  *(_QWORD *)(v10 + 16) = targets;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v10 + 16), (int32_t)targets, v13, v14);
  *(_DWORD *)(v10 + 24) = showState;
  v15 = (System_Action_object__o *)sub_1B00F18(System_Action_BattleBuffData_BuffData__TypeInfo);
  System_Action_object____ctor(
    v15,
    (Il2CppObject *)v10,
    Method_BattleBuffData___c__DisplayClass149_0__UpdateForceAllBuffNoAct_b__0__,
    0LL);
  passiveList = (System_Collections_Generic_List_object__o *)this->fields.passiveList;
  if ( !passiveList
    || (System_Collections_Generic_List_object___ForEach(
          passiveList,
          (System_Action_T__o *)v15,
          (const MethodInfo_33C2410 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
        (passiveList = (System_Collections_Generic_List_object__o *)this->fields.activeList) == 0LL) )
  {
LABEL_7:
    sub_1B00F28(passiveList, v12);
  }
  System_Collections_Generic_List_object___ForEach(
    passiveList,
    (System_Action_T__o *)v15,
    (const MethodInfo_33C2410 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
}


void __fastcall BattleBuffData__UpdateForceBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        bool isAdd,
        const MethodInfo *method)
{
  BattleBuffData_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x8
  System_Collections_Generic_List_object__o *v14; // x19
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  Il2CppClass **v20; // x0
  BattleBuffData___c_c *v21; // x0
  System_Comparison_T__o *_9__92_0; // x20
  Il2CppObject *v23; // x21
  struct BattleBuffData___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3

  v6 = this;
  if ( (byte_48E48F6 & 1) == 0 )
  {
    sub_1B00CCC(&System_Comparison_BattleBuffData_BuffData__TypeInfo, buff);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__, v10);
    sub_1B00CCC(&Method_BattleBuffData___c__UpdateForceBuff_b__92_0__, v11);
    this = (BattleBuffData_o *)sub_1B00CCC(&BattleBuffData___c_TypeInfo, v12);
    byte_48E48F6 = 1;
  }
  if ( !buff )
    goto LABEL_22;
  v13 = 32LL;
  if ( buff->fields.passive )
    v13 = 24LL;
  v14 = *(System_Collections_Generic_List_object__o **)((char *)&v6->klass + v13);
  if ( !v14 )
    goto LABEL_22;
  this = (BattleBuffData_o *)System_Collections_Generic_List_object___Contains(
                               v14,
                               (Il2CppObject *)buff,
                               (const MethodInfo_33C1D60 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
  if ( isAdd )
  {
    if ( ((unsigned __int8)this & 1) != 0 )
      goto LABEL_15;
    items = v14->fields._items;
    v18 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
    ++v14->fields._version;
    if ( items )
    {
      size = v14->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v14,
          (Il2CppObject *)buff,
          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v20 = &items->obj.klass + size;
        v14->fields._size = size + 1;
        v20[4] = (Il2CppClass *)buff;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v20 + 4), (int32_t)buff, v15, v16);
      }
      goto LABEL_15;
    }
LABEL_22:
    sub_1B00F28(this, buff);
  }
  if ( ((unsigned __int8)this & 1) != 0 )
    System_Collections_Generic_List_object___Remove(
      v14,
      (Il2CppObject *)buff,
      (const MethodInfo_33C2EF8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
LABEL_15:
  v21 = BattleBuffData___c_TypeInfo;
  if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v21 = BattleBuffData___c_TypeInfo;
  }
  _9__92_0 = (System_Comparison_T__o *)v21->static_fields->__9__92_0;
  if ( !_9__92_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = BattleBuffData___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v21->static_fields->__9;
    _9__92_0 = (System_Comparison_T__o *)sub_1B00F18(System_Comparison_BattleBuffData_BuffData__TypeInfo);
    System_Comparison_object____ctor(_9__92_0, v23, Method_BattleBuffData___c__UpdateForceBuff_b__92_0__, 0LL);
    static_fields = BattleBuffData___c_TypeInfo->static_fields;
    static_fields->__9__92_0 = (struct System_Comparison_BattleBuffData_BuffData__o *)_9__92_0;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__92_0, (int32_t)_9__92_0, v25, v26);
  }
  System_Collections_Generic_List_object___Sort_54277268(
    v14,
    _9__92_0,
    (const MethodInfo_33C3494 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Sort__);
}


void __fastcall BattleBuffData__UpdateForceNoField(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattleBuffData___c_c *v6; // x0
  System_Action_object__o *_9__229_0; // x20
  Il2CppObject *v8; // x21
  ServantStatusBattleListViewItem_o *p__9__229_0; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_List_object__o *activeList; // x0

  if ( (byte_48E4950 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_BattleBuffData_BuffData__TypeInfo, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__, v3);
    sub_1B00CCC(&Method_BattleBuffData___c__UpdateForceNoField_b__229_0__, v4);
    sub_1B00CCC(&BattleBuffData___c_TypeInfo, v5);
    byte_48E4950 = 1;
  }
  v6 = BattleBuffData___c_TypeInfo;
  if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v6 = BattleBuffData___c_TypeInfo;
  }
  _9__229_0 = (System_Action_object__o *)v6->static_fields->__9__229_0;
  if ( !_9__229_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = BattleBuffData___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v6->static_fields->__9;
    _9__229_0 = (System_Action_object__o *)sub_1B00F18(System_Action_BattleBuffData_BuffData__TypeInfo);
    System_Action_object____ctor(_9__229_0, v8, Method_BattleBuffData___c__UpdateForceNoField_b__229_0__, 0LL);
    p__9__229_0 = (ServantStatusBattleListViewItem_o *)&BattleBuffData___c_TypeInfo->static_fields->__9__229_0;
    p__9__229_0->klass = (ServantStatusBattleListViewItem_c *)_9__229_0;
    sub_1B00C70(p__9__229_0, (int32_t)_9__229_0, v10, v11);
  }
  activeList = (System_Collections_Generic_List_object__o *)this->fields.activeList;
  if ( !activeList
    || (System_Collections_Generic_List_object___ForEach(
          activeList,
          (System_Action_T__o *)_9__229_0,
          (const MethodInfo_33C2410 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
        (activeList = (System_Collections_Generic_List_object__o *)this->fields.passiveList) == 0LL) )
  {
    sub_1B00F28(activeList, method);
  }
  System_Collections_Generic_List_object___ForEach(
    activeList,
    (System_Action_T__o *)_9__229_0,
    (const MethodInfo_33C2410 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
}


void __fastcall BattleBuffData__UpdateSkillRelationBuff(BattleBuffData_o *this, const MethodInfo *method)
{
  BattleBuffData_SkillRankChangeData_o *skillChangeData; // x0

  skillChangeData = this->fields.skillChangeData;
  if ( skillChangeData )
    BattleBuffData_SkillRankChangeData__Update(skillChangeData, 0LL);
}


BattleActionData_BuffData_o *__fastcall BattleBuffData__UseFieldProgressingDoNotAct(
        BattleBuffData_o *this,
        BattleServantData_o *svtData,
        int32_t funcIndex,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  System_Collections_Generic_List_object__o *v15; // x20
  System_Collections_Generic_List_object__o *v16; // x24
  __int64 v17; // x21
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  _BOOL8 v24; // x0
  const MethodInfo *v25; // x1
  Il2CppObject *current; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *buffMst; // x0
  __int64 v28; // x1
  BuffEntity_o *Entity; // x0
  __int64 v30; // x1
  BuffEntity_o *v31; // x25
  __int64 DamageRelease; // x0
  __int64 v33; // x1
  System_String_o *DamageReleaseText; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  const MethodInfo *v37; // x2
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v40; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_48E48F1 & 1) == 0 )
  {
    sub_1B00CCC(&BattleActionData_BuffData_TypeInfo, svtData);
    sub_1B00CCC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v13);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v14);
    byte_48E48F1 = 1;
  }
  memset(&v40, 0, sizeof(v40));
  v15 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v16 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v17 = sub_1B00F18(BattleActionData_BuffData_TypeInfo);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v17, v18);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v19);
  if ( !v16 )
    sub_1B00F28(PassiveList, v21);
  System_Collections_Generic_List_object___AddRange(
    v16,
    PassiveList,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v22);
  System_Collections_Generic_List_object___AddRange(
    v16,
    ActiveList,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v39,
    v16,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v40 = v39;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v40,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v24 )
      break;
    current = v40.fields._current;
    if ( !v40.fields._current )
      sub_1B00F28(v24, v25);
    if ( !BYTE1(v40.fields._current[24].klass) )
    {
      buffMst = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleBuffData__get_buffMst(this, v25);
      if ( !buffMst )
        sub_1B00F28(0LL, v28);
      Entity = (BuffEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                 buffMst,
                                 (int32_t)current[1].klass,
                                 (const MethodInfo_2FE6A4C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      v31 = Entity;
      if ( !Entity )
        sub_1B00F28(0LL, v30);
      if ( Entity->fields.type == 32 )
      {
        DamageRelease = BuffEntity__getDamageRelease(Entity, 0LL);
        if ( (int)DamageRelease >= 1 )
        {
          LODWORD(current[1].monitor) = 0;
          if ( !v17 )
            sub_1B00F28(DamageRelease, v33);
          *(_DWORD *)(v17 + 16) = funcIndex;
          if ( !svtData )
            sub_1B00F28(DamageRelease, v33);
          *(_DWORD *)(v17 + 40) = svtData->fields.uniqueId;
          DamageReleaseText = BuffEntity__getDamageReleaseText(v31, 0LL);
          *(_QWORD *)(v17 + 56) = DamageReleaseText;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v17 + 56), (int32_t)DamageReleaseText, v35, v36);
          *(_DWORD *)(v17 + 68) = 1;
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v40,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  BattleBuffData__RemoveProgressingBuffList(
    this,
    (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v15,
    v37);
  return (BattleActionData_BuffData_o *)v17;
}


BattleActionData_o *__fastcall BattleBuffData__UseProgressingDoNotAct(
        BattleBuffData_o *this,
        BattleServantData_o *svtData,
        bool doTDamage,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_Collections_Generic_List_object__o *v16; // x24
  BattleActionData_o *v17; // x21
  const MethodInfo *v18; // x1
  const MethodInfo *v19; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  _BOOL8 v24; // x0
  const MethodInfo *v25; // x1
  Il2CppObject *current; // x25
  DataMasterBase_TMaster__TEntity__PKType__o *buffMst; // x0
  __int64 v28; // x1
  BuffEntity_o *Entity; // x0
  __int64 v30; // x1
  BuffEntity_o *v31; // x24
  __int64 DamageRelease; // x0
  __int64 v33; // x1
  __int64 v34; // x25
  const MethodInfo *v35; // x1
  __int64 v36; // x0
  __int64 v37; // x1
  System_String_o *DamageReleaseText; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  const MethodInfo *v41; // x2
  const MethodInfo *v42; // x2
  System_Collections_Generic_List_object__o *linkedBuffList; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v45; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v46; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_48E48F0 & 1) == 0 )
  {
    sub_1B00CCC(&BattleActionData_TypeInfo, svtData);
    sub_1B00CCC(&BattleActionData_BuffData_TypeInfo, v7);
    sub_1B00CCC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v13);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v14);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v15);
    byte_48E48F0 = 1;
  }
  memset(&v46, 0, sizeof(v46));
  linkedBuffList = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    linkedBuffList,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v16 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v17 = (BattleActionData_o *)sub_1B00F18(BattleActionData_TypeInfo);
  BattleActionData___ctor(v17, v18);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v19);
  if ( !v16 )
    sub_1B00F28(PassiveList, v21);
  System_Collections_Generic_List_object___AddRange(
    v16,
    PassiveList,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v22);
  System_Collections_Generic_List_object___AddRange(
    v16,
    ActiveList,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v45,
    v16,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v46 = v45;
  while ( 1 )
  {
    v24 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v46,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v24 )
      break;
    current = v46.fields._current;
    if ( !v46.fields._current )
      sub_1B00F28(v24, v25);
    if ( !BYTE1(v46.fields._current[24].klass) )
    {
      buffMst = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleBuffData__get_buffMst(this, v25);
      if ( !buffMst )
        sub_1B00F28(0LL, v28);
      Entity = (BuffEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                 buffMst,
                                 (int32_t)current[1].klass,
                                 (const MethodInfo_2FE6A4C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      v31 = Entity;
      if ( !Entity )
        sub_1B00F28(0LL, v30);
      if ( Entity->fields.type == 32 && BuffEntity__getDamageRelease(Entity, 0LL) >= 1 )
      {
        DamageRelease = BuffEntity__getDamageRelease(v31, 0LL);
        if ( (_DWORD)DamageRelease == 2 || !doTDamage )
        {
          LODWORD(current[1].monitor) = 0;
          if ( !svtData )
            sub_1B00F28(DamageRelease, v33);
          if ( !v17 )
            sub_1B00F28(DamageRelease, v33);
          v17->fields.targetId = svtData->fields.uniqueId;
          v34 = sub_1B00F18(BattleActionData_BuffData_TypeInfo);
          BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v34, v35);
          if ( !v34 )
            sub_1B00F28(v36, v37);
          *(_DWORD *)(v34 + 40) = svtData->fields.uniqueId;
          DamageReleaseText = BuffEntity__getDamageReleaseText(v31, 0LL);
          *(_QWORD *)(v34 + 56) = DamageReleaseText;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v34 + 56), (int32_t)DamageReleaseText, v39, v40);
          *(_DWORD *)(v34 + 68) = 1;
          *(_BYTE *)(v34 + 82) = 1;
          *(_BYTE *)(v34 + 27) = 1;
          BattleActionData__AddBuffList(v17, (BattleActionData_BuffData_o *)v34, v41);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v46,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  BattleBuffData__RemoveProgressingBuffList(
    this,
    (System_Collections_Generic_List_BattleBuffData_BuffData__o *)linkedBuffList,
    v42);
  return v17;
}


void __fastcall BattleBuffData__UsedProgressing(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_array *checkList,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x21
  _BOOL8 v8; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  signed int max_length; // w8
  unsigned int v12; // w23
  BattleBuffData_BuffData_o *v13; // x22
  int32_t count; // w8
  bool v15; // vf
  int v16; // w8
  int32_t v17; // w3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_48E48EC & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, checkList);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v5);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v6);
    byte_48E48EC = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !checkList )
    goto LABEL_20;
  max_length = checkList->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_1B00F30(v8, v9);
      v13 = checkList->m_Items[v12];
      if ( !v13 )
        break;
      if ( v13->fields.isDecide )
      {
        if ( v13->fields.isUse )
        {
          count = v13->fields.count;
          v15 = __OFSUB__(count, 1);
          v16 = count - 1;
          if ( v16 < 0 == v15 )
          {
            v13->fields.count = v16;
            v8 = BattleBuffData_BuffData__IslinkageTarget(v13, 0LL);
            if ( v8 )
            {
              if ( !v7 )
                break;
              items = v7->fields._items;
              v19 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
              ++v7->fields._version;
              if ( !items )
                break;
              size = v7->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v7,
                  (Il2CppObject *)v13,
                  *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
              }
              else
              {
                v21 = &items->obj.klass + size;
                v7->fields._size = size + 1;
                v21[4] = (Il2CppClass *)v13;
                sub_1B00C70((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v13, (int32_t)v10, v17);
              }
            }
          }
        }
        v13->fields.isUse = 0;
        v13->fields.isDecide = 0;
      }
      max_length = checkList->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_19;
    }
LABEL_20:
    sub_1B00F28(v8, v9);
  }
LABEL_19:
  BattleBuffData__RemoveProgressingBuffList(this, (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v7, v10);
}


void __fastcall BattleBuffData___AddForceBuff_b__90_0(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleBuffData__UpdateForceBuff(this, buff, 1, v3);
}


void __fastcall BattleBuffData___DelForceBuff_b__91_0(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  BattleBuffData__UpdateForceBuff(this, buff, 0, v3);
}


bool __fastcall BattleBuffData___updateAuraBuffList_b__39_0(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *aura,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *conditionalAuraBuff; // x0

  if ( (byte_48E496E & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__, aura);
    byte_48E496E = 1;
  }
  conditionalAuraBuff = (System_Collections_Generic_List_object__o *)this->fields.conditionalAuraBuff;
  if ( !conditionalAuraBuff )
    goto LABEL_11;
  if ( !System_Collections_Generic_List_object___Contains(
          conditionalAuraBuff,
          (Il2CppObject *)aura,
          (const MethodInfo_33C1D60 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
  {
    conditionalAuraBuff = (System_Collections_Generic_List_object__o *)this->fields.activeList;
    if ( conditionalAuraBuff )
    {
      if ( System_Collections_Generic_List_object___Contains(
             conditionalAuraBuff,
             (Il2CppObject *)aura,
             (const MethodInfo_33C1D60 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
      {
        return 0;
      }
      conditionalAuraBuff = (System_Collections_Generic_List_object__o *)this->fields.passiveList;
      if ( conditionalAuraBuff )
        return !System_Collections_Generic_List_object___Contains(
                  conditionalAuraBuff,
                  (Il2CppObject *)aura,
                  (const MethodInfo_33C1D60 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
    }
LABEL_11:
    sub_1B00F28(conditionalAuraBuff, aura);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleBuffData__addBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        bool fieldflg,
        bool unFix,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *auraBuffList; // x0
  __int64 addBuffOrder; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x8
  struct System_Object_array *v18; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  Il2CppClass **v21; // x8
  struct System_Object_array *v22; // x8
  _QWORD *v23; // x9
  __int64 v24; // x10
  struct System_Object_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x8

  if ( (byte_48E48F3 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Add__, buff);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v9);
    byte_48E48F3 = 1;
  }
  auraBuffList = (System_Collections_Generic_List_object__o *)BattleBuffData__checkConditions(
                                                                this,
                                                                buff,
                                                                (const MethodInfo *)fieldflg);
  if ( ((unsigned __int8)auraBuffList & 1) != 0 )
  {
    if ( !buff )
      goto LABEL_35;
    BattleBuffData_BuffData__onState(buff, 32, 0LL);
  }
  if ( !fieldflg )
    auraBuffList = (System_Collections_Generic_List_object__o *)BattleBuffData__OnStateWithAuraConditionCheck(
                                                                  this,
                                                                  buff,
                                                                  1,
                                                                  v13);
  if ( !buff )
    goto LABEL_35;
  if ( buff->fields.auraEffectId )
  {
    auraBuffList = (System_Collections_Generic_List_object__o *)this->fields.auraBuffList;
    if ( !auraBuffList )
      goto LABEL_35;
    items = auraBuffList->fields._items;
    v15 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
    ++auraBuffList->fields._version;
    if ( !items )
      goto LABEL_35;
    size = auraBuffList->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        auraBuffList,
        (Il2CppObject *)buff,
        *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    }
    else
    {
      v17 = &items->obj.klass + size;
      auraBuffList->fields._size = size + 1;
      v17[4] = (Il2CppClass *)buff;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v17 + 4), (int32_t)buff, v12, (int32_t)v13);
    }
  }
  if ( buff->fields.classIconAuraEffectId )
  {
    auraBuffList = (System_Collections_Generic_List_object__o *)this->fields.classIconAuraEffectBuffList;
    if ( !auraBuffList )
      goto LABEL_35;
    v18 = auraBuffList->fields._items;
    v19 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
    ++auraBuffList->fields._version;
    if ( !v18 )
      goto LABEL_35;
    v20 = auraBuffList->fields._size;
    if ( (unsigned int)v20 >= v18->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        auraBuffList,
        (Il2CppObject *)buff,
        *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v21 = &v18->obj.klass + v20;
      auraBuffList->fields._size = v20 + 1;
      v21[4] = (Il2CppClass *)buff;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)buff, v12, (int32_t)v13);
    }
  }
  addBuffOrder = (unsigned int)this->fields.addBuffOrder;
  this->fields.addBuffOrder = addBuffOrder + 1;
  buff->fields.addOrder = addBuffOrder;
  if ( !unFix )
    goto LABEL_27;
  auraBuffList = (System_Collections_Generic_List_object__o *)this->fields.unfixedBuffList;
  if ( !auraBuffList
    || (v22 = auraBuffList->fields._items,
        v23 = Method_System_Collections_Generic_List_int__Add__,
        ++auraBuffList->fields._version,
        !v22) )
  {
LABEL_35:
    sub_1B00F28(auraBuffList, addBuffOrder);
  }
  v24 = auraBuffList->fields._size;
  if ( (unsigned int)v24 >= v22->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)auraBuffList,
      addBuffOrder,
      *(const MethodInfo_33A49AC **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
  }
  else
  {
    auraBuffList->fields._size = v24 + 1;
    *((_DWORD *)v22->m_Items + v24) = addBuffOrder;
  }
LABEL_27:
  if ( buff->fields.passive )
  {
    auraBuffList = (System_Collections_Generic_List_object__o *)this->fields.passiveList;
    if ( !auraBuffList )
      goto LABEL_35;
  }
  else
  {
    auraBuffList = (System_Collections_Generic_List_object__o *)this->fields.activeList;
    if ( !auraBuffList )
      goto LABEL_35;
  }
  v25 = auraBuffList->fields._items;
  v26 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
  ++auraBuffList->fields._version;
  if ( !v25 )
    goto LABEL_35;
  v27 = auraBuffList->fields._size;
  if ( (unsigned int)v27 >= v25->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      auraBuffList,
      (Il2CppObject *)buff,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
  }
  else
  {
    v28 = &v25->obj.klass + v27;
    auraBuffList->fields._size = v27 + 1;
    v28[4] = (Il2CppClass *)buff;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v28 + 4), (int32_t)buff, v12, (int32_t)v13);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleBuffData__changeBuffStateIfNeeded(
        BattleBuffData_o *this,
        int32_t now,
        int32_t max,
        System_Int32_array *servantIndv,
        System_Int32_array *buffIndv,
        System_Int32_array *fieldIndiv,
        BattleActorControl_o *actor,
        BattleLogic_o *logic,
        System_Int32_array *canSubStateBuffIndv,
        const MethodInfo *method)
{
  _BOOL8 v18; // x0
  __int64 v19; // x1

  if ( (byte_48E4919 & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, *(_QWORD *)&now);
    byte_48E4919 = 1;
  }
  if ( BattleBuffData__ChangeBuffState(
         this,
         now,
         max,
         servantIndv,
         buffIndv,
         fieldIndiv,
         canSubStateBuffIndv,
         (const MethodInfo *)logic) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)actor, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v18 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)logic, 0LL, 0LL);
      if ( v18 )
      {
        if ( !logic )
          sub_1B00F28(v18, v19);
        BattleLogic__updateConditionsBuffAll(logic, 0LL);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleBuffData__checkActBuff(
        BattleBuffData_o *this,
        int32_t act,
        System_Int32_array *selfIndiv,
        System_Int32_array *opIndiv,
        const MethodInfo *method)
{
  BuffList_ActInfo_o *ActInfo; // x0
  const MethodInfo *v11; // [xsp+0h] [xbp-50h]
  BattleBuffData_BuffData_o *targetBuff; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_48E4925 & 1) == 0 )
  {
    sub_1B00CCC(&BuffList_TypeInfo, *(_QWORD *)&act);
    byte_48E4925 = 1;
  }
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  targetBuff = 0LL;
  return BattleBuffData__ConfirmationBuff(this, ActInfo, selfIndiv, opIndiv, 0, &targetBuff, 0LL, 0LL, v11);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleBuffData__checkActBuffDamageBuffIndiv(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        System_Int32_array *damageBuffIndiv,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v13; // x0
  __int64 v14; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v16; // x19
  __int64 v17; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v20; // x1
  __int64 v21; // x19
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  char v26; // w24
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  BattleBuffData_BuffData_o *v31; // x0
  __int64 v32; // x1
  BattleBuffData_BuffData_o *v33; // x25
  BuffList_ActInfo_o *ActInfo; // x1
  const MethodInfo *v35; // x5
  const MethodInfo *v36; // x3
  System_Int32_array *ActBuffDamageBuffTargetIndivArray; // x1
  const MethodInfo *v38; // x3
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  int32_t plusMinus; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_48E492B & 1) == 0 )
  {
    sub_1B00CCC(&BuffList_TypeInfo, *(_QWORD *)&act);
    sub_1B00CCC(&System_IDisposable_TypeInfo, v9);
    sub_1B00CCC(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v10);
    sub_1B00CCC(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v11);
    sub_1B00CCC(&System_Collections_IEnumerator_TypeInfo, v12);
    byte_48E492B = 1;
  }
  plusMinus = 0;
  v13 = BattleBuffData__AllBuffValidEnumerablePriorActive(this, 0, (const MethodInfo *)checkIndividualities);
  if ( !v13 )
    sub_1B00F28(0LL, v14);
  klass = v13->klass;
  v16 = v13;
  v17 = *(unsigned __int16 *)(&v13->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v13->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      --v17;
      p_offset += 4;
      if ( !v17 )
        goto LABEL_8;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_8:
    p_method = sub_1B52CAC(v13, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v21 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))p_method)(
          v16,
          *(_QWORD *)(p_method + 8));
  if ( !v21 )
    sub_1B00F28(0LL, v20);
  while ( 1 )
  {
    v22 = *(_QWORD *)v21;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v24 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_15;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_15:
      v25 = sub_1B52CAC(v21, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v26 = (*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v21, *(_QWORD *)(v25 + 8));
    if ( (v26 & 1) == 0 )
      break;
    v27 = *(_QWORD *)v21;
    v28 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
    {
      v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v29 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        --v28;
        v29 += 4;
        if ( !v28 )
          goto LABEL_22;
      }
      v30 = v27 + 16LL * *v29 + 312;
    }
    else
    {
LABEL_22:
      v30 = sub_1B52CAC(v21, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v31 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v21, *(_QWORD *)(v30 + 8));
    v33 = v31;
    if ( !v31 )
      sub_1B00F28(0LL, v32);
    if ( (!BattleBuffData_BuffData__isCommandCodeBuff(v31, 0LL) || BattleBuffData_BuffData__isActiveCommandCode(
                                                                     v33,
                                                                     0LL))
      && (!BattleBuffData_BuffData__isCommandCardBuff(v33, 0LL) || v33->fields.isActiveCC)
      && (!BattleBuffData_BuffData__IsCommandAssistBuff(v33, 0LL)
       || BattleBuffData_BuffData__IsActiveCommandAssist(v33, 0LL)) )
    {
      if ( !BuffList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
      ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
      if ( BattleBuffData__checkIndiviuality(this, ActInfo, v33, checkIndividualities, &plusMinus, v35) )
      {
        ActBuffDamageBuffTargetIndivArray = BattleBuffData__GetActBuffDamageBuffTargetIndivArray(this, act, v33, v36);
        if ( Individuality__CheckIndividualities(damageBuffIndiv, ActBuffDamageBuffTargetIndivArray, 0LL)
          && BattleBuffData__checkBuffSuccessful(this, v33, 0, v38) )
        {
          goto LABEL_38;
        }
      }
    }
  }
  v26 = 0;
LABEL_38:
  v39 = *(_QWORD *)v21;
  v40 = *(unsigned __int16 *)(*(_QWORD *)v21 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v21 + 302LL) )
  {
    v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
    {
      --v40;
      v41 += 4;
      if ( !v40 )
        goto LABEL_42;
    }
    v42 = v39 + 16LL * *v41 + 312;
  }
  else
  {
LABEL_42:
    v42 = sub_1B52CAC(v21, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v42)(v21, *(_QWORD *)(v42 + 8));
  return v26 & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleBuffData__checkActBuff_41048384(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        BattleBuffData_BuffData_o **usedBuff,
        const MethodInfo *method)
{
  BuffList_ActInfo_o *ActInfo; // x0
  __int64 v10; // x1
  const MethodInfo *v12; // [xsp+0h] [xbp-50h]

  if ( (byte_48E4926 & 1) == 0 )
  {
    sub_1B00CCC(&BuffList_TypeInfo, *(_QWORD *)&act);
    byte_48E4926 = 1;
  }
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  if ( !checkIndividualities )
    sub_1B00F28(ActInfo, v10);
  return BattleBuffData__ConfirmationBuff(
           this,
           ActInfo,
           checkIndividualities->fields._selfConcatSvtIndividualities_k__BackingField,
           checkIndividualities->fields._opponentConcatSvtIndividualities_k__BackingField,
           0,
           usedBuff,
           checkIndividualities->fields._selfIndividuality_k__BackingField,
           checkIndividualities->fields._opponentIndividuality_k__BackingField,
           v12);
}


int32_t __fastcall BattleBuffData__checkAddParam(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_array *bufflist,
        bool isRec,
        const MethodInfo *method)
{
  __int64 v4; // x8
  BattleBuffData_o *v6; // x20
  int32_t v7; // w21
  unsigned __int64 v8; // x24
  BattleBuffData_BuffData_o **m_Items; // x25
  bool v10; // w22
  BattleBuffData_BuffData_o *v11; // x23

  if ( !bufflist )
LABEL_13:
    sub_1B00F28(this, bufflist);
  v4 = *(_QWORD *)&bufflist->max_length;
  if ( (int)v4 < 1 )
    return 0;
  v6 = this;
  v7 = 0;
  v8 = 0LL;
  m_Items = bufflist->m_Items;
  v10 = isRec;
  do
  {
    if ( v8 >= (unsigned int)v4 )
      sub_1B00F30(this, bufflist);
    v11 = m_Items[v8];
    this = (BattleBuffData_o *)BattleBuffData__checkBuffSuccessful(v6, v11, v10, method);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( !v11 )
        goto LABEL_13;
      v7 += v11->fields.param;
    }
    LODWORD(v4) = bufflist->max_length;
    ++v8;
  }
  while ( (__int64)v8 < (int)v4 );
  return v7;
}


void __fastcall BattleBuffData__checkAndAddResumptionHpFromLossMaxHp(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *buffList,
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
  Il2CppObject *Instance; // x0
  __int64 v16; // x1
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_List_object__o *v18; // x22
  _BOOL8 v19; // x0
  __int64 v20; // x1
  BuffEntity_o *Entity; // x22
  int32_t type; // w23
  int32_t v23; // w23
  _BOOL8 isCondition; // x0
  __int64 v25; // x1
  _BOOL8 v26; // x0
  __int64 v27; // x1
  Il2CppObject *current; // x23
  Il2CppObject *v29; // x0
  __int64 v30; // x1
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+40h] [xbp-80h] BYREF
  int32_t pal; // [xsp+6Ch] [xbp-54h] BYREF

  if ( (byte_48E48C3 & 1) == 0 )
  {
    sub_1B00CCC(&BuffList_TypeInfo, buffList);
    sub_1B00CCC(&Method_DataManager_GetMasterData_BuffMaster___, v5);
    sub_1B00CCC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v12);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v13);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v14);
    byte_48E48C3 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  pal = 0;
  memset(&v32, 0, sizeof(v32));
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)Instance,
                              (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_BuffMaster___),
        v18 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo),
        System_Collections_Generic_List_object____ctor(
          v18,
          (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__),
        !v18) )
  {
    sub_1B00F28(Instance, v16);
  }
  System_Collections_Generic_List_object___AddRange(
    v18,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.passiveList,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  System_Collections_Generic_List_object___AddRange(
    v18,
    (System_Collections_Generic_IEnumerable_T__o *)this->fields.activeList,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    v18,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v33 = v31;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v19 )
      break;
    if ( !v33.fields._current )
      sub_1B00F28(v19, v20);
    if ( !BYTE1(v33.fields._current[24].klass) )
    {
      if ( !MasterData_object )
        sub_1B00F28(v19, v20);
      Entity = (BuffEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                 (int32_t)v33.fields._current[1].klass,
                                 (const MethodInfo_2FE6A4C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
      if ( Entity )
      {
        pal = 0;
        type = Entity->fields.type;
        if ( !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        if ( BuffList__CheckType(81, type, 0LL) )
          goto LABEL_38;
        v23 = Entity->fields.type;
        if ( !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        if ( BuffList__CheckType(79, v23, 0LL) )
        {
LABEL_38:
          isCondition = BuffEntity__isCondition(Entity, 2, &pal, 0LL);
          if ( isCondition )
          {
            if ( !buffList )
              sub_1B00F28(isCondition, v25);
            System_Collections_Generic_List_object___GetEnumerator(
              (System_Collections_Generic_List_Enumerator_T__o *)&v31,
              (System_Collections_Generic_List_object__o *)buffList,
              (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
            v32 = v31;
            while ( 1 )
            {
              v26 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                      &v32,
                      (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
              if ( !v26 )
                break;
              current = v32.fields._current;
              if ( !v32.fields._current )
                sub_1B00F28(v26, v27);
              if ( !BYTE1(v32.fields._current[24].klass) )
              {
                v29 = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                        (int32_t)v32.fields._current[1].klass,
                        (const MethodInfo_2FE6A4C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
                if ( SLODWORD(current[8].monitor) >= 1 )
                {
                  if ( !v29 )
                    sub_1B00F28(0LL, v30);
                  if ( BuffEntity__checkBuffType((BuffEntity_o *)v29, 41, 0LL) && HIDWORD(current[1].monitor) == pal )
                  {
                    this->fields.resumptionHpFromLossMaxHp += LODWORD(current[8].monitor);
                    LODWORD(current[8].monitor) = 0;
                    break;
                  }
                }
              }
            }
            System_Collections_Generic_List_Enumerator_object___Dispose(
              &v32,
              (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
          }
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
}


bool __fastcall BattleBuffData__checkAuraBuff(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *auraBuffList; // x0
  int32_t v6; // w20
  int32_t size; // w24
  Il2CppObject *v8; // x21

  if ( (byte_48E48D2 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__, v4);
    byte_48E48D2 = 1;
  }
  auraBuffList = (System_Collections_Generic_List_object__o *)this->fields.auraBuffList;
  if ( !auraBuffList )
LABEL_11:
    sub_1B00F28(auraBuffList, method);
  v6 = 0;
  while ( 1 )
  {
    size = auraBuffList->fields._size;
    if ( v6 >= size )
      break;
    auraBuffList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                  auraBuffList,
                                                                  v6,
                                                                  (const MethodInfo_33C1700 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Item__);
    if ( !this->fields.activeList )
      goto LABEL_11;
    v8 = (Il2CppObject *)auraBuffList;
    if ( !System_Collections_Generic_List_object___Contains(
            (System_Collections_Generic_List_object__o *)this->fields.activeList,
            (Il2CppObject *)auraBuffList,
            (const MethodInfo_33C1D60 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
    {
      auraBuffList = (System_Collections_Generic_List_object__o *)this->fields.passiveList;
      if ( !auraBuffList )
        goto LABEL_11;
      if ( !System_Collections_Generic_List_object___Contains(
              auraBuffList,
              v8,
              (const MethodInfo_33C1D60 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
        break;
    }
    auraBuffList = (System_Collections_Generic_List_object__o *)this->fields.auraBuffList;
    ++v6;
    if ( !auraBuffList )
      goto LABEL_11;
  }
  return v6 < size;
}


bool __fastcall BattleBuffData__checkBoostSkill(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1B00F28(this, 0LL);
  return BattleBuffData_BuffData__checkState(buff, 2, 0LL);
}


bool __fastcall BattleBuffData__checkBuffClear(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_o *v4; // x20
  __int64 v5; // x1

  v4 = this;
  if ( (byte_48E48EE & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__, buff);
    this = (BattleBuffData_o *)sub_1B00CCC(
                                 &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__,
                                 v5);
    byte_48E48EE = 1;
  }
  if ( !buff )
    goto LABEL_14;
  if ( buff->fields._isRemove || buff->fields.count && !BattleBuffData_BuffData__IsCompletelyExpired(buff, 0LL) )
    return 0;
  if ( buff->fields.auraEffectId )
  {
    this = (BattleBuffData_o *)v4->fields.auraBuffList;
    if ( !this )
      goto LABEL_14;
    if ( System_Collections_Generic_List_object___Contains(
           (System_Collections_Generic_List_object__o *)this,
           (Il2CppObject *)buff,
           (const MethodInfo_33C1D60 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
    {
      this = (BattleBuffData_o *)v4->fields.auraBuffList;
      if ( this )
      {
        System_Collections_Generic_List_object___Remove(
          (System_Collections_Generic_List_object__o *)this,
          (Il2CppObject *)buff,
          (const MethodInfo_33C2EF8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
        goto LABEL_13;
      }
LABEL_14:
      sub_1B00F28(this, buff);
    }
  }
LABEL_13:
  BattleBuffData__RemoveClassIconEffectBuff(v4, buff, method);
  return 1;
}


bool __fastcall BattleBuffData__checkBuffGroup(
        BattleBuffData_o *this,
        int32_t groupId,
        int32_t attachTarget,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  const MethodInfo *v8; // x4

  return BattleBuffData__CheckBuffGroup(this, this->fields.passiveList, groupId, attachTarget, v4)
      || BattleBuffData__CheckBuffGroup(this, this->fields.activeList, groupId, attachTarget, v8);
}


bool __fastcall BattleBuffData__checkBuffId(
        BattleBuffData_o *this,
        System_Int32_array *idlist,
        const MethodInfo *method)
{
  __int64 v3; // x8
  bool result; // w0
  unsigned __int64 v7; // x21
  BattleBuffData_BuffData_array *PassiveList; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  int max_length; // w8
  int32_t *v12; // x22
  int v13; // w9
  BattleBuffData_BuffData_o *v14; // x10
  int v15; // w8
  int v16; // w9
  BattleBuffData_BuffData_o *v17; // x10

  if ( !idlist )
    return 0;
  v3 = *(_QWORD *)&idlist->max_length;
  result = 0;
  if ( v3 && (int)v3 >= 1 )
  {
    v7 = 0LL;
    while ( 1 )
    {
      PassiveList = BattleBuffData__getPassiveList(this, 1, method);
      if ( !PassiveList )
LABEL_27:
        sub_1B00F28(PassiveList, v9);
      max_length = PassiveList->max_length;
      v12 = &idlist->m_Items[v7 + 1];
      if ( max_length >= 1 )
        break;
LABEL_13:
      PassiveList = BattleBuffData__getActiveList(this, 1, v10);
      if ( !PassiveList )
        goto LABEL_27;
      v15 = PassiveList->max_length;
      if ( v15 >= 1 )
      {
        v16 = 0;
        while ( v15 != v16 )
        {
          v17 = PassiveList->m_Items[v16];
          if ( !v17 )
            goto LABEL_27;
          if ( v7 >= idlist->max_length )
            break;
          if ( v17->fields.buffId == *v12 )
            return 1;
          if ( v15 == ++v16 )
            goto LABEL_21;
        }
LABEL_26:
        sub_1B00F30(PassiveList, v9);
      }
LABEL_21:
      ++v7;
      result = 0;
      if ( (__int64)v7 >= (int)idlist->max_length )
        return result;
    }
    v13 = 0;
    while ( 1 )
    {
      if ( max_length == v13 )
        goto LABEL_26;
      v14 = PassiveList->m_Items[v13];
      if ( !v14 )
        goto LABEL_27;
      if ( v7 >= idlist->max_length )
        goto LABEL_26;
      if ( v14->fields.buffId == *v12 )
        return 1;
      if ( max_length == ++v13 )
        goto LABEL_13;
    }
  }
  return result;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleBuffData__checkBuffIndividualities(
        BattleBuffData_o *this,
        System_Int32_array *individualities,
        bool isActiveOnly,
        bool IsIncludeIgnoreIndividuality,
        bool isIgnoreIndivUnreleaseable,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_o *PassiveList; // x0
  __int64 v11; // x1
  int count; // w8
  BattleBuffData_BuffData_array *v13; // x23
  unsigned int v14; // w24
  System_Int32_array *Individualty; // x0
  int max_length; // w8
  BattleBuffData_BuffData_array *v17; // x22
  unsigned int v18; // w23
  System_Int32_array *v19; // x0

  if ( !isActiveOnly && !isIgnoreIndivUnreleaseable )
  {
    PassiveList = (BattleBuffData_BuffData_o *)BattleBuffData__getPassiveList(this, 1, (const MethodInfo *)isActiveOnly);
    if ( !PassiveList )
      goto LABEL_22;
    count = PassiveList->fields.count;
    v13 = (BattleBuffData_BuffData_array *)PassiveList;
    if ( count >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        if ( v14 >= count )
          goto LABEL_21;
        PassiveList = v13->m_Items[v14];
        if ( !PassiveList )
          goto LABEL_22;
        Individualty = BattleBuffData_BuffData__GetIndividualty(PassiveList, IsIncludeIgnoreIndividuality, 0, 0, 0LL);
        PassiveList = (BattleBuffData_BuffData_o *)Individuality__CheckIndividualities(
                                                     Individualty,
                                                     individualities,
                                                     0LL);
        if ( ((unsigned __int8)PassiveList & 1) != 0 )
          break;
        count = v13->max_length;
        if ( (int)++v14 >= count )
          goto LABEL_10;
      }
      LOBYTE(PassiveList) = 1;
      return (unsigned __int8)PassiveList & 1;
    }
  }
LABEL_10:
  PassiveList = (BattleBuffData_BuffData_o *)BattleBuffData__getActiveList(this, 1, (const MethodInfo *)isActiveOnly);
  if ( !PassiveList )
LABEL_22:
    sub_1B00F28(PassiveList, v11);
  max_length = PassiveList->fields.count;
  v17 = (BattleBuffData_BuffData_array *)PassiveList;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( v18 < max_length )
    {
      PassiveList = v17->m_Items[v18];
      if ( !PassiveList )
        goto LABEL_22;
      v19 = BattleBuffData_BuffData__GetIndividualty(
              PassiveList,
              IsIncludeIgnoreIndividuality,
              isIgnoreIndivUnreleaseable,
              0,
              0LL);
      PassiveList = (BattleBuffData_BuffData_o *)Individuality__CheckIndividualities(v19, individualities, 0LL);
      if ( ((unsigned __int8)PassiveList & 1) == 0 )
      {
        max_length = v17->max_length;
        if ( (int)++v18 < max_length )
          continue;
      }
      return (unsigned __int8)PassiveList & 1;
    }
LABEL_21:
    sub_1B00F30(PassiveList, v11);
  }
  LOBYTE(PassiveList) = 0;
  return (unsigned __int8)PassiveList & 1;
}


bool __fastcall BattleBuffData__checkBuffSpecialAttack(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_o *v4; // x20
  __int64 v5; // x1
  int32_t v7; // w19

  v4 = this;
  if ( (byte_48E48DC & 1) == 0 )
  {
    sub_1B00CCC(&BuffList_TypeInfo, buff);
    this = (BattleBuffData_o *)sub_1B00CCC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v5);
    byte_48E48DC = 1;
  }
  if ( !buff )
    goto LABEL_11;
  if ( buff->fields._isRemove )
    return 0;
  this = (BattleBuffData_o *)BattleBuffData__get_buffMst(v4, (const MethodInfo *)buff);
  if ( !this
    || (this = (BattleBuffData_o *)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     buff->fields.buffId,
                                     (const MethodInfo_2FE6A4C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__)) == 0LL )
  {
LABEL_11:
    sub_1B00F28(this, buff);
  }
  v7 = *(&this->fields.resumptionHpFromLossMaxHp + 1);
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  return BuffList__isSpHit(v7, 0LL);
}


bool __fastcall BattleBuffData__checkBuffSuccessful(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        bool isRec,
        const MethodInfo *method)
{
  _BOOL4 v4; // w20
  BattleBuffData_o *v6; // x21
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
  bool v21; // w0
  System_Collections_Generic_List_int__o **p_notUseCountWithNoDamageBuffTypes; // x22
  System_String_o *Value; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x23
  BattleBuffData___c_c *v26; // x8
  System_Func_object__int__o *_9__121_0; // x24
  Il2CppObject *v28; // x25
  struct BattleBuffData___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0
  System_Collections_Generic_List_TSource__o *v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  BattleBuffData_o **p_buffMaster; // x23
  Il2CppObject *MasterData_object; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_Collections_Generic_List_int__o *v40; // x9
  BattleBuffData_o *v41; // x22
  _BOOL8 v42; // x0
  __int64 v43; // x1
  int32_t current; // w23
  int32_t v45; // w24
  _BOOL4 isUse; // w8
  int32_t buffRate; // w8
  bool v48; // w2
  System_Collections_Generic_List_Enumerator_int__o v49; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v50; // [xsp+20h] [xbp-70h] BYREF

  v4 = isRec;
  v6 = this;
  if ( (byte_48E4909 & 1) == 0 )
  {
    sub_1B00CCC(&BuffList_TypeInfo, buff);
    sub_1B00CCC(&Method_DataManager_GetMasterData_BuffMaster___, v7);
    sub_1B00CCC(&Method_DataManager_GetMasterData_ConstantStrMaster___, v8);
    sub_1B00CCC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v9);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Select_string__int___, v10);
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToList_int___, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v13);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v14);
    sub_1B00CCC(&System_Func_string__int__TypeInfo, v15);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__GetEnumerator__, v16);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v17);
    sub_1B00CCC(&Method_BattleBuffData___c__checkBuffSuccessful_b__121_0__, v18);
    sub_1B00CCC(&BattleBuffData___c_TypeInfo, v19);
    this = (BattleBuffData_o *)sub_1B00CCC(&StringLiteral_9183/*"NOT_REDUCE_COUNT_WITH_NO_DAMAGE_BUFF"*/, v20);
    byte_48E4909 = 1;
  }
  memset(&v50, 0, sizeof(v50));
  if ( !buff )
    goto LABEL_44;
  if ( buff->fields._isRemove )
    return 0;
  if ( v6->fields.isNoDamage )
  {
    p_notUseCountWithNoDamageBuffTypes = &v6->fields.notUseCountWithNoDamageBuffTypes;
    if ( v6->fields.notUseCountWithNoDamageBuffTypes )
      goto LABEL_20;
    this = (BattleBuffData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_44;
    this = (BattleBuffData_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)this,
                                 (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
    if ( !this )
      goto LABEL_44;
    Value = ConstantStrMaster__GetValue((ConstantStrMaster_o *)this, (System_String_o *)StringLiteral_9183/*"NOT_REDUCE_COUNT_WITH_NO_DAMAGE_BUFF"*/, 0LL);
    if ( Value )
    {
      v25 = (System_Collections_Generic_IEnumerable_TSource__o *)System_String__Split(Value, 0x2Cu, 0, 0LL);
      v26 = BattleBuffData___c_TypeInfo;
      if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
        v26 = BattleBuffData___c_TypeInfo;
      }
      _9__121_0 = (System_Func_object__int__o *)v26->static_fields->__9__121_0;
      if ( !_9__121_0 )
      {
        if ( !v26->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v26);
          v26 = BattleBuffData___c_TypeInfo;
        }
        v28 = (Il2CppObject *)v26->static_fields->__9;
        _9__121_0 = (System_Func_object__int__o *)sub_1B00F18(System_Func_string__int__TypeInfo);
        System_Func_object__int____ctor(_9__121_0, v28, Method_BattleBuffData___c__checkBuffSuccessful_b__121_0__, 0LL);
        static_fields = BattleBuffData___c_TypeInfo->static_fields;
        static_fields->__9__121_0 = (struct System_Func_string__int__o *)_9__121_0;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__121_0, (int32_t)_9__121_0, v30, v31);
      }
      v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                   v25,
                                                                   (System_Func_TSource__TResult__o *)_9__121_0,
                                                                   (const MethodInfo_2D8F428 *)Method_System_Linq_Enumerable_Select_string__int___);
      v33 = System_Linq_Enumerable__ToList_int_(
              v32,
              (const MethodInfo_2D9AD68 *)Method_System_Linq_Enumerable_ToList_int___);
      *p_notUseCountWithNoDamageBuffTypes = (System_Collections_Generic_List_int__o *)v33;
      sub_1B00C70(
        (ServantStatusBattleListViewItem_o *)&v6->fields.notUseCountWithNoDamageBuffTypes,
        (int32_t)v33,
        v34,
        v35);
    }
    if ( *p_notUseCountWithNoDamageBuffTypes )
    {
LABEL_20:
      p_buffMaster = (BattleBuffData_o **)&v6->fields.buffMaster;
      this = (BattleBuffData_o *)v6->fields.buffMaster;
      if ( this
        || (this = (BattleBuffData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__)) != 0LL
        && (MasterData_object = DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_BuffMaster___),
            *p_buffMaster = (BattleBuffData_o *)MasterData_object,
            sub_1B00C70(
              (ServantStatusBattleListViewItem_o *)&v6->fields.buffMaster,
              (int32_t)MasterData_object,
              v38,
              v39),
            (this = *p_buffMaster) != 0LL) )
      {
        this = (BattleBuffData_o *)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     buff->fields.buffId,
                                     (const MethodInfo_2FE6A4C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        v40 = *p_notUseCountWithNoDamageBuffTypes;
        if ( *p_notUseCountWithNoDamageBuffTypes )
        {
          v41 = this;
          System_Collections_Generic_List_int___GetEnumerator(
            (System_Collections_Generic_List_Enumerator_T__o *)&v49,
            v40,
            (const MethodInfo_33A5480 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
          v50 = v49;
          while ( 1 )
          {
            v42 = System_Collections_Generic_List_Enumerator_int___MoveNext(
                    &v50,
                    (const MethodInfo_313A14C *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
            if ( !v42 )
              break;
            if ( !v41 )
              sub_1B00F28(v42, v43);
            current = v50.fields._current;
            v45 = *(&v41->fields.resumptionHpFromLossMaxHp + 1);
            if ( !BuffList_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
            if ( BuffList__CheckType(current, v45, 0LL) )
            {
              System_Collections_Generic_List_Enumerator_int___Dispose(
                &v50,
                (const MethodInfo_313A148 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
              return 0;
            }
          }
          System_Collections_Generic_List_Enumerator_int___Dispose(
            &v50,
            (const MethodInfo_313A148 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
          goto LABEL_32;
        }
      }
LABEL_44:
      sub_1B00F28(this, buff);
    }
  }
LABEL_32:
  if ( buff->fields.isDecide )
  {
    isUse = buff->fields.isUse;
    if ( v4 && isUse )
      buff->fields.isAct = 1;
    return isUse;
  }
  else
  {
    buffRate = buff->fields.buffRate;
    buff->fields.isDecide = 1;
    v48 = buffRate == 1000 || !buffRate || buff->fields.buffRate >= BattleRandom__getNext(1000, 0LL);
    v21 = BattleBuffData_BuffData__FixedUse(buff, v6, v48, 0LL);
    buff->fields.isUse = v21;
    if ( v21 && v4 )
    {
      v21 = 1;
      buff->fields.isAct = 1;
    }
  }
  return v21;
}


bool __fastcall BattleBuffData__checkBuffTurnCount(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1B00F28(this, 0LL);
  return buff->fields.turn > 0 || buff->fields.count > 0 || buff->fields._IsExtendingLife_k__BackingField;
}


bool __fastcall BattleBuffData__checkBuffTypeIndiviuality(
        BattleBuffData_o *this,
        System_Int32_array *self,
        System_Int32_array *target,
        BuffEntity_o *buffEnt,
        System_Int32_array *targetCount,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  int CkIndvCountAbove; // w21
  int CkIndvCountBelow; // w22
  bool result; // w0
  System_Func_T1__T2__TResult__o *v18; // x20
  System_Func_T1__T2__TResult__o *v19; // x21
  System_Func_T1__T2__TResult__o *v20; // x24
  System_Func_T1__T2__TResult__o *v21; // x25
  System_Func_T1__T2__T3__T4__TResult__o *v22; // x0
  __int64 *v23; // x25
  System_Func_T1__T2__TResult__o *v24; // x24
  System_Func_T1__T2__TResult__o *v25; // x25
  System_Func_int____int____int__int__bool__o *v26; // x23
  System_Func_T1__T2__T3__T4__TResult__o *v27; // x24

  if ( (byte_48E4938 & 1) == 0 )
  {
    sub_1B00CCC(&System_Func_int____int____bool__TypeInfo, self);
    sub_1B00CCC(&System_Func_int____int____int__int__bool__TypeInfo, v10);
    sub_1B00CCC(&Method_Individuality_IsMatchArrayCount__, v11);
    sub_1B00CCC(&Method_Individuality_IsMatchArray__, v12);
    sub_1B00CCC(&Method_Individuality_IsPartialMatchArrayCount__, v13);
    this = (BattleBuffData_o *)sub_1B00CCC(&Method_Individuality_IsPartialMatchArray__, v14);
    byte_48E4938 = 1;
  }
  if ( !buffEnt )
    sub_1B00F28(this, self);
  CkIndvCountAbove = BuffEntity__GetCkIndvCountAbove(buffEnt, 0, 0LL);
  CkIndvCountBelow = BuffEntity__GetCkIndvCountBelow(buffEnt, 0, 0LL);
  switch ( BuffEntity__getCheckIndvType(buffEnt, 0LL) )
  {
    case 0:
      if ( targetCount && (CkIndvCountAbove > 0 || CkIndvCountBelow >= 1) )
      {
        if ( target && *(_QWORD *)&target->max_length && Individuality__CheckIndividualities(self, target, 0LL) )
          goto LABEL_25;
        result = Individuality__IsPartialMatchArrayCount(self, targetCount, CkIndvCountAbove, CkIndvCountBelow, 0LL);
      }
      else
      {
        result = Individuality__CheckIndividualities(self, target, 0LL);
      }
      break;
    case 1:
      if ( !Individuality__CheckAllIndividualities(self, target, 0LL) )
        goto LABEL_17;
      result = Individuality__IsMatchArrayCount(self, targetCount, CkIndvCountAbove, CkIndvCountBelow, 0LL);
      break;
    case 2:
      if ( targetCount && (CkIndvCountAbove > 0 || CkIndvCountBelow >= 1) )
      {
        if ( !target
          || !*(_QWORD *)&target->max_length
          || (v24 = (System_Func_T1__T2__TResult__o *)sub_1B00F18(System_Func_int____int____bool__TypeInfo),
              System_Func_object__object__bool____ctor(v24, 0LL, Method_Individuality_IsPartialMatchArray__, 0LL),
              v25 = (System_Func_T1__T2__TResult__o *)sub_1B00F18(System_Func_int____int____bool__TypeInfo),
              System_Func_object__object__bool____ctor(v25, 0LL, Method_Individuality_IsPartialMatchArray__, 0LL),
              !Individuality__CheckSignedIndividualities_36497696(
                 self,
                 target,
                 (System_Func_int____int____bool__o *)v24,
                 (System_Func_int____int____bool__o *)v25,
                 0LL)) )
        {
          v22 = (System_Func_T1__T2__T3__T4__TResult__o *)sub_1B00F18(System_Func_int____int____int__int__bool__TypeInfo);
          v23 = &Method_Individuality_IsPartialMatchArrayCount__;
          goto LABEL_27;
        }
LABEL_25:
        result = 1;
      }
      else
      {
        v18 = (System_Func_T1__T2__TResult__o *)sub_1B00F18(System_Func_int____int____bool__TypeInfo);
        System_Func_object__object__bool____ctor(v18, 0LL, Method_Individuality_IsPartialMatchArray__, 0LL);
        v19 = (System_Func_T1__T2__TResult__o *)sub_1B00F18(System_Func_int____int____bool__TypeInfo);
        System_Func_object__object__bool____ctor(v19, 0LL, Method_Individuality_IsPartialMatchArray__, 0LL);
        result = Individuality__CheckSignedIndividualities_36497696(
                   self,
                   target,
                   (System_Func_int____int____bool__o *)v18,
                   (System_Func_int____int____bool__o *)v19,
                   0LL);
      }
      break;
    case 3:
      v20 = (System_Func_T1__T2__TResult__o *)sub_1B00F18(System_Func_int____int____bool__TypeInfo);
      System_Func_object__object__bool____ctor(v20, 0LL, Method_Individuality_IsMatchArray__, 0LL);
      v21 = (System_Func_T1__T2__TResult__o *)sub_1B00F18(System_Func_int____int____bool__TypeInfo);
      System_Func_object__object__bool____ctor(v21, 0LL, Method_Individuality_IsMatchArray__, 0LL);
      if ( !Individuality__CheckSignedIndividualities_36497696(
              self,
              target,
              (System_Func_int____int____bool__o *)v20,
              (System_Func_int____int____bool__o *)v21,
              0LL) )
        goto LABEL_17;
      v22 = (System_Func_T1__T2__T3__T4__TResult__o *)sub_1B00F18(System_Func_int____int____int__int__bool__TypeInfo);
      v23 = &Method_Individuality_IsMatchArrayCount__;
LABEL_27:
      v26 = (System_Func_int____int____int__int__bool__o *)v22;
      System_Func_object__object__int__int__bool____ctor(v22, 0LL, *v23, 0LL);
      v27 = (System_Func_T1__T2__T3__T4__TResult__o *)sub_1B00F18(System_Func_int____int____int__int__bool__TypeInfo);
      System_Func_object__object__int__int__bool____ctor(v27, 0LL, *v23, 0LL);
      result = Individuality__CheckSignedIndividualitiesCount(
                 self,
                 targetCount,
                 v26,
                 (System_Func_int____int____int__int__bool__o *)v27,
                 CkIndvCountAbove,
                 CkIndvCountBelow,
                 0LL);
      break;
    default:
LABEL_17:
      result = 0;
      break;
  }
  return result;
}


bool __fastcall BattleBuffData__checkConditions(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_o *v4; // x20

  v4 = this;
  if ( (byte_48E4915 & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_1B00CCC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, buff);
    byte_48E4915 = 1;
  }
  if ( !buff )
    goto LABEL_9;
  if ( buff->fields._isRemove )
    return 0;
  this = (BattleBuffData_o *)BattleBuffData__get_buffMst(v4, (const MethodInfo *)buff);
  if ( !this
    || (this = (BattleBuffData_o *)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     buff->fields.buffId,
                                     (const MethodInfo_2FE6A4C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1B00F28(this, buff);
  }
  return BuffEntity__isConditions((BuffEntity_o *)this, 0LL);
}


void __fastcall BattleBuffData__checkFieldAlive(
        BattleBuffData_o *this,
        FieldAliveServantData_o *aliveSvtData,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *checkList,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  BattleBuffData___c_c *v16; // x0
  __int64 _9__96_0; // x22
  Il2CppObject *v18; // x24
  struct BattleBuffData___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  char v22; // w25
  _BOOL8 v23; // x0
  __int64 v24; // x1
  Il2CppObject *current; // x23
  unsigned int *monitor; // x27
  System_Collections_Generic_List_BattleServantData__o *TargetSideSvtDataList; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x3
  System_Int32_array *v30; // x1
  __int64 v31; // x1
  __int64 size; // x1
  const MethodInfo *v33; // x3
  bool v34; // w0
  System_Collections_Generic_List_Enumerator_object__o v35; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v36; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_48E48F9 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, aliveSvtData);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v10);
    sub_1B00CCC(&System_Func_int__int__bool__bool__TypeInfo, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleServantData__get_Count__, v13);
    sub_1B00CCC(&Method_BattleBuffData___c__checkFieldAlive_b__96_0__, v14);
    sub_1B00CCC(&BattleBuffData___c_TypeInfo, v15);
    byte_48E48F9 = 1;
  }
  v16 = BattleBuffData___c_TypeInfo;
  memset(&v36, 0, sizeof(v36));
  if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v16 = BattleBuffData___c_TypeInfo;
  }
  _9__96_0 = (__int64)v16->static_fields->__9__96_0;
  if ( !_9__96_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = BattleBuffData___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__96_0 = sub_1B00F18(System_Func_int__int__bool__bool__TypeInfo);
    System_Func_int__int__bool__bool____ctor(
      (System_Func_int__int__bool__bool__o *)_9__96_0,
      v18,
      Method_BattleBuffData___c__checkFieldAlive_b__96_0__,
      0LL);
    static_fields = BattleBuffData___c_TypeInfo->static_fields;
    static_fields->__9__96_0 = (struct System_Func_int__int__bool__bool__o *)_9__96_0;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__96_0, _9__96_0, v20, v21);
  }
  if ( !checkList )
    goto LABEL_28;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v35,
    (System_Collections_Generic_List_object__o *)checkList,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v22 = 0;
  v36 = v35;
  while ( 1 )
  {
    v23 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v36,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v23 )
      break;
    current = v36.fields._current;
    if ( !v36.fields._current )
      sub_1B00F28(v23, v24);
    monitor = (unsigned int *)v36.fields._current[9].monitor;
    if ( monitor )
    {
      if ( !aliveSvtData )
        sub_1B00F28(v23, v24);
      TargetSideSvtDataList = FieldAliveServantData__getTargetSideSvtDataList(
                                aliveSvtData,
                                *((_BYTE *)monitor + 16),
                                0LL);
      if ( !TargetSideSvtDataList )
        sub_1B00F28(0LL, v28);
      v30 = (System_Int32_array *)*((_QWORD *)monitor + 3);
      if ( v30 )
      {
        TargetSideSvtDataList = (System_Collections_Generic_List_BattleServantData__o *)BattleBuffData__CheckIndivSvtDataList(
                                                                                          TargetSideSvtDataList,
                                                                                          v30,
                                                                                          *((_BYTE *)monitor + 32),
                                                                                          v29);
        if ( !TargetSideSvtDataList )
          sub_1B00F28(0LL, v31);
      }
      size = (unsigned int)TargetSideSvtDataList->fields._size;
      if ( !_9__96_0 )
        sub_1B00F28(TargetSideSvtDataList, size);
      if ( ((*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _QWORD))(_9__96_0 + 24))(
              *(_QWORD *)(_9__96_0 + 64),
              size,
              monitor[5],
              *((unsigned __int8 *)monitor + 17),
              *(_QWORD *)(_9__96_0 + 40)) & 1) != 0 )
        v34 = BattleBuffData__OffStateWithAuraConditionCheck(this, (BattleBuffData_BuffData_o *)current, 0x4000, v33);
      else
        v34 = BattleBuffData__OnStateWithAuraConditionCheck(this, (BattleBuffData_BuffData_o *)current, 0x4000, v33);
      v22 |= v34;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v36,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( (v22 & 1) != 0 )
  {
    if ( logic )
    {
      BattleLogic__updateConditionsBuffAll(logic, 0LL);
      return;
    }
LABEL_28:
    sub_1B00F28(v16, aliveSvtData);
  }
}


void __fastcall BattleBuffData__checkFieldBuff(
        BattleBuffData_o *this,
        System_Int32_array *idList,
        FieldAliveServantData_o *aliveSvtData,
        BattleBuffData_BuffData_array **onList,
        BattleBuffData_BuffData_array **offList,
        BattleLogic_o *logic,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x1
  System_Collections_Generic_List_object__o *passiveList; // x0
  char v20; // w27
  _BOOL8 v21; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x3
  int monitor_high; // w9
  signed int max_length; // w10
  int v26; // w11
  bool v27; // w0
  char v28; // w24
  _BOOL8 v29; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x3
  int v32; // w9
  signed int v33; // w10
  int v34; // w11
  bool v35; // w0
  const MethodInfo *v36; // x4
  const MethodInfo *v37; // x4
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_48E48F8 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, idList);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v13);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v14);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v15);
    byte_48E48F8 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  *onList = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)onList, 0, (int32_t)aliveSvtData, (int32_t)onList);
  *offList = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)offList, 0, v16, v17);
  passiveList = (System_Collections_Generic_List_object__o *)this->fields.passiveList;
  if ( !passiveList )
    goto LABEL_39;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    passiveList,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v20 = 0;
  v39 = v38;
  while ( 1 )
  {
    v21 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v39,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v21 )
      break;
    if ( !v39.fields._current )
      sub_1B00F28(v21, v22);
    monitor_high = HIDWORD(v39.fields._current[3].monitor);
    if ( monitor_high >= 1 )
    {
      if ( !idList )
        sub_1B00F28(v21, v22);
      max_length = idList->max_length;
      if ( max_length < 1 )
      {
LABEL_14:
        v27 = BattleBuffData__OnStateWithAuraConditionCheck(
                this,
                (BattleBuffData_BuffData_o *)v39.fields._current,
                1,
                v23);
      }
      else
      {
        v26 = 0;
        while ( 1 )
        {
          if ( max_length == v26 )
            sub_1B00F30(v21, v22);
          if ( monitor_high == idList->m_Items[v26 + 1] )
            break;
          if ( max_length == ++v26 )
            goto LABEL_14;
        }
        v27 = BattleBuffData__OffStateWithAuraConditionCheck(
                this,
                (BattleBuffData_BuffData_o *)v39.fields._current,
                1,
                v23);
      }
      v20 |= v27;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v39,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  passiveList = (System_Collections_Generic_List_object__o *)this->fields.activeList;
  if ( !passiveList )
    goto LABEL_39;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    passiveList,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v28 = v20;
  v39 = v38;
  while ( 1 )
  {
    v29 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v39,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v29 )
      break;
    if ( !v39.fields._current )
      sub_1B00F28(v29, v30);
    v32 = HIDWORD(v39.fields._current[3].monitor);
    if ( v32 >= 1 )
    {
      if ( !idList )
        sub_1B00F28(v29, v30);
      v33 = idList->max_length;
      if ( v33 < 1 )
      {
LABEL_28:
        v35 = BattleBuffData__OnStateWithAuraConditionCheck(
                this,
                (BattleBuffData_BuffData_o *)v39.fields._current,
                1,
                v31);
      }
      else
      {
        v34 = 0;
        while ( 1 )
        {
          if ( v33 == v34 )
            sub_1B00F30(v29, v30);
          if ( v32 == idList->m_Items[v34 + 1] )
            break;
          if ( v33 == ++v34 )
            goto LABEL_28;
        }
        v35 = BattleBuffData__OffStateWithAuraConditionCheck(
                this,
                (BattleBuffData_BuffData_o *)v39.fields._current,
                1,
                v31);
      }
      v28 |= v35;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v39,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( (v28 & 1) != 0 )
  {
    if ( logic )
    {
      BattleLogic__updateConditionsBuffAll(logic, 0LL);
      goto LABEL_34;
    }
LABEL_39:
    sub_1B00F28(passiveList, v18);
  }
LABEL_34:
  BattleBuffData__checkFieldAlive(this, aliveSvtData, this->fields.passiveList, logic, v36);
  BattleBuffData__checkFieldAlive(this, aliveSvtData, this->fields.activeList, logic, v37);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleBuffData__checkGutsBuffSuccessful(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        int32_t actionType,
        BattleBuffData_CheckIndividualitiesData_array *checkIndividualitiesDataArray,
        bool isRec,
        const MethodInfo *method)
{
  _BOOL4 v6; // w20
  _BOOL4 IsGutsKeepUsableByFollowingAttackIndividuality; // w0
  _BOOL4 isDecide; // w8
  int32_t buffRate; // w8
  int v11; // w8

  if ( !buff )
    sub_1B00F28(this, 0LL);
  v6 = isRec;
  if ( buff->fields.isDecide && !buff->fields.isUse )
  {
    LOBYTE(IsGutsKeepUsableByFollowingAttackIndividuality) = 0;
  }
  else
  {
    IsGutsKeepUsableByFollowingAttackIndividuality = BattleBuffData__IsGutsKeepUsableByFollowingAttackIndividuality(
                                                       this,
                                                       buff,
                                                       actionType,
                                                       checkIndividualitiesDataArray,
                                                       (const MethodInfo *)isRec);
    isDecide = buff->fields.isDecide;
    buff->fields.isUse = IsGutsKeepUsableByFollowingAttackIndividuality;
    if ( !isDecide )
    {
      buffRate = buff->fields.buffRate;
      buff->fields.isDecide = 1;
      if ( buffRate != 1000 && buffRate )
      {
        v11 = buff->fields.isUse & (buff->fields.buffRate >= BattleRandom__getGutsNext(1000, 0LL));
        buff->fields.isUse = v11;
        if ( (v6 & v11) != 0 )
          buff->fields.isAct = 1;
        LOBYTE(IsGutsKeepUsableByFollowingAttackIndividuality) = v11 != 0;
      }
      else if ( IsGutsKeepUsableByFollowingAttackIndividuality && v6 )
      {
        LOBYTE(IsGutsKeepUsableByFollowingAttackIndividuality) = 1;
        buff->fields.isAct = 1;
      }
    }
  }
  return IsGutsKeepUsableByFollowingAttackIndividuality;
}


bool __fastcall BattleBuffData__checkGutsBuffSuccessfulIndividual(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_array *bufflist,
        int32_t actionType,
        BattleBuffData_CheckIndividualitiesData_array *checkIndividualitiesDataArray,
        BattleBuffData_BuffData_o **buff,
        const MethodInfo *method)
{
  __int64 v11; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x5
  __int64 v14; // x8
  _BOOL8 v15; // x0
  unsigned __int64 v16; // x24
  int32_t v17; // w2
  int32_t v18; // w3
  BattleBuffData_BuffData_o *v19; // x1

  *buff = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)buff, 0, actionType, (int32_t)checkIndividualitiesDataArray);
  if ( !bufflist )
    sub_1B00F28(v11, v12);
  v14 = *(_QWORD *)&bufflist->max_length;
  v15 = 0LL;
  if ( v14 && (int)v14 >= 1 )
  {
    v16 = 0LL;
    while ( 1 )
    {
      if ( v16 >= (unsigned int)v14 )
        goto LABEL_12;
      v15 = BattleBuffData__checkGutsBuffSuccessful(
              this,
              bufflist->m_Items[v16],
              actionType,
              checkIndividualitiesDataArray,
              0,
              v13);
      if ( v15 )
        break;
      LODWORD(v14) = bufflist->max_length;
      if ( (__int64)++v16 >= (int)v14 )
      {
        LOBYTE(v15) = 0;
        return v15;
      }
    }
    if ( (unsigned int)v16 >= bufflist->max_length )
LABEL_12:
      sub_1B00F30(v15, v12);
    v19 = bufflist->m_Items[v16];
    *buff = v19;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)buff, (int32_t)v19, v17, v18);
    LOBYTE(v15) = 1;
  }
  return v15;
}


bool __fastcall BattleBuffData__checkIndiviuality(
        BattleBuffData_o *this,
        BuffList_ActInfo_o *actInfo,
        BattleBuffData_BuffData_o *buffData,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        int32_t *plusMinus,
        const MethodInfo *method)
{
  const MethodInfo *v7; // [xsp+0h] [xbp-20h]

  if ( !checkIndividualities )
    sub_1B00F28(this, actInfo);
  return BattleBuffData__checkIndiviuality_41045640(
           this,
           actInfo,
           buffData,
           checkIndividualities->fields._selfConcatSvtIndividualities_k__BackingField,
           checkIndividualities->fields._opponentConcatSvtIndividualities_k__BackingField,
           checkIndividualities->fields._selfIndividuality_k__BackingField,
           checkIndividualities->fields._opponentIndividuality_k__BackingField,
           plusMinus,
           v7);
}


bool __fastcall BattleBuffData__checkIndiviuality_41045640(
        BattleBuffData_o *this,
        BuffList_ActInfo_o *actInfo,
        BattleBuffData_BuffData_o *buffData,
        System_Int32_array *selfIndv,
        System_Int32_array *opIndv,
        System_Int32_array *selfIndvAll,
        System_Int32_array *opIndvAll,
        int32_t *plusMinus,
        const MethodInfo *method)
{
  BattleBuffData_o *v16; // x21
  Il2CppObject *Entity; // x0
  const MethodInfo *v19; // x4
  BuffEntity_o *v20; // x25
  bool IsIndvAddBuffPassive; // w0
  System_Int32_array *ckSelfIndv; // x27
  bool v23; // w26
  System_Int32_array *v24; // x8
  System_Int32_array *v25; // x23
  BattleBuffData_o *CkSelfCountIndividuality; // x0
  const MethodInfo *v27; // x5
  struct BuffList_BaseInvokeCond_o *OpponentInvokeCond_k__BackingField; // x23
  struct System_Int32_array *ckOpIndv; // x22
  System_Int32_array *v30; // x8
  System_Int32_array *v31; // x3

  v16 = this;
  if ( (byte_48E4937 & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_1B00CCC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, actInfo);
    byte_48E4937 = 1;
  }
  *plusMinus = 0;
  if ( !buffData )
    goto LABEL_25;
  if ( buffData->fields._isRemove )
    return 0;
  this = (BattleBuffData_o *)BattleBuffData__get_buffMst(v16, (const MethodInfo *)actInfo);
  if ( !this )
    goto LABEL_25;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             buffData->fields.buffId,
             (const MethodInfo_2FE6A4C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
  if ( !Entity )
    return 0;
  v20 = (BuffEntity_o *)Entity;
  if ( !BattleBuffData__checkTypePlusMinus(
          (BattleBuffData_o *)Entity,
          actInfo,
          HIDWORD(Entity[1].klass),
          plusMinus,
          v19) )
    return 0;
  IsIndvAddBuffPassive = BuffEntity__IsIndvAddBuffPassive(v20, 0LL);
  ckSelfIndv = v20->fields.ckSelfIndv;
  v23 = IsIndvAddBuffPassive;
  v24 = selfIndvAll ? selfIndvAll : selfIndv;
  v25 = IsIndvAddBuffPassive ? v24 : selfIndv;
  CkSelfCountIndividuality = (BattleBuffData_o *)BuffEntity__GetCkSelfCountIndividuality(v20, 0LL);
  this = (BattleBuffData_o *)BattleBuffData__checkBuffTypeIndiviuality(
                               CkSelfCountIndividuality,
                               v25,
                               ckSelfIndv,
                               v20,
                               (System_Int32_array *)CkSelfCountIndividuality,
                               v27);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  if ( !actInfo
    || (OpponentInvokeCond_k__BackingField = actInfo->fields._OpponentInvokeCond_k__BackingField,
        ckOpIndv = v20->fields.ckOpIndv,
        this = (BattleBuffData_o *)BuffEntity__GetCkOpCountIndividuality(v20, 0LL),
        !OpponentInvokeCond_k__BackingField) )
  {
LABEL_25:
    sub_1B00F28(this, actInfo);
  }
  if ( opIndvAll )
    v30 = opIndvAll;
  else
    v30 = opIndv;
  if ( v23 )
    v31 = v30;
  else
    v31 = opIndv;
  return ((__int64 (__fastcall *)(struct BuffList_BaseInvokeCond_o *, BattleBuffData_o *, BuffEntity_o *, System_Int32_array *, struct System_Int32_array *, BattleBuffData_o *, Il2CppMethodPointer))OpponentInvokeCond_k__BackingField->klass->vtable._5_CheckInvokeCond.method)(
           OpponentInvokeCond_k__BackingField,
           v16,
           v20,
           v31,
           ckOpIndv,
           this,
           OpponentInvokeCond_k__BackingField->klass->vtable._6_CheckBuffTypeCond.methodPtr);
}


bool __fastcall BattleBuffData__checkSameElement(
        BattleBuffData_o *this,
        int32_t elem,
        System_Int32_array *elems,
        const MethodInfo *method)
{
  __int64 v4; // x8
  bool v5; // vf
  int v6; // w8
  int v7; // w9
  int32_t v8; // w10
  bool result; // w0

  if ( !elems )
    return 0;
  v4 = *(_QWORD *)&elems->max_length;
  if ( !v4 )
    return 0;
  v5 = __OFSUB__((_DWORD)v4, 1);
  v6 = v4 - 1;
  if ( v6 < 0 != v5 )
    return 0;
  v7 = 0;
  do
  {
    v8 = elems->m_Items[v7 + 1];
    result = v8 == elem;
    if ( v8 == elem )
      break;
  }
  while ( v6 != v7++ );
  return result;
}


bool __fastcall BattleBuffData__checkShiftClear(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        System_Int32_array *list,
        const MethodInfo *method)
{
  BattleBuffData_o *v6; // x21
  System_Int32_array *Individualty; // x0

  v6 = this;
  if ( (byte_48E493B & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_1B00CCC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, buff);
    byte_48E493B = 1;
  }
  if ( !buff )
    goto LABEL_9;
  if ( buff->fields._isRemove )
    return 0;
  this = (BattleBuffData_o *)BattleBuffData__get_buffMst(v6, (const MethodInfo *)buff);
  if ( !this )
LABEL_9:
    sub_1B00F28(this, buff);
  if ( !DataMasterBase_object__object__int___GetEntity(
          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
          buff->fields.buffId,
          (const MethodInfo_2FE6A4C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__) )
    return 0;
  Individualty = BattleBuffData_BuffData__GetIndividualty(buff, 0, 0, 0, 0LL);
  return Individuality__CheckIndividualities(Individualty, list, 0LL);
}


bool __fastcall BattleBuffData__checkTypePlusMinus(
        BattleBuffData_o *this,
        BuffList_ActInfo_o *actInfo,
        int32_t inType,
        int32_t *plusMinus,
        const MethodInfo *method)
{
  struct BuffList_TYPE_array *plusTypes; // x23
  __int64 v9; // x8
  unsigned __int64 v10; // x24
  int32_t v11; // w22
  struct BuffList_TYPE_array *minusTypes; // x22
  __int64 v13; // x8
  unsigned __int64 v14; // x23
  int32_t v15; // w21
  bool result; // w0

  if ( (byte_48E4939 & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_1B00CCC(&BuffList_TypeInfo, actInfo);
    byte_48E4939 = 1;
  }
  *plusMinus = 0;
  if ( !actInfo )
    sub_1B00F28(this, actInfo);
  plusTypes = actInfo->fields.plusTypes;
  if ( plusTypes && (v9 = *(_QWORD *)&plusTypes->max_length, (int)v9 >= 1) )
  {
    v10 = 0LL;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)v9 )
LABEL_23:
        sub_1B00F30(this, actInfo);
      v11 = plusTypes->m_Items[v10 + 1];
      if ( !BuffList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
      this = (BattleBuffData_o *)BuffList__CheckType(v11, inType, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        break;
      LODWORD(v9) = plusTypes->max_length;
      if ( (__int64)++v10 >= (int)v9 )
        goto LABEL_12;
    }
    result = 1;
    *plusMinus = 1;
  }
  else
  {
LABEL_12:
    minusTypes = actInfo->fields.minusTypes;
    if ( minusTypes && (v13 = *(_QWORD *)&minusTypes->max_length, (int)v13 >= 1) )
    {
      v14 = 0LL;
      while ( 1 )
      {
        if ( v14 >= (unsigned int)v13 )
          goto LABEL_23;
        v15 = minusTypes->m_Items[v14 + 1];
        if ( !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        this = (BattleBuffData_o *)BuffList__CheckType(v15, inType, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          break;
        LODWORD(v13) = minusTypes->max_length;
        if ( (__int64)++v14 >= (int)v13 )
          return 0;
      }
      *plusMinus = -1;
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


void __fastcall BattleBuffData__clearActiveBuff(BattleBuffData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *v2; // x19
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *activeList; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_48E48DD & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_1B00CCC(
                                 &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__,
                                 method);
    byte_48E48DD = 1;
  }
  activeList = v2->fields.activeList;
  if ( !activeList )
    sub_1B00F28(this, method);
  size = activeList->fields._size;
  v5 = activeList->fields._version + 1;
  activeList->fields._size = 0;
  activeList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)activeList->fields._items, 0, size, 0LL);
}


void __fastcall BattleBuffData__clearAuraBuff(BattleBuffData_o *this, const MethodInfo *method)
{
  BattleBuffData_o *v2; // x19
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *auraBuffList; // x8
  int32_t size; // w2
  int v5; // w9

  v2 = this;
  if ( (byte_48E48DE & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_1B00CCC(
                                 &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__,
                                 method);
    byte_48E48DE = 1;
  }
  auraBuffList = v2->fields.auraBuffList;
  if ( !auraBuffList )
    sub_1B00F28(this, method);
  size = auraBuffList->fields._size;
  v5 = auraBuffList->fields._version + 1;
  auraBuffList->fields._size = 0;
  auraBuffList->fields._version = v5;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)auraBuffList->fields._items, 0, size, 0LL);
}


bool __fastcall BattleBuffData__confirmationBuff(
        BattleBuffData_o *this,
        BuffList_ActInfo_o *actInfo,
        System_Int32_array *selfIndv,
        System_Int32_array *opIndv,
        bool isRect,
        int32_t *value,
        System_Int32_array *selfIndvAll,
        System_Int32_array *opIndvAll,
        const MethodInfo *method)
{
  bool v10; // w0
  int32_t param; // w8
  const MethodInfo *v13; // [xsp+0h] [xbp-20h]
  BattleBuffData_BuffData_o *targetBuff; // [xsp+8h] [xbp-18h] BYREF

  targetBuff = 0LL;
  v10 = BattleBuffData__ConfirmationBuff(
          this,
          actInfo,
          selfIndv,
          opIndv,
          isRect,
          &targetBuff,
          selfIndvAll,
          opIndvAll,
          v13);
  param = (int)targetBuff;
  if ( targetBuff )
    param = targetBuff->fields.param;
  *value = param;
  return v10;
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__geCheckBuffSuccessful(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_array *bufflist,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x21
  _BOOL8 v9; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x23
  BattleBuffData_BuffData_o *v14; // x22
  int32_t v15; // w2
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0

  if ( (byte_48E48EB & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, bufflist);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v6);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v7);
    byte_48E48EB = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !bufflist )
    goto LABEL_17;
  v12 = *(_QWORD *)&bufflist->max_length;
  if ( (int)v12 >= 1 )
  {
    v13 = 0LL;
    do
    {
      if ( v13 >= (unsigned int)v12 )
        sub_1B00F30(v9, v10);
      v14 = bufflist->m_Items[v13];
      v9 = BattleBuffData__checkBuffSuccessful(this, v14, 1, v11);
      if ( v9 )
      {
        if ( !v8 )
          goto LABEL_17;
        items = v8->fields._items;
        v17 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
        ++v8->fields._version;
        if ( !items )
          goto LABEL_17;
        size = v8->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v8,
            (Il2CppObject *)v14,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v8->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v14;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)v14, v15, (int32_t)v11);
        }
      }
      LODWORD(v12) = bufflist->max_length;
    }
    while ( (__int64)++v13 < (int)v12 );
  }
  if ( !v8 )
LABEL_17:
    sub_1B00F28(v9, v10);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_object___ToArray(
                                            v8,
                                            (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleBuffData__getActBuff(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        int32_t *value,
        const MethodInfo *method)
{
  BuffList_ActInfo_o *ActInfo; // x0
  __int64 v10; // x1
  System_Int32_array *selfConcatSvtIndividualities_k__BackingField; // x2
  System_Int32_array *opponentConcatSvtIndividualities_k__BackingField; // x3
  System_Int32_array *selfIndividuality_k__BackingField; // x6
  System_Int32_array *opponentIndividuality_k__BackingField; // x7
  bool v15; // w0
  int32_t param; // w8
  const MethodInfo *v18; // [xsp+0h] [xbp-50h]
  BattleBuffData_BuffData_o *targetBuff; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_48E4927 & 1) == 0 )
  {
    sub_1B00CCC(&BuffList_TypeInfo, *(_QWORD *)&act);
    byte_48E4927 = 1;
  }
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  if ( !checkIndividualities )
    sub_1B00F28(ActInfo, v10);
  selfConcatSvtIndividualities_k__BackingField = checkIndividualities->fields._selfConcatSvtIndividualities_k__BackingField;
  opponentConcatSvtIndividualities_k__BackingField = checkIndividualities->fields._opponentConcatSvtIndividualities_k__BackingField;
  selfIndividuality_k__BackingField = checkIndividualities->fields._selfIndividuality_k__BackingField;
  opponentIndividuality_k__BackingField = checkIndividualities->fields._opponentIndividuality_k__BackingField;
  targetBuff = 0LL;
  v15 = BattleBuffData__ConfirmationBuff(
          this,
          ActInfo,
          selfConcatSvtIndividualities_k__BackingField,
          opponentConcatSvtIndividualities_k__BackingField,
          1,
          &targetBuff,
          selfIndividuality_k__BackingField,
          opponentIndividuality_k__BackingField,
          v18);
  param = (int)targetBuff;
  if ( targetBuff )
    param = targetBuff->fields.param;
  *value = param;
  return v15;
}


float __fastcall BattleBuffData__getActMag(
        BattleBuffData_o *this,
        int32_t act,
        System_Int32_array *selfIndiv,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x7

  return BattleBuffData__getActMag_41045356(
           this,
           act,
           selfIndiv,
           this->fields.wkzero,
           &this->fields.wkStr,
           checkIndividualities,
           0LL,
           v5);
}


float __fastcall BattleBuffData__getActMag_41045340(
        BattleBuffData_o *this,
        int32_t act,
        System_Int32_array *selfIndiv,
        System_Int32_array *opIndiv,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        BuffInterface_o *buffIf,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x7

  return BattleBuffData__getActMag_41045356(
           this,
           act,
           selfIndiv,
           opIndiv,
           &this->fields.wkStr,
           checkIndividualities,
           buffIf,
           v7);
}


// local variable allocation has failed, the output may be wrong!
float __fastcall BattleBuffData__getActMag_41045356(
        BattleBuffData_o *this,
        int32_t act,
        System_Int32_array *selfIndiv,
        System_Int32_array *opIndiv,
        System_String_o **missText,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        BuffInterface_o *buffIf,
        const MethodInfo *method)
{
  BuffList_ActInfo_o *ActInfo; // x0
  const MethodInfo *v16; // x7

  if ( (byte_48E4922 & 1) == 0 )
  {
    sub_1B00CCC(&BuffList_TypeInfo, *(_QWORD *)&act);
    byte_48E4922 = 1;
  }
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  return (float)BattleBuffData__getActValue_41044264(
                  this,
                  ActInfo,
                  selfIndiv,
                  opIndiv,
                  missText,
                  checkIndividualities,
                  buffIf,
                  v16)
       / 1000.0;
}


float __fastcall BattleBuffData__getActMag_41045548(
        BattleBuffData_o *this,
        BuffList_ActInfo_o *actInfo,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x7

  if ( !checkIndividualities )
    sub_1B00F28(this, actInfo);
  return (float)BattleBuffData__getActValue_41044264(
                  this,
                  actInfo,
                  checkIndividualities->fields._selfConcatSvtIndividualities_k__BackingField,
                  checkIndividualities->fields._opponentConcatSvtIndividualities_k__BackingField,
                  &this->fields.wkStr,
                  checkIndividualities,
                  checkIndividualities->fields._buffIf_k__BackingField,
                  v4)
       / 1000.0;
}


float __fastcall BattleBuffData__getActMag_41045604(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x7

  if ( !checkIndividualities )
    sub_1B00F28(this, act);
  return BattleBuffData__getActMag_41045356(
           this,
           act,
           checkIndividualities->fields._selfConcatSvtIndividualities_k__BackingField,
           checkIndividualities->fields._opponentConcatSvtIndividualities_k__BackingField,
           &this->fields.wkStr,
           checkIndividualities,
           checkIndividualities->fields._buffIf_k__BackingField,
           v4);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleBuffData__getActValue(
        BattleBuffData_o *this,
        int32_t act,
        bool *actflg,
        System_String_o **missText,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        BattleLogicBuff_BaseProcess_o *buffProc,
        const MethodInfo *method)
{
  __int64 v13; // x1
  BuffList_ActInfo_o *ActInfo; // x0
  __int64 v15; // x1
  BuffList_ActInfo_o *v16; // x19
  int32_t v17; // w20
  int32_t v18; // w21
  int32_t v19; // w20
  bool isUpperLimit; // w0
  const MethodInfo *v22; // [xsp+18h] [xbp-58h]
  int32_t upperParam[2]; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_48E491C & 1) == 0 )
  {
    sub_1B00CCC(&BuffList_TypeInfo, *(_QWORD *)&act);
    sub_1B00CCC(&System_Math_TypeInfo, v13);
    byte_48E491C = 1;
  }
  *(_QWORD *)upperParam = 0LL;
  *actflg = 0;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  if ( !checkIndividualities
    || (v16 = ActInfo,
        ActInfo = (BuffList_ActInfo_o *)BattleBuffData__getCalculationParam(
                                          this,
                                          ActInfo,
                                          checkIndividualities->fields._selfConcatSvtIndividualities_k__BackingField,
                                          0LL,
                                          this->fields.wkzero,
                                          &upperParam[1],
                                          actflg,
                                          missText,
                                          upperParam,
                                          checkIndividualities,
                                          buffProc,
                                          v22),
        !v16) )
  {
    sub_1B00F28(ActInfo, v15);
  }
  v17 = (int)ActInfo;
  if ( BuffList_ActInfo__isLowerLimit(v16, 0LL) )
  {
    v18 = upperParam[0];
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v17 = System_Math__Max_61144256(v18, v17, 0LL);
  }
  v19 = v17 - v16->fields.baseValue;
  isUpperLimit = BuffList_ActInfo__isUpperLimit(v16, 0LL);
  if ( isUpperLimit && upperParam[1] < v19 )
    return upperParam[1];
  else
    return v19;
}


int32_t __fastcall BattleBuffData__getActValue_41044080(
        BattleBuffData_o *this,
        int32_t act,
        bool *actflg,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return BattleBuffData__getActValue(this, act, actflg, &this->fields.wkStr, checkIndividualities, 0LL, v5);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleBuffData__getActValue_41044096(
        BattleBuffData_o *this,
        int32_t act,
        System_Int32_array *selfIndiv,
        System_Int32_array *opIndiv,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        BuffInterface_o *selfIf,
        const MethodInfo *method)
{
  BuffList_ActInfo_o *ActInfo; // x0
  const MethodInfo *v14; // x7

  if ( (byte_48E491D & 1) == 0 )
  {
    sub_1B00CCC(&BuffList_TypeInfo, *(_QWORD *)&act);
    byte_48E491D = 1;
  }
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  return BattleBuffData__getActValue_41044264(
           this,
           ActInfo,
           selfIndiv,
           opIndiv,
           &this->fields.wkStr,
           checkIndividualities,
           selfIf,
           v14);
}


int32_t __fastcall BattleBuffData__getActValue_41044264(
        BattleBuffData_o *this,
        BuffList_ActInfo_o *actInfo,
        System_Int32_array *selfIndiv,
        System_Int32_array *opIndiv,
        System_String_o **text,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        BuffInterface_o *selfIf,
        const MethodInfo *method)
{
  __int64 CalculationParam; // x0
  __int64 v16; // x1
  int32_t v17; // w20
  int32_t v18; // w21
  int32_t v19; // w20
  bool isUpperLimit; // w0
  const MethodInfo *v22; // [xsp+18h] [xbp-58h]
  int32_t upperParam[2]; // [xsp+28h] [xbp-48h] BYREF

  if ( (byte_48E491F & 1) == 0 )
  {
    sub_1B00CCC(&System_Math_TypeInfo, actInfo);
    byte_48E491F = 1;
  }
  *(_QWORD *)upperParam = 0LL;
  CalculationParam = BattleBuffData__getCalculationParam(
                       this,
                       actInfo,
                       selfIndiv,
                       selfIf,
                       opIndiv,
                       &upperParam[1],
                       &this->fields.wkflg,
                       text,
                       upperParam,
                       checkIndividualities,
                       0LL,
                       v22);
  if ( !actInfo )
    sub_1B00F28(CalculationParam, v16);
  v17 = CalculationParam;
  if ( BuffList_ActInfo__isLowerLimit(actInfo, 0LL) )
  {
    v18 = upperParam[0];
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v17 = System_Math__Max_61144256(v18, v17, 0LL);
  }
  v19 = v17 - actInfo->fields.baseValue;
  isUpperLimit = BuffList_ActInfo__isUpperLimit(actInfo, 0LL);
  if ( isUpperLimit && upperParam[1] < v19 )
    return upperParam[1];
  else
    return v19;
}


int32_t __fastcall BattleBuffData__getActValue_41044544(
        BattleBuffData_o *this,
        int32_t act,
        System_Int32_array *selfIndiv,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6

  return BattleBuffData__getActValue_41044096(this, act, selfIndiv, this->fields.wkzero, checkIndividualities, 0LL, v5);
}


int32_t __fastcall BattleBuffData__getActValue_41044560(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x6

  if ( !checkIndividualities )
    sub_1B00F28(this, act);
  return BattleBuffData__getActValue_41044096(
           this,
           act,
           checkIndividualities->fields._selfConcatSvtIndividualities_k__BackingField,
           checkIndividualities->fields._opponentConcatSvtIndividualities_k__BackingField,
           checkIndividualities,
           0LL,
           v4);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleBuffData__getActValue_41044596(
        BattleBuffData_o *this,
        int32_t act,
        System_String_o **text,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  BuffList_ActInfo_o *ActInfo; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x7

  if ( (byte_48E491E & 1) == 0 )
  {
    sub_1B00CCC(&BuffList_TypeInfo, *(_QWORD *)&act);
    byte_48E491E = 1;
  }
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  if ( !checkIndividualities )
    sub_1B00F28(ActInfo, v10);
  return BattleBuffData__getActValue_41044264(
           this,
           ActInfo,
           checkIndividualities->fields._selfConcatSvtIndividualities_k__BackingField,
           checkIndividualities->fields._opponentConcatSvtIndividualities_k__BackingField,
           text,
           checkIndividualities,
           checkIndividualities->fields._buffIf_k__BackingField,
           v11);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__getActiveArrayNoActAfterUsed(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x19
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *activeList; // x0
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppObject *current; // x20
  _BOOL8 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  int32_t v19; // w3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  System_Collections_Generic_List_Enumerator_object__o v25; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_48E48CE & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v8);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v9);
    byte_48E48CE = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v10 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  activeList = (System_Collections_Generic_List_object__o *)this->fields.activeList;
  if ( !activeList )
    goto LABEL_19;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    activeList,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v26 = v25;
  while ( 1 )
  {
    v13 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v26,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v13 )
      break;
    current = v26.fields._current;
    if ( !v26.fields._current )
      sub_1B00F28(v13, v14);
    v16 = BattleBuffData_BuffData__checkAct((BattleBuffData_BuffData_o *)v26.fields._current, 1, 0LL);
    if ( !v16 && LOBYTE(current[2].klass) )
    {
      if ( !v10 )
        sub_1B00F28(v16, v17);
      items = v10->fields._items;
      v21 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
      ++v10->fields._version;
      if ( !items )
        sub_1B00F28(v16, v17);
      size = v10->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v10,
          current,
          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
      }
      else
      {
        v23 = &items->obj.klass + size;
        v10->fields._size = size + 1;
        v23[4] = (Il2CppClass *)current;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)current, v18, v19);
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v26,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( !v10 )
LABEL_19:
    sub_1B00F28(activeList, v11);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_object___ToArray(
                                            v10,
                                            (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


int32_t __fastcall BattleBuffData__getActiveBuffNum(
        BattleBuffData_o *this,
        System_Int32_array *ids,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_array *ActiveList; // x0
  __int64 buffId; // x1
  __int64 max_length; // x9
  int32_t v7; // w8
  __int64 v8; // x10
  __int64 v9; // x13
  BattleBuffData_BuffData_o *v10; // x14
  __int64 v11; // x15
  int32_t *v12; // x16
  int v13; // t1

  ActiveList = BattleBuffData__getActiveList(this, 1, method);
  if ( !ActiveList )
LABEL_17:
    sub_1B00F28(ActiveList, buffId);
  max_length = ActiveList->max_length;
  if ( max_length << 32 >= 1 )
  {
    v7 = 0;
    v8 = 0LL;
    while ( 1 )
    {
      if ( v8 == max_length )
        goto LABEL_18;
      if ( !ids )
        goto LABEL_17;
      v9 = ids->max_length;
      if ( v9 << 32 >= 1 )
        break;
LABEL_13:
      if ( ++v8 == (int)max_length )
        return v7;
    }
    v10 = ActiveList->m_Items[v8];
    v11 = (int)v9;
    v12 = &ids->m_Items[1];
    while ( v9 )
    {
      if ( !v10 )
        goto LABEL_17;
      v13 = *v12++;
      buffId = (unsigned int)v10->fields.buffId;
      --v11;
      --v9;
      if ( v13 == (_DWORD)buffId )
        ++v7;
      if ( !v11 )
        goto LABEL_13;
    }
LABEL_18:
    sub_1B00F30(ActiveList, buffId);
  }
  return 0;
}


int32_t __fastcall BattleBuffData__getActiveIndividualitiesNum(
        BattleBuffData_o *this,
        System_Int32_array *individualities,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_array *ActiveList; // x0
  __int64 v5; // x1
  int max_length; // w8
  BattleBuffData_BuffData_array *v7; // x20
  int v8; // w22
  int32_t v9; // w21
  System_Int32_array *Individualty; // x0

  ActiveList = BattleBuffData__getActiveList(this, 1, method);
  if ( !ActiveList )
    goto LABEL_10;
  max_length = ActiveList->max_length;
  v7 = ActiveList;
  if ( max_length >= 1 )
  {
    v8 = 0;
    v9 = 0;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
        sub_1B00F30(ActiveList, v5);
      ActiveList = (BattleBuffData_BuffData_array *)v7->m_Items[v8];
      if ( !ActiveList )
        break;
      Individualty = BattleBuffData_BuffData__GetIndividualty((BattleBuffData_BuffData_o *)ActiveList, 0, 0, 0, 0LL);
      ActiveList = (BattleBuffData_BuffData_array *)Individuality__CheckIndividualities(
                                                      Individualty,
                                                      individualities,
                                                      0LL);
      max_length = v7->max_length;
      ++v8;
      v9 += (unsigned __int8)ActiveList & 1;
      if ( v8 >= max_length )
        return v9;
    }
LABEL_10:
    sub_1B00F28(ActiveList, v5);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
BattleBuffData_BuffData_array *__fastcall BattleBuffData__getActiveList(
        BattleBuffData_o *this,
        bool isCheckInterval,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BattleBuffData___c__DisplayClass32_0_o *v9; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *activeList; // x19
  System_Predicate_object__o *v13; // x20

  if ( (byte_48E48CC & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, isCheckInterval);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v5);
    sub_1B00CCC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v6);
    sub_1B00CCC(&Method_BattleBuffData___c__DisplayClass32_0__getActiveList_b__0__, v7);
    sub_1B00CCC(&BattleBuffData___c__DisplayClass32_0_TypeInfo, v8);
    byte_48E48CC = 1;
  }
  v9 = (BattleBuffData___c__DisplayClass32_0_o *)sub_1B00F18(BattleBuffData___c__DisplayClass32_0_TypeInfo);
  BattleBuffData___c__DisplayClass32_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.isCheckInterval = isCheckInterval,
        activeList = (System_Collections_Generic_List_object__o *)this->fields.activeList,
        v13 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo),
        System_Predicate_object____ctor(
          v13,
          (Il2CppObject *)v9,
          Method_BattleBuffData___c__DisplayClass32_0__getActiveList_b__0__,
          0LL),
        !activeList)
    || (All = System_Collections_Generic_List_object___FindAll(
                activeList,
                (System_Predicate_T__o *)v13,
                (const MethodInfo_33C20E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__)) == 0LL )
  {
    sub_1B00F28(All, v11);
  }
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_object___ToArray(
                                            (System_Collections_Generic_List_object__o *)All,
                                            (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__getActiveListDebug(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *activeList; // x0

  if ( (byte_48E48D0 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, method);
    byte_48E48D0 = 1;
  }
  activeList = (System_Collections_Generic_List_object__o *)this->fields.activeList;
  if ( !activeList )
    sub_1B00F28(0LL, method);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_object___ToArray(
                                            activeList,
                                            (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleBuffData__getAdjustValue(
        BattleBuffData_o *this,
        int32_t value,
        int32_t act,
        System_Int32_array *selfIndiv,
        System_Int32_array *opIndiv,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        const MethodInfo *method)
{
  int32_t v11; // w19
  __int64 v13; // x1
  BuffList_ActInfo_o *ActInfo; // x23
  __int64 CalculationParam; // x0
  __int64 v16; // x1
  int32_t v17; // w20
  bool isUpperLimit; // w0
  const MethodInfo *v20; // [xsp+18h] [xbp-68h]
  System_String_o *missText; // [xsp+28h] [xbp-58h] BYREF
  int32_t upperParam[2]; // [xsp+38h] [xbp-48h] BYREF

  v11 = value;
  if ( (byte_48E4920 & 1) == 0 )
  {
    sub_1B00CCC(&BuffList_TypeInfo, *(_QWORD *)&value);
    sub_1B00CCC(&System_Math_TypeInfo, v13);
    byte_48E4920 = 1;
  }
  *(_QWORD *)upperParam = 0LL;
  missText = 0LL;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  CalculationParam = BattleBuffData__getCalculationParam(
                       this,
                       ActInfo,
                       selfIndiv,
                       0LL,
                       opIndiv,
                       &upperParam[1],
                       &this->fields.wkflg,
                       &missText,
                       upperParam,
                       checkIndividualities,
                       0LL,
                       v20);
  if ( !ActInfo )
    sub_1B00F28(CalculationParam, v16);
  if ( BuffList_ActInfo__isLowerLimit(ActInfo, 0LL) )
  {
    v17 = upperParam[0];
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v11 = System_Math__Max_61144256(v17, v11, 0LL);
  }
  isUpperLimit = BuffList_ActInfo__isUpperLimit(ActInfo, 0LL);
  if ( isUpperLimit && upperParam[1] < v11 )
    return upperParam[1];
  else
    return v11;
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__getAuraBuffList(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  BattleBuffData___c_c *v6; // x0
  System_Collections_Generic_List_object__o *auraBuffList; // x19
  System_Predicate_object__o *_9__37_0; // x20
  Il2CppObject *v9; // x21
  struct BattleBuffData___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_48E48D1 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, method);
    sub_1B00CCC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v3);
    sub_1B00CCC(&Method_BattleBuffData___c__getAuraBuffList_b__37_0__, v4);
    sub_1B00CCC(&BattleBuffData___c_TypeInfo, v5);
    byte_48E48D1 = 1;
  }
  v6 = BattleBuffData___c_TypeInfo;
  auraBuffList = (System_Collections_Generic_List_object__o *)this->fields.auraBuffList;
  if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v6 = BattleBuffData___c_TypeInfo;
  }
  _9__37_0 = (System_Predicate_object__o *)v6->static_fields->__9__37_0;
  if ( !_9__37_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = BattleBuffData___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__37_0 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_object____ctor(_9__37_0, v9, Method_BattleBuffData___c__getAuraBuffList_b__37_0__, 0LL);
    static_fields = BattleBuffData___c_TypeInfo->static_fields;
    static_fields->__9__37_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__37_0;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__37_0, (int32_t)_9__37_0, v11, v12);
  }
  if ( !auraBuffList )
    sub_1B00F28(v6, method);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)System_Collections_Generic_List_object___FindAll(
                                                                         auraBuffList,
                                                                         (System_Predicate_T__o *)_9__37_0,
                                                                         (const MethodInfo_33C20E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleBuffData__getBuffActiveIDList(
        BattleBuffData_o *this,
        bool IsIncludeUnsubState,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_int__o *v11; // x19
  __int64 v12; // x1
  const MethodInfo *v13; // x2
  void *ActiveList; // x0
  System_Predicate_object__o *v15; // x21
  Il2CppObject *v16; // x22
  ServantStatusBattleListViewItem_o *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  void *v20; // x20
  int v21; // w8
  unsigned int v22; // w21
  __int64 v23; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10

  if ( (byte_48E48FE & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Add__, IsIncludeUnsubState);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_1B00CCC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v8);
    sub_1B00CCC(&Method_BattleBuffData___c__getBuffActiveIDList_b__106_0__, v9);
    sub_1B00CCC(&BattleBuffData___c_TypeInfo, v10);
    byte_48E48FE = 1;
  }
  v11 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v11,
    (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( IsIncludeUnsubState )
  {
    ActiveList = BattleBuffData__getActiveList(this, 1, v13);
  }
  else
  {
    ActiveList = BattleBuffData___c_TypeInfo;
    if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      ActiveList = BattleBuffData___c_TypeInfo;
    }
    v15 = *(System_Predicate_object__o **)(*((_QWORD *)ActiveList + 23) + 168LL);
    if ( !v15 )
    {
      if ( !*((_DWORD *)ActiveList + 56) )
      {
        j_il2cpp_runtime_class_init_0(ActiveList);
        ActiveList = BattleBuffData___c_TypeInfo;
      }
      v16 = (Il2CppObject *)**((_QWORD **)ActiveList + 23);
      v15 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
      System_Predicate_object____ctor(v15, v16, Method_BattleBuffData___c__getBuffActiveIDList_b__106_0__, 0LL);
      static_fields = (ServantStatusBattleListViewItem_o *)BattleBuffData___c_TypeInfo->static_fields;
      static_fields[1].klass = (ServantStatusBattleListViewItem_c *)v15;
      sub_1B00C70(static_fields + 1, (int32_t)v15, v18, v19);
    }
    if ( !this )
      goto LABEL_26;
    ActiveList = BattleBuffData__GetAvaliableActiveBuffArray(
                   this,
                   (System_Predicate_BattleBuffData_BuffData__o *)v15,
                   v13);
  }
  v20 = ActiveList;
  if ( !ActiveList )
    goto LABEL_26;
  v21 = *((_DWORD *)ActiveList + 6);
  if ( v21 >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      if ( v22 >= v21 )
        sub_1B00F30(ActiveList, v12);
      v23 = *((_QWORD *)v20 + (int)v22 + 4);
      if ( !v23 )
        break;
      if ( !v11 )
        break;
      v12 = *(unsigned int *)(v23 + 16);
      items = v11->fields._items;
      v25 = Method_System_Collections_Generic_List_int__Add__;
      ++v11->fields._version;
      if ( !items )
        break;
      size = v11->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v11,
          v12,
          *(const MethodInfo_33A49AC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
      }
      else
      {
        v11->fields._size = size + 1;
        items->m_Items[size + 1] = v12;
      }
      v21 = *((_DWORD *)v20 + 6);
      if ( (int)++v22 >= v21 )
        goto LABEL_24;
    }
LABEL_26:
    sub_1B00F28(ActiveList, v12);
  }
LABEL_24:
  if ( !v11 )
    goto LABEL_26;
  return System_Collections_Generic_List_int___ToArray(
           v11,
           (const MethodInfo_33A6464 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleBuffData__getBuffIDList(
        BattleBuffData_o *this,
        bool IsIncludeUnsubState,
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
  System_Collections_Generic_List_int__o *v16; // x21
  const MethodInfo *v17; // x2
  void *PassiveList; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  void *v21; // x22
  System_Collections_Generic_List_object__o *v22; // x23
  System_Predicate_object__o *v23; // x22
  Il2CppObject *v24; // x24
  struct BattleBuffData___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  int v28; // w8
  unsigned int v29; // w23
  __int64 v30; // x8
  struct System_Int32_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10

  if ( (byte_48E48FD & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__AddRange__, IsIncludeUnsubState);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Add__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__ToArray__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor___74549024, v10);
    sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v11);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v12);
    sub_1B00CCC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v13);
    sub_1B00CCC(&Method_BattleBuffData___c__getBuffIDList_b__105_0__, v14);
    sub_1B00CCC(&BattleBuffData___c_TypeInfo, v15);
    byte_48E48FD = 1;
  }
  v16 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v16,
    (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
  PassiveList = BattleBuffData__getPassiveList(this, 1, v17);
  v21 = PassiveList;
  if ( !IsIncludeUnsubState )
  {
    v22 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
    System_Collections_Generic_List_object____ctor_54268612(
      v22,
      (System_Collections_Generic_IEnumerable_T__o *)v21,
      (const MethodInfo_33C12C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor___74549024);
    PassiveList = BattleBuffData___c_TypeInfo;
    if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
      PassiveList = BattleBuffData___c_TypeInfo;
    }
    v23 = *(System_Predicate_object__o **)(*((_QWORD *)PassiveList + 23) + 160LL);
    if ( !v23 )
    {
      if ( !*((_DWORD *)PassiveList + 56) )
      {
        j_il2cpp_runtime_class_init_0(PassiveList);
        PassiveList = BattleBuffData___c_TypeInfo;
      }
      v24 = (Il2CppObject *)**((_QWORD **)PassiveList + 23);
      v23 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
      System_Predicate_object____ctor(v23, v24, Method_BattleBuffData___c__getBuffIDList_b__105_0__, 0LL);
      static_fields = BattleBuffData___c_TypeInfo->static_fields;
      static_fields->__9__105_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)v23;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__105_0, (int32_t)v23, v26, v27);
    }
    if ( !v22 )
      goto LABEL_26;
    PassiveList = System_Collections_Generic_List_object___FindAll(
                    v22,
                    (System_Predicate_T__o *)v23,
                    (const MethodInfo_33C20E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
    if ( !PassiveList )
      goto LABEL_26;
    PassiveList = System_Collections_Generic_List_object___ToArray(
                    (System_Collections_Generic_List_object__o *)PassiveList,
                    (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    v21 = PassiveList;
  }
  if ( !v21 )
    goto LABEL_26;
  v28 = *((_DWORD *)v21 + 6);
  if ( v28 >= 1 )
  {
    v29 = 0;
    while ( 1 )
    {
      if ( v29 >= v28 )
        sub_1B00F30(PassiveList, v19);
      v30 = *((_QWORD *)v21 + (int)v29 + 4);
      if ( !v30 )
        break;
      if ( !v16 )
        break;
      v19 = *(unsigned int *)(v30 + 16);
      items = v16->fields._items;
      v32 = Method_System_Collections_Generic_List_int__Add__;
      ++v16->fields._version;
      if ( !items )
        break;
      size = v16->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v16,
          v19,
          *(const MethodInfo_33A49AC **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
      }
      else
      {
        v16->fields._size = size + 1;
        items->m_Items[size + 1] = v19;
      }
      v28 = *((_DWORD *)v21 + 6);
      if ( (int)++v29 >= v28 )
        goto LABEL_24;
    }
LABEL_26:
    sub_1B00F28(PassiveList, v19);
  }
LABEL_24:
  PassiveList = BattleBuffData__getBuffActiveIDList(this, IsIncludeUnsubState, v20);
  if ( !v16 )
    goto LABEL_26;
  System_Collections_Generic_List_int___AddRange(
    v16,
    (System_Collections_Generic_IEnumerable_T__o *)PassiveList,
    (const MethodInfo_33A4BB8 *)Method_System_Collections_Generic_List_int__AddRange__);
  return System_Collections_Generic_List_int___ToArray(
           v16,
           (const MethodInfo_33A6464 *)Method_System_Collections_Generic_List_int__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleBuffData__getBuffIndividualities(
        BattleBuffData_o *this,
        bool isActiveOnly,
        bool isIncludeIgnoreIndiv,
        bool isIgnoreIndivUnreleaseable,
        bool isAiCheck,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_List_int__o *v14; // x22
  const MethodInfo *v15; // x2
  BattleBuffData_BuffData_o *PassiveList; // x0
  __int64 v17; // x1
  int count; // w8
  BattleBuffData_BuffData_o *v19; // x24
  unsigned int v20; // w26
  int v21; // w8
  BattleBuffData_BuffData_o *v22; // x23
  unsigned int v23; // w24

  if ( (byte_48E48FB & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__AddRange__, isActiveOnly);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__ToArray__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor__, v12);
    sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v13);
    byte_48E48FB = 1;
  }
  v14 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v14,
    (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( (isAiCheck || !isIgnoreIndivUnreleaseable) && !isActiveOnly )
  {
    PassiveList = (BattleBuffData_BuffData_o *)BattleBuffData__getPassiveList(this, 1, v15);
    if ( !PassiveList )
      goto LABEL_21;
    count = PassiveList->fields.count;
    v19 = PassiveList;
    if ( count >= 1 )
    {
      v20 = 0;
      while ( v20 < count )
      {
        PassiveList = (BattleBuffData_BuffData_o *)*((_QWORD *)&v19->fields.isUse + (int)v20);
        if ( !PassiveList )
          goto LABEL_21;
        PassiveList = (BattleBuffData_BuffData_o *)BattleBuffData_BuffData__GetIndividualty(
                                                     PassiveList,
                                                     isIncludeIgnoreIndiv,
                                                     isIgnoreIndivUnreleaseable,
                                                     isAiCheck,
                                                     0LL);
        if ( !v14 )
          goto LABEL_21;
        System_Collections_Generic_List_int___AddRange(
          v14,
          (System_Collections_Generic_IEnumerable_T__o *)PassiveList,
          (const MethodInfo_33A4BB8 *)Method_System_Collections_Generic_List_int__AddRange__);
        count = v19->fields.count;
        if ( (int)++v20 >= count )
          goto LABEL_12;
      }
LABEL_22:
      sub_1B00F30(PassiveList, v17);
    }
  }
LABEL_12:
  PassiveList = (BattleBuffData_BuffData_o *)BattleBuffData__getActiveList(this, 1, v15);
  if ( !PassiveList )
    goto LABEL_21;
  v21 = PassiveList->fields.count;
  v22 = PassiveList;
  if ( v21 >= 1 )
  {
    v23 = 0;
    while ( v23 < v21 )
    {
      PassiveList = (BattleBuffData_BuffData_o *)*((_QWORD *)&v22->fields.isUse + (int)v23);
      if ( !PassiveList )
        goto LABEL_21;
      PassiveList = (BattleBuffData_BuffData_o *)BattleBuffData_BuffData__GetIndividualty(
                                                   PassiveList,
                                                   isIncludeIgnoreIndiv,
                                                   isIgnoreIndivUnreleaseable,
                                                   isAiCheck,
                                                   0LL);
      if ( !v14 )
        goto LABEL_21;
      System_Collections_Generic_List_int___AddRange(
        v14,
        (System_Collections_Generic_IEnumerable_T__o *)PassiveList,
        (const MethodInfo_33A4BB8 *)Method_System_Collections_Generic_List_int__AddRange__);
      v21 = v22->fields.count;
      if ( (int)++v23 >= v21 )
        goto LABEL_19;
    }
    goto LABEL_22;
  }
LABEL_19:
  if ( !v14 )
LABEL_21:
    sub_1B00F28(PassiveList, v17);
  return System_Collections_Generic_List_int___ToArray(
           v14,
           (const MethodInfo_33A6464 *)Method_System_Collections_Generic_List_int__ToArray__);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__getBuffList(
        BattleBuffData_o *this,
        BuffList_TYPE_array *types,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        BattleBuffData_BuffData_array *checklist,
        const MethodInfo *method)
{
  if ( !checkIndividualities )
    sub_1B00F28(this, types);
  return BattleBuffData__getBuffList_41011768(
           this,
           types,
           checkIndividualities->fields._selfConcatSvtIndividualities_k__BackingField,
           checklist,
           method);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__getBuffList_41011768(
        BattleBuffData_o *this,
        BuffList_TYPE_array *types,
        System_Int32_array *targetIndividualities,
        BattleBuffData_BuffData_array *checklist,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x23
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  MethodInfo *monitor; // x1
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  int32_t v21; // w2
  int v22; // w8
  signed int max_length; // w8
  unsigned int v24; // w29
  BattleBuffData_BuffData_o *v25; // x24
  __int64 v26; // x8
  System_Collections_Generic_IEnumerable_T__o *v27; // x25
  unsigned __int64 v28; // x21
  int32_t v29; // w26
  int32_t klass_high; // w27
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  __int64 v36; // x0
  BattleBuffData_o *v38; // [xsp+0h] [xbp-70h]

  if ( (byte_48E4907 & 1) == 0 )
  {
    sub_1B00CCC(&BuffList_TypeInfo, types);
    sub_1B00CCC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v13);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v14);
    byte_48E4907 = 1;
  }
  v15 = sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    (System_Collections_Generic_List_object__o *)v15,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !checklist )
  {
    ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v18);
    if ( !v15 )
      goto LABEL_37;
    System_Collections_Generic_List_object___AddRange(
      (System_Collections_Generic_List_object__o *)v15,
      ActiveList,
      (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v19);
    System_Collections_Generic_List_object___AddRange(
      (System_Collections_Generic_List_object__o *)v15,
      PassiveList,
      (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
    ActiveList = (System_Collections_Generic_IEnumerable_T__o *)System_Collections_Generic_List_object___ToArray(
                                                                  (System_Collections_Generic_List_object__o *)v15,
                                                                  (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    v21 = *(_DWORD *)(v15 + 24);
    checklist = (BattleBuffData_BuffData_array *)ActiveList;
    v22 = *(_DWORD *)(v15 + 28) + 1;
    *(_DWORD *)(v15 + 24) = 0;
    *(_DWORD *)(v15 + 28) = v22;
    if ( v21 >= 1 )
      System_Array__Clear(*(System_Array_o **)(v15 + 16), 0, v21, 0LL);
    if ( !checklist )
      goto LABEL_37;
  }
  max_length = checklist->max_length;
  v38 = this;
  if ( max_length >= 1 )
  {
    v24 = 0;
    while ( 1 )
    {
      if ( v24 >= max_length )
        goto LABEL_36;
      v25 = checklist->m_Items[v24];
      if ( !v25 )
        goto LABEL_37;
      if ( !v25->fields._isRemove )
      {
        ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__get_buffMst(v38, monitor);
        if ( !ActiveList )
          goto LABEL_37;
        ActiveList = (System_Collections_Generic_IEnumerable_T__o *)DataMasterBase_object__object__int___GetEntity(
                                                                      (DataMasterBase_TMaster__TEntity__PKType__o *)ActiveList,
                                                                      v25->fields.buffId,
                                                                      (const MethodInfo_2FE6A4C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        if ( ActiveList )
        {
          if ( !types )
            goto LABEL_37;
          v26 = *(_QWORD *)&types->max_length;
          if ( (int)v26 >= 1 )
            break;
        }
      }
LABEL_13:
      max_length = checklist->max_length;
      if ( (int)++v24 >= max_length )
        goto LABEL_34;
    }
    v27 = ActiveList;
    v28 = 0LL;
    while ( v28 < (unsigned int)v26 )
    {
      v29 = types->m_Items[v28 + 1];
      klass_high = HIDWORD(v27[1].klass);
      if ( !BuffList_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
      ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BuffList__CheckType(v29, klass_high, 0LL);
      if ( ((unsigned __int8)ActiveList & 1) != 0 )
      {
        monitor = (MethodInfo *)v27[3].monitor;
        if ( !monitor
          || !monitor->name
          || (ActiveList = (System_Collections_Generic_IEnumerable_T__o *)Individuality__CheckIndividualities(
                                                                            targetIndividualities,
                                                                            (System_Int32_array *)monitor,
                                                                            0LL),
              ((unsigned __int8)ActiveList & 1) != 0) )
        {
          if ( !v15 )
            goto LABEL_37;
          v33 = *(_QWORD *)(v15 + 16);
          v34 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
          ++*(_DWORD *)(v15 + 28);
          if ( !v33 )
            goto LABEL_37;
          v35 = *(int *)(v15 + 24);
          if ( (unsigned int)v35 >= *(_DWORD *)(v33 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)v15,
              (Il2CppObject *)v25,
              *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
          }
          else
          {
            v36 = v33 + 8 * v35;
            *(_DWORD *)(v15 + 24) = v35 + 1;
            *(_QWORD *)(v36 + 32) = v25;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)(v36 + 32), (int32_t)v25, v31, v32);
          }
        }
      }
      LODWORD(v26) = types->max_length;
      if ( (__int64)++v28 >= (int)v26 )
        goto LABEL_13;
    }
LABEL_36:
    sub_1B00F30(ActiveList, monitor);
  }
LABEL_34:
  if ( !v15 )
LABEL_37:
    sub_1B00F28(ActiveList, monitor);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_object___ToArray(
                                            (System_Collections_Generic_List_object__o *)v15,
                                            (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleBuffData_BuffData_array *__fastcall BattleBuffData__getBuffList_41032464(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        bool isRec,
        bool checkOnly,
        System_Func_BattleBuffData_BuffData__bool__o *funcCond,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  BuffList_ActInfo_o *ActInfo; // x25
  System_Collections_Generic_List_object__o *v22; // x19
  const MethodInfo *v23; // x2
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v24; // x0
  __int64 v25; // x1
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c *klass; // x8
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v27; // x20
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v31; // x1
  __int64 v32; // x20
  bool v33; // w26
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  const MethodInfo *v42; // x5
  BattleBuffData_BuffData_o *v43; // x27
  _BOOL8 v44; // x0
  __int64 v45; // x1
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x0
  __int64 v52; // x8
  __int64 v53; // x9
  int *v54; // x10
  __int64 v55; // x0
  int32_t plusMinus; // [xsp+Ch] [xbp-64h] BYREF

  if ( (byte_48E4932 & 1) == 0 )
  {
    sub_1B00CCC(&BuffList_TypeInfo, *(_QWORD *)&act);
    sub_1B00CCC(&System_IDisposable_TypeInfo, v13);
    sub_1B00CCC(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v14);
    sub_1B00CCC(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v15);
    sub_1B00CCC(&System_Collections_IEnumerator_TypeInfo, v16);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v17);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v18);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v19);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v20);
    byte_48E4932 = 1;
  }
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  v22 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  plusMinus = 0;
  v24 = BattleBuffData__AllBuffValidEnumerablePriorActive(this, 0, v23);
  if ( !v24 )
    goto LABEL_47;
  klass = v24->klass;
  v27 = v24;
  v28 = *(unsigned __int16 *)(&v24->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v24->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      --v28;
      p_offset += 4;
      if ( !v28 )
        goto LABEL_10;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_10:
    p_method = sub_1B52CAC(v24, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v32 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *, _QWORD))p_method)(
          v27,
          *(_QWORD *)(p_method + 8));
  if ( !v32 )
    sub_1B00F28(0LL, v31);
  v33 = isRec;
  while ( 1 )
  {
    v34 = *(_QWORD *)v32;
    v35 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
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
      v37 = sub_1B52CAC(v32, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v32, *(_QWORD *)(v37 + 8)) & 1) == 0 )
      break;
    v38 = *(_QWORD *)v32;
    v39 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
    {
      v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v40 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
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
      v41 = sub_1B52CAC(v32, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v43 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v32, *(_QWORD *)(v41 + 8));
    if ( !funcCond
      || (((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *, BattleBuffData_BuffData_o *, _QWORD))funcCond->fields.m_target)(
            funcCond->fields.original_method_info,
            v43,
            *(_QWORD *)&funcCond->fields.extra_arg) & 1) != 0 )
    {
      v44 = BattleBuffData__checkIndiviuality(this, ActInfo, v43, checkIndividualities, &plusMinus, v42);
      if ( v44 && (checkOnly || (v44 = BattleBuffData__checkBuffSuccessful(this, v43, v33, v47))) )
      {
        if ( !v22 )
          sub_1B00F28(v44, v45);
        items = v22->fields._items;
        v49 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
        ++v22->fields._version;
        if ( !items )
          sub_1B00F28(v44, v45);
        size = v22->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v22,
            (Il2CppObject *)v43,
            *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
        }
        else
        {
          v51 = &items->obj.klass + size;
          v22->fields._size = size + 1;
          v51[4] = (Il2CppClass *)v43;
          sub_1B00C70((ServantStatusBattleListViewItem_o *)(v51 + 4), (int32_t)v43, v46, (int32_t)v47);
        }
      }
    }
  }
  v52 = *(_QWORD *)v32;
  v53 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
  {
    v54 = (int *)(*(_QWORD *)(v52 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v54 - 1) != System_IDisposable_TypeInfo )
    {
      --v53;
      v54 += 4;
      if ( !v53 )
        goto LABEL_41;
    }
    v55 = v52 + 16LL * *v54 + 312;
  }
  else
  {
LABEL_41:
    v55 = sub_1B52CAC(v32, System_IDisposable_TypeInfo, 0LL);
  }
  v24 = (System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v55)(
                                                                               v32,
                                                                               *(_QWORD *)(v55 + 8));
  if ( !v22 )
LABEL_47:
    sub_1B00F28(v24, v25);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_object___ToArray(
                                            v22,
                                            (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleBuffData__getBuffParamList(
        BattleBuffData_o *this,
        int32_t act,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
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
  BuffList_ActInfo_o *ActInfo; // x21
  System_Collections_Generic_List_int__o *v20; // x20
  System_Collections_Generic_List_object__o *v21; // x24
  const MethodInfo *v22; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  __int64 v27; // x23
  System_Int32_array *v28; // x23
  Il2CppObject *current; // x24
  _BOOL8 v30; // x0
  __int64 v31; // x1
  __int64 monitor_high; // x1
  struct System_Int32_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  const MethodInfo *v37; // [xsp+0h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+20h] [xbp-80h] BYREF
  int32_t plusMinus; // [xsp+4Ch] [xbp-54h] BYREF

  if ( (byte_48E4931 & 1) == 0 )
  {
    sub_1B00CCC(&BuffList_TypeInfo, *(_QWORD *)&act);
    sub_1B00CCC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v11);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Add__, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v13);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__ToArray__, v14);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor__, v15);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v16);
    sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v17);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v18);
    byte_48E4931 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  v20 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v20,
    (const MethodInfo_33A4158 *)Method_System_Collections_Generic_List_int___ctor__);
  plusMinus = 0;
  v21 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v22);
  if ( !v21 )
    goto LABEL_24;
  System_Collections_Generic_List_object___AddRange(
    v21,
    ActiveList,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v25);
  System_Collections_Generic_List_object___AddRange(
    v21,
    PassiveList,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  if ( servantData )
  {
    v27 = sub_1B00F18(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor(
      (BattleBuffData_CheckIndividualitiesData_o *)v27,
      servantData,
      0LL,
      0LL,
      0LL,
      0LL,
      0LL);
    if ( !v27 )
      goto LABEL_24;
    servantData = *(BattleServantData_o **)(v27 + 48);
    v28 = *(System_Int32_array **)(v27 + 16);
  }
  else
  {
    v28 = 0LL;
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v38,
    v21,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v39 = v38;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v39,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    current = v39.fields._current;
    v30 = BattleBuffData__checkIndiviuality_41045640(
            this,
            ActInfo,
            (BattleBuffData_BuffData_o *)v39.fields._current,
            (System_Int32_array *)servantData,
            0LL,
            v28,
            0LL,
            &plusMinus,
            v37);
    if ( v30 )
    {
      if ( !current )
        sub_1B00F28(v30, v31);
      if ( !v20 )
        sub_1B00F28(v30, v31);
      monitor_high = HIDWORD(current[1].monitor);
      items = v20->fields._items;
      v34 = Method_System_Collections_Generic_List_int__Add__;
      ++v20->fields._version;
      if ( !items )
        sub_1B00F28(v30, monitor_high);
      size = v20->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v20,
          monitor_high,
          *(const MethodInfo_33A49AC **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v20->fields._size = size + 1;
        items->m_Items[size + 1] = monitor_high;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v39,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  if ( !v20 )
LABEL_24:
    sub_1B00F28(ActiveList, v24);
  return System_Collections_Generic_List_int___ToArray(
           v20,
           (const MethodInfo_33A6464 *)Method_System_Collections_Generic_List_int__ToArray__);
}


BattleBuffData_BuffData_o *__fastcall BattleBuffData__getBuffSuccessfulIndividual(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_array *bufflist,
        const MethodInfo *method)
{
  __int64 v3; // x8
  int v4; // w9

  if ( !bufflist )
    goto LABEL_10;
  v3 = *(_QWORD *)&bufflist->max_length;
  if ( v3 && (int)v3 >= 1 )
  {
    v4 = 0;
    while ( 1 )
    {
      this = (BattleBuffData_o *)bufflist->m_Items[v4];
      if ( !this )
        break;
      if ( LOBYTE(this->fields.activeList) )
        return (BattleBuffData_BuffData_o *)this;
      if ( (_DWORD)v3 == ++v4 )
        return 0LL;
    }
LABEL_10:
    sub_1B00F28(this, bufflist);
  }
  return 0LL;
}


int32_t __fastcall BattleBuffData__getCalculationParam(
        BattleBuffData_o *this,
        BuffList_ActInfo_o *actInfo,
        System_Int32_array *selfIndv,
        BuffInterface_o *selfIf,
        System_Int32_array *opIndv,
        int32_t *upperParam,
        bool *actflg,
        System_String_o **missText,
        int32_t *lowerParam,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        BattleLogicBuff_BaseProcess_o *buffProc,
        const MethodInfo *method)
{
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  unsigned int baseParam; // w8
  const MethodInfo *v25; // x2
  BattleBuffData_c *klass; // x8
  BattleBuffData_o *v28; // x19
  __int64 v29; // x9
  int32_t *p_offset; // x10
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x20
  __int64 v34; // x8
  __int64 v35; // x9
  int *v36; // x10
  __int64 v37; // x0
  __int64 v38; // x8
  __int64 v39; // x9
  int *v40; // x10
  __int64 v41; // x0
  BattleBuffData_BuffData_o *v42; // x0
  __int64 v43; // x1
  BattleBuffData_BuffData_o *v44; // x22
  _BOOL8 IsCommandAssistBuff; // x0
  __int64 v46; // x1
  System_Int32_array *selfIndividuality_k__BackingField; // x19
  System_Int32_array *opponentIndividuality_k__BackingField; // x21
  System_Int32_array *v49; // x4
  System_Int32_array *v50; // x3
  const MethodInfo *v51; // x3
  const MethodInfo *v52; // x1
  DataMasterBase_TMaster__TEntity__PKType__o *buffMst; // x0
  __int64 v54; // x1
  Il2CppObject *Entity; // x0
  __int64 v56; // x1
  BuffEntity_o *v57; // x25
  int monitor_high; // w23
  int32_t v59; // w19
  int32_t v60; // w21
  int32_t v61; // w19
  int32_t v62; // w8
  int32_t ExtendLowerLimit; // w21
  _BOOL4 isValidHpRange; // w0
  int32_t v65; // w28
  BuffInterface_c *v66; // x8
  unsigned int v67; // w23
  unsigned int v68; // w27
  unsigned int ratioRangeHigh; // w19
  unsigned int ratioRangeLow; // w21
  __int64 v71; // x9
  BuffInterface_c **v72; // x10
  __int64 v73; // x0
  int ratioHpLow; // w19
  int32_t param; // w21
  BuffInterface_c *v76; // x8
  __int64 v77; // x9
  BuffInterface_c **v78; // x10
  __int64 p_method; // x0
  int ratioHpHigh; // w19
  BuffInterface_c *v81; // x8
  __int64 v82; // x9
  BuffInterface_c **v83; // x10
  __int64 v84; // x0
  int v85; // w0
  int32_t v86; // w23
  BattleData_o *battleData; // x19
  BattleBuffData_ParamAdd_o *v88; // x21
  const MethodInfo *v89; // x4
  const MethodInfo *v90; // x5
  const MethodInfo *v91; // x6
  System_String_o *v92; // x0
  int32_t v93; // w2
  int32_t v94; // w3
  int32_t plusAction; // w1
  int32_t v96; // w19
  int32_t ActValue_41044096; // w0
  int v98; // w8
  int v99; // w19
  int v100; // w21
  float v101; // s0
  int v102; // w8
  int32_t v103; // w8
  __int64 v104; // x8
  __int64 v105; // x9
  int *v106; // x10
  __int64 v107; // x0
  const MethodInfo *v109; // [xsp+0h] [xbp-F0h]
  BattleLogicBuff_BaseProcess_o *v110; // [xsp+10h] [xbp-E0h]
  ServantStatusBattleListViewItem_o *v111; // [xsp+18h] [xbp-D8h]
  bool *v112; // [xsp+20h] [xbp-D0h]
  int v113; // [xsp+2Ch] [xbp-C4h]
  int32_t *v114; // [xsp+30h] [xbp-C0h]
  int32_t v117; // [xsp+4Ch] [xbp-A4h]
  BuffInterface_o *buffIf_k__BackingField; // [xsp+58h] [xbp-98h]
  BuffList_ActInfo_o *v119; // [xsp+60h] [xbp-90h]
  BattleBuffData_o *v120; // [xsp+68h] [xbp-88h]
  int32_t maxBuffRate; // [xsp+74h] [xbp-7Ch] BYREF
  int32_t value[2]; // [xsp+78h] [xbp-78h] BYREF
  int32_t plusMinus; // [xsp+88h] [xbp-68h] BYREF
  unsigned int v124; // [xsp+8Ch] [xbp-64h] BYREF

  buffIf_k__BackingField = selfIf;
  v120 = this;
  if ( (byte_48E4923 & 1) == 0 )
  {
    sub_1B00CCC(&BuffInterface_TypeInfo, actInfo);
    sub_1B00CCC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v16);
    sub_1B00CCC(&System_IDisposable_TypeInfo, v17);
    sub_1B00CCC(&System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, v18);
    sub_1B00CCC(&System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, v19);
    sub_1B00CCC(&System_Collections_IEnumerator_TypeInfo, v20);
    sub_1B00CCC(&System_Math_TypeInfo, v21);
    sub_1B00CCC(&BattleBuffData_ParamAdd_TypeInfo, v22);
    this = (BattleBuffData_o *)sub_1B00CCC(&StringLiteral_10942/*"REVERT_BUFF_LOWER_LIMIT"*/, v23);
    byte_48E4923 = 1;
  }
  *(_QWORD *)value = 0LL;
  maxBuffRate = 0;
  if ( !actInfo )
    goto LABEL_116;
  baseParam = actInfo->fields.baseParam;
  plusMinus = 0;
  v124 = baseParam;
  *actflg = 0;
  *upperParam = baseParam;
  *lowerParam = 0;
  *missText = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)missText, 0, (int32_t)selfIndv, (int32_t)selfIf);
  this = (BattleBuffData_o *)ConstantMaster__getValue((System_String_o *)StringLiteral_10942/*"REVERT_BUFF_LOWER_LIMIT"*/, 0LL);
  v113 = (int)this;
  if ( !buffIf_k__BackingField )
  {
    if ( !checkIndividualities )
      goto LABEL_116;
    buffIf_k__BackingField = checkIndividualities->fields._buffIf_k__BackingField;
  }
  this = (BattleBuffData_o *)BattleBuffData__AllBuffValidEnumerablePriorActive(v120, 0, v25);
  if ( !this )
LABEL_116:
    sub_1B00F28(this, actInfo);
  klass = this->klass;
  v28 = this;
  v29 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
  v111 = (ServantStatusBattleListViewItem_o *)missText;
  v119 = actInfo;
  if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo )
    {
      --v29;
      p_offset += 4;
      if ( !v29 )
        goto LABEL_12;
    }
    v31 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
  }
  else
  {
LABEL_12:
    v31 = sub_1B52CAC(this, System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__TypeInfo, 0LL);
  }
  v33 = (*(__int64 (__fastcall **)(BattleBuffData_o *, _QWORD))v31)(v28, *(_QWORD *)(v31 + 8));
  if ( !v33 )
    sub_1B00F28(0LL, v32);
  v112 = actflg;
  v114 = upperParam;
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
          goto LABEL_20;
      }
      v37 = v34 + 16LL * *v36 + 312;
    }
    else
    {
LABEL_20:
      v37 = sub_1B52CAC(v33, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v33, *(_QWORD *)(v37 + 8)) & 1) == 0 )
      break;
    v38 = *(_QWORD *)v33;
    v39 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
    {
      v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__c **)v40 - 1) != System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo )
      {
        --v39;
        v40 += 4;
        if ( !v39 )
          goto LABEL_27;
      }
      v41 = v38 + 16LL * *v40 + 312;
    }
    else
    {
LABEL_27:
      v41 = sub_1B52CAC(v33, System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__TypeInfo, 0LL);
    }
    v42 = (BattleBuffData_BuffData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v33, *(_QWORD *)(v41 + 8));
    v44 = v42;
    if ( !v42 )
      sub_1B00F28(0LL, v43);
    if ( !v42->fields._isRemove
      && (!BattleBuffData_BuffData__isCommandCodeBuff(v42, 0LL) || BattleBuffData_BuffData__isActiveCommandCode(
                                                                     v44,
                                                                     0LL))
      && (!BattleBuffData_BuffData__isCommandCardBuff(v44, 0LL) || v44->fields.isActiveCC) )
    {
      IsCommandAssistBuff = BattleBuffData_BuffData__IsCommandAssistBuff(v44, 0LL);
      if ( !IsCommandAssistBuff || (IsCommandAssistBuff = BattleBuffData_BuffData__IsActiveCommandAssist(v44, 0LL)) )
      {
        if ( !checkIndividualities )
          sub_1B00F28(IsCommandAssistBuff, v46);
        selfIndividuality_k__BackingField = checkIndividualities->fields._selfIndividuality_k__BackingField;
        opponentIndividuality_k__BackingField = checkIndividualities->fields._opponentIndividuality_k__BackingField;
        if ( BattleBuffData_BuffData__checkState(v44, 0x100000, 0LL) )
        {
          selfIndividuality_k__BackingField = checkIndividualities->fields._selfIndividualityCanRelease_k__BackingField;
          opponentIndividuality_k__BackingField = checkIndividualities->fields._opponentIndividualityCanRemove_k__BackingField;
          v49 = opponentIndividuality_k__BackingField;
          v50 = selfIndividuality_k__BackingField;
        }
        else
        {
          v50 = selfIndv;
          v49 = opIndv;
        }
        if ( BattleBuffData__checkIndiviuality_41045640(
               v120,
               v119,
               v44,
               v50,
               v49,
               selfIndividuality_k__BackingField,
               opponentIndividuality_k__BackingField,
               &plusMinus,
               v109)
          && BattleBuffData__checkBuffSuccessful(v120, v44, v119->fields.isRec, v51) )
        {
          *actflg = 1;
          buffMst = (DataMasterBase_TMaster__TEntity__PKType__o *)BattleBuffData__get_buffMst(v120, v52);
          if ( !buffMst )
            sub_1B00F28(0LL, v54);
          Entity = DataMasterBase_object__object__int___GetEntity(
                     buffMst,
                     v44->fields.buffId,
                     (const MethodInfo_2FE6A4C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
          v57 = (BuffEntity_o *)Entity;
          v117 = plusMinus;
          if ( v113 <= 0 && (plusMinus & 0x80000000) != 0 )
          {
            if ( !Entity )
              sub_1B00F28(0LL, v56);
            monitor_high = HIDWORD(Entity[4].monitor);
            v59 = *lowerParam;
            v60 = v119->fields.baseParam;
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            v61 = System_Math__Min_61144584(v59, v60 - monitor_high, 0LL);
            *lowerParam = v61;
          }
          else
          {
            if ( !Entity )
              sub_1B00F28(0LL, v56);
            v62 = *v114;
            if ( *v114 < SHIDWORD(Entity[4].monitor) )
              v62 = HIDWORD(Entity[4].monitor);
            *v114 = v62;
            v61 = *lowerParam;
          }
          ExtendLowerLimit = BuffEntity__GetExtendLowerLimit(v57, 0LL);
          if ( !System_Math_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
          *lowerParam = System_Math__Min_61144584(v61, ExtendLowerLimit, 0LL);
          value[1] = v44->fields.param;
          isValidHpRange = BattleBuffData_BuffData__isValidHpRange(v44, 0LL);
          if ( !buffIf_k__BackingField || !isValidHpRange )
          {
            if ( buffIf_k__BackingField )
            {
              ratioHpLow = v44->fields.ratioHpLow;
              if ( ratioHpLow >= 1 )
              {
                param = v44->fields.param;
                v76 = buffIf_k__BackingField->klass;
                v77 = *(unsigned __int16 *)(&buffIf_k__BackingField->klass->_2.bitflags2 + 3);
                if ( *(_WORD *)(&buffIf_k__BackingField->klass->_2.bitflags2 + 3) )
                {
                  v78 = (BuffInterface_c **)&v76->_1.interfaceOffsets->offset;
                  while ( *(v78 - 1) != BuffInterface_TypeInfo )
                  {
                    --v77;
                    v78 += 2;
                    if ( !v77 )
                      goto LABEL_69;
                  }
                  p_method = (__int64)&v76->vtable[*(_DWORD *)v78 + 1].method;
                }
                else
                {
LABEL_69:
                  p_method = sub_1B52CAC(buffIf_k__BackingField, BuffInterface_TypeInfo, 1LL);
                }
                v85 = (*(__int64 (__fastcall **)(BuffInterface_o *, __int64, _QWORD, _QWORD))p_method)(
                        buffIf_k__BackingField,
                        1LL,
                        (unsigned int)ratioHpLow,
                        *(_QWORD *)(p_method + 8));
LABEL_83:
                value[1] = v85 + param;
                goto LABEL_84;
              }
            }
            if ( buffIf_k__BackingField )
            {
              ratioHpHigh = v44->fields.ratioHpHigh;
              if ( ratioHpHigh >= 1 )
              {
                param = v44->fields.param;
                v81 = buffIf_k__BackingField->klass;
                v82 = *(unsigned __int16 *)(&buffIf_k__BackingField->klass->_2.bitflags2 + 3);
                if ( *(_WORD *)(&buffIf_k__BackingField->klass->_2.bitflags2 + 3) )
                {
                  v83 = (BuffInterface_c **)&v81->_1.interfaceOffsets->offset;
                  while ( *(v83 - 1) != BuffInterface_TypeInfo )
                  {
                    --v82;
                    v83 += 2;
                    if ( !v82 )
                      goto LABEL_76;
                  }
                  v84 = (__int64)&v81->vtable[*(_DWORD *)v83 + 1].method;
                }
                else
                {
LABEL_76:
                  v84 = sub_1B52CAC(buffIf_k__BackingField, BuffInterface_TypeInfo, 1LL);
                }
                v85 = (*(__int64 (__fastcall **)(BuffInterface_o *, _QWORD, _QWORD, _QWORD))v84)(
                        buffIf_k__BackingField,
                        0LL,
                        (unsigned int)ratioHpHigh,
                        *(_QWORD *)(v84 + 8));
                goto LABEL_83;
              }
            }
          }
          else
          {
            v110 = buffProc;
            v65 = v44->fields.param;
            v66 = buffIf_k__BackingField->klass;
            v67 = v44->fields.ratioHpHigh;
            v68 = v44->fields.ratioHpLow;
            ratioRangeHigh = v44->fields.ratioRangeHigh;
            ratioRangeLow = v44->fields.ratioRangeLow;
            v71 = *(unsigned __int16 *)(&buffIf_k__BackingField->klass->_2.bitflags2 + 3);
            if ( *(_WORD *)(&buffIf_k__BackingField->klass->_2.bitflags2 + 3) )
            {
              v72 = (BuffInterface_c **)&v66->_1.interfaceOffsets->offset;
              while ( *(v72 - 1) != BuffInterface_TypeInfo )
              {
                --v71;
                v72 += 2;
                if ( !v71 )
                  goto LABEL_62;
              }
              v73 = (__int64)&v66->vtable[*(_DWORD *)v72 + 2].method;
            }
            else
            {
LABEL_62:
              v73 = sub_1B52CAC(buffIf_k__BackingField, BuffInterface_TypeInfo, 2LL);
            }
            value[1] = (*(__int64 (__fastcall **)(BuffInterface_o *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v73)(
                         buffIf_k__BackingField,
                         v68,
                         v67,
                         ratioRangeLow,
                         ratioRangeHigh,
                         *(_QWORD *)(v73 + 8))
                     + v65;
            buffProc = v110;
          }
LABEL_84:
          if ( BattleBuffData_BuffData__isParamAddIndividualiry(v44, 0LL) )
          {
            v86 = value[1];
            battleData = v119->fields.battleData;
            v88 = (BattleBuffData_ParamAdd_o *)sub_1B00F18(BattleBuffData_ParamAdd_TypeInfo);
            BattleBuffData_ParamAdd___ctor_41317224(v88, v44, 0LL);
            value[1] = BattleBuffData__GetTotalParamAddValue(v44, battleData, checkIndividualities, v88, v89) + v86;
          }
          if ( BuffEntity__checkMissText(v57, 0LL) )
          {
            v92 = BuffEntity__getMissText(v57, 0LL);
            v111->klass = (ServantStatusBattleListViewItem_c *)v92;
            sub_1B00C70(v111, (int32_t)v92, v93, v94);
          }
          if ( v117 >= 1 )
          {
            plusAction = v119->fields.plusAction;
            if ( plusAction )
            {
              v96 = value[1];
              ActValue_41044096 = BattleBuffData__getActValue_41044096(
                                    v120,
                                    plusAction,
                                    v57->fields.vals,
                                    v120->fields.wkzero,
                                    checkIndividualities,
                                    0LL,
                                    v91);
              if ( ActValue_41044096 * v96 <= -1000 )
                v98 = 0;
              else
                v98 = ActValue_41044096 * v96 / 1000;
              value[1] = v98;
            }
          }
          maxBuffRate = *v114;
          value[0] = 0;
          actflg = v112;
          if ( BattleBuffData__CheckBuffRateTypeOrIndiv(v120, v44, value, &maxBuffRate, maxBuffRate, v90) )
          {
            v100 = value[0];
            v99 = value[1];
            if ( !System_Math_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
            v101 = System_Math__Max_61144296(0.0, (float)((float)v100 / 1000.0) + 1.0, 0LL) * (float)v99;
            v102 = (int)v101;
            if ( v101 == INFINITY )
              v102 = 0x80000000;
            value[1] = v102;
            v103 = *v114;
            if ( *v114 < maxBuffRate )
              v103 = maxBuffRate;
            *v114 = v103;
          }
          if ( buffProc )
            ((void (__fastcall *)(BattleLogicBuff_BaseProcess_o *, BattleBuffData_BuffData_o *, _QWORD, _QWORD, int32_t *, Il2CppMethodPointer))buffProc->klass->vtable._4_PrevAddCalcBuffParam.method)(
              buffProc,
              v44,
              v124,
              (unsigned int)v117,
              &value[1],
              buffProc->klass->vtable._5_AfterAllAddCalcBuffParam.methodPtr);
          v124 += value[1] * v117;
        }
      }
    }
  }
  v104 = *(_QWORD *)v33;
  v105 = *(unsigned __int16 *)(*(_QWORD *)v33 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v33 + 302LL) )
  {
    v106 = (int *)(*(_QWORD *)(v104 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v106 - 1) != System_IDisposable_TypeInfo )
    {
      --v105;
      v106 += 4;
      if ( !v105 )
        goto LABEL_109;
    }
    v107 = v104 + 16LL * *v106 + 312;
  }
  else
  {
LABEL_109:
    v107 = sub_1B52CAC(v33, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v107)(v33, *(_QWORD *)(v107 + 8));
  if ( buffProc )
    ((void (__fastcall *)(BattleLogicBuff_BaseProcess_o *, unsigned int *, void *))buffProc->klass->vtable._5_AfterAllAddCalcBuffParam.method)(
      buffProc,
      &v124,
      buffProc->klass[1]._1.image);
  return v124;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__getCurrentAllBaffList(
        BattleBuffData_o *this,
        bool isCheckInterval,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x21
  bool v8; // w20
  const MethodInfo *v9; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0

  if ( (byte_48E48CD & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, isCheckInterval);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v5);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v6);
    byte_48E48CD = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v8 = isCheckInterval;
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, v8, v9);
  if ( !v7 )
    sub_1B00F28(PassiveList, v11);
  System_Collections_Generic_List_object___AddRange(
    v7,
    PassiveList,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, v8, v12);
  System_Collections_Generic_List_object___AddRange(
    v7,
    ActiveList,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v7;
}


// local variable allocation has failed, the output may be wrong!
int64_t __fastcall BattleBuffData__getMaxBuffCount(
        BattleBuffData_o *this,
        System_Int64_array *individualities,
        bool isActiveOnly,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_array *PassiveList; // x0
  __int64 v7; // x1
  int max_length; // w8
  BattleBuffData_BuffData_array *v9; // x22
  unsigned int v10; // w24
  int64_t count; // x20
  BattleBuffData_BuffData_o *v12; // x23
  System_Int32_array *Individualty; // x0
  int v14; // w8
  BattleBuffData_BuffData_array *v15; // x21
  unsigned int v16; // w23
  BattleBuffData_BuffData_o *v17; // x22
  System_Int32_array *v18; // x0

  if ( !isActiveOnly )
  {
    PassiveList = BattleBuffData__getPassiveList(this, 1, (const MethodInfo *)isActiveOnly);
    if ( !PassiveList )
      goto LABEL_24;
    max_length = PassiveList->max_length;
    v9 = PassiveList;
    if ( max_length >= 1 )
    {
      v10 = 0;
      count = 0LL;
      while ( v10 < max_length )
      {
        v12 = v9->m_Items[v10];
        if ( !v12 )
          goto LABEL_24;
        if ( count < v12->fields.count )
        {
          Individualty = BattleBuffData_BuffData__GetIndividualty(v12, 0, 0, 0, 0LL);
          PassiveList = (BattleBuffData_BuffData_array *)Individuality__CheckIndividualities_36498052(
                                                           Individualty,
                                                           individualities,
                                                           0LL);
          if ( ((unsigned __int8)PassiveList & 1) != 0 )
            count = v12->fields.count;
        }
        max_length = v9->max_length;
        if ( (int)++v10 >= max_length )
          goto LABEL_13;
      }
LABEL_23:
      sub_1B00F30(PassiveList, v7);
    }
  }
  count = 0LL;
LABEL_13:
  PassiveList = BattleBuffData__getActiveList(this, 1, (const MethodInfo *)isActiveOnly);
  if ( !PassiveList )
LABEL_24:
    sub_1B00F28(PassiveList, v7);
  v14 = PassiveList->max_length;
  v15 = PassiveList;
  if ( v14 >= 1 )
  {
    v16 = 0;
    while ( v16 < v14 )
    {
      v17 = v15->m_Items[v16];
      if ( !v17 )
        goto LABEL_24;
      if ( count < v17->fields.count )
      {
        v18 = BattleBuffData_BuffData__GetIndividualty(v17, 0, 0, 0, 0LL);
        PassiveList = (BattleBuffData_BuffData_array *)Individuality__CheckIndividualities_36498052(
                                                         v18,
                                                         individualities,
                                                         0LL);
        if ( ((unsigned __int8)PassiveList & 1) != 0 )
          count = v17->fields.count;
      }
      v14 = v15->max_length;
      if ( (int)++v16 >= v14 )
        return count;
    }
    goto LABEL_23;
  }
  return count;
}


int32_t __fastcall BattleBuffData__getMaxTurnBuff(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        int32_t lowTurn,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6
  bool actFlg; // [xsp+Ch] [xbp-4h] BYREF

  actFlg = 0;
  return BattleBuffData__getMaxTurnBuffBase(this, act, checkIndividualities, 0, &actFlg, lowTurn, v5);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleBuffData__getMaxTurnBuffBase(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        bool checkCount,
        bool *actFlg,
        int32_t lowTurn,
        const MethodInfo *method)
{
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  BuffList_ActInfo_o *ActInfo; // x0
  BuffList_ActInfo_o *v21; // x24
  System_Collections_Generic_List_object__o *v22; // x25
  const MethodInfo *v23; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  const MethodInfo *v28; // x5
  Il2CppObject *current; // x25
  _BOOL8 v30; // x0
  __int64 v31; // x1
  System_Collections_Generic_List_Enumerator_object__o v33; // [xsp+0h] [xbp-80h] BYREF
  int32_t plusMinus; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_48E492C & 1) == 0 )
  {
    sub_1B00CCC(&BuffList_TypeInfo, *(_QWORD *)&act);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v13);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v14);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v15);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v16);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v17);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v18);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v19);
    byte_48E492C = 1;
  }
  memset(&v33, 0, sizeof(v33));
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  plusMinus = 0;
  *actFlg = 0;
  v21 = ActInfo;
  v22 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v23);
  if ( !v22 )
    sub_1B00F28(ActiveList, v25);
  System_Collections_Generic_List_object___AddRange(
    v22,
    ActiveList,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v26);
  System_Collections_Generic_List_object___AddRange(
    v22,
    PassiveList,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    v22,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v33,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    current = v33.fields._current;
    v30 = BattleBuffData__checkIndiviuality(
            this,
            v21,
            (BattleBuffData_BuffData_o *)v33.fields._current,
            checkIndividualities,
            &plusMinus,
            v28);
    if ( v30 )
    {
      if ( !current )
        sub_1B00F28(v30, v31);
      if ( lowTurn < SHIDWORD(current[1].klass) )
        lowTurn = HIDWORD(current[1].klass);
      if ( checkCount && SLODWORD(current[1].monitor) >= 1 )
      {
        LOBYTE(current[2].klass) = 1;
        BYTE3(current[2].klass) = 1;
      }
      *actFlg = 1;
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v33,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  return lowTurn;
}


// local variable allocation has failed, the output may be wrong!
BattleBuffData_BuffData_array *__fastcall BattleBuffData__getPassiveList(
        BattleBuffData_o *this,
        bool isCheckInterval,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  BattleBuffData___c__DisplayClass31_0_o *v9; // x21
  System_Collections_Generic_List_T__o *All; // x0
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *passiveList; // x19
  System_Predicate_object__o *v13; // x20

  if ( (byte_48E48CB & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, isCheckInterval);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v5);
    sub_1B00CCC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v6);
    sub_1B00CCC(&Method_BattleBuffData___c__DisplayClass31_0__getPassiveList_b__0__, v7);
    sub_1B00CCC(&BattleBuffData___c__DisplayClass31_0_TypeInfo, v8);
    byte_48E48CB = 1;
  }
  v9 = (BattleBuffData___c__DisplayClass31_0_o *)sub_1B00F18(BattleBuffData___c__DisplayClass31_0_TypeInfo);
  BattleBuffData___c__DisplayClass31_0___ctor(v9, 0LL);
  if ( !v9
    || (v9->fields.isCheckInterval = isCheckInterval,
        passiveList = (System_Collections_Generic_List_object__o *)this->fields.passiveList,
        v13 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo),
        System_Predicate_object____ctor(
          v13,
          (Il2CppObject *)v9,
          Method_BattleBuffData___c__DisplayClass31_0__getPassiveList_b__0__,
          0LL),
        !passiveList)
    || (All = System_Collections_Generic_List_object___FindAll(
                passiveList,
                (System_Predicate_T__o *)v13,
                (const MethodInfo_33C20E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__)) == 0LL )
  {
    sub_1B00F28(All, v11);
  }
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_object___ToArray(
                                            (System_Collections_Generic_List_object__o *)All,
                                            (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__getPassiveListDebug(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *passiveList; // x0

  if ( (byte_48E48CF & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, method);
    byte_48E48CF = 1;
  }
  passiveList = (System_Collections_Generic_List_object__o *)this->fields.passiveList;
  if ( !passiveList )
    sub_1B00F28(0LL, method);
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_object___ToArray(
                                            passiveList,
                                            (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
BattleBuffData_ShowBuffData_array *__fastcall BattleBuffData__getRectBuffList(
        BattleBuffData_o *this,
        bool isAtkSide,
        bool isShowOverwriteClassRelation,
        bool isShowDarkClassRelation,
        const MethodInfo *method)
{
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
  System_Collections_Generic_List_object__o *v16; // x23
  int v17; // w8
  System_String_o *Value; // x0
  System_Int32_array *v19; // x24
  const MethodInfo *v20; // x2
  void *ActiveList; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  int v24; // w8
  void *v25; // x25
  unsigned int v26; // w19
  BattleBuffData_BuffData_o *v27; // x26
  __int64 v28; // x27
  _BOOL8 v29; // x0
  const MethodInfo *v30; // x2
  int32_t v31; // w1
  const MethodInfo *v32; // x1
  int v33; // w21
  int32_t v34; // w2
  int32_t v35; // w3
  __int64 v36; // x8
  System_Func_int__bool__o *v37; // x28
  char v38; // w27
  char v39; // w21
  BattleBuffData_ShowBuffData_o *v40; // x27
  int32_t v41; // w2
  int32_t v42; // w3
  struct System_Object_array *items; // x8
  _QWORD *v44; // x9
  __int64 size; // x10
  Il2CppClass **v46; // x0
  int v47; // w8
  void *v48; // x24
  int i; // w27
  BattleBuffData_BuffData_o *v50; // x25
  const MethodInfo *v51; // x2
  _BOOL8 v52; // x0
  const MethodInfo *v53; // x2
  const MethodInfo *v54; // x1
  BattleBuffData_ShowBuffData_o *v55; // x26
  int32_t v56; // w2
  int32_t v57; // w3
  int v58; // w19
  bool v59; // zf
  struct System_Object_array *v60; // x8
  _QWORD *v61; // x9
  __int64 v62; // x10
  Il2CppClass **v63; // x0
  int v67; // [xsp+8h] [xbp-68h]

  if ( (byte_48E4912 & 1) == 0 )
  {
    sub_1B00CCC(&Method_BasicHelper_Any_int____74581360, isAtkSide);
    sub_1B00CCC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v6);
    sub_1B00CCC(&System_Func_int__bool__TypeInfo, v7);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__Add__, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__, v10);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo, v11);
    sub_1B00CCC(&BattleBuffData_ShowBuffData_TypeInfo, v12);
    sub_1B00CCC(&Method_BattleBuffData___c__DisplayClass140_0__getRectBuffList_b__0__, v13);
    sub_1B00CCC(&BattleBuffData___c__DisplayClass140_0_TypeInfo, v14);
    sub_1B00CCC(&StringLiteral_7075/*"HIDE_DEFF_TYPE"*/, v15);
    byte_48E4912 = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__);
  if ( isAtkSide )
    v17 = 108;
  else
    v17 = 109;
  v67 = v17;
  Value = ConstantStrMaster__getValue((System_String_o *)StringLiteral_7075/*"HIDE_DEFF_TYPE"*/, 0LL);
  v19 = BasicHelper__Convert2IntArray(Value, 0x2Cu, 0LL);
  ActiveList = BattleBuffData__getActiveList(this, 1, v20);
  if ( !ActiveList )
    goto LABEL_94;
  v24 = *((_DWORD *)ActiveList + 6);
  v25 = ActiveList;
  if ( v24 >= 1 )
  {
    v26 = 0;
    while ( 1 )
    {
      if ( v26 >= v24 )
LABEL_95:
        sub_1B00F30(ActiveList, v22);
      v27 = (BattleBuffData_BuffData_o *)*((_QWORD *)v25 + (int)v26 + 4);
      v28 = sub_1B00F18(BattleBuffData___c__DisplayClass140_0_TypeInfo);
      BattleBuffData___c__DisplayClass140_0___ctor((BattleBuffData___c__DisplayClass140_0_o *)v28, 0LL);
      if ( !v27 )
        break;
      if ( !v27->fields._isRemove )
      {
        ActiveList = (void *)BattleBuffData_BuffData__isCommandCardBuff(v27, 0LL);
        if ( ((unsigned __int8)ActiveList & 1) == 0 || v27->fields.isActiveCC )
        {
          ActiveList = (void *)BattleBuffData_BuffData__IsCommandAssistBuff(v27, 0LL);
          if ( ((unsigned __int8)ActiveList & 1) == 0 || v27->fields.isActiveCA )
          {
            v29 = BattleBuffData_BuffData__checkState(v27, 8, 0LL);
            if ( v29
              && (!isAtkSide ? (v31 = 1024) : (v31 = 0x2000), !(v29 = BattleBuffData_BuffData__checkState(v27, v31, 0LL))) )
            {
              LOBYTE(v33) = 0;
            }
            else
            {
              v33 = !BattleBuffData__isInvalidHide((BattleBuffData_o *)v29, v27, v30);
            }
            ActiveList = BattleBuffData__get_buffMst(this, v32);
            if ( !ActiveList )
              break;
            ActiveList = DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)ActiveList,
                           v27->fields.buffId,
                           (const MethodInfo_2FE6A4C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
            if ( !v28 )
              break;
            *(_QWORD *)(v28 + 16) = ActiveList;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)(v28 + 16), (int32_t)ActiveList, v34, v35);
            v36 = *(_QWORD *)(v28 + 16);
            if ( v36 )
            {
              if ( v19 != 0LL && !isAtkSide )
              {
                v37 = (System_Func_int__bool__o *)sub_1B00F18(System_Func_int__bool__TypeInfo);
                System_Func_int__bool____ctor(
                  v37,
                  (Il2CppObject *)v28,
                  Method_BattleBuffData___c__DisplayClass140_0__getRectBuffList_b__0__,
                  0LL);
                ActiveList = (void *)BasicHelper__Any_int__47506688(
                                       v19,
                                       (System_Func_T__bool__o *)v37,
                                       (const MethodInfo_2D4E500 *)Method_BasicHelper_Any_int____74581360);
                v36 = *(_QWORD *)(v28 + 16);
                if ( !v36 )
                  break;
                LOBYTE(v33) = v33 & ((unsigned __int8)ActiveList ^ 1);
              }
              v38 = v33 & (*(_DWORD *)(v36 + 20) == 144 || *(_DWORD *)(v36 + 20) == v67);
              if ( v38 )
                LOBYTE(v33) = isShowOverwriteClassRelation;
              ActiveList = (void *)BattleBuffData_BuffData__checkState(v27, 4096, 0LL);
              if ( ((unsigned __int8)(v33 & ~(_BYTE)ActiveList) & v27->fields.isAct & 1) != 0 )
              {
                ActiveList = (void *)BattleBuffData_BuffData__checkState(v27, 512, 0LL);
                if ( ((unsigned __int8)ActiveList & 1) == 0 )
                {
                  v39 = v38 & isShowDarkClassRelation;
                  v40 = (BattleBuffData_ShowBuffData_o *)sub_1B00F18(BattleBuffData_ShowBuffData_TypeInfo);
                  BattleBuffData_ShowBuffData___ctor_41305888(v40, v27, 0LL);
                  if ( (v39 & 1) != 0 )
                  {
                    if ( !v40 )
                      break;
                    v40->fields.isReady = 0;
                  }
                  if ( !v16 )
                    break;
                  items = v16->fields._items;
                  v44 = Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__Add__;
                  ++v16->fields._version;
                  if ( !items )
                    break;
                  size = v16->fields._size;
                  if ( (unsigned int)size >= items->max_length )
                  {
                    System_Collections_Generic_List_object___AddWithResize(
                      v16,
                      (Il2CppObject *)v40,
                      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
                  }
                  else
                  {
                    v46 = &items->obj.klass + size;
                    v16->fields._size = size + 1;
                    v46[4] = (Il2CppClass *)v40;
                    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v46 + 4), (int32_t)v40, v41, v42);
                  }
                }
              }
            }
          }
        }
      }
      v24 = *((_DWORD *)v25 + 6);
      if ( (int)++v26 >= v24 )
        goto LABEL_43;
    }
LABEL_94:
    sub_1B00F28(ActiveList, v22);
  }
LABEL_43:
  ActiveList = BattleBuffData__getPassiveList(this, 1, v23);
  if ( !ActiveList )
    goto LABEL_94;
  v47 = *((_DWORD *)ActiveList + 6);
  v48 = ActiveList;
  if ( v47 >= 1 )
  {
    for ( i = 0; i < v47; ++i )
    {
      if ( i >= (unsigned int)v47 )
        goto LABEL_95;
      v50 = (BattleBuffData_BuffData_o *)*((_QWORD *)v48 + i + 4);
      if ( !v50 )
        goto LABEL_94;
      if ( !v50->fields._isRemove )
      {
        ActiveList = (void *)BattleBuffData_BuffData__checkState(v50, 8, 0LL);
        if ( ((unsigned __int8)ActiveList & 1) == 0 )
        {
          ActiveList = (void *)BattleBuffData_BuffData__checkState(v50, 4096, 0LL);
          if ( ((unsigned __int8)ActiveList & 1) == 0 )
          {
            ActiveList = (void *)BattleBuffData_BuffData__isCommandCardBuff(v50, 0LL);
            if ( ((unsigned __int8)ActiveList & 1) == 0 || v50->fields.isActiveCC )
            {
              ActiveList = (void *)BattleBuffData_BuffData__IsCommandAssistBuff(v50, 0LL);
              if ( ((unsigned __int8)ActiveList & 1) == 0 || v50->fields.isActiveCA )
              {
                if ( !BattleBuffData_BuffData__isCommandCodeBuff(v50, 0LL)
                  && !BattleBuffData_BuffData__IsCommandAssistBuff(v50, 0LL)
                  && v50->fields.isAct
                  && ((v52 = BattleBuffData__checkBuffSpecialAttack(this, v50, v51))
                   || v50->fields.turn > 0
                   || v50->fields.count > 0
                   || v50->fields._IsExtendingLife_k__BackingField
                   || (v52 = BattleBuffData_BuffData__checkState(v50, 4, 0LL))
                   || (v52 = BattleBuffData_BuffData__checkState(v50, 0x2000, 0LL))
                   || !isAtkSide && (v52 = BattleBuffData_BuffData__checkState(v50, 1024, 0LL)))
                  && !BattleBuffData__isInvalidHide((BattleBuffData_o *)v52, v50, v53) )
                {
                  ActiveList = BattleBuffData__get_buffMst(this, v54);
                  if ( !ActiveList )
                    goto LABEL_94;
                  ActiveList = DataMasterBase_object__object__int___GetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)ActiveList,
                                 v50->fields.buffId,
                                 (const MethodInfo_2FE6A4C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
                  if ( !ActiveList )
                    goto LABEL_94;
                  v58 = *((_DWORD *)ActiveList + 5);
                  if ( v58 != 144 && v58 != v67 || isShowOverwriteClassRelation )
                  {
                    v55 = (BattleBuffData_ShowBuffData_o *)sub_1B00F18(BattleBuffData_ShowBuffData_TypeInfo);
                    BattleBuffData_ShowBuffData___ctor_41305888(v55, v50, 0LL);
                    v59 = v58 == v67 || v58 == 144;
                    if ( v59 && isShowDarkClassRelation )
                    {
                      if ( !v55 )
                        goto LABEL_94;
                      v55->fields.isReady = 0;
                    }
                    if ( !v16 )
                      goto LABEL_94;
                    goto LABEL_83;
                  }
                }
                else
                {
                  ActiveList = (void *)BattleBuffData_BuffData__isActiveCommandCode(v50, 0LL);
                  if ( ((unsigned __int8)ActiveList & 1) != 0 && v50->fields.isAct )
                  {
                    ActiveList = (void *)BattleBuffData_BuffData__checkState(v50, 4, 0LL);
                    if ( ((unsigned __int8)ActiveList & 1) != 0 )
                    {
                      v55 = (BattleBuffData_ShowBuffData_o *)sub_1B00F18(BattleBuffData_ShowBuffData_TypeInfo);
                      BattleBuffData_ShowBuffData___ctor_41305888(v55, v50, 0LL);
                      if ( !v16 )
                        goto LABEL_94;
LABEL_83:
                      v60 = v16->fields._items;
                      v61 = Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__Add__;
                      ++v16->fields._version;
                      if ( !v60 )
                        goto LABEL_94;
                      v62 = v16->fields._size;
                      if ( (unsigned int)v62 >= v60->max_length )
                      {
                        System_Collections_Generic_List_object___AddWithResize(
                          v16,
                          (Il2CppObject *)v55,
                          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v61[4] + 192LL) + 112LL));
                      }
                      else
                      {
                        v63 = &v60->obj.klass + v62;
                        v16->fields._size = v62 + 1;
                        v63[4] = (Il2CppClass *)v55;
                        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v63 + 4), (int32_t)v55, v56, v57);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      v47 = *((_DWORD *)v48 + 6);
    }
  }
  if ( !v16 )
    goto LABEL_94;
  return (BattleBuffData_ShowBuffData_array *)System_Collections_Generic_List_object___ToArray(
                                                v16,
                                                (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__ToArray__);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__getReflectionEffectFunction(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  BuffList_TYPE_array *v3; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x4
  BattleBuffData_BuffData_array *BuffList_41011768; // x1
  const MethodInfo *v7; // x2

  if ( (byte_48E48EA & 1) == 0 )
  {
    sub_1B00CCC(&BuffList_TYPE___TypeInfo, method);
    byte_48E48EA = 1;
  }
  v3 = (BuffList_TYPE_array *)sub_1B00D74(BuffList_TYPE___TypeInfo, 1LL);
  if ( !v3 )
    sub_1B00F28(0LL, v4);
  if ( !v3->max_length )
    sub_1B00F30(v3, v3);
  v3->m_Items[1] = 97;
  BuffList_41011768 = BattleBuffData__getBuffList_41011768(this, v3, 0LL, 0LL, v5);
  return BattleBuffData__geCheckBuffSuccessful(this, BuffList_41011768, v7);
}


int32_t __fastcall BattleBuffData__getResumptionHpFromLossMaxHp(
        BattleBuffData_o *this,
        bool isUse,
        const MethodInfo *method)
{
  int32_t result; // w0

  result = this->fields.resumptionHpFromLossMaxHp;
  if ( isUse )
    this->fields.resumptionHpFromLossMaxHp = 0;
  return result;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleBuffData__getSameIndivualityBuffSum(
        BattleBuffData_o *this,
        System_Int32_array *indv,
        bool isActiveOnly,
        bool IsIncludeIgnoreIndividuality,
        bool isIgnoreIndivUnreleaseable,
        const MethodInfo *method)
{
  int32_t v10; // w22
  BattleBuffData_BuffData_o *PassiveList; // x0
  __int64 v12; // x1
  int count; // w8
  BattleBuffData_BuffData_o *v14; // x24
  unsigned int v15; // w25
  int v16; // w8
  BattleBuffData_BuffData_o *v17; // x23
  unsigned int v18; // w24

  v10 = 0;
  if ( !isActiveOnly && !isIgnoreIndivUnreleaseable )
  {
    PassiveList = (BattleBuffData_BuffData_o *)BattleBuffData__getPassiveList(this, 1, (const MethodInfo *)isActiveOnly);
    if ( !PassiveList )
      goto LABEL_22;
    count = PassiveList->fields.count;
    v14 = PassiveList;
    if ( count >= 1 )
    {
      v15 = 0;
      v10 = 0;
      while ( v15 < count )
      {
        PassiveList = (BattleBuffData_BuffData_o *)*((_QWORD *)&v14->fields.isUse + (int)v15);
        if ( !PassiveList )
          goto LABEL_22;
        PassiveList = (BattleBuffData_BuffData_o *)BattleBuffData_BuffData__GetIndividualty(
                                                     PassiveList,
                                                     IsIncludeIgnoreIndividuality,
                                                     0,
                                                     0,
                                                     0LL);
        if ( PassiveList )
        {
          PassiveList = (BattleBuffData_BuffData_o *)Individuality__CheckIndividualities(
                                                       (System_Int32_array *)PassiveList,
                                                       indv,
                                                       0LL);
          v10 += (unsigned __int8)PassiveList & 1;
        }
        count = v14->fields.count;
        if ( (int)++v15 >= count )
          goto LABEL_13;
      }
LABEL_23:
      sub_1B00F30(PassiveList, v12);
    }
    v10 = 0;
  }
LABEL_13:
  PassiveList = (BattleBuffData_BuffData_o *)BattleBuffData__getActiveList(this, 1, (const MethodInfo *)isActiveOnly);
  if ( !PassiveList )
LABEL_22:
    sub_1B00F28(PassiveList, v12);
  v16 = PassiveList->fields.count;
  v17 = PassiveList;
  if ( v16 >= 1 )
  {
    v18 = 0;
    while ( v18 < v16 )
    {
      PassiveList = (BattleBuffData_BuffData_o *)*((_QWORD *)&v17->fields.isUse + (int)v18);
      if ( !PassiveList )
        goto LABEL_22;
      PassiveList = (BattleBuffData_BuffData_o *)BattleBuffData_BuffData__GetIndividualty(
                                                   PassiveList,
                                                   IsIncludeIgnoreIndividuality,
                                                   isIgnoreIndivUnreleaseable,
                                                   0,
                                                   0LL);
      if ( PassiveList )
      {
        PassiveList = (BattleBuffData_BuffData_o *)Individuality__CheckIndividualities(
                                                     (System_Int32_array *)PassiveList,
                                                     indv,
                                                     0LL);
        v10 += (unsigned __int8)PassiveList & 1;
      }
      v16 = v17->fields.count;
      if ( (int)++v18 >= v16 )
        return v10;
    }
    goto LABEL_23;
  }
  return v10;
}


BattleBuffData_SaveData_o *__fastcall BattleBuffData__getSaveData(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x20
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *passiveList; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  System_Object_array *v9; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  BattleBuffData_SaveData_o *result; // x0

  if ( (byte_48E490E & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, method);
    sub_1B00CCC(&BattleBuffData_SaveData_TypeInfo, v3);
    byte_48E490E = 1;
  }
  v4 = sub_1B00F18(BattleBuffData_SaveData_TypeInfo);
  BattleBuffData_SaveData___ctor((BattleBuffData_SaveData_o *)v4, 0LL);
  passiveList = (System_Collections_Generic_List_object__o *)this->fields.passiveList;
  if ( !passiveList
    || (passiveList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___ToArray(
                                                                     passiveList,
                                                                     (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__),
        !v4)
    || (*(_QWORD *)(v4 + 16) = passiveList,
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v4 + 16), (int32_t)passiveList, v7, v8),
        (passiveList = (System_Collections_Generic_List_object__o *)this->fields.activeList) == 0LL) )
  {
    sub_1B00F28(passiveList, v5);
  }
  v9 = System_Collections_Generic_List_object___ToArray(
         passiveList,
         (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  *(_QWORD *)(v4 + 24) = v9;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v4 + 24), (int32_t)v9, v10, v11);
  result = (BattleBuffData_SaveData_o *)v4;
  *(_DWORD *)(v4 + 32) = this->fields.addBuffOrder;
  return result;
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__getShowCommandBuffListActive(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x19
  const MethodInfo *v7; // x2
  BattleBuffData_BuffData_array *ActiveList; // x0
  __int64 v9; // x1
  int max_length; // w8
  BattleBuffData_BuffData_array *v11; // x20
  unsigned int v12; // w22
  Il2CppClass **v13; // x8
  BattleBuffData_BuffData_o *v14; // x21
  const MethodInfo *v15; // x2
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_48E48DA & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v4);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v5);
    byte_48E48DA = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  ActiveList = BattleBuffData__getActiveList(this, 1, v7);
  if ( !ActiveList )
    goto LABEL_19;
  max_length = ActiveList->max_length;
  v11 = ActiveList;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_1B00F30(ActiveList, v9);
      v13 = &v11->obj.klass + (int)v12;
      v14 = (BattleBuffData_BuffData_o *)v13[4];
      if ( !v14 )
        break;
      ActiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__checkState(
                                                      (BattleBuffData_BuffData_o *)v13[4],
                                                      8,
                                                      0LL);
      if ( ((unsigned __int8)ActiveList & 1) == 0 )
      {
        ActiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__checkState(v14, 4096, 0LL);
        if ( ((unsigned __int8)ActiveList & 1) == 0 )
        {
          ActiveList = (BattleBuffData_BuffData_array *)BattleBuffData__isInvalidHide(
                                                          (BattleBuffData_o *)ActiveList,
                                                          v14,
                                                          v15);
          if ( ((unsigned __int8)ActiveList & 1) == 0 )
          {
            if ( !v6 )
              break;
            items = v6->fields._items;
            v19 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
            ++v6->fields._version;
            if ( !items )
              break;
            size = v6->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                v6,
                (Il2CppObject *)v14,
                *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
            }
            else
            {
              v21 = &items->obj.klass + size;
              v6->fields._size = size + 1;
              v21[4] = (Il2CppClass *)v14;
              sub_1B00C70((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v14, v16, v17);
            }
          }
        }
      }
      max_length = v11->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B00F28(ActiveList, v9);
  }
LABEL_17:
  if ( !v6 )
    goto LABEL_19;
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_object___ToArray(
                                            v6,
                                            (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__getShowCommandBuffListPassive(
        BattleBuffData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x20
  const MethodInfo *v7; // x2
  BattleBuffData_BuffData_array *PassiveList; // x0
  __int64 v9; // x1
  int max_length; // w8
  BattleBuffData_BuffData_array *v11; // x21
  unsigned int v12; // w23
  Il2CppClass **v13; // x8
  BattleBuffData_BuffData_o *v14; // x22
  const MethodInfo *v15; // x2
  const MethodInfo *v16; // x2
  int32_t v17; // w3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  Il2CppClass **v21; // x0

  if ( (byte_48E48DB & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v4);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v5);
    byte_48E48DB = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  PassiveList = BattleBuffData__getPassiveList(this, 1, v7);
  if ( !PassiveList )
    goto LABEL_27;
  max_length = PassiveList->max_length;
  v11 = PassiveList;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_1B00F30(PassiveList, v9);
      v13 = &v11->obj.klass + (int)v12;
      v14 = (BattleBuffData_BuffData_o *)v13[4];
      if ( !v14 )
        break;
      PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__checkState(
                                                       (BattleBuffData_BuffData_o *)v13[4],
                                                       8,
                                                       0LL);
      if ( ((unsigned __int8)PassiveList & 1) == 0 )
      {
        PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__checkState(v14, 4096, 0LL);
        if ( ((unsigned __int8)PassiveList & 1) == 0 )
        {
          PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData__isInvalidHide(
                                                           (BattleBuffData_o *)PassiveList,
                                                           v14,
                                                           v15);
          if ( ((unsigned __int8)PassiveList & 1) == 0 )
          {
            PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__checkState(v14, 512, 0LL);
            if ( ((unsigned __int8)PassiveList & 1) != 0
              || (PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__checkState(v14, 0x2000, 0LL),
                  ((unsigned __int8)PassiveList & 1) != 0)
              || (PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData__checkBuffSpecialAttack(this, v14, v16),
                  ((unsigned __int8)PassiveList & 1) != 0)
              || v14->fields.turn > 0
              || v14->fields.count > 0
              || v14->fields._IsExtendingLife_k__BackingField
              || (PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__checkState(v14, 2, 0LL),
                  ((unsigned __int8)PassiveList & 1) != 0)
              || (PassiveList = (BattleBuffData_BuffData_array *)BattleBuffData_BuffData__checkState(v14, 4, 0LL),
                  ((unsigned __int8)PassiveList & 1) != 0) )
            {
              if ( !v6 )
                break;
              items = v6->fields._items;
              v19 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
              ++v6->fields._version;
              if ( !items )
                break;
              size = v6->fields._size;
              if ( (unsigned int)size >= items->max_length )
              {
                System_Collections_Generic_List_object___AddWithResize(
                  v6,
                  (Il2CppObject *)v14,
                  *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
              }
              else
              {
                v21 = &items->obj.klass + size;
                v6->fields._size = size + 1;
                v21[4] = (Il2CppClass *)v14;
                sub_1B00C70((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v14, (int32_t)v16, v17);
              }
            }
          }
        }
      }
      max_length = v11->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_25;
    }
LABEL_27:
    sub_1B00F28(PassiveList, v9);
  }
LABEL_25:
  if ( !v6 )
    goto LABEL_27;
  return (BattleBuffData_BuffData_array *)System_Collections_Generic_List_object___ToArray(
                                            v6,
                                            (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
}


BattleBuffData_ShowBuffData_array *__fastcall BattleBuffData__getShowServantParam(
        BattleBuffData_o *this,
        const MethodInfo *method)
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
  __int64 v13; // x21
  System_Collections_Generic_List_object__o *passiveList; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  System_Collections_Generic_List_object__o *v18; // x22
  System_Collections_Generic_List_BattleBuffData_ShowBuffData__o **v19; // x20
  int32_t v20; // w2
  int32_t v21; // w3
  System_Action_object__o *v22; // x22
  BattleBuffData_o *v23; // x0
  const MethodInfo *v24; // x2
  BattleBuffData___c_c *v25; // x0
  System_Collections_Generic_List_BattleBuffData_ShowBuffData__o *v26; // x19
  System_Func_object__int__o *_9__40_1; // x20
  Il2CppObject *v28; // x21
  struct BattleBuffData___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v32; // x0

  if ( (byte_48E48D4 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_BattleBuffData_BuffData__TypeInfo, method);
    sub_1B00CCC(&Method_System_Linq_Enumerable_OrderByDescending_BattleBuffData_ShowBuffData__int___, v3);
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_ShowBuffData___, v4);
    sub_1B00CCC(&System_Func_BattleBuffData_ShowBuffData__int__TypeInfo, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__, v7);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo, v8);
    sub_1B00CCC(&Method_BattleBuffData___c__getShowServantParam_b__40_1__, v9);
    sub_1B00CCC(&Method_BattleBuffData___c__DisplayClass40_0__getShowServantParam_b__0__, v10);
    sub_1B00CCC(&BattleBuffData___c__DisplayClass40_0_TypeInfo, v11);
    sub_1B00CCC(&BattleBuffData___c_TypeInfo, v12);
    byte_48E48D4 = 1;
  }
  v13 = sub_1B00F18(BattleBuffData___c__DisplayClass40_0_TypeInfo);
  BattleBuffData___c__DisplayClass40_0___ctor((BattleBuffData___c__DisplayClass40_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_13;
  *(_QWORD *)(v13 + 16) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v13 + 16), (int32_t)this, v16, v17);
  v18 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_ShowBuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v18,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData___ctor__);
  *(_QWORD *)(v13 + 24) = v18;
  v19 = (System_Collections_Generic_List_BattleBuffData_ShowBuffData__o **)(v13 + 24);
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v13 + 24), (int32_t)v18, v20, v21);
  v22 = (System_Action_object__o *)sub_1B00F18(System_Action_BattleBuffData_BuffData__TypeInfo);
  System_Action_object____ctor(
    v22,
    (Il2CppObject *)v13,
    Method_BattleBuffData___c__DisplayClass40_0__getShowServantParam_b__0__,
    0LL);
  passiveList = (System_Collections_Generic_List_object__o *)this->fields.passiveList;
  if ( !passiveList
    || (System_Collections_Generic_List_object___ForEach(
          passiveList,
          (System_Action_T__o *)v22,
          (const MethodInfo_33C2410 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
        (passiveList = (System_Collections_Generic_List_object__o *)this->fields.activeList) == 0LL) )
  {
LABEL_13:
    sub_1B00F28(passiveList, v15);
  }
  System_Collections_Generic_List_object___ForEach(
    passiveList,
    (System_Action_T__o *)v22,
    (const MethodInfo_33C2410 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
  BattleBuffData__CheckDummyBuffData(v23, *v19, v24);
  v25 = BattleBuffData___c_TypeInfo;
  v26 = *v19;
  if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v25 = BattleBuffData___c_TypeInfo;
  }
  _9__40_1 = (System_Func_object__int__o *)v25->static_fields->__9__40_1;
  if ( !_9__40_1 )
  {
    if ( !v25->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v25);
      v25 = BattleBuffData___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v25->static_fields->__9;
    _9__40_1 = (System_Func_object__int__o *)sub_1B00F18(System_Func_BattleBuffData_ShowBuffData__int__TypeInfo);
    System_Func_object__int____ctor(_9__40_1, v28, Method_BattleBuffData___c__getShowServantParam_b__40_1__, 0LL);
    static_fields = BattleBuffData___c_TypeInfo->static_fields;
    static_fields->__9__40_1 = (struct System_Func_BattleBuffData_ShowBuffData__int__o *)_9__40_1;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__40_1, (int32_t)_9__40_1, v30, v31);
  }
  v32 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)v26,
                                                               (System_Func_TSource__TKey__o *)_9__40_1,
                                                               (const MethodInfo_2D8A1D0 *)Method_System_Linq_Enumerable_OrderByDescending_BattleBuffData_ShowBuffData__int___);
  return (BattleBuffData_ShowBuffData_array *)System_Linq_Enumerable__ToArray_object_(
                                                v32,
                                                (const MethodInfo_2D976BC *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_ShowBuffData___);
}


// local variable allocation has failed, the output may be wrong!
System_Boolean_array *__fastcall BattleBuffData__getSkillSealSelectListFromValue(
        BattleBuffData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  __int64 v3; // x1
  System_Boolean_array *v4; // x19
  System_String_o *v5; // x0
  __int64 v6; // x1
  System_String_o *v7; // x20
  int32_t v8; // w21
  uint16_t Chars; // w22
  double NumericValue; // d0
  unsigned int v11; // w8
  unsigned int max_length; // w9
  int32_t v14; // [xsp+Ch] [xbp-44h] BYREF

  v14 = value;
  if ( (byte_48E492F & 1) == 0 )
  {
    sub_1B00CCC(&bool___TypeInfo, *(_QWORD *)&value);
    sub_1B00CCC(&char_TypeInfo, v3);
    byte_48E492F = 1;
  }
  v4 = (System_Boolean_array *)sub_1B00D74(bool___TypeInfo, 3LL);
  v5 = System_Int32__ToString((int32_t)&v14, 0LL);
  if ( !v5 )
LABEL_17:
    sub_1B00F28(v5, v6);
  v7 = v5;
  if ( v5->fields._stringLength >= 1 )
  {
    v8 = 0;
    do
    {
      Chars = System_String__get_Chars(v7, v8, 0LL);
      if ( !char_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(char_TypeInfo);
      NumericValue = System_Char__GetNumericValue(Chars, 0LL);
      v11 = (int)NumericValue - 1;
      if ( NumericValue == INFINITY )
        v11 = 0x7FFFFFFF;
      if ( (v11 & 0x80000000) == 0 )
      {
        if ( !v4 )
          goto LABEL_17;
        max_length = v4->max_length;
        if ( (int)v11 < (int)max_length )
        {
          if ( v11 >= max_length )
            sub_1B00F30(v5, v6);
          v4->m_Items[v11 + 4] = 1;
        }
      }
      ++v8;
    }
    while ( v8 < v7->fields._stringLength );
  }
  return v4;
}


System_Int32_array *__fastcall BattleBuffData__getSkillSealSelectTurnList(
        BattleBuffData_o *this,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
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
  System_Int32_array *v13; // x19
  BuffList_ActInfo_o *ActInfo; // x22
  System_Collections_Generic_List_object__o *v15; // x23
  const MethodInfo *v16; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x2
  System_Collections_Generic_IEnumerable_T__o *PassiveList; // x0
  const MethodInfo *v21; // x5
  Il2CppObject *current; // x23
  _BOOL8 v23; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x2
  System_Boolean_array *SkillSealSelectListFromValue; // x0
  __int64 v27; // x1
  __int64 v28; // x8
  unsigned __int64 v29; // x9
  System_Collections_Generic_List_Enumerator_object__o v31; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v32; // [xsp+20h] [xbp-70h] BYREF
  int32_t plusMinus; // [xsp+3Ch] [xbp-54h] BYREF

  if ( (byte_48E492D & 1) == 0 )
  {
    sub_1B00CCC(&BuffList_TypeInfo, checkIndividualities);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v7);
    sub_1B00CCC(&int___TypeInfo, v8);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v9);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v10);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v11);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v12);
    byte_48E492D = 1;
  }
  memset(&v32, 0, sizeof(v32));
  v13 = (System_Int32_array *)sub_1B00D74(int___TypeInfo, 3LL);
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(99, 0LL, 0LL);
  plusMinus = 0;
  v15 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v16);
  if ( !v15 )
    sub_1B00F28(ActiveList, v18);
  System_Collections_Generic_List_object___AddRange(
    v15,
    ActiveList,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  PassiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getPassiveList(this, 1, v19);
  System_Collections_Generic_List_object___AddRange(
    v15,
    PassiveList,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v31,
    v15,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  v32 = v31;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v32,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__) )
  {
    current = v32.fields._current;
    v23 = BattleBuffData__checkIndiviuality(
            this,
            ActInfo,
            (BattleBuffData_BuffData_o *)v32.fields._current,
            checkIndividualities,
            &plusMinus,
            v21);
    if ( v23 )
    {
      if ( !current )
        sub_1B00F28(v23, v24);
      SkillSealSelectListFromValue = BattleBuffData__getSkillSealSelectListFromValue(
                                       (BattleBuffData_o *)v23,
                                       HIDWORD(current[1].monitor),
                                       v25);
      if ( !SkillSealSelectListFromValue )
        sub_1B00F28(0LL, v27);
      if ( (int)*(_QWORD *)&SkillSealSelectListFromValue->max_length >= 1 )
      {
        v28 = (unsigned int)*(_QWORD *)&SkillSealSelectListFromValue->max_length;
        v29 = 0LL;
        do
        {
          if ( v28 == v29 )
            sub_1B00F30(SkillSealSelectListFromValue, v27);
          if ( SkillSealSelectListFromValue->m_Items[v29 + 4] )
          {
            if ( !v13 )
              sub_1B00F28(SkillSealSelectListFromValue, v27);
            if ( v29 >= v13->max_length )
              sub_1B00F30(SkillSealSelectListFromValue, v27);
            v13->m_Items[v29 + 1] = HIDWORD(current[1].klass);
          }
          ++v29;
        }
        while ( v28 != v29 );
      }
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v32,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  return v13;
}


BattleBuffData_BuffData_o *__fastcall BattleBuffData__getTDTypeChangeBuffData(
        BattleBuffData_o *this,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BattleBuffData_CheckIndividualitiesData_o *v6; // x21
  const MethodInfo *v7; // x6
  BattleBuffData_BuffData_array *BuffList_41032464; // x20
  BattleBuffData_BuffData_o *v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  int max_length; // w8
  int v13; // w9
  int v14; // w10
  BattleBuffData_BuffData_o *v15; // x11
  int addOrder; // w12
  bool v17; // cc

  if ( (byte_48E490D & 1) == 0 )
  {
    sub_1B00CCC(&BattleBuffData_BuffData_TypeInfo, servantData);
    sub_1B00CCC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v5);
    byte_48E490D = 1;
  }
  v6 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B00F18(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v6, servantData, 0LL, 0LL, 0LL, 0LL, 0LL);
  BuffList_41032464 = BattleBuffData__getBuffList_41032464(this, 86, v6, 1, 0, 0LL, v7);
  v9 = (BattleBuffData_BuffData_o *)sub_1B00F18(BattleBuffData_BuffData_TypeInfo);
  BattleBuffData_BuffData___ctor(v9, 0LL);
  if ( !BuffList_41032464 )
    goto LABEL_15;
  max_length = BuffList_41032464->max_length;
  if ( max_length >= 1 )
  {
    v13 = 0;
    v14 = -1;
    while ( 1 )
    {
      if ( max_length == v13 )
        sub_1B00F30(v10, v11);
      v15 = BuffList_41032464->m_Items[v13];
      if ( !v15 )
        break;
      addOrder = v15->fields.addOrder;
      ++v13;
      v17 = v14 < addOrder;
      if ( v14 < addOrder )
        v14 = v15->fields.addOrder;
      if ( v17 )
        v9 = v15;
      if ( max_length == v13 )
        return v9;
    }
LABEL_15:
    sub_1B00F28(v10, v11);
  }
  return v9;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleBuffData__getTestActBuff(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        int32_t *value,
        const MethodInfo *method)
{
  BuffList_ActInfo_o *ActInfo; // x0
  __int64 v10; // x1
  System_Int32_array *selfConcatSvtIndividualities_k__BackingField; // x2
  System_Int32_array *opponentConcatSvtIndividualities_k__BackingField; // x3
  System_Int32_array *selfIndividuality_k__BackingField; // x6
  System_Int32_array *opponentIndividuality_k__BackingField; // x7
  bool v15; // w0
  int32_t param; // w8
  const MethodInfo *v18; // [xsp+0h] [xbp-50h]
  BattleBuffData_BuffData_o *targetBuff; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_48E4928 & 1) == 0 )
  {
    sub_1B00CCC(&BuffList_TypeInfo, *(_QWORD *)&act);
    byte_48E4928 = 1;
  }
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  ActInfo = BuffList__getActInfo(act, 0LL, 0LL);
  if ( !checkIndividualities )
    sub_1B00F28(ActInfo, v10);
  selfConcatSvtIndividualities_k__BackingField = checkIndividualities->fields._selfConcatSvtIndividualities_k__BackingField;
  opponentConcatSvtIndividualities_k__BackingField = checkIndividualities->fields._opponentConcatSvtIndividualities_k__BackingField;
  selfIndividuality_k__BackingField = checkIndividualities->fields._selfIndividuality_k__BackingField;
  opponentIndividuality_k__BackingField = checkIndividualities->fields._opponentIndividuality_k__BackingField;
  targetBuff = 0LL;
  v15 = BattleBuffData__ConfirmationBuff(
          this,
          ActInfo,
          selfConcatSvtIndividualities_k__BackingField,
          opponentConcatSvtIndividualities_k__BackingField,
          0,
          &targetBuff,
          selfIndividuality_k__BackingField,
          opponentIndividuality_k__BackingField,
          v18);
  param = (int)targetBuff;
  if ( targetBuff )
    param = targetBuff->fields.param;
  *value = param;
  return v15;
}


bool __fastcall BattleBuffData__get_IsNoDamage(BattleBuffData_o *this, const MethodInfo *method)
{
  return this->fields.isNoDamage;
}


BuffMaster_o *__fastcall BattleBuffData__get_buffMst(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  BuffMaster_o *result; // x0
  ServantStatusBattleListViewItem_o *p_tmpBuffMst; // x19
  BuffMaster_o *tmpBuffMst; // t1
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_48E48DF & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_BuffMaster___, method);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v3);
    byte_48E48DF = 1;
  }
  tmpBuffMst = this->fields._tmpBuffMst;
  p_tmpBuffMst = (ServantStatusBattleListViewItem_o *)&this->fields._tmpBuffMst;
  result = tmpBuffMst;
  if ( !tmpBuffMst )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1B00F28(0LL, v8);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_BuffMaster___);
    p_tmpBuffMst->klass = (ServantStatusBattleListViewItem_c *)MasterData_object;
    sub_1B00C70(p_tmpBuffMst, (int32_t)MasterData_object, v10, v11);
    return (BuffMaster_o *)p_tmpBuffMst->klass;
  }
  return result;
}


bool __fastcall BattleBuffData__isConditionHp(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        int32_t now,
        int32_t max,
        const MethodInfo *method)
{
  BattleBuffData_o *v8; // x22
  const MethodInfo *v9; // x1
  BuffEntity_o *v10; // x21
  double v11; // d8
  bool isCondition; // w19
  bool v14; // w20
  int32_t pal[2]; // [xsp+8h] [xbp-38h] BYREF

  v8 = this;
  if ( (byte_48E4914 & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_1B00CCC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, buff);
    byte_48E4914 = 1;
  }
  if ( !buff )
    goto LABEL_16;
  if ( buff->fields._isRemove || !BattleBuffData_BuffData__checkState(buff, 32, 0LL) )
    return 0;
  this = (BattleBuffData_o *)BattleBuffData__get_buffMst(v8, v9);
  if ( !this
    || (this = (BattleBuffData_o *)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     buff->fields.buffId,
                                     (const MethodInfo_2FE6A4C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__)) == 0LL )
  {
LABEL_16:
    sub_1B00F28(this, buff);
  }
  v10 = (BuffEntity_o *)this;
  if ( !BuffEntity__isConditionsHp((BuffEntity_o *)this, 0LL) )
    return 0;
  *(_QWORD *)pal = 0LL;
  v11 = (double)now * 1000.0 / (double)max;
  if ( BuffEntity__isCondition(v10, 0, &pal[1], 0LL) && BuffEntity__isCondition(v10, 1, pal, 0LL) )
  {
    if ( v11 < (double)pal[1] )
      return 0;
    return v11 <= (double)pal[0];
  }
  isCondition = BuffEntity__isCondition(v10, 0, &pal[1], 0LL);
  v14 = v11 >= (double)pal[1];
  if ( BuffEntity__isCondition(v10, 1, pal, 0LL) )
    return v11 <= (double)pal[0];
  return isCondition && v14;
}


bool __fastcall BattleBuffData__isConditionIndividuality(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        System_Int32_array *servantIndv,
        System_Int32_array *buffIndv,
        System_Int32_array *fieldIndiv,
        System_Int32_array *canSubStateBuffIndv,
        const MethodInfo *method)
{
  BattleBuffData_o *v12; // x24
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
  const MethodInfo *v23; // x1
  BuffEntity_o *v24; // x21
  il2cpp_array_size_t v25; // w24
  il2cpp_array_size_t v26; // w25
  System_Collections_Generic_List_int__o *v27; // x22
  int32_t IndividualitieCountAbove; // w23
  int32_t IndividualitieCountBelow; // w21
  System_Int32_array *v30; // x19
  BattleBuffData_o *v31; // x20
  System_Func_T1__T2__TResult__o *v32; // x21
  System_Func_T1__T2__TResult__o *v33; // x22
  System_Int32_array *v34; // x0
  System_Int32_array *v35; // x1
  System_Int32_array *v36; // x0
  System_Int32_array *v37; // x19
  System_Int32_array *v38; // x20
  System_Func_T1__T2__TResult__o *v39; // x21
  System_Func_T1__T2__TResult__o *v40; // x22
  System_Int32_array *v42; // x0
  System_Int32_array *v43; // x19
  System_Int32_array *v44; // x20
  System_Func_T1__T2__T3__T4__TResult__o *v46; // x22
  System_Func_T1__T2__T3__T4__TResult__o *v47; // x24
  System_Int32_array *v48; // [xsp+0h] [xbp-50h] BYREF
  int32_t pal; // [xsp+Ch] [xbp-44h] BYREF

  v12 = this;
  if ( (byte_48E4918 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, buff);
    sub_1B00CCC(&System_Func_int____int____bool__TypeInfo, v13);
    sub_1B00CCC(&System_Func_int____int____int__int__bool__TypeInfo, v14);
    sub_1B00CCC(&Method_Individuality_IsMatchArray__, v15);
    sub_1B00CCC(&Method_Individuality_IsPartialMatchArrayCount__, v16);
    sub_1B00CCC(&Method_Individuality_IsPartialMatchArray__, v17);
    sub_1B00CCC(&int___TypeInfo, v18);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__AddRange__, v19);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__ToArray__, v20);
    sub_1B00CCC(&Method_System_Collections_Generic_List_int___ctor___74529928, v21);
    this = (BattleBuffData_o *)sub_1B00CCC(&System_Collections_Generic_List_int__TypeInfo, v22);
    byte_48E4918 = 1;
  }
  if ( !buff )
    goto LABEL_31;
  if ( buff->fields._isRemove || !BattleBuffData_BuffData__checkState(buff, 32, 0LL) )
    return 0;
  this = (BattleBuffData_o *)BattleBuffData__get_buffMst(v12, v23);
  if ( !this )
    goto LABEL_31;
  this = (BattleBuffData_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                               buff->fields.buffId,
                               (const MethodInfo_2FE6A4C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
  pal = 0;
  v48 = 0LL;
  if ( !this )
    goto LABEL_31;
  v24 = (BuffEntity_o *)this;
  this = (BattleBuffData_o *)BuffEntity__IsExcludeUnSubStateIndiv((BuffEntity_o *)this, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
    buffIndv = canSubStateBuffIndv;
  if ( !servantIndv || !buffIndv )
    goto LABEL_31;
  v25 = buffIndv->max_length + servantIndv->max_length;
  v26 = fieldIndiv ? fieldIndiv->max_length : 0;
  v27 = (System_Collections_Generic_List_int__o *)sub_1B00F18(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor_54149576(
    v27,
    v25 + v26,
    (const MethodInfo_33A41C8 *)Method_System_Collections_Generic_List_int___ctor___74529928);
  if ( !v27 )
    goto LABEL_31;
  System_Collections_Generic_List_int___AddRange(
    v27,
    (System_Collections_Generic_IEnumerable_T__o *)servantIndv,
    (const MethodInfo_33A4BB8 *)Method_System_Collections_Generic_List_int__AddRange__);
  System_Collections_Generic_List_int___AddRange(
    v27,
    (System_Collections_Generic_IEnumerable_T__o *)buffIndv,
    (const MethodInfo_33A4BB8 *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( fieldIndiv )
    System_Collections_Generic_List_int___AddRange(
      v27,
      (System_Collections_Generic_IEnumerable_T__o *)fieldIndiv,
      (const MethodInfo_33A4BB8 *)Method_System_Collections_Generic_List_int__AddRange__);
  if ( BuffEntity__isCondition(v24, 2, &pal, 0LL) )
  {
    IndividualitieCountAbove = BuffEntity__GetIndividualitieCountAbove(v24, 0, 0LL);
    IndividualitieCountBelow = BuffEntity__GetIndividualitieCountBelow(v24, 0, 0LL);
    v30 = System_Collections_Generic_List_int___ToArray(
            v27,
            (const MethodInfo_33A6464 *)Method_System_Collections_Generic_List_int__ToArray__);
    this = (BattleBuffData_o *)sub_1B00D74(int___TypeInfo, 1LL);
    if ( this )
    {
      v31 = this;
      if ( !LODWORD(this->fields.passiveList) )
        sub_1B00F30(this, buff);
      LODWORD(this->fields.activeList) = pal;
      if ( IndividualitieCountAbove >= 1 || IndividualitieCountBelow >= 1 )
      {
        v46 = (System_Func_T1__T2__T3__T4__TResult__o *)sub_1B00F18(System_Func_int____int____int__int__bool__TypeInfo);
        System_Func_object__object__int__int__bool____ctor(
          v46,
          0LL,
          Method_Individuality_IsPartialMatchArrayCount__,
          0LL);
        v47 = (System_Func_T1__T2__T3__T4__TResult__o *)sub_1B00F18(System_Func_int____int____int__int__bool__TypeInfo);
        System_Func_object__object__int__int__bool____ctor(
          v47,
          0LL,
          Method_Individuality_IsPartialMatchArrayCount__,
          0LL);
        return Individuality__CheckSignedIndividualitiesCount(
                 v30,
                 (System_Int32_array *)v31,
                 (System_Func_int____int____int__int__bool__o *)v46,
                 (System_Func_int____int____int__int__bool__o *)v47,
                 IndividualitieCountAbove,
                 IndividualitieCountBelow,
                 0LL);
      }
      v32 = (System_Func_T1__T2__TResult__o *)sub_1B00F18(System_Func_int____int____bool__TypeInfo);
      System_Func_object__object__bool____ctor(v32, 0LL, Method_Individuality_IsPartialMatchArray__, 0LL);
      v33 = (System_Func_T1__T2__TResult__o *)sub_1B00F18(System_Func_int____int____bool__TypeInfo);
      System_Func_object__object__bool____ctor(v33, 0LL, Method_Individuality_IsPartialMatchArray__, 0LL);
      v34 = v30;
      v35 = (System_Int32_array *)v31;
      return Individuality__CheckSignedIndividualities_36497696(
               v34,
               v35,
               (System_Func_int____int____bool__o *)v32,
               (System_Func_int____int____bool__o *)v33,
               0LL);
    }
LABEL_31:
    sub_1B00F28(this, buff);
  }
  if ( !BuffEntity__TryGetConditionParamArray(v24, 3, &v48, 0LL) )
  {
    if ( BuffEntity__TryGetConditionParamArray(v24, 4, &v48, 0LL) )
    {
      v42 = System_Collections_Generic_List_int___ToArray(
              v27,
              (const MethodInfo_33A6464 *)Method_System_Collections_Generic_List_int__ToArray__);
      v43 = v48;
      v44 = v42;
      v32 = (System_Func_T1__T2__TResult__o *)sub_1B00F18(System_Func_int____int____bool__TypeInfo);
      System_Func_object__object__bool____ctor(v32, 0LL, Method_Individuality_IsMatchArray__, 0LL);
      v33 = (System_Func_T1__T2__TResult__o *)sub_1B00F18(System_Func_int____int____bool__TypeInfo);
      System_Func_object__object__bool____ctor(v33, 0LL, Method_Individuality_IsMatchArray__, 0LL);
      v34 = v44;
      v35 = v43;
      return Individuality__CheckSignedIndividualities_36497696(
               v34,
               v35,
               (System_Func_int____int____bool__o *)v32,
               (System_Func_int____int____bool__o *)v33,
               0LL);
    }
    return 0;
  }
  v36 = System_Collections_Generic_List_int___ToArray(
          v27,
          (const MethodInfo_33A6464 *)Method_System_Collections_Generic_List_int__ToArray__);
  v37 = v48;
  v38 = v36;
  v39 = (System_Func_T1__T2__TResult__o *)sub_1B00F18(System_Func_int____int____bool__TypeInfo);
  System_Func_object__object__bool____ctor(v39, 0LL, Method_Individuality_IsPartialMatchArray__, 0LL);
  v40 = (System_Func_T1__T2__TResult__o *)sub_1B00F18(System_Func_int____int____bool__TypeInfo);
  System_Func_object__object__bool____ctor(v40, 0LL, Method_Individuality_IsPartialMatchArray__, 0LL);
  return Individuality__CheckSignedIndividualitiesPartialMatch(
           v38,
           v37,
           (System_Func_int____int____bool__o *)v39,
           (System_Func_int____int____bool__o *)v40,
           0,
           0LL);
}


bool __fastcall BattleBuffData__isContainConditionIndividuality(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_o *v4; // x20

  v4 = this;
  if ( (byte_48E4917 & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_1B00CCC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, buff);
    byte_48E4917 = 1;
  }
  if ( !buff )
    goto LABEL_9;
  if ( buff->fields._isRemove )
    return 0;
  this = (BattleBuffData_o *)BattleBuffData__get_buffMst(v4, (const MethodInfo *)buff);
  if ( !this
    || (this = (BattleBuffData_o *)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     buff->fields.buffId,
                                     (const MethodInfo_2FE6A4C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1B00F28(this, buff);
  }
  return BuffEntity__isConditionIndividuality((BuffEntity_o *)this, 0LL);
}


bool __fastcall BattleBuffData__isContainConditionsHp(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_o *v4; // x20

  v4 = this;
  if ( (byte_48E4916 & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_1B00CCC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, buff);
    byte_48E4916 = 1;
  }
  if ( !buff )
    goto LABEL_9;
  if ( buff->fields._isRemove )
    return 0;
  this = (BattleBuffData_o *)BattleBuffData__get_buffMst(v4, (const MethodInfo *)buff);
  if ( !this
    || (this = (BattleBuffData_o *)DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                     buff->fields.buffId,
                                     (const MethodInfo_2FE6A4C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__)) == 0LL )
  {
LABEL_9:
    sub_1B00F28(this, buff);
  }
  return BuffEntity__isConditionsHp((BuffEntity_o *)this, 0LL);
}


bool __fastcall BattleBuffData__isGuts(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o **buff,
        BattleBuffData_CheckIndividualitiesData_array *checkIndividualitiesDataArray,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x6
  BattleBuffData_BuffData_array *BuffList_41032464; // x0
  const MethodInfo *v11; // x5

  *buff = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)buff, 0, (int32_t)checkIndividualitiesDataArray, (int32_t)method);
  if ( !checkIndividualitiesDataArray )
    sub_1B00F28(v7, v8);
  if ( !checkIndividualitiesDataArray->max_length )
    sub_1B00F30(v7, v8);
  BuffList_41032464 = BattleBuffData__getBuffList_41032464(
                        this,
                        126,
                        checkIndividualitiesDataArray->m_Items[0],
                        1,
                        1,
                        0LL,
                        v9);
  return BattleBuffData__checkGutsBuffSuccessfulIndividual(
           this,
           BuffList_41032464,
           126,
           checkIndividualitiesDataArray,
           buff,
           v11);
}


bool __fastcall BattleBuffData__isHide(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1B00F28(this, 0LL);
  return BattleBuffData_BuffData__checkState(buff, 8, 0LL);
}


bool __fastcall BattleBuffData__isHideOtherCommand(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1B00F28(this, 0LL);
  return BattleBuffData_BuffData__checkState(buff, 512, 0LL);
}


bool __fastcall BattleBuffData__isIgnoreDefeatPoint(BattleBuffData_o *this, const MethodInfo *method)
{
  BuffList_TYPE_array *BuffList_41011768; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x4

  if ( (byte_48E496D & 1) == 0 )
  {
    sub_1B00CCC(&BuffList_TYPE___TypeInfo, method);
    byte_48E496D = 1;
  }
  BuffList_41011768 = (BuffList_TYPE_array *)sub_1B00D74(BuffList_TYPE___TypeInfo, 1LL);
  if ( !BuffList_41011768 )
    goto LABEL_7;
  if ( !BuffList_41011768->max_length )
    sub_1B00F30(BuffList_41011768, BuffList_41011768);
  BuffList_41011768->m_Items[1] = 184;
  BuffList_41011768 = (BuffList_TYPE_array *)BattleBuffData__getBuffList_41011768(this, BuffList_41011768, 0LL, 0LL, v5);
  if ( !BuffList_41011768 )
LABEL_7:
    sub_1B00F28(BuffList_41011768, v4);
  return BuffList_41011768->max_length != 0;
}


bool __fastcall BattleBuffData__isInvalidHide(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1B00F28(this, 0LL);
  return !BattleBuffData_BuffData__checkAct(buff, 1, 0LL) && BattleBuffData_BuffData__checkState(buff, 0x8000, 0LL);
}


bool __fastcall BattleBuffData__isShow(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1B00F28(this, 0LL);
  return BattleBuffData_BuffData__checkState(buff, 4, 0LL);
}


bool __fastcall BattleBuffData__isShowDamageAndCommandCardBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1B00F28(this, 0LL);
  return BattleBuffData_BuffData__checkState(buff, 0x2000, 0LL);
}


bool __fastcall BattleBuffData__isShowDeff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1B00F28(this, 0LL);
  return BattleBuffData_BuffData__checkState(buff, 1024, 0LL);
}


bool __fastcall BattleBuffData__isShowStatusBuffOnly(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1B00F28(this, 0LL);
  return BattleBuffData_BuffData__checkState(buff, 4096, 0LL);
}


bool __fastcall BattleBuffData__isSphitBuff(BattleBuffData_o *this, int32_t *effectId, const MethodInfo *method)
{
  __int64 v5; // x1
  void *PassiveList; // x0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x2
  int v9; // w8
  void *v10; // x21
  unsigned int v11; // w26
  __int64 v12; // x22
  BuffEntity_o *v13; // x22
  int32_t v14; // w23
  int v15; // w8
  void *v16; // x21
  unsigned int v17; // w26
  __int64 v18; // x22
  int32_t v19; // w23

  if ( (byte_48E4913 & 1) == 0 )
  {
    sub_1B00CCC(&BuffList_TypeInfo, effectId);
    sub_1B00CCC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v5);
    byte_48E4913 = 1;
  }
  *effectId = 0;
  PassiveList = BattleBuffData__getPassiveList(this, 1, method);
  if ( !PassiveList )
    goto LABEL_31;
  v9 = *((_DWORD *)PassiveList + 6);
  v10 = PassiveList;
  if ( v9 >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( v11 >= v9 )
        goto LABEL_32;
      v12 = *((_QWORD *)v10 + (int)v11 + 4);
      if ( !v12 )
        goto LABEL_31;
      if ( !*(_BYTE *)(v12 + 385) && *(_BYTE *)(v12 + 34) )
      {
        PassiveList = BattleBuffData__get_buffMst(this, v7);
        if ( !PassiveList )
          goto LABEL_31;
        PassiveList = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)PassiveList,
                        *(_DWORD *)(v12 + 16),
                        (const MethodInfo_2FE6A4C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        if ( !PassiveList )
          goto LABEL_31;
        v13 = (BuffEntity_o *)PassiveList;
        v14 = *((_DWORD *)PassiveList + 5);
        if ( !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        PassiveList = (void *)BuffList__isSpHit(v14, 0LL);
        if ( ((unsigned __int8)PassiveList & 1) != 0 )
          break;
      }
      v9 = *((_DWORD *)v10 + 6);
      if ( (int)++v11 >= v9 )
        goto LABEL_16;
    }
LABEL_30:
    *effectId = BuffEntity__getEffectId(v13, 0LL);
    return 1;
  }
LABEL_16:
  PassiveList = BattleBuffData__getActiveList(this, 1, v8);
  if ( !PassiveList )
LABEL_31:
    sub_1B00F28(PassiveList, v7);
  v15 = *((_DWORD *)PassiveList + 6);
  v16 = PassiveList;
  if ( v15 >= 1 )
  {
    v17 = 0;
    while ( v17 < v15 )
    {
      v18 = *((_QWORD *)v16 + (int)v17 + 4);
      if ( !v18 )
        goto LABEL_31;
      if ( !*(_BYTE *)(v18 + 385) && *(_BYTE *)(v18 + 34) )
      {
        PassiveList = BattleBuffData__get_buffMst(this, v7);
        if ( !PassiveList )
          goto LABEL_31;
        PassiveList = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)PassiveList,
                        *(_DWORD *)(v18 + 16),
                        (const MethodInfo_2FE6A4C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        if ( !PassiveList )
          goto LABEL_31;
        v13 = (BuffEntity_o *)PassiveList;
        v19 = *((_DWORD *)PassiveList + 5);
        if ( !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        PassiveList = (void *)BuffList__isSpHit(v19, 0LL);
        if ( ((unsigned __int8)PassiveList & 1) != 0 )
          goto LABEL_30;
      }
      v15 = *((_DWORD *)v16 + 6);
      if ( (int)++v17 >= v15 )
        return 0;
    }
LABEL_32:
    sub_1B00F30(PassiveList, v7);
  }
  return 0;
}


bool __fastcall BattleBuffData__isTDTypeChange(
        BattleBuffData_o *this,
        BattleServantData_o *servantData,
        const MethodInfo *method)
{
  BattleBuffData_BuffData_o *v3; // x0
  __int64 v4; // x1

  v3 = BattleBuffData__getTDTypeChangeBuffData(this, servantData, method);
  if ( !v3 )
    sub_1B00F28(0LL, v4);
  return v3->fields.param > 0;
}


bool __fastcall BattleBuffData__isTurnBuff(
        BattleBuffData_o *this,
        int32_t act,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        bool checkCnt,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x6
  bool actFlg; // [xsp+Ch] [xbp-4h] BYREF

  actFlg = 0;
  BattleBuffData__getMaxTurnBuffBase(this, act, checkIndividualities, checkCnt, &actFlg, 0, v5);
  return actFlg;
}


void __fastcall BattleBuffData__recBuff(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  if ( !buffData )
    sub_1B00F28(this, 0LL);
  buffData->fields.isAct = 1;
}


System_Collections_Generic_List_BattleBuffData_BuffData__o *__fastcall BattleBuffData__removeLinkageBuff(
        BattleBuffData_o *this,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *endBuffs,
        bool isCreateDummy,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x21
  bool v10; // w22
  const MethodInfo *v11; // x4
  System_Collections_Generic_IEnumerable_T__o *v12; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x4
  System_Collections_Generic_IEnumerable_T__o *v15; // x0

  if ( (byte_48E48E6 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, endBuffs);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v7);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v8);
    byte_48E48E6 = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v10 = isCreateDummy;
  v12 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__RemoveLinkageBuff(this, endBuffs, v10, 1, v11);
  if ( !v9 )
    sub_1B00F28(v12, v13);
  System_Collections_Generic_List_object___AddRange(
    v9,
    v12,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  v15 = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__RemoveLinkageBuff(this, endBuffs, v10, 0, v14);
  System_Collections_Generic_List_object___AddRange(
    v9,
    v15,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  return (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v9;
}


void __fastcall BattleBuffData__setSaveData(
        BattleBuffData_o *this,
        BattleBuffData_SaveData_o *sv,
        const MethodInfo *method)
{
  BattleBuffData_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *passiveList; // x21
  System_Action_object__o *v10; // x22
  System_Collections_Generic_List_object__o *activeList; // x21
  System_Action_object__o *v12; // x22

  v4 = this;
  if ( (byte_48E490F & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_BattleBuffData_BuffData__TypeInfo, sv);
    sub_1B00CCC(&Method_BattleBuffData__setSaveData_b__136_0__, v5);
    sub_1B00CCC(&Method_BattleBuffData__setSaveData_b__136_1__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v7);
    this = (BattleBuffData_o *)sub_1B00CCC(
                                 &Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__,
                                 v8);
    byte_48E490F = 1;
  }
  if ( !sv )
    goto LABEL_9;
  this = (BattleBuffData_o *)v4->fields.passiveList;
  if ( !this )
    goto LABEL_9;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)sv->fields.passive,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  this = (BattleBuffData_o *)v4->fields.activeList;
  if ( !this )
    goto LABEL_9;
  System_Collections_Generic_List_object___AddRange(
    (System_Collections_Generic_List_object__o *)this,
    (System_Collections_Generic_IEnumerable_T__o *)sv->fields.active,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  passiveList = (System_Collections_Generic_List_object__o *)v4->fields.passiveList;
  v10 = (System_Action_object__o *)sub_1B00F18(System_Action_BattleBuffData_BuffData__TypeInfo);
  System_Action_object____ctor(v10, (Il2CppObject *)v4, Method_BattleBuffData__setSaveData_b__136_0__, 0LL);
  if ( !passiveList
    || (System_Collections_Generic_List_object___ForEach(
          passiveList,
          (System_Action_T__o *)v10,
          (const MethodInfo_33C2410 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__),
        activeList = (System_Collections_Generic_List_object__o *)v4->fields.activeList,
        v12 = (System_Action_object__o *)sub_1B00F18(System_Action_BattleBuffData_BuffData__TypeInfo),
        System_Action_object____ctor(v12, (Il2CppObject *)v4, Method_BattleBuffData__setSaveData_b__136_1__, 0LL),
        !activeList) )
  {
LABEL_9:
    sub_1B00F28(this, sv);
  }
  System_Collections_Generic_List_object___ForEach(
    activeList,
    (System_Action_T__o *)v12,
    (const MethodInfo_33C2410 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ForEach__);
  v4->fields.addBuffOrder = sv->fields.addBuffOrder;
}


void __fastcall BattleBuffData__set_IsNoDamage(BattleBuffData_o *this, bool value, const MethodInfo *method)
{
  this->fields.isNoDamage = value;
}


void __fastcall BattleBuffData__startBattleRec(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *passiveList; // x0
  _BOOL8 v7; // x0
  __int64 v8; // x1
  _BOOL8 v9; // x0
  __int64 v10; // x1
  System_Collections_Generic_List_Enumerator_object__o v11; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_48E4911 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__, v5);
    byte_48E4911 = 1;
  }
  memset(&i, 0, sizeof(i));
  passiveList = (System_Collections_Generic_List_object__o *)this->fields.passiveList;
  if ( !passiveList )
    goto LABEL_16;
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    passiveList,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  for ( i = v11; ; BYTE2(i.fields._current[2].klass) = 0 )
  {
    v7 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &i,
           (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v7 )
      break;
    if ( !i.fields._current )
      sub_1B00F28(v7, v8);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
  passiveList = (System_Collections_Generic_List_object__o *)this->fields.activeList;
  if ( !passiveList )
LABEL_16:
    sub_1B00F28(passiveList, method);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v11,
    passiveList,
    (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
  for ( i = v11; ; BYTE2(i.fields._current[2].klass) = 0 )
  {
    v9 = System_Collections_Generic_List_Enumerator_object___MoveNext(
           &i,
           (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    if ( !v9 )
      break;
    if ( !i.fields._current )
      sub_1B00F28(v9, v10);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
}


RemovedBuffInfo_o *__fastcall BattleBuffData__subBuffFromIndividualites(
        BattleBuffData_o *this,
        System_Int32_array *individualities,
        int32_t fromHead,
        int32_t fromTail,
        bool isCreateDummy,
        bool isForceSubState,
        const MethodInfo *method)
{
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  bool v20; // w28
  void *activeList; // x0
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v22; // x8
  int32_t size; // w2
  _DWORD *v24; // x23
  int v25; // w9
  System_Collections_Generic_List_object__o *v26; // x24
  const MethodInfo *v27; // x3
  int v28; // w8
  unsigned int v29; // w29
  int32_t v30; // w25
  bool v31; // w26
  char *v32; // x8
  __int64 v33; // x27
  int32_t v34; // w2
  int32_t v35; // w3
  struct System_Object_array *items; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  Il2CppClass **v39; // x0
  const MethodInfo *v40; // x2
  __int64 v41; // x8
  _QWORD *v42; // x9
  __int64 v43; // x10
  __int64 v44; // x8
  ServantStatusBattleListViewItem_o *v45; // x0
  int32_t v46; // w1
  Il2CppObject *v47; // x2
  const MethodInfo_33C2780 *v48; // x3
  const MethodInfo *v49; // x2
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v50; // x8
  Il2CppObject *v51; // x9
  struct BattleBuffData_BuffData_array *v52; // x10
  _QWORD *v53; // x11
  __int64 v54; // x12
  Il2CppClass **v55; // x0
  Il2CppObject *v56; // x1
  const MethodInfo_33C19D0 *v57; // x2
  BattleBuffData_o *v58; // x0
  const MethodInfo *v59; // x3
  const MethodInfo *v60; // x2
  RemovedBuffInfo_o *v61; // x20

  if ( (byte_48E48FF & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, individualities);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Clear__, v12);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__, v13);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Insert__, v14);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__, v15);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Reverse__, v16);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v17);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v18);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v19);
    byte_48E48FF = 1;
  }
  v20 = fromHead != 0 || fromTail < 1;
  if ( !v20 )
  {
    activeList = this->fields.activeList;
    if ( !activeList )
      goto LABEL_47;
    System_Collections_Generic_List_object___Reverse(
      (System_Collections_Generic_List_object__o *)activeList,
      (const MethodInfo_33C32FC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Reverse__);
    fromHead = fromTail;
  }
  activeList = this->fields.activeList;
  if ( !activeList )
    goto LABEL_47;
  activeList = System_Collections_Generic_List_object___ToArray(
                 (System_Collections_Generic_List_object__o *)activeList,
                 (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  v22 = this->fields.activeList;
  if ( !v22 )
    goto LABEL_47;
  size = v22->fields._size;
  v24 = activeList;
  v25 = v22->fields._version + 1;
  v22->fields._size = 0;
  v22->fields._version = v25;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v22->fields._items, 0, size, 0LL);
  v26 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v26,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  if ( !v24 )
    goto LABEL_47;
  v28 = v24[6];
  if ( v28 >= 1 )
  {
    v29 = 0;
    v30 = 0;
    v31 = isForceSubState;
    while ( 1 )
    {
      if ( v29 >= v28 )
        sub_1B00F30(activeList, individualities);
      v32 = (char *)&v24[2 * v29];
      v33 = *((_QWORD *)v32 + 4);
      if ( !v33 )
        goto LABEL_47;
      activeList = (void *)BattleBuffData_BuffData__RemoveBuffCond(
                             *((BattleBuffData_BuffData_o **)v32 + 4),
                             fromHead,
                             v30,
                             individualities,
                             v31,
                             0LL);
      if ( ((unsigned __int8)activeList & 1) == 0 )
        break;
      if ( !v26 )
        goto LABEL_47;
      items = v26->fields._items;
      v37 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
      ++v26->fields._version;
      if ( !items )
        goto LABEL_47;
      v38 = v26->fields._size;
      if ( (unsigned int)v38 >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v26,
          (Il2CppObject *)v33,
          *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v39 = &items->obj.klass + v38;
        v26->fields._size = v38 + 1;
        v39[4] = (Il2CppClass *)v33;
        sub_1B00C70((ServantStatusBattleListViewItem_o *)(v39 + 4), v33, v34, v35);
      }
      if ( *(_DWORD *)(v33 + 64) )
      {
        activeList = this->fields.auraBuffList;
        if ( !activeList )
          goto LABEL_47;
        if ( System_Collections_Generic_List_object___Contains(
               (System_Collections_Generic_List_object__o *)activeList,
               (Il2CppObject *)v33,
               (const MethodInfo_33C1D60 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__) )
        {
          activeList = this->fields.auraBuffList;
          if ( !activeList )
            goto LABEL_47;
          System_Collections_Generic_List_object___Remove(
            (System_Collections_Generic_List_object__o *)activeList,
            (Il2CppObject *)v33,
            (const MethodInfo_33C2EF8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Remove__);
        }
      }
      BattleBuffData__RemoveClassIconEffectBuff(this, (BattleBuffData_BuffData_o *)v33, v40);
      ++v30;
      if ( isCreateDummy )
      {
        activeList = BattleBuffData__CreateDummyBuff(
                       (BattleBuffData_o *)activeList,
                       (BattleBuffData_BuffData_o *)v33,
                       v49);
        v50 = this->fields.activeList;
        if ( !v50 )
          goto LABEL_47;
        v51 = (Il2CppObject *)activeList;
        if ( !v20 )
        {
          activeList = this->fields.activeList;
          v47 = v51;
          v48 = (const MethodInfo_33C2780 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Insert__;
          goto LABEL_41;
        }
        v52 = v50->fields._items;
        v53 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
        ++v50->fields._version;
        if ( !v52 )
          goto LABEL_47;
        v54 = v50->fields._size;
        if ( (unsigned int)v54 >= v52->max_length )
        {
          activeList = v50;
          v56 = v51;
          v57 = *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL);
          goto LABEL_43;
        }
        v55 = &v52->obj.klass + v54;
        v50->fields._size = v54 + 1;
        v55[4] = (Il2CppClass *)v51;
        v45 = (ServantStatusBattleListViewItem_o *)(v55 + 4);
        v46 = (int)v51;
LABEL_38:
        sub_1B00C70(v45, v46, v34, v35);
      }
LABEL_44:
      v28 = v24[6];
      if ( (int)++v29 >= v28 )
        goto LABEL_45;
    }
    activeList = this->fields.activeList;
    if ( !activeList )
      goto LABEL_47;
    if ( !v20 )
    {
      v47 = (Il2CppObject *)v33;
      v48 = (const MethodInfo_33C2780 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Insert__;
LABEL_41:
      System_Collections_Generic_List_object___Insert(
        (System_Collections_Generic_List_object__o *)activeList,
        0,
        v47,
        v48);
      goto LABEL_44;
    }
    v41 = *((_QWORD *)activeList + 2);
    v42 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
    ++*((_DWORD *)activeList + 7);
    if ( !v41 )
      goto LABEL_47;
    v43 = *((int *)activeList + 6);
    if ( (unsigned int)v43 >= *(_DWORD *)(v41 + 24) )
    {
      v56 = (Il2CppObject *)v33;
      v57 = *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL);
LABEL_43:
      System_Collections_Generic_List_object___AddWithResize(
        (System_Collections_Generic_List_object__o *)activeList,
        v56,
        v57);
      goto LABEL_44;
    }
    v44 = v41 + 8 * v43;
    *((_DWORD *)activeList + 6) = v43 + 1;
    *(_QWORD *)(v44 + 32) = v33;
    v45 = (ServantStatusBattleListViewItem_o *)(v44 + 32);
    v46 = v33;
    goto LABEL_38;
  }
LABEL_45:
  v58 = (BattleBuffData_o *)BattleBuffData__removeLinkageBuff(
                              this,
                              (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v26,
                              isCreateDummy,
                              v27);
  activeList = BattleBuffData__MakeRemoveBuffInfo(
                 v58,
                 (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v26,
                 (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v58,
                 v59);
  if ( !activeList )
LABEL_47:
    sub_1B00F28(activeList, individualities);
  v61 = (RemovedBuffInfo_o *)activeList;
  BattleBuffData__checkAndAddResumptionHpFromLossMaxHp(
    this,
    *((System_Collections_Generic_List_BattleBuffData_BuffData__o **)activeList + 2),
    v60);
  return v61;
}


void __fastcall BattleBuffData__syncLinkageBuffChangeParam(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_array *linkedArray,
        const MethodInfo *method)
{
  BattleBuffData_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  System_Collections_Generic_List_object__o *v12; // x21
  System_Collections_Generic_List_object__o *activeList; // x21
  System_Predicate_object__o *v14; // x22
  Il2CppObject *klass; // x23
  struct BattleBuffData___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  BattleBuffData___c_c *v19; // x8
  System_Collections_Generic_List_object__o *passiveList; // x22
  BattleBuffData_o *v21; // x21
  System_Predicate_object__o *_9__75_1; // x23
  Il2CppObject *v23; // x24
  struct BattleBuffData___c_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_Object_array *v27; // x0
  __int64 v28; // x1
  const MethodInfo *v29; // x4
  __int64 v30; // x8
  BattleBuffData_BuffData_array *v31; // x22
  unsigned __int64 v32; // x24
  BattleBuffData_BuffData_o *v33; // x23
  const MethodInfo *v34; // x4
  System_Collections_Generic_List_BattleBuffData_BuffData__o *reflectedBuffList; // [xsp+8h] [xbp-58h] BYREF

  v4 = this;
  if ( (byte_48E48E8 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__, linkedArray);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor___74549024, v6);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v7);
    sub_1B00CCC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v8);
    sub_1B00CCC(&Method_BattleBuffData___c__syncLinkageBuffChangeParam_b__75_0__, v9);
    sub_1B00CCC(&Method_BattleBuffData___c__syncLinkageBuffChangeParam_b__75_1__, v10);
    this = (BattleBuffData_o *)sub_1B00CCC(&BattleBuffData___c_TypeInfo, v11);
    byte_48E48E8 = 1;
  }
  if ( !linkedArray )
    goto LABEL_27;
  if ( !*(_QWORD *)&linkedArray->max_length )
    return;
  v12 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor_54268612(
    v12,
    (System_Collections_Generic_IEnumerable_T__o *)linkedArray,
    (const MethodInfo_33C12C4 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor___74549024);
  this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  reflectedBuffList = (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v12;
  activeList = (System_Collections_Generic_List_object__o *)v4->fields.activeList;
  if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
  }
  v14 = *(System_Predicate_object__o **)&this[1].fields.passiveList[2].fields._size;
  if ( !v14 )
  {
    if ( !this[1].fields.addBuffOrder )
    {
      j_il2cpp_runtime_class_init_0(this);
      this = (BattleBuffData_o *)BattleBuffData___c_TypeInfo;
    }
    klass = (Il2CppObject *)this[1].fields.passiveList->klass;
    v14 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_object____ctor(v14, klass, Method_BattleBuffData___c__syncLinkageBuffChangeParam_b__75_0__, 0LL);
    static_fields = BattleBuffData___c_TypeInfo->static_fields;
    static_fields->__9__75_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)v14;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__75_0, (int32_t)v14, v17, v18);
  }
  if ( !activeList )
    goto LABEL_27;
  this = (BattleBuffData_o *)System_Collections_Generic_List_object___FindAll(
                               activeList,
                               (System_Predicate_T__o *)v14,
                               (const MethodInfo_33C20E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__);
  if ( !this )
    goto LABEL_27;
  this = (BattleBuffData_o *)System_Collections_Generic_List_object___ToArray(
                               (System_Collections_Generic_List_object__o *)this,
                               (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  v19 = BattleBuffData___c_TypeInfo;
  passiveList = (System_Collections_Generic_List_object__o *)v4->fields.passiveList;
  v21 = this;
  if ( !BattleBuffData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData___c_TypeInfo);
    v19 = BattleBuffData___c_TypeInfo;
  }
  _9__75_1 = (System_Predicate_object__o *)v19->static_fields->__9__75_1;
  if ( !_9__75_1 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19);
      v19 = BattleBuffData___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v19->static_fields->__9;
    _9__75_1 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
    System_Predicate_object____ctor(_9__75_1, v23, Method_BattleBuffData___c__syncLinkageBuffChangeParam_b__75_1__, 0LL);
    v24 = BattleBuffData___c_TypeInfo->static_fields;
    v24->__9__75_1 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__75_1;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v24->__9__75_1, (int32_t)_9__75_1, v25, v26);
  }
  if ( !passiveList
    || (this = (BattleBuffData_o *)System_Collections_Generic_List_object___FindAll(
                                     passiveList,
                                     (System_Predicate_T__o *)_9__75_1,
                                     (const MethodInfo_33C20E0 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__FindAll__)) == 0LL )
  {
LABEL_27:
    sub_1B00F28(this, linkedArray);
  }
  v27 = System_Collections_Generic_List_object___ToArray(
          (System_Collections_Generic_List_object__o *)this,
          (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  v30 = *(_QWORD *)&linkedArray->max_length;
  if ( (int)v30 >= 1 )
  {
    v31 = (BattleBuffData_BuffData_array *)v27;
    v32 = 0LL;
    do
    {
      if ( v32 >= (unsigned int)v30 )
        sub_1B00F30(v27, v28);
      v33 = linkedArray->m_Items[v32];
      BattleBuffData__syncLinkageBuffChangeParam_41010888(
        v4,
        v33,
        (BattleBuffData_BuffData_array *)v21,
        &reflectedBuffList,
        v29);
      BattleBuffData__syncLinkageBuffChangeParam_41010888(v4, v33, v31, &reflectedBuffList, v34);
      LODWORD(v30) = linkedArray->max_length;
      ++v32;
    }
    while ( (__int64)v32 < (int)v30 );
  }
}


void __fastcall BattleBuffData__syncLinkageBuffChangeParam_41010888(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *linkedBuff,
        BattleBuffData_BuffData_array *checkArray,
        System_Collections_Generic_List_BattleBuffData_BuffData__o **reflectedBuffList,
        const MethodInfo *method)
{
  BattleBuffData_o *v8; // x22
  __int64 v9; // x1
  __int64 v10; // x8
  unsigned __int64 v11; // x25
  BattleBuffData_BuffData_o *v12; // x23
  int v13; // w24
  System_Int32_array *linkageTargetIndividualty; // x24
  System_Int32_array *LinkageIdArray; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  __int64 v18; // x8
  _QWORD *v19; // x9
  __int64 passiveList_low; // x10
  __int64 v21; // x8
  const MethodInfo *v22; // x4

  v8 = this;
  if ( (byte_48E48E9 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, linkedBuff);
    this = (BattleBuffData_o *)sub_1B00CCC(
                                 &Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__,
                                 v9);
    byte_48E48E9 = 1;
  }
  if ( !checkArray )
    goto LABEL_21;
  v10 = *(_QWORD *)&checkArray->max_length;
  if ( (int)v10 >= 1 )
  {
    v11 = 0LL;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v10 )
        sub_1B00F30(this, linkedBuff);
      this = (BattleBuffData_o *)*reflectedBuffList;
      if ( !*reflectedBuffList )
        break;
      v12 = checkArray->m_Items[v11];
      this = (BattleBuffData_o *)System_Collections_Generic_List_object___Contains(
                                   (System_Collections_Generic_List_object__o *)this,
                                   (Il2CppObject *)v12,
                                   (const MethodInfo_33C1D60 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v12 )
          break;
        this = (BattleBuffData_o *)BattleBuffData_BuffData__IsFamilyBuff(v12, 0LL);
        if ( !linkedBuff )
          break;
        v13 = (int)this;
        this = (BattleBuffData_o *)BattleBuffData_BuffData__IsFamilyBuff(linkedBuff, 0LL);
        if ( ((v13 ^ (unsigned int)this) & 1) == 0 )
        {
          linkageTargetIndividualty = linkedBuff->fields.linkageTargetIndividualty;
          LinkageIdArray = BattleBuffData_BuffData__get_LinkageIdArray(v12, 0LL);
          this = (BattleBuffData_o *)Individuality__IsPartialMatchArray(linkageTargetIndividualty, LinkageIdArray, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            *(_QWORD *)&v12->fields.turn = *(_QWORD *)&linkedBuff->fields.turn;
            this = (BattleBuffData_o *)*reflectedBuffList;
            if ( !*reflectedBuffList )
              break;
            v18 = *(_QWORD *)&this->fields.resumptionHpFromLossMaxHp;
            v19 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
            ++HIDWORD(this->fields.passiveList);
            if ( !v18 )
              break;
            passiveList_low = SLODWORD(this->fields.passiveList);
            if ( (unsigned int)passiveList_low >= *(_DWORD *)(v18 + 24) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)this,
                (Il2CppObject *)v12,
                *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
            }
            else
            {
              v21 = v18 + 8 * passiveList_low;
              LODWORD(this->fields.passiveList) = passiveList_low + 1;
              *(_QWORD *)(v21 + 32) = v12;
              sub_1B00C70((ServantStatusBattleListViewItem_o *)(v21 + 32), (int32_t)v12, v16, v17);
            }
            BattleBuffData__syncLinkageBuffChangeParam_41010888(v8, v12, checkArray, reflectedBuffList, v22);
          }
        }
      }
      LODWORD(v10) = checkArray->max_length;
      if ( (__int64)++v11 >= (int)v10 )
        return;
    }
LABEL_21:
    sub_1B00F28(this, linkedBuff);
  }
}


BattleBuffData_BuffData_array *__fastcall BattleBuffData__turnProgressing(
        BattleBuffData_o *this,
        BattleLogic_o *logic,
        bool isEndEnemyTurn,
        int32_t svtUniqueId,
        const MethodInfo *method)
{
  BattleBuffData_o *v8; // x21
  struct BattleData_o *data; // x8
  int32_t v10; // w0
  const MethodInfo *v11; // x4

  v8 = this;
  if ( (byte_48E48E0 & 1) == 0 )
  {
    this = (BattleBuffData_o *)sub_1B00CCC(&BattleBuffData_BuffData___TypeInfo, logic);
    byte_48E48E0 = 1;
  }
  if ( !logic )
    goto LABEL_10;
  this = (BattleBuffData_o *)BattleLogic__get_BattleEvent(logic, 0LL);
  if ( !this )
    goto LABEL_10;
  this = (BattleBuffData_o *)((__int64 (__fastcall *)(BattleBuffData_o *, _QWORD, Il2CppClass *))this->klass[2]._1.castClass)(
                               this,
                               (unsigned int)svtUniqueId,
                               this->klass[2]._1.declaringType);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    data = logic->fields.data;
    if ( data )
    {
      this = (BattleBuffData_o *)data->fields.battleEvent;
      if ( this )
      {
        v10 = ((__int64 (__fastcall *)(BattleBuffData_o *, _QWORD, void *))this->klass[2]._1.typeMetadataHandle)(
                this,
                (unsigned int)svtUniqueId,
                this->klass[2]._1.interopData);
        return BattleBuffData__CommonTurnProgressing(v8, logic, isEndEnemyTurn, v10, v11);
      }
    }
LABEL_10:
    sub_1B00F28(this, logic);
  }
  return (BattleBuffData_BuffData_array *)sub_1B00D74(BattleBuffData_BuffData___TypeInfo, 0LL);
}


void __fastcall BattleBuffData__turnProgressingIncrease(BattleBuffData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleBuffData_o *PassiveList; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v7; // x8
  BattleBuffData_o *v8; // x20
  unsigned __int64 v9; // x21
  const MethodInfo *v10; // x2
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *v11; // x8
  BattleBuffData_o *v12; // x19
  unsigned __int64 v13; // x20

  PassiveList = (BattleBuffData_o *)BattleBuffData__getPassiveList(this, 1, v2);
  if ( !PassiveList )
    goto LABEL_13;
  v7 = PassiveList->fields.passiveList;
  v8 = PassiveList;
  if ( (int)v7 >= 1 )
  {
    v9 = 0LL;
    while ( v9 < (unsigned int)v7 )
    {
      BattleBuffData__turnProgressingIncreaseCalc(
        PassiveList,
        *((BattleBuffData_BuffData_o **)&v8->fields.activeList + v9),
        v6);
      LODWORD(v7) = v8->fields.passiveList;
      if ( (__int64)++v9 >= (int)v7 )
        goto LABEL_6;
    }
LABEL_12:
    sub_1B00F30(PassiveList, v5);
  }
LABEL_6:
  PassiveList = (BattleBuffData_o *)BattleBuffData__getActiveList(this, 1, v6);
  if ( !PassiveList )
LABEL_13:
    sub_1B00F28(PassiveList, v5);
  v11 = PassiveList->fields.passiveList;
  v12 = PassiveList;
  if ( (int)v11 >= 1 )
  {
    v13 = 0LL;
    while ( v13 < (unsigned int)v11 )
    {
      BattleBuffData__turnProgressingIncreaseCalc(
        PassiveList,
        *((BattleBuffData_BuffData_o **)&v12->fields.activeList + v13),
        v10);
      LODWORD(v11) = v12->fields.passiveList;
      if ( (__int64)++v13 >= (int)v11 )
        return;
    }
    goto LABEL_12;
  }
}


void __fastcall BattleBuffData__turnProgressingIncreaseCalc(
        BattleBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  int32_t paramAdd; // w9
  int32_t paramMax; // w8
  int32_t v5; // w10

  if ( !buff )
    sub_1B00F28(this, 0LL);
  paramAdd = buff->fields.paramAdd;
  if ( paramAdd )
  {
    paramMax = buff->fields.paramMax;
    v5 = buff->fields.param + paramAdd;
    buff->fields.param = v5;
    if ( paramAdd >= 1 )
    {
      if ( paramMax >= v5 )
        return;
      goto LABEL_5;
    }
    if ( paramMax > v5 )
LABEL_5:
      buff->fields.param = paramMax;
  }
}


void __fastcall BattleBuffData__updateAuraBuffList(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_List_object__o *auraBuffList; // x20
  System_Predicate_object__o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_48E48D3 & 1) == 0 )
  {
    sub_1B00CCC(&Method_BattleBuffData__updateAuraBuffList_b__39_0__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__, v3);
    sub_1B00CCC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v4);
    byte_48E48D3 = 1;
  }
  auraBuffList = (System_Collections_Generic_List_object__o *)this->fields.auraBuffList;
  v6 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
  System_Predicate_object____ctor(v6, (Il2CppObject *)this, Method_BattleBuffData__updateAuraBuffList_b__39_0__, 0LL);
  if ( !auraBuffList )
    sub_1B00F28(v7, v8);
  System_Collections_Generic_List_object___RemoveAll(
    auraBuffList,
    (System_Predicate_T__o *)v6,
    (const MethodInfo_33C302C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__RemoveAll__);
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleBuffData__useGuts(
        BattleBuffData_o *this,
        int32_t maxhp,
        System_String_o **motionName,
        BattleBuffData_CheckIndividualitiesData_array *checkIndividualitiesDataArray,
        const MethodInfo *method)
{
  __int64 v9; // x1
  _BYTE *BuffSuccessfulIndividual; // x0
  const MethodInfo *v11; // x1
  const MethodInfo *v12; // x6
  BattleBuffData_o *BuffList_41032464; // x0
  const MethodInfo *v14; // x2
  _BYTE *v15; // x21
  int32_t v16; // w8
  _BYTE *v17; // x22
  System_String_o *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w20
  bool v22; // w0
  unsigned __int64 v23; // x8

  if ( (byte_48E490B & 1) == 0 )
  {
    sub_1B00CCC(&BuffList_TypeInfo, *(_QWORD *)&maxhp);
    sub_1B00CCC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v9);
    byte_48E490B = 1;
  }
  *motionName = 0LL;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)motionName,
    0,
    (int32_t)motionName,
    (int32_t)checkIndividualitiesDataArray);
  if ( !checkIndividualitiesDataArray )
    goto LABEL_15;
  if ( !checkIndividualitiesDataArray->max_length )
    sub_1B00F30(BuffSuccessfulIndividual, v11);
  BuffList_41032464 = (BattleBuffData_o *)BattleBuffData__getBuffList_41032464(
                                            this,
                                            126,
                                            checkIndividualitiesDataArray->m_Items[0],
                                            1,
                                            1,
                                            0LL,
                                            v12);
  BuffSuccessfulIndividual = BattleBuffData__getBuffSuccessfulIndividual(
                               BuffList_41032464,
                               (BattleBuffData_BuffData_array *)BuffList_41032464,
                               v14);
  if ( !BuffSuccessfulIndividual )
    goto LABEL_15;
  v15 = BuffSuccessfulIndividual;
  if ( BuffSuccessfulIndividual[385] )
    return 0;
  BuffSuccessfulIndividual = BattleBuffData__get_buffMst(this, v11);
  if ( !BuffSuccessfulIndividual
    || (BuffSuccessfulIndividual = DataMasterBase_object__object__int___GetEntity(
                                     (DataMasterBase_TMaster__TEntity__PKType__o *)BuffSuccessfulIndividual,
                                     *((_DWORD *)v15 + 4),
                                     (const MethodInfo_2FE6A4C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__)) == 0LL )
  {
LABEL_15:
    sub_1B00F28(BuffSuccessfulIndividual, v11);
  }
  v17 = BuffSuccessfulIndividual;
  v18 = BuffEntity__GetMotionName((BuffEntity_o *)BuffSuccessfulIndividual, 0LL);
  *motionName = v18;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)motionName, (int32_t)v18, v19, v20);
  v21 = *((_DWORD *)v17 + 5);
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  v22 = BuffList__CheckType(104, v21, 0LL);
  v16 = *((_DWORD *)v15 + 7);
  if ( v22 )
  {
    v23 = (unsigned __int128)(v16 * (__int64)maxhp * (__int128)0x20C49BA5E353F7CFLL) >> 64;
    return (v23 >> 7) + (v23 >> 63);
  }
  return v16;
}


RemovedBuffInfo_o *__fastcall BattleBuffData__usedProgressing(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x20
  System_Collections_Generic_List_object__o *v10; // x21
  const MethodInfo *v11; // x2
  void *PassiveList; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  const MethodInfo *v16; // x1
  System_Collections_Generic_IEnumerable_T__o *ActiveArrayNoActAfterUsed; // x0
  const MethodInfo *v18; // x2
  int v19; // w8
  void *v20; // x21
  unsigned int v21; // w24
  BattleBuffData_BuffData_o *v22; // x22
  int32_t v23; // w23
  int32_t count; // w8
  bool v25; // vf
  int v26; // w8
  int32_t v27; // w3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0

  if ( (byte_48E48ED & 1) == 0 )
  {
    sub_1B00CCC(&BuffList_TypeInfo, method);
    sub_1B00CCC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v7);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v8);
    byte_48E48ED = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v10 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  PassiveList = BattleBuffData__getPassiveList(this, 1, v11);
  if ( !v10 )
    goto LABEL_28;
  System_Collections_Generic_List_object___AddRange(
    v10,
    (System_Collections_Generic_IEnumerable_T__o *)PassiveList,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v14);
  System_Collections_Generic_List_object___AddRange(
    v10,
    ActiveList,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  ActiveArrayNoActAfterUsed = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveArrayNoActAfterUsed(
                                                                               this,
                                                                               v16);
  System_Collections_Generic_List_object___AddRange(
    v10,
    ActiveArrayNoActAfterUsed,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  PassiveList = System_Collections_Generic_List_object___ToArray(
                  v10,
                  (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  if ( !PassiveList )
    goto LABEL_28;
  v19 = *((_DWORD *)PassiveList + 6);
  v20 = PassiveList;
  if ( v19 >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= v19 )
        sub_1B00F30(PassiveList, v13);
      v22 = (BattleBuffData_BuffData_o *)*((_QWORD *)v20 + (int)v21 + 4);
      if ( !v22 )
        break;
      if ( !v22->fields._isRemove && v22->fields.isDecide )
      {
        PassiveList = BattleBuffData__get_buffMst(this, v13);
        if ( !PassiveList )
          break;
        PassiveList = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)PassiveList,
                        v22->fields.buffId,
                        (const MethodInfo_2FE6A4C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        if ( !PassiveList )
          break;
        v23 = *((_DWORD *)PassiveList + 5);
        if ( !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        PassiveList = (void *)BuffList__CheckGutsType(v23, 0LL);
        if ( ((unsigned __int8)PassiveList & 1) == 0 )
        {
          if ( v22->fields.isUse )
          {
            count = v22->fields.count;
            v25 = __OFSUB__(count, 1);
            v26 = count - 1;
            if ( v26 < 0 == v25 )
            {
              v22->fields.count = v26;
              PassiveList = (void *)BattleBuffData_BuffData__IslinkageTarget(v22, 0LL);
              if ( ((unsigned __int8)PassiveList & 1) != 0 )
              {
                if ( !v9 )
                  break;
                items = v9->fields._items;
                v29 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
                ++v9->fields._version;
                if ( !items )
                  break;
                size = v9->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v9,
                    (Il2CppObject *)v22,
                    *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
                }
                else
                {
                  v31 = &items->obj.klass + size;
                  v9->fields._size = size + 1;
                  v31[4] = (Il2CppClass *)v22;
                  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v22, (int32_t)v18, v27);
                }
              }
            }
          }
          v22->fields.isUse = 0;
          v22->fields.isDecide = 0;
        }
      }
      v19 = *((_DWORD *)v20 + 6);
      if ( (int)++v21 >= v19 )
        return BattleBuffData__RemoveProgressingBuffList(
                 this,
                 (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v9,
                 v18);
    }
LABEL_28:
    sub_1B00F28(PassiveList, v13);
  }
  return BattleBuffData__RemoveProgressingBuffList(
           this,
           (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v9,
           v18);
}


void __fastcall BattleBuffData__usedProgressingGuts(BattleBuffData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_List_object__o *v9; // x20
  System_Collections_Generic_List_object__o *v10; // x21
  const MethodInfo *v11; // x2
  void *PassiveList; // x0
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  System_Collections_Generic_IEnumerable_T__o *ActiveList; // x0
  const MethodInfo *v16; // x2
  int v17; // w8
  void *v18; // x21
  unsigned int v19; // w24
  BattleBuffData_BuffData_o *v20; // x22
  int32_t v21; // w23
  int32_t count; // w8
  bool v23; // vf
  int v24; // w8
  int32_t v25; // w3
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  Il2CppClass **v29; // x0

  if ( (byte_48E48EF & 1) == 0 )
  {
    sub_1B00CCC(&BuffList_TypeInfo, method);
    sub_1B00CCC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v3);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__, v4);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__, v5);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__, v6);
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__, v7);
    sub_1B00CCC(&System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo, v8);
    byte_48E48EF = 1;
  }
  v9 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  v10 = (System_Collections_Generic_List_object__o *)sub_1B00F18(System_Collections_Generic_List_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_33C119C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData___ctor__);
  PassiveList = BattleBuffData__getPassiveList(this, 1, v11);
  if ( !v10 )
    goto LABEL_28;
  System_Collections_Generic_List_object___AddRange(
    v10,
    (System_Collections_Generic_IEnumerable_T__o *)PassiveList,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  ActiveList = (System_Collections_Generic_IEnumerable_T__o *)BattleBuffData__getActiveList(this, 1, v14);
  System_Collections_Generic_List_object___AddRange(
    v10,
    ActiveList,
    (const MethodInfo_33C1BDC *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__AddRange__);
  PassiveList = System_Collections_Generic_List_object___ToArray(
                  v10,
                  (const MethodInfo_33C3528 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
  if ( !PassiveList )
    goto LABEL_28;
  v17 = *((_DWORD *)PassiveList + 6);
  v18 = PassiveList;
  if ( v17 >= 1 )
  {
    v19 = 0;
    while ( 1 )
    {
      if ( v19 >= v17 )
        sub_1B00F30(PassiveList, v13);
      v20 = (BattleBuffData_BuffData_o *)*((_QWORD *)v18 + (int)v19 + 4);
      if ( !v20 )
        break;
      if ( !v20->fields._isRemove && v20->fields.isDecide )
      {
        PassiveList = BattleBuffData__get_buffMst(this, v13);
        if ( !PassiveList )
          break;
        PassiveList = DataMasterBase_object__object__int___GetEntity(
                        (DataMasterBase_TMaster__TEntity__PKType__o *)PassiveList,
                        v20->fields.buffId,
                        (const MethodInfo_2FE6A4C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
        if ( !PassiveList )
          break;
        v21 = *((_DWORD *)PassiveList + 5);
        if ( !BuffList_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
        PassiveList = (void *)BuffList__CheckGutsType(v21, 0LL);
        if ( ((unsigned __int8)PassiveList & 1) != 0 )
        {
          if ( v20->fields.isUse )
          {
            count = v20->fields.count;
            v23 = __OFSUB__(count, 1);
            v24 = count - 1;
            if ( v24 < 0 == v23 )
            {
              v20->fields.count = v24;
              PassiveList = (void *)BattleBuffData_BuffData__IslinkageTarget(v20, 0LL);
              if ( ((unsigned __int8)PassiveList & 1) != 0 )
              {
                if ( !v9 )
                  break;
                items = v9->fields._items;
                v27 = Method_System_Collections_Generic_List_BattleBuffData_BuffData__Add__;
                ++v9->fields._version;
                if ( !items )
                  break;
                size = v9->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_object___AddWithResize(
                    v9,
                    (Il2CppObject *)v20,
                    *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
                }
                else
                {
                  v29 = &items->obj.klass + size;
                  v9->fields._size = size + 1;
                  v29[4] = (Il2CppClass *)v20;
                  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v29 + 4), (int32_t)v20, (int32_t)v16, v25);
                }
              }
            }
          }
          v20->fields.isUse = 0;
          v20->fields.isDecide = 0;
        }
      }
      v17 = *((_DWORD *)v18 + 6);
      if ( (int)++v19 >= v17 )
        goto LABEL_27;
    }
LABEL_28:
    sub_1B00F28(PassiveList, v13);
  }
LABEL_27:
  BattleBuffData__RemoveProgressingBuffList(this, (System_Collections_Generic_List_BattleBuffData_BuffData__o *)v9, v16);
}


void __fastcall BattleBuffData_ActValueRequest___ctor(
        BattleBuffData_ActValueRequest_o *this,
        int32_t buffAction,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualitiesData,
        BuffInterface_o *buffIf,
        const MethodInfo *method)
{
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._BuffAction_k__BackingField = buffAction;
  this->fields._CheckIndividualitiesData_k__BackingField = checkIndividualitiesData;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._CheckIndividualitiesData_k__BackingField,
    (int32_t)checkIndividualitiesData,
    v9,
    v10);
  this->fields._BuffIf_k__BackingField = buffIf;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields._BuffIf_k__BackingField, (int32_t)buffIf, v11, v12);
}


BuffList_ActInfo_o *__fastcall BattleBuffData_ActValueRequest__get_ActInfo(
        BattleBuffData_ActValueRequest_o *this,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_actInfo; // x19
  BuffList_ActInfo_o *actInfo; // x21
  int32_t BuffAction_k__BackingField; // w20
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_48E4B76 & 1) == 0 )
  {
    sub_1B00CCC(&BuffList_TypeInfo, method);
    byte_48E4B76 = 1;
  }
  p_actInfo = (ServantStatusBattleListViewItem_o *)&this->fields.actInfo;
  actInfo = this->fields.actInfo;
  if ( !actInfo )
  {
    BuffAction_k__BackingField = this->fields._BuffAction_k__BackingField;
    if ( !BuffList_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
    actInfo = BuffList__getActInfo(BuffAction_k__BackingField, 0LL, 0LL);
    p_actInfo->klass = (ServantStatusBattleListViewItem_c *)actInfo;
    sub_1B00C70(p_actInfo, (int32_t)actInfo, v6, v7);
  }
  return actInfo;
}


int32_t __fastcall BattleBuffData_ActValueRequest__get_BuffAction(
        BattleBuffData_ActValueRequest_o *this,
        const MethodInfo *method)
{
  return this->fields._BuffAction_k__BackingField;
}


BuffInterface_o *__fastcall BattleBuffData_ActValueRequest__get_BuffIf(
        BattleBuffData_ActValueRequest_o *this,
        const MethodInfo *method)
{
  return this->fields._BuffIf_k__BackingField;
}


BattleBuffData_CheckIndividualitiesData_o *__fastcall BattleBuffData_ActValueRequest__get_CheckIndividualitiesData(
        BattleBuffData_ActValueRequest_o *this,
        const MethodInfo *method)
{
  return this->fields._CheckIndividualitiesData_k__BackingField;
}


void __fastcall BattleBuffData_ActValueResponse___ctor(
        BattleBuffData_ActValueResponse_o *this,
        BattleBuffData_ActValueRequest_o *actValueRequest,
        int32_t value,
        int32_t upperParam,
        int32_t lowerParam,
        System_String_o *text,
        const MethodInfo *method)
{
  BattleBuffData_ActValueResponse_o *v12; // x24
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3

  v12 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v12->fields.ActValueRequest = actValueRequest;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v12->fields, (int32_t)actValueRequest, v13, v14);
  v12->fields._Text_k__BackingField = text;
  v12 = (BattleBuffData_ActValueResponse_o *)((char *)v12 + 40);
  v12[-1].fields._LowerParam_k__BackingField = value;
  *(&v12[-1].fields._LowerParam_k__BackingField + 1) = upperParam;
  LODWORD(v12[-1].fields._Text_k__BackingField) = lowerParam;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)v12, (int32_t)text, v15, v16);
}


int32_t __fastcall BattleBuffData_ActValueResponse__GetClampedValue(
        BattleBuffData_ActValueResponse_o *this,
        const MethodInfo *method)
{
  BattleBuffData_ActValueRequest_o *ActValueRequest; // x0
  BuffList_ActInfo_o *v4; // x20
  int v5; // w21
  int32_t LowerParam_k__BackingField; // w22
  int32_t v7; // w21

  if ( (byte_48E4B77 & 1) == 0 )
  {
    sub_1B00CCC(&System_Math_TypeInfo, method);
    byte_48E4B77 = 1;
  }
  ActValueRequest = this->fields.ActValueRequest;
  if ( !ActValueRequest
    || (ActValueRequest = (BattleBuffData_ActValueRequest_o *)BattleBuffData_ActValueRequest__get_ActInfo(
                                                                ActValueRequest,
                                                                method)) == 0LL )
  {
    sub_1B00F28(ActValueRequest, method);
  }
  v4 = (BuffList_ActInfo_o *)ActValueRequest;
  v5 = LODWORD(ActValueRequest->fields.actInfo) + this->fields._Value_k__BackingField;
  if ( BuffList_ActInfo__isLowerLimit((BuffList_ActInfo_o *)ActValueRequest, 0LL) )
  {
    LowerParam_k__BackingField = this->fields._LowerParam_k__BackingField;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    v5 = System_Math__Max_61144256(LowerParam_k__BackingField, v5, 0LL);
  }
  v7 = v5 - v4->fields.baseValue;
  if ( !BuffList_ActInfo__isUpperLimit(v4, 0LL) )
    return v7;
  if ( this->fields._UpperParam_k__BackingField >= v7 )
    return v7;
  return this->fields._UpperParam_k__BackingField;
}


void __fastcall BattleBuffData_ActValueResponse__Merge(
        BattleBuffData_ActValueResponse_o *this,
        BattleBuffData_ActValueResponse_o *response,
        const MethodInfo *method)
{
  BattleBuffData_ActValueResponse_o *v4; // x20
  int32_t UpperParam_k__BackingField; // w21
  int32_t v6; // w22

  v4 = this;
  if ( (byte_48E4B78 & 1) == 0 )
  {
    this = (BattleBuffData_ActValueResponse_o *)sub_1B00CCC(&System_Math_TypeInfo, response);
    byte_48E4B78 = 1;
  }
  if ( !response )
    sub_1B00F28(this, response);
  UpperParam_k__BackingField = v4->fields._UpperParam_k__BackingField;
  v6 = response->fields._UpperParam_k__BackingField;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  v4->fields._UpperParam_k__BackingField = System_Math__Max_61144256(UpperParam_k__BackingField, v6, 0LL);
  v4->fields._LowerParam_k__BackingField = System_Math__Min_61144584(
                                             v4->fields._LowerParam_k__BackingField,
                                             response->fields._LowerParam_k__BackingField,
                                             0LL);
  v4->fields._Value_k__BackingField += response->fields._Value_k__BackingField;
}


int32_t __fastcall BattleBuffData_ActValueResponse__get_LowerParam(
        BattleBuffData_ActValueResponse_o *this,
        const MethodInfo *method)
{
  return this->fields._LowerParam_k__BackingField;
}


System_String_o *__fastcall BattleBuffData_ActValueResponse__get_Text(
        BattleBuffData_ActValueResponse_o *this,
        const MethodInfo *method)
{
  return this->fields._Text_k__BackingField;
}


int32_t __fastcall BattleBuffData_ActValueResponse__get_UpperParam(
        BattleBuffData_ActValueResponse_o *this,
        const MethodInfo *method)
{
  return this->fields._UpperParam_k__BackingField;
}


int32_t __fastcall BattleBuffData_ActValueResponse__get_Value(
        BattleBuffData_ActValueResponse_o *this,
        const MethodInfo *method)
{
  return this->fields._Value_k__BackingField;
}


void __fastcall BattleBuffData_ActValueResponse__set_LowerParam(
        BattleBuffData_ActValueResponse_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._LowerParam_k__BackingField = value;
}


void __fastcall BattleBuffData_ActValueResponse__set_UpperParam(
        BattleBuffData_ActValueResponse_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._UpperParam_k__BackingField = value;
}


void __fastcall BattleBuffData_ActValueResponse__set_Value(
        BattleBuffData_ActValueResponse_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._Value_k__BackingField = value;
}


void __fastcall BattleBuffData_BuffData___ctor(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  this->fields.userCommandCodeId = -1LL;
  this->fields.buffRate = 1000;
  this->fields.progressTurnCond = 1;
  *(_QWORD *)&this->fields.counterLv = 0x100000001LL;
  this->fields.masterCommandCodeId = -1;
  *(_QWORD *)&this->fields.commandAssistId = -1LL;
  this->fields.displayPriority = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData_BuffData__CheckCond(
        BattleBuffData_BuffData_o *this,
        BattleBuffData_o *svtBuff,
        BuffList_ActInfo_o *actInfo,
        BattleBuffData_CheckIndividualitiesData_o *checkIndividualities,
        bool isRect,
        const MethodInfo *method)
{
  const MethodInfo *v7; // [xsp+8h] [xbp-18h]
  int32_t plusMinus; // [xsp+1Ch] [xbp-4h] BYREF

  plusMinus = 0;
  if ( !checkIndividualities )
    sub_1B00F28(this, svtBuff);
  return BattleBuffData_BuffData__CheckCond_41313732(
           this,
           svtBuff,
           actInfo,
           checkIndividualities->fields._selfConcatSvtIndividualities_k__BackingField,
           checkIndividualities->fields._opponentConcatSvtIndividualities_k__BackingField,
           isRect,
           &plusMinus,
           checkIndividualities->fields._selfIndividuality_k__BackingField,
           checkIndividualities->fields._opponentIndividuality_k__BackingField,
           v7);
}


bool __fastcall BattleBuffData_BuffData__CheckCond_41313732(
        BattleBuffData_BuffData_o *this,
        BattleBuffData_o *svtBuff,
        BuffList_ActInfo_o *actInfo,
        System_Int32_array *selfIndv,
        System_Int32_array *opIndv,
        bool isRect,
        int32_t *plusMinus,
        System_Int32_array *selfIndvAll,
        System_Int32_array *opIndvAll,
        const MethodInfo *method)
{
  _BOOL8 isCommandCardBuff; // x0
  __int64 v19; // x1

  *plusMinus = 0;
  if ( this->fields.userCommandCodeId >= 1 && !this->fields.isActiveCC )
    return 0;
  isCommandCardBuff = BattleBuffData_BuffData__isCommandCardBuff(this, (const MethodInfo *)svtBuff);
  if ( isCommandCardBuff && !this->fields.isActiveCC )
    return 0;
  if ( this->fields.commandAssistId >= 1 && !this->fields.isActiveCA )
    return 0;
  if ( !svtBuff )
    sub_1B00F28(isCommandCardBuff, v19);
  return BattleBuffData__checkIndiviuality_41045640(
           svtBuff,
           actInfo,
           this,
           selfIndv,
           opIndv,
           selfIndvAll,
           opIndvAll,
           plusMinus,
           0LL)
      && BattleBuffData__checkBuffSuccessful(svtBuff, this, isRect, 0LL);
}


bool __fastcall BattleBuffData_BuffData__CheckCond_41313968(
        BattleBuffData_BuffData_o *this,
        BattleBuffData_o *svtBuff,
        BuffList_ActInfo_o *actInfo,
        System_Int32_array *selfIndv,
        System_Int32_array *opIndv,
        bool isRect,
        const MethodInfo *method)
{
  const MethodInfo *v8; // [xsp+8h] [xbp-18h]
  int32_t plusMinus; // [xsp+1Ch] [xbp-4h] BYREF

  plusMinus = 0;
  return BattleBuffData_BuffData__CheckCond_41313732(
           this,
           svtBuff,
           actInfo,
           selfIndv,
           opIndv,
           isRect,
           &plusMinus,
           0LL,
           0LL,
           v8);
}


bool __fastcall BattleBuffData_BuffData__CheckUnsubState(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  unsigned int state; // w8
  _BOOL4 v3; // w0

  state = this->fields.state;
  if ( (state & 0x80040) != 0 )
    LOBYTE(v3) = 1;
  else
    return (state >> 23) & 1;
  return v3;
}


bool __fastcall BattleBuffData_BuffData__CheckUnsubStateAi(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  return (BYTE2(this->fields.state) >> 3) & 1;
}


bool __fastcall BattleBuffData_BuffData__EqualBuffType(
        BattleBuffData_BuffData_o *this,
        BuffMaster_o *buffMst,
        int32_t targetType,
        const MethodInfo *method)
{
  if ( !buffMst )
    sub_1B00F28(this, 0LL);
  return BuffMaster__GetBuffType(buffMst, this->fields.buffId, -1, 0LL) == targetType;
}


bool __fastcall BattleBuffData_BuffData__FixedUse(
        BattleBuffData_BuffData_o *this,
        BattleBuffData_o *buffData,
        bool isUseBuff,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  BattleBuffData_IntervalData_o *intervalData; // x0
  _BOOL8 v7; // x0

  intervalData = this->fields.intervalData;
  if ( intervalData )
    LOBYTE(v7) = BattleBuffData_IntervalData__Use(intervalData, buffData, this, isUseBuff, v4);
  else
    return isUseBuff;
  return v7;
}


int32_t __fastcall BattleBuffData_BuffData__GetDisplayPriority(
        BattleBuffData_BuffData_o *this,
        const MethodInfo *method)
{
  int32_t displayPriority; // w20
  BuffEntity_o *Entity; // x0

  displayPriority = this->fields.displayPriority;
  if ( displayPriority == -1 )
  {
    if ( this->fields.passive )
      displayPriority = 1000;
    else
      displayPriority = 0;
    Entity = BattleBuffData_BuffData__get_Entity(this, method);
    if ( Entity )
      displayPriority = BuffEntity__GetDisplayPriority(Entity, displayPriority, 0LL);
    this->fields.displayPriority = displayPriority;
  }
  return displayPriority;
}


BuffDataExtension_GeneralParamAccessors_o *__fastcall BattleBuffData_BuffData__GetGeneralParamOwner(
        BattleBuffData_BuffData_o *this,
        const MethodInfo *method)
{
  BuffEntity_o *Entity; // x0
  __int64 v4; // x1
  BuffDataExtension_GeneralParamContinueFunction_o *v5; // x19

  if ( (byte_48E4B6B & 1) == 0 )
  {
    sub_1B00CCC(&BuffDataExtension_GeneralParamContinueFunction_TypeInfo, method);
    byte_48E4B6B = 1;
  }
  Entity = BattleBuffData_BuffData__get_Entity(this, method);
  if ( !Entity )
    sub_1B00F28(0LL, v4);
  if ( Entity->fields.type != 194 )
    return 0LL;
  v5 = (BuffDataExtension_GeneralParamContinueFunction_o *)sub_1B00F18(BuffDataExtension_GeneralParamContinueFunction_TypeInfo);
  BuffDataExtension_GeneralParamContinueFunction___ctor(v5, 0LL);
  return (BuffDataExtension_GeneralParamAccessors_o *)v5;
}


// local variable allocation has failed, the output may be wrong!
System_Int32_array *__fastcall BattleBuffData_BuffData__GetIndividualty(
        BattleBuffData_BuffData_o *this,
        bool IsIncludeIgnoreIndividuality,
        bool isIgnoreIndivUnreleaseable,
        bool isAiCheck,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  int32_t state; // w8
  struct System_Int32_array *Instance; // x0
  __int64 v15; // x1
  Il2CppObject *Entity; // x0
  Il2CppObject *v17; // x21
  struct System_Int32_array *klass; // x20
  struct System_Int32_array *addIndividualty; // x8
  Il2CppClass *v20; // x8

  if ( (byte_48E4B6D & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_BuffMaster___, IsIncludeIgnoreIndividuality);
    sub_1B00CCC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v9);
    sub_1B00CCC(&int___TypeInfo, v10);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    byte_48E4B6D = 1;
  }
  state = this->fields.state;
  if ( (state & 0x10000) != 0 && !IsIncludeIgnoreIndividuality )
    return (System_Int32_array *)sub_1B00D74(int___TypeInfo, 0LL);
  if ( isIgnoreIndivUnreleaseable )
  {
    if ( isAiCheck )
    {
      if ( (state & 0x80000) != 0 )
        return (System_Int32_array *)sub_1B00D74(int___TypeInfo, 0LL);
    }
    else if ( (state & 0x880040) != 0 )
    {
      return (System_Int32_array *)sub_1B00D74(int___TypeInfo, 0LL);
    }
  }
  if ( this->fields._isRemove )
    return (System_Int32_array *)sub_1B00D74(int___TypeInfo, 0LL);
  Instance = (struct System_Int32_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_23;
  Instance = (struct System_Int32_array *)DataManager__GetMasterData_object_(
                                            (DataManager_o *)Instance,
                                            (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( !Instance )
    goto LABEL_23;
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
             this->fields.buffId,
             (const MethodInfo_2FE6A4C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
  if ( !Entity )
    return (System_Int32_array *)sub_1B00D74(int___TypeInfo, 0LL);
  v17 = Entity;
  Instance = (struct System_Int32_array *)BasicHelper__IsNullOrEmpty(
                                            (System_Collections_ICollection_o *)this->fields.addIndividualty,
                                            0LL);
  klass = (struct System_Int32_array *)v17[3].klass;
  if ( ((unsigned __int8)Instance & 1) == 0 )
  {
    if ( klass )
    {
      addIndividualty = this->fields.addIndividualty;
      if ( addIndividualty )
      {
        Instance = (struct System_Int32_array *)sub_1B00D74(
                                                  int___TypeInfo,
                                                  addIndividualty->max_length + klass->max_length);
        if ( v17[3].klass )
        {
          klass = Instance;
          System_Array__CopyTo((System_Array_o *)v17[3].klass, (System_Array_o *)Instance, 0, 0LL);
          v20 = v17[3].klass;
          if ( v20 )
          {
            Instance = this->fields.addIndividualty;
            if ( Instance )
            {
              System_Array__CopyTo((System_Array_o *)Instance, (System_Array_o *)klass, (int32_t)v20->_1.namespaze, 0LL);
              return klass;
            }
          }
        }
      }
    }
LABEL_23:
    sub_1B00F28(Instance, v15);
  }
  return klass;
}


int32_t __fastcall BattleBuffData_BuffData__GetUniqueId(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  return this->fields.addOrder;
}


bool __fastcall BattleBuffData_BuffData__HasInterval(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  struct BattleBuffData_IntervalData_o *intervalData; // x8

  intervalData = this->fields.intervalData;
  if ( !intervalData )
    return 0;
  if ( intervalData->fields.intervalTurn <= 0 )
    return intervalData->fields.intervalCount > 0;
  return 1;
}


bool __fastcall BattleBuffData_BuffData__IsActiveCommandAssist(
        BattleBuffData_BuffData_o *this,
        const MethodInfo *method)
{
  return this->fields.commandAssistId >= 1 && this->fields.isActiveCA;
}


bool __fastcall BattleBuffData_BuffData__IsCommandAssistBuff(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  return this->fields.commandAssistId > 0;
}


bool __fastcall BattleBuffData_BuffData__IsCompletelyExpired(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  return !this->fields.turn && !this->fields._IsExtendingLife_k__BackingField;
}


bool __fastcall BattleBuffData_BuffData__IsFamilyBuff(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  return (BYTE2(this->fields.state) >> 6) & 1;
}


bool __fastcall BattleBuffData_BuffData__IsMineCommandCode(
        BattleBuffData_BuffData_o *this,
        int64_t id,
        const MethodInfo *method)
{
  return this->fields.userCommandCodeId == id;
}


bool __fastcall BattleBuffData_BuffData__IsPermanentSleep(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Master_object; // x0
  __int64 v6; // x1

  if ( (byte_48E4B72 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_BuffMaster___, method);
    sub_1B00CCC(&DataManager_TypeInfo, v3);
    sub_1B00CCC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v4);
    byte_48E4B72 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !Master_object
    || (Master_object = DataMasterBase_object__object__int___GetEntity(
                          (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                          this->fields.buffId,
                          (const MethodInfo_2FE6A4C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__)) == 0LL )
  {
    sub_1B00F28(Master_object, v6);
  }
  return HIDWORD(Master_object[1].klass) == 32 && BuffEntity__getDamageRelease((BuffEntity_o *)Master_object, 0LL) == -1;
}


bool __fastcall BattleBuffData_BuffData__IsUnSubStateWhenContinue(
        BattleBuffData_BuffData_o *this,
        const MethodInfo *method)
{
  return (HIBYTE(this->fields.state) >> 1) & 1;
}


bool __fastcall BattleBuffData_BuffData__IsWarBoardNotAttacked(
        BattleBuffData_BuffData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1

  if ( (byte_48E4B73 & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_BuffMaster___, method);
    sub_1B00CCC(&DataManager_TypeInfo, v3);
    byte_48E4B73 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !Master_object )
    sub_1B00F28(0LL, v5);
  return BuffMaster__GetBuffType((BuffMaster_o *)Master_object, this->fields.buffId, -1, 0LL) == 183;
}


bool __fastcall BattleBuffData_BuffData__IslinkageTarget(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  return this->fields.linkageTargetIndividualty != 0LL;
}


void __fastcall BattleBuffData_BuffData__RegisterGeneralParams(
        BattleBuffData_BuffData_o *this,
        DataVals_o *dataVals,
        const MethodInfo *method)
{
  struct BuffDataExtension_GeneralParamAccessors_o *GeneralParamOwner; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3
  struct BuffDataExtension_GeneralParamAccessors_o *v10; // x0
  struct System_Int32_array *v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  struct BuffDataExtension_GeneralParamAccessors_o *v14; // x0
  struct System_Int32_array *generalParams; // x1

  GeneralParamOwner = BattleBuffData_BuffData__GetGeneralParamOwner(this, (const MethodInfo *)dataVals);
  this->fields.generalParamOwner = GeneralParamOwner;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.generalParamOwner, (int32_t)GeneralParamOwner, v6, v7);
  v10 = this->fields.generalParamOwner;
  if ( v10 )
    v11 = (struct System_Int32_array *)((__int64 (__fastcall *)(struct BuffDataExtension_GeneralParamAccessors_o *, DataVals_o *, Il2CppMethodPointer))v10->klass->vtable._4_unknown.method)(
                                         v10,
                                         dataVals,
                                         v10->klass->vtable._5_get_NotExecFunctionIfKeepAlive.methodPtr);
  else
    v11 = 0LL;
  this->fields.generalParams = v11;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.generalParams, (int32_t)v11, v8, v9);
  v14 = this->fields.generalParamOwner;
  if ( v14 )
  {
    generalParams = this->fields.generalParams;
    v14->fields.generalParams = generalParams;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v14->fields, (int32_t)generalParams, v12, v13);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleBuffData_BuffData__RemoveBuffCond(
        BattleBuffData_BuffData_o *this,
        int32_t removeTo,
        int32_t removeCnt,
        System_Int32_array *individualities,
        bool isForceSubState,
        const MethodInfo *method)
{
  System_Int32_array *Individualty; // x0
  int32_t state; // w8
  bool result; // w0

  result = 0;
  if ( (!removeTo || removeCnt < removeTo) && (this->fields.state & 1) == 0 )
  {
    Individualty = BattleBuffData_BuffData__GetIndividualty(this, 0, 0, 0, (const MethodInfo *)isForceSubState);
    if ( Individuality__CheckIndividualities(Individualty, individualities, 0LL) )
    {
      state = this->fields.state;
      if ( (state & 0x10000) == 0
        && !this->fields._isRemove
        && (state & 0x800000) == 0
        && ((state & 0x80000) == 0 || isForceSubState) )
      {
        return 1;
      }
    }
  }
  return result;
}


void __fastcall BattleBuffData_BuffData__RevertUnused(
        BattleBuffData_BuffData_o *this,
        bool isUnused,
        const MethodInfo *method)
{
  struct BattleBuffData_IntervalData_o *intervalData; // x8

  this->fields.isUse = 0;
  this->fields.isDecide = 0;
  if ( isUnused )
  {
    intervalData = this->fields.intervalData;
    if ( intervalData )
      intervalData->fields.updateTiming = 0;
  }
}


void __fastcall BattleBuffData_BuffData__SetBuffNoActState(
        BattleBuffData_BuffData_o *this,
        BattleServantData_array *servantArray,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Func_object__bool__o *v7; // x21
  int v8; // w9

  if ( (byte_48E4B71 & 1) == 0 )
  {
    sub_1B00CCC(&Method_BasicHelper_Any_BattleServantData____74581224, servantArray);
    sub_1B00CCC(&Method_BattleBuffData_BuffData__SetBuffNoActState_b__142_0__, v5);
    sub_1B00CCC(&System_Func_BattleServantData__bool__TypeInfo, v6);
    byte_48E4B71 = 1;
  }
  v7 = (System_Func_object__bool__o *)sub_1B00F18(System_Func_BattleServantData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v7,
    (Il2CppObject *)this,
    Method_BattleBuffData_BuffData__SetBuffNoActState_b__142_0__,
    0LL);
  if ( BasicHelper__Any_object__47507500(
         (System_Object_array *)servantArray,
         (System_Func_T__bool__o *)v7,
         (const MethodInfo_2D4E82C *)Method_BasicHelper_Any_BattleServantData____74581224) )
  {
    v8 = 0;
  }
  else
  {
    v8 = 0x200000;
  }
  this->fields.state = this->fields.state & 0xFFDFFFFF | v8;
}


void __fastcall BattleBuffData_BuffData__SetIntervalOtherTiming(
        BattleBuffData_BuffData_o *this,
        const MethodInfo *method)
{
  struct BattleBuffData_IntervalData_o *intervalData; // x8

  intervalData = this->fields.intervalData;
  if ( intervalData )
    intervalData->fields.updateTiming = 2;
}


void __fastcall BattleBuffData_BuffData__TryExtendLife(
        BattleBuffData_BuffData_o *this,
        bool isEndEnemyTurn,
        const MethodInfo *method)
{
  if ( !isEndEnemyTurn && !this->fields.turn && this->fields.isDelayRemoveIfExpiredOnPlayerTurn )
    this->fields._IsExtendingLife_k__BackingField = 1;
}


bool __fastcall BattleBuffData_BuffData__UpdateInterval(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  BattleBuffData_IntervalData_o *intervalData; // x0

  intervalData = this->fields.intervalData;
  if ( intervalData )
    LOBYTE(intervalData) = BattleBuffData_IntervalData__Update(intervalData, this, v2);
  return (char)intervalData;
}


bool __fastcall BattleBuffData_BuffData__UpdateIntervalCurrent(
        BattleBuffData_BuffData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct BattleBuffData_IntervalData_o *intervalData; // x0

  intervalData = this->fields.intervalData;
  return intervalData
      && intervalData->fields.updateTiming == 1
      && BattleBuffData_IntervalData__Update(intervalData, this, v2);
}


bool __fastcall BattleBuffData_BuffData___SetBuffNoActState_b__142_0(
        BattleBuffData_BuffData_o *this,
        BattleServantData_o *svt,
        const MethodInfo *method)
{
  if ( !svt )
    sub_1B00F28(this, 0LL);
  return svt->fields.uniqueId == this->fields.onPartyUniqueId;
}


bool __fastcall BattleBuffData_BuffData__checkAct(
        BattleBuffData_BuffData_o *this,
        bool isCheckInterval,
        const MethodInfo *method)
{
  struct BattleBuffData_IntervalData_o *intervalData; // x8
  int32_t state; // w8

  if ( isCheckInterval )
  {
    intervalData = this->fields.intervalData;
    if ( intervalData )
    {
      if ( intervalData->fields.intervalTurn > 0 || intervalData->fields.intervalCount > 0 )
        return 0;
    }
  }
  state = this->fields.state;
  return (state & 0x24011) == 0 && (state & 0x200000) == 0;
}


bool __fastcall BattleBuffData_BuffData__checkProgressTurn(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  return (this->fields.state & 1) == 0 && this->fields.turn > 0;
}


int32_t __fastcall BattleBuffData_BuffData__checkRelationOrder(
        BattleBuffData_BuffData_o *this,
        BattleBuffData_BuffData_o *optBuff,
        bool isAttack,
        const MethodInfo *method)
{
  struct BattleBuffData_RelationOverwriteData_o *relationOverwrite; // x8
  struct BattleBuffData_RelationOverwriteData_o *v5; // x9
  __int64 v6; // x10
  int32_t v7; // w8

  relationOverwrite = this->fields.relationOverwrite;
  if ( !relationOverwrite )
  {
    if ( optBuff )
      return this->fields.addOrder - optBuff->fields.addOrder;
LABEL_11:
    sub_1B00F28(this, optBuff);
  }
  if ( !optBuff )
    goto LABEL_11;
  v5 = optBuff->fields.relationOverwrite;
  if ( !v5 )
    return this->fields.addOrder - optBuff->fields.addOrder;
  v6 = 24LL;
  if ( isAttack )
    v6 = 20LL;
  v7 = *(_DWORD *)((char *)&v5->klass + v6) - *(_DWORD *)((char *)&relationOverwrite->klass + v6);
  if ( !v7 )
    return this->fields.addOrder - optBuff->fields.addOrder;
  return v7;
}


bool __fastcall BattleBuffData_BuffData__checkState(
        BattleBuffData_BuffData_o *this,
        int32_t stateenum,
        const MethodInfo *method)
{
  char v3; // vf

  return !(((this->fields.state & stateenum) < 0) ^ v3 | ((this->fields.state & stateenum) == 0));
}


int32_t __fastcall BattleBuffData_BuffData__get_DispTurn(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  int32_t turn; // w8
  int v3; // w8

  turn = this->fields.turn;
  if ( turn + 1 >= 0 )
    v3 = turn + 1;
  else
    v3 = turn + 2;
  return v3 >> 1;
}


BuffEntity_o *__fastcall BattleBuffData_BuffData__get_Entity(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct BuffEntity_o *cachedEntity; // x20
  Il2CppObject *Master_object; // x0
  __int64 v7; // x1
  __int64 v8; // x8
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_48E4B6C & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_BuffMaster___, method);
    sub_1B00CCC(&DataManager_TypeInfo, v3);
    sub_1B00CCC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v4);
    byte_48E4B6C = 1;
  }
  cachedEntity = this->fields.cachedEntity;
  if ( !cachedEntity )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_BuffMaster___);
    if ( !Master_object )
      sub_1B00F28(0LL, v7);
    if ( this->fields._isRemove )
      v8 = 400LL;
    else
      v8 = 16LL;
    cachedEntity = (struct BuffEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                            (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                            *(_DWORD *)((char *)&this->klass + v8),
                                            (const MethodInfo_2FE6A4C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    this->fields.cachedEntity = cachedEntity;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.cachedEntity, (int32_t)cachedEntity, v9, v10);
  }
  return cachedEntity;
}


bool __fastcall BattleBuffData_BuffData__get_ExistChangeBgm(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  return this->fields.changeBgmData != 0LL;
}


bool __fastcall BattleBuffData_BuffData__get_ExistDelProc(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  return this->fields.delAfterProcType != 0;
}


System_Int32_array *__fastcall BattleBuffData_BuffData__get_FamilyLinkageIdArray(
        BattleBuffData_BuffData_o *this,
        const MethodInfo *method)
{
  if ( (this->fields.state & 0x400000) != 0 )
    return this->fields.familyLinkageIds;
  else
    return 0LL;
}


System_Int32_array *__fastcall BattleBuffData_BuffData__get_FamilyLinkageTargetIdArray(
        BattleBuffData_BuffData_o *this,
        const MethodInfo *method)
{
  if ( (this->fields.state & 0x400000) != 0 )
    return this->fields.linkageTargetIndividualty;
  else
    return 0LL;
}


BuffDataExtension_GeneralParamAccessors_o *__fastcall BattleBuffData_BuffData__get_GeneralParamOwner(
        BattleBuffData_BuffData_o *this,
        const MethodInfo *method)
{
  struct BuffDataExtension_GeneralParamAccessors_o **p_generalParamOwner; // x19
  const MethodInfo *v4; // x1
  struct BuffDataExtension_GeneralParamAccessors_o *GeneralParamOwner; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3
  struct BuffDataExtension_GeneralParamAccessors_o *v10; // x0
  struct System_Int32_array *generalParams; // x1

  p_generalParamOwner = &this->fields.generalParamOwner;
  if ( !this->fields.generalParamOwner
    && !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.generalParams, 0LL) )
  {
    GeneralParamOwner = BattleBuffData_BuffData__GetGeneralParamOwner(this, v4);
    this->fields.generalParamOwner = GeneralParamOwner;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)p_generalParamOwner, (int32_t)GeneralParamOwner, v6, v7);
    v10 = this->fields.generalParamOwner;
    if ( v10 )
    {
      generalParams = this->fields.generalParams;
      v10->fields.generalParams = generalParams;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v10->fields, (int32_t)generalParams, v8, v9);
    }
  }
  return *p_generalParamOwner;
}


bool __fastcall BattleBuffData_BuffData__get_IsExtendingLife(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  return this->fields._IsExtendingLife_k__BackingField;
}


System_Int32_array *__fastcall BattleBuffData_BuffData__get_LinkageIdArray(
        BattleBuffData_BuffData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 120LL;
  if ( (this->fields.state & 0x400000) != 0 )
    v2 = 296LL;
  return *(System_Int32_array **)((char *)&this->klass + v2);
}


int32_t __fastcall BattleBuffData_BuffData__get_RemoveDeadActorId(
        BattleBuffData_BuffData_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isRemoveFieldBuffActorDeath )
    return this->fields.actorId;
  else
    return -1;
}


bool __fastcall BattleBuffData_BuffData__get_isRemove(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  return this->fields._isRemove;
}


int32_t __fastcall BattleBuffData_BuffData__get_removeBuffId(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  return this->fields._removeBuffId;
}


bool __fastcall BattleBuffData_BuffData__isActiveCommandCode(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  return this->fields.userCommandCodeId >= 1 && this->fields.isActiveCC;
}


bool __fastcall BattleBuffData_BuffData__isCommandCardBuff(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  _DWORD *klass; // x8
  ServantStatusBattleListViewItem_o *p_servantCardIdsIndexArray; // x19
  struct System_Int32_array *servantCardIdsIndexArray; // t1
  __int64 v6; // x0
  int32_t v7; // w2
  int32_t v8; // w3
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_48E4B70 & 1) == 0 )
  {
    sub_1B00CCC(&int___TypeInfo, method);
    byte_48E4B70 = 1;
  }
  servantCardIdsIndexArray = this->fields.servantCardIdsIndexArray;
  p_servantCardIdsIndexArray = (ServantStatusBattleListViewItem_o *)&this->fields.servantCardIdsIndexArray;
  klass = servantCardIdsIndexArray;
  if ( !servantCardIdsIndexArray )
  {
    v6 = sub_1B00D74(int___TypeInfo, 0LL);
    p_servantCardIdsIndexArray->klass = (ServantStatusBattleListViewItem_c *)v6;
    sub_1B00C70(p_servantCardIdsIndexArray, v6, v7, v8);
    klass = p_servantCardIdsIndexArray->klass;
    if ( !p_servantCardIdsIndexArray->klass )
      sub_1B00F28(v9, v10);
  }
  return klass[6] != 0;
}


bool __fastcall BattleBuffData_BuffData__isCommandCodeBuff(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  return this->fields.userCommandCodeId > 0;
}


bool __fastcall BattleBuffData_BuffData__isEffectBuff(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Entity; // x0
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_48E4B6E & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMasterData_BuffMaster___, method);
    sub_1B00CCC(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__, v3);
    sub_1B00CCC(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_48E4B6E = 1;
  }
  if ( this->fields._isRemove )
  {
    LOBYTE(Entity) = 0;
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_35FBBF0 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (Instance = DataManager__GetMasterData_object_(
                       (DataManager_o *)Instance,
                       (const MethodInfo_2D62C10 *)Method_DataManager_GetMasterData_BuffMaster___)) == 0LL )
    {
      sub_1B00F28(Instance, v7);
    }
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
               this->fields.buffId,
               (const MethodInfo_2FE6A4C *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    if ( Entity )
      LOBYTE(Entity) = SLODWORD(Entity[6].monitor) > 0;
  }
  return (char)Entity;
}


bool __fastcall BattleBuffData_BuffData__isEnableCommandCardBuff(
        BattleBuffData_BuffData_o *this,
        BattleCommandData_o *command,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x21
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x1
  System_Int32_array *servantCardIdsIndexArray; // x19
  System_Func_int__bool__o *v15; // x20

  if ( (byte_48E4B6F & 1) == 0 )
  {
    sub_1B00CCC(&Method_BasicHelper_Any_int____74581360, command);
    sub_1B00CCC(&System_Func_int__bool__TypeInfo, v5);
    sub_1B00CCC(&Method_BattleBuffData_BuffData___c__DisplayClass137_0__isEnableCommandCardBuff_b__0__, v6);
    sub_1B00CCC(&BattleBuffData_BuffData___c__DisplayClass137_0_TypeInfo, v7);
    byte_48E4B6F = 1;
  }
  v8 = sub_1B00F18(BattleBuffData_BuffData___c__DisplayClass137_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v8, 0LL);
  if ( !v8 )
    sub_1B00F28(v9, v10);
  *(_QWORD *)(v8 + 16) = command;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v8 + 16), (int32_t)command, v11, v12);
  if ( !BattleBuffData_BuffData__isCommandCardBuff(this, v13) )
    return 0;
  servantCardIdsIndexArray = this->fields.servantCardIdsIndexArray;
  v15 = (System_Func_int__bool__o *)sub_1B00F18(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(
    v15,
    (Il2CppObject *)v8,
    Method_BattleBuffData_BuffData___c__DisplayClass137_0__isEnableCommandCardBuff_b__0__,
    0LL);
  return BasicHelper__Any_int__47506688(
           servantCardIdsIndexArray,
           (System_Func_T__bool__o *)v15,
           (const MethodInfo_2D4E500 *)Method_BasicHelper_Any_int____74581360);
}


bool __fastcall BattleBuffData_BuffData__isParamAddIndividualiry(
        BattleBuffData_BuffData_o *this,
        const MethodInfo *method)
{
  struct System_Int32_array *paramAddSelfIndividuality; // x8
  struct System_Int32_array *paramAddOpIndividuality; // x8
  struct System_Int32_array *paramAddFieldIndividuality; // x8

  paramAddSelfIndividuality = this->fields.paramAddSelfIndividuality;
  if ( paramAddSelfIndividuality && *(_QWORD *)&paramAddSelfIndividuality->max_length )
    return 1;
  paramAddOpIndividuality = this->fields.paramAddOpIndividuality;
  if ( paramAddOpIndividuality )
  {
    if ( *(_QWORD *)&paramAddOpIndividuality->max_length )
      return 1;
  }
  paramAddFieldIndividuality = this->fields.paramAddFieldIndividuality;
  return paramAddFieldIndividuality && paramAddFieldIndividuality->max_length != 0;
}


bool __fastcall BattleBuffData_BuffData__isTargetSkill(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  struct System_Int32_array *targetSkill; // x8
  __int64 v3; // x9

  targetSkill = this->fields.targetSkill;
  if ( !targetSkill )
    return 0;
  v3 = *(_QWORD *)&targetSkill->max_length;
  if ( !v3 )
    return 0;
  if ( !(_DWORD)v3 )
    sub_1B00F30(this, method);
  return targetSkill->m_Items[1] != 0;
}


bool __fastcall BattleBuffData_BuffData__isValidHpRange(BattleBuffData_BuffData_o *this, const MethodInfo *method)
{
  return this->fields.ratioRangeHigh > 0 || this->fields.ratioRangeLow > 0;
}


void __fastcall BattleBuffData_BuffData__offState(
        BattleBuffData_BuffData_o *this,
        int32_t stateenum,
        const MethodInfo *method)
{
  this->fields.state &= ~stateenum;
}


void __fastcall BattleBuffData_BuffData__onState(
        BattleBuffData_BuffData_o *this,
        int32_t stateenum,
        const MethodInfo *method)
{
  this->fields.state |= stateenum;
}


void __fastcall BattleBuffData_BuffData__setShowState(
        BattleBuffData_BuffData_o *this,
        int32_t type,
        const MethodInfo *method)
{
  int v3; // w8

  v3 = type + 2;
  if ( (unsigned int)(type + 2) <= 5 && ((0x3Bu >> v3) & 1) != 0 )
    this->fields.state |= dword_BAB440[v3];
}


void __fastcall BattleBuffData_BuffData__set_IsExtendingLife(
        BattleBuffData_BuffData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsExtendingLife_k__BackingField = value;
}


void __fastcall BattleBuffData_BuffData__set_isRemove(
        BattleBuffData_BuffData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isRemove = value;
}


void __fastcall BattleBuffData_BuffData__set_removeBuffId(
        BattleBuffData_BuffData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._removeBuffId = value;
}


void __fastcall BattleBuffData_BuffData___c__DisplayClass137_0___ctor(
        BattleBuffData_BuffData___c__DisplayClass137_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData_BuffData___c__DisplayClass137_0___isEnableCommandCardBuff_b__0(
        BattleBuffData_BuffData___c__DisplayClass137_0_o *this,
        int32_t index,
        const MethodInfo *method)
{
  struct BattleCommandData_o *command; // x8

  command = this->fields.command;
  if ( !command )
    sub_1B00F28(this, index);
  return command->fields.servantCardIdsIndex == index;
}


void __fastcall BattleBuffData_ChangeBgmData___ctor(BattleBuffData_ChangeBgmData_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_48E4B5E & 1) == 0 )
  {
    sub_1B00CCC(&BuffUniqueValue_TypeInfo, method);
    byte_48E4B5E = 1;
  }
  this->fields.addBgmOrder = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v3 = (Il2CppObject *)sub_1B00F18(BuffUniqueValue_TypeInfo);
  System_Object___ctor(v3, 0LL);
  this->fields.uniqueVal = (struct BuffUniqueValue_o *)v3;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v3, v4, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleBuffData_ChangeBgmData___ctor_41307000(
        BattleBuffData_ChangeBgmData_o *this,
        int32_t actorId,
        BattleBuffData_BuffData_o *buff,
        DataVals_o *baseVal,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Il2CppObject *Master_object; // x0
  __int64 v13; // x1
  int32_t addOrder; // w23
  __int64 v15; // x22
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t Param; // w0
  struct System_String_o *BgmFileName; // x0
  struct System_String_o **p_bgmName; // x19
  int32_t v21; // w2
  int32_t v22; // w3

  if ( (byte_48E4B5F & 1) == 0 )
  {
    sub_1B00CCC(&BuffUniqueValue_TypeInfo, *(_QWORD *)&actorId);
    sub_1B00CCC(&Method_DataManager_GetMaster_BgmMaster___, v9);
    sub_1B00CCC(&DataManager_TypeInfo, v10);
    sub_1B00CCC(&StringLiteral_1/*""*/, v11);
    byte_48E4B5F = 1;
  }
  this->fields.addBgmOrder = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !buff )
    goto LABEL_9;
  addOrder = buff->fields.addOrder;
  v15 = sub_1B00F18(BuffUniqueValue_TypeInfo);
  System_Object___ctor((Il2CppObject *)v15, 0LL);
  *(_DWORD *)(v15 + 16) = addOrder;
  *(_DWORD *)(v15 + 20) = actorId;
  this->fields.uniqueVal = (struct BuffUniqueValue_o *)v15;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields, v15, v16, v17);
  if ( !baseVal )
    goto LABEL_9;
  Param = DataVals__GetParam(baseVal, 105, 0, 0LL);
  this->fields.bgmId = Param;
  this->fields.priority = DataVals__GetBgmPriority(baseVal, Param, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_object )
LABEL_9:
    sub_1B00F28(Master_object, v13);
  BgmFileName = BgmMaster__GetBgmFileName(
                  (BgmMaster_o *)Master_object,
                  this->fields.bgmId,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL);
  this->fields.bgmName = BgmFileName;
  p_bgmName = &this->fields.bgmName;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)p_bgmName, (int32_t)BgmFileName, v21, v22);
  *((_BYTE *)p_bgmName + 8) = DataVals__IsEqualsTo1(baseVal, 160, 0LL);
  *((_BYTE *)p_bgmName + 16) = DataVals__TryGetParam(baseVal, 163, (int32_t *)p_bgmName + 5, 0LL);
}


Generator_BGM_o *__fastcall BattleBuffData_ChangeBgmData__MakeBgmGenerator(
        BattleBuffData_ChangeBgmData_o *this,
        BattleData_o *data,
        const MethodInfo *method)
{
  Generator_BGMFromChangeBgmBuff_o *v5; // x21

  if ( (byte_48E4B60 & 1) == 0 )
  {
    sub_1B00CCC(&Generator_BGMFromChangeBgmBuff_TypeInfo, data);
    byte_48E4B60 = 1;
  }
  v5 = (Generator_BGMFromChangeBgmBuff_o *)sub_1B00F18(Generator_BGMFromChangeBgmBuff_TypeInfo);
  Generator_BGMFromChangeBgmBuff___ctor(v5, data, this, 0LL);
  return (Generator_BGM_o *)v5;
}


void __fastcall BattleBuffData_ChangeBgmData__UpdatePriorityForWaveStart(
        BattleBuffData_ChangeBgmData_o *this,
        const MethodInfo *method)
{
  if ( this->fields.isResetBgmPriorityAtWaveStart )
    this->fields.priority = this->fields.bgmPriorityResetAtWaveStart;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleBuffData_ChangeBgmData__UpdateUniqueVal(
        BattleBuffData_ChangeBgmData_o *this,
        int32_t buffUid,
        int32_t actorId,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_48E4B61 & 1) == 0 )
  {
    sub_1B00CCC(&BuffUniqueValue_TypeInfo, *(_QWORD *)&buffUid);
    byte_48E4B61 = 1;
  }
  v7 = sub_1B00F18(BuffUniqueValue_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = buffUid;
  *(_DWORD *)(v7 + 20) = actorId;
  this->fields.uniqueVal = (struct BuffUniqueValue_o *)v7;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields, v7, v8, v9);
}


void __fastcall BattleBuffData_CheckIndividualitiesData___ctor(
        BattleBuffData_CheckIndividualitiesData_o *this,
        BattleServantData_o *self,
        BattleServantData_o *opponent,
        BattleCommandData_o *commandSelf,
        BattleCommandData_o *commandOpponent,
        BuffInterface_o *buffIf,
        const MethodInfo *method)
{
  const MethodInfo *v13; // x5
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x3
  __int64 v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  struct BuffInterface_o *v19; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  BattleBuffData_CheckIndividualitiesData__InitializeIndividuality(
    this,
    self,
    opponent,
    commandSelf,
    commandOpponent,
    v13);
  BattleBuffData_CheckIndividualitiesData__InitializeSelfConcatSvtIndividualities(this, self, commandSelf, v14);
  BattleBuffData_CheckIndividualitiesData__InitializeOpponentConcatSvtIndividualities(
    this,
    opponent,
    commandOpponent,
    v15);
  if ( buffIf )
    v19 = buffIf;
  else
    v19 = (struct BuffInterface_o *)self;
  if ( !this )
    sub_1B00F28(v16, v19);
  this->fields._buffIf_k__BackingField = v19;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields._buffIf_k__BackingField, (int32_t)v19, v17, v18);
}


void __fastcall BattleBuffData_CheckIndividualitiesData___ctor_41311248(
        BattleBuffData_CheckIndividualitiesData_o *this,
        BattleServantData_o *self,
        BattleServantData_o *opponent,
        System_Int32_array *selfConcatSvtIndividualities,
        System_Int32_array *opponentConcatSvtIndividualities,
        BuffInterface_o *buffIf,
        const MethodInfo *method)
{
  const MethodInfo *v13; // x5
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  int32_t v19; // w3
  struct BuffInterface_o *v20; // x1
  __int64 v21; // x0

  System_Object___ctor((Il2CppObject *)this, 0LL);
  BattleBuffData_CheckIndividualitiesData__InitializeIndividuality(this, self, opponent, 0LL, 0LL, v13);
  if ( selfConcatSvtIndividualities )
  {
    this->fields._selfConcatSvtIndividualities_k__BackingField = selfConcatSvtIndividualities;
    sub_1B00C70(
      (ServantStatusBattleListViewItem_o *)&this->fields._selfConcatSvtIndividualities_k__BackingField,
      (int32_t)selfConcatSvtIndividualities,
      v14,
      (int32_t)v15);
  }
  else
  {
    BattleBuffData_CheckIndividualitiesData__InitializeSelfConcatSvtIndividualities(this, self, 0LL, v15);
  }
  if ( opponentConcatSvtIndividualities )
  {
    this->fields._opponentConcatSvtIndividualities_k__BackingField = opponentConcatSvtIndividualities;
    sub_1B00C70(
      (ServantStatusBattleListViewItem_o *)&this->fields._opponentConcatSvtIndividualities_k__BackingField,
      (int32_t)opponentConcatSvtIndividualities,
      v16,
      (int32_t)v17);
    if ( buffIf )
      v20 = buffIf;
    else
      v20 = (struct BuffInterface_o *)self;
  }
  else
  {
    BattleBuffData_CheckIndividualitiesData__InitializeOpponentConcatSvtIndividualities(this, opponent, 0LL, v17);
    if ( buffIf )
      v20 = buffIf;
    else
      v20 = (struct BuffInterface_o *)self;
    if ( !this )
      sub_1B00F28(v21, v20);
  }
  this->fields._buffIf_k__BackingField = v20;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields._buffIf_k__BackingField, (int32_t)v20, v18, v19);
}


BattleBuffData_CheckIndividualitiesData_o *__fastcall BattleBuffData_CheckIndividualitiesData__AddSelfIndividuality(
        BattleBuffData_CheckIndividualitiesData_o *this,
        System_Int32_array *individuality,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v6; // x3
  struct System_Int32_array *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  BattleBuffData_CheckIndividualitiesData_o *v10; // x0
  const MethodInfo *v11; // x3
  struct System_Int32_array *v12; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  BattleBuffData_CheckIndividualitiesData_o *v15; // x0
  const MethodInfo *v16; // x3
  struct System_Int32_array *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3

  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)individuality, 0LL);
  if ( !IsNullOrEmpty )
  {
    v7 = BattleBuffData_CheckIndividualitiesData__GetConcatIndividuality(
           (BattleBuffData_CheckIndividualitiesData_o *)IsNullOrEmpty,
           this->fields._selfIndividuality_k__BackingField,
           individuality,
           v6);
    this->fields._selfIndividuality_k__BackingField = v7;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v7, v8, v9);
    v12 = BattleBuffData_CheckIndividualitiesData__GetConcatIndividuality(
            v10,
            this->fields._selfIndividualityCanRelease_k__BackingField,
            individuality,
            v11);
    this->fields._selfIndividualityCanRelease_k__BackingField = v12;
    sub_1B00C70(
      (ServantStatusBattleListViewItem_o *)&this->fields._selfIndividualityCanRelease_k__BackingField,
      (int32_t)v12,
      v13,
      v14);
    v17 = BattleBuffData_CheckIndividualitiesData__GetConcatIndividuality(
            v15,
            this->fields._selfConcatSvtIndividualities_k__BackingField,
            individuality,
            v16);
    this->fields._selfConcatSvtIndividualities_k__BackingField = v17;
    sub_1B00C70(
      (ServantStatusBattleListViewItem_o *)&this->fields._selfConcatSvtIndividualities_k__BackingField,
      (int32_t)v17,
      v18,
      v19);
  }
  return this;
}


System_Int32_array *__fastcall BattleBuffData_CheckIndividualitiesData__GetConcatIndividuality(
        BattleBuffData_CheckIndividualitiesData_o *this,
        System_Int32_array *baseArray,
        System_Int32_array *addArray,
        const MethodInfo *method)
{
  __int64 v6; // x1
  System_Collections_Generic_IEnumerable_TSource__o *v8; // x0

  if ( (byte_48E4B6A & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Linq_Enumerable_Concat_int___, baseArray);
    sub_1B00CCC(&Method_System_Linq_Enumerable_ToArray_int___, v6);
    byte_48E4B6A = 1;
  }
  if ( BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)baseArray, 0LL) )
    return addArray;
  v8 = System_Linq_Enumerable__Concat_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)baseArray,
         (System_Collections_Generic_IEnumerable_TSource__o *)addArray,
         (const MethodInfo_2D7A08C *)Method_System_Linq_Enumerable_Concat_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v8,
           (const MethodInfo_2D97524 *)Method_System_Linq_Enumerable_ToArray_int___);
}


void __fastcall BattleBuffData_CheckIndividualitiesData__InitializeIndividuality(
        BattleBuffData_CheckIndividualitiesData_o *this,
        BattleServantData_o *self,
        BattleServantData_o *opponent,
        BattleCommandData_o *commandSelf,
        BattleCommandData_o *commandOpponent,
        const MethodInfo *method)
{
  __int64 v11; // x1
  struct System_Int32_array *ConcatServantAndBuffIndividualityies; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Int32_array *v17; // x1
  struct System_Int32_array *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  struct System_Int32_array *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  struct System_Int32_array *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  struct System_Int32_array *v27; // x0
  int32_t v28; // w2
  int32_t v29; // w3
  BattleServantData_o *v30; // x0
  BattleCommandData_o *v31; // x1
  struct System_Int32_array *v32; // x0
  int32_t v33; // w2
  int32_t v34; // w3

  if ( (byte_48E4B67 & 1) == 0 )
  {
    sub_1B00CCC(&BuffList_TypeInfo, self);
    sub_1B00CCC(&int___TypeInfo, v11);
    byte_48E4B67 = 1;
  }
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( !BuffList__IsConstantMasterIndvAddBuffActive(0LL) )
  {
    if ( self )
      ConcatServantAndBuffIndividualityies = BattleServantData__getConcatServantAndBuffIndividualityies(
                                               self,
                                               0LL,
                                               0,
                                               0,
                                               0,
                                               0LL);
    else
      ConcatServantAndBuffIndividualityies = (struct System_Int32_array *)sub_1B00D74(int___TypeInfo, 0LL);
    v17 = ConcatServantAndBuffIndividualityies;
    if ( this )
    {
      this->fields._selfIndividuality_k__BackingField = ConcatServantAndBuffIndividualityies;
      sub_1B00C70(
        (ServantStatusBattleListViewItem_o *)&this->fields,
        (int32_t)ConcatServantAndBuffIndividualityies,
        v15,
        v16);
      if ( opponent )
        v21 = BattleServantData__getConcatServantAndBuffIndividualityies(opponent, 0LL, 0, 0, 0, 0LL);
      else
        v21 = (struct System_Int32_array *)sub_1B00D74(int___TypeInfo, 0LL);
      this->fields._opponentIndividuality_k__BackingField = v21;
      sub_1B00C70(
        (ServantStatusBattleListViewItem_o *)&this->fields._opponentIndividuality_k__BackingField,
        (int32_t)v21,
        v22,
        v23);
      if ( self )
        v27 = BattleServantData__getConcatServantAndBuffIndividualityies(self, 0LL, 0, 1, 0, 0LL);
      else
        v27 = (struct System_Int32_array *)sub_1B00D74(int___TypeInfo, 0LL);
      this->fields._selfIndividualityCanRelease_k__BackingField = v27;
      sub_1B00C70(
        (ServantStatusBattleListViewItem_o *)&this->fields._selfIndividualityCanRelease_k__BackingField,
        (int32_t)v27,
        v28,
        v29);
      if ( opponent )
      {
        v30 = opponent;
        v31 = 0LL;
        goto LABEL_30;
      }
LABEL_31:
      v32 = (struct System_Int32_array *)sub_1B00D74(int___TypeInfo, 0LL);
      goto LABEL_32;
    }
LABEL_33:
    sub_1B00F28(ConcatServantAndBuffIndividualityies, v17);
  }
  if ( self )
    ConcatServantAndBuffIndividualityies = BattleServantData__getConcatServantAndBuffIndividualityies(
                                             self,
                                             commandSelf,
                                             0,
                                             0,
                                             0,
                                             0LL);
  else
    ConcatServantAndBuffIndividualityies = (struct System_Int32_array *)sub_1B00D74(int___TypeInfo, 0LL);
  v17 = ConcatServantAndBuffIndividualityies;
  if ( !this )
    goto LABEL_33;
  this->fields._selfIndividuality_k__BackingField = ConcatServantAndBuffIndividualityies;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields,
    (int32_t)ConcatServantAndBuffIndividualityies,
    v13,
    v14);
  if ( opponent )
    v18 = BattleServantData__getConcatServantAndBuffIndividualityies(opponent, commandOpponent, 0, 0, 0, 0LL);
  else
    v18 = (struct System_Int32_array *)sub_1B00D74(int___TypeInfo, 0LL);
  this->fields._opponentIndividuality_k__BackingField = v18;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._opponentIndividuality_k__BackingField,
    (int32_t)v18,
    v19,
    v20);
  if ( self )
    v24 = BattleServantData__getConcatServantAndBuffIndividualityies(self, commandSelf, 0, 1, 0, 0LL);
  else
    v24 = (struct System_Int32_array *)sub_1B00D74(int___TypeInfo, 0LL);
  this->fields._selfIndividualityCanRelease_k__BackingField = v24;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._selfIndividualityCanRelease_k__BackingField,
    (int32_t)v24,
    v25,
    v26);
  if ( !opponent )
    goto LABEL_31;
  v30 = opponent;
  v31 = commandOpponent;
LABEL_30:
  v32 = BattleServantData__getConcatServantAndBuffIndividualityies(v30, v31, 0, 1, 0, 0LL);
LABEL_32:
  this->fields._opponentIndividualityCanRemove_k__BackingField = v32;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._opponentIndividualityCanRemove_k__BackingField,
    (int32_t)v32,
    v33,
    v34);
}


void __fastcall BattleBuffData_CheckIndividualitiesData__InitializeOpponentConcatSvtIndividualities(
        BattleBuffData_CheckIndividualitiesData_o *this,
        BattleServantData_o *opponent,
        BattleCommandData_o *commandOpponent,
        const MethodInfo *method)
{
  System_Int32_array *IsConstantMasterIndvAddBuffActive; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  struct System_Int32_array *v10; // x1

  if ( (byte_48E4B69 & 1) == 0 )
  {
    sub_1B00CCC(&BuffList_TypeInfo, opponent);
    byte_48E4B69 = 1;
  }
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  IsConstantMasterIndvAddBuffActive = (System_Int32_array *)BuffList__IsConstantMasterIndvAddBuffActive(0LL);
  if ( ((unsigned __int8)IsConstantMasterIndvAddBuffActive & 1) != 0 )
  {
    if ( opponent )
    {
      IsConstantMasterIndvAddBuffActive = BattleServantData__getConcatSvtIndividualities(
                                            opponent,
                                            commandOpponent,
                                            0LL,
                                            0LL);
      goto LABEL_10;
    }
LABEL_12:
    v10 = 0LL;
    if ( this )
      goto LABEL_11;
LABEL_13:
    sub_1B00F28(IsConstantMasterIndvAddBuffActive, v10);
  }
  if ( !opponent )
    goto LABEL_12;
  IsConstantMasterIndvAddBuffActive = BattleServantData__getIndividualities(opponent, commandOpponent, 0LL);
LABEL_10:
  v10 = IsConstantMasterIndvAddBuffActive;
  if ( !this )
    goto LABEL_13;
LABEL_11:
  this->fields._opponentConcatSvtIndividualities_k__BackingField = v10;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._opponentConcatSvtIndividualities_k__BackingField,
    (int32_t)v10,
    v8,
    v9);
}


void __fastcall BattleBuffData_CheckIndividualitiesData__InitializeSelfConcatSvtIndividualities(
        BattleBuffData_CheckIndividualitiesData_o *this,
        BattleServantData_o *self,
        BattleCommandData_o *commandSelf,
        const MethodInfo *method)
{
  System_Int32_array *IsConstantMasterIndvAddBuffActive; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  struct System_Int32_array *v10; // x1

  if ( (byte_48E4B68 & 1) == 0 )
  {
    sub_1B00CCC(&BuffList_TypeInfo, self);
    byte_48E4B68 = 1;
  }
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  IsConstantMasterIndvAddBuffActive = (System_Int32_array *)BuffList__IsConstantMasterIndvAddBuffActive(0LL);
  if ( ((unsigned __int8)IsConstantMasterIndvAddBuffActive & 1) != 0 )
  {
    if ( self )
    {
      IsConstantMasterIndvAddBuffActive = BattleServantData__getConcatSvtIndividualities(self, commandSelf, 0LL, 0LL);
      goto LABEL_10;
    }
LABEL_12:
    v10 = 0LL;
    if ( this )
      goto LABEL_11;
LABEL_13:
    sub_1B00F28(IsConstantMasterIndvAddBuffActive, v10);
  }
  if ( !self )
    goto LABEL_12;
  IsConstantMasterIndvAddBuffActive = BattleServantData__getIndividualities(self, commandSelf, 0LL);
LABEL_10:
  v10 = IsConstantMasterIndvAddBuffActive;
  if ( !this )
    goto LABEL_13;
LABEL_11:
  this->fields._selfConcatSvtIndividualities_k__BackingField = v10;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._selfConcatSvtIndividualities_k__BackingField,
    (int32_t)v10,
    v8,
    v9);
}


BuffInterface_o *__fastcall BattleBuffData_CheckIndividualitiesData__get_buffIf(
        BattleBuffData_CheckIndividualitiesData_o *this,
        const MethodInfo *method)
{
  return this->fields._buffIf_k__BackingField;
}


System_Int32_array *__fastcall BattleBuffData_CheckIndividualitiesData__get_opponentConcatSvtIndividualities(
        BattleBuffData_CheckIndividualitiesData_o *this,
        const MethodInfo *method)
{
  return this->fields._opponentConcatSvtIndividualities_k__BackingField;
}


System_Int32_array *__fastcall BattleBuffData_CheckIndividualitiesData__get_opponentIndividuality(
        BattleBuffData_CheckIndividualitiesData_o *this,
        const MethodInfo *method)
{
  return this->fields._opponentIndividuality_k__BackingField;
}


System_Int32_array *__fastcall BattleBuffData_CheckIndividualitiesData__get_opponentIndividualityCanRemove(
        BattleBuffData_CheckIndividualitiesData_o *this,
        const MethodInfo *method)
{
  return this->fields._opponentIndividualityCanRemove_k__BackingField;
}


System_Int32_array *__fastcall BattleBuffData_CheckIndividualitiesData__get_selfConcatSvtIndividualities(
        BattleBuffData_CheckIndividualitiesData_o *this,
        const MethodInfo *method)
{
  return this->fields._selfConcatSvtIndividualities_k__BackingField;
}


System_Int32_array *__fastcall BattleBuffData_CheckIndividualitiesData__get_selfIndividuality(
        BattleBuffData_CheckIndividualitiesData_o *this,
        const MethodInfo *method)
{
  return this->fields._selfIndividuality_k__BackingField;
}


System_Int32_array *__fastcall BattleBuffData_CheckIndividualitiesData__get_selfIndividualityCanRelease(
        BattleBuffData_CheckIndividualitiesData_o *this,
        const MethodInfo *method)
{
  return this->fields._selfIndividualityCanRelease_k__BackingField;
}


void __fastcall BattleBuffData_CheckIndividualitiesData__set_buffIf(
        BattleBuffData_CheckIndividualitiesData_o *this,
        BuffInterface_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._buffIf_k__BackingField = value;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._buffIf_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleBuffData_CheckIndividualitiesData__set_opponentConcatSvtIndividualities(
        BattleBuffData_CheckIndividualitiesData_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._opponentConcatSvtIndividualities_k__BackingField = value;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._opponentConcatSvtIndividualities_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleBuffData_CheckIndividualitiesData__set_opponentIndividuality(
        BattleBuffData_CheckIndividualitiesData_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._opponentIndividuality_k__BackingField = value;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._opponentIndividuality_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleBuffData_CheckIndividualitiesData__set_opponentIndividualityCanRemove(
        BattleBuffData_CheckIndividualitiesData_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._opponentIndividualityCanRemove_k__BackingField = value;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._opponentIndividualityCanRemove_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleBuffData_CheckIndividualitiesData__set_selfConcatSvtIndividualities(
        BattleBuffData_CheckIndividualitiesData_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._selfConcatSvtIndividualities_k__BackingField = value;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._selfConcatSvtIndividualities_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleBuffData_CheckIndividualitiesData__set_selfIndividuality(
        BattleBuffData_CheckIndividualitiesData_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._selfIndividuality_k__BackingField = value;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall BattleBuffData_CheckIndividualitiesData__set_selfIndividualityCanRelease(
        BattleBuffData_CheckIndividualitiesData_o *this,
        System_Int32_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._selfIndividualityCanRelease_k__BackingField = value;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._selfIndividualityCanRelease_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleBuffData_CheckInvokeBuff___ctor(
        BattleBuffData_CheckInvokeBuff_o *this,
        BattleServantData_o *selfSvt,
        BattleServantData_o *targetSvt,
        BuffList_ACTION_array *actions,
        const MethodInfo *method)
{
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3

  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields._SelfSvt_k__BackingField = selfSvt;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)selfSvt, v9, v10);
  this->fields._TargetSvt_k__BackingField = targetSvt;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._TargetSvt_k__BackingField,
    (int32_t)targetSvt,
    v11,
    v12);
  this->fields.checkActs = actions;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.checkActs, (int32_t)actions, v13, v14);
}


bool __fastcall BattleBuffData_CheckInvokeBuff__IsInvoke(
        BattleBuffData_CheckInvokeBuff_o *this,
        BattleBuffData_BuffData_o *buff,
        BattleCommandData_o *command,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x21
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  int32_t v16; // w2
  int32_t v17; // w3
  BattleServantData_o *SelfSvt_k__BackingField; // x22
  BattleServantData_o *TargetSvt_k__BackingField; // x23
  BattleBuffData_CheckIndividualitiesData_o *v20; // x24
  const MethodInfo *v21; // x6
  int32_t v22; // w2
  int32_t v23; // w3
  struct BuffList_ACTION_array *checkActs; // x19
  System_Func_T__TResult__o *v25; // x20

  if ( (byte_48E4B74 & 1) == 0 )
  {
    sub_1B00CCC(&Method_BasicHelper_Any_BuffList_ACTION___, buff);
    sub_1B00CCC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v7);
    sub_1B00CCC(&System_Func_BuffList_ACTION__bool__TypeInfo, v8);
    sub_1B00CCC(&Method_BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0__IsInvoke_b__0__, v9);
    sub_1B00CCC(&BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0_TypeInfo, v10);
    byte_48E4B74 = 1;
  }
  v11 = sub_1B00F18(BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  if ( !v11 )
    sub_1B00F28(v12, v13);
  *(_QWORD *)(v11 + 16) = buff;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v11 + 16), (int32_t)buff, v14, v15);
  *(_QWORD *)(v11 + 24) = this;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v11 + 24), (int32_t)this, v16, v17);
  SelfSvt_k__BackingField = this->fields._SelfSvt_k__BackingField;
  TargetSvt_k__BackingField = this->fields._TargetSvt_k__BackingField;
  v20 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B00F18(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(
    v20,
    SelfSvt_k__BackingField,
    TargetSvt_k__BackingField,
    command,
    0LL,
    0LL,
    v21);
  *(_QWORD *)(v11 + 32) = v20;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)(v11 + 32), (int32_t)v20, v22, v23);
  checkActs = this->fields.checkActs;
  v25 = (System_Func_T__TResult__o *)sub_1B00F18(System_Func_BuffList_ACTION__bool__TypeInfo);
  System_Func_Int32Enum__bool____ctor(
    v25,
    (Il2CppObject *)v11,
    Method_BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0__IsInvoke_b__0__,
    0LL);
  return BasicHelper__Any_Int32Enum__47507016(
           (System_Int32Enum_array *)checkActs,
           (System_Func_T__bool__o *)v25,
           (const MethodInfo_2D4E648 *)Method_BasicHelper_Any_BuffList_ACTION___);
}


BattleServantData_o *__fastcall BattleBuffData_CheckInvokeBuff__get_SelfSvt(
        BattleBuffData_CheckInvokeBuff_o *this,
        const MethodInfo *method)
{
  return this->fields._SelfSvt_k__BackingField;
}


BattleServantData_o *__fastcall BattleBuffData_CheckInvokeBuff__get_TargetSvt(
        BattleBuffData_CheckInvokeBuff_o *this,
        const MethodInfo *method)
{
  return this->fields._TargetSvt_k__BackingField;
}


void __fastcall BattleBuffData_CheckInvokeBuff__set_SelfSvt(
        BattleBuffData_CheckInvokeBuff_o *this,
        BattleServantData_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._SelfSvt_k__BackingField = value;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall BattleBuffData_CheckInvokeBuff__set_TargetSvt(
        BattleBuffData_CheckInvokeBuff_o *this,
        BattleServantData_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._TargetSvt_k__BackingField = value;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._TargetSvt_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0___ctor(
        BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0___IsInvoke_b__0(
        BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0_o *this,
        int32_t act,
        const MethodInfo *method)
{
  BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0_o *v4; // x19
  struct BattleBuffData_CheckInvokeBuff_o *_4__this; // x8
  struct BattleServantData_o *SelfSvt_k__BackingField; // x9
  BattleBuffData_BuffData_o *buff; // x21
  BattleBuffData_o *buffData; // x22
  BattleServantData_o *TargetSvt_k__BackingField; // x23
  const MethodInfo *v10; // x5

  v4 = this;
  if ( (byte_48E4B75 & 1) == 0 )
  {
    this = (BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0_o *)sub_1B00CCC(&BuffList_TypeInfo, *(_QWORD *)&act);
    byte_48E4B75 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_9;
  SelfSvt_k__BackingField = _4__this->fields._SelfSvt_k__BackingField;
  if ( !SelfSvt_k__BackingField )
    goto LABEL_9;
  buff = v4->fields.buff;
  buffData = SelfSvt_k__BackingField->fields.buffData;
  TargetSvt_k__BackingField = _4__this->fields._TargetSvt_k__BackingField;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  this = (BattleBuffData_CheckInvokeBuff___c__DisplayClass10_0_o *)BuffList__getActInfo(
                                                                     act,
                                                                     TargetSvt_k__BackingField,
                                                                     0LL);
  if ( !buff )
LABEL_9:
    sub_1B00F28(this, *(_QWORD *)&act);
  return BattleBuffData_BuffData__CheckCond(
           buff,
           buffData,
           (BuffList_ActInfo_o *)this,
           v4->fields.checkIndividualities,
           1,
           v10);
}


void __fastcall BattleBuffData_FieldAliveCondData___ctor(
        BattleBuffData_FieldAliveCondData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleBuffData_FieldChangeData___ctor(BattleBuffData_FieldChangeData_o *this, const MethodInfo *method)
{
  this->fields.buffUniqueId = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleBuffData_FieldChangeData___ctor_41306312(
        BattleBuffData_FieldChangeData_o *this,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  Il2CppObject *Master_object; // x0
  __int64 v8; // x1
  int32_t Param; // w0
  struct System_String_o *BgmFileName; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  struct System_Int32_array *ParamArray; // x0
  struct System_Int32_array **p_individuality; // x19
  int32_t v15; // w2
  int32_t v16; // w3

  if ( (byte_48E4B5C & 1) == 0 )
  {
    sub_1B00CCC(&Method_DataManager_GetMaster_BgmMaster___, baseVals);
    sub_1B00CCC(&DataManager_TypeInfo, v5);
    sub_1B00CCC(&StringLiteral_1/*""*/, v6);
    byte_48E4B5C = 1;
  }
  this->fields.buffUniqueId = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !baseVals )
    goto LABEL_8;
  this->fields.priority = DataVals__GetFieldPriority(baseVals, 0LL);
  this->fields.bgId = DataVals__GetParam(baseVals, 103, 0, 0LL);
  this->fields.bgType = DataVals__GetParam(baseVals, 104, 0, 0LL);
  Param = DataVals__GetParam(baseVals, 105, 0, 0LL);
  this->fields.bgmId = Param;
  this->fields.bgmPriority = DataVals__GetBgmPriority(baseVals, Param, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2D62BBC *)Method_DataManager_GetMaster_BgmMaster___);
  if ( !Master_object )
LABEL_8:
    sub_1B00F28(Master_object, v8);
  BgmFileName = BgmMaster__GetBgmFileName(
                  (BgmMaster_o *)Master_object,
                  this->fields.bgmId,
                  (System_String_o *)StringLiteral_1/*""*/,
                  0LL);
  this->fields.bgmName = BgmFileName;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.bgmName, (int32_t)BgmFileName, v11, v12);
  this->fields.isAllowSubBgmPlaying = DataVals__IsEqualsTo1(baseVals, 160, 0LL);
  ParamArray = DataVals__GetParamArray(baseVals, 102, 0LL);
  this->fields.individuality = ParamArray;
  p_individuality = &this->fields.individuality;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)p_individuality, (int32_t)ParamArray, v15, v16);
  *((_BYTE *)p_individuality + 8) = DataVals__GetParam(baseVals, 107, 0, 0LL) > 0;
  *((_BYTE *)p_individuality + 16) = DataVals__HasBgmPriorityInVals(baseVals, 0LL);
}


bool __fastcall BattleBuffData_FieldChangeData__get_HasBgmPriorityInVals(
        BattleBuffData_FieldChangeData_o *this,
        const MethodInfo *method)
{
  return this->fields._HasBgmPriorityInVals_k__BackingField;
}


BuffUniqueValue_o *__fastcall BattleBuffData_FieldChangeData__get_UniqueVal(
        BattleBuffData_FieldChangeData_o *this,
        const MethodInfo *method)
{
  int32_t buffUniqueId; // w21
  __int64 v4; // x19

  if ( (byte_48E4B5D & 1) == 0 )
  {
    sub_1B00CCC(&BuffUniqueValue_TypeInfo, method);
    byte_48E4B5D = 1;
  }
  buffUniqueId = this->fields.buffUniqueId;
  v4 = sub_1B00F18(BuffUniqueValue_TypeInfo);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = buffUniqueId;
  *(_DWORD *)(v4 + 20) = -1;
  return (BuffUniqueValue_o *)v4;
}


void __fastcall BattleBuffData_IntervalData___ctor(BattleBuffData_IntervalData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleBuffData_IntervalData___ctor_41307748(
        BattleBuffData_IntervalData_o *this,
        DataVals_o *baseVal,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !baseVal )
    sub_1B00F28(v5, v6);
  this->fields.baseTurn = DataVals__GetParam(baseVal, 130, 0, 0LL);
  this->fields.baseCount = DataVals__GetParam(baseVal, 131, 0, 0LL);
}


void __fastcall BattleBuffData_IntervalData__DecrementCount(
        BattleBuffData_IntervalData_o *this,
        const MethodInfo *method)
{
  this->fields.intervalCount = (this->fields.intervalCount - 1) & ~((this->fields.intervalCount - 1) >> 31);
}


void __fastcall BattleBuffData_IntervalData__DecrementTurn(
        BattleBuffData_IntervalData_o *this,
        const MethodInfo *method)
{
  this->fields.intervalTurn = (this->fields.intervalTurn - 1) & ~((this->fields.intervalTurn - 1) >> 31);
}


int32_t __fastcall BattleBuffData_IntervalData__GetIntervalVal(
        BattleBuffData_IntervalData_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x8

  v2 = 24LL;
  if ( this->fields.intervalTurn <= 0 )
    v2 = 28LL;
  return *(_DWORD *)((char *)&this->klass + v2);
}


void __fastcall BattleBuffData_IntervalData__Reset(BattleBuffData_IntervalData_o *this, const MethodInfo *method)
{
  this->fields.updateTiming = 0;
}


void __fastcall BattleBuffData_IntervalData__SetInterval(BattleBuffData_IntervalData_o *this, const MethodInfo *method)
{
  *(_QWORD *)&this->fields.intervalTurn = *(_QWORD *)&this->fields.baseTurn;
}


void __fastcall BattleBuffData_IntervalData__SetOtherTiming(
        BattleBuffData_IntervalData_o *this,
        const MethodInfo *method)
{
  this->fields.updateTiming = 2;
}


bool __fastcall BattleBuffData_IntervalData__Update(
        BattleBuffData_IntervalData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  int32_t updateTiming; // w8
  int32_t intervalCount; // w9

  updateTiming = this->fields.updateTiming;
  if ( updateTiming )
  {
    intervalCount = this->fields.intervalCount;
    if ( this->fields.intervalTurn > 0 || intervalCount >= 1 )
    {
      this->fields.intervalCount = (intervalCount - 1) & ~((intervalCount - 1) >> 31);
      if ( !buff )
        sub_1B00F28(this, 0LL);
      buff->fields.isUse = 0;
      buff->fields.isDecide = 0;
    }
    else
    {
      *(_QWORD *)&this->fields.intervalTurn = *(_QWORD *)&this->fields.baseTurn;
    }
    this->fields.updateTiming = 0;
  }
  return updateTiming != 0;
}


bool __fastcall BattleBuffData_IntervalData__UpdateCurrent(
        BattleBuffData_IntervalData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  return this->fields.updateTiming == 1 && BattleBuffData_IntervalData__Update(this, buff, method);
}


bool __fastcall BattleBuffData_IntervalData__Use(
        BattleBuffData_IntervalData_o *this,
        BattleBuffData_o *buffData,
        BattleBuffData_BuffData_o *buff,
        bool isUse,
        const MethodInfo *method)
{
  if ( !isUse )
    return 0;
  this->fields.updateTiming = 1;
  if ( !buffData )
    sub_1B00F28(this, 0LL);
  BattleBuffData__AddUpdateWaitIntervalBuff(buffData, buff, 0LL);
  return this->fields.intervalTurn <= 0 && this->fields.intervalCount < 1;
}


bool __fastcall BattleBuffData_IntervalData__get_HasInterval(
        BattleBuffData_IntervalData_o *this,
        const MethodInfo *method)
{
  return this->fields.intervalTurn > 0 || this->fields.intervalCount > 0;
}


bool __fastcall BattleBuffData_IntervalData__get_HasIntervalCount(
        BattleBuffData_IntervalData_o *this,
        const MethodInfo *method)
{
  return this->fields.intervalCount > 0;
}


bool __fastcall BattleBuffData_IntervalData__get_HasIntervalTurn(
        BattleBuffData_IntervalData_o *this,
        const MethodInfo *method)
{
  return this->fields.intervalTurn > 0;
}


void __fastcall BattleBuffData_ParamAdd___ctor(
        BattleBuffData_ParamAdd_o *this,
        System_Int32_array *selfIndv,
        System_Int32_array *opIndv,
        System_Int32_array *fieldIndv,
        int32_t value,
        int32_t maxValue,
        int32_t maxCount,
        const MethodInfo *method)
{
  BattleBuffData_ParamAdd_o *v14; // x25
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  int32_t v19; // w2
  int32_t v20; // w3

  v14 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v14->fields.selfIndv = selfIndv;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v14->fields, (int32_t)selfIndv, v15, v16);
  v14->fields.opIndv = opIndv;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v14->fields.opIndv, (int32_t)opIndv, v17, v18);
  v14->fields.fieldIndv = fieldIndv;
  v14 = (BattleBuffData_ParamAdd_o *)((char *)v14 + 32);
  sub_1B00C70((ServantStatusBattleListViewItem_o *)v14, (int32_t)fieldIndv, v19, v20);
  LODWORD(v14->monitor) = value;
  HIDWORD(v14->monitor) = maxValue;
  LODWORD(v14->fields.selfIndv) = maxCount;
}


void __fastcall BattleBuffData_ParamAdd___ctor_41317016(
        BattleBuffData_ParamAdd_o *this,
        DataVals_o *dataVals,
        const MethodInfo *method)
{
  System_Int32_array *ParamArray; // x21
  System_Int32_array *v6; // x22
  System_Int32_array *v7; // x23
  int32_t Param; // w24
  int32_t v9; // w25
  int32_t v10; // w6
  const MethodInfo *v11; // x7

  if ( !dataVals )
    sub_1B00F28(this, 0LL);
  ParamArray = DataVals__GetParamArray(dataVals, 151, 0LL);
  v6 = DataVals__GetParamArray(dataVals, 152, 0LL);
  v7 = DataVals__GetParamArray(dataVals, 153, 0LL);
  Param = DataVals__GetParam(dataVals, 154, 0, 0LL);
  v9 = DataVals__GetParam(dataVals, 155, 0, 0LL);
  v10 = DataVals__GetParam(dataVals, 156, 0, 0LL);
  BattleBuffData_ParamAdd___ctor(this, ParamArray, v6, v7, Param, v9, v10, v11);
}


void __fastcall BattleBuffData_ParamAdd___ctor_41317224(
        BattleBuffData_ParamAdd_o *this,
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x7

  if ( !buffData )
    sub_1B00F28(this, 0LL);
  BattleBuffData_ParamAdd___ctor(
    this,
    buffData->fields.paramAddSelfIndividuality,
    buffData->fields.paramAddOpIndividuality,
    buffData->fields.paramAddFieldIndividuality,
    buffData->fields.paramAddValue,
    buffData->fields.paramAddMax,
    buffData->fields.paramAddMaxCount,
    v3);
}


void __fastcall BattleBuffData_RelationOverwriteData___ctor(
        BattleBuffData_RelationOverwriteData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleBuffData_RelationOverwriteData__getPriority(
        BattleBuffData_RelationOverwriteData_o *this,
        bool isAttack,
        const MethodInfo *method)
{
  __int64 v3; // x8

  v3 = 24LL;
  if ( isAttack )
    v3 = 20LL;
  return *(_DWORD *)((char *)&this->klass + v3);
}


void __fastcall BattleBuffData_SaveData___ctor(BattleBuffData_SaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleBuffData_ShowBuffData___ctor(BattleBuffData_ShowBuffData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleBuffData_ShowBuffData___ctor_41305888(
        BattleBuffData_ShowBuffData_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t removeBuffId; // w8
  struct BattleBuffData_IntervalData_o *intervalData; // x1
  int32_t state; // w8
  bool v12; // w8
  unsigned int state_low; // w8
  __int64 v14; // d0
  int32_t addOrder; // w8
  struct BattleBuffData_IntervalData_o **p_IntervalData_k__BackingField; // x19
  const MethodInfo *v17; // x1

  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !buff )
    sub_1B00F28(v5, v6);
  this->fields.buffId = buff->fields.buffId;
  if ( buff->fields._isRemove )
  {
    removeBuffId = buff->fields._removeBuffId;
    this->fields.isRemove = 1;
    this->fields.buffId = removeBuffId;
  }
  this->fields.isPassive = buff->fields.passive;
  intervalData = buff->fields.intervalData;
  v12 = (!intervalData || intervalData->fields.intervalTurn <= 0 && intervalData->fields.intervalCount <= 0)
     && (state = buff->fields.state, (state & 0x24011) == 0)
     && (state & 0x200000) == 0;
  this->fields.isReady = v12;
  state_low = LOBYTE(buff->fields.state);
  this->fields.isBoost = (state_low & 2) != 0;
  v14 = *(_QWORD *)&buff->fields.turn;
  this->fields.isFrame = (state_low & 0x40) != 0;
  *(_QWORD *)&this->fields.turn = v14;
  this->fields.isHideParam = state_low >> 7;
  addOrder = buff->fields.addOrder;
  this->fields._IntervalData_k__BackingField = intervalData;
  p_IntervalData_k__BackingField = &this->fields._IntervalData_k__BackingField;
  *((_DWORD *)p_IntervalData_k__BackingField - 3) = addOrder;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)p_IntervalData_k__BackingField, (int32_t)intervalData, v7, v8);
  *((_DWORD *)p_IntervalData_k__BackingField + 2) = BattleBuffData_BuffData__GetDisplayPriority(buff, v17);
}


int32_t __fastcall BattleBuffData_ShowBuffData__get_DisplayPriority(
        BattleBuffData_ShowBuffData_o *this,
        const MethodInfo *method)
{
  return this->fields._DisplayPriority_k__BackingField;
}


BattleBuffData_IntervalData_o *__fastcall BattleBuffData_ShowBuffData__get_IntervalData(
        BattleBuffData_ShowBuffData_o *this,
        const MethodInfo *method)
{
  return this->fields._IntervalData_k__BackingField;
}


void __fastcall BattleBuffData_ShowBuffData__set_DisplayPriority(
        BattleBuffData_ShowBuffData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._DisplayPriority_k__BackingField = value;
}


void __fastcall BattleBuffData_ShowBuffData__set_IntervalData(
        BattleBuffData_ShowBuffData_o *this,
        BattleBuffData_IntervalData_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._IntervalData_k__BackingField = value;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields._IntervalData_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleBuffData_SkillRankChangeData___ctor(
        BattleBuffData_SkillRankChangeData_o *this,
        BattleBuffData_o *buffData,
        const MethodInfo *method)
{
  BattleBuffData_SkillRankChangeData_o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  v4 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v4->fields.buffData = buffData;
  v4 = (BattleBuffData_SkillRankChangeData_o *)((char *)v4 + 16);
  sub_1B00C70((ServantStatusBattleListViewItem_o *)v4, (int32_t)buffData, v5, v6);
  LODWORD(v4->monitor) = 0;
  BYTE4(v4->monitor) = 0;
}


int32_t __fastcall BattleBuffData_SkillRankChangeData__GetLogicRankUpCount(
        BattleBuffData_SkillRankChangeData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v8; // x21
  const MethodInfo *v9; // x6
  __int64 v10; // x0
  __int64 v11; // x1
  BattleBuffData_BuffData_array *BuffList_41032464; // x19
  const MethodInfo *v13; // x3
  BattleBuffData_SkillRankChangeData___c_c *v14; // x0
  System_Func_object__int__o *_9__11_0; // x20
  Il2CppObject *v16; // x21
  struct BattleBuffData_SkillRankChangeData___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_48E4B63 & 1) == 0 )
  {
    sub_1B00CCC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Sum_BattleBuffData_BuffData___, v3);
    sub_1B00CCC(&System_Func_BattleBuffData_BuffData__int__TypeInfo, v4);
    sub_1B00CCC(&Method_BattleBuffData_SkillRankChangeData___c__GetLogicRankUpCount_b__11_0__, v5);
    sub_1B00CCC(&BattleBuffData_SkillRankChangeData___c_TypeInfo, v6);
    byte_48E4B63 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B00F18(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, 0LL, 0LL, 0LL, 0LL, 0LL, v9);
  if ( !buffData )
    sub_1B00F28(v10, v11);
  BuffList_41032464 = BattleBuffData__getBuffList_41032464(buffData, 92, v8, 0, 0, 0LL, 0LL);
  BattleBuffData_SkillRankChangeData__RevertUnusedBuff(this, BuffList_41032464, 1, v13);
  v14 = BattleBuffData_SkillRankChangeData___c_TypeInfo;
  if ( !BattleBuffData_SkillRankChangeData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData_SkillRankChangeData___c_TypeInfo);
    v14 = BattleBuffData_SkillRankChangeData___c_TypeInfo;
  }
  _9__11_0 = (System_Func_object__int__o *)v14->static_fields->__9__11_0;
  if ( !_9__11_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = BattleBuffData_SkillRankChangeData___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v14->static_fields->__9;
    _9__11_0 = (System_Func_object__int__o *)sub_1B00F18(System_Func_BattleBuffData_BuffData__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__11_0,
      v16,
      Method_BattleBuffData_SkillRankChangeData___c__GetLogicRankUpCount_b__11_0__,
      0LL);
    static_fields = BattleBuffData_SkillRankChangeData___c_TypeInfo->static_fields;
    static_fields->__9__11_0 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__11_0;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__11_0, (int32_t)_9__11_0, v18, v19);
  }
  return System_Linq_Enumerable__Sum_object_(
           (System_Collections_Generic_IEnumerable_TSource__o *)BuffList_41032464,
           (System_Func_TSource__int__o *)_9__11_0,
           (const MethodInfo_2D96528 *)Method_System_Linq_Enumerable_Sum_BattleBuffData_BuffData___);
}


void __fastcall BattleBuffData_SkillRankChangeData__RevertUnusedBuff(
        BattleBuffData_SkillRankChangeData_o *this,
        BattleBuffData_BuffData_array *buffArray,
        bool isUnused,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x22
  BattleBuffData_o *buffData; // x0
  __int64 v12; // x1
  System_Action_object__o *v13; // x21

  if ( (byte_48E4B64 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_BattleBuffData_BuffData__TypeInfo, buffArray);
    sub_1B00CCC(&Method_BasicHelper_ForEach_BattleBuffData_BuffData___, v7);
    sub_1B00CCC(&Method_BattleBuffData_SkillRankChangeData___c__DisplayClass12_0__RevertUnusedBuff_b__0__, v8);
    sub_1B00CCC(&BattleBuffData_SkillRankChangeData___c__DisplayClass12_0_TypeInfo, v9);
    byte_48E4B64 = 1;
  }
  v10 = sub_1B00F18(BattleBuffData_SkillRankChangeData___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v10, 0LL);
  if ( !v10 )
    goto LABEL_8;
  *(_BYTE *)(v10 + 16) = isUnused;
  v13 = (System_Action_object__o *)sub_1B00F18(System_Action_BattleBuffData_BuffData__TypeInfo);
  System_Action_object____ctor(
    v13,
    (Il2CppObject *)v10,
    Method_BattleBuffData_SkillRankChangeData___c__DisplayClass12_0__RevertUnusedBuff_b__0__,
    0LL);
  BasicHelper__ForEach_object_(
    (System_Collections_Generic_IEnumerable_T__o *)buffArray,
    (System_Action_T__o *)v13,
    (const MethodInfo_2D50464 *)Method_BasicHelper_ForEach_BattleBuffData_BuffData___);
  if ( *(_BYTE *)(v10 + 16) )
  {
    buffData = this->fields.buffData;
    if ( buffData )
    {
      BattleBuffData__ResetTargetUseBuff(buffData, 154, 0, 0LL);
      return;
    }
LABEL_8:
    sub_1B00F28(buffData, v12);
  }
}


void __fastcall BattleBuffData_SkillRankChangeData__Update(
        BattleBuffData_SkillRankChangeData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v8; // x21
  const MethodInfo *v9; // x6
  __int64 v10; // x0
  __int64 v11; // x1
  BattleBuffData_BuffData_array *FixBuffArray; // x20
  const MethodInfo *v13; // x3
  BattleBuffData_SkillRankChangeData___c_c *v14; // x0
  System_Func_object__int__o *_9__10_0; // x21
  Il2CppObject *v16; // x22
  struct BattleBuffData_SkillRankChangeData___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_48E4B62 & 1) == 0 )
  {
    sub_1B00CCC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, method);
    sub_1B00CCC(&Method_System_Linq_Enumerable_Sum_BattleBuffData_BuffData___, v3);
    sub_1B00CCC(&System_Func_BattleBuffData_BuffData__int__TypeInfo, v4);
    sub_1B00CCC(&Method_BattleBuffData_SkillRankChangeData___c__Update_b__10_0__, v5);
    sub_1B00CCC(&BattleBuffData_SkillRankChangeData___c_TypeInfo, v6);
    byte_48E4B62 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B00F18(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, 0LL, 0LL, 0LL, 0LL, 0LL, v9);
  if ( !buffData )
    sub_1B00F28(v10, v11);
  FixBuffArray = BattleBuffData__GetFixBuffArray(buffData, 92, v8, 0, 0LL);
  BattleBuffData_SkillRankChangeData__RevertUnusedBuff(this, FixBuffArray, 1, v13);
  v14 = BattleBuffData_SkillRankChangeData___c_TypeInfo;
  if ( !BattleBuffData_SkillRankChangeData___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleBuffData_SkillRankChangeData___c_TypeInfo);
    v14 = BattleBuffData_SkillRankChangeData___c_TypeInfo;
  }
  _9__10_0 = (System_Func_object__int__o *)v14->static_fields->__9__10_0;
  if ( !_9__10_0 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = BattleBuffData_SkillRankChangeData___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v14->static_fields->__9;
    _9__10_0 = (System_Func_object__int__o *)sub_1B00F18(System_Func_BattleBuffData_BuffData__int__TypeInfo);
    System_Func_object__int____ctor(_9__10_0, v16, Method_BattleBuffData_SkillRankChangeData___c__Update_b__10_0__, 0LL);
    static_fields = BattleBuffData_SkillRankChangeData___c_TypeInfo->static_fields;
    static_fields->__9__10_0 = (struct System_Func_BattleBuffData_BuffData__int__o *)_9__10_0;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__10_0, (int32_t)_9__10_0, v18, v19);
  }
  this->fields._RankUpCount_k__BackingField = System_Linq_Enumerable__Sum_object_(
                                                (System_Collections_Generic_IEnumerable_TSource__o *)FixBuffArray,
                                                (System_Func_TSource__int__o *)_9__10_0,
                                                (const MethodInfo_2D96528 *)Method_System_Linq_Enumerable_Sum_BattleBuffData_BuffData___);
}


void __fastcall BattleBuffData_SkillRankChangeData__UpdateAddRightAfter(
        BattleBuffData_SkillRankChangeData_o *this,
        bool flg,
        const MethodInfo *method)
{
  this->fields._IsAddRightAfter_k__BackingField = flg;
}


void __fastcall BattleBuffData_SkillRankChangeData__UseBuff(
        BattleBuffData_SkillRankChangeData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  BattleBuffData_o *buffData; // x20
  BattleBuffData_CheckIndividualitiesData_o *v8; // x21
  const MethodInfo *v9; // x6
  BattleBuffData_o *FixBuffArray; // x0
  BattleBuffData_BuffData_array *v11; // x1
  System_Object_array *v12; // x20
  BattleBuffData_SkillRankChangeData___c_c *v13; // x0
  System_Predicate_object__o *_9__13_0; // x21
  Il2CppObject *v15; // x22
  struct BattleBuffData_SkillRankChangeData___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_Object_array *All_object; // x0
  const MethodInfo *v20; // x3

  if ( (byte_48E4B65 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Array_FindAll_BattleBuffData_BuffData___, method);
    sub_1B00CCC(&BattleBuffData_CheckIndividualitiesData_TypeInfo, v3);
    sub_1B00CCC(&System_Predicate_BattleBuffData_BuffData__TypeInfo, v4);
    sub_1B00CCC(&Method_BattleBuffData_SkillRankChangeData___c__UseBuff_b__13_0__, v5);
    sub_1B00CCC(&BattleBuffData_SkillRankChangeData___c_TypeInfo, v6);
    byte_48E4B65 = 1;
  }
  buffData = this->fields.buffData;
  v8 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B00F18(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v8, 0LL, 0LL, 0LL, 0LL, 0LL, v9);
  if ( !buffData )
    goto LABEL_18;
  FixBuffArray = (BattleBuffData_o *)BattleBuffData__GetFixBuffArray(buffData, 92, v8, 0, 0LL);
  if ( !FixBuffArray )
    goto LABEL_18;
  v12 = (System_Object_array *)FixBuffArray;
  if ( FixBuffArray->fields.passiveList )
  {
    v13 = BattleBuffData_SkillRankChangeData___c_TypeInfo;
    if ( !BattleBuffData_SkillRankChangeData___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleBuffData_SkillRankChangeData___c_TypeInfo);
      v13 = BattleBuffData_SkillRankChangeData___c_TypeInfo;
    }
    _9__13_0 = (System_Predicate_object__o *)v13->static_fields->__9__13_0;
    if ( !_9__13_0 )
    {
      if ( !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v13 = BattleBuffData_SkillRankChangeData___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v13->static_fields->__9;
      _9__13_0 = (System_Predicate_object__o *)sub_1B00F18(System_Predicate_BattleBuffData_BuffData__TypeInfo);
      System_Predicate_object____ctor(
        _9__13_0,
        v15,
        Method_BattleBuffData_SkillRankChangeData___c__UseBuff_b__13_0__,
        0LL);
      static_fields = BattleBuffData_SkillRankChangeData___c_TypeInfo->static_fields;
      static_fields->__9__13_0 = (struct System_Predicate_BattleBuffData_BuffData__o *)_9__13_0;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&static_fields->__9__13_0, (int32_t)_9__13_0, v17, v18);
    }
    All_object = System_Array__FindAll_object_(
                   v12,
                   (System_Predicate_T__o *)_9__13_0,
                   (const MethodInfo_2E461A8 *)Method_System_Array_FindAll_BattleBuffData_BuffData___);
    if ( !All_object )
      goto LABEL_16;
    v11 = (BattleBuffData_BuffData_array *)All_object;
    if ( !*(_QWORD *)&All_object->max_length )
      goto LABEL_16;
    FixBuffArray = this->fields.buffData;
    if ( FixBuffArray )
    {
      BattleBuffData__UsedProgressing(FixBuffArray, v11, 0LL);
LABEL_16:
      BattleBuffData_SkillRankChangeData__RevertUnusedBuff(this, (BattleBuffData_BuffData_array *)v12, 0, v20);
      return;
    }
LABEL_18:
    sub_1B00F28(FixBuffArray, v11);
  }
}


bool __fastcall BattleBuffData_SkillRankChangeData__get_IsAddRightAfter(
        BattleBuffData_SkillRankChangeData_o *this,
        const MethodInfo *method)
{
  return this->fields._IsAddRightAfter_k__BackingField;
}


int32_t __fastcall BattleBuffData_SkillRankChangeData__get_RankUpCount(
        BattleBuffData_SkillRankChangeData_o *this,
        const MethodInfo *method)
{
  return this->fields._RankUpCount_k__BackingField;
}


void __fastcall BattleBuffData_SkillRankChangeData__set_IsAddRightAfter(
        BattleBuffData_SkillRankChangeData_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsAddRightAfter_k__BackingField = value;
}


void __fastcall BattleBuffData_SkillRankChangeData__set_RankUpCount(
        BattleBuffData_SkillRankChangeData_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._RankUpCount_k__BackingField = value;
}


void __fastcall BattleBuffData_SkillRankChangeData___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48E4B66 & 1) == 0 )
  {
    sub_1B00CCC(&BattleBuffData_SkillRankChangeData___c_TypeInfo, v1);
    byte_48E4B66 = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(BattleBuffData_SkillRankChangeData___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleBuffData_SkillRankChangeData___c_TypeInfo->static_fields->__9 = (struct BattleBuffData_SkillRankChangeData___c_o *)v2;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)BattleBuffData_SkillRankChangeData___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall BattleBuffData_SkillRankChangeData___c___ctor(
        BattleBuffData_SkillRankChangeData___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleBuffData_SkillRankChangeData___c___GetLogicRankUpCount_b__11_0(
        BattleBuffData_SkillRankChangeData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1B00F28(this, 0LL);
  return buff->fields.param;
}


int32_t __fastcall BattleBuffData_SkillRankChangeData___c___Update_b__10_0(
        BattleBuffData_SkillRankChangeData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1B00F28(this, 0LL);
  return buff->fields.param;
}


bool __fastcall BattleBuffData_SkillRankChangeData___c___UseBuff_b__13_0(
        BattleBuffData_SkillRankChangeData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1B00F28(this, 0LL);
  return buff->fields.count > 0;
}


void __fastcall BattleBuffData_SkillRankChangeData___c__DisplayClass12_0___ctor(
        BattleBuffData_SkillRankChangeData___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleBuffData_SkillRankChangeData___c__DisplayClass12_0___RevertUnusedBuff_b__0(
        BattleBuffData_SkillRankChangeData___c__DisplayClass12_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  _BOOL4 isUnused; // w8
  struct BattleBuffData_IntervalData_o *intervalData; // x8

  if ( !buff )
    sub_1B00F28(this, 0LL);
  isUnused = this->fields.isUnused;
  buff->fields.isUse = 0;
  buff->fields.isDecide = 0;
  if ( isUnused )
  {
    intervalData = buff->fields.intervalData;
    if ( intervalData )
      intervalData->fields.updateTiming = 0;
  }
}


void __fastcall BattleBuffData__AllBuffEnumerable_d__244___ctor(
        BattleBuffData__AllBuffEnumerable_d__244_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall BattleBuffData__AllBuffEnumerable_d__244__MoveNext(
        BattleBuffData__AllBuffEnumerable_d__244_o *this,
        const MethodInfo *method)
{
  BattleBuffData__AllBuffEnumerable_d__244_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  int32_t _1__state; // w8
  struct BattleBuffData_o *_4__this; // x20
  System_Collections_Generic_List_object__o *activeList; // x0
  BattleBuffData__AllBuffEnumerable_d__244_o *v8; // x9
  __int128 v9; // q0
  ServantStatusBattleListViewItem_o *p__7__wrap1; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  const MethodInfo *v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  bool v16; // w8
  BattleBuffData__AllBuffEnumerable_d__244_o *v17; // x0
  struct BattleBuffData_BuffData_o *current; // x1
  bool result; // w0
  __int64 v20; // x0
  __int64 v21; // x1
  BattleBuffData__AllBuffEnumerable_d__244_o *v22; // x8
  System_Collections_Generic_List_object__o *passiveList; // x0
  BattleBuffData__AllBuffEnumerable_d__244_o *v24; // x9
  __int128 v25; // q0
  ServantStatusBattleListViewItem_o *v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  const MethodInfo *v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  bool v32; // w8
  BattleBuffData__AllBuffEnumerable_d__244_o *v33; // x0
  struct BattleBuffData_BuffData_o *v34; // x1
  BattleBuffData__AllBuffEnumerable_d__244_o *v35; // x8
  System_Collections_Generic_List_Enumerator_T__o v36; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_List_Enumerator_T__o v37; // [xsp+20h] [xbp-50h]
  BattleBuffData__AllBuffEnumerable_d__244_o **v38; // [xsp+48h] [xbp-28h]
  BattleBuffData__AllBuffEnumerable_d__244_o *v39; // [xsp+58h] [xbp-18h] BYREF

  v39 = this;
  v2 = this;
  if ( (byte_48E4B82 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__, method);
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__, v3);
    this = (BattleBuffData__AllBuffEnumerable_d__244_o *)sub_1B00CCC(
                                                           &Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__,
                                                           v4);
    byte_48E4B82 = 1;
  }
  v38 = &v39;
  _1__state = v2->fields.__1__state;
  if ( _1__state != 2 )
  {
    _4__this = v2->fields.__4__this;
    if ( _1__state != 1 )
    {
      if ( _1__state )
        return 0;
      v2->fields.__1__state = -1;
      if ( !_4__this )
        sub_1B00F28(this, method);
      activeList = (System_Collections_Generic_List_object__o *)_4__this->fields.activeList;
      if ( !activeList )
        sub_1B00F28(0LL, method);
      System_Collections_Generic_List_object___GetEnumerator(
        &v36,
        activeList,
        (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
      v8 = v39;
      v9 = *(_OWORD *)&v36.fields._list;
      p__7__wrap1 = (ServantStatusBattleListViewItem_o *)&v39->fields.__7__wrap1;
      v37 = v36;
      v39->fields.__7__wrap1.fields._current = (struct BattleBuffData_BuffData_o *)v36.fields._current;
      *(_OWORD *)&v8->fields.__7__wrap1.fields._list = v9;
      sub_1B00C70(p__7__wrap1, 0, v11, v12);
      v2 = v39;
    }
    v2->fields.__1__state = -3;
    v16 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            (System_Collections_Generic_List_Enumerator_object__o *)&v2->fields.__7__wrap1,
            (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    v17 = v39;
    if ( v16 )
    {
      current = v39->fields.__7__wrap1.fields._current;
      v39->fields.__2__current = current;
      sub_1B00C70((ServantStatusBattleListViewItem_o *)&v17->fields.__2__current, (int32_t)current, v14, v15);
      result = 1;
      v39->fields.__1__state = 1;
      return result;
    }
    BattleBuffData__AllBuffEnumerable_d__244____m__Finally1(v39, v13);
    v22 = v39;
    v39->fields.__7__wrap1.fields._list = 0LL;
    *(_QWORD *)&v22->fields.__7__wrap1.fields._index = 0LL;
    v22->fields.__7__wrap1.fields._current = 0LL;
    if ( !_4__this )
      sub_1B00F28(v20, v21);
    passiveList = (System_Collections_Generic_List_object__o *)_4__this->fields.passiveList;
    if ( !passiveList )
      sub_1B00F28(0LL, v21);
    System_Collections_Generic_List_object___GetEnumerator(
      &v36,
      passiveList,
      (const MethodInfo_33C24C8 *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    v24 = v39;
    v25 = *(_OWORD *)&v36.fields._list;
    v26 = (ServantStatusBattleListViewItem_o *)&v39->fields.__7__wrap1;
    v37 = v36;
    v39->fields.__7__wrap1.fields._current = (struct BattleBuffData_BuffData_o *)v36.fields._current;
    *(_OWORD *)&v24->fields.__7__wrap1.fields._list = v25;
    sub_1B00C70(v26, 0, v27, v28);
    v2 = v39;
  }
  v2->fields.__1__state = -4;
  v32 = System_Collections_Generic_List_Enumerator_object___MoveNext(
          (System_Collections_Generic_List_Enumerator_object__o *)&v2->fields.__7__wrap1,
          (const MethodInfo_313E218 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
  v33 = v39;
  if ( v32 )
  {
    v34 = v39->fields.__7__wrap1.fields._current;
    v39->fields.__2__current = v34;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v33->fields.__2__current, (int32_t)v34, v30, v31);
    result = 1;
    v39->fields.__1__state = 2;
  }
  else
  {
    BattleBuffData__AllBuffEnumerable_d__244____m__Finally2(v39, v29);
    v35 = v39;
    result = 0;
    v39->fields.__7__wrap1.fields._list = 0LL;
    *(_QWORD *)&v35->fields.__7__wrap1.fields._index = 0LL;
    v35->fields.__7__wrap1.fields._current = 0LL;
  }
  return result;
}


System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *__fastcall BattleBuffData__AllBuffEnumerable_d__244__System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__GetEnumerator(
        BattleBuffData__AllBuffEnumerable_d__244_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  __int64 v4; // x20
  struct BattleBuffData_o *_4__this; // x1
  int32_t v6; // w2
  int32_t v7; // w3

  if ( (byte_48E4B85 & 1) == 0 )
  {
    sub_1B00CCC(&BattleBuffData__AllBuffEnumerable_d__244_TypeInfo, method);
    byte_48E4B85 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
  }
  else
  {
    v4 = sub_1B00F18(BattleBuffData__AllBuffEnumerable_d__244_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    *(_DWORD *)(v4 + 16) = 0;
    *(_DWORD *)(v4 + 32) = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    *(_QWORD *)(v4 + 40) = _4__this;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v4 + 40), (int32_t)_4__this, v6, v7);
    return (System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *)v4;
  }
  return (System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *)this;
}


BattleBuffData_BuffData_o *__fastcall BattleBuffData__AllBuffEnumerable_d__244__System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__get_Current(
        BattleBuffData__AllBuffEnumerable_d__244_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleBuffData__AllBuffEnumerable_d__244__System_Collections_IEnumerator_Reset(
        BattleBuffData__AllBuffEnumerable_d__244_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B00CE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B00F18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B00CE0(&Method_BattleBuffData__AllBuffEnumerable_d__244_System_Collections_IEnumerator_Reset__);
  sub_1B00DF4(v3, v4);
}


Il2CppObject *__fastcall BattleBuffData__AllBuffEnumerable_d__244__System_Collections_IEnumerator_get_Current(
        BattleBuffData__AllBuffEnumerable_d__244_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall BattleBuffData__AllBuffEnumerable_d__244__System_IDisposable_Dispose(
        BattleBuffData__AllBuffEnumerable_d__244_o *this,
        const MethodInfo *method)
{
  switch ( this->fields.__1__state )
  {
    case 0xFFFFFFFC:
    case 2:
      BattleBuffData__AllBuffEnumerable_d__244____m__Finally2(this, method);
      break;
    case 0xFFFFFFFD:
    case 1:
      BattleBuffData__AllBuffEnumerable_d__244____m__Finally1(this, method);
      break;
    default:
      return;
  }
}


void __fastcall BattleBuffData__AllBuffEnumerable_d__244____m__Finally1(
        BattleBuffData__AllBuffEnumerable_d__244_o *this,
        const MethodInfo *method)
{
  if ( (byte_48E4B83 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, method);
    byte_48E4B83 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
}


void __fastcall BattleBuffData__AllBuffEnumerable_d__244____m__Finally2(
        BattleBuffData__AllBuffEnumerable_d__244_o *this,
        const MethodInfo *method)
{
  if ( (byte_48E4B84 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__, method);
    byte_48E4B84 = 1;
  }
  this->fields.__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose(
    (System_Collections_Generic_List_Enumerator_object__o *)&this->fields.__7__wrap1,
    (const MethodInfo_313E214 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
}


void __fastcall BattleBuffData__AllBuffValidEnumerablePriorActive_d__245___ctor(
        BattleBuffData__AllBuffValidEnumerablePriorActive_d__245_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall BattleBuffData__AllBuffValidEnumerablePriorActive_d__245__MoveNext(
        BattleBuffData__AllBuffValidEnumerablePriorActive_d__245_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t _1__state; // w8
  BattleBuffData__AllBuffValidEnumerablePriorActive_d__245_o *v5; // x19
  BattleBuffData_o *_4__this; // x20
  BattleBuffData_BuffData_array *ActiveList; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w8
  int32_t _7__wrap2; // w8
  int32_t v12; // w8
  int32_t v13; // w8
  struct BattleBuffData_BuffData_array *_7__wrap1; // x9
  int32_t max_length; // w10
  struct BattleBuffData_BuffData_o *v16; // x1
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0
  BattleBuffData_BuffData_array *PassiveList; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  struct BattleBuffData_BuffData_array *v22; // x9
  int32_t v23; // w10
  struct BattleBuffData_BuffData_o *v24; // x1
  ServantStatusBattleListViewItem_o *v25; // x19

  _1__state = this->fields.__1__state;
  v5 = this;
  if ( _1__state == 2 )
  {
    _7__wrap2 = this->fields.__7__wrap2;
    this->fields.__1__state = -1;
    v12 = _7__wrap2 + 1;
    this->fields.__7__wrap2 = v12;
    goto LABEL_14;
  }
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    v13 = this->fields.__7__wrap2;
    this->fields.__1__state = -1;
    v10 = v13 + 1;
    this->fields.__7__wrap2 = v10;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    if ( !_4__this )
LABEL_20:
      sub_1B00F28(this, method);
    ActiveList = BattleBuffData__getActiveList(_4__this, this->fields.isCheckInterval, 0LL);
    v5->fields.__7__wrap1 = ActiveList;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v5->fields.__7__wrap1, (int32_t)ActiveList, v8, v9);
    v10 = 0;
    v5->fields.__7__wrap2 = 0;
  }
  _7__wrap1 = v5->fields.__7__wrap1;
  if ( !_7__wrap1 )
    goto LABEL_20;
  max_length = _7__wrap1->max_length;
  if ( v10 < max_length )
  {
    if ( v10 < (unsigned int)max_length )
    {
      v16 = _7__wrap1->m_Items[v10];
      v5->fields.__2__current = v16;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
      sub_1B00C70(p__2__current, (int32_t)v16, v2, v3);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    }
LABEL_21:
    sub_1B00F30(this, method);
  }
  v5->fields.__7__wrap1 = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v5->fields.__7__wrap1, 0, v2, v3);
  if ( !_4__this )
    goto LABEL_20;
  PassiveList = BattleBuffData__getPassiveList(_4__this, v5->fields.isCheckInterval, 0LL);
  v5->fields.__7__wrap1 = PassiveList;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v5->fields.__7__wrap1, (int32_t)PassiveList, v20, v21);
  v12 = 0;
  v5->fields.__7__wrap2 = 0;
LABEL_14:
  this = (BattleBuffData__AllBuffValidEnumerablePriorActive_d__245_o *)&v5->fields.__7__wrap1;
  v22 = v5->fields.__7__wrap1;
  if ( !v22 )
    goto LABEL_20;
  v23 = v22->max_length;
  if ( v12 >= v23 )
  {
    this->klass = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)this, 0, v2, v3);
    return 0;
  }
  if ( v12 >= (unsigned int)v23 )
    goto LABEL_21;
  v24 = v22->m_Items[v12];
  v5->fields.__2__current = v24;
  v25 = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
  sub_1B00C70(v25, (int32_t)v24, v2, v3);
  *(_DWORD *)&v25[-1].fields.isMine = 2;
  return 1;
}


System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *__fastcall BattleBuffData__AllBuffValidEnumerablePriorActive_d__245__System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__GetEnumerator(
        BattleBuffData__AllBuffValidEnumerablePriorActive_d__245_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  BattleBuffData__AllBuffValidEnumerablePriorActive_d__245_o *v4; // x20
  struct BattleBuffData_o *_4__this; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *result; // x0

  if ( (byte_48E4B87 & 1) == 0 )
  {
    sub_1B00CCC(&BattleBuffData__AllBuffValidEnumerablePriorActive_d__245_TypeInfo, method);
    byte_48E4B87 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v4 = this;
  }
  else
  {
    v4 = (BattleBuffData__AllBuffValidEnumerablePriorActive_d__245_o *)sub_1B00F18(BattleBuffData__AllBuffValidEnumerablePriorActive_d__245_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    v4->fields.__1__state = 0;
    v4->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v4->fields.__4__this = _4__this;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v4->fields.__4__this, (int32_t)_4__this, v6, v7);
  }
  result = (System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *)v4;
  v4->fields.isCheckInterval = this->fields.__3__isCheckInterval;
  return result;
}


BattleBuffData_BuffData_o *__fastcall BattleBuffData__AllBuffValidEnumerablePriorActive_d__245__System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__get_Current(
        BattleBuffData__AllBuffValidEnumerablePriorActive_d__245_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleBuffData__AllBuffValidEnumerablePriorActive_d__245__System_Collections_IEnumerator_Reset(
        BattleBuffData__AllBuffValidEnumerablePriorActive_d__245_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B00CE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B00F18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B00CE0(&Method_BattleBuffData__AllBuffValidEnumerablePriorActive_d__245_System_Collections_IEnumerator_Reset__);
  sub_1B00DF4(v3, v4);
}


Il2CppObject *__fastcall BattleBuffData__AllBuffValidEnumerablePriorActive_d__245__System_Collections_IEnumerator_get_Current(
        BattleBuffData__AllBuffValidEnumerablePriorActive_d__245_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall BattleBuffData__AllBuffValidEnumerablePriorActive_d__245__System_IDisposable_Dispose(
        BattleBuffData__AllBuffValidEnumerablePriorActive_d__245_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleBuffData__AllBuffValidEnumerable_d__246___ctor(
        BattleBuffData__AllBuffValidEnumerable_d__246_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
  this->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
}


bool __fastcall BattleBuffData__AllBuffValidEnumerable_d__246__MoveNext(
        BattleBuffData__AllBuffValidEnumerable_d__246_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  int32_t _1__state; // w8
  BattleBuffData__AllBuffValidEnumerable_d__246_o *v5; // x19
  BattleBuffData_o *_4__this; // x20
  BattleBuffData_BuffData_array *PassiveList; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w8
  int32_t _7__wrap2; // w8
  int32_t v12; // w8
  int32_t v13; // w8
  struct BattleBuffData_BuffData_array *_7__wrap1; // x9
  int32_t max_length; // w10
  struct BattleBuffData_BuffData_o *v16; // x1
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  bool result; // w0
  BattleBuffData_BuffData_array *ActiveList; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  struct BattleBuffData_BuffData_array *v22; // x9
  int32_t v23; // w10
  struct BattleBuffData_BuffData_o *v24; // x1
  ServantStatusBattleListViewItem_o *v25; // x19

  _1__state = this->fields.__1__state;
  v5 = this;
  if ( _1__state == 2 )
  {
    _7__wrap2 = this->fields.__7__wrap2;
    this->fields.__1__state = -1;
    v12 = _7__wrap2 + 1;
    this->fields.__7__wrap2 = v12;
    goto LABEL_14;
  }
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    v13 = this->fields.__7__wrap2;
    this->fields.__1__state = -1;
    v10 = v13 + 1;
    this->fields.__7__wrap2 = v10;
  }
  else
  {
    if ( _1__state )
      return 0;
    this->fields.__1__state = -1;
    if ( !_4__this )
LABEL_20:
      sub_1B00F28(this, method);
    PassiveList = BattleBuffData__getPassiveList(_4__this, this->fields.isCheckInterval, 0LL);
    v5->fields.__7__wrap1 = PassiveList;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v5->fields.__7__wrap1, (int32_t)PassiveList, v8, v9);
    v10 = 0;
    v5->fields.__7__wrap2 = 0;
  }
  _7__wrap1 = v5->fields.__7__wrap1;
  if ( !_7__wrap1 )
    goto LABEL_20;
  max_length = _7__wrap1->max_length;
  if ( v10 < max_length )
  {
    if ( v10 < (unsigned int)max_length )
    {
      v16 = _7__wrap1->m_Items[v10];
      v5->fields.__2__current = v16;
      p__2__current = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
      sub_1B00C70(p__2__current, (int32_t)v16, v2, v3);
      result = 1;
      *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
      return result;
    }
LABEL_21:
    sub_1B00F30(this, method);
  }
  v5->fields.__7__wrap1 = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v5->fields.__7__wrap1, 0, v2, v3);
  if ( !_4__this )
    goto LABEL_20;
  ActiveList = BattleBuffData__getActiveList(_4__this, v5->fields.isCheckInterval, 0LL);
  v5->fields.__7__wrap1 = ActiveList;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&v5->fields.__7__wrap1, (int32_t)ActiveList, v20, v21);
  v12 = 0;
  v5->fields.__7__wrap2 = 0;
LABEL_14:
  this = (BattleBuffData__AllBuffValidEnumerable_d__246_o *)&v5->fields.__7__wrap1;
  v22 = v5->fields.__7__wrap1;
  if ( !v22 )
    goto LABEL_20;
  v23 = v22->max_length;
  if ( v12 >= v23 )
  {
    this->klass = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)this, 0, v2, v3);
    return 0;
  }
  if ( v12 >= (unsigned int)v23 )
    goto LABEL_21;
  v24 = v22->m_Items[v12];
  v5->fields.__2__current = v24;
  v25 = (ServantStatusBattleListViewItem_o *)&v5->fields.__2__current;
  sub_1B00C70(v25, (int32_t)v24, v2, v3);
  *(_DWORD *)&v25[-1].fields.isMine = 2;
  return 1;
}


System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *__fastcall BattleBuffData__AllBuffValidEnumerable_d__246__System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__GetEnumerator(
        BattleBuffData__AllBuffValidEnumerable_d__246_o *this,
        const MethodInfo *method)
{
  int32_t l__initialThreadId; // w20
  BattleBuffData__AllBuffValidEnumerable_d__246_o *v4; // x20
  struct BattleBuffData_o *_4__this; // x1
  int32_t v6; // w2
  int32_t v7; // w3
  System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *result; // x0

  if ( (byte_48E4B86 & 1) == 0 )
  {
    sub_1B00CCC(&BattleBuffData__AllBuffValidEnumerable_d__246_TypeInfo, method);
    byte_48E4B86 = 1;
  }
  if ( this->fields.__1__state == -2
    && (l__initialThreadId = this->fields.__l__initialThreadId,
        l__initialThreadId == System_Environment__get_CurrentManagedThreadId(0LL)) )
  {
    this->fields.__1__state = 0;
    v4 = this;
  }
  else
  {
    v4 = (BattleBuffData__AllBuffValidEnumerable_d__246_o *)sub_1B00F18(BattleBuffData__AllBuffValidEnumerable_d__246_TypeInfo);
    System_Object___ctor((Il2CppObject *)v4, 0LL);
    v4->fields.__1__state = 0;
    v4->fields.__l__initialThreadId = System_Environment__get_CurrentManagedThreadId(0LL);
    _4__this = this->fields.__4__this;
    v4->fields.__4__this = _4__this;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&v4->fields.__4__this, (int32_t)_4__this, v6, v7);
  }
  result = (System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__o *)v4;
  v4->fields.isCheckInterval = this->fields.__3__isCheckInterval;
  return result;
}


BattleBuffData_BuffData_o *__fastcall BattleBuffData__AllBuffValidEnumerable_d__246__System_Collections_Generic_IEnumerator_BattleBuffData_BuffData__get_Current(
        BattleBuffData__AllBuffValidEnumerable_d__246_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn BattleBuffData__AllBuffValidEnumerable_d__246__System_Collections_IEnumerator_Reset(
        BattleBuffData__AllBuffValidEnumerable_d__246_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B00CE0(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B00F18(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B00CE0(&Method_BattleBuffData__AllBuffValidEnumerable_d__246_System_Collections_IEnumerator_Reset__);
  sub_1B00DF4(v3, v4);
}


Il2CppObject *__fastcall BattleBuffData__AllBuffValidEnumerable_d__246__System_Collections_IEnumerator_get_Current(
        BattleBuffData__AllBuffValidEnumerable_d__246_o *this,
        const MethodInfo *method)
{
  return (Il2CppObject *)this->fields.__2__current;
}


void __fastcall BattleBuffData__AllBuffValidEnumerable_d__246__System_IDisposable_Dispose(
        BattleBuffData__AllBuffValidEnumerable_d__246_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleBuffData___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_48E4B79 & 1) == 0 )
  {
    sub_1B00CCC(&BattleBuffData___c_TypeInfo, v1);
    byte_48E4B79 = 1;
  }
  v2 = (Il2CppObject *)sub_1B00F18(BattleBuffData___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  BattleBuffData___c_TypeInfo->static_fields->__9 = (struct BattleBuffData___c_o *)v2;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)BattleBuffData___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall BattleBuffData___c___ctor(BattleBuffData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleBuffData___c___AddGetSkillTypeBuff_b__216_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B00F28(this, 0LL);
  return x->fields.addOrder;
}


int32_t __fastcall BattleBuffData___c___AddGetSkillTypeBuff_b__216_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *a,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B00F28(this, a);
  return a->fields.addOrder - b->fields.addOrder;
}


int32_t __fastcall BattleBuffData___c___AddGetSkillTypeBuff_b__216_2(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *a,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B00F28(this, a);
  return a->fields.addOrder - b->fields.addOrder;
}


int32_t __fastcall BattleBuffData___c___AddGetSkillTypeBuff_b__216_3(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *a,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B00F28(this, a);
  return a->fields.addOrder - b->fields.addOrder;
}


bool __fastcall BattleBuffData___c___BoardTurnProgressing_b__69_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1B00F28(this, 0LL);
  return !s->fields.turn && !s->fields._IsExtendingLife_k__BackingField;
}


bool __fastcall BattleBuffData___c___BoardTurnProgressing_b__69_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1B00F28(this, 0LL);
  return !s->fields.turn && !s->fields._IsExtendingLife_k__BackingField;
}


bool __fastcall BattleBuffData___c___CancelExtendingLife_b__72_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B00F28(this, 0LL);
  return x->fields._IsExtendingLife_k__BackingField;
}


void __fastcall BattleBuffData___c___CancelExtendingLife_b__72_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B00F28(this, 0LL);
  x->fields._IsExtendingLife_k__BackingField = 0;
}


bool __fastcall BattleBuffData___c___CommonTurnProgressing_b__68_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1B00F28(this, 0LL);
  return !s->fields.turn && !s->fields._IsExtendingLife_k__BackingField;
}


bool __fastcall BattleBuffData___c___CommonTurnProgressing_b__68_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1B00F28(this, 0LL);
  return !s->fields.turn && !s->fields._IsExtendingLife_k__BackingField;
}


void __fastcall BattleBuffData___c___DirectUpdateWaitIntervalBuff_b__28_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_IntervalData_o *intervalData; // x0

  if ( !buff )
    sub_1B00F28(this, 0LL);
  intervalData = buff->fields.intervalData;
  if ( intervalData )
    BattleBuffData_IntervalData__Update(intervalData, buff, method);
}


bool __fastcall BattleBuffData___c___GetAllBGMChangeBuffArray_b__249_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B00F28(this, 0LL);
  return x->fields.changeBgmData != 0LL;
}


bool __fastcall BattleBuffData___c___GetAllCommandAssistBuff_b__206_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1B00F28(this, 0LL);
  return buff->fields.commandAssistId > 0;
}


bool __fastcall BattleBuffData___c___GetAllCommandCodeBuff_b__205_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1B00F28(this, 0LL);
  return buff->fields.userCommandCodeId > 0;
}


bool __fastcall BattleBuffData___c___GetAllConnectedCommandCardBuff_b__233_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1B00F28(this, 0LL);
  return BattleBuffData_BuffData__isCommandCardBuff(buff, (const MethodInfo *)buff);
}


bool __fastcall BattleBuffData___c___GetAllConnectedCommandCardBuff_b__233_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1B00F28(this, 0LL);
  return BattleBuffData_BuffData__isCommandCardBuff(buff, (const MethodInfo *)buff)
      || buff->fields.userCommandCodeId > 0
      || buff->fields.commandAssistId > 0;
}


bool __fastcall BattleBuffData___c___GetAllIntervalBuffArray_b__251_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B00F28(this, 0LL);
  return x->fields.intervalData != 0LL;
}


bool __fastcall BattleBuffData___c___GetAllValidBGMChangeBuffArray_b__250_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B00F28(this, 0LL);
  return x->fields.changeBgmData != 0LL;
}


bool __fastcall BattleBuffData___c___GetAvaliableActiveBuffArray_b__104_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  bool result; // w0
  struct BattleBuffData_IntervalData_o *intervalData; // x8
  int32_t state; // w8

  if ( !s )
    sub_1B00F28(this, 0LL);
  result = !s->fields._isRemove
        && ((intervalData = s->fields.intervalData) == 0LL
         || intervalData->fields.intervalTurn <= 0 && intervalData->fields.intervalCount <= 0)
        && (state = s->fields.state, (state & 0x24011) == 0)
        && (state & 0x200000) == 0;
  return result;
}


bool __fastcall BattleBuffData___c___GetClassIconEffectBuffList_b__261_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  struct BattleBuffData_IntervalData_o *intervalData; // x8
  int32_t state; // w8
  bool result; // w0

  if ( !b )
    sub_1B00F28(this, 0LL);
  intervalData = b->fields.intervalData;
  result = (!intervalData || intervalData->fields.intervalTurn <= 0 && intervalData->fields.intervalCount <= 0)
        && (state = b->fields.state, (state & 0x24011) == 0)
        && (state & 0x200000) == 0;
  return result;
}


bool __fastcall BattleBuffData___c___GetCurrentWarBoardNotAttackedBuff_b__239_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1B00F28(this, 0LL);
  return !buff->fields._isRemove && BattleBuffData_BuffData__IsWarBoardNotAttacked(buff, (const MethodInfo *)buff);
}


bool __fastcall BattleBuffData___c___GetEffectBuffList_b__223_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1B00F28(this, 0LL);
  return BattleBuffData_BuffData__isEffectBuff(buff, (const MethodInfo *)buff);
}


bool __fastcall BattleBuffData___c___GetEffectBuffList_b__223_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1B00F28(this, 0LL);
  return BattleBuffData_BuffData__isEffectBuff(buff, (const MethodInfo *)buff);
}


int32_t __fastcall BattleBuffData___c___GetEffectBuffList_b__223_2(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *a,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B00F28(this, a);
  return a->fields.addOrder - b->fields.addOrder;
}


bool __fastcall BattleBuffData___c___GetEffectBuffList_b__223_3(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  struct BattleBuffData_IntervalData_o *intervalData; // x8

  if ( !buff )
    sub_1B00F28(this, 0LL);
  intervalData = buff->fields.intervalData;
  if ( !intervalData )
    return 0;
  if ( intervalData->fields.intervalTurn <= 0 )
    return intervalData->fields.intervalCount > 0;
  return 1;
}


bool __fastcall BattleBuffData___c___GetGrantBuffTypeArray_b__118_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1B00F28(this, 0LL);
  return !buff->fields._isRemove;
}


bool __fastcall BattleBuffData___c___GetGrantBuffTypeArray_b__118_2(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1B00F28(this, 0LL);
  return !buff->fields._isRemove;
}


bool __fastcall BattleBuffData___c___RemoveNoTurnBuff_b__70_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1B00F28(this, 0LL);
  return !s->fields.turn && !s->fields._IsExtendingLife_k__BackingField;
}


bool __fastcall BattleBuffData___c___RemoveNoTurnBuff_b__70_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1B00F28(this, 0LL);
  return !s->fields.turn && !s->fields._IsExtendingLife_k__BackingField;
}


bool __fastcall BattleBuffData___c___RemoveProgressingBuffList_b__88_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *_,
        const MethodInfo *method)
{
  if ( !_ )
    sub_1B00F28(this, 0LL);
  return _->fields.count == 0;
}


bool __fastcall BattleBuffData___c___RemoveProgressingBuffList_b__88_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *_,
        const MethodInfo *method)
{
  if ( !_ )
    sub_1B00F28(this, 0LL);
  return _->fields.count == 0;
}


void __fastcall BattleBuffData___c___ResetNotTakeOverBuff_b__71_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1B00F28(this, 0LL);
  if ( !buff->fields.isTakeOverNextBattle )
  {
    buff->fields.turn = 0;
    buff->fields._IsExtendingLife_k__BackingField = 0;
  }
}


int32_t __fastcall BattleBuffData___c___UpdateBaseAddOrder_b__218_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B00F28(this, 0LL);
  return x->fields.addOrder;
}


int32_t __fastcall BattleBuffData___c___UpdateBaseAddOrder_b__218_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B00F28(this, 0LL);
  return x->fields.addOrder;
}


int32_t __fastcall BattleBuffData___c___UpdateBuffAddOrder_b__217_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B00F28(this, 0LL);
  return x->fields.addOrder;
}


int32_t __fastcall BattleBuffData___c___UpdateBuffAddOrder_b__217_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B00F28(this, 0LL);
  return x->fields.addOrder;
}


int32_t __fastcall BattleBuffData___c___UpdateBuffAddOrder_b__217_2(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B00F28(this, 0LL);
  return x->fields.addOrder;
}


int32_t __fastcall BattleBuffData___c___UpdateForceBuff_b__92_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *a,
        BattleBuffData_BuffData_o *b,
        const MethodInfo *method)
{
  if ( !a || !b )
    sub_1B00F28(this, a);
  return a->fields.addOrder - b->fields.addOrder;
}


void __fastcall BattleBuffData___c___UpdateForceNoField_b__229_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1B00F28(this, 0LL);
  if ( buff->fields.onfiledUniqueId >= 1 )
    buff->fields.state |= 1u;
  if ( buff->fields.onFieldAliveCond )
    buff->fields.state |= 0x4000u;
}


int32_t __fastcall BattleBuffData___c___checkBuffSuccessful_b__121_0(
        BattleBuffData___c_o *this,
        System_String_o *a,
        const MethodInfo *method)
{
  return System_Int32__Parse(a, 0LL);
}


bool __fastcall BattleBuffData___c___checkFieldAlive_b__96_0(
        BattleBuffData___c_o *this,
        int32_t value,
        int32_t cond,
        bool isOrMore,
        const MethodInfo *method)
{
  if ( isOrMore )
    return cond <= value;
  else
    return value <= cond;
}


bool __fastcall BattleBuffData___c___getAuraBuffList_b__37_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  struct BattleBuffData_IntervalData_o *intervalData; // x8
  int32_t state; // w8
  bool result; // w0

  if ( !s )
    sub_1B00F28(this, 0LL);
  intervalData = s->fields.intervalData;
  result = (!intervalData || intervalData->fields.intervalTurn <= 0 && intervalData->fields.intervalCount <= 0)
        && (state = s->fields.state, (state & 0x24011) == 0)
        && (state & 0x200000) == 0;
  return result;
}


bool __fastcall BattleBuffData___c___getBuffActiveIDList_b__106_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1B00F28(this, 0LL);
  return (s->fields.state & 0x80000) == 0;
}


bool __fastcall BattleBuffData___c___getBuffIDList_b__105_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1B00F28(this, 0LL);
  return (s->fields.state & 0x80000) == 0;
}


int32_t __fastcall BattleBuffData___c___getShowServantParam_b__40_1(
        BattleBuffData___c_o *this,
        BattleBuffData_ShowBuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1B00F28(this, 0LL);
  return buff->fields._DisplayPriority_k__BackingField;
}


bool __fastcall BattleBuffData___c___syncLinkageBuffChangeParam_b__75_0(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x8

  if ( !x )
    sub_1B00F28(this, 0LL);
  v3 = 120LL;
  if ( (x->fields.state & 0x400000) != 0 )
    v3 = 296LL;
  return !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)((char *)&x->klass + v3), 0LL);
}


bool __fastcall BattleBuffData___c___syncLinkageBuffChangeParam_b__75_1(
        BattleBuffData___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x8

  if ( !x )
    sub_1B00F28(this, 0LL);
  v3 = 120LL;
  if ( (x->fields.state & 0x400000) != 0 )
    v3 = 296LL;
  return !BasicHelper__IsNullOrEmpty(*(System_Collections_ICollection_o **)((char *)&x->klass + v3), 0LL);
}


void __fastcall BattleBuffData___c__DisplayClass104_0___ctor(
        BattleBuffData___c__DisplayClass104_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass104_0___GetAvaliableActiveBuffArray_b__1(
        BattleBuffData___c__DisplayClass104_0_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  struct BattleBuffData_IntervalData_o *intervalData; // x8
  struct System_Predicate_BattleBuffData_BuffData__o *conditionsToAdd; // x8

  if ( !s )
    goto LABEL_10;
  if ( s->fields._isRemove )
    return 0;
  intervalData = s->fields.intervalData;
  if ( intervalData )
  {
    if ( intervalData->fields.intervalTurn > 0 || intervalData->fields.intervalCount > 0 )
      return 0;
  }
  if ( (s->fields.state & 0x224011) != 0 )
    return 0;
  conditionsToAdd = this->fields.conditionsToAdd;
  if ( !conditionsToAdd )
LABEL_10:
    sub_1B00F28(this, s);
  return ((__int64 (__fastcall *)(struct System_Reflection_MethodInfo_o *))conditionsToAdd->fields.m_target)(conditionsToAdd->fields.original_method_info);
}


void __fastcall BattleBuffData___c__DisplayClass109_0___ctor(
        BattleBuffData___c__DisplayClass109_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass109_0___SubBuffFromType_b__0(
        BattleBuffData___c__DisplayClass109_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this || (_4__this = (BattleBuffData_o *)BattleBuffData__get_buffMst(_4__this, 0LL), !buff) || !_4__this )
    sub_1B00F28(_4__this, buff);
  return BuffMaster__GetBuffType((BuffMaster_o *)_4__this, buff->fields.buffId, -1, 0LL) == this->fields.checkBuffType;
}


void __fastcall BattleBuffData___c__DisplayClass110_0___ctor(
        BattleBuffData___c__DisplayClass110_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass110_0___SubBuffFromDeadActorId_b__0(
        BattleBuffData___c__DisplayClass110_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  int32_t actorId; // w8
  int32_t v4; // w9

  actorId = this->fields.actorId;
  if ( actorId < 1 )
    return 0;
  if ( !buff )
    sub_1B00F28(this, 0LL);
  if ( buff->fields.isRemoveFieldBuffActorDeath )
    v4 = buff->fields.actorId;
  else
    v4 = -1;
  return v4 == actorId;
}


void __fastcall BattleBuffData___c__DisplayClass111_0___ctor(
        BattleBuffData___c__DisplayClass111_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass111_0___SubBuffSpecified_g__CheckFunc_0(
        BattleBuffData___c__DisplayClass111_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *toRemove; // x0

  if ( (byte_48E4B7A & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__, buff);
    byte_48E4B7A = 1;
  }
  toRemove = (System_Collections_Generic_HashSet_T__o *)this->fields.toRemove;
  if ( !toRemove )
    sub_1B00F28(0LL, buff);
  return System_Collections_Generic_HashSet_object___Contains(
           toRemove,
           (Il2CppObject *)buff,
           (const MethodInfo_3280954 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
}


void __fastcall BattleBuffData___c__DisplayClass118_0___ctor(
        BattleBuffData___c__DisplayClass118_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleBuffData___c__DisplayClass118_0___GetGrantBuffTypeArray_b__0(
        BattleBuffData___c__DisplayClass118_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_o *_4__this; // x0
  struct System_Collections_Generic_List_int__o *buffTypeList; // x19
  struct System_Int32_array *items; // x8
  _QWORD *v8; // x9
  __int64 size; // x10

  if ( (byte_48E4B7B & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_int__Add__, buff);
    byte_48E4B7B = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (buffTypeList = this->fields.buffTypeList,
        _4__this = (BattleBuffData_o *)BattleBuffData__get_buffMst(_4__this, 0LL),
        !buff)
    || !_4__this
    || (_4__this = (BattleBuffData_o *)BuffMaster__GetBuffType((BuffMaster_o *)_4__this, buff->fields.buffId, -1, 0LL),
        !buffTypeList)
    || (items = buffTypeList->fields._items,
        v8 = Method_System_Collections_Generic_List_int__Add__,
        ++buffTypeList->fields._version,
        !items) )
  {
    sub_1B00F28(_4__this, buff);
  }
  size = buffTypeList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      buffTypeList,
      (int32_t)_4__this,
      *(const MethodInfo_33A49AC **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
  }
  else
  {
    buffTypeList->fields._size = size + 1;
    items->m_Items[size + 1] = (int)_4__this;
  }
}


void __fastcall BattleBuffData___c__DisplayClass140_0___ctor(
        BattleBuffData___c__DisplayClass140_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass140_0___getRectBuffList_b__0(
        BattleBuffData___c__DisplayClass140_0_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct BuffEntity_o *ent; // x8

  ent = this->fields.ent;
  if ( !ent )
    sub_1B00F28(this, type);
  return ent->fields.type == type;
}


void __fastcall BattleBuffData___c__DisplayClass148_0___ctor(
        BattleBuffData___c__DisplayClass148_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleBuffData___c__DisplayClass148_0___ChangeBuffState_b__0(
        BattleBuffData___c__DisplayClass148_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData___c__DisplayClass148_0_o *v4; // x19
  bool v5; // w22
  bool isConditionHp; // w21
  char isConditionIndividuality; // w8
  bool *p_isValueChanged; // x19
  bool v9; // w21
  bool v10; // t1
  bool v11; // w0
  bool isValueChanged; // t1

  if ( !buff )
    goto LABEL_22;
  if ( (buff->fields.state & 0x20) == 0 )
    return;
  v4 = this;
  this = (BattleBuffData___c__DisplayClass148_0_o *)this->fields.__4__this;
  if ( !this )
    goto LABEL_22;
  if ( BattleBuffData__isContainConditionsHp((BattleBuffData_o *)this, buff, 0LL) )
  {
    this = (BattleBuffData___c__DisplayClass148_0_o *)v4->fields.__4__this;
    if ( !this )
      goto LABEL_22;
    v5 = !BattleBuffData__isContainConditionIndividuality((BattleBuffData_o *)this, buff, 0LL);
  }
  else
  {
    v5 = 1;
  }
  this = (BattleBuffData___c__DisplayClass148_0_o *)v4->fields.__4__this;
  if ( !this )
LABEL_22:
    sub_1B00F28(this, buff);
  isConditionHp = BattleBuffData__isConditionHp((BattleBuffData_o *)this, buff, v4->fields.now, v4->fields.max, 0LL);
  if ( v5 )
  {
    this = (BattleBuffData___c__DisplayClass148_0_o *)v4->fields.__4__this;
    if ( !this )
      goto LABEL_22;
    isConditionIndividuality = isConditionHp | BattleBuffData__isConditionIndividuality(
                                                 (BattleBuffData_o *)this,
                                                 buff,
                                                 v4->fields.servantIndv,
                                                 v4->fields.buffIndv,
                                                 v4->fields.fieldIndiv,
                                                 v4->fields.canSubStateBuffIndv,
                                                 0LL);
    goto LABEL_15;
  }
  if ( !isConditionHp )
  {
    isValueChanged = v4->fields.isValueChanged;
    p_isValueChanged = &v4->fields.isValueChanged;
    v9 = isValueChanged;
    this = (BattleBuffData___c__DisplayClass148_0_o *)*((_QWORD *)p_isValueChanged - 6);
    if ( this )
      goto LABEL_19;
    goto LABEL_22;
  }
  this = (BattleBuffData___c__DisplayClass148_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_22;
  isConditionIndividuality = BattleBuffData__isConditionIndividuality(
                               (BattleBuffData_o *)this,
                               buff,
                               v4->fields.servantIndv,
                               v4->fields.buffIndv,
                               v4->fields.fieldIndiv,
                               v4->fields.canSubStateBuffIndv,
                               0LL);
LABEL_15:
  v10 = v4->fields.isValueChanged;
  p_isValueChanged = &v4->fields.isValueChanged;
  v9 = v10;
  this = (BattleBuffData___c__DisplayClass148_0_o *)*((_QWORD *)p_isValueChanged - 6);
  if ( !this )
    goto LABEL_22;
  if ( (isConditionIndividuality & 1) == 0 )
  {
LABEL_19:
    v11 = BattleBuffData__OnStateWithAuraConditionCheck((BattleBuffData_o *)this, buff, 16, 0LL);
    goto LABEL_20;
  }
  v11 = BattleBuffData__OffStateWithAuraConditionCheck((BattleBuffData_o *)this, buff, 16, 0LL);
LABEL_20:
  *p_isValueChanged = v9 || v11;
}


void __fastcall BattleBuffData___c__DisplayClass149_0___ctor(
        BattleBuffData___c__DisplayClass149_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleBuffData___c__DisplayClass149_0___UpdateForceAllBuffNoAct_b__0(
        BattleBuffData___c__DisplayClass149_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  BattleBuffData___c__DisplayClass149_0_o *v5; // x20
  __int64 v6; // x1
  System_Int32_array *Individualty; // x0
  System_Int32_array *targets; // x21
  System_Int32_array *v9; // x22
  System_Func_T1__T2__TResult__o *v10; // x23
  System_Func_T1__T2__TResult__o *v11; // x24
  const MethodInfo *v12; // x2

  v5 = this;
  if ( (byte_48E4B7C & 1) == 0 )
  {
    sub_1B00CCC(&System_Func_int____int____bool__TypeInfo, buff);
    this = (BattleBuffData___c__DisplayClass149_0_o *)sub_1B00CCC(&Method_Individuality_IsPartialMatchArray__, v6);
    byte_48E4B7C = 1;
  }
  if ( !buff )
    sub_1B00F28(this, buff);
  Individualty = BattleBuffData_BuffData__GetIndividualty(buff, 0, 0, 0, v3);
  targets = v5->fields.targets;
  v9 = Individualty;
  v10 = (System_Func_T1__T2__TResult__o *)sub_1B00F18(System_Func_int____int____bool__TypeInfo);
  System_Func_object__object__bool____ctor(v10, 0LL, Method_Individuality_IsPartialMatchArray__, 0LL);
  v11 = (System_Func_T1__T2__TResult__o *)sub_1B00F18(System_Func_int____int____bool__TypeInfo);
  System_Func_object__object__bool____ctor(v11, 0LL, Method_Individuality_IsPartialMatchArray__, 0LL);
  if ( Individuality__CheckSignedIndividualitiesPartialMatch(
         v9,
         targets,
         (System_Func_int____int____bool__o *)v10,
         (System_Func_int____int____bool__o *)v11,
         1,
         0LL) )
  {
    BattleBuffData_BuffData__setShowState(buff, v5->fields.showState, v12);
    buff->fields.state |= 0x20000u;
  }
}


void __fastcall BattleBuffData___c__DisplayClass192_0___ctor(
        BattleBuffData___c__DisplayClass192_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass192_0___CheckBuffType_b__0(
        BattleBuffData___c__DisplayClass192_0_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct BuffEntity_o *buffEnt; // x8

  buffEnt = this->fields.buffEnt;
  if ( !buffEnt )
    sub_1B00F28(this, type);
  return buffEnt->fields.type == type;
}


void __fastcall BattleBuffData___c__DisplayClass197_0___ctor(
        BattleBuffData___c__DisplayClass197_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass197_0___InitializeShift_b__0(
        BattleBuffData___c__DisplayClass197_0_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  if ( !s )
    sub_1B00F28(this, 0LL);
  return s->fields.actorId == this->fields.actorId;
}


bool __fastcall BattleBuffData___c__DisplayClass197_0___InitializeShift_b__1(
        BattleBuffData___c__DisplayClass197_0_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  BattleBuffData_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B00F28(0LL, s);
  return BattleBuffData__checkShiftClear(_4__this, s, this->fields.buffindivs, 0LL);
}


void __fastcall BattleBuffData___c__DisplayClass215_0___ctor(
        BattleBuffData___c__DisplayClass215_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass215_0___GetSkillTypeBuff_b__0(
        BattleBuffData___c__DisplayClass215_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData___c__DisplayClass215_0_o *v4; // x20

  v4 = this;
  if ( (byte_48E4B7D & 1) == 0 )
  {
    this = (BattleBuffData___c__DisplayClass215_0_o *)sub_1B00CCC(
                                                        &Method_System_Collections_Generic_List_int__Contains__,
                                                        buff);
    byte_48E4B7D = 1;
  }
  if ( !buff || (this = (BattleBuffData___c__DisplayClass215_0_o *)v4->fields.targetSkillList) == 0LL )
    sub_1B00F28(this, buff);
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)this,
           buff->fields.grantSkillType,
           (const MethodInfo_33A4D24 *)Method_System_Collections_Generic_List_int__Contains__);
}


void __fastcall BattleBuffData___c__DisplayClass217_0___ctor(
        BattleBuffData___c__DisplayClass217_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleBuffData___c__DisplayClass217_0___UpdateBuffAddOrder_b__3(
        BattleBuffData___c__DisplayClass217_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B00F28(this, 0LL);
  x->fields.addOrder += this->fields.addPassiveMaxOrder;
}


void __fastcall BattleBuffData___c__DisplayClass217_0___UpdateBuffAddOrder_b__4(
        BattleBuffData___c__DisplayClass217_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B00F28(this, 0LL);
  x->fields.addOrder += this->fields.addPassiveMaxOrder;
}


void __fastcall BattleBuffData___c__DisplayClass243_0___ctor(
        BattleBuffData___c__DisplayClass243_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleBuffData___c__DisplayClass243_0___GetFamilyLinkageIdMax_b__0(
        BattleBuffData___c__DisplayClass243_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *hash; // x0

  if ( (byte_48E4B7E & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_int__Add__, *(_QWORD *)&x);
    byte_48E4B7E = 1;
  }
  hash = this->fields.hash;
  if ( !hash )
    sub_1B00F28(0LL, *(_QWORD *)&x);
  System_Collections_Generic_HashSet_int___Add(
    hash,
    x,
    (const MethodInfo_327B040 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleBuffData___c__DisplayClass243_0___GetFamilyLinkageIdMax_b__1(
        BattleBuffData___c__DisplayClass243_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *hash; // x0

  if ( (byte_48E4B7F & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_HashSet_int__Add__, *(_QWORD *)&x);
    byte_48E4B7F = 1;
  }
  hash = this->fields.hash;
  if ( !hash )
    sub_1B00F28(0LL, *(_QWORD *)&x);
  System_Collections_Generic_HashSet_int___Add(
    hash,
    x,
    (const MethodInfo_327B040 *)Method_System_Collections_Generic_HashSet_int__Add__);
}


void __fastcall BattleBuffData___c__DisplayClass247_0___ctor(
        BattleBuffData___c__DisplayClass247_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass247_0___RemovePassiveReplacedOnTransform_g__IsRemovableBuff_0(
        BattleBuffData___c__DisplayClass247_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1B00F28(this, 0LL);
  return this->fields.actorId == buff->fields.actorId
      && BattleSkillInfoData__IsReplacePassiveTypeOnTransform(buff->fields.grantSkillType, 0LL)
      && !buff->fields.isNotRemoveOnTransform;
}


void __fastcall BattleBuffData___c__DisplayClass252_0___ctor(
        BattleBuffData___c__DisplayClass252_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass252_0___ExistsTargetIntervalBuff_b__0(
        BattleBuffData___c__DisplayClass252_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleBuffData_o *_4__this; // x0
  const MethodInfo *v6; // x3

  _4__this = this->fields.__4__this;
  if ( !_4__this || (_4__this = (BattleBuffData_o *)BattleBuffData__get_buffMst(_4__this, 0LL), !buff) )
    sub_1B00F28(_4__this, buff);
  return BattleBuffData_BuffData__EqualBuffType(buff, (BuffMaster_o *)_4__this, this->fields.targetType, v6);
}


void __fastcall BattleBuffData___c__DisplayClass253_0___ctor(
        BattleBuffData___c__DisplayClass253_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass253_0___ResetTargetUseBuff_b__0(
        BattleBuffData___c__DisplayClass253_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  BattleBuffData_o *_4__this; // x0
  const MethodInfo *v6; // x3

  _4__this = this->fields.__4__this;
  if ( !_4__this || (_4__this = (BattleBuffData_o *)BattleBuffData__get_buffMst(_4__this, 0LL), !x) )
    sub_1B00F28(_4__this, x);
  return BattleBuffData_BuffData__EqualBuffType(x, (BuffMaster_o *)_4__this, this->fields.targetType, v6);
}


void __fastcall BattleBuffData___c__DisplayClass262_0___ctor(
        BattleBuffData___c__DisplayClass262_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass262_0___RemoveClassBoardSkillBuff_b__0(
        BattleBuffData___c__DisplayClass262_0_o *this,
        BattleBuffData_BuffData_o *p,
        const MethodInfo *method)
{
  struct AddSkillData_o *skillData; // x8

  if ( !p || (skillData = this->fields.skillData) == 0LL )
    sub_1B00F28(this, p);
  return p->fields.skillId == skillData->fields.id;
}


bool __fastcall BattleBuffData___c__DisplayClass262_0___RemoveClassBoardSkillBuff_b__1(
        BattleBuffData___c__DisplayClass262_0_o *this,
        BattleBuffData_BuffData_o *p,
        const MethodInfo *method)
{
  struct AddSkillData_o *skillData; // x8

  if ( !p || (skillData = this->fields.skillData) == 0LL )
    sub_1B00F28(this, p);
  return p->fields.skillId == skillData->fields.id;
}


bool __fastcall BattleBuffData___c__DisplayClass262_0___RemoveClassBoardSkillBuff_b__2(
        BattleBuffData___c__DisplayClass262_0_o *this,
        BattleBuffData_BuffData_o *a,
        const MethodInfo *method)
{
  struct AddSkillData_o *skillData; // x8

  if ( !a || (skillData = this->fields.skillData) == 0LL )
    sub_1B00F28(this, a);
  return a->fields.skillId == skillData->fields.id;
}


bool __fastcall BattleBuffData___c__DisplayClass262_0___RemoveClassBoardSkillBuff_b__3(
        BattleBuffData___c__DisplayClass262_0_o *this,
        BattleBuffData_BuffData_o *a,
        const MethodInfo *method)
{
  struct AddSkillData_o *skillData; // x8

  if ( !a || (skillData = this->fields.skillData) == 0LL )
    sub_1B00F28(this, a);
  return a->fields.skillId == skillData->fields.id;
}


void __fastcall BattleBuffData___c__DisplayClass262_1___ctor(
        BattleBuffData___c__DisplayClass262_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass262_1___RemoveClassBoardSkillBuff_b__4(
        BattleBuffData___c__DisplayClass262_1_o *this,
        BattleBuffData_BuffData_o *p,
        const MethodInfo *method)
{
  struct ClassBoardCommandSpellEntity_o *entity; // x8

  if ( !p || (entity = this->fields.entity) == 0LL )
    sub_1B00F28(this, p);
  return p->fields.skillId == entity->fields.commandSpellId;
}


bool __fastcall BattleBuffData___c__DisplayClass262_1___RemoveClassBoardSkillBuff_b__5(
        BattleBuffData___c__DisplayClass262_1_o *this,
        BattleBuffData_BuffData_o *p,
        const MethodInfo *method)
{
  struct ClassBoardCommandSpellEntity_o *entity; // x8

  if ( !p || (entity = this->fields.entity) == 0LL )
    sub_1B00F28(this, p);
  return p->fields.skillId == entity->fields.commandSpellId;
}


bool __fastcall BattleBuffData___c__DisplayClass262_1___RemoveClassBoardSkillBuff_b__6(
        BattleBuffData___c__DisplayClass262_1_o *this,
        BattleBuffData_BuffData_o *a,
        const MethodInfo *method)
{
  struct ClassBoardCommandSpellEntity_o *entity; // x8

  if ( !a || (entity = this->fields.entity) == 0LL )
    sub_1B00F28(this, a);
  return a->fields.skillId == entity->fields.commandSpellId;
}


bool __fastcall BattleBuffData___c__DisplayClass262_1___RemoveClassBoardSkillBuff_b__7(
        BattleBuffData___c__DisplayClass262_1_o *this,
        BattleBuffData_BuffData_o *a,
        const MethodInfo *method)
{
  struct ClassBoardCommandSpellEntity_o *entity; // x8

  if ( !a || (entity = this->fields.entity) == 0LL )
    sub_1B00F28(this, a);
  return a->fields.skillId == entity->fields.commandSpellId;
}


void __fastcall BattleBuffData___c__DisplayClass263_0___ctor(
        BattleBuffData___c__DisplayClass263_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass263_0___RemoveClassBoardCommandSpellBuff_b__0(
        BattleBuffData___c__DisplayClass263_0_o *this,
        BattleBuffData_BuffData_o *p,
        const MethodInfo *method)
{
  struct ClassBoardCommandSpellEntity_o *entity; // x8

  if ( !p || (entity = this->fields.entity) == 0LL )
    sub_1B00F28(this, p);
  return p->fields.skillId == entity->fields.commandSpellId;
}


bool __fastcall BattleBuffData___c__DisplayClass263_0___RemoveClassBoardCommandSpellBuff_b__1(
        BattleBuffData___c__DisplayClass263_0_o *this,
        BattleBuffData_BuffData_o *p,
        const MethodInfo *method)
{
  struct ClassBoardCommandSpellEntity_o *entity; // x8

  if ( !p || (entity = this->fields.entity) == 0LL )
    sub_1B00F28(this, p);
  return p->fields.skillId == entity->fields.commandSpellId;
}


bool __fastcall BattleBuffData___c__DisplayClass263_0___RemoveClassBoardCommandSpellBuff_b__2(
        BattleBuffData___c__DisplayClass263_0_o *this,
        BattleBuffData_BuffData_o *a,
        const MethodInfo *method)
{
  struct ClassBoardCommandSpellEntity_o *entity; // x8

  if ( !a || (entity = this->fields.entity) == 0LL )
    sub_1B00F28(this, a);
  return a->fields.skillId == entity->fields.commandSpellId;
}


bool __fastcall BattleBuffData___c__DisplayClass263_0___RemoveClassBoardCommandSpellBuff_b__3(
        BattleBuffData___c__DisplayClass263_0_o *this,
        BattleBuffData_BuffData_o *a,
        const MethodInfo *method)
{
  struct ClassBoardCommandSpellEntity_o *entity; // x8

  if ( !a || (entity = this->fields.entity) == 0LL )
    sub_1B00F28(this, a);
  return a->fields.skillId == entity->fields.commandSpellId;
}


void __fastcall BattleBuffData___c__DisplayClass31_0___ctor(
        BattleBuffData___c__DisplayClass31_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass31_0___getPassiveList_b__0(
        BattleBuffData___c__DisplayClass31_0_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  struct BattleBuffData_IntervalData_o *intervalData; // x8
  int32_t state; // w8
  bool result; // w0

  if ( !s )
    sub_1B00F28(this, 0LL);
  result = (!this->fields.isCheckInterval
         || (intervalData = s->fields.intervalData) == 0LL
         || intervalData->fields.intervalTurn <= 0 && intervalData->fields.intervalCount <= 0)
        && (state = s->fields.state, (state & 0x24011) == 0)
        && (state & 0x200000) == 0;
  return result;
}


void __fastcall BattleBuffData___c__DisplayClass32_0___ctor(
        BattleBuffData___c__DisplayClass32_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass32_0___getActiveList_b__0(
        BattleBuffData___c__DisplayClass32_0_o *this,
        BattleBuffData_BuffData_o *s,
        const MethodInfo *method)
{
  struct BattleBuffData_IntervalData_o *intervalData; // x8
  int32_t state; // w8
  bool result; // w0

  if ( !s )
    sub_1B00F28(this, 0LL);
  result = (!this->fields.isCheckInterval
         || (intervalData = s->fields.intervalData) == 0LL
         || intervalData->fields.intervalTurn <= 0 && intervalData->fields.intervalCount <= 0)
        && (state = s->fields.state, (state & 0x24011) == 0)
        && (state & 0x200000) == 0;
  return result;
}


void __fastcall BattleBuffData___c__DisplayClass40_0___ctor(
        BattleBuffData___c__DisplayClass40_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleBuffData___c__DisplayClass40_0___getShowServantParam_b__0(
        BattleBuffData___c__DisplayClass40_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BattleBuffData_ShowBuffData_o *v6; // x19
  const MethodInfo *v7; // x2
  __int64 v8; // x1
  BattleBuffData_o *_4__this; // x0
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x8
  _QWORD *v13; // x9
  __int64 passiveList_low; // x10
  __int64 v15; // x8

  if ( (byte_48E4B80 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__Add__, buff);
    sub_1B00CCC(&BattleBuffData_ShowBuffData_TypeInfo, v5);
    byte_48E4B80 = 1;
  }
  v6 = (BattleBuffData_ShowBuffData_o *)sub_1B00F18(BattleBuffData_ShowBuffData_TypeInfo);
  BattleBuffData_ShowBuffData___ctor_41305888(v6, buff, v7);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_38;
  if ( BattleBuffData__isHide(_4__this, buff, 0LL) )
    return;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_38;
  if ( BattleBuffData__isHideOtherCommand(_4__this, buff, 0LL) )
    return;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_38;
  if ( BattleBuffData__isShowDeff(_4__this, buff, 0LL) )
    return;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_38;
  if ( BattleBuffData__isShowDamageAndCommandCardBuff(_4__this, buff, 0LL) )
    return;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_38;
  if ( BattleBuffData__isInvalidHide(_4__this, buff, 0LL) )
    return;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_38;
  _4__this = (BattleBuffData_o *)BattleBuffData__IsUnfix(_4__this, buff, 0LL);
  if ( ((unsigned __int8)_4__this & 1) != 0 )
    return;
  if ( !buff )
    goto LABEL_38;
  if ( !buff->fields.passive )
    goto LABEL_30;
  if ( buff->fields.userCommandCodeId <= 0 && buff->fields.commandAssistId <= 0 )
  {
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_38;
    if ( BattleBuffData__isShow(_4__this, buff, 0LL) )
      goto LABEL_33;
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_38;
    if ( BattleBuffData__checkBuffSpecialAttack(_4__this, buff, 0LL) )
      goto LABEL_33;
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_38;
    if ( BattleBuffData__checkBuffTurnCount(_4__this, buff, 0LL) )
      goto LABEL_33;
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_38;
    if ( BattleBuffData__checkBoostSkill(_4__this, buff, 0LL) )
      goto LABEL_33;
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_38;
    if ( BattleBuffData__isShowStatusBuffOnly(_4__this, buff, 0LL) )
    {
LABEL_33:
      _4__this = (BattleBuffData_o *)this->fields.reList;
      if ( _4__this )
      {
        v12 = *(_QWORD *)&_4__this->fields.resumptionHpFromLossMaxHp;
        v13 = Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__Add__;
        ++HIDWORD(_4__this->fields.passiveList);
        if ( v12 )
        {
          passiveList_low = SLODWORD(_4__this->fields.passiveList);
          if ( (unsigned int)passiveList_low >= *(_DWORD *)(v12 + 24) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)_4__this,
              (Il2CppObject *)v6,
              *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
          }
          else
          {
            v15 = v12 + 8 * passiveList_low;
            LODWORD(_4__this->fields.passiveList) = passiveList_low + 1;
            *(_QWORD *)(v15 + 32) = v6;
            sub_1B00C70((ServantStatusBattleListViewItem_o *)(v15 + 32), (int32_t)v6, v10, v11);
          }
          return;
        }
      }
LABEL_38:
      sub_1B00F28(_4__this, v8);
    }
    if ( buff->fields.passive )
      return;
LABEL_30:
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_38;
    if ( BattleBuffData__isHide(_4__this, buff, 0LL) )
      return;
    goto LABEL_33;
  }
}


void __fastcall BattleBuffData___c__DisplayClass46_0___ctor(
        BattleBuffData___c__DisplayClass46_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleBuffData___c__DisplayClass46_0___DebugGetShowServantParamAll_b__0(
        BattleBuffData___c__DisplayClass46_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  __int64 v5; // x1
  BattleBuffData_ShowBuffData_o *v6; // x19
  const MethodInfo *v7; // x2
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_Collections_Generic_List_object__o *reList; // x0
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x8

  if ( (byte_48E4B81 & 1) == 0 )
  {
    sub_1B00CCC(&Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__Add__, buff);
    sub_1B00CCC(&BattleBuffData_ShowBuffData_TypeInfo, v5);
    byte_48E4B81 = 1;
  }
  v6 = (BattleBuffData_ShowBuffData_o *)sub_1B00F18(BattleBuffData_ShowBuffData_TypeInfo);
  BattleBuffData_ShowBuffData___ctor_41305888(v6, buff, v7);
  reList = (System_Collections_Generic_List_object__o *)this->fields.reList;
  if ( !reList
    || (items = reList->fields._items,
        v13 = Method_System_Collections_Generic_List_BattleBuffData_ShowBuffData__Add__,
        ++reList->fields._version,
        !items) )
  {
    sub_1B00F28(reList, v8);
  }
  size = reList->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_object___AddWithResize(
      reList,
      (Il2CppObject *)v6,
      *(const MethodInfo_33C19D0 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v15 = &items->obj.klass + size;
    reList->fields._size = size + 1;
    v15[4] = (Il2CppClass *)v6;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v6, v9, v10);
  }
}


void __fastcall BattleBuffData___c__DisplayClass74_0___ctor(
        BattleBuffData___c__DisplayClass74_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass74_0___RemoveLinkageBuff_b__0(
        BattleBuffData___c__DisplayClass74_0_o *this,
        BattleBuffData_BuffData_o *buff,
        int32_t indiv,
        const MethodInfo *method)
{
  unsigned int v4; // w8
  bool v5; // zf
  __int64 v6; // x8

  if ( !buff )
    goto LABEL_8;
  v4 = buff->fields.state & 0x400000;
  if ( this->fields.isFamily != v4 >> 22 )
    return 0;
  this = (BattleBuffData___c__DisplayClass74_0_o *)this->fields.__4__this;
  if ( !this )
LABEL_8:
    sub_1B00F28(this, buff);
  v5 = v4 == 0;
  v6 = 296LL;
  if ( v5 )
    v6 = 120LL;
  return BattleBuffData__checkSameElement(
           (BattleBuffData_o *)this,
           indiv,
           *(System_Int32_array **)((char *)&buff->klass + v6),
           0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass74_0___RemoveLinkageBuff_b__1(
        BattleBuffData___c__DisplayClass74_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B00F28(this, 0LL);
  return this->fields.isFamily == (((unsigned int)x->fields.state >> 22) & 1);
}


void __fastcall BattleBuffData___c__DisplayClass94_0___ctor(
        BattleBuffData___c__DisplayClass94_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleBuffData___c__DisplayClass94_0___CheckBuffGroup_b__0(
        BattleBuffData___c__DisplayClass94_0_o *this,
        int32_t target,
        const MethodInfo *method)
{
  return this->fields.attachTarget == target;
}