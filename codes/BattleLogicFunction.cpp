void __fastcall BattleLogicFunction___ctor(BattleLogicFunction_o *this, const MethodInfo *method)
{
  struct System_Int32_array *v3; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  il2cpp_array_size_t max_length; // w9
  System_Collections_Generic_Dictionary_TKey__TValue__o *v8; // x20
  BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *v9; // x21
  BattleLogicFunctionProcess_AddStateProcess_o *v10; // x21
  BattleLogicFunctionProcess_AddStateShortProcess_o *v11; // x21
  BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *v12; // x21
  BattleLogicFunctionProcess_TransformServantProcess_o *v13; // x21
  BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *v14; // x21
  BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *v15; // x21
  BattleLogicFunctionProcess_CommonAddStateProcess_o *v16; // x21
  BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *v17; // x21
  int32_t v18; // w2
  int32_t v19; // w3

  if ( (byte_4A5DCB5 & 1) == 0 )
  {
    sub_1B885B0(&BattleLogicFunctionProcess_AddStateProcess_TypeInfo);
    sub_1B885B0(&BattleLogicFunctionProcess_AddStateShortProcess_TypeInfo);
    sub_1B885B0(&BattleLogicFunctionProcess_CommonAddStateProcess_TypeInfo);
    sub_1B885B0(&BattleLogicFunctionProcess_CommonFieldFunctionProcess_TypeInfo);
    sub_1B885B0(&BattleLogicFunctionProcess_CommonFunctionTypeProcess_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&BattleLogicFunctionProcess_MoveToLastSubMemberProcess_TypeInfo);
    sub_1B885B0(&BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_TypeInfo);
    sub_1B885B0(&BattleLogicFunctionProcess_TransformServantProcess_TypeInfo);
    byte_4A5DCB5 = 1;
  }
  v3 = (struct System_Int32_array *)sub_1B88658(int___TypeInfo, 2LL);
  if ( !v3 )
    goto LABEL_8;
  max_length = v3->max_length;
  if ( !max_length || (v3->m_Items[1] = 701601, max_length == 1) )
    sub_1B88814(v3, v3);
  v3->m_Items[2] = 701602;
  this->fields.tamamocatTreasureDeviceIds = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.tamamocatTreasureDeviceIds, (int32_t)v3, v5, v6);
  v8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B887FC(System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__TypeInfo);
  System_Collections_Generic_Dictionary_Int32Enum__object____ctor(
    v8,
    (const MethodInfo_319C86C *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess___ctor__);
  v9 = (BattleLogicFunctionProcess_CommonFunctionTypeProcess_o *)sub_1B887FC(BattleLogicFunctionProcess_CommonFunctionTypeProcess_TypeInfo);
  BattleLogicFunctionProcess_CommonFunctionTypeProcess___ctor(v9, 0LL);
  if ( !v8 )
LABEL_8:
    sub_1B8880C(v3, v4);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v8,
    0,
    (Il2CppObject *)v9,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v10 = (BattleLogicFunctionProcess_AddStateProcess_o *)sub_1B887FC(BattleLogicFunctionProcess_AddStateProcess_TypeInfo);
  BattleLogicFunctionProcess_AddStateProcess___ctor(v10, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v8,
    1,
    (Il2CppObject *)v10,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v11 = (BattleLogicFunctionProcess_AddStateShortProcess_o *)sub_1B887FC(BattleLogicFunctionProcess_AddStateShortProcess_TypeInfo);
  BattleLogicFunctionProcess_AddStateShortProcess___ctor(v11, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v8,
    16,
    (Il2CppObject *)v11,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v12 = (BattleLogicFunctionProcess_MoveToLastSubMemberProcess_o *)sub_1B887FC(BattleLogicFunctionProcess_MoveToLastSubMemberProcess_TypeInfo);
  BattleLogicFunctionProcess_MoveToLastSubMemberProcess___ctor(v12, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v8,
    61,
    (Il2CppObject *)v12,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v13 = (BattleLogicFunctionProcess_TransformServantProcess_o *)sub_1B887FC(BattleLogicFunctionProcess_TransformServantProcess_TypeInfo);
  BattleLogicFunctionProcess_TransformServantProcess___ctor(v13, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v8,
    109,
    (Il2CppObject *)v13,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v14 = (BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *)sub_1B887FC(BattleLogicFunctionProcess_CommonFieldFunctionProcess_TypeInfo);
  BattleLogicFunctionProcess_CommonFieldFunctionProcess___ctor(v14, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v8,
    29,
    (Il2CppObject *)v14,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v15 = (BattleLogicFunctionProcess_CommonFieldFunctionProcess_o *)sub_1B887FC(BattleLogicFunctionProcess_CommonFieldFunctionProcess_TypeInfo);
  BattleLogicFunctionProcess_CommonFieldFunctionProcess___ctor(v15, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v8,
    128,
    (Il2CppObject *)v15,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v16 = (BattleLogicFunctionProcess_CommonAddStateProcess_o *)sub_1B887FC(BattleLogicFunctionProcess_CommonAddStateProcess_TypeInfo);
  BattleLogicFunctionProcess_CommonAddStateProcess___ctor(v16, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v8,
    130,
    (Il2CppObject *)v16,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  v17 = (BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_o *)sub_1B887FC(BattleLogicFunctionProcess_ToFieldCommonFunctionProcess_TypeInfo);
  BattleLogicFunctionProcess_ToFieldCommonFunctionProcess___ctor(v17, 0LL);
  System_Collections_Generic_Dictionary_Int32Enum__object___Add(
    v8,
    131,
    (Il2CppObject *)v17,
    (const MethodInfo_319D240 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__Add__);
  this->fields.dicFuncProcess = (struct System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__o *)v8;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.dicFuncProcess, (int32_t)v8, v18, v19);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleActionData_o *__fastcall BattleLogicFunction__AbsorbNpPoint(
        BattleLogicFunction_o *this,
        BattleActionData_o *mainAction,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        NpGaugeAbsorbResult_o *result,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v8; // x21
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x22
  DataVals_o *dataVals_k__BackingField; // x24
  BattleActionData_o *v12; // x23
  System_Collections_Generic_List_T__o *v13; // x25
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  struct BattleLogic_o *logic; // x8
  unsigned __int64 v18; // x9
  DataVals_o *v19; // x26
  const MethodInfo *v20; // x4
  BattleLogicFunction_c *klass; // x8
  BattleLogicFunction_o *v22; // x25
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 v25; // x0
  __int64 v26; // x1
  __int64 v27; // x25
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  __int64 v32; // x8
  __int64 v33; // x9
  int *v34; // x10
  __int64 v35; // x0
  __int64 v36; // x0
  __int64 v37; // x1
  __int64 v38; // x27
  __int64 v39; // x0
  __int64 v40; // x1
  int32_t v41; // w2
  const MethodInfo *v42; // x6
  int32_t v43; // w27
  BattleActionData_o *v44; // x0
  int32_t v45; // w28
  int32_t funcIndex; // w28
  bool IsCommandSideEffect; // w0
  const MethodInfo *v48; // x7
  BattleActionData_o *NoEffectObject; // x0
  __int64 v50; // x8
  __int64 v51; // x9
  int *v52; // x10
  __int64 v53; // x0
  BattleLogicFunction_o *v55; // [xsp+8h] [xbp-78h]
  unsigned __int64 v56; // [xsp+10h] [xbp-70h]
  int32_t diffNp; // [xsp+1Ch] [xbp-64h] BYREF

  v8 = this;
  if ( (byte_4A5DC98 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
    this = (BattleLogicFunction_o *)sub_1B885B0(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
    byte_4A5DC98 = 1;
  }
  if ( !funcTarget )
    goto LABEL_65;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_65;
  procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v12 = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v12, 0LL);
  v13 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v13,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v13 )
    goto LABEL_65;
  items = v13->fields._items;
  v15 = Method_System_Collections_Generic_List_FuncList_TYPE__Add__;
  ++v13->fields._version;
  if ( !items )
    goto LABEL_65;
  size = v13->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v13,
      8,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
  }
  else
  {
    v13->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 8;
  }
  if ( !dataVals_k__BackingField )
    goto LABEL_65;
  this = (BattleLogicFunction_o *)DataVals__GetDependDataValsArray(
                                    dataVals_k__BackingField,
                                    (System_Collections_Generic_List_FuncList_TYPE__o *)v13,
                                    0,
                                    0LL);
  if ( !this )
    goto LABEL_65;
  logic = this->fields.logic;
  if ( (int)logic >= 1 )
  {
    v18 = 0LL;
    v55 = this;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)logic )
        sub_1B88814(this, mainAction);
      v19 = (DataVals_o *)*((_QWORD *)&this->fields.logictarget + v18);
      diffNp = 0;
      if ( !result )
        break;
      this = (BattleLogicFunction_o *)result->fields._Convert_k__BackingField;
      v56 = v18;
      if ( !this )
        break;
      ((void (__fastcall *)(BattleLogicFunction_o *, DataVals_o *, void *))this->klass[1]._1.namespaze)(
        this,
        v19,
        this->klass[1]._1.byval_arg.data);
      this = (BattleLogicFunction_o *)BattleLogicFunction__GetDependFuncTargets(
                                        v8,
                                        procArg_k__BackingField,
                                        mainAction,
                                        v19,
                                        v20);
      if ( !this )
        break;
      klass = this->klass;
      v22 = this;
      v23 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__c **)p_offset
                - 1) != System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
        {
          --v23;
          p_offset += 4;
          if ( !v23 )
            goto LABEL_22;
        }
        v25 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_22:
        v25 = sub_1BDA590(
                this,
                System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0LL);
      }
      v27 = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, _QWORD))v25)(v22, *(_QWORD *)(v25 + 8));
      if ( !v27 )
        sub_1B8880C(0LL, v26);
      while ( 1 )
      {
        v28 = *(_QWORD *)v27;
        v29 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
        {
          v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v30 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v29;
            v30 += 4;
            if ( !v29 )
              goto LABEL_29;
          }
          v31 = v28 + 16LL * *v30 + 312;
        }
        else
        {
LABEL_29:
          v31 = sub_1BDA590(v27, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v27, *(_QWORD *)(v31 + 8)) & 1) == 0 )
          break;
        v32 = *(_QWORD *)v27;
        v33 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
        {
          v34 = (int *)(*(_QWORD *)(v32 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v34 - 1) != System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
          {
            --v33;
            v34 += 4;
            if ( !v33 )
              goto LABEL_36;
          }
          v35 = v32 + 16LL * *v34 + 312;
        }
        else
        {
LABEL_36:
          v35 = sub_1BDA590(
                  v27,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0LL);
        }
        v36 = (*(__int64 (__fastcall **)(__int64, _QWORD))v35)(v27, *(_QWORD *)(v35 + 8));
        v38 = v36;
        if ( !v36 )
          sub_1B8880C(0LL, v37);
        v39 = (*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v36 + 392LL))(
                v36,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v36 + 400LL));
        if ( (v39 & 1) != 0 )
        {
          if ( !mainAction )
            sub_1B8880C(v39, v40);
          v43 = *(_DWORD *)(v38 + 32);
          v44 = BattleLogicFunction__functionLossNp(v8, procArg_k__BackingField, v41, v43, v19, &diffNp, v42);
          v45 = diffNp;
          if ( diffNp < 1 )
          {
            if ( v44 )
            {
              if ( !v19 )
                sub_1B8880C(v44, v44);
              if ( !procArg_k__BackingField )
                sub_1B8880C(v44, v44);
              funcIndex = v19->fields.funcIndex;
              IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
                                      procArg_k__BackingField,
                                      0LL);
              NoEffectObject = BattleLogicFunction__getNoEffectObject(
                                 v8,
                                 v43,
                                 funcIndex,
                                 v19,
                                 IsCommandSideEffect,
                                 0LL,
                                 0LL,
                                 v48);
              if ( !v12 )
                sub_1B8880C(NoEffectObject, NoEffectObject);
              BattleActionData__addAction(v12, NoEffectObject, 0LL);
            }
          }
          else
          {
            if ( !v12 )
              sub_1B8880C(v44, v44);
            BattleActionData__addAction(v12, v44, 0LL);
            NpGaugeAbsorbResult__AddPoint(result, v45, 0LL);
          }
        }
      }
      v50 = *(_QWORD *)v27;
      v51 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
      {
        v52 = (int *)(*(_QWORD *)(v50 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v52 - 1) != System_IDisposable_TypeInfo )
        {
          --v51;
          v52 += 4;
          if ( !v51 )
            goto LABEL_53;
        }
        v53 = v50 + 16LL * *v52 + 312;
      }
      else
      {
LABEL_53:
        v53 = sub_1BDA590(v27, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v53)(v27, *(_QWORD *)(v53 + 8));
      this = v55;
      LODWORD(logic) = v55->fields.logic;
      v18 = v56 + 1;
      if ( (__int64)(v56 + 1) >= (int)logic )
        return v12;
    }
LABEL_65:
    sub_1B8880C(this, mainAction);
  }
  return v12;
}


BattleActionData_o *__fastcall BattleLogicFunction__AbsorbNpTurn(
        BattleLogicFunction_o *this,
        BattleActionData_o *mainAction,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        NpGaugeAbsorbResult_o *result,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v7; // x21
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x24
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x22
  BattleActionData_o *v11; // x23
  System_Collections_Generic_List_T__o *v12; // x25
  struct System_Object_array *items; // x8
  _QWORD *v14; // x9
  __int64 size; // x10
  struct BattleLogic_o *logic; // x8
  unsigned __int64 v17; // x9
  DataVals_o *v18; // x26
  const MethodInfo *v19; // x4
  BattleLogicFunction_c *klass; // x8
  BattleLogicFunction_o *v21; // x25
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x25
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x27
  __int64 v38; // x0
  __int64 v39; // x1
  int32_t v40; // w27
  FunctionEntity_o *funcEnt; // x28
  int32_t funcIndex; // w29
  bool IsCommandSideEffect; // w0
  const MethodInfo *v44; // x7
  BattleActionData_o *v45; // x0
  __int64 v46; // x8
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  BattleLogicFunction_o *v51; // [xsp+0h] [xbp-80h]
  unsigned __int64 v52; // [xsp+8h] [xbp-78h]
  int32_t absorptionCount; // [xsp+1Ch] [xbp-64h] BYREF

  v7 = this;
  if ( (byte_4A5DC97 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
    this = (BattleLogicFunction_o *)sub_1B885B0(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
    byte_4A5DC97 = 1;
  }
  if ( !funcTarget )
    goto LABEL_59;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_59;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_59;
  procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField;
  v11 = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v11, 0LL);
  v12 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v12,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v12 )
    goto LABEL_59;
  items = v12->fields._items;
  v14 = Method_System_Collections_Generic_List_FuncList_TYPE__Add__;
  ++v12->fields._version;
  if ( !items )
    goto LABEL_59;
  size = v12->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v12,
      20,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
  }
  else
  {
    v12->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 20;
  }
  this = (BattleLogicFunction_o *)DataVals__GetDependDataValsArray(
                                    dataVals_k__BackingField,
                                    (System_Collections_Generic_List_FuncList_TYPE__o *)v12,
                                    0,
                                    0LL);
  if ( !this )
    goto LABEL_59;
  logic = this->fields.logic;
  if ( (int)logic >= 1 )
  {
    v17 = 0LL;
    v51 = this;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)logic )
        sub_1B88814(this, mainAction);
      v18 = (DataVals_o *)*((_QWORD *)&this->fields.logictarget + v17);
      absorptionCount = 0;
      if ( !result )
        break;
      this = (BattleLogicFunction_o *)result->fields._Convert_k__BackingField;
      v52 = v17;
      if ( !this )
        break;
      ((void (__fastcall *)(BattleLogicFunction_o *, DataVals_o *, void *))this->klass[1]._1.namespaze)(
        this,
        v18,
        this->klass[1]._1.byval_arg.data);
      this = (BattleLogicFunction_o *)BattleLogicFunction__GetDependFuncTargets(
                                        v7,
                                        procArg_k__BackingField,
                                        mainAction,
                                        v18,
                                        v19);
      if ( !this )
        break;
      klass = this->klass;
      v21 = this;
      v22 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__c **)p_offset
                - 1) != System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
        {
          --v22;
          p_offset += 4;
          if ( !v22 )
            goto LABEL_22;
        }
        v24 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_22:
        v24 = sub_1BDA590(
                this,
                System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0LL);
      }
      v26 = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, _QWORD))v24)(v21, *(_QWORD *)(v24 + 8));
      if ( !v26 )
        sub_1B8880C(0LL, v25);
      while ( 1 )
      {
        v27 = *(_QWORD *)v26;
        v28 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
        {
          v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v29 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v28;
            v29 += 4;
            if ( !v28 )
              goto LABEL_29;
          }
          v30 = v27 + 16LL * *v29 + 312;
        }
        else
        {
LABEL_29:
          v30 = sub_1BDA590(v26, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v26, *(_QWORD *)(v30 + 8)) & 1) == 0 )
          break;
        v31 = *(_QWORD *)v26;
        v32 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
        {
          v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v33 - 1) != System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
          {
            --v32;
            v33 += 4;
            if ( !v32 )
              goto LABEL_36;
          }
          v34 = v31 + 16LL * *v33 + 312;
        }
        else
        {
LABEL_36:
          v34 = sub_1BDA590(
                  v26,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0LL);
        }
        v35 = (*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v26, *(_QWORD *)(v34 + 8));
        v37 = v35;
        if ( !v35 )
          sub_1B8880C(0LL, v36);
        v38 = (*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v35 + 392LL))(
                v35,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v35 + 400LL));
        if ( (v38 & 1) != 0 )
        {
          if ( !v18 )
            sub_1B8880C(v38, v39);
          if ( !procArg_k__BackingField )
            sub_1B8880C(v38, v39);
          v40 = *(_DWORD *)(v37 + 32);
          funcEnt = v18->fields.funcEnt;
          funcIndex = v18->fields.funcIndex;
          IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
                                  procArg_k__BackingField,
                                  0LL);
          v45 = BattleLogicFunction__functionDelayNpTurn(
                  v7,
                  v40,
                  funcEnt,
                  v18,
                  funcIndex,
                  IsCommandSideEffect,
                  &absorptionCount,
                  v44);
          if ( !v11 )
            sub_1B8880C(v45, v45);
          BattleActionData__addAction(v11, v45, 0LL);
          if ( absorptionCount >= 1 )
            NpGaugeAbsorbResult__AddTurn(result, absorptionCount, 0LL);
        }
      }
      v46 = *(_QWORD *)v26;
      v47 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
      {
        v48 = (int *)(*(_QWORD *)(v46 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
        {
          --v47;
          v48 += 4;
          if ( !v47 )
            goto LABEL_49;
        }
        v49 = v46 + 16LL * *v48 + 312;
      }
      else
      {
LABEL_49:
        v49 = sub_1BDA590(v26, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v49)(v26, *(_QWORD *)(v49 + 8));
      this = v51;
      LODWORD(logic) = v51->fields.logic;
      v17 = v52 + 1;
      if ( (__int64)(v52 + 1) >= (int)logic )
        return v11;
    }
LABEL_59:
    sub_1B8880C(this, mainAction);
  }
  return v11;
}


void __fastcall BattleLogicFunction__AfterAddedBuffProcess(
        BattleLogicFunction_o *this,
        BattleServantData_o *targetSvtData,
        BuffEntity_o *buffEnt,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v6; // x21
  UnityEngine_Object_o *logic; // x22
  UnityEngine_Object_o *ServantActor; // x22
  struct BattleLogic_o *v9; // x8

  v6 = this;
  if ( (byte_4A5DC73 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DC73 = 1;
  }
  if ( !buffEnt )
    goto LABEL_18;
  if ( buffEnt->fields.effectId >= 1 )
  {
    logic = (UnityEngine_Object_o *)v6->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality(logic, 0LL, 0LL);
    ServantActor = 0LL;
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v9 = v6->fields.logic;
      if ( !v9 )
        goto LABEL_18;
      if ( !targetSvtData )
        goto LABEL_18;
      this = (BattleLogicFunction_o *)v9->fields.perf;
      if ( !this )
        goto LABEL_18;
      ServantActor = (UnityEngine_Object_o *)BattlePerformance__getServantActor(
                                               (BattlePerformance_o *)this,
                                               targetSvtData->fields.uniqueId,
                                               0LL);
    }
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality(ServantActor, 0LL, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      if ( ServantActor )
      {
        BattleActorControl__AddReservedEffectBuffEffectId(
          (BattleActorControl_o *)ServantActor,
          buffEnt->fields.effectId,
          0LL);
        return;
      }
LABEL_18:
      sub_1B8880C(this, targetSvtData);
    }
  }
}


void __fastcall BattleLogicFunction__ApplySubBuffChanges(
        BattleLogicFunction_o *this,
        BattleActionData_o *actionData,
        System_Collections_Generic_List_BattleBuffData_BuffData__o *subBuffList,
        int32_t targetId,
        BattleServantSnapShotOnBuffUpdate_o *svtSnapShotOnBuffUpdate,
        DataVals_o *baseVals,
        int32_t index,
        bool isCommandSideEffect,
        BattleLogicFunction_ProcListInArgs_o *args,
        const MethodInfo *method)
{
  __int64 v18; // x27
  __int64 v19; // x1
  BattleData_o *data; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  BattleServantData_o **v23; // x23
  const MethodInfo *v24; // x6
  int32_t m_CancellationTokenSource; // w28
  int32_t AuraSum_k__BackingField; // w29
  BattleServantData_o *v27; // x24
  System_Func_object__object__o *v28; // x26
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Collections_Generic_List_TSource__o *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  _BOOL8 v33; // x0
  __int64 v34; // x1
  Il2CppObject *current; // x25
  BattleData_o *v36; // x0
  _BOOL8 v37; // x0
  __int64 v38; // x1
  BattleLogicFunction___c_c *v39; // x0
  System_Func_object__bool__o *_9__70_1; // x25
  Il2CppObject *v41; // x26
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v43; // w2
  int32_t v44; // w3
  struct BattleData_o *v45; // x8
  BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x22
  BattleActionEffect_ChangeBgmBuff_o *v47; // x22
  int32_t MaxHp_k__BackingField; // w22
  BattleActionEffect_SubChangeMaxHpBuff_o *v49; // x21
  unsigned int uniqueId; // w22
  BattleData_o *v51; // x20
  BattleActionEffect_Base_o *v52; // x0
  System_Collections_Generic_List_Enumerator_object__o v53; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v54; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A5DC7F & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_BattleBuffData_BuffData___);
    sub_1B885B0(&BattleActionEffect_ChangeBgmBuff_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_1B885B0(&System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
    sub_1B885B0(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
    sub_1B885B0(&BattleActionEffect_SubChangeMaxHpBuff_TypeInfo);
    sub_1B885B0(&Method_BattleLogicFunction___c__ApplySubBuffChanges_b__70_1__);
    sub_1B885B0(&Method_BattleLogicFunction___c__DisplayClass70_0__ApplySubBuffChanges_b__0__);
    sub_1B885B0(&BattleLogicFunction___c__DisplayClass70_0_TypeInfo);
    sub_1B885B0(&BattleLogicFunction___c_TypeInfo);
    byte_4A5DC7F = 1;
  }
  memset(&v54, 0, sizeof(v54));
  v18 = sub_1B887FC(BattleLogicFunction___c__DisplayClass70_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass70_0___ctor((BattleLogicFunction___c__DisplayClass70_0_o *)v18, 0LL);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)subBuffList, 0LL) )
  {
    data = this->fields.data;
    if ( data )
    {
      data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL);
      if ( v18 )
      {
        *(_QWORD *)(v18 + 16) = data;
        v23 = (BattleServantData_o **)(v18 + 16);
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 16), (int32_t)data, v21, v22);
        data = *(BattleData_o **)(v18 + 16);
        if ( data )
        {
          data = (BattleData_o *)BattleServantData__getAuraIdList((BattleServantData_o *)data, 0LL);
          if ( data )
          {
            if ( svtSnapShotOnBuffUpdate )
            {
              if ( baseVals )
              {
                if ( *v23 )
                {
                  m_CancellationTokenSource = (int32_t)data->fields.m_CancellationTokenSource;
                  AuraSum_k__BackingField = svtSnapShotOnBuffUpdate->fields._AuraSum_k__BackingField;
                  data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                                           (BattleLogicFunction_o *)data,
                                           baseVals->fields.funcEnt,
                                           (*v23)->fields.uniqueId,
                                           index,
                                           isCommandSideEffect,
                                           0LL,
                                           v24);
                  if ( data )
                  {
                    BYTE4(data->fields.boostSkillInfo) = AuraSum_k__BackingField > m_CancellationTokenSource;
                    v27 = (BattleServantData_o *)data;
                    v28 = (System_Func_object__object__o *)sub_1B887FC(System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
                    System_Func_object__object____ctor(
                      v28,
                      (Il2CppObject *)v18,
                      Method_BattleLogicFunction___c__DisplayClass70_0__ApplySubBuffChanges_b__0__,
                      0LL);
                    v29 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)subBuffList,
                                                                                 (System_Func_TSource__TResult__o *)v28,
                                                                                 (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
                    v30 = System_Linq_Enumerable__ToList_object_(
                            v29,
                            (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
                    *(_QWORD *)&v27->fields._iconLimitCount_k__BackingField.fields.fakeValue = v30;
                    sub_1B88554(
                      (ServantStatusBattleListViewItem_o *)&v27->fields._iconLimitCount_k__BackingField.fields.fakeValue,
                      (int32_t)v30,
                      v31,
                      v32);
                    if ( actionData )
                    {
                      BattleActionData__setBuffData(actionData, (BattleActionData_BuffData_o *)v27, baseVals, 0LL);
                      if ( subBuffList )
                      {
                        System_Collections_Generic_List_object___GetEnumerator(
                          (System_Collections_Generic_List_Enumerator_T__o *)&v53,
                          (System_Collections_Generic_List_object__o *)subBuffList,
                          (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
                        v54 = v53;
                        while ( 1 )
                        {
                          v33 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                                  &v54,
                                  (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
                          if ( !v33 )
                            break;
                          current = v54.fields._current;
                          if ( !v54.fields._current )
                            sub_1B8880C(v33, v34);
                          v36 = this->fields.data;
                          if ( !v36 )
                            sub_1B8880C(0LL, v34);
                          BattleData__RemoveDoNotSelectCommandCardBuff(
                            v36,
                            (int32_t)v54.fields._current[1].klass,
                            *v23,
                            0LL);
                          v37 = BattleBuffData__CheckInvalidSacrificeIndiv((BattleBuffData_BuffData_o *)current, 0LL);
                          if ( v37 )
                          {
                            if ( !args )
                              sub_1B8880C(v37, v38);
                            args->fields.updateField = 1;
                          }
                        }
                        System_Collections_Generic_List_Enumerator_object___Dispose(
                          &v54,
                          (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
                        v39 = BattleLogicFunction___c_TypeInfo;
                        if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
                        {
                          j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
                          v39 = BattleLogicFunction___c_TypeInfo;
                        }
                        _9__70_1 = (System_Func_object__bool__o *)v39->static_fields->__9__70_1;
                        if ( !_9__70_1 )
                        {
                          if ( !v39->_2.cctor_finished )
                          {
                            j_il2cpp_runtime_class_init_0(v39);
                            v39 = BattleLogicFunction___c_TypeInfo;
                          }
                          v41 = (Il2CppObject *)v39->static_fields->__9;
                          _9__70_1 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
                          System_Func_object__bool____ctor(
                            _9__70_1,
                            v41,
                            Method_BattleLogicFunction___c__ApplySubBuffChanges_b__70_1__,
                            0LL);
                          static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
                          static_fields->__9__70_1 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__70_1;
                          sub_1B88554(
                            (ServantStatusBattleListViewItem_o *)&static_fields->__9__70_1,
                            (int32_t)_9__70_1,
                            v43,
                            v44);
                        }
                        data = (BattleData_o *)BasicHelper__Any_object_(
                                                 (System_Collections_Generic_List_T__o *)subBuffList,
                                                 (System_Func_T__bool__o *)_9__70_1,
                                                 (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_BattleBuffData_BuffData___);
                        if ( ((unsigned __int8)data & 1) != 0 )
                        {
                          v45 = this->fields.data;
                          if ( !v45 )
                            goto LABEL_41;
                          FieldEnvData_k__BackingField = v45->fields._FieldEnvData_k__BackingField;
                          data = (BattleData_o *)System_Collections_Generic_List_object___ToArray(
                                                   (System_Collections_Generic_List_object__o *)subBuffList,
                                                   (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
                          if ( !FieldEnvData_k__BackingField )
                            goto LABEL_41;
                          BattleFieldEnvironmentData__RemoveBgmRelateBuff(
                            FieldEnvData_k__BackingField,
                            (BattleBuffData_BuffData_array *)data,
                            0LL);
                          v47 = (BattleActionEffect_ChangeBgmBuff_o *)sub_1B887FC(BattleActionEffect_ChangeBgmBuff_TypeInfo);
                          BattleActionEffect_ChangeBgmBuff___ctor(v47, 0LL);
                          BattleActionData_BuffData__SetActionEffectProc(
                            (BattleActionData_BuffData_o *)v27,
                            (BattleActionEffect_Base_o *)v47,
                            0LL);
                        }
                        data = (BattleData_o *)*v23;
                        if ( *v23 )
                        {
                          MaxHp_k__BackingField = svtSnapShotOnBuffUpdate->fields._MaxHp_k__BackingField;
                          data = (BattleData_o *)BattleServantData__getMaxHp((BattleServantData_o *)data, 0LL);
                          if ( MaxHp_k__BackingField == (_DWORD)data )
                            return;
                          if ( *v23 )
                          {
                            BattleActionData__addReflectLogicResultServantId(actionData, (*v23)->fields.uniqueId, 0LL);
                            v49 = (BattleActionEffect_SubChangeMaxHpBuff_o *)sub_1B887FC(BattleActionEffect_SubChangeMaxHpBuff_TypeInfo);
                            BattleActionEffect_SubChangeMaxHpBuff___ctor(v49, 0LL);
                            data = (BattleData_o *)System_Collections_Generic_List_object___ToArray(
                                                     (System_Collections_Generic_List_object__o *)subBuffList,
                                                     (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__ToArray__);
                            if ( *v23 )
                            {
                              uniqueId = (*v23)->fields.uniqueId;
                              v51 = data;
                              data = (BattleData_o *)BattleServantData__getNowHp(*v23, 0LL);
                              if ( v49 )
                              {
                                v52 = (BattleActionEffect_Base_o *)((__int64 (__fastcall *)(BattleActionEffect_SubChangeMaxHpBuff_o *, BattleData_o *, _QWORD, _QWORD, Il2CppMethodPointer))v49->klass->vtable._7_InitBuff.method)(
                                                                     v49,
                                                                     v51,
                                                                     uniqueId,
                                                                     (unsigned int)((_DWORD)data
                                                                                  - svtSnapShotOnBuffUpdate->fields._Hp_k__BackingField),
                                                                     v49->klass->vtable._8_PartialPreActionProc.methodPtr);
                                BattleActionData_BuffData__SetActionEffectProc(
                                  (BattleActionData_BuffData_o *)v27,
                                  v52,
                                  0LL);
                                return;
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
      }
    }
LABEL_41:
    sub_1B8880C(data, v19);
  }
}


void __fastcall BattleLogicFunction__BehaveLinkageBuffAsFamily(
        BattleLogicFunction_o *this,
        BattleBuffData_BuffData_o *buffData,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  __int64 v7; // x21
  BattleData_o *data; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  __int64 v12; // x8
  BattleServantData_o *ServantData; // x0
  int32_t v14; // w2
  int32_t v15; // w3
  System_Func_int__int__o *v16; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v17; // x0
  struct System_Int32_array *v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  struct System_Int32_array *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3

  if ( (byte_4A5DC7D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_int__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&System_Func_int__int__TypeInfo);
    sub_1B885B0(&Method_BattleLogicFunction___c__DisplayClass68_0__BehaveLinkageBuffAsFamily_b__0__);
    sub_1B885B0(&BattleLogicFunction___c__DisplayClass68_0_TypeInfo);
    byte_4A5DC7D = 1;
  }
  v7 = sub_1B887FC(BattleLogicFunction___c__DisplayClass68_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass68_0___ctor((BattleLogicFunction___c__DisplayClass68_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_13;
  *(_QWORD *)(v7 + 16) = funcTarget;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)funcTarget, v10, v11);
  v12 = *(_QWORD *)(v7 + 16);
  if ( !v12 )
    goto LABEL_13;
  data = this->fields.data;
  if ( !data )
    goto LABEL_13;
  ServantData = BattleData__getServantData(data, *(_DWORD *)(v12 + 32), 0LL);
  *(_QWORD *)(v7 + 24) = ServantData;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)ServantData, v14, v15);
  if ( !*(_QWORD *)(v7 + 24) )
    return;
  v16 = (System_Func_int__int__o *)sub_1B887FC(System_Func_int__int__TypeInfo);
  System_Func_int__int____ctor(
    v16,
    (Il2CppObject *)v7,
    Method_BattleLogicFunction___c__DisplayClass68_0__BehaveLinkageBuffAsFamily_b__0__,
    0LL);
  if ( !buffData )
LABEL_13:
    sub_1B8880C(data, v9);
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)buffData->fields.addIndividualty, 0LL) )
  {
    v17 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)buffData->fields.addIndividualty,
                                                                 (System_Func_TSource__TResult__o *)v16,
                                                                 (const MethodInfo_2EAD6E0 *)Method_System_Linq_Enumerable_Select_int__int___);
    v18 = System_Linq_Enumerable__ToArray_int_(
            v17,
            (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
    buffData->fields.familyLinkageIds = v18;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&buffData->fields.familyLinkageIds, (int32_t)v18, v19, v20);
    BattleBuffData_BuffData__onState(buffData, 0x400000, 0LL);
  }
  if ( !BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)buffData->fields.linkageTargetIndividualty, 0LL) )
  {
    v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)buffData->fields.linkageTargetIndividualty,
                                                                 (System_Func_TSource__TResult__o *)v16,
                                                                 (const MethodInfo_2EAD6E0 *)Method_System_Linq_Enumerable_Select_int__int___);
    v22 = System_Linq_Enumerable__ToArray_int_(
            v21,
            (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
    buffData->fields.linkageTargetIndividualty = v22;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&buffData->fields.linkageTargetIndividualty,
      (int32_t)v22,
      v23,
      v24);
    BattleBuffData_BuffData__onState(buffData, 0x400000, 0LL);
  }
}


bool __fastcall BattleLogicFunction__CanCheckFuncBattleValue(
        BattleLogicFunction_o *this,
        FunctionEntity_o *funcEnt,
        const MethodInfo *method)
{
  struct System_Int32_array *vals; // x8

  if ( !funcEnt || (vals = funcEnt->fields.vals) == 0LL )
    sub_1B8880C(this, funcEnt);
  return *(_QWORD *)&vals->max_length != 0LL && (*(_QWORD *)&vals->max_length & 1LL) == 0;
}


void __fastcall BattleLogicFunction__ChangeBGMCostume(
        BattleLogicFunction_o *this,
        DataVals_o *baseVals,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  struct FunctionEntity_o *funcEnt; // x8
  struct System_Int32_array *vals; // x8
  __int64 v7; // x9
  BattleLogicFunction_o *v9; // x20
  unsigned int v10; // w8
  struct BattleLogicTarget_o *logictarget; // x9
  struct BattleLogicTarget_o *v12; // x9
  int32_t v13; // w22
  BgmEntity_o *BgmMasterFromCostume; // x1

  if ( !baseVals )
    goto LABEL_21;
  funcEnt = baseVals->fields.funcEnt;
  if ( !funcEnt )
    goto LABEL_21;
  vals = funcEnt->fields.vals;
  if ( !vals )
    goto LABEL_21;
  v7 = *(_QWORD *)&vals->max_length;
  v9 = this;
  if ( !v7 )
  {
    v10 = 1;
    goto LABEL_10;
  }
  if ( !(_DWORD)v7 )
    goto LABEL_22;
  v10 = vals->m_Items[1];
  if ( (v10 & 0x80000000) == 0 )
  {
LABEL_10:
    this = (BattleLogicFunction_o *)this->fields.data;
    if ( this )
    {
      logictarget = this[3].fields.logictarget;
      if ( logictarget )
      {
        if ( (signed int)v10 >= SLODWORD(logictarget->fields.tempDeadSvtHash) )
          v10 = 1;
        goto LABEL_14;
      }
    }
LABEL_21:
    sub_1B8880C(this, baseVals);
  }
  this = (BattleLogicFunction_o *)this->fields.data;
  if ( !this )
    goto LABEL_21;
  v10 = 1;
LABEL_14:
  v12 = this[3].fields.logictarget;
  if ( !v12 )
    goto LABEL_21;
  if ( v10 >= LODWORD(v12->fields.tempDeadSvtHash) )
LABEL_22:
    sub_1B88814(this, baseVals);
  v13 = *((_DWORD *)&v12[1].klass + v10);
  if ( v13 == -1 )
  {
    BgmMasterFromCostume = 0LL;
  }
  else
  {
    BgmMasterFromCostume = BattleData__getBgmMasterFromCostume((BattleData_o *)this, v13, 0LL);
    if ( !BgmMasterFromCostume )
      BgmMasterFromCostume = BattleLogicFunction__ChangeBgmSvt(v9, v13, actionData, method);
  }
  BattleLogicFunction__ChangeBgmOrReset(v9, BgmMasterFromCostume, baseVals, method);
}


void __fastcall BattleLogicFunction__ChangeBgmOrReset(
        BattleLogicFunction_o *this,
        BgmEntity_o *bgmEnt,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v6; // x19
  BattleData_o *data; // x23
  struct BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x21
  int32_t id; // w24
  Generator_BGMFromChangeBGMFunc_o *v10; // x22
  UnityEngine_Object_o *logic; // x20

  v6 = this;
  if ( (byte_4A5DCA9 & 1) == 0 )
  {
    sub_1B885B0(&Generator_BGMFromChangeBGMFunc_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DCA9 = 1;
  }
  data = v6->fields.data;
  if ( !data )
    goto LABEL_16;
  FieldEnvData_k__BackingField = data->fields._FieldEnvData_k__BackingField;
  if ( bgmEnt )
  {
    id = bgmEnt->fields.id;
    v10 = (Generator_BGMFromChangeBGMFunc_o *)sub_1B887FC(Generator_BGMFromChangeBGMFunc_TypeInfo);
    Generator_BGMFromChangeBGMFunc___ctor(v10, data, id, baseVals, 1, 0LL);
    if ( !FieldEnvData_k__BackingField )
      goto LABEL_16;
    ((void (__fastcall *)(struct BattleFieldEnvironmentData_o *, Generator_BGMFromChangeBGMFunc_o *, __int64, _QWORD, Il2CppMethodPointer))FieldEnvData_k__BackingField->klass->vtable._6_AddBGM.method)(
      FieldEnvData_k__BackingField,
      v10,
      2LL,
      0LL,
      FieldEnvData_k__BackingField->klass->vtable._7_RemoveAfterResetBGM.methodPtr);
  }
  else
  {
    if ( !FieldEnvData_k__BackingField )
      goto LABEL_16;
    ((void (__fastcall *)(struct BattleFieldEnvironmentData_o *, void *, DataVals_o *, const MethodInfo *))FieldEnvData_k__BackingField->klass->vtable._7_RemoveAfterResetBGM.method)(
      data->fields._FieldEnvData_k__BackingField,
      FieldEnvData_k__BackingField->klass[1]._1.image,
      baseVals,
      method);
  }
  logic = (UnityEngine_Object_o *)v6->fields.logic;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(logic, 0LL, 0LL) )
  {
    this = (BattleLogicFunction_o *)v6->fields.logic;
    if ( this )
    {
      BattleLogic__loadBgmName((BattleLogic_o *)this, 0LL, 0LL);
      this = (BattleLogicFunction_o *)v6->fields.logic;
      if ( this )
      {
        BattleLogic__PlayCurrentBgm((BattleLogic_o *)this, 0.0, 0LL);
        return;
      }
    }
LABEL_16:
    sub_1B8880C(this, bgmEnt);
  }
}


// local variable allocation has failed, the output may be wrong!
BgmEntity_o *__fastcall BattleLogicFunction__ChangeBgmSvt(
        BattleLogicFunction_o *this,
        int32_t uniqueID,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  BgmEntity_o *result; // x0
  __int64 v8; // x0
  __int64 v9; // x0
  DataManager_o *MasterData_object; // x0
  struct BattleSkillInfoData_o *skillInfo; // x8
  SkillLvMaster_o *v12; // x22
  struct BattleSkillInfoData_o *v13; // x8
  SkillLvEntity_o *v14; // x22
  DataMasterBase_TMaster__TEntity__PKType__o *v15; // x20
  BattleData_o *data; // x8
  System_Collections_Generic_List_object__o *v17; // x21
  System_Int32_array *v18; // x19
  int32_t v19; // w22
  int32_t v20; // w23
  int64_t m_CancellationTokenSource_low; // x24
  bool IsOpen; // w23
  __int64 v23; // x8
  Il2CppObject *entity; // [xsp+8h] [xbp-68h] BYREF

  if ( (byte_4A5DCA8 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_IndexOf_int___);
    sub_1B885B0(&CondType_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5DCA8 = 1;
  }
  result = 0LL;
  entity = 0LL;
  if ( uniqueID != -1 && actionData )
  {
    v8 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1BDA48C(v8);
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
    if ( (*(_BYTE *)(v9 + 309) & 1) == 0 )
      v9 = sub_1BDA48C(v9);
    MasterData_object = **(DataManager_o ***)(v9 + 184);
    if ( !MasterData_object )
      goto LABEL_35;
    MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                           MasterData_object,
                                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___);
    skillInfo = actionData->fields.skillInfo;
    if ( !skillInfo )
      goto LABEL_35;
    v12 = (SkillLvMaster_o *)MasterData_object;
    MasterData_object = (DataManager_o *)((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
                                           actionData->fields.skillInfo,
                                           skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    v13 = actionData->fields.skillInfo;
    if ( !v13 )
      goto LABEL_35;
    if ( !v12 )
      goto LABEL_35;
    v14 = SkillLvMaster__GetEntity(v12, (int32_t)MasterData_object, v13->fields.skilllv, 0LL);
    MasterData_object = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !MasterData_object )
      goto LABEL_35;
    MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                           MasterData_object,
                                           (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_BgmMaster___);
    if ( !v14 )
      goto LABEL_35;
    v15 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    MasterData_object = (DataManager_o *)SkillLvEntity__GetSvtChangeBgm(v14, 0LL);
    data = this->fields.data;
    if ( !data )
      goto LABEL_35;
    v17 = (System_Collections_Generic_List_object__o *)MasterData_object;
    MasterData_object = (DataManager_o *)BattleData__getPlayerServantData(data, uniqueID, 0LL);
    if ( !MasterData_object )
      goto LABEL_35;
    MasterData_object = (DataManager_o *)BattleServantData__getIndividualities(
                                           (BattleServantData_o *)MasterData_object,
                                           0LL,
                                           1,
                                           0,
                                           0LL);
    if ( !v17 )
      goto LABEL_35;
    if ( v17->fields._size >= 1 )
    {
      v18 = (System_Int32_array *)MasterData_object;
      v19 = 0;
      while ( 1 )
      {
        MasterData_object = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                               v17,
                                               v19,
                                               (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__);
        if ( !MasterData_object )
          break;
        if ( System_Array__IndexOf_int_(
               v18,
               MasterData_object->fields.m_CachedPtr,
               (const MethodInfo_2F7A3D8 *)Method_System_Array_IndexOf_int___) != -1 )
        {
          MasterData_object = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                                 v17,
                                                 v19,
                                                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__);
          if ( !MasterData_object )
            break;
          v20 = *((_DWORD *)&MasterData_object->fields.UnityEngine_Behaviour_Fields + 1);
          MasterData_object = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                                 v17,
                                                 v19,
                                                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__);
          if ( !MasterData_object )
            break;
          m_CancellationTokenSource_low = SLODWORD(MasterData_object->fields.m_CancellationTokenSource);
          if ( !CondType_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(CondType_TypeInfo);
          IsOpen = CondType__IsOpen(46, v20, m_CancellationTokenSource_low, 0, 0LL, 0LL);
          MasterData_object = (DataManager_o *)System_Collections_Generic_List_object___get_Item(
                                                 v17,
                                                 v19,
                                                 (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_SkillLvEntity_SvtChangeBgm__get_Item__);
          if ( !MasterData_object || !v15 )
            break;
          if ( IsOpen )
            v23 = 32LL;
          else
            v23 = 28LL;
          if ( DataMasterBase_object__object__int___TryGetEntity(
                 v15,
                 &entity,
                 *(_DWORD *)((char *)&MasterData_object->klass + v23),
                 (const MethodInfo_311D988 *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__) )
          {
            return (BgmEntity_o *)entity;
          }
        }
        if ( ++v19 >= v17->fields._size )
          return (BgmEntity_o *)entity;
      }
LABEL_35:
      sub_1B8880C(MasterData_object, *(_QWORD *)&uniqueID);
    }
    return (BgmEntity_o *)entity;
  }
  return result;
}


int32_t __fastcall BattleLogicFunction__ConvertLogicBuffTurn(
        BattleLogicFunction_o *this,
        int32_t dispTurn,
        bool isProgressSelfTurn,
        const MethodInfo *method)
{
  return 2 * dispTurn - isProgressSelfTurn;
}


void __fastcall BattleLogicFunction__CreateMasterBuffEffect(
        BattleLogicFunction_o *this,
        BattleActionData_o *action,
        FunctionEntity_o *funcEnt,
        int32_t index,
        bool isCommandSideEffect,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  BattleActionData_MasterBuffData_o *v12; // x24
  BattleLogicFunction_o *v13; // x0
  const MethodInfo *v14; // x6
  BattleActionData_BuffData_o *FunctionObject; // x0
  __int64 v16; // x1

  if ( (byte_4A5DCB0 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_MasterBuffData_TypeInfo);
    byte_4A5DCB0 = 1;
  }
  v12 = (BattleActionData_MasterBuffData_o *)sub_1B887FC(BattleActionData_MasterBuffData_TypeInfo);
  BattleActionData_MasterBuffData___ctor(v12, funcEnt, 0LL);
  FunctionObject = BattleLogicFunction__getFunctionObject(
                     v13,
                     funcEnt,
                     -1,
                     index,
                     isCommandSideEffect,
                     (BattleActionData_BuffData_o *)v12,
                     v14);
  if ( !action )
    sub_1B8880C(FunctionObject, v16);
  BattleActionData__setBuffData(action, FunctionObject, baseVals, 0LL);
}


void __fastcall BattleLogicFunction__DebugLog(
        BattleLogicFunction_o *this,
        System_String_o *str,
        const MethodInfo *method)
{
  ;
}


BattleActionData_o *__fastcall BattleLogicFunction__FunctionAddBattlePoint(
        BattleLogicFunction_o *this,
        BattleLogicFunction_ProcListInArgs_o *procArg,
        int32_t targetId,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleServantData_o *v10; // x21
  BattleActionData_o *v11; // x25
  int32_t Param; // w22
  int32_t v13; // w23
  bool v14; // w3
  bool v15; // w24
  BattlePointData_o *BattlePointData; // x0
  int v17; // w26
  int32_t v18; // w23
  int32_t funcIndex; // w22
  int32_t uniqueId; // w21
  FunctionEntity_o *funcEnt; // x24
  _BOOL8 IsCommandSideEffect; // x0
  const MethodInfo *v23; // x6
  BattleActionData_BuffData_o *v24; // x20

  if ( (byte_4A5DCB3 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    byte_4A5DCB3 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_22;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL);
  if ( !data )
    goto LABEL_22;
  v10 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleServantData__checkPlayer((BattleServantData_o *)data, 0LL);
  v11 = 0LL;
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    if ( !baseVals )
      goto LABEL_22;
    Param = DataVals__GetParam(baseVals, 172, 0, 0LL);
    v13 = DataVals__GetParam(baseVals, 173, 0, 0LL);
    v14 = DataVals__GetParam(baseVals, 175, 0, 0LL) != 0;
    v15 = BattleServantData__AddBattlePoint(v10, Param, v13, v14, 0LL);
    BattlePointData = BattleServantData__GetBattlePointData(v10, Param, 0LL);
    if ( BattlePointData )
      v17 = !BattlePointData->fields._IsShowedEffectAfterLastChanged_k__BackingField;
    else
      v17 = 0;
    data = (BattleData_o *)DataVals__GetParam(baseVals, 174, 0, 0LL);
    v18 = (int)data;
    if ( (_DWORD)data == 1 )
      goto LABEL_14;
    if ( !procArg )
      goto LABEL_22;
    v11 = 0LL;
    if ( BattleLogicFunction_ProcListInArgs__get_IsShowBattlePointEffect(procArg, 0LL) )
    {
      if ( !(v17 | v15) )
        return 0LL;
LABEL_14:
      data = (BattleData_o *)BattleServantData__GetBattlePointData(v10, Param, 0LL);
      if ( data )
        BattlePointData__NotifyShowedEffect((BattlePointData_o *)data, 0LL);
      if ( procArg )
      {
        funcIndex = baseVals->fields.funcIndex;
        uniqueId = v10->fields.uniqueId;
        funcEnt = baseVals->fields.funcEnt;
        IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0LL);
        data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                                 (BattleLogicFunction_o *)IsCommandSideEffect,
                                 funcEnt,
                                 uniqueId,
                                 funcIndex,
                                 IsCommandSideEffect,
                                 0LL,
                                 v23);
        if ( data )
        {
          data->fields.initturn = v18;
          BYTE4(data->fields.enemyMasterInfo) = 1;
          v24 = (BattleActionData_BuffData_o *)data;
          v11 = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo);
          BattleActionData___ctor(v11, 0LL);
          if ( v11 )
          {
            BattleActionData__setBuffData(v11, v24, baseVals, 0LL);
            return v11;
          }
        }
      }
LABEL_22:
      sub_1B8880C(data, procArg);
    }
  }
  return v11;
}


void __fastcall BattleLogicFunction__FunctionAddBattleValue(
        BattleLogicFunction_o *this,
        FunctionEntity_o *funcEnt,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v4; // x20
  __int64 v5; // x1
  BattleData_o *data; // x0
  struct System_Int32_array *vals; // x8
  System_Collections_Generic_Dictionary_int__int__o *v8; // x20
  int v9; // w23
  il2cpp_array_size_t max_length; // w10
  unsigned int v11; // w9
  int32_t v12; // w21
  int32_t v13; // w22
  int32_t Item; // w0

  v4 = this;
  if ( (byte_4A5DCB2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    this = (BattleLogicFunction_o *)sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    byte_4A5DCB2 = 1;
  }
  if ( BattleLogicFunction__CanCheckFuncBattleValue(this, funcEnt, method) )
  {
    data = v4->fields.data;
    if ( !data
      || (data = (BattleData_o *)BattleData__GetBattleValueDict(data, 0LL), !funcEnt)
      || (vals = funcEnt->fields.vals) == 0LL )
    {
LABEL_16:
      sub_1B8880C(data, v5);
    }
    v8 = (System_Collections_Generic_Dictionary_int__int__o *)data;
    v9 = 1;
    while ( 1 )
    {
      max_length = vals->max_length;
      v11 = v9 - 1;
      if ( v9 - 1 >= (int)max_length )
        break;
      if ( v11 >= max_length || v9 >= max_length )
        sub_1B88814(data, v5);
      if ( v8 )
      {
        v12 = vals->m_Items[v11 + 1];
        v13 = vals->m_Items[v9 + 1];
        if ( System_Collections_Generic_Dictionary_int__int___ContainsKey(
               v8,
               v12,
               (const MethodInfo_3165074 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__) )
        {
          Item = System_Collections_Generic_Dictionary_int__int___get_Item(
                   v8,
                   v12,
                   (const MethodInfo_3164DEC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
          System_Collections_Generic_Dictionary_int__int___set_Item(
            v8,
            v12,
            Item + v13,
            (const MethodInfo_3164E74 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        }
        else
        {
          System_Collections_Generic_Dictionary_int__int___Add(
            v8,
            v12,
            v13,
            (const MethodInfo_3164E88 *)Method_System_Collections_Generic_Dictionary_int__int__Add__);
        }
        vals = funcEnt->fields.vals;
        v9 += 2;
        if ( vals )
          continue;
      }
      goto LABEL_16;
    }
  }
}


void __fastcall BattleLogicFunction__FunctionChangeBgm(
        BattleLogicFunction_o *this,
        BattleLogicFunction_ProcListInArgs_o *args,
        Generator_BGM_o *bgmGenerator,
        AddBgmArgument_o *addBgmArg,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v8; // x19
  struct BattleData_o *data; // x8
  UnityEngine_Object_o *logic; // x21
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  v8 = this;
  if ( (byte_4A5DCAB & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DCAB = 1;
  }
  data = v8->fields.data;
  if ( !data )
    goto LABEL_15;
  this = (BattleLogicFunction_o *)data->fields._FieldEnvData_k__BackingField;
  if ( !this )
    goto LABEL_15;
  (*(void (__fastcall **)(BattleLogicFunction_o *, Generator_BGM_o *, __int64, AddBgmArgument_o *, void *))&this->klass[1]._1.byval_arg.bits)(
    this,
    bgmGenerator,
    2LL,
    addBgmArg,
    this->klass[1]._1.this_arg.data);
  logic = (UnityEngine_Object_o *)v8->fields.logic;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(logic, 0LL, 0LL) )
  {
    this = (BattleLogicFunction_o *)v8->fields.logic;
    if ( this )
    {
      BattleLogic__loadBgmName((BattleLogic_o *)this, 0LL, 0LL);
      if ( args )
      {
        externalArg = args->fields.externalArg;
        if ( externalArg )
        {
          if ( externalArg->fields.isDeckDataLoad )
            return;
          this = (BattleLogicFunction_o *)v8->fields.logic;
          if ( this )
          {
            BattleLogic__PlayCurrentBgm((BattleLogic_o *)this, 0.0, 0LL);
            return;
          }
        }
      }
    }
LABEL_15:
    sub_1B8880C(this, args);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicFunction__FunctionChangeEnemyMasterFace(
        BattleLogicFunction_o *this,
        int32_t faceId,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8
  BattleLogicFunction_o *v4; // x20
  struct BattleData_o *v6; // x8

  data = this->fields.data;
  if ( !data )
    goto LABEL_7;
  if ( !data->fields.enemyMasterInfo )
    return;
  v4 = this;
  this = (BattleLogicFunction_o *)data->fields.perf;
  if ( !this
    || (BattlePerformance__ChangeEnemyMasterFace((BattlePerformance_o *)this, faceId, 0LL), (v6 = v4->fields.data) == 0LL) )
  {
LABEL_7:
    sub_1B8880C(this, *(_QWORD *)&faceId);
  }
  v6->fields.enemyMasterChangedFaceId = faceId;
}


void __fastcall BattleLogicFunction__FunctionLastSkillCopy(
        BattleLogicFunction_o *this,
        BattleActionData_o *actionData,
        DataVals_o *baseVals,
        BattleLogicFunction_ProcListInArgs_o *args,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v8; // x22
  struct BattleData_o *data; // x8
  BattleSkillInfoData_o *v10; // x24
  struct BattleData_o *v11; // x8
  unsigned int v12; // w0
  struct BattleData_o *v13; // x8
  struct BattleSkillInfoData_o *lastUsedPlayerSkillInfo_k__BackingField; // x8
  bool v15; // w26
  BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_o *v16; // x23
  struct BattleLogic_o *logic; // x8
  BattleLogicSkill_o *logicSkill; // x25
  int32_t v19; // w2
  int32_t v20; // w3
  int v21; // w8
  BattleLogicFunction_o *v22; // x24
  unsigned int v23; // w27
  __int64 v24; // x25
  struct BattleLogic_o *v25; // x8
  BattleActionData_o *v26; // x25
  BattleLogicFunction_FuncSideEffectFunctionArgument_o *FuncSideEffectArg; // x0
  BattleActionData_o *baseActionData; // [xsp+18h] [xbp-58h] BYREF

  v8 = this;
  if ( (byte_4A5DCAF & 1) == 0 )
  {
    sub_1B885B0(&BattleSkillInfoData_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    this = (BattleLogicFunction_o *)sub_1B885B0(&BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_TypeInfo);
    byte_4A5DCAF = 1;
  }
  baseActionData = 0LL;
  data = v8->fields.data;
  if ( !data )
    goto LABEL_32;
  if ( !data->fields._lastUsedPlayerSkillInfo_k__BackingField )
    return;
  v10 = (BattleSkillInfoData_o *)sub_1B887FC(BattleSkillInfoData_TypeInfo);
  BattleSkillInfoData___ctor(v10, 0LL);
  if ( !actionData )
    goto LABEL_32;
  if ( !v10 )
    goto LABEL_32;
  v10->fields.svtUniqueId = actionData->fields.actorId;
  v11 = v8->fields.data;
  if ( !v11 )
    goto LABEL_32;
  this = (BattleLogicFunction_o *)v11->fields._lastUsedPlayerSkillInfo_k__BackingField;
  if ( !this )
    goto LABEL_32;
  v12 = ((__int64 (__fastcall *)(BattleLogicFunction_o *, void *))this->klass[1]._1.namespaze)(
          this,
          this->klass[1]._1.byval_arg.data);
  this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleSkillInfoData_o *, _QWORD, Il2CppMethodPointer))v10->klass->vtable._4_set_skillId.method)(
                                    v10,
                                    v12,
                                    v10->klass->vtable._5_get_skillId.methodPtr);
  v13 = v8->fields.data;
  if ( !v13 )
    goto LABEL_32;
  lastUsedPlayerSkillInfo_k__BackingField = v13->fields._lastUsedPlayerSkillInfo_k__BackingField;
  if ( !lastUsedPlayerSkillInfo_k__BackingField )
    goto LABEL_32;
  v10->fields.skilllv = lastUsedPlayerSkillInfo_k__BackingField->fields.skilllv;
  BattleSkillInfoData__UpdateSelectAddIndex(
    v10,
    lastUsedPlayerSkillInfo_k__BackingField->fields._SelectAddIndex_k__BackingField,
    0LL);
  if ( !args )
    goto LABEL_32;
  this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(args, 0LL);
  v15 = this != 0LL;
  if ( this )
  {
    v16 = (BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_o *)sub_1B887FC(BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_TypeInfo);
    BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument___ctor(v16, 0LL);
  }
  else
  {
    v16 = 0LL;
  }
  logic = v8->fields.logic;
  if ( !logic )
    goto LABEL_32;
  logicSkill = logic->fields.logicSkill;
  this = (BattleLogicFunction_o *)sub_1B88658(int___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_32;
  if ( !LODWORD(this->fields.logic) )
    goto LABEL_33;
  LODWORD(this->fields.logictarget) = actionData->fields.actorId;
  if ( !logicSkill
    || (this = (BattleLogicFunction_o *)BattleLogicSkill__taskSkill(
                                          logicSkill,
                                          v10,
                                          (System_Int32_array *)this,
                                          0LL,
                                          0,
                                          0,
                                          0,
                                          0,
                                          0,
                                          0LL)) == 0LL )
  {
LABEL_32:
    sub_1B8880C(this, actionData);
  }
  v21 = (int)this->fields.logic;
  v22 = this;
  if ( v21 >= 1 )
  {
    v23 = 0;
    while ( v23 < v21 )
    {
      v24 = *((_QWORD *)&v22->fields.logictarget + (int)v23);
      if ( !v24 )
        goto LABEL_32;
      *(_QWORD *)(v24 + 176) = v16;
      *(_BYTE *)(v24 + 169) = v15;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v24 + 176), (int32_t)v16, v19, v20);
      v25 = v8->fields.logic;
      if ( !v25 )
        goto LABEL_32;
      this = (BattleLogicFunction_o *)v25->fields.logicSkill;
      if ( !this )
        goto LABEL_32;
      v26 = BattleLogicSkill__createSkillData_43593328(
              (BattleLogicSkill_o *)this,
              (BattleLogicTask_o *)v24,
              1,
              baseVals,
              &baseActionData,
              0LL);
      BattleActionData__addAction(actionData, v26, 0LL);
      if ( v26 )
        actionData->fields.isSuccessSkillCopyFunction = 1;
      v21 = (int)v22->fields.logic;
      if ( (int)++v23 >= v21 )
        goto LABEL_29;
    }
LABEL_33:
    sub_1B88814(this, actionData);
  }
LABEL_29:
  FuncSideEffectArg = BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(args, 0LL);
  if ( FuncSideEffectArg )
    BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget_43492772(
      FuncSideEffectArg,
      (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)v16,
      0LL);
}


BattleActionData_o *__fastcall BattleLogicFunction__FunctionMoveToLastSubMember(
        BattleLogicFunction_o *this,
        BattleServantData_o *targetServantData,
        FunctionEntity_o *funcEnt,
        DataVals_o *baseVals,
        int32_t funcIndex,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v9; // x21
  _BOOL4 isEnemy; // w26
  int32_t ServantIndex; // w22
  BattleData_o *data; // x24
  MoveToSubMemberWaveTurnEvent_o *v13; // x25
  bool v14; // w24
  int32_t v15; // w0
  int32_t uniqueId; // w25
  int32_t v17; // w26
  RestockServantLogicByMoveToSubMember_o *v18; // x23
  BattleActionData_o *v19; // x21

  v9 = this;
  if ( (byte_4A5DC8D & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_IndexValue_int____76090680);
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&MoveToSubMemberWaveTurnEvent_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1B885B0(&RestockServantLogicByMoveToSubMember_TypeInfo);
    byte_4A5DC8D = 1;
  }
  if ( !targetServantData )
    goto LABEL_13;
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_13;
  isEnemy = targetServantData->fields.isEnemy;
  ServantIndex = BattleData__getServantIndex(
                   (BattleData_o *)this,
                   targetServantData->fields.isEnemy,
                   targetServantData->fields.uniqueId,
                   0LL);
  targetServantData->fields.deckIndex = ServantIndex;
  BattleServantData__resetParamObject(targetServantData, 0LL);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_13;
  BattleData__RemoveEntry((BattleData_o *)this, targetServantData, 0LL);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_13;
  BattleData__SubBuffFromPT_42532144((BattleData_o *)this, targetServantData, 0LL);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_13;
  BattleData__SubBuffExitSvt((BattleData_o *)this, targetServantData, 0LL);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_13;
  targetServantData->fields.deckIndex = BattleData__GetSubServantUsableDeckIndex((BattleData_o *)this, isEnemy, 0LL);
  data = v9->fields.data;
  v13 = (MoveToSubMemberWaveTurnEvent_o *)sub_1B887FC(MoveToSubMemberWaveTurnEvent_TypeInfo);
  MoveToSubMemberWaveTurnEvent___ctor(v13, data, 0LL);
  BattleServantData__RegisterWaveTurnEvent(targetServantData, (ServantWaveTurnEvent_o *)v13, 0LL);
  if ( !funcEnt )
    goto LABEL_13;
  v14 = isEnemy;
  v15 = BasicHelper__IndexValue_int_(
          funcEnt->fields.vals,
          0,
          0,
          (const MethodInfo_2E6E670 *)Method_BasicHelper_IndexValue_int____76090680);
  uniqueId = targetServantData->fields.uniqueId;
  v17 = v15;
  v18 = (RestockServantLogicByMoveToSubMember_o *)sub_1B887FC(RestockServantLogicByMoveToSubMember_TypeInfo);
  RestockServantLogicByMoveToSubMember___ctor(v18, ServantIndex, v14, v17, uniqueId, 0LL);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this
    || (BattleData__AppendRestockServantLogic((BattleData_o *)this, (RestockServantLogic_o *)v18, 0LL),
        v19 = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo),
        BattleActionData___ctor(v19, 0LL),
        !v19) )
  {
LABEL_13:
    sub_1B8880C(this, targetServantData);
  }
  BattleActionData__AddNewMoveToSubMember(v19, ServantIndex, targetServantData->fields.uniqueId, funcIndex, 1, 0LL);
  return v19;
}


void __fastcall BattleLogicFunction__FunctionQuickChangeBG(
        BattleLogicFunction_o *this,
        BattleLogicFunction_ProcListInArgs_o *args,
        Generator_Background_o *bgGenerator,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v6; // x19
  struct BattleData_o *data; // x8
  struct BattleData_o *v8; // x8
  BattlePerformance_o *perf; // x21
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  UnityEngine_Object_o *logic; // x21
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  UnityEngine_Vector3_o zeroVector; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v14; // 0:s3.4,4:s4.4,8:s5.4

  v6 = this;
  if ( (byte_4A5DCAC & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DCAC = 1;
  }
  data = v6->fields.data;
  if ( !data )
    goto LABEL_19;
  this = (BattleLogicFunction_o *)data->fields._FieldEnvData_k__BackingField;
  if ( !this )
    goto LABEL_19;
  ((void (__fastcall *)(BattleLogicFunction_o *, Generator_Background_o *, __int64, void *))this->klass[1]._1.namespaze)(
    this,
    bgGenerator,
    2LL,
    this->klass[1]._1.byval_arg.data);
  v8 = v6->fields.data;
  if ( v8 )
  {
    perf = v8->fields.perf;
    if ( perf )
    {
      if ( !byte_4A55CE1 )
      {
        sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
        byte_4A55CE1 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      zeroVector = static_fields->zeroVector;
      v14.fields.x = static_fields->zeroVector.fields.x;
      v14.fields.y = zeroVector.fields.y;
      v14.fields.z = zeroVector.fields.z;
      BattlePerformance__ChangeBg(perf, static_fields->zeroVector, v14, 0, 0, 0LL, 0LL);
    }
  }
  logic = (UnityEngine_Object_o *)v6->fields.logic;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality(logic, 0LL, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( args )
    {
      externalArg = args->fields.externalArg;
      if ( externalArg )
      {
        if ( externalArg->fields.isDeckDataLoad )
          return;
        this = (BattleLogicFunction_o *)v6->fields.logic;
        if ( this )
        {
          BattleLogic__PlayCurrentBgm((BattleLogic_o *)this, 0.0, 0LL);
          return;
        }
      }
    }
LABEL_19:
    sub_1B8880C(this, args);
  }
}


void __fastcall BattleLogicFunction__FunctionSetBattleValue(
        BattleLogicFunction_o *this,
        FunctionEntity_o *funcEnt,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v4; // x20
  __int64 v5; // x1
  BattleData_o *data; // x0
  struct System_Int32_array *vals; // x8
  System_Collections_Generic_Dictionary_int__int__o *v8; // x20
  int v9; // w21
  il2cpp_array_size_t max_length; // w10
  unsigned int v11; // w9

  v4 = this;
  if ( (byte_4A5DCB1 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    byte_4A5DCB1 = 1;
  }
  if ( BattleLogicFunction__CanCheckFuncBattleValue(this, funcEnt, method) )
  {
    data = v4->fields.data;
    if ( !data
      || (data = (BattleData_o *)BattleData__GetBattleValueDict(data, 0LL), !funcEnt)
      || (vals = funcEnt->fields.vals) == 0LL )
    {
LABEL_13:
      sub_1B8880C(data, v5);
    }
    v8 = (System_Collections_Generic_Dictionary_int__int__o *)data;
    v9 = 1;
    while ( 1 )
    {
      max_length = vals->max_length;
      v11 = v9 - 1;
      if ( v9 - 1 >= (int)max_length )
        break;
      if ( v11 >= max_length || v9 >= max_length )
        sub_1B88814(data, v5);
      if ( v8 )
      {
        System_Collections_Generic_Dictionary_int__int___set_Item(
          v8,
          vals->m_Items[v11 + 1],
          vals->m_Items[v9 + 1],
          (const MethodInfo_3164E74 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
        vals = funcEnt->fields.vals;
        v9 += 2;
        if ( vals )
          continue;
      }
      goto LABEL_13;
    }
  }
}


BattleActionData_o *__fastcall BattleLogicFunction__FunctionSetNpExecutedState(
        BattleLogicFunction_o *this,
        BattleLogicFunction_ProcListInArgs_o *procArg,
        int32_t targetId,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleServantData_o *v10; // x24
  BattleActionData_o *v11; // x23
  int32_t funcIndex; // w22
  FunctionEntity_o *funcEnt; // x23
  _BOOL8 IsCommandSideEffect; // x0
  const MethodInfo *v15; // x6
  BattleActionData_BuffData_o *v16; // x20

  if ( (byte_4A5DCB4 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    byte_4A5DCB4 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_12;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL);
  if ( !data )
    goto LABEL_12;
  v10 = (BattleServantData_o *)data;
  v11 = 0LL;
  if ( !BattleServantData__checkPlayer((BattleServantData_o *)data, 0LL) )
  {
    BattleServantData__SetTdAfterStatus(v10, this->fields.data, 0LL);
    if ( baseVals )
    {
      if ( procArg )
      {
        funcIndex = baseVals->fields.funcIndex;
        funcEnt = baseVals->fields.funcEnt;
        IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0LL);
        data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                                 (BattleLogicFunction_o *)IsCommandSideEffect,
                                 funcEnt,
                                 targetId,
                                 funcIndex,
                                 IsCommandSideEffect,
                                 0LL,
                                 v15);
        if ( data )
        {
          HIDWORD(data->fields.m_CancellationTokenSource) = 5;
          v16 = (BattleActionData_BuffData_o *)data;
          v11 = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo);
          BattleActionData___ctor(v11, 0LL);
          if ( v11 )
          {
            BattleActionData__setBuffData(v11, v16, baseVals, 0LL);
            return v11;
          }
        }
      }
    }
LABEL_12:
    sub_1B8880C(data, procArg);
  }
  return v11;
}


void __fastcall BattleLogicFunction__FunctionSubFieldBuff(
        BattleLogicFunction_o *this,
        BattleLogicFunction_ProcListInArgs_o *args,
        BattleActionData_o *mainAction,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  Il2CppObject *v8; // x21
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x20
  DataVals_o *dataVals_k__BackingField; // x20
  int32_t targetId_k__BackingField; // w25
  FunctionEntity_o *funcEnt; // x27
  int32_t v13; // w24
  Il2CppClass *klass; // x8
  BattleActionData_BuffData_o *v15; // x26
  struct BattleData_o *data; // x22
  int m_CancellationTokenSource; // w28
  _BOOL8 IsCommandSideEffect; // x0
  const MethodInfo *v19; // x6
  const MethodInfo *v20; // x7
  BattleActionData_BuffData_o *FunctionObject; // x23
  System_Func_object__object__o *v22; // x24
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3
  BattleLogicFunction___c_c *v26; // x0
  System_Func_object__bool__o *_9__121_1; // x21
  Il2CppObject *v28; // x24
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  BattleActionEffect_UpdateAllInfo_o *v32; // x21

  v8 = (Il2CppObject *)this;
  if ( (byte_4A5DCAE & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_BattleBuffData_BuffData___);
    sub_1B885B0(&Method_BattleLogicFunction__FunctionSubFieldBuff_b__121_0__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
    sub_1B885B0(&System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
    sub_1B885B0(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__);
    sub_1B885B0(&Method_BattleLogicFunction___c__FunctionSubFieldBuff_b__121_1__);
    sub_1B885B0(&BattleLogicFunction___c_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1B885B0(&BattleActionEffect_UpdateAllInfo_TypeInfo);
    byte_4A5DCAE = 1;
  }
  if ( !funcTarget )
    goto LABEL_26;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_26;
  this = (BattleLogicFunction_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(
                                    funcTarget->fields._funcUnit_k__BackingField,
                                    0LL);
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_26;
  targetId_k__BackingField = funcTarget->fields._targetId_k__BackingField;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  v13 = (int)this;
  this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, Il2CppMethodPointer))funcTarget->klass->vtable._7_MakeActionBuffData.method)(
                                    funcTarget,
                                    funcTarget->klass->vtable._8_AddBuff.methodPtr);
  klass = v8[1].klass;
  if ( !klass )
    goto LABEL_26;
  if ( !funcEnt )
    goto LABEL_26;
  v15 = (BattleActionData_BuffData_o *)this;
  this = (BattleLogicFunction_o *)klass->_1.implementedInterfaces;
  if ( !this )
    goto LABEL_26;
  this = (BattleLogicFunction_o *)BattleFieldEnvironmentData__SubBuffFromIndividuality(
                                    (BattleFieldEnvironmentData_o *)this,
                                    funcEnt->fields.vals,
                                    dataVals_k__BackingField,
                                    0LL);
  if ( !this )
    goto LABEL_26;
  data = this->fields.data;
  if ( !data || !args )
    goto LABEL_26;
  m_CancellationTokenSource = (int)data->fields.m_CancellationTokenSource;
  IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(args, 0LL);
  if ( m_CancellationTokenSource > 0 )
  {
    FunctionObject = BattleLogicFunction__getFunctionObject(
                       (BattleLogicFunction_o *)IsCommandSideEffect,
                       funcEnt,
                       targetId_k__BackingField,
                       v13,
                       IsCommandSideEffect,
                       v15,
                       v19);
    v22 = (System_Func_object__object__o *)sub_1B887FC(System_Func_BattleBuffData_BuffData__BattleBuffData_BuffData__TypeInfo);
    System_Func_object__object____ctor(v22, v8, Method_BattleLogicFunction__FunctionSubFieldBuff_b__121_0__, 0LL);
    v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)data,
                                                                 (System_Func_TSource__TResult__o *)v22,
                                                                 (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_BattleBuffData_BuffData__BattleBuffData_BuffData___);
    this = (BattleLogicFunction_o *)System_Linq_Enumerable__ToList_object_(
                                      v23,
                                      (const MethodInfo_2EBBFFC *)Method_System_Linq_Enumerable_ToList_BattleBuffData_BuffData___);
    if ( FunctionObject )
    {
      FunctionObject->fields.removeBuffList = (struct System_Collections_Generic_List_BattleBuffData_BuffData__o *)this;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&FunctionObject->fields.removeBuffList, (int32_t)this, v24, v25);
      v26 = BattleLogicFunction___c_TypeInfo;
      if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
        v26 = BattleLogicFunction___c_TypeInfo;
      }
      _9__121_1 = (System_Func_object__bool__o *)v26->static_fields->__9__121_1;
      if ( !_9__121_1 )
      {
        if ( !v26->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v26);
          v26 = BattleLogicFunction___c_TypeInfo;
        }
        v28 = (Il2CppObject *)v26->static_fields->__9;
        _9__121_1 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
        System_Func_object__bool____ctor(
          _9__121_1,
          v28,
          Method_BattleLogicFunction___c__FunctionSubFieldBuff_b__121_1__,
          0LL);
        static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
        static_fields->__9__121_1 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__121_1;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__121_1, (int32_t)_9__121_1, v30, v31);
      }
      this = (BattleLogicFunction_o *)BasicHelper__Any_object_(
                                        (System_Collections_Generic_List_T__o *)data,
                                        (System_Func_T__bool__o *)_9__121_1,
                                        (const MethodInfo_2E6ACD0 *)Method_BasicHelper_Any_BattleBuffData_BuffData___);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v32 = (BattleActionEffect_UpdateAllInfo_o *)sub_1B887FC(BattleActionEffect_UpdateAllInfo_TypeInfo);
        BattleActionEffect_UpdateAllInfo___ctor(v32, 0LL);
        BattleActionData_BuffData__SetActionEffectProc(FunctionObject, (BattleActionEffect_Base_o *)v32, 0LL);
      }
      if ( mainAction )
      {
        BattleActionData__setBuffData(mainAction, FunctionObject, dataVals_k__BackingField, 0LL);
        return;
      }
    }
LABEL_26:
    sub_1B8880C(this, args);
  }
  this = (BattleLogicFunction_o *)BattleLogicFunction__getNoEffectObject(
                                    (BattleLogicFunction_o *)v8,
                                    targetId_k__BackingField,
                                    v13,
                                    dataVals_k__BackingField,
                                    IsCommandSideEffect,
                                    0LL,
                                    v15,
                                    v20);
  if ( !mainAction )
    goto LABEL_26;
  BattleActionData__addAction(mainAction, (BattleActionData_o *)this, 0LL);
}


void __fastcall BattleLogicFunction__FunctionToFieldAddChangeFieldBuff(
        BattleLogicFunction_o *this,
        BattleLogicFunction_ProcListInArgs_o *args,
        BattleActionData_o *mainAction,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        bool isTreasureDvc,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v10; // x20
  DataVals_o *logictarget; // x25
  AddBgmArgument_o *v12; // x21
  bool isParam; // w0
  const MethodInfo *v14; // x5
  BattleBuffData_FieldChangeData_o *tamamocatTreasureDeviceIds; // x24
  struct BattleData_o *data; // x8
  Generator_BGFromFieldChangeBGBuff_o *v17; // x22
  const MethodInfo *v18; // x3
  BattleData_o *v19; // x22
  Generator_BGMFromFieldChangeBGBuff_o *v20; // x23
  const MethodInfo *v21; // x4

  v10 = this;
  if ( (byte_4A5DCAD & 1) == 0 )
  {
    sub_1B885B0(&Generator_BGFromFieldChangeBGBuff_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1B885B0(&Generator_BGMFromFieldChangeBGBuff_TypeInfo);
    byte_4A5DCAD = 1;
  }
  if ( !funcTarget )
    goto LABEL_17;
  this = (BattleLogicFunction_o *)funcTarget->fields._funcUnit_k__BackingField;
  if ( !this )
    goto LABEL_17;
  logictarget = (DataVals_o *)this->fields.logictarget;
  this = (BattleLogicFunction_o *)BattleLogicFunctionProcess_FunctionUnitCheck__MakeAddBgmArgument(
                                    (BattleLogicFunctionProcess_FunctionUnitCheck_o *)this,
                                    0LL);
  if ( !logictarget )
    goto LABEL_17;
  v12 = (AddBgmArgument_o *)this;
  isParam = DataVals__isParam(logictarget, 101, 0LL);
  this = (BattleLogicFunction_o *)BattleLogicFunction__functionAddState(v10, mainAction, funcTarget, args, isParam, v14);
  if ( !this )
    goto LABEL_17;
  tamamocatTreasureDeviceIds = (BattleBuffData_FieldChangeData_o *)this[3].fields.tamamocatTreasureDeviceIds;
  if ( isTreasureDvc )
  {
    data = v10->fields.data;
    if ( data && mainAction )
    {
      BattleActionData__SetAfterChangeField(
        mainAction,
        tamamocatTreasureDeviceIds,
        logictarget,
        data->fields._FieldEnvData_k__BackingField,
        v12,
        0LL);
      return;
    }
LABEL_17:
    sub_1B8880C(this, args);
  }
  if ( !tamamocatTreasureDeviceIds )
    goto LABEL_17;
  if ( tamamocatTreasureDeviceIds->fields.bgId >= 1 )
  {
    v17 = (Generator_BGFromFieldChangeBGBuff_o *)sub_1B887FC(Generator_BGFromFieldChangeBGBuff_TypeInfo);
    Generator_BGFromFieldChangeBGBuff___ctor(v17, tamamocatTreasureDeviceIds, 0LL);
    BattleLogicFunction__FunctionQuickChangeBG(v10, args, (Generator_Background_o *)v17, v18);
  }
  if ( tamamocatTreasureDeviceIds->fields.bgmId >= 1 )
  {
    v19 = v10->fields.data;
    v20 = (Generator_BGMFromFieldChangeBGBuff_o *)sub_1B887FC(Generator_BGMFromFieldChangeBGBuff_TypeInfo);
    Generator_BGMFromFieldChangeBGBuff___ctor(v20, v19, tamamocatTreasureDeviceIds, 0LL);
    BattleLogicFunction__FunctionChangeBgm(v10, args, (Generator_BGM_o *)v20, v12, v21);
  }
}


void __fastcall BattleLogicFunction__FunctionUpdateEntryMaxCountEachTurn(
        BattleLogicFunction_o *this,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x19

  if ( !baseVals || (data = this->fields.data, this = (BattleLogicFunction_o *)DataVals__GetValue(baseVals, 0LL), !data) )
    sub_1B8880C(this, baseVals);
  data->fields._EnemyEntryMaxCountEachTurn_k__BackingField = (int)this;
}


void __fastcall BattleLogicFunction__FunctionUpdateEntryPositions(
        BattleLogicFunction_o *this,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v4; // x19
  BattleData_o *data; // x8

  if ( !baseVals
    || (v4 = this, this = (BattleLogicFunction_o *)DataVals__GetParamArray(baseVals, 81, 0LL), !v4->fields.data)
    || (BattleData__UpdateTargetPosEnemyAppearValid(v4->fields.data, (System_Int32_array *)this, 1, 0LL),
        this = (BattleLogicFunction_o *)DataVals__GetParamArray(baseVals, 82, 0LL),
        (data = v4->fields.data) == 0LL) )
  {
    sub_1B8880C(this, baseVals);
  }
  BattleData__UpdateTargetPosEnemyAppearValid(data, (System_Int32_array *)this, 0, 0LL);
}


int32_t __fastcall BattleLogicFunction__GetActualRecoveryHealPoint(
        BattleLogicFunction_o *this,
        DataVals_o *dataVals,
        BattleServantData_o *targetSvtData,
        int32_t healPoint,
        const MethodInfo *method)
{
  int32_t MaxHp; // w21
  int v9; // w20

  if ( (byte_4A5DC82 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1B885B0(&System_Math_TypeInfo);
    byte_4A5DC82 = 1;
  }
  if ( !dataVals )
    goto LABEL_10;
  this = (BattleLogicFunction_o *)DataVals__isParam(dataVals, 115, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return healPoint;
  if ( !targetSvtData )
LABEL_10:
    sub_1B8880C(this, dataVals);
  MaxHp = BattleServantData__getMaxHp(targetSvtData, 0LL);
  v9 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))targetSvtData->klass->vtable._13_get_resultHp.method)(
         targetSvtData,
         targetSvtData->klass->vtable._14_set_resultHp.methodPtr);
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  return System_Math__Min_62526008(healPoint, MaxHp - v9, 0LL);
}


int32_t __fastcall BattleLogicFunction__GetAdjustmentBuffTurn(
        BattleLogicFunction_o *this,
        DataVals_o *dataVals,
        BattleServantData_o *actionServant,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v5; // x21
  struct BattleData_o *data; // x8
  int32_t currentTurn; // w8
  _BOOL4 v9; // w10
  _BOOL4 v10; // w8
  int32_t v11; // w20

  if ( !dataVals )
    goto LABEL_17;
  v5 = this;
  this = (BattleLogicFunction_o *)DataVals__IsAdjustmentBuffTurn(dataVals, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    return 0;
  if ( !actionServant || (data = v5->fields.data) == 0LL )
LABEL_17:
    sub_1B8880C(this, dataVals);
  currentTurn = data->fields.currentTurn;
  v9 = currentTurn == 0;
  v10 = currentTurn == 1;
  if ( actionServant->fields.isEnemy )
    v11 = v9;
  else
    v11 = v10;
  if ( DataVals__IsExtendBuffHalfTurnInOpponentTurn(dataVals, 0LL) )
    return v11;
  if ( DataVals__IsShortenBuffHalfTurnInOpponentTurn(dataVals, 0LL) )
    return v11 << 31 >> 31;
  if ( DataVals__IsExtendBuffHalfTurnInPartyTurn(dataVals, 0LL) )
    return v11 ^ 1;
  if ( DataVals__IsShortenBuffHalfTurnInPartyTurn(dataVals, 0LL) )
    return v11 - 1;
  return 0;
}


BuffEntity_o *__fastcall BattleLogicFunction__GetBuffEntity(
        BattleLogicFunction_o *this,
        FunctionEntity_o *funcEnt,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  struct System_Int32_array *vals; // x8

  if ( (byte_4A5DC68 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_BuffMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    byte_4A5DC68 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BuffMaster___);
  if ( !funcEnt )
    goto LABEL_10;
  vals = funcEnt->fields.vals;
  if ( !vals )
    goto LABEL_10;
  if ( !vals->max_length )
    sub_1B88814(Master_object, v5);
  if ( !Master_object )
LABEL_10:
    sub_1B8880C(Master_object, v5);
  return (BuffEntity_o *)DataMasterBase_object__object__int___GetEntity(
                           (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                           vals->m_Items[1],
                           (const MethodInfo_311D934 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
}


System_Int32_array *__fastcall BattleLogicFunction__GetBuffTargetCardIndexArray(
        BattleLogicFunction_o *this,
        DataVals_o *baseVals,
        BattleServantData_o *targetServant,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v6; // x19
  unsigned __int64 CardIndividuality; // x0
  __int64 v8; // x1
  int32_t CardIndex; // w20
  System_Int32_array *IdArrayFromIndividuality; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x22
  __int64 v12; // x24
  __int64 v13; // x25
  unsigned __int64 v14; // x24
  System_Collections_Generic_List_int__o *v15; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  __int64 v17; // x8
  unsigned __int64 v18; // x25
  __int64 v19; // x8
  int32_t v20; // w29
  unsigned __int64 v21; // x23
  struct System_Int32_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  int32_t Next; // w0
  struct System_Int32_array *v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  unsigned int max_length; // w11
  int32_t v30; // w1
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v32; // 0:x0.16

  if ( (byte_4A5DCA4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Repeat_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5DCA4 = 1;
  }
  v6 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !baseVals )
    goto LABEL_55;
  CardIndex = DataVals__GetCardIndex(baseVals, 0LL);
  CardIndividuality = DataVals__GetCardIndividuality(baseVals, 0LL);
  if ( (CardIndividuality & 0x80000000) == 0 )
  {
    IdArrayFromIndividuality = CardMaster__getIdArrayFromIndividuality(CardIndividuality, 0LL);
    CardIndividuality = (unsigned __int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !CardIndividuality )
      goto LABEL_55;
    CardIndividuality = (unsigned __int64)DataManager__GetMasterData_object_(
                                            (DataManager_o *)CardIndividuality,
                                            (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantMaster___);
    if ( !targetServant )
      goto LABEL_55;
    v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)CardIndividuality;
    v13 = *(_QWORD *)&targetServant->fields.svtId.fields.currentCryptoKey;
    v12 = *(_QWORD *)&targetServant->fields.svtId.fields.fakeValue;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v32.fields.currentCryptoKey = v13;
    *(_QWORD *)&v32.fields.fakeValue = v12;
    CardIndividuality = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_46449800(v32, 0LL);
    if ( !v11 )
      goto LABEL_55;
    CardIndividuality = (unsigned __int64)DataMasterBase_object__object__int___GetEntity(
                                            v11,
                                            CardIndividuality,
                                            (const MethodInfo_311D934 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    if ( !CardIndividuality )
      goto LABEL_55;
    v14 = *(_QWORD *)(CardIndividuality + 144);
    v15 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v15,
      (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
    CardIndividuality = (unsigned __int64)BattleServantData__get_BuffData(targetServant, 0LL);
    if ( !CardIndividuality )
      goto LABEL_55;
    CardIndividuality = (unsigned __int64)BattleBuffData__GetCommandCardTypeChangeBuff(
                                            (BattleBuffData_o *)CardIndividuality,
                                            0LL);
    if ( CardIndividuality )
    {
      if ( !v14 )
        goto LABEL_55;
      v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Repeat_int_(
                                                                   *(_DWORD *)(CardIndividuality + 28),
                                                                   *(_DWORD *)(v14 + 24),
                                                                   (const MethodInfo_2EAA8E8 *)Method_System_Linq_Enumerable_Repeat_int___);
      CardIndividuality = (unsigned __int64)System_Linq_Enumerable__ToArray_int_(
                                              v16,
                                              (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
      v14 = CardIndividuality;
    }
    if ( !IdArrayFromIndividuality )
      goto LABEL_55;
    v17 = *(_QWORD *)&IdArrayFromIndividuality->max_length;
    if ( (int)v17 >= 1 )
    {
      v18 = 0LL;
      while ( 1 )
      {
        if ( v18 >= (unsigned int)v17 )
          goto LABEL_54;
        if ( !v14 )
          goto LABEL_55;
        v19 = *(_QWORD *)(v14 + 24);
        if ( (int)v19 >= 1 )
          break;
LABEL_31:
        LODWORD(v17) = IdArrayFromIndividuality->max_length;
        if ( (__int64)++v18 >= (int)v17 )
          goto LABEL_32;
      }
      v20 = IdArrayFromIndividuality->m_Items[v18 + 1];
      v21 = 0LL;
      while ( v21 < (unsigned int)v19 )
      {
        if ( v20 == *(_DWORD *)(v14 + 32 + 4 * v21) )
        {
          if ( !v15 )
            goto LABEL_55;
          CardIndividuality = System_Collections_Generic_List_int___Contains(
                                v15,
                                v21,
                                (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
          if ( (CardIndividuality & 1) == 0 )
          {
            items = v15->fields._items;
            v23 = Method_System_Collections_Generic_List_int__Add__;
            ++v15->fields._version;
            if ( !items )
              goto LABEL_55;
            size = v15->fields._size;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_int___AddWithResize(
                v15,
                v21,
                *(const MethodInfo_34E0810 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
            }
            else
            {
              v15->fields._size = size + 1;
              items->m_Items[size + 1] = v21;
            }
          }
        }
        LODWORD(v19) = *(_DWORD *)(v14 + 24);
        if ( (__int64)++v21 >= (int)v19 )
          goto LABEL_31;
      }
LABEL_54:
      sub_1B88814(CardIndividuality, v8);
    }
LABEL_32:
    if ( !v15 )
LABEL_55:
      sub_1B8880C(CardIndividuality, v8);
    CardIndividuality = (unsigned int)v15->fields._size;
    if ( (int)CardIndividuality >= 1 )
    {
      if ( CardIndex )
      {
        if ( v6 )
        {
          System_Collections_Generic_List_int___AddRange(
            v6,
            (System_Collections_Generic_IEnumerable_T__o *)v15,
            (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
          return System_Collections_Generic_List_int___ToArray(
                   v6,
                   (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
        }
        goto LABEL_55;
      }
      Next = BattleRandom__getNext(CardIndividuality, 0LL);
      CardIndividuality = System_Collections_Generic_List_int___get_Item(
                            v15,
                            Next,
                            (const MethodInfo_34E0520 *)Method_System_Collections_Generic_List_int__get_Item__);
      if ( !v6 )
        goto LABEL_55;
      goto LABEL_45;
    }
    goto LABEL_40;
  }
  if ( (CardIndex & 0x80000000) != 0 )
    goto LABEL_40;
  if ( !CardIndex )
  {
    CardIndividuality = BattleRandom__getNext(5, 0LL);
    if ( !v6 )
      goto LABEL_55;
LABEL_45:
    v26 = v6->fields._items;
    v27 = Method_System_Collections_Generic_List_int__Add__;
    ++v6->fields._version;
    if ( !v26 )
      goto LABEL_55;
    v28 = v6->fields._size;
    max_length = v26->max_length;
    v30 = CardIndividuality;
    goto LABEL_50;
  }
  if ( CardIndex > 5 )
  {
LABEL_40:
    if ( v6 )
      return System_Collections_Generic_List_int___ToArray(
               v6,
               (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
    goto LABEL_55;
  }
  if ( !v6 )
    goto LABEL_55;
  v26 = v6->fields._items;
  v27 = Method_System_Collections_Generic_List_int__Add__;
  ++v6->fields._version;
  if ( !v26 )
    goto LABEL_55;
  v28 = v6->fields._size;
  max_length = v26->max_length;
  v30 = CardIndex - 1;
LABEL_50:
  if ( (unsigned int)v28 >= max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v6,
      v30,
      *(const MethodInfo_34E0810 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
  }
  else
  {
    v6->fields._size = v28 + 1;
    v26->m_Items[v28 + 1] = v30;
  }
  return System_Collections_Generic_List_int___ToArray(
           v6,
           (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o *__fastcall BattleLogicFunction__GetDependFuncTargets(
        BattleLogicFunction_o *this,
        BattleLogicFunction_ProcListInArgs_o *args,
        BattleActionData_o *mainAction,
        DataVals_o *dataVal,
        const MethodInfo *method)
{
  BattleLogicFunctionProcess_DependFunctionUnitCheck_o *v9; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o **p_funcTargetArray_k__BackingField; // x8
  _QWORD *v13; // x19
  __int64 v14; // x8
  __int64 v15; // x0
  __int64 v16; // x0

  if ( (byte_4A5DC75 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___);
    sub_1B885B0(&BattleLogicFunctionProcess_DependFunctionUnitCheck_TypeInfo);
    byte_4A5DC75 = 1;
  }
  v9 = (BattleLogicFunctionProcess_DependFunctionUnitCheck_o *)sub_1B887FC(BattleLogicFunctionProcess_DependFunctionUnitCheck_TypeInfo);
  BattleLogicFunctionProcess_DependFunctionUnitCheck___ctor(v9, this, args, dataVal, 0LL);
  if ( !v9 )
    sub_1B8880C(v10, v11);
  if ( BattleLogicFunctionProcess_FunctionUnitCheck__checkCondtion(
         (BattleLogicFunctionProcess_FunctionUnitCheck_o *)v9,
         mainAction,
         0LL) )
  {
    p_funcTargetArray_k__BackingField = (System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o **)&v9->fields._funcTargetArray_k__BackingField;
  }
  else
  {
    v13 = Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___;
    v14 = *((_QWORD *)Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___ + 7);
    if ( !v14 )
    {
      sub_1BDA4E8(Method_System_Array_Empty_BattleLogicFunctionProcess_FunctionTargetCheck___);
      v14 = v13[7];
    }
    v15 = *(_QWORD *)(v14 + 16);
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1BDA48C(v15);
    if ( !*(_DWORD *)(v15 + 224) )
      j_il2cpp_runtime_class_init_0(v15);
    v16 = *(_QWORD *)(v13[7] + 16LL);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1BDA48C(v16);
    p_funcTargetArray_k__BackingField = *(System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__o ***)(v16 + 184);
  }
  return *p_funcTargetArray_k__BackingField;
}


int32_t __fastcall BattleLogicFunction__GetInstantDeathRate(
        BattleLogicFunction_o *this,
        float funcVals,
        BattleServantData_o *targetSvtData,
        BattleServantData_o *actionSvtData,
        bool isTreasureDevice,
        const MethodInfo *method)
{
  float DeathRate; // s9
  float BuffResistInstantDeath; // s10
  float BuffNonResistInstantDeath; // s11
  float GrantInstantDeathMagnification; // s0

  if ( !targetSvtData )
    sub_1B8880C(this, 0LL);
  DeathRate = BattleServantData__getDeathRate(targetSvtData, 0LL);
  BuffResistInstantDeath = BattleServantData__getBuffResistInstantDeath(targetSvtData, actionSvtData, 0LL);
  BuffNonResistInstantDeath = BattleServantData__getBuffNonResistInstantDeath(targetSvtData, actionSvtData, 0LL);
  if ( actionSvtData )
    GrantInstantDeathMagnification = BattleServantData__getGrantInstantDeathMagnification(
                                       actionSvtData,
                                       targetSvtData,
                                       isTreasureDevice,
                                       0LL);
  else
    GrantInstantDeathMagnification = 0.0;
  return BattleUtility__FloorToInt(
           (float)(DeathRate * funcVals)
         * (float)((float)((float)(BuffNonResistInstantDeath - BuffResistInstantDeath) + 1.0)
                 + GrantInstantDeathMagnification),
           0LL);
}


RemovedBuffInfoGroup_o *__fastcall BattleLogicFunction__GetStealBuffInfoGroup(
        BattleLogicFunction_o *this,
        BattleLogicFunction_ProcListInArgs_o *procArg,
        BattleActionData_o *mainAction,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  System_Collections_Generic_List_T__o *v9; // x24
  _QWORD *DependDataValsArray; // x0
  __int64 v11; // x1
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  RemovedBuffInfoGroup_o *v15; // x22
  const MethodInfo *v16; // x4
  __int64 v17; // x8
  unsigned __int64 v18; // x9
  DataVals_o *v19; // x25
  __int64 v20; // x8
  _QWORD *v21; // x24
  __int64 v22; // x9
  int *v23; // x10
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x24
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x26
  __int64 v38; // x0
  __int64 v39; // x1
  int32_t v40; // w26
  FunctionEntity_o *funcEnt; // x27
  int32_t funcIndex; // w28
  bool IsCommandSideEffect; // w0
  BattleActionData_o *v44; // x0
  __int64 v45; // x0
  __int64 v46; // x1
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  const MethodInfo *v52; // [xsp+0h] [xbp-80h]
  _QWORD *v53; // [xsp+8h] [xbp-78h]
  unsigned __int64 v54; // [xsp+10h] [xbp-70h]
  RemovedBuffInfo_o *subBuffInfo; // [xsp+18h] [xbp-68h] BYREF

  if ( (byte_4A5DCA6 & 1) == 0 )
  {
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
    sub_1B885B0(&RemovedBuffInfoGroup_TypeInfo);
    byte_4A5DCA6 = 1;
  }
  subBuffInfo = 0LL;
  v9 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v9,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v9 )
    goto LABEL_56;
  items = v9->fields._items;
  v13 = Method_System_Collections_Generic_List_FuncList_TYPE__Add__;
  ++v9->fields._version;
  if ( !items )
    goto LABEL_56;
  size = v9->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v9,
      2,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
  }
  else
  {
    v9->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 2;
  }
  v15 = (RemovedBuffInfoGroup_o *)sub_1B887FC(RemovedBuffInfoGroup_TypeInfo);
  RemovedBuffInfoGroup___ctor(v15, 0LL);
  if ( !baseVals )
    goto LABEL_56;
  DependDataValsArray = DataVals__GetDependDataValsArray(
                          baseVals,
                          (System_Collections_Generic_List_FuncList_TYPE__o *)v9,
                          1,
                          0LL);
  if ( !DependDataValsArray )
    goto LABEL_56;
  v17 = DependDataValsArray[3];
  if ( (int)v17 >= 1 )
  {
    v18 = 0LL;
    v53 = DependDataValsArray;
    while ( 1 )
    {
      if ( v18 >= (unsigned int)v17 )
        sub_1B88814(DependDataValsArray, v11);
      v19 = (DataVals_o *)DependDataValsArray[v18 + 4];
      v54 = v18;
      DependDataValsArray = BattleLogicFunction__GetDependFuncTargets(this, procArg, mainAction, v19, v16);
      if ( !DependDataValsArray )
        break;
      v20 = *DependDataValsArray;
      v21 = DependDataValsArray;
      v22 = *(unsigned __int16 *)(*DependDataValsArray + 302LL);
      if ( *(_WORD *)(*DependDataValsArray + 302LL) )
      {
        v23 = (int *)(*(_QWORD *)(v20 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v23 - 1) != System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
        {
          --v22;
          v23 += 4;
          if ( !v22 )
            goto LABEL_18;
        }
        v24 = v20 + 16LL * *v23 + 312;
      }
      else
      {
LABEL_18:
        v24 = sub_1BDA590(
                DependDataValsArray,
                System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0LL);
      }
      v26 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))v24)(v21, *(_QWORD *)(v24 + 8));
      if ( !v26 )
        sub_1B8880C(0LL, v25);
      while ( 1 )
      {
        v27 = *(_QWORD *)v26;
        v28 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
        {
          v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v29 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v28;
            v29 += 4;
            if ( !v28 )
              goto LABEL_25;
          }
          v30 = v27 + 16LL * *v29 + 312;
        }
        else
        {
LABEL_25:
          v30 = sub_1BDA590(v26, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v26, *(_QWORD *)(v30 + 8)) & 1) == 0 )
          break;
        v31 = *(_QWORD *)v26;
        v32 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
        {
          v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v33 - 1) != System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
          {
            --v32;
            v33 += 4;
            if ( !v32 )
              goto LABEL_32;
          }
          v34 = v31 + 16LL * *v33 + 312;
        }
        else
        {
LABEL_32:
          v34 = sub_1BDA590(
                  v26,
                  System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                  0LL);
        }
        v35 = (*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v26, *(_QWORD *)(v34 + 8));
        v37 = v35;
        if ( !v35 )
          sub_1B8880C(0LL, v36);
        v38 = (*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v35 + 392LL))(
                v35,
                mainAction,
                *(_QWORD *)(*(_QWORD *)v35 + 400LL));
        if ( (v38 & 1) != 0 )
        {
          if ( !v19 )
            sub_1B8880C(v38, v39);
          if ( !procArg )
            sub_1B8880C(v38, v39);
          v40 = *(_DWORD *)(v37 + 32);
          funcEnt = v19->fields.funcEnt;
          funcIndex = v19->fields.funcIndex;
          IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0LL);
          v44 = BattleLogicFunction__functionSubState(
                  this,
                  v40,
                  funcEnt,
                  v19,
                  funcIndex,
                  IsCommandSideEffect,
                  &subBuffInfo,
                  procArg,
                  v52);
          if ( !mainAction )
            sub_1B8880C(v44, v44);
          BattleActionData__addAction(mainAction, v44, 0LL);
          if ( !v15 )
            sub_1B8880C(v45, v46);
          RemovedBuffInfoGroup__Register(v15, v40, subBuffInfo, 0LL);
        }
      }
      v47 = *(_QWORD *)v26;
      v48 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
      {
        v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
        {
          --v48;
          v49 += 4;
          if ( !v48 )
            goto LABEL_45;
        }
        v50 = v47 + 16LL * *v49 + 312;
      }
      else
      {
LABEL_45:
        v50 = sub_1BDA590(v26, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v50)(v26, *(_QWORD *)(v50 + 8));
      DependDataValsArray = v53;
      LODWORD(v17) = *((_DWORD *)v53 + 6);
      v18 = v54 + 1;
      if ( (__int64)(v54 + 1) >= (int)v17 )
        return v15;
    }
LABEL_56:
    sub_1B8880C(DependDataValsArray, v11);
  }
  return v15;
}


bool __fastcall BattleLogicFunction__IsAddStateFieldFlag(
        BattleLogicFunction_o *this,
        BattleBuffData_BuffData_o *buffData,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v4; // x20
  UnityEngine_Object_o *logic; // x21

  v4 = this;
  if ( (byte_4A5DC74 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DC74 = 1;
  }
  if ( !buffData )
    goto LABEL_11;
  if ( buffData->fields.onfiledUniqueId >= 1 )
  {
    logic = (UnityEngine_Object_o *)v4->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(logic, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)v4->fields.logic;
      if ( this )
        return BattleLogic__checkInField((BattleLogic_o *)this, buffData->fields.onfiledUniqueId, 0LL);
LABEL_11:
      sub_1B8880C(this, buffData);
    }
  }
  return 1;
}


bool __fastcall BattleLogicFunction__IsAttackSideEffectInvokeFunc(
        BattleLogicFunction_o *this,
        int32_t funcType,
        DataVals_o *baseVal,
        const MethodInfo *method)
{
  if ( funcType != 34 && funcType != 137 && funcType != 122 )
    return FuncList__isDamage(funcType, 0LL);
  if ( !baseVal )
    sub_1B8880C(this, funcType);
  return DataVals__IsActAttackFunction(baseVal, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicFunction__IsSafeWin(BattleLogicFunction_o *this, int32_t targetId, const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x8

  data = this->fields.data;
  if ( !data )
    goto LABEL_8;
  ServantData = BattleData__getServantData(data, targetId, 0LL);
  if ( !ServantData )
    return (unsigned __int8)ServantData & 1;
  data = this->fields.data;
  if ( !data )
LABEL_8:
    sub_1B8880C(data, *(_QWORD *)&targetId);
  if ( ServantData->fields.isEnemy )
    LOBYTE(ServantData) = ~BattleData__IsAliveLogic(data, 0, 0LL);
  else
    LOBYTE(ServantData) = !BattleData__checkBattleContinuationEnemys(data, 0LL);
  return (unsigned __int8)ServantData & 1;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicFunction__IsSvtBuffTurnExtend(
        BattleLogicFunction_o *this,
        int32_t targetId,
        BuffEntity_o *buffEnt,
        bool shortbuff,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x0
  BattleServantData_o *v11; // x21
  struct BattleData_o *v12; // x8
  int32_t currentTurn; // w8
  bool v14; // w10

  if ( (byte_4A5DC77 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMaster_ConstantStrMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&StringLiteral_5787/*"EXTEND_TURN_BUFF_TYPE"*/);
    byte_4A5DC77 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_27;
  ServantData = BattleData__getServantData(data, targetId, 0LL);
  if ( !ServantData )
    return (char)ServantData;
  v11 = ServantData;
  data = (BattleData_o *)ServantData->fields.svtdata;
  if ( !data )
    goto LABEL_27;
  if ( !ServantEntity__IsSvtBuffTurnExtend((ServantEntity_o *)data, 0LL) )
    goto LABEL_25;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  data = (BattleData_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_ConstantStrMaster___);
  if ( !buffEnt || !data )
    goto LABEL_27;
  data = (BattleData_o *)ConstantStrMaster__ExistValueArray(
                           (ConstantStrMaster_o *)data,
                           (System_String_o *)StringLiteral_5787/*"EXTEND_TURN_BUFF_TYPE"*/,
                           buffEnt->fields.type,
                           0LL);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_25;
  v12 = this->fields.data;
  if ( !v12 )
LABEL_27:
    sub_1B8880C(data, *(_QWORD *)&targetId);
  currentTurn = v12->fields.currentTurn;
  if ( !currentTurn )
  {
    LOBYTE(ServantData) = 1;
    if ( (shortbuff & (unsigned __int8)~v11->fields.isEnemy & 1) != 0 || v11->fields.isEnemy && !shortbuff )
      return (char)ServantData;
LABEL_25:
    LOBYTE(ServantData) = 0;
    return (char)ServantData;
  }
  v14 = currentTurn == 1 && v11->fields.isEnemy;
  if ( (!v14 || !shortbuff) && (currentTurn != 1 || v11->fields.isEnemy || shortbuff) )
    goto LABEL_25;
  LOBYTE(ServantData) = 1;
  return (char)ServantData;
}


bool __fastcall BattleLogicFunction__IsUpdateBuffProgressTurn(
        BattleLogicFunction_o *this,
        int32_t buffType,
        System_String_o *keyName,
        System_Collections_Generic_List_int__o **typeList,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  System_Collections_Generic_List_int__o *v9; // x22
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_IEnumerable_T__o *v12; // x1
  System_Int32_array *ValueArray; // x0

  if ( (byte_4A5DC6A & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ConstantStrMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5DC6A = 1;
  }
  Instance = (DataManager_o *)*typeList;
  if ( !*typeList )
  {
    v9 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v9,
      (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
    *typeList = v9;
    sub_1B88554((ServantStatusBattleListViewItem_o *)typeList, (int32_t)v9, v10, v11);
    Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( Instance )
    {
      Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                    Instance,
                                    (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ConstantStrMaster___);
      if ( Instance )
      {
        ValueArray = ConstantStrMaster__GetValueArray((ConstantStrMaster_o *)Instance, keyName, 0LL, 0LL);
        if ( ValueArray )
        {
          v12 = (System_Collections_Generic_IEnumerable_T__o *)ValueArray;
          Instance = (DataManager_o *)*typeList;
          if ( !*typeList )
            goto LABEL_11;
          System_Collections_Generic_List_int___AddRange(
            (System_Collections_Generic_List_int__o *)Instance,
            v12,
            (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
        }
        Instance = (DataManager_o *)*typeList;
        if ( *typeList )
          return System_Collections_Generic_List_int___Contains(
                   (System_Collections_Generic_List_int__o *)Instance,
                   buffType,
                   (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
      }
    }
LABEL_11:
    sub_1B8880C(Instance, v12);
  }
  return System_Collections_Generic_List_int___Contains(
           (System_Collections_Generic_List_int__o *)Instance,
           buffType,
           (const MethodInfo_34E0B88 *)Method_System_Collections_Generic_List_int__Contains__);
}


void __fastcall BattleLogicFunction__LossCommandSpell(
        BattleLogicFunction_o *this,
        DataVals_o *baseVals,
        BattleActionData_o *actionData,
        const MethodInfo *method)
{
  __int64 v6; // x21
  __int64 Value; // x0
  __int64 v8; // x1
  int32_t v9; // w1
  int32_t v10; // w2
  int32_t v11; // w3
  struct BattleSkillInfoData_o *skillInfo; // x1
  int32_t v13; // w2
  int32_t v14; // w3
  __int64 v15; // x22

  if ( (byte_4A5DCAA & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&StringLiteral_8308/*"LOSS_COMMAND_SPELL"*/);
    byte_4A5DCAA = 1;
  }
  v6 = sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v6, 0LL);
  if ( !actionData )
    goto LABEL_8;
  if ( !v6 )
    goto LABEL_8;
  *(_QWORD *)(v6 + 32) = *(_QWORD *)&actionData->fields.actorId;
  BattleActionData__setStateField((BattleActionData_o *)v6, 0LL);
  v9 = StringLiteral_8308/*"LOSS_COMMAND_SPELL"*/;
  *(_QWORD *)(v6 + 64) = StringLiteral_8308/*"LOSS_COMMAND_SPELL"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 64), v9, v10, v11);
  skillInfo = actionData->fields.skillInfo;
  *(_QWORD *)(v6 + 144) = skillInfo;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v6 + 144), (int32_t)skillInfo, v13, v14);
  if ( !baseVals || (v15 = *(_QWORD *)(v6 + 144), Value = DataVals__GetValue(baseVals, 0LL), !v15) )
LABEL_8:
    sub_1B8880C(Value, v8);
  *(_DWORD *)(v15 + 100) = Value;
  *(_BYTE *)(v6 + 241) = DataVals__isForcedEffectSpeedOne(baseVals, 0LL);
  BattleActionData__AddAfterActionData(actionData, (BattleActionData_o *)v6, 0, 0LL);
}


BattleActionData_BuffData_o *__fastcall BattleLogicFunction__MakeAddActionBuffData(
        BattleLogicFunction_o *this,
        BattleActionData_BuffData_o *actBuffData,
        BattleBuffData_BuffData_o *buffData,
        FunctionEntity_o *funcEnt,
        bool isCommandSideEffect,
        bool isConvertBuffFailed,
        const MethodInfo *method)
{
  struct System_String_o *popupText; // x1
  bool v11; // w22
  struct System_Int32_array *EffectList; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  BattleActionData_BuffData_o *result; // x0

  if ( !buffData
    || !actBuffData
    || (actBuffData->fields.buffId = buffData->fields.buffId,
        actBuffData->fields.auraEffectId = buffData->fields.auraEffectId,
        actBuffData->fields.classIconAuraEffectId = buffData->fields.classIconAuraEffectId,
        !funcEnt) )
  {
    sub_1B8880C(this, actBuffData);
  }
  popupText = funcEnt->fields.popupText;
  v11 = isCommandSideEffect;
  actBuffData->fields.popLabel = popupText;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&actBuffData->fields.popLabel,
    (int32_t)popupText,
    (int32_t)buffData,
    (int32_t)funcEnt);
  *(_QWORD *)&actBuffData->fields.popIcon = *(_QWORD *)&funcEnt->fields.popupIconId;
  EffectList = FunctionEntity__getEffectList(funcEnt, 0LL);
  actBuffData->fields.effectList = EffectList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&actBuffData->fields.effectList, (int32_t)EffectList, v13, v14);
  actBuffData->fields.isCommandAfter = v11;
  result = actBuffData;
  actBuffData->fields.addOrder = buffData->fields.addOrder;
  return result;
}


BattleActionData_BuffData_o *__fastcall BattleLogicFunction__MakeGrayActionBuffData(
        BattleLogicFunction_o *this,
        int32_t targetId,
        int32_t funcIndex,
        int32_t iconId,
        System_String_o *popupText,
        int32_t popupTextColor,
        const MethodInfo *method)
{
  __int64 v12; // x23
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_4A5DC7B & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_BuffData_TypeInfo);
    byte_4A5DC7B = 1;
  }
  v12 = sub_1B887FC(BattleActionData_BuffData_TypeInfo);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v12, 0LL);
  if ( !v12 )
    sub_1B8880C(v13, v14);
  *(_DWORD *)(v12 + 40) = targetId;
  *(_DWORD *)(v12 + 16) = funcIndex;
  *(_DWORD *)(v12 + 64) = iconId;
  *(_QWORD *)(v12 + 56) = popupText;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 56), (int32_t)popupText, v15, v16);
  *(_DWORD *)(v12 + 68) = popupTextColor;
  *(_QWORD *)(v12 + 72) = 0LL;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v12 + 72), 0, v17, v18);
  *(_BYTE *)(v12 + 102) = 1;
  return (BattleActionData_BuffData_o *)v12;
}


void __fastcall BattleLogicFunction__ResetFamilyLinkageIdToStolenFamilyBuffs(
        BattleLogicFunction_o *this,
        BattleLogicFunction_ProcListInArgs_o *procArg,
        BattleServantData_o *targetServant,
        RemovedBuffInfoGroup_o *stealBuffInfoGroup,
        const MethodInfo *method)
{
  FamilyBuffLinkageIdGenerator_o *v8; // x19
  Il2CppObject *current; // x21
  System_Collections_Generic_Dictionary_int__int__o *v10; // x20
  __int64 v11; // x0
  __int64 v12; // x1
  System_Collections_Generic_List_object__o *klass; // x0
  _BOOL8 v14; // x0
  __int64 v15; // x1
  Il2CppObject *v16; // x22
  __int64 v17; // x21
  System_Int32_array *FamilyLinkageIdArray; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  System_Int32_array *FamilyLinkageTargetIdArray; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  __int64 IsNullOrEmpty; // x0
  __int64 v25; // x1
  __int64 v26; // x8
  unsigned __int64 v27; // x26
  System_Collections_ICollection_o *v28; // x22
  unsigned __int64 monitor; // x8
  __int64 v30; // x24
  unsigned __int64 v31; // x25
  System_Collections_ICollection_o *v32; // x29
  _BOOL8 v33; // x0
  __int64 v34; // x1
  int32_t v35; // w23
  int32_t v36; // w0
  System_Collections_Generic_List_Enumerator_object__o v37; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v38; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v39; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4A5DCA7 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__get_Values__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__get_Current__);
    sub_1B885B0(&int_____TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
    this = (BattleLogicFunction_o *)sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__RemovedBuffInfo__GetEnumerator__);
    byte_4A5DCA7 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  memset(&v38, 0, sizeof(v38));
  if ( targetServant )
  {
    if ( !procArg
      || (this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__GetFamilyBuffLinkageIdGenerator(
                                            procArg,
                                            targetServant,
                                            0LL),
          !stealBuffInfoGroup)
      || (v8 = (FamilyBuffLinkageIdGenerator_o *)this,
          (this = (BattleLogicFunction_o *)stealBuffInfoGroup->fields._servantUniqueIdToRemovedBuffInfoMap_k__BackingField) == 0LL)
      || (this = (BattleLogicFunction_o *)System_Collections_Generic_Dictionary_int__object___get_Values(
                                            (System_Collections_Generic_Dictionary_int__object__o *)this,
                                            (const MethodInfo_316D768 *)Method_System_Collections_Generic_Dictionary_int__RemovedBuffInfo__get_Values__)) == 0LL )
    {
      sub_1B8880C(this, procArg);
    }
    System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
      (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v37,
      (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)this,
      (const MethodInfo_3804A5C *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__RemovedBuffInfo__GetEnumerator__);
    v39 = v37;
    while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
              (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v39,
              (const MethodInfo_32B808C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__MoveNext__) )
    {
      current = v39.fields._current;
      v10 = (System_Collections_Generic_Dictionary_int__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__int__TypeInfo);
      System_Collections_Generic_Dictionary_int__int____ctor(
        v10,
        (const MethodInfo_31644C4 *)Method_System_Collections_Generic_Dictionary_int__int___ctor__);
      if ( !current )
        sub_1B8880C(v11, v12);
      klass = (System_Collections_Generic_List_object__o *)current[1].klass;
      if ( !klass )
        sub_1B8880C(0LL, v12);
      System_Collections_Generic_List_object___GetEnumerator(
        (System_Collections_Generic_List_Enumerator_T__o *)&v37,
        klass,
        (const MethodInfo_34FE32C *)Method_System_Collections_Generic_List_BattleBuffData_BuffData__GetEnumerator__);
      v38 = v37;
      while ( 1 )
      {
        v14 = System_Collections_Generic_List_Enumerator_object___MoveNext(
                &v38,
                (const MethodInfo_3278304 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__MoveNext__);
        if ( !v14 )
          break;
        v16 = v38.fields._current;
        if ( !v38.fields._current )
          sub_1B8880C(v14, v15);
        if ( BattleBuffData_BuffData__IsFamilyBuff((BattleBuffData_BuffData_o *)v38.fields._current, 0LL) )
        {
          v17 = sub_1B88658(int_____TypeInfo, 2LL);
          FamilyLinkageIdArray = BattleBuffData_BuffData__get_FamilyLinkageIdArray(
                                   (BattleBuffData_BuffData_o *)v16,
                                   0LL);
          if ( !v17 )
            sub_1B8880C(FamilyLinkageIdArray, FamilyLinkageIdArray);
          if ( !*(_DWORD *)(v17 + 24) )
            sub_1B88814(FamilyLinkageIdArray, FamilyLinkageIdArray);
          *(_QWORD *)(v17 + 32) = FamilyLinkageIdArray;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 32), (int32_t)FamilyLinkageIdArray, v19, v20);
          FamilyLinkageTargetIdArray = BattleBuffData_BuffData__get_FamilyLinkageTargetIdArray(
                                         (BattleBuffData_BuffData_o *)v16,
                                         0LL);
          if ( *(_DWORD *)(v17 + 24) <= 1u )
            sub_1B88814(FamilyLinkageTargetIdArray, FamilyLinkageTargetIdArray);
          *(_QWORD *)(v17 + 40) = FamilyLinkageTargetIdArray;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v17 + 40), (int32_t)FamilyLinkageTargetIdArray, v22, v23);
          v26 = *(_QWORD *)(v17 + 24);
          if ( (int)v26 >= 1 )
          {
            v27 = 0LL;
            do
            {
              if ( v27 >= (unsigned int)v26 )
                sub_1B88814(IsNullOrEmpty, v25);
              v28 = *(System_Collections_ICollection_o **)(v17 + 8 * v27 + 32);
              IsNullOrEmpty = BasicHelper__IsNullOrEmpty(v28, 0LL);
              if ( (IsNullOrEmpty & 1) == 0 )
              {
                if ( !v28 )
                  sub_1B8880C(IsNullOrEmpty, v25);
                monitor = (unsigned __int64)v28[1].monitor;
                if ( (int)monitor >= 1 )
                {
                  v30 = (unsigned int)v28[1].monitor;
                  v31 = 0LL;
                  v32 = v28 + 2;
                  do
                  {
                    if ( v31 >= (unsigned int)monitor )
                      sub_1B88814(IsNullOrEmpty, v25);
                    if ( !v10 )
                      sub_1B8880C(IsNullOrEmpty, v25);
                    v33 = System_Collections_Generic_Dictionary_int__int___ContainsKey(
                            v10,
                            *((_DWORD *)&v32->klass + v31),
                            (const MethodInfo_3165074 *)Method_System_Collections_Generic_Dictionary_int__int__ContainsKey__);
                    if ( !v33 )
                    {
                      if ( v31 >= LODWORD(v28[1].monitor) )
                        sub_1B88814(v33, v34);
                      if ( !v8 )
                        sub_1B8880C(v33, v34);
                      v35 = *((_DWORD *)&v32->klass + v31);
                      v36 = FamilyBuffLinkageIdGenerator__Next(v8, 0LL);
                      System_Collections_Generic_Dictionary_int__int___set_Item(
                        v10,
                        v35,
                        v36,
                        (const MethodInfo_3164E74 *)Method_System_Collections_Generic_Dictionary_int__int__set_Item__);
                    }
                    if ( v31 >= LODWORD(v28[1].monitor) )
                      sub_1B88814(v33, v34);
                    IsNullOrEmpty = System_Collections_Generic_Dictionary_int__int___get_Item(
                                      v10,
                                      *((_DWORD *)&v32->klass + v31),
                                      (const MethodInfo_3164DEC *)Method_System_Collections_Generic_Dictionary_int__int__get_Item__);
                    monitor = LODWORD(v28[1].monitor);
                    if ( v31 >= monitor )
                      sub_1B88814(IsNullOrEmpty, v25);
                    *((_DWORD *)&v32->klass + v31++) = IsNullOrEmpty;
                  }
                  while ( v30 != v31 );
                }
              }
              LODWORD(v26) = *(_DWORD *)(v17 + 24);
              ++v27;
            }
            while ( (__int64)v27 < (int)v26 );
          }
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose(
        &v38,
        (const MethodInfo_3278300 *)Method_System_Collections_Generic_List_Enumerator_BattleBuffData_BuffData__Dispose__);
    }
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
      (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&v39,
      (const MethodInfo_32B8088 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__RemovedBuffInfo__Dispose__);
  }
}


void __fastcall BattleLogicFunction__SetFuncSideEffect(
        BattleLogicFunction_o *this,
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *sideEffectArg,
        BattleActionData_o *actionData,
        BattleServantData_o *actorSvtData,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x22
  void *FuncSideEffectTargetServants; // x0
  __int64 v11; // x1
  __int64 v12; // x8
  unsigned __int64 v13; // x9
  bool v14; // w27
  __int64 v15; // x8
  _QWORD *v16; // x27
  unsigned __int64 v17; // x25
  BattleServantData_o *v18; // x28
  __int64 v19; // x8
  _QWORD *v20; // x29
  unsigned __int64 v21; // x24
  BattleBuffData_BuffData_o *v22; // x23
  BattleActionData_o *SideEffectActionData_42362172; // x0
  const MethodInfo *v24; // x6
  BattleData_o *data; // x8
  int v26; // w8
  _DWORD *v27; // x24
  unsigned int v28; // w28
  char *v29; // x8
  __int64 v30; // x25
  __int64 v31; // x8
  _QWORD *v32; // x26
  unsigned __int64 v33; // x29
  BattleBuffData_BuffData_o *v34; // x27
  const MethodInfo *v35; // x6
  System_Collections_Generic_IEnumerable_T__o *SideEffectList; // x19
  BattleLogicFunction___c_c *v37; // x8
  System_Action_object__o *_9__49_0; // x20
  Il2CppObject *v39; // x21
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  _DWORD *v43; // [xsp+8h] [xbp-88h]
  unsigned __int64 v45; // [xsp+18h] [xbp-78h]
  System_Int32_array *questIndividualityArray; // [xsp+28h] [xbp-68h]
  System_Int32_array *questIndividualityArraya; // [xsp+28h] [xbp-68h]

  if ( (byte_4A5DC6E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BattleActionData__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_BattleActionData___);
    sub_1B885B0(&bool___TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_SkillLvMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_BattleLogicFunction___c__SetFuncSideEffect_b__49_0__);
    sub_1B885B0(&BattleLogicFunction___c_TypeInfo);
    byte_4A5DC6E = 1;
  }
  if ( actionData && actorSvtData )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SkillLvMaster___);
    FuncSideEffectTargetServants = (void *)sub_1B88658(bool___TypeInfo, 2LL);
    if ( !FuncSideEffectTargetServants )
      goto LABEL_49;
    v12 = *((_QWORD *)FuncSideEffectTargetServants + 3);
    if ( !(_DWORD)v12 )
      goto LABEL_48;
    *((_BYTE *)FuncSideEffectTargetServants + 32) = 1;
    if ( (int)v12 >= 1 )
    {
      v13 = 0LL;
      v43 = FuncSideEffectTargetServants;
      while ( 1 )
      {
        if ( v13 >= (unsigned int)v12 )
          goto LABEL_48;
        if ( !sideEffectArg )
          goto LABEL_49;
        v45 = v13;
        v14 = *((_BYTE *)FuncSideEffectTargetServants + v13 + 32) != 0;
        questIndividualityArray = (System_Int32_array *)((__int64 (__fastcall *)(BattleLogicFunction_FuncSideEffectFunctionArgument_o *, bool, Il2CppMethodPointer))sideEffectArg->klass->vtable._6_GetActArray.method)(
                                                          sideEffectArg,
                                                          v14,
                                                          sideEffectArg->klass->vtable._7_SetSideEffect.methodPtr);
        FuncSideEffectTargetServants = BattleActionData__GetFuncSideEffectTargetServants(
                                         actionData,
                                         this->fields.data,
                                         v14,
                                         targetIds,
                                         0LL);
        if ( !FuncSideEffectTargetServants )
          goto LABEL_49;
        v15 = *((_QWORD *)FuncSideEffectTargetServants + 3);
        v16 = FuncSideEffectTargetServants;
        if ( (int)v15 >= 1 )
          break;
LABEL_24:
        FuncSideEffectTargetServants = v43;
        LODWORD(v12) = v43[6];
        v13 = v45 + 1;
        if ( (__int64)(v45 + 1) >= (int)v12 )
          goto LABEL_25;
      }
      v17 = 0LL;
      while ( 1 )
      {
        if ( v17 >= (unsigned int)v15 )
          goto LABEL_48;
        v18 = (BattleServantData_o *)v16[v17 + 4];
        FuncSideEffectTargetServants = BattleServantData__GetAddSideEffectBuffList(
                                         actorSvtData,
                                         (BuffList_ACTION_array *)questIndividualityArray,
                                         v18,
                                         0LL);
        if ( !FuncSideEffectTargetServants )
          goto LABEL_49;
        v19 = *((_QWORD *)FuncSideEffectTargetServants + 3);
        v20 = FuncSideEffectTargetServants;
        if ( (int)v19 >= 1 )
          break;
LABEL_23:
        LODWORD(v15) = *((_DWORD *)v16 + 6);
        if ( (__int64)++v17 >= (int)v15 )
          goto LABEL_24;
      }
      v21 = 0LL;
      while ( v21 < (unsigned int)v19 )
      {
        if ( !v18 )
          goto LABEL_49;
        v22 = (BattleBuffData_BuffData_o *)v20[v21 + 4];
        SideEffectActionData_42362172 = BattleActionData__MakeSideEffectActionData_42362172(
                                          actionData,
                                          4,
                                          v18->fields.uniqueId,
                                          0LL);
        BattleLogicFunction__SetSideEffectBuff(
          this,
          (SkillLvMaster_o *)Master_object,
          SideEffectActionData_42362172,
          v22,
          (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)sideEffectArg,
          1,
          v24);
        LODWORD(v19) = *((_DWORD *)v20 + 6);
        if ( (__int64)++v21 >= (int)v19 )
          goto LABEL_23;
      }
LABEL_48:
      sub_1B88814(FuncSideEffectTargetServants, v11);
    }
LABEL_25:
    FuncSideEffectTargetServants = this->fields.data;
    if ( !FuncSideEffectTargetServants
      || (FuncSideEffectTargetServants = BattleData__getQuestIndividualities(
                                           (BattleData_o *)FuncSideEffectTargetServants,
                                           0LL),
          data = this->fields.data,
          questIndividualityArraya = (System_Int32_array *)FuncSideEffectTargetServants,
          !data)
      || (FuncSideEffectTargetServants = BattleData__getFieldServantList(data, 0, 0LL)) == 0LL )
    {
LABEL_49:
      sub_1B8880C(FuncSideEffectTargetServants, v11);
    }
    v26 = *((_DWORD *)FuncSideEffectTargetServants + 6);
    v27 = FuncSideEffectTargetServants;
    if ( v26 >= 1 )
    {
      v28 = 0;
      while ( 1 )
      {
        if ( v28 >= v26 )
          goto LABEL_48;
        v29 = (char *)&v27[2 * v28];
        v30 = *((_QWORD *)v29 + 4);
        if ( !v30 )
          goto LABEL_49;
        FuncSideEffectTargetServants = BattleServantData__GetFieldIndividualityChangedFunctionBuff(
                                         *((BattleServantData_o **)v29 + 4),
                                         questIndividualityArraya,
                                         0LL);
        if ( !FuncSideEffectTargetServants )
          goto LABEL_49;
        v31 = *((_QWORD *)FuncSideEffectTargetServants + 3);
        v32 = FuncSideEffectTargetServants;
        if ( (int)v31 >= 1 )
          break;
LABEL_38:
        v26 = v27[6];
        if ( (int)++v28 >= v26 )
          goto LABEL_39;
      }
      v33 = 0LL;
      while ( v33 < (unsigned int)v31 )
      {
        v34 = (BattleBuffData_BuffData_o *)v32[v33 + 4];
        FuncSideEffectTargetServants = BattleActionData__MakeSideEffectActionData_42362172(
                                         actionData,
                                         4,
                                         *(_DWORD *)(v30 + 24),
                                         0LL);
        if ( !FuncSideEffectTargetServants )
          goto LABEL_49;
        *((_DWORD *)FuncSideEffectTargetServants + 8) = *(_DWORD *)(v30 + 24);
        BattleLogicFunction__SetSideEffectBuff(
          this,
          (SkillLvMaster_o *)Master_object,
          (BattleActionData_o *)FuncSideEffectTargetServants,
          v34,
          (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)sideEffectArg,
          1,
          v35);
        LODWORD(v31) = *((_DWORD *)v32 + 6);
        if ( (__int64)++v33 >= (int)v31 )
          goto LABEL_38;
      }
      goto LABEL_48;
    }
LABEL_39:
    if ( BattleActionData__ExistSideEffect(actionData, 4, 0LL) )
    {
      BattleActionData__SetFuncSideEffectTrigger(actionData, 0LL);
      SideEffectList = (System_Collections_Generic_IEnumerable_T__o *)BattleActionData__getSideEffectList(
                                                                        actionData,
                                                                        4,
                                                                        0LL);
      v37 = BattleLogicFunction___c_TypeInfo;
      if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
        v37 = BattleLogicFunction___c_TypeInfo;
      }
      _9__49_0 = (System_Action_object__o *)v37->static_fields->__9__49_0;
      if ( !_9__49_0 )
      {
        if ( !v37->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v37);
          v37 = BattleLogicFunction___c_TypeInfo;
        }
        v39 = (Il2CppObject *)v37->static_fields->__9;
        _9__49_0 = (System_Action_object__o *)sub_1B887FC(System_Action_BattleActionData__TypeInfo);
        System_Action_object____ctor(_9__49_0, v39, Method_BattleLogicFunction___c__SetFuncSideEffect_b__49_0__, 0LL);
        static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
        static_fields->__9__49_0 = (struct System_Action_BattleActionData__o *)_9__49_0;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__49_0, (int32_t)_9__49_0, v41, v42);
      }
      BasicHelper__ForEach_object_(
        SideEffectList,
        (System_Action_T__o *)_9__49_0,
        (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_BattleActionData___);
    }
  }
}


void __fastcall BattleLogicFunction__SetGainHpBuff(
        BattleLogicFunction_o *this,
        BattleActionData_o *actiondata,
        int32_t healPoint,
        int32_t funcIndex,
        BattleServantData_o *targetSvtData,
        FunctionEntity_o *funcEnt,
        DataVals_o *baseVals,
        bool isCommandSideEffect,
        bool isHideEffect,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v17; // x27
  const MethodInfo *v18; // x7
  BattleLogicFunction_o *v19; // x25
  _BOOL8 v20; // x0
  const MethodInfo *v21; // x6
  int32_t v22; // w2
  int32_t v23; // w3
  BattleLogicFunction_o *v24; // x22
  int32_t v25; // w2
  int32_t v26; // w3
  BattleLogicFunction_o *v27; // x21
  int logic; // w8
  __int64 v29; // x23
  BattleActionData_BuffData_o *v30; // x22
  BattleActionData_o *NoEffectObject; // x23
  __int64 v32; // x0

  v17 = this;
  if ( (byte_4A5DC85 & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1B885B0(&BattleActionData_BuffData___TypeInfo);
    byte_4A5DC85 = 1;
  }
  if ( !targetSvtData || !actiondata )
    goto LABEL_26;
  this = (BattleLogicFunction_o *)BattleActionData__setHealData(
                                    actiondata,
                                    targetSvtData->fields.uniqueId,
                                    healPoint,
                                    funcIndex,
                                    0,
                                    baseVals,
                                    isCommandSideEffect,
                                    0LL);
  v19 = this;
  if ( healPoint <= 0 )
  {
    if ( !baseVals )
      goto LABEL_26;
    if ( !baseVals->fields.isShowForcedEffect )
    {
      NoEffectObject = BattleLogicFunction__getNoEffectObject(
                         v17,
                         targetSvtData->fields.uniqueId,
                         funcIndex,
                         baseVals,
                         isCommandSideEffect,
                         0LL,
                         0LL,
                         v18);
      BattleActionData__addAction(actiondata, NoEffectObject, 0LL);
      if ( NoEffectObject )
      {
        this = (BattleLogicFunction_o *)BattleActionData__getBuffList(NoEffectObject, funcIndex, 0LL);
        v27 = this;
        if ( !this )
          return;
        goto LABEL_15;
      }
LABEL_26:
      sub_1B8880C(this, actiondata);
    }
  }
  v20 = BattleServantData__resultHeal(targetSvtData, healPoint, 0LL);
  this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                    (BattleLogicFunction_o *)v20,
                                    funcEnt,
                                    targetSvtData->fields.uniqueId,
                                    funcIndex,
                                    isCommandSideEffect,
                                    0LL,
                                    v21);
  if ( !v19 )
    goto LABEL_26;
  v24 = this;
  v19->fields.tamamocatTreasureDeviceIds = (struct System_Int32_array *)this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v19->fields.tamamocatTreasureDeviceIds, (int32_t)this, v22, v23);
  if ( !baseVals )
    goto LABEL_26;
  LODWORD(v19->fields.buffProgressTurnSelfList) = DataVals__GetParam(baseVals, 64, 0, 0LL);
  this = (BattleLogicFunction_o *)sub_1B88658(BattleActionData_BuffData___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_26;
  v27 = this;
  if ( v24 )
  {
    this = (BattleLogicFunction_o *)sub_1B886EC(v24, this->klass->_1.element_class);
    if ( !this )
    {
      v32 = sub_1B88830(0LL);
      sub_1B886D8(v32, 0LL);
    }
  }
  if ( !LODWORD(v27->fields.logic) )
    goto LABEL_27;
  v27->fields.logictarget = (struct BattleLogicTarget_o *)v24;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v27->fields.logictarget, (int32_t)v24, v25, v26);
LABEL_15:
  logic = (int)v27->fields.logic;
  if ( logic >= 1 )
  {
    v29 = 0LL;
    while ( (unsigned int)v29 < logic )
    {
      v30 = (BattleActionData_BuffData_o *)*((_QWORD *)&v27->fields.logictarget + v29);
      if ( !v30 )
        goto LABEL_26;
      v30->fields.isHideEffect = isHideEffect;
      this = (BattleLogicFunction_o *)BattleServantData__isLogicResultAlive(targetSvtData, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
        BattleActionData_BuffData__SetCheckHideWhenDeadInfo(v30, baseVals, 0LL);
      logic = (int)v27->fields.logic;
      if ( (int)++v29 >= logic )
        return;
    }
LABEL_27:
    sub_1B88814(this, actiondata);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicFunction__SetReceiveFunctionId(
        BattleLogicFunction_o *this,
        bool funcResult,
        int32_t funcTargetId,
        FunctionEntity_o *funcEntity,
        const MethodInfo *method)
{
  BattleData_o *data; // x0

  if ( funcResult )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_7;
    data = (BattleData_o *)BattleData__getServantData(data, funcTargetId, 0LL);
    if ( data )
    {
      if ( funcEntity )
      {
        BattleServantData__SetReceiveFunctionId((BattleServantData_o *)data, funcEntity->fields.id, 0LL);
        return;
      }
LABEL_7:
      sub_1B8880C(data, funcResult);
    }
  }
}


void __fastcall BattleLogicFunction__SetSideEffectBuff(
        BattleLogicFunction_o *this,
        SkillLvMaster_o *skillLvMst,
        BattleActionData_o *actData,
        BattleBuffData_BuffData_o *buff,
        BattleLogicFunction_CommonSideEffectFunctionArgument_o *arg,
        bool isCommandSideEffect,
        const MethodInfo *method)
{
  SkillLvEntity_o *SkillFromBuff; // x0
  __int64 v13; // x1
  int32_t addOrder; // w8
  System_Int32_array *funcId; // x23
  DataVals_array *DataValsList; // x0
  const MethodInfo *v17; // [xsp+28h] [xbp-38h]

  SkillFromBuff = BattleServantData__getSkillFromBuff(skillLvMst, buff, 0LL);
  if ( SkillFromBuff )
  {
    if ( !buff || !arg )
      sub_1B8880C(SkillFromBuff, v13);
    addOrder = buff->fields.addOrder;
    arg->fields.isShowBattlePointEffect = 1;
    *(&arg->fields._SkillTiming_k__BackingField + 1) = addOrder;
    funcId = SkillFromBuff->fields.funcId;
    DataValsList = SkillLvEntity__getDataValsList(SkillFromBuff, 0LL);
    BattleLogicFunction__procList(
      this,
      actData,
      funcId,
      DataValsList,
      0,
      0,
      isCommandSideEffect,
      0,
      0,
      0,
      0,
      (BattleLogicFunction_FunctionArgument_o *)arg,
      0,
      v17);
  }
}


void __fastcall BattleLogicFunction__SetTargetAttackSideEffect(
        BattleLogicFunction_o *this,
        BattleLogicFunction_AttackSideEffectFunctionArgument_o *arg,
        BattleActionData_o *mainAction,
        BattleServantData_o *actionSvtData,
        BattleCommandData_o *command,
        BattleLogicFunction_SideEffectMakeArgument_o *attackArg,
        const MethodInfo *method)
{
  DataManager_o *Instance; // x0
  __int64 v12; // x1
  struct BattleActionData_SideEffectData_array *SideEffectList_k__BackingField; // x25
  int max_length; // w8
  int v15; // w20
  BattleActionData_SideEffectData_o *v16; // x23
  BattleServantData_o *v17; // x26
  int32_t v18; // w1
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  DataManager_o *v20; // x27
  unsigned __int64 v21; // x23
  BattleBuffData_BuffData_o *v22; // x29
  BattleActionData_o *v23; // x28
  int v24; // w0
  const MethodInfo *v25; // x6
  int32_t v26; // w0
  struct BattleActionData_SideEffectData_array *v27; // [xsp+8h] [xbp-88h]
  SkillLvMaster_o *v29; // [xsp+18h] [xbp-78h]
  System_Collections_Generic_KeyValuePair_int__int__o pairAttackAndTarget; // [xsp+28h] [xbp-68h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o p_pairAttackAndTarget; // 0:x0.8
  System_Collections_Generic_KeyValuePair_int__int__o v33; // 0:x1.8
  System_Collections_Generic_KeyValuePair_int__int__o v34; // 0:x1.8

  if ( (byte_4A5DC71 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5DC71 = 1;
  }
  pairAttackAndTarget = 0LL;
  Instance = (DataManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance
    || (Instance = (DataManager_o *)DataManager__GetMasterData_object_(
                                      Instance,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___),
        v29 = (SkillLvMaster_o *)Instance,
        !attackArg)
    || (SideEffectList_k__BackingField = attackArg->fields._SideEffectList_k__BackingField) == 0LL )
  {
LABEL_25:
    sub_1B8880C(Instance, v12);
  }
  max_length = SideEffectList_k__BackingField->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    v27 = attackArg->fields._SideEffectList_k__BackingField;
    do
    {
      if ( v15 >= (unsigned int)max_length )
        goto LABEL_26;
      v16 = SideEffectList_k__BackingField->m_Items[v15];
      if ( !v16 )
        goto LABEL_25;
      Instance = (DataManager_o *)this->fields.data;
      if ( !Instance )
        goto LABEL_25;
      Instance = (DataManager_o *)BattleData__getServantData((BattleData_o *)Instance, v16->fields.targetId, 0LL);
      if ( Instance )
      {
        if ( !actionSvtData )
          goto LABEL_25;
        v17 = (BattleServantData_o *)Instance;
        v18 = BattleLogicFunction_SideEffectMakeArgument__MakeCheckKey(attackArg, actionSvtData->fields.uniqueId, 0LL);
        p_pairAttackAndTarget = (System_Collections_Generic_KeyValuePair_int__int__o)&pairAttackAndTarget;
        System_Collections_Generic_KeyValuePair_int__int____ctor(
          p_pairAttackAndTarget,
          v18,
          v17->fields.uniqueId,
          (const MethodInfo_34336EC *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
        if ( !mainAction )
          goto LABEL_25;
        v33 = pairAttackAndTarget;
        Instance = (DataManager_o *)BattleActionData__isReflectedAttackSideEffect(mainAction, v33, 0LL);
        if ( ((unsigned __int8)Instance & 1) == 0 )
        {
          Instance = (DataManager_o *)BattleServantData__getAttackSideEffectBuffList_42943084(
                                        actionSvtData,
                                        v16->fields.sideEffectActs,
                                        command,
                                        v17,
                                        0LL);
          if ( !Instance )
            goto LABEL_25;
          m_CancellationTokenSource = Instance->fields.m_CancellationTokenSource;
          v20 = Instance;
          if ( m_CancellationTokenSource )
          {
            if ( (int)m_CancellationTokenSource >= 1 )
            {
              v21 = 0LL;
              while ( v21 < (unsigned int)m_CancellationTokenSource )
              {
                v22 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v20->fields._DispLog + v21);
                v23 = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo);
                BattleActionData___ctor(v23, 0LL);
                if ( !v23 )
                  goto LABEL_25;
                v23->fields.actorId = actionSvtData->fields.uniqueId;
                v23->fields.targetId = v17->fields.uniqueId;
                v24 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, Il2CppMethodPointer))attackArg->klass->vtable._5_unknown.method)(
                        attackArg,
                        attackArg->klass->vtable._6_Init.methodPtr);
                BattleLogicFunction__SetSideEffectBuff(
                  this,
                  v29,
                  v23,
                  v22,
                  (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)arg,
                  v24 == 1,
                  v25);
                v26 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, Il2CppMethodPointer))attackArg->klass->vtable._5_unknown.method)(
                        attackArg,
                        attackArg->klass->vtable._6_Init.methodPtr);
                BattleActionData__addSideEffectActionData(mainAction, v23, v26, 0LL);
                LODWORD(m_CancellationTokenSource) = v20->fields.m_CancellationTokenSource;
                if ( (__int64)++v21 >= (int)m_CancellationTokenSource )
                  goto LABEL_22;
              }
LABEL_26:
              sub_1B88814(Instance, v12);
            }
LABEL_22:
            v34 = pairAttackAndTarget;
            BattleActionData__addReflectAttackSideEffect(mainAction, v34, 0LL);
            SideEffectList_k__BackingField = v27;
          }
        }
      }
      max_length = SideEffectList_k__BackingField->max_length;
      ++v15;
    }
    while ( v15 < max_length );
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicFunction__SetTargetFuncList(
        BattleLogicFunction_o *this,
        int32_t targetId,
        BattleActionData_o *action,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v8; // x21
  struct BattleData_o *data; // x8
  _QWORD *v10; // x9
  __int64 logic_low; // x10
  int32_t funcType; // w23
  Il2CppObject *MasterData_object; // x22
  struct BattleLogic_o *logic; // x8
  BattleLogicFunction_o *v15; // x23
  unsigned __int64 v16; // x26
  const MethodInfo *v17; // x4
  BattleLogicFunction_o *v18; // x24
  BattleLogicFunction_o *v19; // x25

  v8 = this;
  if ( (byte_4A5DC6D & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1B885B0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__AddRange__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    this = (BattleLogicFunction_o *)sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5DC6D = 1;
  }
  if ( !action )
    goto LABEL_23;
  this = (BattleLogicFunction_o *)action->fields.funcTargetList;
  if ( !this )
    goto LABEL_23;
  data = this->fields.data;
  v10 = Method_System_Collections_Generic_List_int__Add__;
  ++HIDWORD(this->fields.logic);
  if ( !data )
    goto LABEL_23;
  logic_low = SLODWORD(this->fields.logic);
  if ( (unsigned int)logic_low >= LODWORD(data->fields.m_CancellationTokenSource) )
  {
    System_Collections_Generic_List_int___AddWithResize(
      (System_Collections_Generic_List_int__o *)this,
      targetId,
      *(const MethodInfo_34E0810 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    LODWORD(this->fields.logic) = logic_low + 1;
    *((_DWORD *)&data->fields.rootfsm + logic_low) = targetId;
  }
  if ( !baseVals )
    goto LABEL_23;
  funcType = baseVals->fields.funcType;
  this = (BattleLogicFunction_o *)sub_1B88658(int___TypeInfo, 1LL);
  if ( !this )
    goto LABEL_23;
  if ( !LODWORD(this->fields.logic) )
    goto LABEL_24;
  LODWORD(this->fields.logictarget) = targetId;
  BattleActionData__AddHpDecreaseFuncTargets(action, funcType, (System_Int32_array *)this, 0LL);
  this = (BattleLogicFunction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this
    || (MasterData_object = DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_FunctionMaster___),
        (this = (BattleLogicFunction_o *)DataVals__GetDependFuncIdArray(baseVals, 0LL)) == 0LL) )
  {
LABEL_23:
    sub_1B8880C(this, *(_QWORD *)&targetId);
  }
  logic = this->fields.logic;
  v15 = this;
  if ( (int)logic >= 1 )
  {
    v16 = 0LL;
    while ( v16 < (unsigned int)logic )
    {
      if ( !MasterData_object )
        goto LABEL_23;
      this = (BattleLogicFunction_o *)DataMasterBase_object__object__int___GetEntity(
                                        (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                        *((_DWORD *)&v15->fields.logictarget + v16),
                                        (const MethodInfo_311D934 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
      if ( this )
      {
        v18 = this;
        this = (BattleLogicFunction_o *)BattleLogicFunction__getTargetids(
                                          v8,
                                          action,
                                          HIDWORD(this->fields.logic),
                                          baseVals,
                                          v17);
        if ( !action->fields.funcTargetList )
          goto LABEL_23;
        v19 = this;
        System_Collections_Generic_List_int___AddRange(
          action->fields.funcTargetList,
          (System_Collections_Generic_IEnumerable_T__o *)this,
          (const MethodInfo_34E0A1C *)Method_System_Collections_Generic_List_int__AddRange__);
        BattleActionData__AddHpDecreaseFuncTargets(action, (int32_t)v18->fields.logic, (System_Int32_array *)v19, 0LL);
      }
      LODWORD(logic) = v15->fields.logic;
      if ( (__int64)++v16 >= (int)logic )
        return;
    }
LABEL_24:
    sub_1B88814(this, *(_QWORD *)&targetId);
  }
}


void __fastcall BattleLogicFunction__UpdateBuffProgressTurn(
        BattleLogicFunction_o *this,
        int32_t buffType,
        bool *isSelfTurn,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  BattleLogicFunction_o *v7; // x21
  _BOOL8 IsUpdateBuffProgressTurn; // x0
  const MethodInfo *v9; // x4
  bool v10; // w8

  v7 = this;
  if ( (byte_4A5DC69 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_15485/*"WAR_BOARD_PROGRESS_OPPONENT_BUFF_TYPES"*/);
    this = (BattleLogicFunction_o *)sub_1B885B0(&StringLiteral_15486/*"WAR_BOARD_PROGRESS_SELF_BUFF_TYPES"*/);
    byte_4A5DC69 = 1;
  }
  IsUpdateBuffProgressTurn = BattleLogicFunction__IsUpdateBuffProgressTurn(
                               this,
                               buffType,
                               (System_String_o *)StringLiteral_15486/*"WAR_BOARD_PROGRESS_SELF_BUFF_TYPES"*/,
                               &v7->fields.buffProgressTurnSelfList,
                               v4);
  if ( IsUpdateBuffProgressTurn )
  {
    v10 = 1;
  }
  else
  {
    if ( !BattleLogicFunction__IsUpdateBuffProgressTurn(
            (BattleLogicFunction_o *)IsUpdateBuffProgressTurn,
            buffType,
            (System_String_o *)StringLiteral_15485/*"WAR_BOARD_PROGRESS_OPPONENT_BUFF_TYPES"*/,
            &v7->fields.buffProgressTurnOpponentList,
            v9) )
      return;
    v10 = 0;
  }
  *isSelfTurn = v10;
}


bool __fastcall BattleLogicFunction__UpdateUserEquipSkillChargeTurn(
        BattleLogicFunction_o *this,
        DataVals_o *dataVals,
        bool isProgress,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x1
  BattleData_o *data; // x0
  System_Collections_Generic_IEnumerable_T__o *v10; // x22
  System_Int32_array *TargetList; // x0
  int32_t v12; // w2
  int32_t v13; // w3
  System_Action_object__o *v14; // x0
  System_Action_T__o *v15; // x21
  __int64 *v16; // x8

  if ( (byte_4A5DC9E & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BattleSkillInfoData__TypeInfo);
    sub_1B885B0(&Method_BasicHelper_ForEach_BattleSkillInfoData___);
    sub_1B885B0(&Method_BattleLogicFunction___c__DisplayClass101_0__UpdateUserEquipSkillChargeTurn_b__0__);
    sub_1B885B0(&Method_BattleLogicFunction___c__DisplayClass101_0__UpdateUserEquipSkillChargeTurn_b__1__);
    sub_1B885B0(&BattleLogicFunction___c__DisplayClass101_0_TypeInfo);
    byte_4A5DC9E = 1;
  }
  v7 = sub_1B887FC(BattleLogicFunction___c__DisplayClass101_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass101_0___ctor((BattleLogicFunction___c__DisplayClass101_0_o *)v7, 0LL);
  data = this->fields.data;
  if ( !data
    || (data = (BattleData_o *)BattleData__getMasterSkillInfos(data, 0LL), !dataVals)
    || (v10 = (System_Collections_Generic_IEnumerable_T__o *)data,
        data = (BattleData_o *)DataVals__GetValue(dataVals, 0LL),
        !v7) )
  {
    sub_1B8880C(data, v8);
  }
  *(_DWORD *)(v7 + 16) = (_DWORD)data;
  *(_DWORD *)(v7 + 20) = DataVals__GetValue2(dataVals, 0LL) - 1;
  TargetList = DataVals__GetTargetList(dataVals, 0LL);
  *(_QWORD *)(v7 + 24) = TargetList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)TargetList, v12, v13);
  *(_BYTE *)(v7 + 32) = 0;
  v14 = (System_Action_object__o *)sub_1B887FC(System_Action_BattleSkillInfoData__TypeInfo);
  v15 = (System_Action_T__o *)v14;
  if ( isProgress )
    v16 = &Method_BattleLogicFunction___c__DisplayClass101_0__UpdateUserEquipSkillChargeTurn_b__0__;
  else
    v16 = &Method_BattleLogicFunction___c__DisplayClass101_0__UpdateUserEquipSkillChargeTurn_b__1__;
  System_Action_object____ctor(v14, (Il2CppObject *)v7, *v16, 0LL);
  BasicHelper__ForEach_object_(v10, v15, (const MethodInfo_2E6CCC0 *)Method_BasicHelper_ForEach_BattleSkillInfoData___);
  return *(_BYTE *)(v7 + 32);
}


BattleBuffData_BuffData_o *__fastcall BattleLogicFunction___FunctionSubFieldBuff_b__121_0(
        BattleLogicFunction_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data
    || (this = (BattleLogicFunction_o *)data->fields._FieldEnvData_k__BackingField) == 0LL
    || (this = (BattleLogicFunction_o *)BattleFieldEnvironmentData__get_BuffData(
                                          (BattleFieldEnvironmentData_o *)this,
                                          0LL)) == 0LL )
  {
    sub_1B8880C(this, buff);
  }
  return BattleBuffData__CreateDummyBuff((BattleBuffData_o *)this, buff, 0LL);
}


bool __fastcall BattleLogicFunction___getTargetids_b__55_0(
        BattleLogicFunction_o *this,
        int32_t x,
        const MethodInfo *method)
{
  BattleData_o *data; // x0

  data = this->fields.data;
  if ( !data )
    sub_1B8880C(0LL, x);
  return BattleData__getServantData(data, x, 0LL) != 0LL;
}


bool __fastcall BattleLogicFunction__checkFuncAction(
        BattleLogicFunction_o *this,
        BattleLogicFunction_ProcListInArgs_o *args,
        int32_t actorId,
        int32_t targetId,
        BuffEntity_o *buffEnt,
        FunctionEntity_o *funcEnt,
        DataVals_o *baseVals,
        bool isTreasureDevice,
        bool *isDisplayLastFuncInvalid,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleServantData_o *v19; // x21
  BattleServantData_o *v20; // x19
  int v21; // w22
  float BuffTOLERANCEMagnification; // s0
  float v23; // s0
  float v24; // s1
  int32_t InstantDeathRate; // w0
  bool result; // w0
  float v27; // s0
  int32_t v28; // w0
  int32_t v29; // w8
  BattleLogicFunction_o *Next; // x0
  const MethodInfo *v31; // x4
  struct System_Int32_array **p_vals; // x8
  System_Int32_array *v33; // x22
  System_String_o *v34; // x19
  System_String_o *v35; // x0
  int v36; // w23
  float BuffTOLERANCESUBSTATEMagnification; // s0
  int value; // [xsp+Ch] [xbp-74h]
  int32_t v39; // [xsp+18h] [xbp-68h] BYREF
  int32_t v40; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4A5DC6F & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_17942/*"checkFuncAction("*/);
    sub_1B885B0(&StringLiteral_176/*" < "*/);
    sub_1B885B0(&StringLiteral_17941/*"checkFuncAction firstResult:false"*/);
    byte_4A5DC6F = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_51;
  data = (BattleData_o *)BattleData__getServantData(data, actorId, 0LL);
  if ( !this->fields.data )
    goto LABEL_51;
  v19 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, targetId, 0LL);
  v39 = 1000;
  v40 = 1000;
  if ( !baseVals )
    goto LABEL_51;
  v20 = (BattleServantData_o *)data;
  data = (BattleData_o *)DataVals__GetParam(baseVals, 0, 0, 0LL);
  value = (int)data;
  if ( !args )
    goto LABEL_51;
  data = (BattleData_o *)BattleLogicFunction_ProcListInArgs__DidTriggeredFuncHaveSpecifyResults(
                           args,
                           targetId,
                           baseVals,
                           this->fields.data,
                           0LL);
  if ( ((unsigned __int8)data & 1) == 0 )
    goto LABEL_25;
  if ( (value & 0x80000000) == 0 )
  {
    if ( !funcEnt )
      goto LABEL_51;
    goto LABEL_10;
  }
  if ( !BattleLogicFunction_ProcListInArgs__isPrevFuncSuccess(args, targetId, baseVals->fields.funcIndex, 0LL) )
  {
LABEL_25:
    result = 0;
    *isDisplayLastFuncInvalid = 1;
    return result;
  }
  data = (BattleData_o *)BattleUtility__Abs_43026304(value, 0LL);
  value = (int)data;
  if ( !funcEnt )
    goto LABEL_51;
LABEL_10:
  if ( !FuncList__Check(1, funcEnt->fields.funcType, 0LL) )
  {
    data = (BattleData_o *)FuncList__Check(13, funcEnt->fields.funcType, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      if ( actorId != targetId || (data = (BattleData_o *)DataVals__GetParam(baseVals, 57, 0, 0LL), (int)data < 1) )
      {
        if ( !v20 )
          goto LABEL_51;
        if ( !BattleServantData__checkAvoidInstantDeath(v20, v19, 0LL) )
        {
          Next = (BattleLogicFunction_o *)BattleRandom__getNext(1000, 0LL);
          v40 = (int)Next;
          InstantDeathRate = BattleLogicFunction__GetInstantDeathRate(
                               Next,
                               (float)value,
                               v20,
                               v19,
                               isTreasureDevice,
                               v31);
          goto LABEL_37;
        }
        v39 = 0;
        v40 = 1000;
        goto LABEL_46;
      }
    }
    else
    {
      if ( FuncList__Check(2, funcEnt->fields.funcType, 0LL) )
      {
        if ( DataVals__isParam(baseVals, 89, 0LL) )
          return 1;
        p_vals = &funcEnt->fields.vals;
        if ( buffEnt )
          p_vals = &buffEnt->fields.vals;
        v33 = *p_vals;
        if ( v19 || !DataVals__isParam(baseVals, 74, 0LL) )
        {
          data = (BattleData_o *)BattleRandom__getNext(1000, 0LL);
          if ( !v20 )
            goto LABEL_51;
          v36 = (int)data;
          BuffTOLERANCESUBSTATEMagnification = BattleServantData__getBuffTOLERANCESUBSTATEMagnification(
                                                 v20,
                                                 v33,
                                                 v19,
                                                 0LL);
          v40 = BattleUtility__FloorToInt((float)(BuffTOLERANCESUBSTATEMagnification * 1000.0) + (float)v36, 0LL);
          if ( v19 )
          {
            v23 = BattleServantData__getBuffGRANTSUBSTATEMagnification(v19, v33, v20, 0LL) * 1000.0;
            v24 = (float)value;
            goto LABEL_15;
          }
          goto LABEL_35;
        }
        v27 = (float)BattleRandom__getNext(1000, 0LL);
        goto LABEL_33;
      }
      if ( FuncList__Check(20, funcEnt->fields.funcType, 0LL) )
      {
        data = (BattleData_o *)BattleRandom__getNext(1000, 0LL);
        if ( !v20 )
          goto LABEL_51;
        v27 = (float)(BattleServantData__getBuffResistDelayNPTurn(v20, v19, 0LL) * 1000.0) + (float)(int)data;
LABEL_33:
        v28 = BattleUtility__FloorToInt(v27, 0LL);
LABEL_34:
        v40 = v28;
LABEL_35:
        v29 = value;
LABEL_45:
        v39 = v29;
        goto LABEL_46;
      }
      if ( !FuncList__Check(46, funcEnt->fields.funcType, 0LL) )
      {
        v28 = BattleRandom__getNext(1000, 0LL);
        goto LABEL_34;
      }
    }
    v40 = 0;
    v29 = 1000;
    goto LABEL_45;
  }
  if ( buffEnt )
  {
    data = (BattleData_o *)BattleRandom__getNext(1000, 0LL);
    v21 = (int)data;
    if ( v19 )
    {
      if ( v20 )
      {
        BuffTOLERANCEMagnification = BattleServantData__getBuffTOLERANCEMagnification(
                                       v20,
                                       buffEnt->fields.vals,
                                       v19,
                                       &this->fields.wkStr,
                                       0LL);
        v40 = BattleUtility__FloorToInt((float)(BuffTOLERANCEMagnification * 1000.0) + (float)v21, 0LL);
        v23 = BattleServantData__getBuffGRANTSTATEMagnification(
                v19,
                buffEnt->fields.vals,
                v20,
                &this->fields.wkStr,
                0,
                0LL)
            * 1000.0;
        v24 = (float)value;
LABEL_15:
        InstantDeathRate = BattleUtility__FloorToInt(v23 + v24, 0LL);
LABEL_37:
        v39 = InstantDeathRate;
        goto LABEL_46;
      }
LABEL_51:
      sub_1B8880C(data, args);
    }
    v27 = (float)(int)data;
    goto LABEL_33;
  }
LABEL_46:
  v34 = System_Int32__ToString((int32_t)&v40, 0LL);
  v35 = System_Int32__ToString((int32_t)&v39, 0LL);
  System_String__Concat_61720296(
    (System_String_o *)StringLiteral_17942/*"checkFuncAction("*/,
    v34,
    (System_String_o *)StringLiteral_176/*" < "*/,
    v35,
    0LL);
  return v40 < v39;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicFunction__checkNoActionCondition(
        BattleLogicFunction_o *this,
        int32_t targetId,
        FunctionEntity_o *funcEnt,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  int32_t funcType; // w8
  unsigned int v7; // w8

  data = this->fields.data;
  if ( !data )
    goto LABEL_13;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL);
  if ( !funcEnt )
    goto LABEL_13;
  funcType = funcEnt->fields.funcType;
  if ( funcType <= 44 )
  {
    if ( (unsigned int)funcType > 0x2C || ((1LL << funcType) & 0x100000000180LL) == 0 )
      return 0;
  }
  else
  {
    v7 = funcType - 133;
    if ( v7 > 8 || ((1 << v7) & 0x181) == 0 )
      return 0;
  }
  if ( !data )
LABEL_13:
    sub_1B8880C(data, *(_QWORD *)&targetId);
  return HIBYTE(data->fields.commandCodeInfos) != 0;
}


BattleActionData_o *__fastcall BattleLogicFunction__createRevivalHealData(
        BattleLogicFunction_o *this,
        int32_t targetId,
        FunctionEntity_o *funcEnt,
        DataVals_o *baseVals,
        int32_t funcIndex,
        bool isCommandSideEffect,
        const MethodInfo *method)
{
  BattleActionData_o *v13; // x24
  __int64 v14; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v16; // x25
  int32_t Value; // w0
  const MethodInfo *v19; // [xsp+8h] [xbp-58h]

  if ( (byte_4A5DCA3 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    byte_4A5DCA3 = 1;
  }
  v13 = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v13, 0LL);
  data = this->fields.data;
  if ( !data || (data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL), !baseVals) )
    sub_1B8880C(data, v14);
  v16 = (BattleServantData_o *)data;
  baseVals->fields.isShowForcedEffect = 1;
  Value = DataVals__GetValue(baseVals, 0LL);
  BattleLogicFunction__SetGainHpBuff(this, v13, Value, funcIndex, v16, funcEnt, baseVals, isCommandSideEffect, 0, v19);
  return v13;
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *__fastcall BattleLogicFunction__functionAbsorbNpTurn(
        BattleLogicFunction_o *this,
        int32_t targetId,
        FunctionEntity_o *funcEnt,
        BattleActionData_o *mainAction,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        bool isCommandSideEffect,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v12; // x22
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x26
  BattleActionData_o *v15; // x24
  NpPointToTurnConvert_o *v16; // x28
  NpGaugeAbsorbResult_o *v17; // x27
  const MethodInfo *v18; // x4
  const MethodInfo *v19; // x4
  BattleActionData_o *v20; // x0
  const MethodInfo *v21; // x7
  float Turn_k__BackingField; // s0
  int32_t v23; // w6
  BattleActionData_o *v24; // x0

  v12 = this;
  if ( (byte_4A5DC99 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&NpGaugeAbsorbResult_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1B885B0(&NpPointToTurnConvert_TypeInfo);
    byte_4A5DC99 = 1;
  }
  if ( !funcTarget )
    goto LABEL_12;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_12;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v15 = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v15, 0LL);
  v16 = (NpPointToTurnConvert_o *)sub_1B887FC(NpPointToTurnConvert_TypeInfo);
  NpPointToTurnConvert___ctor(v16, 0LL);
  v17 = (NpGaugeAbsorbResult_o *)sub_1B887FC(NpGaugeAbsorbResult_TypeInfo);
  NpGaugeAbsorbResult___ctor(v17, (BaseNpGaugeConvert_o *)v16, 0LL);
  this = (BattleLogicFunction_o *)BattleLogicFunction__AbsorbNpTurn(v12, mainAction, funcTarget, v17, v18);
  if ( !v15
    || (BattleActionData__addAction(v15, (BattleActionData_o *)this, 0LL),
        v20 = BattleLogicFunction__AbsorbNpPoint(v12, mainAction, funcTarget, v17, v19),
        BattleActionData__addAction(v15, v20, 0LL),
        !dataVals_k__BackingField)
    || !v17 )
  {
LABEL_12:
    sub_1B8880C(this, *(_QWORD *)&targetId);
  }
  Turn_k__BackingField = v17->fields._Turn_k__BackingField;
  if ( Turn_k__BackingField == INFINITY )
    v23 = 0x80000000;
  else
    v23 = (int)Turn_k__BackingField;
  v24 = BattleLogicFunction__functionHastenNpTurn(
          v12,
          targetId,
          funcEnt,
          dataVals_k__BackingField,
          dataVals_k__BackingField->fields.funcIndex,
          isCommandSideEffect,
          v23,
          v21);
  BattleActionData__addAction(v15, v24, 0LL);
  return v15;
}


// local variable allocation has failed, the output may be wrong!
BattleBuffData_BuffData_o *__fastcall BattleLogicFunction__functionAddState(
        BattleLogicFunction_o *this,
        BattleActionData_o *mainAction,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        BattleLogicFunction_ProcListInArgs_o *args,
        bool shortbuff,
        const MethodInfo *method)
{
  BattleActionData_o *v8; // x29
  BattleLogicFunction_o *v9; // x21
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x19
  DataVals_o *dataVals_k__BackingField; // x23
  int32_t actorId; // w27
  BuffEntity_o *v13; // x25
  BattleActionData_o *v14; // x19
  BattleServantData_o *v15; // x28
  BattleServantData_o *ServantData; // x26
  BattleActionData_MasterBuffData_o *v17; // x22
  __int64 v18; // x27
  const MethodInfo *v19; // x3
  char v20; // w19
  int32_t AdjustmentBuffTurn; // w0
  const MethodInfo *v22; // x4
  char v23; // w22
  bool v24; // w24
  int32_t type; // w19
  const MethodInfo *v26; // x3
  bool isEnemy; // w8
  bool *p_isEnemy; // x22
  char v29; // w9
  struct BattleData_o *data; // x8
  int32_t ProgressTurnCond; // w0
  int32_t v32; // w19
  int32_t v33; // w19
  int32_t v34; // w19
  int32_t v35; // w19
  int32_t tdCommandTypeChange; // w8
  __int64 v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  __int64 v40; // x22
  __int64 v41; // x19
  int32_t v42; // w19
  struct BattleData_o *v43; // x8
  struct BattleEntity_o *battle_ent; // x8
  int64_t userId; // x24
  int32_t eventId; // w22
  EventPointBuffMaster_o *v47; // x19
  int32_t EventPointGroupId; // w29
  UserEventPointEntity_o *EntityDefinitely; // x0
  int64_t value; // x22
  int logic; // w8
  int v52; // w10
  __int64 v53; // x9
  __int64 v54; // x11
  int v55; // w29
  BattleData_o *v56; // x19
  BattleBuffData_CheckIndividualitiesData_o *v57; // x22
  BattleBuffData_ParamAdd_o *v58; // x24
  __int64 v59; // x0
  int32_t v60; // w2
  int32_t v61; // w3
  __int64 v62; // x22
  __int64 v63; // x19
  int32_t Param; // w22
  __int64 v65; // x19
  bool v66; // w8
  int v67; // w8
  System_Int32_array *TargetIndiv; // x0
  int32_t v69; // w2
  int32_t v70; // w3
  int32_t v71; // w2
  int32_t v72; // w3
  int32_t v73; // w19
  BattleBuffData_IntervalData_o *IntervalData; // x0
  int32_t v75; // w2
  int32_t v76; // w3
  System_Int32_array *ParamArray; // x0
  int32_t v78; // w2
  int32_t v79; // w3
  int32_t v80; // w19
  int32_t RelationId; // w19
  BattleBuffData_RelationOverwriteData_o *v82; // x22
  int32_t v83; // w2
  int32_t v84; // w3
  BattleDataDefine_c *v85; // x0
  int32_t v86; // w19
  bool v87; // w0
  float UpDownGiveHeal; // s8
  int32_t v89; // w0
  int v90; // s0
  int32_t v91; // w0
  int v92; // s0
  System_Int32_array *v93; // x0
  int32_t v94; // w2
  int32_t v95; // w3
  System_Int32_array *v96; // x0
  int32_t v97; // w2
  int32_t v98; // w3
  System_Int32_array *v99; // x0
  int32_t v100; // w2
  int32_t v101; // w3
  int32_t v102; // w19
  System_Int32_array *UpBuffRateBuffTypeList; // x0
  int32_t v104; // w2
  int32_t v105; // w3
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8
  struct BattleData_o *v107; // x8
  System_Int32_array *AddIndividualty; // x0
  int32_t v109; // w2
  int32_t v110; // w3
  System_Int32_array *LinkageTargetIndividualty; // x0
  int32_t v112; // w2
  int32_t v113; // w3
  const MethodInfo *v114; // x3
  struct BattleData_o *v115; // x8
  System_Int32_array *ValsList; // x0
  int32_t v117; // w2
  int32_t v118; // w3
  int32_t v119; // w0
  int v120; // w8
  int v121; // w9
  UnityEngine_Object_o *v122; // x19
  bool v123; // w22
  int32_t v124; // w19
  CommandCodeInfo_o *UserCommandCode; // x0
  int32_t MaxHp; // w24
  int32_t v127; // w19
  __int64 v128; // x4
  int32_t v129; // w19
  bool IsCommandSideEffect; // w0
  const MethodInfo *v131; // x7
  BattleActionEffect_AddChangeMaxHpBuff_o *v132; // x19
  BattleLogicFunction_o *v133; // x22
  int32_t v134; // w2
  int32_t v135; // w3
  BattleActionEffect_Base_o *v136; // x0
  int32_t id; // w19
  System_Collections_Generic_List_int__o *v138; // x0
  System_String_o *i; // x0
  System_String_o *v140; // x0
  System_String_o *v141; // x0
  System_String_o *v142; // x0
  System_Int32_array *QuestIndividualities; // x0
  UnityEngine_Object_o *v144; // x22
  System_Int32_array *v145; // x19
  BattlePerformance_o *perf; // x2
  struct BattleLogic_o *v147; // x8
  UnityEngine_Object_o *v148; // x19
  int v149; // w8
  BattleLogicFunction_o *v150; // x19
  unsigned int v151; // w22
  System_Int32_array *ShortenMaxCountArray; // x0
  int32_t v153; // w2
  int32_t v154; // w3
  BattleActionData_BuffData_o *v155; // x22
  System_Int32_array *TargetFunctionIndividuality; // x0
  int32_t v157; // w2
  int32_t v158; // w3
  System_Int32_array *TargetBuffIndividuality; // x0
  int32_t v160; // w2
  int32_t v161; // w3
  int32_t v162; // w19
  struct BattleData_o *v163; // x8
  BattleBuffData_o *buffData; // x19
  BattleBuffData_CheckIndividualitiesData_o *v165; // x22
  FunctionEntity_o *v166; // x2
  DataVals_o *v167; // x3
  int32_t v168; // w4
  const MethodInfo *v169; // x5
  bool v170; // w0
  BattleActionData_BuffData_o *v171; // x22
  const MethodInfo *v172; // x3
  __int64 v174; // x0
  bool *v175; // [xsp+0h] [xbp-D0h]
  int32_t treasureDvcId; // [xsp+Ch] [xbp-C4h]
  BattleActionData_o *userCommandCodeId; // [xsp+10h] [xbp-C0h]
  int userCommandCodeIda; // [xsp+10h] [xbp-C0h]
  int32_t funcIndex; // [xsp+1Ch] [xbp-B4h]
  BattleActionData_o *v180; // [xsp+20h] [xbp-B0h]
  BattleActionData_o *v181; // [xsp+30h] [xbp-A0h]
  int32_t v182; // [xsp+38h] [xbp-98h]
  unsigned int uniqueId; // [xsp+3Ch] [xbp-94h]
  FunctionEntity_o *funcEnt; // [xsp+40h] [xbp-90h]
  BattleActionData_BuffData_o *v186; // [xsp+50h] [xbp-80h]
  Il2CppObject *entity; // [xsp+58h] [xbp-78h] BYREF
  int v188; // [xsp+68h] [xbp-68h] BYREF
  bool isSelfTurn; // [xsp+6Ch] [xbp-64h] BYREF

  v8 = mainAction;
  v9 = this;
  if ( (byte_4A5DC76 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionEffect_AddChangeMaxHpBuff_TypeInfo);
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&BattleDataDefine_TypeInfo);
    sub_1B885B0(&BattleBuffData_BuffData___TypeInfo);
    sub_1B885B0(&BattleBuffData_BuffData_TypeInfo);
    sub_1B885B0(&BuffList_TypeInfo);
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_EventPointBuffMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_UserEventPointMaster___);
    sub_1B885B0(&Method_DataManager_GetMaster_BuffTypeDetailMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__);
    sub_1B885B0(&BattleBuffData_FieldAliveCondData_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&BattleActionData_MasterBuffData_TypeInfo);
    sub_1B885B0(&System_Math_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&BattleBuffData_ParamAdd_TypeInfo);
    sub_1B885B0(&BattleBuffData_RelationOverwriteData_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&StringLiteral_19675/*"functionAddState=>"*/);
    sub_1B885B0(&StringLiteral_13267/*"TAMAMOCAT_STUN_BUFF_ID"*/);
    this = (BattleLogicFunction_o *)sub_1B885B0(&StringLiteral_13268/*"TAMAMOCAT_TREASURE_DEVICE_ID_"*/);
    byte_4A5DC76 = 1;
  }
  isSelfTurn = 0;
  entity = 0LL;
  v188 = 0;
  if ( !funcTarget )
    goto LABEL_290;
  if ( !v8 )
    goto LABEL_290;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_290;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_290;
  actorId = v8->fields.actorId;
  uniqueId = funcTarget->fields._targetId_k__BackingField;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  v13 = (BuffEntity_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, void *, BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleLogicFunction_ProcListInArgs_o *, bool, const MethodInfo *))funcTarget->klass->vtable._14_GetFixBuffEntity.method)(
                          funcTarget,
                          funcTarget->klass[1]._1.image,
                          funcTarget,
                          args,
                          shortbuff,
                          method);
  funcIndex = BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(funcUnit_k__BackingField, 0LL);
  userCommandCodeId = (BattleActionData_o *)v8->fields.userCommandCodeId;
  treasureDvcId = v8->fields.treasureDvcId;
  v14 = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v14, 0LL);
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_290;
  v180 = v14;
  this = (BattleLogicFunction_o *)BattleData__getServantData((BattleData_o *)this, actorId, 0LL);
  if ( !v9->fields.data )
    goto LABEL_290;
  v15 = (BattleServantData_o *)this;
  ServantData = BattleData__getServantData(v9->fields.data, uniqueId, 0LL);
  this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, Il2CppMethodPointer))funcTarget->klass->vtable._7_MakeActionBuffData.method)(
                                    funcTarget,
                                    funcTarget->klass->vtable._8_AddBuff.methodPtr);
  if ( !v13 )
    goto LABEL_290;
  v17 = (BattleActionData_MasterBuffData_o *)this;
  this = (BattleLogicFunction_o *)BuffEntity__checkBuffType(v13, 142, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v17 = (BattleActionData_MasterBuffData_o *)sub_1B887FC(BattleActionData_MasterBuffData_TypeInfo);
    BattleActionData_MasterBuffData___ctor(v17, funcEnt, 0LL);
  }
  if ( !ServantData )
    goto LABEL_290;
  v182 = actorId;
  if ( !v17 )
    goto LABEL_290;
  v17->fields.targetId = ServantData->fields.uniqueId;
  v17->fields.functionIndex = funcIndex;
  v18 = sub_1B887FC(BattleBuffData_BuffData_TypeInfo);
  BattleBuffData_BuffData___ctor((BattleBuffData_BuffData_o *)v18, 0LL);
  if ( !v18 )
    goto LABEL_290;
  *(_DWORD *)(v18 + 16) = v13->fields.id;
  if ( !args )
    goto LABEL_290;
  *(_DWORD *)(v18 + 164) = BattleLogicFunction_ProcListInArgs__get_SkillId(args, 0LL);
  *(_DWORD *)(v18 + 188) = BattleLogicFunction_ProcListInArgs__get_GrantSkillType(args, 0LL);
  *(_DWORD *)(v18 + 176) = DataVals__GetMotionChange(dataVals_k__BackingField, 0LL);
  *(_DWORD *)(v18 + 20) = 2 * DataVals__GetParam(dataVals_k__BackingField, 1, 0, 0LL);
  BattleBuffData_BuffData__RegisterGeneralParams((BattleBuffData_BuffData_o *)v18, dataVals_k__BackingField, 0LL);
  v20 = v8->fields.isReversalShortBuffTurn ^ shortbuff;
  if ( (v20 & 1) != 0 )
    --*(_DWORD *)(v18 + 20);
  AdjustmentBuffTurn = BattleLogicFunction__GetAdjustmentBuffTurn(v9, dataVals_k__BackingField, v15, v19);
  v186 = (BattleActionData_BuffData_o *)v17;
  if ( AdjustmentBuffTurn )
  {
    v20 ^= 1u;
    *(_DWORD *)(v18 + 20) += AdjustmentBuffTurn;
  }
  this = (BattleLogicFunction_o *)BattleLogicFunction__IsSvtBuffTurnExtend(v9, uniqueId, v13, v20 & 1, v22);
  v23 = (char)this;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v20 ^= 1u;
    ++*(_DWORD *)(v18 + 20);
  }
  *(_DWORD *)(v18 + 68) = v182;
  if ( !funcEnt )
    goto LABEL_290;
  v24 = (v20 ^ Target__isEnemy(funcEnt->fields.targetType, 0LL)) & 1;
  isSelfTurn = v24;
  type = v13->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  this = (BattleLogicFunction_o *)BuffList__IsForceProgressSelfTurnType(type, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v24 = 1;
    isSelfTurn = 1;
  }
  if ( (v23 & 1) != 0 )
  {
    isEnemy = ServantData->fields.isEnemy;
    p_isEnemy = &ServantData->fields.isEnemy;
    v29 = isEnemy ^ v24 ^ 1;
  }
  else
  {
    BattleLogicFunction__UpdateBuffProgressTurn(v9, v13->fields.type, &isSelfTurn, v26);
    p_isEnemy = &ServantData->fields.isEnemy;
    *(_BYTE *)(v18 + 180) = ServantData->fields.isEnemy ^ isSelfTurn ^ 1;
    this = (BattleLogicFunction_o *)BuffEntity__GetProgressSelfTurn(v13, 0LL);
    if ( ((unsigned int)this & 0x80000000) != 0 )
    {
      v29 = *(_BYTE *)(v18 + 180);
      isEnemy = *p_isEnemy;
      goto LABEL_32;
    }
    isEnemy = *p_isEnemy;
    v29 = *p_isEnemy ^ ((_DWORD)this == 0);
  }
  *(_BYTE *)(v18 + 180) = v29;
LABEL_32:
  *(_BYTE *)(v18 + 192) = v29 ^ isEnemy ^ 1;
  data = v9->fields.data;
  if ( !data )
    goto LABEL_290;
  this = (BattleLogicFunction_o *)data->fields.battleEvent;
  if ( !this )
    goto LABEL_290;
  *(_DWORD *)(v18 + 184) = ((__int64 (__fastcall *)(BattleLogicFunction_o *, BuffEntity_o *, Il2CppMethodPointer))this->klass[1].vtable._1_Finalize.method)(
                             this,
                             v13,
                             this->klass[1].vtable._2_GetHashCode.methodPtr);
  ProgressTurnCond = BuffEntity__GetProgressTurnCond(v13, 0LL);
  if ( (ProgressTurnCond & 0x80000000) == 0 )
    *(_DWORD *)(v18 + 184) = ProgressTurnCond;
  *(_DWORD *)(v18 + 24) = DataVals__GetParam(dataVals_k__BackingField, 2, 0, 0LL);
  *(_DWORD *)(v18 + 28) = DataVals__GetParam(dataVals_k__BackingField, 3, 0, 0LL);
  v186->fields.popDelay = DataVals__GetParam(dataVals_k__BackingField, 64, 0, 0LL);
  v32 = v13->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(143, v32, 0LL) )
    goto LABEL_48;
  v33 = v13->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(145, v33, 0LL) )
    goto LABEL_48;
  v34 = v13->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(146, v34, 0LL) )
    goto LABEL_48;
  v35 = v13->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(147, v35, 0LL) )
  {
LABEL_48:
    tdCommandTypeChange = args->fields.tdCommandTypeChange;
    if ( (tdCommandTypeChange & 0x80000000) == 0 )
      *(_DWORD *)(v18 + 28) = tdCommandTypeChange;
  }
  v175 = p_isEnemy;
  *(_DWORD *)(v18 + 52) = DataVals__GetParam(dataVals_k__BackingField, 8, 0, 0LL);
  *(_DWORD *)(v18 + 56) = DataVals__GetParam(dataVals_k__BackingField, 9, 0, 0LL);
  v37 = sub_1B88658(int___TypeInfo, 2LL);
  *(_QWORD *)(v18 + 40) = v37;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 40), v37, v38, v39);
  v40 = *(_QWORD *)(v18 + 40);
  this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 3, 0, 0LL);
  if ( !v40 )
    goto LABEL_290;
  if ( !*(_DWORD *)(v40 + 24) )
    goto LABEL_291;
  *(_DWORD *)(v40 + 32) = (_DWORD)this;
  v41 = *(_QWORD *)(v18 + 40);
  this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 4, 0, 0LL);
  if ( !v41 )
    goto LABEL_290;
  if ( *(_DWORD *)(v41 + 24) <= 1u )
    goto LABEL_291;
  v181 = v8;
  *(_DWORD *)(v41 + 36) = (_DWORD)this;
  v42 = v13->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  this = (BattleLogicFunction_o *)BuffList__CheckType(135, v42, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v43 = v9->fields.data;
    if ( !v43 )
      goto LABEL_290;
    battle_ent = v43->fields.battle_ent;
    if ( !battle_ent )
      goto LABEL_290;
    userId = battle_ent->fields.userId;
    eventId = battle_ent->fields.eventId;
    this = (BattleLogicFunction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_290;
    this = (BattleLogicFunction_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_EventPointBuffMaster___);
    if ( !this )
      goto LABEL_290;
    v47 = (EventPointBuffMaster_o *)this;
    EventPointGroupId = EventPointBuffMaster__GetEventPointGroupId(
                          (EventPointBuffMaster_o *)this,
                          eventId,
                          funcEnt->fields.id,
                          0,
                          0LL);
    this = (BattleLogicFunction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !this )
      goto LABEL_290;
    this = (BattleLogicFunction_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_UserEventPointMaster___);
    if ( !this )
      goto LABEL_290;
    EntityDefinitely = UserEventPointMaster__GetEntityDefinitely(
                         (UserEventPointMaster_o *)this,
                         userId,
                         eventId,
                         EventPointGroupId,
                         0LL);
    if ( EntityDefinitely )
    {
      value = EntityDefinitely->fields.value;
      this = (BattleLogicFunction_o *)EventPointBuffMaster__GetAllEventBuff(
                                        v47,
                                        EntityDefinitely->fields.eventId,
                                        EventPointGroupId,
                                        0LL);
      if ( !this )
        goto LABEL_290;
      logic = (int)this->fields.logic;
      if ( logic >= 1 )
      {
        v52 = 0;
        v53 = 0LL;
        do
        {
          if ( logic == v52 )
            goto LABEL_291;
          v54 = *((_QWORD *)&this->fields.logictarget + v52);
          if ( !v54 )
            goto LABEL_290;
          if ( value < *(int *)(v54 + 28) )
            break;
          ++v52;
          v53 = v54;
        }
        while ( logic != v52 );
        if ( v53 )
          *(_DWORD *)(v18 + 28) += *(_DWORD *)(v53 + 64);
      }
    }
  }
  if ( DataVals__IsExistSnapShotParamAddIndv(dataVals_k__BackingField, 0LL) )
  {
    v55 = *(_DWORD *)(v18 + 28);
    v56 = v9->fields.data;
    v57 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor(v57, v15, ServantData, 0LL, 0LL, 0LL, 0LL, 0LL);
    v58 = (BattleBuffData_ParamAdd_o *)sub_1B887FC(BattleBuffData_ParamAdd_TypeInfo);
    BattleBuffData_ParamAdd___ctor_42630912(v58, dataVals_k__BackingField, 0LL);
    *(_DWORD *)(v18 + 28) = BattleBuffData__GetTotalParamAddValue((BattleBuffData_BuffData_o *)v18, v56, v57, v58, 0LL)
                          + v55;
  }
  if ( DataVals__isParam(dataVals_k__BackingField, 26, 0LL) && DataVals__isParam(dataVals_k__BackingField, 27, 0LL) )
  {
    v59 = sub_1B88658(int___TypeInfo, 2LL);
    *(_QWORD *)(v18 + 104) = v59;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 104), v59, v60, v61);
    v62 = *(_QWORD *)(v18 + 104);
    this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 26, 0, 0LL);
    if ( !v62 )
      goto LABEL_290;
    if ( !*(_DWORD *)(v62 + 24) )
      goto LABEL_291;
    *(_DWORD *)(v62 + 32) = (_DWORD)this;
    v63 = *(_QWORD *)(v18 + 104);
    this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 27, 0, 0LL);
    if ( !v63 )
      goto LABEL_290;
    if ( *(_DWORD *)(v63 + 24) <= 1u )
      goto LABEL_291;
    *(_DWORD *)(v63 + 36) = (_DWORD)this;
  }
  *(_DWORD *)(v18 + 64) = DataVals__GetParam(dataVals_k__BackingField, 15, 0, 0LL);
  *(_DWORD *)(v18 + 344) = DataVals__GetClassIconAuraEffectId(dataVals_k__BackingField, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 11, 0, 0LL) >= 1 )
    *(_DWORD *)(v18 + 60) = v182;
  if ( DataVals__GetParam(dataVals_k__BackingField, 46, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v18, 0x8000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 50, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v18, 0x10000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 88, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v18, 0x80000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 90, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v18, 0x100000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 65, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v18, 0x40000, 0LL);
  if ( DataVals__GetParam(dataVals_k__BackingField, 143, 0, 0LL) >= 1 )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v18, 0x2000000, 0LL);
  if ( DataVals__isParam(dataVals_k__BackingField, 42, 0LL) )
  {
    Param = DataVals__GetParam(dataVals_k__BackingField, 42, 0, 0LL);
    v65 = sub_1B887FC(BattleBuffData_FieldAliveCondData_TypeInfo);
    BattleBuffData_FieldAliveCondData___ctor((BattleBuffData_FieldAliveCondData_o *)v65, 0LL);
    if ( !v65 )
      goto LABEL_290;
    v66 = *v175;
    *(_BYTE *)(v65 + 17) = Param > 0;
    *(_BYTE *)(v65 + 16) = v66;
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( Param >= 0 )
      v67 = Param;
    else
      v67 = -Param;
    *(_DWORD *)(v65 + 20) = v67;
    TargetIndiv = BuffEntity__GetTargetIndiv(v13, 0LL);
    *(_QWORD *)(v65 + 24) = TargetIndiv;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v65 + 24), (int32_t)TargetIndiv, v69, v70);
    *(_BYTE *)(v65 + 32) = BuffEntity__IsIncludeIgnoreIndividuality(v13, 0LL);
    *(_QWORD *)(v18 + 152) = v65;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 152), v65, v71, v72);
    args->fields.updateField = 1;
  }
  v73 = v13->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__IsIntervalPossibleBuff(v73, 0LL) )
  {
    IntervalData = DataVals__GetIntervalData(dataVals_k__BackingField, 0LL);
    *(_QWORD *)(v18 + 360) = IntervalData;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 360), (int32_t)IntervalData, v75, v76);
  }
  if ( BattleBuffData__CheckInvalidSacrificeIndiv((BattleBuffData_BuffData_o *)v18, 0LL) )
    args->fields.updateField = 1;
  ParamArray = DataVals__GetParamArray(dataVals_k__BackingField, 114, 0LL);
  *(_QWORD *)(v18 + 328) = ParamArray;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 328), (int32_t)ParamArray, v78, v79);
  *(_DWORD *)(v18 + 208) = BuffEntity__GetCardEffectId(v13, 0LL);
  v80 = v13->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(144, v80, 0LL) )
  {
    RelationId = BuffEntity__getRelationId(v13, 0LL);
    v82 = (BattleBuffData_RelationOverwriteData_o *)sub_1B887FC(BattleBuffData_RelationOverwriteData_TypeInfo);
    BattleBuffData_RelationOverwriteData___ctor(v82, 0LL);
    if ( RelationId >= 1 )
    {
      this = (BattleLogicFunction_o *)BuffEntity__getRelationId(v13, 0LL);
      if ( !v82 )
        goto LABEL_290;
      v82->fields.id = (int)this;
      v85 = BattleDataDefine_TypeInfo;
      if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
        v85 = BattleDataDefine_TypeInfo;
      }
      v82->fields.atkPriority = BuffEntity__getAtkRelationPriority(
                                  v13,
                                  v85->static_fields->OVERWRITE_ATK_RATE_PRIORITY,
                                  0LL);
      v82->fields.defPriority = BuffEntity__getDefRelationPriority(
                                  v13,
                                  BattleDataDefine_TypeInfo->static_fields->OVERWRITE_DEF_RATE_PRIORITY,
                                  0LL);
    }
    *(_QWORD *)(v18 + 168) = v82;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 168), (int32_t)v82, v83, v84);
  }
  v86 = v13->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(154, v86, 0LL) )
  {
    this = (BattleLogicFunction_o *)BattleServantData__get_BuffData(ServantData, 0LL);
    if ( !this )
      goto LABEL_290;
    this = (BattleLogicFunction_o *)this->fields.wkStr;
    if ( !this )
      goto LABEL_290;
    BattleBuffData_SkillRankChangeData__UpdateAddRightAfter((BattleBuffData_SkillRankChangeData_o *)this, 1, 0LL);
    BattleActionData_BuffData__OnUpdateBuffType(v186, 1, 0LL);
  }
  v87 = BuffEntity__checkBuffType(v13, 7, 0LL);
  if ( v15 && v87 )
  {
    UpDownGiveHeal = BattleServantData__getUpDownGiveHeal(v15, ServantData, 0LL);
    v89 = BattleUtility__FloorToInt(UpDownGiveHeal * (float)*(int *)(v18 + 28), 0LL);
    v90 = *(_DWORD *)(v18 + 52);
    *(_DWORD *)(v18 + 28) = v89;
    v91 = BattleUtility__FloorToInt(UpDownGiveHeal * (float)v90, 0LL);
    v92 = *(_DWORD *)(v18 + 56);
    *(_DWORD *)(v18 + 52) = v91;
    *(_DWORD *)(v18 + 56) = BattleUtility__FloorToInt(UpDownGiveHeal * (float)v92, 0LL);
    BattleServantData__getIndividualities(v15, 0LL, 1, 0, 0LL);
  }
  *(_BYTE *)(v18 + 32) = 0;
  *(_BYTE *)(v18 + 33) = BattleLogicFunction_ProcListInArgs__get_IsPassive(args, 0LL);
  if ( DataVals__isParam(dataVals_k__BackingField, 23, 0LL) )
    *(_BYTE *)(v18 + 33) = 1;
  if ( DataVals__isParam(dataVals_k__BackingField, 24, 0LL) )
    *(_BYTE *)(v18 + 33) = 0;
  if ( dataVals_k__BackingField->fields.flgBoost )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v18, 2, 0LL);
  if ( DataVals__isRatioHpRange(dataVals_k__BackingField, 0LL) )
  {
    *(_DWORD *)(v18 + 72) = DataVals__GetParam(dataVals_k__BackingField, 20, 0, 0LL);
    *(_DWORD *)(v18 + 76) = DataVals__GetParam(dataVals_k__BackingField, 21, 0, 0LL);
    *(_DWORD *)(v18 + 80) = DataVals__GetParam(dataVals_k__BackingField, 30, 0, 0LL);
    *(_DWORD *)(v18 + 84) = DataVals__GetParam(dataVals_k__BackingField, 31, 0, 0LL);
  }
  else if ( DataVals__isParam(dataVals_k__BackingField, 20, 0LL) )
  {
    *(_DWORD *)(v18 + 72) = DataVals__GetParam(dataVals_k__BackingField, 20, 0, 0LL);
  }
  else if ( DataVals__isParam(dataVals_k__BackingField, 21, 0LL) )
  {
    *(_DWORD *)(v18 + 76) = DataVals__GetParam(dataVals_k__BackingField, 21, 0, 0LL);
  }
  if ( DataVals__isParamAddIndividuality(dataVals_k__BackingField, 0LL) )
  {
    v93 = DataVals__GetParamArray(dataVals_k__BackingField, 69, 0LL);
    *(_QWORD *)(v18 + 224) = v93;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 224), (int32_t)v93, v94, v95);
    v96 = DataVals__GetParamArray(dataVals_k__BackingField, 70, 0LL);
    *(_QWORD *)(v18 + 232) = v96;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 232), (int32_t)v96, v97, v98);
    v99 = DataVals__GetParamArray(dataVals_k__BackingField, 71, 0LL);
    *(_QWORD *)(v18 + 240) = v99;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 240), (int32_t)v99, v100, v101);
    *(_DWORD *)(v18 + 248) = DataVals__GetParam(dataVals_k__BackingField, 72, 0, 0LL);
    *(_DWORD *)(v18 + 252) = DataVals__GetParam(dataVals_k__BackingField, 59, 0, 0LL);
    *(_DWORD *)(v18 + 268) = DataVals__GetParam(dataVals_k__BackingField, 60, 0, 0LL);
  }
  if ( DataVals__IsParamAddBattlePoint(dataVals_k__BackingField, 0LL) )
  {
    *(_DWORD *)(v18 + 384) = DataVals__GetParam(dataVals_k__BackingField, 181, 0, 0LL);
    *(_DWORD *)(v18 + 388) = DataVals__GetParam(dataVals_k__BackingField, 182, 0, 0LL);
  }
  v102 = v13->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckType(162, v102, 0LL) )
  {
    UpBuffRateBuffTypeList = BuffEntity__GetUpBuffRateBuffTypeList(v13, 0LL);
    *(_QWORD *)(v18 + 256) = UpBuffRateBuffTypeList;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 256), (int32_t)UpBuffRateBuffTypeList, v104, v105);
    *(_DWORD *)(v18 + 264) = BuffEntity__GetMaxBuffRate(v13, 0LL);
  }
  if ( DataVals__isParam(dataVals_k__BackingField, 22, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v18, 64, 0LL);
  if ( DataVals__isParam(dataVals_k__BackingField, 25, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v18, 128, 0LL);
  this = (BattleLogicFunction_o *)DataVals__isShowState(dataVals_k__BackingField, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    LODWORD(mainAction) = DataVals__GetParam(dataVals_k__BackingField, 14, 0, 0LL);
LABEL_154:
    BattleBuffData_BuffData__setShowState((BattleBuffData_BuffData_o *)v18, (int32_t)mainAction, 0LL);
    goto LABEL_171;
  }
  if ( *(_BYTE *)(v18 + 33) )
  {
    externalArg = args->fields.externalArg;
    if ( !externalArg )
      goto LABEL_290;
    if ( externalArg->fields.isWarBoard )
    {
      if ( !v15 )
        goto LABEL_290;
      if ( v15->fields.isEnemy && externalArg->fields.grantSkillType == 12 )
      {
        LODWORD(mainAction) = BuffEntity__GetShowStateWarBoardEnemyEquip(v13, 0, 0LL);
        if ( (_DWORD)mainAction )
          goto LABEL_154;
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        this = (BattleLogicFunction_o *)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_BuffTypeDetailMaster___);
        if ( !this )
          goto LABEL_290;
        this = (BattleLogicFunction_o *)DataMasterBase_object__object__int___TryGetEntity(
                                          (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                          &entity,
                                          v13->fields.type,
                                          (const MethodInfo_311D988 *)Method_DataMasterBase_BuffTypeDetailMaster__BuffTypeDetailEntity__int__TryGetEntity__);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          this = (BattleLogicFunction_o *)entity;
          if ( !entity )
            goto LABEL_290;
          this = (BattleLogicFunction_o *)BuffTypeDetailEntity__GetShowStateWarBoardEnemyEquip(
                                            (BuffTypeDetailEntity_o *)entity,
                                            0,
                                            0LL);
          mainAction = (BattleActionData_o *)(unsigned int)this;
          if ( (_DWORD)this )
            goto LABEL_154;
        }
      }
    }
    v107 = v9->fields.data;
    if ( !v107 )
      goto LABEL_290;
    this = (BattleLogicFunction_o *)v107->fields.battleEvent;
    if ( !this )
      goto LABEL_290;
    ((void (__fastcall *)(BattleLogicFunction_o *, __int64, Il2CppMethodPointer))this->klass[1].vtable._2_GetHashCode.method)(
      this,
      v18,
      this->klass[1].vtable._3_ToString.methodPtr);
  }
LABEL_171:
  if ( DataVals__IsOpponentOnly(dataVals_k__BackingField, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v18, 2048, 0LL);
  if ( DataVals__isShowCommand(dataVals_k__BackingField, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v18, 512, 0LL);
  if ( DataVals__IsAddIndividualty(dataVals_k__BackingField, 0LL) )
  {
    AddIndividualty = DataVals__GetAddIndividualty(dataVals_k__BackingField, 0LL);
    *(_QWORD *)(v18 + 120) = AddIndividualty;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 120), (int32_t)AddIndividualty, v109, v110);
  }
  if ( DataVals__IsAddLinkageTargetIndividualty(dataVals_k__BackingField, 0LL) )
  {
    LinkageTargetIndividualty = DataVals__GetLinkageTargetIndividualty(dataVals_k__BackingField, 0LL);
    *(_QWORD *)(v18 + 128) = LinkageTargetIndividualty;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 128), (int32_t)LinkageTargetIndividualty, v112, v113);
  }
  this = (BattleLogicFunction_o *)funcTarget->fields._funcUnit_k__BackingField;
  if ( !this )
    goto LABEL_290;
  if ( BattleLogicFunctionProcess_FunctionUnitCheck__HasLinkedFuncUnit(
         (BattleLogicFunctionProcess_FunctionUnitCheck_o *)this,
         0LL)
    && DataVals__IsBehaveAsFamilyBuff(dataVals_k__BackingField, 0LL) )
  {
    BattleLogicFunction__BehaveLinkageBuffAsFamily(v9, (BattleBuffData_BuffData_o *)v18, funcTarget, v114);
  }
  if ( DataVals__isParam(dataVals_k__BackingField, 98, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v18, 0x800000, 0LL);
  if ( DataVals__isParam(dataVals_k__BackingField, 99, 0LL) )
    BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v18, 0x1000000, 0LL);
  if ( BuffEntity__getAppearanceId(v13, 0LL) >= 1 )
  {
    this = (BattleLogicFunction_o *)BattleServantData__isShiftableServant(ServantData, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
      goto LABEL_194;
    v115 = v9->fields.data;
    if ( !v115 )
      goto LABEL_290;
    this = (BattleLogicFunction_o *)v115->fields.battleEvent;
    if ( !this )
      goto LABEL_290;
    if ( ((*(__int64 (__fastcall **)(BattleLogicFunction_o *, BattleServantData_o *, _QWORD))&this->klass[1]._2.element_size)(
            this,
            ServantData,
            *(_QWORD *)&this->klass[1]._2.static_fields_size) & 1) != 0
      || BattleServantData__isLogicResultAlive(ServantData, 0LL)
      || BattleServantData__isGuts(ServantData, 0LL) )
    {
LABEL_194:
      BattleBuffData_BuffData__onState((BattleBuffData_BuffData_o *)v18, 256, 0LL);
    }
  }
  *(_BYTE *)(v18 + 370) = DataVals__IsEqualsTo1(dataVals_k__BackingField, 158, 0LL);
  *(_DWORD *)(v18 + 276) = DataVals__GetParam(dataVals_k__BackingField, 92, 0, 0LL);
  *(_DWORD *)(v18 + 280) = DataVals__GetParam(dataVals_k__BackingField, 93, 0, 0LL);
  *(_DWORD *)(v18 + 284) = DataVals__GetParam(dataVals_k__BackingField, 94, 0, 0LL);
  *(_BYTE *)(v18 + 288) = DataVals__GetParam(dataVals_k__BackingField, 95, 0, 0LL) == 1;
  *(_BYTE *)(v18 + 289) = DataVals__GetParam(dataVals_k__BackingField, 96, 0, 0LL) == 1;
  ValsList = DataVals__GetValsList(dataVals_k__BackingField, 100, 0LL);
  *(_QWORD *)(v18 + 304) = ValsList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 304), (int32_t)ValsList, v117, v118);
  v119 = DataVals__GetParam(dataVals_k__BackingField, 5, 0, 0LL);
  v120 = *(_DWORD *)(v18 + 60);
  if ( v119 )
    v121 = v119;
  else
    v121 = 1000;
  *(_DWORD *)(v18 + 48) = v121;
  if ( v120 < 1 )
    goto LABEL_204;
  v122 = (UnityEngine_Object_o *)v9->fields.logic;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v122, 0LL, 0LL) )
  {
    this = (BattleLogicFunction_o *)v9->fields.logic;
    if ( !this )
      goto LABEL_290;
    v123 = BattleLogic__checkInField((BattleLogic_o *)this, *(_DWORD *)(v18 + 60), 0LL);
  }
  else
  {
LABEL_204:
    v123 = 1;
  }
  v124 = v13->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckAccumulation(v124, 0LL) )
    BattleServantData__resetAccumulationDamage(ServantData, 0LL);
  mainAction = userCommandCodeId;
  *(_QWORD *)(v18 + 88) = userCommandCodeId;
  if ( (__int64)userCommandCodeId >= 1 )
  {
    this = (BattleLogicFunction_o *)v9->fields.data;
    if ( !this )
      goto LABEL_290;
    UserCommandCode = BattleData__getUserCommandCode((BattleData_o *)this, (int64_t)userCommandCodeId, 0LL);
    if ( UserCommandCode )
      *(_DWORD *)(v18 + 160) = UserCommandCode->fields.commandCodeId;
  }
  *(_QWORD *)(v18 + 348) = *(_QWORD *)&v181->fields.commandAssistId;
  ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, __int64, Il2CppMethodPointer))funcTarget->klass->vtable._6_ApplyPrevSaveBuffData.method)(
    funcTarget,
    v18,
    funcTarget->klass->vtable._7_MakeActionBuffData.methodPtr);
  MaxHp = BattleServantData__getMaxHp(ServantData, 0LL);
  userCommandCodeIda = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))ServantData->klass->vtable._9_get_hp.method)(
                         ServantData,
                         ServantData->klass->vtable._10_set_hp.methodPtr);
  if ( !v123 )
    goto LABEL_219;
  v127 = v13->fields.type;
  if ( !BuffList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BuffList_TypeInfo);
  if ( BuffList__CheckUpdateHp(v127, 0LL) )
  {
    v186->fields.procType = 2;
    if ( BattleServantData__isLogicResultAlive(ServantData, 0LL) )
    {
      v128 = 1LL;
    }
    else
    {
      if ( BattleServantData__isGuts(ServantData, 0LL) )
      {
        v129 = ServantData->fields.uniqueId;
        IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(args, 0LL);
        mainAction = BattleLogicFunction__getNoEffectObject(
                       v9,
                       v129,
                       funcIndex,
                       dataVals_k__BackingField,
                       IsCommandSideEffect,
                       0LL,
                       0LL,
                       v131);
        this = (BattleLogicFunction_o *)v180;
        if ( !v180 )
          goto LABEL_290;
        BattleActionData__addAction(v180, mainAction, 0LL);
      }
      v128 = 0LL;
    }
    ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_BuffData_o *, __int64, __int64, __int64, Il2CppMethodPointer))funcTarget->klass->vtable._8_AddBuff.method)(
      funcTarget,
      v186,
      v18,
      1LL,
      v128,
      funcTarget->klass->vtable._9_AfterAddBuffProc.methodPtr);
    this = (BattleLogicFunction_o *)v180;
    if ( !v180 )
      goto LABEL_290;
    BattleActionData__addReflectLogicResultServantId(v180, uniqueId, 0LL);
    v132 = (BattleActionEffect_AddChangeMaxHpBuff_o *)sub_1B887FC(BattleActionEffect_AddChangeMaxHpBuff_TypeInfo);
    BattleActionEffect_AddChangeMaxHpBuff___ctor(v132, 0LL);
    this = (BattleLogicFunction_o *)sub_1B88658(BattleBuffData_BuffData___TypeInfo, 1LL);
    if ( !this )
      goto LABEL_290;
    v133 = this;
    this = (BattleLogicFunction_o *)sub_1B886EC(v18, this->klass->_1.element_class);
    if ( !this )
    {
      v174 = sub_1B88830(0LL);
      sub_1B886D8(v174, 0LL);
    }
    if ( !LODWORD(v133->fields.logic) )
      goto LABEL_291;
    v133->fields.logictarget = (struct BattleLogicTarget_o *)v18;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v133->fields.logictarget, v18, v134, v135);
    this = (BattleLogicFunction_o *)BattleServantData__getNowHp(ServantData, 0LL);
    if ( !v132 )
      goto LABEL_290;
    v136 = (BattleActionEffect_Base_o *)((__int64 (__fastcall *)(BattleActionEffect_AddChangeMaxHpBuff_o *, BattleLogicFunction_o *, _QWORD, _QWORD, Il2CppMethodPointer))v132->klass->vtable._7_InitBuff.method)(
                                          v132,
                                          v133,
                                          uniqueId,
                                          (unsigned int)((_DWORD)this - userCommandCodeIda),
                                          v132->klass->vtable._8_PartialPreActionProc.methodPtr);
    BattleActionData_BuffData__SetActionEffectProc(v186, v136, 0LL);
  }
  else
  {
LABEL_219:
    ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_BuffData_o *, __int64, bool, _QWORD, Il2CppMethodPointer))funcTarget->klass->vtable._8_AddBuff.method)(
      funcTarget,
      v186,
      v18,
      v123,
      0LL,
      funcTarget->klass->vtable._9_AfterAddBuffProc.methodPtr);
  }
  id = v13->fields.id;
  if ( id == ConstantMaster__getValue((System_String_o *)StringLiteral_13267/*"TAMAMOCAT_STUN_BUFF_ID"*/, 0LL) )
  {
    v138 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
    System_Collections_Generic_List_int____ctor(
      v138,
      (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
    v188 = 1;
    for ( i = System_Int32__ToString((int32_t)&v188, 0LL); ; i = System_Int32__ToString((int32_t)&v188, 0LL) )
    {
      v140 = System_String__Concat_61707032((System_String_o *)StringLiteral_13268/*"TAMAMOCAT_TREASURE_DEVICE_ID_"*/, i, 0LL);
      if ( ConstantMaster__getValue(v140, 0LL) == -1 )
        break;
      v141 = System_Int32__ToString((int32_t)&v188, 0LL);
      v142 = System_String__Concat_61707032((System_String_o *)StringLiteral_13268/*"TAMAMOCAT_TREASURE_DEVICE_ID_"*/, v141, 0LL);
      this = (BattleLogicFunction_o *)ConstantMaster__getValue(v142, 0LL);
      if ( (_DWORD)this == treasureDvcId )
      {
        if ( !v15 )
          goto LABEL_290;
        BattleServantData__SetIsSleepWaitMode(v15, 1, 0LL);
      }
      ++v188;
    }
  }
  this = (BattleLogicFunction_o *)v9->fields.data;
  if ( !this )
    goto LABEL_290;
  QuestIndividualities = BattleData__getQuestIndividualities((BattleData_o *)this, 0LL);
  v144 = (UnityEngine_Object_o *)v9->fields.logic;
  v145 = QuestIndividualities;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality(v144, 0LL, 0LL);
  perf = 0LL;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v147 = v9->fields.logic;
    if ( !v147 )
      goto LABEL_290;
    perf = v147->fields.perf;
  }
  BattleServantData__updateConditionsBuff(ServantData, v145, perf, 0LL);
  if ( BuffEntity__checkBuffType(v13, 133, 0LL) || *(_QWORD *)(v18 + 312) )
  {
    v148 = (UnityEngine_Object_o *)v9->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v148, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)v9->fields.logic;
      if ( !this )
        goto LABEL_290;
      BattleLogic__updateConditionsBuffAll((BattleLogic_o *)this, 0LL);
    }
    this = (BattleLogicFunction_o *)v9->fields.data;
    if ( !this )
      goto LABEL_290;
    this = (BattleLogicFunction_o *)BattleData__getFieldServantList((BattleData_o *)this, 0, 0LL);
    if ( !this )
      goto LABEL_290;
    v149 = (int)this->fields.logic;
    v150 = this;
    if ( v149 >= 1 )
    {
      v151 = 0;
      while ( v151 < v149 )
      {
        this = (BattleLogicFunction_o *)*((_QWORD *)&v150->fields.logictarget + (int)v151);
        if ( !this )
          goto LABEL_290;
        BattleServantData__updateBuff((BattleServantData_o *)this, 1, 1, 0LL);
        v149 = (int)v150->fields.logic;
        if ( (int)++v151 >= v149 )
          goto LABEL_258;
      }
LABEL_291:
      sub_1B88814(this, mainAction);
    }
  }
LABEL_258:
  if ( BuffEntity__checkBuffType(v13, 206, 0LL) )
  {
    ShortenMaxCountArray = DataVals__GetShortenMaxCountArray(dataVals_k__BackingField, 0LL);
    *(_QWORD *)(v18 + 392) = ShortenMaxCountArray;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 392), (int32_t)ShortenMaxCountArray, v153, v154);
  }
  v155 = v186;
  if ( BuffEntity__checkBuffType(v13, 208, 0LL) )
  {
    TargetFunctionIndividuality = DataVals__GetTargetFunctionIndividuality(dataVals_k__BackingField, 0LL);
    *(_QWORD *)(v18 + 400) = TargetFunctionIndividuality;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 400), (int32_t)TargetFunctionIndividuality, v157, v158);
    TargetBuffIndividuality = DataVals__GetTargetBuffIndividuality(dataVals_k__BackingField, 0LL);
    *(_QWORD *)(v18 + 408) = TargetBuffIndividuality;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 408), (int32_t)TargetBuffIndividuality, v160, v161);
  }
  this = (BattleLogicFunction_o *)BattleServantData__getMaxHp(ServantData, 0LL);
  if ( (int)this < MaxHp )
  {
    this = (BattleLogicFunction_o *)BuffEntity__checkBuffType(v13, 41, 0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v162 = ServantData->fields.maxhp;
      if ( !System_Math_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
      this = (BattleLogicFunction_o *)System_Math__Max_62525680(0, userCommandCodeIda - v162, 0LL);
      *(_DWORD *)(v18 + 136) = (_DWORD)this;
    }
  }
  v163 = v9->fields.data;
  if ( !v163 )
    goto LABEL_290;
  this = (BattleLogicFunction_o *)v163->fields.battleEvent;
  if ( !this )
    goto LABEL_290;
  *(_BYTE *)(v18 + 212) = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, __int64, BuffEntity_o *, DataVals_o *, _QWORD))&this->klass[1]._2.field_count)(
                            this,
                            v18,
                            v13,
                            dataVals_k__BackingField,
                            *(_QWORD *)&this->klass[1]._2.interfaces_count) & 1;
  if ( BuffEntity__checkBuffType(v13, 140, 0LL) )
  {
    buffData = ServantData->fields.buffData;
    v165 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
    BattleBuffData_CheckIndividualitiesData___ctor(v165, ServantData, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( !buffData )
      goto LABEL_290;
    this = (BattleLogicFunction_o *)BattleBuffData__getBuffList_42437664(buffData, 83, v165, 1, 0, 0LL, 0LL, 0LL);
    if ( !this )
      goto LABEL_290;
    v155 = v186;
    if ( this->fields.logic )
      BattleLogicFunction__functionResetCommandCard(v9, (int32_t)mainAction, v166, v167, v168, v169);
  }
  if ( DataVals__IsOnParty(dataVals_k__BackingField, 0LL) )
    *(_DWORD *)(v18 + 272) = v182;
  v170 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(args, 0LL);
  v171 = (BattleActionData_BuffData_o *)((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_BuffData_o *, __int64, FunctionEntity_o *, bool, Il2CppMethodPointer))funcTarget->klass->vtable._11_MakeAddActionBuffData.method)(
                                          funcTarget,
                                          v155,
                                          v18,
                                          funcEnt,
                                          v170,
                                          funcTarget->klass->vtable._12_GetConvertBuffEntity.methodPtr);
  if ( DataVals__IsProgressTurnOnBoard(dataVals_k__BackingField, 0LL) )
    *(_BYTE *)(v18 + 368) = 1;
  if ( DataVals__GetParam(dataVals_k__BackingField, 148, 0, 0LL) > 0
    || BuffEntity__IsDelayRemoveExpiredOnPlayerTurn(v13, 0LL) )
  {
    *(_BYTE *)(v18 + 369) = 1;
  }
  BattleLogicFunction__AfterAddedBuffProcess(v9, ServantData, v13, v172);
  if ( BuffEntity__getDamageRelease(v13, 0LL) >= 1
    && !BattleServantData__isLogicResultAlive(ServantData, 0LL)
    && (this = (BattleLogicFunction_o *)BattleServantData__isGuts(ServantData, 0LL), ((unsigned __int8)this & 1) != 0)
    || (this = (BattleLogicFunction_o *)BuffEntity__getDamageRelease(v13, 0LL), (_DWORD)this == -1) )
  {
    ServantData->fields.isGutsSleepRelease = 0;
  }
  if ( !v180
    || (BattleActionData__setBuffData(v180, v171, dataVals_k__BackingField, 0LL),
        (this = (BattleLogicFunction_o *)v9->fields.data) == 0LL) )
  {
LABEL_290:
    sub_1B8880C(this, mainAction);
  }
  BattleData__AddFreshBuffList((BattleData_o *)this, v171, 0LL);
  BattleActionData__addAction(v181, v180, 0LL);
  ((void (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_o *, BattleActionData_BuffData_o *, __int64, Il2CppMethodPointer))funcTarget->klass->vtable._9_AfterAddBuffProc.method)(
    funcTarget,
    v181,
    v171,
    v18,
    funcTarget->klass->vtable._10_MakeWrapTarget.methodPtr);
  return (BattleBuffData_BuffData_o *)v18;
}


void __fastcall BattleLogicFunction__functionBreakGaugeChange(
        BattleLogicFunction_o *this,
        BattleActionData_o *mainAction,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit,
        BattleServantData_o *targetSvtData,
        BattleActionData_BaseShiftGaugeData_o *shiftGauge,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals_k__BackingField; // x23
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x25
  int32_t uniqueId; // w20
  int32_t funcIndex; // w21
  bool IsCommandSideEffect; // w0
  const MethodInfo *v15; // x7
  __int64 v16; // x19
  int32_t v17; // w8
  __int64 v18; // x0
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w26
  int32_t v22; // w27
  FunctionEntity_o *funcEnt; // x28
  _BOOL8 v24; // x0
  const MethodInfo *v25; // x6
  BattleActionData_ShiftServant_o *v26; // x24
  SimpleHpData_o *v27; // x27
  int32_t MaxHp; // w0
  SimpleHpData_o *v29; // x25
  int32_t CurrentShiftPos; // w0
  EnemySimpleHpData_o *v31; // x25
  unsigned int Value; // w0
  int v33; // w0
  int v34; // w24
  int v35; // w28
  int32_t v36; // w29
  int32_t Param; // w0
  SimpleHpData_o *v38; // x26
  unsigned int v39; // w19
  unsigned int MaxShiftIconPos; // w0
  int v41; // [xsp+Ch] [xbp-84h]
  BattleActionData_ShiftServant_o *v42; // [xsp+10h] [xbp-80h]
  BattleActionData_o *v43; // [xsp+18h] [xbp-78h]
  BattleLogicFunction_o *v44; // [xsp+28h] [xbp-68h]

  v44 = this;
  if ( (byte_4A5DCA0 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&EnemySimpleHpData_TypeInfo);
    sub_1B885B0(&System_Math_TypeInfo);
    sub_1B885B0(&BattleActionData_ShiftServant_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1B885B0(&SimpleHpData_TypeInfo);
    byte_4A5DCA0 = 1;
  }
  if ( !funcUnit || !targetSvtData )
    goto LABEL_34;
  procArg_k__BackingField = funcUnit->fields._procArg_k__BackingField;
  dataVals_k__BackingField = funcUnit->fields._dataVals_k__BackingField;
  this = (BattleLogicFunction_o *)BattleServantData__isShiftServant(targetSvtData, 0LL);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_37;
  if ( !shiftGauge )
    goto LABEL_34;
  this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, Il2CppMethodPointer))shiftGauge->klass->vtable._8_unknown.method)(
                                    shiftGauge,
                                    targetSvtData,
                                    shiftGauge->klass->vtable._9_unknown.methodPtr);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
LABEL_37:
    if ( dataVals_k__BackingField )
    {
      if ( procArg_k__BackingField )
      {
        uniqueId = targetSvtData->fields.uniqueId;
        funcIndex = dataVals_k__BackingField->fields.funcIndex;
        IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg_k__BackingField, 0LL);
        this = (BattleLogicFunction_o *)BattleLogicFunction__getNoEffectObject(
                                          v44,
                                          uniqueId,
                                          funcIndex,
                                          dataVals_k__BackingField,
                                          IsCommandSideEffect,
                                          0LL,
                                          0LL,
                                          v15);
        if ( mainAction )
        {
          BattleActionData__addAction(mainAction, (BattleActionData_o *)this, 0LL);
          return;
        }
      }
    }
    goto LABEL_34;
  }
  v16 = sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_34;
  v17 = targetSvtData->fields.uniqueId;
  *(_DWORD *)(v16 + 32) = v17;
  *(_DWORD *)(v16 + 36) = v17;
  v18 = ((__int64 (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, Il2CppMethodPointer))shiftGauge->klass->vtable._7_unknown.method)(
          shiftGauge,
          shiftGauge->klass->vtable._8_unknown.methodPtr);
  *(_QWORD *)(v16 + 64) = v18;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 64), v18, v19, v20);
  if ( !dataVals_k__BackingField )
    goto LABEL_34;
  if ( !procArg_k__BackingField )
    goto LABEL_34;
  v21 = dataVals_k__BackingField->fields.funcIndex;
  v22 = targetSvtData->fields.uniqueId;
  funcEnt = dataVals_k__BackingField->fields.funcEnt;
  v24 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg_k__BackingField, 0LL);
  this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                    (BattleLogicFunction_o *)v24,
                                    funcEnt,
                                    v22,
                                    v21,
                                    v24,
                                    0LL,
                                    v25);
  if ( !this )
    goto LABEL_34;
  BYTE5(this[1].fields.master) = 0;
  BattleActionData__setBuffData((BattleActionData_o *)v16, (BattleActionData_BuffData_o *)this, 0LL, 0LL);
  v26 = (BattleActionData_ShiftServant_o *)sub_1B887FC(BattleActionData_ShiftServant_TypeInfo);
  BattleActionData_ShiftServant___ctor(v26, 0, 0LL);
  if ( !v26 )
    goto LABEL_34;
  v43 = (BattleActionData_o *)v16;
  v42 = v26;
  BattleActionData_ShiftServant__setBeforeSvtData(v26, targetSvtData, 0LL);
  ((void (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, Il2CppMethodPointer))shiftGauge->klass->vtable._12_Init.method)(
    shiftGauge,
    targetSvtData,
    shiftGauge->klass->vtable._13_InitShiftHpPos.methodPtr);
  v27 = (SimpleHpData_o *)sub_1B887FC(SimpleHpData_TypeInfo);
  SimpleHpData___ctor(v27, targetSvtData, 0LL);
  if ( DataVals__IsEqualsTo1(dataVals_k__BackingField, 184, 0LL) )
  {
    MaxHp = BattleServantData__getMaxHp(targetSvtData, 0LL);
    BattleServantData__setHp(targetSvtData, MaxHp, 1, 0LL);
    v29 = (SimpleHpData_o *)sub_1B887FC(SimpleHpData_TypeInfo);
    SimpleHpData___ctor(v29, targetSvtData, 0LL);
    CurrentShiftPos = BattleServantData__GetCurrentShiftPos(targetSvtData, 0LL);
    BattleActionData_BaseShiftGaugeData__AddHpUpDataBeforeShift(shiftGauge, CurrentShiftPos, v27, v29, 0LL);
    v27 = v29;
  }
  v31 = (EnemySimpleHpData_o *)sub_1B887FC(EnemySimpleHpData_TypeInfo);
  EnemySimpleHpData___ctor(v31, targetSvtData, 0LL);
  Value = DataVals__GetValue(dataVals_k__BackingField, 0LL);
  v33 = ((__int64 (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, _QWORD, Il2CppMethodPointer))shiftGauge->klass->vtable._9_unknown.method)(
          shiftGauge,
          targetSvtData,
          Value,
          shiftGauge->klass->vtable._10_unknown.methodPtr);
  v41 = v33;
  if ( v33 >= 0 )
    v34 = v33;
  else
    v34 = -v33;
  v35 = 1;
  if ( v33 < 1 )
    v36 = -1;
  else
    v36 = 1;
  while ( 1 )
  {
    if ( !System_Math_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
    if ( v35 > v34 )
      break;
    BattleServantData__SetShiftServantChange(targetSvtData, v44->fields.data, v31, v36, 0LL);
    Param = DataVals__GetParam(dataVals_k__BackingField, 58, 0, 0LL);
    ((void (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, BattleServantData_o *, bool, Il2CppMethodPointer))shiftGauge->klass->vtable._10_unknown.method)(
      shiftGauge,
      targetSvtData,
      Param > 0,
      shiftGauge->klass->vtable._11_unknown.methodPtr);
    v38 = (SimpleHpData_o *)sub_1B887FC(SimpleHpData_TypeInfo);
    SimpleHpData___ctor(v38, targetSvtData, 0LL);
    v39 = BattleServantData__GetCurrentShiftPos(targetSvtData, 0LL);
    MaxShiftIconPos = BattleServantData__GetMaxShiftIconPos(targetSvtData, 0LL);
    ((void (__fastcall *)(BattleActionData_BaseShiftGaugeData_o *, _QWORD, _QWORD, SimpleHpData_o *, SimpleHpData_o *, Il2CppMethodPointer))shiftGauge->klass->vtable._11_unknown.method)(
      shiftGauge,
      v39,
      MaxShiftIconPos,
      v27,
      v38,
      shiftGauge->klass->vtable._12_Init.methodPtr);
    ++v35;
    v27 = v38;
  }
  if ( v41 )
  {
    this = (BattleLogicFunction_o *)v44->fields.logic;
    if ( !this )
      goto LABEL_34;
    BattleLogic__actEnemyPtPassiveSkill((BattleLogic_o *)this, targetSvtData->fields.uniqueId, 1, 0, 0LL);
  }
  BattleActionData_ShiftServant__setCheckSvtData(v42, targetSvtData, 0LL);
  BattleActionData__setShiftServant(v43, v42, 0LL);
  BattleActionData__SetShiftGauge(v43, shiftGauge, 0LL);
  if ( !mainAction )
LABEL_34:
    sub_1B8880C(this, mainAction);
  BattleActionData__AddAfterActionData(mainAction, v43, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *__fastcall BattleLogicFunction__functionCallServant(
        BattleLogicFunction_o *this,
        int32_t playerId,
        FunctionEntity_o *funcEnt,
        DataVals_o *baseVals,
        int32_t funcIndex,
        bool isCommandSideEffect,
        const MethodInfo *method)
{
  __int64 data; // x0
  BattleData_o *v13; // x25
  BattleServantData_o *v14; // x24
  BattleLogicFunction_o *FieldSpace; // x0
  const MethodInfo *v16; // x7
  System_String_o *v17; // x0
  BattleData_o *v18; // x24
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x22
  int32_t v22; // w1
  int32_t v23; // w2
  int32_t v24; // w3
  int32_t v25; // w2
  int32_t v26; // w3
  int32_t v27; // w1
  int32_t v28; // w2
  int32_t v29; // w3
  int32_t v30; // w2
  int32_t v31; // w3
  int32_t v32; // w1
  int32_t v33; // w2
  int32_t v34; // w3
  int32_t v35; // w2
  int32_t v36; // w3
  int32_t v37; // w1
  struct BattleData_o *v38; // x8
  struct System_Int32_array *e_entryid; // x8
  char *v40; // x8
  _DWORD *v41; // x8
  int32_t v42; // w22
  int32_t v43; // t1
  BattleServantData_o *v44; // x23
  BattleActionData_o *v45; // x21
  int32_t uniqueId; // w23
  bool isEffectSummon; // w24
  int32_t Value; // [xsp+Ch] [xbp-54h] BYREF
  int32_t index[2]; // [xsp+10h] [xbp-50h] BYREF
  int32_t v51; // [xsp+18h] [xbp-48h] BYREF
  int32_t targetIndex; // [xsp+1Ch] [xbp-44h] BYREF

  if ( (byte_4A5DC91 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&string___TypeInfo);
    sub_1B885B0(&StringLiteral_17086/*"baseVals.GetValue:"*/);
    sub_1B885B0(&StringLiteral_16075/*"] Index["*/);
    sub_1B885B0(&StringLiteral_362/*" 召喚！NPC["*/);
    sub_1B885B0(&StringLiteral_16078/*"] UniqueID["*/);
    sub_1B885B0(&StringLiteral_19676/*"functionCallServant>"*/);
    sub_1B885B0(&StringLiteral_16069/*"]"*/);
    byte_4A5DC91 = 1;
  }
  v51 = 0;
  *(_QWORD *)index = 0LL;
  Value = 0;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_33;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, playerId, 0LL);
  targetIndex = -1;
  if ( !baseVals )
    goto LABEL_33;
  v13 = this->fields.data;
  v14 = (BattleServantData_o *)data;
  data = DataVals__isCheckEnemyFieldSpace(baseVals, 0LL);
  if ( !v13 )
    goto LABEL_33;
  FieldSpace = (BattleLogicFunction_o *)BattleData__getFieldSpace(v13, playerId, &targetIndex, data & 1, 0LL);
  if ( !(_DWORD)FieldSpace )
    return BattleLogicFunction__getMissObject(
             FieldSpace,
             playerId,
             funcIndex,
             baseVals,
             isCommandSideEffect,
             0LL,
             0LL,
             v16);
  Value = DataVals__GetValue(baseVals, 0LL);
  v17 = System_Int32__ToString((int32_t)&Value, 0LL);
  System_String__Concat_61707032((System_String_o *)StringLiteral_17086/*"baseVals.GetValue:"*/, v17, 0LL);
  v51 = -1;
  if ( playerId == -1 )
  {
    v18 = this->fields.data;
    data = DataVals__GetValue(baseVals, 0LL);
    if ( !v18 )
      goto LABEL_33;
    FieldSpace = (BattleLogicFunction_o *)BattleData__GetEnemySummonId(v18, data, 0LL);
  }
  else
  {
    data = DataVals__GetValue(baseVals, 0LL);
    if ( !v14 )
      goto LABEL_33;
    FieldSpace = (BattleLogicFunction_o *)BattleServantData__getSummonNpcId(v14, data, 0LL);
  }
  v51 = (int)FieldSpace;
  if ( (_DWORD)FieldSpace == -1 )
    return BattleLogicFunction__getMissObject(
             FieldSpace,
             playerId,
             funcIndex,
             baseVals,
             isCommandSideEffect,
             0LL,
             0LL,
             v16);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_33;
  index[1] = BattleData__getNextUniqueID((BattleData_o *)data, 0LL);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_33;
  index[0] = BattleData__getNextNextIndex((BattleData_o *)data, 0LL);
  data = sub_1B88658(string___TypeInfo, 7LL);
  if ( !data )
    goto LABEL_33;
  v21 = data;
  if ( !*(_DWORD *)(data + 24) )
    goto LABEL_34;
  v22 = StringLiteral_362/*" 召喚！NPC["*/;
  *(_QWORD *)(data + 32) = StringLiteral_362/*" 召喚！NPC["*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(data + 32), v22, v19, v20);
  data = (__int64)System_Int32__ToString((int32_t)&v51, 0LL);
  if ( *(_DWORD *)(v21 + 24) <= 1u )
    goto LABEL_34;
  *(_QWORD *)(v21 + 40) = data;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 40), data, v23, v24);
  if ( *(_DWORD *)(v21 + 24) <= 2u )
    goto LABEL_34;
  v27 = StringLiteral_16078/*"] UniqueID["*/;
  *(_QWORD *)(v21 + 48) = StringLiteral_16078/*"] UniqueID["*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 48), v27, v25, v26);
  data = (__int64)System_Int32__ToString((int32_t)&index[1], 0LL);
  if ( *(_DWORD *)(v21 + 24) <= 3u )
    goto LABEL_34;
  *(_QWORD *)(v21 + 56) = data;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 56), data, v28, v29);
  if ( *(_DWORD *)(v21 + 24) <= 4u
    || (v32 = StringLiteral_16075/*"] Index["*/,
        *(_QWORD *)(v21 + 64) = StringLiteral_16075/*"] Index["*/,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 64), v32, v30, v31),
        data = (__int64)System_Int32__ToString((int32_t)index, 0LL),
        *(_DWORD *)(v21 + 24) <= 5u)
    || (*(_QWORD *)(v21 + 72) = data,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 72), data, v33, v34),
        *(_DWORD *)(v21 + 24) <= 6u) )
  {
LABEL_34:
    sub_1B88814(data, *(_QWORD *)&playerId);
  }
  v37 = StringLiteral_16069/*"]"*/;
  *(_QWORD *)(v21 + 80) = StringLiteral_16069/*"]"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 80), v37, v35, v36);
  System_String__Concat_61720560((System_String_array *)v21, 0LL);
  data = (__int64)this->fields.data;
  if ( !data
    || (data = (__int64)BattleData__createSummonEnemyServantData(
                          (BattleData_o *)data,
                          index[1],
                          index[0],
                          v51,
                          0LL,
                          0LL,
                          0LL),
        (v38 = this->fields.data) == 0LL)
    || (e_entryid = v38->fields.e_entryid) == 0LL )
  {
LABEL_33:
    sub_1B8880C(data, *(_QWORD *)&playerId);
  }
  if ( targetIndex >= e_entryid->max_length )
    goto LABEL_34;
  v40 = (char *)e_entryid + 4 * targetIndex;
  v43 = *((_DWORD *)v40 + 8);
  v41 = v40 + 32;
  v42 = v43;
  v44 = (BattleServantData_o *)data;
  if ( !data )
    goto LABEL_33;
  *v41 = *(_DWORD *)(data + 24);
  *(_BYTE *)(data + 468) = 1;
  *(_BYTE *)(data + 533) = 1;
  BattleServantData__SetRemainActionCount((BattleServantData_o *)data, 1, 0LL);
  data = (__int64)this->fields.logic;
  if ( !data )
    goto LABEL_33;
  BattleLogic__addEnemyActPriorityList((BattleLogic_o *)data, v44, 0LL);
  v45 = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v45, 0LL);
  uniqueId = v44->fields.uniqueId;
  isEffectSummon = DataVals__isEffectSummon(baseVals, 0LL);
  data = DataVals__GetCallSvtEffectId(baseVals, 0LL);
  if ( !v45 )
    goto LABEL_33;
  BattleActionData__setSummonServant(v45, uniqueId, v42, funcIndex, isEffectSummon, data, 0LL);
  return v45;
}


BattleActionData_o *__fastcall BattleLogicFunction__functionChangeBg(
        BattleLogicFunction_o *this,
        int32_t actionId,
        FunctionEntity_o *funcEnt,
        DataVals_o *baseVals,
        int32_t funcIndex,
        const MethodInfo *method)
{
  BattleActionData_o *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  int32_t Value; // w21
  int32_t Param; // w22
  int32_t FieldPriority; // w0

  if ( (byte_4A5DC94 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    byte_4A5DC94 = 1;
  }
  v8 = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v8, 0LL);
  if ( !v8 || (v8->fields.actorId = actionId, !baseVals) )
    sub_1B8880C(v9, v10);
  Value = DataVals__GetValue(baseVals, 0LL);
  Param = DataVals__GetParam(baseVals, 4, 0, 0LL);
  FieldPriority = DataVals__GetFieldPriority(baseVals, 0LL);
  BattleActionData__setChangeBg(v8, Value, Param, FieldPriority, 0LL);
  return v8;
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *__fastcall BattleLogicFunction__functionChangeServant(
        BattleLogicFunction_o *this,
        int32_t actionId,
        int32_t targetId,
        FunctionEntity_o *funcEnt,
        DataVals_o *baseVals,
        int32_t funcIndex,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x22
  BattleActionData_o *v13; // x21
  BattleActionData_ShiftServant_o *v14; // x23

  if ( (byte_4A5DC93 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&BattleActionData_ShiftServant_TypeInfo);
    byte_4A5DC93 = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_9;
  ServantData = BattleData__getServantData(data, targetId, 0LL);
  v13 = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v13, 0LL);
  if ( !v13 )
    goto LABEL_9;
  v13->fields.actorId = actionId;
  v14 = (BattleActionData_ShiftServant_o *)sub_1B887FC(BattleActionData_ShiftServant_TypeInfo);
  BattleActionData_ShiftServant___ctor(v14, 0, 0LL);
  if ( !v14
    || (BattleActionData_ShiftServant__setBeforeSvtData(v14, ServantData, 0LL), !ServantData)
    || (BattleServantData__setChangeServant(ServantData, this->fields.data, baseVals, 0LL),
        BattleActionData_ShiftServant__setCheckSvtData(v14, ServantData, 0LL),
        BattleActionData__setShiftServant(v13, v14, 0LL),
        (data = (BattleData_o *)this->fields.logic) == 0LL) )
  {
LABEL_9:
    sub_1B8880C(data, *(_QWORD *)&actionId);
  }
  BattleLogic__actEnemyPtPassiveSkill((BattleLogic_o *)data, ServantData->fields.uniqueId, 0, 0, 0LL);
  return v13;
}


BattleActionData_o *__fastcall BattleLogicFunction__functionDamage(
        BattleLogicFunction_o *this,
        int32_t playerId,
        int32_t targetId,
        DataVals_o *baseVals,
        int32_t funcIndex,
        BattleActionData_o *action,
        bool isSafe,
        const MethodInfo *method)
{
  BattleActionData_o *v15; // x20
  __int64 v16; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v18; // x26
  BattleLogic_o *logic; // x24
  BattleServantData_o *v20; // x25
  BattleActionData_DamageData_o *v21; // x21

  if ( (byte_4A5DC80 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    byte_4A5DC80 = 1;
  }
  v15 = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v15, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_10;
  data = (BattleData_o *)BattleData__getServantData(data, playerId, 0LL);
  if ( !this->fields.data )
    goto LABEL_10;
  v18 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, targetId, 0LL);
  if ( !baseVals
    || (logic = this->fields.logic,
        v20 = (BattleServantData_o *)data,
        data = (BattleData_o *)DataVals__GetValue(baseVals, 0LL),
        !logic)
    || (data = (BattleData_o *)BattleLogic__getFunctionDamagelist(
                                 logic,
                                 v18,
                                 v20,
                                 (int32_t)data,
                                 funcIndex,
                                 action,
                                 isSafe,
                                 0LL)) == 0LL
    || (v21 = (BattleActionData_DamageData_o *)data,
        BattleActionData_DamageData__addAttackSideEffectAction((BattleActionData_DamageData_o *)data, 80, 0LL),
        !v15) )
  {
LABEL_10:
    sub_1B8880C(data, v16);
  }
  BattleActionData__SetFuncDamageData(v15, v21, baseVals, 0LL);
  return v15;
}


BattleActionData_o *__fastcall BattleLogicFunction__functionDelayNpTurn(
        BattleLogicFunction_o *this,
        int32_t targetId,
        FunctionEntity_o *funcEnt,
        DataVals_o *baseVals,
        int32_t funcIndex,
        bool isCommandSideEffect,
        int32_t *absorptionCount,
        const MethodInfo *method)
{
  BattleActionData_o *v15; // x22
  BattleData_o *v16; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v18; // x27
  struct BattleData_o *v19; // x8
  const MethodInfo *v20; // x7
  int32_t Value; // w0
  int32_t nexttpturn; // w28
  _BOOL8 TDTurn; // x0
  const MethodInfo *v24; // x6

  if ( (byte_4A5DC89 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    byte_4A5DC89 = 1;
  }
  *absorptionCount = 0;
  v15 = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v15, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_22;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL);
  if ( !data )
    goto LABEL_22;
  v18 = (BattleServantData_o *)data;
  if ( !HIBYTE(data->fields.commandCodeInfos) )
    return 0LL;
  if ( !BattleServantData__isLogicResultAlive((BattleServantData_o *)data, 0LL) && !BattleServantData__isGuts(v18, 0LL) )
  {
    data = (BattleData_o *)BattleServantData__isShiftableServant(v18, 0LL);
    if ( ((unsigned __int8)data & 1) == 0 )
    {
      v19 = this->fields.data;
      if ( !v19 )
        goto LABEL_22;
      data = (BattleData_o *)v19->fields.battleEvent;
      if ( !data )
        goto LABEL_22;
      if ( ((*(__int64 (__fastcall **)(BattleData_o *, BattleServantData_o *, _QWORD))&data->klass[1]._2.initializationExceptionGCHandle)(
              data,
              v18,
              *(_QWORD *)&data->klass[1]._2.cctor_finished) & 1) == 0 )
        return 0LL;
    }
  }
  if ( !BattleServantData__hasTreasureDvc(v18, 0LL) )
    return BattleLogicFunction__getNoEffectObject(
             this,
             targetId,
             funcIndex,
             baseVals,
             isCommandSideEffect,
             0LL,
             0LL,
             v20);
  data = (BattleData_o *)BattleServantData__isTDSeraled(v18, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
    return BattleLogicFunction__getNoEffectObject(
             this,
             targetId,
             funcIndex,
             baseVals,
             isCommandSideEffect,
             0LL,
             0LL,
             v20);
  if ( !baseVals )
    goto LABEL_22;
  Value = DataVals__GetValue(baseVals, 0LL);
  nexttpturn = v18->fields.nexttpturn;
  TDTurn = BattleServantData__updownNextTDTurn(v18, Value, 0LL);
  if ( !TDTurn )
    return BattleLogicFunction__getNoEffectObject(
             this,
             targetId,
             funcIndex,
             baseVals,
             isCommandSideEffect,
             0LL,
             0LL,
             v20);
  data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                           (BattleLogicFunction_o *)TDTurn,
                           funcEnt,
                           v18->fields.uniqueId,
                           funcIndex,
                           isCommandSideEffect,
                           0LL,
                           v24);
  if ( !data
    || (HIDWORD(data->fields.m_CancellationTokenSource) = 5,
        v16 = data,
        *absorptionCount = v18->fields.nexttpturn - nexttpturn,
        !v15) )
  {
LABEL_22:
    sub_1B8880C(data, v16);
  }
  BattleActionData__setBuffData(v15, (BattleActionData_BuffData_o *)data, baseVals, 0LL);
  return v15;
}


BattleActionData_o *__fastcall BattleLogicFunction__functionGainHp(
        BattleLogicFunction_o *this,
        int32_t playerId,
        int32_t targetId,
        FunctionEntity_o *funcEnt,
        DataVals_o *baseVals,
        int32_t funcIndex,
        bool isCommandSideEffect,
        int32_t overwriteHeal,
        const MethodInfo *method)
{
  __int64 v9; // x26
  BattleActionData_o *v17; // x24
  __int64 v18; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v20; // x28
  BattleServantData_o *v21; // x25
  const MethodInfo *v22; // x4
  char v23; // w20
  struct BattleData_o *v24; // x8
  BattleBuffData_o *buffData; // x29
  BattleBuffData_CheckIndividualitiesData_o *v26; // x20
  System_String_o *v27; // x0
  float UpDownGiveHeal; // s0
  const MethodInfo *v30; // [xsp+8h] [xbp-78h]
  FunctionEntity_o *v31; // [xsp+10h] [xbp-70h]
  int32_t digit; // [xsp+18h] [xbp-68h] BYREF
  int32_t healPoint; // [xsp+1Ch] [xbp-64h] BYREF

  LODWORD(v9) = overwriteHeal;
  if ( (byte_4A5DC83 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    sub_1B885B0(&StringLiteral_19677/*"functionGainHp:"*/);
    byte_4A5DC83 = 1;
  }
  digit = 0;
  v17 = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v17, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_27;
  data = (BattleData_o *)BattleData__getServantData(data, playerId, 0LL);
  if ( !this->fields.data )
    goto LABEL_27;
  v20 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, targetId, 0LL);
  if ( !baseVals )
    goto LABEL_27;
  v21 = (BattleServantData_o *)data;
  baseVals->fields.isShowForcedEffect = 0;
  if ( (_DWORD)v9 == -1 )
    LODWORD(v9) = DataVals__GetValue(baseVals, 0LL);
  healPoint = v9;
  data = (BattleData_o *)DataVals__isUnaffected(baseVals, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
    goto LABEL_22;
  if ( !v21 )
    goto LABEL_27;
  if ( ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v21->klass->vtable._13_get_resultHp.method)(
         v21,
         v21->klass->vtable._14_set_resultHp.methodPtr) <= 0 )
  {
    healPoint = 0;
    data = (BattleData_o *)BattleServantData__isShiftableServant(v21, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
LABEL_21:
      LODWORD(v9) = 0;
LABEL_22:
      v23 = 0;
      goto LABEL_23;
    }
    v24 = this->fields.data;
    if ( v24 )
    {
      data = (BattleData_o *)v24->fields.battleEvent;
      if ( data )
      {
        data = (BattleData_o *)(*(__int64 (__fastcall **)(BattleData_o *, BattleServantData_o *, _QWORD))&data->klass[1]._2.initializationExceptionGCHandle)(
                                 data,
                                 v21,
                                 *(_QWORD *)&data->klass[1]._2.cctor_finished);
        if ( ((unsigned __int8)data & 1) == 0 )
        {
          data = (BattleData_o *)BattleServantData__isGuts(v21, 0LL);
          LODWORD(v9) = 0;
          v23 = (unsigned __int8)data ^ 1;
          goto LABEL_23;
        }
        goto LABEL_21;
      }
    }
LABEL_27:
    sub_1B8880C(data, v18);
  }
  data = (BattleData_o *)BattleServantData__isShiftReady(v21, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    LODWORD(v9) = 0;
    v23 = 0;
    healPoint = 0;
    goto LABEL_23;
  }
  v31 = funcEnt;
  buffData = v21->fields.buffData;
  v26 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v26, v21, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
    goto LABEL_27;
  if ( BattleBuffData__isTurnBuff(buffData, 42, v26, 1, 0LL) )
  {
    healPoint = 0;
    data = (BattleData_o *)DataVals__SetInvalidCauseByAnyBuff(baseVals, targetId, 0LL);
    funcEnt = v31;
    goto LABEL_21;
  }
  if ( v20 )
  {
    UpDownGiveHeal = BattleServantData__getUpDownGiveHeal(v20, v21, 0LL);
    LODWORD(v9) = BattleUtility__FloorToInt(UpDownGiveHeal * (float)(int)v9, 0LL);
    healPoint = v9;
  }
  funcEnt = v31;
  digit = 1;
  data = (BattleData_o *)BattleServantData__getUpDownHeal(v21, &digit, 0LL);
  v23 = 0;
  v9 = (int)data * (__int64)(int)v9 / digit;
  healPoint = v9;
  baseVals->fields.isShowForcedEffect = 1;
LABEL_23:
  healPoint = BattleLogicFunction__GetActualRecoveryHealPoint((BattleLogicFunction_o *)data, baseVals, v21, v9, v22);
  v27 = System_Int32__ToString((int32_t)&healPoint, 0LL);
  System_String__Concat_61707032((System_String_o *)StringLiteral_19677/*"functionGainHp:"*/, v27, 0LL);
  BattleLogicFunction__SetGainHpBuff(
    this,
    v17,
    healPoint,
    funcIndex,
    v21,
    funcEnt,
    baseVals,
    isCommandSideEffect,
    v23 & 1,
    v30);
  return v17;
}


BattleActionData_o *__fastcall BattleLogicFunction__functionGainHpFromTargets(
        BattleLogicFunction_o *this,
        BattleLogicFunction_ProcListInArgs_o *procArg,
        BattleActionData_o *mainAction,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  BattleLogicFunction_ProcListInArgs_o *v6; // x24
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  System_Collections_Generic_List_T__o *v8; // x25
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  __int64 v12; // x10
  __int64 v13; // x10
  __int64 v14; // x10
  int logic; // w8
  unsigned int v16; // w19
  int32_t v17; // w25
  DataVals_o *v18; // x28
  const MethodInfo *v19; // x4
  BattleLogicFunction_c *klass; // x8
  BattleLogicFunction_o *v21; // x22
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 v24; // x0
  __int64 v25; // x1
  __int64 v26; // x26
  __int64 v27; // x8
  __int64 v28; // x9
  int *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x8
  __int64 v32; // x9
  int *v33; // x10
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x22
  __int64 v38; // x1
  BattleData_o *data; // x0
  int32_t v40; // w22
  BattleServantData_o *ServantData; // x0
  __int64 v42; // x1
  BattleServantData_o *v43; // x24
  BattleLogicFunction_o *Value; // x0
  __int64 v45; // x1
  const MethodInfo *v46; // x3
  int v47; // w25
  int32_t v48; // w8
  int32_t v49; // w27
  bool isRandomDamage; // w19
  int32_t actorId; // w29
  FunctionEntity_o *funcEnt; // x20
  int32_t funcIndex; // w23
  bool IsCommandSideEffect; // w0
  BattleActionData_o *v55; // x27
  __int64 v56; // x1
  int v57; // w19
  int32_t v58; // w20
  bool v59; // w0
  const MethodInfo *v60; // x7
  BattleActionData_o *NoEffectObject; // x1
  __int64 v62; // x8
  __int64 v63; // x9
  int *v64; // x10
  __int64 v65; // x0
  int32_t v66; // w20
  FunctionEntity_o *v67; // x22
  int32_t v68; // w21
  int32_t targetId_k__BackingField; // w23
  bool v70; // w0
  const MethodInfo *overwriteLossHp; // [xsp+0h] [xbp-E0h]
  const MethodInfo *v73; // [xsp+18h] [xbp-C8h]
  DataVals_o *dataVals_k__BackingField; // [xsp+20h] [xbp-C0h]
  BattleLogicFunction_o *v76; // [xsp+38h] [xbp-A8h]
  unsigned int v77; // [xsp+40h] [xbp-A0h]
  int32_t v78; // [xsp+44h] [xbp-9Ch]
  BattleActionData_o *v79; // [xsp+48h] [xbp-98h]
  bool v80; // [xsp+54h] [xbp-8Ch]
  BattleLogicFunction_ProcListInArgs_o *v81; // [xsp+58h] [xbp-88h]
  BattleLogicFunction_o *v82; // [xsp+60h] [xbp-80h]
  System_Enum_o v83; // [xsp+68h] [xbp-78h] BYREF
  int32_t funcType; // [xsp+78h] [xbp-68h]

  v6 = procArg;
  v82 = this;
  if ( (byte_4A5DC9D & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_FuncList_TYPE__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
    sub_1B885B0(&FuncList_TYPE_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1B885B0(&StringLiteral_16320/*"_SAFE"*/);
    byte_4A5DC9D = 1;
  }
  if ( !funcTarget )
    goto LABEL_88;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_88;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v79 = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v79, 0LL);
  v8 = (System_Collections_Generic_List_T__o *)sub_1B887FC(System_Collections_Generic_List_FuncList_TYPE__TypeInfo);
  System_Collections_Generic_List_Int32Enum____ctor(
    v8,
    (const MethodInfo_34E27E8 *)Method_System_Collections_Generic_List_FuncList_TYPE___ctor__);
  if ( !v8 )
    goto LABEL_88;
  items = v8->fields._items;
  v10 = Method_System_Collections_Generic_List_FuncList_TYPE__Add__;
  ++v8->fields._version;
  if ( !items )
    goto LABEL_88;
  size = v8->fields._size;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v8,
      12,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v8->fields._items;
    v10 = Method_System_Collections_Generic_List_FuncList_TYPE__Add__;
    ++v8->fields._version;
    if ( !items )
      goto LABEL_88;
  }
  else
  {
    v8->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 12;
    ++v8->fields._version;
  }
  v12 = v8->fields._size;
  if ( (unsigned int)v12 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v8,
      25,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v8->fields._items;
    v10 = Method_System_Collections_Generic_List_FuncList_TYPE__Add__;
    ++v8->fields._version;
    if ( !items )
      goto LABEL_88;
  }
  else
  {
    v8->fields._size = v12 + 1;
    *((_DWORD *)items->m_Items + v12) = 25;
    ++v8->fields._version;
  }
  v13 = v8->fields._size;
  if ( (unsigned int)v13 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v8,
      50,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    items = v8->fields._items;
    v10 = Method_System_Collections_Generic_List_FuncList_TYPE__Add__;
    ++v8->fields._version;
    if ( !items )
      goto LABEL_88;
  }
  else
  {
    v8->fields._size = v13 + 1;
    *((_DWORD *)items->m_Items + v13) = 50;
    ++v8->fields._version;
  }
  v14 = v8->fields._size;
  if ( (unsigned int)v14 >= items->max_length )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      v8,
      51,
      *(const MethodInfo_34E303C **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
  }
  else
  {
    v8->fields._size = v14 + 1;
    *((_DWORD *)items->m_Items + v14) = 51;
  }
  this = (BattleLogicFunction_o *)dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_88;
  this = (BattleLogicFunction_o *)DataVals__GetDependDataValsArray(
                                    dataVals_k__BackingField,
                                    (System_Collections_Generic_List_FuncList_TYPE__o *)v8,
                                    1,
                                    0LL);
  if ( !this )
    goto LABEL_88;
  logic = (int)this->fields.logic;
  if ( logic < 1 )
  {
    v17 = 0;
    goto LABEL_84;
  }
  v16 = 0;
  v17 = 0;
  v81 = v6;
  v76 = this;
  do
  {
    if ( v16 >= logic )
      sub_1B88814(this, procArg);
    v18 = (DataVals_o *)*((_QWORD *)&this->fields.logictarget + (int)v16);
    if ( !v18 )
      goto LABEL_88;
    v83.klass = (System_Enum_c *)FuncList_TYPE_TypeInfo;
    v83.monitor = (void *)-1LL;
    funcType = v18->fields.funcType;
    this = (BattleLogicFunction_o *)System_Enum__ToString(&v83, 0LL);
    if ( !this )
      goto LABEL_88;
    v80 = System_String__Contains((System_String_o *)this, (System_String_o *)StringLiteral_16320/*"_SAFE"*/, 0LL);
    this = (BattleLogicFunction_o *)BattleLogicFunction__GetDependFuncTargets(v82, v6, mainAction, v18, v19);
    if ( !this )
      goto LABEL_88;
    klass = this->klass;
    v21 = this;
    v22 = *(unsigned __int16 *)(&this->klass->_2.bitflags2 + 3);
    v77 = v16;
    if ( *(_WORD *)(&this->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
      {
        --v22;
        p_offset += 4;
        if ( !v22 )
          goto LABEL_31;
      }
      v24 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_31:
      v24 = sub_1BDA590(
              this,
              System_Collections_Generic_IEnumerable_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
              0LL);
    }
    v26 = (*(__int64 (__fastcall **)(BattleLogicFunction_o *, _QWORD))v24)(v21, *(_QWORD *)(v24 + 8));
    if ( !v26 )
      sub_1B8880C(0LL, v25);
    v78 = v17;
    while ( 1 )
    {
      v27 = *(_QWORD *)v26;
      v28 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
      {
        v29 = (int *)(*(_QWORD *)(v27 + 176) + 8LL);
        while ( *((System_Collections_IEnumerator_c **)v29 - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v28;
          v29 += 4;
          if ( !v28 )
            goto LABEL_39;
        }
        v30 = v27 + 16LL * *v29 + 312;
      }
      else
      {
LABEL_39:
        v30 = sub_1BDA590(v26, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v30)(v26, *(_QWORD *)(v30 + 8)) & 1) == 0 )
        break;
      v31 = *(_QWORD *)v26;
      v32 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
      {
        v33 = (int *)(*(_QWORD *)(v31 + 176) + 8LL);
        while ( *((System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__c **)v33 - 1) != System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo )
        {
          --v32;
          v33 += 4;
          if ( !v32 )
            goto LABEL_46;
        }
        v34 = v31 + 16LL * *v33 + 312;
      }
      else
      {
LABEL_46:
        v34 = sub_1BDA590(
                v26,
                System_Collections_Generic_IEnumerator_BattleLogicFunctionProcess_FunctionTargetCheck__TypeInfo,
                0LL);
      }
      v35 = (*(__int64 (__fastcall **)(__int64, _QWORD))v34)(v26, *(_QWORD *)(v34 + 8));
      v37 = v35;
      if ( !v35 )
        sub_1B8880C(0LL, v36);
      if ( ((*(__int64 (__fastcall **)(__int64, BattleActionData_o *, _QWORD))(*(_QWORD *)v35 + 392LL))(
              v35,
              mainAction,
              *(_QWORD *)(*(_QWORD *)v35 + 400LL)) & 1) != 0 )
      {
        data = v82->fields.data;
        if ( !data )
          sub_1B8880C(0LL, v38);
        v40 = *(_DWORD *)(v37 + 32);
        ServantData = BattleData__getServantData(data, v40, 0LL);
        v43 = ServantData;
        if ( !ServantData )
          sub_1B8880C(0LL, v42);
        Value = (BattleLogicFunction_o *)((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))ServantData->klass->vtable._13_get_resultHp.method)(
                                           ServantData,
                                           ServantData->klass->vtable._14_set_resultHp.methodPtr);
        v47 = (int)Value;
        if ( (int)Value >= 1 )
        {
          v48 = v18->fields.funcType;
          if ( v48 == 12 || v48 == 25 )
          {
            Value = (BattleLogicFunction_o *)DataVals__GetValue(v18, 0LL);
            v49 = (int)Value;
          }
          else
          {
            if ( (v48 & 0xFFFFFFFE) == 50 )
            {
              Value = (BattleLogicFunction_o *)BattleLogicFunction__getHpPerValue(Value, v18, v43, v46);
              v49 = (int)Value;
              isRandomDamage = 0;
              goto LABEL_60;
            }
            v49 = -1;
          }
          isRandomDamage = 1;
LABEL_60:
          if ( !mainAction )
            sub_1B8880C(Value, v45);
          if ( !v81 )
            sub_1B8880C(0LL, v45);
          actorId = mainAction->fields.actorId;
          funcEnt = v18->fields.funcEnt;
          funcIndex = v18->fields.funcIndex;
          IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v81, 0LL);
          v55 = BattleLogicFunction__functionlossHp(
                  v82,
                  actorId,
                  v40,
                  funcEnt,
                  v18,
                  funcIndex,
                  v80,
                  IsCommandSideEffect,
                  v49,
                  isRandomDamage,
                  0LL,
                  v73);
          v57 = v47
              - ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v43->klass->vtable._13_get_resultHp.method)(
                  v43,
                  v43->klass->vtable._14_set_resultHp.methodPtr);
          if ( v57 >= 1 )
          {
            if ( !v79 )
              sub_1B8880C(0LL, v56);
            BattleActionData__addAction(v79, v55, 0LL);
            v78 += v57;
          }
          else
          {
            v58 = v18->fields.funcIndex;
            v59 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v81, 0LL);
            NoEffectObject = BattleLogicFunction__getNoEffectObject(v82, v40, v58, v18, v59, 0LL, 0LL, v60);
            if ( !v79 )
              sub_1B8880C(0LL, NoEffectObject);
            BattleActionData__addAction(v79, NoEffectObject, 0LL);
          }
        }
      }
    }
    v17 = v78;
    v62 = *(_QWORD *)v26;
    v63 = *(unsigned __int16 *)(*(_QWORD *)v26 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v26 + 302LL) )
    {
      v64 = (int *)(*(_QWORD *)(v62 + 176) + 8LL);
      while ( *((System_IDisposable_c **)v64 - 1) != System_IDisposable_TypeInfo )
      {
        --v63;
        v64 += 4;
        if ( !v63 )
          goto LABEL_71;
      }
      v65 = v62 + 16LL * *v64 + 312;
    }
    else
    {
LABEL_71:
      v65 = sub_1BDA590(v26, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(__int64, _QWORD))v65)(v26, *(_QWORD *)(v65 + 8));
    v6 = v81;
    this = v76;
    logic = (int)v76->fields.logic;
    v16 = v77 + 1;
  }
  while ( (int)(v77 + 1) < logic );
LABEL_84:
  if ( !mainAction
    || !v6
    || (v66 = dataVals_k__BackingField->fields.funcIndex,
        v67 = dataVals_k__BackingField->fields.funcEnt,
        v68 = mainAction->fields.actorId,
        targetId_k__BackingField = funcTarget->fields._targetId_k__BackingField,
        v70 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v6, 0LL),
        procArg = (BattleLogicFunction_ProcListInArgs_o *)BattleLogicFunction__functionGainHp(
                                                            v82,
                                                            v68,
                                                            targetId_k__BackingField,
                                                            v67,
                                                            dataVals_k__BackingField,
                                                            v66,
                                                            v70,
                                                            v17,
                                                            overwriteLossHp),
        (this = (BattleLogicFunction_o *)v79) == 0LL) )
  {
LABEL_88:
    sub_1B8880C(this, procArg);
  }
  BattleActionData__addAction(v79, (BattleActionData_o *)procArg, 0LL);
  return v79;
}


BattleActionData_o *__fastcall BattleLogicFunction__functionGainHpPer(
        BattleLogicFunction_o *this,
        int32_t playerId,
        int32_t targetId,
        FunctionEntity_o *funcEnt,
        DataVals_o *baseVals,
        int32_t funcIndex,
        bool isCommandSideEffect,
        const MethodInfo *method)
{
  BattleActionData_o *v15; // x24
  __int64 v16; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v18; // x28
  BattleServantData_o *v19; // x25
  int32_t Value; // w27
  const MethodInfo *v21; // x4
  char v22; // w20
  int v23; // w3
  BattleBuffData_o *buffData; // x29
  BattleBuffData_CheckIndividualitiesData_o *v25; // x20
  struct BattleData_o *v26; // x8
  int32_t ActualRecoveryHealPoint; // w0
  float UpDownGiveHeal; // s0
  int32_t UpDownHeal; // w0
  __int64 v31; // x27
  const MethodInfo *v32; // [xsp+8h] [xbp-78h]
  FunctionEntity_o *v33; // [xsp+10h] [xbp-70h]
  int32_t digit; // [xsp+1Ch] [xbp-64h] BYREF

  if ( (byte_4A5DC84 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&BattleBuffData_CheckIndividualitiesData_TypeInfo);
    byte_4A5DC84 = 1;
  }
  digit = 0;
  v15 = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v15, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_24;
  data = (BattleData_o *)BattleData__getServantData(data, playerId, 0LL);
  if ( !this->fields.data )
    goto LABEL_24;
  v18 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, targetId, 0LL);
  if ( !baseVals )
    goto LABEL_24;
  v19 = (BattleServantData_o *)data;
  baseVals->fields.isShowForcedEffect = 0;
  Value = DataVals__GetValue(baseVals, 0LL);
  data = (BattleData_o *)DataVals__isUnaffected(baseVals, 0LL);
  if ( !v19 )
    goto LABEL_24;
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    data = (BattleData_o *)BattleServantData__getMaxHp(v19, 0LL);
    v22 = 0;
    v23 = (int)data * Value / 1000;
    goto LABEL_19;
  }
  if ( ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v19->klass->vtable._13_get_resultHp.method)(
         v19,
         v19->klass->vtable._14_set_resultHp.methodPtr) <= 0 )
  {
    data = (BattleData_o *)BattleServantData__isShiftableServant(v19, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
      goto LABEL_18;
    v26 = this->fields.data;
    if ( v26 )
    {
      data = (BattleData_o *)v26->fields.battleEvent;
      if ( data )
      {
        data = (BattleData_o *)(*(__int64 (__fastcall **)(BattleData_o *, BattleServantData_o *, _QWORD))&data->klass[1]._2.initializationExceptionGCHandle)(
                                 data,
                                 v19,
                                 *(_QWORD *)&data->klass[1]._2.cctor_finished);
        if ( ((unsigned __int8)data & 1) == 0 )
        {
          data = (BattleData_o *)BattleServantData__isGuts(v19, 0LL);
          v23 = 0;
          v22 = (unsigned __int8)data ^ 1;
          goto LABEL_19;
        }
        goto LABEL_18;
      }
    }
    goto LABEL_24;
  }
  data = (BattleData_o *)BattleServantData__isShiftReady(v19, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
LABEL_18:
    v23 = 0;
    v22 = 0;
    goto LABEL_19;
  }
  v33 = funcEnt;
  buffData = v19->fields.buffData;
  v25 = (BattleBuffData_CheckIndividualitiesData_o *)sub_1B887FC(BattleBuffData_CheckIndividualitiesData_TypeInfo);
  BattleBuffData_CheckIndividualitiesData___ctor(v25, v19, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
  if ( !buffData )
LABEL_24:
    sub_1B8880C(data, v16);
  if ( BattleBuffData__isTurnBuff(buffData, 42, v25, 1, 0LL) )
  {
    data = (BattleData_o *)DataVals__SetInvalidCauseByAnyBuff(baseVals, targetId, 0LL);
    funcEnt = v33;
    goto LABEL_18;
  }
  if ( v18 )
  {
    UpDownGiveHeal = BattleServantData__getUpDownGiveHeal(v18, v19, 0LL);
    Value = BattleUtility__FloorToInt(UpDownGiveHeal * (float)Value, 0LL);
  }
  funcEnt = v33;
  digit = 1;
  UpDownHeal = BattleServantData__getUpDownHeal(v19, &digit, 0LL);
  v31 = UpDownHeal * (__int64)Value / digit;
  data = (BattleData_o *)BattleServantData__getMaxHp(v19, 0LL);
  v22 = 0;
  v23 = (int)v31 * (int)data / 1000;
  baseVals->fields.isShowForcedEffect = 1;
LABEL_19:
  ActualRecoveryHealPoint = BattleLogicFunction__GetActualRecoveryHealPoint(
                              (BattleLogicFunction_o *)data,
                              baseVals,
                              v19,
                              v23,
                              v21);
  BattleLogicFunction__SetGainHpBuff(
    this,
    v15,
    ActualRecoveryHealPoint,
    funcIndex,
    v19,
    funcEnt,
    baseVals,
    isCommandSideEffect,
    v22 & 1,
    v32);
  return v15;
}


BattleActionData_o *__fastcall BattleLogicFunction__functionGainNp(
        BattleLogicFunction_o *this,
        BattleLogicFunction_ProcListInArgs_o *procArg,
        int32_t actorId,
        int32_t targetId,
        DataVals_o *baseVals,
        int32_t value,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleServantData_o *v13; // x24
  BattleActionData_o *v14; // x21
  int32_t funcIndex; // w23
  int32_t uniqueId; // w24
  FunctionEntity_o *funcEnt; // x25
  int32_t v18; // w22
  _BOOL8 IsCommandSideEffect; // x0
  const MethodInfo *v20; // x6
  BattleActionData_BuffData_o *v21; // x20
  int32_t v23; // w21
  int32_t v24; // w23
  bool v25; // w4
  const MethodInfo *v26; // x7

  if ( (byte_4A5DC9C & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    byte_4A5DC9C = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_18;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL);
  if ( !data )
    goto LABEL_18;
  v13 = (BattleServantData_o *)data;
  v14 = 0LL;
  if ( !BattleServantData__checkPlayer((BattleServantData_o *)data, 0LL) )
    return v14;
  v14 = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v14, 0LL);
  if ( !baseVals )
LABEL_18:
    sub_1B8880C(data, procArg);
  data = (BattleData_o *)DataVals__isUnaffected(baseVals, 0LL);
  if ( ((unsigned __int8)data & 1) == 0 )
  {
    data = (BattleData_o *)BattleServantData__getCorrectedValueFuncGainNp(v13, value, 0LL);
    value = (int)data;
  }
  if ( value >= 1 )
  {
    data = (BattleData_o *)BattleServantData__isGainNp(v13, 1, baseVals, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      data = (BattleData_o *)BattleServantData__addNp(v13, value, 0, 0LL);
      if ( procArg )
      {
        funcIndex = baseVals->fields.funcIndex;
        uniqueId = v13->fields.uniqueId;
        funcEnt = baseVals->fields.funcEnt;
        v18 = (int)data;
        IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0LL);
        data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                                 (BattleLogicFunction_o *)IsCommandSideEffect,
                                 funcEnt,
                                 uniqueId,
                                 funcIndex,
                                 IsCommandSideEffect,
                                 0LL,
                                 v20);
        if ( data )
        {
          v21 = (BattleActionData_BuffData_o *)data;
          HIDWORD(data->fields.m_CancellationTokenSource) = 3;
          BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)data, v18, 0LL);
          if ( v14 )
          {
            BattleActionData__setBuffData(v14, v21, baseVals, 0LL);
            return v14;
          }
        }
      }
      goto LABEL_18;
    }
  }
  if ( !procArg )
    goto LABEL_18;
  v23 = baseVals->fields.funcIndex;
  v24 = v13->fields.uniqueId;
  v25 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0LL);
  return BattleLogicFunction__getNoEffectObject(this, v24, v23, baseVals, v25, 0LL, 0LL, v26);
}


BattleActionData_o *__fastcall BattleLogicFunction__functionGainNpFromTargets(
        BattleLogicFunction_o *this,
        BattleLogicFunction_ProcListInArgs_o *procArg,
        BattleActionData_o *mainAction,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v8; // x20
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x24
  BattleActionData_o *v11; // x23
  NpTurnToPointConvert_o *v12; // x26
  NpGaugeAbsorbResult_o *v13; // x25
  const MethodInfo *v14; // x4
  const MethodInfo *v15; // x4
  BattleActionData_o *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x6
  float Point_k__BackingField; // s0
  int32_t v20; // w5
  BattleActionData_o *v21; // x0

  v8 = this;
  if ( (byte_4A5DC9A & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&NpGaugeAbsorbResult_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1B885B0(&NpTurnToPointConvert_TypeInfo);
    byte_4A5DC9A = 1;
  }
  if ( !funcTarget )
    goto LABEL_12;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_12;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  v11 = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v11, 0LL);
  v12 = (NpTurnToPointConvert_o *)sub_1B887FC(NpTurnToPointConvert_TypeInfo);
  NpTurnToPointConvert___ctor(v12, 0LL);
  v13 = (NpGaugeAbsorbResult_o *)sub_1B887FC(NpGaugeAbsorbResult_TypeInfo);
  NpGaugeAbsorbResult___ctor(v13, (BaseNpGaugeConvert_o *)v12, 0LL);
  this = (BattleLogicFunction_o *)BattleLogicFunction__AbsorbNpPoint(v8, mainAction, funcTarget, v13, v14);
  if ( !v11
    || (BattleActionData__addAction(v11, (BattleActionData_o *)this, 0LL),
        v16 = BattleLogicFunction__AbsorbNpTurn(v8, mainAction, funcTarget, v13, v15),
        BattleActionData__addAction(v11, v16, 0LL),
        !mainAction)
    || !v13 )
  {
LABEL_12:
    sub_1B8880C(this, procArg);
  }
  Point_k__BackingField = v13->fields._Point_k__BackingField;
  if ( Point_k__BackingField == INFINITY )
    v20 = 0x80000000;
  else
    v20 = (int)Point_k__BackingField;
  v21 = BattleLogicFunction__functionGainNp(
          v8,
          procArg,
          v17,
          funcTarget->fields._targetId_k__BackingField,
          dataVals_k__BackingField,
          v20,
          v18);
  BattleActionData__addAction(v11, v21, 0LL);
  return v11;
}


BattleActionData_o *__fastcall BattleLogicFunction__functionHastenNpTurn(
        BattleLogicFunction_o *this,
        int32_t targetId,
        FunctionEntity_o *funcEnt,
        DataVals_o *baseVals,
        int32_t funcIndex,
        bool isCommandSideEffect,
        int32_t absorptionCount,
        const MethodInfo *method)
{
  BattleActionData_o *v15; // x21
  BattleData_o *v16; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v18; // x27
  const MethodInfo *v19; // x7
  int32_t Value; // w0
  int32_t v22; // w28
  _BOOL8 isGainNp; // x0
  const MethodInfo *v24; // x6

  if ( (byte_4A5DC88 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    byte_4A5DC88 = 1;
  }
  v15 = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v15, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_21;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL);
  if ( !data )
    goto LABEL_21;
  v18 = (BattleServantData_o *)data;
  if ( HIBYTE(data->fields.commandCodeInfos) )
  {
    if ( !BattleServantData__hasTreasureDvc((BattleServantData_o *)data, 0LL) )
      return BattleLogicFunction__getNoEffectObject(
               this,
               targetId,
               funcIndex,
               baseVals,
               isCommandSideEffect,
               0LL,
               0LL,
               v19);
    data = (BattleData_o *)BattleServantData__isTDSeraled(v18, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
      return BattleLogicFunction__getNoEffectObject(
               this,
               targetId,
               funcIndex,
               baseVals,
               isCommandSideEffect,
               0LL,
               0LL,
               v19);
    if ( !baseVals )
      goto LABEL_21;
    Value = DataVals__GetValue(baseVals, 0LL);
    if ( (absorptionCount & 0x80000000) != 0 )
    {
      v22 = Value;
      isGainNp = BattleServantData__isGainNp(v18, 1, 0LL, 0LL);
      absorptionCount = v22;
      if ( !isGainNp )
      {
LABEL_18:
        data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                                 (BattleLogicFunction_o *)isGainNp,
                                 funcEnt,
                                 v18->fields.uniqueId,
                                 funcIndex,
                                 isCommandSideEffect,
                                 0LL,
                                 v24);
        if ( data )
        {
          v16 = data;
          HIDWORD(data->fields.m_CancellationTokenSource) = 5;
          if ( v15 )
          {
            BattleActionData__setBuffData(v15, (BattleActionData_BuffData_o *)data, baseVals, 0LL);
            return v15;
          }
        }
LABEL_21:
        sub_1B8880C(data, v16);
      }
    }
    else if ( !absorptionCount || !BattleServantData__isGainNp(v18, 1, baseVals, 0LL) )
    {
      return BattleLogicFunction__getNoEffectObject(
               this,
               targetId,
               funcIndex,
               baseVals,
               isCommandSideEffect,
               0LL,
               0LL,
               v19);
    }
    isGainNp = BattleServantData__updownNextTDTurn(v18, -absorptionCount, 0LL);
    goto LABEL_18;
  }
  return 0LL;
}


BattleActionData_o *__fastcall BattleLogicFunction__functionInstantDeath(
        BattleLogicFunction_o *this,
        int32_t playerId,
        int32_t targetId,
        FunctionEntity_o *funcEnt,
        DataVals_o *baseVals,
        int32_t funcIndex,
        bool isCommandSideEffect,
        bool isNoAccumulation,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit,
        const MethodInfo *method)
{
  System_String_o *v16; // x0
  BattleActionData_o *v17; // x25
  BattleData_o *v18; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v20; // x27
  BattleServantData_o *v21; // x28
  unsigned int v22; // w0
  int32_t v23; // w20
  bool IsOpponentPTUniqueID; // w0
  System_Int32_array *v25; // x20
  int32_t v26; // w0
  const MethodInfo *v27; // x6
  struct BattleData_o *v28; // x8
  int32_t v29; // w2
  int32_t uniqueId; // [xsp+Ch] [xbp-64h] BYREF

  uniqueId = targetId;
  if ( (byte_4A5DC87 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&StringLiteral_19678/*"functionInstantDeath>>:"*/);
    byte_4A5DC87 = 1;
  }
  v16 = System_Int32__ToString((int32_t)&uniqueId, 0LL);
  System_String__Concat_61707032((System_String_o *)StringLiteral_19678/*"functionInstantDeath>>:"*/, v16, 0LL);
  v17 = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v17, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)BattleData__getServantData(data, uniqueId, 0LL);
  if ( !this->fields.data )
    goto LABEL_16;
  v20 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, playerId, 0LL);
  if ( !v20 )
    goto LABEL_16;
  v21 = (BattleServantData_o *)data;
  v22 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v20->klass->vtable._9_get_hp.method)(
          v20,
          v20->klass->vtable._10_set_hp.methodPtr);
  ((void (__fastcall *)(BattleServantData_o *, _QWORD, Il2CppMethodPointer))v20->klass->vtable._12_set_reducedhp.method)(
    v20,
    v22,
    v20->klass->vtable._13_get_resultHp.methodPtr);
  data = (BattleData_o *)this->fields.logic;
  if ( !data )
    goto LABEL_16;
  data = (BattleData_o *)BattleLogic__getWave((BattleLogic_o *)data, 0LL);
  if ( !this->fields.data )
    goto LABEL_16;
  v23 = (int)data;
  IsOpponentPTUniqueID = BattleData__IsOpponentPTUniqueID(this->fields.data, uniqueId, playerId, 0LL);
  BattleServantData__setActionHistory(v20, playerId, 4, v23, IsOpponentPTUniqueID, 0LL);
  if ( !funcUnit )
    goto LABEL_16;
  v25 = BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndividuality(funcUnit, 0LL);
  v26 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v20->klass->vtable._13_get_resultHp.method)(
          v20,
          v20->klass->vtable._14_set_resultHp.methodPtr);
  BattleServantData__ResultDamage(v20, v26, v21, 0LL, v25, 0, 0LL);
  v28 = this->fields.data;
  if ( !v28 )
    goto LABEL_16;
  v29 = v20->fields.uniqueId;
  v20->fields.deadTurn = v28->fields.typeTurn;
  data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                           (BattleLogicFunction_o *)data,
                           funcEnt,
                           v29,
                           funcIndex,
                           isCommandSideEffect,
                           0LL,
                           v27);
  if ( !data )
    goto LABEL_16;
  HIDWORD(data->fields.m_CancellationTokenSource) = 1;
  v18 = data;
  if ( uniqueId == playerId || isNoAccumulation )
    BYTE1(data->fields.battle_info) = 1;
  if ( !v17 )
LABEL_16:
    sub_1B8880C(data, v18);
  BattleActionData__setBuffData(v17, (BattleActionData_BuffData_o *)data, baseVals, 0LL);
  return v17;
}


BattleActionData_o *__fastcall BattleLogicFunction__functionLossNp(
        BattleLogicFunction_o *this,
        BattleLogicFunction_ProcListInArgs_o *procArg,
        int32_t actorId,
        int32_t targetId,
        DataVals_o *baseVals,
        int32_t *diffNp,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleServantData_o *v13; // x22
  BattleActionData_o *v14; // x24
  int32_t np; // w24
  int32_t Value; // w0
  int32_t v17; // w0
  int32_t v18; // w24
  int32_t v19; // w23
  BattleDataDefine_c *v20; // x0
  float PERCENTAGE_DENOMINATOR; // s0
  int v22; // w8
  int v23; // w24
  int32_t funcIndex; // w21
  int32_t uniqueId; // w22
  FunctionEntity_o *funcEnt; // x25
  _BOOL8 IsCommandSideEffect; // x0
  const MethodInfo *v28; // x6
  BattleActionData_BuffData_o *v29; // x20

  if ( (byte_4A5DC9B & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&BattleDataDefine_TypeInfo);
    byte_4A5DC9B = 1;
  }
  *diffNp = 0;
  data = this->fields.data;
  if ( !data )
    goto LABEL_20;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL);
  if ( !data )
    goto LABEL_20;
  v13 = (BattleServantData_o *)data;
  v14 = 0LL;
  if ( BattleServantData__checkPlayer((BattleServantData_o *)data, 0LL) )
  {
    data = (BattleData_o *)BattleServantData__isLogicResultAlive(v13, 0LL);
    if ( ((unsigned __int8)data & 1) != 0
      || (data = (BattleData_o *)BattleServantData__isGuts(v13, 0LL), v14 = 0LL, ((unsigned __int8)data & 1) != 0) )
    {
      if ( baseVals )
      {
        np = v13->fields.np;
        Value = DataVals__GetValue(baseVals, 0LL);
        v17 = BattleServantData__addNp(v13, -Value, 0, 0LL);
        v18 = np - v17;
        *diffNp = v18;
        v19 = v17;
        v20 = BattleDataDefine_TypeInfo;
        if ( !BattleDataDefine_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BattleDataDefine_TypeInfo);
          v20 = BattleDataDefine_TypeInfo;
        }
        PERCENTAGE_DENOMINATOR = v20->static_fields->PERCENTAGE_DENOMINATOR;
        v22 = (int)PERCENTAGE_DENOMINATOR;
        if ( PERCENTAGE_DENOMINATOR == INFINITY )
          v22 = 0x80000000;
        v23 = v18 % v22;
        if ( v23 >= 1 )
        {
          BattleServantData__addNp(v13, v23, 0, 0LL);
          *diffNp -= v23;
        }
        v14 = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo);
        BattleActionData___ctor(v14, 0LL);
        if ( procArg )
        {
          funcIndex = baseVals->fields.funcIndex;
          uniqueId = v13->fields.uniqueId;
          funcEnt = baseVals->fields.funcEnt;
          IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(procArg, 0LL);
          data = (BattleData_o *)BattleLogicFunction__getFunctionObject(
                                   (BattleLogicFunction_o *)IsCommandSideEffect,
                                   funcEnt,
                                   uniqueId,
                                   funcIndex,
                                   IsCommandSideEffect,
                                   0LL,
                                   v28);
          if ( data )
          {
            v29 = (BattleActionData_BuffData_o *)data;
            HIDWORD(data->fields.m_CancellationTokenSource) = 3;
            BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)data, v19, 0LL);
            if ( v14 )
            {
              BattleActionData__setBuffData(v14, v29, baseVals, 0LL);
              return v14;
            }
          }
        }
      }
LABEL_20:
      sub_1B8880C(data, procArg);
    }
  }
  return v14;
}


void __fastcall BattleLogicFunction__functionMovePosition(
        BattleLogicFunction_o *this,
        BattleActionData_o *actionData,
        BattleServantData_o *targetData,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x0
  DataManager_o *MasterData_object; // x0
  SkillLvMaster_o *v10; // x22
  struct BattleSkillInfoData_o *skillInfo; // x8
  SkillLvEntity_o *v12; // x22
  int32_t MovePositionUp; // w23
  int32_t MovePositionDown; // w0
  int v15; // w24
  int v16; // w25
  DataManager_c *klass; // x8
  const char *namespaze; // x9
  int i; // w10
  int v20; // w11
  int v21; // w10
  BattleServantData_o *v22; // x23
  struct BattleData_o *data; // x8
  __int64 *v24; // x8
  __int64 v25; // x21
  __int64 v26; // x22
  int32_t v27; // w2
  int32_t v28; // w3

  if ( (byte_4A5DCA1 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&StringLiteral_6404/*"FOCUS_UP_EX"*/);
    sub_1B885B0(&StringLiteral_6402/*"FOCUS_UNDER_EX"*/);
    sub_1B885B0(&StringLiteral_6400/*"FOCUS_CENTER_EX"*/);
    sub_1B885B0(&StringLiteral_6401/*"FOCUS_UNDER"*/);
    sub_1B885B0(&StringLiteral_6399/*"FOCUS_CENTER"*/);
    sub_1B885B0(&StringLiteral_6403/*"FOCUS_UP"*/);
    byte_4A5DCA1 = 1;
  }
  v7 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1BDA48C(v7);
  v8 = *(_QWORD *)(*(_QWORD *)(v7 + 192) + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BDA48C(v8);
  MasterData_object = **(DataManager_o ***)(v8 + 184);
  if ( !MasterData_object )
    goto LABEL_23;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !actionData )
    goto LABEL_23;
  v10 = (SkillLvMaster_o *)MasterData_object;
  MasterData_object = (DataManager_o *)actionData->fields.skillInfo;
  if ( !MasterData_object )
    goto LABEL_23;
  MasterData_object = (DataManager_o *)((__int64 (__fastcall *)(DataManager_o *, void *))MasterData_object->klass[1]._1.namespaze)(
                                         MasterData_object,
                                         MasterData_object->klass[1]._1.byval_arg.data);
  skillInfo = actionData->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_23;
  if ( !v10 )
    goto LABEL_23;
  MasterData_object = (DataManager_o *)SkillLvMaster__GetEntity(
                                         v10,
                                         (int32_t)MasterData_object,
                                         skillInfo->fields.skilllv,
                                         0LL);
  if ( !MasterData_object )
    goto LABEL_23;
  v12 = (SkillLvEntity_o *)MasterData_object;
  MovePositionUp = SkillLvEntity__getMovePositionUp((SkillLvEntity_o *)MasterData_object, 0LL);
  MovePositionDown = SkillLvEntity__getMovePositionDown(v12, 0LL);
  if ( (MovePositionUp & MovePositionDown) != -1 )
  {
    v15 = MovePositionDown;
    MasterData_object = (DataManager_o *)this->fields.data;
    if ( !MasterData_object )
      goto LABEL_23;
    MasterData_object = (DataManager_o *)BattleData__getTargetEnemyId((BattleData_o *)MasterData_object, 0, 0LL);
    if ( !this->fields.data )
      goto LABEL_23;
    v16 = (int)MasterData_object;
    BattleData__getServantData(this->fields.data, (int32_t)MasterData_object, 0LL);
    MasterData_object = (DataManager_o *)this->fields.data;
    if ( !MasterData_object )
      goto LABEL_23;
    klass = MasterData_object[2].klass;
    if ( !klass )
      goto LABEL_23;
    namespaze = klass->_1.namespaze;
    for ( i = 0; ; ++i )
    {
      if ( i >= (int)namespaze )
        return;
      if ( i >= (unsigned int)namespaze )
        goto LABEL_50;
      if ( v16 == *((_DWORD *)&klass->_1.byval_arg.data + i) )
        break;
    }
    v20 = MovePositionUp > 0 ? -MovePositionUp : v15;
    v21 = v20 + i;
    if ( v21 >= 0 && v21 < (int)namespaze )
    {
      if ( v21 >= (unsigned int)namespaze )
LABEL_50:
        sub_1B88814(MasterData_object, actionData);
      MasterData_object = (DataManager_o *)BattleData__getServantData(
                                             (BattleData_o *)MasterData_object,
                                             *((_DWORD *)&klass->_1.byval_arg.data + (unsigned int)v21),
                                             0LL);
      if ( !MasterData_object )
        goto LABEL_23;
      v22 = (BattleServantData_o *)MasterData_object;
      MasterData_object = (DataManager_o *)BattleServantData__isAlive((BattleServantData_o *)MasterData_object, 0, 0LL);
      if ( ((unsigned __int8)MasterData_object & 1) != 0 )
      {
        data = this->fields.data;
        if ( !data )
          goto LABEL_23;
        data->fields.globaltargetId = v22->fields.uniqueId;
        if ( BattleServantData__isMultiTargetUp(v22, 0LL) )
        {
          if ( SkillLvEntity__IsAress(v12, 0LL) )
            v24 = &StringLiteral_6404/*"FOCUS_UP_EX"*/;
          else
            v24 = &StringLiteral_6403/*"FOCUS_UP"*/;
        }
        else if ( BattleServantData__isMultiTargetCore(v22, 0LL) )
        {
          if ( SkillLvEntity__IsAress(v12, 0LL) )
            v24 = &StringLiteral_6400/*"FOCUS_CENTER_EX"*/;
          else
            v24 = &StringLiteral_6399/*"FOCUS_CENTER"*/;
        }
        else
        {
          v25 = 0LL;
          if ( !BattleServantData__isMultiTargetUnder(v22, 0LL) )
          {
LABEL_47:
            v26 = sub_1B887FC(BattleActionData_TypeInfo);
            BattleActionData___ctor((BattleActionData_o *)v26, 0LL);
            if ( targetData && v26 )
            {
              *(_DWORD *)(v26 + 32) = targetData->fields.uniqueId;
              *(_DWORD *)(v26 + 36) = actionData->fields.targetId;
              BattleActionData__setStateField((BattleActionData_o *)v26, 0LL);
              *(_QWORD *)(v26 + 64) = v25;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v26 + 64), v25, v27, v28);
              BattleActionData__AddAfterActionData(actionData, (BattleActionData_o *)v26, 0, 0LL);
              return;
            }
LABEL_23:
            sub_1B8880C(MasterData_object, actionData);
          }
          if ( SkillLvEntity__IsAress(v12, 0LL) )
            v24 = &StringLiteral_6402/*"FOCUS_UNDER_EX"*/;
          else
            v24 = &StringLiteral_6401/*"FOCUS_UNDER"*/;
        }
        v25 = *v24;
        goto LABEL_47;
      }
    }
  }
}


void __fastcall BattleLogicFunction__functionMoveState(
        BattleLogicFunction_o *this,
        BattleLogicFunction_ProcListInArgs_o *procArg,
        BattleActionData_o *mainAction,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  __int64 v7; // x20
  RemovedBuffInfoGroup_o *StealBuffInfoGroup; // x0
  BattleActionData_o *NoEffectObject; // x1
  const MethodInfo *v10; // x4
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  DataVals_o *dataVals_k__BackingField; // x19
  int32_t targetId_k__BackingField; // w23
  RemovedBuffInfoGroup_o *v14; // x24
  BattleServantData_o *ServantData; // x26
  const MethodInfo *v16; // x4
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v17; // x25
  System_Func_object__bool__o *v18; // x27
  System_Collections_Generic_IEnumerable_T__o *v19; // x25
  System_Collections_Generic_HashSet_T__o *v20; // x27
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_Generic_IEnumerable_BattleBuffData_BuffData__o *v23; // x24
  System_Func_object__bool__o *v24; // x25
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  RemovedBuffInfoGroup_o *v26; // x25
  System_Collections_Generic_List_int__o *v27; // x28
  int klass; // w8
  BattleLogicFunction_o *v29; // x21
  DataMasterBase_TMaster__TEntity__PKType__o *v30; // x29
  __int64 v31; // x22
  __int64 v32; // x27
  BattleBuffData_ChangeBgmData_o *v33; // x24
  BattleBuffData_BuffData_o *v34; // x20
  const MethodInfo *v35; // x2
  struct BattleBuffData_ChangeBgmData_o *changeBgmData; // x8
  const MethodInfo *v37; // x3
  int32_t DispTurn; // w0
  bool isProgressSelfTurn; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v41; // x9
  __int64 size; // x10
  BattleActionData_BuffData_o *v43; // x27
  struct FunctionEntity_o *funcEnt; // x21
  bool v45; // w0
  System_Int32_array *v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  int v49; // w22
  int32_t funcIndex; // w20
  bool IsCommandSideEffect; // w0
  const MethodInfo *v52; // x7
  struct BattleData_o *data; // x8
  BattleFieldEnvironmentData_o *FieldEnvData_k__BackingField; // x19
  BattleLogicFunction___c_c *v55; // x0
  System_Func_object__bool__o *_9__108_2; // x20
  Il2CppObject *v57; // x21
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v59; // w2
  int32_t v60; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x0
  BattleActionEffect_ChangeBgmBuff_o *v62; // x19
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v63; // [xsp+0h] [xbp-90h]
  BattleLogicFunction_ProcListInArgs_o *v64; // [xsp+8h] [xbp-88h]
  Il2CppObject *entity; // [xsp+28h] [xbp-68h] BYREF

  if ( (byte_4A5DCA5 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_BuffData_TypeInfo);
    sub_1B885B0(&BattleActionEffect_ChangeBgmBuff_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1B885B0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
    sub_1B885B0(&System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___76017376);
    sub_1B885B0(&System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&Method_BattleLogicFunction___c__functionMoveState_b__108_2__);
    sub_1B885B0(&Method_BattleLogicFunction___c__DisplayClass108_0__functionMoveState_b__0__);
    sub_1B885B0(&Method_BattleLogicFunction___c__DisplayClass108_0__functionMoveState_b__1__);
    sub_1B885B0(&BattleLogicFunction___c__DisplayClass108_0_TypeInfo);
    sub_1B885B0(&BattleLogicFunction___c_TypeInfo);
    byte_4A5DCA5 = 1;
  }
  entity = 0LL;
  v7 = sub_1B887FC(BattleLogicFunction___c__DisplayClass108_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass108_0___ctor((BattleLogicFunction___c__DisplayClass108_0_o *)v7, 0LL);
  if ( !funcTarget )
    goto LABEL_64;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_64;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  targetId_k__BackingField = funcTarget->fields._targetId_k__BackingField;
  StealBuffInfoGroup = BattleLogicFunction__GetStealBuffInfoGroup(
                         this,
                         procArg,
                         mainAction,
                         dataVals_k__BackingField,
                         v10);
  if ( !this->fields.data )
    goto LABEL_64;
  v14 = StealBuffInfoGroup;
  ServantData = BattleData__getServantData(this->fields.data, targetId_k__BackingField, 0LL);
  BattleLogicFunction__ResetFamilyLinkageIdToStolenFamilyBuffs(
    (BattleLogicFunction_o *)ServantData,
    procArg,
    ServantData,
    v14,
    v16);
  if ( !v7 )
    goto LABEL_64;
  v63 = funcTarget;
  v64 = procArg;
  *(_DWORD *)(v7 + 16) = 0x1000000;
  if ( !v14 )
    goto LABEL_64;
  v17 = RemovedBuffInfoGroup__RemovedLinkageBuffEnumerable(v14, 0LL);
  v18 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v7,
    Method_BattleLogicFunction___c__DisplayClass108_0__functionMoveState_b__0__,
    0LL);
  v19 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Where_object_(
                                                         (System_Collections_Generic_IEnumerable_TSource__o *)v17,
                                                         (System_Func_TSource__bool__o *)v18,
                                                         (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  v20 = (System_Collections_Generic_HashSet_T__o *)sub_1B887FC(System_Collections_Generic_HashSet_BattleBuffData_BuffData__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor_54235764(
    v20,
    v19,
    (const MethodInfo_33B9274 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData___ctor___76017376);
  *(_QWORD *)(v7 + 24) = v20;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)v20, v21, v22);
  v23 = RemovedBuffInfoGroup__RemovedAllBuffEnumerable(v14, 0LL);
  v24 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v24,
    (Il2CppObject *)v7,
    Method_BattleLogicFunction___c__DisplayClass108_0__functionMoveState_b__1__,
    0LL);
  v25 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v23,
          (System_Func_TSource__bool__o *)v24,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)System_Linq_Enumerable__ToArray_object_(
                                                   v25,
                                                   (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  if ( !StealBuffInfoGroup )
    goto LABEL_64;
  v26 = StealBuffInfoGroup;
  if ( !StealBuffInfoGroup[1].klass )
  {
    if ( dataVals_k__BackingField )
    {
      StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)v64;
      if ( v64 )
      {
        funcIndex = dataVals_k__BackingField->fields.funcIndex;
        IsCommandSideEffect = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v64, 0LL);
        NoEffectObject = BattleLogicFunction__getNoEffectObject(
                           this,
                           targetId_k__BackingField,
                           funcIndex,
                           dataVals_k__BackingField,
                           IsCommandSideEffect,
                           0LL,
                           0LL,
                           v52);
        StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)mainAction;
        if ( mainAction )
        {
          BattleActionData__addAction(mainAction, NoEffectObject, 0LL);
          return;
        }
      }
    }
    goto LABEL_64;
  }
  v27 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v27,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !StealBuffInfoGroup )
    goto LABEL_64;
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)DataManager__GetMasterData_object_(
                                                   (DataManager_o *)StealBuffInfoGroup,
                                                   (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_BuffMaster___);
  klass = (int)v26[1].klass;
  v29 = this;
  if ( klass < 1 )
  {
    v32 = 0LL;
LABEL_50:
    v49 = 1;
    goto LABEL_51;
  }
  v30 = (DataMasterBase_TMaster__TEntity__PKType__o *)StealBuffInfoGroup;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  do
  {
    if ( (unsigned int)v31 >= klass )
      sub_1B88814(StealBuffInfoGroup, NoEffectObject);
    v34 = (BattleBuffData_BuffData_o *)*((_QWORD *)&v26[1].monitor + v31);
    if ( !v34 || !v30 )
      goto LABEL_64;
    StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)DataMasterBase_object__object__int___TryGetEntity(
                                                     v30,
                                                     &entity,
                                                     v34->fields.buffId,
                                                     (const MethodInfo_311D988 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)StealBuffInfoGroup & 1) != 0 )
    {
      StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)BattleLogicFunction__IsAddStateFieldFlag(v29, v34, v35);
      if ( !ServantData )
        goto LABEL_64;
      BattleServantData__addBuff(ServantData, v34, (unsigned __int8)StealBuffInfoGroup & 1, 0, 1, 0LL);
      changeBgmData = v34->fields.changeBgmData;
      if ( changeBgmData )
        v33 = v34->fields.changeBgmData;
      if ( changeBgmData )
      {
        if ( !v33 )
          goto LABEL_64;
        BattleBuffData_ChangeBgmData__UpdateUniqueVal(v33, v34->fields.addOrder, ServantData->fields.uniqueId, 0LL);
      }
      StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)entity;
      if ( !entity )
        goto LABEL_64;
      if ( !BuffEntity__IsDisableMoveStateTurnChange((BuffEntity_o *)entity, 0LL) )
      {
        if ( v34->fields.turn <= 0 )
        {
          isProgressSelfTurn = v34->fields.isProgressSelfTurn;
        }
        else
        {
          DispTurn = BattleBuffData_BuffData__get_DispTurn(v34, 0LL);
          isProgressSelfTurn = v34->fields.isProgressSelfTurn;
          v34->fields.turn = 2 * DispTurn - isProgressSelfTurn;
        }
        v34->fields.isProgressEndEnemyTurn = isProgressSelfTurn ^ ServantData->fields.isEnemy ^ 1;
      }
      BattleLogicFunction__AfterAddedBuffProcess(v29, ServantData, (BuffEntity_o *)entity, v37);
      if ( v32 )
      {
        if ( !v27 )
          goto LABEL_64;
        NoEffectObject = (BattleActionData_o *)(unsigned int)v34->fields.addOrder;
        items = v27->fields._items;
        v41 = Method_System_Collections_Generic_List_int__Add__;
        ++v27->fields._version;
        if ( !items )
          goto LABEL_64;
        size = v27->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v27,
            (int32_t)NoEffectObject,
            *(const MethodInfo_34E0810 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
        }
        else
        {
          v27->fields._size = size + 1;
          items->m_Items[size + 1] = (int)NoEffectObject;
        }
      }
      else
      {
        v43 = (BattleActionData_BuffData_o *)sub_1B887FC(BattleActionData_BuffData_TypeInfo);
        BattleActionData_BuffData___ctor(v43, 0LL);
        if ( !v43 )
          goto LABEL_64;
        v43->fields.targetId = targetId_k__BackingField;
        if ( !dataVals_k__BackingField )
          goto LABEL_64;
        StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)v64;
        v43->fields.functionIndex = dataVals_k__BackingField->fields.funcIndex;
        if ( !v64 )
          goto LABEL_64;
        funcEnt = dataVals_k__BackingField->fields.funcEnt;
        v45 = BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(v64, 0LL);
        v32 = ((__int64 (__fastcall *)(BattleLogicFunctionProcess_FunctionTargetCheck_o *, BattleActionData_BuffData_o *, BattleBuffData_BuffData_o *, struct FunctionEntity_o *, bool, Il2CppMethodPointer))v63->klass->vtable._11_MakeAddActionBuffData.method)(
                v63,
                v43,
                v34,
                funcEnt,
                v45,
                v63->klass->vtable._12_GetConvertBuffEntity.methodPtr);
        StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)mainAction;
        if ( !mainAction )
          goto LABEL_64;
        BattleActionData__setBuffData(mainAction, (BattleActionData_BuffData_o *)v32, dataVals_k__BackingField, 0LL);
        v29 = this;
        StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)this->fields.data;
        if ( !StealBuffInfoGroup )
          goto LABEL_64;
        BattleData__AddFreshBuffList((BattleData_o *)StealBuffInfoGroup, (BattleActionData_BuffData_o *)v32, 0LL);
      }
    }
    klass = (int)v26[1].klass;
    ++v31;
  }
  while ( (int)v31 < klass );
  if ( !v32 )
    goto LABEL_50;
  if ( !v27 )
    goto LABEL_64;
  v46 = System_Collections_Generic_List_int___ToArray(
          v27,
          (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)(v32 + 152) = v46;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v32 + 152), (int32_t)v46, v47, v48);
  v49 = 0;
LABEL_51:
  data = v29->fields.data;
  if ( !data )
    goto LABEL_64;
  FieldEnvData_k__BackingField = data->fields._FieldEnvData_k__BackingField;
  v55 = BattleLogicFunction___c_TypeInfo;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v55 = BattleLogicFunction___c_TypeInfo;
  }
  _9__108_2 = (System_Func_object__bool__o *)v55->static_fields->__9__108_2;
  if ( !_9__108_2 )
  {
    if ( !v55->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v55);
      v55 = BattleLogicFunction___c_TypeInfo;
    }
    v57 = (Il2CppObject *)v55->static_fields->__9;
    _9__108_2 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleBuffData_BuffData__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__108_2, v57, Method_BattleLogicFunction___c__functionMoveState_b__108_2__, 0LL);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__108_2 = (struct System_Func_BattleBuffData_BuffData__bool__o *)_9__108_2;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__108_2, (int32_t)_9__108_2, v59, v60);
  }
  v61 = System_Linq_Enumerable__Where_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v26,
          (System_Func_TSource__bool__o *)_9__108_2,
          (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_BattleBuffData_BuffData___);
  StealBuffInfoGroup = (RemovedBuffInfoGroup_o *)System_Linq_Enumerable__ToArray_object_(
                                                   v61,
                                                   (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_BattleBuffData_BuffData___);
  if ( !FieldEnvData_k__BackingField )
    goto LABEL_64;
  if ( BattleFieldEnvironmentData__AddBgmFromChangeBgmBuffArray(
         FieldEnvData_k__BackingField,
         (BattleBuffData_BuffData_array *)StealBuffInfoGroup,
         0LL)
    && v49 != 1 )
  {
    v62 = (BattleActionEffect_ChangeBgmBuff_o *)sub_1B887FC(BattleActionEffect_ChangeBgmBuff_TypeInfo);
    BattleActionEffect_ChangeBgmBuff___ctor(v62, 0LL);
    if ( !v49 )
    {
      BattleActionData_BuffData__SetActionEffectProc(
        (BattleActionData_BuffData_o *)v32,
        (BattleActionEffect_Base_o *)v62,
        0LL);
      return;
    }
LABEL_64:
    sub_1B8880C(StealBuffInfoGroup, NoEffectObject);
  }
}


BattleActionData_o *__fastcall BattleLogicFunction__functionNPDamage(
        BattleLogicFunction_o *this,
        int32_t playerId,
        int32_t targetId,
        DataVals_o *baseVals,
        int32_t funcIndex,
        int32_t type,
        BattleActionData_o *action,
        const MethodInfo *method)
{
  BattleActionData_o *v14; // x21
  __int64 v15; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v17; // x22
  BattleServantData_o *ServantData; // x20
  System_Collections_Generic_List_int__o *v19; // x27
  struct System_Int32_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  System_Int32_array *TargetRarityList; // x29
  char v24; // w28
  char v25; // w10
  bool v26; // w8
  System_Int32_array *buffIndv; // x22
  System_Int32_array *v28; // x20
  int32_t v29; // w1
  struct System_Int32_array *v30; // x8
  _QWORD *v31; // x9
  __int64 v32; // x10
  struct System_Int32_array *v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  struct System_Int32_array *v36; // x8
  _QWORD *v37; // x9
  __int64 v38; // x10
  struct System_Int32_array *v39; // x8
  _QWORD *v40; // x9
  __int64 v41; // x10
  struct System_Int32_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  struct System_Int32_array *v45; // x8
  _QWORD *v46; // x9
  __int64 v47; // x10
  struct System_Int32_array *v48; // x8
  _QWORD *v49; // x9
  __int64 v50; // x10
  int32_t BattlePointPhase; // w20
  struct System_Int32_array *v52; // x8
  _QWORD *v53; // x9
  __int64 v54; // x10
  struct System_Int32_array *v55; // x8
  _QWORD *v56; // x9
  __int64 v57; // x10
  bool v58; // w0
  struct System_Int32_array *v59; // x8
  _QWORD *v60; // x9
  __int64 v61; // x10
  struct System_Int32_array *v62; // x8
  _QWORD *v63; // x9
  __int64 v64; // x10
  System_Array_o *v65; // x20
  bool v66; // w20
  bool IsOverChargeState; // w0
  int32_t NPFixedDamageValue; // w25
  BattleLogic_DamageProcessArgs_o *damageProcessArgs; // x26
  BattleLogic_o *logic; // x24
  System_Int32_array *v71; // x27
  bool IsIncludeIgnoreIndividuality; // w25
  BattleActionData_DamageData_o *v73; // x20
  char v74; // w21
  bool v76; // [xsp+30h] [xbp-A0h]
  bool isRarityAtk; // [xsp+34h] [xbp-9Ch]
  BattleServantData_o *target; // [xsp+38h] [xbp-98h]
  BattleActionData_o *v79; // [xsp+40h] [xbp-90h]
  int32_t funcIndexa; // [xsp+4Ch] [xbp-84h]
  BattleActionData_o *actiona; // [xsp+50h] [xbp-80h]
  BattleServantData_o *v82; // [xsp+58h] [xbp-78h]
  unsigned int v83; // [xsp+60h] [xbp-70h]
  System_RuntimeFieldHandle_o v85; // 0:w1.4

  if ( (byte_4A5DC81 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&BattleLogic_DamageProcessArgs_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&DataVals_OverChargeState___TypeInfo);
    sub_1B885B0(&Field__PrivateImplementationDetails__44BE0EBF7C907BA44AD83314C6AD0AA399AD5B73911C129D2CD6A85D4A056C90);
    byte_4A5DC81 = 1;
  }
  v14 = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v14, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_87;
  data = (BattleData_o *)BattleData__getServantData(data, playerId, 0LL);
  if ( !this->fields.data )
    goto LABEL_87;
  v17 = (BattleServantData_o *)data;
  ServantData = BattleData__getServantData(this->fields.data, targetId, 0LL);
  v19 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v19,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !baseVals
    || (data = (BattleData_o *)DataVals__GetParam(baseVals, 3, 0, 0LL), !v19)
    || (items = v19->fields._items,
        v21 = Method_System_Collections_Generic_List_int__Add__,
        ++v19->fields._version,
        !items) )
  {
LABEL_87:
    sub_1B8880C(data, v15);
  }
  size = v19->fields._size;
  actiona = action;
  funcIndexa = funcIndex;
  if ( (unsigned int)size >= items->max_length )
  {
    System_Collections_Generic_List_int___AddWithResize(
      v19,
      (int32_t)data,
      *(const MethodInfo_34E0810 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
  }
  else
  {
    v19->fields._size = size + 1;
    items->m_Items[size + 1] = (int)data;
  }
  TargetRarityList = 0LL;
  v24 = 0;
  target = ServantData;
  v79 = v14;
  v82 = v17;
  v83 = type - 3;
  v25 = 0;
  v26 = 0;
  buffIndv = 0LL;
  v28 = 0LL;
  switch ( type )
  {
    case 3:
    case 4:
    case 7:
    case 9:
    case 10:
      v29 = 7;
      goto LABEL_14;
    case 5:
    case 6:
      v29 = 6;
LABEL_14:
      data = (BattleData_o *)DataVals__GetParam(baseVals, v29, 0, 0LL);
      v30 = v19->fields._items;
      v31 = Method_System_Collections_Generic_List_int__Add__;
      ++v19->fields._version;
      if ( !v30 )
        goto LABEL_87;
      v32 = v19->fields._size;
      if ( (unsigned int)v32 >= v30->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v19,
          (int32_t)data,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
      }
      else
      {
        v19->fields._size = v32 + 1;
        v30->m_Items[v32 + 1] = (int)data;
      }
      TargetRarityList = 0LL;
      v24 = 0;
      v25 = 0;
      v26 = 0;
      buffIndv = 0LL;
      v28 = 0LL;
      switch ( type )
      {
        case 3:
        case 4:
          v28 = (System_Int32_array *)sub_1B88658(int___TypeInfo, 1LL);
          data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0LL);
          if ( !v28 )
            goto LABEL_87;
          if ( !v28->max_length )
            goto LABEL_88;
          v24 = 0;
          v25 = 0;
          TargetRarityList = 0LL;
          v26 = 0;
          buffIndv = 0LL;
          v28->m_Items[1] = (int)data;
          break;
        case 5:
        case 6:
        case 8:
          goto LABEL_79;
        case 7:
          buffIndv = (System_Int32_array *)sub_1B88658(int___TypeInfo, 1LL);
          data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0LL);
          if ( !buffIndv )
            goto LABEL_87;
          if ( !buffIndv->max_length )
LABEL_88:
            sub_1B88814(data, v15);
          v24 = 0;
          v25 = 0;
          TargetRarityList = 0LL;
          v26 = 0;
          v28 = 0LL;
          buffIndv->m_Items[1] = (int)data;
          break;
        case 9:
          TargetRarityList = DataVals__GetTargetRarityList(baseVals, 0LL);
          v24 = 0;
          v26 = 0;
          buffIndv = 0LL;
          v28 = 0LL;
          v25 = 1;
          goto LABEL_79;
        case 10:
          v28 = DataVals__GetAndCheckIndividuality(baseVals, 0LL);
          v24 = 0;
          v25 = 0;
          TargetRarityList = 0LL;
          v26 = 0;
          buffIndv = 0LL;
          goto LABEL_79;
        default:
          goto LABEL_65;
      }
      goto LABEL_79;
    case 8:
      goto LABEL_79;
    case 11:
      v19 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
      System_Collections_Generic_List_int____ctor(
        v19,
        (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
      data = (BattleData_o *)DataVals__GetParam(baseVals, 3, 0, 0LL);
      if ( !v19 )
        goto LABEL_87;
      v33 = v19->fields._items;
      v34 = Method_System_Collections_Generic_List_int__Add__;
      ++v19->fields._version;
      if ( !v33 )
        goto LABEL_87;
      v35 = v19->fields._size;
      if ( (unsigned int)v35 >= v33->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v19,
          (int32_t)data,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
      }
      else
      {
        v19->fields._size = v35 + 1;
        v33->m_Items[v35 + 1] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 7, 0, 0LL);
      v42 = v19->fields._items;
      v43 = Method_System_Collections_Generic_List_int__Add__;
      ++v19->fields._version;
      if ( !v42 )
        goto LABEL_87;
      v44 = v19->fields._size;
      if ( (unsigned int)v44 >= v42->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v19,
          (int32_t)data,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
      }
      else
      {
        v19->fields._size = v44 + 1;
        v42->m_Items[v44 + 1] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 59, 0, 0LL);
      v48 = v19->fields._items;
      v49 = Method_System_Collections_Generic_List_int__Add__;
      ++v19->fields._version;
      if ( !v48 )
        goto LABEL_87;
      v50 = v19->fields._size;
      if ( (unsigned int)v50 >= v48->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v19,
          (int32_t)data,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
      }
      else
      {
        v19->fields._size = v50 + 1;
        v48->m_Items[v50 + 1] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 60, 0, 0LL);
      v55 = v19->fields._items;
      v56 = Method_System_Collections_Generic_List_int__Add__;
      ++v19->fields._version;
      if ( !v55 )
        goto LABEL_87;
      v57 = v19->fields._size;
      if ( (unsigned int)v57 >= v55->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v19,
          (int32_t)data,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v56[4] + 192LL) + 112LL));
      }
      else
      {
        v19->fields._size = v57 + 1;
        v55->m_Items[v57 + 1] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 4, 0, 0LL);
      v59 = v19->fields._items;
      v60 = Method_System_Collections_Generic_List_int__Add__;
      ++v19->fields._version;
      if ( !v59 )
        goto LABEL_87;
      v61 = v19->fields._size;
      if ( (unsigned int)v61 >= v59->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v19,
          (int32_t)data,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v60[4] + 192LL) + 112LL));
      }
      else
      {
        v19->fields._size = v61 + 1;
        v59->m_Items[v61 + 1] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0LL);
      v62 = v19->fields._items;
      v63 = Method_System_Collections_Generic_List_int__Add__;
      ++v19->fields._version;
      if ( !v62 )
        goto LABEL_87;
      v64 = v19->fields._size;
      if ( (unsigned int)v64 >= v62->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v19,
          (int32_t)data,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v63[4] + 192LL) + 112LL));
      }
      else
      {
        v19->fields._size = v64 + 1;
        v62->m_Items[v64 + 1] = (int)data;
      }
      buffIndv = DataVals__GetTargetList(baseVals, 0LL);
      v65 = (System_Array_o *)sub_1B88658(DataVals_OverChargeState___TypeInfo, 3LL);
      v85.fields.value = Field__PrivateImplementationDetails__44BE0EBF7C907BA44AD83314C6AD0AA399AD5B73911C129D2CD6A85D4A056C90;
      System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_61615112(v65, v85, 0LL);
      DataVals__UpdateOverChargeEachFunc(baseVals, (DataVals_OverChargeState_array *)v65, 0LL);
      v66 = DataVals__IsOverChargeState(baseVals, 2, 0LL) || DataVals__IsOverChargeState(baseVals, 8, 0LL);
      v24 = 1;
      IsOverChargeState = DataVals__IsOverChargeState(baseVals, 1, 0LL);
      v25 = 0;
      TargetRarityList = 0LL;
      v26 = v66 && !IsOverChargeState;
      v28 = buffIndv;
      goto LABEL_79;
    case 12:
      data = (BattleData_o *)DataVals__GetParam(baseVals, 7, 0, 0LL);
      v36 = v19->fields._items;
      v37 = Method_System_Collections_Generic_List_int__Add__;
      ++v19->fields._version;
      if ( !v36 )
        goto LABEL_87;
      v38 = v19->fields._size;
      if ( (unsigned int)v38 >= v36->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v19,
          (int32_t)data,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v37[4] + 192LL) + 112LL));
      }
      else
      {
        v19->fields._size = v38 + 1;
        v36->m_Items[v38 + 1] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 4, 0, 0LL);
      v39 = v19->fields._items;
      v40 = Method_System_Collections_Generic_List_int__Add__;
      ++v19->fields._version;
      if ( !v39 )
        goto LABEL_87;
      v41 = v19->fields._size;
      if ( (unsigned int)v41 >= v39->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v19,
          (int32_t)data,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
      }
      else
      {
        v19->fields._size = v41 + 1;
        v39->m_Items[v41 + 1] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0LL);
      v45 = v19->fields._items;
      v46 = Method_System_Collections_Generic_List_int__Add__;
      ++v19->fields._version;
      if ( !v45 )
        goto LABEL_87;
      v47 = v19->fields._size;
      if ( (unsigned int)v47 >= v45->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v19,
          (int32_t)data,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
      }
      else
      {
        v19->fields._size = v47 + 1;
        v45->m_Items[v47 + 1] = (int)data;
      }
      data = (BattleData_o *)DataVals__GetParam(baseVals, 6, 0, 0LL);
      if ( !v82 )
        goto LABEL_87;
      BattlePointPhase = BattleServantData__GetBattlePointPhase(v82, (int32_t)data, 0LL);
      data = (BattleData_o *)DataVals__GetParamAddTypeIndex(baseVals, 180, BattlePointPhase, -1, 0LL);
      v52 = v19->fields._items;
      v53 = Method_System_Collections_Generic_List_int__Add__;
      ++v19->fields._version;
      if ( !v52 )
        goto LABEL_87;
      v54 = v19->fields._size;
      if ( (unsigned int)v54 >= v52->max_length )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v19,
          (int32_t)data,
          *(const MethodInfo_34E0810 **)(*(_QWORD *)(v53[4] + 192LL) + 112LL));
      }
      else
      {
        v19->fields._size = v54 + 1;
        v52->m_Items[v54 + 1] = (int)data;
      }
      if ( DataVals__IsOverChargeState(baseVals, 1, 0LL) )
        goto LABEL_64;
      v58 = DataVals__IsOverChargeState(baseVals, 2, 0LL);
      TargetRarityList = 0LL;
      v24 = 0;
      if ( BattlePointPhase )
      {
LABEL_65:
        v25 = 0;
        v26 = 0;
        buffIndv = 0LL;
        v28 = 0LL;
      }
      else
      {
        v25 = 0;
        v26 = 0;
        buffIndv = 0LL;
        v28 = 0LL;
        if ( !v58 )
        {
          DataVals__SetOverCharge(baseVals, 0, 0LL);
LABEL_64:
          v24 = 0;
          v25 = 0;
          TargetRarityList = 0LL;
          v26 = 0;
          buffIndv = 0LL;
          v28 = 0LL;
        }
      }
LABEL_79:
      v76 = v26;
      isRarityAtk = v25;
      NPFixedDamageValue = DataVals__GetNPFixedDamageValue(baseVals, 0LL);
      damageProcessArgs = (BattleLogic_DamageProcessArgs_o *)sub_1B887FC(BattleLogic_DamageProcessArgs_TypeInfo);
      BattleLogic_DamageProcessArgs___ctor(damageProcessArgs, 0, NPFixedDamageValue, 0LL);
      logic = this->fields.logic;
      v71 = System_Collections_Generic_List_int___ToArray(
              v19,
              (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
      IsIncludeIgnoreIndividuality = DataVals__IsIncludeIgnoreIndividuality(baseVals, 0LL);
      data = (BattleData_o *)DataVals__isParam(baseVals, 90, 0LL);
      if ( !logic )
        goto LABEL_87;
      data = (BattleData_o *)BattleLogic__getFunctionNpDamagelist(
                               logic,
                               v82,
                               target,
                               v71,
                               funcIndexa,
                               type,
                               actiona,
                               v28,
                               buffIndv,
                               TargetRarityList,
                               IsIncludeIgnoreIndividuality,
                               (unsigned __int8)data & 1,
                               damageProcessArgs,
                               0LL);
      v73 = (BattleActionData_DamageData_o *)data;
      if ( v83 < 8 && ((0x93u >> v83) & 1) != 0 )
      {
        v74 = 1;
        if ( !data )
          goto LABEL_87;
      }
      else
      {
        v74 = v24 & v76;
        if ( !data )
          goto LABEL_87;
      }
      BattleActionData_DamageData__addAttackSideEffectAction((BattleActionData_DamageData_o *)data, 80, 0LL);
      if ( !v79 )
        goto LABEL_87;
      BattleActionData__setDamageData(v79, v73, baseVals, v74, isRarityAtk, 0LL);
      return v79;
    default:
      goto LABEL_65;
  }
}


BattleActionData_o *__fastcall BattleLogicFunction__functionPtShuffle(
        BattleLogicFunction_o *this,
        int32_t actionId,
        FunctionEntity_o *funcEnt,
        DataVals_o *baeVals,
        int32_t funcIndex,
        const MethodInfo *method)
{
  BattleActionData_o *v7; // x20
  __int64 v8; // x1
  void *data; // x0
  struct BattleData_o *v10; // x8
  System_Collections_Generic_List_object__o *player_datalist; // x21
  System_Action_object__o *v12; // x22
  Il2CppObject *v13; // x23
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  struct BattleData_o *v17; // x8
  System_Collections_Generic_List_object__o *v18; // x21
  System_Comparison_T__o *v19; // x22
  Il2CppObject *v20; // x23
  struct BattleLogicFunction___c_StaticFields *v21; // x0
  int32_t v22; // w2
  int32_t v23; // w3
  struct BattleData_o *v24; // x8
  int v25; // w8
  unsigned int *v26; // x21
  int32_t v27; // w23
  BattleServantData_o *v28; // x22
  struct BattleData_o *v29; // x8
  unsigned __int64 v30; // x24
  struct System_Int32_array *p_entryid; // x9
  unsigned __int64 max_length; // x10
  unsigned __int64 v33; // x9
  __int64 v34; // x22
  struct System_Int32_array *v35; // x9
  BattleLogicTask_o *v36; // x21

  if ( (byte_4A5DC92 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_BattleServantData__TypeInfo);
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&BattleLogicTask_TypeInfo);
    sub_1B885B0(&System_Comparison_BattleServantData__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleServantData__ForEach__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleServantData__Sort__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleServantData__ToArray__);
    sub_1B885B0(&Method_BattleLogicFunction___c__functionPtShuffle_b__89_0__);
    sub_1B885B0(&Method_BattleLogicFunction___c__functionPtShuffle_b__89_1__);
    sub_1B885B0(&BattleLogicFunction___c_TypeInfo);
    byte_4A5DC92 = 1;
  }
  v7 = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v7, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_53;
  BattleData__SubBuffFromPT_42532144((BattleData_o *)data, 0LL, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_53;
  BattleData__SubBuffExitSvt((BattleData_o *)data, 0LL, 0LL);
  v10 = this->fields.data;
  if ( !v10 )
    goto LABEL_53;
  player_datalist = (System_Collections_Generic_List_object__o *)v10->fields.player_datalist;
  data = BattleLogicFunction___c_TypeInfo;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    data = BattleLogicFunction___c_TypeInfo;
  }
  v12 = *(System_Action_object__o **)(*((_QWORD *)data + 23) + 80LL);
  if ( !v12 )
  {
    if ( !*((_DWORD *)data + 56) )
    {
      j_il2cpp_runtime_class_init_0(data);
      data = BattleLogicFunction___c_TypeInfo;
    }
    v13 = (Il2CppObject *)**((_QWORD **)data + 23);
    v12 = (System_Action_object__o *)sub_1B887FC(System_Action_BattleServantData__TypeInfo);
    System_Action_object____ctor(v12, v13, Method_BattleLogicFunction___c__functionPtShuffle_b__89_0__, 0LL);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__89_0 = (struct System_Action_BattleServantData__o *)v12;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__89_0, (int32_t)v12, v15, v16);
  }
  if ( !player_datalist )
    goto LABEL_53;
  System_Collections_Generic_List_object___ForEach(
    player_datalist,
    (System_Action_T__o *)v12,
    (const MethodInfo_34FE274 *)Method_System_Collections_Generic_List_BattleServantData__ForEach__);
  v17 = this->fields.data;
  if ( !v17 )
    goto LABEL_53;
  data = BattleLogicFunction___c_TypeInfo;
  v18 = (System_Collections_Generic_List_object__o *)v17->fields.player_datalist;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    data = BattleLogicFunction___c_TypeInfo;
  }
  v19 = *(System_Comparison_T__o **)(*((_QWORD *)data + 23) + 88LL);
  if ( !v19 )
  {
    if ( !*((_DWORD *)data + 56) )
    {
      j_il2cpp_runtime_class_init_0(data);
      data = BattleLogicFunction___c_TypeInfo;
    }
    v20 = (Il2CppObject *)**((_QWORD **)data + 23);
    v19 = (System_Comparison_T__o *)sub_1B887FC(System_Comparison_BattleServantData__TypeInfo);
    System_Comparison_object____ctor(v19, v20, Method_BattleLogicFunction___c__functionPtShuffle_b__89_1__, 0LL);
    v21 = BattleLogicFunction___c_TypeInfo->static_fields;
    v21->__9__89_1 = (struct System_Comparison_BattleServantData__o *)v19;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v21->__9__89_1, (int32_t)v19, v22, v23);
  }
  if ( !v18 )
    goto LABEL_53;
  System_Collections_Generic_List_object___Sort_55571192(
    v18,
    v19,
    (const MethodInfo_34FF2F8 *)Method_System_Collections_Generic_List_BattleServantData__Sort__);
  v24 = this->fields.data;
  if ( !v24 )
    goto LABEL_53;
  data = v24->fields.player_datalist;
  if ( !data )
    goto LABEL_53;
  data = System_Collections_Generic_List_object___ToArray(
           (System_Collections_Generic_List_object__o *)data,
           (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_BattleServantData__ToArray__);
  if ( !data )
    goto LABEL_53;
  v25 = *((_DWORD *)data + 6);
  v26 = (unsigned int *)data;
  if ( v25 >= 1 )
  {
    v27 = 0;
    while ( 1 )
    {
      if ( v27 >= (unsigned int)v25 )
LABEL_54:
        sub_1B88814(data, v8);
      v28 = *(BattleServantData_o **)&v26[2 * v27 + 8];
      if ( !v28 )
        break;
      if ( v28->fields.isEntry )
      {
        data = (void *)BattleServantData__isAlive(v28, 0, 0LL);
        if ( ((unsigned __int8)data & 1) != 0 )
          v28->fields.isEntry = 0;
      }
      v28->fields.deckIndex = v27;
      v25 = v26[6];
      if ( ++v27 >= v25 )
        goto LABEL_32;
    }
LABEL_53:
    sub_1B8880C(data, v8);
  }
LABEL_32:
  v29 = this->fields.data;
  if ( !v29 )
    goto LABEL_53;
  v30 = 0LL;
  while ( 1 )
  {
    p_entryid = v29->fields.p_entryid;
    if ( !p_entryid )
      goto LABEL_53;
    max_length = p_entryid->max_length;
    if ( (__int64)v30 >= (int)max_length )
      break;
    if ( v30 >= max_length )
      goto LABEL_54;
    p_entryid->m_Items[v30 + 1] = -1;
    v33 = v26[6];
    if ( (__int64)v30 < (int)v33 )
    {
      if ( v30 >= v33 )
        goto LABEL_54;
      v34 = *(_QWORD *)&v26[2 * v30 + 8];
      if ( !v34 )
        goto LABEL_53;
      data = (void *)BattleServantData__isAlive(*(BattleServantData_o **)&v26[2 * v30 + 8], 0, 0LL);
      v29 = this->fields.data;
      if ( ((unsigned __int8)data & 1) != 0 )
      {
        if ( !v29 )
          goto LABEL_53;
        v35 = v29->fields.p_entryid;
        if ( !v35 )
          goto LABEL_53;
        if ( v30 >= v35->max_length )
          goto LABEL_54;
        v35->m_Items[v30 + 1] = *(_DWORD *)(v34 + 24);
        *(_BYTE *)(v34 + 468) = 1;
        *(_BYTE *)(v34 + 533) = 1;
      }
    }
    ++v30;
    if ( !v29 )
      goto LABEL_53;
  }
  BattleData__createCommandCard(v29, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_53;
  BattleData__shuffleCommand((BattleData_o *)data, 0LL);
  data = this->fields.logic;
  if ( !data )
    goto LABEL_53;
  BattleLogic__drawCommand((BattleLogic_o *)data, 0LL);
  if ( !v7 )
    goto LABEL_53;
  v7->fields.redrawCommandCard = 1;
  v36 = (BattleLogicTask_o *)sub_1B887FC(BattleLogicTask_TypeInfo);
  BattleLogicTask___ctor(v36, 0LL);
  if ( !v36 )
    goto LABEL_53;
  BattleLogicTask__setCheckEntryFunction(v36, 0LL);
  data = this->fields.logic;
  if ( !data )
    goto LABEL_53;
  BattleLogic__AddBattleLogicTask((BattleLogic_o *)data, v36, 0LL);
  return v7;
}


BattleActionData_o *__fastcall BattleLogicFunction__functionReflection(
        BattleLogicFunction_o *this,
        int32_t playerId,
        int32_t targetId,
        DataVals_o *baseVals,
        int32_t funcIndex,
        const MethodInfo *method)
{
  BattleActionData_o *v11; // x23
  __int64 v12; // x1
  __int64 data; // x0
  BattleServantData_o *v14; // x25
  BattleServantData_o *ServantData; // x24
  __int64 v16; // x26
  __int64 v17; // x8
  double v18; // d0
  int32_t v19; // w28
  int v20; // w29
  __int64 v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  __int64 v25; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  int32_t v28; // w2
  int32_t v29; // w3
  __int64 v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  __int64 v33; // x0
  int32_t v34; // w2
  int32_t v35; // w3
  __int64 v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  struct BattleData_o *v39; // x8
  int32_t uniqueId; // w21
  int32_t v41; // w22
  bool IsOpponentPTUniqueID; // w0

  if ( (byte_4A5DC90 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&BattleActionData_DamageData_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&BattleBuffData_ShowBuffData___TypeInfo);
    byte_4A5DC90 = 1;
  }
  v11 = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v11, 0LL);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_28;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, playerId, 0LL);
  if ( !this->fields.data )
    goto LABEL_28;
  v14 = (BattleServantData_o *)data;
  ServantData = BattleData__getServantData(this->fields.data, targetId, 0LL);
  v16 = sub_1B887FC(BattleActionData_DamageData_TypeInfo);
  BattleActionData_DamageData___ctor((BattleActionData_DamageData_o *)v16, 0LL);
  if ( !v14 )
    goto LABEL_28;
  data = BattleServantData__getAccumulationDamage(v14, 0LL);
  if ( !baseVals )
    goto LABEL_28;
  v17 = DataVals__GetValue(baseVals, 0LL) * (__int64)(int)data;
  data = (__int64)this->fields.data;
  v18 = (double)v17 / 1000.0;
  v19 = v18 == INFINITY ? 0x80000000 : (int)v18;
  if ( !data )
    goto LABEL_28;
  data = BattleData__IsDeadOkTurn((BattleData_o *)data, targetId, 0LL);
  if ( (data & 1) == 0 )
  {
    if ( !ServantData )
      goto LABEL_28;
    v20 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))ServantData->klass->vtable._9_get_hp.method)(
            ServantData,
            ServantData->klass->vtable._10_set_hp.methodPtr);
    data = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))ServantData->klass->vtable._11_get_reducedhp.method)(
             ServantData,
             ServantData->klass->vtable._12_set_reducedhp.methodPtr);
    if ( v20 - (int)data < v19 && v20 - (int)data > 0 )
      v19 = v20 - data - 1;
  }
  if ( !v16 )
    goto LABEL_28;
  *(_DWORD *)(v16 + 28) = targetId;
  *(_DWORD *)(v16 + 16) = funcIndex;
  *(_WORD *)(v16 + 32) = 0;
  *(_BYTE *)(v16 + 34) = 0;
  *(_DWORD *)(v16 + 36) = 0;
  *(_BYTE *)(v16 + 40) = 0;
  v22 = sub_1B88658(BattleBuffData_ShowBuffData___TypeInfo, 0LL);
  *(_QWORD *)(v16 + 64) = v22;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 64), v22, v23, v24);
  v25 = sub_1B88658(BattleBuffData_ShowBuffData___TypeInfo, 0LL);
  *(_QWORD *)(v16 + 72) = v25;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 72), v25, v26, v27);
  data = sub_1B88658(int___TypeInfo, 1LL);
  if ( !data )
    goto LABEL_28;
  if ( !*(_DWORD *)(data + 24) )
    sub_1B88814(data, data);
  *(_DWORD *)(data + 32) = v19;
  *(_QWORD *)(v16 + 96) = data;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 96), data, v28, v29);
  v30 = sub_1B88658(int___TypeInfo, 0LL);
  *(_QWORD *)(v16 + 104) = v30;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 104), v30, v31, v32);
  v33 = sub_1B88658(int___TypeInfo, 0LL);
  *(_QWORD *)(v16 + 112) = v33;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 112), v33, v34, v35);
  v36 = sub_1B88658(int___TypeInfo, 0LL);
  *(_QWORD *)(v16 + 120) = v36;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v16 + 120), v36, v37, v38);
  if ( !ServantData )
    goto LABEL_28;
  BattleServantData__provisionalDamage(ServantData, v19, 0LL);
  BattleServantData__ResultDamage(ServantData, v19, v14, 0LL, 0LL, 0, 0LL);
  data = BattleServantData__isLogicResultAlive(ServantData, 0LL);
  if ( (data & 1) == 0 )
  {
    v39 = this->fields.data;
    if ( !v39 )
      goto LABEL_28;
    ServantData->fields.deadTurn = v39->fields.typeTurn;
  }
  BattleActionData_DamageData__addAttackSideEffectAction((BattleActionData_DamageData_o *)v16, 80, 0LL);
  if ( !v11
    || (BattleActionData__SetFuncDamageData(v11, (BattleActionData_DamageData_o *)v16, baseVals, 0LL),
        (data = (__int64)this->fields.data) == 0) )
  {
LABEL_28:
    sub_1B8880C(data, v12);
  }
  uniqueId = v14->fields.uniqueId;
  v41 = *(_DWORD *)(data + 196);
  IsOpponentPTUniqueID = BattleData__IsOpponentPTUniqueID((BattleData_o *)data, targetId, playerId, 0LL);
  BattleServantData__setActionHistory(ServantData, uniqueId, 1, v41, IsOpponentPTUniqueID, 0LL);
  return v11;
}


BattleActionData_o *__fastcall BattleLogicFunction__functionReplaceEnemyMember(
        BattleLogicFunction_o *this,
        FunctionEntity_o *funcEnt,
        DataVals_o *baseVals,
        int32_t funcIndex,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  struct BattleData_o *v9; // x8
  BattleData_o *v10; // x23
  System_Collections_Generic_IEnumerable_TSource__o *enemy_datalist; // x21
  BattleLogicFunction___c_c *v12; // x0
  System_Func_object__bool__o *_9__83_0; // x22
  Il2CppObject *v14; // x25
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  int32_t v17; // w3
  BattleActionData_o *v18; // x21
  int32_t Param; // w25
  int32_t v20; // w22
  BattleServantData_o *EnemyServantData; // x25
  BattleServantData_o *EnemyServantDataFromNpcId; // x22
  struct BattleData_o *v23; // x8
  int v24; // w9
  struct System_Int32_array *e_entryid; // x10
  int max_length; // w10
  struct System_Int32_array *v27; // x10
  BattleActionData_o *result; // x0
  int DeckIndex; // w23
  struct BattleData_o *v30; // x8
  struct System_Int32_array *v31; // x9
  __int64 v32; // x11
  int32_t v33; // w24
  int32_t uniqueId; // w10
  __int64 v35; // x8
  __int64 v36; // x11
  int32_t *v37; // x9
  struct System_Int32_array *v38; // x8
  unsigned __int64 v39; // x10
  unsigned __int64 v40; // x9
  int32_t *v41; // x12

  if ( (byte_4A5DC8C & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_BattleServantData____76127536);
    sub_1B885B0(&System_Func_BattleServantData__bool__TypeInfo);
    sub_1B885B0(&Method_BattleLogicFunction___c__functionReplaceEnemyMember_b__83_0__);
    sub_1B885B0(&BattleLogicFunction___c_TypeInfo);
    byte_4A5DC8C = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_61;
  data = (BattleData_o *)BattleData__getAliveFieldEnemyServantIDList(data, 0, 0LL);
  v9 = this->fields.data;
  if ( !v9 )
    goto LABEL_61;
  v10 = data;
  enemy_datalist = (System_Collections_Generic_IEnumerable_TSource__o *)v9->fields.enemy_datalist;
  v12 = BattleLogicFunction___c_TypeInfo;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v12 = BattleLogicFunction___c_TypeInfo;
  }
  _9__83_0 = (System_Func_object__bool__o *)v12->static_fields->__9__83_0;
  if ( !_9__83_0 )
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = BattleLogicFunction___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v12->static_fields->__9;
    _9__83_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleServantData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      _9__83_0,
      v14,
      Method_BattleLogicFunction___c__functionReplaceEnemyMember_b__83_0__,
      0LL);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__83_0 = (struct System_Func_BattleServantData__bool__o *)_9__83_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__83_0, (int32_t)_9__83_0, v16, v17);
  }
  data = (BattleData_o *)System_Linq_Enumerable__Count_object__48881560(
                           enemy_datalist,
                           (System_Func_TSource__bool__o *)_9__83_0,
                           (const MethodInfo_2E9DF98 *)Method_System_Linq_Enumerable_Count_BattleServantData____76127536);
  if ( (int)data < 4 )
    return 0LL;
  if ( !v10 )
    goto LABEL_61;
  if ( !v10->fields.m_CancellationTokenSource )
    return 0LL;
  v18 = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v18, 0LL);
  if ( !baseVals )
    goto LABEL_61;
  Param = DataVals__GetParam(baseVals, 47, 0, 0LL);
  data = (BattleData_o *)DataVals__GetParam(baseVals, 48, 0, 0LL);
  if ( !this->fields.data )
    goto LABEL_61;
  v20 = (int)data;
  data = (BattleData_o *)BattleData__getEnemyServantDataFromNpcId(this->fields.data, Param, 0LL);
  if ( !this->fields.data )
    goto LABEL_61;
  EnemyServantData = (BattleServantData_o *)data;
  EnemyServantDataFromNpcId = BattleData__getEnemyServantDataFromNpcId(this->fields.data, v20, 0LL);
  if ( !EnemyServantData )
  {
    data = (BattleData_o *)DataVals__GetParam(baseVals, 49, 0, 0LL);
    v23 = this->fields.data;
    v24 = (_DWORD)data - 1;
    if ( (int)data - 1 < 0 )
    {
      if ( !v23 )
        goto LABEL_61;
      v24 = 0;
    }
    else
    {
      if ( !v23 )
        goto LABEL_61;
      e_entryid = v23->fields.e_entryid;
      if ( !e_entryid )
        goto LABEL_61;
      max_length = e_entryid->max_length;
      if ( v24 >= max_length )
        v24 = max_length - 1;
    }
    v27 = v23->fields.e_entryid;
    if ( !v27 )
      goto LABEL_61;
    if ( v24 >= v27->max_length )
      goto LABEL_64;
    data = (BattleData_o *)BattleData__getEnemyServantData(this->fields.data, v27->m_Items[v24 + 1], 0LL);
    if ( !data )
      goto LABEL_61;
    EnemyServantData = (BattleServantData_o *)data;
    data = (BattleData_o *)BattleServantData__isDead((BattleServantData_o *)data, 0LL);
    if ( ((unsigned __int8)data & 1) != 0 )
    {
      if ( !LODWORD(v10->fields.m_CancellationTokenSource) )
        goto LABEL_64;
      data = this->fields.data;
      if ( !data )
        goto LABEL_61;
      EnemyServantData = BattleData__getEnemyServantData(data, (int32_t)v10->fields.rootfsm, 0LL);
    }
  }
  if ( !EnemyServantDataFromNpcId )
  {
    data = this->fields.data;
    if ( !data )
      goto LABEL_61;
    EnemyServantDataFromNpcId = BattleData__getEnemySubBackServantData(data, 0LL);
  }
  result = 0LL;
  if ( EnemyServantData && EnemyServantDataFromNpcId )
  {
    if ( !EnemyServantData->fields.isEntry || EnemyServantDataFromNpcId->fields.isEntry )
      return 0LL;
    DeckIndex = BattleServantData__getDeckIndex(EnemyServantData, 0LL);
    data = (BattleData_o *)BattleServantData__getDeckIndex(EnemyServantDataFromNpcId, 0LL);
    v30 = this->fields.data;
    if ( v30 )
    {
      v31 = v30->fields.e_entryid;
      if ( v31 )
      {
        v32 = *(_QWORD *)&v31->max_length;
        v33 = (int)data;
        if ( DeckIndex >= (int)v32 )
          goto LABEL_47;
        if ( DeckIndex < (unsigned int)v32 )
        {
          if ( v31->m_Items[DeckIndex + 1] == EnemyServantData->fields.uniqueId )
          {
            EnemyServantData->fields.deckIndex = (int)data;
            EnemyServantDataFromNpcId->fields.deckIndex = DeckIndex;
LABEL_54:
            v38 = v30->fields.e_entryid;
            if ( v38 )
            {
              v39 = v38->max_length;
              v40 = 0LL;
              v41 = &v38->m_Items[1];
              while ( (__int64)v40 < (int)v39 )
              {
                if ( v40 >= v39 )
                  goto LABEL_64;
                if ( v41[v40] == EnemyServantData->fields.uniqueId )
                  v41[v40] = EnemyServantDataFromNpcId->fields.uniqueId;
                ++v40;
              }
              if ( v18 )
              {
                BattleActionData__setReplaceMember(
                  v18,
                  DeckIndex,
                  EnemyServantDataFromNpcId->fields.uniqueId,
                  EnemyServantData->fields.uniqueId,
                  funcIndex,
                  0LL);
                return v18;
              }
            }
            goto LABEL_61;
          }
LABEL_47:
          if ( (int)v32 >= 1 )
          {
            uniqueId = EnemyServantData->fields.uniqueId;
            v35 = 0LL;
            v36 = (unsigned int)*(_QWORD *)&v31->max_length;
            v37 = &v31->m_Items[1];
            do
            {
              if ( v37[v35] == uniqueId )
                EnemyServantData->fields.deckIndex = v35;
              ++v35;
            }
            while ( v36 != v35 );
          }
          data = (BattleData_o *)BattleServantData__getDeckIndex(EnemyServantData, 0LL);
          v30 = this->fields.data;
          EnemyServantData->fields.deckIndex = v33;
          EnemyServantDataFromNpcId->fields.deckIndex = (int)data;
          if ( !v30 )
            goto LABEL_61;
          DeckIndex = (int)data;
          goto LABEL_54;
        }
LABEL_64:
        sub_1B88814(data, funcEnt);
      }
    }
LABEL_61:
    sub_1B8880C(data, funcEnt);
  }
  return result;
}


BattleActionData_o *__fastcall BattleLogicFunction__functionReplaceMember(
        BattleLogicFunction_o *this,
        int32_t targetId,
        int32_t subTargetId,
        FunctionEntity_o *funcEnt,
        DataVals_o *baeVals,
        int32_t funcIndex,
        const MethodInfo *method)
{
  BattleActionData_o *v11; // x20
  __int64 v12; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v14; // x22
  BattleServantData_o *v15; // x23
  int32_t v16; // w24
  struct BattleData_o *v17; // x8
  struct System_Int32_array *p_entryid; // x9
  __int64 v19; // x11
  int32_t v20; // w25
  int32_t uniqueId; // w10
  __int64 v22; // x8
  __int64 v23; // x11
  int32_t *v24; // x9
  struct System_Int32_array *v25; // x8
  unsigned __int64 max_length; // x10
  unsigned __int64 v27; // x9
  int32_t *v28; // x12

  if ( (byte_4A5DC8B & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    byte_4A5DC8B = 1;
  }
  v11 = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v11, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_27;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL);
  if ( !this->fields.data )
    goto LABEL_27;
  v14 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleData__getServantData(this->fields.data, subTargetId, 0LL);
  if ( !v14 )
    goto LABEL_27;
  v15 = (BattleServantData_o *)data;
  data = (BattleData_o *)BattleServantData__getDeckIndex(v14, 0LL);
  if ( !v15 )
    goto LABEL_27;
  v16 = (int)data;
  data = (BattleData_o *)BattleServantData__getDeckIndex(v15, 0LL);
  v17 = this->fields.data;
  if ( !v17 )
    goto LABEL_27;
  p_entryid = v17->fields.p_entryid;
  if ( !p_entryid )
    goto LABEL_27;
  v19 = *(_QWORD *)&p_entryid->max_length;
  v20 = (int)data;
  if ( v16 >= (int)v19 )
    goto LABEL_35;
  if ( v16 >= (unsigned int)v19 )
LABEL_32:
    sub_1B88814(data, v12);
  if ( p_entryid->m_Items[v16 + 1] == v14->fields.uniqueId )
  {
    v14->fields.deckIndex = (int)data;
    v15->fields.deckIndex = v16;
  }
  else
  {
LABEL_35:
    if ( (int)v19 >= 1 )
    {
      uniqueId = v14->fields.uniqueId;
      v22 = 0LL;
      v23 = (unsigned int)*(_QWORD *)&p_entryid->max_length;
      v24 = &p_entryid->m_Items[1];
      do
      {
        if ( v24[v22] == uniqueId )
          v14->fields.deckIndex = v22;
        ++v22;
      }
      while ( v23 != v22 );
    }
    data = (BattleData_o *)BattleServantData__getDeckIndex(v14, 0LL);
    v17 = this->fields.data;
    v14->fields.deckIndex = v20;
    v15->fields.deckIndex = (int)data;
    if ( !v17 )
      goto LABEL_27;
    v16 = (int)data;
  }
  v25 = v17->fields.p_entryid;
  if ( !v25 )
    goto LABEL_27;
  max_length = v25->max_length;
  v27 = 0LL;
  v28 = &v25->m_Items[1];
  while ( (__int64)v27 < (int)max_length )
  {
    if ( v27 >= max_length )
      goto LABEL_32;
    if ( v28[v27] == v14->fields.uniqueId )
      v28[v27] = v15->fields.uniqueId;
    ++v27;
  }
  if ( !v11
    || (BattleActionData__setReplaceMember(v11, v16, v15->fields.uniqueId, v14->fields.uniqueId, funcIndex, 0LL),
        v11->fields.redrawCommandCard = 1,
        (data = this->fields.data) == 0LL)
    || (BattleData__SubBuffFromPT_42532144(data, v15, 0LL), (data = this->fields.data) == 0LL) )
  {
LABEL_27:
    sub_1B8880C(data, v12);
  }
  BattleData__SubBuffExitSvt(data, v14, 0LL);
  return v11;
}


BattleActionData_o *__fastcall BattleLogicFunction__functionResetCommandCard(
        BattleLogicFunction_o *this,
        int32_t targetId,
        FunctionEntity_o *funcEnt,
        DataVals_o *baseVals,
        int32_t funcIndex,
        const MethodInfo *method)
{
  BattleActionData_o *v7; // x20
  __int64 v8; // x1
  BattleData_o *data; // x0

  if ( (byte_4A5DC8A & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    byte_4A5DC8A = 1;
  }
  v7 = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v7, 0LL);
  data = this->fields.data;
  if ( !data
    || (BattleData__SubBuffFromPT_42532144(data, 0LL, 0LL), (data = this->fields.data) == 0LL)
    || (BattleData__shuffleCommand(data, 0LL), (data = (BattleData_o *)this->fields.logic) == 0LL)
    || (BattleLogic__drawCommand((BattleLogic_o *)data, 0LL), (data = (BattleData_o *)this->fields.logic) == 0LL)
    || (BattleLogic__setDrawCard((BattleLogic_o *)data, 0LL), !v7) )
  {
    sub_1B8880C(data, v8);
  }
  v7->fields.redrawCommandCard = 1;
  return v7;
}


BattleActionData_o *__fastcall BattleLogicFunction__functionResurrection(
        BattleLogicFunction_o *this,
        int32_t targetId,
        int32_t funcIdx,
        FunctionEntity_o *funcEnt,
        DataVals_o *dataVals,
        bool isSideEffect,
        const MethodInfo *method)
{
  BattleActionData_o *v13; // x20
  __int64 v14; // x1
  BattleData_o *data; // x0
  BattleServantData_o *v16; // x22
  const MethodInfo *v17; // x7
  int32_t maxhp; // w24
  int32_t Value; // w0
  int32_t v21; // w1
  struct BattleData_o *v22; // x8
  __int64 v23; // x21
  int32_t v24; // w2
  int32_t v25; // w3
  unsigned int uniqueId; // w8
  struct System_String_o *popupText; // x1
  struct System_Int32_array *effectList; // x1
  int32_t v29; // w2
  int32_t v30; // w3

  if ( (byte_4A5DC96 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&BattleActionData_BuffData_TypeInfo);
    byte_4A5DC96 = 1;
  }
  v13 = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v13, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_22;
  data = (BattleData_o *)BattleData__getServantData(data, targetId, 0LL);
  if ( !data )
    goto LABEL_22;
  v16 = (BattleServantData_o *)data;
  data = (BattleData_o *)(*(__int64 (__fastcall **)(BattleData_o *, Il2CppClass *))&data->klass[1]._1.this_arg.bits)(
                           data,
                           data->klass[1]._1.element_class);
  if ( (int)data >= 1 )
    return BattleLogicFunction__getNoEffectObject(this, targetId, funcIdx, dataVals, isSideEffect, 0LL, 0LL, v17);
  if ( !dataVals )
    goto LABEL_22;
  maxhp = v16->fields.maxhp;
  if ( DataVals__GetValue2(dataVals, 0LL) < 1 )
    Value = DataVals__GetValue(dataVals, 0LL);
  else
    Value = DataVals__GetValue2(dataVals, 0LL) * maxhp / 1000;
  if ( Value <= 1 )
    v21 = 1;
  else
    v21 = Value;
  BattleServantData__setHp(v16, v21, 1, 0LL);
  v16->fields.status = 0;
  data = (BattleData_o *)BattleServantData__isDeadEscape(v16, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    v22 = this->fields.data;
    if ( !v22 )
      goto LABEL_22;
    if ( v22->fields.endbattleFlg )
      v16->fields.isSystemDead = 1;
  }
  v23 = sub_1B887FC(BattleActionData_BuffData_TypeInfo);
  BattleActionData_BuffData___ctor((BattleActionData_BuffData_o *)v23, 0LL);
  if ( !v23 )
    goto LABEL_22;
  uniqueId = v16->fields.uniqueId;
  *(_DWORD *)(v23 + 16) = 0;
  *(_QWORD *)(v23 + 40) = uniqueId;
  if ( !funcEnt )
    goto LABEL_22;
  popupText = funcEnt->fields.popupText;
  *(_QWORD *)(v23 + 56) = popupText;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 56), (int32_t)popupText, v24, v25);
  *(_QWORD *)(v23 + 64) = *(_QWORD *)&funcEnt->fields.popupIconId;
  effectList = funcEnt->fields.effectList;
  *(_QWORD *)(v23 + 72) = effectList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v23 + 72), (int32_t)effectList, v29, v30);
  *(_DWORD *)(v23 + 28) = 2;
  if ( !v13 )
LABEL_22:
    sub_1B8880C(data, v14);
  BattleActionData__setBuffData(v13, (BattleActionData_BuffData_o *)v23, 0LL, 0LL);
  return v13;
}


void __fastcall BattleLogicFunction__functionRevival(
        BattleLogicFunction_o *this,
        BattleActionData_o *actionData,
        FunctionEntity_o *funcEnt,
        DataVals_o *baseVals,
        int32_t funcIndex,
        bool isCommandSideEffect,
        const MethodInfo *method)
{
  __int64 v13; // x0
  __int64 v14; // x0
  DataManager_o *MasterData_object; // x0
  SkillLvMaster_o *v16; // x25
  struct BattleSkillInfoData_o *skillInfo; // x8
  SkillLvEntity_o *v18; // x26
  bool IsRevivalUp; // w0
  SkillLvEntity_o *v20; // x29
  BattleActorControl_o *PartsActor; // x27
  BattleActionData_o *v22; // x25
  SkillLvEntity_o *v23; // x28
  int32_t targetId; // w1
  const MethodInfo *v25; // x6
  BattleActionData_o *RevivalHealData; // x0
  BattleActorControl_o *v27; // x26
  BattleServantData_o *battleSvtData; // x0
  BattleActionData_o *v29; // x27
  int32_t v30; // w1
  const MethodInfo *v31; // x6
  BattleActionData_o *v32; // x0

  if ( (byte_4A5DCA2 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillLvMaster___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    byte_4A5DCA2 = 1;
  }
  v13 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1BDA48C(v13);
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1BDA48C(v14);
  MasterData_object = **(DataManager_o ***)(v14 + 184);
  if ( !MasterData_object )
    goto LABEL_49;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillLvMaster___);
  if ( !actionData )
    goto LABEL_49;
  v16 = (SkillLvMaster_o *)MasterData_object;
  MasterData_object = (DataManager_o *)actionData->fields.skillInfo;
  if ( !MasterData_object )
    goto LABEL_49;
  MasterData_object = (DataManager_o *)((__int64 (__fastcall *)(DataManager_o *, void *))MasterData_object->klass[1]._1.namespaze)(
                                         MasterData_object,
                                         MasterData_object->klass[1]._1.byval_arg.data);
  skillInfo = actionData->fields.skillInfo;
  if ( !skillInfo )
    goto LABEL_49;
  if ( !v16 )
    goto LABEL_49;
  MasterData_object = (DataManager_o *)SkillLvMaster__GetEntity(
                                         v16,
                                         (int32_t)MasterData_object,
                                         skillInfo->fields.skilllv,
                                         0LL);
  if ( !MasterData_object )
    goto LABEL_49;
  v18 = (SkillLvEntity_o *)MasterData_object;
  IsRevivalUp = SkillLvEntity__IsRevivalUp((SkillLvEntity_o *)MasterData_object, 0LL);
  if ( IsRevivalUp )
    v20 = v18;
  else
    v20 = 0LL;
  if ( IsRevivalUp )
  {
    MasterData_object = (DataManager_o *)this->fields.data;
    if ( !MasterData_object )
      goto LABEL_49;
    PartsActor = BattleData__GetPartsActor((BattleData_o *)MasterData_object, 0, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    MasterData_object = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)PartsActor, 0LL, 0LL);
    v22 = 0LL;
    if ( ((unsigned __int8)MasterData_object & 1) != 0 )
      v23 = v20;
    else
      v23 = 0LL;
    if ( ((unsigned __int8)MasterData_object & 1) != 0 )
    {
      if ( !PartsActor )
        goto LABEL_49;
      MasterData_object = (DataManager_o *)PartsActor->fields.battleSvtData;
      if ( MasterData_object )
      {
        MasterData_object = (DataManager_o *)BattleServantData__isAlive(
                                               (BattleServantData_o *)MasterData_object,
                                               0,
                                               0LL);
        if ( ((unsigned __int8)MasterData_object & 1) != 0 )
        {
          v22 = 0LL;
        }
        else
        {
          v22 = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo);
          BattleActionData___ctor(v22, 0LL);
          if ( !v22 )
            goto LABEL_49;
          v22->fields.actorId = actionData->fields.actorId;
          v22->fields.targetId = PartsActor->fields.uniqueID;
          BattleActionData__setStateActors(v22, 0LL);
          targetId = v22->fields.targetId;
          v22->fields.isRevival = 1;
          v22->fields.motionId = 2201;
          RevivalHealData = BattleLogicFunction__createRevivalHealData(
                              this,
                              targetId,
                              funcEnt,
                              baseVals,
                              funcIndex,
                              isCommandSideEffect,
                              v25);
          BattleActionData__addAction(v22, RevivalHealData, 0LL);
        }
        v18 = v23;
      }
      else
      {
        v22 = 0LL;
        v18 = v20;
      }
    }
    if ( !v18 )
LABEL_49:
      sub_1B8880C(MasterData_object, actionData);
  }
  else
  {
    v22 = 0LL;
  }
  if ( !SkillLvEntity__IsRevivalUnder(v18, 0LL) )
    goto LABEL_42;
  MasterData_object = (DataManager_o *)this->fields.data;
  if ( !MasterData_object )
    goto LABEL_49;
  v27 = BattleData__GetPartsActor((BattleData_o *)MasterData_object, 2, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  MasterData_object = (DataManager_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v27, 0LL, 0LL);
  if ( ((unsigned __int8)MasterData_object & 1) != 0 )
  {
    if ( v27 )
    {
      battleSvtData = v27->fields.battleSvtData;
      if ( !battleSvtData || BattleServantData__isAlive(battleSvtData, 0, 0LL) )
        goto LABEL_42;
      v29 = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo);
      BattleActionData___ctor(v29, 0LL);
      if ( v29 )
      {
        v29->fields.actorId = actionData->fields.actorId;
        v29->fields.targetId = v27->fields.uniqueID;
        BattleActionData__setStateActors(v29, 0LL);
        v30 = v29->fields.targetId;
        v29->fields.isRevival = 1;
        v29->fields.motionId = 2202;
        v32 = BattleLogicFunction__createRevivalHealData(
                this,
                v30,
                funcEnt,
                baseVals,
                funcIndex,
                isCommandSideEffect,
                v31);
        BattleActionData__addAction(v29, v32, 0LL);
        if ( v22 )
          BattleActionData__AddAfterActionData(v22, v29, 0, 0LL);
        else
          v22 = v29;
        goto LABEL_43;
      }
    }
    goto LABEL_49;
  }
LABEL_42:
  if ( v22 )
LABEL_43:
    BattleActionData__AddAfterActionData(actionData, v22, 0, 0LL);
}


void __fastcall BattleLogicFunction__functionShiftServant(
        BattleLogicFunction_o *this,
        BattleActionData_o *actionData,
        BattleServantData_o *targetData,
        int32_t npcId,
        const MethodInfo *method)
{
  __int64 v9; // x22
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w1
  int32_t v13; // w2
  int32_t v14; // w3
  BattleData_o *data; // x24
  BattleActionData_SkillShiftServant_o *v16; // x23

  if ( (byte_4A5DC9F & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&BattleActionData_SkillShiftServant_TypeInfo);
    sub_1B885B0(&StringLiteral_8730/*"MOTION_SHIFT"*/);
    byte_4A5DC9F = 1;
  }
  v9 = sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor((BattleActionData_o *)v9, 0LL);
  if ( !targetData )
    goto LABEL_8;
  if ( !v9 )
    goto LABEL_8;
  *(_DWORD *)(v9 + 32) = targetData->fields.uniqueId;
  if ( !actionData )
    goto LABEL_8;
  *(_DWORD *)(v9 + 36) = actionData->fields.targetId;
  BattleActionData__setStateMotion((BattleActionData_o *)v9, 0LL);
  *(_BYTE *)(v9 + 243) = 1;
  v12 = StringLiteral_8730/*"MOTION_SHIFT"*/;
  *(_QWORD *)(v9 + 64) = StringLiteral_8730/*"MOTION_SHIFT"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v9 + 64), v12, v13, v14);
  data = this->fields.data;
  v16 = (BattleActionData_SkillShiftServant_o *)sub_1B887FC(BattleActionData_SkillShiftServant_TypeInfo);
  BattleActionData_SkillShiftServant___ctor(v16, data, npcId, 0LL);
  if ( !v16 )
LABEL_8:
    sub_1B8880C(v10, v11);
  BattleActionData_ShiftServant__setBeforeSvtData((BattleActionData_ShiftServant_o *)v16, targetData, 0LL);
  BattleActionData__setShiftServant((BattleActionData_o *)v9, (BattleActionData_ShiftServant_o *)v16, 0LL);
  BattleActionData__setShiftServant(actionData, (BattleActionData_ShiftServant_o *)v16, 0LL);
  BattleActionData__AddAfterActionData(actionData, (BattleActionData_o *)v9, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *__fastcall BattleLogicFunction__functionSubState(
        BattleLogicFunction_o *this,
        int32_t targetId,
        FunctionEntity_o *funcEnt,
        DataVals_o *baseVals,
        int32_t index,
        bool isCommandSideEffect,
        RemovedBuffInfo_o **subBuffInfo,
        BattleLogicFunction_ProcListInArgs_o *args,
        const MethodInfo *method)
{
  BattleData_o *data; // x0
  BattleServantData_o *ServantData; // x28
  BattleServantSnapShotOnBuffUpdate_o *v18; // x26
  System_Int32_array *vals; // x27
  int32_t Value; // w29
  int32_t Value2; // w22
  RemovedBuffInfo_o *v22; // x0
  int32_t v23; // w2
  int32_t v24; // w3
  const MethodInfo *v25; // x7
  struct System_Collections_Generic_List_BattleBuffData_BuffData__o *RemovedAllBuffList_k__BackingField; // x25
  BattleActionData_o *v27; // x22
  const MethodInfo *v29; // [xsp+8h] [xbp-78h]
  BattleLogicFunction_ProcListInArgs_o *v30; // [xsp+18h] [xbp-68h]

  if ( (byte_4A5DC7E & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&BattleServantSnapShotOnBuffUpdate_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleBuffData_BuffData__get_Count__);
    byte_4A5DC7E = 1;
  }
  data = this->fields.data;
  if ( !data )
    goto LABEL_12;
  ServantData = BattleData__getServantData(data, targetId, 0LL);
  v18 = (BattleServantSnapShotOnBuffUpdate_o *)sub_1B887FC(BattleServantSnapShotOnBuffUpdate_TypeInfo);
  BattleServantSnapShotOnBuffUpdate___ctor(v18, ServantData, 0LL);
  if ( !funcEnt )
    goto LABEL_12;
  if ( !baseVals )
    goto LABEL_12;
  vals = funcEnt->fields.vals;
  Value = DataVals__GetValue(baseVals, 0LL);
  Value2 = DataVals__GetValue2(baseVals, 0LL);
  data = (BattleData_o *)DataVals__isParam(baseVals, 89, 0LL);
  if ( !ServantData
    || (v22 = BattleServantData__subBuffFromIndividualites(
                ServantData,
                vals,
                Value,
                Value2,
                1,
                (unsigned __int8)data & 1,
                0LL),
        *subBuffInfo = v22,
        sub_1B88554((ServantStatusBattleListViewItem_o *)subBuffInfo, (int32_t)v22, v23, v24),
        !*subBuffInfo)
    || (RemovedAllBuffList_k__BackingField = (*subBuffInfo)->fields._RemovedAllBuffList_k__BackingField) == 0LL )
  {
LABEL_12:
    sub_1B8880C(data, *(_QWORD *)&targetId);
  }
  if ( RemovedAllBuffList_k__BackingField->fields._size < 1 )
    return BattleLogicFunction__getNoEffectObject(this, targetId, index, baseVals, isCommandSideEffect, 0LL, 0LL, v25);
  v27 = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v27, 0LL);
  BattleLogicFunction__ApplySubBuffChanges(
    this,
    v27,
    RemovedAllBuffList_k__BackingField,
    targetId,
    v18,
    baseVals,
    index,
    isCommandSideEffect,
    v30,
    v29);
  return v27;
}


BattleActionData_o *__fastcall BattleLogicFunction__functionTransformServant(
        BattleLogicFunction_o *this,
        int32_t targetId,
        FunctionEntity_o *funcEnt,
        DataVals_o *baeVals,
        int32_t funcIndex,
        BattleLogicFunction_ProcListInArgs_o *procArgs,
        const MethodInfo *method)
{
  BattleLogicFunction___c__DisplayClass85_0_o *v11; // x19
  BattleData_o *data; // x0
  __int64 v13; // x1
  BattleActionData_o *v14; // x20
  BattleServantData_o *v15; // x22
  int32_t Param; // w26
  int32_t v17; // w28
  __int64 v18; // x27
  BattleServantData_array *FieldAliveLogicServantArray; // x0
  BattleLogicFunction___c_c *v20; // x8
  BattleServantData_array *v21; // x25
  System_Func_object__object__o *_9__85_0; // x20
  Il2CppObject *v23; // x29
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  BattleLogicFunctionUtilities_FunctionProgressCache_o *v27; // x29
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *ElemByUniqueId; // x19
  BattleLogicSkill_SkillExecArgs_o *v29; // x20
  struct BattleServantSnapShot_o *Before_k__BackingField; // x8
  struct BattleServantSnapShot_o *After_k__BackingField; // x1
  int32_t v32; // w2
  int32_t v33; // w3
  struct BattleServantSnapShot_o *v34; // x8
  __int64 methodPtr_low; // x11
  BattleServantSnapShotShiftServant_o *v36; // x1
  struct BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_array *SvtCacheArray_k__BackingField; // x19
  int max_length; // w8
  BattleActionData_o *v39; // x27
  unsigned int v40; // w23
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *v41; // x22
  struct BattleServantData_o *SvtData_k__BackingField; // x8
  int32_t uniqueId; // w20
  BattleActionData_BuffData_o *v44; // x26
  BattleServantSnapShot_o *v45; // x27
  BattleServantSnapShot_o *v46; // x28
  BattleActionEffect_AddSubChangeMaxHpBuff_o *v47; // x29
  struct BattleServantData_o *v48; // x8
  System_Collections_Generic_IEnumerable_TSource__o *buffdatalist; // x20
  System_Func_object__bool__o *v50; // x21
  struct BattleServantSnapShot_o *v51; // x8
  struct BattleData_o *v52; // x8
  BattleLogicFunctionUtilities_FunctionProgressCache_SvtCache_o *v54; // [xsp+8h] [xbp-98h]
  BattleServantData_o *v55; // [xsp+10h] [xbp-90h]
  BattleLogicFunction_o *v56; // [xsp+18h] [xbp-88h]
  BattleLogicFunction___c__DisplayClass85_0_o *v57; // [xsp+28h] [xbp-78h]
  BattleActionData_o *v58; // [xsp+30h] [xbp-70h]

  if ( (byte_4A5DC8E & 1) == 0 )
  {
    sub_1B885B0(&BattleActionEffect_AddSubChangeMaxHpBuff_TypeInfo);
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&BattleServantSnapShotShiftServant_TypeInfo);
    sub_1B885B0(&BattleActionData_BuffData_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_FirstOrDefault_BattleActionData_BuffData___);
    sub_1B885B0(&System_Func_BattleServantData__BattleServantSnapShot__TypeInfo);
    sub_1B885B0(&System_Func_BattleActionData_BuffData__bool__TypeInfo);
    sub_1B885B0(&BattleLogicFunctionUtilities_FunctionProgressCache_TypeInfo);
    sub_1B885B0(&BattleActionData_ShiftServant_TypeInfo);
    sub_1B885B0(&BattleLogicSkill_SkillExecArgs_TypeInfo);
    sub_1B885B0(&Method_BattleLogicFunction___c__functionTransformServant_b__85_0__);
    sub_1B885B0(&Method_BattleLogicFunction___c__DisplayClass85_0__functionTransformServant_b__1__);
    sub_1B885B0(&BattleLogicFunction___c__DisplayClass85_0_TypeInfo);
    sub_1B885B0(&BattleLogicFunction___c_TypeInfo);
    byte_4A5DC8E = 1;
  }
  v11 = (BattleLogicFunction___c__DisplayClass85_0_o *)sub_1B887FC(BattleLogicFunction___c__DisplayClass85_0_TypeInfo);
  BattleLogicFunction___c__DisplayClass85_0___ctor(v11, 0LL);
  if ( !v11 )
    goto LABEL_49;
  v11->fields.targetId = targetId;
  v14 = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v14, 0LL);
  data = this->fields.data;
  if ( !data )
    goto LABEL_49;
  data = (BattleData_o *)BattleData__getServantData(data, v11->fields.targetId, 0LL);
  if ( !baeVals )
    goto LABEL_49;
  v15 = (BattleServantData_o *)data;
  Param = DataVals__GetParam(baeVals, 6, 0, 0LL);
  v17 = DataVals__GetParam(baeVals, 76, 0, 0LL);
  data = (BattleData_o *)DataVals__IsCancelTransform(baeVals, 0LL);
  if ( ((unsigned __int8)data & 1) != 0 )
  {
    if ( !v15 )
      goto LABEL_49;
    if ( BattleServantData__get_isTransformed(v15, 0LL) )
      Param = -1;
  }
  v57 = v11;
  v18 = sub_1B887FC(BattleActionData_ShiftServant_TypeInfo);
  BattleActionData_ShiftServant___ctor((BattleActionData_ShiftServant_o *)v18, funcIndex, 0LL);
  if ( !v18 )
    goto LABEL_49;
  BattleActionData_ShiftServant__setBeforeSvtData((BattleActionData_ShiftServant_o *)v18, v15, 0LL);
  if ( !v14 )
    goto LABEL_49;
  BattleActionData__setShiftServant(v14, (BattleActionData_ShiftServant_o *)v18, 0LL);
  if ( !v15 )
    goto LABEL_49;
  v15->fields.shiftNpcId = -1;
  v15->fields.beforeUserSvtId = -1LL;
  data = this->fields.data;
  if ( !data )
    goto LABEL_49;
  FieldAliveLogicServantArray = BattleData__GetFieldAliveLogicServantArray(data, 3, 0, 0LL);
  v20 = BattleLogicFunction___c_TypeInfo;
  v21 = FieldAliveLogicServantArray;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v20 = BattleLogicFunction___c_TypeInfo;
  }
  v58 = v14;
  _9__85_0 = (System_Func_object__object__o *)v20->static_fields->__9__85_0;
  if ( !_9__85_0 )
  {
    if ( !v20->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v20);
      v20 = BattleLogicFunction___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v20->static_fields->__9;
    _9__85_0 = (System_Func_object__object__o *)sub_1B887FC(System_Func_BattleServantData__BattleServantSnapShot__TypeInfo);
    System_Func_object__object____ctor(
      _9__85_0,
      v23,
      Method_BattleLogicFunction___c__functionTransformServant_b__85_0__,
      0LL);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__85_0 = (struct System_Func_BattleServantData__BattleServantSnapShot__o *)_9__85_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__85_0, (int32_t)_9__85_0, v25, v26);
  }
  v27 = (BattleLogicFunctionUtilities_FunctionProgressCache_o *)sub_1B887FC(BattleLogicFunctionUtilities_FunctionProgressCache_TypeInfo);
  BattleLogicFunctionUtilities_FunctionProgressCache___ctor(
    v27,
    v21,
    (System_Func_BattleServantData__BattleServantSnapShot__o *)_9__85_0,
    0LL);
  if ( !v27 )
    goto LABEL_49;
  BattleLogicFunctionUtilities_FunctionProgressCache__MakeBeforeSvtCache(v27, 0LL);
  ElemByUniqueId = BattleLogicFunctionUtilities_FunctionProgressCache__GetElemByUniqueId(v27, v11->fields.targetId, 0LL);
  v29 = (BattleLogicSkill_SkillExecArgs_o *)sub_1B887FC(BattleLogicSkill_SkillExecArgs_TypeInfo);
  BattleLogicSkill_SkillExecArgs___ctor(v29, 0LL);
  BattleServantData__setTransformServant(v15, this->fields.data, Param, v17, 0, v29, 0LL);
  if ( !ElemByUniqueId )
    goto LABEL_49;
  Before_k__BackingField = ElemByUniqueId->fields._Before_k__BackingField;
  if ( !Before_k__BackingField )
    goto LABEL_49;
  BattleServantData__CheckUpdateUpDownOnlyResultHp(v15, Before_k__BackingField->fields._MaxHp_k__BackingField, 1, 0LL);
  BattleLogicFunctionUtilities_FunctionProgressCache__MakeAfterSvtCache(v27, 0LL);
  After_k__BackingField = ElemByUniqueId->fields._After_k__BackingField;
  *(_QWORD *)(v18 + 72) = After_k__BackingField;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 72), (int32_t)After_k__BackingField, v32, v33);
  v34 = ElemByUniqueId->fields._Before_k__BackingField;
  v54 = ElemByUniqueId;
  if ( !v34 )
    goto LABEL_25;
  methodPtr_low = LOBYTE(BattleServantSnapShotShiftServant_TypeInfo->vtable._0_Equals.methodPtr);
  if ( LOBYTE(v34->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
    v36 = (BattleServantSnapShotShiftServant_c *)v34->klass->_2.typeHierarchy[methodPtr_low - 1] == BattleServantSnapShotShiftServant_TypeInfo
        ? (BattleServantSnapShotShiftServant_o *)ElemByUniqueId->fields._Before_k__BackingField
        : 0LL;
  else
LABEL_25:
    v36 = 0LL;
  v56 = this;
  BattleServantData__ApplyCacheForTransformServant(v15, v36, 0LL);
  SvtCacheArray_k__BackingField = v27->fields._SvtCacheArray_k__BackingField;
  if ( !SvtCacheArray_k__BackingField )
LABEL_49:
    sub_1B8880C(data, v13);
  max_length = SvtCacheArray_k__BackingField->max_length;
  v39 = v58;
  v55 = v15;
  if ( max_length >= 1 )
  {
    v40 = 0;
    do
    {
      if ( v40 >= max_length )
        sub_1B88814(data, v13);
      v41 = SvtCacheArray_k__BackingField->m_Items[v40];
      if ( !v41 )
        goto LABEL_49;
      SvtData_k__BackingField = v41->fields._SvtData_k__BackingField;
      if ( !SvtData_k__BackingField )
        goto LABEL_49;
      uniqueId = SvtData_k__BackingField->fields.uniqueId;
      v44 = (BattleActionData_BuffData_o *)sub_1B887FC(BattleActionData_BuffData_TypeInfo);
      BattleActionData_BuffData___ctor(v44, 0LL);
      if ( !v44 )
        goto LABEL_49;
      v44->fields.targetId = uniqueId;
      v44->fields.isHideEffect = 1;
      v44->fields.functionIndex = funcIndex;
      v45 = v41->fields._Before_k__BackingField;
      v46 = v41->fields._After_k__BackingField;
      v47 = (BattleActionEffect_AddSubChangeMaxHpBuff_o *)sub_1B887FC(BattleActionEffect_AddSubChangeMaxHpBuff_TypeInfo);
      BattleActionEffect_AddSubChangeMaxHpBuff___ctor(v47, uniqueId, v45, v46, 0LL);
      BattleActionData_BuffData__SetActionEffectProc(v44, (BattleActionEffect_Base_o *)v47, 0LL);
      v48 = v41->fields._SvtData_k__BackingField;
      if ( !v48 )
        goto LABEL_49;
      BattleActionData_BuffData__setSaveNp(v44, v48->fields.np, 0LL);
      v39 = v58;
      BattleActionData__setBuffData(v58, v44, 0LL, 0LL);
      max_length = SvtCacheArray_k__BackingField->max_length;
    }
    while ( (int)++v40 < max_length );
  }
  BattleActionData__addReflectLogicResultServantId(v39, v57->fields.targetId, 0LL);
  buffdatalist = (System_Collections_Generic_IEnumerable_TSource__o *)v39->fields.buffdatalist;
  v50 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleActionData_BuffData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v50,
    (Il2CppObject *)v57,
    Method_BattleLogicFunction___c__DisplayClass85_0__functionTransformServant_b__1__,
    0LL);
  data = (BattleData_o *)System_Linq_Enumerable__FirstOrDefault_object__48907856(
                           buffdatalist,
                           (System_Func_TSource__bool__o *)v50,
                           (const MethodInfo_2EA4650 *)Method_System_Linq_Enumerable_FirstOrDefault_BattleActionData_BuffData___);
  if ( !procArgs )
    goto LABEL_49;
  if ( !procArgs->fields._IsTreasureDvc_k__BackingField )
  {
    if ( !data )
      goto LABEL_46;
    LODWORD(v13) = v55->fields.nexttpturn;
LABEL_45:
    BattleActionData_BuffData__SetSaveTpTurn((BattleActionData_BuffData_o *)data, v13, 0LL);
    goto LABEL_46;
  }
  v51 = v54->fields._Before_k__BackingField;
  if ( !v51 )
    goto LABEL_49;
  v13 = (unsigned int)(v55->fields.maxtpturn - v51->fields._MaxTpTurn_k__BackingField + v55->fields.nexttpturn);
  v55->fields.nexttpturn = v13;
  if ( data )
    goto LABEL_45;
LABEL_46:
  v52 = v56->fields.data;
  if ( !v52 )
    goto LABEL_49;
  data = (BattleData_o *)v52->fields._FieldEnvData_k__BackingField;
  if ( !data )
    goto LABEL_49;
  BattleFieldEnvironmentData__RemoveBgmNotExistsChangeBgmBuff((BattleFieldEnvironmentData_o *)data, 0LL);
  return v39;
}


BattleActionData_o *__fastcall BattleLogicFunction__functionValueDamage(
        BattleLogicFunction_o *this,
        int32_t playerId,
        int32_t targetId,
        DataVals_o *baseVals,
        int32_t funcIndex,
        bool safe,
        BattleActionData_o *mainAction,
        const MethodInfo *method)
{
  BattleActionData_o *v15; // x28
  __int64 v16; // x1
  __int64 data; // x0
  BattleServantData_o *v18; // x29
  BattleServantData_o *v19; // x23
  System_Int32_array *FixDamageRates; // x26
  __int64 v21; // x24
  int32_t Param; // w0
  int Random; // w27
  BattleServantData_o *v24; // x19
  int IsIgnoreShiftSafeDamage; // w26
  BattleActionData_o *v26; // x29
  struct BattleSkillInfoData_o *skillInfo; // x8
  DataMasterBase_TMaster__TEntity__PKType__o *v28; // x28
  BattleActionData_o *v29; // x28
  int v30; // w26
  int32_t v31; // w2
  int32_t v32; // w3
  int32_t v33; // w8
  __int64 v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  __int64 v37; // x0
  int32_t v38; // w2
  int32_t v39; // w3
  System_Int32_array *v40; // x0
  int32_t v41; // w2
  int32_t v42; // w3
  __int64 v43; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  __int64 v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  __int64 v49; // x0
  int32_t v50; // w2
  int32_t v51; // w3
  struct BattleData_o *v52; // x8
  int32_t v53; // w21
  bool IsOpponentPTUniqueID; // w0
  bool v56; // [xsp+14h] [xbp-8Ch]
  int32_t v57; // [xsp+18h] [xbp-88h]
  int32_t v58; // [xsp+1Ch] [xbp-84h]
  Il2CppObject *entity; // [xsp+20h] [xbp-80h] BYREF
  bool minimumDamageFlg; // [xsp+28h] [xbp-78h] BYREF
  float damage; // [xsp+2Ch] [xbp-74h] BYREF
  System_Collections_Generic_List_int__o *v62; // [xsp+30h] [xbp-70h] BYREF
  int32_t hitStat; // [xsp+3Ch] [xbp-64h] BYREF

  if ( (byte_4A5DC95 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&BattleActionData_DamageValueFuncDamageData_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMaster_SkillMaster___);
    sub_1B885B0(&DataManager_TypeInfo);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1B885B0(&BattleBuffData_ShowBuffData___TypeInfo);
    byte_4A5DC95 = 1;
  }
  v62 = 0LL;
  damage = 0.0;
  minimumDamageFlg = 0;
  entity = 0LL;
  v15 = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v15, 0LL);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_53;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, playerId, 0LL);
  if ( !this->fields.data )
    goto LABEL_53;
  v18 = (BattleServantData_o *)data;
  v56 = safe;
  v57 = playerId;
  v58 = funcIndex;
  data = (__int64)BattleData__getServantData(this->fields.data, targetId, 0LL);
  if ( !baseVals )
    goto LABEL_53;
  v19 = (BattleServantData_o *)data;
  FixDamageRates = DataVals__GetFixDamageRates(baseVals, 0LL);
  v21 = sub_1B887FC(BattleActionData_DamageValueFuncDamageData_TypeInfo);
  BattleActionData_DamageValueFuncDamageData___ctor(
    (BattleActionData_DamageValueFuncDamageData_o *)v21,
    FixDamageRates,
    0LL);
  LODWORD(FixDamageRates) = DataVals__GetValue(baseVals, 0LL);
  Param = DataVals__GetParam(baseVals, 4, 0, 0LL);
  Random = BattleRandom__getRandom((int32_t)FixDamageRates, Param + 1, 0LL);
  hitStat = 0;
  data = DataVals__IsActNoDamageBuff(baseVals, 0LL);
  if ( (data & 1) != 0 )
  {
    if ( !v19 )
      goto LABEL_53;
    BattleServantData__CheckNoDamageBuff(
      v19,
      this->fields.data,
      v18,
      0LL,
      (BattleActionData_DamageData_o *)v21,
      mainAction,
      0LL);
    damage = (float)Random;
    minimumDamageFlg = 1;
    v24 = v18;
    BattleServantData__CheckInvincibleAvoidanceBuff(
      v19,
      this->fields.data,
      v18,
      0LL,
      (BattleActionData_DamageData_o *)v21,
      &damage,
      &minimumDamageFlg,
      &hitStat,
      mainAction,
      0LL);
    if ( damage <= 0.0 )
      Random = 0;
  }
  else
  {
    v24 = v18;
  }
  IsIgnoreShiftSafeDamage = DataVals__IsIgnoreShiftSafeDamage(baseVals, 0LL);
  v26 = mainAction ? v15 : 0LL;
  if ( mainAction && mainAction->fields.skillInfo )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    data = (__int64)DataManager__GetMaster_object_((const MethodInfo_2E7F8B4 *)Method_DataManager_GetMaster_SkillMaster___);
    skillInfo = mainAction->fields.skillInfo;
    if ( !skillInfo )
      goto LABEL_53;
    v28 = (DataMasterBase_TMaster__TEntity__PKType__o *)data;
    data = ((__int64 (__fastcall *)(struct BattleSkillInfoData_o *, Il2CppMethodPointer))skillInfo->klass->vtable._5_get_skillId.method)(
             mainAction->fields.skillInfo,
             skillInfo->klass->vtable._6_get_IndividualityArray.methodPtr);
    if ( !v28 )
      goto LABEL_53;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           v28,
           &entity,
           data,
           (const MethodInfo_311D988 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    {
      data = (__int64)entity;
      if ( !entity )
        goto LABEL_53;
      IsIgnoreShiftSafeDamage |= SkillEntity__IsCheckUpdateShiftServant((SkillEntity_o *)entity, 0LL);
    }
  }
  else
  {
    v26 = v15;
  }
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_53;
  data = BattleData__IsDeadOkTurn((BattleData_o *)data, targetId, 0LL);
  v29 = (data & 1) != 0 ? 0LL : v26;
  if ( (((unsigned __int8)data | (unsigned __int8)IsIgnoreShiftSafeDamage) & 1) != 0 )
  {
    if ( v56 )
    {
      if ( !v19 )
        goto LABEL_53;
      data = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v19->klass->vtable._13_get_resultHp.method)(
               v19,
               v19->klass->vtable._14_set_resultHp.methodPtr);
      if ( (int)data - Random <= 0 )
      {
        data = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v19->klass->vtable._13_get_resultHp.method)(
                 v19,
                 v19->klass->vtable._14_set_resultHp.methodPtr);
        Random = data - 1;
      }
    }
    v29 = v26;
  }
  else
  {
    if ( !v19 )
      goto LABEL_53;
    v30 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v19->klass->vtable._9_get_hp.method)(
            v19,
            v19->klass->vtable._10_set_hp.methodPtr);
    data = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v19->klass->vtable._11_get_reducedhp.method)(
             v19,
             v19->klass->vtable._12_set_reducedhp.methodPtr);
    if ( v30 - (int)data >= 1 && v30 - (int)data < Random )
      Random = v30 - data - 1;
  }
  if ( !v21 )
    goto LABEL_53;
  *(_DWORD *)(v21 + 28) = targetId;
  *(_DWORD *)(v21 + 16) = v58;
  data = (__int64)baseVals->fields.funcEnt;
  if ( !data )
    goto LABEL_53;
  data = (__int64)FunctionEntity__getEffectList((FunctionEntity_o *)data, 0LL);
  if ( !data )
    goto LABEL_53;
  if ( *(_QWORD *)(data + 24) )
  {
    *(_QWORD *)(v21 + 136) = data;
    sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 136), data, v31, v32);
  }
  *(_WORD *)(v21 + 32) = 0;
  *(_BYTE *)(v21 + 34) = 0;
  v33 = hitStat;
  *(_BYTE *)(v21 + 40) = 0;
  *(_DWORD *)(v21 + 36) = v33;
  v34 = sub_1B88658(BattleBuffData_ShowBuffData___TypeInfo, 0LL);
  *(_QWORD *)(v21 + 64) = v34;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 64), v34, v35, v36);
  v37 = sub_1B88658(BattleBuffData_ShowBuffData___TypeInfo, 0LL);
  *(_QWORD *)(v21 + 72) = v37;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 72), v37, v38, v39);
  (*(void (__fastcall **)(__int64, System_Collections_Generic_List_int__o **, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v21 + 376LL))(
    v21,
    &v62,
    (unsigned int)Random,
    0LL,
    *(_QWORD *)(*(_QWORD *)v21 + 384LL));
  data = (__int64)v62;
  if ( !v62 )
    goto LABEL_53;
  v40 = System_Collections_Generic_List_int___ToArray(
          v62,
          (const MethodInfo_34E22C8 *)Method_System_Collections_Generic_List_int__ToArray__);
  *(_QWORD *)(v21 + 96) = v40;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 96), (int32_t)v40, v41, v42);
  v43 = sub_1B88658(int___TypeInfo, 0LL);
  *(_QWORD *)(v21 + 104) = v43;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 104), v43, v44, v45);
  v46 = sub_1B88658(int___TypeInfo, 0LL);
  *(_QWORD *)(v21 + 112) = v46;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 112), v46, v47, v48);
  v49 = sub_1B88658(int___TypeInfo, 0LL);
  *(_QWORD *)(v21 + 120) = v49;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v21 + 120), v49, v50, v51);
  if ( !v19 )
    goto LABEL_53;
  BattleServantData__provisionalDamage(v19, Random, 0LL);
  BattleServantData__ResultDamage(v19, Random, v24, 0LL, 0LL, 0, 0LL);
  data = BattleServantData__isLogicResultAlive(v19, 0LL);
  if ( (data & 1) == 0 )
  {
    v52 = this->fields.data;
    if ( !v52 )
      goto LABEL_53;
    v19->fields.deadTurn = v52->fields.typeTurn;
  }
  data = DataVals__IsActAttackFunction(baseVals, 0LL);
  if ( (data & 1) != 0 )
    BattleActionData_DamageData__addAttackSideEffectAction((BattleActionData_DamageData_o *)v21, 80, 0LL);
  if ( !v29
    || (BattleActionData__SetFuncDamageData(v29, (BattleActionData_DamageData_o *)v21, baseVals, 0LL),
        (data = (__int64)this->fields.data) == 0) )
  {
LABEL_53:
    sub_1B8880C(data, v16);
  }
  v53 = *(_DWORD *)(data + 196);
  IsOpponentPTUniqueID = BattleData__IsOpponentPTUniqueID((BattleData_o *)data, targetId, v57, 0LL);
  BattleServantData__setActionHistory(v19, v57, 7, v53, IsOpponentPTUniqueID, 0LL);
  return v29;
}


BattleActionData_o *__fastcall BattleLogicFunction__functionlossHp(
        BattleLogicFunction_o *this,
        int32_t playerId,
        int32_t targetId,
        FunctionEntity_o *funcEnt,
        DataVals_o *baseVals,
        int32_t funcIndex,
        bool safe,
        bool isCommandSideEffect,
        int32_t overwriteLossHp,
        bool isRandomDamage,
        BattleActionData_o *mainAction,
        const MethodInfo *method)
{
  BattleActionData_o *v20; // x21
  __int64 v21; // x1
  __int64 data; // x0
  int Random; // w27
  BattleServantData_o *v24; // x24
  int v25; // w23
  int32_t Param; // w0
  _BOOL8 IsDeadOkTurn; // x0
  const MethodInfo *v28; // x6
  BattleActionData_BuffData_o *v29; // x29
  BattleServantData_o *v30; // x28
  __int64 v31; // x25
  int32_t v32; // w2
  int32_t v33; // w3
  struct BattleBuffData_o *buffData; // x8
  _QWORD *v35; // x23
  __int64 v36; // x8
  __int64 v37; // x0
  __int64 v38; // x0
  __int64 *v39; // x8
  __int64 v40; // x23
  int32_t v41; // w2
  int32_t v42; // w3
  int32_t v43; // w2
  int32_t v44; // w3
  _QWORD *v45; // x23
  __int64 v46; // x8
  __int64 v47; // x0
  __int64 v48; // x0
  __int64 *v49; // x8
  __int64 v50; // x23
  int32_t v51; // w2
  int32_t v52; // w3
  int32_t v53; // w2
  int32_t v54; // w3
  struct BattleBuffData_o *v55; // x8
  ServantStatusBattleListViewItem_o *p_invalidLossHpData; // x0
  int32_t v57; // w1
  bool v58; // w25
  UnityEngine_Object_o *logic; // x23
  int32_t Wave; // w23
  bool IsOpponentPTUniqueID; // w0
  BattleActionEffect_LossHPFunc_o *v62; // x23
  BattleActionData_BuffData_o *v63; // x0
  struct BattleBuffData_o *v64; // x8
  int32_t v65; // w0
  int32_t v67; // [xsp+18h] [xbp-78h]
  int32_t v68; // [xsp+1Ch] [xbp-74h]
  bool v69; // [xsp+20h] [xbp-70h]
  bool v70; // [xsp+24h] [xbp-6Ch]
  bool minimumDamageFlg; // [xsp+28h] [xbp-68h] BYREF
  float damage; // [xsp+2Ch] [xbp-64h] BYREF

  if ( (byte_4A5DC86 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_int___);
    sub_1B885B0(&Method_System_Array_Empty_BattleBuffData_ShowBuffData___);
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&BattleActionData_DamageData_TypeInfo);
    sub_1B885B0(&BattleActionEffect_LossHPFunc_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5DC86 = 1;
  }
  damage = 0.0;
  minimumDamageFlg = 0;
  v20 = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v20, 0LL);
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_67;
  v70 = safe;
  data = (__int64)BattleData__getServantData((BattleData_o *)data, targetId, 0LL);
  if ( !data )
    goto LABEL_67;
  Random = overwriteLossHp;
  v24 = (BattleServantData_o *)data;
  data = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)data + 520LL))(
           data,
           *(_QWORD *)(*(_QWORD *)data + 528LL));
  v25 = data;
  if ( overwriteLossHp == -1 )
  {
    if ( !baseVals )
      goto LABEL_67;
    data = DataVals__GetValue(baseVals, 0LL);
    Random = data;
  }
  if ( isRandomDamage )
  {
    if ( !baseVals )
      goto LABEL_67;
    Param = DataVals__GetParam(baseVals, 4, 0, 0LL);
    if ( Param >= 1 )
      Random = BattleRandom__getRandom(Random, Param + 1, 0LL);
  }
  if ( v25 < 1 )
    return 0LL;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_67;
  IsDeadOkTurn = BattleData__IsDeadOkTurn((BattleData_o *)data, targetId, 0LL);
  v68 = funcIndex;
  v69 = IsDeadOkTurn;
  data = (__int64)BattleLogicFunction__getFunctionObject(
                    (BattleLogicFunction_o *)IsDeadOkTurn,
                    funcEnt,
                    v24->fields.uniqueId,
                    funcIndex,
                    isCommandSideEffect,
                    0LL,
                    v28);
  if ( !this->fields.data )
    goto LABEL_67;
  v29 = (BattleActionData_BuffData_o *)data;
  data = (__int64)BattleData__getServantData(this->fields.data, playerId, 0LL);
  if ( !baseVals )
    goto LABEL_67;
  v30 = (BattleServantData_o *)data;
  v67 = v25;
  if ( DataVals__IsActNoDamageBuff(baseVals, 0LL) )
  {
    v31 = sub_1B887FC(BattleActionData_DamageData_TypeInfo);
    BattleActionData_DamageData___ctor((BattleActionData_DamageData_o *)v31, 0LL);
    BattleServantData__CheckNoDamageBuff(
      v24,
      this->fields.data,
      v30,
      0LL,
      (BattleActionData_DamageData_o *)v31,
      mainAction,
      0LL);
    damage = (float)Random;
    minimumDamageFlg = 1;
    if ( !v31 )
      goto LABEL_67;
    *(_DWORD *)(v31 + 36) = 0;
    BattleServantData__CheckInvincibleAvoidanceBuff(
      v24,
      this->fields.data,
      v30,
      0LL,
      (BattleActionData_DamageData_o *)v31,
      &damage,
      &minimumDamageFlg,
      (int32_t *)(v31 + 36),
      mainAction,
      0LL);
    buffData = v24->fields.buffData;
    if ( damage <= 0.0 )
      Random = 0;
    if ( !buffData )
      goto LABEL_67;
    if ( buffData->fields.isNoDamage )
    {
      v35 = Method_System_Array_Empty_BattleBuffData_ShowBuffData___;
      v36 = *((_QWORD *)Method_System_Array_Empty_BattleBuffData_ShowBuffData___ + 7);
      if ( !v36 )
      {
        sub_1BDA4E8(Method_System_Array_Empty_BattleBuffData_ShowBuffData___);
        v36 = v35[7];
      }
      v37 = *(_QWORD *)(v36 + 16);
      if ( (*(_BYTE *)(v37 + 309) & 1) == 0 )
        v37 = sub_1BDA48C(v37);
      if ( !*(_DWORD *)(v37 + 224) )
        j_il2cpp_runtime_class_init_0(v37);
      v38 = *(_QWORD *)(v35[7] + 16LL);
      if ( (*(_BYTE *)(v38 + 309) & 1) == 0 )
        v38 = sub_1BDA48C(v38);
      v39 = *(__int64 **)(v38 + 184);
      v40 = *v39;
      *(_QWORD *)(v31 + 72) = *v39;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v31 + 72), v40, v32, v33);
      *(_QWORD *)(v31 + 64) = v40;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v31 + 64), v40, v41, v42);
      v45 = Method_System_Array_Empty_int___;
      v46 = *((_QWORD *)Method_System_Array_Empty_int___ + 7);
      if ( !v46 )
      {
        sub_1BDA4E8(Method_System_Array_Empty_int___);
        v46 = v45[7];
      }
      v47 = *(_QWORD *)(v46 + 16);
      if ( (*(_BYTE *)(v47 + 309) & 1) == 0 )
        v47 = sub_1BDA48C(v47);
      if ( !*(_DWORD *)(v47 + 224) )
        j_il2cpp_runtime_class_init_0(v47);
      v48 = *(_QWORD *)(v45[7] + 16LL);
      if ( (*(_BYTE *)(v48 + 309) & 1) == 0 )
        v48 = sub_1BDA48C(v48);
      v49 = *(__int64 **)(v48 + 184);
      v50 = *v49;
      *(_QWORD *)(v31 + 120) = *v49;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v31 + 120), v50, v43, v44);
      *(_QWORD *)(v31 + 112) = v50;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v31 + 112), v50, v51, v52);
      *(_QWORD *)(v31 + 104) = v50;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v31 + 104), v50, v53, v54);
      v55 = v24->fields.buffData;
      if ( !v55 )
        goto LABEL_67;
      *(_BYTE *)(v31 + 53) = v55->fields.isNoDamage;
      if ( !v29 )
        goto LABEL_67;
      v29->fields.invalidLossHpData = (struct BattleActionData_DamageData_o *)v31;
      p_invalidLossHpData = (ServantStatusBattleListViewItem_o *)&v29->fields.invalidLossHpData;
      v57 = v31;
    }
    else
    {
      if ( !v29 )
        goto LABEL_67;
      v29->fields.invalidLossHpData = 0LL;
      p_invalidLossHpData = (ServantStatusBattleListViewItem_o *)&v29->fields.invalidLossHpData;
      v57 = 0;
    }
    sub_1B88554(p_invalidLossHpData, v57, v32, v33);
  }
  v58 = !v69 || v70;
  BattleServantData__ResultDamage(v24, Random, v30, 0LL, 0LL, v58, 0LL);
  logic = (UnityEngine_Object_o *)this->fields.logic;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(logic, 0LL, 0LL) )
  {
    data = (__int64)this->fields.logic;
    if ( !data )
      goto LABEL_67;
    Wave = BattleLogic__getWave((BattleLogic_o *)data, 0LL);
  }
  else
  {
    Wave = 0;
  }
  data = (__int64)this->fields.data;
  if ( !data
    || (IsOpponentPTUniqueID = BattleData__IsOpponentPTUniqueID((BattleData_o *)data, targetId, playerId, 0LL),
        BattleServantData__setActionHistory(v24, playerId, 3, Wave, IsOpponentPTUniqueID, 0LL),
        !v29)
    || (v29->fields.procType = 2,
        v62 = (BattleActionEffect_LossHPFunc_o *)sub_1B887FC(BattleActionEffect_LossHPFunc_TypeInfo),
        BattleActionEffect_LossHPFunc___ctor(v62, targetId, Random, v58, 0LL),
        BattleActionData_BuffData__SetActionEffectProc(v29, (BattleActionEffect_Base_o *)v62, 0LL),
        !v20) )
  {
LABEL_67:
    sub_1B8880C(data, v21);
  }
  BattleActionData__setBuffData(v20, v29, baseVals, 0LL);
  data = DataVals__isLossHpChangeDamage(baseVals, 0LL);
  if ( (data & 1) != 0 )
  {
    if ( !DataVals__IsActNoDamageBuff(baseVals, 0LL) )
    {
      data = (__int64)v24->fields.buffData;
      if ( !data )
        goto LABEL_67;
      goto LABEL_61;
    }
    data = DataVals__IsActNoDamageBuff(baseVals, 0LL);
    if ( (data & 1) != 0 )
    {
      data = (__int64)v24->fields.buffData;
      if ( !data )
        goto LABEL_67;
      if ( !*(_BYTE *)(data + 152) )
      {
LABEL_61:
        v63 = BattleBuffData__UseFieldProgressingDoNotAct((BattleBuffData_o *)data, v24, v68, 0LL);
        BattleActionData__setBuffData(v20, v63, baseVals, 0LL);
      }
    }
  }
  v64 = v24->fields.buffData;
  if ( !v64 )
    goto LABEL_67;
  v64->fields.isNoDamage = 0;
  data = (__int64)this->fields.data;
  if ( !data )
    goto LABEL_67;
  if ( v24->fields.isEnemy != BattleData__isEnemyID((BattleData_o *)data, playerId, 0LL) )
  {
    v65 = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))v24->klass->vtable._13_get_resultHp.method)(
            v24,
            v24->klass->vtable._14_set_resultHp.methodPtr);
    BattleServantData__procAccumulationDamage(v24, v67, v65, 0LL);
  }
  return v20;
}


FunctionMaster_o *__fastcall BattleLogicFunction__getFuncMaster(BattleLogicFunction_o *this, const MethodInfo *method)
{
  FunctionMaster_o *result; // x0
  ServantStatusBattleListViewItem_o *p_master; // x19
  FunctionMaster_o *master; // t1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5DC67 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5DC67 = 1;
  }
  master = this->fields.master;
  p_master = (ServantStatusBattleListViewItem_o *)&this->fields.master;
  result = master;
  if ( !master )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      sub_1B8880C(0LL, v7);
    MasterData_object = DataManager__GetMasterData_object_(
                          (DataManager_o *)Instance,
                          (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_FunctionMaster___);
    p_master->klass = (ServantStatusBattleListViewItem_c *)MasterData_object;
    sub_1B88554(p_master, (int32_t)MasterData_object, v9, v10);
    return (FunctionMaster_o *)p_master->klass;
  }
  return result;
}


FunctionEntity_o *__fastcall BattleLogicFunction__getFunctionEntity(
        BattleLogicFunction_o *this,
        int32_t id,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  ServantStatusBattleListViewItem_o *p_master; // x20
  struct FunctionMaster_o *master; // t1
  __int64 v8; // x1
  Il2CppObject *MasterData_object; // x0
  int32_t v10; // w2
  int32_t v11; // w3

  if ( (byte_4A5DC66 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_FunctionMaster___);
    sub_1B885B0(&Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4A5DC66 = 1;
  }
  master = this->fields.master;
  p_master = (ServantStatusBattleListViewItem_o *)&this->fields.master;
  Instance = (Il2CppObject *)master;
  if ( !master )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance
      || (MasterData_object = DataManager__GetMasterData_object_(
                                (DataManager_o *)Instance,
                                (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_FunctionMaster___),
          p_master->klass = (ServantStatusBattleListViewItem_c *)MasterData_object,
          sub_1B88554(p_master, (int32_t)MasterData_object, v10, v11),
          (Instance = (Il2CppObject *)p_master->klass) == 0LL) )
    {
      sub_1B8880C(Instance, v8);
    }
  }
  return (FunctionEntity_o *)DataMasterBase_object__object__int___GetEntity(
                               (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                               id,
                               (const MethodInfo_311D934 *)Method_DataMasterBase_FunctionMaster__FunctionEntity__int__GetEntity__);
}


BattleActionData_BuffData_o *__fastcall BattleLogicFunction__getFunctionObject(
        BattleLogicFunction_o *this,
        FunctionEntity_o *funcEnt,
        int32_t uniqueId,
        int32_t funcIndex,
        bool isCommandSideEffect,
        BattleActionData_BuffData_o *defBuffData,
        const MethodInfo *method)
{
  struct System_String_o *popupText; // x1
  struct System_Int32_array *EffectList; // x0
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_4A5DC8F & 1) == 0 )
  {
    this = (BattleLogicFunction_o *)sub_1B885B0(&BattleActionData_BuffData_TypeInfo);
    byte_4A5DC8F = 1;
  }
  if ( !defBuffData
    && (defBuffData = (BattleActionData_BuffData_o *)sub_1B887FC(BattleActionData_BuffData_TypeInfo),
        BattleActionData_BuffData___ctor(defBuffData, 0LL),
        !defBuffData)
    || (defBuffData->fields.targetId = uniqueId, defBuffData->fields.functionIndex = funcIndex, !funcEnt) )
  {
    sub_1B8880C(this, funcEnt);
  }
  popupText = funcEnt->fields.popupText;
  defBuffData->fields.popLabel = popupText;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&defBuffData->fields.popLabel,
    (int32_t)popupText,
    uniqueId,
    funcIndex);
  *(_QWORD *)&defBuffData->fields.popIcon = *(_QWORD *)&funcEnt->fields.popupIconId;
  EffectList = FunctionEntity__getEffectList(funcEnt, 0LL);
  defBuffData->fields.effectList = EffectList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&defBuffData->fields.effectList, (int32_t)EffectList, v14, v15);
  defBuffData->fields.isCommandAfter = isCommandSideEffect;
  defBuffData->fields.procType = 0;
  return defBuffData;
}


// local variable allocation has failed, the output may be wrong!
BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *__fastcall BattleLogicFunction__getFunctionTypeProcess(
        BattleLogicFunction_o *this,
        int32_t functType,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *dicFuncProcess; // x0
  int32_t v6; // w1
  BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *v7; // x20

  if ( (byte_4A5DC6B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__get_Item__);
    byte_4A5DC6B = 1;
  }
  dicFuncProcess = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicFuncProcess;
  if ( !dicFuncProcess
    || (dicFuncProcess = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___ContainsKey(
                                                                                    dicFuncProcess,
                                                                                    functType,
                                                                                    (const MethodInfo_319D434 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__ContainsKey__),
        !this->fields.dicFuncProcess)
    || (((unsigned __int8)dicFuncProcess & 1) == 0 ? (v6 = 0) : (v6 = functType),
        (dicFuncProcess = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Collections_Generic_Dictionary_Int32Enum__object___get_Item(
                                                                                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.dicFuncProcess,
                                                                                     v6,
                                                                                     (const MethodInfo_319D1A0 *)Method_System_Collections_Generic_Dictionary_FuncList_TYPE__BattleLogicFunctionProcess_BaseFunctionTypeProcess__get_Item__)) == 0LL) )
  {
    sub_1B8880C(dicFuncProcess, *(_QWORD *)&functType);
  }
  v7 = (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)dicFuncProcess;
  if ( BattleLogicFunctionProcess_BaseFunctionTypeProcess__IsNeedInit(
         (BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *)dicFuncProcess,
         this,
         0LL) )
  {
    ((void (__fastcall *)(BattleLogicFunctionProcess_BaseFunctionTypeProcess_o *, BattleLogicFunction_o *, Il2CppMethodPointer))v7->klass->vtable._4_init.method)(
      v7,
      this,
      v7->klass->vtable._5_IsPreCheckTargetsAvailable.methodPtr);
  }
  return v7;
}


BattleActionData_o *__fastcall BattleLogicFunction__getGrayPopupActionData(
        BattleLogicFunction_o *this,
        int32_t targetId,
        int32_t funcIndex,
        FunctionEntity_o *funcEnt,
        const MethodInfo *method)
{
  BattleActionData_o *v8; // x20
  BattleActionData_BuffData_o *GrayActionBuffData; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x6

  if ( (byte_4A5DC7C & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    byte_4A5DC7C = 1;
  }
  v8 = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v8, 0LL);
  if ( !funcEnt
    || (GrayActionBuffData = BattleLogicFunction__MakeGrayActionBuffData(
                               (BattleLogicFunction_o *)GrayActionBuffData,
                               targetId,
                               funcIndex,
                               funcEnt->fields.popupIconId,
                               funcEnt->fields.popupText,
                               funcEnt->fields.popupTextColor,
                               v11),
        !v8) )
  {
    sub_1B8880C(GrayActionBuffData, v10);
  }
  BattleActionData__setBuffData(v8, GrayActionBuffData, 0LL, 0LL);
  return v8;
}


int32_t __fastcall BattleLogicFunction__getHpPerValue(
        BattleLogicFunction_o *this,
        DataVals_o *baseVals,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  int32_t MaxHp; // w0

  if ( !baseVals || (this = (BattleLogicFunction_o *)DataVals__isParam(baseVals, 118, 0LL), !targetSvtData) )
    sub_1B8880C(this, baseVals);
  if ( ((unsigned __int8)this & 1) != 0 )
    MaxHp = ((__int64 (__fastcall *)(BattleServantData_o *, Il2CppMethodPointer))targetSvtData->klass->vtable._13_get_resultHp.method)(
              targetSvtData,
              targetSvtData->klass->vtable._14_set_resultHp.methodPtr);
  else
    MaxHp = BattleServantData__getMaxHp(targetSvtData, 0LL);
  return DataVals__GetValue(baseVals, 0LL) * MaxHp / 1000;
}


BattleActionData_o *__fastcall BattleLogicFunction__getInvalidObject(
        BattleLogicFunction_o *this,
        int32_t targetId,
        int32_t funcIndex,
        bool isHide,
        System_String_o *dispName,
        DataVals_o *dataVals,
        bool isCommandSideEffect,
        bool isNoEffect,
        BattleActionData_BuffData_o *defBuffData,
        const MethodInfo *method)
{
  BattleActionData_BuffData_o *v10; // x20
  BattleActionData_o *v18; // x23
  int32_t v19; // w2
  int32_t v20; // w3
  __int64 v21; // x0
  __int64 v22; // x1
  __int64 v23; // x0
  int32_t v24; // w2
  int32_t v25; // w3

  v10 = defBuffData;
  if ( (byte_4A5DC78 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_TypeInfo);
    sub_1B885B0(&BattleActionData_BuffData_TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5DC78 = 1;
  }
  v18 = (BattleActionData_o *)sub_1B887FC(BattleActionData_TypeInfo);
  BattleActionData___ctor(v18, 0LL);
  if ( !defBuffData )
  {
    v10 = (BattleActionData_BuffData_o *)sub_1B887FC(BattleActionData_BuffData_TypeInfo);
    BattleActionData_BuffData___ctor(v10, 0LL);
    if ( !v10 )
      goto LABEL_10;
  }
  v10->fields.functionIndex = funcIndex;
  v10->fields.isMiss = 1;
  v10->fields.targetId = targetId;
  v10->fields.buffId = 0;
  if ( isHide )
    dispName = (System_String_o *)StringLiteral_1/*""*/;
  v10->fields.popLabel = dispName;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->fields.popLabel, (int32_t)dispName, v19, v20);
  v23 = sub_1B88658(int___TypeInfo, 0LL);
  v10->fields.effectList = (struct System_Int32_array *)v23;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->fields.effectList, v23, v24, v25);
  if ( !v18
    || (BattleActionData__setBuffData(v18, v10, 0LL, 0LL),
        v10->fields.IsNoEffect = isNoEffect,
        v10->fields.isCommandAfter = isCommandSideEffect,
        !dataVals) )
  {
LABEL_10:
    sub_1B8880C(v21, v22);
  }
  v10->fields.popDelay = DataVals__GetParam(dataVals, 64, 0, 0LL);
  v18->fields.funcResult = 0;
  return v18;
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *__fastcall BattleLogicFunction__getMissObject(
        BattleLogicFunction_o *this,
        int32_t targetId,
        int32_t funcIndex,
        DataVals_o *dataVals,
        bool isCommandSideEffect,
        System_String_o *uniqueText,
        BattleActionData_BuffData_o *defBuffData,
        const MethodInfo *method)
{
  System_String_o *v9; // x24
  _BOOL8 isHideMiss; // x0
  const MethodInfo *v16; // [xsp+8h] [xbp-48h]

  v9 = uniqueText;
  if ( (byte_4A5DC79 & 1) != 0 )
  {
    if ( uniqueText )
      goto LABEL_3;
  }
  else
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1B885B0(&StringLiteral_2921/*"BATTLE_MISS_FUNCTION"*/);
    byte_4A5DC79 = 1;
    if ( v9 )
    {
LABEL_3:
      if ( dataVals )
        goto LABEL_4;
LABEL_9:
      sub_1B8880C(this, *(_QWORD *)&targetId);
    }
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (BattleLogicFunction_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2921/*"BATTLE_MISS_FUNCTION"*/, 0LL);
  v9 = (System_String_o *)this;
  if ( !dataVals )
    goto LABEL_9;
LABEL_4:
  isHideMiss = DataVals__isHideMiss(dataVals, 0LL);
  return BattleLogicFunction__getInvalidObject(
           (BattleLogicFunction_o *)isHideMiss,
           targetId,
           funcIndex,
           isHideMiss,
           v9,
           dataVals,
           isCommandSideEffect,
           0,
           defBuffData,
           v16);
}


// local variable allocation has failed, the output may be wrong!
BattleActionData_o *__fastcall BattleLogicFunction__getNoEffectObject(
        BattleLogicFunction_o *this,
        int32_t targetId,
        int32_t funcIndex,
        DataVals_o *dataVals,
        bool isCommandSideEffect,
        System_String_o *uniqueText,
        BattleActionData_BuffData_o *defBuffData,
        const MethodInfo *method)
{
  System_String_o *v9; // x24
  _BOOL8 IsHideNoEffect; // x0
  const MethodInfo *v16; // [xsp+8h] [xbp-48h]

  v9 = uniqueText;
  if ( (byte_4A5DC7A & 1) != 0 )
  {
    if ( uniqueText )
      goto LABEL_3;
  }
  else
  {
    sub_1B885B0(&LocalizationManager_TypeInfo);
    this = (BattleLogicFunction_o *)sub_1B885B0(&StringLiteral_2932/*"BATTLE_NO_EFFECT_FUNCTION"*/);
    byte_4A5DC7A = 1;
    if ( v9 )
    {
LABEL_3:
      if ( dataVals )
        goto LABEL_4;
LABEL_9:
      sub_1B8880C(this, *(_QWORD *)&targetId);
    }
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  this = (BattleLogicFunction_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2932/*"BATTLE_NO_EFFECT_FUNCTION"*/, 0LL);
  v9 = (System_String_o *)this;
  if ( !dataVals )
    goto LABEL_9;
LABEL_4:
  IsHideNoEffect = DataVals__IsHideNoEffect(dataVals, targetId, 0LL);
  return BattleLogicFunction__getInvalidObject(
           (BattleLogicFunction_o *)IsHideNoEffect,
           targetId,
           funcIndex,
           IsHideNoEffect,
           v9,
           dataVals,
           isCommandSideEffect,
           1,
           defBuffData,
           v16);
}


System_Int32_array *__fastcall BattleLogicFunction__getTargetids(
        BattleLogicFunction_o *this,
        BattleActionData_o *mainAction,
        int32_t targetType,
        DataVals_o *dataVals,
        const MethodInfo *method)
{
  Target_BattleTargetArgs_o *args; // x23
  __int64 v10; // x0
  __int64 v11; // x1
  BattleData_o *data; // x22
  int32_t actorId; // w24
  int32_t targetId; // w25
  int32_t PTTargetId; // w0
  System_Collections_Generic_IEnumerable_TSource__o *TargetIds_37713320; // x20
  System_Func_int__bool__o *v17; // x21
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0

  if ( (byte_4A5DC72 & 1) == 0 )
  {
    sub_1B885B0(&Method_BattleLogicFunction__getTargetids_b__55_0__);
    sub_1B885B0(&Target_BattleTargetArgs_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_int___);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    byte_4A5DC72 = 1;
  }
  args = (Target_BattleTargetArgs_o *)sub_1B887FC(Target_BattleTargetArgs_TypeInfo);
  Target_BattleTargetArgs___ctor(args, dataVals, 0LL);
  if ( !mainAction )
    sub_1B8880C(v10, v11);
  data = this->fields.data;
  actorId = mainAction->fields.actorId;
  targetId = mainAction->fields.targetId;
  PTTargetId = BattleActionData__getPTTargetId(mainAction, 0LL);
  TargetIds_37713320 = (System_Collections_Generic_IEnumerable_TSource__o *)Target__getTargetIds_37713320(
                                                                              data,
                                                                              actorId,
                                                                              targetId,
                                                                              PTTargetId,
                                                                              targetType,
                                                                              0,
                                                                              0,
                                                                              0LL,
                                                                              0,
                                                                              args,
                                                                              0LL);
  v17 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
  System_Func_int__bool____ctor(v17, (Il2CppObject *)this, Method_BattleLogicFunction__getTargetids_b__55_0__, 0LL);
  v18 = System_Linq_Enumerable__Where_int_(
          TargetIds_37713320,
          (System_Func_TSource__bool__o *)v17,
          (const MethodInfo_2EBDDA8 *)Method_System_Linq_Enumerable_Where_int___);
  return System_Linq_Enumerable__ToArray_int_(
           v18,
           (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
}


BattleFieldEnvironmentData_o *__fastcall BattleLogicFunction__get_FieldEnvData(
        BattleLogicFunction_o *this,
        const MethodInfo *method)
{
  struct BattleData_o *data; // x8

  data = this->fields.data;
  if ( !data )
    sub_1B8880C(this, method);
  return data->fields._FieldEnvData_k__BackingField;
}


bool __fastcall BattleLogicFunction__isDisabledBuff(
        BattleLogicFunction_o *this,
        bool passive,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  _BOOL4 v5; // w20
  bool isParam; // w0
  int v8; // w20

  if ( !baseVals )
    sub_1B8880C(this, passive);
  v5 = passive;
  if ( DataVals__isParam(baseVals, 50, 0LL) || DataVals__isParam(baseVals, 87, 0LL) )
    return 1;
  isParam = DataVals__isParam(baseVals, 112, 0LL);
  if ( isParam || !v5 )
    return isParam;
  v8 = DataVals__isParam(baseVals, 23, 0LL) || v5;
  return v8 & ~DataVals__isParam(baseVals, 24, 0LL) & 1;
}


bool __fastcall BattleLogicFunction__isFailDependentLastResult(
        BattleLogicFunction_o *this,
        BattleLogicFunction_ProcListInArgs_o *args,
        int32_t targetId,
        DataVals_o *baseVals,
        const MethodInfo *method)
{
  BattleLogicFunction_o *v8; // x22
  int v9; // w23
  bool HaveSpecifyResults; // w0

  if ( !baseVals || (v8 = this, this = (BattleLogicFunction_o *)DataVals__GetParam(baseVals, 0, 0, 0LL), !args) )
    sub_1B8880C(this, args);
  v9 = (int)this;
  HaveSpecifyResults = BattleLogicFunction_ProcListInArgs__DidTriggeredFuncHaveSpecifyResults(
                         args,
                         targetId,
                         baseVals,
                         v8->fields.data,
                         0LL);
  if ( (v9 & 0x80000000) != 0 && HaveSpecifyResults )
    HaveSpecifyResults = BattleLogicFunction_ProcListInArgs__isPrevFuncSuccess(
                           args,
                           targetId,
                           baseVals->fields.funcIndex,
                           0LL);
  return !HaveSpecifyResults;
}


bool __fastcall BattleLogicFunction__isSafeDamage(
        BattleLogicFunction_o *this,
        DataVals_o *baseVals,
        int32_t targetId,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x2

  if ( !baseVals )
    sub_1B8880C(this, 0LL);
  return !DataVals__IsEvenIfWinDie(baseVals, 0LL) && BattleLogicFunction__IsSafeWin(this, targetId, v6);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall BattleLogicFunction__isSelectTarget(
        BattleLogicFunction_o *this,
        int32_t uniqueId,
        System_Int32_array *funclist,
        const MethodInfo *method)
{
  __int64 v4; // x8
  bool v6; // w21
  BattleLogicFunction_o *v7; // x20
  unsigned __int64 v8; // x22

  if ( !funclist )
    goto LABEL_10;
  v4 = *(_QWORD *)&funclist->max_length;
  v6 = (int)v4 > 0;
  if ( (int)v4 >= 1 )
  {
    v7 = this;
    v8 = 0LL;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)v4 )
        sub_1B88814(this, *(_QWORD *)&uniqueId);
      this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionEntity(
                                        v7,
                                        funclist->m_Items[v8 + 1],
                                        (const MethodInfo *)funclist);
      if ( !this )
        break;
      this = (BattleLogicFunction_o *)Target__isChoose(HIDWORD(this->fields.logic), 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        LODWORD(v4) = funclist->max_length;
        v6 = (__int64)++v8 < (int)v4;
        if ( (__int64)v8 < (int)v4 )
          continue;
      }
      return v6;
    }
LABEL_10:
    sub_1B8880C(this, *(_QWORD *)&uniqueId);
  }
  return v6;
}


bool __fastcall BattleLogicFunction__isTreasureCommand(
        BattleLogicFunction_o *this,
        bool isTreasureDvc,
        int32_t funcType,
        const MethodInfo *method)
{
  return FuncList__Check(26, funcType, 0LL) || isTreasureDvc;
}


BattleActionData_o *__fastcall BattleLogicFunction__procList(
        BattleLogicFunction_o *this,
        BattleActionData_o *action,
        System_Int32_array *functionlist,
        DataVals_array *baseValslist,
        bool passive,
        bool isReduceReset,
        bool isCommandSideEffect,
        bool isShift,
        bool isTreasureDvc,
        bool isBuffUpdate,
        bool isCreateSideEffect,
        BattleLogicFunction_FunctionArgument_o *argument,
        int32_t skillId,
        const MethodInfo *method)
{
  BattleActionData_o *v19; // x19
  BattleLogicFunction_o *v20; // x20
  System_String_o *v21; // x0
  System_String_o *v22; // x0
  int32_t PTSubTargetId; // w29
  System_String_o *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  struct BattleData_o *data; // x8
  UnityEngine_Object_o *logic; // x24
  BattleLogicFunction_ProcListInArgs_o *v29; // x24
  int32_t *p_actSetId; // x24
  WeightRate_int__o *v31; // x23
  signed int max_length; // w8
  unsigned int v33; // w28
  Il2CppClass **v34; // x8
  DataVals_o *v35; // x25
  int32_t ActSetWeight; // w26
  int32_t Random; // w0
  System_String_o *v38; // x0
  BattleLogicFunction___c_c *v39; // x0
  System_Object_array *funcUnitArray_k__BackingField; // x21
  System_Func_object__bool__o *_9__41_0; // x22
  Il2CppObject *v42; // x23
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v44; // w2
  int32_t v45; // w3
  BattleLogicFunction___c_c *v46; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v47; // x21
  System_Func_object__bool__o *_9__41_1; // x22
  Il2CppObject *v49; // x23
  struct BattleLogicFunction___c_StaticFields *v50; // x0
  int32_t v51; // w2
  int32_t v52; // w3
  int v53; // w21
  bool v54; // w22
  BattleServantData_o *v55; // x25
  SkillValueUpApplierPlayerMaster_o *v56; // x23
  BattleData_o *v57; // x21
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *v58; // x8
  int v59; // w8
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *v60; // x23
  BattleLogicFunction_FuncSideEffectFunctionArgument_o *v61; // x26
  int v62; // w27
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v63; // x21
  DataVals_o *dataVals_k__BackingField; // x29
  const MethodInfo *v65; // x3
  const MethodInfo *v66; // x4
  BattleLogicFunction___c_c *v67; // x0
  System_Collections_Generic_IEnumerable_TSource__o *funcTargetArray_k__BackingField; // x21
  System_Func_object__bool__o *_9__41_2; // x27
  Il2CppObject *v70; // x28
  struct BattleLogicFunction___c_StaticFields *v71; // x0
  int32_t v72; // w2
  int32_t v73; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v74; // x21
  BattleLogicFunction___c_c *v75; // x8
  System_Func_object__int__o *_9__41_3; // x27
  Il2CppObject *v77; // x28
  struct BattleLogicFunction___c_StaticFields *v78; // x0
  int32_t v79; // w2
  int32_t v80; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v81; // x0
  System_Int32_array *v82; // x21
  bool v83; // w27
  BattleLogicFunction_PreAttackSideEffectMakeArgument_o *v84; // x28
  BattleLogicFunction_SideEffectMakeArgument_o *v85; // x0
  const MethodInfo *v86; // x5
  struct BattleLogicFunctionProcess_FunctionTargetCheck_array *v87; // x23
  int v88; // w8
  int i; // w25
  BattleLogicFunctionProcess_FunctionTargetCheck_o *v90; // x28
  int32_t targetId_k__BackingField; // w21
  BattleLogicFunction_o *v92; // x27
  const MethodInfo *v93; // x7
  BattleActionData_o *NoEffectObject; // x0
  int32_t *v95; // x24
  struct System_Int32_array *vals; // x8
  int commandType; // w8
  BattleActionData_o *v98; // x0
  bool v99; // w0
  const MethodInfo *v100; // x5
  const MethodInfo *v101; // x3
  int32_t actorId; // w28
  int32_t v103; // w22
  bool isSafeDamage; // w0
  int32_t v105; // w2
  const MethodInfo *v106; // x7
  const MethodInfo *v107; // x7
  int32_t v108; // w1
  int32_t v109; // w2
  int32_t v110; // w5
  bool isDamage; // w0
  int v112; // w9
  int v113; // w8
  struct System_Int32_array *items; // x8
  _QWORD *v115; // x9
  __int64 size; // x10
  BattleActionData_o *v117; // x0
  const MethodInfo *v118; // x4
  BattleData_o *v119; // x28
  int32_t Value; // w24
  BattleLogicFunction_o *v121; // x0
  const MethodInfo *v122; // x6
  BattleData_o *v123; // x28
  const MethodInfo *v124; // x7
  bool isUnaffected; // w22
  int CorrectedValueFuncGainNp; // w28
  const MethodInfo *v127; // x7
  BattleLogicFunction_o *v128; // x0
  int32_t v129; // w22
  const MethodInfo *v130; // x6
  BattleActionData_BuffData_o *v131; // x28
  int32_t v132; // w0
  BattleLogicFunction_o *v133; // x0
  int32_t v134; // w24
  const MethodInfo *v135; // x6
  int32_t v136; // w1
  int32_t v137; // w22
  System_Int32_array *TargetList; // x28
  int32_t v139; // w0
  const MethodInfo *v140; // x6
  int32_t v141; // w22
  System_Int32_array *v142; // x28
  int32_t v143; // w0
  int32_t v144; // w2
  FunctionEntity_o *v145; // x1
  BattleActionData_BuffData_o *FunctionObject; // x0
  BattleLogicFunction_o *v147; // x0
  int32_t v148; // w1
  const MethodInfo *v149; // x3
  int32_t v150; // w22
  bool v151; // w0
  bool v152; // w8
  bool v153; // w6
  bool v154; // w7
  BattleLogicFunction_o *v155; // x0
  int32_t v156; // w1
  BattleActionData_o *v157; // x0
  const MethodInfo *v158; // x7
  const MethodInfo *v159; // x7
  const MethodInfo *v160; // x6
  int32_t v161; // w1
  FunctionEntity_o *v162; // x2
  DataVals_o *v163; // x3
  int32_t v164; // w4
  const MethodInfo *v165; // x5
  BattleActionData_o *v166; // x0
  FunctionEntity_o *v167; // x1
  FunctionEntity_o *v168; // x3
  DataVals_o *v169; // x4
  const MethodInfo *v170; // x6
  int32_t applyTarget; // w8
  FunctionEntity_o *v172; // x2
  const MethodInfo *v173; // x6
  BattleActionData_o *v174; // x0
  const MethodInfo *v175; // x5
  BattleActionData_o *v176; // x0
  FunctionEntity_o *v177; // x2
  const MethodInfo *v178; // x6
  int32_t v179; // w1
  FunctionEntity_o *v180; // x2
  DataVals_o *v181; // x3
  int32_t v182; // w4
  const MethodInfo *v183; // x5
  BattleActionData_o *v184; // x0
  FunctionEntity_o *v185; // x3
  int32_t v186; // w5
  const MethodInfo *v187; // x6
  _BOOL8 v188; // x0
  FunctionEntity_o *v189; // x2
  int32_t v190; // w4
  const MethodInfo *v191; // x5
  const MethodInfo *v192; // x3
  int32_t v193; // w22
  int32_t v194; // w28
  char v195; // w5
  const MethodInfo *v196; // x7
  BattleLogicFunction_o *v197; // x0
  int32_t v198; // w1
  int32_t v199; // w2
  int32_t v200; // w2
  int32_t v201; // w3
  struct BattleData_o *v202; // x8
  struct BattleCommandData_array *draw_commandlist; // x1
  int v204; // w22
  bool v205; // w28
  BattleServantSnapShotOnBuffUpdate_o *v206; // x24
  System_Int32_array *v207; // x0
  BattleData_o *v208; // x24
  int32_t v209; // w28
  Generator_BGMFromChangeBGMFunc_o *v210; // x22
  const MethodInfo *v211; // x4
  const MethodInfo *v212; // x6
  System_Int32_array *v213; // x28
  int32_t SameIndiualityBuffSum; // w0
  int32_t v215; // w28
  bool v216; // w4
  int32_t v217; // w2
  DataVals_o *v218; // x3
  BattleActionData_BuffData_o *v219; // x6
  const MethodInfo *v220; // x7
  int32_t v221; // w1
  int32_t v222; // w2
  int32_t v223; // w5
  const MethodInfo *v224; // x4
  const MethodInfo *v225; // x4
  _BOOL8 v226; // x0
  const MethodInfo *v227; // x3
  bool v228; // w28
  int32_t HpPerValue; // w0
  const MethodInfo *v230; // x3
  bool v231; // w2
  BattleLogicFunction_o *v232; // x0
  DataVals_o *v233; // x1
  _BOOL8 updated; // x0
  const MethodInfo *v235; // x6
  BattleActionData_MasterBuffData_o *v236; // x24
  Generator_BGFromQuickChangeBGFunc_o *v237; // x22
  const MethodInfo *v238; // x3
  int32_t Param; // w0
  const MethodInfo *v240; // x4
  BattleBuffData_o *klass; // x28
  BattleActionData_UpShiftGaugeData_o *v242; // x22
  const MethodInfo *v243; // x5
  DataVals_o *v244; // x3
  const MethodInfo *v245; // x5
  BattleActionData_o *SubMember; // x0
  const MethodInfo *v247; // x3
  const MethodInfo *v248; // x6
  const MethodInfo *v249; // x4
  const MethodInfo *v250; // x3
  _BOOL8 v251; // x0
  const MethodInfo *v252; // x3
  const MethodInfo *v253; // x2
  const MethodInfo *v254; // x2
  const MethodInfo *v255; // x5
  const MethodInfo *v256; // x4
  const MethodInfo *v257; // x4
  int32_t v258; // w0
  const MethodInfo *v259; // x2
  const MethodInfo *v260; // x2
  const MethodInfo *v261; // x2
  __int64 klass_high; // x22
  int32_t v263; // w2
  const MethodInfo *v264; // x6
  float v265; // s0
  int32_t v266; // w5
  __int64 v267; // x22
  float v268; // s0
  int v269; // w8
  BattleLogicFunction_o *v270; // x0
  int32_t v271; // w22
  const MethodInfo *v272; // x6
  const MethodInfo *v273; // x4
  const MethodInfo *v274; // x4
  struct BattleData_o *v275; // x8
  UnityEngine_Object_o *perf; // x28
  struct BattleData_o *v277; // x8
  int v278; // w27
  bool v279; // w21
  BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *v280; // x22
  BattleLogicFunction_SideEffectMakeArgument_o *Argument__Init; // x0
  const MethodInfo *v282; // x5
  BattleLogicFunction_o *v283; // x21
  BattleCommandData_o *v284; // x22
  UnityEngine_Object_o *v285; // x23
  struct BattleLogic_o *v286; // x8
  unsigned __int64 v287; // x23
  UnityEngine_Object_o *v288; // x21
  int v289; // w8
  BattleLogicFunction_o *v290; // x21
  unsigned int v291; // w22
  __int64 v292; // x8
  BattleLogicFunction_FuncSideEffectFunctionArgument_o *FuncSideEffectArg; // x0
  UnityEngine_Object_o *v294; // x21
  struct BattleData_o *v295; // x8
  UnityEngine_Object_o *v296; // x21
  __int64 v297; // x1
  BattleData_o *v298; // x0
  BattleServantData_o *v299; // x0
  const MethodInfo *overwriteLossHp; // [xsp+0h] [xbp-190h]
  int32_t overwriteLossHpa; // [xsp+0h] [xbp-190h]
  const MethodInfo *isRandomDamage; // [xsp+8h] [xbp-188h]
  char isRandomDamagea; // [xsp+8h] [xbp-188h]
  BattleActionData_o *mainAction; // [xsp+10h] [xbp-180h]
  const MethodInfo *v306; // [xsp+18h] [xbp-178h]
  bool isParam; // [xsp+34h] [xbp-15Ch]
  bool v308; // [xsp+38h] [xbp-158h]
  int32_t subTargetId; // [xsp+3Ch] [xbp-154h]
  int32_t *p_actorId; // [xsp+40h] [xbp-150h]
  char v311; // [xsp+4Ch] [xbp-144h]
  char v312; // [xsp+50h] [xbp-140h]
  bool v313; // [xsp+54h] [xbp-13Ch]
  SkillValueUpApplierPlayerMaster_o *v314; // [xsp+58h] [xbp-138h]
  System_Collections_Generic_List_int__o *v315; // [xsp+60h] [xbp-130h]
  char v316; // [xsp+6Ch] [xbp-124h]
  BattleServantData_o *ServantData; // [xsp+70h] [xbp-120h]
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *v318; // [xsp+78h] [xbp-118h]
  BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit; // [xsp+88h] [xbp-108h]
  int v321; // [xsp+94h] [xbp-FCh]
  Il2CppObject *MasterData_object; // [xsp+98h] [xbp-F8h]
  int32_t index; // [xsp+A4h] [xbp-ECh]
  int32_t *p_funcType; // [xsp+A8h] [xbp-E8h]
  FunctionEntity_o *funcEntity; // [xsp+B8h] [xbp-D8h]
  BattleLogicFunction_ProcListInArgs_o *args; // [xsp+C0h] [xbp-D0h]
  System_Collections_Generic_List_Enumerator_int__o v327; // [xsp+C8h] [xbp-C8h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v328; // [xsp+E0h] [xbp-B0h] BYREF
  System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *buffsToRemove; // [xsp+100h] [xbp-90h] BYREF
  int32_t absorptionCount; // [xsp+10Ch] [xbp-84h] BYREF
  RemovedBuffInfo_o *subBuffInfo; // [xsp+110h] [xbp-80h] BYREF
  Il2CppObject *entity; // [xsp+118h] [xbp-78h] BYREF
  int32_t funcIndex; // [xsp+124h] [xbp-6Ch] BYREF
  int32_t PTTargetId; // [xsp+128h] [xbp-68h] BYREF
  int32_t targetId; // [xsp+12Ch] [xbp-64h] BYREF

  v19 = action;
  v20 = this;
  if ( (byte_4A5DC6C & 1) == 0 )
  {
    sub_1B885B0(&BattleLogicFunction_AfterAttackSideEffectMakeArgument_TypeInfo);
    sub_1B885B0(&Generator_BGFromQuickChangeBGFunc_TypeInfo);
    sub_1B885B0(&Generator_BGMFromChangeBGMFunc_TypeInfo);
    sub_1B885B0(&Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionUnitCheck___);
    sub_1B885B0(&BattleCommandData_TypeInfo);
    sub_1B885B0(&BattleServantSnapShotOnBuffUpdate_TypeInfo);
    sub_1B885B0(&Method_DataManager_GetMasterData_BuffMaster___);
    sub_1B885B0(&Method_DataManager_GetMasterData_SkillMaster___);
    sub_1B885B0(&Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
    sub_1B885B0(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_1B885B0(&BattleActionData_DownShiftGaugeData_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_All_BattleLogicFunctionProcess_FunctionUnitCheck___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_BattleLogicFunctionProcess_FunctionTargetCheck__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_BattleLogicFunctionProcess_FunctionTargetCheck___);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1B885B0(&System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__TypeInfo);
    sub_1B885B0(&System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int__TypeInfo);
    sub_1B885B0(&System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_int__TypeInfo);
    sub_1B885B0(&BattleActionData_MasterBuffData_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&BattleLogicFunction_PreAttackSideEffectMakeArgument_TypeInfo);
    sub_1B885B0(&BattleLogicFunction_ProcListInArgs_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1B885B0(&SkillValueUpApplierPlayerMaster_TypeInfo);
    sub_1B885B0(&Method_BattleLogicFunction___c__procList_b__41_0__);
    sub_1B885B0(&Method_BattleLogicFunction___c__procList_b__41_1__);
    sub_1B885B0(&Method_BattleLogicFunction___c__procList_b__41_2__);
    sub_1B885B0(&Method_BattleLogicFunction___c__procList_b__41_3__);
    sub_1B885B0(&BattleLogicFunction___c_TypeInfo);
    sub_1B885B0(&BattleActionData_UpShiftGaugeData_TypeInfo);
    sub_1B885B0(&Method_WeightRate_int___ctor__);
    sub_1B885B0(&Method_WeightRate_int__getCount__);
    sub_1B885B0(&Method_WeightRate_int__getData__);
    sub_1B885B0(&Method_WeightRate_int__getTotalWeight__);
    sub_1B885B0(&Method_WeightRate_int__setWeight__);
    sub_1B885B0(&WeightRate_int__TypeInfo);
    sub_1B885B0(&StringLiteral_1855/*"====< end BattleLogicFunction::procList >====="*/);
    sub_1B885B0(&StringLiteral_256/*" enemytargetId: "*/);
    sub_1B885B0(&StringLiteral_1856/*"====< start BattleLogicFunction::procList >====="*/);
    sub_1B885B0(&StringLiteral_322/*" pttargetId: "*/);
    sub_1B885B0(&StringLiteral_1858/*"========="*/);
    sub_1B885B0(&StringLiteral_1869/*">actSetId: "*/);
    this = (BattleLogicFunction_o *)sub_1B885B0(&StringLiteral_224/*" actorId: "*/);
    byte_4A5DC6C = 1;
  }
  PTTargetId = 0;
  funcIndex = 0;
  subBuffInfo = 0LL;
  entity = 0LL;
  absorptionCount = 0;
  buffsToRemove = 0LL;
  memset(&v328, 0, sizeof(v328));
  if ( !v19 )
    goto LABEL_453;
  p_actorId = &v19->fields.actorId;
  v21 = System_Int32__ToString((int)v19 + 32, 0LL);
  System_String__Concat_61707032((System_String_o *)StringLiteral_224/*" actorId: "*/, v21, 0LL);
  this = (BattleLogicFunction_o *)v20->fields.data;
  if ( !this )
    goto LABEL_453;
  ServantData = BattleData__getServantData((BattleData_o *)this, v19->fields.actorId, 0LL);
  targetId = v19->fields.targetId;
  v22 = System_Int32__ToString((int32_t)&targetId, 0LL);
  System_String__Concat_61707032((System_String_o *)StringLiteral_256/*" enemytargetId: "*/, v22, 0LL);
  PTTargetId = BattleActionData__getPTTargetId(v19, 0LL);
  PTSubTargetId = BattleActionData__getPTSubTargetId(v19, 0LL);
  v24 = System_Int32__ToString((int32_t)&PTTargetId, 0LL);
  this = (BattleLogicFunction_o *)System_String__Concat_61707032((System_String_o *)StringLiteral_322/*" pttargetId: "*/, v24, 0LL);
  data = v20->fields.data;
  if ( !data )
    goto LABEL_453;
  data->fields.beforeAction = v19;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&data->fields.beforeAction, (int32_t)v19, v25, v26);
  v315 = (System_Collections_Generic_List_int__o *)sub_1B887FC(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v315,
    (const MethodInfo_34DFFBC *)Method_System_Collections_Generic_List_int___ctor__);
  this = (BattleLogicFunction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_453;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)this,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_BuffMaster___);
  if ( isReduceReset )
  {
    logic = (UnityEngine_Object_o *)v20->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(logic, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)v20->fields.logic;
      if ( !this )
        goto LABEL_453;
      BattleLogic__resetReducedHpAll((BattleLogic_o *)this, 0LL);
    }
  }
  v29 = (BattleLogicFunction_ProcListInArgs_o *)sub_1B887FC(BattleLogicFunction_ProcListInArgs_TypeInfo);
  BattleLogicFunction_ProcListInArgs___ctor(v29, argument, 0LL);
  if ( !v29 )
    goto LABEL_453;
  BattleLogicFunction_ProcListInArgs__set_IsCommandSideEffect(v29, isCommandSideEffect, 0LL);
  BattleLogicFunction_ProcListInArgs__set_IsShift(v29, isShift, 0LL);
  BattleLogicFunction_ProcListInArgs__set_IsPassive(v29, passive, 0LL);
  v29->fields._IsTreasureDvc_k__BackingField = isTreasureDvc;
  if ( BattleLogicFunction_ProcListInArgs__get_SkillId(v29, 0LL) <= 0 )
    BattleLogicFunction_ProcListInArgs__set_SkillId(v29, skillId, 0LL);
  subTargetId = PTSubTargetId;
  funcIndex = 0;
  BattleLogicFunction_ProcListInArgs__initFunctionUnitCheck(v29, v20, functionlist, baseValslist, &funcIndex, 0LL);
  args = v29;
  v29->fields.actSetId = 0;
  p_actSetId = &v29->fields.actSetId;
  v31 = (WeightRate_int__o *)sub_1B887FC(WeightRate_int__TypeInfo);
  WeightRate_int____ctor(v31, (const MethodInfo_38DB260 *)Method_WeightRate_int___ctor__);
  if ( !baseValslist )
    goto LABEL_453;
  max_length = baseValslist->max_length;
  if ( max_length >= 1 )
  {
    v33 = 0;
    while ( v33 < max_length )
    {
      v34 = &baseValslist->obj.klass + (int)v33;
      v35 = (DataVals_o *)v34[4];
      if ( !v35 )
        goto LABEL_453;
      DataVals__loadActSet((DataVals_o *)v34[4], 0LL);
      this = (BattleLogicFunction_o *)DataVals__checkActSet(v35, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        this = (BattleLogicFunction_o *)DataVals__getActSetWeight(v35, 0LL);
        if ( (int)this >= 1 )
        {
          ActSetWeight = DataVals__getActSetWeight(v35, 0LL);
          this = (BattleLogicFunction_o *)DataVals__getActSet(v35, 0LL);
          if ( !v31 )
            goto LABEL_453;
          WeightRate_int___setWeight(
            v31,
            ActSetWeight,
            (int32_t)this,
            (const MethodInfo_38DA77C *)Method_WeightRate_int__setWeight__);
        }
      }
      max_length = baseValslist->max_length;
      if ( (int)++v33 >= max_length )
        goto LABEL_26;
    }
LABEL_454:
    sub_1B88814(this, action);
  }
LABEL_26:
  if ( !v31 )
    goto LABEL_453;
  if ( WeightRate_int___getCount(v31, (const MethodInfo_38DAB38 *)Method_WeightRate_int__getCount__) >= 1 )
  {
    Random = BattleRandom__getRandom(0, v31->fields.totalweight, 0LL);
    *p_actSetId = WeightRate_int___getData(v31, Random, (const MethodInfo_38DABF0 *)Method_WeightRate_int__getData__);
    v38 = System_Int32__ToString((int32_t)p_actSetId, 0LL);
    System_String__Concat_61707032((System_String_o *)StringLiteral_1869/*">actSetId: "*/, v38, 0LL);
  }
  v19->fields.ActSetId = args->fields.actSetId;
  BattleActionData__initFuncTargetPlayerType(v19, funcIndex, 0LL);
  v39 = BattleLogicFunction___c_TypeInfo;
  funcUnitArray_k__BackingField = (System_Object_array *)args->fields._funcUnitArray_k__BackingField;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v39 = BattleLogicFunction___c_TypeInfo;
  }
  _9__41_0 = (System_Func_object__bool__o *)v39->static_fields->__9__41_0;
  if ( !_9__41_0 )
  {
    if ( !v39->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v39);
      v39 = BattleLogicFunction___c_TypeInfo;
    }
    v42 = (Il2CppObject *)v39->static_fields->__9;
    _9__41_0 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__41_0, v42, Method_BattleLogicFunction___c__procList_b__41_0__, 0LL);
    static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
    static_fields->__9__41_0 = (struct System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__o *)_9__41_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__41_0, (int32_t)_9__41_0, v44, v45);
  }
  if ( !BasicHelper__Any_object__48672124(
          funcUnitArray_k__BackingField,
          (System_Func_T__bool__o *)_9__41_0,
          (const MethodInfo_2E6AD7C *)Method_BasicHelper_Any_BattleLogicFunctionProcess_FunctionUnitCheck___) )
    v19->fields.isSuccessTargetSelection = 1;
  v46 = BattleLogicFunction___c_TypeInfo;
  v47 = (System_Collections_Generic_IEnumerable_TSource__o *)args->fields._funcUnitArray_k__BackingField;
  if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
    v46 = BattleLogicFunction___c_TypeInfo;
  }
  _9__41_1 = (System_Func_object__bool__o *)v46->static_fields->__9__41_1;
  if ( !_9__41_1 )
  {
    if ( !v46->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v46);
      v46 = BattleLogicFunction___c_TypeInfo;
    }
    v49 = (Il2CppObject *)v46->static_fields->__9;
    _9__41_1 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__TypeInfo);
    System_Func_object__bool____ctor(_9__41_1, v49, Method_BattleLogicFunction___c__procList_b__41_1__, 0LL);
    v50 = BattleLogicFunction___c_TypeInfo->static_fields;
    v50->__9__41_1 = (struct System_Func_BattleLogicFunctionProcess_FunctionUnitCheck__bool__o *)_9__41_1;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&v50->__9__41_1, (int32_t)_9__41_1, v51, v52);
  }
  v19->fields.isSkillCopyFunctionOnly = System_Linq_Enumerable__All_object_(
                                          v47,
                                          (System_Func_TSource__bool__o *)_9__41_1,
                                          (const MethodInfo_2E8BEAC *)Method_System_Linq_Enumerable_All_BattleLogicFunctionProcess_FunctionUnitCheck___);
  v316 = 1;
  this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__MatchSkillType(args, 1, 0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    v53 = (int)this;
    this = (BattleLogicFunction_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    v54 = isCommandSideEffect;
    v55 = ServantData;
    if ( !this )
      goto LABEL_453;
    this = (BattleLogicFunction_o *)DataManager__GetMasterData_object_(
                                      (DataManager_o *)this,
                                      (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_SkillMaster___);
    if ( !this )
      goto LABEL_453;
    if ( DataMasterBase_object__object__int___TryGetEntity(
           (DataMasterBase_TMaster__TEntity__PKType__o *)this,
           &entity,
           skillId,
           (const MethodInfo_311D988 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__) )
    {
      this = (BattleLogicFunction_o *)entity;
      if ( !entity )
        goto LABEL_453;
      this = (BattleLogicFunction_o *)SkillEntity__IsIgnoreValueUp((SkillEntity_o *)entity, 0LL);
    }
    else
    {
      this = 0LL;
    }
    v56 = 0LL;
    v316 = 1;
    if ( ((unsigned __int8)this & 1) == 0 && ((v53 ^ 1) & 1) == 0 )
    {
      v57 = v20->fields.data;
      v56 = (SkillValueUpApplierPlayerMaster_o *)sub_1B887FC(SkillValueUpApplierPlayerMaster_TypeInfo);
      SkillValueUpApplierPlayerMaster___ctor(v56, v57, 0LL);
      if ( v56 )
      {
        this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, Il2CppMethodPointer))v56->klass->vtable._4_Init.method)(
                                          v56,
                                          v56->klass->vtable._5_ApplyTo.methodPtr);
        v316 = 0;
      }
      else
      {
        v316 = 1;
      }
    }
  }
  else
  {
    v54 = isCommandSideEffect;
    v55 = ServantData;
    v56 = 0LL;
  }
  v58 = args->fields._funcUnitArray_k__BackingField;
  if ( !v58 )
    goto LABEL_453;
  v318 = args->fields._funcUnitArray_k__BackingField;
  v59 = v58->max_length;
  if ( v59 >= 1 )
  {
    v314 = v56;
    v60 = args->fields._funcUnitArray_k__BackingField;
    v61 = 0LL;
    v62 = 0;
    v311 = 0;
    v312 = 0;
    v313 = v55 == 0LL || !isTreasureDvc;
    while ( 1 )
    {
      if ( v62 >= (unsigned int)v59 )
        goto LABEL_454;
      v63 = v60->m_Items[v62];
      v321 = v62;
      if ( !v63 )
        goto LABEL_453;
      this = (BattleLogicFunction_o *)BattleLogicFunctionProcess_FunctionUnitCheck__get_FuncIndex(v63, 0LL);
      dataVals_k__BackingField = v63->fields._dataVals_k__BackingField;
      index = (int)this;
      if ( !dataVals_k__BackingField )
        goto LABEL_453;
      funcEntity = dataVals_k__BackingField->fields.funcEnt;
      funcUnit = v63;
      this = (BattleLogicFunction_o *)BattleLogicFunctionProcess_FunctionUnitCheck__checkCondtion(v63, v19, 0LL);
      if ( ((unsigned __int8)this & 1) == 0 )
        goto LABEL_395;
      if ( (v316 & 1) == 0 )
        this = (BattleLogicFunction_o *)((__int64 (__fastcall *)(SkillValueUpApplierPlayerMaster_o *, BattleLogicFunctionProcess_FunctionUnitCheck_o *, Il2CppMethodPointer))v314->klass->vtable._5_ApplyTo.method)(
                                          v314,
                                          v63,
                                          v314->klass->vtable._6_CreateFuncParamValueUpInfo.methodPtr);
      if ( isCreateSideEffect )
      {
        if ( !funcEntity )
          goto LABEL_453;
        this = (BattleLogicFunction_o *)BattleLogicFunction__IsAttackSideEffectInvokeFunc(
                                          this,
                                          funcEntity->fields.funcType,
                                          dataVals_k__BackingField,
                                          v65);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v67 = BattleLogicFunction___c_TypeInfo;
          funcTargetArray_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)v63->fields._funcTargetArray_k__BackingField;
          if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
            v67 = BattleLogicFunction___c_TypeInfo;
          }
          _9__41_2 = (System_Func_object__bool__o *)v67->static_fields->__9__41_2;
          if ( !_9__41_2 )
          {
            if ( !v67->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v67);
              v67 = BattleLogicFunction___c_TypeInfo;
            }
            v70 = (Il2CppObject *)v67->static_fields->__9;
            _9__41_2 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__TypeInfo);
            System_Func_object__bool____ctor(_9__41_2, v70, Method_BattleLogicFunction___c__procList_b__41_2__, 0LL);
            v71 = BattleLogicFunction___c_TypeInfo->static_fields;
            v71->__9__41_2 = (struct System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__bool__o *)_9__41_2;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v71->__9__41_2, (int32_t)_9__41_2, v72, v73);
          }
          v74 = System_Linq_Enumerable__Where_object_(
                  funcTargetArray_k__BackingField,
                  (System_Func_TSource__bool__o *)_9__41_2,
                  (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_BattleLogicFunctionProcess_FunctionTargetCheck___);
          v75 = BattleLogicFunction___c_TypeInfo;
          if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
            v75 = BattleLogicFunction___c_TypeInfo;
          }
          _9__41_3 = (System_Func_object__int__o *)v75->static_fields->__9__41_3;
          if ( !_9__41_3 )
          {
            if ( !v75->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v75);
              v75 = BattleLogicFunction___c_TypeInfo;
            }
            v77 = (Il2CppObject *)v75->static_fields->__9;
            _9__41_3 = (System_Func_object__int__o *)sub_1B887FC(System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int__TypeInfo);
            System_Func_object__int____ctor(_9__41_3, v77, Method_BattleLogicFunction___c__procList_b__41_3__, 0LL);
            v78 = BattleLogicFunction___c_TypeInfo->static_fields;
            v78->__9__41_3 = (struct System_Func_BattleLogicFunctionProcess_FunctionTargetCheck__int__o *)_9__41_3;
            sub_1B88554((ServantStatusBattleListViewItem_o *)&v78->__9__41_3, (int32_t)_9__41_3, v79, v80);
          }
          v81 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                       v74,
                                                                       (System_Func_TSource__TResult__o *)_9__41_3,
                                                                       (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_BattleLogicFunctionProcess_FunctionTargetCheck__int___);
          v82 = System_Linq_Enumerable__ToArray_int_(
                  v81,
                  (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
          v83 = FuncList__Check(26, funcEntity->fields.funcType, 0LL);
          v84 = (BattleLogicFunction_PreAttackSideEffectMakeArgument_o *)sub_1B887FC(BattleLogicFunction_PreAttackSideEffectMakeArgument_TypeInfo);
          BattleLogicFunction_PreAttackSideEffectMakeArgument___ctor(v84, 0LL);
          if ( !v84 )
            goto LABEL_453;
          v85 = (BattleLogicFunction_SideEffectMakeArgument_o *)((__int64 (__fastcall *)(BattleLogicFunction_PreAttackSideEffectMakeArgument_o *, System_Int32_array *, Il2CppMethodPointer))v84->klass->vtable._6_Init.method)(
                                                                  v84,
                                                                  v82,
                                                                  v84->klass->vtable._7_MakeOnlyMainArgument.methodPtr);
          BattleLogicFunction__setAttackSideEffect(v20, v19, v55, v83 || isTreasureDvc, v85, v86);
          v54 = isCommandSideEffect;
        }
      }
      v87 = funcUnit->fields._funcTargetArray_k__BackingField;
      if ( !v87 )
        goto LABEL_453;
      v88 = v87->max_length;
      p_funcType = &funcEntity->fields.funcType;
      if ( v88 >= 1 )
      {
        for ( i = 0; i < v88; ++i )
        {
          if ( i >= (unsigned int)v88 )
            goto LABEL_454;
          v90 = v87->m_Items[i];
          if ( !v90 )
            goto LABEL_453;
          BattleLogicFunction__SetTargetFuncList(
            v20,
            v90->fields._targetId_k__BackingField,
            v19,
            dataVals_k__BackingField,
            v66);
          this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(args, 0LL);
          if ( this )
            v61 = (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)this;
          if ( this )
          {
            if ( !v61 )
              goto LABEL_453;
            BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget(v61, v90, 0LL);
          }
          if ( !v90->fields._result_k__BackingField )
          {
            NoEffectObject = BattleLogicFunctionProcess_FunctionTargetCheck__getInvalidObject(v90, 0LL);
            goto LABEL_98;
          }
          this = (BattleLogicFunction_o *)v20->fields.data;
          if ( !this )
            goto LABEL_453;
          targetId_k__BackingField = v90->fields._targetId_k__BackingField;
          this = (BattleLogicFunction_o *)BattleData__getServantData(
                                            (BattleData_o *)this,
                                            targetId_k__BackingField,
                                            0LL);
          if ( !this )
            goto LABEL_453;
          v92 = this;
          this = (BattleLogicFunction_o *)BattleServantData__CheckNotTargetSkill(
                                            (BattleServantData_o *)this,
                                            skillId,
                                            0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
          {
            NoEffectObject = BattleLogicFunction__getNoEffectObject(
                               v20,
                               (int32_t)v92->fields.logic,
                               index,
                               dataVals_k__BackingField,
                               v54,
                               0LL,
                               0LL,
                               v93);
LABEL_98:
            BattleActionData__addAction(v19, NoEffectObject, 0LL);
            goto LABEL_153;
          }
          v19->fields.funcResult = 1;
          args->fields.tdCommandTypeChange = -1;
          if ( !funcEntity )
            goto LABEL_453;
          v95 = &funcEntity->fields.funcType;
          this = (BattleLogicFunction_o *)FuncList__Check(1, *p_funcType, 0LL);
          if ( ((unsigned __int8)this & 1) != 0
            || (this = (BattleLogicFunction_o *)FuncList__Check(16, *p_funcType, 0LL), ((unsigned __int8)this & 1) != 0) )
          {
            vals = funcEntity->fields.vals;
            if ( !vals )
              goto LABEL_453;
            if ( !vals->max_length )
              goto LABEL_454;
            this = (BattleLogicFunction_o *)MasterData_object;
            if ( !MasterData_object )
              goto LABEL_453;
            this = (BattleLogicFunction_o *)DataMasterBase_object__object__int___GetEntity(
                                              (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object,
                                              vals->m_Items[1],
                                              (const MethodInfo_311D934 *)Method_DataMasterBase_BuffMaster__BuffEntity__int__GetEntity__);
            if ( !this )
              goto LABEL_453;
            commandType = 1;
            switch ( HIDWORD(this->fields.data) )
            {
              case 0x8F:
                commandType = v19->fields.commandType;
                goto LABEL_112;
              case 0x91:
                goto LABEL_112;
              case 0x92:
                commandType = 2;
                goto LABEL_112;
              case 0x93:
                commandType = 3;
LABEL_112:
                args->fields.tdCommandTypeChange = commandType;
                break;
              default:
                break;
            }
            v95 = &funcEntity->fields.funcType;
            v99 = FuncList__Check(16, *p_funcType, 0LL);
            BattleLogicFunction__functionAddState(v20, v19, v90, args, v99, v100);
            goto LABEL_134;
          }
          if ( FuncList__Check(2, *p_funcType, 0LL) )
          {
            v98 = BattleLogicFunction__functionSubState(
                    v20,
                    targetId_k__BackingField,
                    funcEntity,
                    dataVals_k__BackingField,
                    index,
                    v54,
                    &subBuffInfo,
                    args,
                    overwriteLossHp);
            goto LABEL_133;
          }
          if ( FuncList__Check(3, *p_funcType, 0LL) )
          {
            actorId = v19->fields.actorId;
            v103 = (int32_t)v92->fields.logic;
            isSafeDamage = BattleLogicFunction__isSafeDamage(
                             v20,
                             dataVals_k__BackingField,
                             targetId_k__BackingField,
                             v101);
            v105 = v103;
            v54 = isCommandSideEffect;
            v98 = BattleLogicFunction__functionDamage(
                    v20,
                    actorId,
                    v105,
                    dataVals_k__BackingField,
                    index,
                    v19,
                    isSafeDamage,
                    v106);
            goto LABEL_133;
          }
          if ( FuncList__Check(4, *p_funcType, 0LL) )
          {
            v108 = v19->fields.actorId;
            v109 = (int32_t)v92->fields.logic;
            v110 = 1;
            goto LABEL_132;
          }
          if ( FuncList__Check(14, *p_funcType, 0LL) )
          {
            v108 = v19->fields.actorId;
            v109 = (int32_t)v92->fields.logic;
            v110 = 2;
            goto LABEL_132;
          }
          if ( FuncList__Check(15, *p_funcType, 0LL) )
          {
            v108 = v19->fields.actorId;
            v109 = (int32_t)v92->fields.logic;
            v110 = 3;
            goto LABEL_132;
          }
          if ( FuncList__Check(18, *p_funcType, 0LL) )
          {
            v108 = v19->fields.actorId;
            v109 = (int32_t)v92->fields.logic;
            v110 = 4;
            goto LABEL_132;
          }
          if ( FuncList__Check(27, *p_funcType, 0LL) )
          {
            v108 = v19->fields.actorId;
            v109 = (int32_t)v92->fields.logic;
            v110 = 7;
            goto LABEL_132;
          }
          if ( FuncList__Check(21, *p_funcType, 0LL) )
          {
            v108 = v19->fields.actorId;
            v109 = (int32_t)v92->fields.logic;
            v110 = 5;
            goto LABEL_132;
          }
          if ( FuncList__Check(22, *p_funcType, 0LL) )
          {
            v108 = v19->fields.actorId;
            v109 = (int32_t)v92->fields.logic;
            v110 = 6;
            goto LABEL_132;
          }
          if ( FuncList__Check(28, *p_funcType, 0LL) )
          {
            v108 = v19->fields.actorId;
            v109 = (int32_t)v92->fields.logic;
            v110 = 8;
LABEL_132:
            v98 = BattleLogicFunction__functionNPDamage(
                    v20,
                    v108,
                    v109,
                    dataVals_k__BackingField,
                    index,
                    v110,
                    v19,
                    v107);
LABEL_133:
            BattleActionData__addAction(v19, v98, 0LL);
            goto LABEL_134;
          }
          if ( FuncList__Check(5, *p_funcType, 0LL) )
          {
            v119 = v20->fields.data;
            Value = DataVals__GetValue(dataVals_k__BackingField, 0LL);
            this = (BattleLogicFunction_o *)DataVals__isMultipleGainStar(dataVals_k__BackingField, 0LL);
            if ( !v119 )
              goto LABEL_453;
            BattleData__addCriticalPoint(v119, Value, (unsigned __int8)this & 1, 0LL);
LABEL_161:
            this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                              v121,
                                              funcEntity,
                                              (int32_t)v92->fields.logic,
                                              index,
                                              v54,
                                              0LL,
                                              v122);
            if ( !this )
              goto LABEL_453;
            HIDWORD(this->fields.logic) = 4;
            BattleActionData__setBuffData(v19, (BattleActionData_BuffData_o *)this, dataVals_k__BackingField, 0LL);
            this = (BattleLogicFunction_o *)v20->fields.data;
            if ( !this )
              goto LABEL_453;
            BattleData__AddPerformedVals((BattleData_o *)this, dataVals_k__BackingField, 0LL);
            goto LABEL_164;
          }
          if ( FuncList__Check(31, *p_funcType, 0LL) )
          {
            v123 = v20->fields.data;
            this = (BattleLogicFunction_o *)DataVals__GetValue(dataVals_k__BackingField, 0LL);
            if ( !v123 )
              goto LABEL_453;
            BattleData__lossCriticalPoint(v123, (int32_t)this, 0LL);
            goto LABEL_161;
          }
          if ( FuncList__Check(6, *p_funcType, 0LL) )
          {
            v98 = BattleLogicFunction__functionGainHp(
                    v20,
                    v19->fields.actorId,
                    targetId_k__BackingField,
                    funcEntity,
                    dataVals_k__BackingField,
                    index,
                    v54,
                    -1,
                    overwriteLossHp);
            goto LABEL_133;
          }
          if ( FuncList__Check(17, *p_funcType, 0LL) )
          {
            v98 = BattleLogicFunction__functionGainHpPer(
                    v20,
                    v19->fields.actorId,
                    targetId_k__BackingField,
                    funcEntity,
                    dataVals_k__BackingField,
                    index,
                    v54,
                    v124);
            goto LABEL_133;
          }
          if ( FuncList__Check(7, *p_funcType, 0LL) )
          {
            if ( BattleServantData__checkPlayer((BattleServantData_o *)v92, 0LL) )
            {
              isUnaffected = DataVals__isUnaffected(dataVals_k__BackingField, 0LL);
              CorrectedValueFuncGainNp = DataVals__GetValue(dataVals_k__BackingField, 0LL);
              if ( !isUnaffected )
                CorrectedValueFuncGainNp = BattleServantData__getCorrectedValueFuncGainNp(
                                             (BattleServantData_o *)v92,
                                             CorrectedValueFuncGainNp,
                                             0LL);
              goto LABEL_173;
            }
          }
          else
          {
            if ( !FuncList__Check(8, *p_funcType, 0LL) )
            {
              if ( FuncList__Check(9, *p_funcType, 0LL) )
              {
                v137 = DataVals__GetValue2(dataVals_k__BackingField, 0LL) - 1;
                TargetList = DataVals__GetTargetList(dataVals_k__BackingField, 0LL);
                v139 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                this = (BattleLogicFunction_o *)BattleServantData__skillChageShorten(
                                                  (BattleServantData_o *)v92,
                                                  v139,
                                                  0,
                                                  v137,
                                                  TargetList,
                                                  0LL);
                goto LABEL_188;
              }
              if ( FuncList__Check(10, *p_funcType, 0LL) )
              {
                v141 = DataVals__GetValue2(dataVals_k__BackingField, 0LL) - 1;
                v142 = DataVals__GetTargetList(dataVals_k__BackingField, 0LL);
                v143 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                this = (BattleLogicFunction_o *)BattleServantData__skillChageExtend(
                                                  (BattleServantData_o *)v92,
                                                  v143,
                                                  999,
                                                  v141,
                                                  v142,
                                                  0LL);
LABEL_188:
                v144 = (int32_t)v92->fields.logic;
                if ( ((unsigned __int8)this & 1) == 0 )
                {
                  v54 = isCommandSideEffect;
                  v147 = v20;
                  v148 = (int32_t)v92->fields.logic;
                  goto LABEL_282;
                }
                goto LABEL_189;
              }
              if ( FuncList__Check(12, *p_funcType, 0LL) )
              {
                v150 = v19->fields.actorId;
                v151 = BattleLogicFunction__isSafeDamage(v20, dataVals_k__BackingField, targetId_k__BackingField, v149);
                isRandomDamagea = 1;
                v152 = isCommandSideEffect;
                mainAction = v19;
                v153 = v151;
                v154 = isCommandSideEffect;
                overwriteLossHpa = -1;
                goto LABEL_194;
              }
              if ( FuncList__Check(25, *p_funcType, 0LL) )
              {
                v54 = isCommandSideEffect;
                v156 = v19->fields.actorId;
                isRandomDamagea = 1;
                mainAction = v19;
                v154 = isCommandSideEffect;
                v153 = 1;
                overwriteLossHpa = -1;
                v155 = v20;
                goto LABEL_197;
              }
              if ( FuncList__Check(13, *p_funcType, 0LL) )
              {
                v54 = isCommandSideEffect;
                v157 = BattleLogicFunction__functionInstantDeath(
                         v20,
                         v19->fields.actorId,
                         targetId_k__BackingField,
                         funcEntity,
                         dataVals_k__BackingField,
                         index,
                         isCommandSideEffect,
                         0,
                         funcUnit,
                         isRandomDamage);
                goto LABEL_284;
              }
              if ( FuncList__Check(19, *p_funcType, 0LL) )
              {
                v54 = isCommandSideEffect;
                v157 = BattleLogicFunction__functionHastenNpTurn(
                         v20,
                         targetId_k__BackingField,
                         funcEntity,
                         dataVals_k__BackingField,
                         index,
                         isCommandSideEffect,
                         -1,
                         v158);
                goto LABEL_284;
              }
              if ( FuncList__Check(20, *p_funcType, 0LL) )
              {
                v54 = isCommandSideEffect;
                v157 = BattleLogicFunction__functionDelayNpTurn(
                         v20,
                         targetId_k__BackingField,
                         funcEntity,
                         dataVals_k__BackingField,
                         index,
                         isCommandSideEffect,
                         &absorptionCount,
                         v159);
                goto LABEL_284;
              }
              if ( FuncList__Check(56, *p_funcType, 0LL) )
              {
                v54 = isCommandSideEffect;
                v157 = BattleLogicFunction__functionAbsorbNpTurn(
                         v20,
                         targetId_k__BackingField,
                         funcEntity,
                         v19,
                         v90,
                         isCommandSideEffect,
                         v160);
                goto LABEL_284;
              }
              if ( FuncList__Check(23, *p_funcType, 0LL) )
              {
                v166 = BattleLogicFunction__functionResetCommandCard(v20, v161, v162, v163, v164, v165);
                goto LABEL_208;
              }
              if ( FuncList__Check(24, *p_funcType, 0LL) )
              {
                applyTarget = funcEntity->fields.applyTarget;
                if ( applyTarget != 2 )
                {
                  if ( applyTarget == 1 )
                  {
                    v166 = BattleLogicFunction__functionReplaceMember(
                             v20,
                             targetId_k__BackingField,
                             subTargetId,
                             v168,
                             v169,
                             index,
                             v170);
LABEL_208:
                    BattleActionData__addAction(v19, v166, 0LL);
                    this = (BattleLogicFunction_o *)v20->fields.data;
                    if ( !this )
                      goto LABEL_453;
                    BattleData__AddPerformedVals((BattleData_o *)this, dataVals_k__BackingField, 0LL);
                  }
LABEL_183:
                  v54 = isCommandSideEffect;
                  goto LABEL_164;
                }
                v174 = BattleLogicFunction__functionReplaceEnemyMember(
                         v20,
                         v167,
                         dataVals_k__BackingField,
                         index,
                         (const MethodInfo *)v169);
LABEL_219:
                BattleActionData__addAction(v19, v174, 0LL);
                goto LABEL_183;
              }
              if ( FuncList__Check(109, *p_funcType, 0LL) )
              {
                v174 = BattleLogicFunction__functionTransformServant(
                         v20,
                         targetId_k__BackingField,
                         v172,
                         dataVals_k__BackingField,
                         index,
                         args,
                         v173);
                goto LABEL_219;
              }
              if ( FuncList__Check(26, *p_funcType, 0LL) )
              {
                v176 = BattleLogicFunction__functionReflection(
                         v20,
                         v19->fields.actorId,
                         (int32_t)v92->fields.logic,
                         dataVals_k__BackingField,
                         index,
                         v175);
                BattleActionData__addAction(v19, v176, 0LL);
                v312 = 1;
                goto LABEL_183;
              }
              if ( FuncList__Check(29, *p_funcType, 0LL) )
              {
                v54 = isCommandSideEffect;
                v157 = BattleLogicFunction__functionCallServant(
                         v20,
                         v19->fields.actorId,
                         v177,
                         dataVals_k__BackingField,
                         index,
                         isCommandSideEffect,
                         v178);
                goto LABEL_284;
              }
              if ( FuncList__Check(30, *p_funcType, 0LL) )
              {
                v184 = BattleLogicFunction__functionPtShuffle(v20, v179, v180, v181, v182, v183);
                BattleActionData__addAction(v19, v184, 0LL);
                this = (BattleLogicFunction_o *)v20->fields.data;
                if ( !this )
                  goto LABEL_453;
                BattleData__AddPerformedVals((BattleData_o *)this, dataVals_k__BackingField, 0LL);
                goto LABEL_225;
              }
              if ( FuncList__Check(32, *p_funcType, 0LL) )
              {
                v174 = BattleLogicFunction__functionChangeServant(
                         v20,
                         v19->fields.actorId,
                         targetId_k__BackingField,
                         v185,
                         dataVals_k__BackingField,
                         v186,
                         v187);
                goto LABEL_219;
              }
              v188 = FuncList__Check(33, *p_funcType, 0LL);
              if ( v188 )
              {
                v174 = BattleLogicFunction__functionChangeBg(
                         (BattleLogicFunction_o *)v188,
                         v19->fields.actorId,
                         v189,
                         dataVals_k__BackingField,
                         v190,
                         v191);
                goto LABEL_219;
              }
              if ( FuncList__Check(34, *p_funcType, 0LL) )
              {
                v193 = v19->fields.actorId;
                v194 = (int32_t)v92->fields.logic;
                v195 = BattleLogicFunction__isSafeDamage(v20, dataVals_k__BackingField, targetId_k__BackingField, v192);
                goto LABEL_232;
              }
              if ( FuncList__Check(122, *p_funcType, 0LL) )
              {
                v198 = v19->fields.actorId;
                v199 = (int32_t)v92->fields.logic;
                v195 = 1;
                v197 = v20;
                goto LABEL_235;
              }
              if ( FuncList__Check(35, *p_funcType, 0LL) )
              {
                BYTE1(v92[9].fields.master) = 1;
                goto LABEL_183;
              }
              this = (BattleLogicFunction_o *)FuncList__Check(36, *p_funcType, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
              {
                v202 = v20->fields.data;
                if ( !v202 )
                  goto LABEL_453;
                draw_commandlist = v202->fields.draw_commandlist;
                v202->fields.fixedCommands = draw_commandlist;
                sub_1B88554(
                  (ServantStatusBattleListViewItem_o *)&v202->fields.fixedCommands,
                  (int32_t)draw_commandlist,
                  v200,
                  v201);
                goto LABEL_241;
              }
              if ( FuncList__Check(37, *p_funcType, 0LL)
                || FuncList__Check(38, *p_funcType, 0LL)
                || FuncList__Check(39, *p_funcType, 0LL)
                || FuncList__Check(40, *p_funcType, 0LL) )
              {
                v204 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                if ( FuncList__Check(37, *p_funcType, 0LL) || FuncList__Check(39, *p_funcType, 0LL) )
                  v204 = -v204;
                if ( FuncList__Check(37, *p_funcType, 0LL) || FuncList__Check(38, *p_funcType, 0LL) )
                {
                  v204 *= 2;
                  v308 = 1;
                }
                else
                {
                  v308 = 0;
                }
                isParam = DataVals__isParam(dataVals_k__BackingField, 90, 0LL);
                v205 = DataVals__isParam(dataVals_k__BackingField, 149, 0LL);
                v206 = 0LL;
                if ( v205 )
                {
                  v206 = (BattleServantSnapShotOnBuffUpdate_o *)sub_1B887FC(BattleServantSnapShotOnBuffUpdate_TypeInfo);
                  BattleServantSnapShotOnBuffUpdate___ctor(v206, (BattleServantData_o *)v92, 0LL);
                }
                v207 = DataVals__GetTargetList(dataVals_k__BackingField, 0LL);
                this = (BattleLogicFunction_o *)BattleServantData__ChangeBuffValue(
                                                  (BattleServantData_o *)v92,
                                                  v204,
                                                  v207,
                                                  v308,
                                                  1,
                                                  v205,
                                                  &buffsToRemove,
                                                  isParam,
                                                  0LL);
                if ( ((unsigned __int8)this & 1) == 0 )
                  goto LABEL_280;
                if ( v205 )
                {
                  action = (BattleActionData_o *)buffsToRemove;
                  if ( !buffsToRemove )
                    goto LABEL_453;
                  if ( buffsToRemove->fields._count >= 1 )
                  {
                    this = (BattleLogicFunction_o *)v92[9].klass;
                    if ( !this )
                      goto LABEL_453;
                    this = (BattleLogicFunction_o *)BattleBuffData__SubBuffSpecified(
                                                      (BattleBuffData_o *)this,
                                                      buffsToRemove,
                                                      1,
                                                      0LL);
                    if ( !this )
                      goto LABEL_453;
                    v54 = isCommandSideEffect;
                    BattleLogicFunction__ApplySubBuffChanges(
                      v20,
                      v19,
                      (System_Collections_Generic_List_BattleBuffData_BuffData__o *)this->fields.data,
                      targetId_k__BackingField,
                      v206,
                      dataVals_k__BackingField,
                      index,
                      isCommandSideEffect,
                      args,
                      isRandomDamage);
                    goto LABEL_164;
                  }
                }
LABEL_241:
                v144 = (int32_t)v92->fields.logic;
LABEL_189:
                v54 = isCommandSideEffect;
                v145 = funcEntity;
LABEL_190:
                FunctionObject = BattleLogicFunction__getFunctionObject(this, v145, v144, index, v54, 0LL, v140);
                BattleActionData__setBuffData(v19, FunctionObject, dataVals_k__BackingField, 0LL);
                goto LABEL_164;
              }
              if ( FuncList__Check(41, *p_funcType, 0LL) )
              {
                v208 = v20->fields.data;
                v209 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                v210 = (Generator_BGMFromChangeBGMFunc_o *)sub_1B887FC(Generator_BGMFromChangeBGMFunc_TypeInfo);
                Generator_BGMFromChangeBGMFunc___ctor(v210, v208, v209, dataVals_k__BackingField, 0, 0LL);
                BattleLogicFunction__FunctionChangeBgm(v20, args, (Generator_BGM_o *)v210, 0LL, v211);
                goto LABEL_183;
              }
              this = (BattleLogicFunction_o *)FuncList__Check(42, *p_funcType, 0LL);
              if ( ((unsigned __int8)this & 1) != 0 )
                goto LABEL_241;
              if ( FuncList__Check(43, *p_funcType, 0LL) )
              {
                v54 = isCommandSideEffect;
                v157 = BattleLogicFunction__functionResurrection(
                         v20,
                         (int32_t)v92->fields.logic,
                         index,
                         funcEntity,
                         dataVals_k__BackingField,
                         isCommandSideEffect,
                         v212);
                goto LABEL_284;
              }
              if ( FuncList__Check(44, *p_funcType, 0LL) || FuncList__Check(133, *p_funcType, 0LL) )
              {
                v213 = funcEntity->fields.vals;
                if ( FuncList__Check(44, funcEntity->fields.funcType, 0LL) )
                {
                  SameIndiualityBuffSum = BattleServantData__getSameIndiualityBuffSum(
                                            (BattleServantData_o *)v92,
                                            v213,
                                            1,
                                            0,
                                            0,
                                            0LL);
                  goto LABEL_273;
                }
                if ( FuncList__Check(133, *p_funcType, 0LL) )
                {
                  SameIndiualityBuffSum = GainNpIndividualSum__GetSameIndiualitySum(
                                            v20->fields.data,
                                            *p_actorId,
                                            (int32_t)v92->fields.logic,
                                            dataVals_k__BackingField,
                                            funcEntity,
                                            0LL);
LABEL_273:
                  v215 = SameIndiualityBuffSum;
                }
                else
                {
                  v215 = 0;
                }
                CorrectedValueFuncGainNp = DataVals__GetValue(dataVals_k__BackingField, 0LL) * v215;
                if ( !DataVals__isUnaffected(dataVals_k__BackingField, 0LL) )
                  CorrectedValueFuncGainNp = BattleServantData__getCorrectedValueFuncGainNp(
                                               (BattleServantData_o *)v92,
                                               CorrectedValueFuncGainNp,
                                               0LL);
                if ( CorrectedValueFuncGainNp < 1 )
                {
LABEL_280:
                  v148 = (int32_t)v92->fields.logic;
                  goto LABEL_281;
                }
LABEL_173:
                if ( !BattleServantData__isGainNp((BattleServantData_o *)v92, 1, dataVals_k__BackingField, 0LL) )
                  goto LABEL_280;
                v128 = (BattleLogicFunction_o *)BattleServantData__addNp(
                                                  (BattleServantData_o *)v92,
                                                  CorrectedValueFuncGainNp,
                                                  0,
                                                  0LL);
                v129 = (int)v128;
                this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                                  v128,
                                                  funcEntity,
                                                  (int32_t)v92->fields.logic,
                                                  index,
                                                  isCommandSideEffect,
                                                  0LL,
                                                  v130);
                if ( !this )
                  goto LABEL_453;
                v131 = (BattleActionData_BuffData_o *)this;
                HIDWORD(this->fields.logic) = 3;
                BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)this, v129, 0LL);
                if ( isCommandSideEffect )
                  v131->fields.isCommandAfter = 1;
LABEL_182:
                BattleActionData__setBuffData(v19, v131, dataVals_k__BackingField, 0LL);
                goto LABEL_183;
              }
              if ( FuncList__Check(45, *p_funcType, 0LL) )
              {
                BYTE3(v92[9].fields.master) = DataVals__GetValue(dataVals_k__BackingField, 0LL) == 1;
                goto LABEL_183;
              }
              if ( FuncList__Check(46, *p_funcType, 0LL) )
              {
                v54 = isCommandSideEffect;
                v157 = BattleLogicFunction__functionInstantDeath(
                         v20,
                         v19->fields.actorId,
                         targetId_k__BackingField,
                         funcEntity,
                         dataVals_k__BackingField,
                         index,
                         isCommandSideEffect,
                         1,
                         funcUnit,
                         isRandomDamage);
                goto LABEL_284;
              }
              if ( FuncList__Check(47, *p_funcType, 0LL) )
              {
                v221 = v19->fields.actorId;
                v222 = (int32_t)v92->fields.logic;
                v223 = 9;
                goto LABEL_289;
              }
              if ( FuncList__Check(48, *p_funcType, 0LL) )
              {
                v174 = BattleLogicFunction__functionGainNpFromTargets(v20, args, v19, v90, v224);
                goto LABEL_219;
              }
              if ( FuncList__Check(49, *p_funcType, 0LL) )
              {
                v174 = BattleLogicFunction__functionGainHpFromTargets(v20, args, v19, v90, v225);
                goto LABEL_219;
              }
              v226 = FuncList__Check(50, *p_funcType, 0LL);
              if ( v226 || (v226 = FuncList__Check(51, *p_funcType, 0LL)) )
              {
                v228 = *p_funcType == 51;
                if ( *p_funcType == 50 )
                {
                  v226 = BattleLogicFunction__isSafeDamage(
                           v20,
                           dataVals_k__BackingField,
                           targetId_k__BackingField,
                           v227);
                  v228 = v226;
                }
                v150 = v19->fields.actorId;
                HpPerValue = BattleLogicFunction__getHpPerValue(
                               (BattleLogicFunction_o *)v226,
                               dataVals_k__BackingField,
                               (BattleServantData_o *)v92,
                               v227);
                v152 = isCommandSideEffect;
                v153 = v228;
                mainAction = v19;
                isRandomDamagea = 0;
                v154 = isCommandSideEffect;
                overwriteLossHpa = HpPerValue;
LABEL_194:
                v155 = v20;
                v156 = v150;
                v54 = v152;
LABEL_197:
                v157 = BattleLogicFunction__functionlossHp(
                         v155,
                         v156,
                         targetId_k__BackingField,
                         funcEntity,
                         dataVals_k__BackingField,
                         index,
                         v153,
                         v154,
                         overwriteLossHpa,
                         isRandomDamagea,
                         mainAction,
                         v306);
                goto LABEL_284;
              }
              if ( FuncList__Check(52, *p_funcType, 0LL) )
              {
                v231 = 1;
                v232 = v20;
                v233 = dataVals_k__BackingField;
LABEL_303:
                updated = BattleLogicFunction__UpdateUserEquipSkillChargeTurn(v232, v233, v231, v230);
                if ( updated )
                {
                  v54 = isCommandSideEffect;
                  BattleLogicFunction__CreateMasterBuffEffect(
                    (BattleLogicFunction_o *)updated,
                    v19,
                    funcEntity,
                    index,
                    isCommandSideEffect,
                    dataVals_k__BackingField,
                    v235);
                  goto LABEL_164;
                }
                v236 = (BattleActionData_MasterBuffData_o *)sub_1B887FC(BattleActionData_MasterBuffData_TypeInfo);
                BattleActionData_MasterBuffData___ctor(v236, funcEntity, 0LL);
                if ( !v236 )
                  goto LABEL_453;
                v236->fields.popColor = 1;
                v54 = isCommandSideEffect;
                v148 = v90->fields._targetId_k__BackingField;
                v217 = index;
                v147 = v20;
                v216 = isCommandSideEffect;
                v218 = dataVals_k__BackingField;
                v219 = (BattleActionData_BuffData_o *)v236;
                goto LABEL_283;
              }
              if ( FuncList__Check(62, *p_funcType, 0LL) )
              {
                v232 = v20;
                v233 = dataVals_k__BackingField;
                v231 = 0;
                goto LABEL_303;
              }
              if ( FuncList__Check(53, *p_funcType, 0LL) )
              {
                v237 = (Generator_BGFromQuickChangeBGFunc_o *)sub_1B887FC(Generator_BGFromQuickChangeBGFunc_TypeInfo);
                Generator_BGFromQuickChangeBGFunc___ctor(v237, dataVals_k__BackingField, 0LL);
                BattleLogicFunction__FunctionQuickChangeBG(v20, args, (Generator_Background_o *)v237, v238);
                goto LABEL_183;
              }
              if ( FuncList__Check(54, *p_funcType, 0LL) )
              {
                this = (BattleLogicFunction_o *)v92[2].fields.wkStr;
                if ( !this )
                  goto LABEL_453;
                if ( ServantEntity__isInvalidSkillShift((ServantEntity_o *)this, 0LL) )
                {
                  v148 = v90->fields._targetId_k__BackingField;
LABEL_281:
                  v54 = isCommandSideEffect;
                  v147 = v20;
LABEL_282:
                  v216 = v54;
                  v217 = index;
                  v218 = dataVals_k__BackingField;
                  v219 = 0LL;
LABEL_283:
                  v157 = BattleLogicFunction__getNoEffectObject(v147, v148, v217, v218, v216, 0LL, v219, v127);
LABEL_284:
                  BattleActionData__addAction(v19, v157, 0LL);
                  goto LABEL_164;
                }
                Param = DataVals__GetParam(dataVals_k__BackingField, 53, 0, 0LL);
                BattleLogicFunction__functionShiftServant(v20, v19, (BattleServantData_o *)v92, Param, v240);
                goto LABEL_183;
              }
              if ( FuncList__Check(55, *p_funcType, 0LL) )
              {
                v221 = v19->fields.actorId;
                v222 = (int32_t)v92->fields.logic;
                v223 = 10;
                goto LABEL_289;
              }
              if ( FuncList__Check(57, *p_funcType, 0LL) )
              {
                LODWORD(v92[7].fields.logic) = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                goto LABEL_183;
              }
              if ( FuncList__Check(58, *p_funcType, 0LL) )
              {
                klass = (BattleBuffData_o *)v92[9].klass;
                this = (BattleLogicFunction_o *)DataVals__GetParam(dataVals_k__BackingField, 14, 0, 0LL);
                if ( !klass )
                  goto LABEL_453;
                BattleBuffData__UpdateForceAllBuffNoAct(klass, (int32_t)this, funcEntity->fields.vals, 0LL);
                v54 = isCommandSideEffect;
                v144 = (int32_t)v92->fields.logic;
                v145 = funcEntity;
                goto LABEL_190;
              }
              if ( FuncList__Check(59, *p_funcType, 0LL) )
              {
                v242 = (BattleActionData_UpShiftGaugeData_o *)sub_1B887FC(BattleActionData_UpShiftGaugeData_TypeInfo);
                BattleActionData_UpShiftGaugeData___ctor(v242, 0LL);
              }
              else
              {
                if ( !FuncList__Check(60, *p_funcType, 0LL) )
                {
                  if ( FuncList__Check(61, *p_funcType, 0LL) )
                  {
                    SubMember = BattleLogicFunction__FunctionMoveToLastSubMember(
                                  v20,
                                  (BattleServantData_o *)v92,
                                  funcEntity,
                                  v244,
                                  index,
                                  v245);
                    BattleActionData__addAction(v19, SubMember, 0LL);
                    BattleActionData__UpdateForceBuffEffectAllTrue(v19, 0LL);
LABEL_225:
                    v311 = 1;
                    goto LABEL_183;
                  }
                  if ( FuncList__Check(119, *p_funcType, 0LL) )
                  {
                    BattleLogicFunction__functionMovePosition(v20, v19, (BattleServantData_o *)v92, v247);
                    goto LABEL_183;
                  }
                  if ( FuncList__Check(120, *p_funcType, 0LL) )
                  {
                    v54 = isCommandSideEffect;
                    BattleLogicFunction__functionRevival(
                      v20,
                      v19,
                      funcEntity,
                      dataVals_k__BackingField,
                      index,
                      isCommandSideEffect,
                      v248);
                    goto LABEL_164;
                  }
                  if ( FuncList__Check(121, *p_funcType, 0LL) )
                  {
                    v221 = v19->fields.actorId;
                    v222 = (int32_t)v92->fields.logic;
                    v223 = 11;
                  }
                  else
                  {
                    if ( !FuncList__Check(143, *p_funcType, 0LL) )
                    {
                      if ( FuncList__Check(124, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__functionMoveState(v20, args, v19, v90, v249);
                        goto LABEL_183;
                      }
                      if ( FuncList__Check(125, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__ChangeBGMCostume(v20, dataVals_k__BackingField, v19, v250);
                        goto LABEL_183;
                      }
                      v251 = FuncList__Check(126, *p_funcType, 0LL);
                      if ( v251 )
                      {
                        BattleLogicFunction__LossCommandSpell(
                          (BattleLogicFunction_o *)v251,
                          dataVals_k__BackingField,
                          v19,
                          v252);
                        goto LABEL_183;
                      }
                      if ( FuncList__Check(127, *p_funcType, 0LL) )
                        goto LABEL_183;
                      if ( FuncList__Check(128, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__FunctionUpdateEntryPositions(v20, dataVals_k__BackingField, v253);
                        goto LABEL_183;
                      }
                      if ( FuncList__Check(63, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__FunctionUpdateEntryMaxCountEachTurn(v20, dataVals_k__BackingField, v254);
                        goto LABEL_183;
                      }
                      if ( FuncList__Check(130, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__FunctionToFieldAddChangeFieldBuff(v20, args, v19, v90, isTreasureDvc, v255);
                        goto LABEL_183;
                      }
                      if ( FuncList__Check(131, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__FunctionSubFieldBuff(v20, args, v19, v90, v256);
                        goto LABEL_183;
                      }
                      if ( FuncList__Check(134, *p_funcType, 0LL) )
                      {
                        this = (BattleLogicFunction_o *)DataVals__GetValue(dataVals_k__BackingField, 0LL);
                        if ( !v20->fields.data )
                          goto LABEL_453;
                        BattleData__AddQuestRouteId(v20->fields.data, (int32_t)this, 0LL);
                        goto LABEL_183;
                      }
                      if ( FuncList__Check(135, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__FunctionLastSkillCopy(v20, v19, dataVals_k__BackingField, args, v257);
                        goto LABEL_183;
                      }
                      if ( FuncList__Check(136, *p_funcType, 0LL) )
                      {
                        v258 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
                        BattleLogicFunction__FunctionChangeEnemyMasterFace(v20, v258, v259);
                        goto LABEL_183;
                      }
                      if ( FuncList__Check(137, *p_funcType, 0LL) )
                      {
                        v193 = v19->fields.actorId;
                        v194 = (int32_t)v92->fields.logic;
                        v195 = ((__int64 (__fastcall *)(BattleLogicFunction_o *, void *))v92->klass[1]._1.parent)(
                                 v92,
                                 v92->klass[1]._1.generic_class) > 1;
LABEL_232:
                        v197 = v20;
                        v198 = v193;
                        v199 = v194;
LABEL_235:
                        v174 = BattleLogicFunction__functionValueDamage(
                                 v197,
                                 v198,
                                 v199,
                                 dataVals_k__BackingField,
                                 index,
                                 v195,
                                 v19,
                                 v196);
                        goto LABEL_219;
                      }
                      if ( FuncList__Check(138, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__FunctionAddBattleValue(v20, funcEntity, v260);
                        goto LABEL_183;
                      }
                      if ( FuncList__Check(139, *p_funcType, 0LL) )
                      {
                        BattleLogicFunction__FunctionSetBattleValue(v20, funcEntity, v261);
                        goto LABEL_183;
                      }
                      if ( FuncList__Check(140, *p_funcType, 0LL) )
                      {
                        klass_high = SHIDWORD(v92[4].klass);
                        v265 = (float)(DataVals__GetValue(dataVals_k__BackingField, 0LL) * klass_high) / 1000.0;
                        if ( v265 == INFINITY )
                          v266 = 0x80000000;
                        else
                          v266 = (int)v265;
                        v174 = BattleLogicFunction__functionGainNp(
                                 v20,
                                 args,
                                 v263,
                                 targetId_k__BackingField,
                                 dataVals_k__BackingField,
                                 v266,
                                 v264);
                        goto LABEL_219;
                      }
                      if ( !FuncList__Check(141, *p_funcType, 0LL) )
                      {
                        if ( FuncList__Check(142, *p_funcType, 0LL) )
                        {
                          v174 = BattleLogicFunction__FunctionAddBattlePoint(
                                   v20,
                                   args,
                                   targetId_k__BackingField,
                                   dataVals_k__BackingField,
                                   v273);
                          if ( !v174 )
                            goto LABEL_183;
                        }
                        else
                        {
                          if ( !FuncList__Check(144, *p_funcType, 0LL) )
                          {
                            this = (BattleLogicFunction_o *)FuncList__Check(145, *p_funcType, 0LL);
                            if ( ((unsigned __int8)this & 1) != 0 )
                            {
                              v275 = v20->fields.data;
                              if ( !v275 )
                                goto LABEL_453;
                              perf = (UnityEngine_Object_o *)v275->fields.perf;
                              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
                              this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality(perf, 0LL, 0LL);
                              if ( ((unsigned __int8)this & 1) != 0 )
                              {
                                v277 = v20->fields.data;
                                if ( !v277 )
                                  goto LABEL_453;
                                this = (BattleLogicFunction_o *)v277->fields.perf;
                                if ( !this )
                                  goto LABEL_453;
                                BattlePerformance__HideOverGaugeMessage((BattlePerformance_o *)this, 0LL);
                              }
                            }
                            goto LABEL_183;
                          }
                          v174 = BattleLogicFunction__FunctionSetNpExecutedState(
                                   v20,
                                   args,
                                   targetId_k__BackingField,
                                   dataVals_k__BackingField,
                                   v274);
                        }
                        goto LABEL_219;
                      }
                      v267 = SHIDWORD(v92[4].klass);
                      v268 = (float)(DataVals__GetValue(dataVals_k__BackingField, 0LL) * v267) / 1000.0;
                      v269 = (int)v268;
                      if ( v268 == INFINITY )
                        v269 = 0x80000000;
                      v270 = (BattleLogicFunction_o *)BattleServantData__addNp(
                                                        (BattleServantData_o *)v92,
                                                        -v269,
                                                        0,
                                                        0LL);
                      v271 = (int)v270;
                      this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                                        v270,
                                                        funcEntity,
                                                        (int32_t)v92->fields.logic,
                                                        index,
                                                        isCommandSideEffect,
                                                        0LL,
                                                        v272);
                      if ( !this )
                        goto LABEL_453;
                      v131 = (BattleActionData_BuffData_o *)this;
                      HIDWORD(this->fields.logic) = 3;
                      v136 = v271;
LABEL_181:
                      BattleActionData_BuffData__setSaveNp((BattleActionData_BuffData_o *)this, v136, 0LL);
                      goto LABEL_182;
                    }
                    v221 = v19->fields.actorId;
                    v222 = (int32_t)v92->fields.logic;
                    v223 = 12;
                  }
LABEL_289:
                  v174 = BattleLogicFunction__functionNPDamage(
                           v20,
                           v221,
                           v222,
                           dataVals_k__BackingField,
                           index,
                           v223,
                           v19,
                           v220);
                  goto LABEL_219;
                }
                v242 = (BattleActionData_UpShiftGaugeData_o *)sub_1B887FC(BattleActionData_DownShiftGaugeData_TypeInfo);
                BattleActionData_DownShiftGaugeData___ctor((BattleActionData_DownShiftGaugeData_o *)v242, 0LL);
              }
              BattleLogicFunction__functionBreakGaugeChange(
                v20,
                v19,
                funcUnit,
                (BattleServantData_o *)v92,
                (BattleActionData_BaseShiftGaugeData_o *)v242,
                v243);
              goto LABEL_183;
            }
            if ( BattleServantData__checkPlayer((BattleServantData_o *)v92, 0LL) )
            {
              v132 = DataVals__GetValue(dataVals_k__BackingField, 0LL);
              v133 = (BattleLogicFunction_o *)BattleServantData__addNp((BattleServantData_o *)v92, -v132, 0, 0LL);
              v134 = (int)v133;
              this = (BattleLogicFunction_o *)BattleLogicFunction__getFunctionObject(
                                                v133,
                                                funcEntity,
                                                (int32_t)v92->fields.logic,
                                                index,
                                                v54,
                                                0LL,
                                                v135);
              if ( !this )
                goto LABEL_453;
              v131 = (BattleActionData_BuffData_o *)this;
              v136 = v134;
              HIDWORD(this->fields.logic) = 3;
              goto LABEL_181;
            }
          }
LABEL_164:
          v95 = &funcEntity->fields.funcType;
LABEL_134:
          isDamage = FuncList__isDamage(*v95, 0LL);
          if ( isDamage )
            v112 = 0;
          else
            v112 = -110;
          if ( isDamage )
            v113 = 0;
          else
            v113 = 146;
          if ( v112 != -110 )
          {
            if ( v113 )
              return v19;
            if ( !LOBYTE(v92[9].fields.buffProgressTurnOpponentList) )
            {
              this = (BattleLogicFunction_o *)v92[9].klass;
              if ( !this )
                goto LABEL_453;
              if ( !LOBYTE(this[1].fields.buffProgressTurnOpponentList) )
              {
                LOBYTE(v92[9].fields.buffProgressTurnOpponentList) = 1;
                if ( !v315 )
                  goto LABEL_453;
                action = (BattleActionData_o *)LODWORD(v92->fields.logic);
                items = v315->fields._items;
                v115 = Method_System_Collections_Generic_List_int__Add__;
                ++v315->fields._version;
                if ( !items )
                  goto LABEL_453;
                size = v315->fields._size;
                if ( (unsigned int)size >= items->max_length )
                {
                  System_Collections_Generic_List_int___AddWithResize(
                    v315,
                    (int32_t)action,
                    *(const MethodInfo_34E0810 **)(*(_QWORD *)(v115[4] + 192LL) + 112LL));
                  this = (BattleLogicFunction_o *)v92[9].klass;
                  if ( !this )
                    goto LABEL_453;
                }
                else
                {
                  v315->fields._size = size + 1;
                  items->m_Items[size + 1] = (int)action;
                }
                v117 = BattleBuffData__UseProgressingDoNotAct(
                         (BattleBuffData_o *)this,
                         (BattleServantData_o *)v92,
                         0,
                         0LL);
                BattleActionData__addSideEffectActionData(v19, v117, 1, 0LL);
                this = (BattleLogicFunction_o *)v92[9].klass;
                if ( !this )
                  goto LABEL_453;
              }
              LOBYTE(this[1].fields.buffProgressTurnOpponentList) = 0;
            }
          }
          BattleLogicFunction_ProcListInArgs__setFuncResult(
            args,
            targetId_k__BackingField,
            v19->fields.funcResult,
            dataVals_k__BackingField->fields.funcIndex,
            0LL);
          BattleLogicFunction__SetReceiveFunctionId(
            v20,
            v19->fields.funcResult,
            targetId_k__BackingField,
            funcEntity,
            v118);
LABEL_153:
          v88 = v87->max_length;
        }
      }
      v55 = ServantData;
      if ( !isCreateSideEffect )
        break;
      v60 = v318;
      v278 = v321;
      if ( !funcEntity )
        goto LABEL_453;
      v279 = FuncList__Check(26, *p_funcType, 0LL);
      v280 = (BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *)sub_1B887FC(BattleLogicFunction_AfterAttackSideEffectMakeArgument_TypeInfo);
      BattleLogicFunction_AfterAttackSideEffectMakeArgument___ctor(v280, 0LL);
      if ( !v280 )
        goto LABEL_453;
      Argument__Init = BattleLogicFunction_AfterAttackSideEffectMakeArgument__Init(v280, v19, 0LL);
      BattleLogicFunction__setAttackSideEffect(v20, v19, ServantData, v279 || isTreasureDvc, Argument__Init, v282);
      this = (BattleLogicFunction_o *)BattleActionData__getDamageTargetIdList(v19, 0LL);
      if ( !this )
        goto LABEL_453;
      v54 = isCommandSideEffect;
      v283 = this;
      if ( this->fields.logic )
      {
        if ( v313 )
        {
          v284 = 0LL;
        }
        else
        {
          v284 = (BattleCommandData_o *)sub_1B887FC(BattleCommandData_TypeInfo);
          BattleCommandData___ctor(v284, 0LL);
          this = (BattleLogicFunction_o *)BattleServantData__getTreasureDvcCardId(ServantData, 0LL);
          if ( !v284 )
            goto LABEL_453;
          v284->fields._type = (int)this;
          v284->fields.treasureDvc = BattleServantData__getTreasureDvcId(ServantData, 1, 0LL, 0LL);
        }
        v285 = (UnityEngine_Object_o *)v20->fields.logic;
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (BattleLogicFunction_o *)UnityEngine_Object__op_Inequality(v285, 0LL, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 && (v286 = v283->fields.logic, (int)v286 >= 1) )
        {
          v287 = 0LL;
          do
          {
            if ( v287 >= (unsigned int)v286 )
              goto LABEL_454;
            this = (BattleLogicFunction_o *)v20->fields.logic;
            if ( !this )
              goto LABEL_453;
            this = (BattleLogicFunction_o *)BattleLogic__setDamageSideEffect(
                                              (BattleLogic_o *)this,
                                              v19,
                                              v19->fields.actorId,
                                              *((_DWORD *)&v283->fields.logictarget + v287),
                                              v284,
                                              0LL);
            LODWORD(v286) = v283->fields.logic;
            ++v287;
          }
          while ( (__int64)v287 < (int)v286 );
          v54 = isCommandSideEffect;
          v55 = ServantData;
        }
        else
        {
          v54 = isCommandSideEffect;
        }
        v60 = v318;
      }
LABEL_396:
      v59 = v60->max_length;
      v62 = v278 + 1;
      if ( v62 >= v59 )
        goto LABEL_412;
    }
    v60 = v318;
LABEL_395:
    v278 = v321;
    goto LABEL_396;
  }
  v311 = 0;
  v312 = 0;
LABEL_412:
  this = (BattleLogicFunction_o *)BattleLogicFunction_ProcListInArgs__get_CheckDuplicateFunc(args, 0LL);
  if ( !this )
    goto LABEL_453;
  ((void (__fastcall *)(BattleLogicFunction_o *, void *))this->klass[1]._1.namespaze)(
    this,
    this->klass[1]._1.byval_arg.data);
  if ( (v312 & 1) != 0 )
  {
    this = (BattleLogicFunction_o *)v20->fields.data;
    if ( !this )
      goto LABEL_453;
    this = (BattleLogicFunction_o *)BattleData__getServantData((BattleData_o *)this, *p_actorId, 0LL);
    if ( !this )
      goto LABEL_453;
    BattleServantData__resetAccumulationDamage((BattleServantData_o *)this, 0LL);
  }
  if ( BattleActionData__checkSummonServantList(v19, 0LL) )
  {
    v288 = (UnityEngine_Object_o *)v20->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v288, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)BattleActionData__getSummonServant(v19, -1, 0LL);
      if ( !this )
        goto LABEL_453;
      v289 = (int)this->fields.logic;
      v290 = this;
      if ( v289 >= 1 )
      {
        v291 = 0;
        while ( v291 < v289 )
        {
          v292 = *((_QWORD *)&v290->fields.logictarget + (int)v291);
          if ( !v292 )
            goto LABEL_453;
          this = (BattleLogicFunction_o *)v20->fields.logic;
          if ( !this )
            goto LABEL_453;
          BattleLogic__actEnemyPassiveSkill((BattleLogic_o *)this, *(_DWORD *)(v292 + 28), 0LL);
          v289 = (int)v290->fields.logic;
          if ( (int)++v291 >= v289 )
            goto LABEL_428;
        }
        goto LABEL_454;
      }
    }
  }
LABEL_428:
  FuncSideEffectArg = BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(args, 0LL);
  if ( FuncSideEffectArg )
    ((void (__fastcall *)(BattleLogicFunction_FuncSideEffectFunctionArgument_o *, BattleLogicFunction_o *, BattleActionData_o *, BattleServantData_o *, void *))FuncSideEffectArg->klass->vtable._7_SetSideEffect.method)(
      FuncSideEffectArg,
      v20,
      v19,
      v55,
      FuncSideEffectArg->klass[1]._1.image);
  if ( isBuffUpdate )
  {
    v294 = (UnityEngine_Object_o *)v20->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v294, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)v20->fields.logic;
      if ( !this )
        goto LABEL_453;
      BattleLogic__checkUsedBuff((BattleLogic_o *)this, 0LL);
      v295 = v20->fields.data;
      if ( !v295 )
        goto LABEL_453;
      this = (BattleLogicFunction_o *)v295->fields._FieldEnvData_k__BackingField;
      if ( !this )
        goto LABEL_453;
      BattleFieldEnvironmentData__CheckUsedBuff((BattleFieldEnvironmentData_o *)this, 0LL);
    }
  }
  if ( (v311 & 1) != 0 || args->fields.updateField )
  {
    v296 = (UnityEngine_Object_o *)v20->fields.logic;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v296, 0LL, 0LL) )
    {
      this = (BattleLogicFunction_o *)v20->fields.logic;
      if ( !this )
        goto LABEL_453;
      BattleLogic__updateFieldBuff((BattleLogic_o *)this, 0LL);
    }
  }
  this = (BattleLogicFunction_o *)v315;
  if ( !v315 )
LABEL_453:
    sub_1B8880C(this, action);
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v327,
    v315,
    (const MethodInfo_34E12E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v328 = v327;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v328,
            (const MethodInfo_3274238 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    v298 = v20->fields.data;
    if ( !v298 )
      sub_1B8880C(0LL, v297);
    v299 = BattleData__getServantData(v298, v328.fields._current, 0LL);
    if ( v299 )
      v299->fields.isTDLimitCount = 0;
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v328,
    (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return v19;
}


void __fastcall BattleLogicFunction__setAttackSideEffect(
        BattleLogicFunction_o *this,
        BattleActionData_o *mainAction,
        BattleServantData_o *actionSvtData,
        bool isTreasureDvc,
        BattleLogicFunction_SideEffectMakeArgument_o *attackArg,
        const MethodInfo *method)
{
  BattleActionData_o *v9; // x21
  BattleLogicFunction_o *v10; // x22
  BattleCommandData_o *v11; // x23
  BattleLogicFunction_AttackSideEffectFunctionArgument_o *v12; // x24
  System_Collections_Generic_IEnumerable_TSource__o *SideEffectList_k__BackingField; // x25
  BattleLogicFunction___c_c *v14; // x0
  System_Func_object__int__o *_9__52_0; // x26
  Il2CppObject *v16; // x27
  struct BattleLogicFunction___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v20; // x0
  __int64 v21; // x25
  BattleLogicFunction_SideEffectMakeArgument_o *v22; // x0
  const MethodInfo *v23; // x6
  const MethodInfo *v24; // x6

  v9 = mainAction;
  v10 = this;
  if ( (byte_4A5DC70 & 1) == 0 )
  {
    sub_1B885B0(&BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo);
    sub_1B885B0(&BattleCommandData_TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_BattleActionData_SideEffectData__int___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    sub_1B885B0(&System_Func_BattleActionData_SideEffectData__int__TypeInfo);
    sub_1B885B0(&int___TypeInfo);
    sub_1B885B0(&Method_BattleLogicFunction___c__setAttackSideEffect_b__52_0__);
    this = (BattleLogicFunction_o *)sub_1B885B0(&BattleLogicFunction___c_TypeInfo);
    byte_4A5DC70 = 1;
  }
  if ( actionSvtData )
  {
    if ( !attackArg )
      goto LABEL_22;
    if ( BasicHelper__IsNullOrEmpty(
           (System_Collections_ICollection_o *)attackArg->fields._SideEffectList_k__BackingField,
           0LL) )
    {
      return;
    }
    if ( isTreasureDvc )
    {
      v11 = (BattleCommandData_o *)sub_1B887FC(BattleCommandData_TypeInfo);
      BattleCommandData___ctor(v11, 0LL);
      this = (BattleLogicFunction_o *)BattleServantData__getTreasureDvcCardId(actionSvtData, 0LL);
      if ( !v11 )
        goto LABEL_22;
      v11->fields._type = (int)this;
      v11->fields.treasureDvc = BattleServantData__getTreasureDvcId(actionSvtData, 1, 0LL, 0LL);
    }
    else
    {
      v11 = 0LL;
    }
    v12 = (BattleLogicFunction_AttackSideEffectFunctionArgument_o *)sub_1B887FC(BattleLogicFunction_AttackSideEffectFunctionArgument_TypeInfo);
    BattleLogicFunction_AttackSideEffectFunctionArgument___ctor(v12, 0LL);
    SideEffectList_k__BackingField = (System_Collections_Generic_IEnumerable_TSource__o *)attackArg->fields._SideEffectList_k__BackingField;
    v14 = BattleLogicFunction___c_TypeInfo;
    if ( !BattleLogicFunction___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BattleLogicFunction___c_TypeInfo);
      v14 = BattleLogicFunction___c_TypeInfo;
    }
    _9__52_0 = (System_Func_object__int__o *)v14->static_fields->__9__52_0;
    if ( !_9__52_0 )
    {
      if ( !v14->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v14);
        v14 = BattleLogicFunction___c_TypeInfo;
      }
      v16 = (Il2CppObject *)v14->static_fields->__9;
      _9__52_0 = (System_Func_object__int__o *)sub_1B887FC(System_Func_BattleActionData_SideEffectData__int__TypeInfo);
      System_Func_object__int____ctor(_9__52_0, v16, Method_BattleLogicFunction___c__setAttackSideEffect_b__52_0__, 0LL);
      static_fields = BattleLogicFunction___c_TypeInfo->static_fields;
      static_fields->__9__52_0 = (struct System_Func_BattleActionData_SideEffectData__int__o *)_9__52_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__52_0, (int32_t)_9__52_0, v18, v19);
    }
    v20 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__int_(
                                                                 SideEffectList_k__BackingField,
                                                                 (System_Func_TSource__TResult__o *)_9__52_0,
                                                                 (const MethodInfo_2EAFB30 *)Method_System_Linq_Enumerable_Select_BattleActionData_SideEffectData__int___);
    this = (BattleLogicFunction_o *)System_Linq_Enumerable__ToArray_int_(
                                      v20,
                                      (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
    if ( v9 )
    {
      BattleActionData__SetFirstAtkMainTargetId(v9, (System_Int32_array *)this, 0LL);
      v21 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, const char *))attackArg->klass[1]._1.gc_desc)(
              attackArg,
              attackArg->klass[1]._1.name);
      this = (BattleLogicFunction_o *)sub_1B88658(int___TypeInfo, 1LL);
      if ( this )
      {
        mainAction = (BattleActionData_o *)this;
        if ( !LODWORD(this->fields.logic) )
          sub_1B88814(this, this);
        LODWORD(this->fields.logictarget) = v9->fields._FirstAtkMainTargetId_k__BackingField;
        if ( v21 )
        {
          v22 = (BattleLogicFunction_SideEffectMakeArgument_o *)(*(__int64 (__fastcall **)(__int64, BattleLogicFunction_o *, _QWORD))(*(_QWORD *)v21 + 408LL))(
                                                                  v21,
                                                                  this,
                                                                  *(_QWORD *)(*(_QWORD *)v21 + 416LL));
          BattleLogicFunction__SetTargetAttackSideEffect(v10, v12, v9, actionSvtData, v11, v22, v23);
          BattleLogicFunction__SetTargetAttackSideEffect(v10, v12, v9, actionSvtData, v11, attackArg, v24);
          return;
        }
      }
    }
LABEL_22:
    sub_1B8880C(this, mainAction);
  }
}


BattleLogicFunction_SideEffectMakeArgument_o *__fastcall BattleLogicFunction_AfterAttackSideEffectMakeArgument__Init(
        BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *this,
        BattleActionData_o *mainAction,
        const MethodInfo *method)
{
  struct BattleActionData_SideEffectData_array *DamageAttackSideEffectList; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  if ( !mainAction )
    sub_1B8880C(this, 0LL);
  DamageAttackSideEffectList = BattleActionData__getDamageAttackSideEffectList(mainAction, 0LL);
  this->fields._SideEffectList_k__BackingField = DamageAttackSideEffectList;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)DamageAttackSideEffectList, v5, v6);
  return (BattleLogicFunction_SideEffectMakeArgument_o *)this;
}


BattleLogicFunction_SideEffectMakeArgument_o *__fastcall BattleLogicFunction_AfterAttackSideEffectMakeArgument__MakeOnlyMainArgument(
        BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *this,
        const MethodInfo *method)
{
  BattleLogicFunction_SideEffectMakeArgument_o *v2; // x19
  const MethodInfo *v3; // x1

  if ( (byte_4A5DD2A & 1) == 0 )
  {
    sub_1B885B0(&BattleLogicFunction_AfterMainAttackSideEffectMakeArgument_TypeInfo);
    byte_4A5DD2A = 1;
  }
  v2 = (BattleLogicFunction_SideEffectMakeArgument_o *)sub_1B887FC(BattleLogicFunction_AfterMainAttackSideEffectMakeArgument_TypeInfo);
  BattleLogicFunction_SideEffectMakeArgument___ctor(v2, v3);
  return v2;
}


int32_t __fastcall BattleLogicFunction_AfterAttackSideEffectMakeArgument__get_BuffAct(
        BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *this,
        const MethodInfo *method)
{
  return 80;
}


int32_t __fastcall BattleLogicFunction_AfterAttackSideEffectMakeArgument__get_SideEffectType(
        BattleLogicFunction_AfterAttackSideEffectMakeArgument_o *this,
        const MethodInfo *method)
{
  return 1;
}


int32_t __fastcall BattleLogicFunction_AfterMainAttackSideEffectMakeArgument__get_BuffAct(
        BattleLogicFunction_AfterMainAttackSideEffectMakeArgument_o *this,
        const MethodInfo *method)
{
  return 121;
}


void __fastcall BattleLogicFunction_AttackSideEffectCheckDuplicateFunction___ctor(
        BattleLogicFunction_AttackSideEffectCheckDuplicateFunction_o *this,
        BattleLogicFunction_CommonSideEffectFunctionArgument_o *argument,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3

  BattleLogicFunction_CommonCheckDuplicateFunction___ctor(
    (BattleLogicFunction_CommonCheckDuplicateFunction_o *)this,
    (const MethodInfo *)argument);
  this->fields.argument = argument;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.argument, (int32_t)argument, v5, v6);
}


void __fastcall BattleLogicFunction_AttackSideEffectFunctionArgument___ctor(
        BattleLogicFunction_AttackSideEffectFunctionArgument_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  const MethodInfo *v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5DD0F & 1) == 0 )
  {
    sub_1B885B0(&BattleLogicFunction_AttackSideEffectCheckDuplicateFunction_TypeInfo);
    byte_4A5DD0F = 1;
  }
  BattleLogicFunction_CommonSideEffectFunctionArgument___ctor(
    (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)this,
    method);
  v3 = sub_1B887FC(BattleLogicFunction_AttackSideEffectCheckDuplicateFunction_TypeInfo);
  BattleLogicFunction_CommonCheckDuplicateFunction___ctor((BattleLogicFunction_CommonCheckDuplicateFunction_o *)v3, v4);
  *(_QWORD *)(v3 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 24), (int32_t)this, v5, v6);
  this->fields.checkDuplicate = (struct BattleLogicFunction_CheckDuplicateFunction_o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.checkDuplicate, v3, v7, v8);
}


void __fastcall BattleLogicFunction_CheckDuplicateFunction___ctor(
        BattleLogicFunction_CheckDuplicateFunction_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicFunction_CheckDuplicateFunction__Init(
        BattleLogicFunction_CheckDuplicateFunction_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleLogicFunction_CheckDuplicateFunction__enableExecutedFunctions(
        BattleLogicFunction_CheckDuplicateFunction_o *this,
        const MethodInfo *method)
{
  ;
}


bool __fastcall BattleLogicFunction_CheckDuplicateFunction__isNotExec(
        BattleLogicFunction_CheckDuplicateFunction_o *this,
        DataVals_o *vals,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  return 0;
}


void __fastcall BattleLogicFunction_CommonCheckDuplicateFunction___ctor(
        BattleLogicFunction_CommonCheckDuplicateFunction_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5DD1C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
    byte_4A5DD1C = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__);
  this->fields.executedFuncList = (struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v3, v4, v5);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicFunction_CommonCheckDuplicateFunction__Init(
        BattleLogicFunction_CommonCheckDuplicateFunction_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall BattleLogicFunction_CommonCheckDuplicateFunction__enableExecutedFunctions(
        BattleLogicFunction_CommonCheckDuplicateFunction_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *executedFuncList; // x0
  int32_t v4; // w20

  if ( (byte_4A5DD18 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__get_Item__);
    byte_4A5DD18 = 1;
  }
  executedFuncList = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList;
  if ( !executedFuncList )
LABEL_8:
    sub_1B8880C(executedFuncList, method);
  v4 = 0;
  while ( v4 < executedFuncList->fields._size )
  {
    executedFuncList = (System_Collections_Generic_List_object__o *)System_Collections_Generic_List_object___get_Item(
                                                                      executedFuncList,
                                                                      v4,
                                                                      (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__get_Item__);
    if ( executedFuncList )
    {
      LOBYTE(executedFuncList->fields._size) = 1;
      executedFuncList = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList;
      ++v4;
      if ( executedFuncList )
        continue;
    }
    goto LABEL_8;
  }
}


bool __fastcall BattleLogicFunction_CommonCheckDuplicateFunction__isCheckCond(
        BattleLogicFunction_CommonCheckDuplicateFunction_o *this,
        DataVals_o *vals,
        const MethodInfo *method)
{
  if ( !vals )
    sub_1B8880C(this, 0LL);
  return DataVals__isCheckDuplicate(vals, 0LL);
}


bool __fastcall BattleLogicFunction_CommonCheckDuplicateFunction__isExecutedFunction(
        BattleLogicFunction_CommonCheckDuplicateFunction_o *this,
        DataVals_o *vals,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_List_object__o *executedFuncList; // x19
  System_Predicate_object__o *v11; // x20

  if ( (byte_4A5DD1A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__);
    sub_1B885B0(&System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
    sub_1B885B0(&Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0__isExecutedFunction_b__0__);
    sub_1B885B0(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0_TypeInfo);
    byte_4A5DD1A = 1;
  }
  v5 = sub_1B887FC(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = vals,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), (int32_t)vals, v8, v9),
        executedFuncList = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList,
        v11 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo),
        System_Predicate_object____ctor(
          v11,
          (Il2CppObject *)v5,
          Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0__isExecutedFunction_b__0__,
          0LL),
        !executedFuncList) )
  {
    sub_1B8880C(v6, v7);
  }
  return System_Collections_Generic_List_object___FindIndex(
           executedFuncList,
           (System_Predicate_T__o *)v11,
           (const MethodInfo_34FE08C *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__) >= 0;
}


bool __fastcall BattleLogicFunction_CommonCheckDuplicateFunction__isExecutedTarget(
        BattleLogicFunction_CommonCheckDuplicateFunction_o *this,
        DataVals_o *vals,
        int32_t targetId,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_Collections_Generic_List_object__o *executedFuncList; // x19
  System_Predicate_object__o *v13; // x20

  if ( (byte_4A5DD1B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__);
    sub_1B885B0(&System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
    sub_1B885B0(&Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0__isExecutedTarget_b__0__);
    sub_1B885B0(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0_TypeInfo);
    byte_4A5DD1B = 1;
  }
  v7 = sub_1B887FC(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7
    || (*(_QWORD *)(v7 + 16) = vals,
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)vals, v10, v11),
        *(_DWORD *)(v7 + 24) = targetId,
        executedFuncList = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList,
        v13 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo),
        System_Predicate_object____ctor(
          v13,
          (Il2CppObject *)v7,
          Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0__isExecutedTarget_b__0__,
          0LL),
        !executedFuncList) )
  {
    sub_1B8880C(v8, v9);
  }
  return System_Collections_Generic_List_object___FindIndex(
           executedFuncList,
           (System_Predicate_T__o *)v13,
           (const MethodInfo_34FE08C *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__) >= 0;
}


bool __fastcall BattleLogicFunction_CommonCheckDuplicateFunction__isNotExec(
        BattleLogicFunction_CommonCheckDuplicateFunction_o *this,
        DataVals_o *vals,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  char v7; // w22

  if ( targetIds && *(_QWORD *)&targetIds->max_length )
  {
    if ( (((__int64 (__fastcall *)(BattleLogicFunction_CommonCheckDuplicateFunction_o *, DataVals_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._7_isCheckCond.method)(
            this,
            vals,
            this->klass->vtable._8_saveExecutedFunction.methodPtr,
            method) & 1) != 0 )
      v7 = ((__int64 (__fastcall *)(BattleLogicFunction_CommonCheckDuplicateFunction_o *, DataVals_o *, System_Int32_array *, Il2CppMethodPointer))this->klass->vtable._9_isNotExecLocal.method)(
             this,
             vals,
             targetIds,
             this->klass->vtable._10_isExecutedFunction.methodPtr);
    else
      v7 = 0;
    ((void (__fastcall *)(BattleLogicFunction_CommonCheckDuplicateFunction_o *, DataVals_o *, System_Int32_array *, Il2CppMethodPointer))this->klass->vtable._8_saveExecutedFunction.method)(
      this,
      vals,
      targetIds,
      this->klass->vtable._9_isNotExecLocal.methodPtr);
  }
  else
  {
    v7 = 0;
  }
  return v7 & 1;
}


bool __fastcall BattleLogicFunction_CommonCheckDuplicateFunction__isNotExecLocal(
        BattleLogicFunction_CommonCheckDuplicateFunction_o *this,
        DataVals_o *vals,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  unsigned int targetType; // w8

  if ( !vals )
    sub_1B8880C(this, 0LL);
  targetType = vals->fields.targetType;
  if ( targetType < 0x1A || targetType == 30 )
    return ((__int64 (__fastcall *)(BattleLogicFunction_CommonCheckDuplicateFunction_o *))this->klass->vtable._10_isExecutedFunction.method)(this);
  else
    return 0;
}


void __fastcall BattleLogicFunction_CommonCheckDuplicateFunction__saveExecutedFunction(
        BattleLogicFunction_CommonCheckDuplicateFunction_o *this,
        DataVals_o *vals,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  __int64 v7; // x21
  __int64 Index; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  unsigned __int64 v12; // x26
  __int64 v13; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  __int64 v16; // x23
  __int64 v17; // x0
  __int64 v18; // x1
  System_Collections_Generic_List_object__o *executedFuncList; // x24
  System_Predicate_object__o *v20; // x25
  DataVals_o *v21; // x24
  System_Collections_Generic_List_object__o *v22; // x23
  int32_t v23; // w25
  BattleLogicFunction_ExecutedFunctionData_o *v24; // x22
  const MethodInfo *v25; // x3
  int32_t v26; // w2
  int32_t v27; // w3
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0

  if ( (byte_4A5DD19 & 1) == 0 )
  {
    sub_1B885B0(&BattleLogicFunction_ExecutedFunctionData_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__);
    sub_1B885B0(&System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
    sub_1B885B0(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0_TypeInfo);
    sub_1B885B0(&Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1__saveExecutedFunction_b__0__);
    sub_1B885B0(&BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1_TypeInfo);
    byte_4A5DD19 = 1;
  }
  v7 = sub_1B887FC(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  if ( !v7 )
    goto LABEL_19;
  *(_QWORD *)(v7 + 16) = vals;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 16), (int32_t)vals, v10, v11);
  if ( !targetIds )
    goto LABEL_19;
  if ( (int)targetIds->max_length >= 1 )
  {
    v12 = 0LL;
    while ( 1 )
    {
      v13 = sub_1B887FC(BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1_TypeInfo);
      System_Object___ctor((Il2CppObject *)v13, 0LL);
      if ( !v13 )
        break;
      *(_QWORD *)(v13 + 24) = v7;
      v16 = v13 + 24;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v13 + 24), v7, v14, v15);
      if ( v12 >= targetIds->max_length )
        sub_1B88814(v17, v18);
      *(_DWORD *)(v13 + 16) = targetIds->m_Items[v12 + 1];
      executedFuncList = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList;
      v20 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
      System_Predicate_object____ctor(
        v20,
        (Il2CppObject *)v13,
        Method_BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1__saveExecutedFunction_b__0__,
        0LL);
      if ( !executedFuncList )
        break;
      Index = System_Collections_Generic_List_object___FindIndex(
                executedFuncList,
                (System_Predicate_T__o *)v20,
                (const MethodInfo_34FE08C *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__FindIndex__);
      if ( (Index & 0x80000000) != 0 )
      {
        if ( !*(_QWORD *)v16 )
          break;
        v21 = *(DataVals_o **)(*(_QWORD *)v16 + 16LL);
        v22 = (System_Collections_Generic_List_object__o *)this->fields.executedFuncList;
        v23 = *(_DWORD *)(v13 + 16);
        v24 = (BattleLogicFunction_ExecutedFunctionData_o *)sub_1B887FC(BattleLogicFunction_ExecutedFunctionData_TypeInfo);
        BattleLogicFunction_ExecutedFunctionData___ctor(v24, v21, v23, v25);
        if ( !v22 )
          break;
        items = v22->fields._items;
        v29 = Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__Add__;
        ++v22->fields._version;
        if ( !items )
          break;
        size = v22->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v22,
            (Il2CppObject *)v24,
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
        }
        else
        {
          v31 = &items->obj.klass + size;
          v22->fields._size = size + 1;
          v31[4] = (Il2CppClass *)v24;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v31 + 4), (int32_t)v24, v26, v27);
        }
      }
      if ( (__int64)++v12 >= (int)targetIds->max_length )
        return;
    }
LABEL_19:
    sub_1B8880C(Index, v9);
  }
}


void __fastcall BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0___ctor(
        BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1___ctor(
        BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1___saveExecutedFunction_b__0(
        BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_1_o *this,
        BattleLogicFunction_ExecutedFunctionData_o *n,
        const MethodInfo *method)
{
  struct BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass5_0_o *CS___8__locals1; // x8
  struct DataVals_o *vals; // x8
  int32_t targetId; // w8
  bool result; // w0

  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 || !n || (vals = CS___8__locals1->fields.vals) == 0LL )
    sub_1B8880C(this, n);
  result = 0;
  if ( n->fields.index == vals->fields.funcIndex )
  {
    targetId = this->fields.targetId;
    if ( targetId == -1 || n->fields.targetId == targetId )
      return 1;
  }
  return result;
}


void __fastcall BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0___ctor(
        BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0___isExecutedFunction_b__0(
        BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass7_0_o *this,
        BattleLogicFunction_ExecutedFunctionData_o *n,
        const MethodInfo *method)
{
  struct DataVals_o *vals; // x8

  if ( !n || (vals = this->fields.vals) == 0LL )
    sub_1B8880C(this, n);
  return n->fields.index == vals->fields.funcIndex && n->fields.isEnable;
}


void __fastcall BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0___ctor(
        BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0___isExecutedTarget_b__0(
        BattleLogicFunction_CommonCheckDuplicateFunction___c__DisplayClass8_0_o *this,
        BattleLogicFunction_ExecutedFunctionData_o *n,
        const MethodInfo *method)
{
  struct DataVals_o *vals; // x8
  int32_t targetId; // w8

  if ( !n || (vals = this->fields.vals) == 0LL )
    sub_1B8880C(this, n);
  if ( n->fields.index == vals->fields.funcIndex
    && ((targetId = this->fields.targetId, targetId == -1) || n->fields.targetId == targetId) )
  {
    return n->fields.isEnable;
  }
  else
  {
    return 0;
  }
}


void __fastcall BattleLogicFunction_CommonSideEffectCheckDuplicateFunction___ctor(
        BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_o *this,
        BattleLogicFunction_CommonSideEffectFunctionArgument_o *argument,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3

  BattleLogicFunction_CommonCheckDuplicateFunction___ctor(
    (BattleLogicFunction_CommonCheckDuplicateFunction_o *)this,
    (const MethodInfo *)argument);
  this->fields.argument = argument;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.argument, (int32_t)argument, v5, v6);
}


void __fastcall BattleLogicFunction_CommonSideEffectCheckDuplicateFunction__Init(
        BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_o *this,
        const MethodInfo *method)
{
  BattleLogicFunction_CommonSideEffectFunctionArgument_o *argument; // x0
  struct System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *v4; // x0
  int32_t v5; // w2
  int32_t v6; // w3

  argument = this->fields.argument;
  if ( !argument )
    sub_1B8880C(0LL, method);
  v4 = BattleLogicFunction_CommonSideEffectFunctionArgument__getCheckBuffFuncList(argument, method);
  this->fields.executedFuncList = v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v4, v5, v6);
}


bool __fastcall BattleLogicFunction_CommonSideEffectCheckDuplicateFunction__isNotExecLocal(
        BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_o *this,
        DataVals_o *vals,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  if ( !vals )
    goto LABEL_7;
  if ( vals->fields.targetType != 4 )
    return BattleLogicFunction_CommonCheckDuplicateFunction__isNotExecLocal(
             (BattleLogicFunction_CommonCheckDuplicateFunction_o *)this,
             vals,
             targetIds,
             method);
  if ( !targetIds )
LABEL_7:
    sub_1B8880C(this, vals);
  if ( !targetIds->max_length )
    sub_1B88814(this, vals);
  return ((__int64 (__fastcall *)(BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_o *, DataVals_o *, _QWORD, void *))this->klass->vtable._11_isExecutedTarget.method)(
           this,
           vals,
           (unsigned int)targetIds->m_Items[1],
           this->klass[1]._1.image);
}


void __fastcall BattleLogicFunction_CommonSideEffectFunctionArgument___ctor(
        BattleLogicFunction_CommonSideEffectFunctionArgument_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  const MethodInfo *v6; // x1

  if ( (byte_4A5DD0E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData____ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___TypeInfo);
    byte_4A5DD0E = 1;
  }
  *(&this->fields._SkillTiming_k__BackingField + 1) = -1;
  v3 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v3,
    (const MethodInfo_316CF84 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData____ctor__);
  *(_QWORD *)&this->fields.buffUniqueId = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.buffUniqueId, (int32_t)v3, v4, v5);
  BattleLogicFunction_FunctionArgument___ctor((BattleLogicFunction_FunctionArgument_o *)this, v6);
}


System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *__fastcall BattleLogicFunction_CommonSideEffectFunctionArgument__getCheckBuffFuncList(
        BattleLogicFunction_CommonSideEffectFunctionArgument_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_int__object__o *v3; // x0
  System_Collections_Generic_Dictionary_int__object__o *v4; // x20
  int32_t v5; // w21
  System_Collections_Generic_List_object__o *v6; // x22

  if ( (byte_4A5DD0D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___set_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
    byte_4A5DD0D = 1;
  }
  v3 = *(System_Collections_Generic_Dictionary_int__object__o **)&this->fields.buffUniqueId;
  if ( !v3 )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_int__object___ContainsKey(
          v3,
          *(&this->fields._SkillTiming_k__BackingField + 1),
          (const MethodInfo_316DB4C *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___ContainsKey__) )
  {
    v4 = *(System_Collections_Generic_Dictionary_int__object__o **)&this->fields.buffUniqueId;
    v5 = *(&this->fields._SkillTiming_k__BackingField + 1);
    v6 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v6,
      (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData___ctor__);
    if ( !v4 )
      goto LABEL_9;
    System_Collections_Generic_Dictionary_int__object___set_Item(
      v4,
      v5,
      (Il2CppObject *)v6,
      (const MethodInfo_316D944 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___set_Item__);
  }
  v3 = *(System_Collections_Generic_Dictionary_int__object__o **)&this->fields.buffUniqueId;
  if ( !v3 )
LABEL_9:
    sub_1B8880C(v3, method);
  return (System_Collections_Generic_List_BattleLogicFunction_ExecutedFunctionData__o *)System_Collections_Generic_Dictionary_int__object___get_Item(
                                                                                          v3,
                                                                                          *(&this->fields._SkillTiming_k__BackingField
                                                                                          + 1),
                                                                                          (const MethodInfo_316D8B8 *)Method_System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___get_Item__);
}


void __fastcall BattleLogicFunction_ExecutedFunctionData___ctor(
        BattleLogicFunction_ExecutedFunctionData_o *this,
        DataVals_o *vals,
        int32_t targetId,
        const MethodInfo *method)
{
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t funcIndex; // w8

  *(_QWORD *)&this->fields.index = -1LL;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !vals )
    sub_1B8880C(v7, v8);
  funcIndex = vals->fields.funcIndex;
  this->fields.isEnable = 0;
  this->fields.index = funcIndex;
  this->fields.targetId = targetId;
}


bool __fastcall BattleLogicFunction_ExecutedFunctionData__isMatch(
        BattleLogicFunction_ExecutedFunctionData_o *this,
        DataVals_o *vals,
        int32_t targetId,
        bool isCheckEnable,
        const MethodInfo *method)
{
  if ( !vals )
    sub_1B8880C(this, 0LL);
  return this->fields.index == vals->fields.funcIndex
      && (targetId == -1 || this->fields.targetId == targetId)
      && (!isCheckEnable || this->fields.isEnable);
}


void __fastcall BattleLogicFunction_FuncSideEffectFunctionArgument___ctor(
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  const MethodInfo *v6; // x1
  __int64 v7; // x20
  const MethodInfo *v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A5DD10 & 1) == 0 )
  {
    sub_1B885B0(&BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_int__TypeInfo);
    byte_4A5DD10 = 1;
  }
  v3 = (System_Collections_Generic_HashSet_int__o *)sub_1B887FC(System_Collections_Generic_HashSet_int__TypeInfo);
  System_Collections_Generic_HashSet_int____ctor(
    v3,
    (const MethodInfo_33B2B7C *)Method_System_Collections_Generic_HashSet_int___ctor__);
  this->fields.executedBuffFuncDic = (struct System_Collections_Generic_Dictionary_int__List_BattleLogicFunction_ExecutedFunctionData___o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.executedBuffFuncDic, (int32_t)v3, v4, v5);
  BattleLogicFunction_CommonSideEffectFunctionArgument___ctor(
    (BattleLogicFunction_CommonSideEffectFunctionArgument_o *)this,
    v6);
  v7 = sub_1B887FC(BattleLogicFunction_CommonSideEffectCheckDuplicateFunction_TypeInfo);
  BattleLogicFunction_CommonCheckDuplicateFunction___ctor((BattleLogicFunction_CommonCheckDuplicateFunction_o *)v7, v8);
  *(_QWORD *)(v7 + 24) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v7 + 24), (int32_t)this, v9, v10);
  this->fields.checkDuplicate = (struct BattleLogicFunction_CheckDuplicateFunction_o *)v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.checkDuplicate, v7, v11, v12);
}


void __fastcall BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget(
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget,
        const MethodInfo *method)
{
  BattleLogicFunction_FuncSideEffectFunctionArgument_o *v4; // x20
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  struct DataVals_o *dataVals_k__BackingField; // x8

  v4 = this;
  if ( (byte_4A5DD12 & 1) == 0 )
  {
    this = (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__Add__);
    byte_4A5DD12 = 1;
  }
  if ( !funcTarget )
    goto LABEL_12;
  funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField;
  if ( !funcUnit_k__BackingField )
    goto LABEL_12;
  dataVals_k__BackingField = funcUnit_k__BackingField->fields._dataVals_k__BackingField;
  if ( !dataVals_k__BackingField )
    goto LABEL_12;
  if ( !FuncList__IsNotContainsDefaultTarget(dataVals_k__BackingField->fields.funcType, 0LL)
    && (funcTarget->fields._result_k__BackingField || funcTarget->fields.invalidType) )
  {
    this = (BattleLogicFunction_FuncSideEffectFunctionArgument_o *)v4->fields.executedBuffFuncDic;
    if ( this )
    {
      System_Collections_Generic_HashSet_int___Add(
        (System_Collections_Generic_HashSet_int__o *)this,
        funcTarget->fields._targetId_k__BackingField,
        (const MethodInfo_33B3D80 *)Method_System_Collections_Generic_HashSet_int__Add__);
      return;
    }
LABEL_12:
    sub_1B8880C(this, funcTarget);
  }
}


void __fastcall BattleLogicFunction_FuncSideEffectFunctionArgument__AddTarget_43492772(
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *this,
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *arg,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_int__o *executedBuffFuncDic; // x0

  if ( (byte_4A5DD13 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_int__UnionWith__);
    byte_4A5DD13 = 1;
  }
  if ( arg )
  {
    executedBuffFuncDic = (System_Collections_Generic_HashSet_int__o *)this->fields.executedBuffFuncDic;
    if ( !executedBuffFuncDic )
      sub_1B8880C(0LL, arg);
    System_Collections_Generic_HashSet_int___UnionWith(
      executedBuffFuncDic,
      (System_Collections_Generic_IEnumerable_T__o *)arg->fields.executedBuffFuncDic,
      (const MethodInfo_33B3D90 *)Method_System_Collections_Generic_HashSet_int__UnionWith__);
  }
}


BuffList_ACTION_array *__fastcall BattleLogicFunction_FuncSideEffectFunctionArgument__GetActArray(
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *this,
        bool isMainOnly,
        const MethodInfo *method)
{
  _QWORD *v3; // x19
  __int64 v4; // x8
  __int64 v5; // x0
  __int64 v6; // x0

  if ( (byte_4A5DD11 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_BuffList_ACTION___);
    byte_4A5DD11 = 1;
  }
  v3 = Method_System_Array_Empty_BuffList_ACTION___;
  v4 = *((_QWORD *)Method_System_Array_Empty_BuffList_ACTION___ + 7);
  if ( !v4 )
  {
    sub_1BDA4E8(Method_System_Array_Empty_BuffList_ACTION___);
    v4 = v3[7];
  }
  v5 = *(_QWORD *)(v4 + 16);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1BDA48C(v5);
  if ( !*(_DWORD *)(v5 + 224) )
    j_il2cpp_runtime_class_init_0(v5);
  v6 = *(_QWORD *)(v3[7] + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1BDA48C(v6);
  return **(BuffList_ACTION_array ***)(v6 + 184);
}


void __fastcall BattleLogicFunction_FuncSideEffectFunctionArgument__SetSideEffect(
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *this,
        BattleLogicFunction_o *logicFunc,
        BattleActionData_o *mainActionData,
        BattleServantData_o *actorSvtData,
        const MethodInfo *method)
{
  System_Int32_array *v9; // x0
  __int64 v10; // x1

  if ( (byte_4A5DD14 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_int___);
    byte_4A5DD14 = 1;
  }
  v9 = System_Linq_Enumerable__ToArray_int_(
         (System_Collections_Generic_IEnumerable_TSource__o *)this->fields.executedBuffFuncDic,
         (const MethodInfo_2EB854C *)Method_System_Linq_Enumerable_ToArray_int___);
  if ( !logicFunc )
    sub_1B8880C(v9, v10);
  BattleLogicFunction__SetFuncSideEffect(logicFunc, this, mainActionData, actorSvtData, v9, 0LL);
}


void __fastcall BattleLogicFunction_FunctionArgument___ctor(
        BattleLogicFunction_FunctionArgument_o *this,
        const MethodInfo *method)
{
  Il2CppObject *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5DD0C & 1) == 0 )
  {
    sub_1B885B0(&BattleLogicFunction_CheckDuplicateFunction_TypeInfo);
    byte_4A5DD0C = 1;
  }
  v3 = (Il2CppObject *)sub_1B887FC(BattleLogicFunction_CheckDuplicateFunction_TypeInfo);
  System_Object___ctor(v3, 0LL);
  this->fields.checkDuplicate = (struct BattleLogicFunction_CheckDuplicateFunction_o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.checkDuplicate, (int32_t)v3, v4, v5);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


System_Int32_array *__fastcall BattleLogicFunction_FunctionArgument__GetFixTargetIds(
        BattleLogicFunction_FunctionArgument_o *this,
        int32_t targetType,
        System_Int32_array *beforeTargetIds,
        const MethodInfo *method)
{
  return beforeTargetIds;
}


void __fastcall BattleLogicFunction_FunctionArgument__Init(
        BattleLogicFunction_FunctionArgument_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_CheckDuplicateFunction_o *checkDuplicate; // x0

  checkDuplicate = this->fields.checkDuplicate;
  if ( !checkDuplicate )
    sub_1B8880C(0LL, method);
  ((void (__fastcall *)(struct BattleLogicFunction_CheckDuplicateFunction_o *, Il2CppMethodPointer))checkDuplicate->klass->vtable._4_Init.method)(
    checkDuplicate,
    checkDuplicate->klass->vtable._5_enableExecutedFunctions.methodPtr);
}


void __fastcall BattleLogicFunction_FunctionArgument__SetAfterFuncSideEffectArgument(
        BattleLogicFunction_FunctionArgument_o *this,
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *arg,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._FuncSideEffectArg_k__BackingField = arg;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._FuncSideEffectArg_k__BackingField,
    (int32_t)arg,
    (int32_t)method,
    v3);
}


BattleLogicFunction_FuncSideEffectFunctionArgument_o *__fastcall BattleLogicFunction_FunctionArgument__get_FuncSideEffectArg(
        BattleLogicFunction_FunctionArgument_o *this,
        const MethodInfo *method)
{
  return this->fields._FuncSideEffectArg_k__BackingField;
}


bool __fastcall BattleLogicFunction_FunctionArgument__get_IsTimingPassiveOnTransform(
        BattleLogicFunction_FunctionArgument_o *this,
        const MethodInfo *method)
{
  return this->fields._SkillTiming_k__BackingField == 1;
}


int32_t __fastcall BattleLogicFunction_FunctionArgument__get_SkillTiming(
        BattleLogicFunction_FunctionArgument_o *this,
        const MethodInfo *method)
{
  return this->fields._SkillTiming_k__BackingField;
}


void __fastcall BattleLogicFunction_FunctionArgument__set_FuncSideEffectArg(
        BattleLogicFunction_FunctionArgument_o *this,
        BattleLogicFunction_FuncSideEffectFunctionArgument_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._FuncSideEffectArg_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._FuncSideEffectArg_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleLogicFunction_FunctionArgument__set_SkillTiming(
        BattleLogicFunction_FunctionArgument_o *this,
        int32_t value,
        const MethodInfo *method)
{
  this->fields._SkillTiming_k__BackingField = value;
}


void __fastcall BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument__SetSideEffect(
        BattleLogicFunction_OnlyCheckFuncSideEffectFunctionArgument_o *this,
        BattleLogicFunction_o *logicFunc,
        BattleActionData_o *mainActionData,
        BattleServantData_o *actorSvtData,
        const MethodInfo *method)
{
  ;
}


BattleLogicFunction_SideEffectMakeArgument_o *__fastcall BattleLogicFunction_PreAttackSideEffectMakeArgument__MakeOnlyMainArgument(
        BattleLogicFunction_PreAttackSideEffectMakeArgument_o *this,
        const MethodInfo *method)
{
  BattleLogicFunction_SideEffectMakeArgument_o *v2; // x19
  const MethodInfo *v3; // x1

  if ( (byte_4A5DD29 & 1) == 0 )
  {
    sub_1B885B0(&BattleLogicFunction_PreMainAttackSideEffectMakeArgument_TypeInfo);
    byte_4A5DD29 = 1;
  }
  v2 = (BattleLogicFunction_SideEffectMakeArgument_o *)sub_1B887FC(BattleLogicFunction_PreMainAttackSideEffectMakeArgument_TypeInfo);
  BattleLogicFunction_SideEffectMakeArgument___ctor(v2, v3);
  return v2;
}


int32_t __fastcall BattleLogicFunction_PreAttackSideEffectMakeArgument__get_BuffAct(
        BattleLogicFunction_PreAttackSideEffectMakeArgument_o *this,
        const MethodInfo *method)
{
  return 98;
}


int32_t __fastcall BattleLogicFunction_PreAttackSideEffectMakeArgument__get_SideEffectType(
        BattleLogicFunction_PreAttackSideEffectMakeArgument_o *this,
        const MethodInfo *method)
{
  return 3;
}


int32_t __fastcall BattleLogicFunction_PreMainAttackSideEffectMakeArgument__get_BuffAct(
        BattleLogicFunction_PreMainAttackSideEffectMakeArgument_o *this,
        const MethodInfo *method)
{
  return 120;
}


void __fastcall BattleLogicFunction_ProcListInArgs___ctor(
        BattleLogicFunction_ProcListInArgs_o *this,
        BattleLogicFunction_FunctionArgument_o *argument,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x1
  struct BattleLogicFunction_FunctionArgument_o **p_externalArg; // x19
  __int64 v12; // x1

  if ( (byte_4A5DD1E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TypeInfo);
    sub_1B885B0(&BattleLogicFunction_FunctionArgument_TypeInfo);
    byte_4A5DD1E = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *)sub_1B887FC(System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TypeInfo);
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool____ctor(
    v5,
    (const MethodInfo_3127D44 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___ctor__);
  this->fields.funcResults = v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v5, v6, v7);
  this->fields.tdCommandTypeChange = -1;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( !argument )
  {
    argument = (BattleLogicFunction_FunctionArgument_o *)sub_1B887FC(BattleLogicFunction_FunctionArgument_TypeInfo);
    BattleLogicFunction_FunctionArgument___ctor(argument, v10);
  }
  this->fields.externalArg = argument;
  p_externalArg = &this->fields.externalArg;
  sub_1B88554((ServantStatusBattleListViewItem_o *)p_externalArg, (int32_t)argument, v8, v9);
  if ( !*p_externalArg )
    sub_1B8880C(0LL, v12);
  ((void (__fastcall *)(struct BattleLogicFunction_FunctionArgument_o *, Il2CppMethodPointer))(*p_externalArg)->klass->vtable._4_Init.method)(
    *p_externalArg,
    (*p_externalArg)->klass->vtable._5_GetFixTargetIds.methodPtr);
}


bool __fastcall BattleLogicFunction_ProcListInArgs__DidTriggeredFuncHaveSpecifyResults(
        BattleLogicFunction_ProcListInArgs_o *this,
        int32_t targetId,
        DataVals_o *baseVals,
        BattleData_o *data,
        const MethodInfo *method)
{
  __int64 v9; // x21
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *TriggeredFuncIndex; // x0
  __int64 v11; // x1
  int v12; // w23
  int v13; // w8
  char v14; // w21
  _BOOL4 v15; // w24
  struct System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *funcResults; // x20
  System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *v17; // x0
  System_Func_TSource__bool__o *v18; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x20
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  __int64 v21; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x19
  System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *v25; // x20
  __int64 v26; // x1
  __int64 v27; // x20
  __int64 v28; // x8
  __int64 v29; // x9
  int *v30; // x10
  __int64 v31; // x0
  char v32; // w22
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  __int64 v37; // x0
  __int64 v38; // x1
  char v39; // w23
  BattleServantData_o *ServantData; // x0
  __int64 v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  bool value; // [xsp+Ch] [xbp-54h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o key; // [xsp+10h] [xbp-50h] BYREF
  bool isAllCond; // [xsp+18h] [xbp-48h] BYREF
  bool isSameTargetOnly; // [xsp+1Ch] [xbp-44h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o p_key; // 0:x0.8
  System_Collections_Generic_KeyValuePair_int__int__o v51; // 0:x1.8

  if ( (byte_4A5DD20 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TryGetValue__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Any_KeyValuePair_KeyValuePair_int__int___bool____);
    sub_1B885B0(&Method_System_Linq_Enumerable_Count_KeyValuePair_KeyValuePair_int__int___bool____);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____);
    sub_1B885B0(&System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Value__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Value__);
    sub_1B885B0(&System_Math_TypeInfo);
    sub_1B885B0(&Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass37_0__DidTriggeredFuncHaveSpecifyResults_b__0__);
    sub_1B885B0(&Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass37_0__DidTriggeredFuncHaveSpecifyResults_b__1__);
    sub_1B885B0(&Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass37_0__DidTriggeredFuncHaveSpecifyResults_b__2__);
    sub_1B885B0(&BattleLogicFunction_ProcListInArgs___c__DisplayClass37_0_TypeInfo);
    byte_4A5DD20 = 1;
  }
  isSameTargetOnly = 0;
  isAllCond = 0;
  key = 0LL;
  value = 0;
  v9 = sub_1B887FC(BattleLogicFunction_ProcListInArgs___c__DisplayClass37_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0LL);
  if ( !baseVals )
    goto LABEL_53;
  TriggeredFuncIndex = (System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *)DataVals__GetTriggeredFuncIndex(
                                                                                                  baseVals,
                                                                                                  &isSameTargetOnly,
                                                                                                  &isAllCond,
                                                                                                  0LL);
  if ( !v9 )
    goto LABEL_53;
  v12 = (int)TriggeredFuncIndex;
  *(_DWORD *)(v9 + 16) = (_DWORD)TriggeredFuncIndex;
  if ( !(_DWORD)TriggeredFuncIndex )
  {
    v14 = 1;
    return v14 & 1;
  }
  *(_BYTE *)(v9 + 20) = (int)TriggeredFuncIndex > 0;
  if ( !System_Math_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
  if ( v12 >= 0 )
    v13 = v12;
  else
    v13 = -v12;
  *(_DWORD *)(v9 + 16) = v13 - 1;
  if ( isSameTargetOnly )
  {
    p_key = (System_Collections_Generic_KeyValuePair_int__int__o)&key;
    System_Collections_Generic_KeyValuePair_int__int____ctor(
      p_key,
      v13 - 1,
      targetId,
      (const MethodInfo_34336EC *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
    TriggeredFuncIndex = this->fields.funcResults;
    if ( TriggeredFuncIndex )
    {
      v51 = key;
      if ( System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___TryGetValue(
             TriggeredFuncIndex,
             v51,
             &value,
             (const MethodInfo_3129EA0 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__TryGetValue__) )
      {
        v14 = value == *(_BYTE *)(v9 + 20);
        return v14 & 1;
      }
LABEL_24:
      v14 = 0;
      return v14 & 1;
    }
    goto LABEL_53;
  }
  v15 = isAllCond;
  funcResults = this->fields.funcResults;
  v17 = (System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *)sub_1B887FC(System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo);
  v18 = (System_Func_TSource__bool__o *)v17;
  if ( !v15 )
  {
    System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
      v17,
      (Il2CppObject *)v9,
      Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass37_0__DidTriggeredFuncHaveSpecifyResults_b__0__,
      0LL);
    v24 = System_Linq_Enumerable__Where_KeyValuePair_KeyValuePair_int__int___bool__(
            (System_Collections_Generic_IEnumerable_TSource__o *)funcResults,
            v18,
            (const MethodInfo_2EBC708 *)Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____);
    v25 = (System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__o *)sub_1B887FC(System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool__TypeInfo);
    System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
      v25,
      (Il2CppObject *)v9,
      Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass37_0__DidTriggeredFuncHaveSpecifyResults_b__1__,
      0LL);
    v14 = System_Linq_Enumerable__Any_KeyValuePair_KeyValuePair_int__int___bool__(
            v24,
            (System_Func_TSource__bool__o *)v25,
            (const MethodInfo_2E8D80C *)Method_System_Linq_Enumerable_Any_KeyValuePair_KeyValuePair_int__int___bool____);
    return v14 & 1;
  }
  System_Func_KeyValuePair_KeyValuePair_int__int___bool___bool____ctor(
    v17,
    (Il2CppObject *)v9,
    Method_BattleLogicFunction_ProcListInArgs___c__DisplayClass37_0__DidTriggeredFuncHaveSpecifyResults_b__2__,
    0LL);
  v19 = System_Linq_Enumerable__Where_KeyValuePair_KeyValuePair_int__int___bool__(
          (System_Collections_Generic_IEnumerable_TSource__o *)funcResults,
          v18,
          (const MethodInfo_2EBC708 *)Method_System_Linq_Enumerable_Where_KeyValuePair_KeyValuePair_int__int___bool____);
  TriggeredFuncIndex = (System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *)System_Linq_Enumerable__Count_KeyValuePair_KeyValuePair_int__int___bool__(
                                                                                                  v19,
                                                                                                  (const MethodInfo_2E9BAF0 *)Method_System_Linq_Enumerable_Count_KeyValuePair_KeyValuePair_int__int___bool____);
  if ( !(_DWORD)TriggeredFuncIndex )
    goto LABEL_24;
  if ( !v19 )
LABEL_53:
    sub_1B8880C(TriggeredFuncIndex, v11);
  klass = v19->klass;
  v21 = *(unsigned __int16 *)(&v19->klass->_2.bitflags2 + 3);
  if ( *(_WORD *)(&v19->klass->_2.bitflags2 + 3) )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___c **)p_offset - 1) != System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo )
    {
      --v21;
      p_offset += 4;
      if ( !v21 )
        goto LABEL_23;
    }
    p_method = (__int64)&klass->vtable[*p_offset].method;
  }
  else
  {
LABEL_23:
    p_method = sub_1BDA590(
                 v19,
                 System_Collections_Generic_IEnumerable_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo,
                 0LL);
  }
  v27 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
          v19,
          *(_QWORD *)(p_method + 8));
  if ( !v27 )
    sub_1B8880C(0LL, v26);
  while ( 1 )
  {
    v28 = *(_QWORD *)v27;
    v29 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
    {
      v30 = (int *)(*(_QWORD *)(v28 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v30 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v29;
        v30 += 4;
        if ( !v29 )
          goto LABEL_32;
      }
      v31 = v28 + 16LL * *v30 + 312;
    }
    else
    {
LABEL_32:
      v31 = sub_1BDA590(v27, System_Collections_IEnumerator_TypeInfo, 0LL);
    }
    v32 = (*(__int64 (__fastcall **)(__int64, _QWORD))v31)(v27, *(_QWORD *)(v31 + 8));
    if ( (v32 & 1) == 0 )
      break;
    v33 = *(_QWORD *)v27;
    v34 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
    {
      v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___c **)v35 - 1) != System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_39;
      }
      v36 = v33 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_39:
      v36 = sub_1BDA590(
              v27,
              System_Collections_Generic_IEnumerator_KeyValuePair_KeyValuePair_int__int___bool___TypeInfo,
              0LL);
    }
    v37 = (*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v27, *(_QWORD *)(v36 + 8));
    if ( !data )
      sub_1B8880C(v37, v38);
    v39 = v38;
    ServantData = BattleData__getServantData(data, SHIDWORD(v37), 0LL);
    if ( ServantData )
    {
      if ( !ServantData->fields.isDeadAnime && *(_BYTE *)(v9 + 20) != (v39 != 0) )
        break;
    }
  }
  v14 = v32 ^ 1;
  v41 = *(_QWORD *)v27;
  v42 = *(unsigned __int16 *)(*(_QWORD *)v27 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v27 + 302LL) )
  {
    v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v43 - 1) != System_IDisposable_TypeInfo )
    {
      --v42;
      v43 += 4;
      if ( !v42 )
        goto LABEL_49;
    }
    v44 = v41 + 16LL * *v43 + 312;
  }
  else
  {
LABEL_49:
    v44 = sub_1BDA590(v27, System_IDisposable_TypeInfo, 0LL);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v44)(v27, *(_QWORD *)(v44 + 8));
  return v14 & 1;
}


// local variable allocation has failed, the output may be wrong!
int32_t __fastcall BattleLogicFunction_ProcListInArgs__GetFamilyBuffLinkageId(
        BattleLogicFunction_ProcListInArgs_o *this,
        int32_t linkageIndividuality,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  GeneratedFamilyLinkageIdCacher_o *familyLinkageIdCacher; // x0
  __int64 v7; // x1

  familyLinkageIdCacher = BattleLogicFunction_ProcListInArgs__get_familyLinkageIdCacher(
                            this,
                            *(const MethodInfo **)&linkageIndividuality);
  if ( !familyLinkageIdCacher )
    sub_1B8880C(0LL, v7);
  return GeneratedFamilyLinkageIdCacher__GetOrGenerateFamilyLinkageId(
           familyLinkageIdCacher,
           linkageIndividuality,
           targetSvtData,
           0LL);
}


FamilyBuffLinkageIdGenerator_o *__fastcall BattleLogicFunction_ProcListInArgs__GetFamilyBuffLinkageIdGenerator(
        BattleLogicFunction_ProcListInArgs_o *this,
        BattleServantData_o *targetSvtData,
        const MethodInfo *method)
{
  GeneratedFamilyLinkageIdCacher_o *familyLinkageIdCacher; // x0
  __int64 v5; // x1

  familyLinkageIdCacher = BattleLogicFunction_ProcListInArgs__get_familyLinkageIdCacher(
                            this,
                            (const MethodInfo *)targetSvtData);
  if ( !familyLinkageIdCacher )
    sub_1B8880C(0LL, v5);
  return GeneratedFamilyLinkageIdCacher__GetOrCreateFamilyBuffLinkageIdGenerator(
           familyLinkageIdCacher,
           targetSvtData,
           0LL);
}


bool __fastcall BattleLogicFunction_ProcListInArgs__MatchSkillType(
        BattleLogicFunction_ProcListInArgs_o *this,
        int32_t type,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1B8880C(this, type);
  return externalArg->fields.grantSkillType == type;
}


BattleLogicFunction_CheckDuplicateFunction_o *__fastcall BattleLogicFunction_ProcListInArgs__get_CheckDuplicateFunc(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1B8880C(this, method);
  return externalArg->fields.checkDuplicate;
}


BattleLogicFunction_FunctionArgument_o *__fastcall BattleLogicFunction_ProcListInArgs__get_ExternalArg(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  return this->fields.externalArg;
}


BattleLogicFunction_FuncSideEffectFunctionArgument_o *__fastcall BattleLogicFunction_ProcListInArgs__get_FuncSideEffectArg(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1B8880C(this, method);
  return externalArg->fields._FuncSideEffectArg_k__BackingField;
}


int32_t __fastcall BattleLogicFunction_ProcListInArgs__get_GrantSkillType(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1B8880C(this, method);
  return externalArg->fields.grantSkillType;
}


bool __fastcall BattleLogicFunction_ProcListInArgs__get_IsCommandSideEffect(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1B8880C(this, method);
  return externalArg->fields.isCommandSideEffect;
}


bool __fastcall BattleLogicFunction_ProcListInArgs__get_IsPassive(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1B8880C(this, method);
  return externalArg->fields.isPassive;
}


bool __fastcall BattleLogicFunction_ProcListInArgs__get_IsShift(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1B8880C(this, method);
  return externalArg->fields.isShift;
}


bool __fastcall BattleLogicFunction_ProcListInArgs__get_IsShowBattlePointEffect(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1B8880C(this, method);
  return externalArg->fields.isShowBattlePointEffect;
}


bool __fastcall BattleLogicFunction_ProcListInArgs__get_IsTreasureDvc(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._IsTreasureDvc_k__BackingField;
}


int32_t __fastcall BattleLogicFunction_ProcListInArgs__get_SkillId(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1B8880C(this, method);
  return externalArg->fields.skillId;
}


GeneratedFamilyLinkageIdCacher_o *__fastcall BattleLogicFunction_ProcListInArgs__get_familyLinkageIdCacher(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  GeneratedFamilyLinkageIdCacher_o *result; // x0
  ServantStatusBattleListViewItem_o *p_familyLinkageIdCacher; // x19
  GeneratedFamilyLinkageIdCacher_o *familyLinkageIdCacher; // t1
  GeneratedFamilyLinkageIdCacher_o *v6; // x20
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5DD1D & 1) == 0 )
  {
    sub_1B885B0(&GeneratedFamilyLinkageIdCacher_TypeInfo);
    byte_4A5DD1D = 1;
  }
  familyLinkageIdCacher = this->fields._familyLinkageIdCacher;
  p_familyLinkageIdCacher = (ServantStatusBattleListViewItem_o *)&this->fields._familyLinkageIdCacher;
  result = familyLinkageIdCacher;
  if ( !familyLinkageIdCacher )
  {
    v6 = (GeneratedFamilyLinkageIdCacher_o *)sub_1B887FC(GeneratedFamilyLinkageIdCacher_TypeInfo);
    GeneratedFamilyLinkageIdCacher___ctor(v6, 0LL);
    p_familyLinkageIdCacher->klass = (ServantStatusBattleListViewItem_c *)v6;
    sub_1B88554(p_familyLinkageIdCacher, (int32_t)v6, v7, v8);
    return (GeneratedFamilyLinkageIdCacher_o *)p_familyLinkageIdCacher->klass;
  }
  return result;
}


BattleLogicFunctionProcess_FunctionUnitCheck_array *__fastcall BattleLogicFunction_ProcListInArgs__get_funcUnitArray(
        BattleLogicFunction_ProcListInArgs_o *this,
        const MethodInfo *method)
{
  return this->fields._funcUnitArray_k__BackingField;
}


void __fastcall BattleLogicFunction_ProcListInArgs__initFunctionUnitCheck(
        BattleLogicFunction_ProcListInArgs_o *this,
        BattleLogicFunction_o *logic,
        System_Int32_array *functionIds,
        DataVals_array *dataValsList,
        int32_t *funcIndex,
        const MethodInfo *method)
{
  BattleLogicFunction_ProcListInArgs_o *v10; // x24
  signed int max_length; // w25
  __int64 v12; // x0
  BattleLogicFunctionProcess_FunctionUnitCheck_array **p_funcUnitArray_k__BackingField; // x19
  int32_t v14; // w2
  int32_t v15; // w3
  struct BattleLogicFunctionProcess_FunctionUnitCheck_array *funcUnitArray_k__BackingField; // x27
  il2cpp_array_size_t v17; // w28
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v18; // x26
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  int32_t v21; // w3
  Il2CppClass **v22; // x0
  const MethodInfo *v23; // x4
  BattleLogicFunctionProcess_FunctionUnitCheck_array *v24; // x8
  int v25; // w8
  int v26; // w22
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v27; // x21
  int v28; // w23
  BattleLogicFunctionProcess_FunctionUnitCheck_o *v29; // x20
  const MethodInfo *v30; // x2
  _BOOL4 v31; // w8
  __int64 v32; // x0

  v10 = this;
  if ( (byte_4A5DD22 & 1) == 0 )
  {
    sub_1B885B0(&BattleLogicFunctionProcess_FunctionUnitCheck___TypeInfo);
    this = (BattleLogicFunction_ProcListInArgs_o *)sub_1B885B0(&BattleLogicFunctionProcess_FunctionUnitCheck_TypeInfo);
    byte_4A5DD22 = 1;
  }
  if ( !dataValsList )
    goto LABEL_38;
  max_length = dataValsList->max_length;
  v12 = sub_1B88658(BattleLogicFunctionProcess_FunctionUnitCheck___TypeInfo, (unsigned int)max_length);
  v10->fields._funcUnitArray_k__BackingField = (struct BattleLogicFunctionProcess_FunctionUnitCheck_array *)v12;
  p_funcUnitArray_k__BackingField = &v10->fields._funcUnitArray_k__BackingField;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->fields._funcUnitArray_k__BackingField, v12, v14, v15);
  funcUnitArray_k__BackingField = v10->fields._funcUnitArray_k__BackingField;
  if ( max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      v18 = (BattleLogicFunctionProcess_FunctionUnitCheck_o *)sub_1B887FC(BattleLogicFunctionProcess_FunctionUnitCheck_TypeInfo);
      BattleLogicFunctionProcess_FunctionUnitCheck___ctor(v18, logic, v10, v19);
      if ( !funcUnitArray_k__BackingField )
        break;
      if ( v18 )
      {
        this = (BattleLogicFunction_ProcListInArgs_o *)sub_1B886EC(
                                                         v18,
                                                         funcUnitArray_k__BackingField->obj.klass->_1.element_class);
        if ( !this )
        {
          v32 = sub_1B88830(0LL);
          sub_1B886D8(v32, 0LL);
        }
      }
      if ( v17 >= funcUnitArray_k__BackingField->max_length )
        goto LABEL_39;
      v22 = &funcUnitArray_k__BackingField->obj.klass + (int)v17;
      v22[4] = (Il2CppClass *)v18;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v18, v20, v21);
      v24 = *p_funcUnitArray_k__BackingField;
      if ( !*p_funcUnitArray_k__BackingField )
        break;
      if ( v17 >= v24->max_length )
        goto LABEL_39;
      if ( !functionIds )
        break;
      if ( v17 >= functionIds->max_length || v17 >= dataValsList->max_length )
LABEL_39:
        sub_1B88814(this, logic);
      this = (BattleLogicFunction_ProcListInArgs_o *)v24->m_Items[v17];
      if ( !this )
        break;
      BattleLogicFunctionProcess_FunctionUnitCheck__setDataVals(
        (BattleLogicFunctionProcess_FunctionUnitCheck_o *)this,
        funcIndex,
        functionIds->m_Items[v17 + 1],
        dataValsList->m_Items[v17],
        v23);
      ++v17;
      ++*funcIndex;
      funcUnitArray_k__BackingField = *p_funcUnitArray_k__BackingField;
      if ( max_length == v17 )
        goto LABEL_17;
    }
LABEL_38:
    sub_1B8880C(this, logic);
  }
LABEL_17:
  if ( !funcUnitArray_k__BackingField )
    goto LABEL_38;
  v25 = funcUnitArray_k__BackingField->max_length;
  if ( v25 >= 1 )
  {
    v26 = 0;
    v27 = 0LL;
    v28 = -1;
    do
    {
      if ( v26 >= (unsigned int)v25 )
        goto LABEL_39;
      v29 = funcUnitArray_k__BackingField->m_Items[v26];
      if ( !v29 )
        goto LABEL_38;
      this = (BattleLogicFunction_ProcListInArgs_o *)v29->fields._dataVals_k__BackingField;
      if ( !this )
        goto LABEL_38;
      if ( DataVals__IsAddIndividualty((DataVals_o *)this, 0LL) )
        goto LABEL_26;
      this = (BattleLogicFunction_ProcListInArgs_o *)v29->fields._dataVals_k__BackingField;
      if ( !this )
        goto LABEL_38;
      if ( DataVals__IsAddLinkageTargetIndividualty((DataVals_o *)this, 0LL) )
LABEL_26:
        BattleLogicFunctionProcess_FunctionUnitCheck__setLinkFunction(v29, *p_funcUnitArray_k__BackingField, v30);
      this = (BattleLogicFunction_ProcListInArgs_o *)v29->fields._dataVals_k__BackingField;
      if ( !this )
        goto LABEL_38;
      this = (BattleLogicFunction_ProcListInArgs_o *)DataVals__GetFunctionTriggerStarNum((DataVals_o *)this, 0LL);
      if ( ((unsigned int)this & 0x80000000) == 0 )
      {
        v31 = v27 == 0LL || (int)this < v28;
        if ( v31 )
          v28 = (int)this;
        if ( v31 )
          v27 = v29;
      }
      v25 = funcUnitArray_k__BackingField->max_length;
      ++v26;
    }
    while ( v26 < v25 );
    if ( v27 )
      v27->fields.isLowestStarFunction = 1;
  }
}


bool __fastcall BattleLogicFunction_ProcListInArgs__isPrevFuncSuccess(
        BattleLogicFunction_ProcListInArgs_o *this,
        int32_t targetId,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *funcResults; // x0
  System_Collections_Generic_KeyValuePair_int__int__o key; // [xsp+8h] [xbp-38h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o p_key; // 0:x0.8
  System_Collections_Generic_KeyValuePair_int__int__o v13; // 0:x1.8
  System_Collections_Generic_KeyValuePair_int__int__o v14; // 0:x1.8

  if ( (byte_4A5DD1F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
    byte_4A5DD1F = 1;
  }
  p_key = (System_Collections_Generic_KeyValuePair_int__int__o)&key;
  key = 0LL;
  System_Collections_Generic_KeyValuePair_int__int____ctor(
    p_key,
    index - 1,
    targetId,
    (const MethodInfo_34336EC *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
  funcResults = this->fields.funcResults;
  if ( !funcResults )
    goto LABEL_9;
  v13 = key;
  if ( !System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___ContainsKey(
          funcResults,
          v13,
          (const MethodInfo_312892C *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__ContainsKey__) )
    return 0;
  funcResults = this->fields.funcResults;
  if ( !funcResults )
LABEL_9:
    sub_1B8880C(funcResults, v7);
  v14 = key;
  return System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___get_Item(
           funcResults,
           v14,
           (const MethodInfo_3128678 *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__get_Item__);
}


void __fastcall BattleLogicFunction_ProcListInArgs__setFuncResult(
        BattleLogicFunction_ProcListInArgs_o *this,
        int32_t targetId,
        bool result,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__o *funcResults; // x0
  System_Collections_Generic_KeyValuePair_int__int__o key; // [xsp+8h] [xbp-38h] BYREF
  System_Collections_Generic_KeyValuePair_int__int__o p_key; // 0:x0.8
  System_Collections_Generic_KeyValuePair_int__int__o v13; // 0:x1.8

  if ( (byte_4A5DD21 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__set_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
    byte_4A5DD21 = 1;
  }
  p_key = (System_Collections_Generic_KeyValuePair_int__int__o)&key;
  key = 0LL;
  System_Collections_Generic_KeyValuePair_int__int____ctor(
    p_key,
    index,
    targetId,
    (const MethodInfo_34336EC *)Method_System_Collections_Generic_KeyValuePair_int__int___ctor__);
  funcResults = this->fields.funcResults;
  if ( !funcResults )
    sub_1B8880C(0LL, v9);
  v13 = key;
  System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool___set_Item(
    funcResults,
    v13,
    result,
    (const MethodInfo_312870C *)Method_System_Collections_Generic_Dictionary_KeyValuePair_int__int___bool__set_Item__);
}


void __fastcall BattleLogicFunction_ProcListInArgs__set_IsCommandSideEffect(
        BattleLogicFunction_ProcListInArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1B8880C(this, value);
  externalArg->fields.isCommandSideEffect = value;
}


void __fastcall BattleLogicFunction_ProcListInArgs__set_IsPassive(
        BattleLogicFunction_ProcListInArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1B8880C(this, value);
  externalArg->fields.isPassive = value;
}


void __fastcall BattleLogicFunction_ProcListInArgs__set_IsShift(
        BattleLogicFunction_ProcListInArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1B8880C(this, value);
  externalArg->fields.isShift = value;
}


void __fastcall BattleLogicFunction_ProcListInArgs__set_IsTreasureDvc(
        BattleLogicFunction_ProcListInArgs_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._IsTreasureDvc_k__BackingField = value;
}


void __fastcall BattleLogicFunction_ProcListInArgs__set_SkillId(
        BattleLogicFunction_ProcListInArgs_o *this,
        int32_t value,
        const MethodInfo *method)
{
  struct BattleLogicFunction_FunctionArgument_o *externalArg; // x8

  externalArg = this->fields.externalArg;
  if ( !externalArg )
    sub_1B8880C(this, value);
  externalArg->fields.skillId = value;
}


void __fastcall BattleLogicFunction_ProcListInArgs__set_funcUnitArray(
        BattleLogicFunction_ProcListInArgs_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._funcUnitArray_k__BackingField = value;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)&this->fields._funcUnitArray_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall BattleLogicFunction_ProcListInArgs___c__DisplayClass37_0___ctor(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass37_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFunction_ProcListInArgs___c__DisplayClass37_0___DidTriggeredFuncHaveSpecifyResults_b__0(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass37_0_o *this,
        System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__o x,
        const MethodInfo *method)
{
  int32_t key; // w19

  key = x.fields.key.fields.key;
  if ( (byte_4A5DD24 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    byte_4A5DD24 = 1;
  }
  return this->fields.funcIndex == key;
}


bool __fastcall BattleLogicFunction_ProcListInArgs___c__DisplayClass37_0___DidTriggeredFuncHaveSpecifyResults_b__1(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass37_0_o *this,
        System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__o x,
        const MethodInfo *method)
{
  bool value; // w19

  value = x.fields.value;
  if ( (byte_4A5DD25 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Value__);
    byte_4A5DD25 = 1;
  }
  return this->fields.isTrue == value;
}


bool __fastcall BattleLogicFunction_ProcListInArgs___c__DisplayClass37_0___DidTriggeredFuncHaveSpecifyResults_b__2(
        BattleLogicFunction_ProcListInArgs___c__DisplayClass37_0_o *this,
        System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__o x,
        const MethodInfo *method)
{
  int32_t key; // w19

  key = x.fields.key.fields.key;
  if ( (byte_4A5DD23 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_KeyValuePair_int__int___bool__get_Key__);
    sub_1B885B0(&Method_System_Collections_Generic_KeyValuePair_int__int__get_Key__);
    byte_4A5DD23 = 1;
  }
  return this->fields.funcIndex == key;
}


void __fastcall BattleLogicFunction_SideEffectMakeArgument___ctor(
        BattleLogicFunction_SideEffectMakeArgument_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x0
  __int64 v8; // x0
  struct BattleActionData_SideEffectData_array **v9; // x8
  struct BattleActionData_SideEffectData_array *v10; // x1

  if ( (byte_4A5DD27 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Array_Empty_BattleActionData_SideEffectData___);
    byte_4A5DD27 = 1;
  }
  v5 = Method_System_Array_Empty_BattleActionData_SideEffectData___;
  v6 = *((_QWORD *)Method_System_Array_Empty_BattleActionData_SideEffectData___ + 7);
  if ( !v6 )
  {
    sub_1BDA4E8(Method_System_Array_Empty_BattleActionData_SideEffectData___);
    v6 = v5[7];
  }
  v7 = *(_QWORD *)(v6 + 16);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1BDA48C(v7);
  if ( !*(_DWORD *)(v7 + 224) )
    j_il2cpp_runtime_class_init_0(v7);
  v8 = *(_QWORD *)(v5[7] + 16LL);
  if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
    v8 = sub_1BDA48C(v8);
  v9 = *(struct BattleActionData_SideEffectData_array ***)(v8 + 184);
  v10 = *v9;
  this->fields._SideEffectList_k__BackingField = *v9;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v10, v2, v3);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleLogicFunction_SideEffectMakeArgument_o *__fastcall BattleLogicFunction_SideEffectMakeArgument__Init(
        BattleLogicFunction_SideEffectMakeArgument_o *this,
        System_Int32_array *targetIds,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x22
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_Func_T__TResult__o *v11; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  System_Object_array *v13; // x0
  int32_t v14; // w2
  int32_t v15; // w3

  if ( (byte_4A5DD26 & 1) == 0 )
  {
    sub_1B885B0(&BuffList_ACTION___TypeInfo);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_int__BattleActionData_SideEffectData___);
    sub_1B885B0(&Method_System_Linq_Enumerable_ToArray_BattleActionData_SideEffectData___);
    sub_1B885B0(&System_Func_int__BattleActionData_SideEffectData__TypeInfo);
    sub_1B885B0(&Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0__Init_b__0__);
    sub_1B885B0(&BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0_TypeInfo);
    byte_4A5DD26 = 1;
  }
  v5 = sub_1B887FC(BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  v6 = sub_1B88658(BuffList_ACTION___TypeInfo, 1LL);
  v7 = ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, Il2CppMethodPointer))this->klass->vtable._4_unknown.method)(
         this,
         this->klass->vtable._5_unknown.methodPtr);
  if ( !v6 )
    goto LABEL_7;
  if ( !*(_DWORD *)(v6 + 24) )
    sub_1B88814(v7, v8);
  *(_DWORD *)(v6 + 32) = v7;
  if ( !v5 )
LABEL_7:
    sub_1B8880C(v7, v8);
  *(_QWORD *)(v5 + 16) = v6;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 16), v6, v9, v10);
  v11 = (System_Func_T__TResult__o *)sub_1B887FC(System_Func_int__BattleActionData_SideEffectData__TypeInfo);
  System_Func_int__object____ctor(
    v11,
    (Il2CppObject *)v5,
    Method_BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0__Init_b__0__,
    0LL);
  v12 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_int__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)targetIds,
                                                               (System_Func_TSource__TResult__o *)v11,
                                                               (const MethodInfo_2EADD38 *)Method_System_Linq_Enumerable_Select_int__BattleActionData_SideEffectData___);
  v13 = System_Linq_Enumerable__ToArray_object_(
          v12,
          (const MethodInfo_2EB86E4 *)Method_System_Linq_Enumerable_ToArray_BattleActionData_SideEffectData___);
  this->fields._SideEffectList_k__BackingField = (struct BattleActionData_SideEffectData_array *)v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v13, v14, v15);
  return this;
}


int32_t __fastcall BattleLogicFunction_SideEffectMakeArgument__MakeCheckKey(
        BattleLogicFunction_SideEffectMakeArgument_o *this,
        int32_t actionUniqueID,
        const MethodInfo *method)
{
  return ((__int64 (__fastcall *)(BattleLogicFunction_SideEffectMakeArgument_o *, Il2CppMethodPointer, const MethodInfo *))this->klass->vtable._4_unknown.method)(
           this,
           this->klass->vtable._5_unknown.methodPtr,
           method)
       + 10000 * actionUniqueID;
}


BattleActionData_SideEffectData_array *__fastcall BattleLogicFunction_SideEffectMakeArgument__get_SideEffectList(
        BattleLogicFunction_SideEffectMakeArgument_o *this,
        const MethodInfo *method)
{
  return this->fields._SideEffectList_k__BackingField;
}


void __fastcall BattleLogicFunction_SideEffectMakeArgument__set_SideEffectList(
        BattleLogicFunction_SideEffectMakeArgument_o *this,
        BattleActionData_SideEffectData_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields._SideEffectList_k__BackingField = value;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)value, (int32_t)method, v3);
}


void __fastcall BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0___ctor(
        BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleActionData_SideEffectData_o *__fastcall BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0___Init_b__0(
        BattleLogicFunction_SideEffectMakeArgument___c__DisplayClass9_0_o *this,
        int32_t id,
        const MethodInfo *method)
{
  BuffList_ACTION_array *buffActs; // x20
  BattleActionData_SideEffectData_o *v6; // x21

  if ( (byte_4A5DD28 & 1) == 0 )
  {
    sub_1B885B0(&BattleActionData_SideEffectData_TypeInfo);
    byte_4A5DD28 = 1;
  }
  buffActs = this->fields.buffActs;
  v6 = (BattleActionData_SideEffectData_o *)sub_1B887FC(BattleActionData_SideEffectData_TypeInfo);
  BattleActionData_SideEffectData___ctor(v6, id, buffActs, 0LL);
  return v6;
}


BuffList_ACTION_array *__fastcall BattleLogicFunction_SkillSideEffectFunctionArgument__GetActArray(
        BattleLogicFunction_SkillSideEffectFunctionArgument_o *this,
        bool isMainOnly,
        const MethodInfo *method)
{
  BuffList_ACTION_array *result; // x0
  __int64 v5; // x1
  il2cpp_array_size_t max_length; // w8
  int32_t v7; // w8

  if ( (byte_4A5DD15 & 1) == 0 )
  {
    sub_1B885B0(&BuffList_ACTION___TypeInfo);
    byte_4A5DD15 = 1;
  }
  result = (BuffList_ACTION_array *)sub_1B88658(BuffList_ACTION___TypeInfo, 1LL);
  if ( !result )
    sub_1B8880C(0LL, v5);
  max_length = result->max_length;
  if ( !isMainOnly )
  {
    if ( max_length )
    {
      v7 = 122;
      goto LABEL_9;
    }
LABEL_11:
    sub_1B88814(result, v5);
  }
  if ( !max_length )
    goto LABEL_11;
  v7 = 123;
LABEL_9:
  result->m_Items[1] = v7;
  return result;
}


BuffList_ACTION_array *__fastcall BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument__GetActArray(
        BattleLogicFunction_TreasureDeviceSideEffectFunctionArgument_o *this,
        bool isMainOnly,
        const MethodInfo *method)
{
  BuffList_ACTION_array *result; // x0
  __int64 v5; // x1
  il2cpp_array_size_t max_length; // w8
  int32_t v7; // w8

  if ( (byte_4A5DD16 & 1) == 0 )
  {
    sub_1B885B0(&BuffList_ACTION___TypeInfo);
    byte_4A5DD16 = 1;
  }
  result = (BuffList_ACTION_array *)sub_1B88658(BuffList_ACTION___TypeInfo, 1LL);
  if ( !result )
    sub_1B8880C(0LL, v5);
  max_length = result->max_length;
  if ( !isMainOnly )
  {
    if ( max_length )
    {
      v7 = 124;
      goto LABEL_9;
    }
LABEL_11:
    sub_1B88814(result, v5);
  }
  if ( !max_length )
    goto LABEL_11;
  v7 = 125;
LABEL_9:
  result->m_Items[1] = v7;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall BattleLogicFunction_WarBoardFunctionArgument___ctor(
        BattleLogicFunction_WarBoardFunctionArgument_o *this,
        int32_t targetId,
        const MethodInfo *method)
{
  struct System_Int32_array *v5; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3

  if ( (byte_4A5DD17 & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    byte_4A5DD17 = 1;
  }
  BattleLogicFunction_FunctionArgument___ctor(
    (BattleLogicFunction_FunctionArgument_o *)this,
    *(const MethodInfo **)&targetId);
  v5 = (struct System_Int32_array *)sub_1B88658(int___TypeInfo, 1LL);
  if ( !v5 )
    sub_1B8880C(0LL, v6);
  if ( !v5->max_length )
    sub_1B88814(v5, v5);
  v5->m_Items[1] = targetId;
  this->fields.fixTargetIds = v5;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.fixTargetIds, (int32_t)v5, v7, v8);
}


System_Int32_array *__fastcall BattleLogicFunction_WarBoardFunctionArgument__GetFixTargetIds(
        BattleLogicFunction_WarBoardFunctionArgument_o *this,
        int32_t targetType,
        System_Int32_array *beforeTargetIds,
        const MethodInfo *method)
{
  if ( !Target__Check(0, targetType, 0LL) )
    return this->fields.fixTargetIds;
  return beforeTargetIds;
}


void __fastcall BattleLogicFunction___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5DD2B & 1) == 0 )
  {
    sub_1B885B0(&BattleLogicFunction___c_TypeInfo);
    byte_4A5DD2B = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(BattleLogicFunction___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  BattleLogicFunction___c_TypeInfo->static_fields->__9 = (struct BattleLogicFunction___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)BattleLogicFunction___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void __fastcall BattleLogicFunction___c___ctor(BattleLogicFunction___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFunction___c___ApplySubBuffChanges_b__70_1(
        BattleLogicFunction___c_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  if ( !buff )
    sub_1B8880C(this, 0LL);
  return BattleBuffData_BuffData__get_ExistChangeBgm(buff, 0LL);
}


bool __fastcall BattleLogicFunction___c___FunctionSubFieldBuff_b__121_1(
        BattleLogicFunction___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.fieldChangeData != 0LL;
}


void __fastcall BattleLogicFunction___c___SetFuncSideEffect_b__49_0(
        BattleLogicFunction___c_o *this,
        BattleActionData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  BattleActionData__SetPopupOnce(x, 0LL);
}


bool __fastcall BattleLogicFunction___c___functionMoveState_b__108_2(
        BattleLogicFunction___c_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return BattleBuffData_BuffData__get_ExistChangeBgm(x, 0LL);
}


void __fastcall BattleLogicFunction___c___functionPtShuffle_b__89_0(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *s,
        const MethodInfo *method)
{
  __int64 Next; // x0
  __int64 v5; // x1

  Next = BattleRandom__getNext(1000, 0LL);
  if ( !s )
    sub_1B8880C(Next, v5);
  s->fields._shuffuleSeed = Next;
}


int32_t __fastcall BattleLogicFunction___c___functionPtShuffle_b__89_1(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *a,
        BattleServantData_o *b,
        const MethodInfo *method)
{
  if ( !a || (this = (BattleLogicFunction___c_o *)BattleServantData__get_ShuffleSeed(a, 0LL), !b) )
    sub_1B8880C(this, a);
  return (_DWORD)this - BattleServantData__get_ShuffleSeed(b, 0LL);
}


bool __fastcall BattleLogicFunction___c___functionReplaceEnemyMember_b__83_0(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return BattleServantData__isAlive(x, 0, 0LL);
}


BattleServantSnapShot_o *__fastcall BattleLogicFunction___c___functionTransformServant_b__85_0(
        BattleLogicFunction___c_o *this,
        BattleServantData_o *x,
        const MethodInfo *method)
{
  BattleServantSnapShotShiftServant_o *v4; // x20

  if ( (byte_4A5DD2C & 1) == 0 )
  {
    sub_1B885B0(&BattleServantSnapShotShiftServant_TypeInfo);
    byte_4A5DD2C = 1;
  }
  v4 = (BattleServantSnapShotShiftServant_o *)sub_1B887FC(BattleServantSnapShotShiftServant_TypeInfo);
  BattleServantSnapShotShiftServant___ctor(v4, x, 0LL);
  return (BattleServantSnapShot_o *)v4;
}


bool __fastcall BattleLogicFunction___c___procList_b__41_0(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *x,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals_k__BackingField; // x8

  if ( !x || (dataVals_k__BackingField = x->fields._dataVals_k__BackingField) == 0LL )
    sub_1B8880C(this, x);
  return dataVals_k__BackingField->fields.funcType != 0;
}


bool __fastcall BattleLogicFunction___c___procList_b__41_1(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionUnitCheck_o *x,
        const MethodInfo *method)
{
  struct DataVals_o *dataVals_k__BackingField; // x8

  if ( !x || (dataVals_k__BackingField = x->fields._dataVals_k__BackingField) == 0LL )
    sub_1B8880C(this, x);
  return dataVals_k__BackingField->fields.funcType == 135;
}


bool __fastcall BattleLogicFunction___c___procList_b__41_2(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_1B8880C(this, 0LL);
  return target->fields._result_k__BackingField;
}


int32_t __fastcall BattleLogicFunction___c___procList_b__41_3(
        BattleLogicFunction___c_o *this,
        BattleLogicFunctionProcess_FunctionTargetCheck_o *target,
        const MethodInfo *method)
{
  if ( !target )
    sub_1B8880C(this, 0LL);
  return target->fields._targetId_k__BackingField;
}


int32_t __fastcall BattleLogicFunction___c___setAttackSideEffect_b__52_0(
        BattleLogicFunction___c_o *this,
        BattleActionData_SideEffectData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.targetId;
}


void __fastcall BattleLogicFunction___c__DisplayClass101_0___ctor(
        BattleLogicFunction___c__DisplayClass101_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall BattleLogicFunction___c__DisplayClass101_0___UpdateUserEquipSkillChargeTurn_b__0(
        BattleLogicFunction___c__DisplayClass101_0_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  if ( BattleSkillInfoData__TurnProgress(
         x,
         this->fields.progressValue,
         0,
         this->fields.targetIndex,
         this->fields.targetIndividualityArray,
         0LL) )
  {
    this->fields.isEnable = 1;
  }
}


void __fastcall BattleLogicFunction___c__DisplayClass101_0___UpdateUserEquipSkillChargeTurn_b__1(
        BattleLogicFunction___c__DisplayClass101_0_o *this,
        BattleSkillInfoData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  if ( BattleSkillInfoData__TurnExtend(
         x,
         this->fields.progressValue,
         999,
         this->fields.targetIndex,
         this->fields.targetIndividualityArray,
         0LL) )
  {
    this->fields.isEnable = 1;
  }
}


void __fastcall BattleLogicFunction___c__DisplayClass108_0___ctor(
        BattleLogicFunction___c__DisplayClass108_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFunction___c__DisplayClass108_0___functionMoveState_b__0(
        BattleLogicFunction___c__DisplayClass108_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return BattleBuffData_BuffData__checkState(x, this->fields.stateUnstealable, 0LL);
}


bool __fastcall BattleLogicFunction___c__DisplayClass108_0___functionMoveState_b__1(
        BattleLogicFunction___c__DisplayClass108_0_o *this,
        BattleBuffData_BuffData_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *unstealableBuffs; // x0

  if ( (byte_4A5DD2D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
    byte_4A5DD2D = 1;
  }
  unstealableBuffs = (System_Collections_Generic_HashSet_T__o *)this->fields.unstealableBuffs;
  if ( !unstealableBuffs )
    sub_1B8880C(0LL, x);
  return !System_Collections_Generic_HashSet_object___Contains(
            unstealableBuffs,
            (Il2CppObject *)x,
            (const MethodInfo_33B9878 *)Method_System_Collections_Generic_HashSet_BattleBuffData_BuffData__Contains__);
}


void __fastcall BattleLogicFunction___c__DisplayClass68_0___ctor(
        BattleLogicFunction___c__DisplayClass68_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall BattleLogicFunction___c__DisplayClass68_0___BehaveLinkageBuffAsFamily_b__0(
        BattleLogicFunction___c__DisplayClass68_0_o *this,
        int32_t linkageIndividuality,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct BattleLogicFunctionProcess_FunctionTargetCheck_o *funcTarget; // x8
  struct BattleLogicFunctionProcess_FunctionUnitCheck_o *funcUnit_k__BackingField; // x8
  BattleLogicFunction_ProcListInArgs_o *procArg_k__BackingField; // x8

  funcTarget = this->fields.funcTarget;
  if ( !funcTarget
    || (funcUnit_k__BackingField = funcTarget->fields._funcUnit_k__BackingField) == 0LL
    || (procArg_k__BackingField = funcUnit_k__BackingField->fields._procArg_k__BackingField) == 0LL )
  {
    sub_1B8880C(this, linkageIndividuality);
  }
  return BattleLogicFunction_ProcListInArgs__GetFamilyBuffLinkageId(
           procArg_k__BackingField,
           linkageIndividuality,
           this->fields.targetSvtData,
           v3);
}


void __fastcall BattleLogicFunction___c__DisplayClass70_0___ctor(
        BattleLogicFunction___c__DisplayClass70_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


BattleBuffData_BuffData_o *__fastcall BattleLogicFunction___c__DisplayClass70_0___ApplySubBuffChanges_b__0(
        BattleLogicFunction___c__DisplayClass70_0_o *this,
        BattleBuffData_BuffData_o *buff,
        const MethodInfo *method)
{
  BattleServantData_o *targetSvtData; // x0

  targetSvtData = this->fields.targetSvtData;
  if ( !targetSvtData
    || (targetSvtData = (BattleServantData_o *)BattleServantData__get_BuffData(targetSvtData, 0LL)) == 0LL )
  {
    sub_1B8880C(targetSvtData, buff);
  }
  return BattleBuffData__CreateDummyBuff((BattleBuffData_o *)targetSvtData, buff, 0LL);
}


void __fastcall BattleLogicFunction___c__DisplayClass85_0___ctor(
        BattleLogicFunction___c__DisplayClass85_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall BattleLogicFunction___c__DisplayClass85_0___functionTransformServant_b__1(
        BattleLogicFunction___c__DisplayClass85_0_o *this,
        BattleActionData_BuffData_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B8880C(this, 0LL);
  return x->fields.targetId == this->fields.targetId;
}