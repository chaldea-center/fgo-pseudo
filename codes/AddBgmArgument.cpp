void AddBgmArgument___ctor(AddBgmArgument_o *this, DataVals_o *dataVal, const MethodInfo *method)
{
  __int64 v5; // x0
  struct ControlOtherBgmPriorityAtOverStageBgm_array *ControlOtherBgmPriorityAtOverStageBgmArray; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !dataVal )
    sub_1C372B4(v5);
  ControlOtherBgmPriorityAtOverStageBgmArray = DataVals__GetControlOtherBgmPriorityAtOverStageBgmArray(dataVal, 0);
  this->fields.controlOtherBgmPriorityAtOverStageBgmArray = ControlOtherBgmPriorityAtOverStageBgmArray;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)ControlOtherBgmPriorityAtOverStageBgmArray, v7, v8);
}


void AddBgmArgument__ControlOtherBgmPriorityAtOverStageBgm(
        AddBgmArgument_o *this,
        BattleFieldEnvironmentData_o *fieldEnv,
        BattleFieldEnvironmentData_BGMData_o *addBgm,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v8; // x3
  System_Collections_Generic_IEnumerable_TSource__o *IsHighPriorityThanBaseStageBgm; // x0
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *bgmList; // x19
  AddBgmArgument___c_c *v11; // x0
  System_Func_object__bool__o *_9__3_0; // x22
  Il2CppObject *v13; // x23
  struct AddBgmArgument___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x19
  __int64 v19; // x9
  int32_t *p_offset; // x10
  __int64 v21; // x0
  __int64 v22; // x19
  __int64 v23; // x8
  __int64 v24; // x9
  int *v25; // x10
  __int64 v26; // x0
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  BattleFieldEnvironmentData_BGMData_o *v31; // x22
  __int64 v32; // x23
  __int64 v33; // x0
  const MethodInfo *v34; // x2
  System_Int32_array *BuffIndividuality; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  System_Collections_Generic_IEnumerable_TSource__o *controlOtherBgmPriorityAtOverStageBgmArray; // x24
  System_Func_object__bool__o *v39; // x25
  Il2CppObject *v40; // x0
  const MethodInfo *v41; // x2
  __int64 v42; // x8
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0

  if ( (byte_4C45A7E & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_ControlOtherBgmPriorityAtOverStageBgm___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_BattleFieldEnvironmentData_BGMData___);
    sub_1C37058(&System_Func_ControlOtherBgmPriorityAtOverStageBgm__bool__TypeInfo);
    sub_1C37058(&System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    sub_1C37058(&System_IDisposable_TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerable_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_1C37058(&System_Collections_Generic_IEnumerator_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_1C37058(&System_Collections_IEnumerator_TypeInfo);
    sub_1C37058(&Method_AddBgmArgument___c__ControlOtherBgmPriorityAtOverStageBgm_b__3_0__);
    sub_1C37058(&Method_AddBgmArgument___c__DisplayClass3_0__ControlOtherBgmPriorityAtOverStageBgm_b__1__);
    sub_1C37058(&AddBgmArgument___c__DisplayClass3_0_TypeInfo);
    sub_1C37058(&AddBgmArgument___c_TypeInfo);
    byte_4C45A7E = 1;
  }
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(
                    (System_Collections_ICollection_o *)this->fields.controlOtherBgmPriorityAtOverStageBgmArray,
                    0);
  if ( !IsNullOrEmpty )
  {
    IsHighPriorityThanBaseStageBgm = (System_Collections_Generic_IEnumerable_TSource__o *)AddBgmArgument__IsHighPriorityThanBaseStageBgm(
                                                                                            (AddBgmArgument_o *)IsNullOrEmpty,
                                                                                            fieldEnv,
                                                                                            addBgm,
                                                                                            v8);
    if ( ((unsigned __int8)IsHighPriorityThanBaseStageBgm & 1) != 0 )
    {
      if ( !fieldEnv )
        goto LABEL_47;
      bgmList = fieldEnv->fields.bgmList;
      v11 = AddBgmArgument___c_TypeInfo;
      if ( !AddBgmArgument___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AddBgmArgument___c_TypeInfo);
        v11 = AddBgmArgument___c_TypeInfo;
      }
      _9__3_0 = (System_Func_object__bool__o *)v11->static_fields->__9__3_0;
      if ( !_9__3_0 )
      {
        if ( !v11->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v11);
          v11 = AddBgmArgument___c_TypeInfo;
        }
        v13 = (Il2CppObject *)v11->static_fields->__9;
        _9__3_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__3_0,
          v13,
          Method_AddBgmArgument___c__ControlOtherBgmPriorityAtOverStageBgm_b__3_0__,
          0);
        static_fields = AddBgmArgument___c_TypeInfo->static_fields;
        static_fields->__9__3_0 = (struct System_Func_BattleFieldEnvironmentData_BGMData__bool__o *)_9__3_0;
        sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v15, v16);
      }
      IsHighPriorityThanBaseStageBgm = System_Linq_Enumerable__Where_object_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)bgmList,
                                         (System_Func_TSource__bool__o *)_9__3_0,
                                         (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_BattleFieldEnvironmentData_BGMData___);
      if ( !IsHighPriorityThanBaseStageBgm )
LABEL_47:
        sub_1C372B4(IsHighPriorityThanBaseStageBgm);
      klass = IsHighPriorityThanBaseStageBgm->klass;
      v18 = IsHighPriorityThanBaseStageBgm;
      v19 = *(unsigned __int16 *)&IsHighPriorityThanBaseStageBgm->klass->_2.rank;
      if ( *(_WORD *)&IsHighPriorityThanBaseStageBgm->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleFieldEnvironmentData_BGMData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleFieldEnvironmentData_BGMData__TypeInfo )
        {
          --v19;
          p_offset += 4;
          if ( !v19 )
            goto LABEL_17;
        }
        v21 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_17:
        v21 = sub_1C87870(
                IsHighPriorityThanBaseStageBgm,
                System_Collections_Generic_IEnumerable_BattleFieldEnvironmentData_BGMData__TypeInfo,
                0);
      }
      v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v21)(
              v18,
              *(_QWORD *)(v21 + 8));
      if ( !v22 )
        sub_1C372B4(0);
      while ( 1 )
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
              goto LABEL_24;
          }
          v26 = v23 + 16LL * *v25 + 312;
        }
        else
        {
LABEL_24:
          v26 = sub_1C87870(v22, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v26)(v22, *(_QWORD *)(v26 + 8)) & 1) == 0 )
          break;
        v27 = *(_QWORD *)v22;
        v28 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
        {
          v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleFieldEnvironmentData_BGMData__c **)v29 - 1) != System_Collections_Generic_IEnumerator_BattleFieldEnvironmentData_BGMData__TypeInfo )
          {
            --v28;
            v29 += 4;
            if ( !v28 )
              goto LABEL_31;
          }
          v30 = v27 + 16LL * *v29 + 312;
        }
        else
        {
LABEL_31:
          v30 = sub_1C87870(v22, System_Collections_Generic_IEnumerator_BattleFieldEnvironmentData_BGMData__TypeInfo, 0);
        }
        v31 = (BattleFieldEnvironmentData_BGMData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v30)(
                                                        v22,
                                                        *(_QWORD *)(v30 + 8));
        v32 = sub_1C372A4(AddBgmArgument___c__DisplayClass3_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v32, 0);
        if ( !v31 )
          sub_1C372B4(v33);
        BuffIndividuality = BattleFieldEnvironmentData_BGMData__GetBuffIndividuality(v31, fieldEnv, v34);
        if ( !v32 )
          sub_1C372B4(BuffIndividuality);
        *(_QWORD *)(v32 + 16) = BuffIndividuality;
        sub_1C36FFC((CGThumbnailListItem_o *)(v32 + 16), (int32_t)BuffIndividuality, v36, v37);
        controlOtherBgmPriorityAtOverStageBgmArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.controlOtherBgmPriorityAtOverStageBgmArray;
        v39 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_ControlOtherBgmPriorityAtOverStageBgm__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v39,
          (Il2CppObject *)v32,
          Method_AddBgmArgument___c__DisplayClass3_0__ControlOtherBgmPriorityAtOverStageBgm_b__1__,
          0);
        v40 = System_Linq_Enumerable__FirstOrDefault_object__51451648(
                controlOtherBgmPriorityAtOverStageBgmArray,
                (System_Func_TSource__bool__o *)v39,
                (const MethodInfo_3111700 *)Method_System_Linq_Enumerable_FirstOrDefault_ControlOtherBgmPriorityAtOverStageBgm___);
        if ( v40 )
          ControlOtherBgmPriorityAtOverStageBgm__UpdatePriority(
            (ControlOtherBgmPriorityAtOverStageBgm_o *)v40,
            v31,
            v41);
      }
      v42 = *(_QWORD *)v22;
      v43 = *(unsigned __int16 *)(*(_QWORD *)v22 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v22 + 302LL) )
      {
        v44 = (int *)(*(_QWORD *)(v42 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
        {
          --v43;
          v44 += 4;
          if ( !v43 )
            goto LABEL_41;
        }
        v45 = v42 + 16LL * *v44 + 312;
      }
      else
      {
LABEL_41:
        v45 = sub_1C87870(v22, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v45)(v22, *(_QWORD *)(v45 + 8));
    }
  }
}


bool AddBgmArgument__IsHighPriorityThanBaseStageBgm(
        AddBgmArgument_o *this,
        BattleFieldEnvironmentData_o *fieldEnv,
        BattleFieldEnvironmentData_BGMData_o *addBgm,
        const MethodInfo *method)
{
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct ControlOtherBgmPriorityAtOverStageBgm_array *controlOtherBgmPriorityAtOverStageBgmArray; // x8
  System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *v9; // x21
  _QWORD *v10; // x9
  __int64 klass_low; // x10
  Il2CppClass **v12; // x0
  const MethodInfo *v13; // x2
  struct ControlOtherBgmPriorityAtOverStageBgm_array *v14; // x8
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x9

  if ( (byte_4C45A7F & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__);
    this = (AddBgmArgument_o *)sub_1C37058(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__get_Item__);
    byte_4C45A7F = 1;
  }
  if ( !fieldEnv )
    goto LABEL_14;
  this = (AddBgmArgument_o *)BattleFieldEnvironmentData__GetBaseBgmList(fieldEnv, (const MethodInfo *)fieldEnv);
  if ( !this )
    goto LABEL_14;
  controlOtherBgmPriorityAtOverStageBgmArray = this->fields.controlOtherBgmPriorityAtOverStageBgmArray;
  v9 = (System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *)this;
  v10 = Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__;
  ++HIDWORD(this[1].klass);
  if ( !controlOtherBgmPriorityAtOverStageBgmArray )
    goto LABEL_14;
  klass_low = SLODWORD(this[1].klass);
  if ( (unsigned int)klass_low >= LODWORD(controlOtherBgmPriorityAtOverStageBgmArray->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)addBgm,
      *(const MethodInfo_37A3024 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    v12 = &controlOtherBgmPriorityAtOverStageBgmArray->obj.klass + klass_low;
    v9->fields._size = klass_low + 1;
    v12[4] = (Il2CppClass *)addBgm;
    sub_1C36FFC((CGThumbnailListItem_o *)(v12 + 4), (int32_t)addBgm, v6, v7);
  }
  BattleFieldEnvironmentData__SortBGM_46079584(fieldEnv, v9, v13);
  this = (AddBgmArgument_o *)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)v9,
                               0,
                               (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__get_Item__);
  if ( !this
    || (v14 = this->fields.controlOtherBgmPriorityAtOverStageBgmArray) == 0
    || !addBgm
    || (comData = addBgm->fields.comData) == 0 )
  {
LABEL_14:
    sub_1C372B4(this);
  }
  return LODWORD(v14->max_length) == comData->fields.addOrder;
}


// attributes: thunk
void AddBgmArgument__PrevAddBgmProc(
        AddBgmArgument_o *this,
        BattleFieldEnvironmentData_o *fieldEnv,
        BattleFieldEnvironmentData_BGMData_o *addBgm,
        const MethodInfo *method)
{
  AddBgmArgument__ControlOtherBgmPriorityAtOverStageBgm(this, fieldEnv, addBgm, method);
}


void AddBgmArgument___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C45A80 & 1) == 0 )
  {
    sub_1C37058(&AddBgmArgument___c_TypeInfo);
    byte_4C45A80 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(AddBgmArgument___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AddBgmArgument___c_TypeInfo->static_fields->__9 = (struct AddBgmArgument___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)AddBgmArgument___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void AddBgmArgument___c___ctor(AddBgmArgument___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool AddBgmArgument___c___ControlOtherBgmPriorityAtOverStageBgm_b__3_0(
        AddBgmArgument___c_o *this,
        BattleFieldEnvironmentData_BGMData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return (((__int64 (__fastcall *)(BattleFieldEnvironmentData_BGMData_o *, const MethodInfo *, const MethodInfo *))x->klass->vtable._5_get_IsTargetBase.methodPtr)(
            x,
            x->klass->vtable._5_get_IsTargetBase.method,
            method)
        & 1) == 0;
}


void AddBgmArgument___c__DisplayClass3_0___ctor(AddBgmArgument___c__DisplayClass3_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool AddBgmArgument___c__DisplayClass3_0___ControlOtherBgmPriorityAtOverStageBgm_b__1(
        AddBgmArgument___c__DisplayClass3_0_o *this,
        ControlOtherBgmPriorityAtOverStageBgm_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return ControlOtherBgmPriorityAtOverStageBgm__IsMatchCond(x, this->fields.buffIndividuality, method);
}