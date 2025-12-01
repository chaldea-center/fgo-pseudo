void AddBgmArgument___ctor(AddBgmArgument_o *this, DataVals_o *dataVal, const MethodInfo *method)
{
  __int64 v5; // x0
  __int64 v6; // x1
  struct ControlOtherBgmPriorityAtOverStageBgm_array *ControlOtherBgmPriorityAtOverStageBgmArray; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  System_Object___ctor((Il2CppObject *)this, 0);
  if ( !dataVal )
    sub_1C71608(v5, v6);
  ControlOtherBgmPriorityAtOverStageBgmArray = DataVals__GetControlOtherBgmPriorityAtOverStageBgmArray(dataVal, 0);
  this->fields.controlOtherBgmPriorityAtOverStageBgmArray = ControlOtherBgmPriorityAtOverStageBgmArray;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)&this->fields,
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
  struct System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *bgmList; // x19
  AddBgmArgument___c_c *v12; // x0
  System_Func_object__bool__o *_9__3_0; // x22
  Il2CppObject *v14; // x23
  struct AddBgmArgument___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x19
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x19
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  BattleFieldEnvironmentData_BGMData_o *v37; // x22
  __int64 v38; // x23
  __int64 v39; // x0
  __int64 v40; // x1
  const MethodInfo *v41; // x2
  System_Int32_array *BuffIndividuality; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  System_String_o *v45; // x4
  int32_t v46; // w5
  int64_t v47; // x6
  System_String_o *v48; // x7
  System_Collections_Generic_IEnumerable_TSource__o *controlOtherBgmPriorityAtOverStageBgmArray; // x24
  System_Func_object__bool__o *v50; // x25
  Il2CppObject *v51; // x0
  const MethodInfo *v52; // x2
  __int64 v53; // x8
  __int64 v54; // x9
  int *v55; // x10
  __int64 v56; // x0

  if ( (byte_4CC9F3D & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Linq_Enumerable_FirstOrDefault_ControlOtherBgmPriorityAtOverStageBgm___);
    sub_1C713B0(&Method_System_Linq_Enumerable_Where_BattleFieldEnvironmentData_BGMData___);
    sub_1C713B0(&System_Func_ControlOtherBgmPriorityAtOverStageBgm__bool__TypeInfo);
    sub_1C713B0(&System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
    sub_1C713B0(&System_IDisposable_TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerable_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_1C713B0(&System_Collections_Generic_IEnumerator_BattleFieldEnvironmentData_BGMData__TypeInfo);
    sub_1C713B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1C713B0(&Method_AddBgmArgument___c__ControlOtherBgmPriorityAtOverStageBgm_b__3_0__);
    sub_1C713B0(&Method_AddBgmArgument___c__DisplayClass3_0__ControlOtherBgmPriorityAtOverStageBgm_b__1__);
    sub_1C713B0(&AddBgmArgument___c__DisplayClass3_0_TypeInfo);
    sub_1C713B0(&AddBgmArgument___c_TypeInfo);
    byte_4CC9F3D = 1;
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
        _9__3_0 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_BattleFieldEnvironmentData_BGMData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__3_0,
          v14,
          Method_AddBgmArgument___c__ControlOtherBgmPriorityAtOverStageBgm_b__3_0__,
          0);
        static_fields = AddBgmArgument___c_TypeInfo->static_fields;
        static_fields->__9__3_0 = (struct System_Func_BattleFieldEnvironmentData_BGMData__bool__o *)_9__3_0;
        sub_1C71354(
          (GrandQuestFolderBoardItem_o *)&static_fields->__9__3_0,
          (int32_t)_9__3_0,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21);
      }
      IsHighPriorityThanBaseStageBgm = System_Linq_Enumerable__Where_object_(
                                         (System_Collections_Generic_IEnumerable_TSource__o *)bgmList,
                                         (System_Func_TSource__bool__o *)_9__3_0,
                                         (const MethodInfo_3192108 *)Method_System_Linq_Enumerable_Where_BattleFieldEnvironmentData_BGMData___);
      if ( !IsHighPriorityThanBaseStageBgm )
LABEL_47:
        sub_1C71608(IsHighPriorityThanBaseStageBgm, v10);
      klass = IsHighPriorityThanBaseStageBgm->klass;
      v23 = IsHighPriorityThanBaseStageBgm;
      v24 = *(unsigned __int16 *)&IsHighPriorityThanBaseStageBgm->klass->_2.rank;
      if ( *(_WORD *)&IsHighPriorityThanBaseStageBgm->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleFieldEnvironmentData_BGMData__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleFieldEnvironmentData_BGMData__TypeInfo )
        {
          --v24;
          p_offset += 4;
          if ( !v24 )
            goto LABEL_17;
        }
        v26 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_17:
        v26 = sub_1C47738(
                IsHighPriorityThanBaseStageBgm,
                System_Collections_Generic_IEnumerable_BattleFieldEnvironmentData_BGMData__TypeInfo,
                0);
      }
      v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))v26)(
              v23,
              *(_QWORD *)(v26 + 8));
      if ( !v28 )
        sub_1C71608(0, v27);
      while ( 1 )
      {
        v29 = *(_QWORD *)v28;
        v30 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
        {
          v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v31 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v30;
            v31 += 4;
            if ( !v30 )
              goto LABEL_24;
          }
          v32 = v29 + 16LL * *v31 + 312;
        }
        else
        {
LABEL_24:
          v32 = sub_1C47738(v28, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v28, *(_QWORD *)(v32 + 8)) & 1) == 0 )
          break;
        v33 = *(_QWORD *)v28;
        v34 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
        {
          v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleFieldEnvironmentData_BGMData__c **)v35 - 1) != System_Collections_Generic_IEnumerator_BattleFieldEnvironmentData_BGMData__TypeInfo )
          {
            --v34;
            v35 += 4;
            if ( !v34 )
              goto LABEL_31;
          }
          v36 = v33 + 16LL * *v35 + 312;
        }
        else
        {
LABEL_31:
          v36 = sub_1C47738(v28, System_Collections_Generic_IEnumerator_BattleFieldEnvironmentData_BGMData__TypeInfo, 0);
        }
        v37 = (BattleFieldEnvironmentData_BGMData_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v36)(
                                                        v28,
                                                        *(_QWORD *)(v36 + 8));
        v38 = sub_1C715FC(AddBgmArgument___c__DisplayClass3_0_TypeInfo);
        System_Object___ctor((Il2CppObject *)v38, 0);
        if ( !v37 )
          sub_1C71608(v39, v40);
        BuffIndividuality = BattleFieldEnvironmentData_BGMData__GetBuffIndividuality(v37, fieldEnv, v41);
        if ( !v38 )
          sub_1C71608(BuffIndividuality, BuffIndividuality);
        *(_QWORD *)(v38 + 16) = BuffIndividuality;
        sub_1C71354((GrandQuestFolderBoardItem_o *)(v38 + 16), (int32_t)BuffIndividuality, v43, v44, v45, v46, v47, v48);
        controlOtherBgmPriorityAtOverStageBgmArray = (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.controlOtherBgmPriorityAtOverStageBgmArray;
        v50 = (System_Func_object__bool__o *)sub_1C715FC(System_Func_ControlOtherBgmPriorityAtOverStageBgm__bool__TypeInfo);
        System_Func_object__bool____ctor(
          v50,
          (Il2CppObject *)v38,
          Method_AddBgmArgument___c__DisplayClass3_0__ControlOtherBgmPriorityAtOverStageBgm_b__1__,
          0);
        v51 = System_Linq_Enumerable__FirstOrDefault_object__51858576(
                controlOtherBgmPriorityAtOverStageBgmArray,
                (System_Func_TSource__bool__o *)v50,
                (const MethodInfo_3174C90 *)Method_System_Linq_Enumerable_FirstOrDefault_ControlOtherBgmPriorityAtOverStageBgm___);
        if ( v51 )
          ControlOtherBgmPriorityAtOverStageBgm__UpdatePriority(
            (ControlOtherBgmPriorityAtOverStageBgm_o *)v51,
            v37,
            v52);
      }
      v53 = *(_QWORD *)v28;
      v54 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
      {
        v55 = (int *)(*(_QWORD *)(v53 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v55 - 1) != System_IDisposable_TypeInfo )
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
        v56 = sub_1C47738(v28, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v56)(v28, *(_QWORD *)(v56 + 8));
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  struct ControlOtherBgmPriorityAtOverStageBgm_array *controlOtherBgmPriorityAtOverStageBgmArray; // x8
  System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *v13; // x21
  _QWORD *v14; // x9
  __int64 klass_low; // x10
  Il2CppClass **v16; // x0
  const MethodInfo *v17; // x2
  struct ControlOtherBgmPriorityAtOverStageBgm_array *v18; // x8
  struct BattleFieldEnvironmentData_CommonData_o *comData; // x9

  if ( (byte_4CC9F3E & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__Add__);
    this = (AddBgmArgument_o *)sub_1C713B0(&Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__get_Item__);
    byte_4CC9F3E = 1;
  }
  if ( !fieldEnv )
    goto LABEL_14;
  this = (AddBgmArgument_o *)BattleFieldEnvironmentData__GetBaseBgmList(fieldEnv, (const MethodInfo *)fieldEnv);
  if ( !this )
    goto LABEL_14;
  controlOtherBgmPriorityAtOverStageBgmArray = this->fields.controlOtherBgmPriorityAtOverStageBgmArray;
  v13 = (System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__o *)this;
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
      *(const MethodInfo_3810718 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v16 = &controlOtherBgmPriorityAtOverStageBgmArray->obj.klass + klass_low;
    v13->fields._size = klass_low + 1;
    v16[4] = (Il2CppClass *)addBgm;
    sub_1C71354((GrandQuestFolderBoardItem_o *)(v16 + 4), (int32_t)addBgm, v6, v7, v8, v9, v10, v11);
  }
  BattleFieldEnvironmentData__SortBGM_46408316(fieldEnv, v13, v17);
  this = (AddBgmArgument_o *)System_Collections_Generic_List_object___get_Item(
                               (System_Collections_Generic_List_object__o *)v13,
                               0,
                               (const MethodInfo_3810448 *)Method_System_Collections_Generic_List_BattleFieldEnvironmentData_BGMData__get_Item__);
  if ( !this
    || (v18 = this->fields.controlOtherBgmPriorityAtOverStageBgmArray) == 0
    || !addBgm
    || (comData = addBgm->fields.comData) == 0 )
  {
LABEL_14:
    sub_1C71608(this, fieldEnv);
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CC9F3F & 1) == 0 )
  {
    sub_1C713B0(&AddBgmArgument___c_TypeInfo);
    byte_4CC9F3F = 1;
  }
  v1 = (Il2CppObject *)sub_1C715FC(AddBgmArgument___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AddBgmArgument___c_TypeInfo->static_fields->__9 = (struct AddBgmArgument___c_o *)v1;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)AddBgmArgument___c_TypeInfo->static_fields,
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
    sub_1C71608(this, 0);
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
    sub_1C71608(this, 0);
  return ControlOtherBgmPriorityAtOverStageBgm__IsMatchCond(x, this->fields.buffIndividuality, method);
}