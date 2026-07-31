void AddBgmArgument___ctor(AddBgmArgument_o *this, DataVals_o *dataVal, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  struct ControlOtherBgmPriorityAtOverStageBgm_array *ControlOtherBgmPriorityAtOverStageBgmArray; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !dataVal )
    sub_21FFECC(v5, v6);
  ControlOtherBgmPriorityAtOverStageBgmArray = DataVals__GetControlOtherBgmPriorityAtOverStageBgmArray(dataVal, 0);
  this->fields.controlOtherBgmPriorityAtOverStageBgmArray = ControlOtherBgmPriorityAtOverStageBgmArray;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields,
    (int32_t)ControlOtherBgmPriorityAtOverStageBgmArray,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
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
  __int64 v10; // x1
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *bgmList; // x21
  AddBgmArgument___c_c *v12; // x0
  struct AddBgmArgument___c_StaticFields *static_fields; // x8
  System_Func_object__bool__o *_9__3_0; // x22
  Il2CppObject *v15; // x23
  struct AddBgmArgument___c_StaticFields *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x21
  __int64 v25; // x9
  int32_t *p_offset; // x10
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x1
  __int64 i; // x21
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  BattleFieldEnvironmentData_BGMData_o *v41; // x21
  __int64 v42; // x22
  __int64 v43; // x0
  __int64 v44; // x1
  const MethodInfo *v45; // x2
  System_Int32_array *BuffIndividuality; // x0
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  System_Collections_Generic_IEnumerable_TSource__o *controlOtherBgmPriorityAtOverStageBgmArray; // x23
  System_Func_object__bool__o *v54; // x24
  Il2CppObject *v55; // x0
  const MethodInfo *v56; // x2
  __int64 v57; // x8
  __int64 v58; // x9
  int *v59; // x10
  __int64 v60; // x0
  __int64 v61; // [xsp+18h] [xbp-68h]

  if ( (byte_593B2DC & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Linq_Enumerable_FirstOrDefault_ControlOtherBgmPriorityAtOverStageBgm___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_BattleFieldEnvironmentData_BGMData___);
    sub_21FFC50(&System_Func_ControlOtherBgmPriorityAtOverStageBgm__bool__TypeInfo);
    sub_21FFC50(&System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_AddBgmArgument___c__ControlOtherBgmPriorityAtOverStageBgm_b__3_0__);
    sub_21FFC50(&Method_AddBgmArgument___c__DisplayClass3_0__ControlOtherBgmPriorityAtOverStageBgm_b__1__);
    sub_21FFC50(&AddBgmArgument___c__DisplayClass3_0_TypeInfo);
    sub_21FFC50(&AddBgmArgument___c_TypeInfo);
    byte_593B2DC = 1;
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
        goto LABEL_53;
      bgmList = fieldEnv->fields.bgmList;
      v12 = AddBgmArgument___c_TypeInfo;
      if ( !*(&AddBgmArgument___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(AddBgmArgument___c_TypeInfo, v10);
        v12 = AddBgmArgument___c_TypeInfo;
      }
      static_fields = v12->static_fields;
      _9__3_0 = (System_Func_object__bool__o *)static_fields->__9__3_0;
      if ( !_9__3_0 )
      {
        if ( !*(&v12->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v12, v10);
          static_fields = AddBgmArgument___c_TypeInfo->static_fields;
        }
        v15 = (Il2CppObject *)static_fields->__9;
        _9__3_0 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__3_0,
          v15,
          Method_AddBgmArgument___c__ControlOtherBgmPriorityAtOverStageBgm_b__3_0__,
          0);
        v16 = AddBgmArgument___c_TypeInfo->static_fields;
        v16->__9__3_0 = (struct System_Func_BattleFieldEnvironmentData_BGMData__bool__o *)_9__3_0;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v16->__9__3_0, (int32_t)_9__3_0, v17, v18, v19, v20, v21, v22);
      }
      IsHighPriorityThanBaseStageBgm = System_Linq_Enumerable__Where_object_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)bgmList,
                                         (System_Func_TSource__bool__o *)_9__3_0,
                                         (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_BattleFieldEnvironmentData_BGMData___);
      if ( !IsHighPriorityThanBaseStageBgm )
LABEL_53:
        sub_21FFECC(IsHighPriorityThanBaseStageBgm, v10);
      klass = IsHighPriorityThanBaseStageBgm->klass;
      v24 = IsHighPriorityThanBaseStageBgm;
      v25 = *(unsigned __int16 *)&IsHighPriorityThanBaseStageBgm->klass->_2.rank;
      if ( *(_WORD *)&IsHighPriorityThanBaseStageBgm->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleFieldEnvironmentData_BGMData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleFieldEnvironmentData_BGMData__TypeInfo )
        {
          --v25;
          p_offset += 4;
          if ( !v25 )
            goto LABEL_17;
        }
        v27 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_17:
        v27 = sub_2237E2C(
                IsHighPriorityThanBaseStageBgm,
                System_Collections_Generic_IEnumerable_BattleFieldEnvironmentData_BGMData__TypeInfo,
                0);
      }
      v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v27)(
              v24,
              *(_QWORD *)(v27 + 8));
      v61 = v28;
      if ( !v28 )
        sub_21FFECC(v28, v29);
      for ( i = v28; ; i = v61 )
      {
        v31 = *(_QWORD *)i;
        v32 = *(unsigned __int16 *)(*(_QWORD *)i + 302LL);
        if ( *(_WORD *)(*(_QWORD *)i + 302LL) )
        {
          v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v33 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v32;
            v33 += 4;
            if ( !v32 )
              goto LABEL_25;
          }
          v34 = v31 + 16LL * *v33 + 312;
        }
        else
        {
LABEL_25:
          v34 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
        }
        v35 = (*(__int64 (__fastcall **)(__int64, _QWORD))v34)(i, *(_QWORD *)(v34 + 8));
        if ( (v35 & 1) == 0 )
          break;
        if ( !v61 )
          sub_21FFECC(v35, v36);
        v37 = *(_QWORD *)v61;
        v38 = *(unsigned __int16 *)(*(_QWORD *)v61 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v61 + 302LL) )
        {
          v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleFieldEnvironmentData_BGMData__c **)v39 - 1) != System_Collections_Generic_IEnumerator_BattleFieldEnvironmentData_BGMData__TypeInfo )
          {
            --v38;
            v39 += 4;
            if ( !v38 )
              goto LABEL_33;
          }
          v40 = v37 + 16LL * *v39 + 312;
        }
        else
        {
LABEL_33:
          v40 = sub_2237E2C(v61, System_Collections_Generic_IEnumerator_BattleFieldEnvironmentData_BGMData__TypeInfo, 0);
        }
        v41 = (BattleFieldEnvironmentData_BGMData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v40)(
                                                        v61,
                                                        *(_QWORD *)(v40 + 8));
        v42 = sub_21FFEBC(AddBgmArgument___c__DisplayClass3_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v42, 0);
        if ( !v41 )
          sub_21FFECC(v43, v44);
        BuffIndividuality = BattleFieldEnvironmentData_BGMData__GetBuffIndividuality(v41, fieldEnv, v45);
        if ( !v42 )
          sub_21FFECC(BuffIndividuality, BuffIndividuality);
        *(_QWORD *)(v42 + 16) = BuffIndividuality;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)(v42 + 16),
          (int32_t)BuffIndividuality,
          v47,
          v48,
          v49,
          v50,
          v51,
          v52);
        controlOtherBgmPriorityAtOverStageBgmArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.controlOtherBgmPriorityAtOverStageBgmArray;
        v54 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_ControlOtherBgmPriorityAtOverStageBgm__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v54,
          (Il2CppObject *)v42,
          Method_AddBgmArgument___c__DisplayClass3_0__ControlOtherBgmPriorityAtOverStageBgm_b__1__,
          0);
        v55 = System_Linq_Enumerable__FirstOrDefault_object__59044732(
                controlOtherBgmPriorityAtOverStageBgmArray,
                (System_Func_TSource__bool__o *)v54,
                (const MethodInfo_384F37C *)Method_System_Linq_Enumerable_FirstOrDefault_ControlOtherBgmPriorityAtOverStageBgm___);
        if ( v55 )
          ControlOtherBgmPriorityAtOverStageBgm__UpdatePriority(
            (ControlOtherBgmPriorityAtOverStageBgm_o *)v55,
            v41,
            v56);
      }
      if ( v61 )
      {
        v57 = *(_QWORD *)v61;
        v58 = *(unsigned __int16 *)(*(_QWORD *)v61 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v61 + 302LL) )
        {
          v59 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
          while ( *((System_IDisposable_c **)v59 - 1) != System_IDisposable_TypeInfo )
          {
            --v58;
            v59 += 4;
            if ( !v58 )
              goto LABEL_46;
          }
          v60 = v57 + 16LL * *v59 + 312;
        }
        else
        {
LABEL_46:
          v60 = sub_2237E2C(v61, System_IDisposable_TypeInfo, 0);
        }
        (*(void (__fastcall **)(__int64, _QWORD))v60)(v61, *(_QWORD *)(v60 + 8));
      }
    }
  }
}


bool AddBgmArgument__IsHighPriorityThanBaseStageBgm(
        AddBgmArgument_o *this,
        BattleFieldEnvironmentData_o *fieldEnv,
        BattleFieldEnvironmentData_BGMData_o *addBgm,
        const MethodInfo *method)
{
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *v12; // x21
  struct ControlOtherBgmPriorityAtOverStageBgm_array *controlOtherBgmPriorityAtOverStageBgmArray; // x8
  _QWORD *v14; // x9
  __int64 klass_low; // x10
  Il2CppClass **v16; // x0
  const MethodInfo *v17; // x2
  struct ControlOtherBgmPriorityAtOverStageBgm_array *v18; // x8
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x9

  if ( (byte_593B2DD & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__);
    this = (AddBgmArgument_o *)sub_21FFC50(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__get_Item__);
    byte_593B2DD = 1;
  }
  if ( !fieldEnv )
    goto LABEL_14;
  this = (AddBgmArgument_o *)BattleFieldEnvironmentData__GetBaseBgmList(fieldEnv, (const MethodInfo *)fieldEnv);
  if ( !this )
    goto LABEL_14;
  v12 = (System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *)this;
  controlOtherBgmPriorityAtOverStageBgmArray = this->fields.controlOtherBgmPriorityAtOverStageBgmArray;
  v14 = Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__;
  ++HIDWORD(this[1].klass);
  if ( !controlOtherBgmPriorityAtOverStageBgmArray )
    goto LABEL_14;
  klass_low = SLODWORD(this[1].klass);
  if ( (unsigned int)klass_low >= LODWORD(controlOtherBgmPriorityAtOverStageBgmArray->max_length) )
  {
    System_Collections_Generic_List_object___AddWithResize(
      (System_Collections_Generic_List_object__o *)this,
      (Il2CppObject *)addBgm,
      *(const MethodInfo_444FB2C **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &controlOtherBgmPriorityAtOverStageBgmArray->obj.klass + klass_low;
    v12->fields._size = klass_low + 1;
    v16[4] = (Il2CppClass *)addBgm;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v16 + 4), (int32_t)addBgm, v6, v7, v8, v9, v10, v11);
  }
  BattleFieldEnvironmentData__SortBGM_53129232(fieldEnv, v12, v17);
  this = (AddBgmArgument_o *)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)v12,
                               0,
                               (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__get_Item__);
  if ( !this
    || (v18 = this->fields.controlOtherBgmPriorityAtOverStageBgmArray) == 0
    || !addBgm
    || (comData = addBgm->fields.comData) == 0 )
  {
LABEL_14:
    sub_21FFECC(this, fieldEnv);
  }
  return LODWORD(v18->max_length) == comData->fields.addOrder;
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593B2DE & 1) == 0 )
  {
    sub_21FFC50(&AddBgmArgument___c_TypeInfo);
    byte_593B2DE = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(AddBgmArgument___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AddBgmArgument___c_TypeInfo->static_fields->__9 = (struct AddBgmArgument___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)AddBgmArgument___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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
    sub_21FFECC(this, 0);
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
    sub_21FFECC(this, 0);
  return ControlOtherBgmPriorityAtOverStageBgm__IsMatchCond(x, this->fields.buffIndividuality, method);
}