void AddBgmArgument___ctor(AddBgmArgument_o *this, DataVals_o *dataVal, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  struct ControlOtherBgmPriorityAtOverStageBgm_array *ControlOtherBgmPriorityAtOverStageBgmArray; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !dataVal )
    sub_1C3E7C0(v5, v6);
  ControlOtherBgmPriorityAtOverStageBgmArray = DataVals__GetControlOtherBgmPriorityAtOverStageBgmArray(dataVal, 0);
  this->fields.controlOtherBgmPriorityAtOverStageBgmArray = ControlOtherBgmPriorityAtOverStageBgmArray;
  sub_1C3E508((CGThumbnailListItem_o *)&this->fields, (int32_t)ControlOtherBgmPriorityAtOverStageBgmArray, v8, v9);
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
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *bgmList; // x19
  AddBgmArgument___c_c *v12; // x0
  System_Func_object__bool__o *_9__3_0; // x22
  Il2CppObject *v14; // x23
  struct AddBgmArgument___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x19
  __int64 v20; // x9
  int32_t *p_offset; // x10
  __int64 v22; // x0
  __int64 v23; // x1
  __int64 v24; // x19
  __int64 v25; // x8
  __int64 v26; // x9
  int *v27; // x10
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  BattleFieldEnvironmentData_BGMData_o *v33; // x22
  __int64 v34; // x23
  __int64 v35; // x0
  __int64 v36; // x1
  const MethodInfo *v37; // x2
  System_Int32_array *BuffIndividuality; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  System_Collections_Generic_IEnumerable_TSource__o *controlOtherBgmPriorityAtOverStageBgmArray; // x24
  System_Func_object__bool__o *v42; // x25
  Il2CppObject *v43; // x0
  const MethodInfo *v44; // x2
  __int64 v45; // x8
  __int64 v46; // x9
  int *v47; // x10
  __int64 v48; // x0

  if ( (byte_4C5985B & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Linq_Enumerable_FirstOrDefault_ControlOtherBgmPriorityAtOverStageBgm___);
    sub_1C3E564(&Method_System_Linq_Enumerable_Where_BattleFieldEnvironmentData_BGMData___);
    sub_1C3E564(&System_Func_ControlOtherBgmPriorityAtOverStageBgm__bool__TypeInfo);
    sub_1C3E564(&System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    sub_1C3E564(&System_IDisposable_TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerable_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_1C3E564(&System_Collections_Generic_IEnumerator_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_1C3E564(&System_Collections_IEnumerator_TypeInfo);
    sub_1C3E564(&Method_AddBgmArgument___c__ControlOtherBgmPriorityAtOverStageBgm_b__3_0__);
    sub_1C3E564(&Method_AddBgmArgument___c__DisplayClass3_0__ControlOtherBgmPriorityAtOverStageBgm_b__1__);
    sub_1C3E564(&AddBgmArgument___c__DisplayClass3_0_TypeInfo);
    sub_1C3E564(&AddBgmArgument___c_TypeInfo);
    byte_4C5985B = 1;
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
      v12 = AddBgmArgument___c_TypeInfo;
      if ( !AddBgmArgument___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AddBgmArgument___c_TypeInfo);
        v12 = AddBgmArgument___c_TypeInfo;
      }
      _9__3_0 = (System_Func_object__bool__o *)v12->static_fields->__9__3_0;
      if ( !_9__3_0 )
      {
        if ( !v12->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v12);
          v12 = AddBgmArgument___c_TypeInfo;
        }
        v14 = (Il2CppObject *)v12->static_fields->__9;
        _9__3_0 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__3_0,
          v14,
          Method_AddBgmArgument___c__ControlOtherBgmPriorityAtOverStageBgm_b__3_0__,
          0);
        static_fields = AddBgmArgument___c_TypeInfo->static_fields;
        static_fields->__9__3_0 = (struct System_Func_BattleFieldEnvironmentData_BGMData__bool__o *)_9__3_0;
        sub_1C3E508((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v16, v17);
      }
      IsHighPriorityThanBaseStageBgm = System_Linq_Enumerable__Where_object_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)bgmList,
                                         (System_Func_TSource__bool__o *)_9__3_0,
                                         (const MethodInfo_3140304 *)Method_System_Linq_Enumerable_Where_BattleFieldEnvironmentData_BGMData___);
      if ( !IsHighPriorityThanBaseStageBgm )
LABEL_47:
        sub_1C3E7C0(IsHighPriorityThanBaseStageBgm, v10);
      klass = IsHighPriorityThanBaseStageBgm->klass;
      v19 = IsHighPriorityThanBaseStageBgm;
      v20 = *(unsigned __int16 *)&IsHighPriorityThanBaseStageBgm->klass->_2.rank;
      if ( *(_WORD *)&IsHighPriorityThanBaseStageBgm->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleFieldEnvironmentData_BGMData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleFieldEnvironmentData_BGMData__TypeInfo )
        {
          --v20;
          p_offset += 4;
          if ( !v20 )
            goto LABEL_17;
        }
        v22 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_17:
        v22 = sub_1C8ED7C(
                IsHighPriorityThanBaseStageBgm,
                System_Collections_Generic_IEnumerable_BattleFieldEnvironmentData_BGMData__TypeInfo,
                0);
      }
      v24 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v22)(
              v19,
              *(_QWORD *)(v22 + 8));
      if ( !v24 )
        sub_1C3E7C0(0, v23);
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
              goto LABEL_24;
          }
          v28 = v25 + 16LL * *v27 + 312;
        }
        else
        {
LABEL_24:
          v28 = sub_1C8ED7C(v24, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v28)(v24, *(_QWORD *)(v28 + 8)) & 1) == 0 )
          break;
        v29 = *(_QWORD *)v24;
        v30 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
        {
          v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleFieldEnvironmentData_BGMData__c **)v31 - 1) != System_Collections_Generic_IEnumerator_BattleFieldEnvironmentData_BGMData__TypeInfo )
          {
            --v30;
            v31 += 4;
            if ( !v30 )
              goto LABEL_31;
          }
          v32 = v29 + 16LL * *v31 + 312;
        }
        else
        {
LABEL_31:
          v32 = sub_1C8ED7C(v24, System_Collections_Generic_IEnumerator_BattleFieldEnvironmentData_BGMData__TypeInfo, 0);
        }
        v33 = (BattleFieldEnvironmentData_BGMData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v32)(
                                                        v24,
                                                        *(_QWORD *)(v32 + 8));
        v34 = sub_1C3E7B0(AddBgmArgument___c__DisplayClass3_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v34, 0);
        if ( !v33 )
          sub_1C3E7C0(v35, v36);
        BuffIndividuality = BattleFieldEnvironmentData_BGMData__GetBuffIndividuality(v33, fieldEnv, v37);
        if ( !v34 )
          sub_1C3E7C0(BuffIndividuality, BuffIndividuality);
        *(_QWORD *)(v34 + 16) = BuffIndividuality;
        sub_1C3E508((CGThumbnailListItem_o *)(v34 + 16), (int32_t)BuffIndividuality, v39, v40);
        controlOtherBgmPriorityAtOverStageBgmArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.controlOtherBgmPriorityAtOverStageBgmArray;
        v42 = (System_Func_object__bool__o *)sub_1C3E7B0(System_Func_ControlOtherBgmPriorityAtOverStageBgm__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v42,
          (Il2CppObject *)v34,
          Method_AddBgmArgument___c__DisplayClass3_0__ControlOtherBgmPriorityAtOverStageBgm_b__1__,
          0);
        v43 = System_Linq_Enumerable__FirstOrDefault_object__51525108(
                controlOtherBgmPriorityAtOverStageBgmArray,
                (System_Func_TSource__bool__o *)v42,
                (const MethodInfo_31235F4 *)Method_System_Linq_Enumerable_FirstOrDefault_ControlOtherBgmPriorityAtOverStageBgm___);
        if ( v43 )
          ControlOtherBgmPriorityAtOverStageBgm__UpdatePriority(
            (ControlOtherBgmPriorityAtOverStageBgm_o *)v43,
            v33,
            v44);
      }
      v45 = *(_QWORD *)v24;
      v46 = *(unsigned __int16 *)(*(_QWORD *)v24 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v24 + 302LL) )
      {
        v47 = (int *)(*(_QWORD *)(v45 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v47 - 1) != System_IDisposable_TypeInfo )
        {
          --v46;
          v47 += 4;
          if ( !v46 )
            goto LABEL_41;
        }
        v48 = v45 + 16LL * *v47 + 312;
      }
      else
      {
LABEL_41:
        v48 = sub_1C8ED7C(v24, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v48)(v24, *(_QWORD *)(v48 + 8));
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

  if ( (byte_4C5985C & 1) == 0 )
  {
    sub_1C3E564(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__);
    this = (AddBgmArgument_o *)sub_1C3E564(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__get_Item__);
    byte_4C5985C = 1;
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
      *(const MethodInfo_37B5460 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    v12 = &controlOtherBgmPriorityAtOverStageBgmArray->obj.klass + klass_low;
    v9->fields._size = klass_low + 1;
    v12[4] = (Il2CppClass *)addBgm;
    sub_1C3E508((CGThumbnailListItem_o *)(v12 + 4), (int32_t)addBgm, v6, v7);
  }
  BattleFieldEnvironmentData__SortBGM_46142348(fieldEnv, v9, v13);
  this = (AddBgmArgument_o *)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)v9,
                               0,
                               (const MethodInfo_37B5190 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__get_Item__);
  if ( !this
    || (v14 = this->fields.controlOtherBgmPriorityAtOverStageBgmArray) == 0
    || !addBgm
    || (comData = addBgm->fields.comData) == 0 )
  {
LABEL_14:
    sub_1C3E7C0(this, fieldEnv);
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

  if ( (byte_4C5985D & 1) == 0 )
  {
    sub_1C3E564(&AddBgmArgument___c_TypeInfo);
    byte_4C5985D = 1;
  }
  v1 = (Il2CppObject *)sub_1C3E7B0(AddBgmArgument___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AddBgmArgument___c_TypeInfo->static_fields->__9 = (struct AddBgmArgument___c_o *)v1;
  sub_1C3E508((CGThumbnailListItem_o *)AddBgmArgument___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1C3E7C0(this, 0);
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
    sub_1C3E7C0(this, 0);
  return ControlOtherBgmPriorityAtOverStageBgm__IsMatchCond(x, this->fields.buffIndividuality, method);
}